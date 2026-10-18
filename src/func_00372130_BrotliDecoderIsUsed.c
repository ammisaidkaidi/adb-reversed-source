// Function: BrotliDecoderIsUsed
// Address: 00372130
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


bool BrotliDecoderIsUsed(int *param_1)

{
  if (*param_1 != 0) {
    return true;
  }
  return *(long *)(param_1 + 4) != 0;
}


