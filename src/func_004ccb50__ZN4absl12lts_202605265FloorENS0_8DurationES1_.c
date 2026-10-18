// Function: _ZN4absl12lts_202605265FloorENS0_8DurationES1_
// Address: 004ccb50
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined1  [16]
_ZN4absl12lts_202605265FloorENS0_8DurationES1_
          (ulong param_1,uint param_2,ulong param_3,uint param_4)

{
  uint uVar1;
  ulong **ppuVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong **ppuVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong *extraout_RDX;
  ulong uVar13;
  ulong *puVar14;
  long lVar15;
  ulong **ppuVar16;
  long lVar17;
  ulong *puVar18;
  ulong uVar19;
  ulong uVar20;
  long in_FS_OFFSET;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  ulong *puStack_90;
  uint uStack_88;
  long lStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  undefined *puStack_50;
  ulong uStack_48;
  uint uStack_40;
  ulong uStack_38;
  
  uVar19 = (ulong)param_2;
  uStack_38 = *(ulong *)(in_FS_OFFSET + 0x28);
  uVar20 = 0x8000000000000000;
  puVar18 = &uStack_48;
  puStack_50 = &UNK_004ccb99;
  uVar13 = param_3;
  uStack_48 = param_1;
  uStack_40 = param_2;
  _ZN4absl12lts_202605268DurationrMES1_(puVar18,param_3,param_4);
  uStack_68 = uVar20;
  if (param_2 == 0xffffffff) {
    uVar8 = 0xffffffff;
    puVar12 = (ulong *)0xffffffff;
    uVar4 = param_1;
    uVar3 = param_1;
    if (param_1 == 0x8000000000000000) {
code_r0x004ccc13:
      uVar19 = (ulong)(param_2 + 1);
      uVar13 = (ulong)(uVar8 + 1);
      uVar3 = 0x8000000000000000;
      puVar12 = (ulong *)(ulong)uVar8;
      if (param_2 + 1 < uVar8 + 1) {
code_r0x004ccc35:
        uVar13 = param_3;
        uVar10 = param_4;
        if ((long)param_3 < 0) {
          uVar13 = 0x7fffffffffffffff;
          uVar10 = 0xffffffff;
          if (param_4 != 0xffffffff) {
            if (param_4 == 0) {
              if (param_3 != 0x8000000000000000) {
                param_3 = -param_3;
                uVar13 = param_3;
                uVar10 = 0;
              }
            }
            else {
              param_3 = ~param_3;
              uVar13 = param_3;
              uVar10 = 4000000000 - param_4;
            }
          }
        }
        puVar12 = (ulong *)0xffffffff;
        uVar4 = uVar3;
        uStack_68 = uVar3;
        if ((uVar8 != 0xffffffff) && (uVar4 = uVar20, uStack_68 = uVar20, uVar10 != 0xffffffff)) {
          uVar1 = uVar8 + 4000000000;
          if (uVar8 >= uVar10) {
            uVar1 = uVar8;
          }
          uVar11 = (uVar3 - uVar13) - (ulong)(uVar8 < uVar10);
          puVar18 = (ulong *)(ulong)uVar1;
          if ((long)uVar11 <= (long)uVar3) {
            puVar12 = (ulong *)(ulong)(uVar1 - uVar10);
            uVar4 = uVar11;
            puVar18 = puVar12;
            uStack_68 = uVar11;
          }
        }
      }
    }
  }
  else {
    if (uStack_40 == 0xffffffff) {
      uVar13 = 0x7fffffffffffffff;
      if (-1 < (long)uStack_48) {
        uVar13 = 0x8000000000000000;
      }
code_r0x004ccc01:
      uVar3 = uVar13;
      uVar8 = 0xffffffff;
    }
    else {
      uVar3 = (param_1 - uStack_48) - (ulong)(param_2 < uStack_40);
      uVar8 = param_2 + 4000000000;
      if (uStack_40 <= param_2) {
        uVar8 = param_2;
      }
      uVar8 = uVar8 - uStack_40;
      if ((long)uStack_48 < 0) {
        if ((long)uVar3 < (long)param_1) {
          uVar13 = 0x7fffffffffffffff;
          goto code_r0x004ccc01;
        }
      }
      else {
        uVar13 = 0x8000000000000000;
        if ((long)param_1 < (long)uVar3) goto code_r0x004ccc01;
      }
    }
    uVar4 = uVar3;
    uVar13 = uStack_48;
    if (param_1 == uVar3) {
      if (param_1 == 0x8000000000000000) goto code_r0x004ccc13;
      puVar12 = (ulong *)(ulong)uVar8;
      uVar3 = param_1;
      if (param_2 < uVar8) goto code_r0x004ccc35;
    }
    else {
      puVar12 = (ulong *)(ulong)uVar8;
      if ((long)param_1 < (long)uVar3) goto code_r0x004ccc35;
    }
  }
  uVar8 = (uint)uVar13;
  uVar13 = *(ulong *)(in_FS_OFFSET + 0x28);
  if (uVar13 == uStack_38) {
    auVar21._8_8_ = puVar12;
    auVar21._0_8_ = uVar4;
    return auVar21;
  }
  puStack_50 = &UNK_004cccd3;
  func_0x0099bd00();
  iVar9 = (int)uVar13;
  puVar14 = (ulong *)(uVar13 & 0xffffffff);
  lStack_80 = *(long *)(in_FS_OFFSET + 0x28);
  ppuVar16 = &puStack_90;
  puVar12 = extraout_RDX;
  puStack_90 = puVar18;
  uStack_88 = uVar8;
  uStack_78 = uVar3;
  uStack_70 = uVar19;
  uStack_60 = param_3;
  uStack_58 = (ulong)param_4;
  puStack_50 = &stack0xfffffffffffffff8;
  _ZN4absl12lts_202605268DurationrMES1_(ppuVar16,extraout_RDX,uVar13 & 0xffffffff);
  if (uVar8 == 0xffffffff) {
    uVar10 = 0xffffffff;
    uVar13 = 0xffffffff;
    puVar6 = puVar18;
    puVar5 = puVar18;
    if (puVar18 == (ulong *)0x8000000000000000) {
code_r0x004ccda3:
      uVar13 = (ulong)uVar10;
      puVar6 = puVar5;
      puVar5 = (ulong *)0x8000000000000000;
      puVar12 = (ulong *)(ulong)(uVar10 + 1);
      if (uVar10 + 1 < uVar8 + 1) {
code_r0x004ccdcf:
        puVar18 = extraout_RDX;
        if ((long)extraout_RDX < 0) {
          puVar14 = (ulong *)0xffffffff;
          puVar18 = (ulong *)0x7fffffffffffffff;
          if (iVar9 != -1) {
            if (iVar9 == 0) {
              if (extraout_RDX != (ulong *)0x8000000000000000) {
                puVar18 = (ulong *)-(long)extraout_RDX;
                puVar14 = (ulong *)0x0;
              }
            }
            else {
              puVar18 = (ulong *)~(ulong)extraout_RDX;
              puVar14 = (ulong *)(ulong)(4000000000 - iVar9);
            }
          }
        }
        uVar13 = 0xffffffff;
        puVar6 = puVar5;
        puVar12 = puVar14;
        if ((uVar10 != 0xffffffff) && (puVar6 = puVar18, (int)puVar14 != -1)) {
          ppuVar16 = (ulong **)(4000000000 - (long)puVar14);
          uVar8 = uVar10 + 0x1194d800;
          if ((long)(ulong)uVar10 < (long)ppuVar16) {
            uVar8 = uVar10;
          }
          puVar18 = (ulong *)((ulong)((long)ppuVar16 <= (long)(ulong)uVar10) +
                             (long)puVar18 + (long)puVar5);
          uVar13 = 0xffffffff;
          puVar6 = (ulong *)0x7fffffffffffffff;
          if ((long)puVar5 <= (long)puVar18) {
            uVar13 = (ulong)(uVar8 + (int)puVar14);
            puVar6 = puVar18;
          }
        }
      }
    }
  }
  else {
    if (uStack_88 == 0xffffffff) {
      puVar12 = (ulong *)0x7fffffffffffffff;
      if (-1 < (long)puStack_90) {
        puVar12 = (ulong *)0x8000000000000000;
      }
code_r0x004ccd91:
      puVar5 = puVar12;
      uVar10 = 0xffffffff;
    }
    else {
      puVar5 = (ulong *)((long)puVar18 + (-(ulong)(uVar8 < uStack_88) - (long)puStack_90));
      uVar10 = uVar8 + 4000000000;
      if (uStack_88 <= uVar8) {
        uVar10 = uVar8;
      }
      uVar10 = uVar10 - uStack_88;
      if ((long)puStack_90 < 0) {
        if ((long)puVar5 < (long)puVar18) {
          puVar12 = (ulong *)0x7fffffffffffffff;
          goto code_r0x004ccd91;
        }
      }
      else {
        puVar12 = (ulong *)0x8000000000000000;
        if ((long)puVar18 < (long)puVar5) goto code_r0x004ccd91;
      }
    }
    puVar6 = puVar5;
    puVar12 = puStack_90;
    if (puVar5 == puVar18) {
      if (puVar18 == (ulong *)0x8000000000000000) goto code_r0x004ccda3;
      uVar13 = (ulong)uVar10;
      puVar5 = puVar18;
      if (uVar10 < uVar8) goto code_r0x004ccdcf;
    }
    else {
      uVar13 = (ulong)uVar10;
      if ((long)puVar5 < (long)puVar18) goto code_r0x004ccdcf;
    }
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_80) {
    auVar22._8_8_ = uVar13;
    auVar22._0_8_ = puVar6;
    return auVar22;
  }
  func_0x0099bd00();
  if (puVar12 < (ulong *)0x3b9aca00) {
    uVar10 = (int)puVar12 << 2;
    ppuVar7 = ppuVar16;
  }
  else {
    lVar15 = (long)puVar12 % 1000000000;
    lVar17 = (lVar15 >> 0x3d) + (long)puVar12 / 1000000000;
    uVar8 = (int)lVar15 * 4 + 4000000000;
    if (-1 < lVar15) {
      uVar8 = (int)lVar15 * 4;
    }
    ppuVar7 = (ulong **)((long)ppuVar16 + ((lVar17 + 1) - (ulong)(uVar8 < 4000000000)));
    uVar10 = uVar8 + 0x1194d800;
    if (uVar8 < 4000000000) {
      uVar10 = uVar8;
    }
    if (lVar17 < 0) {
      if ((long)ppuVar7 <= (long)ppuVar16) goto code_r0x004ccf2d;
      ppuVar2 = (ulong **)0x8000000000000000;
    }
    else {
      ppuVar2 = (ulong **)0x7fffffffffffffff;
      if ((long)ppuVar16 <= (long)ppuVar7) goto code_r0x004ccf2d;
    }
    ppuVar7 = ppuVar2;
    uVar10 = 0xffffffff;
  }
code_r0x004ccf2d:
  auVar23._8_4_ = uVar10;
  auVar23._0_8_ = ppuVar7;
  auVar23._12_4_ = 0;
  return auVar23;
}


