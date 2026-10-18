// Function: LZ4_favorDecompressionSpeed
// Address: 004ad360
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void LZ4_favorDecompressionSpeed(long param_1,int param_2)

{
  *(bool *)(param_1 + 0x40026) = param_2 != 0;
  return;
}


