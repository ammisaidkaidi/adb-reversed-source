// Function: XXH32
// Address: 004b7ae0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


uint XXH32(byte *param_1,ulong param_2,uint param_3)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  if (param_2 < 0x10) {
    iVar4 = param_3 + 0x165667b1;
  }
  else {
    pbVar1 = param_1 + (param_2 - 0xf);
    iVar4 = param_3 + 0x24234428;
    uVar8 = param_3 + 0x85ebca77;
    uVar3 = param_3 + 0x61c8864f;
    do {
      uVar5 = *(int *)param_1 * -0x7a143589 + iVar4;
      uVar6 = uVar5 * 0x2000 | uVar5 >> 0x13;
      uVar8 = *(int *)(param_1 + 4) * -0x7a143589 + uVar8;
      uVar9 = uVar8 * 0x2000 | uVar8 >> 0x13;
      iVar4 = uVar6 * -0x61c8864f;
      param_3 = *(int *)(param_1 + 8) * -0x7a143589 + param_3;
      uVar7 = param_3 * 0x2000 | param_3 >> 0x13;
      uVar8 = uVar9 * -0x61c8864f;
      uVar3 = *(int *)(param_1 + 0xc) * -0x7a143589 + uVar3;
      uVar5 = uVar3 * 0x2000 | uVar3 >> 0x13;
      param_3 = uVar7 * -0x61c8864f;
      uVar3 = uVar5 * -0x61c8864f;
      param_1 = param_1 + 0x10;
    } while (param_1 < pbVar1);
    iVar4 = (uVar5 * -0x193c0000 | uVar3 >> 0xe) + (uVar7 * 0x779b1000 | param_3 >> 0x14) +
            (uVar9 * 0x1bbcd880 | uVar8 >> 0x19) + (uVar6 * 0x3c6ef362 | (uint)(iVar4 < 0));
  }
  uVar8 = iVar4 + (uint)param_2;
  switch((uint)param_2 & 0xf) {
  case 0xc:
    uVar8 = *(int *)param_1 * -0x3d4d51c3 + uVar8;
    param_1 = param_1 + 4;
    uVar8 = (uVar8 * 0x20000 | uVar8 >> 0xf) * 0x27d4eb2f;
  case 8:
    uVar8 = *(int *)param_1 * -0x3d4d51c3 + uVar8;
    param_1 = param_1 + 4;
    uVar8 = (uVar8 * 0x20000 | uVar8 >> 0xf) * 0x27d4eb2f;
  case 4:
    uVar8 = *(int *)param_1 * -0x3d4d51c3 + uVar8;
    uVar8 = (uVar8 * 0x20000 | uVar8 >> 0xf) * 0x27d4eb2f;
    break;
  case 0xd:
    uVar8 = *(int *)param_1 * -0x3d4d51c3 + uVar8;
    param_1 = param_1 + 4;
    uVar8 = (uVar8 * 0x20000 | uVar8 >> 0xf) * 0x27d4eb2f;
  case 9:
    uVar8 = *(int *)param_1 * -0x3d4d51c3 + uVar8;
    param_1 = param_1 + 4;
    uVar8 = (uVar8 * 0x20000 | uVar8 >> 0xf) * 0x27d4eb2f;
  case 5:
    uVar8 = *(int *)param_1 * -0x3d4d51c3 + uVar8;
    iVar4 = (uVar8 * 0x20000 | uVar8 >> 0xf) * 0x27d4eb2f;
    bVar2 = param_1[4];
    goto code_r0x004b8512;
  case 0xe:
    uVar8 = *(int *)param_1 * -0x3d4d51c3 + uVar8;
    param_1 = param_1 + 4;
    uVar8 = (uVar8 * 0x20000 | uVar8 >> 0xf) * 0x27d4eb2f;
  case 10:
    uVar8 = *(int *)param_1 * -0x3d4d51c3 + uVar8;
    param_1 = param_1 + 4;
    uVar8 = (uVar8 * 0x20000 | uVar8 >> 0xf) * 0x27d4eb2f;
  case 6:
    uVar8 = *(int *)param_1 * -0x3d4d51c3 + uVar8;
    uVar8 = (uint)param_1[4] * 0x165667b1 + (uVar8 * 0x20000 | uVar8 >> 0xf) * 0x27d4eb2f;
    iVar4 = (uVar8 * 0x800 | uVar8 >> 0x15) * -0x61c8864f;
    bVar2 = param_1[5];
code_r0x004b8512:
    uVar8 = (uint)bVar2 * 0x165667b1 + iVar4;
    uVar8 = (uVar8 * 0x800 | uVar8 >> 0x15) * -0x61c8864f;
    break;
  case 0xf:
    uVar8 = *(int *)param_1 * -0x3d4d51c3 + uVar8;
    param_1 = param_1 + 4;
    uVar8 = (uVar8 * 0x20000 | uVar8 >> 0xf) * 0x27d4eb2f;
  case 0xb:
    uVar8 = *(int *)param_1 * -0x3d4d51c3 + uVar8;
    param_1 = param_1 + 4;
    uVar8 = (uVar8 * 0x20000 | uVar8 >> 0xf) * 0x27d4eb2f;
  case 7:
    uVar8 = *(int *)param_1 * -0x3d4d51c3 + uVar8;
    param_1 = param_1 + 4;
    uVar8 = (uVar8 * 0x20000 | uVar8 >> 0xf) * 0x27d4eb2f;
  case 3:
    bVar2 = *param_1;
    param_1 = param_1 + 1;
    uVar8 = (uint)bVar2 * 0x165667b1 + uVar8;
    uVar8 = (uVar8 * 0x800 | uVar8 >> 0x15) * -0x61c8864f;
  case 2:
    bVar2 = *param_1;
    param_1 = param_1 + 1;
    uVar8 = (uint)bVar2 * 0x165667b1 + uVar8;
    uVar8 = (uVar8 * 0x800 | uVar8 >> 0x15) * -0x61c8864f;
  case 1:
    uVar8 = (uint)*param_1 * 0x165667b1 + uVar8;
    uVar8 = (uVar8 * 0x800 | uVar8 >> 0x15) * -0x61c8864f;
  }
  uVar8 = (uVar8 >> 0xf ^ uVar8) * -0x7a143589;
  uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51c3;
  return uVar8 >> 0x10 ^ uVar8;
}


