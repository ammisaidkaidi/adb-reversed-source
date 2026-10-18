// Function: _ZN4absl12lts_2026052613hash_internal10CityHash64EPKcm
// Address: 004c0980
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long _ZN4absl12lts_2026052613hash_internal10CityHash64EPKcm(uint *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  
  if (param_2 < 0x21) {
    lVar3 = -0x651e95c4d06fbfb1;
    if (param_2 < 0x11) {
      if (param_2 < 8) {
        if (param_2 < 4) {
          if (param_2 != 0) {
            uVar7 = ((ulong)*(byte *)((long)param_1 + (param_2 - 1)) << 2 | param_2) *
                    -0x3c5a37a36834ced9 ^
                    (ulong)CONCAT11(*(undefined1 *)((long)param_1 + (param_2 >> 1)),(char)*param_1)
                    * -0x651e95c4d06fbfb1;
            lVar3 = (uVar7 >> 0x2f ^ uVar7) * -0x651e95c4d06fbfb1;
          }
        }
        else {
          lVar3 = param_2 * 2 + -0x651e95c4d06fbfb1;
          uVar7 = (ulong)*(uint *)((long)param_1 + (param_2 - 4));
          uVar4 = (param_2 + (ulong)*param_1 * 8 ^ uVar7) * lVar3;
          uVar7 = (uVar4 >> 0x2f ^ uVar7 ^ uVar4) * lVar3;
          lVar3 = (uVar7 >> 0x2f ^ uVar7) * lVar3;
        }
      }
      else {
        lVar3 = param_2 * 2 + -0x651e95c4d06fbfb1;
        uVar4 = *(long *)param_1 + 0x9ae16a3b2f90404f;
        uVar7 = *(ulong *)((long)param_1 + (param_2 - 8));
        uVar5 = ((uVar4 << 0x27 | uVar4 >> 0x19) + uVar7) * lVar3;
        uVar7 = ((uVar7 << 0x1b | uVar7 >> 0x25) * lVar3 + uVar4 ^ uVar5) * lVar3;
        uVar7 = (uVar7 >> 0x2f ^ uVar5 ^ uVar7) * lVar3;
        lVar3 = (uVar7 >> 0x2f ^ uVar7) * lVar3;
      }
    }
    else {
      lVar3 = param_2 * 2 + -0x651e95c4d06fbfb1;
      uVar5 = *(long *)((long)param_1 + (param_2 - 8)) * lVar3;
      uVar7 = *(long *)param_1 * -0x4b6d499041670d8d + *(long *)(param_1 + 2);
      uVar4 = *(long *)(param_1 + 2) + 0x9ae16a3b2f90404f;
      uVar4 = (uVar4 << 0x2e | uVar4 >> 0x12) + *(long *)param_1 * -0x4b6d499041670d8d + uVar5;
      uVar7 = ((uVar5 << 0x22 | uVar5 >> 0x1e) + (uVar7 * 0x200000 | uVar7 >> 0x2b) +
               *(long *)((long)param_1 + (param_2 - 0x10)) * -0x651e95c4d06fbfb1 ^ uVar4) * lVar3;
      uVar7 = (uVar7 >> 0x2f ^ uVar4 ^ uVar7) * lVar3;
      lVar3 = (uVar7 >> 0x2f ^ uVar7) * lVar3;
    }
  }
  else if (param_2 < 0x41) {
    lVar1 = param_2 * 2 + -0x651e95c4d06fbfb1;
    uVar7 = *(ulong *)((long)param_1 + (param_2 - 0x20));
    lVar2 = *(long *)((long)param_1 + (param_2 - 0x18));
    uVar4 = *(ulong *)(param_1 + 2);
    lVar13 = *(long *)(param_1 + 6) * 9;
    lVar14 = *(long *)((long)param_1 + (param_2 - 8));
    lVar8 = *(long *)((long)param_1 + (param_2 - 0x10)) * lVar1;
    uVar10 = *(long *)param_1 * -0x651e95c4d06fbfb1 + lVar14;
    uVar5 = *(long *)(param_1 + 4) * -0x651e95c4d06fbfb1 + lVar13;
    uVar11 = uVar10 ^ uVar7;
    uVar10 = (uVar11 + lVar13 + 1 +
             ((uVar4 << 0x22 | uVar4 >> 0x1e) + lVar2) * 9 + (uVar10 * 0x200000 | uVar10 >> 0x2b)) *
             lVar1;
    lVar3 = (uVar5 * 0x400000 | uVar5 >> 0x2a) + lVar2;
    uVar10 = (lVar8 + lVar13 + uVar11 + 1 +
             (uVar10 >> 0x38 | (uVar10 & 0xff000000000000) >> 0x28 |
              (uVar10 & 0xff0000000000) >> 0x18 | (uVar10 & 0xff00000000) >> 8 |
              (uVar10 & 0xff000000) << 8 | (uVar10 & 0xff0000) << 0x18 | (uVar10 & 0xff00) << 0x28 |
             uVar10 << 0x38)) * lVar1;
    uVar10 = (lVar14 + uVar5 + lVar2 + lVar3 +
             (uVar10 >> 0x38 | (uVar10 & 0xff000000000000) >> 0x28 |
              (uVar10 & 0xff0000000000) >> 0x18 | (uVar10 & 0xff00000000) >> 8 |
              (uVar10 & 0xff000000) << 8 | (uVar10 & 0xff0000) << 0x18 | (uVar10 & 0xff00) << 0x28 |
             uVar10 << 0x38)) * lVar1;
    uVar7 = lVar8 + uVar7 +
            (uVar5 + lVar2 + uVar4 +
            (uVar10 >> 0x38 | (uVar10 & 0xff000000000000) >> 0x28 |
             (uVar10 & 0xff0000000000) >> 0x18 | (uVar10 & 0xff00000000) >> 8 |
             (uVar10 & 0xff000000) << 8 | (uVar10 & 0xff0000) << 0x18 | (uVar10 & 0xff00) << 0x28 |
            uVar10 << 0x38)) * lVar1;
    lVar3 = (uVar7 >> 0x2f ^ uVar7) * lVar1 + lVar3;
  }
  else {
    lVar3 = *(long *)((long)param_1 + (param_2 - 0x28));
    lVar1 = *(long *)((long)param_1 + (param_2 - 0x10));
    lVar2 = *(long *)((long)param_1 + (param_2 - 0x38));
    lVar14 = *(long *)((long)param_1 + (param_2 - 0x30));
    uVar7 = lVar1 + lVar2;
    uVar4 = *(ulong *)((long)param_1 + (param_2 - 0x18));
    uVar5 = (lVar14 + param_2 ^ uVar4) * -0x622015f714c7d297;
    uVar5 = (uVar5 >> 0x2f ^ uVar4 ^ uVar5) * -0x622015f714c7d297;
    uVar5 = (uVar5 >> 0x2f ^ uVar5) * -0x622015f714c7d297;
    lVar13 = *(long *)((long)param_1 + (param_2 - 0x40)) + param_2;
    uVar10 = lVar3 + lVar13 + uVar5;
    uVar16 = lVar2 + lVar14 + lVar13;
    uVar10 = (uVar16 * 0x100000 | uVar16 >> 0x2c) + lVar13 + (uVar10 << 0x2b | uVar10 >> 0x15);
    lVar2 = *(long *)((long)param_1 + (param_2 - 8));
    lVar14 = *(long *)((long)param_1 + (param_2 - 0x20)) + uVar7 + -0x4b6d499041670d8d;
    uVar11 = uVar4 + lVar1 + lVar14;
    uVar12 = uVar11 + lVar2;
    uVar4 = lVar3 + lVar2 + lVar14;
    uVar16 = uVar16 + lVar3;
    lVar3 = lVar3 * -0x4b6d499041670d8d + *(long *)param_1;
    uVar4 = (uVar11 * 0x100000 | uVar11 >> 0x2c) + lVar14 + (uVar4 << 0x2b | uVar4 >> 0x15);
    uVar11 = 0;
    do {
      lVar1 = *(long *)((long)param_1 + uVar11 + 8);
      lVar2 = *(long *)((long)param_1 + uVar11 + 0x10);
      uVar6 = lVar3 + uVar16 + uVar7 + lVar1;
      lVar14 = *(long *)((long)param_1 + uVar11 + 0x30);
      uVar7 = uVar7 + uVar10 + lVar14;
      uVar6 = (uVar6 * 0x8000000 | uVar6 >> 0x25) * -0x4b6d499041670d8d ^ uVar4;
      lVar13 = *(long *)((long)param_1 + uVar11 + 0x28);
      uVar7 = uVar16 + lVar13 + (uVar7 * 0x400000 | uVar7 >> 0x2a) * -0x4b6d499041670d8d;
      lVar3 = ((uVar5 + uVar12) * 0x80000000 | uVar5 + uVar12 >> 0x21) * -0x4b6d499041670d8d;
      lVar8 = *(long *)((long)param_1 + uVar11 + 0x18);
      lVar9 = uVar10 * -0x4b6d499041670d8d + *(long *)((long)param_1 + uVar11);
      uVar5 = lVar1 + lVar2 + lVar9;
      uVar16 = uVar5 + lVar8;
      lVar17 = uVar4 + lVar3 + *(long *)((long)param_1 + uVar11 + 0x20);
      lVar1 = *(long *)((long)param_1 + uVar11 + 0x38);
      uVar15 = lVar2 + uVar7 + lVar17 + lVar1;
      uVar4 = uVar12 + lVar9 + lVar8 + uVar6;
      uVar10 = lVar9 + (uVar5 * 0x100000 | uVar5 >> 0x2c) + (uVar4 << 0x2b | uVar4 >> 0x15);
      uVar4 = lVar13 + lVar14 + lVar17;
      uVar12 = uVar4 + lVar1;
      uVar4 = lVar17 + (uVar4 * 0x100000 | uVar4 >> 0x2c) + (uVar15 << 0x2b | uVar15 >> 0x15);
      uVar11 = uVar11 + 0x40;
      uVar5 = uVar6;
    } while ((param_2 - 1 & 0xffffffffffffffc0) != uVar11);
    uVar5 = (uVar16 ^ uVar12) * -0x622015f714c7d297;
    uVar11 = (uVar5 >> 0x2f ^ uVar12 ^ uVar5) * -0x622015f714c7d297;
    uVar5 = (uVar10 ^ uVar4) * -0x622015f714c7d297;
    uVar4 = (uVar5 >> 0x2f ^ uVar4 ^ uVar5) * -0x622015f714c7d297;
    uVar4 = (uVar4 >> 0x2f ^ uVar4) * -0x622015f714c7d297 + lVar3;
    uVar7 = ((uVar7 >> 0x2f ^ uVar7) * -0x4b6d499041670d8d + uVar6 +
             (uVar11 >> 0x2f ^ uVar11) * -0x622015f714c7d297 ^ uVar4) * -0x622015f714c7d297;
    uVar7 = (uVar7 >> 0x2f ^ uVar4 ^ uVar7) * -0x622015f714c7d297;
    lVar3 = (uVar7 >> 0x2f ^ uVar7) * -0x622015f714c7d297;
  }
  return lVar3;
}


