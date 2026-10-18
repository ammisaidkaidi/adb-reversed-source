// Function: _ZNK4absl12lts_2026052613time_internal4cctz12TimeZoneInfo8MakeTimeERKNS2_6detail10civil_timeINS4_10second_tagEEE
// Address: 004c6f40
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Possible PIC construction at 0x004c715a: Changing call to branch */
/* WARNING: Possible PIC construction at 0x004c7186: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x004c715f) */
/* WARNING: Removing unreachable block (ram,0x004c718b) */

undefined8 *
_ZNK4absl12lts_2026052613time_internal4cctz12TimeZoneInfo8MakeTimeERKNS2_6detail10civil_timeINS4_10second_tagEEE
          (undefined8 *param_1,long *param_2,ulong *param_3)

{
  int *piVar1;
  char cVar2;
  byte bVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined **ppuVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulong unaff_R12;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  long in_FS_OFFSET;
  undefined1 auVar17 [16];
  undefined *puStack_60;
  undefined1 auStack_58 [13];
  byte bStack_4b;
  byte bStack_4a;
  byte bStack_49;
  undefined8 uStack_48;
  ulong uStack_40;
  long lStack_38;
  
  ppuVar10 = (undefined **)auStack_58;
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  plVar9 = (long *)param_2[1];
  plVar4 = (long *)param_2[2];
  puVar12 = (undefined8 *)(((long)plVar4 - (long)plVar9 >> 4) * -0x5555555555555555);
  uVar16 = *param_3;
  plVar11 = param_2;
  if (((long)uVar16 < plVar9[2]) ||
     ((uVar16 == plVar9[2] &&
      (((char)param_3[1] < (char)plVar9[3] ||
       (((char)param_3[1] == (char)plVar9[3] &&
        ((*(char *)((long)param_3 + 9) < *(char *)((long)plVar9 + 0x19) ||
         ((*(char *)((long)param_3 + 9) == *(char *)((long)plVar9 + 0x19) &&
          ((*(char *)((long)param_3 + 10) < *(char *)((long)plVar9 + 0x1a) ||
           ((*(char *)((long)param_3 + 10) == *(char *)((long)plVar9 + 0x1a) &&
            ((*(char *)((long)param_3 + 0xb) < *(char *)((long)plVar9 + 0x1b) ||
             ((*(char *)((long)param_3 + 0xb) == *(char *)((long)plVar9 + 0x1b) &&
              (*(char *)((long)param_3 + 0xc) < *(char *)((long)plVar9 + 0x1c))))))))))))))))))))) {
code_r0x004c7167:
    if ((plVar9[4] < (long)uVar16) ||
       ((plVar9[4] == uVar16 &&
        (((char)plVar9[5] < (char)param_3[1] ||
         (((char)plVar9[5] == (char)param_3[1] &&
          ((*(char *)((long)plVar9 + 0x29) < *(char *)((long)param_3 + 9) ||
           ((*(char *)((long)plVar9 + 0x29) == *(char *)((long)param_3 + 9) &&
            ((*(char *)((long)plVar9 + 0x2a) < *(char *)((long)param_3 + 10) ||
             ((*(char *)((long)plVar9 + 0x2a) == *(char *)((long)param_3 + 10) &&
              ((*(char *)((long)plVar9 + 0x2b) < *(char *)((long)param_3 + 0xb) ||
               ((*(char *)((long)plVar9 + 0x2b) == *(char *)((long)param_3 + 0xb) &&
                (*(char *)((long)plVar9 + 0x2c) < *(char *)((long)param_3 + 0xc)))))))))))))))))))))
    {
      lVar6 = *(long *)(in_FS_OFFSET + 0x28);
      if (lVar6 == lStack_38) {
        ppuVar10 = &puStack_60;
        puStack_60 = &UNK_004c718b;
        puVar12 = param_1;
        goto code_r0x004c7760;
      }
    }
    else {
      plVar11 = (long *)(ulong)((uint)*(byte *)(param_2 + 7) * 0x30);
      piVar1 = (int *)(param_2[4] + (long)plVar11);
      uVar14 = *(ulong *)(param_2[4] + 0x18 + (long)plVar11);
      if (((long)uVar16 < (long)uVar14) ||
         ((uVar16 == uVar14 &&
          (((char)param_3[1] < (char)piVar1[8] ||
           (((char)param_3[1] == (char)piVar1[8] &&
            ((*(char *)((long)param_3 + 9) < *(char *)((long)piVar1 + 0x21) ||
             ((*(char *)((long)param_3 + 9) == *(char *)((long)piVar1 + 0x21) &&
              ((*(char *)((long)param_3 + 10) < *(char *)((long)piVar1 + 0x22) ||
               ((*(char *)((long)param_3 + 10) == *(char *)((long)piVar1 + 0x22) &&
                ((*(char *)((long)param_3 + 0xb) < *(char *)((long)piVar1 + 0x23) ||
                 ((*(char *)((long)param_3 + 0xb) == *(char *)((long)piVar1 + 0x23) &&
                  (*(char *)((long)param_3 + 0xc) < (char)piVar1[9])))))))))))))))))))) {
        *param_1 = 0;
        uVar5 = 0x8000000000000000;
code_r0x004c71f6:
        param_1[3] = uVar5;
        param_1[2] = uVar5;
        param_1[1] = uVar5;
      }
      else {
        uVar14 = param_3[1];
        puStack_60 = &UNK_004c727e;
        auVar17 = _ZN4absl12lts_2026052613time_internal4cctz6detail4impl5n_secEllllll
                            (0x7b2,1,1,0,(long)(*piVar1 / 0x3c),(long)(*piVar1 % 0x3c));
        lVar6 = auVar17._8_8_;
        plVar11 = (long *)(ulong)(uint)(int)(char)uVar14;
        puStack_60 = &UNK_004c72a4;
        lVar8 = _ZN4absl12lts_2026052613time_internal4cctz6detail4impl14day_differenceElaalaa
                          (uVar16,plVar11,(int)(char)(uVar14 >> 8),auVar17._0_8_,(int)auVar17[8],
                           (int)auVar17[9]);
        lVar8 = (((long)(char)(uVar14 >> 0x10) + lVar8 * 0x18) - (long)auVar17[10]) * 0x3c +
                ((long)(char)(uVar14 >> 0x18) - (long)auVar17[0xb]);
        unaff_R12 = uVar14 >> 0x20;
        lVar15 = (long)(char)(uVar14 >> 0x20);
code_r0x004c76e3:
        uVar16 = lVar15 - (char)((ulong)lVar6 >> 0x20);
        param_2 = (long *)(lVar8 * 0x3c);
        puVar12 = (undefined8 *)0x0;
        puStack_60 = &UNK_004c76f9;
        lVar6 = _ZNSt3__16chrono12system_clock11from_time_tEl();
        lVar6 = lVar6 / 1000000 + uVar16 + (long)param_2;
        *param_1 = 0;
        param_1[3] = lVar6;
        param_1[2] = lVar6;
        param_1[1] = lVar6;
      }
code_r0x004c772d:
      if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
        return param_1;
      }
    }
  }
  else {
    if (((long)uVar16 < plVar4[-4]) ||
       ((plVar11 = plVar4, uVar16 == plVar4[-4] &&
        (((char)param_3[1] < (char)plVar4[-3] ||
         (((char)param_3[1] == (char)plVar4[-3] &&
          ((*(char *)((long)param_3 + 9) < *(char *)((long)plVar4 + -0x17) ||
           ((*(char *)((long)param_3 + 9) == *(char *)((long)plVar4 + -0x17) &&
            ((*(char *)((long)param_3 + 10) < *(char *)((long)plVar4 + -0x16) ||
             ((*(char *)((long)param_3 + 10) == *(char *)((long)plVar4 + -0x16) &&
              ((*(char *)((long)param_3 + 0xb) < *(char *)((long)plVar4 + -0x15) ||
               ((*(char *)((long)param_3 + 0xb) == *(char *)((long)plVar4 + -0x15) &&
                (*(char *)((long)param_3 + 0xc) < *(char *)((long)plVar4 + -0x14))))))))))))))))))))
       ) {
      puVar13 = (undefined8 *)param_2[0x14];
      if ((puVar13 != (undefined8 *)0x0) && (puVar13 < puVar12)) {
        plVar11 = plVar9 + (long)puVar13 * 6;
        if ((plVar9[(long)puVar13 * 6 + -4] <= (long)uVar16) &&
           (((uVar16 != plVar9[(long)puVar13 * 6 + -4] ||
             (((char)plVar11[-3] <= (char)param_3[1] &&
              (((char)param_3[1] != (char)plVar11[-3] ||
               ((*(char *)((long)plVar11 + -0x17) <= *(char *)((long)param_3 + 9) &&
                ((*(char *)((long)param_3 + 9) != *(char *)((long)plVar11 + -0x17) ||
                 ((*(char *)((long)plVar11 + -0x16) <= *(char *)((long)param_3 + 10) &&
                  ((*(char *)((long)param_3 + 10) != *(char *)((long)plVar11 + -0x16) ||
                   ((*(char *)((long)plVar11 + -0x15) <= *(char *)((long)param_3 + 0xb) &&
                    ((*(char *)((long)param_3 + 0xb) != *(char *)((long)plVar11 + -0x15) ||
                     (*(char *)((long)plVar11 + -0x14) <= *(char *)((long)param_3 + 0xc)))))))))))))
               )))))) &&
            (((long)uVar16 < plVar11[2] ||
             ((uVar16 == plVar11[2] &&
              (((char)param_3[1] < (char)plVar11[3] ||
               (((char)param_3[1] == (char)plVar11[3] &&
                ((*(char *)((long)param_3 + 9) < *(char *)((long)plVar11 + 0x19) ||
                 ((*(char *)((long)param_3 + 9) == *(char *)((long)plVar11 + 0x19) &&
                  ((*(char *)((long)param_3 + 10) < *(char *)((long)plVar11 + 0x1a) ||
                   ((*(char *)((long)param_3 + 10) == *(char *)((long)plVar11 + 0x1a) &&
                    ((*(char *)((long)param_3 + 0xb) < *(char *)((long)plVar11 + 0x1b) ||
                     ((*(char *)((long)param_3 + 0xb) == *(char *)((long)plVar11 + 0x1b) &&
                      (*(char *)((long)param_3 + 0xc) < *(char *)((long)plVar11 + 0x1c))))))))))))))
                ))))))))))) goto code_r0x004c7129;
      }
      plVar11 = plVar9;
      if (plVar4 != plVar9) {
        bStack_4b = *(byte *)((long)param_3 + 10);
        bStack_4a = *(byte *)((long)param_3 + 0xb);
        bStack_49 = *(byte *)((long)param_3 + 0xc);
        do {
          puVar13 = (undefined8 *)((ulong)puVar12 >> 1);
          uVar14 = (long)puVar13 * 0x30;
          unaff_R12 = uVar14;
          if (plVar11[(long)puVar13 * 6 + 2] <= (long)uVar16) {
            if (uVar16 == plVar11[(long)puVar13 * 6 + 2]) {
              if ((char)param_3[1] < (char)plVar11[(long)puVar13 * 6 + 3]) goto code_r0x004c704d;
              if ((char)param_3[1] == (char)plVar11[(long)puVar13 * 6 + 3]) {
                cVar2 = *(char *)((long)plVar11 + uVar14 + 0x19);
                if (*(char *)((long)param_3 + 9) < cVar2) goto code_r0x004c704d;
                if (*(char *)((long)param_3 + 9) == cVar2) {
                  unaff_R12 = (ulong)bStack_4b;
                  bVar3 = *(byte *)((long)plVar11 + uVar14 + 0x1a);
                  if ((char)bStack_4b < (char)bVar3) goto code_r0x004c704d;
                  if (bStack_4b == bVar3) {
                    unaff_R12 = (ulong)bStack_4a;
                    bVar3 = *(byte *)((long)plVar11 + uVar14 + 0x1b);
                    if (((char)bStack_4a < (char)bVar3) ||
                       ((bStack_4a == bVar3 &&
                        (unaff_R12 = (ulong)bStack_49,
                        (char)bStack_49 < *(char *)((long)plVar11 + uVar14 + 0x1c)))))
                    goto code_r0x004c704d;
                  }
                }
              }
            }
            plVar11 = plVar11 + (long)puVar13 * 6 + 6;
            puVar13 = (undefined8 *)(~(ulong)puVar13 + (long)puVar12);
          }
code_r0x004c704d:
          puVar12 = puVar13;
        } while (puVar13 != (undefined8 *)0x0);
        puVar12 = (undefined8 *)0x0;
      }
      param_2[0x14] = ((long)plVar11 - (long)plVar9 >> 4) * -0x5555555555555555;
    }
code_r0x004c7129:
    if (plVar11 == plVar9) {
      uVar16 = *param_3;
      goto code_r0x004c7167;
    }
    if (plVar11 == plVar4) {
      puVar12 = (undefined8 *)*param_3;
      if (((long)puVar12 <= plVar11[-2]) &&
         (((undefined8 *)plVar11[-2] != puVar12 ||
          (((char)param_3[1] <= (char)plVar11[-1] &&
           (((char)plVar11[-1] != (char)param_3[1] ||
            ((*(char *)((long)param_3 + 9) <= *(char *)((long)plVar11 + -7) &&
             ((*(char *)((long)plVar11 + -7) != *(char *)((long)param_3 + 9) ||
              ((*(char *)((long)param_3 + 10) <= *(char *)((long)plVar11 + -6) &&
               ((*(char *)((long)plVar11 + -6) != *(char *)((long)param_3 + 10) ||
                ((*(char *)((long)param_3 + 0xb) <= *(char *)((long)plVar11 + -5) &&
                 ((*(char *)((long)plVar11 + -5) != *(char *)((long)param_3 + 0xb) ||
                  (*(char *)((long)param_3 + 0xc) <= *(char *)((long)plVar11 + -4)))))))))))))))))))
         )) {
        if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
          puStack_60 = &UNK_004c75ff;
          func_0x004c7940(param_1,plVar11 + -6);
          return param_1;
        }
        goto code_r0x004c774e;
      }
      if (((char)param_2[0x11] != '\x01') || (uVar16 = param_2[0x12], (long)puVar12 <= (long)uVar16)
         ) {
        lVar6 = param_2[4] + (ulong)((uint)*(byte *)(plVar11 + -5) * 0x30);
        puVar13 = *(undefined8 **)(param_2[4] + 8 + (ulong)((uint)*(byte *)(plVar11 + -5) * 0x30));
        if (((long)puVar12 <= (long)puVar13) &&
           ((puVar13 != puVar12 ||
            (((char)param_3[1] <= *(char *)(lVar6 + 0x10) &&
             ((*(char *)(lVar6 + 0x10) != (char)param_3[1] ||
              ((*(char *)((long)param_3 + 9) <= *(char *)(lVar6 + 0x11) &&
               ((*(char *)(lVar6 + 0x11) != *(char *)((long)param_3 + 9) ||
                ((*(char *)((long)param_3 + 10) <= *(char *)(lVar6 + 0x12) &&
                 ((*(char *)(lVar6 + 0x12) != *(char *)((long)param_3 + 10) ||
                  ((*(char *)((long)param_3 + 0xb) <= *(char *)(lVar6 + 0x13) &&
                   ((*(char *)(lVar6 + 0x13) != *(char *)((long)param_3 + 0xb) ||
                    (*(char *)((long)param_3 + 0xc) <= *(char *)(lVar6 + 0x14)))))))))))))))))))))
        goto code_r0x004c766c;
        *param_1 = 0;
code_r0x004c7626:
        uVar5 = 0x7fffffffffffffff;
        goto code_r0x004c71f6;
      }
      uVar16 = ~uVar16 + (long)puVar12;
      unaff_R12 = (long)uVar16 / 400 + 1;
      puStack_60 = &UNK_004c7379;
      auVar17 = _ZN4absl12lts_2026052613time_internal4cctz6detail4impl5n_secEllllll
                          (puVar12 + unaff_R12 * -0x32,(long)(char)param_3[1],
                           (long)*(char *)((long)param_3 + 9),(long)*(char *)((long)param_3 + 10),
                           (long)*(char *)((long)param_3 + 0xb),(long)*(char *)((long)param_3 + 0xc)
                          );
      uStack_48 = auVar17._0_8_;
      uStack_40 = auVar17._8_8_ & 0xffffffffff;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      puStack_60 = &UNK_004c73a8;
      plVar11 = param_2;
      puVar12 = param_1;
      (**(code **)(*param_2 + 0x18))(param_1,param_2,&uStack_48);
      if (0x440d11768f < (long)uVar16) goto code_r0x004c7626;
      lVar6 = unaff_R12 * -0x2f0605980 + 0x7fffffffffffffff;
      plVar11 = (long *)param_1[2];
      puVar12 = (undefined8 *)(param_1[1] + unaff_R12 * 0x2f0605980);
      if (lVar6 < (long)param_1[1]) {
        puVar12 = (undefined8 *)0x7fffffffffffffff;
      }
      plVar9 = plVar11 + unaff_R12 * 0x5e0c0b30;
      if (lVar6 < (long)plVar11) {
        plVar9 = (long *)0x7fffffffffffffff;
      }
      param_1[1] = puVar12;
      param_1[2] = plVar9;
      unaff_R12 = unaff_R12 * 0x2f0605980 + param_1[3];
      if (lVar6 < (long)param_1[3]) {
        unaff_R12 = 0x7fffffffffffffff;
      }
      param_1[3] = unaff_R12;
      goto code_r0x004c772d;
    }
    puVar12 = (undefined8 *)*param_3;
    if (((long)puVar12 <= plVar11[4]) &&
       (((undefined8 *)plVar11[4] != puVar12 ||
        (((char)param_3[1] <= (char)plVar11[5] &&
         (((char)plVar11[5] != (char)param_3[1] ||
          ((*(char *)((long)param_3 + 9) <= *(char *)((long)plVar11 + 0x29) &&
           ((*(char *)((long)plVar11 + 0x29) != *(char *)((long)param_3 + 9) ||
            ((*(char *)((long)param_3 + 10) <= *(char *)((long)plVar11 + 0x2a) &&
             ((*(char *)((long)plVar11 + 0x2a) != *(char *)((long)param_3 + 10) ||
              ((*(char *)((long)param_3 + 0xb) <= *(char *)((long)plVar11 + 0x2b) &&
               ((*(char *)((long)plVar11 + 0x2b) != *(char *)((long)param_3 + 0xb) ||
                (*(char *)((long)param_3 + 0xc) <= *(char *)((long)plVar11 + 0x2c)))))))))))))))))))
       )) {
      if (((long)puVar12 <= plVar11[-2]) &&
         (((undefined8 *)plVar11[-2] != puVar12 ||
          (((char)param_3[1] <= (char)plVar11[-1] &&
           (((char)plVar11[-1] != (char)param_3[1] ||
            ((*(char *)((long)param_3 + 9) <= *(char *)((long)plVar11 + -7) &&
             ((*(char *)((long)plVar11 + -7) != *(char *)((long)param_3 + 9) ||
              ((*(char *)((long)param_3 + 10) <= *(char *)((long)plVar11 + -6) &&
               ((*(char *)((long)plVar11 + -6) != *(char *)((long)param_3 + 10) ||
                ((*(char *)((long)param_3 + 0xb) <= *(char *)((long)plVar11 + -5) &&
                 ((*(char *)((long)plVar11 + -5) != *(char *)((long)param_3 + 0xb) ||
                  (*(char *)((long)param_3 + 0xc) <= *(char *)((long)plVar11 + -4)))))))))))))))))))
         )) {
        if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
          puStack_60 = &UNK_004c74d8;
          func_0x004c7940(param_1,plVar11 + -6);
          return param_1;
        }
        goto code_r0x004c774e;
      }
code_r0x004c766c:
      uVar16 = param_3[1];
      plVar9 = plVar11 + -4;
      lVar6 = plVar11[-3];
      lVar15 = (long)(char)(uVar16 >> 0x20) + plVar11[-6];
      plVar11 = (long *)(ulong)(uint)(int)(char)uVar16;
      puStack_60 = &UNK_004c76a8;
      lVar8 = _ZN4absl12lts_2026052613time_internal4cctz6detail4impl14day_differenceElaalaa
                        (puVar12,plVar11,(int)(char)(uVar16 >> 8),*plVar9,(int)(char)lVar6,
                         (int)(char)((ulong)lVar6 >> 8));
      unaff_R12 = uVar16 >> 0x18 & 0xff;
      lVar8 = (((long)(char)(uVar16 >> 0x10) - (long)(char)((ulong)lVar6 >> 0x10)) + lVar8 * 0x18) *
              0x3c + ((long)(char)(uVar16 >> 0x18) - (long)(char)((ulong)lVar6 >> 0x18));
      goto code_r0x004c76e3;
    }
    lVar6 = *(long *)(in_FS_OFFSET + 0x28);
    if (lVar6 == lStack_38) {
      ppuVar10 = &puStack_60;
      puStack_60 = &UNK_004c715f;
      plVar9 = plVar11;
      puVar12 = param_1;
      goto code_r0x004c7760;
    }
  }
code_r0x004c774e:
  puStack_60 = &UNK_004c7753;
  auVar17 = func_0x0099bd00();
  param_3 = auVar17._8_8_;
  lVar6 = auVar17._0_8_;
  plVar9 = plVar11;
code_r0x004c7760:
  *(undefined1 **)((long)ppuVar10 + -8) = &stack0xfffffffffffffff8;
  *(long **)((long)ppuVar10 + -0x10) = param_2;
  *(ulong *)((long)ppuVar10 + -0x18) = uVar16;
  *(long **)((long)ppuVar10 + -0x20) = plVar4;
  *(ulong *)((long)ppuVar10 + -0x28) = unaff_R12;
  *(undefined8 **)((long)ppuVar10 + -0x30) = param_1;
  *(long *)((long)ppuVar10 + -0x38) = lVar6;
  *(undefined8 **)((long)ppuVar10 + -0x38) = puVar12;
  *puVar12 = 0;
  *(undefined4 *)puVar12 = 1;
  uVar16 = *param_3;
  uVar14 = param_3[1];
  lVar6 = plVar9[4];
  lVar8 = plVar9[5];
  lVar15 = *plVar9;
  *(undefined **)((long)ppuVar10 + -0x40) = &UNK_004c77c1;
  lVar6 = _ZN4absl12lts_2026052613time_internal4cctz6detail4impl14day_differenceElaalaa
                    (uVar16,(int)(char)uVar14,(int)(char)(uVar14 >> 8),lVar6,(int)(char)lVar8,
                     (int)(char)((ulong)lVar8 >> 8));
  *(undefined **)((long)ppuVar10 + -0x40) = &UNK_004c780d;
  lVar7 = _ZNSt3__16chrono12system_clock11from_time_tEl(0);
  puVar12 = *(undefined8 **)((long)ppuVar10 + -0x38);
  puVar12[1] = ~(long)(char)((ulong)lVar8 >> 0x20) + lVar7 / 1000000 +
               (char)(uVar14 >> 0x20) + lVar15 +
               ((((long)(char)(uVar14 >> 0x10) - (long)(char)((ulong)lVar8 >> 0x10)) + lVar6 * 0x18)
                * 0x3c + ((long)(char)(uVar14 >> 0x18) - (long)(char)((ulong)lVar8 >> 0x18))) * 0x3c
  ;
  lVar6 = *plVar9;
  *(undefined **)((long)ppuVar10 + -0x40) = &UNK_004c7847;
  lVar8 = _ZNSt3__16chrono12system_clock11from_time_tEl(0);
  puVar12[2] = lVar8 / 1000000 + lVar6;
  lVar6 = *plVar9;
  lVar8 = plVar9[2];
  lVar15 = plVar9[3];
  uVar16 = *param_3;
  uVar14 = param_3[1];
  *(undefined **)((long)ppuVar10 + -0x40) = &UNK_004c789d;
  lVar8 = _ZN4absl12lts_2026052613time_internal4cctz6detail4impl14day_differenceElaalaa
                    (lVar8,(int)(char)lVar15,(int)(char)((ulong)lVar15 >> 8),uVar16,
                     (int)(char)uVar14,(int)(char)(uVar14 >> 8));
  *(undefined **)((long)ppuVar10 + -0x40) = &UNK_004c78f8;
  lVar7 = _ZNSt3__16chrono12system_clock11from_time_tEl(0);
  puVar12[3] = lVar7 / 1000000 + (long)(char)(uVar14 >> 0x20) +
               (lVar6 - (char)((ulong)lVar15 >> 0x20)) +
               ((((long)(char)((ulong)lVar15 >> 0x10) - (long)(char)(uVar14 >> 0x10)) + lVar8 * 0x18
                ) * 0x3c + ((long)(char)((ulong)lVar15 >> 0x18) - (long)(char)(uVar14 >> 0x18))) *
               -0x3c;
  return puVar12;
}


