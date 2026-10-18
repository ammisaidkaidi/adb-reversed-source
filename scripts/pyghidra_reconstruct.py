#!/usr/bin/env python3
"""PyGhidra-based adb reconstruction: open existing project, analyze, dump inventory + decompile all functions."""
import os
import sys
import time
import gc

# Set JVM args via _JAVA_OPTIONS before importing pyghidra
os.environ["_JAVA_OPTIONS"] = "-Xmx3000m -Xss8m"
import pyghidra
from pyghidra import HeadlessPyGhidraLauncher

GHIDRA_INSTALL_DIR = "/home/z/my-project/tools/ghidra"
PROJECT_PATH = "/home/z/my-project/rea/rev/ghidra-proj/adb_proj.gpr"
OUT_DIR = "/home/z/my-project/rea/rev/ghidra-out"
SRC_DIR = os.path.join(OUT_DIR, "src")
os.makedirs(OUT_DIR, exist_ok=True)
os.makedirs(SRC_DIR, exist_ok=True)

print("=== Launching Ghidra via PyGhidra ===", flush=True)
t0 = time.time()

launcher = HeadlessPyGhidraLauncher(install_dir=GHIDRA_INSTALL_DIR)
launcher.start()
print(f"=== Ghidra launched in {time.time()-t0:.1f}s ===", flush=True)

# Import Java classes after launcher is started
from ghidra.app.decompiler import DecompInterface, DecompileOptions
from ghidra.app.plugin.core.analysis import AutoAnalysisManager
from ghidra.util.task import ConsoleTaskMonitor
from ghidra.base.project import GhidraProject
from java.io import File, PrintWriter

print(f"=== Opening project: {PROJECT_PATH} ===", flush=True)
# GhidraProject.openProject(directoryPath, projectName) — pass dir + name
project_dir = os.path.dirname(PROJECT_PATH)
project_name = os.path.basename(PROJECT_PATH).replace(".gpr", "")
project = GhidraProject.openProject(project_dir, project_name)
print(f"=== Project opened ===", flush=True)

# Try several program-lookup strategies
program = None
# Use rootFolder to find domain files
root_folder = project.getRootFolder()
files = root_folder.getFiles()
print(f"Project files: {[str(f.getName()) for f in files]}", flush=True)
if files:
    # openProgram(path, name, okRecover)
    program = project.openProgram("/", files[0].getName(), True)

if program is None:
    print("Could not load program; aborting", flush=True)
    sys.exit(1)

print(f"=== Program loaded: {program.getName()} ===", flush=True)

mon = ConsoleTaskMonitor()

# Run minimal analysis
print("=== Running minimal analysis ===", flush=True)
aam = AutoAnalysisManager.getAnalysisManager(program)
# Use analyzeAll on the whole program's address set
from ghidra.program.model.address import AddressSet
addr_set = AddressSet(program.getMemory())
aam.reAnalyzeAll(addr_set)
aam.startAnalysis(mon)
print("=== Analysis complete ===", flush=True)

# 1) Function inventory
funcs_pw = PrintWriter(File(OUT_DIR + "/functions.tsv"))
funcs_pw.println("# name\tentry_addr\tsize_bytes\tnamespace\tcalling_conv\tparam_count\treturn_type")
funcs = []
fm = program.getFunctionManager()
fiter = fm.getFunctions(True)
while fiter.hasNext():
    f = fiter.next()
    funcs.append(f)
    name = f.getName()
    addr = f.getEntryPoint().toString()
    size = f.getBody().getNumAddresses()
    parent = f.getParentNamespace().getName() if f.getParentNamespace() else ""
    cc = f.getCallingConventionName() if f.getCallingConventionName() else ""
    params = f.getParameterCount()
    ret = str(f.getReturnType())
    funcs_pw.println(f"{name}\t{addr}\t{size}\t{parent}\t{cc}\t{params}\t{ret}")
funcs_pw.close()
print(f"Total functions: {len(funcs)}", flush=True)

# 2) Strings
str_pw = PrintWriter(File(OUT_DIR + "/strings.tsv"))
str_pw.println("# addr\tsize\tvalue")
listing = program.getListing()
diter = listing.getDefinedData(True)
sc = 0
while diter.hasNext() and sc < 50000:
    d = diter.next()
    if d.getDataType() is not None:
        dtn = d.getDataType().getName().lower()
        if "string" in dtn or "char" in dtn:
            try:
                v = d.getValue()
                if v is not None:
                    s = str(v).replace("\t", " ").replace("\n", " ")
                    if len(s) > 200:
                        s = s[:200]
                    str_pw.println(f"{d.getAddress().toString()}\t{d.getLength()}\t{s}")
                    sc += 1
            except:
                pass
str_pw.close()
print(f"Wrote {sc} strings", flush=True)

# 3) External symbols
imp_pw = PrintWriter(File(OUT_DIR + "/imports.tsv"))
imp_pw.println("# name\taddr\tlibrary\ttype")
stable = program.getSymbolTable()
eiter = stable.getExternalSymbols()
ec = 0
while eiter.hasNext():
    sym = eiter.next()
    addr = sym.getAddress().toString() if sym.getAddress() else "ext"
    parent = sym.getParentNamespace().getName() if sym.getParentNamespace() else ""
    imp_pw.println(f"{sym.getName()}\t{addr}\t{parent}\t{sym.getSymbolType().toString()}")
    ec += 1
imp_pw.close()
print(f"Wrote {ec} external symbols", flush=True)

# 4) Sections
sec_pw = PrintWriter(File(OUT_DIR + "/sections.tsv"))
sec_pw.println("# name\taddr\tsize\tperm")
mem = program.getMemory()
for block in mem.getBlocks():
    perms = ("R" if block.isRead() else "-") + ("W" if block.isWrite() else "-") + ("X" if block.isExecute() else "-")
    sec_pw.println(f"{block.getName()}\t{block.getStart().toString()}\t{block.getSize()}\t{perms}")
sec_pw.close()

# 5) Decompile in batches
manifest = PrintWriter(File(OUT_DIR + "/manifest.txt"))
manifest.println("# name\taddress\tsize\tstatus\toutput_file")

decomp = DecompInterface()
opts_d = DecompileOptions()
decomp.setOptions(opts_d)
decomp.toggleCCode(True)
decomp.toggleSyntaxTree(True)
decomp.setSimplificationStyle("decompile")
decomp.openProgram(program)

ok = 0
fail = 0
BATCH = 200
for i, f in enumerate(funcs):
    name = f.getName()
    addr = f.getEntryPoint().toString()
    try:
        res = decomp.decompileFunction(f, 30, mon)
        if res is not None and res.decompileCompleted():
            c_code = res.getDecompiledFunction().getC()
            safe = "".join(c if c.isalnum() or c == "_" else "_" for c in name)[:80]
            off = f.getEntryPoint().getOffset()
            fname = f"{SRC_DIR}/func_{off:08x}_{safe}.c"
            pw = PrintWriter(File(fname))
            pw.println(f"// Function: {name}")
            pw.println(f"// Address: {addr}")
            pw.println(f"// Size: {f.getBody().getNumAddresses()} bytes")
            pw.println("// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)")
            pw.println()
            pw.println(c_code)
            pw.close()
            manifest.println(f"{name}\t{addr}\t{f.getBody().getNumAddresses()}\tok\t{fname}")
            ok += 1
        else:
            fail += 1
            manifest.println(f"{name}\t{addr}\t{f.getBody().getNumAddresses()}\tdecompile_failed\t")
    except Exception as e:
        fail += 1
        msg = str(e)[:60]
        manifest.println(f"{name}\t{addr}\t{f.getBody().getNumAddresses()}\texception:{msg}\t")

    if (i + 1) % BATCH == 0:
        print(f"Batch: {i+1}/{len(funcs)} ok={ok} fail={fail}", flush=True)
        try:
            decomp.dispose()
            gc.collect()
            time.sleep(0.5)
            decomp = DecompInterface()
            decomp.setOptions(opts_d)
            decomp.toggleCCode(True)
            decomp.toggleSyntaxTree(True)
            decomp.setSimplificationStyle("decompile")
            decomp.openProgram(program)
        except Exception as e:
            print(f"batch restart error: {e}", flush=True)

manifest.close()
decomp.dispose()
print(f"DONE: decompiled {ok}/{len(funcs)} functions, {fail} failed. Output in {OUT_DIR}", flush=True)
project.close()
print(f"=== Total time: {time.time()-t0:.1f}s ===", flush=True)
