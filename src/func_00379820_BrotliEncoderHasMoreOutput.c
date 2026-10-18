// Function: BrotliEncoderHasMoreOutput
// Address: 00379820
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


bool BrotliEncoderHasMoreOutput(long param_1)

{
  return *(long *)(param_1 + 0x1b10) != 0;
}


