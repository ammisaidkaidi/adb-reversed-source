// Function: _ZNK4absl12lts_202605268TimeZone2AtENS0_13time_internal4cctz6detail10civil_timeINS2_10second_tagEEE
// Address: 004c2170
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

undefined1  [16]
_ZNK4absl12lts_202605268TimeZone2AtENS0_13time_internal4cctz6detail10civil_timeINS2_10second_tagEEE
          (long *param_1,long *param_2,long param_3,ulong param_4,long param_5,long param_6)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  ulong uVar9;
  undefined8 extraout_RDX;
  undefined **ppuVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined1 *puVar13;
  long *plVar14;
  long *plVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  long *plVar18;
  long *plVar19;
  int iVar20;
  undefined8 uVar21;
  long unaff_R13;
  long *plVar22;
  long in_FS_OFFSET;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined *puStack_70;
  undefined8 uStack_68;
  long alStack_60 [4];
  long lStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  
  puVar13 = &stack0xfffffffffffffff8;
  uStack_30 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  uStack_38 = param_4 & 0xffffffffff;
  alStack_60[1] = 0;
  alStack_60[2] = 0;
  uStack_68 = 0;
  alStack_60[0] = 0;
  plVar14 = &lStack_40;
  puStack_70 = &UNK_004c21c7;
  lStack_40 = param_3;
  _ZNK4absl12lts_2026052613time_internal4cctz9time_zone6lookupERKNS2_6detail10civil_timeINS4_10second_tagEEE
            (&uStack_68,param_2,plVar14);
  *(int *)param_1 = 0;
  puVar7 = (undefined8 *)(ulong)((int)uStack_68 - 1U);
  iVar8 = 0;
  if ((int)uStack_68 - 1U < 2) {
    iVar8 = (int)uStack_68;
  }
  *(int *)param_1 = iVar8;
  plVar18 = alStack_60;
  ppuVar10 = &puStack_70;
  puStack_70 = &UNK_004c21ec;
  plVar19 = alStack_60 + 1;
  plVar15 = param_2;
  plVar22 = plVar14;
code_r0x004c2250:
  do {
    iVar20 = (int)param_6;
    iVar8 = (int)param_5;
    *(undefined1 **)((long)ppuVar10 + -8) = puVar13;
    *(long **)((long)ppuVar10 + -0x10) = plVar22;
    *(long **)((long)ppuVar10 + -0x18) = plVar15;
    *(long *)((long)ppuVar10 + -0x20) = unaff_R13;
    *(long **)((long)ppuVar10 + -0x28) = plVar19;
    *(long **)((long)ppuVar10 + -0x30) = param_1;
    *(undefined8 *)((long)ppuVar10 + -0x38) = *(undefined8 *)(in_FS_OFFSET + 0x28);
    *(undefined8 *)((long)ppuVar10 + -0x60) = 0x7fffffffffffffff;
    unaff_R13 = -0x8000000000000000;
    *(undefined8 *)((long)ppuVar10 + -0x68) = 0x8000000000000000;
    lVar5 = *plVar18;
    plVar15 = plVar14;
    if (lVar5 == 0x7fffffffffffffff) {
      *(undefined8 *)((long)ppuVar10 + -0x48) = 0;
      *(undefined8 *)((long)ppuVar10 + -0x40) = 0;
      *(undefined8 *)((long)ppuVar10 + -0x58) = 0;
      *(undefined8 *)((long)ppuVar10 + -0x50) = 0;
      plVar19 = (long *)((long)ppuVar10 + -0x58);
      *(long **)((long)ppuVar10 + -0x70) = param_2;
      *(undefined **)((long)ppuVar10 + -0x80) = &UNK_004c22b8;
      plVar15 = param_2;
      _ZNK4absl12lts_2026052613time_internal4cctz9time_zone6lookupERKNSt3__16chrono10time_pointINS5_12system_clockENS5_8durationIlNS4_5ratioILl1ELl1EEEEEEE
                (plVar19,param_2,(undefined1 *)((long)ppuVar10 + -0x60));
      param_2 = plVar15;
      lVar5 = 0x7fffffffffffffff;
      if (*(long *)((long)ppuVar10 + -0x58) < *plVar14) {
code_r0x004c22c1:
        uVar21 = 0xffffffff;
      }
      else {
        if (*(long *)((long)ppuVar10 + -0x58) != *plVar14) {
code_r0x004c2312:
          lVar5 = *plVar18;
          param_2 = *(long **)((long)ppuVar10 + -0x70);
          goto code_r0x004c2319;
        }
        if (*(char *)((long)ppuVar10 + -0x50) < (char)plVar14[1]) goto code_r0x004c22c1;
        if (*(char *)((long)ppuVar10 + -0x50) != (char)plVar14[1]) goto code_r0x004c2312;
        if (*(char *)((long)ppuVar10 + -0x4f) < *(char *)((long)plVar14 + 9)) goto code_r0x004c22c1;
        if (*(char *)((long)ppuVar10 + -0x4f) != *(char *)((long)plVar14 + 9))
        goto code_r0x004c2312;
        if (*(char *)((long)ppuVar10 + -0x4e) < *(char *)((long)plVar14 + 10))
        goto code_r0x004c22c1;
        if (*(char *)((long)ppuVar10 + -0x4e) != *(char *)((long)plVar14 + 10))
        goto code_r0x004c2312;
        if (*(char *)((long)ppuVar10 + -0x4d) < *(char *)((long)plVar14 + 0xb))
        goto code_r0x004c22c1;
        if ((*(char *)((long)ppuVar10 + -0x4d) != *(char *)((long)plVar14 + 0xb)) ||
           (uVar21 = 0xffffffff, *(char *)((long)plVar14 + 0xc) <= *(char *)((long)ppuVar10 + -0x4c)
           )) goto code_r0x004c2312;
      }
    }
    else {
code_r0x004c2319:
      if (lVar5 == -0x8000000000000000) {
        *(undefined8 *)((long)ppuVar10 + -0x48) = 0;
        *(undefined8 *)((long)ppuVar10 + -0x40) = 0;
        *(undefined8 *)((long)ppuVar10 + -0x58) = 0;
        *(undefined8 *)((long)ppuVar10 + -0x50) = 0;
        plVar19 = (long *)((long)ppuVar10 + -0x58);
        *(undefined **)((long)ppuVar10 + -0x80) = &UNK_004c233c;
        _ZNK4absl12lts_2026052613time_internal4cctz9time_zone6lookupERKNSt3__16chrono10time_pointINS5_12system_clockENS5_8durationIlNS4_5ratioILl1ELl1EEEEEEE
                  (plVar19,param_2,(undefined1 *)((long)ppuVar10 + -0x68));
        if ((*plVar14 < *(long *)((long)ppuVar10 + -0x58)) ||
           ((plVar15 = param_2, *plVar14 == *(long *)((long)ppuVar10 + -0x58) &&
            (((char)plVar14[1] < *(char *)((long)ppuVar10 + -0x50) ||
             (((char)plVar14[1] == *(char *)((long)ppuVar10 + -0x50) &&
              ((*(char *)((long)plVar14 + 9) < *(char *)((long)ppuVar10 + -0x4f) ||
               ((*(char *)((long)plVar14 + 9) == *(char *)((long)ppuVar10 + -0x4f) &&
                ((*(char *)((long)plVar14 + 10) < *(char *)((long)ppuVar10 + -0x4e) ||
                 ((*(char *)((long)plVar14 + 10) == *(char *)((long)ppuVar10 + -0x4e) &&
                  ((*(char *)((long)plVar14 + 0xb) < *(char *)((long)ppuVar10 + -0x4d) ||
                   ((*(char *)((long)plVar14 + 0xb) == *(char *)((long)ppuVar10 + -0x4d) &&
                    (*(char *)((long)plVar14 + 0xc) < *(char *)((long)ppuVar10 + -0x4c))))))))))))))
              ))))))) {
          uVar21 = 0xffffffff;
          lVar5 = unaff_R13;
          goto code_r0x004c23b7;
        }
      }
      param_2 = plVar15;
      uVar21 = 0;
      plVar19 = (long *)0x0;
      *(undefined **)((long)ppuVar10 + -0x80) = &UNK_004c2396;
      lVar5 = _ZNSt3__16chrono12system_clock11from_time_tEl();
      puVar7 = (undefined8 *)0xbce4217d2849cb25;
      lVar5 = SUB168(SEXT816(lVar5) * SEXT816(-0x431bde82d7b634db),8);
      lVar5 = ((lVar5 >> 0x12) - (lVar5 >> 0x3f)) + *plVar18;
    }
code_r0x004c23b7:
    if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)((long)ppuVar10 + -0x38)) {
      auVar23._8_8_ = uVar21;
      auVar23._0_8_ = lVar5;
      return auVar23;
    }
    *(code **)((long)ppuVar10 + -0x80) =
         _ZNK4absl12lts_202605268TimeZone14NextTransitionENS0_4TimeEPNS1_15CivilTransitionE;
    func_0x0099bd00();
    *(undefined1 **)((long)ppuVar10 + -0x80) = (undefined1 *)((long)ppuVar10 + -8);
    *(long *)((long)ppuVar10 + -0x88) = lVar5;
    *(long **)((long)ppuVar10 + -0x90) = plVar14;
    *(long **)((long)ppuVar10 + -0x98) = plVar18;
    *(undefined8 *)((long)ppuVar10 + -0xa0) = *(undefined8 *)(in_FS_OFFSET + 0x28);
    *(undefined **)((long)ppuVar10 + -0xd8) = &UNK_004c240a;
    lVar5 = _ZNSt3__16chrono12system_clock11from_time_tEl(0);
    *(long *)((long)ppuVar10 + -200) = lVar5 / 1000000 + (long)param_2;
    *(undefined8 *)((long)ppuVar10 + -0xb8) = 0;
    *(undefined8 *)((long)ppuVar10 + -0xb0) = 0;
    *(undefined8 *)((long)ppuVar10 + -0xa8) = 0;
    *(undefined8 *)((long)ppuVar10 + -0xc0) = 0x7b2;
    *(undefined2 *)((long)ppuVar10 + -0xb8) = 0x101;
    *(undefined8 *)((long)ppuVar10 + -0xb0) = 0x7b2;
    *(undefined2 *)((long)ppuVar10 + -0xa8) = 0x101;
    puVar16 = (undefined1 *)((long)ppuVar10 + -200);
    *(undefined **)((long)ppuVar10 + -0xd8) = &UNK_004c2467;
    plVar15 = plVar19;
    auVar24 = _ZNK4absl12lts_2026052613time_internal4cctz9time_zone15next_transitionERKNSt3__16chrono10time_pointINS5_12system_clockENS5_8durationIlNS4_5ratioILl1ELl1EEEEEEEPNS3_16civil_transitionE
                        (plVar19,puVar16,(undefined1 *)((long)ppuVar10 + -0xc0));
    uVar9 = auVar24._8_8_;
    if (auVar24[0] != '\0') {
      uVar2 = *(undefined8 *)((long)ppuVar10 + -0xb8);
      *puVar7 = *(undefined8 *)((long)ppuVar10 + -0xc0);
      *(int *)(puVar7 + 1) = (int)uVar2;
      *(char *)((long)puVar7 + 0xc) = (char)((ulong)uVar2 >> 0x20);
      uVar3 = *(ulong *)((long)ppuVar10 + -0xa8);
      puVar7[2] = *(undefined8 *)((long)ppuVar10 + -0xb0);
      *(int *)(puVar7 + 3) = (int)uVar3;
      uVar9 = uVar3 >> 0x20;
      *(char *)((long)puVar7 + 0x1c) = (char)(uVar3 >> 0x20);
    }
    puVar6 = *(undefined8 **)(in_FS_OFFSET + 0x28);
    if (puVar6 == *(undefined8 **)((long)ppuVar10 + -0xa0)) {
      auVar24._8_8_ = uVar9;
      return auVar24;
    }
    *(undefined **)((long)ppuVar10 + -0xd8) = &UNK_004c24b5;
    func_0x0099bd00();
    *(undefined1 **)((long)ppuVar10 + -0xd8) = (undefined1 *)((long)ppuVar10 + -0x80);
    *(long **)((long)ppuVar10 + -0xe0) = param_2;
    *(long **)((long)ppuVar10 + -0xe8) = plVar19;
    *(undefined8 **)((long)ppuVar10 + -0xf0) = puVar7;
    *(undefined8 *)((long)ppuVar10 + -0xf8) = *(undefined8 *)(in_FS_OFFSET + 0x28);
    *(undefined **)((long)ppuVar10 + -0x130) = &UNK_004c24ea;
    lVar5 = _ZNSt3__16chrono12system_clock11from_time_tEl(0);
    *(undefined1 **)((long)ppuVar10 + -0x120) = puVar16 + lVar5 / 1000000;
    *(undefined8 *)((long)ppuVar10 + -0x110) = 0;
    *(undefined8 *)((long)ppuVar10 + -0x108) = 0;
    *(undefined8 *)((long)ppuVar10 + -0x100) = 0;
    *(undefined8 *)((long)ppuVar10 + -0x118) = 0x7b2;
    *(undefined2 *)((long)ppuVar10 + -0x110) = 0x101;
    *(undefined8 *)((long)ppuVar10 + -0x108) = 0x7b2;
    *(undefined2 *)((long)ppuVar10 + -0x100) = 0x101;
    puVar17 = (undefined1 *)((long)ppuVar10 + -0x120);
    *(undefined **)((long)ppuVar10 + -0x130) = &UNK_004c2547;
    param_1 = plVar15;
    auVar24 = _ZNK4absl12lts_2026052613time_internal4cctz9time_zone15prev_transitionERKNSt3__16chrono10time_pointINS5_12system_clockENS5_8durationIlNS4_5ratioILl1ELl1EEEEEEEPNS3_16civil_transitionE
                        (plVar15,puVar17,(undefined1 *)((long)ppuVar10 + -0x118));
    uVar9 = auVar24._8_8_;
    auVar25._0_8_ = auVar24._0_8_;
    if (auVar24[0] != '\0') {
      uVar2 = *(undefined8 *)((long)ppuVar10 + -0x110);
      *puVar6 = *(undefined8 *)((long)ppuVar10 + -0x118);
      *(int *)(puVar6 + 1) = (int)uVar2;
      *(char *)((long)puVar6 + 0xc) = (char)((ulong)uVar2 >> 0x20);
      uVar3 = *(ulong *)((long)ppuVar10 + -0x100);
      puVar6[2] = *(undefined8 *)((long)ppuVar10 + -0x108);
      *(int *)(puVar6 + 3) = (int)uVar3;
      uVar9 = uVar3 >> 0x20;
      *(char *)((long)puVar6 + 0x1c) = (char)(uVar3 >> 0x20);
    }
    lVar5 = *(long *)(in_FS_OFFSET + 0x28);
    if (lVar5 == *(long *)((long)ppuVar10 + -0xf8)) {
      auVar25._8_8_ = uVar9;
      return auVar25;
    }
    *(undefined **)((long)ppuVar10 + -0x130) = &UNK_004c2595;
    func_0x0099bd00();
    puVar13 = (undefined1 *)((long)ppuVar10 + -0x130);
    *(undefined1 **)((long)ppuVar10 + -0x130) = (undefined1 *)((long)ppuVar10 + -0xd8);
    *(undefined1 **)((long)ppuVar10 + -0x138) = puVar16;
    *(long **)((long)ppuVar10 + -0x140) = plVar15;
    *(undefined8 *)((long)ppuVar10 + -0x148) = 0x8000000000000000;
    *(undefined8 *)((long)ppuVar10 + -0x150) = uVar21;
    *(undefined8 **)((long)ppuVar10 + -0x158) = puVar6;
    *(undefined8 *)((long)ppuVar10 + -0x160) = *(undefined8 *)(in_FS_OFFSET + 0x28);
    *(undefined8 *)((long)ppuVar10 + -0x198) = *(undefined8 *)((long)ppuVar10 + -0x118);
    if (300000000000 < (long)puVar17) {
      ((int *)((long)param_1 + 0x1c))[0] = 0;
      ((int *)((long)param_1 + 0x1c))[1] = 0;
      ((int *)((long)param_1 + 0x24))[0] = 0;
      ((int *)((long)param_1 + 0x24))[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      *param_1 = 0;
      param_1[1] = 0;
      lVar5 = 0x7fffffffffffffff;
code_r0x004c261c:
      param_1[3] = lVar5;
      *(int *)(param_1 + 4) = -1;
      *(long *)((long)param_1 + 0xc) = lVar5;
      *(int *)((long)param_1 + 0x14) = -1;
      *param_1 = lVar5;
      *(int *)(param_1 + 1) = -1;
      *(undefined1 *)(param_1 + 5) = 1;
      if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)((long)ppuVar10 + -0x160)) {
        auVar26._8_8_ = extraout_RDX;
        auVar26._0_8_ = param_1;
        return auVar26;
      }
      *(undefined **)((long)ppuVar10 + -0x1e8) = &UNK_004c27ea;
      func_0x0099bd00();
      puVar13 = (undefined1 *)((long)ppuVar10 + -0x1e8);
      *(undefined1 **)((long)ppuVar10 + -0x1e8) = (undefined1 *)((long)ppuVar10 + -0x130);
      *(undefined1 **)((long)ppuVar10 + -0x1f0) = puVar16;
      *(long **)((long)ppuVar10 + -0x1f8) = plVar15;
      *(undefined8 *)((long)ppuVar10 + -0x200) = 0x8000000000000000;
      *(undefined8 *)((long)ppuVar10 + -0x208) = uVar21;
      *(undefined8 **)((long)ppuVar10 + -0x210) = puVar6;
      *(undefined8 *)((long)ppuVar10 + -0x218) = *(undefined8 *)(in_FS_OFFSET + 0x28);
      *(undefined1 **)((long)ppuVar10 + -0x250) = puVar17;
      iVar8 = *(int *)((long)param_1 + 0x14);
      iVar20 = (int)param_1[2];
      iVar4 = 0x7ffffff4;
      if (iVar20 != 0x7fffffff) {
        iVar4 = iVar20 + 1;
      }
      iVar1 = *(int *)((long)param_1 + 0xc);
      puVar7 = (undefined8 *)(long)(int)param_1[1];
      param_5 = (long)*(int *)((long)param_1 + 4);
      param_6 = (long)(int)*param_1;
      *(undefined **)((long)ppuVar10 + -0x260) = &UNK_004c2852;
      auVar24 = _ZN4absl12lts_2026052613time_internal4cctz6detail4impl5n_secEllllll
                          ((long)iVar8 + 0x76c + (ulong)(iVar20 == 0x7fffffff),(long)iVar4,
                           (long)iVar1);
      *(undefined8 *)((long)ppuVar10 + -0x220) = 0;
      *(long *)((long)ppuVar10 + -0x228) = auVar24._0_8_;
      *(int *)((long)ppuVar10 + -0x220) = auVar24._8_4_;
      *(char *)((long)ppuVar10 + -0x21c) = auVar24[0xc];
      *(undefined8 *)((long)ppuVar10 + -0x238) = 0;
      *(undefined8 *)((long)ppuVar10 + -0x230) = 0;
      *(undefined8 *)((long)ppuVar10 + -0x248) = 0;
      *(undefined8 *)((long)ppuVar10 + -0x240) = 0;
      param_2 = (long *)((long)ppuVar10 + -0x250);
      plVar14 = (long *)((long)ppuVar10 + -0x228);
      *(undefined **)((long)ppuVar10 + -0x260) = &UNK_004c288a;
      _ZNK4absl12lts_2026052613time_internal4cctz9time_zone6lookupERKNS2_6detail10civil_timeINS4_10second_tagEEE
                ((undefined1 *)((long)ppuVar10 + -0x248),param_2,plVar14);
      plVar18 = (long *)((long)ppuVar10 + -0x240);
      puVar12 = (undefined8 *)((long)ppuVar10 + -0x260);
      ppuVar10 = (undefined **)((long)ppuVar10 + -0x260);
      *puVar12 = &UNK_004c2899;
      plVar19 = plVar14;
      plVar22 = param_2;
      goto code_r0x004c2250;
    }
    if ((long)puVar17 < -300000000000) {
      ((int *)((long)param_1 + 0x1c))[0] = 0;
      ((int *)((long)param_1 + 0x1c))[1] = 0;
      ((int *)((long)param_1 + 0x24))[0] = 0;
      ((int *)((long)param_1 + 0x24))[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      *param_1 = 0;
      param_1[1] = 0;
      lVar5 = -0x8000000000000000;
      goto code_r0x004c261c;
    }
    *(int *)((long)ppuVar10 + -0x1b0) = (int)extraout_RDX;
    *(int *)((long)ppuVar10 + -0x1a4) = (int)lVar5;
    *(int *)((long)ppuVar10 + -0x1a0) = iVar8;
    puVar7 = (undefined8 *)(long)iVar8;
    *(int *)((long)ppuVar10 + -0x19c) = iVar20;
    param_5 = (long)iVar20;
    param_6 = (long)*(int *)((long)ppuVar10 + -0x120);
    *(long **)((long)ppuVar10 + -0x1d8) = param_1;
    *(undefined1 **)((long)ppuVar10 + -0x1e0) = puVar17;
    *(undefined **)((long)ppuVar10 + -0x1e8) = &UNK_004c269f;
    auVar24 = _ZN4absl12lts_2026052613time_internal4cctz6detail4impl5n_secEllllll
                        (puVar17,(long)(int)extraout_RDX,(long)(int)lVar5);
    *(undefined8 *)((long)ppuVar10 + -0x168) = 0;
    *(long *)((long)ppuVar10 + -0x1c8) = auVar24._0_8_;
    *(long *)((long)ppuVar10 + -0x170) = auVar24._0_8_;
    *(ulong *)((long)ppuVar10 + -0x1b8) = auVar24._8_8_ >> 0x20;
    *(char *)((long)ppuVar10 + -0x164) = auVar24[0xc];
    *(ulong *)((long)ppuVar10 + -0x1d0) = auVar24._8_8_;
    *(int *)((long)ppuVar10 + -0x168) = auVar24._8_4_;
    *(undefined8 *)((long)ppuVar10 + -0x180) = 0;
    *(undefined8 *)((long)ppuVar10 + -0x178) = 0;
    *(undefined8 *)((long)ppuVar10 + -400) = 0;
    *(undefined8 *)((long)ppuVar10 + -0x188) = 0;
    param_1 = (long *)((long)ppuVar10 + -0x180);
    param_2 = (long *)((long)ppuVar10 + -0x198);
    plVar14 = (long *)((long)ppuVar10 + -0x170);
    *(undefined **)((long)ppuVar10 + -0x1e8) = &UNK_004c26f3;
    _ZNK4absl12lts_2026052613time_internal4cctz9time_zone6lookupERKNS2_6detail10civil_timeINS4_10second_tagEEE
              ((undefined1 *)((long)ppuVar10 + -400),param_2,plVar14);
    *(ulong *)((long)ppuVar10 + -0x1c0) = (ulong)*(uint *)((long)ppuVar10 + -400);
    *(uint *)((long)ppuVar10 + -0x1ac) = *(uint *)((long)ppuVar10 + -400) - 3;
    plVar18 = (long *)((long)ppuVar10 + -0x188);
    puVar11 = (undefined8 *)((long)ppuVar10 + -0x1e8);
    ppuVar10 = (undefined **)((long)ppuVar10 + -0x1e8);
    *puVar11 = &UNK_004c2712;
    plVar19 = plVar14;
    plVar22 = param_2;
  } while( true );
}


