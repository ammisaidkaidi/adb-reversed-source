// Function: XXH32_reset
// Address: 004b7be0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 XXH32_reset(uint *param_1,int *param_2)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  ulong extraout_RDX;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = (uint)param_2;
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = uVar2 + 0x24234428;
  param_1[3] = uVar2 + 0x85ebca77;
  param_1[4] = uVar2;
  param_1[5] = uVar2 + 0x61c8864f;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  if (*(long *)(in_FS_OFFSET + 0x28) == lVar1) {
    return 0;
  }
  func_0x0099bd00();
  if (param_2 != (int *)0x0) {
    uVar2 = *param_1 + (int)extraout_RDX;
    *param_1 = uVar2;
    param_1[1] = param_1[1] | (uint)(0xf < uVar2 || 0xf < extraout_RDX);
    uVar3 = (ulong)param_1[10];
    if (extraout_RDX + uVar3 < 0x10) {
      func_0x0099bda0((long)param_1 + uVar3 + 0x18);
      uVar2 = param_1[10] + (int)extraout_RDX;
    }
    else {
      piVar7 = (int *)(extraout_RDX + (long)param_2);
      if (uVar3 != 0) {
        func_0x0099bda0((long)param_1 + uVar3 + 0x18);
        uVar2 = param_1[6] * -0x7a143589 + param_1[2];
        param_1[2] = (uVar2 * 0x2000 | uVar2 >> 0x13) * -0x61c8864f;
        uVar2 = param_1[7] * -0x7a143589 + param_1[3];
        param_1[3] = (uVar2 * 0x2000 | uVar2 >> 0x13) * -0x61c8864f;
        uVar2 = param_1[8] * -0x7a143589 + param_1[4];
        param_1[4] = (uVar2 * 0x2000 | uVar2 >> 0x13) * -0x61c8864f;
        uVar2 = param_1[9] * -0x7a143589 + param_1[5];
        param_1[5] = (uVar2 * 0x2000 | uVar2 >> 0x13) * -0x61c8864f;
        param_2 = (int *)((long)param_2 + (ulong)(0x10 - param_1[10]));
        param_1[10] = 0;
      }
      if (param_2 <= piVar7 + -4) {
        uVar2 = param_1[2];
        uVar5 = param_1[3];
        uVar4 = param_1[4];
        uVar6 = param_1[5];
        do {
          uVar2 = *param_2 * -0x7a143589 + uVar2;
          uVar5 = param_2[1] * -0x7a143589 + uVar5;
          uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x13) * -0x61c8864f;
          uVar4 = param_2[2] * -0x7a143589 + uVar4;
          uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x13) * -0x61c8864f;
          uVar6 = param_2[3] * -0x7a143589 + uVar6;
          uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x13) * -0x61c8864f;
          uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x13) * -0x61c8864f;
          param_2 = param_2 + 4;
        } while (param_2 <= piVar7 + -4);
        param_1[2] = uVar2;
        param_1[3] = uVar5;
        param_1[4] = uVar4;
        param_1[5] = uVar6;
      }
      if (piVar7 <= param_2) {
        return 0;
      }
      uVar2 = (int)piVar7 - (int)param_2;
      func_0x0099bda0(param_1 + 6);
    }
    param_1[10] = uVar2;
    return 0;
  }
  return 1;
}


