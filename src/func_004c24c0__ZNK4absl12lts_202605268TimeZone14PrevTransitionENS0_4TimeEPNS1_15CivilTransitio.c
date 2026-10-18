// Function: _ZNK4absl12lts_202605268TimeZone14PrevTransitionENS0_4TimeEPNS1_15CivilTransitionE
// Address: 004c24c0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Type propagation algorithm not settling */

int * _ZNK4absl12lts_202605268TimeZone14PrevTransitionENS0_4TimeEPNS1_15CivilTransitionE
                (int *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,int param_5
                ,int param_6)

{
  ulong uVar1;
  code *pcVar2;
  char cVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [13];
  int iVar6;
  long lVar7;
  int *piVar8;
  undefined8 uVar9;
  int *piVar10;
  int *piVar11;
  char cVar12;
  int extraout_EDX;
  int extraout_EDX_00;
  uint uVar13;
  undefined8 *******pppppppuVar14;
  undefined8 *puVar15;
  ulong uVar16;
  int iVar17;
  undefined8 *******unaff_R12;
  undefined8 unaff_R13;
  uint uVar18;
  long in_FS_OFFSET;
  undefined1 auVar19 [16];
  undefined1 auVar20 [12];
  undefined1 auVar21 [12];
  long lStack_1f0;
  long lStack_1e8;
  ulong uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1b8;
  int *piStack_1b0;
  undefined8 *puStack_1a8;
  ulong uStack_1a0;
  undefined8 *******pppppppuStack_198;
  undefined *puStack_190;
  undefined8 *******pppppppuStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  int aiStack_160 [2];
  undefined8 uStack_158;
  ulong uStack_150;
  long lStack_148;
  undefined8 *puStack_140;
  undefined8 *******pppppppuStack_138;
  undefined8 uStack_130;
  int *piStack_128;
  undefined8 *puStack_120;
  undefined *puStack_118;
  undefined8 *******pppppppuStack_110;
  int *piStack_108;
  ulong uStack_100;
  undefined8 *******pppppppuStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  int iStack_e0;
  uint uStack_dc;
  int iStack_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  undefined8 uStack_c8;
  ulong auStack_c0 [4];
  undefined8 *******pppppppuStack_a0;
  ulong uStack_98;
  long lStack_90;
  undefined8 *puStack_88;
  undefined *apuStack_60 [2];
  undefined8 ******ppppppuStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)(in_FS_OFFSET + 0x28);
  apuStack_60[0] = &UNK_004c24ea;
  lVar7 = _ZNSt3__16chrono12system_clock11from_time_tEl(0);
  ppppppuStack_50 = (undefined8 ******)(lVar7 / 1000000 + (long)param_2);
  uStack_48 = 0x7b2;
  uStack_40 = 0x101;
  uStack_38 = 0x7b2;
  uStack_30 = 0x101;
  pppppppuVar14 = &ppppppuStack_50;
  apuStack_60[0] = &UNK_004c2547;
  piVar11 = param_1;
  piVar8 = (int *)_ZNK4absl12lts_2026052613time_internal4cctz9time_zone15prev_transitionERKNSt3__16chrono10time_pointINS5_12system_clockENS5_8durationIlNS4_5ratioILl1ELl1EEEEEEEPNS3_16civil_transitionE
                            (param_1,pppppppuVar14,&uStack_48);
  if ((char)piVar8 != '\0') {
    *param_4 = uStack_48;
    *(int *)(param_4 + 1) = (int)uStack_40;
    *(char *)((long)param_4 + 0xc) = (char)((ulong)uStack_40 >> 0x20);
    param_4[2] = uStack_38;
    *(int *)(param_4 + 3) = (int)uStack_30;
    *(char *)((long)param_4 + 0x1c) = (char)((ulong)uStack_30 >> 0x20);
  }
  lVar7 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar7 == lStack_28) {
    return piVar8;
  }
  apuStack_60[0] = &UNK_004c2595;
  func_0x0099bd00();
  lStack_90 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_c8 = uStack_48;
  puStack_88 = param_4;
  if ((long)pppppppuVar14 < 0x45d964b801) {
    if ((long)pppppppuVar14 < -300000000000) {
      piVar11[7] = 0;
      piVar11[8] = 0;
      piVar11[9] = 0;
      piVar11[10] = 0;
      piVar11[4] = 0;
      piVar11[5] = 0;
      piVar11[6] = 0;
      piVar11[7] = 0;
      piVar11[0] = 0;
      piVar11[1] = 0;
      piVar11[2] = 0;
      piVar11[3] = 0;
      uVar9 = 0x8000000000000000;
      goto code_r0x004c261c;
    }
    iStack_d4 = (int)lVar7;
    puStack_118 = &UNK_004c269f;
    pppppppuStack_110 = pppppppuVar14;
    piStack_108 = piVar11;
    iStack_e0 = extraout_EDX;
    iStack_d0 = param_5;
    iStack_cc = param_6;
    apuStack_60[0] = &stack0xfffffffffffffff8;
    auVar19 = _ZN4absl12lts_2026052613time_internal4cctz6detail4impl5n_secEllllll
                        (pppppppuVar14,(long)extraout_EDX,(long)iStack_d4,(long)param_5,
                         (long)param_6,(long)(int)ppppppuStack_50);
    uStack_100 = auVar19._8_8_;
    pppppppuStack_f8 = auVar19._0_8_;
    uStack_e8 = uStack_100 >> 0x20;
    uStack_98 = uStack_100 & 0xffffffffff;
    auStack_c0[2] = 0;
    auStack_c0[3] = 0;
    auStack_c0[0] = 0;
    auStack_c0[1] = 0;
    param_2 = &uStack_c8;
    unaff_R12 = &pppppppuStack_a0;
    puStack_118 = &UNK_004c26f3;
    pppppppuStack_a0 = pppppppuStack_f8;
    _ZNK4absl12lts_2026052613time_internal4cctz9time_zone6lookupERKNS2_6detail10civil_timeINS4_10second_tagEEE
              (auStack_c0,param_2,unaff_R12);
    uStack_f0 = auStack_c0[0] & 0xffffffff;
    uStack_dc = (int)auStack_c0[0] - 3;
    puStack_118 = &UNK_004c2712;
    auVar21 = func_0x004c2250(auStack_c0 + 1,unaff_R12,param_2);
    iStack_d8 = auVar21._8_4_;
    unaff_R13 = auVar21._0_8_;
    puStack_118 = &UNK_004c2726;
    auVar21 = func_0x004c2250(auStack_c0 + 2,unaff_R12,param_2);
    param_4 = auVar21._0_8_;
    param_1 = (int *)(ulong)auVar21._8_4_;
    puStack_118 = &UNK_004c273b;
    pppppppuVar14 = unaff_R12;
    auVar20 = func_0x004c2250(auStack_c0 + 3,unaff_R12,param_2);
    piStack_108[9] = 0;
    piStack_108[10] = 0;
    *(undefined8 *)piStack_108 = unaff_R13;
    piStack_108[2] = iStack_d8;
    *(undefined1 (*) [12])(piStack_108 + 3) = auVar21;
    *(undefined1 (*) [12])(piStack_108 + 6) = auVar20;
    if (0xfffffffd < uStack_dc) {
      piStack_108[9] = (int)uStack_f0;
    }
    *(undefined1 *)(piStack_108 + 10) = 0;
    piVar11 = piStack_108;
    if ((((iStack_e0 == (char)uStack_100 && pppppppuStack_110 == pppppppuStack_f8) &&
         (iStack_d4 == (char)(uStack_100 >> 8))) && (iStack_d0 == (char)(uStack_100 >> 0x10))) &&
       (iStack_cc == (int)uStack_100 >> 0x18)) {
      if ((int)ppppppuStack_50 == (char)uStack_e8) goto code_r0x004c2640;
    }
  }
  else {
    piVar11[7] = 0;
    piVar11[8] = 0;
    piVar11[9] = 0;
    piVar11[10] = 0;
    piVar11[4] = 0;
    piVar11[5] = 0;
    piVar11[6] = 0;
    piVar11[7] = 0;
    piVar11[0] = 0;
    piVar11[1] = 0;
    piVar11[2] = 0;
    piVar11[3] = 0;
    uVar9 = 0x7fffffffffffffff;
code_r0x004c261c:
    *(undefined8 *)(piVar11 + 6) = uVar9;
    piVar11[8] = -1;
    *(undefined8 *)(piVar11 + 3) = uVar9;
    piVar11[5] = -1;
    *(undefined8 *)piVar11 = uVar9;
    piVar11[2] = -1;
    apuStack_60[0] = &stack0xfffffffffffffff8;
  }
  *(undefined1 *)(piVar11 + 10) = 1;
code_r0x004c2640:
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_90) {
    return piVar11;
  }
  puStack_118 = &UNK_004c27ea;
  func_0x0099bd00();
  lStack_148 = *(long *)(in_FS_OFFSET + 0x28);
  iVar17 = piVar11[4];
  iVar6 = 0x7ffffff4;
  if (iVar17 != 0x7fffffff) {
    iVar6 = iVar17 + 1;
  }
  puStack_190 = &UNK_004c2852;
  pppppppuStack_180 = pppppppuVar14;
  puStack_140 = param_4;
  pppppppuStack_138 = unaff_R12;
  uStack_130 = unaff_R13;
  piStack_128 = param_1;
  puStack_120 = param_2;
  puStack_118 = (undefined *)apuStack_60;
  auVar19 = _ZN4absl12lts_2026052613time_internal4cctz6detail4impl5n_secEllllll
                      ((long)piVar11[5] + 0x76c + (ulong)(iVar17 == 0x7fffffff),(long)iVar6,
                       (long)piVar11[3],(long)piVar11[2],(long)piVar11[1],(long)*piVar11);
  uStack_158 = auVar19._0_8_;
  uStack_150 = auVar19._8_8_ & 0xffffffffff;
  uStack_168 = 0;
  aiStack_160[0] = 0;
  aiStack_160[1] = 0;
  uStack_178 = 0;
  uStack_170 = 0;
  puStack_190 = &UNK_004c288a;
  _ZNK4absl12lts_2026052613time_internal4cctz9time_zone6lookupERKNS2_6detail10civil_timeINS4_10second_tagEEE
            (&uStack_178,&pppppppuStack_180,&uStack_158);
  puStack_190 = &UNK_004c2899;
  auVar21 = func_0x004c2250(&uStack_170,&uStack_158,&pppppppuStack_180);
  puStack_190 = &UNK_004c28ae;
  func_0x004c2250(&uStack_168,&uStack_158,&pppppppuStack_180);
  piVar8 = aiStack_160;
  puStack_190 = &UNK_004c28bd;
  puVar15 = &uStack_158;
  piVar10 = (int *)func_0x004c2250(piVar8,&uStack_158,&pppppppuStack_180);
  if (piVar11[8] != 0) {
    piVar10 = auVar21._0_8_;
  }
  lVar7 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar7 == lStack_148) {
    return piVar10;
  }
  puStack_190 = &UNK_004c28ec;
  func_0x0099bd00();
  lStack_1b8 = *(long *)(in_FS_OFFSET + 0x28);
  lStack_1f0 = lVar7;
  piStack_1b0 = piVar11;
  puStack_1a8 = &uStack_158;
  uStack_1a0 = (ulong)auVar21._8_4_;
  pppppppuStack_198 = &pppppppuStack_180;
  puStack_190 = (undefined *)&puStack_118;
  piVar8[8] = 0;
  piVar8[9] = 0;
  piVar8[10] = 0;
  piVar8[0xb] = 0;
  piVar8[4] = 0;
  piVar8[5] = 0;
  piVar8[6] = 0;
  piVar8[7] = 0;
  piVar8[0xc] = 0;
  piVar8[0xd] = 0;
  if (extraout_EDX_00 == -1 && puVar15 == (undefined8 *)0x7fffffffffffffff) {
    uVar18 = 0;
    auVar19 = _ZN4absl12lts_2026052613time_internal4cctz6detail4impl5n_dayElallaaa
                        (0x7fffffffffffffff,0xc,0x1f,0,0x17,0x3b,0x3b);
    auVar5 = auVar19._0_13_;
  }
  else if (puVar15 == (undefined8 *)0x8000000000000000 && extraout_EDX_00 == -1) {
    uVar18 = 0;
    auVar4._8_8_ = 0x101;
    auVar4._0_8_ = 0x8000000000000000;
    auVar5 = auVar4._0_13_;
  }
  else {
    lVar7 = _ZNSt3__16chrono12system_clock11from_time_tEl(0);
    lStack_1e8 = lVar7 / 1000000 + (long)puVar15;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    uStack_1e0 = 0;
    uStack_1d8 = 0;
    _ZNK4absl12lts_2026052613time_internal4cctz9time_zone6lookupERKNSt3__16chrono10time_pointINS5_12system_clockENS5_8durationIlNS4_5ratioILl1ELl1EEEEEEE
              (&uStack_1e0,&lStack_1f0,&lStack_1e8);
    auVar19._8_8_ = uStack_1d8;
    auVar19._0_8_ = uStack_1e0;
    auVar5 = auVar19._0_13_;
    uVar18 = (uint)uStack_1d0._4_1_;
  }
  uVar16 = auVar5._0_8_;
  *piVar8 = (int)auVar5[0xc];
  piVar8[1] = auVar5._8_4_ >> 0x18;
  piVar8[2] = (int)auVar5[10];
  cVar3 = auVar5[9];
  piVar8[3] = (int)cVar3;
  cVar12 = auVar5[8];
  piVar8[4] = cVar12 + -1;
  iVar17 = -0x80000000;
  if ((-0x7ffff895 < (long)uVar16) && (iVar17 = 0x7ffff893, (long)uVar16 < 0x80000000)) {
    iVar17 = auVar5._0_4_ + -0x76c;
  }
  lVar7 = (long)uVar16 % 400 - (ulong)(cVar12 < '\x03');
  uVar1 = lVar7 + 0x960;
  iVar6 = *(int *)(&UNK_001ff420 + (long)cVar12 * 4);
  piVar8[5] = iVar17;
  if ((ulong)*(uint *)(&UNK_001ff3f8 +
                      ((long)((((uVar1 >> 2) + lVar7 + 0x960) -
                              (ulong)(((uint)(uVar1 >> 2) & 0xffff) * 0x147b >> 0x11)) +
                             (long)cVar3 + (long)iVar6 +
                             (ulong)(((uint)uVar1 >> 4 & 0xffff) * 0xa3e >> 0x10)) % 7) * 4) < 7) {
    piVar8[6] = *(int *)(&UNK_001fdf5c +
                        (ulong)*(uint *)(&UNK_001ff3f8 +
                                        ((long)((((uVar1 >> 2) + lVar7 + 0x960) -
                                                (ulong)(((uint)(uVar1 >> 2) & 0xffff) * 0x147b >>
                                                       0x11)) +
                                               (long)cVar3 + (long)iVar6 +
                                               (ulong)(((uint)uVar1 >> 4 & 0xffff) * 0xa3e >> 0x10))
                                        % 7) * 4) * 4);
  }
  uVar13 = 0;
  if ((((uVar16 & 3) == 0) && ('\x02' < cVar12)) &&
     (uVar13 = 1,
     (uVar16 * -0x70a3d70a3d70a3d7 + 0x51eb851eb851eb8 >> 2 | uVar16 * -0x70a3d70a3d70a3d7 << 0x3e)
     < 0x28f5c28f5c28f5d)) {
    uVar13 = (uint)((long)uVar16 % 400 == 0);
  }
  piVar8[7] = (int)cVar3 + uVar13 + *(int *)(&UNK_001ff460 + (long)cVar12 * 4) + -1;
  piVar8[8] = uVar18;
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_1b8) {
    return piVar8;
  }
  func_0x0099bd00();
  pcVar2 = (code *)swi(3);
  piVar11 = (int *)(*pcVar2)();
  return piVar11;
}


