// Function: _ZNK7android5incfs12IncFsFileMap9file_nameEv
// Address: 00491eb0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long _ZNK7android5incfs12IncFsFileMap9file_nameEv(long param_1)

{
  if ((*(byte *)(param_1 + 0x38) & 1) != 0) {
    return *(long *)(param_1 + 0x48);
  }
  return param_1 + 0x39;
}


