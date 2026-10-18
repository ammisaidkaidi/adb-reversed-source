// Function: LZ4_compress_continue
// Address: 004a4cf0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Removing unreachable block (ram,0x00497f4f) */

int LZ4_compress_continue(long param_1,ulong *param_2,char *param_3,uint param_4)

{
  char *pcVar1;
  uint *puVar2;
  uint *puVar3;
  ulong *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int *piVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  ulong *puVar16;
  ulong *puVar17;
  ulong uVar18;
  ulong *puVar19;
  ulong uVar20;
  ulong *puVar21;
  ulong *puVar22;
  long lVar23;
  ulong *puVar24;
  int iVar25;
  int iVar26;
  ulong *puVar27;
  int *piVar28;
  uint uVar29;
  uint uVar30;
  long lVar31;
  ulong uVar32;
  ulong *puVar33;
  ulong *puVar34;
  ulong *puVar35;
  long lVar36;
  ulong *puVar37;
  int iVar38;
  long lVar39;
  char *pcVar40;
  ulong uVar41;
  ulong uVar42;
  ulong uVar43;
  int iVar44;
  uint uVar45;
  ulong *puVar46;
  char *pcVar47;
  ulong *puVar48;
  int iStack_c8;
  int iStack_98;
  char *pcStack_80;
  char *pcStack_78;
  char *pcStack_70;
  int iStack_50;
  char *pcStack_40;
  
  iVar38 = 0;
  if (param_4 < 0x7e000001) {
    iVar38 = param_4 / 0xff + param_4 + 0x10;
  }
  uVar15 = (ulong)*(uint *)(param_1 + 0x4018);
  if (uVar15 == 0) {
    puVar21 = (ulong *)0x0;
  }
  else {
    puVar21 = (ulong *)(*(long *)(param_1 + 0x4000) + uVar15);
  }
  uVar29 = *(uint *)(param_1 + 0x4010);
  pcStack_40 = (char *)(ulong)uVar29;
  if (0x80000000 < uVar29 + param_4) {
    lVar23 = *(long *)(param_1 + 0x4000);
    uVar29 = uVar29 - 0x10000;
    lVar31 = 0;
    do {
      puVar2 = (uint *)(param_1 + lVar31 * 4);
      uVar30 = puVar2[1];
      uVar45 = puVar2[2];
      uVar13 = puVar2[3];
      puVar3 = (uint *)(param_1 + 0x10 + lVar31 * 4);
      uVar14 = *puVar3;
      uVar6 = puVar3[1];
      uVar7 = puVar3[2];
      uVar8 = puVar3[3];
      puVar3 = (uint *)(param_1 + lVar31 * 4);
      *puVar3 = *puVar2 - uVar29 & -(uint)((int)(uVar29 ^ 0x80000000) < (int)(*puVar2 ^ 0x80000000))
      ;
      puVar3[1] = uVar30 - uVar29 & -(uint)((int)(uVar29 ^ 0x80000000) < (int)(uVar30 ^ 0x80000000))
      ;
      puVar3[2] = uVar45 - uVar29 & -(uint)((int)(uVar29 ^ 0x80000000) < (int)(uVar45 ^ 0x80000000))
      ;
      puVar3[3] = uVar13 - uVar29 & -(uint)((int)(uVar29 ^ 0x80000000) < (int)(uVar13 ^ 0x80000000))
      ;
      puVar2 = (uint *)(param_1 + 0x10 + lVar31 * 4);
      *puVar2 = uVar14 - uVar29 & -(uint)((int)(uVar29 ^ 0x80000000) < (int)(uVar14 ^ 0x80000000));
      puVar2[1] = uVar6 - uVar29 & -(uint)((int)(uVar29 ^ 0x80000000) < (int)(uVar6 ^ 0x80000000));
      puVar2[2] = uVar7 - uVar29 & -(uint)((int)(uVar29 ^ 0x80000000) < (int)(uVar7 ^ 0x80000000));
      puVar2[3] = uVar8 - uVar29 & -(uint)((int)(uVar29 ^ 0x80000000) < (int)(uVar8 ^ 0x80000000));
      lVar31 = lVar31 + 8;
    } while (lVar31 != 0x1000);
    lVar23 = lVar23 + uVar15;
    *(undefined4 *)(param_1 + 0x4010) = 0x10000;
    uVar15 = (ulong)*(uint *)(param_1 + 0x4018);
    if (0x10000 < *(uint *)(param_1 + 0x4018)) {
      *(undefined4 *)(param_1 + 0x4018) = 0x10000;
      uVar15 = 0x10000;
    }
    *(ulong *)(param_1 + 0x4000) = lVar23 - uVar15;
    pcStack_40 = (char *)0x10000;
  }
  if (((((uint)uVar15 < 4) && (0 < (int)param_4)) && (puVar21 != param_2)) &&
     (*(long *)(param_1 + 0x4008) == 0)) {
    *(undefined4 *)(param_1 + 0x4018) = 0;
    *(ulong **)(param_1 + 0x4000) = param_2;
    uVar15 = 0;
    puVar21 = param_2;
  }
  puVar24 = (ulong *)((long)(int)param_4 + (long)param_2);
  puVar35 = *(ulong **)(param_1 + 0x4000);
  if ((puVar35 < puVar24) && (puVar24 < puVar21)) {
    uVar30 = (int)puVar21 - (int)puVar24;
    uVar29 = 0x10000;
    if (uVar30 < 0x10000) {
      uVar29 = uVar30;
    }
    uVar15 = 0;
    if (3 < uVar30) {
      uVar15 = (ulong)uVar29;
    }
    *(int *)(param_1 + 0x4018) = (int)uVar15;
    puVar35 = (ulong *)((long)puVar21 - uVar15);
    *(ulong **)(param_1 + 0x4000) = puVar35;
  }
  uVar29 = (uint)uVar15;
  uVar30 = (uint)pcStack_40;
  iVar25 = (int)param_3;
  if (puVar21 == param_2) {
    if (uVar29 < uVar30 && uVar29 < 0x10000) {
      if (param_4 < 0x7e000001) {
        if (param_4 != 0) {
          uVar20 = (ulong)param_4;
          pcVar40 = param_3 + iVar38;
          *(uint *)(param_1 + 0x4018) = uVar29 + param_4;
          *(uint *)(param_1 + 0x4010) = uVar30 + param_4;
          *(undefined4 *)(param_1 + 0x4014) = 2;
          puVar21 = param_2;
          if (param_4 < 0xd) {
code_r0x004980c5:
            uVar15 = (long)param_2 + (uVar20 - (long)puVar21);
            if (param_3 + (uVar15 + 0xf0) / 0xff + uVar15 + 1 <= pcVar40) {
              if (uVar15 < 0xf) {
                *param_3 = (char)uVar15 << 4;
              }
              else {
                uVar20 = uVar15 - 0xf;
                *param_3 = -0x10;
                pcVar40 = param_3 + 1;
                if (0xfe < uVar20) {
                  uVar20 = (uVar15 - 0x10e) / 0xff;
                  func_0x0099bdb0(pcVar40,0xff,uVar20 + 1);
                  pcVar40 = param_3 + uVar20 + 2;
                  uVar20 = (uVar15 + uVar20 * -0xff) - 0x10e;
                }
                *pcVar40 = (char)uVar20;
                param_3 = pcVar40;
              }
              func_0x0099bda0(param_3 + 1,puVar21,uVar15);
              return ((int)(param_3 + 1) + (int)uVar15) - iVar25;
            }
            return 0;
          }
          lVar23 = (long)param_2 - (long)pcStack_40;
          puVar22 = (ulong *)((long)param_2 + (uVar20 - 0xb));
          *(uint *)(param_1 + (*param_2 * -0x30e4432345000000 >> 0x34) * 4) = uVar30;
          puVar35 = (ulong *)((long)param_2 + 2);
          puVar24 = (ulong *)((long)param_2 + 1);
          puVar16 = (ulong *)((long)param_2 + (uVar20 - 0xc));
code_r0x0049a1e8:
          uVar18 = 0x41;
          uVar41 = 1;
          uVar32 = *puVar24;
          while( true ) {
            uVar42 = uVar32 * -0x30e4432345000000 >> 0x34;
            uVar45 = *(uint *)(param_1 + uVar42 * 4);
            uVar43 = (ulong)uVar45;
            iVar38 = (int)lVar23;
            uVar13 = (int)puVar24 - iVar38;
            uVar32 = *puVar35;
            *(uint *)(param_1 + uVar42 * 4) = uVar13;
            if (((uVar30 - uVar29 <= uVar45) && (uVar13 <= uVar45 + 0xffff)) &&
               (*(int *)(lVar23 + uVar43) == (int)*puVar24)) break;
            puVar19 = (ulong *)(uVar41 + (long)puVar35);
            uVar41 = uVar18 >> 6;
            uVar18 = (ulong)((int)uVar18 + 1);
            puVar24 = puVar35;
            puVar35 = puVar19;
            if (puVar22 < puVar19) goto code_r0x004980c5;
          }
          piVar28 = (int *)(lVar23 + uVar43);
          puVar35 = puVar24;
          if (((long)((long)pcStack_40 - uVar15) < (long)uVar43) &&
             (*(char *)((long)puVar24 + -1) == *(char *)((long)piVar28 + -1))) {
            puVar19 = (ulong *)((long)puVar24 + -1);
            puVar48 = (ulong *)((long)puVar24 + -1);
            piVar12 = (int *)((long)param_2 + uVar43 + ~(ulong)pcStack_40);
            do {
              piVar28 = piVar12;
              puVar24 = puVar48;
              puVar35 = puVar19;
              if ((piVar28 <= (int *)((long)param_2 - uVar15)) || (puVar35 <= puVar21)) break;
              puVar19 = (ulong *)((long)puVar35 + -1);
              puVar48 = (ulong *)((long)puVar24 + -1);
              piVar12 = (int *)((long)piVar28 + -1);
            } while (*(char *)((long)puVar35 + -1) == *(char *)((long)piVar28 + -1));
          }
          uVar32 = (long)puVar24 - (long)puVar21;
          uVar41 = uVar32 & 0xffffffff;
          if (pcVar40 < param_3 + uVar41 / 0xff + uVar41 + 9) {
            return 0;
          }
          puVar19 = (ulong *)(param_3 + 1);
          if ((uint)uVar32 < 0xf) {
            *param_3 = (char)uVar32 << 4;
          }
          else {
            uVar45 = (uint)uVar32 - 0xf;
            *param_3 = -0x10;
            if (0xfe < uVar45) {
              iVar44 = (int)puVar24 - (int)puVar21;
              uVar45 = iVar44 - 0x10e;
              uVar32 = (ulong)uVar45 / 0xff;
              func_0x0099bdb0(puVar19,0xff,uVar32 + 1);
              puVar19 = (ulong *)(param_3 + uVar32 + 2);
              uVar45 = (iVar44 + uVar45 / 0xff) - 0x10e;
            }
            *(char *)puVar19 = (char)uVar45;
            puVar19 = (ulong *)((long)puVar19 + 1);
          }
          puVar24 = (ulong *)((long)puVar19 + uVar41);
          uVar32 = 8;
          if (8 < uVar41) {
            uVar32 = uVar41;
          }
          if ((0x18 < uVar41) && (0x1f < (ulong)((long)puVar19 - (long)puVar21))) {
            uVar32 = (uVar32 - 1 >> 3) + 1;
            uVar41 = uVar32 & 0x3ffffffffffffffc;
            uVar18 = 0;
            do {
              uVar9 = ((undefined8 *)((long)puVar21 + uVar18))[1];
              puVar5 = (undefined8 *)((long)puVar21 + uVar18 + 0x10);
              uVar10 = *puVar5;
              uVar11 = puVar5[1];
              *(undefined8 *)((long)puVar19 + uVar18) = *(undefined8 *)((long)puVar21 + uVar18);
              *(undefined8 *)((char *)((long)puVar19 + uVar18) + 8) = uVar9;
              pcVar47 = (char *)((long)puVar19 + uVar18 + 0x10);
              *(undefined8 *)pcVar47 = uVar10;
              *(undefined8 *)(pcVar47 + 8) = uVar11;
              uVar18 = uVar18 + 0x20;
            } while ((uVar32 * 8 & 0xffffffffffffffe0) != uVar18);
            puVar21 = puVar21 + uVar41;
            puVar19 = puVar19 + uVar41;
            if (uVar32 == uVar41) goto code_r0x0049a400;
          }
          do {
            *puVar19 = *puVar21;
            puVar19 = puVar19 + 1;
            puVar21 = puVar21 + 1;
          } while (puVar19 < puVar24);
code_r0x0049a400:
          do {
            *(short *)puVar24 = (short)puVar35 - (short)piVar28;
            puVar19 = (ulong *)((long)puVar35 + 4);
            puVar21 = (ulong *)(piVar28 + 1);
            puVar48 = puVar19;
            if (puVar19 < puVar16) {
              if (*puVar21 == *puVar19) {
                puVar21 = (ulong *)(piVar28 + 3);
                puVar48 = (ulong *)((long)puVar35 + 0xc);
                goto code_r0x0049a435;
              }
              uVar45 = 0;
              for (uVar32 = *puVar19 ^ *puVar21; (uVar32 & 1) == 0;
                  uVar32 = uVar32 >> 1 | 0x8000000000000000) {
                uVar45 = uVar45 + 1;
              }
              uVar45 = uVar45 >> 3;
            }
            else {
code_r0x0049a435:
              if (puVar48 < puVar16) {
                iVar44 = ((int)puVar48 - (int)puVar35) + -4;
code_r0x0049a450:
                if (*puVar21 == *puVar48) goto code_r0x0049a45b;
                uVar45 = 0;
                for (uVar32 = *puVar48 ^ *puVar21; (uVar32 & 1) == 0;
                    uVar32 = uVar32 >> 1 | 0x8000000000000000) {
                  uVar45 = uVar45 + 1;
                }
                uVar45 = (uVar45 >> 3) + iVar44;
                goto code_r0x0049a4a2;
              }
code_r0x0049a60d:
              if ((puVar48 < (ulong *)((long)param_2 + (uVar20 - 8))) &&
                 ((int)*puVar21 == (int)*puVar48)) {
                puVar48 = (ulong *)((long)puVar48 + 4);
                puVar21 = (ulong *)((long)puVar21 + 4);
              }
              if ((puVar48 < (ulong *)((long)param_2 + (uVar20 - 6))) &&
                 ((short)*puVar21 == (short)*puVar48)) {
                puVar48 = (ulong *)((long)puVar48 + 2);
                puVar21 = (ulong *)((long)puVar21 + 2);
              }
              if (puVar48 < (ulong *)((long)param_2 + (uVar20 - 5))) {
                puVar48 = (ulong *)((long)puVar48 + (ulong)((char)*puVar21 == (char)*puVar48));
              }
              uVar45 = (int)puVar48 - (int)puVar19;
            }
code_r0x0049a4a2:
            if (pcVar40 < (char *)((long)puVar24 + (ulong)(uVar45 + 0xf0) / 0xff + 8)) {
              return 0;
            }
            pcVar47 = (char *)((long)puVar24 + 2);
            if (uVar45 < 0xf) {
              *param_3 = *param_3 + (char)uVar45;
              param_3 = pcVar47;
            }
            else {
              *param_3 = *param_3 + '\x0f';
              uVar13 = uVar45 - 0xf;
              pcVar47[0] = -1;
              pcVar47[1] = -1;
              pcVar47[2] = -1;
              pcVar47[3] = -1;
              if (0x3fb < uVar13) {
                uVar32 = (ulong)(((uVar45 - 0x40b) / 0x3fc) * 4);
                func_0x0099bdb0((char *)((long)puVar24 + 6),0xff,uVar32 + 4);
                pcVar47 = (char *)((long)puVar24 + uVar32 + 6);
                uVar13 = (uVar45 - 0x40b) % 0x3fc;
              }
              uVar14 = uVar13 * 0x8081 >> 0x17;
              pcVar47[uVar14] = (char)uVar14 + (char)uVar13;
              param_3 = pcVar47 + (ulong)uVar14 + 1;
            }
            puVar21 = (ulong *)((long)puVar35 + (ulong)uVar45 + 4);
            if (puVar22 <= puVar21) goto code_r0x004980c5;
            lVar31 = (long)puVar35 + (ulong)uVar45;
            *(int *)(param_1 + ((ulong)(*(long *)(lVar31 + 2) * -0x30e4432345000000) >> 0x34) * 4) =
                 ((int)lVar31 + 2) - iVar38;
            uVar32 = (ulong)(*(long *)(lVar31 + 4) * -0x30e4432345000000) >> 0x34;
            uVar13 = (int)puVar21 - iVar38;
            uVar45 = *(uint *)(param_1 + uVar32 * 4);
            *(uint *)(param_1 + uVar32 * 4) = uVar13;
            if (((uVar45 < uVar30 - uVar29) || (uVar45 + 0xffff < uVar13)) ||
               (piVar28 = (int *)((ulong)uVar45 + lVar23), *piVar28 != (int)*puVar21))
            goto code_r0x0049a1c8;
            puVar24 = (ulong *)(param_3 + 1);
            *param_3 = '\0';
            puVar35 = puVar21;
          } while( true );
        }
code_r0x00498f1d:
        if (0 < iVar38) {
          *param_3 = '\0';
          return 1;
        }
        return 0;
      }
    }
    else if (param_4 < 0x7e000001) {
      if (param_4 != 0) {
        uVar20 = (ulong)param_4;
        pcVar47 = param_3 + iVar38;
        *(uint *)(param_1 + 0x4018) = uVar29 + param_4;
        *(uint *)(param_1 + 0x4010) = uVar30 + param_4;
        *(undefined4 *)(param_1 + 0x4014) = 2;
        puVar21 = param_2;
        pcVar40 = param_3;
        if (param_4 < 0xd) {
code_r0x00498e1d:
          pcStack_40 = pcVar40;
          uVar15 = (long)param_2 + (uVar20 - (long)puVar21);
          if (pcStack_40 + (uVar15 + 0xf0) / 0xff + uVar15 + 1 <= pcVar47) {
            if (uVar15 < 0xf) {
              *pcStack_40 = (char)uVar15 << 4;
            }
            else {
              uVar20 = uVar15 - 0xf;
              *pcStack_40 = -0x10;
              pcVar40 = pcStack_40 + 1;
              if (0xfe < uVar20) {
                uVar20 = (uVar15 - 0x10e) / 0xff;
                func_0x0099bdb0(pcVar40,0xff,uVar20 + 1);
                pcVar40 = pcStack_40 + uVar20 + 2;
                uVar20 = (uVar15 + uVar20 * -0xff) - 0x10e;
              }
              *pcVar40 = (char)uVar20;
              pcStack_40 = pcVar40;
            }
            func_0x0099bda0(pcStack_40 + 1,puVar21,uVar15);
            return ((int)(pcStack_40 + 1) + (int)uVar15) - iVar25;
          }
          return 0;
        }
        lVar31 = (long)param_2 - (long)pcStack_40;
        puVar22 = (ulong *)((long)param_2 + (uVar20 - 0xb));
        *(uint *)(param_1 + (*param_2 * -0x30e4432345000000 >> 0x34) * 4) = uVar30;
        lVar23 = (long)pcStack_40 - uVar15;
        puVar35 = (ulong *)((long)param_2 + 2);
        puVar24 = (ulong *)((long)param_2 + 1);
        puVar16 = (ulong *)((long)param_2 + (uVar20 - 0xc));
        uVar32 = ~(ulong)pcStack_40;
        pcStack_40 = param_3;
code_r0x0049a769:
        uVar18 = 1;
        uVar41 = *puVar24;
        uVar29 = 0x41;
        while( true ) {
          puVar19 = puVar35;
          uVar42 = uVar41 * -0x30e4432345000000 >> 0x34;
          uVar30 = *(uint *)(param_1 + uVar42 * 4);
          uVar43 = (ulong)uVar30;
          iVar38 = (int)lVar31;
          uVar45 = (int)puVar24 - iVar38;
          uVar41 = *puVar19;
          *(uint *)(param_1 + uVar42 * 4) = uVar45;
          if ((uVar45 <= uVar30 + 0xffff) && (*(int *)(lVar31 + uVar43) == (int)*puVar24)) break;
          puVar35 = (ulong *)(uVar18 + (long)puVar19);
          uVar18 = (ulong)(uVar29 >> 6);
          puVar24 = puVar19;
          uVar29 = uVar29 + 1;
          pcVar40 = pcStack_40;
          if (puVar22 < puVar35) goto code_r0x00498e1d;
        }
        piVar28 = (int *)(lVar31 + uVar43);
        puVar35 = puVar24;
        if ((lVar23 < (long)uVar43) &&
           (*(char *)((long)puVar24 + -1) == *(char *)((long)piVar28 + -1))) {
          puVar19 = (ulong *)((long)puVar24 + -1);
          piVar12 = (int *)((long)param_2 + uVar43 + uVar32);
          puVar48 = (ulong *)((long)puVar24 + -1);
          do {
            puVar35 = puVar48;
            piVar28 = piVar12;
            puVar24 = puVar19;
            if ((piVar28 <= (int *)((long)param_2 - uVar15)) || (puVar24 <= puVar21)) break;
            puVar19 = (ulong *)((long)puVar24 + -1);
            piVar12 = (int *)((long)piVar28 + -1);
            puVar48 = (ulong *)((long)puVar35 + -1);
          } while (*(char *)((long)puVar24 + -1) == *(char *)((long)piVar28 + -1));
        }
        uVar41 = (long)puVar35 - (long)puVar21;
        uVar18 = uVar41 & 0xffffffff;
        if (pcVar47 < pcStack_40 + uVar18 / 0xff + uVar18 + 9) {
          return 0;
        }
        puVar19 = (ulong *)(pcStack_40 + 1);
        if ((uint)uVar41 < 0xf) {
          *pcStack_40 = (char)uVar41 << 4;
        }
        else {
          uVar29 = (uint)uVar41 - 0xf;
          *pcStack_40 = -0x10;
          if (0xfe < uVar29) {
            iVar44 = (int)puVar35 - (int)puVar21;
            uVar29 = iVar44 - 0x10e;
            uVar41 = (ulong)uVar29 / 0xff;
            func_0x0099bdb0(puVar19,0xff,uVar41 + 1);
            puVar19 = (ulong *)(pcStack_40 + uVar41 + 2);
            uVar29 = (iVar44 + uVar29 / 0xff) - 0x10e;
          }
          *(char *)puVar19 = (char)uVar29;
          puVar19 = (ulong *)((long)puVar19 + 1);
        }
        puVar35 = (ulong *)((long)puVar19 + uVar18);
        uVar41 = 8;
        if (8 < uVar18) {
          uVar41 = uVar18;
        }
        if ((0x18 < uVar18) && (0x1f < (ulong)((long)puVar19 - (long)puVar21))) {
          uVar41 = (uVar41 - 1 >> 3) + 1;
          uVar18 = uVar41 & 0x3ffffffffffffffc;
          uVar43 = 0;
          do {
            uVar9 = ((undefined8 *)((long)puVar21 + uVar43))[1];
            puVar5 = (undefined8 *)((long)puVar21 + uVar43 + 0x10);
            uVar10 = *puVar5;
            uVar11 = puVar5[1];
            *(undefined8 *)((long)puVar19 + uVar43) = *(undefined8 *)((long)puVar21 + uVar43);
            *(undefined8 *)((char *)((long)puVar19 + uVar43) + 8) = uVar9;
            pcVar40 = (char *)((long)puVar19 + uVar43 + 0x10);
            *(undefined8 *)pcVar40 = uVar10;
            *(undefined8 *)(pcVar40 + 8) = uVar11;
            uVar43 = uVar43 + 0x20;
          } while ((uVar41 * 8 & 0xffffffffffffffe0) != uVar43);
          puVar21 = puVar21 + uVar18;
          puVar19 = puVar19 + uVar18;
          if (uVar41 == uVar18) goto code_r0x0049a980;
        }
        do {
          *puVar19 = *puVar21;
          puVar19 = puVar19 + 1;
          puVar21 = puVar21 + 1;
        } while (puVar19 < puVar35);
code_r0x0049a980:
        do {
          *(short *)puVar35 = (short)puVar24 - (short)piVar28;
          puVar21 = (ulong *)((long)puVar24 + 4);
          puVar19 = (ulong *)(piVar28 + 1);
          puVar48 = puVar21;
          if (puVar21 < puVar16) {
            if (*puVar19 == *puVar21) {
              puVar19 = (ulong *)(piVar28 + 3);
              puVar48 = (ulong *)((long)puVar24 + 0xc);
              goto joined_r0x0049ab82;
            }
            uVar29 = 0;
            for (uVar41 = *puVar21 ^ *puVar19; (uVar41 & 1) == 0;
                uVar41 = uVar41 >> 1 | 0x8000000000000000) {
              uVar29 = uVar29 + 1;
            }
            uVar29 = uVar29 >> 3;
          }
          else {
joined_r0x0049ab82:
            if (puVar48 < puVar16) {
              iVar44 = ((int)puVar48 - (int)puVar24) + -4;
code_r0x0049a9d0:
              if (*puVar19 == *puVar48) goto code_r0x0049a9db;
              uVar29 = 0;
              for (uVar41 = *puVar48 ^ *puVar19; (uVar41 & 1) == 0;
                  uVar41 = uVar41 >> 1 | 0x8000000000000000) {
                uVar29 = uVar29 + 1;
              }
              uVar29 = (uVar29 >> 3) + iVar44;
              goto code_r0x0049aa1f;
            }
code_r0x0049ab8c:
            if ((puVar48 < (ulong *)((long)param_2 + (uVar20 - 8))) &&
               ((int)*puVar19 == (int)*puVar48)) {
              puVar48 = (ulong *)((long)puVar48 + 4);
              puVar19 = (ulong *)((long)puVar19 + 4);
            }
            if ((puVar48 < (ulong *)((long)param_2 + (uVar20 - 6))) &&
               ((short)*puVar19 == (short)*puVar48)) {
              puVar48 = (ulong *)((long)puVar48 + 2);
              puVar19 = (ulong *)((long)puVar19 + 2);
            }
            if (puVar48 < (ulong *)((long)param_2 + (uVar20 - 5))) {
              puVar48 = (ulong *)((long)puVar48 + (ulong)((char)*puVar19 == (char)*puVar48));
            }
            uVar29 = (int)puVar48 - (int)puVar21;
          }
code_r0x0049aa1f:
          if (pcVar47 < (char *)((long)puVar35 + (ulong)(uVar29 + 0xf0) / 0xff + 8)) {
            return 0;
          }
          pcVar40 = (char *)((long)puVar35 + 2);
          if (uVar29 < 0xf) {
            *pcStack_40 = *pcStack_40 + (char)uVar29;
            pcStack_40 = pcVar40;
          }
          else {
            *pcStack_40 = *pcStack_40 + '\x0f';
            uVar30 = uVar29 - 0xf;
            pcVar40[0] = -1;
            pcVar40[1] = -1;
            pcVar40[2] = -1;
            pcVar40[3] = -1;
            if (0x3fb < uVar30) {
              uVar41 = (ulong)(((uVar29 - 0x40b) / 0x3fc) * 4);
              func_0x0099bdb0((char *)((long)puVar35 + 6),0xff,uVar41 + 4);
              pcVar40 = (char *)((long)puVar35 + uVar41 + 6);
              uVar30 = (uVar29 - 0x40b) % 0x3fc;
            }
            uVar45 = uVar30 * 0x8081 >> 0x17;
            pcVar40[uVar45] = (char)uVar45 + (char)uVar30;
            pcStack_40 = pcVar40 + (ulong)uVar45 + 1;
          }
          puVar21 = (ulong *)((long)puVar24 + (ulong)uVar29 + 4);
          pcVar40 = pcStack_40;
          if (puVar22 <= puVar21) goto code_r0x00498e1d;
          lVar36 = (long)puVar24 + (ulong)uVar29;
          *(int *)(param_1 + ((ulong)(*(long *)(lVar36 + 2) * -0x30e4432345000000) >> 0x34) * 4) =
               ((int)lVar36 + 2) - iVar38;
          uVar41 = (ulong)(*(long *)(lVar36 + 4) * -0x30e4432345000000) >> 0x34;
          uVar30 = (int)puVar21 - iVar38;
          uVar29 = *(uint *)(param_1 + uVar41 * 4);
          *(uint *)(param_1 + uVar41 * 4) = uVar30;
          if ((uVar29 + 0xffff < uVar30) ||
             (piVar28 = (int *)((ulong)uVar29 + lVar31), *piVar28 != (int)*puVar21))
          goto code_r0x0049a749;
          puVar35 = (ulong *)(pcStack_40 + 1);
          *pcStack_40 = '\0';
          puVar24 = puVar21;
        } while( true );
      }
      goto code_r0x00498f1d;
    }
    return 0;
  }
  lVar23 = *(long *)(param_1 + 0x4008);
  puVar21 = param_2;
  if (lVar23 == 0) {
    if (uVar29 < uVar30 && uVar29 < 0x10000) {
      if (0x7e000000 < param_4) {
code_r0x00498449:
        iVar44 = 0;
        goto code_r0x0049b6f3;
      }
      if (param_4 == 0) {
joined_r0x00499911:
        iVar44 = 0;
        if (0 < iVar38) {
          *param_3 = '\0';
          iVar44 = 1;
        }
        goto code_r0x0049b6f3;
      }
      lVar31 = uVar15 + (long)puVar35;
      uVar15 = (ulong)param_4;
      lVar23 = lVar31 - (long)pcStack_40;
      if (puVar35 == (ulong *)0x0) {
        lVar23 = 0;
      }
      pcVar40 = param_3 + iVar38;
      *(uint *)(param_1 + 0x4018) = uVar29 + param_4;
      *(uint *)(param_1 + 0x4010) = uVar30 + param_4;
      *(undefined4 *)(param_1 + 0x4014) = 2;
      if (0xc < param_4) {
        lVar36 = (long)param_2 - (long)pcStack_40;
        puVar24 = (ulong *)((long)param_2 + (uVar15 - 0xb));
        puVar16 = (ulong *)((long)param_2 + (uVar15 - 5));
        if (puVar35 == (ulong *)0x0) {
          lVar31 = 0;
        }
        *(uint *)(param_1 + (*param_2 * -0x30e4432345000000 >> 0x34) * 4) = uVar30;
        puVar22 = (ulong *)((long)param_2 + 2);
        puVar19 = (ulong *)((long)param_2 + 1);
        uVar45 = uVar30 + 1;
        puVar48 = (ulong *)((long)param_2 + (uVar15 - 0xc));
        puVar4 = (ulong *)((long)param_2 + (uVar15 - 8));
        puVar17 = (ulong *)((long)param_2 + (uVar15 - 6));
code_r0x00499964:
        uVar32 = 1;
        uVar20 = *(ulong *)((long)puVar21 + 1);
        uVar13 = 0x41;
        do {
          uVar41 = uVar20 * -0x30e4432345000000 >> 0x34;
          uVar14 = *(uint *)(param_1 + uVar41 * 4);
          uVar18 = (ulong)uVar14;
          uVar20 = *puVar22;
          *(uint *)(param_1 + uVar41 * 4) = uVar45;
          iStack_50 = (int)lVar36;
          if ((uVar30 - uVar29 <= uVar14) && (uVar45 <= uVar14 + 0xffff)) {
            lVar39 = lVar36;
            if (uVar14 < uVar30) {
              lVar39 = lVar23;
            }
            if (*(int *)(lVar39 + uVar18) == (int)*puVar19) goto code_r0x004999f1;
          }
          uVar45 = (int)puVar22 - iStack_50;
          puVar27 = (ulong *)(uVar32 + (long)puVar22);
          uVar32 = (ulong)(uVar13 >> 6);
          puVar19 = puVar22;
          puVar22 = puVar27;
          uVar13 = uVar13 + 1;
          if (puVar24 < puVar27) break;
        } while( true );
      }
code_r0x0049b5b5:
      uVar15 = (long)param_2 + (uVar15 - (long)puVar21);
      iVar44 = 0;
      if (pcVar40 < param_3 + (uVar15 + 0xf0) / 0xff + uVar15 + 1) goto code_r0x0049b6f3;
      if (uVar15 < 0xf) {
        *param_3 = (char)uVar15 << 4;
      }
      else {
        uVar20 = uVar15 - 0xf;
        *param_3 = -0x10;
        pcVar40 = param_3 + 1;
        if (0xfe < uVar20) {
          uVar20 = (uVar15 - 0x10e) / 0xff;
          func_0x0099bdb0(pcVar40,0xff,uVar20 + 1);
          pcVar40 = param_3 + uVar20 + 2;
          uVar20 = (uVar15 + uVar20 * -0xff) - 0x10e;
        }
        *pcVar40 = (char)uVar20;
        param_3 = pcVar40;
      }
    }
    else {
      if (0x7e000000 < param_4) goto code_r0x00498449;
      if (param_4 == 0) goto joined_r0x00499911;
      lVar31 = uVar15 + (long)puVar35;
      uVar15 = (ulong)param_4;
      lVar23 = lVar31 - (long)pcStack_40;
      if (puVar35 == (ulong *)0x0) {
        lVar23 = 0;
      }
      pcVar40 = param_3 + iVar38;
      *(uint *)(param_1 + 0x4018) = uVar29 + param_4;
      *(uint *)(param_1 + 0x4010) = uVar30 + param_4;
      *(undefined4 *)(param_1 + 0x4014) = 2;
      pcStack_80 = param_3;
      if (0xc < param_4) {
        lVar36 = (long)param_2 - (long)pcStack_40;
        puVar24 = (ulong *)((long)param_2 + (uVar15 - 0xb));
        puVar16 = (ulong *)((long)param_2 + (uVar15 - 5));
        if (puVar35 == (ulong *)0x0) {
          lVar31 = 0;
        }
        *(uint *)(param_1 + (*param_2 * -0x30e4432345000000 >> 0x34) * 4) = uVar30;
        puVar22 = (ulong *)((long)param_2 + 2);
        puVar19 = (ulong *)((long)param_2 + 1);
        uVar29 = uVar30 + 1;
        puVar48 = (ulong *)((long)param_2 + (uVar15 - 0xc));
        puVar4 = (ulong *)((long)param_2 + (uVar15 - 8));
        puVar17 = (ulong *)((long)param_2 + (uVar15 - 6));
        pcStack_80 = param_3;
code_r0x0049adc7:
        uVar32 = 1;
        uVar20 = *(ulong *)((long)puVar21 + 1);
        uVar41 = 0x41;
        do {
          puVar27 = puVar22;
          uVar18 = uVar20 * -0x30e4432345000000 >> 0x34;
          uVar45 = *(uint *)(param_1 + uVar18 * 4);
          uVar43 = (ulong)uVar45;
          uVar20 = *puVar27;
          *(uint *)(param_1 + uVar18 * 4) = uVar29;
          iVar38 = (int)lVar36;
          if (uVar29 <= uVar45 + 0xffff) {
            lVar39 = lVar36;
            if (uVar45 < uVar30) {
              lVar39 = lVar23;
            }
            if (*(int *)(lVar39 + uVar43) == (int)*puVar19) goto code_r0x0049ae47;
          }
          uVar29 = (int)puVar27 - iVar38;
          puVar22 = (ulong *)(uVar32 + (long)puVar27);
          uVar32 = uVar41 >> 6;
          uVar41 = (ulong)((int)uVar41 + 1);
          puVar19 = puVar27;
          if (puVar24 < puVar22) break;
        } while( true );
      }
code_r0x00498fae:
      uVar15 = (long)param_2 + (uVar15 - (long)puVar21);
      iVar44 = 0;
      if (pcVar40 < pcStack_80 + (uVar15 + 0xf0) / 0xff + uVar15 + 1) goto code_r0x0049b6f3;
      if (0xe < uVar15) {
        uVar20 = uVar15 - 0xf;
        *pcStack_80 = -0x10;
        param_3 = pcStack_80 + 1;
        if (0xfe < uVar20) {
          uVar20 = (uVar15 - 0x10e) / 0xff;
          func_0x0099bdb0(param_3,0xff,uVar20 + 1);
          param_3 = pcStack_80 + uVar20 + 2;
          uVar20 = (uVar15 + uVar20 * -0xff) - 0x10e;
        }
        goto code_r0x004998ff;
      }
      *pcStack_80 = (char)uVar15 << 4;
      param_3 = pcStack_80;
    }
  }
  else {
    if (0x1000 < (int)param_4) {
      func_0x0099bda0(param_1,lVar23,0x4020);
      if (param_4 < 0x7e000001) {
        uVar29 = *(uint *)(param_1 + 0x4010);
        lVar36 = (long)param_2 - (ulong)uVar29;
        puVar16 = *(ulong **)(param_1 + 0x4000);
        lVar31 = (ulong)*(uint *)(param_1 + 0x4018) + (long)puVar16;
        uVar15 = (ulong)param_4;
        lVar23 = lVar31 - (ulong)uVar29;
        pcVar40 = param_3 + iVar38;
        *(uint *)(param_1 + 0x4018) = *(uint *)(param_1 + 0x4018) + param_4;
        *(uint *)(param_1 + 0x4010) = uVar29 + param_4;
        *(undefined4 *)(param_1 + 0x4014) = 2;
        puVar35 = (ulong *)((long)param_2 + (uVar15 - 0xb));
        puVar24 = (ulong *)((long)param_2 + (uVar15 - 5));
        if (puVar16 == (ulong *)0x0) {
          lVar31 = 0;
          lVar23 = 0;
        }
        *(uint *)(param_1 + (*param_2 * -0x30e4432345000000 >> 0x34) * 4) = uVar29;
        puVar48 = (ulong *)((long)param_2 + (uVar15 - 0xc));
        puVar4 = (ulong *)((long)param_2 + (uVar15 - 8));
        puVar17 = (ulong *)((long)param_2 + (uVar15 - 6));
        puVar22 = (ulong *)((long)param_2 + 2);
        puVar19 = (ulong *)((long)param_2 + 1);
        uVar30 = uVar29 + 1;
        pcStack_78 = param_3;
code_r0x0049858d:
        uVar20 = *(ulong *)((long)puVar21 + 1);
        uVar32 = 1;
        uVar41 = 0x41;
        do {
          puVar27 = puVar22;
          uVar18 = uVar20 * -0x30e4432345000000 >> 0x34;
          uVar45 = *(uint *)(param_1 + uVar18 * 4);
          uVar43 = (ulong)uVar45;
          uVar20 = *puVar27;
          *(uint *)(param_1 + uVar18 * 4) = uVar30;
          iVar38 = (int)lVar36;
          if (uVar30 <= uVar45 + 0xffff) {
            lVar39 = lVar36;
            if (uVar45 < uVar29) {
              lVar39 = lVar23;
            }
            if (*(int *)(lVar39 + uVar43) == (int)*puVar19) goto code_r0x00498611;
          }
          uVar30 = (int)puVar27 - iVar38;
          puVar22 = (ulong *)(uVar32 + (long)puVar27);
          uVar32 = uVar41 >> 6;
          uVar41 = (ulong)((int)uVar41 + 1);
          puVar19 = puVar27;
          if (puVar35 < puVar22) goto code_r0x00498ed7;
        } while( true );
      }
      iVar44 = 0;
      goto code_r0x0049b6f3;
    }
    iVar44 = 0;
    if (0x7e000000 < param_4) goto code_r0x0049b6f3;
    if (param_4 == 0) goto joined_r0x00499911;
    puVar35 = *(ulong **)(lVar23 + 0x4000);
    uVar29 = *(uint *)(lVar23 + 0x4010);
    lVar36 = (ulong)*(uint *)(lVar23 + 0x4018) + (long)puVar35;
    uVar15 = (ulong)param_4;
    lVar31 = lVar36 - (ulong)uVar29;
    if (puVar35 == (ulong *)0x0) {
      lVar31 = 0;
    }
    pcVar40 = param_3 + iVar38;
    *(undefined8 *)(param_1 + 0x4008) = 0;
    *(uint *)(param_1 + 0x4018) = param_4;
    *(uint *)(param_1 + 0x4010) = uVar30 + param_4;
    *(undefined4 *)(param_1 + 0x4014) = 2;
    pcStack_70 = param_3;
    if (0xc < param_4) {
      lVar39 = (long)param_2 - (long)pcStack_40;
      iVar38 = uVar30 - uVar29;
      puVar24 = (ulong *)((long)param_2 + (uVar15 - 0xb));
      puVar16 = (ulong *)((long)param_2 + (uVar15 - 5));
      if (puVar35 == (ulong *)0x0) {
        lVar36 = 0;
      }
      *(uint *)(param_1 + (*param_2 * -0x30e4432345000000 >> 0x34) * 4) = uVar30;
      puVar22 = (ulong *)((long)param_2 + 2);
      puVar19 = (ulong *)((long)param_2 + 1);
      uVar29 = uVar30 + 1;
      puVar48 = (ulong *)((long)param_2 + (uVar15 - 0xc));
      puVar4 = (ulong *)((long)param_2 + (uVar15 - 8));
      puVar17 = (ulong *)((long)param_2 + (uVar15 - 6));
code_r0x0049907f:
      uVar32 = 1;
      uVar20 = *(ulong *)((long)puVar21 + 1);
      uVar45 = 0x41;
      while( true ) {
        puVar27 = puVar22;
        uVar41 = uVar20 * -0x30e4432345000000 >> 0x34;
        uVar13 = *(uint *)(param_1 + uVar41 * 4);
        if (uVar13 < uVar30) {
          uVar14 = *(uint *)(lVar23 + uVar41 * 4);
          uVar13 = uVar14 + iVar38;
          puVar22 = (ulong *)((ulong)uVar14 + lVar31);
          puVar37 = puVar35;
        }
        else {
          puVar22 = (ulong *)(lVar39 + (ulong)uVar13);
          puVar37 = param_2;
        }
        uVar20 = *puVar27;
        *(uint *)(param_1 + uVar41 * 4) = uVar29;
        iVar44 = (int)lVar39;
        if ((uVar29 <= uVar13 + 0xffff) && ((int)*puVar22 == (int)*puVar19)) break;
        uVar29 = (int)puVar27 - iVar44;
        puVar22 = (ulong *)(uVar32 + (long)puVar27);
        uVar32 = (ulong)(uVar45 >> 6);
        puVar19 = puVar27;
        uVar45 = uVar45 + 1;
        if (puVar24 < puVar22) goto code_r0x0049ac21;
      }
      if ((puVar37 < puVar22) &&
         (puVar27 = puVar19, puVar34 = puVar22,
         *(char *)((long)puVar19 - 1) == *(char *)((long)puVar22 + -1))) {
        do {
          puVar22 = (ulong *)((long)puVar34 + -1);
          puVar19 = (ulong *)((long)puVar27 - 1);
          if ((puVar22 <= puVar37) || (puVar19 <= puVar21)) break;
          pcVar47 = (char *)((long)puVar27 - 2);
          pcVar1 = (char *)((long)puVar34 + -2);
          puVar27 = puVar19;
          puVar34 = puVar22;
        } while (*pcVar47 == *pcVar1);
      }
      uVar20 = (long)puVar19 - (long)puVar21;
      uVar32 = uVar20 & 0xffffffff;
      if (pcStack_70 + uVar32 / 0xff + uVar32 + 9 <= pcVar40) {
        puVar27 = (ulong *)(pcStack_70 + 1);
        if ((uint)uVar20 < 0xf) {
          *pcStack_70 = (char)uVar20 << 4;
        }
        else {
          uVar45 = (uint)uVar20 - 0xf;
          *pcStack_70 = -0x10;
          if (0xfe < uVar45) {
            iStack_c8 = (int)puVar21;
            iStack_c8 = (int)puVar19 - iStack_c8;
            uVar20 = (ulong)(iStack_c8 - 0x10e) / 0xff;
            func_0x0099bdb0(puVar27,0xff,uVar20 + 1);
            puVar27 = (ulong *)(pcStack_70 + uVar20 + 2);
            uVar45 = (iStack_c8 + (int)uVar20 * -0xff) - 0x10e;
          }
          *(char *)puVar27 = (char)uVar45;
          puVar27 = (ulong *)((long)puVar27 + 1);
        }
        puVar34 = (ulong *)((long)puVar27 + uVar32);
        uVar20 = 8;
        if (8 < uVar32) {
          uVar20 = uVar32;
        }
        if ((0x18 < uVar32) && (0x1f < (ulong)((long)puVar27 - (long)puVar21))) {
          uVar32 = (uVar20 - 1 >> 3) + 1;
          uVar20 = uVar32 & 0x3ffffffffffffffc;
          uVar41 = 0;
          do {
            uVar9 = ((undefined8 *)((long)puVar21 + uVar41))[1];
            puVar5 = (undefined8 *)((long)puVar21 + uVar41 + 0x10);
            uVar10 = *puVar5;
            uVar11 = puVar5[1];
            *(undefined8 *)((long)puVar27 + uVar41) = *(undefined8 *)((long)puVar21 + uVar41);
            *(undefined8 *)((char *)((long)puVar27 + uVar41) + 8) = uVar9;
            pcVar47 = (char *)((long)puVar27 + uVar41 + 0x10);
            *(undefined8 *)pcVar47 = uVar10;
            *(undefined8 *)(pcVar47 + 8) = uVar11;
            uVar41 = uVar41 + 0x20;
          } while ((uVar32 * 8 & 0xffffffffffffffe0) != uVar41);
          puVar21 = puVar21 + uVar20;
          puVar27 = puVar27 + uVar20;
          if (uVar32 == uVar20) goto code_r0x00499363;
        }
        do {
          *puVar27 = *puVar21;
          puVar27 = puVar27 + 1;
          puVar21 = puVar21 + 1;
        } while (puVar27 < puVar34);
code_r0x00499363:
        iVar26 = uVar29 - uVar13;
        do {
          *(short *)puVar34 = (short)iVar26;
          if (puVar37 == puVar35) {
            puVar27 = (ulong *)((lVar36 - (long)puVar22) + (long)puVar19);
            if (puVar16 < puVar27) {
              puVar27 = puVar16;
            }
            puVar21 = (ulong *)((long)puVar19 + 4);
            puVar33 = (ulong *)((long)puVar22 + 4);
            puVar37 = (ulong *)((long)puVar27 - 7);
            puVar46 = puVar21;
            if (puVar21 < puVar37) {
              if (*puVar33 == *puVar21) {
                puVar33 = (ulong *)((long)puVar22 + 0xc);
                puVar46 = (ulong *)((long)puVar19 + 0xc);
                goto joined_r0x00499890;
              }
              uVar29 = 0;
              for (uVar20 = *puVar21 ^ *puVar33; (uVar20 & 1) == 0;
                  uVar20 = uVar20 >> 1 | 0x8000000000000000) {
                uVar29 = uVar29 + 1;
              }
              uVar29 = uVar29 >> 3;
            }
            else {
joined_r0x00499890:
              if (puVar46 < puVar37) {
                iVar26 = ((int)puVar46 - (int)puVar19) + -4;
code_r0x00499470:
                if (*puVar33 == *puVar46) goto code_r0x0049947f;
                uVar29 = 0;
                for (uVar20 = *puVar46 ^ *puVar33; (uVar20 & 1) == 0;
                    uVar20 = uVar20 >> 1 | 0x8000000000000000) {
                  uVar29 = uVar29 + 1;
                }
                uVar29 = (uVar29 >> 3) + iVar26;
                goto code_r0x0049952c;
              }
code_r0x00499490:
              if ((puVar46 < (ulong *)((long)puVar27 - 3U)) && ((int)*puVar33 == (int)*puVar46)) {
                puVar46 = (ulong *)((long)puVar46 + 4);
                puVar33 = (ulong *)((long)puVar33 + 4);
              }
              if ((puVar46 < (ulong *)((long)puVar27 - 1U)) && ((short)*puVar33 == (short)*puVar46))
              {
                puVar46 = (ulong *)((long)puVar46 + 2);
                puVar33 = (ulong *)((long)puVar33 + 2);
              }
              if (puVar46 < puVar27) {
                puVar46 = (ulong *)((long)puVar46 + (ulong)((char)*puVar33 == (char)*puVar46));
              }
              uVar29 = (int)puVar46 - (int)puVar21;
            }
code_r0x0049952c:
            puVar21 = (ulong *)((long)puVar19 + (ulong)uVar29 + 4);
            if (puVar21 == puVar27) {
              puVar37 = puVar27;
              puVar33 = param_2;
              if (puVar27 < puVar48) {
                if (*param_2 == *puVar27) {
                  puVar37 = puVar27 + 1;
                  puVar33 = param_2 + 1;
                  goto code_r0x00499567;
                }
                uVar45 = 0;
                for (uVar20 = *puVar27 ^ *param_2; (uVar20 & 1) == 0;
                    uVar20 = uVar20 >> 1 | 0x8000000000000000) {
                  uVar45 = uVar45 + 1;
                }
                uVar45 = uVar45 >> 3;
              }
              else {
code_r0x00499567:
                if (puVar37 < puVar48) {
                  puVar19 = (ulong *)((long)puVar19 + (lVar36 - (long)puVar22));
                  if (puVar16 <= puVar19) {
                    puVar19 = puVar16;
                  }
                  iVar26 = (int)puVar37 - (int)puVar19;
code_r0x00499590:
                  if (*puVar33 == *puVar37) goto code_r0x0049959b;
                  uVar45 = 0;
                  for (uVar20 = *puVar37 ^ *puVar33; (uVar20 & 1) == 0;
                      uVar20 = uVar20 >> 1 | 0x8000000000000000) {
                    uVar45 = uVar45 + 1;
                  }
                  uVar45 = (uVar45 >> 3) + iVar26;
                  goto code_r0x004995dc;
                }
code_r0x004997b9:
                if ((puVar37 < puVar4) && ((int)*puVar33 == (int)*puVar37)) {
                  puVar37 = (ulong *)((long)puVar37 + 4);
                  puVar33 = (ulong *)((long)puVar33 + 4);
                }
                if ((puVar37 < puVar17) && ((short)*puVar33 == (short)*puVar37)) {
                  puVar37 = (ulong *)((long)puVar37 + 2);
                  puVar33 = (ulong *)((long)puVar33 + 2);
                }
                if (puVar37 < puVar16) {
                  puVar37 = (ulong *)((long)puVar37 + (ulong)((char)*puVar33 == (char)*puVar37));
                }
                uVar45 = (int)puVar37 - (int)puVar27;
              }
code_r0x004995dc:
              uVar29 = uVar29 + uVar45;
              puVar21 = (ulong *)((long)puVar21 + (ulong)uVar45);
            }
          }
          else {
            puVar21 = (ulong *)((long)puVar19 + 4);
            puVar27 = (ulong *)((long)puVar22 + 4);
            puVar37 = puVar21;
            if (puVar21 < puVar48) {
              if (*puVar27 == *puVar21) {
                puVar27 = (ulong *)((long)puVar22 + 0xc);
                puVar37 = (ulong *)((long)puVar19 + 0xc);
                goto joined_r0x00499822;
              }
              uVar29 = 0;
              for (uVar20 = *puVar21 ^ *puVar27; (uVar20 & 1) == 0;
                  uVar20 = uVar20 >> 1 | 0x8000000000000000) {
                uVar29 = uVar29 + 1;
              }
              uVar29 = uVar29 >> 3;
            }
            else {
joined_r0x00499822:
              if (puVar37 < puVar48) {
                iVar26 = ((int)puVar37 - (int)puVar19) + -4;
code_r0x004993e0:
                if (*puVar27 == *puVar37) goto code_r0x004993ef;
                uVar29 = 0;
                for (uVar20 = *puVar37 ^ *puVar27; (uVar20 & 1) == 0;
                    uVar20 = uVar20 >> 1 | 0x8000000000000000) {
                  uVar29 = uVar29 + 1;
                }
                uVar29 = (uVar29 >> 3) + iVar26;
                goto code_r0x004994f4;
              }
code_r0x0049982f:
              if ((puVar37 < puVar4) && ((int)*puVar27 == (int)*puVar37)) {
                puVar37 = (ulong *)((long)puVar37 + 4);
                puVar27 = (ulong *)((long)puVar27 + 4);
              }
              if ((puVar37 < puVar17) && ((short)*puVar27 == (short)*puVar37)) {
                puVar37 = (ulong *)((long)puVar37 + 2);
                puVar27 = (ulong *)((long)puVar27 + 2);
              }
              if (puVar37 < puVar16) {
                puVar37 = (ulong *)((long)puVar37 + (ulong)((char)*puVar27 == (char)*puVar37));
              }
              uVar29 = (int)puVar37 - (int)puVar21;
            }
code_r0x004994f4:
            puVar21 = (ulong *)((long)puVar19 + (ulong)uVar29 + 4);
          }
          if (pcVar40 < (char *)((long)puVar34 + (ulong)(uVar29 + 0xf0) / 0xff + 8))
          goto code_r0x00498449;
          pcVar47 = (char *)((long)puVar34 + 2);
          if (uVar29 < 0xf) {
            *pcStack_70 = *pcStack_70 + (char)uVar29;
            pcStack_70 = pcVar47;
          }
          else {
            *pcStack_70 = *pcStack_70 + '\x0f';
            uVar45 = uVar29 - 0xf;
            pcVar47[0] = -1;
            pcVar47[1] = -1;
            pcVar47[2] = -1;
            pcVar47[3] = -1;
            if (0x3fb < uVar45) {
              uVar20 = (ulong)(((uVar29 - 0x40b) / 0x3fc) * 4);
              func_0x0099bdb0((char *)((long)puVar34 + 6),0xff,uVar20 + 4);
              pcVar47 = (char *)((long)puVar34 + uVar20 + 6);
              uVar45 = (uVar29 - 0x40b) % 0x3fc;
            }
            uVar29 = uVar45 * 0x8081 >> 0x17;
            pcVar47[uVar29] = (char)uVar29 + (char)uVar45;
            pcStack_70 = pcVar47 + (ulong)uVar29 + 1;
          }
          if (puVar24 <= puVar21) goto code_r0x0049ac21;
          *(int *)(param_1 +
                  ((ulong)(*(long *)((long)puVar21 + -2) * -0x30e4432345000000) >> 0x34) * 4) =
               ((int)puVar21 + -2) - iVar44;
          uVar20 = *puVar21 * -0x30e4432345000000 >> 0x34;
          uVar29 = *(uint *)(param_1 + uVar20 * 4);
          if (uVar29 < uVar30) {
            uVar45 = *(uint *)(lVar23 + uVar20 * 4);
            uVar29 = iVar38 + uVar45;
            puVar22 = (ulong *)((ulong)uVar45 + lVar31);
            puVar37 = puVar35;
          }
          else {
            puVar22 = (ulong *)(lVar39 + (ulong)uVar29);
            puVar37 = param_2;
          }
          uVar45 = (int)puVar21 - iVar44;
          *(uint *)(param_1 + uVar20 * 4) = uVar45;
          if ((uVar29 + 0xffff < uVar45) || ((int)*puVar22 != (int)*puVar21)) goto code_r0x00499059;
          puVar34 = (ulong *)(pcStack_70 + 1);
          *pcStack_70 = '\0';
          iVar26 = uVar45 - uVar29;
          puVar19 = puVar21;
        } while( true );
      }
      goto code_r0x00498f12;
    }
code_r0x0049ac21:
    uVar15 = (long)param_2 + (uVar15 - (long)puVar21);
    iVar44 = 0;
    if (pcVar40 < pcStack_70 + (uVar15 + 0xf0) / 0xff + uVar15 + 1) goto code_r0x0049b6f3;
    if (uVar15 < 0xf) {
      *pcStack_70 = (char)uVar15 << 4;
      param_3 = pcStack_70;
    }
    else {
      uVar20 = uVar15 - 0xf;
      *pcStack_70 = -0x10;
      param_3 = pcStack_70 + 1;
      if (0xfe < uVar20) {
        uVar20 = (uVar15 - 0x10e) / 0xff;
        func_0x0099bdb0(param_3,0xff,uVar20 + 1);
        param_3 = pcStack_70 + uVar20 + 2;
        uVar20 = (uVar15 + uVar20 * -0xff) - 0x10e;
      }
      *param_3 = (char)uVar20;
    }
  }
code_r0x0049b6d5:
  func_0x0099bda0(param_3 + 1,puVar21,uVar15);
  iVar44 = ((int)(param_3 + 1) + (int)uVar15) - iVar25;
code_r0x0049b6f3:
  *(ulong **)(param_1 + 0x4000) = param_2;
  *(uint *)(param_1 + 0x4018) = param_4;
  return iVar44;
code_r0x0049a9db:
  puVar48 = puVar48 + 1;
  puVar19 = puVar19 + 1;
  iVar44 = iVar44 + 8;
  if (puVar16 <= puVar48) goto code_r0x0049ab8c;
  goto code_r0x0049a9d0;
code_r0x0049a749:
  puVar24 = (ulong *)(lVar36 + 5);
  puVar35 = (ulong *)(lVar36 + 6);
  if (puVar22 < puVar35) goto code_r0x00498e1d;
  goto code_r0x0049a769;
code_r0x0049a45b:
  puVar48 = puVar48 + 1;
  puVar21 = puVar21 + 1;
  iVar44 = iVar44 + 8;
  if (puVar16 <= puVar48) goto code_r0x0049a60d;
  goto code_r0x0049a450;
code_r0x0049a1c8:
  puVar24 = (ulong *)(lVar31 + 5);
  puVar35 = (ulong *)(lVar31 + 6);
  if (puVar22 < puVar35) goto code_r0x004980c5;
  goto code_r0x0049a1e8;
code_r0x0049ae47:
  puVar22 = (ulong *)(lVar39 + uVar43);
  puVar27 = param_2;
  if (uVar45 < uVar30) {
    puVar27 = puVar35;
  }
  if ((puVar27 < puVar22) && (*(char *)((long)puVar19 - 1) == *(char *)((long)puVar22 - 1))) {
    puVar37 = (ulong *)(lVar39 + uVar43);
    puVar34 = puVar19;
    do {
      puVar19 = (ulong *)((long)puVar34 - 1);
      puVar22 = (ulong *)((long)puVar37 + -1);
      if ((puVar22 <= puVar27) || (puVar19 <= puVar21)) break;
      pcVar47 = (char *)((long)puVar34 - 2);
      pcVar1 = (char *)((long)puVar37 + -2);
      puVar37 = puVar22;
      puVar34 = puVar19;
    } while (*pcVar47 == *pcVar1);
  }
  uVar20 = (long)puVar19 - (long)puVar21;
  uVar32 = uVar20 & 0xffffffff;
  if (pcVar40 < pcStack_80 + uVar32 / 0xff + uVar32 + 9) goto code_r0x00498f12;
  puVar37 = (ulong *)(pcStack_80 + 1);
  if ((uint)uVar20 < 0xf) {
    *pcStack_80 = (char)uVar20 << 4;
  }
  else {
    uVar13 = (uint)uVar20 - 0xf;
    *pcStack_80 = -0x10;
    if (0xfe < uVar13) {
      pcStack_70._0_4_ = (int)puVar21;
      pcStack_70._0_4_ = (int)puVar19 - (int)pcStack_70;
      uVar20 = (ulong)((int)pcStack_70 - 0x10e) / 0xff;
      func_0x0099bdb0(puVar37,0xff,uVar20 + 1);
      puVar37 = (ulong *)(pcStack_80 + uVar20 + 2);
      uVar13 = ((int)pcStack_70 + (int)uVar20 * -0xff) - 0x10e;
    }
    *(char *)puVar37 = (char)uVar13;
    puVar37 = (ulong *)((long)puVar37 + 1);
  }
  puVar34 = (ulong *)((long)puVar37 + uVar32);
  uVar20 = 8;
  if (8 < uVar32) {
    uVar20 = uVar32;
  }
  if ((0x18 < uVar32) && (0x1f < (ulong)((long)puVar37 - (long)puVar21))) {
    uVar32 = (uVar20 - 1 >> 3) + 1;
    uVar20 = uVar32 & 0x3ffffffffffffffc;
    uVar41 = 0;
    do {
      uVar9 = ((undefined8 *)((long)puVar21 + uVar41))[1];
      puVar5 = (undefined8 *)((long)puVar21 + uVar41 + 0x10);
      uVar10 = *puVar5;
      uVar11 = puVar5[1];
      *(undefined8 *)((long)puVar37 + uVar41) = *(undefined8 *)((long)puVar21 + uVar41);
      *(undefined8 *)((char *)((long)puVar37 + uVar41) + 8) = uVar9;
      pcVar47 = (char *)((long)puVar37 + uVar41 + 0x10);
      *(undefined8 *)pcVar47 = uVar10;
      *(undefined8 *)(pcVar47 + 8) = uVar11;
      uVar41 = uVar41 + 0x20;
    } while ((uVar32 * 8 & 0xffffffffffffffe0) != uVar41);
    puVar21 = puVar21 + uVar20;
    puVar37 = puVar37 + uVar20;
    if (uVar32 == uVar20) goto code_r0x0049b053;
  }
  do {
    *puVar37 = *puVar21;
    puVar37 = puVar37 + 1;
    puVar21 = puVar21 + 1;
  } while (puVar37 < puVar34);
code_r0x0049b053:
  iVar44 = uVar29 - uVar45;
  do {
    *(short *)puVar34 = (short)iVar44;
    if (puVar27 == puVar35) {
      puVar27 = (ulong *)((lVar31 - (long)puVar22) + (long)puVar19);
      if (puVar16 < puVar27) {
        puVar27 = puVar16;
      }
      puVar21 = (ulong *)((long)puVar19 + 4);
      puVar33 = (ulong *)((long)puVar22 + 4);
      puVar37 = (ulong *)((long)puVar27 - 7);
      puVar46 = puVar21;
      if (puVar21 < puVar37) {
        if (*puVar33 == *puVar21) {
          puVar33 = (ulong *)((long)puVar22 + 0xc);
          puVar46 = (ulong *)((long)puVar19 + 0xc);
          goto joined_r0x0049b5a3;
        }
        uVar29 = 0;
        for (uVar20 = *puVar21 ^ *puVar33; (uVar20 & 1) == 0;
            uVar20 = uVar20 >> 1 | 0x8000000000000000) {
          uVar29 = uVar29 + 1;
        }
        uVar29 = uVar29 >> 3;
      }
      else {
joined_r0x0049b5a3:
        if (puVar46 < puVar37) {
          iVar44 = ((int)puVar46 - (int)puVar19) + -4;
code_r0x0049b170:
          if (*puVar33 == *puVar46) break;
          uVar29 = 0;
          for (uVar20 = *puVar46 ^ *puVar33; (uVar20 & 1) == 0;
              uVar20 = uVar20 >> 1 | 0x8000000000000000) {
            uVar29 = uVar29 + 1;
          }
          uVar29 = (uVar29 >> 3) + iVar44;
          goto code_r0x0049b229;
        }
code_r0x0049b190:
        if ((puVar46 < (ulong *)((long)puVar27 - 3U)) && ((int)*puVar33 == (int)*puVar46)) {
          puVar46 = (ulong *)((long)puVar46 + 4);
          puVar33 = (ulong *)((long)puVar33 + 4);
        }
        if ((puVar46 < (ulong *)((long)puVar27 - 1U)) && ((short)*puVar33 == (short)*puVar46)) {
          puVar46 = (ulong *)((long)puVar46 + 2);
          puVar33 = (ulong *)((long)puVar33 + 2);
        }
        if (puVar46 < puVar27) {
          puVar46 = (ulong *)((long)puVar46 + (ulong)((char)*puVar33 == (char)*puVar46));
        }
        uVar29 = (int)puVar46 - (int)puVar21;
      }
code_r0x0049b229:
      puVar21 = (ulong *)((long)puVar19 + (ulong)uVar29 + 4);
      if (puVar21 == puVar27) {
        puVar37 = puVar27;
        puVar33 = param_2;
        if (puVar27 < puVar48) {
          if (*param_2 == *puVar27) {
            puVar37 = puVar27 + 1;
            puVar33 = param_2 + 1;
            goto code_r0x0049b269;
          }
          uVar45 = 0;
          for (uVar20 = *puVar27 ^ *param_2; (uVar20 & 1) == 0;
              uVar20 = uVar20 >> 1 | 0x8000000000000000) {
            uVar45 = uVar45 + 1;
          }
          uVar45 = uVar45 >> 3;
        }
        else {
code_r0x0049b269:
          if (puVar37 < puVar48) {
            puVar19 = (ulong *)((long)puVar19 + (lVar31 - (long)puVar22));
            if (puVar16 <= puVar19) {
              puVar19 = puVar16;
            }
            iVar44 = (int)puVar37 - (int)puVar19;
code_r0x0049b2a0:
            if (*puVar33 == *puVar37) goto code_r0x0049b2ab;
            uVar45 = 0;
            for (uVar20 = *puVar37 ^ *puVar33; (uVar20 & 1) == 0;
                uVar20 = uVar20 >> 1 | 0x8000000000000000) {
              uVar45 = uVar45 + 1;
            }
            uVar45 = (uVar45 >> 3) + iVar44;
            goto code_r0x0049b2ec;
          }
code_r0x0049b52f:
          if ((puVar37 < puVar4) && ((int)*puVar33 == (int)*puVar37)) {
            puVar37 = (ulong *)((long)puVar37 + 4);
            puVar33 = (ulong *)((long)puVar33 + 4);
          }
          if ((puVar37 < puVar17) && ((short)*puVar33 == (short)*puVar37)) {
            puVar37 = (ulong *)((long)puVar37 + 2);
            puVar33 = (ulong *)((long)puVar33 + 2);
          }
          if (puVar37 < puVar16) {
            puVar37 = (ulong *)((long)puVar37 + (ulong)((char)*puVar33 == (char)*puVar37));
          }
          uVar45 = (int)puVar37 - (int)puVar27;
        }
code_r0x0049b2ec:
        uVar29 = uVar29 + uVar45;
        puVar21 = (ulong *)((long)puVar21 + (ulong)uVar45);
      }
    }
    else {
      puVar21 = (ulong *)((long)puVar19 + 4);
      puVar27 = (ulong *)((long)puVar22 + 4);
      puVar37 = puVar21;
      if (puVar21 < puVar48) {
        if (*puVar27 == *puVar21) {
          puVar27 = (ulong *)((long)puVar22 + 0xc);
          puVar37 = (ulong *)((long)puVar19 + 0xc);
          goto code_r0x0049b0bd;
        }
        uVar29 = 0;
        for (uVar20 = *puVar21 ^ *puVar27; (uVar20 & 1) == 0;
            uVar20 = uVar20 >> 1 | 0x8000000000000000) {
          uVar29 = uVar29 + 1;
        }
        uVar29 = uVar29 >> 3;
      }
      else {
code_r0x0049b0bd:
        if (puVar37 < puVar48) {
          iVar44 = ((int)puVar37 - (int)puVar19) + -4;
code_r0x0049b0e0:
          if (*puVar27 == *puVar37) goto code_r0x0049b0ef;
          uVar29 = 0;
          for (uVar20 = *puVar37 ^ *puVar27; (uVar20 & 1) == 0;
              uVar20 = uVar20 >> 1 | 0x8000000000000000) {
            uVar29 = uVar29 + 1;
          }
          uVar29 = (uVar29 >> 3) + iVar44;
          goto code_r0x0049b1e4;
        }
code_r0x0049b477:
        if ((puVar37 < puVar4) && ((int)*puVar27 == (int)*puVar37)) {
          puVar37 = (ulong *)((long)puVar37 + 4);
          puVar27 = (ulong *)((long)puVar27 + 4);
        }
        if ((puVar37 < puVar17) && ((short)*puVar27 == (short)*puVar37)) {
          puVar37 = (ulong *)((long)puVar37 + 2);
          puVar27 = (ulong *)((long)puVar27 + 2);
        }
        if (puVar37 < puVar16) {
          puVar37 = (ulong *)((long)puVar37 + (ulong)((char)*puVar27 == (char)*puVar37));
        }
        uVar29 = (int)puVar37 - (int)puVar21;
      }
code_r0x0049b1e4:
      puVar21 = (ulong *)((long)puVar19 + (ulong)uVar29 + 4);
    }
    if (pcVar40 < (char *)((long)puVar34 + (ulong)(uVar29 + 0xf0) / 0xff + 8))
    goto code_r0x00498f12;
    pcVar47 = (char *)((long)puVar34 + 2);
    if (uVar29 < 0xf) {
      *pcStack_80 = *pcStack_80 + (char)uVar29;
    }
    else {
      *pcStack_80 = *pcStack_80 + '\x0f';
      uVar45 = uVar29 - 0xf;
      pcVar47[0] = -1;
      pcVar47[1] = -1;
      pcVar47[2] = -1;
      pcVar47[3] = -1;
      if (0x3fb < uVar45) {
        uVar20 = (ulong)(((uVar29 - 0x40b) / 0x3fc) * 4);
        func_0x0099bdb0((char *)((long)puVar34 + 6),0xff,uVar20 + 4);
        pcVar47 = (char *)((long)puVar34 + uVar20 + 6);
        uVar45 = (uVar29 - 0x40b) % 0x3fc;
      }
      uVar29 = uVar45 * 0x8081 >> 0x17;
      pcVar47[uVar29] = (char)uVar29 + (char)uVar45;
      pcVar47 = pcVar47 + (ulong)uVar29 + 1;
    }
    pcStack_80 = pcVar47;
    if (puVar24 <= puVar21) goto code_r0x00498fae;
    *(int *)(param_1 + ((ulong)(*(long *)((long)puVar21 + -2) * -0x30e4432345000000) >> 0x34) * 4) =
         ((int)puVar21 + -2) - iVar38;
    uVar20 = *puVar21 * -0x30e4432345000000 >> 0x34;
    uVar45 = (int)puVar21 - iVar38;
    uVar29 = *(uint *)(param_1 + uVar20 * 4);
    puVar27 = param_2;
    lVar39 = lVar36;
    if (uVar29 < uVar30) {
      puVar27 = puVar35;
      lVar39 = lVar23;
    }
    *(uint *)(param_1 + uVar20 * 4) = uVar45;
    if ((uVar29 + 0xffff < uVar45) ||
       (puVar22 = (ulong *)(lVar39 + (ulong)uVar29), (int)*puVar22 != (int)*puVar21))
    goto code_r0x0049ada1;
    puVar34 = (ulong *)(pcVar47 + 1);
    *pcVar47 = '\0';
    iVar44 = uVar45 - uVar29;
    puVar19 = puVar21;
  } while( true );
  puVar46 = puVar46 + 1;
  puVar33 = puVar33 + 1;
  iVar44 = iVar44 + 8;
  if (puVar37 <= puVar46) goto code_r0x0049b190;
  goto code_r0x0049b170;
code_r0x0049b2ab:
  puVar37 = puVar37 + 1;
  puVar33 = puVar33 + 1;
  iVar44 = iVar44 + 8;
  if (puVar48 <= puVar37) goto code_r0x0049b52f;
  goto code_r0x0049b2a0;
code_r0x0049b0ef:
  puVar37 = puVar37 + 1;
  puVar27 = puVar27 + 1;
  iVar44 = iVar44 + 8;
  if (puVar48 <= puVar37) goto code_r0x0049b477;
  goto code_r0x0049b0e0;
code_r0x0049ada1:
  puVar19 = (ulong *)((long)puVar21 + 1);
  uVar29 = (int)puVar19 - iVar38;
  puVar22 = (ulong *)((long)puVar21 + 2);
  if (puVar24 < puVar22) goto code_r0x00498fae;
  goto code_r0x0049adc7;
code_r0x004999f1:
  puVar22 = (ulong *)(lVar39 + uVar18);
  puVar27 = param_2;
  if (uVar14 < uVar30) {
    puVar27 = puVar35;
  }
  if ((puVar27 < puVar22) && (*(char *)((long)puVar19 - 1) == *(char *)((long)puVar22 - 1))) {
    puVar37 = (ulong *)(lVar39 + uVar18);
    puVar34 = puVar19;
    do {
      puVar19 = (ulong *)((long)puVar34 - 1);
      puVar22 = (ulong *)((long)puVar37 + -1);
      if ((puVar22 <= puVar27) || (puVar19 <= puVar21)) break;
      pcVar47 = (char *)((long)puVar34 - 2);
      pcVar1 = (char *)((long)puVar37 + -2);
      puVar37 = puVar22;
      puVar34 = puVar19;
    } while (*pcVar47 == *pcVar1);
  }
  uVar20 = (long)puVar19 - (long)puVar21;
  uVar32 = uVar20 & 0xffffffff;
  if (pcVar40 < param_3 + uVar32 / 0xff + uVar32 + 9) goto code_r0x00498f12;
  puVar37 = (ulong *)(param_3 + 1);
  if ((uint)uVar20 < 0xf) {
    *param_3 = (char)uVar20 << 4;
  }
  else {
    uVar13 = (uint)uVar20 - 0xf;
    *param_3 = -0x10;
    if (0xfe < uVar13) {
      iVar38 = (int)puVar19 - (int)puVar21;
      uVar20 = (ulong)(iVar38 - 0x10e) / 0xff;
      func_0x0099bdb0(puVar37,0xff,uVar20 + 1);
      puVar37 = (ulong *)(param_3 + uVar20 + 2);
      uVar13 = (iVar38 + (int)uVar20 * -0xff) - 0x10e;
    }
    *(char *)puVar37 = (char)uVar13;
    puVar37 = (ulong *)((long)puVar37 + 1);
  }
  puVar34 = (ulong *)((long)puVar37 + uVar32);
  uVar20 = 8;
  if (8 < uVar32) {
    uVar20 = uVar32;
  }
  if ((0x18 < uVar32) && (0x1f < (ulong)((long)puVar37 - (long)puVar21))) {
    uVar32 = (uVar20 - 1 >> 3) + 1;
    uVar20 = uVar32 & 0x3ffffffffffffffc;
    uVar41 = 0;
    do {
      uVar9 = ((undefined8 *)((long)puVar21 + uVar41))[1];
      puVar5 = (undefined8 *)((long)puVar21 + uVar41 + 0x10);
      uVar10 = *puVar5;
      uVar11 = puVar5[1];
      *(undefined8 *)((long)puVar37 + uVar41) = *(undefined8 *)((long)puVar21 + uVar41);
      *(undefined8 *)((char *)((long)puVar37 + uVar41) + 8) = uVar9;
      pcVar47 = (char *)((long)puVar37 + uVar41 + 0x10);
      *(undefined8 *)pcVar47 = uVar10;
      *(undefined8 *)(pcVar47 + 8) = uVar11;
      uVar41 = uVar41 + 0x20;
    } while ((uVar32 * 8 & 0xffffffffffffffe0) != uVar41);
    puVar21 = puVar21 + uVar20;
    puVar37 = puVar37 + uVar20;
    if (uVar32 == uVar20) goto code_r0x00499c03;
  }
  do {
    *puVar37 = *puVar21;
    puVar37 = puVar37 + 1;
    puVar21 = puVar21 + 1;
  } while (puVar37 < puVar34);
code_r0x00499c03:
  iVar38 = uVar45 - uVar14;
  pcVar47 = param_3;
  do {
    *(short *)puVar34 = (short)iVar38;
    if (puVar27 == puVar35) {
      puVar27 = (ulong *)((lVar31 - (long)puVar22) + (long)puVar19);
      if (puVar16 < puVar27) {
        puVar27 = puVar16;
      }
      puVar21 = (ulong *)((long)puVar19 + 4);
      puVar33 = (ulong *)((long)puVar22 + 4);
      puVar37 = (ulong *)((long)puVar27 - 7);
      puVar46 = puVar21;
      if (puVar21 < puVar37) {
        if (*puVar33 == *puVar21) {
          puVar33 = (ulong *)((long)puVar22 + 0xc);
          puVar46 = (ulong *)((long)puVar19 + 0xc);
          goto code_r0x00499cff;
        }
        uVar45 = 0;
        for (uVar20 = *puVar21 ^ *puVar33; (uVar20 & 1) == 0;
            uVar20 = uVar20 >> 1 | 0x8000000000000000) {
          uVar45 = uVar45 + 1;
        }
        uVar45 = uVar45 >> 3;
      }
      else {
code_r0x00499cff:
        if (puVar46 < puVar37) {
          iVar38 = ((int)puVar46 - (int)puVar19) + -4;
code_r0x00499d20:
          if (*puVar33 == *puVar46) goto code_r0x00499d2f;
          uVar45 = 0;
          for (uVar20 = *puVar46 ^ *puVar33; (uVar20 & 1) == 0;
              uVar20 = uVar20 >> 1 | 0x8000000000000000) {
            uVar45 = uVar45 + 1;
          }
          uVar45 = (uVar45 >> 3) + iVar38;
          goto code_r0x00499df6;
        }
code_r0x00499d40:
        if ((puVar46 < (ulong *)((long)puVar27 - 3U)) && ((int)*puVar33 == (int)*puVar46)) {
          puVar46 = (ulong *)((long)puVar46 + 4);
          puVar33 = (ulong *)((long)puVar33 + 4);
        }
        if ((puVar46 < (ulong *)((long)puVar27 - 1U)) && ((short)*puVar33 == (short)*puVar46)) {
          puVar46 = (ulong *)((long)puVar46 + 2);
          puVar33 = (ulong *)((long)puVar33 + 2);
        }
        if (puVar46 < puVar27) {
          puVar46 = (ulong *)((long)puVar46 + (ulong)((char)*puVar33 == (char)*puVar46));
        }
        uVar45 = (int)puVar46 - (int)puVar21;
      }
code_r0x00499df6:
      puVar21 = (ulong *)((long)puVar19 + (ulong)uVar45 + 4);
      if (puVar21 == puVar27) {
        puVar37 = puVar27;
        puVar33 = param_2;
        if (puVar27 < puVar48) {
          if (*param_2 == *puVar27) {
            puVar37 = puVar27 + 1;
            puVar33 = param_2 + 1;
            goto code_r0x00499e2e;
          }
          uVar13 = 0;
          for (uVar20 = *puVar27 ^ *param_2; (uVar20 & 1) == 0;
              uVar20 = uVar20 >> 1 | 0x8000000000000000) {
            uVar13 = uVar13 + 1;
          }
          uVar13 = uVar13 >> 3;
        }
        else {
code_r0x00499e2e:
          if (puVar37 < puVar48) {
            puVar19 = (ulong *)((long)puVar19 + (lVar31 - (long)puVar22));
            if (puVar16 <= puVar19) {
              puVar19 = puVar16;
            }
            iVar38 = (int)puVar37 - (int)puVar19;
code_r0x00499e50:
            if (*puVar33 == *puVar37) goto code_r0x00499e5b;
            uVar13 = 0;
            for (uVar20 = *puVar37 ^ *puVar33; (uVar20 & 1) == 0;
                uVar20 = uVar20 >> 1 | 0x8000000000000000) {
              uVar13 = uVar13 + 1;
            }
            uVar13 = (uVar13 >> 3) + iVar38;
            goto code_r0x00499edc;
          }
code_r0x00499e6c:
          if ((puVar37 < puVar4) && ((int)*puVar33 == (int)*puVar37)) {
            puVar37 = (ulong *)((long)puVar37 + 4);
            puVar33 = (ulong *)((long)puVar33 + 4);
          }
          if ((puVar37 < puVar17) && ((short)*puVar33 == (short)*puVar37)) {
            puVar37 = (ulong *)((long)puVar37 + 2);
            puVar33 = (ulong *)((long)puVar33 + 2);
          }
          if (puVar37 < puVar16) {
            puVar37 = (ulong *)((long)puVar37 + (ulong)((char)*puVar33 == (char)*puVar37));
          }
          uVar13 = (int)puVar37 - (int)puVar27;
        }
code_r0x00499edc:
        uVar45 = uVar45 + uVar13;
        puVar21 = (ulong *)((long)puVar21 + (ulong)uVar13);
      }
    }
    else {
      puVar21 = (ulong *)((long)puVar19 + 4);
      puVar27 = (ulong *)((long)puVar22 + 4);
      puVar37 = puVar21;
      if (puVar21 < puVar48) {
        if (*puVar27 == *puVar21) {
          puVar27 = (ulong *)((long)puVar22 + 0xc);
          puVar37 = (ulong *)((long)puVar19 + 0xc);
          goto code_r0x00499c62;
        }
        uVar45 = 0;
        for (uVar20 = *puVar21 ^ *puVar27; (uVar20 & 1) == 0;
            uVar20 = uVar20 >> 1 | 0x8000000000000000) {
          uVar45 = uVar45 + 1;
        }
        uVar45 = uVar45 >> 3;
      }
      else {
code_r0x00499c62:
        if (puVar37 < puVar48) {
          iVar38 = ((int)puVar37 - (int)puVar19) + -4;
code_r0x00499c80:
          if (*puVar27 == *puVar37) break;
          uVar45 = 0;
          for (uVar20 = *puVar37 ^ *puVar27; (uVar20 & 1) == 0;
              uVar20 = uVar20 >> 1 | 0x8000000000000000) {
            uVar45 = uVar45 + 1;
          }
          uVar45 = (uVar45 >> 3) + iVar38;
          goto code_r0x00499db7;
        }
code_r0x0049a04f:
        if ((puVar37 < puVar4) && ((int)*puVar27 == (int)*puVar37)) {
          puVar37 = (ulong *)((long)puVar37 + 4);
          puVar27 = (ulong *)((long)puVar27 + 4);
        }
        if ((puVar37 < puVar17) && ((short)*puVar27 == (short)*puVar37)) {
          puVar37 = (ulong *)((long)puVar37 + 2);
          puVar27 = (ulong *)((long)puVar27 + 2);
        }
        if (puVar37 < puVar16) {
          puVar37 = (ulong *)((long)puVar37 + (ulong)((char)*puVar27 == (char)*puVar37));
        }
        uVar45 = (int)puVar37 - (int)puVar21;
      }
code_r0x00499db7:
      puVar21 = (ulong *)((long)puVar19 + (ulong)uVar45 + 4);
    }
    if (pcVar40 < (char *)((long)puVar34 + (ulong)(uVar45 + 0xf0) / 0xff + 8))
    goto code_r0x00498f12;
    param_3 = (char *)((long)puVar34 + 2);
    if (uVar45 < 0xf) {
      *pcVar47 = *pcVar47 + (char)uVar45;
    }
    else {
      *pcVar47 = *pcVar47 + '\x0f';
      uVar13 = uVar45 - 0xf;
      param_3[0] = -1;
      param_3[1] = -1;
      param_3[2] = -1;
      param_3[3] = -1;
      if (0x3fb < uVar13) {
        uVar20 = (ulong)(((uVar45 - 0x40b) / 0x3fc) * 4);
        func_0x0099bdb0((char *)((long)puVar34 + 6),0xff,uVar20 + 4);
        param_3 = (char *)((long)puVar34 + uVar20 + 6);
        uVar13 = (uVar45 - 0x40b) % 0x3fc;
      }
      uVar45 = uVar13 * 0x8081 >> 0x17;
      param_3[uVar45] = (char)uVar45 + (char)uVar13;
      param_3 = param_3 + (ulong)uVar45 + 1;
    }
    if (puVar24 <= puVar21) goto code_r0x0049b5b5;
    *(int *)(param_1 + ((ulong)(*(long *)((long)puVar21 + -2) * -0x30e4432345000000) >> 0x34) * 4) =
         ((int)puVar21 + -2) - iStack_50;
    uVar20 = *puVar21 * -0x30e4432345000000 >> 0x34;
    uVar13 = (int)puVar21 - iStack_50;
    uVar45 = *(uint *)(param_1 + uVar20 * 4);
    lVar39 = lVar36;
    if (uVar45 < uVar30) {
      lVar39 = lVar23;
    }
    *(uint *)(param_1 + uVar20 * 4) = uVar13;
    puVar27 = param_2;
    if (uVar45 < uVar30) {
      puVar27 = puVar35;
    }
    if (((uVar45 < uVar30 - uVar29) || (uVar45 + 0xffff < uVar13)) ||
       (puVar22 = (ulong *)(lVar39 + (ulong)uVar45), (int)*puVar22 != (int)*puVar21))
    goto code_r0x00499934;
    puVar34 = (ulong *)(param_3 + 1);
    *param_3 = '\0';
    iVar38 = uVar13 - uVar45;
    pcVar47 = param_3;
    puVar19 = puVar21;
  } while( true );
  puVar37 = puVar37 + 1;
  puVar27 = puVar27 + 1;
  iVar38 = iVar38 + 8;
  if (puVar48 <= puVar37) goto code_r0x0049a04f;
  goto code_r0x00499c80;
code_r0x00499d2f:
  puVar46 = puVar46 + 1;
  puVar33 = puVar33 + 1;
  iVar38 = iVar38 + 8;
  if (puVar37 <= puVar46) goto code_r0x00499d40;
  goto code_r0x00499d20;
code_r0x00499e5b:
  puVar37 = puVar37 + 1;
  puVar33 = puVar33 + 1;
  iVar38 = iVar38 + 8;
  if (puVar48 <= puVar37) goto code_r0x00499e6c;
  goto code_r0x00499e50;
code_r0x00499934:
  puVar19 = (ulong *)((long)puVar21 + 1);
  uVar45 = (int)puVar19 - iStack_50;
  puVar22 = (ulong *)((long)puVar21 + 2);
  if (puVar24 < puVar22) goto code_r0x0049b5b5;
  goto code_r0x00499964;
code_r0x00498611:
  puVar22 = (ulong *)(lVar39 + uVar43);
  puVar27 = param_2;
  if (uVar45 < uVar29) {
    puVar27 = puVar16;
  }
  if ((puVar27 < puVar22) && (*(char *)((long)puVar19 - 1) == *(char *)((long)puVar22 - 1))) {
    puVar37 = (ulong *)(lVar39 + uVar43);
    puVar34 = puVar19;
    do {
      puVar19 = (ulong *)((long)puVar34 - 1);
      puVar22 = (ulong *)((long)puVar37 + -1);
      if ((puVar22 <= puVar27) || (puVar19 <= puVar21)) break;
      pcVar47 = (char *)((long)puVar34 - 2);
      pcVar1 = (char *)((long)puVar37 + -2);
      puVar37 = puVar22;
      puVar34 = puVar19;
    } while (*pcVar47 == *pcVar1);
  }
  uVar20 = (long)puVar19 - (long)puVar21;
  uVar32 = uVar20 & 0xffffffff;
  if (pcVar40 < pcStack_78 + uVar32 / 0xff + uVar32 + 9) goto code_r0x00498f12;
  puVar37 = (ulong *)(pcStack_78 + 1);
  if ((uint)uVar20 < 0xf) {
    *pcStack_78 = (char)uVar20 << 4;
  }
  else {
    uVar13 = (uint)uVar20 - 0xf;
    *pcStack_78 = -0x10;
    if (0xfe < uVar13) {
      iStack_98 = (int)puVar21;
      iStack_98 = (int)puVar19 - iStack_98;
      uVar20 = (ulong)(iStack_98 - 0x10e) / 0xff;
      func_0x0099bdb0(puVar37,0xff,uVar20 + 1);
      puVar37 = (ulong *)(pcStack_78 + uVar20 + 2);
      uVar13 = (iStack_98 + (int)uVar20 * -0xff) - 0x10e;
    }
    *(char *)puVar37 = (char)uVar13;
    puVar37 = (ulong *)((long)puVar37 + 1);
  }
  puVar34 = (ulong *)((long)puVar37 + uVar32);
  uVar20 = 8;
  if (8 < uVar32) {
    uVar20 = uVar32;
  }
  if ((0x18 < uVar32) && (0x1f < (ulong)((long)puVar37 - (long)puVar21))) {
    uVar20 = (uVar20 - 1 >> 3) + 1;
    uVar32 = uVar20 & 0x3ffffffffffffffc;
    uVar41 = 0;
    do {
      uVar9 = ((undefined8 *)((long)puVar21 + uVar41))[1];
      puVar5 = (undefined8 *)((long)puVar21 + uVar41 + 0x10);
      uVar10 = *puVar5;
      uVar11 = puVar5[1];
      *(undefined8 *)((long)puVar37 + uVar41) = *(undefined8 *)((long)puVar21 + uVar41);
      *(undefined8 *)((char *)((long)puVar37 + uVar41) + 8) = uVar9;
      pcVar47 = (char *)((long)puVar37 + uVar41 + 0x10);
      *(undefined8 *)pcVar47 = uVar10;
      *(undefined8 *)(pcVar47 + 8) = uVar11;
      uVar41 = uVar41 + 0x20;
    } while ((uVar20 * 8 & 0xffffffffffffffe0) != uVar41);
    puVar21 = puVar21 + uVar32;
    puVar37 = puVar37 + uVar32;
    if (uVar20 == uVar32) goto code_r0x00498843;
  }
  do {
    *puVar37 = *puVar21;
    puVar37 = puVar37 + 1;
    puVar21 = puVar21 + 1;
  } while (puVar37 < puVar34);
code_r0x00498843:
  iVar44 = uVar30 - uVar45;
  do {
    *(short *)puVar34 = (short)iVar44;
    if (puVar27 == puVar16) {
      puVar27 = (ulong *)((lVar31 - (long)puVar22) + (long)puVar19);
      if (puVar24 < puVar27) {
        puVar27 = puVar24;
      }
      puVar21 = (ulong *)((long)puVar19 + 4);
      puVar33 = (ulong *)((long)puVar22 + 4);
      puVar37 = (ulong *)((long)puVar27 - 7);
      puVar46 = puVar21;
      if (puVar21 < puVar37) {
        if (*puVar33 == *puVar21) {
          puVar33 = (ulong *)((long)puVar22 + 0xc);
          puVar46 = (ulong *)((long)puVar19 + 0xc);
          goto joined_r0x00498dbb;
        }
        uVar30 = 0;
        for (uVar20 = *puVar21 ^ *puVar33; (uVar20 & 1) == 0;
            uVar20 = uVar20 >> 1 | 0x8000000000000000) {
          uVar30 = uVar30 + 1;
        }
        uVar30 = uVar30 >> 3;
      }
      else {
joined_r0x00498dbb:
        if (puVar46 < puVar37) {
          iVar44 = ((int)puVar46 - (int)puVar19) + -4;
code_r0x00498950:
          if (*puVar33 == *puVar46) break;
          uVar30 = 0;
          for (uVar20 = *puVar46 ^ *puVar33; (uVar20 & 1) == 0;
              uVar20 = uVar20 >> 1 | 0x8000000000000000) {
            uVar30 = uVar30 + 1;
          }
          uVar30 = (uVar30 >> 3) + iVar44;
          goto code_r0x00498a1e;
        }
code_r0x00498970:
        if ((puVar46 < (ulong *)((long)puVar27 - 3U)) && ((int)*puVar33 == (int)*puVar46)) {
          puVar46 = (ulong *)((long)puVar46 + 4);
          puVar33 = (ulong *)((long)puVar33 + 4);
        }
        if ((puVar46 < (ulong *)((long)puVar27 - 1U)) && ((short)*puVar33 == (short)*puVar46)) {
          puVar46 = (ulong *)((long)puVar46 + 2);
          puVar33 = (ulong *)((long)puVar33 + 2);
        }
        if (puVar46 < puVar27) {
          puVar46 = (ulong *)((long)puVar46 + (ulong)((char)*puVar33 == (char)*puVar46));
        }
        uVar30 = (int)puVar46 - (int)puVar21;
      }
code_r0x00498a1e:
      puVar21 = (ulong *)((long)puVar19 + (ulong)uVar30 + 4);
      if (puVar21 == puVar27) {
        puVar37 = puVar27;
        puVar33 = param_2;
        if (puVar27 < puVar48) {
          if (*param_2 == *puVar27) {
            puVar37 = puVar27 + 1;
            puVar33 = param_2 + 1;
            goto code_r0x00498a5f;
          }
          uVar45 = 0;
          for (uVar20 = *puVar27 ^ *param_2; (uVar20 & 1) == 0;
              uVar20 = uVar20 >> 1 | 0x8000000000000000) {
            uVar45 = uVar45 + 1;
          }
          uVar45 = uVar45 >> 3;
        }
        else {
code_r0x00498a5f:
          if (puVar37 < puVar48) {
            puVar19 = (ulong *)((long)puVar19 + (lVar31 - (long)puVar22));
            if (puVar24 <= puVar19) {
              puVar19 = puVar24;
            }
            iVar44 = (int)puVar37 - (int)puVar19;
code_r0x00498a90:
            if (*puVar33 == *puVar37) goto code_r0x00498a9b;
            uVar45 = 0;
            for (uVar20 = *puVar37 ^ *puVar33; (uVar20 & 1) == 0;
                uVar20 = uVar20 >> 1 | 0x8000000000000000) {
              uVar45 = uVar45 + 1;
            }
            uVar45 = (uVar45 >> 3) + iVar44;
            goto code_r0x00498ae7;
          }
code_r0x00498cd2:
          if ((puVar37 < puVar4) && ((int)*puVar33 == (int)*puVar37)) {
            puVar37 = (ulong *)((long)puVar37 + 4);
            puVar33 = (ulong *)((long)puVar33 + 4);
          }
          if ((puVar37 < puVar17) && ((short)*puVar33 == (short)*puVar37)) {
            puVar37 = (ulong *)((long)puVar37 + 2);
            puVar33 = (ulong *)((long)puVar33 + 2);
          }
          if (puVar37 < puVar24) {
            puVar37 = (ulong *)((long)puVar37 + (ulong)((char)*puVar33 == (char)*puVar37));
          }
          uVar45 = (int)puVar37 - (int)puVar27;
        }
code_r0x00498ae7:
        uVar30 = uVar30 + uVar45;
        puVar21 = (ulong *)((long)puVar21 + (ulong)uVar45);
      }
    }
    else {
      puVar21 = (ulong *)((long)puVar19 + 4);
      puVar27 = (ulong *)((long)puVar22 + 4);
      puVar37 = puVar21;
      if (puVar21 < puVar48) {
        if (*puVar27 == *puVar21) {
          puVar27 = (ulong *)((long)puVar22 + 0xc);
          puVar37 = (ulong *)((long)puVar19 + 0xc);
          goto joined_r0x00498d42;
        }
        uVar30 = 0;
        for (uVar20 = *puVar21 ^ *puVar27; (uVar20 & 1) == 0;
            uVar20 = uVar20 >> 1 | 0x8000000000000000) {
          uVar30 = uVar30 + 1;
        }
        uVar30 = uVar30 >> 3;
      }
      else {
joined_r0x00498d42:
        if (puVar37 < puVar48) {
          iVar44 = ((int)puVar37 - (int)puVar19) + -4;
code_r0x004988c0:
          if (*puVar27 == *puVar37) goto code_r0x004988cf;
          uVar30 = 0;
          for (uVar20 = *puVar37 ^ *puVar27; (uVar20 & 1) == 0;
              uVar20 = uVar20 >> 1 | 0x8000000000000000) {
            uVar30 = uVar30 + 1;
          }
          uVar30 = (uVar30 >> 3) + iVar44;
          goto code_r0x004989dd;
        }
code_r0x00498d4f:
        if ((puVar37 < puVar4) && ((int)*puVar27 == (int)*puVar37)) {
          puVar37 = (ulong *)((long)puVar37 + 4);
          puVar27 = (ulong *)((long)puVar27 + 4);
        }
        if ((puVar37 < puVar17) && ((short)*puVar27 == (short)*puVar37)) {
          puVar37 = (ulong *)((long)puVar37 + 2);
          puVar27 = (ulong *)((long)puVar27 + 2);
        }
        if (puVar37 < puVar24) {
          puVar37 = (ulong *)((long)puVar37 + (ulong)((char)*puVar27 == (char)*puVar37));
        }
        uVar30 = (int)puVar37 - (int)puVar21;
      }
code_r0x004989dd:
      puVar21 = (ulong *)((long)puVar19 + (ulong)uVar30 + 4);
    }
    if (pcVar40 < (char *)((long)puVar34 + (ulong)(uVar30 + 0xf0) / 0xff + 8))
    goto code_r0x00498f12;
    pcVar47 = (char *)((long)puVar34 + 2);
    if (uVar30 < 0xf) {
      *pcStack_78 = *pcStack_78 + (char)uVar30;
      pcStack_78 = pcVar47;
    }
    else {
      *pcStack_78 = *pcStack_78 + '\x0f';
      uVar45 = uVar30 - 0xf;
      pcVar47[0] = -1;
      pcVar47[1] = -1;
      pcVar47[2] = -1;
      pcVar47[3] = -1;
      if (0x3fb < uVar45) {
        uVar20 = (ulong)(((uVar30 - 0x40b) / 0x3fc) * 4);
        func_0x0099bdb0((char *)((long)puVar34 + 6),0xff,uVar20 + 4);
        pcVar47 = (char *)((long)puVar34 + uVar20 + 6);
        uVar45 = (uVar30 - 0x40b) % 0x3fc;
      }
      uVar30 = uVar45 * 0x8081 >> 0x17;
      pcVar47[uVar30] = (char)uVar30 + (char)uVar45;
      pcStack_78 = pcVar47 + (ulong)uVar30 + 1;
    }
    if (puVar35 <= puVar21) goto code_r0x00498ed7;
    *(int *)(param_1 + ((ulong)(*(long *)((long)puVar21 + -2) * -0x30e4432345000000) >> 0x34) * 4) =
         ((int)puVar21 + -2) - iVar38;
    uVar20 = *puVar21 * -0x30e4432345000000 >> 0x34;
    uVar45 = (int)puVar21 - iVar38;
    uVar30 = *(uint *)(param_1 + uVar20 * 4);
    puVar27 = param_2;
    lVar39 = lVar36;
    if (uVar30 < uVar29) {
      puVar27 = puVar16;
      lVar39 = lVar23;
    }
    *(uint *)(param_1 + uVar20 * 4) = uVar45;
    if ((uVar30 + 0xffff < uVar45) ||
       (puVar22 = (ulong *)(lVar39 + (ulong)uVar30), (int)*puVar22 != (int)*puVar21))
    goto code_r0x0049856d;
    puVar34 = (ulong *)(pcStack_78 + 1);
    *pcStack_78 = '\0';
    iVar44 = uVar45 - uVar30;
    puVar19 = puVar21;
  } while( true );
  puVar46 = puVar46 + 1;
  puVar33 = puVar33 + 1;
  iVar44 = iVar44 + 8;
  if (puVar37 <= puVar46) goto code_r0x00498970;
  goto code_r0x00498950;
code_r0x00498a9b:
  puVar37 = puVar37 + 1;
  puVar33 = puVar33 + 1;
  iVar44 = iVar44 + 8;
  if (puVar48 <= puVar37) goto code_r0x00498cd2;
  goto code_r0x00498a90;
code_r0x004988cf:
  puVar37 = puVar37 + 1;
  puVar27 = puVar27 + 1;
  iVar44 = iVar44 + 8;
  if (puVar48 <= puVar37) goto code_r0x00498d4f;
  goto code_r0x004988c0;
code_r0x0049856d:
  puVar19 = (ulong *)((long)puVar21 + 1);
  uVar30 = (int)puVar19 - iVar38;
  puVar22 = (ulong *)((long)puVar21 + 2);
  if (puVar35 < puVar22) goto code_r0x00498ed7;
  goto code_r0x0049858d;
code_r0x00498ed7:
  uVar15 = (long)param_2 + (uVar15 - (long)puVar21);
  if (pcVar40 < pcStack_78 + (uVar15 + 0xf0) / 0xff + uVar15 + 1) {
code_r0x00498f12:
    iVar44 = 0;
    goto code_r0x0049b6f3;
  }
  if (uVar15 < 0xf) {
    *pcStack_78 = (char)uVar15 << 4;
    param_3 = pcStack_78;
  }
  else {
    uVar20 = uVar15 - 0xf;
    *pcStack_78 = -0x10;
    param_3 = pcStack_78 + 1;
    if (0xfe < uVar20) {
      uVar20 = (uVar15 - 0x10e) / 0xff;
      func_0x0099bdb0(param_3,0xff,uVar20 + 1);
      param_3 = pcStack_78 + uVar20 + 2;
      uVar20 = (uVar15 + uVar20 * -0xff) - 0x10e;
    }
code_r0x004998ff:
    *param_3 = (char)uVar20;
  }
  goto code_r0x0049b6d5;
code_r0x0049947f:
  puVar46 = puVar46 + 1;
  puVar33 = puVar33 + 1;
  iVar26 = iVar26 + 8;
  if (puVar37 <= puVar46) goto code_r0x00499490;
  goto code_r0x00499470;
code_r0x0049959b:
  puVar37 = puVar37 + 1;
  puVar33 = puVar33 + 1;
  iVar26 = iVar26 + 8;
  if (puVar48 <= puVar37) goto code_r0x004997b9;
  goto code_r0x00499590;
code_r0x004993ef:
  puVar37 = puVar37 + 1;
  puVar27 = puVar27 + 1;
  iVar26 = iVar26 + 8;
  if (puVar48 <= puVar37) goto code_r0x0049982f;
  goto code_r0x004993e0;
code_r0x00499059:
  puVar19 = (ulong *)((long)puVar21 + 1);
  uVar29 = (int)puVar19 - iVar44;
  puVar22 = (ulong *)((long)puVar21 + 2);
  if (puVar24 < puVar22) goto code_r0x0049ac21;
  goto code_r0x0049907f;
}


