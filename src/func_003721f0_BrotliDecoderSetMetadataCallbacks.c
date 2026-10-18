// Function: BrotliDecoderSetMetadataCallbacks
// Address: 003721f0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void BrotliDecoderSetMetadataCallbacks
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined8 *)(param_1 + 0x2d0) = param_2;
  *(undefined8 *)(param_1 + 0x2d8) = param_3;
  *(undefined8 *)(param_1 + 0x2e0) = param_4;
  return;
}


