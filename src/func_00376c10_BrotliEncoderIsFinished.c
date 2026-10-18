// Function: BrotliEncoderIsFinished
// Address: 00376c10
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


bool BrotliEncoderIsFinished(long param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if (*(int *)(param_1 + 0x1b34) == 2) {
    bVar1 = *(long *)(param_1 + 0x1b10) == 0;
  }
  return bVar1;
}


