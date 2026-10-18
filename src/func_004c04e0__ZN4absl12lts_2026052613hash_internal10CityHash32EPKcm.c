// Function: _ZN4absl12lts_2026052613hash_internal10CityHash32EPKcm
// Address: 004c04e0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


uint _ZN4absl12lts_2026052613hash_internal10CityHash32EPKcm(int *param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  uint uVar13;
  
  uVar10 = (uint)param_2;
  if (0x18 < param_2) {
    iVar9 = *(int *)((long)param_1 + (param_2 - 4));
    iVar3 = *(int *)((long)param_1 + (param_2 - 8));
    iVar4 = *(int *)((long)param_1 + (param_2 - 0x14));
    iVar1 = *(int *)((long)param_1 + (param_2 - 0x10));
    iVar2 = *(int *)((long)param_1 + (param_2 - 0xc));
    uVar7 = (iVar9 * 0x16a88000 | (uint)(iVar9 * -0x3361d2af) >> 0x11) * 0x1b873593 ^ uVar10;
    uVar7 = (uVar7 << 0xd | uVar7 >> 0x13) * 5 + 0xe6546b64 ^
            (iVar1 * 0x16a88000 | (uint)(iVar1 * -0x3361d2af) >> 0x11) * 0x1b873593;
    uVar7 = (uVar7 << 0xd | uVar7 >> 0x13) * 5 + 0xe6546b64;
    uVar11 = (iVar3 * 0x16a88000 | (uint)(iVar3 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
             uVar10 * -0x3361d2af;
    uVar11 = (uVar11 << 0xd | uVar11 >> 0x13) * 5 + 0xe6546b64 ^
             (iVar2 * 0x16a88000 | (uint)(iVar2 * -0x3361d2af) >> 0x11) * 0x1b873593;
    uVar11 = (uVar11 << 0xd | uVar11 >> 0x13) * 5 + 0xe6546b64;
    uVar10 = (iVar4 * 0x16a88000 | (uint)(iVar4 * -0x3361d2af) >> 0x11) * 0x1b873593 +
             uVar10 * -0x3361d2af;
    uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x13) * 5 + 0xe6546b64;
    uVar12 = (param_2 - 1) / 0x14;
    do {
      uVar8 = (*param_1 * 0x16a88000 | (uint)(*param_1 * -0x3361d2af) >> 0x11) * 0x1b873593;
      uVar11 = (param_1[2] * 0x16a88000 | (uint)(param_1[2] * -0x3361d2af) >> 0x11) * 0x1b873593 +
               uVar11;
      uVar7 = uVar7 ^ uVar8;
      uVar13 = uVar10 + param_1[1];
      uVar7 = (param_1[3] * 0x16a88000 | (uint)(param_1[3] * -0x3361d2af) >> 0x11) * 0x1b873593 +
              param_1[1] ^ (uVar7 << 0xe | uVar7 >> 0x12) * 5 + 0xe6546b64;
      uVar10 = (uVar11 * 0x4000 | uVar11 >> 0x12) * 5 + 0xe6546b64 ^ param_1[4];
      uVar5 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8;
      uVar10 = (uVar5 | (uVar10 & 0xff00) << 8 | uVar10 << 0x18) * 5;
      uVar7 = ((uVar7 << 0xd | uVar7 >> 0x13) + param_1[4]) * 5 + 0xe6546b64;
      uVar6 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8;
      uVar11 = uVar6 | (uVar7 & 0xff00) << 8 | uVar7 * 0x1000000;
      uVar7 = (uVar13 * 0x2000 | uVar13 >> 0x13) * -0x3361d2af + uVar8;
      param_1 = param_1 + 5;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
    uVar7 = ((uVar11 >> 0xb) * 0x16a88000 | (uVar6 << 0x15 | uVar11 >> 0xb) * -0x3361d2af >> 0x11) *
            -0x3361d2af + uVar7;
    uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x13) * 5 + 0xe6546b64;
    iVar9 = (uVar7 * 0x8000 | uVar7 >> 0x11) +
            ((uVar10 >> 0xb) * 0x16a88000 | (uVar5 * 0xa00000 | uVar10 >> 0xb) * -0x3361d2af >> 0x11
            );
    uVar10 = (iVar9 * -0x3a55e000 | (uint)(iVar9 * -0x3361d2af) >> 0x13) * 5 + 0xe6546b64;
    return (uVar10 * 0x8000 | uVar10 >> 0x11) * -0x3361d2af;
  }
  if (param_2 < 0xd) {
    if (param_2 < 5) {
      if (param_2 == 0) {
        uVar7 = 0;
        uVar11 = 9;
      }
      else {
        uVar7 = (uint)(char)*param_1;
        uVar11 = uVar7 ^ 9;
        if (param_2 != 1) {
          uVar7 = uVar7 * -0x3361d2af + (int)*(char *)((long)param_1 + 1);
          uVar11 = uVar11 ^ uVar7;
          if (param_2 != 2) {
            uVar7 = uVar7 * -0x3361d2af + (int)*(char *)((long)param_1 + 2);
            uVar11 = uVar11 ^ uVar7;
            if (param_2 != 3) {
              uVar7 = uVar7 * -0x3361d2af + (int)*(char *)((long)param_1 + 3);
              uVar11 = uVar11 ^ uVar7;
            }
          }
        }
      }
    }
    else {
      uVar7 = *(int *)((long)param_1 + (ulong)(uVar10 >> 1 & 4)) + 9;
      uVar11 = ((*param_1 + uVar10) * 0x16a88000 | (*param_1 + uVar10) * -0x3361d2af >> 0x11) *
               0x1b873593 ^ uVar10 * 5;
      uVar11 = (uVar11 << 0xd | uVar11 >> 0x13) * 5 + 0xe6546b64;
      uVar10 = *(int *)((long)param_1 + (param_2 - 4)) + uVar10 * 5;
    }
    uVar11 = (uVar10 * 0x16a88000 | uVar10 * -0x3361d2af >> 0x11) * 0x1b873593 ^ uVar11;
    uVar10 = (uVar7 * 0x16a88000 | uVar7 * -0x3361d2af >> 0x11) * 0x1b873593 ^
             (uVar11 << 0xd | uVar11 >> 0x13) * 5 + 0xe6546b64;
    uVar10 = uVar10 << 0xd | uVar10 >> 0x13;
  }
  else {
    iVar9 = *(int *)((long)param_1 + ((param_2 >> 1) - 4));
    iVar3 = *(int *)((long)param_1 + (param_2 >> 1));
    iVar4 = *(int *)((long)param_1 + (param_2 - 8));
    uVar10 = (iVar9 * 0x16a88000 | (uint)(iVar9 * -0x3361d2af) >> 0x11) * 0x1b873593 ^ uVar10;
    uVar10 = (param_1[1] * 0x16a88000 | (uint)(param_1[1] * -0x3361d2af) >> 0x11) * 0x1b873593 ^
             (uVar10 << 0xd | uVar10 >> 0x13) * 5 + 0xe6546b64;
    uVar10 = (iVar4 * 0x16a88000 | (uint)(iVar4 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
             (uVar10 << 0xd | uVar10 >> 0x13) * 5 + 0xe6546b64;
    iVar9 = *(int *)((long)param_1 + (param_2 - 4));
    uVar10 = (iVar3 * 0x16a88000 | (uint)(iVar3 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
             (uVar10 << 0xd | uVar10 >> 0x13) * 5 + 0xe6546b64;
    uVar10 = (*param_1 * 0x16a88000 | (uint)(*param_1 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
             (uVar10 << 0xd | uVar10 >> 0x13) * 5 + 0xe6546b64;
    uVar10 = (iVar9 * 0x16a88000 | (uint)(iVar9 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
             (uVar10 << 0xd | uVar10 >> 0x13) * 5 + 0xe6546b64;
    uVar10 = uVar10 << 0xd | uVar10 >> 0x13;
  }
  uVar10 = uVar10 * 5 + 0xe6546b64;
  uVar10 = (uVar10 >> 0x10 ^ uVar10) * -0x7a143595;
  uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
  return uVar10 >> 0x10 ^ uVar10;
}


