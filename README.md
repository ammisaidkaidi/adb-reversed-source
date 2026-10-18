# adb — Reverse-Engineered Source Code

This archive contains the reconstructed source code of the Android Debug Bridge
(`adb`) binary, produced by the **REA (Reverse Engineer Anything)** skill workflow.

## Target binaries

| File | Format | Architecture | Size | SHA-256 |
|------|--------|--------------|------|---------|
| `adb`     | ELF 64-bit LSB PIE | x86-64 | 10,642,368 B | `a902be8f45c6c62e76c9efaf6947a0fa747c9cabd89a2ac8e0d16ecb30b3ed01` |
| `adb.exe` | PE32 console        | i386   |  8,273,560 B | `b4a6b455702684652cccf7b46258b29e653538904359a58fd4931cf3ef286b3f` |

Both binaries are from **Android platform-tools r37.0.1-15733141** (official
Google release). They were downloaded directly from
`https://dl.google.com/android/repository/platform-tools-latest-{linux,windows}.zip`.

## Reconstructed by

- **REA skill** v6.5.0 (npm: `rea-agents`, github: `morluto/rea`)
- **Ghidra** 12.1.4 (headless analyzer + decompiler, PyGhidra bridge)
- **OpenJDK** 21.0.5 (Temurin)
- **pwntools** 4.15.0 + **pyelftools** 0.33 + **Unicorn** 2.1.2 (for ELF layout)
- **GNU objdump** 2.44 (for full disassembly)

## Directory layout

```
adb-reversed-source/
├── README.md                  # this file
├── docs/
│   ├── functions.tsv          # 11,003 functions: name, addr, size, calling conv, return type
│   ├── imports.tsv            # 325 external symbols (libc, libpthread, libdl, etc.)
│   ├── strings.tsv            # 14,819 embedded strings (cap 50k)
│   ├── sections.tsv           # Ghidra memory blocks (name, addr, size, R/W/X)
│   ├── manifest.txt           # decompilation manifest (per-function status + output path)
│   ├── adb-full-disassembly.asm        # complete objdump -d of adb (110 MB)
│   └── adb-exe-full-disassembly.asm    # complete objdump -d of adb.exe (100 MB)
├── src/                       # Decompiled C pseudocode per function
│   ├── func_<offset>_<name>.c
│   └── ... (2,184 functions decompiled; remaining are covered by docs/adb-full-disassembly.asm)
├── evidence/                  # REA Evidence records (JSON)
│   ├── inspect-adb-client.json        # ev: client v37.0.1, no server contact
│   ├── inspect-binary-layout.json     # ev: 42 sections, 12 segments, 14,890 symbols, 13,935 relocs, Full RELRO
│   ├── inspect-artifact.json          # ev: 1-node artifact graph
│   ├── inspect-pe-resources.json      # ev: 0 PE resources (stripped)
│   ├── inspect-go-binary-elf.json     # ev: no Go build-info
│   ├── inspect-go-binary-pe.json      # ev: no Go build-info
│   ├── inspect-rust-binary.json       # ev: no .dep-v0; inferred rustc hash from /rustc/<40-hex>/ string
│   ├── adb-exe-headers.txt            # PE file headers via objdump
│   ├── adb-exe-sections.txt           # 8 PE sections: .text, .rdata, .buildid, .data, .eh_fram, .gcc_exc, .tls, .reloc
│   └── adb-exe-symbols.txt            # no PE symbol table (stripped)
├── scripts/                   # REA workflow scripts used to produce this archive
└── tools/                     # Tool installation pointers
```

## Key findings

### Toolchain
- Linux build: **glibc + GCC** (Linux x86-64 PIE)
- Windows build: **MinGW GCC** (`.eh_fram` / `.gcc_exc` sections present, no MSVCRT signature)

### Statically embedded libraries
The Linux `adb` binary has 9,382 defined global function exports that include:
- **BoringSSL** (Google's OpenSSL fork): `AES_*`, `ASN1_*`, `BIO_*`, `EVP_*`, `RSA_*`, `X509_*`, `ECDSA_*`, etc.
- libc functions linked statically into the binary

### Dynamic dependencies (Linux)
```
libdl.so.2
libpthread.so.0
libm.so.6
librt.so.1
libgcc_s.so.1
libc.so.6
```
No `libcrypto.so`, `libssl.so`, or `libusb.so` — all statically linked.

### Security mitigations (Linux, inferred — not executed)
- `position_independent: true`  (PIE)
- `nx_indicator: true`          (W^X / NX stack)
- `executable_stack_indicator: false` (no exec stack)
- `stack_canary_indicator: true` (stack protector)
- `relro: Full`                 (GOT read-only after relocation)

### Windows PE (adb.exe)
- 8 sections, **no resource directory** (no version info, no manifest, no icon)
- **No symbol table** (stripped)
- Image base `0x00400000`, entry point `0x00401490`
- Built with MinGW-GCC, not MSVC

### Unknowns (explicit gaps)
1. **Only 2,184 of 11,003 functions were decompiled to C** — the host ran out
   of memory (4 GB total RAM, no swap) after decompiling ~20% of functions.
   The remaining ~8,800 functions are present as raw disassembly in
   `docs/adb-full-disassembly.asm`. Re-running Ghidra with more memory would
   recover them.
2. **No function names for most internal functions** — the binary is stripped
   (no symtab), only dynsym is present. Ghidra assigned names like
   `FUN_00xxxxxx` to anonymous functions.
3. **Runtime behavior not observed** — static analysis only. The adb server
   lifecycle, device protocol, USB transport are not reflected in this
   reconstruction.

## How to re-execute this workflow

```bash
# Environment setup
export JAVA_HOME=/home/z/my-project/tools/jdk21
export PATH=$JAVA_HOME/bin:$PATH
export GHIDRA_INSTALL_DIR=/home/z/my-project/tools/ghidra
export REA_ADB_PATH=/home/z/my-project/rea/rev/adb
export REA_PWNTOOLS_PYTHON=/home/z/my-project/rea/rev/rea-python.sh

# Re-run REA evidence collection
rea inspect-adb-client
rea inspect-binary-layout /home/z/my-project/rea/rev/adb
rea inspect-pe-resources /home/z/my-project/rea/rev/adb.exe

# Re-run Ghidra decompilation (continue from where it stopped, or restart with more memory)
/home/z/.config/ghidra/ghidra_12.1.4_PUBLIC/venv/bin/python3.13 \
  /home/z/my-project/scripts/pyghidra_reconstruct.py
```

## License & attribution

- Original `adb` source: Android Open Source Project, Apache 2.0 license.
  See https://source.android.com/setup/build for upstream source.
- This reconstruction is a decompiled representation, not the original source.
  It is intended for educational and security research purposes.
- Ghidra: Apache License 2.0 (NationalSecurityAgency/ghidra).
- REA: MIT license (morluto/rea).
- BoringSSL: OpenSSL-style license (BoringSSL is Google's OpenSSL fork).

## Reproducibility

The SHA-256 of the analyzed binaries are pinned above. To verify:
```bash
sha256sum /home/z/my-project/rea/rev/adb /home/z/my-project/rea/rev/adb.exe
```

## Large file note

The full disassembly files (`adb-full-disassembly.asm`, 110 MB; and
`adb-exe-full-disassembly.asm`, 100 MB) exceed GitHub's 100 MB file size limit.
They have been split into 80 MB chunks named `*.part00.part`, `*.part01.part`,
etc. To rebuild the originals:

```bash
cd docs && bash rebuild-disassembly.sh
```

The split files can be reassembled in any order with `cat *.part > original.asm`
because they were created with `split -b 80M` (byte-level chunks, no headers).
