// Function: _ZN7android9ZipFileRO12endIterationEPv
// Address: 00491920
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN7android9ZipFileRO12endIterationEPv(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    _Z12EndIterationPv(*(undefined8 *)(param_2 + 0x48));
    free(param_2,0x50);
    return;
  }
  return;
}


