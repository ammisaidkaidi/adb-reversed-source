// Function: _ZN4absl12lts_202605265TruncENS0_8DurationES1_
// Address: 004cca90
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined1  [16]
_ZN4absl12lts_202605265TruncENS0_8DurationES1_
          (long param_1,uint param_2,long param_3,undefined4 param_4)

{
  long ***ppplVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long **pplVar5;
  long **pplVar6;
  long ***ppplVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  long *extraout_RDX;
  long **pplVar16;
  long **extraout_RDX_00;
  long *plVar17;
  long **pplVar18;
  long ***ppplVar19;
  long lVar20;
  long **pplVar21;
  long *plVar22;
  long in_FS_OFFSET;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  long **pplStack_c8;
  uint uStack_c0;
  long lStack_b8;
  long *plStack_b0;
  ulong uStack_a8;
  long *plStack_a0;
  long *plStack_98;
  ulong uStack_90;
  undefined *puStack_88;
  long *plStack_80;
  uint uStack_78;
  ulong uStack_70;
  long lStack_68;
  undefined *apuStack_40 [2];
  long lStack_30;
  uint uStack_28;
  ulong uStack_20;
  
  uStack_20 = *(ulong *)(in_FS_OFFSET + 0x28);
  plVar12 = &lStack_30;
  apuStack_40[0] = &UNK_004ccac3;
  lStack_30 = param_1;
  uStack_28 = param_2;
  _ZN4absl12lts_202605268DurationrMES1_(plVar12,param_3,param_4);
  uVar15 = 0xffffffff;
  lVar2 = param_1;
  if (param_2 == 0xffffffff) goto code_r0x004ccb2b;
  plVar12 = (long *)(ulong)uStack_28;
  lVar20 = 0x7fffffffffffffff;
  param_3 = lStack_30;
  if (uStack_28 == 0xffffffff) {
    if (-1 < lStack_30) {
      lVar20 = -0x8000000000000000;
    }
code_r0x004ccb23:
    uVar15 = 0xffffffff;
    lVar2 = lVar20;
  }
  else {
    lVar2 = (param_1 - lStack_30) - (ulong)(param_2 < uStack_28);
    uVar14 = param_2 + 4000000000;
    if (uStack_28 <= param_2) {
      uVar14 = param_2;
    }
    uVar15 = (ulong)(uVar14 - uStack_28);
    if (lStack_30 < 0) {
      if (lVar2 < param_1) goto code_r0x004ccb23;
    }
    else if (param_1 < lVar2) {
      lVar20 = -0x8000000000000000;
      goto code_r0x004ccb23;
    }
  }
code_r0x004ccb2b:
  uVar14 = (uint)param_3;
  uVar11 = *(ulong *)(in_FS_OFFSET + 0x28);
  if (uVar11 == uStack_20) {
    auVar23._8_8_ = uVar15;
    auVar23._0_8_ = lVar2;
    return auVar23;
  }
  apuStack_40[0] = &UNK_004ccb48;
  func_0x0099bd00();
  uVar10 = (uint)uVar11;
  uVar15 = (ulong)uVar14;
  uStack_70 = *(ulong *)(in_FS_OFFSET + 0x28);
  plVar22 = (long *)0x8000000000000000;
  pplVar21 = &plStack_80;
  puStack_88 = &UNK_004ccb99;
  plVar17 = extraout_RDX;
  plStack_80 = plVar12;
  uStack_78 = uVar14;
  lStack_68 = param_1;
  apuStack_40[0] = &stack0xfffffffffffffff8;
  _ZN4absl12lts_202605268DurationrMES1_(pplVar21,extraout_RDX,uVar11 & 0xffffffff);
  plStack_a0 = plVar22;
  plStack_98 = extraout_RDX;
  if (uVar14 == 0xffffffff) {
    uVar8 = 0xffffffff;
    pplVar16 = (long **)0xffffffff;
    plVar4 = plVar12;
    plVar3 = plVar12;
    if (plVar12 == (long *)0x8000000000000000) {
code_r0x004ccc13:
      uVar15 = (ulong)(uVar14 + 1);
      plVar17 = (long *)(ulong)(uVar8 + 1);
      plVar3 = (long *)0x8000000000000000;
      pplVar16 = (long **)(ulong)uVar8;
      if (uVar14 + 1 < uVar8 + 1) {
code_r0x004ccc35:
        plVar17 = extraout_RDX;
        uVar14 = uVar10;
        if ((long)extraout_RDX < 0) {
          plVar17 = (long *)0x7fffffffffffffff;
          plStack_98 = extraout_RDX;
          uVar14 = 0xffffffff;
          if (uVar10 != 0xffffffff) {
            if (uVar10 == 0) {
              plStack_98 = extraout_RDX;
              if (extraout_RDX != (long *)0x8000000000000000) {
                plVar17 = (long *)-(long)extraout_RDX;
                plStack_98 = plVar17;
                uVar14 = 0;
              }
            }
            else {
              plVar17 = (long *)~(ulong)extraout_RDX;
              plStack_98 = plVar17;
              uVar14 = 4000000000 - uVar10;
            }
          }
        }
        pplVar16 = (long **)0xffffffff;
        plVar4 = plVar3;
        plStack_a0 = plVar3;
        if ((uVar8 != 0xffffffff) && (plVar4 = plVar22, plStack_a0 = plVar22, uVar14 != 0xffffffff))
        {
          uVar10 = uVar8 + 4000000000;
          if (uVar8 >= uVar14) {
            uVar10 = uVar8;
          }
          plVar12 = (long *)((long)plVar3 + (-(ulong)(uVar8 < uVar14) - (long)plVar17));
          pplVar21 = (long **)(ulong)uVar10;
          if ((long)plVar12 <= (long)plVar3) {
            pplVar16 = (long **)(ulong)(uVar10 - uVar14);
            plVar4 = plVar12;
            pplVar21 = pplVar16;
            plStack_a0 = plVar12;
          }
        }
      }
    }
  }
  else {
    if (uStack_78 == 0xffffffff) {
      plVar17 = (long *)0x7fffffffffffffff;
      if (-1 < (long)plStack_80) {
        plVar17 = (long *)0x8000000000000000;
      }
code_r0x004ccc01:
      plVar3 = plVar17;
      uVar8 = 0xffffffff;
    }
    else {
      plVar3 = (long *)((long)plVar12 + (-(ulong)(uVar14 < uStack_78) - (long)plStack_80));
      uVar8 = uVar14 + 4000000000;
      if (uStack_78 <= uVar14) {
        uVar8 = uVar14;
      }
      uVar8 = uVar8 - uStack_78;
      if ((long)plStack_80 < 0) {
        if ((long)plVar3 < (long)plVar12) {
          plVar17 = (long *)0x7fffffffffffffff;
          goto code_r0x004ccc01;
        }
      }
      else {
        plVar17 = (long *)0x8000000000000000;
        if ((long)plVar12 < (long)plVar3) goto code_r0x004ccc01;
      }
    }
    plVar4 = plVar3;
    plVar17 = plStack_80;
    if (plVar12 == plVar3) {
      if (plVar12 == (long *)0x8000000000000000) goto code_r0x004ccc13;
      pplVar16 = (long **)(ulong)uVar8;
      plVar3 = plVar12;
      if (uVar14 < uVar8) goto code_r0x004ccc35;
    }
    else {
      pplVar16 = (long **)(ulong)uVar8;
      if ((long)plVar12 < (long)plVar3) goto code_r0x004ccc35;
    }
  }
  uVar14 = (uint)plVar17;
  uVar13 = *(ulong *)(in_FS_OFFSET + 0x28);
  if (uVar13 == uStack_70) {
    auVar24._8_8_ = pplVar16;
    auVar24._0_8_ = plVar4;
    return auVar24;
  }
  puStack_88 = &UNK_004cccd3;
  func_0x0099bd00();
  iVar9 = (int)uVar13;
  pplVar18 = (long **)(uVar13 & 0xffffffff);
  lStack_b8 = *(long *)(in_FS_OFFSET + 0x28);
  ppplVar19 = &pplStack_c8;
  pplVar16 = extraout_RDX_00;
  pplStack_c8 = pplVar21;
  uStack_c0 = uVar14;
  plStack_b0 = plVar3;
  uStack_a8 = uVar15;
  uStack_90 = uVar11 & 0xffffffff;
  puStack_88 = (undefined *)apuStack_40;
  _ZN4absl12lts_202605268DurationrMES1_(ppplVar19,extraout_RDX_00,uVar13 & 0xffffffff);
  if (uVar14 == 0xffffffff) {
    uVar10 = 0xffffffff;
    uVar15 = 0xffffffff;
    pplVar6 = pplVar21;
    pplVar5 = pplVar21;
    if (pplVar21 == (long **)0x8000000000000000) {
code_r0x004ccda3:
      uVar15 = (ulong)uVar10;
      pplVar6 = pplVar5;
      pplVar5 = (long **)0x8000000000000000;
      pplVar16 = (long **)(ulong)(uVar10 + 1);
      if (uVar10 + 1 < uVar14 + 1) {
code_r0x004ccdcf:
        pplVar21 = extraout_RDX_00;
        if ((long)extraout_RDX_00 < 0) {
          pplVar18 = (long **)0xffffffff;
          pplVar21 = (long **)0x7fffffffffffffff;
          if (iVar9 != -1) {
            if (iVar9 == 0) {
              if (extraout_RDX_00 != (long **)0x8000000000000000) {
                pplVar21 = (long **)-(long)extraout_RDX_00;
                pplVar18 = (long **)0x0;
              }
            }
            else {
              pplVar21 = (long **)~(ulong)extraout_RDX_00;
              pplVar18 = (long **)(ulong)(4000000000 - iVar9);
            }
          }
        }
        uVar15 = 0xffffffff;
        pplVar6 = pplVar5;
        pplVar16 = pplVar18;
        if ((uVar10 != 0xffffffff) && (pplVar6 = pplVar21, (int)pplVar18 != -1)) {
          ppplVar19 = (long ***)(4000000000 - (long)pplVar18);
          uVar14 = uVar10 + 0x1194d800;
          if ((long)(ulong)uVar10 < (long)ppplVar19) {
            uVar14 = uVar10;
          }
          pplVar21 = (long **)((ulong)((long)ppplVar19 <= (long)(ulong)uVar10) +
                              (long)pplVar21 + (long)pplVar5);
          uVar15 = 0xffffffff;
          pplVar6 = (long **)0x7fffffffffffffff;
          if ((long)pplVar5 <= (long)pplVar21) {
            uVar15 = (ulong)(uVar14 + (int)pplVar18);
            pplVar6 = pplVar21;
          }
        }
      }
    }
  }
  else {
    if (uStack_c0 == 0xffffffff) {
      pplVar16 = (long **)0x7fffffffffffffff;
      if (-1 < (long)pplStack_c8) {
        pplVar16 = (long **)0x8000000000000000;
      }
code_r0x004ccd91:
      pplVar5 = pplVar16;
      uVar10 = 0xffffffff;
    }
    else {
      pplVar5 = (long **)((long)pplVar21 + (-(ulong)(uVar14 < uStack_c0) - (long)pplStack_c8));
      uVar10 = uVar14 + 4000000000;
      if (uStack_c0 <= uVar14) {
        uVar10 = uVar14;
      }
      uVar10 = uVar10 - uStack_c0;
      if ((long)pplStack_c8 < 0) {
        if ((long)pplVar5 < (long)pplVar21) {
          pplVar16 = (long **)0x7fffffffffffffff;
          goto code_r0x004ccd91;
        }
      }
      else {
        pplVar16 = (long **)0x8000000000000000;
        if ((long)pplVar21 < (long)pplVar5) goto code_r0x004ccd91;
      }
    }
    pplVar6 = pplVar5;
    pplVar16 = pplStack_c8;
    if (pplVar5 == pplVar21) {
      if (pplVar21 == (long **)0x8000000000000000) goto code_r0x004ccda3;
      uVar15 = (ulong)uVar10;
      pplVar5 = pplVar21;
      if (uVar10 < uVar14) goto code_r0x004ccdcf;
    }
    else {
      uVar15 = (ulong)uVar10;
      if ((long)pplVar5 < (long)pplVar21) goto code_r0x004ccdcf;
    }
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_b8) {
    auVar25._8_8_ = uVar15;
    auVar25._0_8_ = pplVar6;
    return auVar25;
  }
  func_0x0099bd00();
  if (pplVar16 < (long **)0x3b9aca00) {
    uVar10 = (int)pplVar16 << 2;
    ppplVar7 = ppplVar19;
  }
  else {
    lVar2 = (long)pplVar16 % 1000000000;
    lVar20 = (lVar2 >> 0x3d) + (long)pplVar16 / 1000000000;
    uVar14 = (int)lVar2 * 4 + 4000000000;
    if (-1 < lVar2) {
      uVar14 = (int)lVar2 * 4;
    }
    ppplVar7 = (long ***)((long)ppplVar19 + ((lVar20 + 1) - (ulong)(uVar14 < 4000000000)));
    uVar10 = uVar14 + 0x1194d800;
    if (uVar14 < 4000000000) {
      uVar10 = uVar14;
    }
    if (lVar20 < 0) {
      if ((long)ppplVar7 <= (long)ppplVar19) goto code_r0x004ccf2d;
      ppplVar1 = (long ***)0x8000000000000000;
    }
    else {
      ppplVar1 = (long ***)0x7fffffffffffffff;
      if ((long)ppplVar19 <= (long)ppplVar7) goto code_r0x004ccf2d;
    }
    ppplVar7 = ppplVar1;
    uVar10 = 0xffffffff;
  }
code_r0x004ccf2d:
  auVar26._8_4_ = uVar10;
  auVar26._0_8_ = ppplVar7;
  auVar26._12_4_ = 0;
  return auVar26;
}


