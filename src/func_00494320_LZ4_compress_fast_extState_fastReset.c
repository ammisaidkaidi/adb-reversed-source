// Function: LZ4_compress_fast_extState_fastReset
// Address: 00494320
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Type propagation algorithm not settling */

int LZ4_compress_fast_extState_fastReset
              (long param_1,long *param_2,char *param_3,uint param_4,int param_5,uint param_6)

{
  ulong *puVar1;
  char *pcVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  ushort uVar5;
  short sVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  uint uVar12;
  uint uVar13;
  long *plVar14;
  ulong uVar15;
  int iVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  uint uVar20;
  long *plVar21;
  ulong *puVar22;
  int iVar23;
  char *pcVar24;
  ulong uVar25;
  ulong uVar26;
  long *plVar27;
  char *pcVar28;
  ulong uVar29;
  int iVar30;
  ulong uVar31;
  ulong *puVar32;
  long *plVar33;
  long lVar34;
  int iVar35;
  uint uVar36;
  long lVar37;
  long *plVar38;
  ulong *puVar39;
  ulong uVar40;
  long *plStack_60;
  char *pcStack_40;
  
  uVar20 = 1;
  if (1 < (int)param_6) {
    uVar20 = param_6;
  }
  uVar31 = 0x10001;
  if ((int)uVar20 < 0x10001) {
    uVar31 = (ulong)uVar20;
  }
  iVar16 = 0;
  if (param_4 < 0x7e000001) {
    iVar16 = (uint)((ulong)param_4 * 0x8080808081 >> 0x27) + 0x10;
  }
  iVar23 = *(int *)(param_1 + 0x4014);
  iVar30 = (int)uVar31;
  iVar35 = (int)param_3;
  sVar6 = (short)param_2;
  if (iVar16 <= param_5) {
    plVar21 = param_2;
    if (0x1000a < (int)param_4) {
      if (iVar23 == 0) {
        if (*(int *)(param_1 + 0x4010) == 0) {
          uVar20 = 0;
        }
        else {
          uVar20 = *(int *)(param_1 + 0x4010) + 0x10000;
          *(uint *)(param_1 + 0x4010) = uVar20;
        }
      }
      else {
        uVar20 = 0;
        func_0x0099bdb0(param_1,0,0x4000);
        *(undefined8 *)(param_1 + 0x4010) = 0;
      }
      *(undefined4 *)(param_1 + 0x4018) = 0;
      *(undefined8 *)(param_1 + 0x4000) = 0;
      *(undefined8 *)(param_1 + 0x4008) = 0;
      if (0x7e000000 < param_4) {
        return 0;
      }
      lVar37 = (long)param_2 - (ulong)uVar20;
      uVar40 = (ulong)param_4;
      plVar17 = (long *)((long)param_2 + (uVar40 - 0xb));
      *(uint *)(param_1 + 0x4018) = param_4;
      *(uint *)(param_1 + 0x4010) = param_4 + uVar20;
      *(undefined4 *)(param_1 + 0x4014) = 2;
      *(uint *)(param_1 + ((ulong)(*param_2 * -0x30e4432345000000) >> 0x34) * 4) = uVar20;
      plVar33 = (long *)((long)param_2 + 2);
      puVar32 = (ulong *)((long)param_2 + (uVar40 - 0xc));
code_r0x00494ee5:
      lVar34 = *(long *)((long)plVar21 + 1);
      uVar25 = uVar31;
      plVar19 = (long *)((long)plVar21 + 1);
      uVar12 = iVar30 * 0x40;
      while( true ) {
        plVar38 = plVar33;
        uVar12 = uVar12 + 1;
        uVar26 = (ulong)(lVar34 * -0x30e4432345000000) >> 0x34;
        uVar36 = *(uint *)(param_1 + uVar26 * 4);
        uVar15 = (ulong)uVar36;
        iVar16 = (int)lVar37;
        uVar13 = (int)plVar19 - iVar16;
        lVar34 = *plVar38;
        *(uint *)(param_1 + uVar26 * 4) = uVar13;
        if ((uVar13 <= uVar36 + 0xffff) && (*(int *)(lVar37 + uVar15) == (int)*plVar19)) break;
        plVar33 = (long *)(uVar25 + (long)plVar38);
        uVar25 = (ulong)(uVar12 >> 6);
        plVar19 = plVar38;
        if (plVar17 < plVar33) goto code_r0x0049531c;
      }
      plVar33 = (long *)(uVar15 + lVar37);
      plVar38 = plVar19;
      if ((uVar20 < uVar36) && (*(char *)((long)plVar19 - 1) == *(char *)((long)plVar33 + -1))) {
        plVar27 = (long *)((long)param_2 + uVar15 + ~(ulong)uVar20);
        plVar14 = (long *)((long)plVar19 - 1U);
        plVar18 = (long *)((long)plVar19 - 1U);
        do {
          plVar19 = plVar18;
          plVar38 = plVar14;
          plVar33 = plVar27;
          if ((plVar33 <= param_2) || (plVar38 <= plVar21)) break;
          plVar27 = (long *)((long)plVar33 + -1);
          plVar14 = (long *)((long)plVar38 + -1);
          plVar18 = (long *)((long)plVar19 - 1);
        } while (*(char *)((long)plVar38 + -1) == *(char *)((long)plVar33 + -1));
      }
      uVar25 = (long)plVar19 - (long)plVar21;
      plVar27 = (long *)(param_3 + 1);
      if ((uint)uVar25 < 0xf) {
        *param_3 = (char)uVar25 << 4;
      }
      else {
        uVar12 = (uint)uVar25 - 0xf;
        *param_3 = -0x10;
        if (0xfe < uVar12) {
          iVar23 = (int)plVar19 - (int)plVar21;
          uVar15 = (ulong)(iVar23 - 0x10e) / 0xff;
          func_0x0099bdb0(plVar27,0xff,uVar15 + 1);
          plVar27 = (long *)(param_3 + uVar15 + 2);
          uVar12 = (iVar23 + (int)uVar15 * -0xff) - 0x10e;
        }
        *(char *)plVar27 = (char)uVar12;
        plVar27 = (long *)((long)plVar27 + 1);
      }
      uVar25 = uVar25 & 0xffffffff;
      plVar19 = (long *)((long)plVar27 + uVar25);
      uVar15 = 8;
      if (8 < uVar25) {
        uVar15 = uVar25;
      }
      if ((0x18 < uVar25) && (0x1f < (ulong)((long)plVar27 - (long)plVar21))) {
        uVar25 = (uVar15 - 1 >> 3) + 1;
        uVar15 = uVar25 & 0x3ffffffffffffffc;
        uVar26 = 0;
        do {
          puVar3 = (undefined4 *)((long)plVar21 + uVar26);
          uVar7 = puVar3[1];
          uVar8 = puVar3[2];
          uVar9 = puVar3[3];
          puVar4 = (undefined8 *)((long)plVar21 + uVar26 + 0x10);
          uVar10 = *puVar4;
          uVar11 = puVar4[1];
          pcVar24 = (char *)((long)plVar27 + uVar26);
          *(undefined4 *)pcVar24 = *puVar3;
          *(undefined4 *)(pcVar24 + 4) = uVar7;
          *(undefined4 *)(pcVar24 + 8) = uVar8;
          *(undefined4 *)(pcVar24 + 0xc) = uVar9;
          pcVar24 = (char *)((long)plVar27 + uVar26 + 0x10);
          *(undefined8 *)pcVar24 = uVar10;
          *(undefined8 *)(pcVar24 + 8) = uVar11;
          uVar26 = uVar26 + 0x20;
        } while ((uVar25 * 8 & 0xffffffffffffffe0) != uVar26);
        plVar21 = plVar21 + uVar15;
        plVar27 = plVar27 + uVar15;
        if (uVar25 == uVar15) goto code_r0x004950b0;
      }
      do {
        *plVar27 = *plVar21;
        plVar27 = plVar27 + 1;
        plVar21 = plVar21 + 1;
      } while (plVar27 < plVar19);
code_r0x004950b0:
      do {
        *(short *)plVar19 = (short)plVar38 - (short)plVar33;
        pcVar24 = (char *)((long)plVar19 + 2);
        puVar1 = (ulong *)((long)plVar38 + 4);
        puVar39 = (ulong *)((long)plVar33 + 4);
        puVar22 = puVar1;
        if (puVar1 < puVar32) {
          if (*puVar39 == *puVar1) {
            puVar39 = (ulong *)((long)plVar33 + 0xc);
            puVar22 = (ulong *)((long)plVar38 + 0xc);
            goto code_r0x004950e8;
          }
          uVar12 = 0;
          for (uVar25 = *puVar1 ^ *puVar39; (uVar25 & 1) == 0;
              uVar25 = uVar25 >> 1 | 0x8000000000000000) {
            uVar12 = uVar12 + 1;
          }
          uVar25 = (ulong)(uVar12 >> 3);
          plVar21 = (long *)((long)plVar38 + uVar25 + 4);
code_r0x00495260:
          *param_3 = *param_3 + (char)uVar25;
          param_3 = pcVar24;
        }
        else {
code_r0x004950e8:
          if (puVar22 < puVar32) {
code_r0x00495100:
            if (*puVar39 == *puVar22) goto code_r0x0049510f;
            uVar12 = 0;
            for (uVar25 = *puVar22 ^ *puVar39; (uVar25 & 1) == 0;
                uVar25 = uVar25 >> 1 | 0x8000000000000000) {
              uVar12 = uVar12 + 1;
            }
            puVar22 = (ulong *)((long)puVar22 + (ulong)(uVar12 >> 3));
            goto code_r0x004951ae;
          }
code_r0x0049511c:
          if ((puVar22 < (ulong *)((long)param_2 + (uVar40 - 8))) &&
             ((int)*puVar39 == (int)*puVar22)) {
            puVar22 = (ulong *)((long)puVar22 + 4);
            puVar39 = (ulong *)((long)puVar39 + 4);
          }
          if ((puVar22 < (ulong *)((long)param_2 + (uVar40 - 6))) &&
             ((short)*puVar39 == (short)*puVar22)) {
            puVar22 = (ulong *)((long)puVar22 + 2);
            puVar39 = (ulong *)((long)puVar39 + 2);
          }
          if (puVar22 < (ulong *)((long)param_2 + (uVar40 - 5))) {
            puVar22 = (ulong *)((long)puVar22 + (ulong)((char)*puVar39 == (char)*puVar22));
          }
code_r0x004951ae:
          uVar25 = (long)puVar22 - (long)puVar1;
          uVar12 = (uint)uVar25;
          plVar21 = (long *)((long)plVar38 + (uVar25 & 0xffffffff) + 4);
          if (uVar12 < 0xf) goto code_r0x00495260;
          *param_3 = *param_3 + '\x0f';
          uVar36 = uVar12 - 0xf;
          pcVar24[0] = -1;
          pcVar24[1] = -1;
          pcVar24[2] = -1;
          pcVar24[3] = -1;
          if (0x3fb < uVar36) {
            uVar25 = (ulong)(((uVar12 - 0x40b) / 0x3fc) * 4);
            func_0x0099bdb0((char *)((long)plVar19 + 6),0xff,uVar25 + 4);
            pcVar24 = (char *)((long)plVar19 + uVar25 + 6);
            uVar36 = (uVar12 - 0x40b) % 0x3fc;
          }
          uVar12 = uVar36 * 0x8081 >> 0x17;
          pcVar24[uVar12] = (char)uVar12 + (char)uVar36;
          param_3 = pcVar24 + (ulong)uVar12 + 1;
        }
        if (plVar17 <= plVar21) goto code_r0x0049531c;
        *(int *)(param_1 +
                ((ulong)(*(long *)((long)plVar21 + -2) * -0x30e4432345000000) >> 0x34) * 4) =
             ((int)plVar21 + -2) - iVar16;
        uVar25 = (ulong)(*plVar21 * -0x30e4432345000000) >> 0x34;
        uVar36 = (int)plVar21 - iVar16;
        uVar12 = *(uint *)(param_1 + uVar25 * 4);
        *(uint *)(param_1 + uVar25 * 4) = uVar36;
        if ((uVar12 + 0xffff < uVar36) ||
           (plVar33 = (long *)((ulong)uVar12 + lVar37), (int)*plVar33 != (int)*plVar21))
        goto code_r0x00494ed0;
        plVar19 = (long *)(param_3 + 1);
        *param_3 = '\0';
        plVar38 = plVar21;
      } while( true );
    }
    if (iVar23 == 3) {
      uVar20 = *(uint *)(param_1 + 0x4010);
      if (0xfff < (int)param_4 || 0xfffe < uVar20 + param_4) goto code_r0x0049467d;
code_r0x004946a8:
      uVar40 = (ulong)uVar20;
      *(undefined4 *)(param_1 + 0x4018) = 0;
      *(undefined8 *)(param_1 + 0x4000) = 0;
      *(undefined8 *)(param_1 + 0x4008) = 0;
      if (uVar20 != 0) {
        if (0x7e000000 < param_4) {
          return 0;
        }
        if (param_4 != 0) {
          uVar25 = (ulong)param_4;
          *(uint *)(param_1 + 0x4018) = param_4;
          *(uint *)(param_1 + 0x4010) = uVar20 + param_4;
          *(undefined4 *)(param_1 + 0x4014) = 3;
          if (0xc < param_4) {
            lVar37 = (long)param_2 - uVar40;
            plVar19 = (long *)((long)param_2 + (uVar25 - 0xb));
            *(short *)(param_1 + (ulong)((uint)((int)*param_2 * -0x61c8864f) >> 0x13) * 2) =
                 (short)uVar20;
            plVar33 = (long *)((long)param_2 + 2);
            puVar32 = (ulong *)((long)param_2 + (uVar25 - 0xc));
            plVar17 = param_2;
code_r0x0049642d:
            iVar16 = *(int *)((long)plVar17 + 1);
            uVar15 = uVar31;
            plVar38 = (long *)((long)plVar17 + 1);
            uVar12 = iVar30 * 0x40;
            while( true ) {
              plVar27 = plVar33;
              uVar12 = uVar12 + 1;
              uVar29 = (ulong)((uint)(iVar16 * -0x61c8864f) >> 0x13);
              uVar5 = *(ushort *)(param_1 + uVar29 * 2);
              uVar26 = (ulong)uVar5;
              sVar6 = (short)lVar37;
              iVar16 = (int)*plVar27;
              *(short *)(param_1 + uVar29 * 2) = (short)plVar38 - sVar6;
              if ((uVar20 <= uVar5) && (*(int *)(lVar37 + uVar26) == (int)*plVar38)) break;
              plVar33 = (long *)(uVar15 + (long)plVar27);
              uVar15 = (ulong)(uVar12 >> 6);
              plVar21 = plVar17;
              plVar38 = plVar27;
              if (plVar19 < plVar33) goto code_r0x00494716;
            }
            plVar33 = (long *)(uVar26 + lVar37);
            plVar21 = plVar38;
            if ((uVar40 < uVar26) && (*(char *)((long)plVar38 - 1) == *(char *)((long)plVar33 + -1))
               ) {
              plVar27 = (long *)((long)param_2 + uVar26 + ~uVar40);
              plVar14 = (long *)((long)plVar38 - 1U);
              plVar18 = (long *)((long)plVar38 - 1U);
              do {
                plVar38 = plVar18;
                plVar21 = plVar14;
                plVar33 = plVar27;
                if ((plVar33 <= param_2) || (plVar21 <= plVar17)) break;
                plVar27 = (long *)((long)plVar33 + -1);
                plVar14 = (long *)((long)plVar21 + -1);
                plVar18 = (long *)((long)plVar38 - 1);
              } while (*(char *)((long)plVar21 + -1) == *(char *)((long)plVar33 + -1));
            }
            uVar15 = (long)plVar38 - (long)plVar17;
            plVar27 = (long *)(param_3 + 1);
            if ((uint)uVar15 < 0xf) {
              *param_3 = (char)uVar15 << 4;
            }
            else {
              uVar12 = (uint)uVar15 - 0xf;
              *param_3 = -0x10;
              if (0xfe < uVar12) {
                iVar16 = (int)plVar38 - (int)plVar17;
                uVar26 = (ulong)(iVar16 - 0x10e) / 0xff;
                func_0x0099bdb0(plVar27,0xff,uVar26 + 1);
                plVar27 = (long *)(param_3 + uVar26 + 2);
                uVar12 = (iVar16 + (int)uVar26 * -0xff) - 0x10e;
              }
              *(char *)plVar27 = (char)uVar12;
              plVar27 = (long *)((long)plVar27 + 1);
            }
            uVar15 = uVar15 & 0xffffffff;
            plVar38 = (long *)((long)plVar27 + uVar15);
            uVar26 = 8;
            if (8 < uVar15) {
              uVar26 = uVar15;
            }
            if ((0x18 < uVar15) && (0x1f < (ulong)((long)plVar27 - (long)plVar17))) {
              uVar15 = (uVar26 - 1 >> 3) + 1;
              uVar26 = uVar15 & 0x3ffffffffffffffc;
              uVar29 = 0;
              do {
                puVar3 = (undefined4 *)((long)plVar17 + uVar29);
                uVar7 = puVar3[1];
                uVar8 = puVar3[2];
                uVar9 = puVar3[3];
                puVar4 = (undefined8 *)((long)plVar17 + uVar29 + 0x10);
                uVar10 = *puVar4;
                uVar11 = puVar4[1];
                pcVar24 = (char *)((long)plVar27 + uVar29);
                *(undefined4 *)pcVar24 = *puVar3;
                *(undefined4 *)(pcVar24 + 4) = uVar7;
                *(undefined4 *)(pcVar24 + 8) = uVar8;
                *(undefined4 *)(pcVar24 + 0xc) = uVar9;
                pcVar24 = (char *)((long)plVar27 + uVar29 + 0x10);
                *(undefined8 *)pcVar24 = uVar10;
                *(undefined8 *)(pcVar24 + 8) = uVar11;
                uVar29 = uVar29 + 0x20;
              } while ((uVar15 * 8 & 0xffffffffffffffe0) != uVar29);
              plVar17 = plVar17 + uVar26;
              plVar27 = plVar27 + uVar26;
              if (uVar15 == uVar26) goto code_r0x00496600;
            }
            do {
              *plVar27 = *plVar17;
              plVar27 = plVar27 + 1;
              plVar17 = plVar17 + 1;
            } while (plVar27 < plVar38);
code_r0x00496600:
            do {
              *(short *)plVar38 = (short)plVar21 - (short)plVar33;
              pcVar24 = (char *)((long)plVar38 + 2);
              puVar1 = (ulong *)((long)plVar21 + 4);
              puVar39 = (ulong *)((long)plVar33 + 4);
              puVar22 = puVar1;
              if (puVar1 < puVar32) {
                if (*puVar39 == *puVar1) {
                  puVar39 = (ulong *)((long)plVar33 + 0xc);
                  puVar22 = (ulong *)((long)plVar21 + 0xc);
                  goto code_r0x00496640;
                }
                uVar12 = 0;
                for (uVar15 = *puVar1 ^ *puVar39; (uVar15 & 1) == 0;
                    uVar15 = uVar15 >> 1 | 0x8000000000000000) {
                  uVar12 = uVar12 + 1;
                }
                uVar15 = (ulong)(uVar12 >> 3);
                plVar21 = (long *)((long)plVar21 + uVar15 + 4);
code_r0x00496720:
                *param_3 = *param_3 + (char)uVar15;
                param_3 = pcVar24;
              }
              else {
code_r0x00496640:
                if (puVar22 < puVar32) {
                  if (*puVar39 == *puVar22) goto code_r0x00496654;
                  uVar12 = 0;
                  for (uVar15 = *puVar22 ^ *puVar39; (uVar15 & 1) == 0;
                      uVar15 = uVar15 >> 1 | 0x8000000000000000) {
                    uVar12 = uVar12 + 1;
                  }
                  puVar22 = (ulong *)((long)puVar22 + (ulong)(uVar12 >> 3));
                }
                else {
                  if ((puVar22 < (ulong *)((long)param_2 + (uVar25 - 8))) &&
                     ((int)*puVar39 == (int)*puVar22)) {
                    puVar22 = (ulong *)((long)puVar22 + 4);
                    puVar39 = (ulong *)((long)puVar39 + 4);
                  }
                  if ((puVar22 < (ulong *)((long)param_2 + (uVar25 - 6))) &&
                     ((short)*puVar39 == (short)*puVar22)) {
                    puVar22 = (ulong *)((long)puVar22 + 2);
                    puVar39 = (ulong *)((long)puVar39 + 2);
                  }
                  if (puVar22 < (ulong *)((long)param_2 + (uVar25 - 5))) {
                    puVar22 = (ulong *)((long)puVar22 + (ulong)((char)*puVar39 == (char)*puVar22));
                  }
                }
                uVar15 = (long)puVar22 - (long)puVar1;
                uVar12 = (uint)uVar15;
                plVar21 = (long *)((long)plVar21 + (uVar15 & 0xffffffff) + 4);
                if (uVar12 < 0xf) goto code_r0x00496720;
                *param_3 = *param_3 + '\x0f';
                uVar36 = uVar12 - 0xf;
                pcVar24[0] = -1;
                pcVar24[1] = -1;
                pcVar24[2] = -1;
                pcVar24[3] = -1;
                if (0x3fb < uVar36) {
                  uVar15 = (ulong)(((uVar12 - 0x40b) / 0x3fc) * 4);
                  func_0x0099bdb0((char *)((long)plVar38 + 6),0xff,uVar15 + 4);
                  pcVar24 = (char *)((long)plVar38 + uVar15 + 6);
                  uVar36 = (uVar12 - 0x40b) % 0x3fc;
                }
                uVar12 = uVar36 * 0x8081 >> 0x17;
                pcVar24[uVar12] = (char)uVar12 + (char)uVar36;
                param_3 = pcVar24 + (ulong)uVar12 + 1;
              }
              if (plVar19 <= plVar21) break;
              *(short *)(param_1 +
                        (ulong)((uint)(*(int *)((long)plVar21 + -2) * -0x61c8864f) >> 0x13) * 2) =
                   ((short)plVar21 + -2) - sVar6;
              uVar15 = (ulong)((uint)((int)*plVar21 * -0x61c8864f) >> 0x13);
              uVar5 = *(ushort *)(param_1 + uVar15 * 2);
              *(short *)(param_1 + uVar15 * 2) = (short)plVar21 - sVar6;
              if ((uVar5 < uVar20) ||
                 (plVar33 = (long *)((ulong)uVar5 + lVar37), (int)*plVar33 != (int)*plVar21))
              goto code_r0x00496418;
              plVar38 = (long *)(param_3 + 1);
              *param_3 = '\0';
            } while( true );
          }
code_r0x00494716:
          uVar31 = (long)param_2 + (uVar25 - (long)plVar21);
          if (uVar31 < 0xf) {
            *param_3 = (char)uVar31 << 4;
          }
          else {
            uVar40 = uVar31 - 0xf;
            *param_3 = -0x10;
            pcVar24 = param_3 + 1;
            if (0xfe < uVar40) {
              uVar40 = (uVar31 - 0x10e) / 0xff;
              func_0x0099bdb0(pcVar24,0xff,uVar40 + 1);
              pcVar24 = param_3 + uVar40 + 2;
              uVar40 = (uVar40 * -0xff + uVar31) - 0x10e;
            }
            *pcVar24 = (char)uVar40;
            param_3 = pcVar24;
          }
code_r0x004953a6:
          func_0x0099bda0(param_3 + 1,plVar21,uVar31);
          return ((int)(param_3 + 1) + (int)uVar31) - iVar35;
        }
        goto code_r0x004947e4;
      }
    }
    else {
      if (iVar23 == 0) {
        uVar20 = *(uint *)(param_1 + 0x4010);
        goto code_r0x004946a8;
      }
code_r0x0049467d:
      func_0x0099bdb0(param_1,0,0x4000);
      *(undefined8 *)(param_1 + 0x4000) = 0;
      *(undefined8 *)(param_1 + 0x4008) = 0;
      *(undefined8 *)(param_1 + 0x400c) = 0;
      *(undefined8 *)(param_1 + 0x4014) = 0;
    }
    if (0x7e000000 < param_4) {
      return 0;
    }
    if (param_4 != 0) {
      uVar31 = (ulong)param_4;
      *(uint *)(param_1 + 0x4018) = param_4;
      *(uint *)(param_1 + 0x4010) = param_4;
      *(undefined4 *)(param_1 + 0x4014) = 3;
      if (param_4 < 0xd) {
code_r0x00495cde:
        uVar31 = (long)param_2 + (uVar31 - (long)plVar21);
        if (uVar31 < 0xf) {
          *param_3 = (char)uVar31 << 4;
        }
        else {
          uVar40 = uVar31 - 0xf;
          *param_3 = -0x10;
          pcVar24 = param_3 + 1;
          if (0xfe < uVar40) {
            uVar40 = (uVar31 - 0x10e) / 0xff;
            func_0x0099bdb0(pcVar24,0xff,uVar40 + 1);
            pcVar24 = param_3 + uVar40 + 2;
            uVar40 = (uVar31 + uVar40 * -0xff) - 0x10e;
          }
          *pcVar24 = (char)uVar40;
          param_3 = pcVar24;
        }
        func_0x0099bda0(param_3 + 1,plVar21,uVar31);
        return ((int)(param_3 + 1) + (int)uVar31) - iVar35;
      }
      plVar33 = (long *)((long)param_2 + (uVar31 - 0xb));
      *(undefined2 *)(param_1 + (ulong)((uint)((int)*param_2 * -0x61c8864f) >> 0x13) * 2) = 0;
      puVar32 = (ulong *)((long)param_2 + (uVar31 - 0xc));
code_r0x004958e6:
      iVar16 = *(int *)((long)plVar21 + 1);
      uVar40 = 1;
      plVar17 = (long *)((long)plVar21 + 1);
      uVar20 = iVar30 << 6;
      do {
        plVar19 = plVar17;
        plVar17 = (long *)(uVar40 + (long)plVar19);
        if (plVar33 < plVar17) goto code_r0x00495cde;
        uVar40 = (ulong)(uVar20 >> 6);
        uVar20 = uVar20 + 1;
        uVar15 = (ulong)((uint)(iVar16 * -0x61c8864f) >> 0x13);
        uVar25 = (ulong)*(ushort *)(param_1 + uVar15 * 2);
        iVar16 = (int)*plVar17;
        *(short *)(param_1 + uVar15 * 2) = (short)plVar19 - sVar6;
      } while (*(int *)((long)param_2 + uVar25) != (int)*plVar19);
      plVar17 = (long *)((long)param_2 + uVar25);
      plVar38 = plVar19;
      if ((uVar25 != 0) && (*(char *)((long)plVar19 + -1) == *(char *)((long)plVar17 + -1))) {
        plVar27 = (long *)((long)param_2 + (uVar25 - 1));
        plVar14 = (long *)((long)plVar19 + -1);
        plVar18 = (long *)((long)plVar19 + -1);
        do {
          plVar19 = plVar18;
          plVar38 = plVar14;
          plVar17 = plVar27;
          if ((plVar17 <= param_2) || (plVar38 <= plVar21)) break;
          plVar27 = (long *)((long)plVar17 + -1);
          plVar14 = (long *)((long)plVar38 + -1);
          plVar18 = (long *)((long)plVar19 + -1);
        } while (*(char *)((long)plVar38 + -1) == *(char *)((long)plVar17 + -1));
      }
      uVar40 = (long)plVar19 - (long)plVar21;
      plVar27 = (long *)(param_3 + 1);
      if ((uint)uVar40 < 0xf) {
        *param_3 = (char)uVar40 << 4;
      }
      else {
        uVar20 = (uint)uVar40 - 0xf;
        *param_3 = -0x10;
        if (0xfe < uVar20) {
          iVar16 = (int)plVar19 - (int)plVar21;
          uVar25 = (ulong)(iVar16 - 0x10e) / 0xff;
          func_0x0099bdb0(plVar27,0xff,uVar25 + 1);
          plVar27 = (long *)(param_3 + uVar25 + 2);
          uVar20 = (iVar16 + (int)uVar25 * -0xff) - 0x10e;
        }
        *(char *)plVar27 = (char)uVar20;
        plVar27 = (long *)((long)plVar27 + 1);
      }
      uVar40 = uVar40 & 0xffffffff;
      plVar19 = (long *)((long)plVar27 + uVar40);
      uVar25 = 8;
      if (8 < uVar40) {
        uVar25 = uVar40;
      }
      plVar14 = plVar21;
      plVar18 = plVar27;
      pcVar24 = param_3;
      if ((0x18 < uVar40) && (0x1f < (ulong)((long)plVar27 - (long)plVar21))) {
        uVar40 = (uVar25 - 1 >> 3) + 1;
        uVar25 = uVar40 & 0xfffffffffffffffc;
        plVar14 = plVar21 + uVar25;
        plVar18 = plVar27 + uVar25;
        uVar15 = 0;
        do {
          puVar3 = (undefined4 *)((long)plVar21 + uVar15);
          uVar7 = puVar3[1];
          uVar8 = puVar3[2];
          uVar9 = puVar3[3];
          puVar4 = (undefined8 *)((long)plVar21 + uVar15 + 0x10);
          uVar10 = *puVar4;
          uVar11 = puVar4[1];
          pcVar28 = (char *)((long)plVar27 + uVar15);
          *(undefined4 *)pcVar28 = *puVar3;
          *(undefined4 *)(pcVar28 + 4) = uVar7;
          *(undefined4 *)(pcVar28 + 8) = uVar8;
          *(undefined4 *)(pcVar28 + 0xc) = uVar9;
          pcVar28 = (char *)((long)plVar27 + uVar15 + 0x10);
          *(undefined8 *)pcVar28 = uVar10;
          *(undefined8 *)(pcVar28 + 8) = uVar11;
          uVar15 = uVar15 + 0x20;
        } while ((uVar40 * 8 & 0xffffffffffffffe0) != uVar15);
        if (uVar40 == uVar25) goto code_r0x00495a80;
      }
      do {
        *plVar18 = *plVar14;
        plVar18 = plVar18 + 1;
        plVar14 = plVar14 + 1;
      } while (plVar18 < plVar19);
code_r0x00495a80:
      do {
        *(short *)plVar19 = (short)plVar38 - (short)plVar17;
        param_3 = (char *)((long)plVar19 + 2);
        puVar1 = (ulong *)((long)plVar38 + 4);
        puVar39 = (ulong *)((long)plVar17 + 4);
        puVar22 = puVar1;
        if (puVar1 < puVar32) {
          if (*puVar39 == *puVar1) {
            puVar39 = (ulong *)((long)plVar17 + 0xc);
            puVar22 = (ulong *)((long)plVar38 + 0xc);
            goto joined_r0x00495c23;
          }
          uVar20 = 0;
          for (uVar40 = *puVar1 ^ *puVar39; (uVar40 & 1) == 0;
              uVar40 = uVar40 >> 1 | 0x8000000000000000) {
            uVar20 = uVar20 + 1;
          }
          uVar40 = (ulong)(uVar20 >> 3);
          plVar21 = (long *)((long)plVar38 + uVar40 + 4);
code_r0x00495bc0:
          *pcVar24 = *pcVar24 + (char)uVar40;
        }
        else {
joined_r0x00495c23:
          if (puVar22 < puVar32) {
code_r0x00495ad0:
            if (*puVar39 == *puVar22) goto code_r0x00495adc;
            uVar20 = 0;
            for (uVar40 = *puVar22 ^ *puVar39; (uVar40 & 1) == 0;
                uVar40 = uVar40 >> 1 | 0x8000000000000000) {
              uVar20 = uVar20 + 1;
            }
            puVar22 = (ulong *)((long)puVar22 + (ulong)(uVar20 >> 3));
            goto code_r0x00495b1e;
          }
code_r0x00495c2d:
          if ((puVar22 < (ulong *)((long)param_2 + (uVar31 - 8))) &&
             ((int)*puVar39 == (int)*puVar22)) {
            puVar22 = (ulong *)((long)puVar22 + 4);
            puVar39 = (ulong *)((long)puVar39 + 4);
          }
          if ((puVar22 < (ulong *)((long)param_2 + (uVar31 - 6))) &&
             ((short)*puVar39 == (short)*puVar22)) {
            puVar22 = (ulong *)((long)puVar22 + 2);
            puVar39 = (ulong *)((long)puVar39 + 2);
          }
          if (puVar22 < (ulong *)((long)param_2 + (uVar31 - 5))) {
            puVar22 = (ulong *)((long)puVar22 + (ulong)((char)*puVar39 == (char)*puVar22));
          }
code_r0x00495b1e:
          uVar40 = (long)puVar22 - (long)puVar1;
          uVar20 = (uint)uVar40;
          plVar21 = (long *)((long)plVar38 + (uVar40 & 0xffffffff) + 4);
          if (uVar20 < 0xf) goto code_r0x00495bc0;
          *pcVar24 = *pcVar24 + '\x0f';
          uVar12 = uVar20 - 0xf;
          param_3[0] = -1;
          param_3[1] = -1;
          param_3[2] = -1;
          param_3[3] = -1;
          if (0x3fb < uVar12) {
            uVar40 = (ulong)(((uVar20 - 0x40b) / 0x3fc) * 4);
            func_0x0099bdb0((char *)((long)plVar19 + 6),0xff,uVar40 + 4);
            param_3 = (char *)((long)plVar19 + uVar40 + 6);
            uVar12 = (uVar20 - 0x40b) % 0x3fc;
          }
          uVar20 = uVar12 * 0x8081 >> 0x17;
          param_3[uVar20] = (char)uVar20 + (char)uVar12;
          param_3 = param_3 + (ulong)uVar20 + 1;
        }
        if (plVar33 <= plVar21) goto code_r0x00495cde;
        *(short *)(param_1 + (ulong)((uint)(*(int *)((long)plVar21 + -2) * -0x61c8864f) >> 0x13) * 2
                  ) = ((short)plVar21 + -2) - sVar6;
        uVar40 = (ulong)((uint)((int)*plVar21 * -0x61c8864f) >> 0x13);
        uVar25 = (ulong)*(ushort *)(param_1 + uVar40 * 2);
        plVar17 = (long *)((long)param_2 + uVar25);
        *(short *)(param_1 + uVar40 * 2) = (short)plVar21 - sVar6;
        if (*(int *)((long)param_2 + uVar25) != (int)*plVar21) goto code_r0x004958e6;
        plVar19 = (long *)(param_3 + 1);
        *param_3 = '\0';
        pcVar24 = param_3;
        plVar38 = plVar21;
      } while( true );
    }
    goto code_r0x004947e4;
  }
  if (0x1000a < (int)param_4) {
    if (iVar23 == 0) {
      if (*(int *)(param_1 + 0x4010) == 0) {
        uVar20 = 0;
      }
      else {
        uVar20 = *(int *)(param_1 + 0x4010) + 0x10000;
        *(uint *)(param_1 + 0x4010) = uVar20;
      }
    }
    else {
      uVar20 = 0;
      func_0x0099bdb0(param_1,0,0x4000);
      *(undefined8 *)(param_1 + 0x4010) = 0;
    }
    *(undefined4 *)(param_1 + 0x4018) = 0;
    *(undefined8 *)(param_1 + 0x4000) = 0;
    *(undefined8 *)(param_1 + 0x4008) = 0;
    if (0x7e000000 < param_4) {
      return 0;
    }
    lVar37 = (long)param_2 - (ulong)uVar20;
    uVar40 = (ulong)param_4;
    plVar19 = (long *)((long)param_2 + (uVar40 - 0xb));
    pcVar24 = param_3 + param_5;
    *(uint *)(param_1 + 0x4018) = param_4;
    *(uint *)(param_1 + 0x4010) = param_4 + uVar20;
    *(undefined4 *)(param_1 + 0x4014) = 2;
    *(uint *)(param_1 + ((ulong)(*param_2 * -0x30e4432345000000) >> 0x34) * 4) = uVar20;
    plVar17 = (long *)((long)param_2 + 2);
    puVar32 = (ulong *)((long)param_2 + (uVar40 - 0xc));
    plVar21 = (long *)((long)param_2 + 1);
    plVar33 = param_2;
code_r0x00494913:
    lVar34 = *plVar21;
    uVar25 = uVar31;
    uVar12 = iVar30 * 0x40;
    while( true ) {
      uVar12 = uVar12 + 1;
      uVar26 = (ulong)(lVar34 * -0x30e4432345000000) >> 0x34;
      uVar36 = *(uint *)(param_1 + uVar26 * 4);
      uVar15 = (ulong)uVar36;
      iVar16 = (int)lVar37;
      uVar13 = (int)plVar21 - iVar16;
      lVar34 = *plVar17;
      *(uint *)(param_1 + uVar26 * 4) = uVar13;
      if ((uVar13 <= uVar36 + 0xffff) && (*(int *)(lVar37 + uVar15) == (int)*plVar21)) break;
      plVar38 = (long *)(uVar25 + (long)plVar17);
      uVar25 = (ulong)(uVar12 >> 6);
      plVar21 = plVar17;
      plVar17 = plVar38;
      if (plVar19 < plVar38) goto code_r0x0049684b;
    }
    plVar17 = (long *)(lVar37 + uVar15);
    plVar38 = plVar21;
    if ((uVar20 < uVar36) && (*(char *)((long)plVar21 + -1) == *(char *)((long)plVar17 + -1))) {
      plVar27 = (long *)((long)param_2 + uVar15 + ~(ulong)uVar20);
      plVar14 = (long *)((long)plVar21 + -1);
      plVar18 = (long *)((long)plVar21 + -1);
      do {
        plVar38 = plVar18;
        plVar21 = plVar14;
        plVar17 = plVar27;
        if ((plVar17 <= param_2) || (plVar21 <= plVar33)) break;
        plVar27 = (long *)((long)plVar17 + -1);
        plVar14 = (long *)((long)plVar21 + -1);
        plVar18 = (long *)((long)plVar38 + -1);
      } while (*(char *)((long)plVar21 + -1) == *(char *)((long)plVar17 + -1));
    }
    uVar25 = (long)plVar38 - (long)plVar33;
    uVar15 = uVar25 & 0xffffffff;
    if (pcVar24 < param_3 + uVar15 / 0xff + uVar15 + 9) {
      return 0;
    }
    plVar27 = (long *)(param_3 + 1);
    if ((uint)uVar25 < 0xf) {
      *param_3 = (char)uVar25 << 4;
    }
    else {
      uVar12 = (uint)uVar25 - 0xf;
      *param_3 = -0x10;
      if (0xfe < uVar12) {
        iVar23 = (int)plVar38 - (int)plVar33;
        uVar12 = iVar23 - 0x10e;
        uVar25 = (ulong)uVar12 / 0xff;
        func_0x0099bdb0(plVar27,0xff,uVar25 + 1);
        plVar27 = (long *)(param_3 + uVar25 + 2);
        uVar12 = (iVar23 + uVar12 / 0xff) - 0x10e;
      }
      *(char *)plVar27 = (char)uVar12;
      plVar27 = (long *)((long)plVar27 + 1);
    }
    plVar38 = (long *)((long)plVar27 + uVar15);
    uVar25 = 8;
    if (8 < uVar15) {
      uVar25 = uVar15;
    }
    if ((0x18 < uVar15) && (0x1f < (ulong)((long)plVar27 - (long)plVar33))) {
      uVar25 = (uVar25 - 1 >> 3) + 1;
      uVar15 = uVar25 & 0x3ffffffffffffffc;
      uVar26 = 0;
      do {
        puVar3 = (undefined4 *)((long)plVar33 + uVar26);
        uVar7 = puVar3[1];
        uVar8 = puVar3[2];
        uVar9 = puVar3[3];
        puVar4 = (undefined8 *)((long)plVar33 + uVar26 + 0x10);
        uVar10 = *puVar4;
        uVar11 = puVar4[1];
        pcVar28 = (char *)((long)plVar27 + uVar26);
        *(undefined4 *)pcVar28 = *puVar3;
        *(undefined4 *)(pcVar28 + 4) = uVar7;
        *(undefined4 *)(pcVar28 + 8) = uVar8;
        *(undefined4 *)(pcVar28 + 0xc) = uVar9;
        pcVar28 = (char *)((long)plVar27 + uVar26 + 0x10);
        *(undefined8 *)pcVar28 = uVar10;
        *(undefined8 *)(pcVar28 + 8) = uVar11;
        uVar26 = uVar26 + 0x20;
      } while ((uVar25 * 8 & 0xffffffffffffffe0) != uVar26);
      plVar33 = plVar33 + uVar15;
      plVar27 = plVar27 + uVar15;
      if (uVar25 == uVar15) goto code_r0x00494b40;
    }
    do {
      *plVar27 = *plVar33;
      plVar27 = plVar27 + 1;
      plVar33 = plVar33 + 1;
    } while (plVar27 < plVar38);
code_r0x00494b40:
    do {
      *(short *)plVar38 = (short)plVar21 - (short)plVar17;
      puVar1 = (ulong *)((long)plVar21 + 4);
      puVar39 = (ulong *)((long)plVar17 + 4);
      puVar22 = puVar1;
      if (puVar1 < puVar32) {
        if (*puVar39 == *puVar1) {
          puVar39 = (ulong *)((long)plVar17 + 0xc);
          puVar22 = (ulong *)((long)plVar21 + 0xc);
          goto code_r0x00494b74;
        }
        uVar12 = 0;
        for (uVar25 = *puVar1 ^ *puVar39; (uVar25 & 1) == 0;
            uVar25 = uVar25 >> 1 | 0x8000000000000000) {
          uVar12 = uVar12 + 1;
        }
        uVar12 = uVar12 >> 3;
      }
      else {
code_r0x00494b74:
        if (puVar22 < puVar32) {
          iVar23 = ((int)puVar22 - (int)plVar21) + -4;
code_r0x00494b90:
          if (*puVar39 == *puVar22) goto code_r0x00494ba0;
          uVar12 = 0;
          for (uVar25 = *puVar22 ^ *puVar39; (uVar25 & 1) == 0;
              uVar25 = uVar25 >> 1 | 0x8000000000000000) {
            uVar12 = uVar12 + 1;
          }
          uVar12 = (uVar12 >> 3) + iVar23;
          goto code_r0x00494c32;
        }
code_r0x00494bb0:
        if ((puVar22 < (ulong *)((long)param_2 + (uVar40 - 8))) && ((int)*puVar39 == (int)*puVar22))
        {
          puVar22 = (ulong *)((long)puVar22 + 4);
          puVar39 = (ulong *)((long)puVar39 + 4);
        }
        if ((puVar22 < (ulong *)((long)param_2 + (uVar40 - 6))) &&
           ((short)*puVar39 == (short)*puVar22)) {
          puVar22 = (ulong *)((long)puVar22 + 2);
          puVar39 = (ulong *)((long)puVar39 + 2);
        }
        if (puVar22 < (ulong *)((long)param_2 + (uVar40 - 5))) {
          puVar22 = (ulong *)((long)puVar22 + (ulong)((char)*puVar39 == (char)*puVar22));
        }
        uVar12 = (int)puVar22 - (int)puVar1;
      }
code_r0x00494c32:
      if (pcVar24 < (char *)((long)plVar38 + (ulong)(uVar12 + 0xf0) / 0xff + 8)) {
        return 0;
      }
      pcVar28 = (char *)((long)plVar38 + 2);
      if (uVar12 < 0xf) {
        *param_3 = *param_3 + (char)uVar12;
        param_3 = pcVar28;
      }
      else {
        *param_3 = *param_3 + '\x0f';
        uVar36 = uVar12 - 0xf;
        pcVar28[0] = -1;
        pcVar28[1] = -1;
        pcVar28[2] = -1;
        pcVar28[3] = -1;
        if (0x3fb < uVar36) {
          uVar25 = (ulong)(((uVar12 - 0x40b) / 0x3fc) * 4);
          func_0x0099bdb0((char *)((long)plVar38 + 6),0xff,uVar25 + 4);
          pcVar28 = (char *)((long)plVar38 + uVar25 + 6);
          uVar36 = (uVar12 - 0x40b) % 0x3fc;
        }
        uVar13 = uVar36 * 0x8081 >> 0x17;
        pcVar28[uVar13] = (char)uVar13 + (char)uVar36;
        param_3 = pcVar28 + (ulong)uVar13 + 1;
      }
      plVar33 = (long *)((long)plVar21 + (ulong)uVar12 + 4);
      if (plVar19 <= plVar33) goto code_r0x0049684b;
      lVar34 = (long)plVar21 + (ulong)uVar12;
      *(int *)(param_1 + ((ulong)(*(long *)(lVar34 + 2) * -0x30e4432345000000) >> 0x34) * 4) =
           ((int)lVar34 + 2) - iVar16;
      uVar25 = (ulong)(*(long *)(lVar34 + 4) * -0x30e4432345000000) >> 0x34;
      uVar36 = (int)plVar33 - iVar16;
      uVar12 = *(uint *)(param_1 + uVar25 * 4);
      *(uint *)(param_1 + uVar25 * 4) = uVar36;
      if ((uVar12 + 0xffff < uVar36) ||
         (plVar17 = (long *)((ulong)uVar12 + lVar37), (int)*plVar17 != (int)*plVar33))
      goto code_r0x004948f0;
      plVar38 = (long *)(param_3 + 1);
      *param_3 = '\0';
      plVar21 = plVar33;
    } while( true );
  }
  if (iVar23 == 3) {
    uVar20 = *(uint *)(param_1 + 0x4010);
    if (0xfff < (int)param_4 || 0xfffe < uVar20 + param_4) goto code_r0x004944a8;
code_r0x004944e0:
    uVar40 = (ulong)uVar20;
    *(undefined4 *)(param_1 + 0x4018) = 0;
    *(undefined8 *)(param_1 + 0x4000) = 0;
    *(undefined8 *)(param_1 + 0x4008) = 0;
    if (uVar20 == 0) goto code_r0x00494600;
    if (0x7e000000 < param_4) {
      return 0;
    }
    if (param_4 != 0) {
      uVar25 = (ulong)param_4;
      pcVar24 = param_3 + param_5;
      *(uint *)(param_1 + 0x4018) = param_4;
      *(uint *)(param_1 + 0x4010) = uVar20 + param_4;
      *(undefined4 *)(param_1 + 0x4014) = 3;
      plVar21 = param_2;
      if (param_4 < 0xd) {
code_r0x0049455a:
        uVar31 = (long)param_2 + (uVar25 - (long)plVar21);
        if (param_3 + (uVar31 + 0xf0) / 0xff + uVar31 + 1 <= pcVar24) {
          if (uVar31 < 0xf) {
            *param_3 = (char)uVar31 << 4;
          }
          else {
            uVar40 = uVar31 - 0xf;
            *param_3 = -0x10;
            pcVar24 = param_3 + 1;
            if (0xfe < uVar40) {
              uVar40 = (uVar31 - 0x10e) / 0xff;
              func_0x0099bdb0(pcVar24,0xff,uVar40 + 1);
              pcVar24 = param_3 + uVar40 + 2;
              uVar40 = (uVar31 + uVar40 * -0xff) - 0x10e;
            }
            *pcVar24 = (char)uVar40;
            param_3 = pcVar24;
          }
          func_0x0099bda0(param_3 + 1,plVar21,uVar31);
          return ((int)(param_3 + 1) + (int)uVar31) - iVar35;
        }
        return 0;
      }
      lVar37 = (long)param_2 - uVar40;
      plVar19 = (long *)((long)param_2 + (uVar25 - 0xb));
      *(short *)(param_1 + (ulong)((uint)((int)*param_2 * -0x61c8864f) >> 0x13) * 2) = (short)uVar20
      ;
      plVar33 = (long *)((long)param_2 + 2);
      plVar17 = (long *)((long)param_2 + 1);
      puVar32 = (ulong *)((long)param_2 + (uVar25 - 0xc));
code_r0x00495ed6:
      iVar16 = (int)*plVar17;
      uVar15 = uVar31;
      uVar12 = iVar30 * 0x40;
      while( true ) {
        plVar38 = plVar33;
        uVar12 = uVar12 + 1;
        uVar29 = (ulong)((uint)(iVar16 * -0x61c8864f) >> 0x13);
        uVar5 = *(ushort *)(param_1 + uVar29 * 2);
        uVar26 = (ulong)uVar5;
        sVar6 = (short)lVar37;
        iVar16 = (int)*plVar38;
        *(short *)(param_1 + uVar29 * 2) = (short)plVar17 - sVar6;
        if ((uVar20 <= uVar5) && (*(int *)(lVar37 + uVar26) == (int)*plVar17)) break;
        plVar33 = (long *)(uVar15 + (long)plVar38);
        uVar15 = (ulong)(uVar12 >> 6);
        plVar17 = plVar38;
        if (plVar19 < plVar33) goto code_r0x0049455a;
      }
      plVar38 = (long *)(lVar37 + uVar26);
      plVar33 = plVar17;
      if ((uVar40 < uVar26) && (*(char *)((long)plVar17 + -1) == *(char *)((long)plVar38 + -1))) {
        plVar27 = (long *)((long)param_2 + uVar26 + ~uVar40);
        plVar14 = (long *)((long)plVar17 + -1);
        plStack_60 = (long *)((long)plVar17 + -1);
        do {
          plVar17 = plVar14;
          plVar38 = plVar27;
          plVar33 = plStack_60;
          if ((plVar38 <= param_2) || (plStack_60 <= plVar21)) break;
          pcVar28 = (char *)((long)plStack_60 + -1);
          plVar27 = (long *)((long)plVar38 + -1);
          plVar14 = (long *)((long)plVar17 + -1);
          plStack_60 = (long *)((long)plStack_60 + -1);
        } while (*pcVar28 == *(char *)((long)plVar38 + -1));
      }
      uVar15 = (long)plVar17 - (long)plVar21;
      uVar26 = uVar15 & 0xffffffff;
      if (pcVar24 < param_3 + uVar26 / 0xff + uVar26 + 9) {
        return 0;
      }
      plVar27 = (long *)(param_3 + 1);
      if ((uint)uVar15 < 0xf) {
        *param_3 = (char)uVar15 << 4;
      }
      else {
        uVar12 = (uint)uVar15 - 0xf;
        *param_3 = -0x10;
        if (0xfe < uVar12) {
          iVar16 = (int)plVar17 - (int)plVar21;
          uVar12 = iVar16 - 0x10e;
          uVar15 = (ulong)uVar12 / 0xff;
          func_0x0099bdb0(plVar27,0xff,uVar15 + 1);
          plVar27 = (long *)(param_3 + uVar15 + 2);
          uVar12 = (iVar16 + uVar12 / 0xff) - 0x10e;
        }
        *(char *)plVar27 = (char)uVar12;
        plVar27 = (long *)((long)plVar27 + 1);
      }
      plVar17 = (long *)((long)plVar27 + uVar26);
      uVar15 = 8;
      if (8 < uVar26) {
        uVar15 = uVar26;
      }
      if ((0x18 < uVar26) && (0x1f < (ulong)((long)plVar27 - (long)plVar21))) {
        uVar15 = (uVar15 - 1 >> 3) + 1;
        uVar26 = uVar15 & 0x3ffffffffffffffc;
        uVar29 = 0;
        do {
          puVar3 = (undefined4 *)((long)plVar21 + uVar29);
          uVar7 = puVar3[1];
          uVar8 = puVar3[2];
          uVar9 = puVar3[3];
          puVar4 = (undefined8 *)((long)plVar21 + uVar29 + 0x10);
          uVar10 = *puVar4;
          uVar11 = puVar4[1];
          pcVar28 = (char *)((long)plVar27 + uVar29);
          *(undefined4 *)pcVar28 = *puVar3;
          *(undefined4 *)(pcVar28 + 4) = uVar7;
          *(undefined4 *)(pcVar28 + 8) = uVar8;
          *(undefined4 *)(pcVar28 + 0xc) = uVar9;
          pcVar28 = (char *)((long)plVar27 + uVar29 + 0x10);
          *(undefined8 *)pcVar28 = uVar10;
          *(undefined8 *)(pcVar28 + 8) = uVar11;
          uVar29 = uVar29 + 0x20;
        } while ((uVar15 * 8 & 0xffffffffffffffe0) != uVar29);
        plVar21 = plVar21 + uVar26;
        plVar27 = plVar27 + uVar26;
        if (uVar15 == uVar26) goto code_r0x004960f0;
      }
      do {
        *plVar27 = *plVar21;
        plVar27 = plVar27 + 1;
        plVar21 = plVar21 + 1;
      } while (plVar27 < plVar17);
code_r0x004960f0:
      do {
        *(short *)plVar17 = (short)plVar33 - (short)plVar38;
        puVar1 = (ulong *)((long)plVar33 + 4);
        puVar39 = (ulong *)((long)plVar38 + 4);
        puVar22 = puVar1;
        if (puVar1 < puVar32) {
          if (*puVar39 == *puVar1) {
            puVar39 = (ulong *)((long)plVar38 + 0xc);
            puVar22 = (ulong *)((long)plVar33 + 0xc);
            goto joined_r0x004962d2;
          }
          uVar12 = 0;
          for (uVar15 = *puVar1 ^ *puVar39; (uVar15 & 1) == 0;
              uVar15 = uVar15 >> 1 | 0x8000000000000000) {
            uVar12 = uVar12 + 1;
          }
          uVar12 = uVar12 >> 3;
        }
        else {
joined_r0x004962d2:
          if (puVar22 < puVar32) {
            iVar16 = ((int)puVar22 - (int)plVar33) + -4;
code_r0x00496140:
            if (*puVar39 == *puVar22) goto code_r0x0049614b;
            uVar12 = 0;
            for (uVar15 = *puVar22 ^ *puVar39; (uVar15 & 1) == 0;
                uVar15 = uVar15 >> 1 | 0x8000000000000000) {
              uVar12 = uVar12 + 1;
            }
            uVar12 = (uVar12 >> 3) + iVar16;
            goto code_r0x00496186;
          }
code_r0x004962dc:
          if ((puVar22 < (ulong *)((long)param_2 + (uVar25 - 8))) &&
             ((int)*puVar39 == (int)*puVar22)) {
            puVar22 = (ulong *)((long)puVar22 + 4);
            puVar39 = (ulong *)((long)puVar39 + 4);
          }
          if ((puVar22 < (ulong *)((long)param_2 + (uVar25 - 6))) &&
             ((short)*puVar39 == (short)*puVar22)) {
            puVar22 = (ulong *)((long)puVar22 + 2);
            puVar39 = (ulong *)((long)puVar39 + 2);
          }
          if (puVar22 < (ulong *)((long)param_2 + (uVar25 - 5))) {
            puVar22 = (ulong *)((long)puVar22 + (ulong)((char)*puVar39 == (char)*puVar22));
          }
          uVar12 = (int)puVar22 - (int)puVar1;
        }
code_r0x00496186:
        if (pcVar24 < (char *)((long)plVar17 + (ulong)(uVar12 + 0xf0) / 0xff + 8)) {
          return 0;
        }
        pcVar28 = (char *)((long)plVar17 + 2);
        if (uVar12 < 0xf) {
          *param_3 = *param_3 + (char)uVar12;
          param_3 = pcVar28;
        }
        else {
          *param_3 = *param_3 + '\x0f';
          uVar36 = uVar12 - 0xf;
          pcVar28[0] = -1;
          pcVar28[1] = -1;
          pcVar28[2] = -1;
          pcVar28[3] = -1;
          if (0x3fb < uVar36) {
            uVar15 = (ulong)(((uVar12 - 0x40b) / 0x3fc) * 4);
            func_0x0099bdb0((char *)((long)plVar17 + 6),0xff,uVar15 + 4);
            pcVar28 = (char *)((long)plVar17 + uVar15 + 6);
            uVar36 = (uVar12 - 0x40b) % 0x3fc;
          }
          uVar13 = uVar36 * 0x8081 >> 0x17;
          pcVar28[uVar13] = (char)uVar13 + (char)uVar36;
          param_3 = pcVar28 + (ulong)uVar13 + 1;
        }
        plVar21 = (long *)((long)plVar33 + (ulong)uVar12 + 4);
        if (plVar19 <= plVar21) goto code_r0x0049455a;
        lVar34 = (long)plVar33 + (ulong)uVar12;
        *(short *)(param_1 + (ulong)((uint)(*(int *)(lVar34 + 2) * -0x61c8864f) >> 0x13) * 2) =
             ((short)lVar34 + 2) - sVar6;
        uVar15 = (ulong)((uint)(*(int *)(lVar34 + 4) * -0x61c8864f) >> 0x13);
        uVar5 = *(ushort *)(param_1 + uVar15 * 2);
        *(short *)(param_1 + uVar15 * 2) = (short)plVar21 - sVar6;
        if ((uVar5 < uVar20) ||
           (plVar38 = (long *)((ulong)uVar5 + lVar37), (int)*plVar38 != (int)*plVar21))
        goto code_r0x00495ec1;
        plVar17 = (long *)(param_3 + 1);
        *param_3 = '\0';
        plVar33 = plVar21;
      } while( true );
    }
  }
  else {
    if (iVar23 == 0) {
      uVar20 = *(uint *)(param_1 + 0x4010);
      goto code_r0x004944e0;
    }
code_r0x004944a8:
    func_0x0099bdb0(param_1,0,0x4000);
    *(undefined8 *)(param_1 + 0x4000) = 0;
    *(undefined8 *)(param_1 + 0x4008) = 0;
    *(undefined8 *)(param_1 + 0x400c) = 0;
    *(undefined8 *)(param_1 + 0x4014) = 0;
code_r0x00494600:
    if (0x7e000000 < param_4) {
      return 0;
    }
    if (param_4 != 0) {
      uVar31 = (ulong)param_4;
      pcVar24 = param_3 + param_5;
      *(uint *)(param_1 + 0x4018) = param_4;
      *(uint *)(param_1 + 0x4010) = param_4;
      *(undefined4 *)(param_1 + 0x4014) = 3;
      pcStack_40 = param_3;
      plVar21 = param_2;
      if (param_4 < 0xd) {
code_r0x00495d79:
        uVar31 = (long)param_2 + (uVar31 - (long)plVar21);
        if (pcStack_40 + (uVar31 + 0xf0) / 0xff + uVar31 + 1 <= pcVar24) {
          if (uVar31 < 0xf) {
            *pcStack_40 = (char)uVar31 << 4;
          }
          else {
            uVar40 = uVar31 - 0xf;
            *pcStack_40 = -0x10;
            pcVar24 = pcStack_40 + 1;
            if (0xfe < uVar40) {
              uVar40 = (uVar31 - 0x10e) / 0xff;
              func_0x0099bdb0(pcVar24,0xff,uVar40 + 1);
              pcVar24 = pcStack_40 + uVar40 + 2;
              uVar40 = (uVar31 + uVar40 * -0xff) - 0x10e;
            }
            *pcVar24 = (char)uVar40;
            pcStack_40 = pcVar24;
          }
          func_0x0099bda0(pcStack_40 + 1,plVar21,uVar31);
          return ((int)(pcStack_40 + 1) + (int)uVar31) - iVar35;
        }
        return 0;
      }
      plVar33 = (long *)((long)param_2 + (uVar31 - 0xb));
      *(undefined2 *)(param_1 + (ulong)((uint)((int)*param_2 * -0x61c8864f) >> 0x13) * 2) = 0;
      puVar32 = (ulong *)((long)param_2 + (uVar31 - 0xc));
code_r0x00495421:
      iVar16 = *(int *)((long)plVar21 + 1);
      uVar40 = 1;
      plVar17 = (long *)((long)plVar21 + 1);
      uVar20 = iVar30 << 6;
      do {
        plVar19 = plVar17;
        plVar17 = (long *)(uVar40 + (long)plVar19);
        if (plVar33 < plVar17) goto code_r0x00495d79;
        uVar40 = (ulong)(uVar20 >> 6);
        uVar20 = uVar20 + 1;
        uVar15 = (ulong)((uint)(iVar16 * -0x61c8864f) >> 0x13);
        uVar25 = (ulong)*(ushort *)(param_1 + uVar15 * 2);
        iVar16 = (int)*plVar17;
        *(short *)(param_1 + uVar15 * 2) = (short)plVar19 - sVar6;
      } while (*(int *)((long)param_2 + uVar25) != (int)*plVar19);
      plVar17 = (long *)((long)param_2 + uVar25);
      plVar38 = plVar19;
      if ((uVar25 != 0) && (*(char *)((long)plVar19 + -1) == *(char *)((long)plVar17 + -1))) {
        plVar27 = (long *)((long)param_2 + (uVar25 - 1));
        plVar14 = (long *)((long)plVar19 + -1);
        plVar18 = (long *)((long)plVar19 + -1);
        do {
          plVar38 = plVar18;
          plVar19 = plVar14;
          plVar17 = plVar27;
          if ((plVar17 <= param_2) || (plVar19 <= plVar21)) break;
          plVar27 = (long *)((long)plVar17 + -1);
          plVar14 = (long *)((long)plVar19 + -1);
          plVar18 = (long *)((long)plVar38 + -1);
        } while (*(char *)((long)plVar19 + -1) == *(char *)((long)plVar17 + -1));
      }
      uVar40 = (long)plVar38 - (long)plVar21;
      uVar25 = uVar40 & 0xffffffff;
      if (pcVar24 < pcStack_40 + uVar25 / 0xff + uVar25 + 9) {
        return 0;
      }
      plVar27 = (long *)(pcStack_40 + 1);
      if ((uint)uVar40 < 0xf) {
        *pcStack_40 = (char)uVar40 << 4;
      }
      else {
        uVar20 = (uint)uVar40 - 0xf;
        *pcStack_40 = -0x10;
        if (0xfe < uVar20) {
          iVar16 = (int)plVar38 - (int)plVar21;
          uVar20 = iVar16 - 0x10e;
          uVar40 = (ulong)uVar20 / 0xff;
          func_0x0099bdb0(plVar27,0xff,uVar40 + 1);
          plVar27 = (long *)(pcStack_40 + uVar40 + 2);
          uVar20 = (iVar16 + uVar20 / 0xff) - 0x10e;
        }
        *(char *)plVar27 = (char)uVar20;
        plVar27 = (long *)((long)plVar27 + 1);
      }
      plVar38 = (long *)((long)plVar27 + uVar25);
      uVar40 = 8;
      if (8 < uVar25) {
        uVar40 = uVar25;
      }
      plVar14 = plVar21;
      plVar18 = plVar27;
      pcVar28 = pcStack_40;
      if ((0x18 < uVar25) && (0x1f < (ulong)((long)plVar27 - (long)plVar21))) {
        uVar40 = (uVar40 - 1 >> 3) + 1;
        uVar25 = uVar40 & 0xfffffffffffffffc;
        plVar14 = plVar21 + uVar25;
        plVar18 = plVar27 + uVar25;
        uVar15 = 0;
        do {
          puVar3 = (undefined4 *)((long)plVar21 + uVar15);
          uVar7 = puVar3[1];
          uVar8 = puVar3[2];
          uVar9 = puVar3[3];
          puVar4 = (undefined8 *)((long)plVar21 + uVar15 + 0x10);
          uVar10 = *puVar4;
          uVar11 = puVar4[1];
          pcVar2 = (char *)((long)plVar27 + uVar15);
          *(undefined4 *)pcVar2 = *puVar3;
          *(undefined4 *)(pcVar2 + 4) = uVar7;
          *(undefined4 *)(pcVar2 + 8) = uVar8;
          *(undefined4 *)(pcVar2 + 0xc) = uVar9;
          pcVar2 = (char *)((long)plVar27 + uVar15 + 0x10);
          *(undefined8 *)pcVar2 = uVar10;
          *(undefined8 *)(pcVar2 + 8) = uVar11;
          uVar15 = uVar15 + 0x20;
        } while ((uVar40 * 8 & 0xffffffffffffffe0) != uVar15);
        if (uVar40 == uVar25) goto code_r0x00495610;
      }
      do {
        *plVar18 = *plVar14;
        plVar18 = plVar18 + 1;
        plVar14 = plVar14 + 1;
      } while (plVar18 < plVar38);
code_r0x00495610:
      do {
        *(short *)plVar38 = (short)plVar19 - (short)plVar17;
        puVar1 = (ulong *)((long)plVar19 + 4);
        puVar39 = (ulong *)((long)plVar17 + 4);
        puVar22 = puVar1;
        if (puVar1 < puVar32) {
          if (*puVar39 == *puVar1) {
            puVar39 = (ulong *)((long)plVar17 + 0xc);
            puVar22 = (ulong *)((long)plVar19 + 0xc);
            goto code_r0x00495645;
          }
          uVar20 = 0;
          for (uVar40 = *puVar1 ^ *puVar39; (uVar40 & 1) == 0;
              uVar40 = uVar40 >> 1 | 0x8000000000000000) {
            uVar20 = uVar20 + 1;
          }
          uVar20 = uVar20 >> 3;
        }
        else {
code_r0x00495645:
          if (puVar22 < puVar32) {
            iVar16 = ((int)puVar22 - (int)plVar19) + -4;
code_r0x00495660:
            if (*puVar39 == *puVar22) goto code_r0x0049566c;
            uVar20 = 0;
            for (uVar40 = *puVar22 ^ *puVar39; (uVar40 & 1) == 0;
                uVar40 = uVar40 >> 1 | 0x8000000000000000) {
              uVar20 = uVar20 + 1;
            }
            uVar20 = (uVar20 >> 3) + iVar16;
            goto code_r0x004956f2;
          }
code_r0x0049567c:
          if ((puVar22 < (ulong *)((long)param_2 + (uVar31 - 8))) &&
             ((int)*puVar39 == (int)*puVar22)) {
            puVar22 = (ulong *)((long)puVar22 + 4);
            puVar39 = (ulong *)((long)puVar39 + 4);
          }
          if ((puVar22 < (ulong *)((long)param_2 + (uVar31 - 6))) &&
             ((short)*puVar39 == (short)*puVar22)) {
            puVar22 = (ulong *)((long)puVar22 + 2);
            puVar39 = (ulong *)((long)puVar39 + 2);
          }
          if (puVar22 < (ulong *)((long)param_2 + (uVar31 - 5))) {
            puVar22 = (ulong *)((long)puVar22 + (ulong)((char)*puVar39 == (char)*puVar22));
          }
          uVar20 = (int)puVar22 - (int)puVar1;
        }
code_r0x004956f2:
        if (pcVar24 < (char *)((long)plVar38 + (ulong)(uVar20 + 0xf0) / 0xff + 8)) {
          return 0;
        }
        pcStack_40 = (char *)((long)plVar38 + 2);
        if (uVar20 < 0xf) {
          *pcVar28 = *pcVar28 + (char)uVar20;
        }
        else {
          *pcVar28 = *pcVar28 + '\x0f';
          uVar12 = uVar20 - 0xf;
          pcStack_40[0] = -1;
          pcStack_40[1] = -1;
          pcStack_40[2] = -1;
          pcStack_40[3] = -1;
          if (0x3fb < uVar12) {
            uVar40 = (ulong)(((uVar20 - 0x40b) / 0x3fc) * 4);
            func_0x0099bdb0((char *)((long)plVar38 + 6),0xff,uVar40 + 4);
            pcStack_40 = (char *)((long)plVar38 + uVar40 + 6);
            uVar12 = (uVar20 - 0x40b) % 0x3fc;
          }
          uVar36 = uVar12 * 0x8081 >> 0x17;
          pcStack_40[uVar36] = (char)uVar36 + (char)uVar12;
          pcStack_40 = pcStack_40 + (ulong)uVar36 + 1;
        }
        plVar21 = (long *)((long)plVar19 + (ulong)uVar20 + 4);
        if (plVar33 <= plVar21) goto code_r0x00495d79;
        lVar37 = (long)plVar19 + (ulong)uVar20;
        *(short *)(param_1 + (ulong)((uint)(*(int *)(lVar37 + 2) * -0x61c8864f) >> 0x13) * 2) =
             ((short)lVar37 + 2) - sVar6;
        uVar40 = (ulong)((uint)(*(int *)(lVar37 + 4) * -0x61c8864f) >> 0x13);
        uVar25 = (ulong)*(ushort *)(param_1 + uVar40 * 2);
        plVar17 = (long *)((long)param_2 + uVar25);
        *(short *)(param_1 + uVar40 * 2) = (short)plVar21 - sVar6;
        if (*(int *)((long)param_2 + uVar25) != *(int *)(lVar37 + 4)) goto code_r0x00495421;
        plVar38 = (long *)(pcStack_40 + 1);
        *pcStack_40 = '\0';
        pcVar28 = pcStack_40;
        plVar19 = plVar21;
      } while( true );
    }
  }
  if (param_5 < 1) {
    return 0;
  }
code_r0x004947e4:
  *param_3 = '\0';
  return 1;
code_r0x0049510f:
  puVar22 = puVar22 + 1;
  puVar39 = puVar39 + 1;
  if (puVar32 <= puVar22) goto code_r0x0049511c;
  goto code_r0x00495100;
code_r0x00494ed0:
  plVar33 = (long *)((long)plVar21 + 2);
  if (plVar17 < plVar33) goto code_r0x0049531c;
  goto code_r0x00494ee5;
code_r0x0049531c:
  uVar31 = (long)param_2 + (uVar40 - (long)plVar21);
  if (uVar31 < 0xf) {
    *param_3 = (char)uVar31 << 4;
  }
  else {
    uVar40 = uVar31 - 0xf;
    *param_3 = -0x10;
    pcVar24 = param_3 + 1;
    if (0xfe < uVar40) {
      uVar40 = (uVar31 - 0x10e) / 0xff;
      func_0x0099bdb0(pcVar24,0xff,uVar40 + 1);
      pcVar24 = param_3 + uVar40 + 2;
      uVar40 = (uVar40 * -0xff + uVar31) - 0x10e;
    }
    *pcVar24 = (char)uVar40;
    param_3 = pcVar24;
  }
  goto code_r0x004953a6;
code_r0x00496654:
  puVar39 = puVar39 + 1;
  puVar22 = puVar22 + 1;
  goto code_r0x00496640;
code_r0x00496418:
  plVar33 = (long *)((long)plVar21 + 2);
  plVar17 = plVar21;
  if (plVar19 < plVar33) goto code_r0x00494716;
  goto code_r0x0049642d;
code_r0x00495adc:
  puVar22 = puVar22 + 1;
  puVar39 = puVar39 + 1;
  if (puVar32 <= puVar22) goto code_r0x00495c2d;
  goto code_r0x00495ad0;
code_r0x00494ba0:
  puVar22 = puVar22 + 1;
  puVar39 = puVar39 + 1;
  iVar23 = iVar23 + 8;
  if (puVar32 <= puVar22) goto code_r0x00494bb0;
  goto code_r0x00494b90;
code_r0x004948f0:
  plVar21 = (long *)(lVar34 + 5);
  plVar17 = (long *)(lVar34 + 6);
  if (plVar19 < plVar17) {
code_r0x0049684b:
    uVar31 = (long)param_2 + (uVar40 - (long)plVar33);
    if (pcVar24 < param_3 + (uVar31 + 0xf0) / 0xff + uVar31 + 1) {
      return 0;
    }
    if (uVar31 < 0xf) {
      *param_3 = (char)uVar31 << 4;
    }
    else {
      uVar40 = uVar31 - 0xf;
      *param_3 = -0x10;
      pcVar24 = param_3 + 1;
      if (0xfe < uVar40) {
        uVar40 = (uVar31 - 0x10e) / 0xff;
        func_0x0099bdb0(pcVar24,0xff,uVar40 + 1);
        pcVar24 = param_3 + uVar40 + 2;
        uVar40 = (uVar31 + uVar40 * -0xff) - 0x10e;
      }
      *pcVar24 = (char)uVar40;
      param_3 = pcVar24;
    }
    func_0x0099bda0(param_3 + 1,plVar33,uVar31);
    return ((int)(param_3 + 1) + (int)uVar31) - iVar35;
  }
  goto code_r0x00494913;
code_r0x0049566c:
  puVar22 = puVar22 + 1;
  puVar39 = puVar39 + 1;
  iVar16 = iVar16 + 8;
  if (puVar32 <= puVar22) goto code_r0x0049567c;
  goto code_r0x00495660;
code_r0x0049614b:
  puVar22 = puVar22 + 1;
  puVar39 = puVar39 + 1;
  iVar16 = iVar16 + 8;
  if (puVar32 <= puVar22) goto code_r0x004962dc;
  goto code_r0x00496140;
code_r0x00495ec1:
  plVar17 = (long *)(lVar34 + 5);
  plVar33 = (long *)(lVar34 + 6);
  if (plVar19 < plVar33) goto code_r0x0049455a;
  goto code_r0x00495ed6;
}


