// Function: XXH64_reset
// Address: 004b8040
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 XXH64_reset(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long extraout_RDX;
  long lVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long in_FS_OFFSET;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  *param_1 = 0;
  param_1[1] = (long)param_2 + 0x60ea27eeadc0b5d6;
  param_1[2] = (long)param_2 + -0x3d4d51c2d82b14b1;
  param_1[3] = (long)param_2;
  param_1[4] = (long)param_2 + 0x61c8864e7a143579;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)((long)param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)((long)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)((long)param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)((long)param_1 + 0x44) = 0;
  param_1[9] = 0;
  if (*(long *)(in_FS_OFFSET + 0x28) == lVar2) {
    return 0;
  }
  func_0x0099bd00();
  if (param_2 != (long *)0x0) {
    *param_1 = *param_1 + extraout_RDX;
    uVar1 = (ulong)*(uint *)(param_1 + 9);
    if (extraout_RDX + uVar1 < 0x20) {
      func_0x0099bda0((long)param_1 + uVar1 + 0x28);
      iVar4 = (int)extraout_RDX + (int)param_1[9];
    }
    else {
      plVar5 = (long *)(extraout_RDX + (long)param_2);
      if (uVar1 != 0) {
        func_0x0099bda0((long)param_1 + uVar1 + 0x28);
        uVar1 = param_1[5] * -0x3d4d51c2d82b14b1 + param_1[1];
        param_1[1] = (uVar1 * 0x80000000 | uVar1 >> 0x21) * -0x61c8864e7a143579;
        uVar1 = param_1[6] * -0x3d4d51c2d82b14b1 + param_1[2];
        param_1[2] = (uVar1 * 0x80000000 | uVar1 >> 0x21) * -0x61c8864e7a143579;
        uVar1 = param_1[7] * -0x3d4d51c2d82b14b1 + param_1[3];
        param_1[3] = (uVar1 * 0x80000000 | uVar1 >> 0x21) * -0x61c8864e7a143579;
        uVar1 = param_1[8] * -0x3d4d51c2d82b14b1 + param_1[4];
        param_1[4] = (uVar1 * 0x80000000 | uVar1 >> 0x21) * -0x61c8864e7a143579;
        param_2 = (long *)((long)param_2 + (ulong)(0x20 - (int)param_1[9]));
        *(undefined4 *)(param_1 + 9) = 0;
      }
      if (param_2 + 4 <= plVar5) {
        lVar2 = param_1[1];
        lVar3 = param_1[2];
        lVar7 = param_1[3];
        lVar6 = param_1[4];
        do {
          uVar1 = *param_2 * -0x3d4d51c2d82b14b1 + lVar2;
          lVar2 = (uVar1 * 0x80000000 | uVar1 >> 0x21) * -0x61c8864e7a143579;
          uVar1 = param_2[1] * -0x3d4d51c2d82b14b1 + lVar3;
          uVar8 = param_2[2] * -0x3d4d51c2d82b14b1 + lVar7;
          lVar3 = (uVar1 * 0x80000000 | uVar1 >> 0x21) * -0x61c8864e7a143579;
          lVar7 = (uVar8 * 0x80000000 | uVar8 >> 0x21) * -0x61c8864e7a143579;
          uVar1 = param_2[3] * -0x3d4d51c2d82b14b1 + lVar6;
          lVar6 = (uVar1 * 0x80000000 | uVar1 >> 0x21) * -0x61c8864e7a143579;
          param_2 = param_2 + 4;
        } while (param_2 <= plVar5 + -4);
        param_1[1] = lVar2;
        param_1[2] = lVar3;
        param_1[3] = lVar7;
        param_1[4] = lVar6;
      }
      if (plVar5 <= param_2) {
        return 0;
      }
      iVar4 = (int)plVar5 - (int)param_2;
      func_0x0099bda0(param_1 + 5);
    }
    *(int *)(param_1 + 9) = iVar4;
    return 0;
  }
  return 1;
}


