// Function: _ZNK4absl12lts_202605268TimeZone14NextTransitionENS0_4TimeEPNS1_15CivilTransitionE
// Address: 004c23e0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Type propagation algorithm not settling */

int * _ZNK4absl12lts_202605268TimeZone14NextTransitionENS0_4TimeEPNS1_15CivilTransitionE
                (int *param_1,long param_2,undefined8 param_3,undefined8 *param_4,int param_5,
                int param_6)

{
  ulong uVar1;
  code *pcVar2;
  char cVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [13];
  int iVar6;
  long lVar7;
  int *piVar8;
  int *piVar9;
  undefined8 uVar10;
  int *piVar11;
  char cVar12;
  long *plVar13;
  int extraout_EDX;
  int extraout_EDX_00;
  uint uVar14;
  long *plVar15;
  undefined8 *******pppppppuVar16;
  undefined8 *puVar17;
  ulong uVar18;
  int iVar19;
  undefined8 *******unaff_R12;
  undefined8 unaff_R13;
  uint uVar20;
  long in_FS_OFFSET;
  undefined1 auVar21 [16];
  undefined1 auVar22 [12];
  undefined1 auVar23 [12];
  long lStack_248;
  long lStack_240;
  ulong uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  long lStack_210;
  int *piStack_208;
  undefined8 *puStack_200;
  ulong uStack_1f8;
  undefined8 *******pppppppuStack_1f0;
  undefined *puStack_1e8;
  undefined8 *******pppppppuStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  int aiStack_1b8 [2];
  undefined8 uStack_1b0;
  ulong uStack_1a8;
  long lStack_1a0;
  long *plStack_198;
  undefined8 *******pppppppuStack_190;
  undefined8 uStack_188;
  int *piStack_180;
  long *plStack_178;
  undefined *puStack_170;
  undefined8 *******pppppppuStack_168;
  int *piStack_160;
  ulong uStack_158;
  undefined8 *******pppppppuStack_150;
  ulong uStack_148;
  ulong uStack_140;
  int iStack_138;
  uint uStack_134;
  int iStack_130;
  int iStack_12c;
  int iStack_128;
  int iStack_124;
  long lStack_120;
  ulong auStack_118 [4];
  undefined8 *******pppppppuStack_f8;
  ulong uStack_f0;
  long lStack_e8;
  long *plStack_e0;
  undefined *apuStack_b8 [2];
  undefined8 ******ppppppuStack_a8;
  long alStack_a0 [5];
  undefined8 *puStack_78;
  int *piStack_70;
  long lStack_68;
  undefined *apuStack_60 [2];
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long *plStack_28;
  
  plStack_28 = *(long **)(in_FS_OFFSET + 0x28);
  apuStack_60[0] = &UNK_004c240a;
  lVar7 = _ZNSt3__16chrono12system_clock11from_time_tEl(0);
  lStack_50 = lVar7 / 1000000 + param_2;
  uStack_48 = 0x7b2;
  uStack_40 = 0x101;
  uStack_38 = 0x7b2;
  uStack_30 = 0x101;
  plVar15 = &lStack_50;
  apuStack_60[0] = &UNK_004c2467;
  piVar11 = param_1;
  piVar8 = (int *)_ZNK4absl12lts_2026052613time_internal4cctz9time_zone15next_transitionERKNSt3__16chrono10time_pointINS5_12system_clockENS5_8durationIlNS4_5ratioILl1ELl1EEEEEEEPNS3_16civil_transitionE
                            (param_1,plVar15,&uStack_48);
  if ((char)piVar8 != '\0') {
    *param_4 = uStack_48;
    *(int *)(param_4 + 1) = (int)uStack_40;
    *(char *)((long)param_4 + 0xc) = (char)((ulong)uStack_40 >> 0x20);
    param_4[2] = uStack_38;
    *(int *)(param_4 + 3) = (int)uStack_30;
    *(char *)((long)param_4 + 0x1c) = (char)((ulong)uStack_30 >> 0x20);
  }
  plVar13 = *(long **)(in_FS_OFFSET + 0x28);
  if (plVar13 == plStack_28) {
    return piVar8;
  }
  apuStack_60[0] = &UNK_004c24b5;
  func_0x0099bd00();
  alStack_a0[4] = *(long *)(in_FS_OFFSET + 0x28);
  apuStack_b8[0] = &UNK_004c24ea;
  puStack_78 = param_4;
  piStack_70 = param_1;
  lStack_68 = param_2;
  apuStack_60[0] = &stack0xfffffffffffffff8;
  lVar7 = _ZNSt3__16chrono12system_clock11from_time_tEl(0);
  ppppppuStack_a8 = (undefined8 ******)(lVar7 / 1000000 + (long)plVar15);
  alStack_a0[0] = 0x7b2;
  alStack_a0[1] = 0x101;
  alStack_a0[2] = 0x7b2;
  alStack_a0[3] = 0x101;
  pppppppuVar16 = &ppppppuStack_a8;
  apuStack_b8[0] = &UNK_004c2547;
  piVar8 = piVar11;
  piVar9 = (int *)_ZNK4absl12lts_2026052613time_internal4cctz9time_zone15prev_transitionERKNSt3__16chrono10time_pointINS5_12system_clockENS5_8durationIlNS4_5ratioILl1ELl1EEEEEEEPNS3_16civil_transitionE
                            (piVar11,pppppppuVar16,alStack_a0);
  if ((char)piVar9 != '\0') {
    *plVar13 = alStack_a0[0];
    *(int *)(plVar13 + 1) = (int)alStack_a0[1];
    *(char *)((long)plVar13 + 0xc) = (char)((ulong)alStack_a0[1] >> 0x20);
    plVar13[2] = alStack_a0[2];
    *(int *)(plVar13 + 3) = (int)alStack_a0[3];
    *(char *)((long)plVar13 + 0x1c) = (char)((ulong)alStack_a0[3] >> 0x20);
  }
  lVar7 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar7 == alStack_a0[4]) {
    return piVar9;
  }
  apuStack_b8[0] = &UNK_004c2595;
  func_0x0099bd00();
  lStack_e8 = *(long *)(in_FS_OFFSET + 0x28);
  lStack_120 = alStack_a0[0];
  plStack_e0 = plVar13;
  if ((long)pppppppuVar16 < 0x45d964b801) {
    if ((long)pppppppuVar16 < -300000000000) {
      piVar8[7] = 0;
      piVar8[8] = 0;
      piVar8[9] = 0;
      piVar8[10] = 0;
      piVar8[4] = 0;
      piVar8[5] = 0;
      piVar8[6] = 0;
      piVar8[7] = 0;
      piVar8[0] = 0;
      piVar8[1] = 0;
      piVar8[2] = 0;
      piVar8[3] = 0;
      uVar10 = 0x8000000000000000;
      goto code_r0x004c261c;
    }
    iStack_12c = (int)lVar7;
    puStack_170 = &UNK_004c269f;
    pppppppuStack_168 = pppppppuVar16;
    piStack_160 = piVar8;
    iStack_138 = extraout_EDX;
    iStack_128 = param_5;
    iStack_124 = param_6;
    apuStack_b8[0] = (undefined *)apuStack_60;
    auVar21 = _ZN4absl12lts_2026052613time_internal4cctz6detail4impl5n_secEllllll
                        (pppppppuVar16,(long)extraout_EDX,(long)iStack_12c,(long)param_5,
                         (long)param_6,(long)(int)ppppppuStack_a8);
    uStack_158 = auVar21._8_8_;
    pppppppuStack_150 = auVar21._0_8_;
    uStack_140 = uStack_158 >> 0x20;
    uStack_f0 = uStack_158 & 0xffffffffff;
    auStack_118[2] = 0;
    auStack_118[3] = 0;
    auStack_118[0] = 0;
    auStack_118[1] = 0;
    plVar15 = &lStack_120;
    unaff_R12 = &pppppppuStack_f8;
    puStack_170 = &UNK_004c26f3;
    pppppppuStack_f8 = pppppppuStack_150;
    _ZNK4absl12lts_2026052613time_internal4cctz9time_zone6lookupERKNS2_6detail10civil_timeINS4_10second_tagEEE
              (auStack_118,plVar15,unaff_R12);
    uStack_148 = auStack_118[0] & 0xffffffff;
    uStack_134 = (int)auStack_118[0] - 3;
    puStack_170 = &UNK_004c2712;
    auVar23 = func_0x004c2250(auStack_118 + 1,unaff_R12,plVar15);
    iStack_130 = auVar23._8_4_;
    unaff_R13 = auVar23._0_8_;
    puStack_170 = &UNK_004c2726;
    auVar23 = func_0x004c2250(auStack_118 + 2,unaff_R12,plVar15);
    plVar13 = auVar23._0_8_;
    piVar11 = (int *)(ulong)auVar23._8_4_;
    puStack_170 = &UNK_004c273b;
    pppppppuVar16 = unaff_R12;
    auVar22 = func_0x004c2250(auStack_118 + 3,unaff_R12,plVar15);
    piStack_160[9] = 0;
    piStack_160[10] = 0;
    *(undefined8 *)piStack_160 = unaff_R13;
    piStack_160[2] = iStack_130;
    *(undefined1 (*) [12])(piStack_160 + 3) = auVar23;
    *(undefined1 (*) [12])(piStack_160 + 6) = auVar22;
    if (0xfffffffd < uStack_134) {
      piStack_160[9] = (int)uStack_148;
    }
    *(undefined1 *)(piStack_160 + 10) = 0;
    piVar8 = piStack_160;
    if ((((iStack_138 == (char)uStack_158 && pppppppuStack_168 == pppppppuStack_150) &&
         (iStack_12c == (char)(uStack_158 >> 8))) && (iStack_128 == (char)(uStack_158 >> 0x10))) &&
       (iStack_124 == (int)uStack_158 >> 0x18)) {
      if ((int)ppppppuStack_a8 == (char)uStack_140) goto code_r0x004c2640;
    }
  }
  else {
    piVar8[7] = 0;
    piVar8[8] = 0;
    piVar8[9] = 0;
    piVar8[10] = 0;
    piVar8[4] = 0;
    piVar8[5] = 0;
    piVar8[6] = 0;
    piVar8[7] = 0;
    piVar8[0] = 0;
    piVar8[1] = 0;
    piVar8[2] = 0;
    piVar8[3] = 0;
    uVar10 = 0x7fffffffffffffff;
code_r0x004c261c:
    *(undefined8 *)(piVar8 + 6) = uVar10;
    piVar8[8] = -1;
    *(undefined8 *)(piVar8 + 3) = uVar10;
    piVar8[5] = -1;
    *(undefined8 *)piVar8 = uVar10;
    piVar8[2] = -1;
    apuStack_b8[0] = (undefined *)apuStack_60;
  }
  *(undefined1 *)(piVar8 + 10) = 1;
code_r0x004c2640:
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_e8) {
    return piVar8;
  }
  puStack_170 = &UNK_004c27ea;
  func_0x0099bd00();
  lStack_1a0 = *(long *)(in_FS_OFFSET + 0x28);
  iVar19 = piVar8[4];
  iVar6 = 0x7ffffff4;
  if (iVar19 != 0x7fffffff) {
    iVar6 = iVar19 + 1;
  }
  puStack_1e8 = &UNK_004c2852;
  pppppppuStack_1d8 = pppppppuVar16;
  plStack_198 = plVar13;
  pppppppuStack_190 = unaff_R12;
  uStack_188 = unaff_R13;
  piStack_180 = piVar11;
  plStack_178 = plVar15;
  puStack_170 = (undefined *)apuStack_b8;
  auVar21 = _ZN4absl12lts_2026052613time_internal4cctz6detail4impl5n_secEllllll
                      ((long)piVar8[5] + 0x76c + (ulong)(iVar19 == 0x7fffffff),(long)iVar6,
                       (long)piVar8[3],(long)piVar8[2],(long)piVar8[1],(long)*piVar8);
  uStack_1b0 = auVar21._0_8_;
  uStack_1a8 = auVar21._8_8_ & 0xffffffffff;
  uStack_1c0 = 0;
  aiStack_1b8[0] = 0;
  aiStack_1b8[1] = 0;
  uStack_1d0 = 0;
  uStack_1c8 = 0;
  puStack_1e8 = &UNK_004c288a;
  _ZNK4absl12lts_2026052613time_internal4cctz9time_zone6lookupERKNS2_6detail10civil_timeINS4_10second_tagEEE
            (&uStack_1d0,&pppppppuStack_1d8,&uStack_1b0);
  puStack_1e8 = &UNK_004c2899;
  auVar23 = func_0x004c2250(&uStack_1c8,&uStack_1b0,&pppppppuStack_1d8);
  puStack_1e8 = &UNK_004c28ae;
  func_0x004c2250(&uStack_1c0,&uStack_1b0,&pppppppuStack_1d8);
  piVar11 = aiStack_1b8;
  puStack_1e8 = &UNK_004c28bd;
  puVar17 = &uStack_1b0;
  piVar9 = (int *)func_0x004c2250(piVar11,&uStack_1b0,&pppppppuStack_1d8);
  if (piVar8[8] != 0) {
    piVar9 = auVar23._0_8_;
  }
  lVar7 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar7 == lStack_1a0) {
    return piVar9;
  }
  puStack_1e8 = &UNK_004c28ec;
  func_0x0099bd00();
  lStack_210 = *(long *)(in_FS_OFFSET + 0x28);
  lStack_248 = lVar7;
  piStack_208 = piVar8;
  puStack_200 = &uStack_1b0;
  uStack_1f8 = (ulong)auVar23._8_4_;
  pppppppuStack_1f0 = &pppppppuStack_1d8;
  puStack_1e8 = (undefined *)&puStack_170;
  piVar11[8] = 0;
  piVar11[9] = 0;
  piVar11[10] = 0;
  piVar11[0xb] = 0;
  piVar11[4] = 0;
  piVar11[5] = 0;
  piVar11[6] = 0;
  piVar11[7] = 0;
  piVar11[0xc] = 0;
  piVar11[0xd] = 0;
  if (extraout_EDX_00 == -1 && puVar17 == (undefined8 *)0x7fffffffffffffff) {
    uVar20 = 0;
    auVar21 = _ZN4absl12lts_2026052613time_internal4cctz6detail4impl5n_dayElallaaa
                        (0x7fffffffffffffff,0xc,0x1f,0,0x17,0x3b,0x3b);
    auVar5 = auVar21._0_13_;
  }
  else if (puVar17 == (undefined8 *)0x8000000000000000 && extraout_EDX_00 == -1) {
    uVar20 = 0;
    auVar4._8_8_ = 0x101;
    auVar4._0_8_ = 0x8000000000000000;
    auVar5 = auVar4._0_13_;
  }
  else {
    lVar7 = _ZNSt3__16chrono12system_clock11from_time_tEl(0);
    lStack_240 = lVar7 / 1000000 + (long)puVar17;
    uStack_228 = 0;
    uStack_220 = 0;
    uStack_238 = 0;
    uStack_230 = 0;
    _ZNK4absl12lts_2026052613time_internal4cctz9time_zone6lookupERKNSt3__16chrono10time_pointINS5_12system_clockENS5_8durationIlNS4_5ratioILl1ELl1EEEEEEE
              (&uStack_238,&lStack_248,&lStack_240);
    auVar21._8_8_ = uStack_230;
    auVar21._0_8_ = uStack_238;
    auVar5 = auVar21._0_13_;
    uVar20 = (uint)uStack_228._4_1_;
  }
  uVar18 = auVar5._0_8_;
  *piVar11 = (int)auVar5[0xc];
  piVar11[1] = auVar5._8_4_ >> 0x18;
  piVar11[2] = (int)auVar5[10];
  cVar3 = auVar5[9];
  piVar11[3] = (int)cVar3;
  cVar12 = auVar5[8];
  piVar11[4] = cVar12 + -1;
  iVar19 = -0x80000000;
  if ((-0x7ffff895 < (long)uVar18) && (iVar19 = 0x7ffff893, (long)uVar18 < 0x80000000)) {
    iVar19 = auVar5._0_4_ + -0x76c;
  }
  lVar7 = (long)uVar18 % 400 - (ulong)(cVar12 < '\x03');
  uVar1 = lVar7 + 0x960;
  iVar6 = *(int *)(&UNK_001ff420 + (long)cVar12 * 4);
  piVar11[5] = iVar19;
  if ((ulong)*(uint *)(&UNK_001ff3f8 +
                      ((long)((((uVar1 >> 2) + lVar7 + 0x960) -
                              (ulong)(((uint)(uVar1 >> 2) & 0xffff) * 0x147b >> 0x11)) +
                             (long)cVar3 + (long)iVar6 +
                             (ulong)(((uint)uVar1 >> 4 & 0xffff) * 0xa3e >> 0x10)) % 7) * 4) < 7) {
    piVar11[6] = *(int *)(&UNK_001fdf5c +
                         (ulong)*(uint *)(&UNK_001ff3f8 +
                                         ((long)((((uVar1 >> 2) + lVar7 + 0x960) -
                                                 (ulong)(((uint)(uVar1 >> 2) & 0xffff) * 0x147b >>
                                                        0x11)) +
                                                (long)cVar3 + (long)iVar6 +
                                                (ulong)(((uint)uVar1 >> 4 & 0xffff) * 0xa3e >> 0x10)
                                                ) % 7) * 4) * 4);
  }
  uVar14 = 0;
  if ((((uVar18 & 3) == 0) && ('\x02' < cVar12)) &&
     (uVar14 = 1,
     (uVar18 * -0x70a3d70a3d70a3d7 + 0x51eb851eb851eb8 >> 2 | uVar18 * -0x70a3d70a3d70a3d7 << 0x3e)
     < 0x28f5c28f5c28f5d)) {
    uVar14 = (uint)((long)uVar18 % 400 == 0);
  }
  piVar11[7] = (int)cVar3 + uVar14 + *(int *)(&UNK_001ff460 + (long)cVar12 * 4) + -1;
  piVar11[8] = uVar20;
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_210) {
    return piVar11;
  }
  func_0x0099bd00();
  pcVar2 = (code *)swi(3);
  piVar11 = (int *)(*pcVar2)();
  return piVar11;
}


