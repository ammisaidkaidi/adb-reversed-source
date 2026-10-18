// Function: BrotliDecoderSetParameter
// Address: 0036cc60
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 BrotliDecoderSetParameter(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (*param_1 != 0) {
    return 0;
  }
  if (param_2 == 1) {
    uVar1 = (uint)(param_3 != 0) << 5;
    uVar2 = param_1[0xc1] & 0xffffffdf;
  }
  else {
    if (param_2 != 0) {
      return 0;
    }
    uVar1 = (uint)(param_3 == 0) << 4;
    uVar2 = param_1[0xc1] & 0xffffffef;
  }
  param_1[0xc1] = uVar2 | uVar1;
  return 1;
}


