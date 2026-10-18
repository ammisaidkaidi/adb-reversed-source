// Function: BrotliDecoderIsFinished
// Address: 00372150
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


bool BrotliDecoderIsFinished(int *param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if (((*param_1 == 0x1a) && (bVar1 = true, -1 < param_1[0x20])) && (*(long *)(param_1 + 0x22) != 0)
     ) {
    bVar1 = (long)param_1[0x19] * *(long *)(param_1 + 0x6a) +
            ((long)param_1[0x16] - *(long *)(param_1 + 0x6c)) == 0;
  }
  return bVar1;
}


