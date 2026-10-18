// Function: _ZNK4absl12lts_2026052613time_internal4cctz12TimeZoneInfo9BreakTimeERKNSt3__16chrono10time_pointINS5_12system_clockENS5_8durationIlNS4_5ratioILl1ELl1EEEEEEE
// Address: 004c6aa0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Possible PIC construction at 0x004c715a: Changing call to branch */
/* WARNING: Possible PIC construction at 0x004c7186: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x004c715f) */
/* WARNING: Removing unreachable block (ram,0x004c718b) */

long * _ZNK4absl12lts_2026052613time_internal4cctz12TimeZoneInfo9BreakTimeERKNSt3__16chrono10time_pointINS5_12system_clockENS5_8durationIlNS4_5ratioILl1ELl1EEEEEEE
                 (long *param_1,long *param_2,long *param_3)

{
  int *piVar1;
  byte bVar2;
  byte bVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char cVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong *extraout_RDX;
  long *plVar11;
  undefined8 *puVar12;
  undefined **ppuVar13;
  long *plVar14;
  long *plVar15;
  char cVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  char cVar20;
  ulong unaff_R12;
  ulong uVar21;
  ulong uVar22;
  ulong unaff_R13;
  long lVar23;
  ulong uVar24;
  long lVar25;
  long in_FS_OFFSET;
  undefined1 auVar26 [16];
  undefined *puStack_a8;
  undefined1 auStack_a0 [13];
  byte bStack_93;
  byte bStack_92;
  byte bStack_91;
  undefined8 uStack_90;
  ulong uStack_88;
  long lStack_80;
  long *plStack_78;
  ulong uStack_70;
  ulong uStack_68;
  long *plStack_60;
  long lStack_58;
  undefined *apuStack_50 [2];
  long lStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  apuStack_50[0] = &UNK_004c6ace;
  lVar8 = _ZNSt3__16chrono12system_clock11from_time_tEl(0);
  lVar10 = SUB168(SEXT816(lVar8) * SEXT816(-0x431bde82d7b634db),8);
  lVar8 = *param_3;
  lVar10 = ((lVar10 >> 0x12) - (lVar10 >> 0x3f)) + lVar8;
  plVar14 = (long *)param_2[1];
  if (lVar10 < *plVar14) {
    lVar25 = param_2[4];
    unaff_R12 = (ulong)((uint)*(byte *)(param_2 + 7) * 0x30);
    apuStack_50[0] = &UNK_004c6b4f;
    auVar26 = _ZN4absl12lts_2026052613time_internal4cctz6detail4impl5n_secEllllll
                        (0x7b2,1,1,0,lVar10 / 0x3c,lVar10 % 0x3c);
    plVar17 = auVar26._0_8_;
    cVar16 = auVar26[8];
    cVar7 = auVar26[9];
    cVar20 = auVar26[10];
    lVar8 = (long)auVar26[0xb] + (long)(*(int *)(lVar25 + unaff_R12) / 0x3c);
    lVar10 = (long)(*(int *)(lVar25 + unaff_R12) % 0x3c) + (long)auVar26[0xc];
code_r0x004c6bb1:
    plVar14 = (long *)(long)cVar16;
    apuStack_50[0] = &UNK_004c6bb6;
    auVar26 = _ZN4absl12lts_2026052613time_internal4cctz6detail4impl5n_secEllllll
                        (plVar17,plVar14,(long)cVar7,(long)cVar20,lVar8,lVar10);
    *param_1 = auVar26._0_8_;
    param_1[1] = auVar26._8_8_ & 0xffffffffff;
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(lVar25 + unaff_R12);
    *(undefined1 *)((long)param_1 + 0x14) = *(undefined1 *)(lVar25 + 0x28 + unaff_R12);
    bVar2 = *(byte *)(lVar25 + 0x29 + unaff_R12);
    bVar3 = *(byte *)(param_2 + 8);
joined_r0x004c6f07:
    if ((bVar3 & 1) == 0) {
      lVar8 = (long)param_2 + 0x41;
    }
    else {
      lVar8 = param_2[10];
    }
    param_2 = (long *)(lVar8 + (ulong)bVar2);
    param_1[3] = (long)param_2;
  }
  else {
    lVar23 = param_2[2] - (long)plVar14;
    plVar15 = (long *)((long)plVar14 + lVar23 + -0x30);
    lVar9 = lVar10 - *plVar15;
    if (lVar10 < *plVar15) {
      uVar22 = (lVar23 >> 4) * -0x5555555555555555;
      lVar25 = 0xffffffffff;
      uVar24 = param_2[0x13];
      if ((((uVar24 == 0) || (uVar22 <= uVar24)) ||
          (lVar8 = lVar10 - plVar14[uVar24 * 6 + -6], lVar10 < plVar14[uVar24 * 6 + -6])) ||
         (plVar15 = plVar14 + uVar24 * 6, *plVar15 <= lVar10)) {
        plVar15 = plVar14;
        if ((long *)param_2[2] != plVar14) {
          do {
            uVar21 = uVar22 >> 1;
            uVar24 = uVar21;
            if (plVar15[uVar21 * 6] <= lVar10) {
              uVar24 = ~uVar21 + uVar22;
              plVar15 = plVar15 + uVar21 * 6 + 6;
            }
            uVar22 = uVar24;
          } while (uVar24 != 0);
        }
        param_2[0x13] = ((long)plVar15 - (long)plVar14 >> 4) * -0x5555555555555555;
        bVar2 = *(byte *)(plVar15 + -5);
        unaff_R12 = param_2[4];
        plVar17 = (long *)plVar15[-4];
        lVar8 = plVar15[-3];
        cVar20 = (char)lVar8;
        cVar16 = (char)((ulong)lVar8 >> 8);
        cVar7 = (char)((ulong)lVar8 >> 0x10);
        lVar23 = (long)(char)((ulong)lVar8 >> 0x18) + (lVar10 - plVar15[-6]) / 0x3c;
        lVar8 = (lVar10 - plVar15[-6]) % 0x3c + (long)(char)((ulong)lVar8 >> 0x20);
      }
      else {
        bVar2 = *(byte *)(plVar15 + -5);
        unaff_R12 = param_2[4];
        plVar17 = (long *)plVar15[-4];
        lVar10 = plVar15[-3];
        cVar20 = (char)lVar10;
        cVar16 = (char)((ulong)lVar10 >> 8);
        cVar7 = (char)((ulong)lVar10 >> 0x10);
        lVar23 = (long)(char)((ulong)lVar10 >> 0x18) + lVar8 / 0x3c;
        lVar8 = lVar8 % 0x3c + (long)(char)((ulong)lVar10 >> 0x20);
      }
      unaff_R13 = (ulong)((uint)bVar2 * 0x30);
      plVar14 = (long *)(long)cVar20;
      apuStack_50[0] = &UNK_004c6ee2;
      auVar26 = _ZN4absl12lts_2026052613time_internal4cctz6detail4impl5n_secEllllll
                          (plVar17,plVar14,(long)cVar16,(long)cVar7,lVar23,lVar8);
      *param_1 = auVar26._0_8_;
      param_1[1] = auVar26._8_8_ & 0xffffffffff;
      *(undefined4 *)(param_1 + 2) = *(undefined4 *)(unaff_R12 + unaff_R13);
      *(undefined1 *)((long)param_1 + 0x14) = *(undefined1 *)(unaff_R12 + 0x28 + unaff_R13);
      bVar2 = *(byte *)(unaff_R12 + 0x29 + unaff_R13);
      bVar3 = *(byte *)(param_2 + 8);
      goto joined_r0x004c6f07;
    }
    if ((char)param_2[0x11] != '\x01') {
      lVar25 = param_2[4];
      unaff_R12 = (ulong)((uint)*(byte *)((long)plVar14 + lVar23 + -0x28) * 0x30);
      plVar17 = *(long **)((long)plVar14 + lVar23 + -0x20);
      uVar5 = *(undefined8 *)((long)plVar14 + lVar23 + -0x18);
      cVar16 = (char)uVar5;
      cVar7 = (char)((ulong)uVar5 >> 8);
      cVar20 = (char)((ulong)uVar5 >> 0x10);
      lVar8 = (long)(char)((ulong)uVar5 >> 0x18) + lVar9 / 0x3c;
      lVar10 = lVar9 % 0x3c + (long)(char)((ulong)uVar5 >> 0x20);
      goto code_r0x004c6bb1;
    }
    lVar25 = lVar9 / 0x2f0605980 + 1;
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    lStack_40 = lVar25 * -0x2f0605980 + lVar8;
    apuStack_50[0] = &UNK_004c6d41;
    (**(code **)(*param_2 + 0x10))(param_1,param_2,&lStack_40);
    plVar17 = (long *)(lVar25 * 400 + *param_1);
    plVar14 = (long *)(long)(char)param_1[1];
    apuStack_50[0] = &UNK_004c6d69;
    auVar26 = _ZN4absl12lts_2026052613time_internal4cctz6detail4impl5n_secEllllll
                        (plVar17,plVar14,(long)*(char *)((long)param_1 + 9),
                         (long)*(char *)((long)param_1 + 10),(long)*(char *)((long)param_1 + 0xb),
                         (long)*(char *)((long)param_1 + 0xc));
    *param_1 = auVar26._0_8_;
    param_1[1] = auVar26._8_8_ & 0xffffffffff;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return param_1;
  }
  apuStack_50[0] = &UNK_004c6f3e;
  func_0x0099bd00();
  ppuVar13 = (undefined **)auStack_a0;
  lStack_80 = *(long *)(in_FS_OFFSET + 0x28);
  plVar11 = (long *)plVar14[1];
  plVar4 = (long *)plVar14[2];
  plVar18 = (long *)(((long)plVar4 - (long)plVar11 >> 4) * -0x5555555555555555);
  uVar24 = *extraout_RDX;
  plVar15 = plVar14;
  uVar22 = unaff_R12;
  plStack_78 = param_1;
  uStack_70 = unaff_R12;
  uStack_68 = unaff_R13;
  plStack_60 = param_2;
  lStack_58 = lVar25;
  if (((long)uVar24 < plVar11[2]) ||
     ((uVar24 == plVar11[2] &&
      (((char)extraout_RDX[1] < (char)plVar11[3] ||
       (((char)extraout_RDX[1] == (char)plVar11[3] &&
        ((*(char *)((long)extraout_RDX + 9) < *(char *)((long)plVar11 + 0x19) ||
         ((*(char *)((long)extraout_RDX + 9) == *(char *)((long)plVar11 + 0x19) &&
          ((*(char *)((long)extraout_RDX + 10) < *(char *)((long)plVar11 + 0x1a) ||
           ((*(char *)((long)extraout_RDX + 10) == *(char *)((long)plVar11 + 0x1a) &&
            ((*(char *)((long)extraout_RDX + 0xb) < *(char *)((long)plVar11 + 0x1b) ||
             ((*(char *)((long)extraout_RDX + 0xb) == *(char *)((long)plVar11 + 0x1b) &&
              (*(char *)((long)extraout_RDX + 0xc) < *(char *)((long)plVar11 + 0x1c)))))))))))))))))
      )))) {
code_r0x004c7167:
    if ((plVar11[4] < (long)uVar24) ||
       ((plVar11[4] == uVar24 &&
        (((char)plVar11[5] < (char)extraout_RDX[1] ||
         (((char)plVar11[5] == (char)extraout_RDX[1] &&
          ((*(char *)((long)plVar11 + 0x29) < *(char *)((long)extraout_RDX + 9) ||
           ((*(char *)((long)plVar11 + 0x29) == *(char *)((long)extraout_RDX + 9) &&
            ((*(char *)((long)plVar11 + 0x2a) < *(char *)((long)extraout_RDX + 10) ||
             ((*(char *)((long)plVar11 + 0x2a) == *(char *)((long)extraout_RDX + 10) &&
              ((*(char *)((long)plVar11 + 0x2b) < *(char *)((long)extraout_RDX + 0xb) ||
               ((*(char *)((long)plVar11 + 0x2b) == *(char *)((long)extraout_RDX + 0xb) &&
                (*(char *)((long)plVar11 + 0x2c) < *(char *)((long)extraout_RDX + 0xc)))))))))))))))
         )))))) {
      auVar26._8_8_ = extraout_RDX;
      auVar26._0_8_ = *(long *)(in_FS_OFFSET + 0x28);
      apuStack_50[0] = &stack0xfffffffffffffff8;
      if (*(long *)(in_FS_OFFSET + 0x28) == lStack_80) {
        ppuVar13 = &puStack_a8;
        puStack_a8 = &UNK_004c718b;
        plVar18 = plVar17;
        apuStack_50[0] = &stack0xfffffffffffffff8;
        goto code_r0x004c7760;
      }
    }
    else {
      plVar15 = (long *)(ulong)((uint)*(byte *)(plVar14 + 7) * 0x30);
      piVar1 = (int *)(plVar14[4] + (long)plVar15);
      uVar21 = *(ulong *)(plVar14[4] + 0x18 + (long)plVar15);
      if (((long)uVar24 < (long)uVar21) ||
         ((uVar24 == uVar21 &&
          (((char)extraout_RDX[1] < (char)piVar1[8] ||
           (((char)extraout_RDX[1] == (char)piVar1[8] &&
            ((*(char *)((long)extraout_RDX + 9) < *(char *)((long)piVar1 + 0x21) ||
             ((*(char *)((long)extraout_RDX + 9) == *(char *)((long)piVar1 + 0x21) &&
              ((*(char *)((long)extraout_RDX + 10) < *(char *)((long)piVar1 + 0x22) ||
               ((*(char *)((long)extraout_RDX + 10) == *(char *)((long)piVar1 + 0x22) &&
                ((*(char *)((long)extraout_RDX + 0xb) < *(char *)((long)piVar1 + 0x23) ||
                 ((*(char *)((long)extraout_RDX + 0xb) == *(char *)((long)piVar1 + 0x23) &&
                  (*(char *)((long)extraout_RDX + 0xc) < (char)piVar1[9])))))))))))))))))))) {
        *plVar17 = 0;
        lVar8 = -0x8000000000000000;
        apuStack_50[0] = &stack0xfffffffffffffff8;
code_r0x004c71f6:
        plVar17[3] = lVar8;
        plVar17[2] = lVar8;
        plVar17[1] = lVar8;
      }
      else {
        uVar21 = extraout_RDX[1];
        puStack_a8 = &UNK_004c727e;
        apuStack_50[0] = &stack0xfffffffffffffff8;
        auVar26 = _ZN4absl12lts_2026052613time_internal4cctz6detail4impl5n_secEllllll
                            (0x7b2,1,1,0,(long)(*piVar1 / 0x3c),(long)(*piVar1 % 0x3c));
        lVar8 = auVar26._8_8_;
        plVar15 = (long *)(ulong)(uint)(int)(char)uVar21;
        puStack_a8 = &UNK_004c72a4;
        lVar10 = _ZN4absl12lts_2026052613time_internal4cctz6detail4impl14day_differenceElaalaa
                           (uVar24,plVar15,(int)(char)(uVar21 >> 8),auVar26._0_8_,(int)auVar26[8],
                            (int)auVar26[9]);
        lVar10 = (((long)(char)(uVar21 >> 0x10) + lVar10 * 0x18) - (long)auVar26[10]) * 0x3c +
                 ((long)(char)(uVar21 >> 0x18) - (long)auVar26[0xb]);
        uVar22 = uVar21 >> 0x20;
        lVar23 = (long)(char)(uVar21 >> 0x20);
code_r0x004c76e3:
        uVar24 = lVar23 - (char)((ulong)lVar8 >> 0x20);
        plVar14 = (long *)(lVar10 * 0x3c);
        plVar18 = (long *)0x0;
        puStack_a8 = &UNK_004c76f9;
        lVar8 = _ZNSt3__16chrono12system_clock11from_time_tEl();
        lVar8 = lVar8 / 1000000 + uVar24 + (long)plVar14;
        *plVar17 = 0;
        plVar17[3] = lVar8;
        plVar17[2] = lVar8;
        plVar17[1] = lVar8;
      }
code_r0x004c772d:
      if (*(long *)(in_FS_OFFSET + 0x28) == lStack_80) {
        return plVar17;
      }
    }
  }
  else {
    if (((long)uVar24 < plVar4[-4]) ||
       ((plVar15 = plVar4, uVar24 == plVar4[-4] &&
        (((char)extraout_RDX[1] < (char)plVar4[-3] ||
         (((char)extraout_RDX[1] == (char)plVar4[-3] &&
          ((*(char *)((long)extraout_RDX + 9) < *(char *)((long)plVar4 + -0x17) ||
           ((*(char *)((long)extraout_RDX + 9) == *(char *)((long)plVar4 + -0x17) &&
            ((*(char *)((long)extraout_RDX + 10) < *(char *)((long)plVar4 + -0x16) ||
             ((*(char *)((long)extraout_RDX + 10) == *(char *)((long)plVar4 + -0x16) &&
              ((*(char *)((long)extraout_RDX + 0xb) < *(char *)((long)plVar4 + -0x15) ||
               ((*(char *)((long)extraout_RDX + 0xb) == *(char *)((long)plVar4 + -0x15) &&
                (*(char *)((long)extraout_RDX + 0xc) < *(char *)((long)plVar4 + -0x14)))))))))))))))
         )))))) {
      plVar19 = (long *)plVar14[0x14];
      if ((plVar19 != (long *)0x0) && (plVar19 < plVar18)) {
        plVar15 = plVar11 + (long)plVar19 * 6;
        if ((plVar11[(long)plVar19 * 6 + -4] <= (long)uVar24) &&
           (((uVar24 != plVar11[(long)plVar19 * 6 + -4] ||
             (((char)plVar15[-3] <= (char)extraout_RDX[1] &&
              (((char)extraout_RDX[1] != (char)plVar15[-3] ||
               ((*(char *)((long)plVar15 + -0x17) <= *(char *)((long)extraout_RDX + 9) &&
                ((*(char *)((long)extraout_RDX + 9) != *(char *)((long)plVar15 + -0x17) ||
                 ((*(char *)((long)plVar15 + -0x16) <= *(char *)((long)extraout_RDX + 10) &&
                  ((*(char *)((long)extraout_RDX + 10) != *(char *)((long)plVar15 + -0x16) ||
                   ((*(char *)((long)plVar15 + -0x15) <= *(char *)((long)extraout_RDX + 0xb) &&
                    ((*(char *)((long)extraout_RDX + 0xb) != *(char *)((long)plVar15 + -0x15) ||
                     (*(char *)((long)plVar15 + -0x14) <= *(char *)((long)extraout_RDX + 0xc))))))))
                  ))))))))))) &&
            (((long)uVar24 < plVar15[2] ||
             ((uVar24 == plVar15[2] &&
              (((char)extraout_RDX[1] < (char)plVar15[3] ||
               (((char)extraout_RDX[1] == (char)plVar15[3] &&
                ((*(char *)((long)extraout_RDX + 9) < *(char *)((long)plVar15 + 0x19) ||
                 ((*(char *)((long)extraout_RDX + 9) == *(char *)((long)plVar15 + 0x19) &&
                  ((*(char *)((long)extraout_RDX + 10) < *(char *)((long)plVar15 + 0x1a) ||
                   ((*(char *)((long)extraout_RDX + 10) == *(char *)((long)plVar15 + 0x1a) &&
                    ((*(char *)((long)extraout_RDX + 0xb) < *(char *)((long)plVar15 + 0x1b) ||
                     ((*(char *)((long)extraout_RDX + 0xb) == *(char *)((long)plVar15 + 0x1b) &&
                      (*(char *)((long)extraout_RDX + 0xc) < *(char *)((long)plVar15 + 0x1c)))))))))
                  )))))))))))))))) goto code_r0x004c7129;
      }
      plVar15 = plVar11;
      if (plVar4 != plVar11) {
        bStack_93 = *(byte *)((long)extraout_RDX + 10);
        bStack_92 = *(byte *)((long)extraout_RDX + 0xb);
        bStack_91 = *(byte *)((long)extraout_RDX + 0xc);
        do {
          plVar19 = (long *)((ulong)plVar18 >> 1);
          uVar21 = (long)plVar19 * 0x30;
          uVar22 = uVar21;
          if (plVar15[(long)plVar19 * 6 + 2] <= (long)uVar24) {
            if (uVar24 == plVar15[(long)plVar19 * 6 + 2]) {
              if ((char)extraout_RDX[1] < (char)plVar15[(long)plVar19 * 6 + 3])
              goto code_r0x004c704d;
              if ((char)extraout_RDX[1] == (char)plVar15[(long)plVar19 * 6 + 3]) {
                cVar16 = *(char *)((long)plVar15 + uVar21 + 0x19);
                if (*(char *)((long)extraout_RDX + 9) < cVar16) goto code_r0x004c704d;
                if (*(char *)((long)extraout_RDX + 9) == cVar16) {
                  uVar22 = (ulong)bStack_93;
                  bVar2 = *(byte *)((long)plVar15 + uVar21 + 0x1a);
                  if ((char)bStack_93 < (char)bVar2) goto code_r0x004c704d;
                  if (bStack_93 == bVar2) {
                    uVar22 = (ulong)bStack_92;
                    bVar2 = *(byte *)((long)plVar15 + uVar21 + 0x1b);
                    if (((char)bStack_92 < (char)bVar2) ||
                       ((bStack_92 == bVar2 &&
                        (uVar22 = (ulong)bStack_91,
                        (char)bStack_91 < *(char *)((long)plVar15 + uVar21 + 0x1c)))))
                    goto code_r0x004c704d;
                  }
                }
              }
            }
            plVar15 = plVar15 + (long)plVar19 * 6 + 6;
            plVar19 = (long *)(~(ulong)plVar19 + (long)plVar18);
          }
code_r0x004c704d:
          plVar18 = plVar19;
        } while (plVar19 != (long *)0x0);
        plVar18 = (long *)0x0;
      }
      plVar14[0x14] = ((long)plVar15 - (long)plVar11 >> 4) * -0x5555555555555555;
    }
code_r0x004c7129:
    if (plVar15 == plVar11) {
      uVar24 = *extraout_RDX;
      goto code_r0x004c7167;
    }
    if (plVar15 == plVar4) {
      plVar18 = (long *)*extraout_RDX;
      if (((long)plVar18 <= plVar15[-2]) &&
         (((long *)plVar15[-2] != plVar18 ||
          (((char)extraout_RDX[1] <= (char)plVar15[-1] &&
           (((char)plVar15[-1] != (char)extraout_RDX[1] ||
            ((*(char *)((long)extraout_RDX + 9) <= *(char *)((long)plVar15 + -7) &&
             ((*(char *)((long)plVar15 + -7) != *(char *)((long)extraout_RDX + 9) ||
              ((*(char *)((long)extraout_RDX + 10) <= *(char *)((long)plVar15 + -6) &&
               ((*(char *)((long)plVar15 + -6) != *(char *)((long)extraout_RDX + 10) ||
                ((*(char *)((long)extraout_RDX + 0xb) <= *(char *)((long)plVar15 + -5) &&
                 ((*(char *)((long)plVar15 + -5) != *(char *)((long)extraout_RDX + 0xb) ||
                  (*(char *)((long)extraout_RDX + 0xc) <= *(char *)((long)plVar15 + -4))))))))))))))
            ))))))) {
        apuStack_50[0] = &stack0xfffffffffffffff8;
        if (*(long *)(in_FS_OFFSET + 0x28) == lStack_80) {
          puStack_a8 = &UNK_004c75ff;
          apuStack_50[0] = &stack0xfffffffffffffff8;
          func_0x004c7940(plVar17,plVar15 + -6);
          return plVar17;
        }
        goto code_r0x004c774e;
      }
      if (((char)plVar14[0x11] != '\x01') || (uVar24 = plVar14[0x12], (long)plVar18 <= (long)uVar24)
         ) {
        lVar8 = plVar14[4] + (ulong)((uint)*(byte *)(plVar15 + -5) * 0x30);
        plVar11 = *(long **)(plVar14[4] + 8 + (ulong)((uint)*(byte *)(plVar15 + -5) * 0x30));
        if (((long)plVar18 <= (long)plVar11) &&
           ((plVar11 != plVar18 ||
            (((char)extraout_RDX[1] <= *(char *)(lVar8 + 0x10) &&
             ((*(char *)(lVar8 + 0x10) != (char)extraout_RDX[1] ||
              ((*(char *)((long)extraout_RDX + 9) <= *(char *)(lVar8 + 0x11) &&
               ((*(char *)(lVar8 + 0x11) != *(char *)((long)extraout_RDX + 9) ||
                ((*(char *)((long)extraout_RDX + 10) <= *(char *)(lVar8 + 0x12) &&
                 ((*(char *)(lVar8 + 0x12) != *(char *)((long)extraout_RDX + 10) ||
                  ((*(char *)((long)extraout_RDX + 0xb) <= *(char *)(lVar8 + 0x13) &&
                   ((*(char *)(lVar8 + 0x13) != *(char *)((long)extraout_RDX + 0xb) ||
                    (*(char *)((long)extraout_RDX + 0xc) <= *(char *)(lVar8 + 0x14))))))))))))))))))
            ))) goto code_r0x004c766c;
        *plVar17 = 0;
        apuStack_50[0] = &stack0xfffffffffffffff8;
code_r0x004c7626:
        lVar8 = 0x7fffffffffffffff;
        goto code_r0x004c71f6;
      }
      uVar24 = ~uVar24 + (long)plVar18;
      uVar22 = (long)uVar24 / 400 + 1;
      puStack_a8 = &UNK_004c7379;
      apuStack_50[0] = &stack0xfffffffffffffff8;
      auVar26 = _ZN4absl12lts_2026052613time_internal4cctz6detail4impl5n_secEllllll
                          (plVar18 + uVar22 * -0x32,(long)(char)extraout_RDX[1],
                           (long)*(char *)((long)extraout_RDX + 9),
                           (long)*(char *)((long)extraout_RDX + 10),
                           (long)*(char *)((long)extraout_RDX + 0xb),
                           (long)*(char *)((long)extraout_RDX + 0xc));
      uStack_90 = auVar26._0_8_;
      uStack_88 = auVar26._8_8_ & 0xffffffffff;
      *plVar17 = 0;
      plVar17[1] = 0;
      plVar17[2] = 0;
      plVar17[3] = 0;
      puStack_a8 = &UNK_004c73a8;
      plVar15 = plVar14;
      plVar18 = plVar17;
      (**(code **)(*plVar14 + 0x18))(plVar17,plVar14,&uStack_90);
      if (0x440d11768f < (long)uVar24) goto code_r0x004c7626;
      lVar8 = uVar22 * -0x2f0605980 + 0x7fffffffffffffff;
      plVar15 = (long *)plVar17[2];
      plVar18 = (long *)(plVar17[1] + uVar22 * 0x2f0605980);
      if (lVar8 < plVar17[1]) {
        plVar18 = (long *)0x7fffffffffffffff;
      }
      plVar11 = plVar15 + uVar22 * 0x5e0c0b30;
      if (lVar8 < (long)plVar15) {
        plVar11 = (long *)0x7fffffffffffffff;
      }
      plVar17[1] = (long)plVar18;
      plVar17[2] = (long)plVar11;
      uVar22 = uVar22 * 0x2f0605980 + plVar17[3];
      if (lVar8 < plVar17[3]) {
        uVar22 = 0x7fffffffffffffff;
      }
      plVar17[3] = uVar22;
      goto code_r0x004c772d;
    }
    plVar18 = (long *)*extraout_RDX;
    if (((long)plVar18 <= plVar15[4]) &&
       (((long *)plVar15[4] != plVar18 ||
        (((char)extraout_RDX[1] <= (char)plVar15[5] &&
         (((char)plVar15[5] != (char)extraout_RDX[1] ||
          ((*(char *)((long)extraout_RDX + 9) <= *(char *)((long)plVar15 + 0x29) &&
           ((*(char *)((long)plVar15 + 0x29) != *(char *)((long)extraout_RDX + 9) ||
            ((*(char *)((long)extraout_RDX + 10) <= *(char *)((long)plVar15 + 0x2a) &&
             ((*(char *)((long)plVar15 + 0x2a) != *(char *)((long)extraout_RDX + 10) ||
              ((*(char *)((long)extraout_RDX + 0xb) <= *(char *)((long)plVar15 + 0x2b) &&
               ((*(char *)((long)plVar15 + 0x2b) != *(char *)((long)extraout_RDX + 0xb) ||
                (*(char *)((long)extraout_RDX + 0xc) <= *(char *)((long)plVar15 + 0x2c))))))))))))))
          ))))))) {
      if (((long)plVar18 <= plVar15[-2]) &&
         (((long *)plVar15[-2] != plVar18 ||
          (((char)extraout_RDX[1] <= (char)plVar15[-1] &&
           (((char)plVar15[-1] != (char)extraout_RDX[1] ||
            ((*(char *)((long)extraout_RDX + 9) <= *(char *)((long)plVar15 + -7) &&
             ((*(char *)((long)plVar15 + -7) != *(char *)((long)extraout_RDX + 9) ||
              ((*(char *)((long)extraout_RDX + 10) <= *(char *)((long)plVar15 + -6) &&
               ((*(char *)((long)plVar15 + -6) != *(char *)((long)extraout_RDX + 10) ||
                ((*(char *)((long)extraout_RDX + 0xb) <= *(char *)((long)plVar15 + -5) &&
                 ((*(char *)((long)plVar15 + -5) != *(char *)((long)extraout_RDX + 0xb) ||
                  (*(char *)((long)extraout_RDX + 0xc) <= *(char *)((long)plVar15 + -4))))))))))))))
            ))))))) {
        apuStack_50[0] = &stack0xfffffffffffffff8;
        if (*(long *)(in_FS_OFFSET + 0x28) == lStack_80) {
          puStack_a8 = &UNK_004c74d8;
          apuStack_50[0] = &stack0xfffffffffffffff8;
          func_0x004c7940(plVar17,plVar15 + -6);
          return plVar17;
        }
        goto code_r0x004c774e;
      }
code_r0x004c766c:
      uVar24 = extraout_RDX[1];
      plVar14 = plVar15 + -4;
      lVar8 = plVar15[-3];
      lVar23 = (long)(char)(uVar24 >> 0x20) + plVar15[-6];
      plVar15 = (long *)(ulong)(uint)(int)(char)uVar24;
      puStack_a8 = &UNK_004c76a8;
      apuStack_50[0] = &stack0xfffffffffffffff8;
      lVar10 = _ZN4absl12lts_2026052613time_internal4cctz6detail4impl14day_differenceElaalaa
                         (plVar18,plVar15,(int)(char)(uVar24 >> 8),*plVar14,(int)(char)lVar8,
                          (int)(char)((ulong)lVar8 >> 8));
      uVar22 = uVar24 >> 0x18 & 0xff;
      lVar10 = (((long)(char)(uVar24 >> 0x10) - (long)(char)((ulong)lVar8 >> 0x10)) + lVar10 * 0x18)
               * 0x3c + ((long)(char)(uVar24 >> 0x18) - (long)(char)((ulong)lVar8 >> 0x18));
      goto code_r0x004c76e3;
    }
    auVar26._8_8_ = extraout_RDX;
    auVar26._0_8_ = *(long *)(in_FS_OFFSET + 0x28);
    apuStack_50[0] = &stack0xfffffffffffffff8;
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_80) {
      ppuVar13 = &puStack_a8;
      puStack_a8 = &UNK_004c715f;
      plVar11 = plVar15;
      plVar18 = plVar17;
      apuStack_50[0] = &stack0xfffffffffffffff8;
      goto code_r0x004c7760;
    }
  }
code_r0x004c774e:
  puStack_a8 = &UNK_004c7753;
  auVar26 = func_0x0099bd00();
  plVar11 = plVar15;
code_r0x004c7760:
  puVar12 = auVar26._8_8_;
  *(undefined ***)((long)ppuVar13 + -8) = apuStack_50;
  *(long **)((long)ppuVar13 + -0x10) = plVar14;
  *(ulong *)((long)ppuVar13 + -0x18) = uVar24;
  *(long **)((long)ppuVar13 + -0x20) = plVar4;
  *(ulong *)((long)ppuVar13 + -0x28) = uVar22;
  *(long **)((long)ppuVar13 + -0x30) = plVar17;
  *(long *)((long)ppuVar13 + -0x38) = auVar26._0_8_;
  *(long **)((long)ppuVar13 + -0x38) = plVar18;
  *plVar18 = 0;
  *(undefined4 *)plVar18 = 1;
  uVar5 = *puVar12;
  uVar6 = puVar12[1];
  lVar8 = plVar11[4];
  lVar10 = plVar11[5];
  lVar23 = *plVar11;
  *(undefined **)((long)ppuVar13 + -0x40) = &UNK_004c77c1;
  lVar8 = _ZN4absl12lts_2026052613time_internal4cctz6detail4impl14day_differenceElaalaa
                    (uVar5,(int)(char)uVar6,(int)(char)((ulong)uVar6 >> 8),lVar8,(int)(char)lVar10,
                     (int)(char)((ulong)lVar10 >> 8));
  *(undefined **)((long)ppuVar13 + -0x40) = &UNK_004c780d;
  lVar9 = _ZNSt3__16chrono12system_clock11from_time_tEl(0);
  plVar14 = *(long **)((long)ppuVar13 + -0x38);
  plVar14[1] = ~(long)(char)((ulong)lVar10 >> 0x20) + lVar9 / 1000000 +
               (char)((ulong)uVar6 >> 0x20) + lVar23 +
               ((((long)(char)((ulong)uVar6 >> 0x10) - (long)(char)((ulong)lVar10 >> 0x10)) +
                lVar8 * 0x18) * 0x3c +
               ((long)(char)((ulong)uVar6 >> 0x18) - (long)(char)((ulong)lVar10 >> 0x18))) * 0x3c;
  lVar8 = *plVar11;
  *(undefined **)((long)ppuVar13 + -0x40) = &UNK_004c7847;
  lVar10 = _ZNSt3__16chrono12system_clock11from_time_tEl(0);
  plVar14[2] = lVar10 / 1000000 + lVar8;
  lVar8 = *plVar11;
  lVar10 = plVar11[2];
  lVar23 = plVar11[3];
  uVar5 = *puVar12;
  uVar6 = puVar12[1];
  *(undefined **)((long)ppuVar13 + -0x40) = &UNK_004c789d;
  lVar10 = _ZN4absl12lts_2026052613time_internal4cctz6detail4impl14day_differenceElaalaa
                     (lVar10,(int)(char)lVar23,(int)(char)((ulong)lVar23 >> 8),uVar5,
                      (int)(char)uVar6,(int)(char)((ulong)uVar6 >> 8));
  *(undefined **)((long)ppuVar13 + -0x40) = &UNK_004c78f8;
  lVar9 = _ZNSt3__16chrono12system_clock11from_time_tEl(0);
  plVar14[3] = lVar9 / 1000000 + (long)(char)((ulong)uVar6 >> 0x20) +
               (lVar8 - (char)((ulong)lVar23 >> 0x20)) +
               ((((long)(char)((ulong)lVar23 >> 0x10) - (long)(char)((ulong)uVar6 >> 0x10)) +
                lVar10 * 0x18) * 0x3c +
               ((long)(char)((ulong)lVar23 >> 0x18) - (long)(char)((ulong)uVar6 >> 0x18))) * -0x3c;
  return plVar14;
}


