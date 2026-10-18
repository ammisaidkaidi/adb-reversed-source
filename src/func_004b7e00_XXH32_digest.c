// Function: XXH32_digest
// Address: 004b7e00
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


uint XXH32_digest(int *param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  
  if (param_1[1] == 0) {
    iVar3 = param_1[4] + 0x165667b1;
  }
  else {
    iVar3 = (param_1[5] << 0x12 | (uint)param_1[5] >> 0xe) +
            (param_1[4] << 0xc | (uint)param_1[4] >> 0x14) +
            (param_1[3] << 7 | (uint)param_1[3] >> 0x19) +
            (param_1[2] << 1 | (uint)(param_1[2] < 0));
  }
  uVar4 = iVar3 + *param_1;
  pbVar2 = (byte *)(param_1 + 6);
  switch(param_1[10] & 0xf) {
  case 0xc:
    uVar4 = *(int *)pbVar2 * -0x3d4d51c3 + uVar4;
    pbVar2 = (byte *)(param_1 + 7);
    uVar4 = (uVar4 * 0x20000 | uVar4 >> 0xf) * 0x27d4eb2f;
  case 8:
    uVar4 = *(int *)pbVar2 * -0x3d4d51c3 + uVar4;
    pbVar2 = pbVar2 + 4;
    uVar4 = (uVar4 * 0x20000 | uVar4 >> 0xf) * 0x27d4eb2f;
  case 4:
    uVar4 = *(int *)pbVar2 * -0x3d4d51c3 + uVar4;
    uVar4 = (uVar4 * 0x20000 | uVar4 >> 0xf) * 0x27d4eb2f;
    break;
  case 0xd:
    uVar4 = *(int *)pbVar2 * -0x3d4d51c3 + uVar4;
    pbVar2 = (byte *)(param_1 + 7);
    uVar4 = (uVar4 * 0x20000 | uVar4 >> 0xf) * 0x27d4eb2f;
  case 9:
    uVar4 = *(int *)pbVar2 * -0x3d4d51c3 + uVar4;
    pbVar2 = pbVar2 + 4;
    uVar4 = (uVar4 * 0x20000 | uVar4 >> 0xf) * 0x27d4eb2f;
  case 5:
    uVar4 = *(int *)pbVar2 * -0x3d4d51c3 + uVar4;
    iVar3 = (uVar4 * 0x20000 | uVar4 >> 0xf) * 0x27d4eb2f;
    bVar1 = pbVar2[4];
    goto code_r0x004b8512;
  case 0xe:
    uVar4 = *(int *)pbVar2 * -0x3d4d51c3 + uVar4;
    pbVar2 = (byte *)(param_1 + 7);
    uVar4 = (uVar4 * 0x20000 | uVar4 >> 0xf) * 0x27d4eb2f;
  case 10:
    uVar4 = *(int *)pbVar2 * -0x3d4d51c3 + uVar4;
    pbVar2 = pbVar2 + 4;
    uVar4 = (uVar4 * 0x20000 | uVar4 >> 0xf) * 0x27d4eb2f;
  case 6:
    uVar4 = *(int *)pbVar2 * -0x3d4d51c3 + uVar4;
    uVar4 = (uint)pbVar2[4] * 0x165667b1 + (uVar4 * 0x20000 | uVar4 >> 0xf) * 0x27d4eb2f;
    iVar3 = (uVar4 * 0x800 | uVar4 >> 0x15) * -0x61c8864f;
    bVar1 = pbVar2[5];
code_r0x004b8512:
    uVar4 = (uint)bVar1 * 0x165667b1 + iVar3;
    uVar4 = (uVar4 * 0x800 | uVar4 >> 0x15) * -0x61c8864f;
    break;
  case 0xf:
    uVar4 = *(int *)pbVar2 * -0x3d4d51c3 + uVar4;
    pbVar2 = (byte *)(param_1 + 7);
    uVar4 = (uVar4 * 0x20000 | uVar4 >> 0xf) * 0x27d4eb2f;
  case 0xb:
    uVar4 = *(int *)pbVar2 * -0x3d4d51c3 + uVar4;
    pbVar2 = pbVar2 + 4;
    uVar4 = (uVar4 * 0x20000 | uVar4 >> 0xf) * 0x27d4eb2f;
  case 7:
    uVar4 = *(int *)pbVar2 * -0x3d4d51c3 + uVar4;
    pbVar2 = pbVar2 + 4;
    uVar4 = (uVar4 * 0x20000 | uVar4 >> 0xf) * 0x27d4eb2f;
  case 3:
    bVar1 = *pbVar2;
    pbVar2 = pbVar2 + 1;
    uVar4 = (uint)bVar1 * 0x165667b1 + uVar4;
    uVar4 = (uVar4 * 0x800 | uVar4 >> 0x15) * -0x61c8864f;
  case 2:
    bVar1 = *pbVar2;
    pbVar2 = pbVar2 + 1;
    uVar4 = (uint)bVar1 * 0x165667b1 + uVar4;
    uVar4 = (uVar4 * 0x800 | uVar4 >> 0x15) * -0x61c8864f;
  case 1:
    uVar4 = (uint)*pbVar2 * 0x165667b1 + uVar4;
    uVar4 = (uVar4 * 0x800 | uVar4 >> 0x15) * -0x61c8864f;
  }
  uVar4 = (uVar4 >> 0xf ^ uVar4) * -0x7a143589;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51c3;
  return uVar4 >> 0x10 ^ uVar4;
}


