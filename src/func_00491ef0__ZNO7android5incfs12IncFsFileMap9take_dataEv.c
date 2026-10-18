// Function: _ZNO7android5incfs12IncFsFileMap9take_dataEv
// Address: 00491ef0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined1 * _ZNO7android5incfs12IncFsFileMap9take_dataEv(undefined1 *param_1,long param_2)

{
  long lVar1;
  
  if (*(char *)(param_2 + 0x30) != '\0') {
    lVar1 = *(long *)(param_2 + 0x18);
    *param_1 = 0;
    param_1[0x18] = 0;
    if (lVar1 != 0) {
      _ZN7android4base10MappedFileC2EOS1_(param_1);
      param_1[0x18] = 1;
    }
    return param_1;
  }
  *param_1 = 0;
  param_1[0x18] = 0;
  return param_1;
}


