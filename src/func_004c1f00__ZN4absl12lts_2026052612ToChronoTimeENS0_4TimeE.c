// Function: _ZN4absl12lts_2026052612ToChronoTimeENS0_4TimeE
// Address: 004c1f00
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

long * _ZN4absl12lts_2026052612ToChronoTimeENS0_4TimeE
                 (long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,long **param_5,
                 long param_6)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  int extraout_EDX;
  long extraout_RDX;
  long extraout_RDX_00;
  undefined **ppuVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined **ppuVar15;
  long *plVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  long *plVar19;
  long *plVar20;
  int iVar21;
  long unaff_R12;
  undefined8 uVar22;
  long *unaff_R13;
  ulong unaff_R15;
  long *plVar23;
  long *plVar24;
  long in_FS_OFFSET;
  undefined1 auVar25 [16];
  undefined *puStack_110;
  undefined8 uStack_108;
  long alStack_100 [4];
  long lStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  long *plStack_c8;
  long lStack_c0;
  long *plStack_b8;
  ulong uStack_b0;
  undefined *puStack_a8;
  undefined4 uStack_a0;
  long lStack_98;
  long lStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  long lStack_68;
  long *plStack_60;
  undefined *apuStack_40 [2];
  long *plStack_30;
  int iStack_28;
  long lStack_20;
  
  plVar19 = (long *)((ulong)param_2 & 0xffffffff);
  lStack_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar9 = (int)param_2;
  if (param_1 == (long *)0x0) {
    param_1 = (long *)0x0;
    plVar8 = (long *)0x0;
    apuStack_40[0] = &UNK_004c1f80;
    plVar4 = (long *)_ZNSt3__16chrono12system_clock11from_time_tEl();
    if (iVar9 == -1) {
      uVar5 = 0x7fffffffffffffff;
    }
    else {
code_r0x004c1f85:
      uVar5 = (ulong)plVar19 / 4000 + (long)param_1 * 1000000;
    }
  }
  else {
    if ((long)param_1 < 0) {
      apuStack_40[0] = &UNK_004c1f35;
      param_2 = plVar19;
      auVar25 = _ZN4absl12lts_202605265FloorENS0_8DurationES1_(param_1,plVar19,0,4000);
      param_1 = auVar25._0_8_;
      plVar19 = (long *)(auVar25._8_8_ & 0xffffffff);
    }
    plVar8 = (long *)0x0;
    apuStack_40[0] = &UNK_004c1f41;
    plVar4 = (long *)_ZNSt3__16chrono12system_clock11from_time_tEl();
    if ((int)plVar19 == -1) {
      uVar5 = 0x8000000000000000;
      if (-1 < (long)param_1) {
        uVar5 = 0x7fffffffffffffff;
      }
    }
    else {
      if ((ulong)param_1 >> 0x2b == 0) goto code_r0x004c1f85;
      param_5 = &plStack_30;
      apuStack_40[0] = &UNK_004c1f6e;
      param_2 = plVar19;
      plStack_30 = param_1;
      iStack_28 = (int)plVar19;
      uVar5 = _ZN4absl12lts_2026052612IDivDurationENS0_8DurationES1_PS1_(param_1,plVar19,0,4000);
      plVar19 = plVar4;
      plVar8 = param_1;
    }
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_20) {
    return (long *)(uVar5 + (long)plVar4);
  }
  apuStack_40[0] = &UNK_004c1fe2;
  func_0x0099bd00();
  lStack_68 = *(long *)(in_FS_OFFSET + 0x28);
  iVar9 = (int)uVar5;
  plStack_60 = plVar19;
  if (iVar9 == -1 && extraout_RDX == 0x7fffffffffffffff) {
    plVar8[4] = 0;
    uStack_a0 = 0x3b;
    plVar19 = (long *)0x7fffffffffffffff;
    plVar4 = (long *)0xc;
    param_5 = (long **)0x17;
    param_6 = 0x3b;
    puStack_a8 = &UNK_004c205e;
    apuStack_40[0] = &stack0xfffffffffffffff8;
    auVar25 = _ZN4absl12lts_2026052613time_internal4cctz6detail4impl5n_dayElallaaa
                        (0x7fffffffffffffff,0xc,0x1f,0);
    uVar5 = auVar25._8_8_ & 0xffffffffff;
    *plVar8 = auVar25._0_8_;
    plVar8[1] = uVar5;
    param_2 = (long *)0x7fffffffffffffff;
  }
  else {
    plVar19 = (long *)CONCAT71((int7)((ulong)plVar8 >> 8),
                               extraout_RDX == -0x8000000000000000 && iVar9 == -1);
    plVar4 = param_2;
    if (extraout_RDX != -0x8000000000000000 || iVar9 != -1) {
      unaff_R15 = uVar5 & 0xffffffff;
      puStack_a8 = &UNK_004c20c9;
      apuStack_40[0] = &stack0xfffffffffffffff8;
      lVar7 = _ZNSt3__16chrono12system_clock11from_time_tEl(0);
      lStack_98 = lVar7 / 1000000 + extraout_RDX;
      uStack_80 = 0;
      puStack_78 = (undefined *)0x0;
      lStack_90 = 0;
      uStack_88 = 0;
      plVar19 = &lStack_90;
      puStack_a8 = &UNK_004c2106;
      _ZNK4absl12lts_2026052613time_internal4cctz9time_zone6lookupERKNSt3__16chrono10time_pointINS5_12system_clockENS5_8durationIlNS4_5ratioILl1ELl1EEEEEEE
                (plVar19,param_2,&lStack_98);
      plVar8[3] = 0;
      plVar8[4] = 0;
      plVar8[1] = 0;
      plVar8[2] = 0;
      *plVar8 = lStack_90;
      *(int *)(plVar8 + 1) = (int)uStack_88;
      uVar5 = uStack_88 >> 0x20;
      *(char *)((long)plVar8 + 0xc) = (char)(uStack_88 >> 0x20);
      plVar8[2] = 0;
      *(int *)(plVar8 + 3) = iVar9;
      *(undefined4 *)((long)plVar8 + 0x1c) = (undefined4)uStack_80;
      *(undefined1 *)(plVar8 + 4) = uStack_80._4_1_;
      puVar6 = puStack_78;
      unaff_R12 = extraout_RDX;
      goto code_r0x004c2143;
    }
    plVar8[4] = 0;
    *plVar8 = -0x8000000000000000;
    plVar8[1] = 0x101;
    param_2 = (long *)0x8000000000000000;
    apuStack_40[0] = &stack0xfffffffffffffff8;
  }
  plVar8[2] = (long)param_2;
  plVar8[3] = 0xffffffff;
  puVar6 = &UNK_00166389;
code_r0x004c2143:
  plVar8[5] = (long)puVar6;
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_68) {
    return plVar8;
  }
  puStack_a8 = &UNK_004c216b;
  func_0x0099bd00();
  ppuVar15 = &puStack_a8;
  uStack_d0 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  uStack_d8 = uVar5 & 0xffffffffff;
  alStack_100[1] = 0;
  alStack_100[2] = 0;
  uStack_108 = 0;
  alStack_100[0] = 0;
  plVar16 = &lStack_e0;
  puStack_110 = &UNK_004c21c7;
  lStack_e0 = extraout_RDX_00;
  plStack_c8 = plVar8;
  lStack_c0 = unaff_R12;
  plStack_b8 = param_2;
  uStack_b0 = unaff_R15;
  puStack_a8 = (undefined *)apuStack_40;
  _ZNK4absl12lts_2026052613time_internal4cctz9time_zone6lookupERKNS2_6detail10civil_timeINS4_10second_tagEEE
            (&uStack_108);
  *(int *)plVar19 = 0;
  puVar11 = (undefined8 *)(ulong)((int)uStack_108 - 1U);
  iVar9 = 0;
  if ((int)uStack_108 - 1U < 2) {
    iVar9 = (int)uStack_108;
  }
  *(int *)plVar19 = iVar9;
  plVar8 = alStack_100;
  ppuVar12 = &puStack_110;
  puStack_110 = &UNK_004c21ec;
  plVar20 = alStack_100 + 1;
  plVar24 = plVar4;
  plVar23 = plVar16;
code_r0x004c2250:
  do {
    iVar21 = (int)param_6;
    iVar9 = (int)param_5;
    *(undefined ***)((long)ppuVar12 + -8) = ppuVar15;
    *(long **)((long)ppuVar12 + -0x10) = plVar23;
    *(long **)((long)ppuVar12 + -0x18) = plVar24;
    *(long **)((long)ppuVar12 + -0x20) = unaff_R13;
    *(long **)((long)ppuVar12 + -0x28) = plVar20;
    *(long **)((long)ppuVar12 + -0x30) = plVar19;
    *(undefined8 *)((long)ppuVar12 + -0x38) = *(undefined8 *)(in_FS_OFFSET + 0x28);
    *(undefined8 *)((long)ppuVar12 + -0x60) = 0x7fffffffffffffff;
    unaff_R13 = (long *)0x8000000000000000;
    *(undefined8 *)((long)ppuVar12 + -0x68) = 0x8000000000000000;
    lVar7 = *plVar8;
    plVar19 = plVar16;
    if (lVar7 == 0x7fffffffffffffff) {
      *(undefined8 *)((long)ppuVar12 + -0x48) = 0;
      *(undefined8 *)((long)ppuVar12 + -0x40) = 0;
      *(undefined8 *)((long)ppuVar12 + -0x58) = 0;
      *(undefined8 *)((long)ppuVar12 + -0x50) = 0;
      plVar20 = (long *)((long)ppuVar12 + -0x58);
      *(long **)((long)ppuVar12 + -0x70) = plVar4;
      *(undefined **)((long)ppuVar12 + -0x80) = &UNK_004c22b8;
      plVar19 = plVar4;
      _ZNK4absl12lts_2026052613time_internal4cctz9time_zone6lookupERKNSt3__16chrono10time_pointINS5_12system_clockENS5_8durationIlNS4_5ratioILl1ELl1EEEEEEE
                (plVar20,plVar4,(undefined1 *)((long)ppuVar12 + -0x60));
      plVar4 = plVar19;
      plVar24 = (long *)0x7fffffffffffffff;
      if (*(long *)((long)ppuVar12 + -0x58) < *plVar16) {
code_r0x004c22c1:
        uVar22 = 0xffffffff;
      }
      else {
        if (*(long *)((long)ppuVar12 + -0x58) != *plVar16) {
code_r0x004c2312:
          lVar7 = *plVar8;
          plVar4 = *(long **)((long)ppuVar12 + -0x70);
          goto code_r0x004c2319;
        }
        if (*(char *)((long)ppuVar12 + -0x50) < (char)plVar16[1]) goto code_r0x004c22c1;
        if (*(char *)((long)ppuVar12 + -0x50) != (char)plVar16[1]) goto code_r0x004c2312;
        if (*(char *)((long)ppuVar12 + -0x4f) < *(char *)((long)plVar16 + 9)) goto code_r0x004c22c1;
        if (*(char *)((long)ppuVar12 + -0x4f) != *(char *)((long)plVar16 + 9))
        goto code_r0x004c2312;
        if (*(char *)((long)ppuVar12 + -0x4e) < *(char *)((long)plVar16 + 10))
        goto code_r0x004c22c1;
        if (*(char *)((long)ppuVar12 + -0x4e) != *(char *)((long)plVar16 + 10))
        goto code_r0x004c2312;
        if (*(char *)((long)ppuVar12 + -0x4d) < *(char *)((long)plVar16 + 0xb))
        goto code_r0x004c22c1;
        if ((*(char *)((long)ppuVar12 + -0x4d) != *(char *)((long)plVar16 + 0xb)) ||
           (uVar22 = 0xffffffff, *(char *)((long)plVar16 + 0xc) <= *(char *)((long)ppuVar12 + -0x4c)
           )) goto code_r0x004c2312;
      }
    }
    else {
code_r0x004c2319:
      if (lVar7 == -0x8000000000000000) {
        *(undefined8 *)((long)ppuVar12 + -0x48) = 0;
        *(undefined8 *)((long)ppuVar12 + -0x40) = 0;
        *(undefined8 *)((long)ppuVar12 + -0x58) = 0;
        *(undefined8 *)((long)ppuVar12 + -0x50) = 0;
        plVar20 = (long *)((long)ppuVar12 + -0x58);
        *(undefined **)((long)ppuVar12 + -0x80) = &UNK_004c233c;
        _ZNK4absl12lts_2026052613time_internal4cctz9time_zone6lookupERKNSt3__16chrono10time_pointINS5_12system_clockENS5_8durationIlNS4_5ratioILl1ELl1EEEEEEE
                  (plVar20,plVar4,(undefined1 *)((long)ppuVar12 + -0x68));
        if ((*plVar16 < *(long *)((long)ppuVar12 + -0x58)) ||
           ((plVar19 = plVar4, *plVar16 == *(long *)((long)ppuVar12 + -0x58) &&
            (((char)plVar16[1] < *(char *)((long)ppuVar12 + -0x50) ||
             (((char)plVar16[1] == *(char *)((long)ppuVar12 + -0x50) &&
              ((*(char *)((long)plVar16 + 9) < *(char *)((long)ppuVar12 + -0x4f) ||
               ((*(char *)((long)plVar16 + 9) == *(char *)((long)ppuVar12 + -0x4f) &&
                ((*(char *)((long)plVar16 + 10) < *(char *)((long)ppuVar12 + -0x4e) ||
                 ((*(char *)((long)plVar16 + 10) == *(char *)((long)ppuVar12 + -0x4e) &&
                  ((*(char *)((long)plVar16 + 0xb) < *(char *)((long)ppuVar12 + -0x4d) ||
                   ((*(char *)((long)plVar16 + 0xb) == *(char *)((long)ppuVar12 + -0x4d) &&
                    (*(char *)((long)plVar16 + 0xc) < *(char *)((long)ppuVar12 + -0x4c))))))))))))))
              ))))))) {
          uVar22 = 0xffffffff;
          plVar24 = unaff_R13;
          goto code_r0x004c23b7;
        }
      }
      plVar4 = plVar19;
      uVar22 = 0;
      plVar20 = (long *)0x0;
      *(undefined **)((long)ppuVar12 + -0x80) = &UNK_004c2396;
      lVar7 = _ZNSt3__16chrono12system_clock11from_time_tEl();
      puVar11 = (undefined8 *)0xbce4217d2849cb25;
      lVar7 = SUB168(SEXT816(lVar7) * SEXT816(-0x431bde82d7b634db),8);
      plVar24 = (long *)(((lVar7 >> 0x12) - (lVar7 >> 0x3f)) + *plVar8);
    }
code_r0x004c23b7:
    if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)((long)ppuVar12 + -0x38)) {
      return plVar24;
    }
    *(code **)((long)ppuVar12 + -0x80) =
         _ZNK4absl12lts_202605268TimeZone14NextTransitionENS0_4TimeEPNS1_15CivilTransitionE;
    func_0x0099bd00();
    *(undefined1 **)((long)ppuVar12 + -0x80) = (undefined1 *)((long)ppuVar12 + -8);
    *(long **)((long)ppuVar12 + -0x88) = plVar24;
    *(long **)((long)ppuVar12 + -0x90) = plVar16;
    *(long **)((long)ppuVar12 + -0x98) = plVar8;
    *(undefined8 *)((long)ppuVar12 + -0xa0) = *(undefined8 *)(in_FS_OFFSET + 0x28);
    *(undefined **)((long)ppuVar12 + -0xd8) = &UNK_004c240a;
    lVar7 = _ZNSt3__16chrono12system_clock11from_time_tEl(0);
    *(long *)((long)ppuVar12 + -200) = lVar7 / 1000000 + (long)plVar4;
    *(undefined8 *)((long)ppuVar12 + -0xb8) = 0;
    *(undefined8 *)((long)ppuVar12 + -0xb0) = 0;
    *(undefined8 *)((long)ppuVar12 + -0xa8) = 0;
    *(undefined8 *)((long)ppuVar12 + -0xc0) = 0x7b2;
    *(undefined2 *)((long)ppuVar12 + -0xb8) = 0x101;
    *(undefined8 *)((long)ppuVar12 + -0xb0) = 0x7b2;
    *(undefined2 *)((long)ppuVar12 + -0xa8) = 0x101;
    puVar17 = (undefined1 *)((long)ppuVar12 + -200);
    *(undefined **)((long)ppuVar12 + -0xd8) = &UNK_004c2467;
    plVar24 = plVar20;
    plVar19 = (long *)_ZNK4absl12lts_2026052613time_internal4cctz9time_zone15next_transitionERKNSt3__16chrono10time_pointINS5_12system_clockENS5_8durationIlNS4_5ratioILl1ELl1EEEEEEEPNS3_16civil_transitionE
                                (plVar20,puVar17,(undefined1 *)((long)ppuVar12 + -0xc0));
    if ((char)plVar19 != '\0') {
      uVar2 = *(undefined8 *)((long)ppuVar12 + -0xb8);
      *puVar11 = *(undefined8 *)((long)ppuVar12 + -0xc0);
      *(int *)(puVar11 + 1) = (int)uVar2;
      *(char *)((long)puVar11 + 0xc) = (char)((ulong)uVar2 >> 0x20);
      uVar2 = *(undefined8 *)((long)ppuVar12 + -0xa8);
      puVar11[2] = *(undefined8 *)((long)ppuVar12 + -0xb0);
      *(int *)(puVar11 + 3) = (int)uVar2;
      *(char *)((long)puVar11 + 0x1c) = (char)((ulong)uVar2 >> 0x20);
    }
    puVar10 = *(undefined8 **)(in_FS_OFFSET + 0x28);
    if (puVar10 == *(undefined8 **)((long)ppuVar12 + -0xa0)) {
      return plVar19;
    }
    *(undefined **)((long)ppuVar12 + -0xd8) = &UNK_004c24b5;
    func_0x0099bd00();
    *(undefined1 **)((long)ppuVar12 + -0xd8) = (undefined1 *)((long)ppuVar12 + -0x80);
    *(long **)((long)ppuVar12 + -0xe0) = plVar4;
    *(long **)((long)ppuVar12 + -0xe8) = plVar20;
    *(undefined8 **)((long)ppuVar12 + -0xf0) = puVar11;
    *(undefined8 *)((long)ppuVar12 + -0xf8) = *(undefined8 *)(in_FS_OFFSET + 0x28);
    *(undefined **)((long)ppuVar12 + -0x130) = &UNK_004c24ea;
    lVar7 = _ZNSt3__16chrono12system_clock11from_time_tEl(0);
    *(undefined1 **)((long)ppuVar12 + -0x120) = puVar17 + lVar7 / 1000000;
    *(undefined8 *)((long)ppuVar12 + -0x110) = 0;
    *(undefined8 *)((long)ppuVar12 + -0x108) = 0;
    *(undefined8 *)((long)ppuVar12 + -0x100) = 0;
    *(undefined8 *)((long)ppuVar12 + -0x118) = 0x7b2;
    *(undefined2 *)((long)ppuVar12 + -0x110) = 0x101;
    *(undefined8 *)((long)ppuVar12 + -0x108) = 0x7b2;
    *(undefined2 *)((long)ppuVar12 + -0x100) = 0x101;
    puVar18 = (undefined1 *)((long)ppuVar12 + -0x120);
    *(undefined **)((long)ppuVar12 + -0x130) = &UNK_004c2547;
    plVar19 = plVar24;
    plVar8 = (long *)_ZNK4absl12lts_2026052613time_internal4cctz9time_zone15prev_transitionERKNSt3__16chrono10time_pointINS5_12system_clockENS5_8durationIlNS4_5ratioILl1ELl1EEEEEEEPNS3_16civil_transitionE
                               (plVar24,puVar18,(undefined1 *)((long)ppuVar12 + -0x118));
    if ((char)plVar8 != '\0') {
      uVar2 = *(undefined8 *)((long)ppuVar12 + -0x110);
      *puVar10 = *(undefined8 *)((long)ppuVar12 + -0x118);
      *(int *)(puVar10 + 1) = (int)uVar2;
      *(char *)((long)puVar10 + 0xc) = (char)((ulong)uVar2 >> 0x20);
      uVar2 = *(undefined8 *)((long)ppuVar12 + -0x100);
      puVar10[2] = *(undefined8 *)((long)ppuVar12 + -0x108);
      *(int *)(puVar10 + 3) = (int)uVar2;
      *(char *)((long)puVar10 + 0x1c) = (char)((ulong)uVar2 >> 0x20);
    }
    lVar7 = *(long *)(in_FS_OFFSET + 0x28);
    if (lVar7 == *(long *)((long)ppuVar12 + -0xf8)) {
      return plVar8;
    }
    *(undefined **)((long)ppuVar12 + -0x130) = &UNK_004c2595;
    func_0x0099bd00();
    ppuVar15 = (undefined **)((long)ppuVar12 + -0x130);
    *(undefined1 **)((long)ppuVar12 + -0x130) = (undefined1 *)((long)ppuVar12 + -0xd8);
    *(undefined1 **)((long)ppuVar12 + -0x138) = puVar17;
    *(long **)((long)ppuVar12 + -0x140) = plVar24;
    *(undefined8 *)((long)ppuVar12 + -0x148) = 0x8000000000000000;
    *(undefined8 *)((long)ppuVar12 + -0x150) = uVar22;
    *(undefined8 **)((long)ppuVar12 + -0x158) = puVar10;
    *(undefined8 *)((long)ppuVar12 + -0x160) = *(undefined8 *)(in_FS_OFFSET + 0x28);
    *(undefined8 *)((long)ppuVar12 + -0x198) = *(undefined8 *)((long)ppuVar12 + -0x118);
    if ((long)puVar18 < 0x45d964b801) {
      if (-0x45d964b801 < (long)puVar18) {
        *(int *)((long)ppuVar12 + -0x1b0) = extraout_EDX;
        *(int *)((long)ppuVar12 + -0x1a4) = (int)lVar7;
        *(int *)((long)ppuVar12 + -0x1a0) = iVar9;
        puVar11 = (undefined8 *)(long)iVar9;
        *(int *)((long)ppuVar12 + -0x19c) = iVar21;
        param_5 = (long **)(long)iVar21;
        param_6 = (long)*(int *)((long)ppuVar12 + -0x120);
        *(long **)((long)ppuVar12 + -0x1d8) = plVar19;
        *(undefined1 **)((long)ppuVar12 + -0x1e0) = puVar18;
        *(undefined **)((long)ppuVar12 + -0x1e8) = &UNK_004c269f;
        auVar25 = _ZN4absl12lts_2026052613time_internal4cctz6detail4impl5n_secEllllll
                            (puVar18,(long)extraout_EDX,(long)(int)lVar7);
        *(undefined8 *)((long)ppuVar12 + -0x168) = 0;
        *(long *)((long)ppuVar12 + -0x1c8) = auVar25._0_8_;
        *(long *)((long)ppuVar12 + -0x170) = auVar25._0_8_;
        *(ulong *)((long)ppuVar12 + -0x1b8) = auVar25._8_8_ >> 0x20;
        *(char *)((long)ppuVar12 + -0x164) = auVar25[0xc];
        *(ulong *)((long)ppuVar12 + -0x1d0) = auVar25._8_8_;
        *(int *)((long)ppuVar12 + -0x168) = auVar25._8_4_;
        *(undefined8 *)((long)ppuVar12 + -0x180) = 0;
        *(undefined8 *)((long)ppuVar12 + -0x178) = 0;
        *(undefined8 *)((long)ppuVar12 + -400) = 0;
        *(undefined8 *)((long)ppuVar12 + -0x188) = 0;
        plVar19 = (long *)((long)ppuVar12 + -0x180);
        plVar4 = (long *)((long)ppuVar12 + -0x198);
        plVar16 = (long *)((long)ppuVar12 + -0x170);
        *(undefined **)((long)ppuVar12 + -0x1e8) = &UNK_004c26f3;
        _ZNK4absl12lts_2026052613time_internal4cctz9time_zone6lookupERKNS2_6detail10civil_timeINS4_10second_tagEEE
                  ((undefined1 *)((long)ppuVar12 + -400),plVar4,plVar16);
        *(ulong *)((long)ppuVar12 + -0x1c0) = (ulong)*(uint *)((long)ppuVar12 + -400);
        *(uint *)((long)ppuVar12 + -0x1ac) = *(uint *)((long)ppuVar12 + -400) - 3;
        plVar8 = (long *)((long)ppuVar12 + -0x188);
        puVar13 = (undefined8 *)((long)ppuVar12 + -0x1e8);
        ppuVar12 = (undefined **)((long)ppuVar12 + -0x1e8);
        *puVar13 = &UNK_004c2712;
        plVar20 = plVar16;
        plVar23 = plVar4;
        goto code_r0x004c2250;
      }
      ((int *)((long)plVar19 + 0x1c))[0] = 0;
      ((int *)((long)plVar19 + 0x1c))[1] = 0;
      ((int *)((long)plVar19 + 0x24))[0] = 0;
      ((int *)((long)plVar19 + 0x24))[1] = 0;
      plVar19[2] = 0;
      plVar19[3] = 0;
      *plVar19 = 0;
      plVar19[1] = 0;
      lVar7 = -0x8000000000000000;
    }
    else {
      ((int *)((long)plVar19 + 0x1c))[0] = 0;
      ((int *)((long)plVar19 + 0x1c))[1] = 0;
      ((int *)((long)plVar19 + 0x24))[0] = 0;
      ((int *)((long)plVar19 + 0x24))[1] = 0;
      plVar19[2] = 0;
      plVar19[3] = 0;
      *plVar19 = 0;
      plVar19[1] = 0;
      lVar7 = 0x7fffffffffffffff;
    }
    plVar19[3] = lVar7;
    *(int *)(plVar19 + 4) = -1;
    *(long *)((long)plVar19 + 0xc) = lVar7;
    *(int *)((long)plVar19 + 0x14) = -1;
    *plVar19 = lVar7;
    *(int *)(plVar19 + 1) = -1;
    *(undefined1 *)(plVar19 + 5) = 1;
    if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)((long)ppuVar12 + -0x160)) {
      return plVar19;
    }
    *(undefined **)((long)ppuVar12 + -0x1e8) = &UNK_004c27ea;
    func_0x0099bd00();
    ppuVar15 = (undefined **)((long)ppuVar12 + -0x1e8);
    *(undefined1 **)((long)ppuVar12 + -0x1e8) = (undefined1 *)((long)ppuVar12 + -0x130);
    *(undefined1 **)((long)ppuVar12 + -0x1f0) = puVar17;
    *(long **)((long)ppuVar12 + -0x1f8) = plVar24;
    *(undefined8 *)((long)ppuVar12 + -0x200) = 0x8000000000000000;
    *(undefined8 *)((long)ppuVar12 + -0x208) = uVar22;
    *(undefined8 **)((long)ppuVar12 + -0x210) = puVar10;
    *(undefined8 *)((long)ppuVar12 + -0x218) = *(undefined8 *)(in_FS_OFFSET + 0x28);
    *(undefined1 **)((long)ppuVar12 + -0x250) = puVar18;
    iVar9 = *(int *)((long)plVar19 + 0x14);
    iVar21 = (int)plVar19[2];
    iVar3 = 0x7ffffff4;
    if (iVar21 != 0x7fffffff) {
      iVar3 = iVar21 + 1;
    }
    iVar1 = *(int *)((long)plVar19 + 0xc);
    puVar11 = (undefined8 *)(long)(int)plVar19[1];
    param_5 = (long **)(long)*(int *)((long)plVar19 + 4);
    param_6 = (long)(int)*plVar19;
    *(undefined **)((long)ppuVar12 + -0x260) = &UNK_004c2852;
    auVar25 = _ZN4absl12lts_2026052613time_internal4cctz6detail4impl5n_secEllllll
                        ((long)iVar9 + 0x76c + (ulong)(iVar21 == 0x7fffffff),(long)iVar3,(long)iVar1
                        );
    *(undefined8 *)((long)ppuVar12 + -0x220) = 0;
    *(long *)((long)ppuVar12 + -0x228) = auVar25._0_8_;
    *(int *)((long)ppuVar12 + -0x220) = auVar25._8_4_;
    *(char *)((long)ppuVar12 + -0x21c) = auVar25[0xc];
    *(undefined8 *)((long)ppuVar12 + -0x238) = 0;
    *(undefined8 *)((long)ppuVar12 + -0x230) = 0;
    *(undefined8 *)((long)ppuVar12 + -0x248) = 0;
    *(undefined8 *)((long)ppuVar12 + -0x240) = 0;
    plVar4 = (long *)((long)ppuVar12 + -0x250);
    plVar16 = (long *)((long)ppuVar12 + -0x228);
    *(undefined **)((long)ppuVar12 + -0x260) = &UNK_004c288a;
    _ZNK4absl12lts_2026052613time_internal4cctz9time_zone6lookupERKNS2_6detail10civil_timeINS4_10second_tagEEE
              ((undefined1 *)((long)ppuVar12 + -0x248),plVar4,plVar16);
    plVar8 = (long *)((long)ppuVar12 + -0x240);
    puVar14 = (undefined8 *)((long)ppuVar12 + -0x260);
    ppuVar12 = (undefined **)((long)ppuVar12 + -0x260);
    *puVar14 = &UNK_004c2899;
    plVar20 = plVar16;
    plVar23 = plVar4;
  } while( true );
}


