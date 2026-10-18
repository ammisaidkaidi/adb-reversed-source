// Function: XXH32_update
// Address: 004b7c50
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 XXH32_update(uint *param_1,int *param_2,ulong param_3)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  
  if (param_2 == (int *)0x0) {
    return 1;
  }
  uVar1 = *param_1 + (int)param_3;
  *param_1 = uVar1;
  param_1[1] = param_1[1] | (uint)(0xf < uVar1 || 0xf < param_3);
  uVar2 = (ulong)param_1[10];
  if (param_3 + uVar2 < 0x10) {
    func_0x0099bda0((long)param_1 + uVar2 + 0x18,param_2,param_3);
    uVar1 = param_1[10] + (int)param_3;
  }
  else {
    piVar6 = (int *)(param_3 + (long)param_2);
    if (uVar2 != 0) {
      func_0x0099bda0((long)param_1 + uVar2 + 0x18,param_2,0x10 - param_1[10]);
      uVar1 = param_1[6] * -0x7a143589 + param_1[2];
      param_1[2] = (uVar1 * 0x2000 | uVar1 >> 0x13) * -0x61c8864f;
      uVar1 = param_1[7] * -0x7a143589 + param_1[3];
      param_1[3] = (uVar1 * 0x2000 | uVar1 >> 0x13) * -0x61c8864f;
      uVar1 = param_1[8] * -0x7a143589 + param_1[4];
      param_1[4] = (uVar1 * 0x2000 | uVar1 >> 0x13) * -0x61c8864f;
      uVar1 = param_1[9] * -0x7a143589 + param_1[5];
      param_1[5] = (uVar1 * 0x2000 | uVar1 >> 0x13) * -0x61c8864f;
      param_2 = (int *)((long)param_2 + (ulong)(0x10 - param_1[10]));
      param_1[10] = 0;
    }
    if (param_2 <= piVar6 + -4) {
      uVar1 = param_1[2];
      uVar4 = param_1[3];
      uVar3 = param_1[4];
      uVar5 = param_1[5];
      do {
        uVar1 = *param_2 * -0x7a143589 + uVar1;
        uVar4 = param_2[1] * -0x7a143589 + uVar4;
        uVar1 = (uVar1 * 0x2000 | uVar1 >> 0x13) * -0x61c8864f;
        uVar3 = param_2[2] * -0x7a143589 + uVar3;
        uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x13) * -0x61c8864f;
        uVar5 = param_2[3] * -0x7a143589 + uVar5;
        uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x13) * -0x61c8864f;
        uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x13) * -0x61c8864f;
        param_2 = param_2 + 4;
      } while (param_2 <= piVar6 + -4);
      param_1[2] = uVar1;
      param_1[3] = uVar4;
      param_1[4] = uVar3;
      param_1[5] = uVar5;
    }
    if (piVar6 <= param_2) {
      return 0;
    }
    func_0x0099bda0(param_1 + 6,param_2,(long)piVar6 - (long)param_2);
    uVar1 = (uint)((long)piVar6 - (long)param_2);
  }
  param_1[10] = uVar1;
  return 0;
}


