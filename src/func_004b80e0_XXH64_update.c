// Function: XXH64_update
// Address: 004b80e0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 XXH64_update(long *param_1,long *param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  if (param_2 == (long *)0x0) {
    return 1;
  }
  *param_1 = *param_1 + param_3;
  uVar1 = (ulong)*(uint *)(param_1 + 9);
  if (param_3 + uVar1 < 0x20) {
    func_0x0099bda0((long)param_1 + uVar1 + 0x28,param_2,param_3);
    uVar1 = (ulong)(uint)((int)param_3 + (int)param_1[9]);
  }
  else {
    plVar4 = (long *)(param_3 + (long)param_2);
    if (uVar1 != 0) {
      func_0x0099bda0((long)param_1 + uVar1 + 0x28,param_2,0x20 - *(uint *)(param_1 + 9));
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
    if (param_2 + 4 <= plVar4) {
      lVar2 = param_1[1];
      lVar3 = param_1[2];
      lVar6 = param_1[3];
      lVar5 = param_1[4];
      do {
        uVar1 = *param_2 * -0x3d4d51c2d82b14b1 + lVar2;
        lVar2 = (uVar1 * 0x80000000 | uVar1 >> 0x21) * -0x61c8864e7a143579;
        uVar1 = param_2[1] * -0x3d4d51c2d82b14b1 + lVar3;
        uVar7 = param_2[2] * -0x3d4d51c2d82b14b1 + lVar6;
        lVar3 = (uVar1 * 0x80000000 | uVar1 >> 0x21) * -0x61c8864e7a143579;
        lVar6 = (uVar7 * 0x80000000 | uVar7 >> 0x21) * -0x61c8864e7a143579;
        uVar1 = param_2[3] * -0x3d4d51c2d82b14b1 + lVar5;
        lVar5 = (uVar1 * 0x80000000 | uVar1 >> 0x21) * -0x61c8864e7a143579;
        param_2 = param_2 + 4;
      } while (param_2 <= plVar4 + -4);
      param_1[1] = lVar2;
      param_1[2] = lVar3;
      param_1[3] = lVar6;
      param_1[4] = lVar5;
    }
    if (plVar4 <= param_2) {
      return 0;
    }
    uVar1 = (long)plVar4 - (long)param_2;
    func_0x0099bda0(param_1 + 5,param_2,uVar1);
  }
  *(int *)(param_1 + 9) = (int)uVar1;
  return 0;
}


