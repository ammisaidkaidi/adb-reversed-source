// Function: _ZN10ApkArchive12FindCDRecordEPKc
// Address: 003c7d10
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong * _ZN10ApkArchive12FindCDRecordEPKc(ulong *param_1,undefined8 param_2,long param_3)

{
  param_1[2] = 0;
  *param_1 = (ulong)*(uint *)(param_3 + 0x10);
  param_1[1] = (ulong)*(uint *)(param_3 + 0xc);
  *(undefined1 *)(param_1 + 2) = 1;
  return param_1;
}


