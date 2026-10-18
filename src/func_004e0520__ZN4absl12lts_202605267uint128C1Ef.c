// Function: _ZN4absl12lts_202605267uint128C1Ef
// Address: 004e0520
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN4absl12lts_202605267uint128C1Ef(float param_1,ulong *param_2)

{
  ulong uVar1;
  float fVar2;
  
  fVar2 = (float)func_0x0099c790(0x3f800000,0x40);
  if (fVar2 <= param_1) {
    fVar2 = (float)func_0x0099c790(0xffffffc0);
    uVar1 = (long)(fVar2 - 9.223372e+18) & (long)fVar2 >> 0x3f | (long)fVar2;
    fVar2 = (float)func_0x0099c790((float)uVar1,0x40);
    param_1 = param_1 - fVar2;
  }
  else {
    uVar1 = 0;
  }
  *param_2 = (long)(param_1 - 9.223372e+18) & (long)param_1 >> 0x3f | (long)param_1;
  param_2[1] = uVar1;
  return;
}


