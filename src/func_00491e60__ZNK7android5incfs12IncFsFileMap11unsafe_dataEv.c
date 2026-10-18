// Function: _ZNK7android5incfs12IncFsFileMap11unsafe_dataEv
// Address: 00491e60
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long _ZNK7android5incfs12IncFsFileMap11unsafe_dataEv(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(char *)(param_1 + 0x30) != '\0') {
    lVar1 = *(long *)(param_1 + 0x18) + *(long *)(param_1 + 0x28);
  }
  return lVar1;
}


