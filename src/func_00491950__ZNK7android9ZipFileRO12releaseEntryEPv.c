// Function: _ZNK7android9ZipFileRO12releaseEntryEPv
// Address: 00491950
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZNK7android9ZipFileRO12releaseEntryEPv(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    _Z12EndIterationPv(*(undefined8 *)(param_2 + 0x48));
    free(param_2,0x50);
    return;
  }
  return;
}


