// Function: _ZN4absl12lts_2026052615ConvertDateTimeEliiiiiNS0_8TimeZoneE
// Address: 004c25a0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Type propagation algorithm not settling */

int * _ZN4absl12lts_2026052615ConvertDateTimeEliiiiiNS0_8TimeZoneE
                (int *param_1,undefined8 *******param_2,int param_3,int param_4,int param_5,
                int param_6,int param_7,undefined8 param_8)

{
  ulong uVar1;
  code *pcVar2;
  char cVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [13];
  int iVar6;
  undefined8 uVar7;
  int *piVar8;
  long lVar9;
  int *piVar10;
  char cVar11;
  int extraout_EDX;
  uint uVar12;
  undefined8 unaff_RBX;
  undefined8 *puVar13;
  ulong uVar14;
  int iVar15;
  undefined8 *******unaff_R12;
  undefined8 unaff_R13;
  uint uVar16;
  ulong unaff_R14;
  undefined8 *unaff_R15;
  long in_FS_OFFSET;
  undefined1 auVar17 [16];
  undefined1 auVar18 [12];
  undefined1 auVar19 [12];
  long lStack_198;
  long lStack_190;
  ulong uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long lStack_160;
  int *piStack_158;
  undefined8 *puStack_150;
  ulong uStack_148;
  undefined8 *******pppppppuStack_140;
  undefined *puStack_138;
  undefined8 *******pppppppuStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  int aiStack_108 [2];
  undefined8 uStack_100;
  ulong uStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 *******pppppppuStack_e0;
  undefined8 uStack_d8;
  ulong uStack_d0;
  undefined8 *puStack_c8;
  undefined *puStack_c0;
  undefined8 *******pppppppuStack_b8;
  int *piStack_b0;
  ulong uStack_a8;
  undefined8 *******pppppppuStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  int iStack_88;
  uint uStack_84;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  undefined8 uStack_70;
  ulong auStack_68 [4];
  undefined8 *******pppppppuStack_48;
  ulong uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_70 = param_8;
  if ((long)param_2 < 0x45d964b801) {
    if ((long)param_2 < -300000000000) {
      param_1[7] = 0;
      param_1[8] = 0;
      param_1[9] = 0;
      param_1[10] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      uVar7 = 0x8000000000000000;
      goto code_r0x004c261c;
    }
    puStack_c0 = &UNK_004c269f;
    pppppppuStack_b8 = param_2;
    piStack_b0 = param_1;
    iStack_88 = param_3;
    iStack_7c = param_4;
    iStack_78 = param_5;
    iStack_74 = param_6;
    auVar17 = _ZN4absl12lts_2026052613time_internal4cctz6detail4impl5n_secEllllll
                        (param_2,(long)param_3,(long)param_4,(long)param_5,(long)param_6,
                         (long)param_7);
    uStack_a8 = auVar17._8_8_;
    pppppppuStack_a0 = auVar17._0_8_;
    uStack_90 = uStack_a8 >> 0x20;
    uStack_40 = uStack_a8 & 0xffffffffff;
    auStack_68[2] = 0;
    auStack_68[3] = 0;
    auStack_68[0] = 0;
    auStack_68[1] = 0;
    unaff_R15 = &uStack_70;
    unaff_R12 = &pppppppuStack_48;
    puStack_c0 = &UNK_004c26f3;
    pppppppuStack_48 = pppppppuStack_a0;
    _ZNK4absl12lts_2026052613time_internal4cctz9time_zone6lookupERKNS2_6detail10civil_timeINS4_10second_tagEEE
              (auStack_68,unaff_R15,unaff_R12);
    uStack_98 = auStack_68[0] & 0xffffffff;
    uStack_84 = (int)auStack_68[0] - 3;
    puStack_c0 = &UNK_004c2712;
    auVar19 = func_0x004c2250(auStack_68 + 1,unaff_R12,unaff_R15);
    iStack_80 = auVar19._8_4_;
    unaff_R13 = auVar19._0_8_;
    puStack_c0 = &UNK_004c2726;
    auVar19 = func_0x004c2250(auStack_68 + 2,unaff_R12,unaff_R15);
    unaff_RBX = auVar19._0_8_;
    unaff_R14 = (ulong)auVar19._8_4_;
    puStack_c0 = &UNK_004c273b;
    param_2 = unaff_R12;
    auVar18 = func_0x004c2250(auStack_68 + 3,unaff_R12,unaff_R15);
    piStack_b0[9] = 0;
    piStack_b0[10] = 0;
    *(undefined8 *)piStack_b0 = unaff_R13;
    piStack_b0[2] = iStack_80;
    *(undefined1 (*) [12])(piStack_b0 + 3) = auVar19;
    *(undefined1 (*) [12])(piStack_b0 + 6) = auVar18;
    if (0xfffffffd < uStack_84) {
      piStack_b0[9] = (int)uStack_98;
    }
    *(undefined1 *)(piStack_b0 + 10) = 0;
    param_1 = piStack_b0;
    if ((((iStack_88 == (char)uStack_a8 && pppppppuStack_b8 == pppppppuStack_a0) &&
         (iStack_7c == (char)(uStack_a8 >> 8))) && (iStack_78 == (char)(uStack_a8 >> 0x10))) &&
       ((iStack_74 == (int)uStack_a8 >> 0x18 && (param_7 == (char)uStack_90))))
    goto code_r0x004c2640;
  }
  else {
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    uVar7 = 0x7fffffffffffffff;
code_r0x004c261c:
    *(undefined8 *)(param_1 + 6) = uVar7;
    param_1[8] = -1;
    *(undefined8 *)(param_1 + 3) = uVar7;
    param_1[5] = -1;
    *(undefined8 *)param_1 = uVar7;
    param_1[2] = -1;
  }
  *(undefined1 *)(param_1 + 10) = 1;
code_r0x004c2640:
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return param_1;
  }
  puStack_c0 = &UNK_004c27ea;
  func_0x0099bd00();
  lStack_f0 = *(long *)(in_FS_OFFSET + 0x28);
  iVar15 = param_1[4];
  iVar6 = 0x7ffffff4;
  if (iVar15 != 0x7fffffff) {
    iVar6 = iVar15 + 1;
  }
  puStack_138 = &UNK_004c2852;
  pppppppuStack_128 = param_2;
  uStack_e8 = unaff_RBX;
  pppppppuStack_e0 = unaff_R12;
  uStack_d8 = unaff_R13;
  uStack_d0 = unaff_R14;
  puStack_c8 = unaff_R15;
  puStack_c0 = &stack0xfffffffffffffff8;
  auVar17 = _ZN4absl12lts_2026052613time_internal4cctz6detail4impl5n_secEllllll
                      ((long)param_1[5] + 0x76c + (ulong)(iVar15 == 0x7fffffff),(long)iVar6,
                       (long)param_1[3],(long)param_1[2],(long)param_1[1],(long)*param_1);
  uStack_100 = auVar17._0_8_;
  uStack_f8 = auVar17._8_8_ & 0xffffffffff;
  uStack_110 = 0;
  aiStack_108[0] = 0;
  aiStack_108[1] = 0;
  uStack_120 = 0;
  uStack_118 = 0;
  puStack_138 = &UNK_004c288a;
  _ZNK4absl12lts_2026052613time_internal4cctz9time_zone6lookupERKNS2_6detail10civil_timeINS4_10second_tagEEE
            (&uStack_120,&pppppppuStack_128,&uStack_100);
  puStack_138 = &UNK_004c2899;
  auVar19 = func_0x004c2250(&uStack_118,&uStack_100,&pppppppuStack_128);
  puStack_138 = &UNK_004c28ae;
  func_0x004c2250(&uStack_110,&uStack_100,&pppppppuStack_128);
  piVar10 = aiStack_108;
  puStack_138 = &UNK_004c28bd;
  puVar13 = &uStack_100;
  piVar8 = (int *)func_0x004c2250(piVar10,&uStack_100,&pppppppuStack_128);
  if (param_1[8] != 0) {
    piVar8 = auVar19._0_8_;
  }
  lVar9 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar9 == lStack_f0) {
    return piVar8;
  }
  puStack_138 = &UNK_004c28ec;
  func_0x0099bd00();
  lStack_160 = *(long *)(in_FS_OFFSET + 0x28);
  lStack_198 = lVar9;
  piStack_158 = param_1;
  puStack_150 = &uStack_100;
  uStack_148 = (ulong)auVar19._8_4_;
  pppppppuStack_140 = &pppppppuStack_128;
  puStack_138 = (undefined *)&puStack_c0;
  piVar10[8] = 0;
  piVar10[9] = 0;
  piVar10[10] = 0;
  piVar10[0xb] = 0;
  piVar10[4] = 0;
  piVar10[5] = 0;
  piVar10[6] = 0;
  piVar10[7] = 0;
  piVar10[0xc] = 0;
  piVar10[0xd] = 0;
  if (extraout_EDX == -1 && puVar13 == (undefined8 *)0x7fffffffffffffff) {
    uVar16 = 0;
    auVar17 = _ZN4absl12lts_2026052613time_internal4cctz6detail4impl5n_dayElallaaa
                        (0x7fffffffffffffff,0xc,0x1f,0,0x17,0x3b,0x3b);
    auVar5 = auVar17._0_13_;
  }
  else if (puVar13 == (undefined8 *)0x8000000000000000 && extraout_EDX == -1) {
    uVar16 = 0;
    auVar4._8_8_ = 0x101;
    auVar4._0_8_ = 0x8000000000000000;
    auVar5 = auVar4._0_13_;
  }
  else {
    lVar9 = _ZNSt3__16chrono12system_clock11from_time_tEl(0);
    lStack_190 = lVar9 / 1000000 + (long)puVar13;
    uStack_178 = 0;
    uStack_170 = 0;
    uStack_188 = 0;
    uStack_180 = 0;
    _ZNK4absl12lts_2026052613time_internal4cctz9time_zone6lookupERKNSt3__16chrono10time_pointINS5_12system_clockENS5_8durationIlNS4_5ratioILl1ELl1EEEEEEE
              (&uStack_188,&lStack_198,&lStack_190);
    auVar17._8_8_ = uStack_180;
    auVar17._0_8_ = uStack_188;
    auVar5 = auVar17._0_13_;
    uVar16 = (uint)uStack_178._4_1_;
  }
  uVar14 = auVar5._0_8_;
  *piVar10 = (int)auVar5[0xc];
  piVar10[1] = auVar5._8_4_ >> 0x18;
  piVar10[2] = (int)auVar5[10];
  cVar3 = auVar5[9];
  piVar10[3] = (int)cVar3;
  cVar11 = auVar5[8];
  piVar10[4] = cVar11 + -1;
  iVar15 = -0x80000000;
  if ((-0x7ffff895 < (long)uVar14) && (iVar15 = 0x7ffff893, (long)uVar14 < 0x80000000)) {
    iVar15 = auVar5._0_4_ + -0x76c;
  }
  lVar9 = (long)uVar14 % 400 - (ulong)(cVar11 < '\x03');
  uVar1 = lVar9 + 0x960;
  iVar6 = *(int *)(&UNK_001ff420 + (long)cVar11 * 4);
  piVar10[5] = iVar15;
  if ((ulong)*(uint *)(&UNK_001ff3f8 +
                      ((long)((((uVar1 >> 2) + lVar9 + 0x960) -
                              (ulong)(((uint)(uVar1 >> 2) & 0xffff) * 0x147b >> 0x11)) +
                             (long)cVar3 + (long)iVar6 +
                             (ulong)(((uint)uVar1 >> 4 & 0xffff) * 0xa3e >> 0x10)) % 7) * 4) < 7) {
    piVar10[6] = *(int *)(&UNK_001fdf5c +
                         (ulong)*(uint *)(&UNK_001ff3f8 +
                                         ((long)((((uVar1 >> 2) + lVar9 + 0x960) -
                                                 (ulong)(((uint)(uVar1 >> 2) & 0xffff) * 0x147b >>
                                                        0x11)) +
                                                (long)cVar3 + (long)iVar6 +
                                                (ulong)(((uint)uVar1 >> 4 & 0xffff) * 0xa3e >> 0x10)
                                                ) % 7) * 4) * 4);
  }
  uVar12 = 0;
  if ((((uVar14 & 3) == 0) && ('\x02' < cVar11)) &&
     (uVar12 = 1,
     (uVar14 * -0x70a3d70a3d70a3d7 + 0x51eb851eb851eb8 >> 2 | uVar14 * -0x70a3d70a3d70a3d7 << 0x3e)
     < 0x28f5c28f5c28f5d)) {
    uVar12 = (uint)((long)uVar14 % 400 == 0);
  }
  piVar10[7] = (int)cVar3 + uVar12 + *(int *)(&UNK_001ff460 + (long)cVar11 * 4) + -1;
  piVar10[8] = uVar16;
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_160) {
    return piVar10;
  }
  func_0x0099bd00();
  pcVar2 = (code *)swi(3);
  piVar10 = (int *)(*pcVar2)();
  return piVar10;
}


