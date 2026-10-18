// Function: BrotliEncoderMaxCompressedSize
// Address: 00375630
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong BrotliEncoderMaxCompressedSize(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_1 != 0) {
    uVar2 = param_1 + (param_1 >> 0xe) * 4 + 6;
    uVar1 = 0;
    if (param_1 <= uVar2) {
      uVar1 = uVar2;
    }
    return uVar1;
  }
  return 2;
}


