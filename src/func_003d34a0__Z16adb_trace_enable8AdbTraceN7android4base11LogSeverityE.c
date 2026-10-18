// Function: _Z16adb_trace_enable8AdbTraceN7android4base11LogSeverityE
// Address: 003d34a0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Removing unreachable block (ram,0x007dc67c) */

undefined4
_Z16adb_trace_enable8AdbTraceN7android4base11LogSeverityE(uint param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  adb_trace_mask = adb_trace_mask | 1 << ((byte)param_1 & 0x1f);
  *(undefined4 *)(adb_trace_severity + (ulong)param_1 * 4) = param_2;
  iVar1 = __android_log_set_minimum_priority(2);
  uVar2 = 6;
  if (iVar1 - 1U < 6) {
    uVar2 = *(undefined4 *)(&UNK_00223110 + (ulong)(iVar1 - 1U) * 4);
  }
  return uVar2;
}


