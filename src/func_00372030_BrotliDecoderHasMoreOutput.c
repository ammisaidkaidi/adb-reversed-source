// Function: BrotliDecoderHasMoreOutput
// Address: 00372030
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


bool BrotliDecoderHasMoreOutput(long param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if ((-1 < *(int *)(param_1 + 0x80)) && (*(long *)(param_1 + 0x88) != 0)) {
    bVar1 = (long)*(int *)(param_1 + 100) * *(long *)(param_1 + 0x1a8) +
            ((long)*(int *)(param_1 + 0x58) - *(long *)(param_1 + 0x1b0)) != 0;
  }
  return bVar1;
}


