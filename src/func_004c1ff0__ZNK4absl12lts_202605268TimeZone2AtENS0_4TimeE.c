// Function: _ZNK4absl12lts_202605268TimeZone2AtENS0_4TimeE
// Address: 004c1ff0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Possible PIC construction at 0x004c21e7: Changing call to branch */
/* WARNING: Possible PIC construction at 0x004c2212: Changing call to branch */
/* WARNING: Possible PIC construction at 0x004c2894: Changing call to branch */
/* WARNING: Possible PIC construction at 0x004c28b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x004c270d: Changing call to branch */
/* WARNING: Possible PIC construction at 0x004c2736: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x004c2712) */
/* WARNING: Removing unreachable block (ram,0x004c28bd) */
/* WARNING: Removing unreachable block (ram,0x004c28c1) */
/* WARNING: Removing unreachable block (ram,0x004c28c5) */
/* WARNING: Removing unreachable block (ram,0x004c28c9) */
/* WARNING: Removing unreachable block (ram,0x004c28e7) */
/* WARNING: Removing unreachable block (ram,0x004c2972) */
/* WARNING: Removing unreachable block (ram,0x004c298f) */
/* WARNING: Removing unreachable block (ram,0x004c2985) */
/* WARNING: Removing unreachable block (ram,0x004c2943) */
/* WARNING: Removing unreachable block (ram,0x004c29e4) */
/* WARNING: Removing unreachable block (ram,0x004c2a26) */
/* WARNING: Removing unreachable block (ram,0x004c2a35) */
/* WARNING: Removing unreachable block (ram,0x004c2a3c) */
/* WARNING: Removing unreachable block (ram,0x004c2b1c) */
/* WARNING: Removing unreachable block (ram,0x004c2b29) */
/* WARNING: Removing unreachable block (ram,0x004c2b39) */
/* WARNING: Removing unreachable block (ram,0x004c2b3e) */
/* WARNING: Removing unreachable block (ram,0x004c2b71) */
/* WARNING: Removing unreachable block (ram,0x004c2b79) */
/* WARNING: Removing unreachable block (ram,0x004c2bb0) */
/* WARNING: Removing unreachable block (ram,0x004c2ba0) */
/* WARNING: Removing unreachable block (ram,0x004c28d8) */
/* WARNING: Removing unreachable block (ram,0x004c2899) */
/* WARNING: Removing unreachable block (ram,0x004c2217) */
/* WARNING: Removing unreachable block (ram,0x004c223d) */
/* WARNING: Removing unreachable block (ram,0x004c222d) */
/* WARNING: Removing unreachable block (ram,0x004c21ec) */
/* WARNING: Removing unreachable block (ram,0x004c273b) */
/* WARNING: Removing unreachable block (ram,0x004c2768) */
/* WARNING: Removing unreachable block (ram,0x004c2772) */
/* WARNING: Removing unreachable block (ram,0x004c27a2) */
/* WARNING: Removing unreachable block (ram,0x004c27b3) */
/* WARNING: Removing unreachable block (ram,0x004c27c4) */
/* WARNING: Removing unreachable block (ram,0x004c27d0) */
/* WARNING: Removing unreachable block (ram,0x004c27e0) */

long * _ZNK4absl12lts_202605268TimeZone2AtENS0_4TimeE
                 (long *param_1,long *param_2,long param_3,ulong param_4,long param_5,long param_6)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int extraout_EDX;
  long extraout_RDX;
  undefined **ppuVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined **ppuVar12;
  long *plVar13;
  long *plVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  int iVar20;
  long unaff_R12;
  undefined8 uVar21;
  long *unaff_R13;
  ulong unaff_R15;
  long *plVar22;
  long *plVar23;
  long in_FS_OFFSET;
  undefined1 auVar24 [16];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  long alStack_c8 [4];
  long lStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  long lStack_88;
  long *plStack_80;
  ulong uStack_78;
  undefined *puStack_70;
  undefined4 uStack_68;
  long lStack_60;
  long lStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  long lStack_30;
  
  lStack_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar6 = (int)param_4;
  if (iVar6 == -1 && param_3 == 0x7fffffffffffffff) {
    param_1[4] = 0;
    uStack_68 = 0x3b;
    plVar17 = (long *)0x7fffffffffffffff;
    plVar13 = (long *)0xc;
    param_5 = 0x17;
    param_6 = 0x3b;
    puStack_70 = &UNK_004c205e;
    auVar24 = _ZN4absl12lts_2026052613time_internal4cctz6detail4impl5n_dayElallaaa
                        (0x7fffffffffffffff,0xc,0x1f,0);
    param_4 = auVar24._8_8_ & 0xffffffffff;
    *param_1 = auVar24._0_8_;
    param_1[1] = param_4;
    param_2 = (long *)0x7fffffffffffffff;
  }
  else {
    plVar17 = (long *)CONCAT71((int7)((ulong)param_1 >> 8),
                               param_3 == -0x8000000000000000 && iVar6 == -1);
    plVar13 = param_2;
    if (param_3 != -0x8000000000000000 || iVar6 != -1) {
      unaff_R15 = param_4 & 0xffffffff;
      puStack_70 = &UNK_004c20c9;
      lVar5 = _ZNSt3__16chrono12system_clock11from_time_tEl(0);
      lStack_60 = lVar5 / 1000000 + param_3;
      uStack_48 = 0;
      puStack_40 = (undefined *)0x0;
      lStack_58 = 0;
      uStack_50 = 0;
      plVar17 = &lStack_58;
      puStack_70 = &UNK_004c2106;
      _ZNK4absl12lts_2026052613time_internal4cctz9time_zone6lookupERKNSt3__16chrono10time_pointINS5_12system_clockENS5_8durationIlNS4_5ratioILl1ELl1EEEEEEE
                (plVar17,param_2,&lStack_60);
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      *param_1 = lStack_58;
      *(int *)(param_1 + 1) = (int)uStack_50;
      param_4 = uStack_50 >> 0x20;
      *(char *)((long)param_1 + 0xc) = (char)(uStack_50 >> 0x20);
      param_1[2] = 0;
      *(int *)(param_1 + 3) = iVar6;
      *(undefined4 *)((long)param_1 + 0x1c) = (undefined4)uStack_48;
      *(undefined1 *)(param_1 + 4) = uStack_48._4_1_;
      puVar4 = puStack_40;
      goto code_r0x004c2143;
    }
    param_1[4] = 0;
    *param_1 = -0x8000000000000000;
    param_1[1] = 0x101;
    param_2 = (long *)0x8000000000000000;
  }
  param_1[2] = (long)param_2;
  param_1[3] = 0xffffffff;
  puVar4 = &UNK_00166389;
  param_3 = unaff_R12;
code_r0x004c2143:
  param_1[5] = (long)puVar4;
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_30) {
    return param_1;
  }
  puStack_70 = &UNK_004c216b;
  func_0x0099bd00();
  ppuVar12 = &puStack_70;
  uStack_98 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  uStack_a0 = param_4 & 0xffffffffff;
  alStack_c8[1] = 0;
  alStack_c8[2] = 0;
  uStack_d0 = 0;
  alStack_c8[0] = 0;
  plVar14 = &lStack_a8;
  puStack_d8 = &UNK_004c21c7;
  lStack_a8 = extraout_RDX;
  plStack_90 = param_1;
  lStack_88 = param_3;
  plStack_80 = param_2;
  uStack_78 = unaff_R15;
  puStack_70 = &stack0xfffffffffffffff8;
  _ZNK4absl12lts_2026052613time_internal4cctz9time_zone6lookupERKNS2_6detail10civil_timeINS4_10second_tagEEE
            (&uStack_d0);
  *(int *)plVar17 = 0;
  puVar8 = (undefined8 *)(ulong)((int)uStack_d0 - 1U);
  iVar6 = 0;
  if ((int)uStack_d0 - 1U < 2) {
    iVar6 = (int)uStack_d0;
  }
  *(int *)plVar17 = iVar6;
  plVar18 = alStack_c8;
  ppuVar9 = &puStack_d8;
  puStack_d8 = &UNK_004c21ec;
  plVar19 = alStack_c8 + 1;
  plVar23 = plVar13;
  plVar22 = plVar14;
code_r0x004c2250:
  do {
    iVar20 = (int)param_6;
    iVar6 = (int)param_5;
    *(undefined ***)((long)ppuVar9 + -8) = ppuVar12;
    *(long **)((long)ppuVar9 + -0x10) = plVar22;
    *(long **)((long)ppuVar9 + -0x18) = plVar23;
    *(long **)((long)ppuVar9 + -0x20) = unaff_R13;
    *(long **)((long)ppuVar9 + -0x28) = plVar19;
    *(long **)((long)ppuVar9 + -0x30) = plVar17;
    *(undefined8 *)((long)ppuVar9 + -0x38) = *(undefined8 *)(in_FS_OFFSET + 0x28);
    *(undefined8 *)((long)ppuVar9 + -0x60) = 0x7fffffffffffffff;
    unaff_R13 = (long *)0x8000000000000000;
    *(undefined8 *)((long)ppuVar9 + -0x68) = 0x8000000000000000;
    lVar5 = *plVar18;
    plVar17 = plVar14;
    if (lVar5 == 0x7fffffffffffffff) {
      *(undefined8 *)((long)ppuVar9 + -0x48) = 0;
      *(undefined8 *)((long)ppuVar9 + -0x40) = 0;
      *(undefined8 *)((long)ppuVar9 + -0x58) = 0;
      *(undefined8 *)((long)ppuVar9 + -0x50) = 0;
      plVar19 = (long *)((long)ppuVar9 + -0x58);
      *(long **)((long)ppuVar9 + -0x70) = plVar13;
      *(undefined **)((long)ppuVar9 + -0x80) = &UNK_004c22b8;
      plVar17 = plVar13;
      _ZNK4absl12lts_2026052613time_internal4cctz9time_zone6lookupERKNSt3__16chrono10time_pointINS5_12system_clockENS5_8durationIlNS4_5ratioILl1ELl1EEEEEEE
                (plVar19,plVar13,(undefined1 *)((long)ppuVar9 + -0x60));
      plVar13 = plVar17;
      plVar23 = (long *)0x7fffffffffffffff;
      if (*(long *)((long)ppuVar9 + -0x58) < *plVar14) {
code_r0x004c22c1:
        uVar21 = 0xffffffff;
      }
      else {
        if (*(long *)((long)ppuVar9 + -0x58) != *plVar14) {
code_r0x004c2312:
          lVar5 = *plVar18;
          plVar13 = *(long **)((long)ppuVar9 + -0x70);
          goto code_r0x004c2319;
        }
        if (*(char *)((long)ppuVar9 + -0x50) < (char)plVar14[1]) goto code_r0x004c22c1;
        if (*(char *)((long)ppuVar9 + -0x50) != (char)plVar14[1]) goto code_r0x004c2312;
        if (*(char *)((long)ppuVar9 + -0x4f) < *(char *)((long)plVar14 + 9)) goto code_r0x004c22c1;
        if (*(char *)((long)ppuVar9 + -0x4f) != *(char *)((long)plVar14 + 9)) goto code_r0x004c2312;
        if (*(char *)((long)ppuVar9 + -0x4e) < *(char *)((long)plVar14 + 10)) goto code_r0x004c22c1;
        if (*(char *)((long)ppuVar9 + -0x4e) != *(char *)((long)plVar14 + 10))
        goto code_r0x004c2312;
        if (*(char *)((long)ppuVar9 + -0x4d) < *(char *)((long)plVar14 + 0xb))
        goto code_r0x004c22c1;
        if ((*(char *)((long)ppuVar9 + -0x4d) != *(char *)((long)plVar14 + 0xb)) ||
           (uVar21 = 0xffffffff, *(char *)((long)plVar14 + 0xc) <= *(char *)((long)ppuVar9 + -0x4c))
           ) goto code_r0x004c2312;
      }
    }
    else {
code_r0x004c2319:
      if (lVar5 == -0x8000000000000000) {
        *(undefined8 *)((long)ppuVar9 + -0x48) = 0;
        *(undefined8 *)((long)ppuVar9 + -0x40) = 0;
        *(undefined8 *)((long)ppuVar9 + -0x58) = 0;
        *(undefined8 *)((long)ppuVar9 + -0x50) = 0;
        plVar19 = (long *)((long)ppuVar9 + -0x58);
        *(undefined **)((long)ppuVar9 + -0x80) = &UNK_004c233c;
        _ZNK4absl12lts_2026052613time_internal4cctz9time_zone6lookupERKNSt3__16chrono10time_pointINS5_12system_clockENS5_8durationIlNS4_5ratioILl1ELl1EEEEEEE
                  (plVar19,plVar13,(undefined1 *)((long)ppuVar9 + -0x68));
        if ((*plVar14 < *(long *)((long)ppuVar9 + -0x58)) ||
           ((plVar17 = plVar13, *plVar14 == *(long *)((long)ppuVar9 + -0x58) &&
            (((char)plVar14[1] < *(char *)((long)ppuVar9 + -0x50) ||
             (((char)plVar14[1] == *(char *)((long)ppuVar9 + -0x50) &&
              ((*(char *)((long)plVar14 + 9) < *(char *)((long)ppuVar9 + -0x4f) ||
               ((*(char *)((long)plVar14 + 9) == *(char *)((long)ppuVar9 + -0x4f) &&
                ((*(char *)((long)plVar14 + 10) < *(char *)((long)ppuVar9 + -0x4e) ||
                 ((*(char *)((long)plVar14 + 10) == *(char *)((long)ppuVar9 + -0x4e) &&
                  ((*(char *)((long)plVar14 + 0xb) < *(char *)((long)ppuVar9 + -0x4d) ||
                   ((*(char *)((long)plVar14 + 0xb) == *(char *)((long)ppuVar9 + -0x4d) &&
                    (*(char *)((long)plVar14 + 0xc) < *(char *)((long)ppuVar9 + -0x4c)))))))))))))))
             )))))) {
          uVar21 = 0xffffffff;
          plVar23 = unaff_R13;
          goto code_r0x004c23b7;
        }
      }
      plVar13 = plVar17;
      uVar21 = 0;
      plVar19 = (long *)0x0;
      *(undefined **)((long)ppuVar9 + -0x80) = &UNK_004c2396;
      lVar5 = _ZNSt3__16chrono12system_clock11from_time_tEl();
      puVar8 = (undefined8 *)0xbce4217d2849cb25;
      lVar5 = SUB168(SEXT816(lVar5) * SEXT816(-0x431bde82d7b634db),8);
      plVar23 = (long *)(((lVar5 >> 0x12) - (lVar5 >> 0x3f)) + *plVar18);
    }
code_r0x004c23b7:
    if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)((long)ppuVar9 + -0x38)) {
      return plVar23;
    }
    *(code **)((long)ppuVar9 + -0x80) =
         _ZNK4absl12lts_202605268TimeZone14NextTransitionENS0_4TimeEPNS1_15CivilTransitionE;
    func_0x0099bd00();
    *(undefined1 **)((long)ppuVar9 + -0x80) = (undefined1 *)((long)ppuVar9 + -8);
    *(long **)((long)ppuVar9 + -0x88) = plVar23;
    *(long **)((long)ppuVar9 + -0x90) = plVar14;
    *(long **)((long)ppuVar9 + -0x98) = plVar18;
    *(undefined8 *)((long)ppuVar9 + -0xa0) = *(undefined8 *)(in_FS_OFFSET + 0x28);
    *(undefined **)((long)ppuVar9 + -0xd8) = &UNK_004c240a;
    lVar5 = _ZNSt3__16chrono12system_clock11from_time_tEl(0);
    *(long *)((long)ppuVar9 + -200) = lVar5 / 1000000 + (long)plVar13;
    *(undefined8 *)((long)ppuVar9 + -0xb8) = 0;
    *(undefined8 *)((long)ppuVar9 + -0xb0) = 0;
    *(undefined8 *)((long)ppuVar9 + -0xa8) = 0;
    *(undefined8 *)((long)ppuVar9 + -0xc0) = 0x7b2;
    *(undefined2 *)((long)ppuVar9 + -0xb8) = 0x101;
    *(undefined8 *)((long)ppuVar9 + -0xb0) = 0x7b2;
    *(undefined2 *)((long)ppuVar9 + -0xa8) = 0x101;
    puVar15 = (undefined1 *)((long)ppuVar9 + -200);
    *(undefined **)((long)ppuVar9 + -0xd8) = &UNK_004c2467;
    plVar23 = plVar19;
    plVar17 = (long *)_ZNK4absl12lts_2026052613time_internal4cctz9time_zone15next_transitionERKNSt3__16chrono10time_pointINS5_12system_clockENS5_8durationIlNS4_5ratioILl1ELl1EEEEEEEPNS3_16civil_transitionE
                                (plVar19,puVar15,(undefined1 *)((long)ppuVar9 + -0xc0));
    if ((char)plVar17 != '\0') {
      uVar2 = *(undefined8 *)((long)ppuVar9 + -0xb8);
      *puVar8 = *(undefined8 *)((long)ppuVar9 + -0xc0);
      *(int *)(puVar8 + 1) = (int)uVar2;
      *(char *)((long)puVar8 + 0xc) = (char)((ulong)uVar2 >> 0x20);
      uVar2 = *(undefined8 *)((long)ppuVar9 + -0xa8);
      puVar8[2] = *(undefined8 *)((long)ppuVar9 + -0xb0);
      *(int *)(puVar8 + 3) = (int)uVar2;
      *(char *)((long)puVar8 + 0x1c) = (char)((ulong)uVar2 >> 0x20);
    }
    puVar7 = *(undefined8 **)(in_FS_OFFSET + 0x28);
    if (puVar7 == *(undefined8 **)((long)ppuVar9 + -0xa0)) {
      return plVar17;
    }
    *(undefined **)((long)ppuVar9 + -0xd8) = &UNK_004c24b5;
    func_0x0099bd00();
    *(undefined1 **)((long)ppuVar9 + -0xd8) = (undefined1 *)((long)ppuVar9 + -0x80);
    *(long **)((long)ppuVar9 + -0xe0) = plVar13;
    *(long **)((long)ppuVar9 + -0xe8) = plVar19;
    *(undefined8 **)((long)ppuVar9 + -0xf0) = puVar8;
    *(undefined8 *)((long)ppuVar9 + -0xf8) = *(undefined8 *)(in_FS_OFFSET + 0x28);
    *(undefined **)((long)ppuVar9 + -0x130) = &UNK_004c24ea;
    lVar5 = _ZNSt3__16chrono12system_clock11from_time_tEl(0);
    *(undefined1 **)((long)ppuVar9 + -0x120) = puVar15 + lVar5 / 1000000;
    *(undefined8 *)((long)ppuVar9 + -0x110) = 0;
    *(undefined8 *)((long)ppuVar9 + -0x108) = 0;
    *(undefined8 *)((long)ppuVar9 + -0x100) = 0;
    *(undefined8 *)((long)ppuVar9 + -0x118) = 0x7b2;
    *(undefined2 *)((long)ppuVar9 + -0x110) = 0x101;
    *(undefined8 *)((long)ppuVar9 + -0x108) = 0x7b2;
    *(undefined2 *)((long)ppuVar9 + -0x100) = 0x101;
    puVar16 = (undefined1 *)((long)ppuVar9 + -0x120);
    *(undefined **)((long)ppuVar9 + -0x130) = &UNK_004c2547;
    plVar17 = plVar23;
    plVar13 = (long *)_ZNK4absl12lts_2026052613time_internal4cctz9time_zone15prev_transitionERKNSt3__16chrono10time_pointINS5_12system_clockENS5_8durationIlNS4_5ratioILl1ELl1EEEEEEEPNS3_16civil_transitionE
                                (plVar23,puVar16,(undefined1 *)((long)ppuVar9 + -0x118));
    if ((char)plVar13 != '\0') {
      uVar2 = *(undefined8 *)((long)ppuVar9 + -0x110);
      *puVar7 = *(undefined8 *)((long)ppuVar9 + -0x118);
      *(int *)(puVar7 + 1) = (int)uVar2;
      *(char *)((long)puVar7 + 0xc) = (char)((ulong)uVar2 >> 0x20);
      uVar2 = *(undefined8 *)((long)ppuVar9 + -0x100);
      puVar7[2] = *(undefined8 *)((long)ppuVar9 + -0x108);
      *(int *)(puVar7 + 3) = (int)uVar2;
      *(char *)((long)puVar7 + 0x1c) = (char)((ulong)uVar2 >> 0x20);
    }
    lVar5 = *(long *)(in_FS_OFFSET + 0x28);
    if (lVar5 == *(long *)((long)ppuVar9 + -0xf8)) {
      return plVar13;
    }
    *(undefined **)((long)ppuVar9 + -0x130) = &UNK_004c2595;
    func_0x0099bd00();
    ppuVar12 = (undefined **)((long)ppuVar9 + -0x130);
    *(undefined1 **)((long)ppuVar9 + -0x130) = (undefined1 *)((long)ppuVar9 + -0xd8);
    *(undefined1 **)((long)ppuVar9 + -0x138) = puVar15;
    *(long **)((long)ppuVar9 + -0x140) = plVar23;
    *(undefined8 *)((long)ppuVar9 + -0x148) = 0x8000000000000000;
    *(undefined8 *)((long)ppuVar9 + -0x150) = uVar21;
    *(undefined8 **)((long)ppuVar9 + -0x158) = puVar7;
    *(undefined8 *)((long)ppuVar9 + -0x160) = *(undefined8 *)(in_FS_OFFSET + 0x28);
    *(undefined8 *)((long)ppuVar9 + -0x198) = *(undefined8 *)((long)ppuVar9 + -0x118);
    if (300000000000 < (long)puVar16) {
      ((int *)((long)plVar17 + 0x1c))[0] = 0;
      ((int *)((long)plVar17 + 0x1c))[1] = 0;
      ((int *)((long)plVar17 + 0x24))[0] = 0;
      ((int *)((long)plVar17 + 0x24))[1] = 0;
      plVar17[2] = 0;
      plVar17[3] = 0;
      *plVar17 = 0;
      plVar17[1] = 0;
      lVar5 = 0x7fffffffffffffff;
code_r0x004c261c:
      plVar17[3] = lVar5;
      *(int *)(plVar17 + 4) = -1;
      *(long *)((long)plVar17 + 0xc) = lVar5;
      *(int *)((long)plVar17 + 0x14) = -1;
      *plVar17 = lVar5;
      *(int *)(plVar17 + 1) = -1;
      *(undefined1 *)(plVar17 + 5) = 1;
      if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)((long)ppuVar9 + -0x160)) {
        return plVar17;
      }
      *(undefined **)((long)ppuVar9 + -0x1e8) = &UNK_004c27ea;
      func_0x0099bd00();
      ppuVar12 = (undefined **)((long)ppuVar9 + -0x1e8);
      *(undefined1 **)((long)ppuVar9 + -0x1e8) = (undefined1 *)((long)ppuVar9 + -0x130);
      *(undefined1 **)((long)ppuVar9 + -0x1f0) = puVar15;
      *(long **)((long)ppuVar9 + -0x1f8) = plVar23;
      *(undefined8 *)((long)ppuVar9 + -0x200) = 0x8000000000000000;
      *(undefined8 *)((long)ppuVar9 + -0x208) = uVar21;
      *(undefined8 **)((long)ppuVar9 + -0x210) = puVar7;
      *(undefined8 *)((long)ppuVar9 + -0x218) = *(undefined8 *)(in_FS_OFFSET + 0x28);
      *(undefined1 **)((long)ppuVar9 + -0x250) = puVar16;
      iVar6 = *(int *)((long)plVar17 + 0x14);
      iVar20 = (int)plVar17[2];
      iVar3 = 0x7ffffff4;
      if (iVar20 != 0x7fffffff) {
        iVar3 = iVar20 + 1;
      }
      iVar1 = *(int *)((long)plVar17 + 0xc);
      puVar8 = (undefined8 *)(long)(int)plVar17[1];
      param_5 = (long)*(int *)((long)plVar17 + 4);
      param_6 = (long)(int)*plVar17;
      *(undefined **)((long)ppuVar9 + -0x260) = &UNK_004c2852;
      auVar24 = _ZN4absl12lts_2026052613time_internal4cctz6detail4impl5n_secEllllll
                          ((long)iVar6 + 0x76c + (ulong)(iVar20 == 0x7fffffff),(long)iVar3,
                           (long)iVar1);
      *(undefined8 *)((long)ppuVar9 + -0x220) = 0;
      *(long *)((long)ppuVar9 + -0x228) = auVar24._0_8_;
      *(int *)((long)ppuVar9 + -0x220) = auVar24._8_4_;
      *(char *)((long)ppuVar9 + -0x21c) = auVar24[0xc];
      *(undefined8 *)((long)ppuVar9 + -0x238) = 0;
      *(undefined8 *)((long)ppuVar9 + -0x230) = 0;
      *(undefined8 *)((long)ppuVar9 + -0x248) = 0;
      *(undefined8 *)((long)ppuVar9 + -0x240) = 0;
      plVar13 = (long *)((long)ppuVar9 + -0x250);
      plVar14 = (long *)((long)ppuVar9 + -0x228);
      *(undefined **)((long)ppuVar9 + -0x260) = &UNK_004c288a;
      _ZNK4absl12lts_2026052613time_internal4cctz9time_zone6lookupERKNS2_6detail10civil_timeINS4_10second_tagEEE
                ((undefined1 *)((long)ppuVar9 + -0x248),plVar13,plVar14);
      plVar18 = (long *)((long)ppuVar9 + -0x240);
      puVar11 = (undefined8 *)((long)ppuVar9 + -0x260);
      ppuVar9 = (undefined **)((long)ppuVar9 + -0x260);
      *puVar11 = &UNK_004c2899;
      plVar19 = plVar14;
      plVar22 = plVar13;
      goto code_r0x004c2250;
    }
    if ((long)puVar16 < -300000000000) {
      ((int *)((long)plVar17 + 0x1c))[0] = 0;
      ((int *)((long)plVar17 + 0x1c))[1] = 0;
      ((int *)((long)plVar17 + 0x24))[0] = 0;
      ((int *)((long)plVar17 + 0x24))[1] = 0;
      plVar17[2] = 0;
      plVar17[3] = 0;
      *plVar17 = 0;
      plVar17[1] = 0;
      lVar5 = -0x8000000000000000;
      goto code_r0x004c261c;
    }
    *(int *)((long)ppuVar9 + -0x1b0) = extraout_EDX;
    *(int *)((long)ppuVar9 + -0x1a4) = (int)lVar5;
    *(int *)((long)ppuVar9 + -0x1a0) = iVar6;
    puVar8 = (undefined8 *)(long)iVar6;
    *(int *)((long)ppuVar9 + -0x19c) = iVar20;
    param_5 = (long)iVar20;
    param_6 = (long)*(int *)((long)ppuVar9 + -0x120);
    *(long **)((long)ppuVar9 + -0x1d8) = plVar17;
    *(undefined1 **)((long)ppuVar9 + -0x1e0) = puVar16;
    *(undefined **)((long)ppuVar9 + -0x1e8) = &UNK_004c269f;
    auVar24 = _ZN4absl12lts_2026052613time_internal4cctz6detail4impl5n_secEllllll
                        (puVar16,(long)extraout_EDX,(long)(int)lVar5);
    *(undefined8 *)((long)ppuVar9 + -0x168) = 0;
    *(long *)((long)ppuVar9 + -0x1c8) = auVar24._0_8_;
    *(long *)((long)ppuVar9 + -0x170) = auVar24._0_8_;
    *(ulong *)((long)ppuVar9 + -0x1b8) = auVar24._8_8_ >> 0x20;
    *(char *)((long)ppuVar9 + -0x164) = auVar24[0xc];
    *(ulong *)((long)ppuVar9 + -0x1d0) = auVar24._8_8_;
    *(int *)((long)ppuVar9 + -0x168) = auVar24._8_4_;
    *(undefined8 *)((long)ppuVar9 + -0x180) = 0;
    *(undefined8 *)((long)ppuVar9 + -0x178) = 0;
    *(undefined8 *)((long)ppuVar9 + -400) = 0;
    *(undefined8 *)((long)ppuVar9 + -0x188) = 0;
    plVar17 = (long *)((long)ppuVar9 + -0x180);
    plVar13 = (long *)((long)ppuVar9 + -0x198);
    plVar14 = (long *)((long)ppuVar9 + -0x170);
    *(undefined **)((long)ppuVar9 + -0x1e8) = &UNK_004c26f3;
    _ZNK4absl12lts_2026052613time_internal4cctz9time_zone6lookupERKNS2_6detail10civil_timeINS4_10second_tagEEE
              ((undefined1 *)((long)ppuVar9 + -400),plVar13,plVar14);
    *(ulong *)((long)ppuVar9 + -0x1c0) = (ulong)*(uint *)((long)ppuVar9 + -400);
    *(uint *)((long)ppuVar9 + -0x1ac) = *(uint *)((long)ppuVar9 + -400) - 3;
    plVar18 = (long *)((long)ppuVar9 + -0x188);
    puVar10 = (undefined8 *)((long)ppuVar9 + -0x1e8);
    ppuVar9 = (undefined **)((long)ppuVar9 + -0x1e8);
    *puVar10 = &UNK_004c2712;
    plVar19 = plVar14;
    plVar22 = plVar13;
  } while( true );
}


