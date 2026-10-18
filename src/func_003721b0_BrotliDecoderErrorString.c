// Function: BrotliDecoderErrorString
// Address: 003721b0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined * BrotliDecoderErrorString(int param_1)

{
  if (param_1 + 0x1fU < 0x23) {
    return &UNK_001917b0 + *(int *)(&UNK_001917b0 + (ulong)(param_1 + 0x1fU) * 4);
  }
  return &UNK_0015951a;
}


