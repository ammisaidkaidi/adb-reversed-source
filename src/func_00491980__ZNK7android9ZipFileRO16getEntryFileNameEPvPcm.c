// Function: _ZNK7android9ZipFileRO16getEntryFileNameEPvPcm
// Address: 00491980
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _ZNK7android9ZipFileRO16getEntryFileNameEPvPcm
                (undefined8 param_1,long param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  
  uVar1 = (ulong)(*(int *)(param_2 + 0x40) + 1U & 0xffff);
  if (param_4 < uVar1) {
    __android_log_print(5,&UNK_001699cb,&UNK_001617aa,uVar1);
  }
  else {
    func_0x0099bda0(param_3,*(undefined8 *)(param_2 + 0x38),uVar1 - 1);
    *(undefined1 *)(param_3 + -1 + uVar1) = 0;
    uVar1 = 0;
  }
  return uVar1;
}


