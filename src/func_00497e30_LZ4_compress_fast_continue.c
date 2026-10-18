// Function: LZ4_compress_fast_continue
// Address: 00497e30
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


int LZ4_compress_fast_continue
              (long param_1,ulong *param_2,char *param_3,uint param_4,int param_5,uint param_6)

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
  ulong uVar13;
  ulong *puVar14;
  ulong *puVar15;
  ulong uVar16;
  ulong *puVar17;
  ulong uVar18;
  ulong *puVar19;
  ulong *puVar20;
  long lVar21;
  ulong *puVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  ulong *puVar26;
  int *piVar27;
  uint uVar28;
  uint uVar29;
  long lVar30;
  ulong uVar31;
  ulong *puVar32;
  ulong *puVar33;
  ulong *puVar34;
  long lVar35;
  ulong *puVar36;
  uint uVar37;
  uint uVar38;
  long lVar39;
  char *pcVar40;
  ulong uVar41;
  ulong uVar42;
  ulong uVar43;
  int iVar44;
  uint uVar45;
  ulong uVar46;
  int iVar47;
  ulong *puVar48;
  char *pcVar49;
  ulong *puVar50;
  int iStack_c8;
  int iStack_98;
  char *pcStack_80;
  char *pcStack_78;
  char *pcStack_70;
  int iStack_50;
  char *pcStack_40;
  
  uVar13 = (ulong)*(uint *)(param_1 + 0x4018);
  if (uVar13 == 0) {
    puVar19 = (ulong *)0x0;
  }
  else {
    puVar19 = (ulong *)(*(long *)(param_1 + 0x4000) + uVar13);
  }
  uVar28 = *(uint *)(param_1 + 0x4010);
  pcStack_40 = (char *)(ulong)uVar28;
  if (0x80000000 < uVar28 + param_4) {
    lVar21 = *(long *)(param_1 + 0x4000);
    uVar28 = uVar28 - 0x10000;
    lVar30 = 0;
    do {
      puVar2 = (uint *)(param_1 + lVar30 * 4);
      uVar29 = puVar2[1];
      uVar37 = puVar2[2];
      uVar45 = puVar2[3];
      puVar3 = (uint *)(param_1 + 0x10 + lVar30 * 4);
      uVar38 = *puVar3;
      uVar6 = puVar3[1];
      uVar7 = puVar3[2];
      uVar8 = puVar3[3];
      puVar3 = (uint *)(param_1 + lVar30 * 4);
      *puVar3 = *puVar2 - uVar28 & -(uint)((int)(uVar28 ^ 0x80000000) < (int)(*puVar2 ^ 0x80000000))
      ;
      puVar3[1] = uVar29 - uVar28 & -(uint)((int)(uVar28 ^ 0x80000000) < (int)(uVar29 ^ 0x80000000))
      ;
      puVar3[2] = uVar37 - uVar28 & -(uint)((int)(uVar28 ^ 0x80000000) < (int)(uVar37 ^ 0x80000000))
      ;
      puVar3[3] = uVar45 - uVar28 & -(uint)((int)(uVar28 ^ 0x80000000) < (int)(uVar45 ^ 0x80000000))
      ;
      puVar2 = (uint *)(param_1 + 0x10 + lVar30 * 4);
      *puVar2 = uVar38 - uVar28 & -(uint)((int)(uVar28 ^ 0x80000000) < (int)(uVar38 ^ 0x80000000));
      puVar2[1] = uVar6 - uVar28 & -(uint)((int)(uVar28 ^ 0x80000000) < (int)(uVar6 ^ 0x80000000));
      puVar2[2] = uVar7 - uVar28 & -(uint)((int)(uVar28 ^ 0x80000000) < (int)(uVar7 ^ 0x80000000));
      puVar2[3] = uVar8 - uVar28 & -(uint)((int)(uVar28 ^ 0x80000000) < (int)(uVar8 ^ 0x80000000));
      lVar30 = lVar30 + 8;
    } while (lVar30 != 0x1000);
    lVar21 = lVar21 + uVar13;
    *(undefined4 *)(param_1 + 0x4010) = 0x10000;
    uVar13 = (ulong)*(uint *)(param_1 + 0x4018);
    if (0x10000 < *(uint *)(param_1 + 0x4018)) {
      *(undefined4 *)(param_1 + 0x4018) = 0x10000;
      uVar13 = 0x10000;
    }
    *(ulong *)(param_1 + 0x4000) = lVar21 - uVar13;
    pcStack_40 = (char *)0x10000;
  }
  uVar28 = 1;
  if (1 < (int)param_6) {
    uVar28 = param_6;
  }
  uVar46 = 0x10001;
  if ((int)uVar28 < 0x10001) {
    uVar46 = (ulong)uVar28;
  }
  if (((((uint)uVar13 < 4) && (0 < (int)param_4)) && (puVar19 != param_2)) &&
     (*(long *)(param_1 + 0x4008) == 0)) {
    *(undefined4 *)(param_1 + 0x4018) = 0;
    *(ulong **)(param_1 + 0x4000) = param_2;
    uVar13 = 0;
    puVar19 = param_2;
  }
  puVar22 = (ulong *)((long)(int)param_4 + (long)param_2);
  puVar34 = *(ulong **)(param_1 + 0x4000);
  if ((puVar34 < puVar22) && (puVar22 < puVar19)) {
    uVar29 = (int)puVar19 - (int)puVar22;
    uVar28 = 0x10000;
    if (uVar29 < 0x10000) {
      uVar28 = uVar29;
    }
    uVar13 = 0;
    if (3 < uVar29) {
      uVar13 = (ulong)uVar28;
    }
    *(int *)(param_1 + 0x4018) = (int)uVar13;
    puVar34 = (ulong *)((long)puVar19 - uVar13);
    *(ulong **)(param_1 + 0x4000) = puVar34;
  }
  uVar28 = (uint)uVar13;
  uVar29 = (uint)pcStack_40;
  iVar44 = (int)uVar46;
  iVar23 = (int)param_3;
  if (puVar19 == param_2) {
    if (uVar28 < uVar29 && uVar28 < 0x10000) {
      if (param_4 < 0x7e000001) {
        if (param_4 != 0) {
          uVar18 = (ulong)param_4;
          pcVar40 = param_3 + param_5;
          *(uint *)(param_1 + 0x4018) = uVar28 + param_4;
          *(uint *)(param_1 + 0x4010) = uVar29 + param_4;
          *(undefined4 *)(param_1 + 0x4014) = 2;
          puVar19 = param_2;
          if (param_4 < 0xd) {
code_r0x004980c5:
            uVar13 = (long)param_2 + (uVar18 - (long)puVar19);
            if (param_3 + (uVar13 + 0xf0) / 0xff + uVar13 + 1 <= pcVar40) {
              if (uVar13 < 0xf) {
                *param_3 = (char)uVar13 << 4;
              }
              else {
                uVar46 = uVar13 - 0xf;
                *param_3 = -0x10;
                pcVar40 = param_3 + 1;
                if (0xfe < uVar46) {
                  uVar46 = (uVar13 - 0x10e) / 0xff;
                  func_0x0099bdb0(pcVar40,0xff,uVar46 + 1);
                  pcVar40 = param_3 + uVar46 + 2;
                  uVar46 = (uVar13 + uVar46 * -0xff) - 0x10e;
                }
                *pcVar40 = (char)uVar46;
                param_3 = pcVar40;
              }
              func_0x0099bda0(param_3 + 1,puVar19,uVar13);
              return ((int)(param_3 + 1) + (int)uVar13) - iVar23;
            }
            return 0;
          }
          lVar21 = (long)param_2 - (long)pcStack_40;
          puVar20 = (ulong *)((long)param_2 + (uVar18 - 0xb));
          *(uint *)(param_1 + (*param_2 * -0x30e4432345000000 >> 0x34) * 4) = uVar29;
          puVar34 = (ulong *)((long)param_2 + 2);
          puVar22 = (ulong *)((long)param_2 + 1);
          puVar14 = (ulong *)((long)param_2 + (uVar18 - 0xc));
code_r0x0049a1e8:
          uVar31 = *puVar22;
          uVar16 = uVar46;
          uVar37 = iVar44 * 0x40;
          while( true ) {
            uVar37 = uVar37 + 1;
            uVar42 = uVar31 * -0x30e4432345000000 >> 0x34;
            uVar45 = *(uint *)(param_1 + uVar42 * 4);
            uVar43 = (ulong)uVar45;
            iVar25 = (int)lVar21;
            uVar38 = (int)puVar22 - iVar25;
            uVar31 = *puVar34;
            *(uint *)(param_1 + uVar42 * 4) = uVar38;
            if (((uVar29 - uVar28 <= uVar45) && (uVar38 <= uVar45 + 0xffff)) &&
               (*(int *)(lVar21 + uVar43) == (int)*puVar22)) break;
            puVar17 = (ulong *)(uVar16 + (long)puVar34);
            uVar16 = (ulong)(uVar37 >> 6);
            puVar22 = puVar34;
            puVar34 = puVar17;
            if (puVar20 < puVar17) goto code_r0x004980c5;
          }
          piVar27 = (int *)(lVar21 + uVar43);
          puVar34 = puVar22;
          if (((long)((long)pcStack_40 - uVar13) < (long)uVar43) &&
             (*(char *)((long)puVar22 + -1) == *(char *)((long)piVar27 + -1))) {
            puVar17 = (ulong *)((long)puVar22 + -1);
            puVar50 = (ulong *)((long)puVar22 + -1);
            piVar12 = (int *)((long)param_2 + uVar43 + ~(ulong)pcStack_40);
            do {
              piVar27 = piVar12;
              puVar22 = puVar50;
              puVar34 = puVar17;
              if ((piVar27 <= (int *)((long)param_2 - uVar13)) || (puVar34 <= puVar19)) break;
              puVar17 = (ulong *)((long)puVar34 + -1);
              puVar50 = (ulong *)((long)puVar22 + -1);
              piVar12 = (int *)((long)piVar27 + -1);
            } while (*(char *)((long)puVar34 + -1) == *(char *)((long)piVar27 + -1));
          }
          uVar31 = (long)puVar22 - (long)puVar19;
          uVar16 = uVar31 & 0xffffffff;
          if (pcVar40 < param_3 + uVar16 / 0xff + uVar16 + 9) {
            return 0;
          }
          puVar17 = (ulong *)(param_3 + 1);
          if ((uint)uVar31 < 0xf) {
            *param_3 = (char)uVar31 << 4;
          }
          else {
            uVar37 = (uint)uVar31 - 0xf;
            *param_3 = -0x10;
            if (0xfe < uVar37) {
              iVar47 = (int)puVar22 - (int)puVar19;
              uVar37 = iVar47 - 0x10e;
              uVar31 = (ulong)uVar37 / 0xff;
              func_0x0099bdb0(puVar17,0xff,uVar31 + 1);
              puVar17 = (ulong *)(param_3 + uVar31 + 2);
              uVar37 = (iVar47 + uVar37 / 0xff) - 0x10e;
            }
            *(char *)puVar17 = (char)uVar37;
            puVar17 = (ulong *)((long)puVar17 + 1);
          }
          puVar22 = (ulong *)((long)puVar17 + uVar16);
          uVar31 = 8;
          if (8 < uVar16) {
            uVar31 = uVar16;
          }
          if ((0x18 < uVar16) && (0x1f < (ulong)((long)puVar17 - (long)puVar19))) {
            uVar31 = (uVar31 - 1 >> 3) + 1;
            uVar16 = uVar31 & 0x3ffffffffffffffc;
            uVar43 = 0;
            do {
              uVar9 = ((undefined8 *)((long)puVar19 + uVar43))[1];
              puVar5 = (undefined8 *)((long)puVar19 + uVar43 + 0x10);
              uVar10 = *puVar5;
              uVar11 = puVar5[1];
              *(undefined8 *)((long)puVar17 + uVar43) = *(undefined8 *)((long)puVar19 + uVar43);
              *(undefined8 *)((char *)((long)puVar17 + uVar43) + 8) = uVar9;
              pcVar49 = (char *)((long)puVar17 + uVar43 + 0x10);
              *(undefined8 *)pcVar49 = uVar10;
              *(undefined8 *)(pcVar49 + 8) = uVar11;
              uVar43 = uVar43 + 0x20;
            } while ((uVar31 * 8 & 0xffffffffffffffe0) != uVar43);
            puVar19 = puVar19 + uVar16;
            puVar17 = puVar17 + uVar16;
            if (uVar31 == uVar16) goto code_r0x0049a400;
          }
          do {
            *puVar17 = *puVar19;
            puVar17 = puVar17 + 1;
            puVar19 = puVar19 + 1;
          } while (puVar17 < puVar22);
code_r0x0049a400:
          do {
            *(short *)puVar22 = (short)puVar34 - (short)piVar27;
            puVar17 = (ulong *)((long)puVar34 + 4);
            puVar19 = (ulong *)(piVar27 + 1);
            puVar50 = puVar17;
            if (puVar17 < puVar14) {
              if (*puVar19 == *puVar17) {
                puVar19 = (ulong *)(piVar27 + 3);
                puVar50 = (ulong *)((long)puVar34 + 0xc);
                goto code_r0x0049a435;
              }
              uVar37 = 0;
              for (uVar31 = *puVar17 ^ *puVar19; (uVar31 & 1) == 0;
                  uVar31 = uVar31 >> 1 | 0x8000000000000000) {
                uVar37 = uVar37 + 1;
              }
              uVar37 = uVar37 >> 3;
            }
            else {
code_r0x0049a435:
              if (puVar50 < puVar14) {
                iVar47 = ((int)puVar50 - (int)puVar34) + -4;
code_r0x0049a450:
                if (*puVar19 == *puVar50) goto code_r0x0049a45b;
                uVar37 = 0;
                for (uVar31 = *puVar50 ^ *puVar19; (uVar31 & 1) == 0;
                    uVar31 = uVar31 >> 1 | 0x8000000000000000) {
                  uVar37 = uVar37 + 1;
                }
                uVar37 = (uVar37 >> 3) + iVar47;
                goto code_r0x0049a4a2;
              }
code_r0x0049a60d:
              if ((puVar50 < (ulong *)((long)param_2 + (uVar18 - 8))) &&
                 ((int)*puVar19 == (int)*puVar50)) {
                puVar50 = (ulong *)((long)puVar50 + 4);
                puVar19 = (ulong *)((long)puVar19 + 4);
              }
              if ((puVar50 < (ulong *)((long)param_2 + (uVar18 - 6))) &&
                 ((short)*puVar19 == (short)*puVar50)) {
                puVar50 = (ulong *)((long)puVar50 + 2);
                puVar19 = (ulong *)((long)puVar19 + 2);
              }
              if (puVar50 < (ulong *)((long)param_2 + (uVar18 - 5))) {
                puVar50 = (ulong *)((long)puVar50 + (ulong)((char)*puVar19 == (char)*puVar50));
              }
              uVar37 = (int)puVar50 - (int)puVar17;
            }
code_r0x0049a4a2:
            if (pcVar40 < (char *)((long)puVar22 + (ulong)(uVar37 + 0xf0) / 0xff + 8)) {
              return 0;
            }
            pcVar49 = (char *)((long)puVar22 + 2);
            if (uVar37 < 0xf) {
              *param_3 = *param_3 + (char)uVar37;
              param_3 = pcVar49;
            }
            else {
              *param_3 = *param_3 + '\x0f';
              uVar45 = uVar37 - 0xf;
              pcVar49[0] = -1;
              pcVar49[1] = -1;
              pcVar49[2] = -1;
              pcVar49[3] = -1;
              if (0x3fb < uVar45) {
                uVar31 = (ulong)(((uVar37 - 0x40b) / 0x3fc) * 4);
                func_0x0099bdb0((char *)((long)puVar22 + 6),0xff,uVar31 + 4);
                pcVar49 = (char *)((long)puVar22 + uVar31 + 6);
                uVar45 = (uVar37 - 0x40b) % 0x3fc;
              }
              uVar38 = uVar45 * 0x8081 >> 0x17;
              pcVar49[uVar38] = (char)uVar38 + (char)uVar45;
              param_3 = pcVar49 + (ulong)uVar38 + 1;
            }
            puVar19 = (ulong *)((long)puVar34 + (ulong)uVar37 + 4);
            if (puVar20 <= puVar19) goto code_r0x004980c5;
            lVar30 = (long)puVar34 + (ulong)uVar37;
            *(int *)(param_1 + ((ulong)(*(long *)(lVar30 + 2) * -0x30e4432345000000) >> 0x34) * 4) =
                 ((int)lVar30 + 2) - iVar25;
            uVar31 = (ulong)(*(long *)(lVar30 + 4) * -0x30e4432345000000) >> 0x34;
            uVar45 = (int)puVar19 - iVar25;
            uVar37 = *(uint *)(param_1 + uVar31 * 4);
            *(uint *)(param_1 + uVar31 * 4) = uVar45;
            if (((uVar37 < uVar29 - uVar28) || (uVar37 + 0xffff < uVar45)) ||
               (piVar27 = (int *)((ulong)uVar37 + lVar21), *piVar27 != (int)*puVar19))
            goto code_r0x0049a1c8;
            puVar22 = (ulong *)(param_3 + 1);
            *param_3 = '\0';
            puVar34 = puVar19;
          } while( true );
        }
code_r0x00498f1d:
        if (0 < param_5) {
          *param_3 = '\0';
          return 1;
        }
        return 0;
      }
    }
    else if (param_4 < 0x7e000001) {
      if (param_4 != 0) {
        uVar18 = (ulong)param_4;
        pcVar49 = param_3 + param_5;
        *(uint *)(param_1 + 0x4018) = uVar28 + param_4;
        *(uint *)(param_1 + 0x4010) = uVar29 + param_4;
        *(undefined4 *)(param_1 + 0x4014) = 2;
        puVar19 = param_2;
        pcVar40 = param_3;
        if (param_4 < 0xd) {
code_r0x00498e1d:
          pcStack_40 = pcVar40;
          uVar13 = (long)param_2 + (uVar18 - (long)puVar19);
          if (pcStack_40 + (uVar13 + 0xf0) / 0xff + uVar13 + 1 <= pcVar49) {
            if (uVar13 < 0xf) {
              *pcStack_40 = (char)uVar13 << 4;
            }
            else {
              uVar46 = uVar13 - 0xf;
              *pcStack_40 = -0x10;
              pcVar40 = pcStack_40 + 1;
              if (0xfe < uVar46) {
                uVar46 = (uVar13 - 0x10e) / 0xff;
                func_0x0099bdb0(pcVar40,0xff,uVar46 + 1);
                pcVar40 = pcStack_40 + uVar46 + 2;
                uVar46 = (uVar13 + uVar46 * -0xff) - 0x10e;
              }
              *pcVar40 = (char)uVar46;
              pcStack_40 = pcVar40;
            }
            func_0x0099bda0(pcStack_40 + 1,puVar19,uVar13);
            return ((int)(pcStack_40 + 1) + (int)uVar13) - iVar23;
          }
          return 0;
        }
        lVar30 = (long)param_2 - (long)pcStack_40;
        puVar20 = (ulong *)((long)param_2 + (uVar18 - 0xb));
        *(uint *)(param_1 + (*param_2 * -0x30e4432345000000 >> 0x34) * 4) = uVar29;
        lVar21 = (long)pcStack_40 - uVar13;
        puVar34 = (ulong *)((long)param_2 + 2);
        puVar22 = (ulong *)((long)param_2 + 1);
        puVar14 = (ulong *)((long)param_2 + (uVar18 - 0xc));
        uVar31 = ~(ulong)pcStack_40;
        pcStack_40 = param_3;
code_r0x0049a769:
        uVar16 = *puVar22;
        uVar43 = uVar46;
        uVar28 = iVar44 * 0x40;
        while( true ) {
          puVar17 = puVar34;
          uVar28 = uVar28 + 1;
          uVar41 = uVar16 * -0x30e4432345000000 >> 0x34;
          uVar29 = *(uint *)(param_1 + uVar41 * 4);
          uVar42 = (ulong)uVar29;
          iVar25 = (int)lVar30;
          uVar37 = (int)puVar22 - iVar25;
          uVar16 = *puVar17;
          *(uint *)(param_1 + uVar41 * 4) = uVar37;
          if ((uVar37 <= uVar29 + 0xffff) && (*(int *)(lVar30 + uVar42) == (int)*puVar22)) break;
          puVar34 = (ulong *)(uVar43 + (long)puVar17);
          uVar43 = (ulong)(uVar28 >> 6);
          puVar22 = puVar17;
          pcVar40 = pcStack_40;
          if (puVar20 < puVar34) goto code_r0x00498e1d;
        }
        piVar27 = (int *)(lVar30 + uVar42);
        puVar34 = puVar22;
        if ((lVar21 < (long)uVar42) &&
           (*(char *)((long)puVar22 + -1) == *(char *)((long)piVar27 + -1))) {
          puVar17 = (ulong *)((long)puVar22 + -1);
          piVar12 = (int *)((long)param_2 + uVar42 + uVar31);
          puVar50 = (ulong *)((long)puVar22 + -1);
          do {
            puVar34 = puVar50;
            piVar27 = piVar12;
            puVar22 = puVar17;
            if ((piVar27 <= (int *)((long)param_2 - uVar13)) || (puVar22 <= puVar19)) break;
            puVar17 = (ulong *)((long)puVar22 + -1);
            piVar12 = (int *)((long)piVar27 + -1);
            puVar50 = (ulong *)((long)puVar34 + -1);
          } while (*(char *)((long)puVar22 + -1) == *(char *)((long)piVar27 + -1));
        }
        uVar16 = (long)puVar34 - (long)puVar19;
        uVar43 = uVar16 & 0xffffffff;
        if (pcVar49 < pcStack_40 + uVar43 / 0xff + uVar43 + 9) {
          return 0;
        }
        puVar17 = (ulong *)(pcStack_40 + 1);
        if ((uint)uVar16 < 0xf) {
          *pcStack_40 = (char)uVar16 << 4;
        }
        else {
          uVar28 = (uint)uVar16 - 0xf;
          *pcStack_40 = -0x10;
          if (0xfe < uVar28) {
            iVar47 = (int)puVar34 - (int)puVar19;
            uVar28 = iVar47 - 0x10e;
            uVar16 = (ulong)uVar28 / 0xff;
            func_0x0099bdb0(puVar17,0xff,uVar16 + 1);
            puVar17 = (ulong *)(pcStack_40 + uVar16 + 2);
            uVar28 = (iVar47 + uVar28 / 0xff) - 0x10e;
          }
          *(char *)puVar17 = (char)uVar28;
          puVar17 = (ulong *)((long)puVar17 + 1);
        }
        puVar34 = (ulong *)((long)puVar17 + uVar43);
        uVar16 = 8;
        if (8 < uVar43) {
          uVar16 = uVar43;
        }
        if ((0x18 < uVar43) && (0x1f < (ulong)((long)puVar17 - (long)puVar19))) {
          uVar16 = (uVar16 - 1 >> 3) + 1;
          uVar43 = uVar16 & 0x3ffffffffffffffc;
          uVar42 = 0;
          do {
            uVar9 = ((undefined8 *)((long)puVar19 + uVar42))[1];
            puVar5 = (undefined8 *)((long)puVar19 + uVar42 + 0x10);
            uVar10 = *puVar5;
            uVar11 = puVar5[1];
            *(undefined8 *)((long)puVar17 + uVar42) = *(undefined8 *)((long)puVar19 + uVar42);
            *(undefined8 *)((char *)((long)puVar17 + uVar42) + 8) = uVar9;
            pcVar40 = (char *)((long)puVar17 + uVar42 + 0x10);
            *(undefined8 *)pcVar40 = uVar10;
            *(undefined8 *)(pcVar40 + 8) = uVar11;
            uVar42 = uVar42 + 0x20;
          } while ((uVar16 * 8 & 0xffffffffffffffe0) != uVar42);
          puVar19 = puVar19 + uVar43;
          puVar17 = puVar17 + uVar43;
          if (uVar16 == uVar43) goto code_r0x0049a980;
        }
        do {
          *puVar17 = *puVar19;
          puVar17 = puVar17 + 1;
          puVar19 = puVar19 + 1;
        } while (puVar17 < puVar34);
code_r0x0049a980:
        do {
          *(short *)puVar34 = (short)puVar22 - (short)piVar27;
          puVar19 = (ulong *)((long)puVar22 + 4);
          puVar17 = (ulong *)(piVar27 + 1);
          puVar50 = puVar19;
          if (puVar19 < puVar14) {
            if (*puVar17 == *puVar19) {
              puVar17 = (ulong *)(piVar27 + 3);
              puVar50 = (ulong *)((long)puVar22 + 0xc);
              goto joined_r0x0049ab82;
            }
            uVar28 = 0;
            for (uVar16 = *puVar19 ^ *puVar17; (uVar16 & 1) == 0;
                uVar16 = uVar16 >> 1 | 0x8000000000000000) {
              uVar28 = uVar28 + 1;
            }
            uVar28 = uVar28 >> 3;
          }
          else {
joined_r0x0049ab82:
            if (puVar50 < puVar14) {
              iVar47 = ((int)puVar50 - (int)puVar22) + -4;
code_r0x0049a9d0:
              if (*puVar17 == *puVar50) goto code_r0x0049a9db;
              uVar28 = 0;
              for (uVar16 = *puVar50 ^ *puVar17; (uVar16 & 1) == 0;
                  uVar16 = uVar16 >> 1 | 0x8000000000000000) {
                uVar28 = uVar28 + 1;
              }
              uVar28 = (uVar28 >> 3) + iVar47;
              goto code_r0x0049aa1f;
            }
code_r0x0049ab8c:
            if ((puVar50 < (ulong *)((long)param_2 + (uVar18 - 8))) &&
               ((int)*puVar17 == (int)*puVar50)) {
              puVar50 = (ulong *)((long)puVar50 + 4);
              puVar17 = (ulong *)((long)puVar17 + 4);
            }
            if ((puVar50 < (ulong *)((long)param_2 + (uVar18 - 6))) &&
               ((short)*puVar17 == (short)*puVar50)) {
              puVar50 = (ulong *)((long)puVar50 + 2);
              puVar17 = (ulong *)((long)puVar17 + 2);
            }
            if (puVar50 < (ulong *)((long)param_2 + (uVar18 - 5))) {
              puVar50 = (ulong *)((long)puVar50 + (ulong)((char)*puVar17 == (char)*puVar50));
            }
            uVar28 = (int)puVar50 - (int)puVar19;
          }
code_r0x0049aa1f:
          if (pcVar49 < (char *)((long)puVar34 + (ulong)(uVar28 + 0xf0) / 0xff + 8)) {
            return 0;
          }
          pcVar40 = (char *)((long)puVar34 + 2);
          if (uVar28 < 0xf) {
            *pcStack_40 = *pcStack_40 + (char)uVar28;
            pcStack_40 = pcVar40;
          }
          else {
            *pcStack_40 = *pcStack_40 + '\x0f';
            uVar29 = uVar28 - 0xf;
            pcVar40[0] = -1;
            pcVar40[1] = -1;
            pcVar40[2] = -1;
            pcVar40[3] = -1;
            if (0x3fb < uVar29) {
              uVar16 = (ulong)(((uVar28 - 0x40b) / 0x3fc) * 4);
              func_0x0099bdb0((char *)((long)puVar34 + 6),0xff,uVar16 + 4);
              pcVar40 = (char *)((long)puVar34 + uVar16 + 6);
              uVar29 = (uVar28 - 0x40b) % 0x3fc;
            }
            uVar37 = uVar29 * 0x8081 >> 0x17;
            pcVar40[uVar37] = (char)uVar37 + (char)uVar29;
            pcStack_40 = pcVar40 + (ulong)uVar37 + 1;
          }
          puVar19 = (ulong *)((long)puVar22 + (ulong)uVar28 + 4);
          pcVar40 = pcStack_40;
          if (puVar20 <= puVar19) goto code_r0x00498e1d;
          lVar35 = (long)puVar22 + (ulong)uVar28;
          *(int *)(param_1 + ((ulong)(*(long *)(lVar35 + 2) * -0x30e4432345000000) >> 0x34) * 4) =
               ((int)lVar35 + 2) - iVar25;
          uVar16 = (ulong)(*(long *)(lVar35 + 4) * -0x30e4432345000000) >> 0x34;
          uVar29 = (int)puVar19 - iVar25;
          uVar28 = *(uint *)(param_1 + uVar16 * 4);
          *(uint *)(param_1 + uVar16 * 4) = uVar29;
          if ((uVar28 + 0xffff < uVar29) ||
             (piVar27 = (int *)((ulong)uVar28 + lVar30), *piVar27 != (int)*puVar19))
          goto code_r0x0049a749;
          puVar34 = (ulong *)(pcStack_40 + 1);
          *pcStack_40 = '\0';
          puVar22 = puVar19;
        } while( true );
      }
      goto code_r0x00498f1d;
    }
    return 0;
  }
  lVar21 = *(long *)(param_1 + 0x4008);
  puVar19 = param_2;
  if (lVar21 == 0) {
    if (uVar28 < uVar29 && uVar28 < 0x10000) {
      if (0x7e000000 < param_4) {
code_r0x00498449:
        iVar25 = 0;
        goto code_r0x0049b6f3;
      }
      if (param_4 == 0) {
joined_r0x00499911:
        iVar25 = 0;
        if (0 < param_5) {
          *param_3 = '\0';
          iVar25 = 1;
        }
        goto code_r0x0049b6f3;
      }
      lVar30 = uVar13 + (long)puVar34;
      uVar13 = (ulong)param_4;
      lVar21 = lVar30 - (long)pcStack_40;
      if (puVar34 == (ulong *)0x0) {
        lVar21 = 0;
      }
      pcVar40 = param_3 + param_5;
      *(uint *)(param_1 + 0x4018) = uVar28 + param_4;
      *(uint *)(param_1 + 0x4010) = uVar29 + param_4;
      *(undefined4 *)(param_1 + 0x4014) = 2;
      if (0xc < param_4) {
        lVar35 = (long)param_2 - (long)pcStack_40;
        puVar22 = (ulong *)((long)param_2 + (uVar13 - 0xb));
        puVar14 = (ulong *)((long)param_2 + (uVar13 - 5));
        if (puVar34 == (ulong *)0x0) {
          lVar30 = 0;
        }
        *(uint *)(param_1 + (*param_2 * -0x30e4432345000000 >> 0x34) * 4) = uVar29;
        puVar20 = (ulong *)((long)param_2 + 2);
        puVar17 = (ulong *)((long)param_2 + 1);
        uVar37 = uVar29 + 1;
        puVar50 = (ulong *)((long)param_2 + (uVar13 - 0xc));
        puVar4 = (ulong *)((long)param_2 + (uVar13 - 8));
        puVar15 = (ulong *)((long)param_2 + (uVar13 - 6));
code_r0x00499964:
        uVar18 = *(ulong *)((long)puVar19 + 1);
        uVar31 = uVar46;
        uVar45 = iVar44 * 0x40;
        do {
          uVar45 = uVar45 + 1;
          uVar16 = uVar18 * -0x30e4432345000000 >> 0x34;
          uVar38 = *(uint *)(param_1 + uVar16 * 4);
          uVar43 = (ulong)uVar38;
          uVar18 = *puVar20;
          *(uint *)(param_1 + uVar16 * 4) = uVar37;
          iStack_50 = (int)lVar35;
          if ((uVar29 - uVar28 <= uVar38) && (uVar37 <= uVar38 + 0xffff)) {
            lVar39 = lVar35;
            if (uVar38 < uVar29) {
              lVar39 = lVar21;
            }
            if (*(int *)(lVar39 + uVar43) == (int)*puVar17) goto code_r0x004999f1;
          }
          uVar37 = (int)puVar20 - iStack_50;
          puVar26 = (ulong *)(uVar31 + (long)puVar20);
          uVar31 = (ulong)(uVar45 >> 6);
          puVar17 = puVar20;
          puVar20 = puVar26;
          if (puVar22 < puVar26) break;
        } while( true );
      }
code_r0x0049b5b5:
      uVar13 = (long)param_2 + (uVar13 - (long)puVar19);
      iVar25 = 0;
      if (pcVar40 < param_3 + (uVar13 + 0xf0) / 0xff + uVar13 + 1) goto code_r0x0049b6f3;
      if (uVar13 < 0xf) {
        *param_3 = (char)uVar13 << 4;
      }
      else {
        uVar46 = uVar13 - 0xf;
        *param_3 = -0x10;
        pcVar40 = param_3 + 1;
        if (0xfe < uVar46) {
          uVar46 = (uVar13 - 0x10e) / 0xff;
          func_0x0099bdb0(pcVar40,0xff,uVar46 + 1);
          pcVar40 = param_3 + uVar46 + 2;
          uVar46 = (uVar13 + uVar46 * -0xff) - 0x10e;
        }
        *pcVar40 = (char)uVar46;
        param_3 = pcVar40;
      }
    }
    else {
      if (0x7e000000 < param_4) goto code_r0x00498449;
      if (param_4 == 0) goto joined_r0x00499911;
      lVar30 = uVar13 + (long)puVar34;
      uVar13 = (ulong)param_4;
      lVar21 = lVar30 - (long)pcStack_40;
      if (puVar34 == (ulong *)0x0) {
        lVar21 = 0;
      }
      pcVar40 = param_3 + param_5;
      *(uint *)(param_1 + 0x4018) = uVar28 + param_4;
      *(uint *)(param_1 + 0x4010) = uVar29 + param_4;
      *(undefined4 *)(param_1 + 0x4014) = 2;
      pcStack_80 = param_3;
      if (0xc < param_4) {
        lVar35 = (long)param_2 - (long)pcStack_40;
        puVar22 = (ulong *)((long)param_2 + (uVar13 - 0xb));
        puVar14 = (ulong *)((long)param_2 + (uVar13 - 5));
        if (puVar34 == (ulong *)0x0) {
          lVar30 = 0;
        }
        *(uint *)(param_1 + (*param_2 * -0x30e4432345000000 >> 0x34) * 4) = uVar29;
        puVar20 = (ulong *)((long)param_2 + 2);
        puVar17 = (ulong *)((long)param_2 + 1);
        uVar28 = uVar29 + 1;
        puVar50 = (ulong *)((long)param_2 + (uVar13 - 0xc));
        puVar4 = (ulong *)((long)param_2 + (uVar13 - 8));
        puVar15 = (ulong *)((long)param_2 + (uVar13 - 6));
        pcStack_80 = param_3;
code_r0x0049adc7:
        uVar18 = *(ulong *)((long)puVar19 + 1);
        uVar31 = uVar46;
        uVar37 = iVar44 * 0x40;
        do {
          puVar26 = puVar20;
          uVar37 = uVar37 + 1;
          uVar16 = uVar18 * -0x30e4432345000000 >> 0x34;
          uVar45 = *(uint *)(param_1 + uVar16 * 4);
          uVar43 = (ulong)uVar45;
          uVar18 = *puVar26;
          *(uint *)(param_1 + uVar16 * 4) = uVar28;
          iVar25 = (int)lVar35;
          if (uVar28 <= uVar45 + 0xffff) {
            lVar39 = lVar35;
            if (uVar45 < uVar29) {
              lVar39 = lVar21;
            }
            if (*(int *)(lVar39 + uVar43) == (int)*puVar17) goto code_r0x0049ae47;
          }
          uVar28 = (int)puVar26 - iVar25;
          puVar20 = (ulong *)(uVar31 + (long)puVar26);
          uVar31 = (ulong)(uVar37 >> 6);
          puVar17 = puVar26;
          if (puVar22 < puVar20) break;
        } while( true );
      }
code_r0x00498fae:
      uVar13 = (long)param_2 + (uVar13 - (long)puVar19);
      iVar25 = 0;
      if (pcVar40 < pcStack_80 + (uVar13 + 0xf0) / 0xff + uVar13 + 1) goto code_r0x0049b6f3;
      if (0xe < uVar13) {
        uVar46 = uVar13 - 0xf;
        *pcStack_80 = -0x10;
        param_3 = pcStack_80 + 1;
        if (0xfe < uVar46) {
          uVar46 = (uVar13 - 0x10e) / 0xff;
          func_0x0099bdb0(param_3,0xff,uVar46 + 1);
          param_3 = pcStack_80 + uVar46 + 2;
          uVar46 = (uVar13 + uVar46 * -0xff) - 0x10e;
        }
        goto code_r0x004998ff;
      }
      *pcStack_80 = (char)uVar13 << 4;
      param_3 = pcStack_80;
    }
  }
  else {
    if (0x1000 < (int)param_4) {
      func_0x0099bda0(param_1,lVar21,0x4020);
      if (param_4 < 0x7e000001) {
        uVar28 = *(uint *)(param_1 + 0x4010);
        lVar35 = (long)param_2 - (ulong)uVar28;
        puVar14 = *(ulong **)(param_1 + 0x4000);
        lVar30 = (ulong)*(uint *)(param_1 + 0x4018) + (long)puVar14;
        uVar13 = (ulong)param_4;
        lVar21 = lVar30 - (ulong)uVar28;
        pcVar40 = param_3 + param_5;
        *(uint *)(param_1 + 0x4018) = *(uint *)(param_1 + 0x4018) + param_4;
        *(uint *)(param_1 + 0x4010) = uVar28 + param_4;
        *(undefined4 *)(param_1 + 0x4014) = 2;
        puVar34 = (ulong *)((long)param_2 + (uVar13 - 0xb));
        puVar22 = (ulong *)((long)param_2 + (uVar13 - 5));
        if (puVar14 == (ulong *)0x0) {
          lVar30 = 0;
          lVar21 = 0;
        }
        *(uint *)(param_1 + (*param_2 * -0x30e4432345000000 >> 0x34) * 4) = uVar28;
        puVar50 = (ulong *)((long)param_2 + (uVar13 - 0xc));
        puVar4 = (ulong *)((long)param_2 + (uVar13 - 8));
        puVar15 = (ulong *)((long)param_2 + (uVar13 - 6));
        puVar20 = (ulong *)((long)param_2 + 2);
        puVar17 = (ulong *)((long)param_2 + 1);
        uVar29 = uVar28 + 1;
        pcStack_78 = param_3;
code_r0x0049858d:
        uVar18 = *(ulong *)((long)puVar19 + 1);
        uVar31 = uVar46;
        uVar37 = iVar44 * 0x40;
        do {
          puVar26 = puVar20;
          uVar37 = uVar37 + 1;
          uVar16 = uVar18 * -0x30e4432345000000 >> 0x34;
          uVar45 = *(uint *)(param_1 + uVar16 * 4);
          uVar43 = (ulong)uVar45;
          uVar18 = *puVar26;
          *(uint *)(param_1 + uVar16 * 4) = uVar29;
          iVar25 = (int)lVar35;
          if (uVar29 <= uVar45 + 0xffff) {
            lVar39 = lVar35;
            if (uVar45 < uVar28) {
              lVar39 = lVar21;
            }
            if (*(int *)(lVar39 + uVar43) == (int)*puVar17) goto code_r0x00498611;
          }
          uVar29 = (int)puVar26 - iVar25;
          puVar20 = (ulong *)(uVar31 + (long)puVar26);
          uVar31 = (ulong)(uVar37 >> 6);
          puVar17 = puVar26;
          if (puVar34 < puVar20) goto code_r0x00498ed7;
        } while( true );
      }
      iVar25 = 0;
      goto code_r0x0049b6f3;
    }
    iVar25 = 0;
    if (0x7e000000 < param_4) goto code_r0x0049b6f3;
    if (param_4 == 0) goto joined_r0x00499911;
    puVar34 = *(ulong **)(lVar21 + 0x4000);
    uVar28 = *(uint *)(lVar21 + 0x4010);
    lVar35 = (ulong)*(uint *)(lVar21 + 0x4018) + (long)puVar34;
    uVar13 = (ulong)param_4;
    lVar30 = lVar35 - (ulong)uVar28;
    if (puVar34 == (ulong *)0x0) {
      lVar30 = 0;
    }
    pcVar40 = param_3 + param_5;
    *(undefined8 *)(param_1 + 0x4008) = 0;
    *(uint *)(param_1 + 0x4018) = param_4;
    *(uint *)(param_1 + 0x4010) = uVar29 + param_4;
    *(undefined4 *)(param_1 + 0x4014) = 2;
    pcStack_70 = param_3;
    if (0xc < param_4) {
      lVar39 = (long)param_2 - (long)pcStack_40;
      iVar25 = uVar29 - uVar28;
      puVar22 = (ulong *)((long)param_2 + (uVar13 - 0xb));
      puVar14 = (ulong *)((long)param_2 + (uVar13 - 5));
      if (puVar34 == (ulong *)0x0) {
        lVar35 = 0;
      }
      *(uint *)(param_1 + (*param_2 * -0x30e4432345000000 >> 0x34) * 4) = uVar29;
      puVar20 = (ulong *)((long)param_2 + 2);
      puVar17 = (ulong *)((long)param_2 + 1);
      uVar28 = uVar29 + 1;
      puVar50 = (ulong *)((long)param_2 + (uVar13 - 0xc));
      puVar4 = (ulong *)((long)param_2 + (uVar13 - 8));
      puVar15 = (ulong *)((long)param_2 + (uVar13 - 6));
code_r0x0049907f:
      uVar18 = *(ulong *)((long)puVar19 + 1);
      uVar31 = uVar46;
      uVar37 = iVar44 * 0x40;
      while( true ) {
        puVar26 = puVar20;
        uVar37 = uVar37 + 1;
        uVar16 = uVar18 * -0x30e4432345000000 >> 0x34;
        uVar45 = *(uint *)(param_1 + uVar16 * 4);
        if (uVar45 < uVar29) {
          uVar38 = *(uint *)(lVar21 + uVar16 * 4);
          uVar45 = uVar38 + iVar25;
          puVar20 = (ulong *)((ulong)uVar38 + lVar30);
          puVar36 = puVar34;
        }
        else {
          puVar20 = (ulong *)(lVar39 + (ulong)uVar45);
          puVar36 = param_2;
        }
        uVar18 = *puVar26;
        *(uint *)(param_1 + uVar16 * 4) = uVar28;
        iVar47 = (int)lVar39;
        if ((uVar28 <= uVar45 + 0xffff) && ((int)*puVar20 == (int)*puVar17)) break;
        uVar28 = (int)puVar26 - iVar47;
        puVar20 = (ulong *)(uVar31 + (long)puVar26);
        uVar31 = (ulong)(uVar37 >> 6);
        puVar17 = puVar26;
        if (puVar22 < puVar20) goto code_r0x0049ac21;
      }
      if ((puVar36 < puVar20) &&
         (puVar26 = puVar17, puVar33 = puVar20,
         *(char *)((long)puVar17 - 1) == *(char *)((long)puVar20 + -1))) {
        do {
          puVar20 = (ulong *)((long)puVar33 + -1);
          puVar17 = (ulong *)((long)puVar26 - 1);
          if ((puVar20 <= puVar36) || (puVar17 <= puVar19)) break;
          pcVar49 = (char *)((long)puVar26 - 2);
          pcVar1 = (char *)((long)puVar33 + -2);
          puVar26 = puVar17;
          puVar33 = puVar20;
        } while (*pcVar49 == *pcVar1);
      }
      uVar18 = (long)puVar17 - (long)puVar19;
      uVar31 = uVar18 & 0xffffffff;
      if (pcStack_70 + uVar31 / 0xff + uVar31 + 9 <= pcVar40) {
        puVar26 = (ulong *)(pcStack_70 + 1);
        if ((uint)uVar18 < 0xf) {
          *pcStack_70 = (char)uVar18 << 4;
        }
        else {
          uVar37 = (uint)uVar18 - 0xf;
          *pcStack_70 = -0x10;
          if (0xfe < uVar37) {
            iStack_c8 = (int)puVar19;
            iStack_c8 = (int)puVar17 - iStack_c8;
            uVar18 = (ulong)(iStack_c8 - 0x10e) / 0xff;
            func_0x0099bdb0(puVar26,0xff,uVar18 + 1);
            puVar26 = (ulong *)(pcStack_70 + uVar18 + 2);
            uVar37 = (iStack_c8 + (int)uVar18 * -0xff) - 0x10e;
          }
          *(char *)puVar26 = (char)uVar37;
          puVar26 = (ulong *)((long)puVar26 + 1);
        }
        puVar33 = (ulong *)((long)puVar26 + uVar31);
        uVar18 = 8;
        if (8 < uVar31) {
          uVar18 = uVar31;
        }
        if ((0x18 < uVar31) && (0x1f < (ulong)((long)puVar26 - (long)puVar19))) {
          uVar31 = (uVar18 - 1 >> 3) + 1;
          uVar18 = uVar31 & 0x3ffffffffffffffc;
          uVar16 = 0;
          do {
            uVar9 = ((undefined8 *)((long)puVar19 + uVar16))[1];
            puVar5 = (undefined8 *)((long)puVar19 + uVar16 + 0x10);
            uVar10 = *puVar5;
            uVar11 = puVar5[1];
            *(undefined8 *)((long)puVar26 + uVar16) = *(undefined8 *)((long)puVar19 + uVar16);
            *(undefined8 *)((char *)((long)puVar26 + uVar16) + 8) = uVar9;
            pcVar49 = (char *)((long)puVar26 + uVar16 + 0x10);
            *(undefined8 *)pcVar49 = uVar10;
            *(undefined8 *)(pcVar49 + 8) = uVar11;
            uVar16 = uVar16 + 0x20;
          } while ((uVar31 * 8 & 0xffffffffffffffe0) != uVar16);
          puVar19 = puVar19 + uVar18;
          puVar26 = puVar26 + uVar18;
          if (uVar31 == uVar18) goto code_r0x00499363;
        }
        do {
          *puVar26 = *puVar19;
          puVar26 = puVar26 + 1;
          puVar19 = puVar19 + 1;
        } while (puVar26 < puVar33);
code_r0x00499363:
        iVar24 = uVar28 - uVar45;
        do {
          *(short *)puVar33 = (short)iVar24;
          if (puVar36 == puVar34) {
            puVar26 = (ulong *)((lVar35 - (long)puVar20) + (long)puVar17);
            if (puVar14 < puVar26) {
              puVar26 = puVar14;
            }
            puVar19 = (ulong *)((long)puVar17 + 4);
            puVar32 = (ulong *)((long)puVar20 + 4);
            puVar36 = (ulong *)((long)puVar26 - 7);
            puVar48 = puVar19;
            if (puVar19 < puVar36) {
              if (*puVar32 == *puVar19) {
                puVar32 = (ulong *)((long)puVar20 + 0xc);
                puVar48 = (ulong *)((long)puVar17 + 0xc);
                goto joined_r0x00499890;
              }
              uVar28 = 0;
              for (uVar18 = *puVar19 ^ *puVar32; (uVar18 & 1) == 0;
                  uVar18 = uVar18 >> 1 | 0x8000000000000000) {
                uVar28 = uVar28 + 1;
              }
              uVar28 = uVar28 >> 3;
            }
            else {
joined_r0x00499890:
              if (puVar48 < puVar36) {
                iVar24 = ((int)puVar48 - (int)puVar17) + -4;
code_r0x00499470:
                if (*puVar32 == *puVar48) goto code_r0x0049947f;
                uVar28 = 0;
                for (uVar18 = *puVar48 ^ *puVar32; (uVar18 & 1) == 0;
                    uVar18 = uVar18 >> 1 | 0x8000000000000000) {
                  uVar28 = uVar28 + 1;
                }
                uVar28 = (uVar28 >> 3) + iVar24;
                goto code_r0x0049952c;
              }
code_r0x00499490:
              if ((puVar48 < (ulong *)((long)puVar26 - 3U)) && ((int)*puVar32 == (int)*puVar48)) {
                puVar48 = (ulong *)((long)puVar48 + 4);
                puVar32 = (ulong *)((long)puVar32 + 4);
              }
              if ((puVar48 < (ulong *)((long)puVar26 - 1U)) && ((short)*puVar32 == (short)*puVar48))
              {
                puVar48 = (ulong *)((long)puVar48 + 2);
                puVar32 = (ulong *)((long)puVar32 + 2);
              }
              if (puVar48 < puVar26) {
                puVar48 = (ulong *)((long)puVar48 + (ulong)((char)*puVar32 == (char)*puVar48));
              }
              uVar28 = (int)puVar48 - (int)puVar19;
            }
code_r0x0049952c:
            puVar19 = (ulong *)((long)puVar17 + (ulong)uVar28 + 4);
            if (puVar19 == puVar26) {
              puVar36 = puVar26;
              puVar32 = param_2;
              if (puVar26 < puVar50) {
                if (*param_2 == *puVar26) {
                  puVar36 = puVar26 + 1;
                  puVar32 = param_2 + 1;
                  goto code_r0x00499567;
                }
                uVar37 = 0;
                for (uVar18 = *puVar26 ^ *param_2; (uVar18 & 1) == 0;
                    uVar18 = uVar18 >> 1 | 0x8000000000000000) {
                  uVar37 = uVar37 + 1;
                }
                uVar37 = uVar37 >> 3;
              }
              else {
code_r0x00499567:
                if (puVar36 < puVar50) {
                  puVar17 = (ulong *)((long)puVar17 + (lVar35 - (long)puVar20));
                  if (puVar14 <= puVar17) {
                    puVar17 = puVar14;
                  }
                  iVar24 = (int)puVar36 - (int)puVar17;
code_r0x00499590:
                  if (*puVar32 == *puVar36) goto code_r0x0049959b;
                  uVar37 = 0;
                  for (uVar18 = *puVar36 ^ *puVar32; (uVar18 & 1) == 0;
                      uVar18 = uVar18 >> 1 | 0x8000000000000000) {
                    uVar37 = uVar37 + 1;
                  }
                  uVar37 = (uVar37 >> 3) + iVar24;
                  goto code_r0x004995dc;
                }
code_r0x004997b9:
                if ((puVar36 < puVar4) && ((int)*puVar32 == (int)*puVar36)) {
                  puVar36 = (ulong *)((long)puVar36 + 4);
                  puVar32 = (ulong *)((long)puVar32 + 4);
                }
                if ((puVar36 < puVar15) && ((short)*puVar32 == (short)*puVar36)) {
                  puVar36 = (ulong *)((long)puVar36 + 2);
                  puVar32 = (ulong *)((long)puVar32 + 2);
                }
                if (puVar36 < puVar14) {
                  puVar36 = (ulong *)((long)puVar36 + (ulong)((char)*puVar32 == (char)*puVar36));
                }
                uVar37 = (int)puVar36 - (int)puVar26;
              }
code_r0x004995dc:
              uVar28 = uVar28 + uVar37;
              puVar19 = (ulong *)((long)puVar19 + (ulong)uVar37);
            }
          }
          else {
            puVar19 = (ulong *)((long)puVar17 + 4);
            puVar26 = (ulong *)((long)puVar20 + 4);
            puVar36 = puVar19;
            if (puVar19 < puVar50) {
              if (*puVar26 == *puVar19) {
                puVar26 = (ulong *)((long)puVar20 + 0xc);
                puVar36 = (ulong *)((long)puVar17 + 0xc);
                goto joined_r0x00499822;
              }
              uVar28 = 0;
              for (uVar18 = *puVar19 ^ *puVar26; (uVar18 & 1) == 0;
                  uVar18 = uVar18 >> 1 | 0x8000000000000000) {
                uVar28 = uVar28 + 1;
              }
              uVar28 = uVar28 >> 3;
            }
            else {
joined_r0x00499822:
              if (puVar36 < puVar50) {
                iVar24 = ((int)puVar36 - (int)puVar17) + -4;
code_r0x004993e0:
                if (*puVar26 == *puVar36) goto code_r0x004993ef;
                uVar28 = 0;
                for (uVar18 = *puVar36 ^ *puVar26; (uVar18 & 1) == 0;
                    uVar18 = uVar18 >> 1 | 0x8000000000000000) {
                  uVar28 = uVar28 + 1;
                }
                uVar28 = (uVar28 >> 3) + iVar24;
                goto code_r0x004994f4;
              }
code_r0x0049982f:
              if ((puVar36 < puVar4) && ((int)*puVar26 == (int)*puVar36)) {
                puVar36 = (ulong *)((long)puVar36 + 4);
                puVar26 = (ulong *)((long)puVar26 + 4);
              }
              if ((puVar36 < puVar15) && ((short)*puVar26 == (short)*puVar36)) {
                puVar36 = (ulong *)((long)puVar36 + 2);
                puVar26 = (ulong *)((long)puVar26 + 2);
              }
              if (puVar36 < puVar14) {
                puVar36 = (ulong *)((long)puVar36 + (ulong)((char)*puVar26 == (char)*puVar36));
              }
              uVar28 = (int)puVar36 - (int)puVar19;
            }
code_r0x004994f4:
            puVar19 = (ulong *)((long)puVar17 + (ulong)uVar28 + 4);
          }
          if (pcVar40 < (char *)((long)puVar33 + (ulong)(uVar28 + 0xf0) / 0xff + 8))
          goto code_r0x00498449;
          pcVar49 = (char *)((long)puVar33 + 2);
          if (uVar28 < 0xf) {
            *pcStack_70 = *pcStack_70 + (char)uVar28;
            pcStack_70 = pcVar49;
          }
          else {
            *pcStack_70 = *pcStack_70 + '\x0f';
            uVar37 = uVar28 - 0xf;
            pcVar49[0] = -1;
            pcVar49[1] = -1;
            pcVar49[2] = -1;
            pcVar49[3] = -1;
            if (0x3fb < uVar37) {
              uVar18 = (ulong)(((uVar28 - 0x40b) / 0x3fc) * 4);
              func_0x0099bdb0((char *)((long)puVar33 + 6),0xff,uVar18 + 4);
              pcVar49 = (char *)((long)puVar33 + uVar18 + 6);
              uVar37 = (uVar28 - 0x40b) % 0x3fc;
            }
            uVar28 = uVar37 * 0x8081 >> 0x17;
            pcVar49[uVar28] = (char)uVar28 + (char)uVar37;
            pcStack_70 = pcVar49 + (ulong)uVar28 + 1;
          }
          if (puVar22 <= puVar19) goto code_r0x0049ac21;
          *(int *)(param_1 +
                  ((ulong)(*(long *)((long)puVar19 + -2) * -0x30e4432345000000) >> 0x34) * 4) =
               ((int)puVar19 + -2) - iVar47;
          uVar18 = *puVar19 * -0x30e4432345000000 >> 0x34;
          uVar28 = *(uint *)(param_1 + uVar18 * 4);
          if (uVar28 < uVar29) {
            uVar37 = *(uint *)(lVar21 + uVar18 * 4);
            uVar28 = iVar25 + uVar37;
            puVar20 = (ulong *)((ulong)uVar37 + lVar30);
            puVar36 = puVar34;
          }
          else {
            puVar20 = (ulong *)(lVar39 + (ulong)uVar28);
            puVar36 = param_2;
          }
          uVar37 = (int)puVar19 - iVar47;
          *(uint *)(param_1 + uVar18 * 4) = uVar37;
          if ((uVar28 + 0xffff < uVar37) || ((int)*puVar20 != (int)*puVar19)) goto code_r0x00499059;
          puVar33 = (ulong *)(pcStack_70 + 1);
          *pcStack_70 = '\0';
          iVar24 = uVar37 - uVar28;
          puVar17 = puVar19;
        } while( true );
      }
      goto code_r0x00498f12;
    }
code_r0x0049ac21:
    uVar13 = (long)param_2 + (uVar13 - (long)puVar19);
    iVar25 = 0;
    if (pcVar40 < pcStack_70 + (uVar13 + 0xf0) / 0xff + uVar13 + 1) goto code_r0x0049b6f3;
    if (uVar13 < 0xf) {
      *pcStack_70 = (char)uVar13 << 4;
      param_3 = pcStack_70;
    }
    else {
      uVar46 = uVar13 - 0xf;
      *pcStack_70 = -0x10;
      param_3 = pcStack_70 + 1;
      if (0xfe < uVar46) {
        uVar46 = (uVar13 - 0x10e) / 0xff;
        func_0x0099bdb0(param_3,0xff,uVar46 + 1);
        param_3 = pcStack_70 + uVar46 + 2;
        uVar46 = (uVar13 + uVar46 * -0xff) - 0x10e;
      }
      *param_3 = (char)uVar46;
    }
  }
code_r0x0049b6d5:
  func_0x0099bda0(param_3 + 1,puVar19,uVar13);
  iVar25 = ((int)(param_3 + 1) + (int)uVar13) - iVar23;
code_r0x0049b6f3:
  *(ulong **)(param_1 + 0x4000) = param_2;
  *(uint *)(param_1 + 0x4018) = param_4;
  return iVar25;
code_r0x0049a9db:
  puVar50 = puVar50 + 1;
  puVar17 = puVar17 + 1;
  iVar47 = iVar47 + 8;
  if (puVar14 <= puVar50) goto code_r0x0049ab8c;
  goto code_r0x0049a9d0;
code_r0x0049a749:
  puVar22 = (ulong *)(lVar35 + 5);
  puVar34 = (ulong *)(lVar35 + 6);
  if (puVar20 < puVar34) goto code_r0x00498e1d;
  goto code_r0x0049a769;
code_r0x0049a45b:
  puVar50 = puVar50 + 1;
  puVar19 = puVar19 + 1;
  iVar47 = iVar47 + 8;
  if (puVar14 <= puVar50) goto code_r0x0049a60d;
  goto code_r0x0049a450;
code_r0x0049a1c8:
  puVar22 = (ulong *)(lVar30 + 5);
  puVar34 = (ulong *)(lVar30 + 6);
  if (puVar20 < puVar34) goto code_r0x004980c5;
  goto code_r0x0049a1e8;
code_r0x0049ae47:
  puVar20 = (ulong *)(lVar39 + uVar43);
  puVar26 = param_2;
  if (uVar45 < uVar29) {
    puVar26 = puVar34;
  }
  if ((puVar26 < puVar20) && (*(char *)((long)puVar17 - 1) == *(char *)((long)puVar20 - 1))) {
    puVar36 = (ulong *)(lVar39 + uVar43);
    puVar33 = puVar17;
    do {
      puVar17 = (ulong *)((long)puVar33 - 1);
      puVar20 = (ulong *)((long)puVar36 + -1);
      if ((puVar20 <= puVar26) || (puVar17 <= puVar19)) break;
      pcVar49 = (char *)((long)puVar33 - 2);
      pcVar1 = (char *)((long)puVar36 + -2);
      puVar36 = puVar20;
      puVar33 = puVar17;
    } while (*pcVar49 == *pcVar1);
  }
  uVar18 = (long)puVar17 - (long)puVar19;
  uVar31 = uVar18 & 0xffffffff;
  if (pcVar40 < pcStack_80 + uVar31 / 0xff + uVar31 + 9) goto code_r0x00498f12;
  puVar36 = (ulong *)(pcStack_80 + 1);
  if ((uint)uVar18 < 0xf) {
    *pcStack_80 = (char)uVar18 << 4;
  }
  else {
    uVar37 = (uint)uVar18 - 0xf;
    *pcStack_80 = -0x10;
    if (0xfe < uVar37) {
      pcStack_70._0_4_ = (int)puVar19;
      pcStack_70._0_4_ = (int)puVar17 - (int)pcStack_70;
      uVar18 = (ulong)((int)pcStack_70 - 0x10e) / 0xff;
      func_0x0099bdb0(puVar36,0xff,uVar18 + 1);
      puVar36 = (ulong *)(pcStack_80 + uVar18 + 2);
      uVar37 = ((int)pcStack_70 + (int)uVar18 * -0xff) - 0x10e;
    }
    *(char *)puVar36 = (char)uVar37;
    puVar36 = (ulong *)((long)puVar36 + 1);
  }
  puVar33 = (ulong *)((long)puVar36 + uVar31);
  uVar18 = 8;
  if (8 < uVar31) {
    uVar18 = uVar31;
  }
  if ((0x18 < uVar31) && (0x1f < (ulong)((long)puVar36 - (long)puVar19))) {
    uVar31 = (uVar18 - 1 >> 3) + 1;
    uVar18 = uVar31 & 0x3ffffffffffffffc;
    uVar16 = 0;
    do {
      uVar9 = ((undefined8 *)((long)puVar19 + uVar16))[1];
      puVar5 = (undefined8 *)((long)puVar19 + uVar16 + 0x10);
      uVar10 = *puVar5;
      uVar11 = puVar5[1];
      *(undefined8 *)((long)puVar36 + uVar16) = *(undefined8 *)((long)puVar19 + uVar16);
      *(undefined8 *)((char *)((long)puVar36 + uVar16) + 8) = uVar9;
      pcVar49 = (char *)((long)puVar36 + uVar16 + 0x10);
      *(undefined8 *)pcVar49 = uVar10;
      *(undefined8 *)(pcVar49 + 8) = uVar11;
      uVar16 = uVar16 + 0x20;
    } while ((uVar31 * 8 & 0xffffffffffffffe0) != uVar16);
    puVar19 = puVar19 + uVar18;
    puVar36 = puVar36 + uVar18;
    if (uVar31 == uVar18) goto code_r0x0049b053;
  }
  do {
    *puVar36 = *puVar19;
    puVar36 = puVar36 + 1;
    puVar19 = puVar19 + 1;
  } while (puVar36 < puVar33);
code_r0x0049b053:
  iVar47 = uVar28 - uVar45;
  do {
    *(short *)puVar33 = (short)iVar47;
    if (puVar26 == puVar34) {
      puVar26 = (ulong *)((lVar30 - (long)puVar20) + (long)puVar17);
      if (puVar14 < puVar26) {
        puVar26 = puVar14;
      }
      puVar19 = (ulong *)((long)puVar17 + 4);
      puVar32 = (ulong *)((long)puVar20 + 4);
      puVar36 = (ulong *)((long)puVar26 - 7);
      puVar48 = puVar19;
      if (puVar19 < puVar36) {
        if (*puVar32 == *puVar19) {
          puVar32 = (ulong *)((long)puVar20 + 0xc);
          puVar48 = (ulong *)((long)puVar17 + 0xc);
          goto joined_r0x0049b5a3;
        }
        uVar28 = 0;
        for (uVar18 = *puVar19 ^ *puVar32; (uVar18 & 1) == 0;
            uVar18 = uVar18 >> 1 | 0x8000000000000000) {
          uVar28 = uVar28 + 1;
        }
        uVar28 = uVar28 >> 3;
      }
      else {
joined_r0x0049b5a3:
        if (puVar48 < puVar36) {
          iVar47 = ((int)puVar48 - (int)puVar17) + -4;
code_r0x0049b170:
          if (*puVar32 == *puVar48) break;
          uVar28 = 0;
          for (uVar18 = *puVar48 ^ *puVar32; (uVar18 & 1) == 0;
              uVar18 = uVar18 >> 1 | 0x8000000000000000) {
            uVar28 = uVar28 + 1;
          }
          uVar28 = (uVar28 >> 3) + iVar47;
          goto code_r0x0049b229;
        }
code_r0x0049b190:
        if ((puVar48 < (ulong *)((long)puVar26 - 3U)) && ((int)*puVar32 == (int)*puVar48)) {
          puVar48 = (ulong *)((long)puVar48 + 4);
          puVar32 = (ulong *)((long)puVar32 + 4);
        }
        if ((puVar48 < (ulong *)((long)puVar26 - 1U)) && ((short)*puVar32 == (short)*puVar48)) {
          puVar48 = (ulong *)((long)puVar48 + 2);
          puVar32 = (ulong *)((long)puVar32 + 2);
        }
        if (puVar48 < puVar26) {
          puVar48 = (ulong *)((long)puVar48 + (ulong)((char)*puVar32 == (char)*puVar48));
        }
        uVar28 = (int)puVar48 - (int)puVar19;
      }
code_r0x0049b229:
      puVar19 = (ulong *)((long)puVar17 + (ulong)uVar28 + 4);
      if (puVar19 == puVar26) {
        puVar36 = puVar26;
        puVar32 = param_2;
        if (puVar26 < puVar50) {
          if (*param_2 == *puVar26) {
            puVar36 = puVar26 + 1;
            puVar32 = param_2 + 1;
            goto code_r0x0049b269;
          }
          uVar37 = 0;
          for (uVar18 = *puVar26 ^ *param_2; (uVar18 & 1) == 0;
              uVar18 = uVar18 >> 1 | 0x8000000000000000) {
            uVar37 = uVar37 + 1;
          }
          uVar37 = uVar37 >> 3;
        }
        else {
code_r0x0049b269:
          if (puVar36 < puVar50) {
            puVar17 = (ulong *)((long)puVar17 + (lVar30 - (long)puVar20));
            if (puVar14 <= puVar17) {
              puVar17 = puVar14;
            }
            iVar47 = (int)puVar36 - (int)puVar17;
code_r0x0049b2a0:
            if (*puVar32 == *puVar36) goto code_r0x0049b2ab;
            uVar37 = 0;
            for (uVar18 = *puVar36 ^ *puVar32; (uVar18 & 1) == 0;
                uVar18 = uVar18 >> 1 | 0x8000000000000000) {
              uVar37 = uVar37 + 1;
            }
            uVar37 = (uVar37 >> 3) + iVar47;
            goto code_r0x0049b2ec;
          }
code_r0x0049b52f:
          if ((puVar36 < puVar4) && ((int)*puVar32 == (int)*puVar36)) {
            puVar36 = (ulong *)((long)puVar36 + 4);
            puVar32 = (ulong *)((long)puVar32 + 4);
          }
          if ((puVar36 < puVar15) && ((short)*puVar32 == (short)*puVar36)) {
            puVar36 = (ulong *)((long)puVar36 + 2);
            puVar32 = (ulong *)((long)puVar32 + 2);
          }
          if (puVar36 < puVar14) {
            puVar36 = (ulong *)((long)puVar36 + (ulong)((char)*puVar32 == (char)*puVar36));
          }
          uVar37 = (int)puVar36 - (int)puVar26;
        }
code_r0x0049b2ec:
        uVar28 = uVar28 + uVar37;
        puVar19 = (ulong *)((long)puVar19 + (ulong)uVar37);
      }
    }
    else {
      puVar19 = (ulong *)((long)puVar17 + 4);
      puVar26 = (ulong *)((long)puVar20 + 4);
      puVar36 = puVar19;
      if (puVar19 < puVar50) {
        if (*puVar26 == *puVar19) {
          puVar26 = (ulong *)((long)puVar20 + 0xc);
          puVar36 = (ulong *)((long)puVar17 + 0xc);
          goto code_r0x0049b0bd;
        }
        uVar28 = 0;
        for (uVar18 = *puVar19 ^ *puVar26; (uVar18 & 1) == 0;
            uVar18 = uVar18 >> 1 | 0x8000000000000000) {
          uVar28 = uVar28 + 1;
        }
        uVar28 = uVar28 >> 3;
      }
      else {
code_r0x0049b0bd:
        if (puVar36 < puVar50) {
          iVar47 = ((int)puVar36 - (int)puVar17) + -4;
code_r0x0049b0e0:
          if (*puVar26 == *puVar36) goto code_r0x0049b0ef;
          uVar28 = 0;
          for (uVar18 = *puVar36 ^ *puVar26; (uVar18 & 1) == 0;
              uVar18 = uVar18 >> 1 | 0x8000000000000000) {
            uVar28 = uVar28 + 1;
          }
          uVar28 = (uVar28 >> 3) + iVar47;
          goto code_r0x0049b1e4;
        }
code_r0x0049b477:
        if ((puVar36 < puVar4) && ((int)*puVar26 == (int)*puVar36)) {
          puVar36 = (ulong *)((long)puVar36 + 4);
          puVar26 = (ulong *)((long)puVar26 + 4);
        }
        if ((puVar36 < puVar15) && ((short)*puVar26 == (short)*puVar36)) {
          puVar36 = (ulong *)((long)puVar36 + 2);
          puVar26 = (ulong *)((long)puVar26 + 2);
        }
        if (puVar36 < puVar14) {
          puVar36 = (ulong *)((long)puVar36 + (ulong)((char)*puVar26 == (char)*puVar36));
        }
        uVar28 = (int)puVar36 - (int)puVar19;
      }
code_r0x0049b1e4:
      puVar19 = (ulong *)((long)puVar17 + (ulong)uVar28 + 4);
    }
    if (pcVar40 < (char *)((long)puVar33 + (ulong)(uVar28 + 0xf0) / 0xff + 8))
    goto code_r0x00498f12;
    pcVar49 = (char *)((long)puVar33 + 2);
    if (uVar28 < 0xf) {
      *pcStack_80 = *pcStack_80 + (char)uVar28;
    }
    else {
      *pcStack_80 = *pcStack_80 + '\x0f';
      uVar37 = uVar28 - 0xf;
      pcVar49[0] = -1;
      pcVar49[1] = -1;
      pcVar49[2] = -1;
      pcVar49[3] = -1;
      if (0x3fb < uVar37) {
        uVar18 = (ulong)(((uVar28 - 0x40b) / 0x3fc) * 4);
        func_0x0099bdb0((char *)((long)puVar33 + 6),0xff,uVar18 + 4);
        pcVar49 = (char *)((long)puVar33 + uVar18 + 6);
        uVar37 = (uVar28 - 0x40b) % 0x3fc;
      }
      uVar28 = uVar37 * 0x8081 >> 0x17;
      pcVar49[uVar28] = (char)uVar28 + (char)uVar37;
      pcVar49 = pcVar49 + (ulong)uVar28 + 1;
    }
    pcStack_80 = pcVar49;
    if (puVar22 <= puVar19) goto code_r0x00498fae;
    *(int *)(param_1 + ((ulong)(*(long *)((long)puVar19 + -2) * -0x30e4432345000000) >> 0x34) * 4) =
         ((int)puVar19 + -2) - iVar25;
    uVar18 = *puVar19 * -0x30e4432345000000 >> 0x34;
    uVar37 = (int)puVar19 - iVar25;
    uVar28 = *(uint *)(param_1 + uVar18 * 4);
    puVar26 = param_2;
    lVar39 = lVar35;
    if (uVar28 < uVar29) {
      puVar26 = puVar34;
      lVar39 = lVar21;
    }
    *(uint *)(param_1 + uVar18 * 4) = uVar37;
    if ((uVar28 + 0xffff < uVar37) ||
       (puVar20 = (ulong *)(lVar39 + (ulong)uVar28), (int)*puVar20 != (int)*puVar19))
    goto code_r0x0049ada1;
    puVar33 = (ulong *)(pcVar49 + 1);
    *pcVar49 = '\0';
    iVar47 = uVar37 - uVar28;
    puVar17 = puVar19;
  } while( true );
  puVar48 = puVar48 + 1;
  puVar32 = puVar32 + 1;
  iVar47 = iVar47 + 8;
  if (puVar36 <= puVar48) goto code_r0x0049b190;
  goto code_r0x0049b170;
code_r0x0049b2ab:
  puVar36 = puVar36 + 1;
  puVar32 = puVar32 + 1;
  iVar47 = iVar47 + 8;
  if (puVar50 <= puVar36) goto code_r0x0049b52f;
  goto code_r0x0049b2a0;
code_r0x0049b0ef:
  puVar36 = puVar36 + 1;
  puVar26 = puVar26 + 1;
  iVar47 = iVar47 + 8;
  if (puVar50 <= puVar36) goto code_r0x0049b477;
  goto code_r0x0049b0e0;
code_r0x0049ada1:
  puVar17 = (ulong *)((long)puVar19 + 1);
  uVar28 = (int)puVar17 - iVar25;
  puVar20 = (ulong *)((long)puVar19 + 2);
  if (puVar22 < puVar20) goto code_r0x00498fae;
  goto code_r0x0049adc7;
code_r0x004999f1:
  puVar20 = (ulong *)(lVar39 + uVar43);
  puVar26 = param_2;
  if (uVar38 < uVar29) {
    puVar26 = puVar34;
  }
  if ((puVar26 < puVar20) && (*(char *)((long)puVar17 - 1) == *(char *)((long)puVar20 - 1))) {
    puVar36 = (ulong *)(lVar39 + uVar43);
    puVar33 = puVar17;
    do {
      puVar17 = (ulong *)((long)puVar33 - 1);
      puVar20 = (ulong *)((long)puVar36 + -1);
      if ((puVar20 <= puVar26) || (puVar17 <= puVar19)) break;
      pcVar49 = (char *)((long)puVar33 - 2);
      pcVar1 = (char *)((long)puVar36 + -2);
      puVar36 = puVar20;
      puVar33 = puVar17;
    } while (*pcVar49 == *pcVar1);
  }
  uVar18 = (long)puVar17 - (long)puVar19;
  uVar31 = uVar18 & 0xffffffff;
  if (pcVar40 < param_3 + uVar31 / 0xff + uVar31 + 9) goto code_r0x00498f12;
  puVar36 = (ulong *)(param_3 + 1);
  if ((uint)uVar18 < 0xf) {
    *param_3 = (char)uVar18 << 4;
  }
  else {
    uVar45 = (uint)uVar18 - 0xf;
    *param_3 = -0x10;
    if (0xfe < uVar45) {
      iVar25 = (int)puVar17 - (int)puVar19;
      uVar18 = (ulong)(iVar25 - 0x10e) / 0xff;
      func_0x0099bdb0(puVar36,0xff,uVar18 + 1);
      puVar36 = (ulong *)(param_3 + uVar18 + 2);
      uVar45 = (iVar25 + (int)uVar18 * -0xff) - 0x10e;
    }
    *(char *)puVar36 = (char)uVar45;
    puVar36 = (ulong *)((long)puVar36 + 1);
  }
  puVar33 = (ulong *)((long)puVar36 + uVar31);
  uVar18 = 8;
  if (8 < uVar31) {
    uVar18 = uVar31;
  }
  if ((0x18 < uVar31) && (0x1f < (ulong)((long)puVar36 - (long)puVar19))) {
    uVar31 = (uVar18 - 1 >> 3) + 1;
    uVar18 = uVar31 & 0x3ffffffffffffffc;
    uVar16 = 0;
    do {
      uVar9 = ((undefined8 *)((long)puVar19 + uVar16))[1];
      puVar5 = (undefined8 *)((long)puVar19 + uVar16 + 0x10);
      uVar10 = *puVar5;
      uVar11 = puVar5[1];
      *(undefined8 *)((long)puVar36 + uVar16) = *(undefined8 *)((long)puVar19 + uVar16);
      *(undefined8 *)((char *)((long)puVar36 + uVar16) + 8) = uVar9;
      pcVar49 = (char *)((long)puVar36 + uVar16 + 0x10);
      *(undefined8 *)pcVar49 = uVar10;
      *(undefined8 *)(pcVar49 + 8) = uVar11;
      uVar16 = uVar16 + 0x20;
    } while ((uVar31 * 8 & 0xffffffffffffffe0) != uVar16);
    puVar19 = puVar19 + uVar18;
    puVar36 = puVar36 + uVar18;
    if (uVar31 == uVar18) goto code_r0x00499c03;
  }
  do {
    *puVar36 = *puVar19;
    puVar36 = puVar36 + 1;
    puVar19 = puVar19 + 1;
  } while (puVar36 < puVar33);
code_r0x00499c03:
  iVar25 = uVar37 - uVar38;
  pcVar49 = param_3;
  do {
    *(short *)puVar33 = (short)iVar25;
    if (puVar26 == puVar34) {
      puVar26 = (ulong *)((lVar30 - (long)puVar20) + (long)puVar17);
      if (puVar14 < puVar26) {
        puVar26 = puVar14;
      }
      puVar19 = (ulong *)((long)puVar17 + 4);
      puVar32 = (ulong *)((long)puVar20 + 4);
      puVar36 = (ulong *)((long)puVar26 - 7);
      puVar48 = puVar19;
      if (puVar19 < puVar36) {
        if (*puVar32 == *puVar19) {
          puVar32 = (ulong *)((long)puVar20 + 0xc);
          puVar48 = (ulong *)((long)puVar17 + 0xc);
          goto code_r0x00499cff;
        }
        uVar37 = 0;
        for (uVar18 = *puVar19 ^ *puVar32; (uVar18 & 1) == 0;
            uVar18 = uVar18 >> 1 | 0x8000000000000000) {
          uVar37 = uVar37 + 1;
        }
        uVar37 = uVar37 >> 3;
      }
      else {
code_r0x00499cff:
        if (puVar48 < puVar36) {
          iVar25 = ((int)puVar48 - (int)puVar17) + -4;
code_r0x00499d20:
          if (*puVar32 == *puVar48) goto code_r0x00499d2f;
          uVar37 = 0;
          for (uVar18 = *puVar48 ^ *puVar32; (uVar18 & 1) == 0;
              uVar18 = uVar18 >> 1 | 0x8000000000000000) {
            uVar37 = uVar37 + 1;
          }
          uVar37 = (uVar37 >> 3) + iVar25;
          goto code_r0x00499df6;
        }
code_r0x00499d40:
        if ((puVar48 < (ulong *)((long)puVar26 - 3U)) && ((int)*puVar32 == (int)*puVar48)) {
          puVar48 = (ulong *)((long)puVar48 + 4);
          puVar32 = (ulong *)((long)puVar32 + 4);
        }
        if ((puVar48 < (ulong *)((long)puVar26 - 1U)) && ((short)*puVar32 == (short)*puVar48)) {
          puVar48 = (ulong *)((long)puVar48 + 2);
          puVar32 = (ulong *)((long)puVar32 + 2);
        }
        if (puVar48 < puVar26) {
          puVar48 = (ulong *)((long)puVar48 + (ulong)((char)*puVar32 == (char)*puVar48));
        }
        uVar37 = (int)puVar48 - (int)puVar19;
      }
code_r0x00499df6:
      puVar19 = (ulong *)((long)puVar17 + (ulong)uVar37 + 4);
      if (puVar19 == puVar26) {
        puVar36 = puVar26;
        puVar32 = param_2;
        if (puVar26 < puVar50) {
          if (*param_2 == *puVar26) {
            puVar36 = puVar26 + 1;
            puVar32 = param_2 + 1;
            goto code_r0x00499e2e;
          }
          uVar45 = 0;
          for (uVar18 = *puVar26 ^ *param_2; (uVar18 & 1) == 0;
              uVar18 = uVar18 >> 1 | 0x8000000000000000) {
            uVar45 = uVar45 + 1;
          }
          uVar45 = uVar45 >> 3;
        }
        else {
code_r0x00499e2e:
          if (puVar36 < puVar50) {
            puVar17 = (ulong *)((long)puVar17 + (lVar30 - (long)puVar20));
            if (puVar14 <= puVar17) {
              puVar17 = puVar14;
            }
            iVar25 = (int)puVar36 - (int)puVar17;
code_r0x00499e50:
            if (*puVar32 == *puVar36) goto code_r0x00499e5b;
            uVar45 = 0;
            for (uVar18 = *puVar36 ^ *puVar32; (uVar18 & 1) == 0;
                uVar18 = uVar18 >> 1 | 0x8000000000000000) {
              uVar45 = uVar45 + 1;
            }
            uVar45 = (uVar45 >> 3) + iVar25;
            goto code_r0x00499edc;
          }
code_r0x00499e6c:
          if ((puVar36 < puVar4) && ((int)*puVar32 == (int)*puVar36)) {
            puVar36 = (ulong *)((long)puVar36 + 4);
            puVar32 = (ulong *)((long)puVar32 + 4);
          }
          if ((puVar36 < puVar15) && ((short)*puVar32 == (short)*puVar36)) {
            puVar36 = (ulong *)((long)puVar36 + 2);
            puVar32 = (ulong *)((long)puVar32 + 2);
          }
          if (puVar36 < puVar14) {
            puVar36 = (ulong *)((long)puVar36 + (ulong)((char)*puVar32 == (char)*puVar36));
          }
          uVar45 = (int)puVar36 - (int)puVar26;
        }
code_r0x00499edc:
        uVar37 = uVar37 + uVar45;
        puVar19 = (ulong *)((long)puVar19 + (ulong)uVar45);
      }
    }
    else {
      puVar19 = (ulong *)((long)puVar17 + 4);
      puVar26 = (ulong *)((long)puVar20 + 4);
      puVar36 = puVar19;
      if (puVar19 < puVar50) {
        if (*puVar26 == *puVar19) {
          puVar26 = (ulong *)((long)puVar20 + 0xc);
          puVar36 = (ulong *)((long)puVar17 + 0xc);
          goto code_r0x00499c62;
        }
        uVar37 = 0;
        for (uVar18 = *puVar19 ^ *puVar26; (uVar18 & 1) == 0;
            uVar18 = uVar18 >> 1 | 0x8000000000000000) {
          uVar37 = uVar37 + 1;
        }
        uVar37 = uVar37 >> 3;
      }
      else {
code_r0x00499c62:
        if (puVar36 < puVar50) {
          iVar25 = ((int)puVar36 - (int)puVar17) + -4;
code_r0x00499c80:
          if (*puVar26 == *puVar36) break;
          uVar37 = 0;
          for (uVar18 = *puVar36 ^ *puVar26; (uVar18 & 1) == 0;
              uVar18 = uVar18 >> 1 | 0x8000000000000000) {
            uVar37 = uVar37 + 1;
          }
          uVar37 = (uVar37 >> 3) + iVar25;
          goto code_r0x00499db7;
        }
code_r0x0049a04f:
        if ((puVar36 < puVar4) && ((int)*puVar26 == (int)*puVar36)) {
          puVar36 = (ulong *)((long)puVar36 + 4);
          puVar26 = (ulong *)((long)puVar26 + 4);
        }
        if ((puVar36 < puVar15) && ((short)*puVar26 == (short)*puVar36)) {
          puVar36 = (ulong *)((long)puVar36 + 2);
          puVar26 = (ulong *)((long)puVar26 + 2);
        }
        if (puVar36 < puVar14) {
          puVar36 = (ulong *)((long)puVar36 + (ulong)((char)*puVar26 == (char)*puVar36));
        }
        uVar37 = (int)puVar36 - (int)puVar19;
      }
code_r0x00499db7:
      puVar19 = (ulong *)((long)puVar17 + (ulong)uVar37 + 4);
    }
    if (pcVar40 < (char *)((long)puVar33 + (ulong)(uVar37 + 0xf0) / 0xff + 8))
    goto code_r0x00498f12;
    param_3 = (char *)((long)puVar33 + 2);
    if (uVar37 < 0xf) {
      *pcVar49 = *pcVar49 + (char)uVar37;
    }
    else {
      *pcVar49 = *pcVar49 + '\x0f';
      uVar45 = uVar37 - 0xf;
      param_3[0] = -1;
      param_3[1] = -1;
      param_3[2] = -1;
      param_3[3] = -1;
      if (0x3fb < uVar45) {
        uVar18 = (ulong)(((uVar37 - 0x40b) / 0x3fc) * 4);
        func_0x0099bdb0((char *)((long)puVar33 + 6),0xff,uVar18 + 4);
        param_3 = (char *)((long)puVar33 + uVar18 + 6);
        uVar45 = (uVar37 - 0x40b) % 0x3fc;
      }
      uVar37 = uVar45 * 0x8081 >> 0x17;
      param_3[uVar37] = (char)uVar37 + (char)uVar45;
      param_3 = param_3 + (ulong)uVar37 + 1;
    }
    if (puVar22 <= puVar19) goto code_r0x0049b5b5;
    *(int *)(param_1 + ((ulong)(*(long *)((long)puVar19 + -2) * -0x30e4432345000000) >> 0x34) * 4) =
         ((int)puVar19 + -2) - iStack_50;
    uVar18 = *puVar19 * -0x30e4432345000000 >> 0x34;
    uVar45 = (int)puVar19 - iStack_50;
    uVar37 = *(uint *)(param_1 + uVar18 * 4);
    lVar39 = lVar35;
    if (uVar37 < uVar29) {
      lVar39 = lVar21;
    }
    *(uint *)(param_1 + uVar18 * 4) = uVar45;
    puVar26 = param_2;
    if (uVar37 < uVar29) {
      puVar26 = puVar34;
    }
    if (((uVar37 < uVar29 - uVar28) || (uVar37 + 0xffff < uVar45)) ||
       (puVar20 = (ulong *)(lVar39 + (ulong)uVar37), (int)*puVar20 != (int)*puVar19))
    goto code_r0x00499934;
    puVar33 = (ulong *)(param_3 + 1);
    *param_3 = '\0';
    iVar25 = uVar45 - uVar37;
    pcVar49 = param_3;
    puVar17 = puVar19;
  } while( true );
  puVar36 = puVar36 + 1;
  puVar26 = puVar26 + 1;
  iVar25 = iVar25 + 8;
  if (puVar50 <= puVar36) goto code_r0x0049a04f;
  goto code_r0x00499c80;
code_r0x00499d2f:
  puVar48 = puVar48 + 1;
  puVar32 = puVar32 + 1;
  iVar25 = iVar25 + 8;
  if (puVar36 <= puVar48) goto code_r0x00499d40;
  goto code_r0x00499d20;
code_r0x00499e5b:
  puVar36 = puVar36 + 1;
  puVar32 = puVar32 + 1;
  iVar25 = iVar25 + 8;
  if (puVar50 <= puVar36) goto code_r0x00499e6c;
  goto code_r0x00499e50;
code_r0x00499934:
  puVar17 = (ulong *)((long)puVar19 + 1);
  uVar37 = (int)puVar17 - iStack_50;
  puVar20 = (ulong *)((long)puVar19 + 2);
  if (puVar22 < puVar20) goto code_r0x0049b5b5;
  goto code_r0x00499964;
code_r0x00498611:
  puVar20 = (ulong *)(lVar39 + uVar43);
  puVar26 = param_2;
  if (uVar45 < uVar28) {
    puVar26 = puVar14;
  }
  if ((puVar26 < puVar20) && (*(char *)((long)puVar17 - 1) == *(char *)((long)puVar20 - 1))) {
    puVar36 = (ulong *)(lVar39 + uVar43);
    puVar33 = puVar17;
    do {
      puVar17 = (ulong *)((long)puVar33 - 1);
      puVar20 = (ulong *)((long)puVar36 + -1);
      if ((puVar20 <= puVar26) || (puVar17 <= puVar19)) break;
      pcVar49 = (char *)((long)puVar33 - 2);
      pcVar1 = (char *)((long)puVar36 + -2);
      puVar36 = puVar20;
      puVar33 = puVar17;
    } while (*pcVar49 == *pcVar1);
  }
  uVar18 = (long)puVar17 - (long)puVar19;
  uVar31 = uVar18 & 0xffffffff;
  if (pcVar40 < pcStack_78 + uVar31 / 0xff + uVar31 + 9) goto code_r0x00498f12;
  puVar36 = (ulong *)(pcStack_78 + 1);
  if ((uint)uVar18 < 0xf) {
    *pcStack_78 = (char)uVar18 << 4;
  }
  else {
    uVar37 = (uint)uVar18 - 0xf;
    *pcStack_78 = -0x10;
    if (0xfe < uVar37) {
      iStack_98 = (int)puVar19;
      iStack_98 = (int)puVar17 - iStack_98;
      uVar18 = (ulong)(iStack_98 - 0x10e) / 0xff;
      func_0x0099bdb0(puVar36,0xff,uVar18 + 1);
      puVar36 = (ulong *)(pcStack_78 + uVar18 + 2);
      uVar37 = (iStack_98 + (int)uVar18 * -0xff) - 0x10e;
    }
    *(char *)puVar36 = (char)uVar37;
    puVar36 = (ulong *)((long)puVar36 + 1);
  }
  puVar33 = (ulong *)((long)puVar36 + uVar31);
  uVar18 = 8;
  if (8 < uVar31) {
    uVar18 = uVar31;
  }
  if ((0x18 < uVar31) && (0x1f < (ulong)((long)puVar36 - (long)puVar19))) {
    uVar18 = (uVar18 - 1 >> 3) + 1;
    uVar31 = uVar18 & 0x3ffffffffffffffc;
    uVar16 = 0;
    do {
      uVar9 = ((undefined8 *)((long)puVar19 + uVar16))[1];
      puVar5 = (undefined8 *)((long)puVar19 + uVar16 + 0x10);
      uVar10 = *puVar5;
      uVar11 = puVar5[1];
      *(undefined8 *)((long)puVar36 + uVar16) = *(undefined8 *)((long)puVar19 + uVar16);
      *(undefined8 *)((char *)((long)puVar36 + uVar16) + 8) = uVar9;
      pcVar49 = (char *)((long)puVar36 + uVar16 + 0x10);
      *(undefined8 *)pcVar49 = uVar10;
      *(undefined8 *)(pcVar49 + 8) = uVar11;
      uVar16 = uVar16 + 0x20;
    } while ((uVar18 * 8 & 0xffffffffffffffe0) != uVar16);
    puVar19 = puVar19 + uVar31;
    puVar36 = puVar36 + uVar31;
    if (uVar18 == uVar31) goto code_r0x00498843;
  }
  do {
    *puVar36 = *puVar19;
    puVar36 = puVar36 + 1;
    puVar19 = puVar19 + 1;
  } while (puVar36 < puVar33);
code_r0x00498843:
  iVar47 = uVar29 - uVar45;
  do {
    *(short *)puVar33 = (short)iVar47;
    if (puVar26 == puVar14) {
      puVar26 = (ulong *)((lVar30 - (long)puVar20) + (long)puVar17);
      if (puVar22 < puVar26) {
        puVar26 = puVar22;
      }
      puVar19 = (ulong *)((long)puVar17 + 4);
      puVar32 = (ulong *)((long)puVar20 + 4);
      puVar36 = (ulong *)((long)puVar26 - 7);
      puVar48 = puVar19;
      if (puVar19 < puVar36) {
        if (*puVar32 == *puVar19) {
          puVar32 = (ulong *)((long)puVar20 + 0xc);
          puVar48 = (ulong *)((long)puVar17 + 0xc);
          goto joined_r0x00498dbb;
        }
        uVar29 = 0;
        for (uVar18 = *puVar19 ^ *puVar32; (uVar18 & 1) == 0;
            uVar18 = uVar18 >> 1 | 0x8000000000000000) {
          uVar29 = uVar29 + 1;
        }
        uVar29 = uVar29 >> 3;
      }
      else {
joined_r0x00498dbb:
        if (puVar48 < puVar36) {
          iVar47 = ((int)puVar48 - (int)puVar17) + -4;
code_r0x00498950:
          if (*puVar32 == *puVar48) break;
          uVar29 = 0;
          for (uVar18 = *puVar48 ^ *puVar32; (uVar18 & 1) == 0;
              uVar18 = uVar18 >> 1 | 0x8000000000000000) {
            uVar29 = uVar29 + 1;
          }
          uVar29 = (uVar29 >> 3) + iVar47;
          goto code_r0x00498a1e;
        }
code_r0x00498970:
        if ((puVar48 < (ulong *)((long)puVar26 - 3U)) && ((int)*puVar32 == (int)*puVar48)) {
          puVar48 = (ulong *)((long)puVar48 + 4);
          puVar32 = (ulong *)((long)puVar32 + 4);
        }
        if ((puVar48 < (ulong *)((long)puVar26 - 1U)) && ((short)*puVar32 == (short)*puVar48)) {
          puVar48 = (ulong *)((long)puVar48 + 2);
          puVar32 = (ulong *)((long)puVar32 + 2);
        }
        if (puVar48 < puVar26) {
          puVar48 = (ulong *)((long)puVar48 + (ulong)((char)*puVar32 == (char)*puVar48));
        }
        uVar29 = (int)puVar48 - (int)puVar19;
      }
code_r0x00498a1e:
      puVar19 = (ulong *)((long)puVar17 + (ulong)uVar29 + 4);
      if (puVar19 == puVar26) {
        puVar36 = puVar26;
        puVar32 = param_2;
        if (puVar26 < puVar50) {
          if (*param_2 == *puVar26) {
            puVar36 = puVar26 + 1;
            puVar32 = param_2 + 1;
            goto code_r0x00498a5f;
          }
          uVar37 = 0;
          for (uVar18 = *puVar26 ^ *param_2; (uVar18 & 1) == 0;
              uVar18 = uVar18 >> 1 | 0x8000000000000000) {
            uVar37 = uVar37 + 1;
          }
          uVar37 = uVar37 >> 3;
        }
        else {
code_r0x00498a5f:
          if (puVar36 < puVar50) {
            puVar17 = (ulong *)((long)puVar17 + (lVar30 - (long)puVar20));
            if (puVar22 <= puVar17) {
              puVar17 = puVar22;
            }
            iVar47 = (int)puVar36 - (int)puVar17;
code_r0x00498a90:
            if (*puVar32 == *puVar36) goto code_r0x00498a9b;
            uVar37 = 0;
            for (uVar18 = *puVar36 ^ *puVar32; (uVar18 & 1) == 0;
                uVar18 = uVar18 >> 1 | 0x8000000000000000) {
              uVar37 = uVar37 + 1;
            }
            uVar37 = (uVar37 >> 3) + iVar47;
            goto code_r0x00498ae7;
          }
code_r0x00498cd2:
          if ((puVar36 < puVar4) && ((int)*puVar32 == (int)*puVar36)) {
            puVar36 = (ulong *)((long)puVar36 + 4);
            puVar32 = (ulong *)((long)puVar32 + 4);
          }
          if ((puVar36 < puVar15) && ((short)*puVar32 == (short)*puVar36)) {
            puVar36 = (ulong *)((long)puVar36 + 2);
            puVar32 = (ulong *)((long)puVar32 + 2);
          }
          if (puVar36 < puVar22) {
            puVar36 = (ulong *)((long)puVar36 + (ulong)((char)*puVar32 == (char)*puVar36));
          }
          uVar37 = (int)puVar36 - (int)puVar26;
        }
code_r0x00498ae7:
        uVar29 = uVar29 + uVar37;
        puVar19 = (ulong *)((long)puVar19 + (ulong)uVar37);
      }
    }
    else {
      puVar19 = (ulong *)((long)puVar17 + 4);
      puVar26 = (ulong *)((long)puVar20 + 4);
      puVar36 = puVar19;
      if (puVar19 < puVar50) {
        if (*puVar26 == *puVar19) {
          puVar26 = (ulong *)((long)puVar20 + 0xc);
          puVar36 = (ulong *)((long)puVar17 + 0xc);
          goto joined_r0x00498d42;
        }
        uVar29 = 0;
        for (uVar18 = *puVar19 ^ *puVar26; (uVar18 & 1) == 0;
            uVar18 = uVar18 >> 1 | 0x8000000000000000) {
          uVar29 = uVar29 + 1;
        }
        uVar29 = uVar29 >> 3;
      }
      else {
joined_r0x00498d42:
        if (puVar36 < puVar50) {
          iVar47 = ((int)puVar36 - (int)puVar17) + -4;
code_r0x004988c0:
          if (*puVar26 == *puVar36) goto code_r0x004988cf;
          uVar29 = 0;
          for (uVar18 = *puVar36 ^ *puVar26; (uVar18 & 1) == 0;
              uVar18 = uVar18 >> 1 | 0x8000000000000000) {
            uVar29 = uVar29 + 1;
          }
          uVar29 = (uVar29 >> 3) + iVar47;
          goto code_r0x004989dd;
        }
code_r0x00498d4f:
        if ((puVar36 < puVar4) && ((int)*puVar26 == (int)*puVar36)) {
          puVar36 = (ulong *)((long)puVar36 + 4);
          puVar26 = (ulong *)((long)puVar26 + 4);
        }
        if ((puVar36 < puVar15) && ((short)*puVar26 == (short)*puVar36)) {
          puVar36 = (ulong *)((long)puVar36 + 2);
          puVar26 = (ulong *)((long)puVar26 + 2);
        }
        if (puVar36 < puVar22) {
          puVar36 = (ulong *)((long)puVar36 + (ulong)((char)*puVar26 == (char)*puVar36));
        }
        uVar29 = (int)puVar36 - (int)puVar19;
      }
code_r0x004989dd:
      puVar19 = (ulong *)((long)puVar17 + (ulong)uVar29 + 4);
    }
    if (pcVar40 < (char *)((long)puVar33 + (ulong)(uVar29 + 0xf0) / 0xff + 8))
    goto code_r0x00498f12;
    pcVar49 = (char *)((long)puVar33 + 2);
    if (uVar29 < 0xf) {
      *pcStack_78 = *pcStack_78 + (char)uVar29;
      pcStack_78 = pcVar49;
    }
    else {
      *pcStack_78 = *pcStack_78 + '\x0f';
      uVar37 = uVar29 - 0xf;
      pcVar49[0] = -1;
      pcVar49[1] = -1;
      pcVar49[2] = -1;
      pcVar49[3] = -1;
      if (0x3fb < uVar37) {
        uVar18 = (ulong)(((uVar29 - 0x40b) / 0x3fc) * 4);
        func_0x0099bdb0((char *)((long)puVar33 + 6),0xff,uVar18 + 4);
        pcVar49 = (char *)((long)puVar33 + uVar18 + 6);
        uVar37 = (uVar29 - 0x40b) % 0x3fc;
      }
      uVar29 = uVar37 * 0x8081 >> 0x17;
      pcVar49[uVar29] = (char)uVar29 + (char)uVar37;
      pcStack_78 = pcVar49 + (ulong)uVar29 + 1;
    }
    if (puVar34 <= puVar19) goto code_r0x00498ed7;
    *(int *)(param_1 + ((ulong)(*(long *)((long)puVar19 + -2) * -0x30e4432345000000) >> 0x34) * 4) =
         ((int)puVar19 + -2) - iVar25;
    uVar18 = *puVar19 * -0x30e4432345000000 >> 0x34;
    uVar37 = (int)puVar19 - iVar25;
    uVar29 = *(uint *)(param_1 + uVar18 * 4);
    puVar26 = param_2;
    lVar39 = lVar35;
    if (uVar29 < uVar28) {
      puVar26 = puVar14;
      lVar39 = lVar21;
    }
    *(uint *)(param_1 + uVar18 * 4) = uVar37;
    if ((uVar29 + 0xffff < uVar37) ||
       (puVar20 = (ulong *)(lVar39 + (ulong)uVar29), (int)*puVar20 != (int)*puVar19))
    goto code_r0x0049856d;
    puVar33 = (ulong *)(pcStack_78 + 1);
    *pcStack_78 = '\0';
    iVar47 = uVar37 - uVar29;
    puVar17 = puVar19;
  } while( true );
  puVar48 = puVar48 + 1;
  puVar32 = puVar32 + 1;
  iVar47 = iVar47 + 8;
  if (puVar36 <= puVar48) goto code_r0x00498970;
  goto code_r0x00498950;
code_r0x00498a9b:
  puVar36 = puVar36 + 1;
  puVar32 = puVar32 + 1;
  iVar47 = iVar47 + 8;
  if (puVar50 <= puVar36) goto code_r0x00498cd2;
  goto code_r0x00498a90;
code_r0x004988cf:
  puVar36 = puVar36 + 1;
  puVar26 = puVar26 + 1;
  iVar47 = iVar47 + 8;
  if (puVar50 <= puVar36) goto code_r0x00498d4f;
  goto code_r0x004988c0;
code_r0x0049856d:
  puVar17 = (ulong *)((long)puVar19 + 1);
  uVar29 = (int)puVar17 - iVar25;
  puVar20 = (ulong *)((long)puVar19 + 2);
  if (puVar34 < puVar20) goto code_r0x00498ed7;
  goto code_r0x0049858d;
code_r0x00498ed7:
  uVar13 = (long)param_2 + (uVar13 - (long)puVar19);
  if (pcVar40 < pcStack_78 + (uVar13 + 0xf0) / 0xff + uVar13 + 1) {
code_r0x00498f12:
    iVar25 = 0;
    goto code_r0x0049b6f3;
  }
  if (uVar13 < 0xf) {
    *pcStack_78 = (char)uVar13 << 4;
    param_3 = pcStack_78;
  }
  else {
    uVar46 = uVar13 - 0xf;
    *pcStack_78 = -0x10;
    param_3 = pcStack_78 + 1;
    if (0xfe < uVar46) {
      uVar46 = (uVar13 - 0x10e) / 0xff;
      func_0x0099bdb0(param_3,0xff,uVar46 + 1);
      param_3 = pcStack_78 + uVar46 + 2;
      uVar46 = (uVar13 + uVar46 * -0xff) - 0x10e;
    }
code_r0x004998ff:
    *param_3 = (char)uVar46;
  }
  goto code_r0x0049b6d5;
code_r0x0049947f:
  puVar48 = puVar48 + 1;
  puVar32 = puVar32 + 1;
  iVar24 = iVar24 + 8;
  if (puVar36 <= puVar48) goto code_r0x00499490;
  goto code_r0x00499470;
code_r0x0049959b:
  puVar36 = puVar36 + 1;
  puVar32 = puVar32 + 1;
  iVar24 = iVar24 + 8;
  if (puVar50 <= puVar36) goto code_r0x004997b9;
  goto code_r0x00499590;
code_r0x004993ef:
  puVar36 = puVar36 + 1;
  puVar26 = puVar26 + 1;
  iVar24 = iVar24 + 8;
  if (puVar50 <= puVar36) goto code_r0x0049982f;
  goto code_r0x004993e0;
code_r0x00499059:
  puVar17 = (ulong *)((long)puVar19 + 1);
  uVar28 = (int)puVar17 - iVar47;
  puVar20 = (ulong *)((long)puVar19 + 2);
  if (puVar22 < puVar20) goto code_r0x0049ac21;
  goto code_r0x0049907f;
}


