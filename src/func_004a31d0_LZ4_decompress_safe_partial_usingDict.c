// Function: LZ4_decompress_safe_partial_usingDict
// Address: 004a31d0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Type propagation algorithm not settling */

ulong LZ4_decompress_safe_partial_usingDict
                (uint *param_1,uint *param_2,int param_3,uint param_4,uint param_5,long param_6,
                int param_7)

{
  uint *puVar1;
  byte *pbVar2;
  uint *puVar3;
  undefined8 *puVar4;
  byte bVar5;
  ushort uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  uint *puVar15;
  byte *pbVar16;
  uint *puVar17;
  uint *puVar18;
  uint *puVar19;
  byte *pbVar20;
  long lVar21;
  byte *pbVar22;
  uint uVar23;
  uint *puVar24;
  byte *pbVar25;
  uint *puVar26;
  byte *pbVar27;
  ulong uVar28;
  int iVar29;
  uint uVar30;
  ulong uVar31;
  ulong uVar32;
  int iVar33;
  uint *puVar34;
  long lVar35;
  ulong uVar36;
  uint uVar37;
  uint *puVar38;
  ushort *puVar39;
  int iStack_60;
  
  iVar33 = (int)param_2;
  iStack_60 = (int)param_1;
  if (param_7 == 0) {
    if ((int)param_4 < (int)param_5) {
      param_5 = param_4;
    }
    uVar30 = 0xffffffff;
    if (-1 < (int)param_5 && param_1 != (uint *)0x0) {
      if (param_5 == 0) {
        uVar30 = 0;
      }
      else if (param_3 != 0) {
        pbVar2 = (byte *)((long)param_1 + (long)param_3);
        puVar34 = (uint *)((long)param_2 + (ulong)param_5);
        puVar1 = (uint *)((long)param_1 + (long)param_3 + -0x10);
        puVar18 = (uint *)((long)param_2 + ((ulong)param_5 - 0x20));
        puVar15 = param_2;
        if (param_5 < 0x40) goto code_r0x0049dffa;
        puVar19 = (uint *)(pbVar2 + -0xf);
code_r0x0049d7c6:
        while( true ) {
          puVar17 = (uint *)((long)param_1 + 1);
          bVar5 = (byte)*param_1;
          uVar30 = (uint)bVar5;
          uVar14 = (ulong)(uint)(bVar5 >> 4);
          if (bVar5 >> 4 == 0xf) {
            puVar38 = puVar17;
            if ((puVar19 <= puVar17) || (puVar38 = (uint *)((long)param_1 + 2), puVar19 < puVar38))
            goto code_r0x0049e147;
            uVar14 = (ulong)*(byte *)puVar17;
            if (uVar14 == 0xff) {
              uVar14 = 0xff;
              puVar17 = puVar38;
              do {
                puVar38 = (uint *)((long)puVar17 + 1);
                if (puVar19 < puVar38) goto code_r0x0049e147;
                uVar23 = *puVar17;
                uVar14 = uVar14 + (byte)uVar23;
                puVar17 = puVar38;
              } while ((ulong)(byte)uVar23 == 0xff);
              if (uVar14 == 0xffffffffffffffff) goto code_r0x0049e147;
            }
            uVar14 = uVar14 + 0xf;
            puVar39 = (ushort *)((long)puVar38 + uVar14);
            puVar26 = (uint *)((long)puVar15 + uVar14);
            if ((CARRY8((ulong)puVar15,uVar14)) || (CARRY8((ulong)puVar38,uVar14)))
            goto code_r0x0049e147;
            puVar17 = puVar38;
            if (puVar18 < puVar26) goto code_r0x0049dcc1;
            if (pbVar2 + -0x20 < puVar39) goto code_r0x0049dcc1;
            lVar35 = 0;
            do {
              uVar10 = *(undefined8 *)((byte *)((long)puVar38 + lVar35) + 8);
              *(undefined8 *)((long)puVar15 + lVar35) = *(undefined8 *)((long)puVar38 + lVar35);
              *(undefined8 *)((byte *)((long)puVar15 + lVar35) + 8) = uVar10;
              pbVar22 = (byte *)((long)puVar38 + lVar35 + 0x10);
              uVar7 = *(undefined4 *)(pbVar22 + 4);
              uVar8 = *(undefined4 *)(pbVar22 + 8);
              uVar9 = *(undefined4 *)(pbVar22 + 0xc);
              pbVar16 = (byte *)((long)puVar15 + lVar35 + 0x10);
              *(undefined4 *)pbVar16 = *(undefined4 *)pbVar22;
              *(undefined4 *)(pbVar16 + 4) = uVar7;
              *(undefined4 *)(pbVar16 + 8) = uVar8;
              *(undefined4 *)(pbVar16 + 0xc) = uVar9;
              lVar21 = lVar35 + 0x20;
              lVar35 = lVar35 + 0x20;
            } while ((uint *)((long)puVar15 + lVar21) < puVar26);
          }
          else {
            if (pbVar2 + -0x11 < puVar17) goto code_r0x0049dcc1;
            uVar30 = *(uint *)((long)param_1 + 5);
            uVar23 = *(uint *)((long)param_1 + 9);
            uVar37 = *(uint *)((long)param_1 + 0xd);
            *puVar15 = *puVar17;
            puVar15[1] = uVar30;
            puVar15[2] = uVar23;
            puVar15[3] = uVar37;
            puVar39 = (ushort *)((long)puVar17 + uVar14);
            puVar26 = (uint *)((long)puVar15 + uVar14);
          }
          uVar6 = *puVar39;
          uVar32 = (ulong)uVar6;
          param_1 = (uint *)(puVar39 + 1);
          puVar24 = (uint *)((long)puVar26 - uVar32);
          uVar36 = (ulong)(bVar5 & 0xf);
          if (uVar36 == 0xf) break;
          puVar15 = (uint *)((long)puVar26 + uVar36 + 4);
          uVar36 = uVar36 + 4;
          if (puVar34 + -0x10 <= puVar15) goto code_r0x0049de44;
          if ((puVar24 < param_2) || (uVar6 < 8)) goto code_r0x0049d920;
          *(undefined8 *)puVar26 = *(undefined8 *)puVar24;
          *(undefined8 *)(puVar26 + 2) = *(undefined8 *)(puVar24 + 2);
          *(short *)(puVar26 + 4) = (short)puVar24[4];
        }
        puVar38 = (uint *)((long)puVar39 + 3);
        if (pbVar2 + -4 < puVar38) goto code_r0x0049e147;
        uVar36 = (ulong)(byte)*param_1;
        if (uVar36 == 0xff) {
          uVar36 = 0xff;
          puVar15 = puVar38;
          do {
            puVar38 = (uint *)((long)puVar15 + 1);
            if (pbVar2 + -4 < puVar38) goto code_r0x0049e147;
            uVar30 = *puVar15;
            uVar36 = uVar36 + (byte)uVar30;
            puVar15 = puVar38;
          } while ((ulong)(byte)uVar30 == 0xff);
          if (uVar36 == 0xffffffffffffffff) goto code_r0x0049e147;
        }
        uVar36 = uVar36 + 0x13;
        if (CARRY8((ulong)puVar26,uVar36)) goto code_r0x0049e147;
        param_1 = puVar38;
        if ((uint *)((long)puVar26 + uVar36) < puVar34 + -0x10) {
code_r0x0049d920:
          puVar38 = param_1;
          if (puVar24 < param_2) goto code_r0x0049e147;
          puVar15 = (uint *)((long)puVar26 + uVar36);
          if (0xf < uVar6) {
            do {
              puVar4 = (undefined8 *)((long)puVar26 + -uVar32);
              uVar10 = puVar4[1];
              *(undefined8 *)puVar26 = *puVar4;
              *(undefined8 *)(puVar26 + 2) = uVar10;
              pbVar22 = (byte *)((long)puVar26 + -uVar32 + 0x10);
              uVar10 = *(undefined8 *)(pbVar22 + 8);
              *(undefined8 *)(puVar26 + 4) = *(undefined8 *)pbVar22;
              *(undefined8 *)(puVar26 + 6) = uVar10;
              puVar26 = puVar26 + 8;
            } while (puVar26 < puVar15);
            goto code_r0x0049d7c6;
          }
          if (uVar32 == 4) {
            uVar30 = *puVar24;
            uVar37 = uVar30 >> 0x10;
            uVar23 = uVar30;
          }
          else {
            if (uVar6 == 2) {
              uVar6 = (ushort)*puVar24;
              uVar23 = CONCAT22(uVar6,uVar6);
            }
            else {
              if (uVar6 != 1) {
                if (uVar6 < 8) {
                  *puVar26 = 0;
                  *(byte *)puVar26 = (byte)*puVar24;
                  *(byte *)((long)puVar26 + 1) = *(byte *)((long)puVar24 + 1);
                  *(byte *)((long)puVar26 + 2) = *(byte *)((long)puVar24 + 2);
                  *(byte *)((long)puVar26 + 3) = *(byte *)((long)puVar24 + 3);
                  uVar30 = *(uint *)(&UNK_001fe790 + (ulong)uVar6 * 4);
                  puVar26[1] = *(uint *)((long)puVar24 + (ulong)uVar30);
                  puVar24 = (uint *)((long)puVar24 +
                                    ((ulong)uVar30 -
                                    (long)*(int *)(&UNK_001fe630 + (ulong)uVar6 * 4)));
                }
                else {
                  *(undefined8 *)puVar26 = *(undefined8 *)puVar24;
                  puVar24 = puVar24 + 2;
                }
                puVar17 = (uint *)(uVar36 + (long)puVar26);
                if ((uint *)(uVar36 + (long)puVar26) <= puVar26 + 4) {
                  puVar17 = puVar26 + 4;
                }
                puVar38 = puVar26 + 2;
                pbVar22 = (byte *)((long)puVar17 + (-9 - (long)puVar26));
                if (((byte *)0x17 < pbVar22) &&
                   ((byte *)0x1f < (byte *)((long)puVar26 + (8 - (long)puVar24)))) {
                  uVar14 = ((ulong)pbVar22 >> 3) + 1;
                  uVar36 = uVar14 & 0x3ffffffffffffffc;
                  puVar38 = puVar38 + uVar36 * 2;
                  uVar32 = 0;
                  do {
                    puVar17 = puVar24 + uVar32 * 2;
                    uVar30 = puVar17[1];
                    uVar23 = puVar17[2];
                    uVar37 = puVar17[3];
                    uVar10 = *(undefined8 *)(puVar24 + uVar32 * 2 + 4);
                    uVar11 = *(undefined8 *)(puVar24 + uVar32 * 2 + 4 + 2);
                    puVar3 = puVar26 + uVar32 * 2 + 2;
                    *puVar3 = *puVar17;
                    puVar3[1] = uVar30;
                    puVar3[2] = uVar23;
                    puVar3[3] = uVar37;
                    *(undefined8 *)(puVar26 + uVar32 * 2 + 6) = uVar10;
                    *(undefined8 *)(puVar26 + uVar32 * 2 + 6 + 2) = uVar11;
                    uVar32 = uVar32 + 4;
                  } while (uVar36 != uVar32);
                  puVar24 = puVar24 + uVar36 * 2;
                  if (uVar14 == uVar36) goto code_r0x0049d7c6;
                }
                do {
                  *(undefined8 *)puVar38 = *(undefined8 *)puVar24;
                  puVar38 = puVar38 + 2;
                  puVar24 = puVar24 + 2;
                } while (puVar38 < puVar15);
                goto code_r0x0049d7c6;
              }
              bVar5 = (byte)*puVar24;
              uVar6 = CONCAT11(bVar5,bVar5);
              uVar23 = (uint)bVar5 * 0x1010101;
            }
            uVar30 = (uint)uVar6;
            uVar37 = uVar30;
          }
          uVar30 = uVar30 & 0xffff | uVar37 << 0x10;
          *(ulong *)puVar26 = CONCAT44(uVar23,uVar30);
          if (8 < uVar36) {
            puVar17 = (uint *)(uVar36 + (long)puVar26);
            if ((uint *)(uVar36 + (long)puVar26) <= puVar26 + 4) {
              puVar17 = puVar26 + 4;
            }
            puVar38 = puVar26 + 2;
            pbVar22 = (byte *)((long)puVar17 + (-9 - (long)puVar26));
            if ((byte *)0x17 < pbVar22) {
              uVar14 = ((ulong)pbVar22 >> 3) + 1;
              uVar32 = uVar14 & 0x3ffffffffffffffc;
              puVar38 = puVar38 + uVar32 * 2;
              uVar36 = 0;
              do {
                puVar17 = puVar26 + uVar36 * 2 + 2;
                *puVar17 = uVar30;
                puVar17[1] = uVar23;
                puVar17[2] = uVar30;
                puVar17[3] = uVar23;
                puVar17 = puVar26 + uVar36 * 2 + 6;
                *puVar17 = uVar30;
                puVar17[1] = uVar23;
                puVar17[2] = uVar30;
                puVar17[3] = uVar23;
                uVar36 = uVar36 + 4;
              } while (uVar32 != uVar36);
              if (uVar14 == uVar32) goto code_r0x0049d7c6;
            }
            do {
              *(ulong *)puVar38 = CONCAT44(uVar23,uVar30);
              puVar38 = puVar38 + 2;
            } while (puVar38 < puVar15);
          }
          goto code_r0x0049d7c6;
        }
code_r0x0049de44:
        do {
          puVar38 = param_1;
          if (puVar24 < param_2) goto code_r0x0049e147;
          puVar15 = (uint *)((long)puVar26 + uVar36);
          if (puVar34 + -3 < puVar15) {
            uVar14 = (long)puVar34 - (long)puVar26;
            if (uVar36 < (ulong)((long)puVar34 - (long)puVar26)) {
              uVar14 = uVar36;
            }
            puVar15 = (uint *)((long)puVar26 + uVar14);
            if (puVar26 < (uint *)((long)puVar24 + uVar14)) {
              if (uVar14 != 0) {
                pbVar22 = (byte *)(uVar14 + (long)puVar26);
                if ((byte *)(uVar14 + (long)puVar26) <= (byte *)((long)puVar26 + 1U)) {
                  pbVar22 = (byte *)((long)puVar26 + 1U);
                }
                uVar14 = (long)pbVar22 - (long)puVar26;
                puVar19 = puVar26;
                puVar17 = puVar24;
                if ((3 < uVar14) && (0x1f < (ulong)((long)puVar26 - (long)puVar24))) {
                  uVar36 = 0;
                  if (0x1f < uVar14) {
                    uVar36 = uVar14 & 0xffffffffffffffe0;
                    uVar32 = 0;
                    do {
                      uVar10 = *(undefined8 *)((byte *)((long)puVar24 + uVar32) + 8);
                      pbVar22 = (byte *)((long)puVar24 + uVar32 + 0x10);
                      uVar11 = *(undefined8 *)pbVar22;
                      uVar12 = *(undefined8 *)(pbVar22 + 8);
                      *(undefined8 *)((long)puVar26 + uVar32) =
                           *(undefined8 *)((long)puVar24 + uVar32);
                      *(undefined8 *)((byte *)((long)puVar26 + uVar32) + 8) = uVar10;
                      pbVar22 = (byte *)((long)puVar26 + uVar32 + 0x10);
                      *(undefined8 *)pbVar22 = uVar11;
                      *(undefined8 *)(pbVar22 + 8) = uVar12;
                      uVar32 = uVar32 + 0x20;
                    } while (uVar36 != uVar32);
                    if (uVar14 == uVar36) goto code_r0x0049dff1;
                    puVar19 = (uint *)((long)puVar26 + uVar36);
                    puVar17 = (uint *)((long)puVar24 + uVar36);
                    if ((uVar14 & 0x1c) == 0) goto code_r0x0049dfe0;
                  }
                  uVar32 = uVar14 & 0xfffffffffffffffc;
                  do {
                    *(undefined4 *)((long)puVar26 + uVar36) =
                         *(undefined4 *)((long)puVar24 + uVar36);
                    uVar36 = uVar36 + 4;
                  } while (uVar32 != uVar36);
                  puVar19 = (uint *)((long)puVar26 + uVar32);
                  puVar17 = (uint *)((long)puVar24 + uVar32);
                  if (uVar14 == uVar32) goto code_r0x0049dff1;
                }
code_r0x0049dfe0:
                do {
                  *(byte *)puVar19 = (byte)*puVar17;
                  puVar19 = (uint *)((long)puVar19 + 1);
                  puVar17 = (uint *)((long)puVar17 + 1);
                } while (puVar19 < puVar15);
              }
            }
            else {
              func_0x0099bda0();
            }
code_r0x0049dff1:
            puVar26 = puVar34;
            if (puVar15 != puVar34) goto code_r0x0049dffa;
code_r0x0049e08a:
            uVar30 = (int)puVar26 - iVar33;
            break;
          }
          if ((uint)uVar32 < 8) {
            *puVar26 = 0;
            *(byte *)puVar26 = (byte)*puVar24;
            *(byte *)((long)puVar26 + 1) = *(byte *)((long)puVar24 + 1);
            *(byte *)((long)puVar26 + 2) = *(byte *)((long)puVar24 + 2);
            *(byte *)((long)puVar26 + 3) = *(byte *)((long)puVar24 + 3);
            uVar23 = (uint)uVar32 << 2;
            uVar30 = *(uint *)(&UNK_001fe790 + uVar23);
            puVar26[1] = *(uint *)((long)puVar24 + (ulong)uVar30);
            puVar24 = (uint *)((long)puVar24 +
                              ((ulong)uVar30 - (long)*(int *)(&UNK_001fe630 + uVar23)));
          }
          else {
            *(undefined8 *)puVar26 = *(undefined8 *)puVar24;
            puVar24 = puVar24 + 2;
          }
          *(undefined8 *)(puVar26 + 2) = *(undefined8 *)puVar24;
          if (0x10 < uVar36) {
            puVar19 = (uint *)(uVar36 + (long)puVar26);
            if ((uint *)(uVar36 + (long)puVar26) <= puVar26 + 6) {
              puVar19 = puVar26 + 6;
            }
            puVar17 = puVar26 + 4;
            pbVar22 = (byte *)((long)puVar19 + (-0x11 - (long)puVar26));
            puVar19 = puVar24;
            if (((byte *)0x47 < pbVar22) &&
               ((byte *)0x1f < (byte *)((long)puVar26 + (8 - (long)puVar24)))) {
              uVar14 = ((ulong)pbVar22 >> 3) + 1;
              uVar36 = uVar14 & 0x3ffffffffffffffc;
              puVar19 = puVar24 + uVar36 * 2;
              puVar17 = puVar17 + uVar36 * 2;
              uVar32 = 0;
              do {
                uVar10 = *(undefined8 *)(puVar24 + uVar32 * 2 + 2 + 2);
                uVar11 = *(undefined8 *)(puVar24 + uVar32 * 2 + 6);
                uVar12 = *(undefined8 *)(puVar24 + uVar32 * 2 + 6 + 2);
                *(undefined8 *)(puVar26 + uVar32 * 2 + 4) =
                     *(undefined8 *)(puVar24 + uVar32 * 2 + 2);
                *(undefined8 *)(puVar26 + uVar32 * 2 + 4 + 2) = uVar10;
                *(undefined8 *)(puVar26 + uVar32 * 2 + 8) = uVar11;
                *(undefined8 *)(puVar26 + uVar32 * 2 + 8 + 2) = uVar12;
                uVar32 = uVar32 + 4;
              } while (uVar36 != uVar32);
              if (uVar14 == uVar36) goto code_r0x0049dffa;
            }
            do {
              *(undefined8 *)puVar17 = *(undefined8 *)(puVar19 + 2);
              puVar17 = puVar17 + 2;
              puVar19 = puVar19 + 2;
            } while (puVar17 < puVar15);
          }
code_r0x0049dffa:
          puVar17 = (uint *)((long)param_1 + 1);
          bVar5 = (byte)*param_1;
          while( true ) {
            uVar30 = (uint)bVar5;
            if (bVar5 >> 4 == 0xf) break;
            uVar14 = (ulong)(uint)(bVar5 >> 4);
            if ((puVar1 <= puVar17) || (puVar18 < puVar15)) goto code_r0x0049dcc1;
            uVar10 = *(undefined8 *)(puVar17 + 2);
            *(undefined8 *)puVar15 = *(undefined8 *)puVar17;
            *(undefined8 *)(puVar15 + 2) = uVar10;
            puVar26 = (uint *)((long)puVar15 + uVar14);
            uVar36 = (ulong)(uVar30 & 0xf);
            uVar32 = (ulong)*(ushort *)((long)puVar17 + uVar14);
            param_1 = (uint *)((long)puVar17 + uVar14 + 2);
            puVar24 = (uint *)((long)puVar26 - uVar32);
            if ((((uVar30 & 0xf) == 0xf) || (*(ushort *)((long)puVar17 + uVar14) < 8)) ||
               (puVar24 < param_2)) goto code_r0x0049ddee;
            *(undefined8 *)puVar26 = *(undefined8 *)puVar24;
            *(undefined8 *)(puVar26 + 2) = *(undefined8 *)(puVar24 + 2);
            *(short *)(puVar26 + 4) = (short)puVar24[4];
            puVar15 = (uint *)((long)puVar26 + uVar36 + 4);
            bVar5 = *(byte *)((long)puVar17 + uVar14 + 2);
            puVar17 = (uint *)((long)puVar17 + uVar14 + 3);
          }
          puVar19 = (uint *)(pbVar2 + -0xf);
          puVar38 = puVar17;
          if ((puVar19 <= puVar17) || (puVar38 = (uint *)((long)param_1 + 2), puVar19 < puVar38))
          goto code_r0x0049e147;
          uVar14 = (ulong)(byte)*puVar17;
          puVar17 = puVar38;
          if (uVar14 == 0xff) {
            uVar14 = 0xff;
            do {
              puVar26 = puVar38;
              puVar17 = (uint *)((long)puVar26 + 1);
              if (puVar19 < puVar17) goto code_r0x0049e0c7;
              uVar14 = uVar14 + (byte)*puVar26;
              puVar38 = puVar17;
            } while ((ulong)(byte)*puVar26 == 0xff);
            if (uVar14 == 0xffffffffffffffff) {
code_r0x0049e0c7:
              puVar38 = (uint *)((long)puVar26 + 1);
              goto code_r0x0049e147;
            }
          }
          uVar14 = uVar14 + 0xf;
          puVar38 = puVar17;
          if ((CARRY8((ulong)puVar15,uVar14)) || (CARRY8((ulong)puVar17,uVar14)))
          goto code_r0x0049e147;
code_r0x0049dcc1:
          puVar26 = (uint *)((long)puVar15 + uVar14);
          if ((puVar34 + -3 < puVar26) ||
             (puVar39 = (ushort *)((long)puVar17 + uVar14), pbVar2 + -8 < puVar39)) {
            puVar19 = puVar26;
            if (pbVar2 < (byte *)((long)puVar17 + uVar14)) {
              puVar19 = (uint *)((long)puVar15 + ((long)pbVar2 - (long)puVar17));
            }
            if (puVar34 < puVar19) {
              func_0x0099bd90(puVar15,puVar17,(long)puVar34 - (long)puVar15);
              puVar26 = puVar34;
            }
            else {
              if (pbVar2 < (byte *)((long)puVar17 + uVar14)) {
                uVar14 = (long)pbVar2 - (long)puVar17;
              }
              func_0x0099bd90(puVar15,puVar17,uVar14);
              puVar26 = (uint *)((long)puVar15 + uVar14);
              if ((puVar19 != puVar34) &&
                 (puVar39 = (ushort *)((long)puVar17 + uVar14), puVar39 < pbVar2 + -2))
              goto code_r0x0049ddda;
            }
            goto code_r0x0049e08a;
          }
          puVar19 = (uint *)(uVar14 + (long)puVar15);
          if ((uint *)(uVar14 + (long)puVar15) <= puVar15 + 2) {
            puVar19 = puVar15 + 2;
          }
          if (((byte *)(~(ulong)puVar15 + (long)puVar19) < (byte *)0x38) ||
             ((ulong)((long)puVar15 - (long)puVar17) < 0x20)) {
code_r0x0049ddc0:
            do {
              *(undefined8 *)puVar15 = *(undefined8 *)puVar17;
              puVar15 = puVar15 + 2;
              puVar17 = puVar17 + 2;
            } while (puVar15 < puVar26);
          }
          else {
            uVar14 = (~(ulong)puVar15 + (long)puVar19 >> 3) + 1;
            uVar36 = uVar14 & 0x3ffffffffffffffc;
            uVar32 = 0;
            do {
              uVar10 = *(undefined8 *)(puVar17 + uVar32 * 2 + 2);
              uVar11 = *(undefined8 *)(puVar17 + uVar32 * 2 + 4);
              uVar12 = *(undefined8 *)(puVar17 + uVar32 * 2 + 4 + 2);
              *(undefined8 *)(puVar15 + uVar32 * 2) = *(undefined8 *)(puVar17 + uVar32 * 2);
              *(undefined8 *)(puVar15 + uVar32 * 2 + 2) = uVar10;
              *(undefined8 *)(puVar15 + uVar32 * 2 + 4) = uVar11;
              *(undefined8 *)(puVar15 + uVar32 * 2 + 4 + 2) = uVar12;
              uVar32 = uVar32 + 4;
            } while (uVar36 != uVar32);
            puVar17 = puVar17 + uVar36 * 2;
            puVar15 = puVar15 + uVar36 * 2;
            if (uVar14 != uVar36) goto code_r0x0049ddc0;
          }
code_r0x0049ddda:
          uVar32 = (ulong)*puVar39;
          param_1 = (uint *)(puVar39 + 1);
          puVar24 = (uint *)((long)puVar26 - uVar32);
          uVar36 = (ulong)(uVar30 & 0xf);
code_r0x0049ddee:
          puVar38 = param_1;
          if ((int)uVar36 == 0xf) {
            puVar38 = (uint *)((long)param_1 + 1);
            if (pbVar2 + -4 < puVar38) goto code_r0x0049e147;
            uVar14 = (ulong)(byte)*param_1;
            if (uVar14 == 0xff) {
              uVar14 = 0xff;
              puVar15 = puVar38;
              do {
                puVar38 = (uint *)((long)puVar15 + 1);
                if (pbVar2 + -4 < puVar38) {
                  puVar38 = (uint *)((long)puVar15 + 1);
                  goto code_r0x0049e147;
                }
                uVar30 = *puVar15;
                uVar14 = uVar14 + (byte)uVar30;
                puVar15 = puVar38;
              } while ((ulong)(byte)uVar30 == 0xff);
            }
            uVar36 = uVar14 + 0xf;
            if ((uVar14 == 0xffffffffffffffff) || (~(ulong)puVar26 < uVar36)) goto code_r0x0049e147;
          }
          uVar36 = uVar36 + 4;
          param_1 = puVar38;
        } while( true );
      }
    }
    goto code_r0x0049e14e;
  }
  if ((uint *)(param_6 + param_7) != param_2) {
    uVar14 = LZ4_decompress_safe_partial_forceExtDict(param_1,param_2);
    return uVar14;
  }
  if ((int)param_4 < (int)param_5) {
    param_5 = param_4;
  }
  uVar14 = (ulong)param_5;
  if (param_7 < 0xffff) {
    uVar30 = 0xffffffff;
    if ((int)param_5 < 0 || param_1 == (uint *)0x0) goto code_r0x004a47c5;
    if (param_5 != 0) {
      if (param_3 != 0) {
        puVar34 = (uint *)((long)param_2 - (long)param_7);
        pbVar2 = (byte *)((long)param_1 + (long)param_3);
        puVar15 = (uint *)((long)param_2 + uVar14);
        puVar1 = (uint *)((long)param_1 + (long)param_3 + -0x10);
        puVar18 = (uint *)((long)param_2 + (uVar14 - 0x20));
        if (param_5 < 0x40) goto code_r0x004a472a;
        puVar19 = (uint *)(pbVar2 + -0xf);
code_r0x004a334b:
        while( true ) {
          puVar17 = (uint *)((long)param_1 + 1);
          bVar5 = (byte)*param_1;
          uVar30 = (uint)bVar5;
          uVar14 = (ulong)(uint)(bVar5 >> 4);
          if (bVar5 >> 4 == 0xf) {
            puVar38 = puVar17;
            if ((puVar19 <= puVar17) || (puVar38 = (uint *)((long)param_1 + 2), puVar19 < puVar38))
            goto code_r0x004a42be;
            uVar14 = (ulong)*(byte *)puVar17;
            if (uVar14 == 0xff) {
              uVar14 = 0xff;
              puVar17 = puVar38;
              do {
                puVar38 = (uint *)((long)puVar17 + 1);
                if (puVar19 < puVar38) goto code_r0x004a42be;
                uVar23 = *puVar17;
                uVar14 = uVar14 + (byte)uVar23;
                puVar17 = puVar38;
              } while ((ulong)(byte)uVar23 == 0xff);
              if (uVar14 == 0xffffffffffffffff) goto code_r0x004a42be;
            }
            uVar14 = uVar14 + 0xf;
            puVar39 = (ushort *)((long)puVar38 + uVar14);
            puVar26 = (uint *)((long)param_2 + uVar14);
            if ((CARRY8((ulong)param_2,uVar14)) || (CARRY8((ulong)puVar38,uVar14)))
            goto code_r0x004a42be;
            puVar17 = puVar38;
            if (puVar18 < puVar26) goto code_r0x004a43d6;
            if (pbVar2 + -0x20 < puVar39) goto code_r0x004a43d6;
            lVar35 = 0;
            do {
              uVar10 = *(undefined8 *)((byte *)((long)puVar38 + lVar35) + 8);
              *(undefined8 *)((long)param_2 + lVar35) = *(undefined8 *)((long)puVar38 + lVar35);
              *(undefined8 *)((byte *)((long)param_2 + lVar35) + 8) = uVar10;
              pbVar22 = (byte *)((long)puVar38 + lVar35 + 0x10);
              uVar7 = *(undefined4 *)(pbVar22 + 4);
              uVar8 = *(undefined4 *)(pbVar22 + 8);
              uVar9 = *(undefined4 *)(pbVar22 + 0xc);
              pbVar16 = (byte *)((long)param_2 + lVar35 + 0x10);
              *(undefined4 *)pbVar16 = *(undefined4 *)pbVar22;
              *(undefined4 *)(pbVar16 + 4) = uVar7;
              *(undefined4 *)(pbVar16 + 8) = uVar8;
              *(undefined4 *)(pbVar16 + 0xc) = uVar9;
              lVar21 = lVar35 + 0x20;
              lVar35 = lVar35 + 0x20;
            } while ((uint *)((long)param_2 + lVar21) < puVar26);
          }
          else {
            if (pbVar2 + -0x11 < puVar17) goto code_r0x004a43d6;
            uVar30 = *(uint *)((long)param_1 + 5);
            uVar23 = *(uint *)((long)param_1 + 9);
            uVar37 = *(uint *)((long)param_1 + 0xd);
            *param_2 = *puVar17;
            param_2[1] = uVar30;
            param_2[2] = uVar23;
            param_2[3] = uVar37;
            puVar39 = (ushort *)((long)puVar17 + uVar14);
            puVar26 = (uint *)((long)param_2 + uVar14);
          }
          uVar6 = *puVar39;
          uVar32 = (ulong)uVar6;
          param_1 = (uint *)(puVar39 + 1);
          puVar24 = (uint *)((long)puVar26 - uVar32);
          uVar36 = (ulong)(bVar5 & 0xf);
          if (uVar36 == 0xf) break;
          param_2 = (uint *)((long)puVar26 + uVar36 + 4);
          uVar36 = uVar36 + 4;
          if (puVar15 + -0x10 <= param_2) goto code_r0x004a457b;
          if ((puVar24 < puVar34) || (uVar6 < 8)) goto code_r0x004a34b0;
          *(undefined8 *)puVar26 = *(undefined8 *)puVar24;
          *(undefined8 *)(puVar26 + 2) = *(undefined8 *)(puVar24 + 2);
          *(short *)(puVar26 + 4) = (short)puVar24[4];
        }
        puVar38 = (uint *)((long)puVar39 + 3);
        if (pbVar2 + -4 < puVar38) goto code_r0x004a42be;
        uVar36 = (ulong)(byte)*param_1;
        if (uVar36 == 0xff) {
          uVar36 = 0xff;
          puVar17 = puVar38;
          do {
            puVar38 = (uint *)((long)puVar17 + 1);
            if (pbVar2 + -4 < puVar38) goto code_r0x004a42be;
            uVar30 = *puVar17;
            uVar36 = uVar36 + (byte)uVar30;
            puVar17 = puVar38;
          } while ((ulong)(byte)uVar30 == 0xff);
          if (uVar36 == 0xffffffffffffffff) goto code_r0x004a42be;
        }
        uVar36 = uVar36 + 0x13;
        if (CARRY8((ulong)puVar26,uVar36)) goto code_r0x004a42be;
        param_1 = puVar38;
        if ((uint *)((long)puVar26 + uVar36) < puVar15 + -0x10) {
code_r0x004a34b0:
          puVar38 = param_1;
          if (puVar24 < puVar34) goto code_r0x004a42be;
          param_2 = (uint *)((long)puVar26 + uVar36);
          if (0xf < uVar6) {
            do {
              puVar4 = (undefined8 *)((long)puVar26 + -uVar32);
              uVar10 = puVar4[1];
              *(undefined8 *)puVar26 = *puVar4;
              *(undefined8 *)(puVar26 + 2) = uVar10;
              pbVar22 = (byte *)((long)puVar26 + -uVar32 + 0x10);
              uVar10 = *(undefined8 *)(pbVar22 + 8);
              *(undefined8 *)(puVar26 + 4) = *(undefined8 *)pbVar22;
              *(undefined8 *)(puVar26 + 6) = uVar10;
              puVar26 = puVar26 + 8;
            } while (puVar26 < param_2);
            goto code_r0x004a334b;
          }
          if (uVar32 == 4) {
            uVar30 = *puVar24;
            uVar37 = uVar30 >> 0x10;
            uVar23 = uVar30;
          }
          else {
            if (uVar6 == 2) {
              uVar6 = (ushort)*puVar24;
              uVar23 = CONCAT22(uVar6,uVar6);
            }
            else {
              if (uVar6 != 1) {
                if (uVar6 < 8) {
                  *puVar26 = 0;
                  *(byte *)puVar26 = (byte)*puVar24;
                  *(byte *)((long)puVar26 + 1) = *(byte *)((long)puVar24 + 1);
                  *(byte *)((long)puVar26 + 2) = *(byte *)((long)puVar24 + 2);
                  *(byte *)((long)puVar26 + 3) = *(byte *)((long)puVar24 + 3);
                  uVar30 = *(uint *)(&UNK_001fe790 + (ulong)uVar6 * 4);
                  puVar26[1] = *(uint *)((long)puVar24 + (ulong)uVar30);
                  puVar24 = (uint *)((long)puVar24 +
                                    ((ulong)uVar30 -
                                    (long)*(int *)(&UNK_001fe630 + (ulong)uVar6 * 4)));
                }
                else {
                  *(undefined8 *)puVar26 = *(undefined8 *)puVar24;
                  puVar24 = puVar24 + 2;
                }
                puVar17 = (uint *)(uVar36 + (long)puVar26);
                if ((uint *)(uVar36 + (long)puVar26) <= puVar26 + 4) {
                  puVar17 = puVar26 + 4;
                }
                puVar38 = puVar26 + 2;
                pbVar22 = (byte *)((long)puVar17 + (-9 - (long)puVar26));
                if (((byte *)0x17 < pbVar22) &&
                   ((byte *)0x1f < (byte *)((long)puVar26 + (8 - (long)puVar24)))) {
                  uVar14 = ((ulong)pbVar22 >> 3) + 1;
                  uVar32 = uVar14 & 0x3ffffffffffffffc;
                  puVar38 = puVar38 + uVar32 * 2;
                  uVar36 = 0;
                  do {
                    puVar17 = puVar24 + uVar36 * 2;
                    uVar30 = puVar17[1];
                    uVar23 = puVar17[2];
                    uVar37 = puVar17[3];
                    uVar10 = *(undefined8 *)(puVar24 + uVar36 * 2 + 4);
                    uVar11 = *(undefined8 *)(puVar24 + uVar36 * 2 + 4 + 2);
                    puVar3 = puVar26 + uVar36 * 2 + 2;
                    *puVar3 = *puVar17;
                    puVar3[1] = uVar30;
                    puVar3[2] = uVar23;
                    puVar3[3] = uVar37;
                    *(undefined8 *)(puVar26 + uVar36 * 2 + 6) = uVar10;
                    *(undefined8 *)(puVar26 + uVar36 * 2 + 6 + 2) = uVar11;
                    uVar36 = uVar36 + 4;
                  } while (uVar32 != uVar36);
                  puVar24 = puVar24 + uVar32 * 2;
                  if (uVar14 == uVar32) goto code_r0x004a334b;
                }
                do {
                  *(undefined8 *)puVar38 = *(undefined8 *)puVar24;
                  puVar38 = puVar38 + 2;
                  puVar24 = puVar24 + 2;
                } while (puVar38 < param_2);
                goto code_r0x004a334b;
              }
              bVar5 = (byte)*puVar24;
              uVar6 = CONCAT11(bVar5,bVar5);
              uVar23 = (uint)bVar5 * 0x1010101;
            }
            uVar30 = (uint)uVar6;
            uVar37 = uVar30;
          }
          uVar30 = uVar30 & 0xffff | uVar37 << 0x10;
          *(ulong *)puVar26 = CONCAT44(uVar23,uVar30);
          if (8 < uVar36) {
            puVar17 = (uint *)(uVar36 + (long)puVar26);
            if ((uint *)(uVar36 + (long)puVar26) <= puVar26 + 4) {
              puVar17 = puVar26 + 4;
            }
            puVar38 = puVar26 + 2;
            pbVar22 = (byte *)((long)puVar17 + (-9 - (long)puVar26));
            if ((byte *)0x17 < pbVar22) {
              uVar14 = ((ulong)pbVar22 >> 3) + 1;
              uVar36 = uVar14 & 0x3ffffffffffffffc;
              puVar38 = puVar38 + uVar36 * 2;
              uVar32 = 0;
              do {
                puVar17 = puVar26 + uVar32 * 2 + 2;
                *puVar17 = uVar30;
                puVar17[1] = uVar23;
                puVar17[2] = uVar30;
                puVar17[3] = uVar23;
                puVar17 = puVar26 + uVar32 * 2 + 6;
                *puVar17 = uVar30;
                puVar17[1] = uVar23;
                puVar17[2] = uVar30;
                puVar17[3] = uVar23;
                uVar32 = uVar32 + 4;
              } while (uVar36 != uVar32);
              if (uVar14 == uVar36) goto code_r0x004a334b;
            }
            do {
              *(ulong *)puVar38 = CONCAT44(uVar23,uVar30);
              puVar38 = puVar38 + 2;
            } while (puVar38 < param_2);
          }
          goto code_r0x004a334b;
        }
code_r0x004a457b:
        do {
          puVar38 = param_1;
          if (puVar24 < puVar34) goto code_r0x004a42be;
          param_2 = (uint *)((long)puVar26 + uVar36);
          if (puVar15 + -3 < param_2) {
            uVar14 = (long)puVar15 - (long)puVar26;
            if (uVar36 < (ulong)((long)puVar15 - (long)puVar26)) {
              uVar14 = uVar36;
            }
            param_2 = (uint *)((long)puVar26 + uVar14);
            if (puVar26 < (uint *)((long)puVar24 + uVar14)) {
              if (uVar14 != 0) {
                pbVar22 = (byte *)(uVar14 + (long)puVar26);
                if ((byte *)(uVar14 + (long)puVar26) <= (byte *)((long)puVar26 + 1U)) {
                  pbVar22 = (byte *)((long)puVar26 + 1U);
                }
                uVar14 = (long)pbVar22 - (long)puVar26;
                puVar19 = puVar26;
                puVar17 = puVar24;
                if ((3 < uVar14) && (0x1f < (ulong)((long)puVar26 - (long)puVar24))) {
                  uVar36 = 0;
                  if (0x1f < uVar14) {
                    uVar36 = uVar14 & 0xffffffffffffffe0;
                    uVar32 = 0;
                    do {
                      uVar10 = *(undefined8 *)((byte *)((long)puVar24 + uVar32) + 8);
                      pbVar22 = (byte *)((long)puVar24 + uVar32 + 0x10);
                      uVar11 = *(undefined8 *)pbVar22;
                      uVar12 = *(undefined8 *)(pbVar22 + 8);
                      *(undefined8 *)((long)puVar26 + uVar32) =
                           *(undefined8 *)((long)puVar24 + uVar32);
                      *(undefined8 *)((byte *)((long)puVar26 + uVar32) + 8) = uVar10;
                      pbVar22 = (byte *)((long)puVar26 + uVar32 + 0x10);
                      *(undefined8 *)pbVar22 = uVar11;
                      *(undefined8 *)(pbVar22 + 8) = uVar12;
                      uVar32 = uVar32 + 0x20;
                    } while (uVar36 != uVar32);
                    if (uVar14 == uVar36) goto code_r0x004a4721;
                    puVar19 = (uint *)((long)puVar26 + uVar36);
                    puVar17 = (uint *)((long)puVar24 + uVar36);
                    if ((uVar14 & 0x1c) == 0) goto code_r0x004a4710;
                  }
                  uVar32 = uVar14 & 0xfffffffffffffffc;
                  do {
                    *(undefined4 *)((long)puVar26 + uVar36) =
                         *(undefined4 *)((long)puVar24 + uVar36);
                    uVar36 = uVar36 + 4;
                  } while (uVar32 != uVar36);
                  puVar19 = (uint *)((long)puVar26 + uVar32);
                  puVar17 = (uint *)((long)puVar24 + uVar32);
                  if (uVar14 == uVar32) goto code_r0x004a4721;
                }
code_r0x004a4710:
                do {
                  *(byte *)puVar19 = (byte)*puVar17;
                  puVar19 = (uint *)((long)puVar19 + 1);
                  puVar17 = (uint *)((long)puVar17 + 1);
                } while (puVar19 < param_2);
              }
            }
            else {
              func_0x0099bda0();
            }
code_r0x004a4721:
            puVar26 = puVar15;
            if (param_2 != puVar15) goto code_r0x004a472a;
code_r0x004a47c2:
            uVar30 = (int)puVar26 - iVar33;
            break;
          }
          if ((uint)uVar32 < 8) {
            *puVar26 = 0;
            *(byte *)puVar26 = (byte)*puVar24;
            *(byte *)((long)puVar26 + 1) = *(byte *)((long)puVar24 + 1);
            *(byte *)((long)puVar26 + 2) = *(byte *)((long)puVar24 + 2);
            *(byte *)((long)puVar26 + 3) = *(byte *)((long)puVar24 + 3);
            uVar23 = (uint)uVar32 << 2;
            uVar30 = *(uint *)(&UNK_001fe790 + uVar23);
            puVar26[1] = *(uint *)((long)puVar24 + (ulong)uVar30);
            puVar24 = (uint *)((long)puVar24 +
                              ((ulong)uVar30 - (long)*(int *)(&UNK_001fe630 + uVar23)));
          }
          else {
            *(undefined8 *)puVar26 = *(undefined8 *)puVar24;
            puVar24 = puVar24 + 2;
          }
          *(undefined8 *)(puVar26 + 2) = *(undefined8 *)puVar24;
          if (0x10 < uVar36) {
            puVar19 = (uint *)(uVar36 + (long)puVar26);
            if ((uint *)(uVar36 + (long)puVar26) <= puVar26 + 6) {
              puVar19 = puVar26 + 6;
            }
            puVar17 = puVar26 + 4;
            pbVar22 = (byte *)((long)puVar19 + (-0x11 - (long)puVar26));
            puVar19 = puVar24;
            if (((byte *)0x47 < pbVar22) &&
               ((byte *)0x1f < (byte *)((long)puVar26 + (8 - (long)puVar24)))) {
              uVar14 = ((ulong)pbVar22 >> 3) + 1;
              uVar36 = uVar14 & 0x3ffffffffffffffc;
              puVar19 = puVar24 + uVar36 * 2;
              puVar17 = puVar17 + uVar36 * 2;
              uVar32 = 0;
              do {
                uVar10 = *(undefined8 *)(puVar24 + uVar32 * 2 + 2 + 2);
                uVar11 = *(undefined8 *)(puVar24 + uVar32 * 2 + 6);
                uVar12 = *(undefined8 *)(puVar24 + uVar32 * 2 + 6 + 2);
                *(undefined8 *)(puVar26 + uVar32 * 2 + 4) =
                     *(undefined8 *)(puVar24 + uVar32 * 2 + 2);
                *(undefined8 *)(puVar26 + uVar32 * 2 + 4 + 2) = uVar10;
                *(undefined8 *)(puVar26 + uVar32 * 2 + 8) = uVar11;
                *(undefined8 *)(puVar26 + uVar32 * 2 + 8 + 2) = uVar12;
                uVar32 = uVar32 + 4;
              } while (uVar36 != uVar32);
              if (uVar14 == uVar36) goto code_r0x004a472a;
            }
            do {
              *(undefined8 *)puVar17 = *(undefined8 *)(puVar19 + 2);
              puVar17 = puVar17 + 2;
              puVar19 = puVar19 + 2;
            } while (puVar17 < param_2);
          }
code_r0x004a472a:
          puVar17 = (uint *)((long)param_1 + 1);
          bVar5 = (byte)*param_1;
          while( true ) {
            uVar30 = (uint)bVar5;
            if (bVar5 >> 4 == 0xf) break;
            uVar14 = (ulong)(uint)(bVar5 >> 4);
            if ((puVar1 <= puVar17) || (puVar18 < param_2)) goto code_r0x004a43d6;
            uVar10 = *(undefined8 *)(puVar17 + 2);
            *(undefined8 *)param_2 = *(undefined8 *)puVar17;
            *(undefined8 *)(param_2 + 2) = uVar10;
            puVar26 = (uint *)((long)param_2 + uVar14);
            uVar30 = uVar30 & 0xf;
            uVar36 = (ulong)uVar30;
            uVar32 = (ulong)*(ushort *)((long)puVar17 + uVar14);
            param_1 = (uint *)((long)puVar17 + uVar14 + 2);
            puVar24 = (uint *)((long)puVar26 - uVar32);
            if (((uVar30 == 0xf) || (*(ushort *)((long)puVar17 + uVar14) < 8)) ||
               (puVar24 < puVar34)) goto joined_r0x004a4371;
            *(undefined8 *)puVar26 = *(undefined8 *)puVar24;
            *(undefined8 *)(puVar26 + 2) = *(undefined8 *)(puVar24 + 2);
            *(short *)(puVar26 + 4) = (short)puVar24[4];
            param_2 = (uint *)((long)puVar26 + uVar36 + 4);
            bVar5 = *(byte *)((long)puVar17 + uVar14 + 2);
            puVar17 = (uint *)((long)puVar17 + uVar14 + 3);
          }
          puVar19 = (uint *)(pbVar2 + -0xf);
          puVar38 = puVar17;
          if ((puVar19 <= puVar17) || (puVar38 = (uint *)((long)param_1 + 2), puVar19 < puVar38))
          goto code_r0x004a42be;
          uVar14 = (ulong)(byte)*puVar17;
          if (uVar14 == 0xff) {
            uVar14 = 0xff;
            do {
              puVar17 = puVar38;
              puVar38 = (uint *)((long)puVar17 + 1);
              if (puVar19 < puVar38) goto code_r0x004a480d;
              uVar14 = uVar14 + (byte)*puVar17;
            } while ((ulong)(byte)*puVar17 == 0xff);
            if (uVar14 == 0xffffffffffffffff) {
code_r0x004a480d:
              puVar38 = (uint *)((long)puVar17 + 1);
              goto code_r0x004a42be;
            }
          }
          uVar14 = uVar14 + 0xf;
          if ((CARRY8((ulong)param_2,uVar14)) || (puVar17 = puVar38, CARRY8((ulong)puVar38,uVar14)))
          goto code_r0x004a42be;
code_r0x004a43d6:
          puVar26 = (uint *)((long)param_2 + uVar14);
          if ((puVar15 + -3 < puVar26) ||
             (puVar39 = (ushort *)((long)puVar17 + uVar14), pbVar2 + -8 < puVar39)) {
            puVar19 = puVar26;
            if (pbVar2 < (byte *)((long)puVar17 + uVar14)) {
              puVar19 = (uint *)((long)param_2 + ((long)pbVar2 - (long)puVar17));
            }
            if (puVar15 < puVar19) {
              func_0x0099bd90(param_2,puVar17,(long)puVar15 - (long)param_2);
              puVar26 = puVar15;
            }
            else {
              if (pbVar2 < (byte *)((long)puVar17 + uVar14)) {
                uVar14 = (long)pbVar2 - (long)puVar17;
              }
              func_0x0099bd90(param_2,puVar17,uVar14);
              puVar26 = (uint *)((long)param_2 + uVar14);
              if ((puVar19 != puVar15) &&
                 (puVar39 = (ushort *)((long)puVar17 + uVar14), puVar39 < pbVar2 + -2))
              goto code_r0x004a4506;
            }
            goto code_r0x004a47c2;
          }
          puVar19 = (uint *)(uVar14 + (long)param_2);
          if ((uint *)(uVar14 + (long)param_2) <= param_2 + 2) {
            puVar19 = param_2 + 2;
          }
          if (((byte *)(~(ulong)param_2 + (long)puVar19) < (byte *)0x38) ||
             ((ulong)((long)param_2 - (long)puVar17) < 0x20)) {
code_r0x004a44f0:
            do {
              *(undefined8 *)param_2 = *(undefined8 *)puVar17;
              param_2 = param_2 + 2;
              puVar17 = puVar17 + 2;
            } while (param_2 < puVar26);
          }
          else {
            uVar14 = (~(ulong)param_2 + (long)puVar19 >> 3) + 1;
            uVar36 = uVar14 & 0x3ffffffffffffffc;
            uVar32 = 0;
            do {
              uVar10 = *(undefined8 *)(puVar17 + uVar32 * 2 + 2);
              uVar11 = *(undefined8 *)(puVar17 + uVar32 * 2 + 4);
              uVar12 = *(undefined8 *)(puVar17 + uVar32 * 2 + 4 + 2);
              *(undefined8 *)(param_2 + uVar32 * 2) = *(undefined8 *)(puVar17 + uVar32 * 2);
              *(undefined8 *)(param_2 + uVar32 * 2 + 2) = uVar10;
              *(undefined8 *)(param_2 + uVar32 * 2 + 4) = uVar11;
              *(undefined8 *)(param_2 + uVar32 * 2 + 4 + 2) = uVar12;
              uVar32 = uVar32 + 4;
            } while (uVar36 != uVar32);
            puVar17 = puVar17 + uVar36 * 2;
            param_2 = param_2 + uVar36 * 2;
            if (uVar14 != uVar36) goto code_r0x004a44f0;
          }
code_r0x004a4506:
          uVar32 = (ulong)*puVar39;
          param_1 = (uint *)(puVar39 + 1);
          puVar24 = (uint *)((long)puVar26 - uVar32);
          uVar30 = uVar30 & 0xf;
          uVar36 = (ulong)uVar30;
joined_r0x004a4371:
          if (uVar30 == 0xf) {
            puVar38 = (uint *)((long)param_1 + 1);
            if (pbVar2 + -4 < puVar38) goto code_r0x004a42be;
            uVar14 = (ulong)(byte)*param_1;
            if (uVar14 == 0xff) {
              uVar14 = 0xff;
              puVar19 = puVar38;
              do {
                puVar38 = (uint *)((long)puVar19 + 1);
                if (pbVar2 + -4 < puVar38) {
                  puVar38 = (uint *)((long)puVar19 + 1);
                  goto code_r0x004a42be;
                }
                uVar30 = *puVar19;
                uVar14 = uVar14 + (byte)uVar30;
                puVar19 = puVar38;
              } while ((ulong)(byte)uVar30 == 0xff);
            }
            uVar36 = uVar14 + 0xf;
            if ((uVar14 == 0xffffffffffffffff) || (param_1 = puVar38, ~(ulong)puVar26 < uVar36))
            goto code_r0x004a42be;
          }
          uVar36 = uVar36 + 4;
        } while( true );
      }
      goto code_r0x004a47c5;
    }
  }
  else {
    uVar30 = 0xffffffff;
    if ((int)param_5 < 0 || param_1 == (uint *)0x0) goto code_r0x004a47c5;
    if (param_5 != 0) {
      if (param_3 != 0) {
        pbVar2 = (byte *)((long)param_1 + (long)param_3);
        pbVar22 = (byte *)((long)param_2 + uVar14);
        puVar15 = (uint *)((long)param_1 + (long)param_3 + -0x10);
        if (0x3f < param_5) {
          puVar1 = (uint *)(pbVar2 + -0xf);
          uVar36 = 0;
code_r0x004a37c1:
          while( true ) {
            puVar34 = (uint *)((long)param_2 + uVar36);
            puVar18 = (uint *)((long)param_1 + 1);
            bVar5 = (byte)*param_1;
            uVar30 = (uint)bVar5;
            uVar32 = (ulong)(uint)(bVar5 >> 4);
            if (bVar5 >> 4 == 0xf) {
              puVar38 = puVar18;
              if ((puVar1 <= puVar18) || (puVar38 = (uint *)((long)param_1 + 2), puVar1 < puVar38))
              goto code_r0x004a42be;
              uVar32 = (ulong)*(byte *)puVar18;
              if (uVar32 == 0xff) {
                uVar32 = 0xff;
                puVar18 = puVar38;
                do {
                  puVar38 = (uint *)((long)puVar18 + 1);
                  if (puVar1 < puVar38) goto code_r0x004a42be;
                  uVar23 = *puVar18;
                  uVar32 = uVar32 + (byte)uVar23;
                  puVar18 = puVar38;
                } while ((ulong)(byte)uVar23 == 0xff);
                if (uVar32 == 0xffffffffffffffff) goto code_r0x004a42be;
              }
              uVar32 = uVar32 + 0xf;
              puVar39 = (ushort *)((long)puVar38 + uVar32);
              if ((CARRY8((ulong)puVar34,uVar32)) || (CARRY8((ulong)puVar38,uVar32)))
              goto code_r0x004a42be;
              lVar35 = uVar36 + uVar32;
              puVar18 = puVar38;
              if ((long)(uVar14 - 0x20) < lVar35) goto code_r0x004a3d7a;
              if (pbVar2 + -0x20 < puVar39) goto code_r0x004a3d7a;
              lVar21 = 0;
              do {
                uVar10 = *(undefined8 *)((byte *)((long)puVar38 + lVar21) + 8);
                *(undefined8 *)((long)puVar34 + lVar21) = *(undefined8 *)((long)puVar38 + lVar21);
                *(undefined8 *)((byte *)((long)puVar34 + lVar21) + 8) = uVar10;
                pbVar16 = (byte *)((long)puVar38 + lVar21 + 0x10);
                uVar7 = *(undefined4 *)(pbVar16 + 4);
                uVar8 = *(undefined4 *)(pbVar16 + 8);
                uVar9 = *(undefined4 *)(pbVar16 + 0xc);
                pbVar25 = (byte *)((long)puVar34 + lVar21 + 0x10);
                *(undefined4 *)pbVar25 = *(undefined4 *)pbVar16;
                *(undefined4 *)(pbVar25 + 4) = uVar7;
                *(undefined4 *)(pbVar25 + 8) = uVar8;
                *(undefined4 *)(pbVar25 + 0xc) = uVar9;
                lVar13 = lVar21 + 0x20;
                lVar21 = lVar21 + 0x20;
              } while ((byte *)((long)puVar34 + lVar13) < (byte *)((long)param_2 + lVar35));
            }
            else {
              if (pbVar2 + -0x11 < puVar18) goto code_r0x004a3d7a;
              uVar30 = *(uint *)((long)param_1 + 5);
              uVar23 = *(uint *)((long)param_1 + 9);
              uVar37 = *(uint *)((long)param_1 + 0xd);
              *puVar34 = *puVar18;
              puVar34[1] = uVar30;
              puVar34[2] = uVar23;
              puVar34[3] = uVar37;
              puVar39 = (ushort *)((long)puVar18 + uVar32);
              lVar35 = uVar36 + uVar32;
            }
            pbVar16 = (byte *)((long)param_2 + lVar35);
            uVar6 = *puVar39;
            uVar32 = (ulong)uVar6;
            uVar30 = (uint)uVar6;
            param_1 = (uint *)(puVar39 + 1);
            lVar21 = lVar35 - uVar32;
            puVar18 = (uint *)((long)param_2 + lVar21);
            uVar31 = (ulong)(bVar5 & 0xf);
            if (uVar31 == 0xf) break;
            uVar36 = lVar35 + uVar31 + 4;
            uVar31 = uVar31 + 4;
            if ((long)(uVar14 - 0x40) <= (long)uVar36) goto code_r0x004a3f38;
            if (uVar6 < 8) goto code_r0x004a3934;
            *(undefined8 *)pbVar16 = *(undefined8 *)puVar18;
            *(undefined8 *)(pbVar16 + 8) = *(undefined8 *)(puVar18 + 2);
            *(short *)(pbVar16 + 0x10) = (short)puVar18[4];
          }
          puVar38 = (uint *)((long)puVar39 + 3);
          if (pbVar2 + -4 < puVar38) goto code_r0x004a42be;
          uVar31 = (ulong)(byte)*param_1;
          if (uVar31 == 0xff) {
            uVar31 = 0xff;
            puVar34 = puVar38;
            do {
              puVar38 = (uint *)((long)puVar34 + 1);
              if (pbVar2 + -4 < puVar38) goto code_r0x004a42be;
              uVar30 = *puVar34;
              uVar31 = uVar31 + (byte)uVar30;
              puVar34 = puVar38;
            } while ((ulong)(byte)uVar30 == 0xff);
            if (uVar31 == 0xffffffffffffffff) goto code_r0x004a42be;
          }
          uVar31 = uVar31 + 0x13;
          if (CARRY8((ulong)pbVar16,uVar31)) goto code_r0x004a42be;
          param_1 = puVar38;
          uVar30 = (uint)uVar6;
          if ((long)(uVar14 - 0x40) <= (long)(uVar31 + lVar35)) goto code_r0x004a3f38;
code_r0x004a3934:
          puVar38 = param_1;
          if (lVar21 < -0x10000) goto code_r0x004a42be;
          uVar36 = uVar31 + lVar35;
          pbVar25 = (byte *)((long)param_2 + uVar36);
          if (0xf < uVar6) {
            do {
              uVar10 = *(undefined8 *)(pbVar16 + -uVar32 + 8);
              *(undefined8 *)pbVar16 = *(undefined8 *)(pbVar16 + -uVar32);
              *(undefined8 *)(pbVar16 + 8) = uVar10;
              uVar10 = *(undefined8 *)(pbVar16 + -uVar32 + 0x10 + 8);
              *(undefined8 *)(pbVar16 + 0x10) = *(undefined8 *)(pbVar16 + -uVar32 + 0x10);
              *(undefined8 *)(pbVar16 + 0x18) = uVar10;
              pbVar16 = pbVar16 + 0x20;
            } while (pbVar16 < pbVar25);
            goto code_r0x004a37c1;
          }
          if (uVar32 == 4) {
            uVar30 = *puVar18;
            uVar37 = uVar30 >> 0x10;
            uVar23 = uVar30;
          }
          else {
            if (uVar6 == 2) {
              uVar6 = (ushort)*puVar18;
              uVar23 = CONCAT22(uVar6,uVar6);
            }
            else {
              if (uVar6 != 1) {
                if (uVar6 < 8) {
                  pbVar16[0] = 0;
                  pbVar16[1] = 0;
                  pbVar16[2] = 0;
                  pbVar16[3] = 0;
                  *pbVar16 = (byte)*puVar18;
                  pbVar16[1] = *(byte *)((long)puVar18 + 1);
                  pbVar16[2] = *(byte *)((long)puVar18 + 2);
                  pbVar16[3] = *(byte *)((long)puVar18 + 3);
                  uVar30 = *(uint *)(&UNK_001fe790 + (ulong)uVar6 * 4);
                  *(undefined4 *)(pbVar16 + 4) = *(undefined4 *)((long)puVar18 + (ulong)uVar30);
                  puVar18 = (uint *)((long)puVar18 +
                                    ((ulong)uVar30 -
                                    (long)*(int *)(&UNK_001fe630 + (ulong)uVar6 * 4)));
                }
                else {
                  *(undefined8 *)pbVar16 = *(undefined8 *)puVar18;
                  puVar18 = puVar18 + 2;
                }
                pbVar27 = (byte *)((long)param_2 + lVar35 + uVar31);
                pbVar20 = (byte *)((long)param_2 + lVar35 + 0x10);
                if (pbVar27 <= pbVar20) {
                  pbVar27 = pbVar20;
                }
                pbVar20 = pbVar16 + 8;
                if (((byte *)0x17 < pbVar27 + (-9 - (long)pbVar16)) &&
                   ((byte *)0x1f < (byte *)((long)param_2 + ((lVar35 + 8) - (long)puVar18)))) {
                  uVar31 = ((ulong)(pbVar27 + (-9 - (long)pbVar16)) >> 3) + 1;
                  uVar32 = uVar31 & 0x3ffffffffffffffc;
                  pbVar20 = pbVar20 + uVar32 * 8;
                  uVar28 = 0;
                  do {
                    puVar34 = puVar18 + uVar28 * 2;
                    uVar30 = puVar34[1];
                    uVar23 = puVar34[2];
                    uVar37 = puVar34[3];
                    uVar10 = *(undefined8 *)(puVar18 + uVar28 * 2 + 4);
                    uVar11 = *(undefined8 *)(puVar18 + uVar28 * 2 + 4 + 2);
                    puVar19 = (uint *)((long)param_2 + uVar28 * 8 + lVar35 + 8);
                    *puVar19 = *puVar34;
                    puVar19[1] = uVar30;
                    puVar19[2] = uVar23;
                    puVar19[3] = uVar37;
                    pbVar16 = (byte *)((long)param_2 + uVar28 * 8 + lVar35 + 0x18);
                    *(undefined8 *)pbVar16 = uVar10;
                    *(undefined8 *)(pbVar16 + 8) = uVar11;
                    uVar28 = uVar28 + 4;
                  } while (uVar32 != uVar28);
                  puVar18 = puVar18 + uVar32 * 2;
                  if (uVar31 == uVar32) goto code_r0x004a37c1;
                }
                do {
                  *(undefined8 *)pbVar20 = *(undefined8 *)puVar18;
                  pbVar20 = pbVar20 + 8;
                  puVar18 = puVar18 + 2;
                } while (pbVar20 < pbVar25);
                goto code_r0x004a37c1;
              }
              bVar5 = (byte)*puVar18;
              uVar6 = CONCAT11(bVar5,bVar5);
              uVar23 = (uint)bVar5 * 0x1010101;
            }
            uVar30 = (uint)uVar6;
            uVar37 = uVar30;
          }
          uVar30 = uVar30 & 0xffff | uVar37 << 0x10;
          *(ulong *)pbVar16 = CONCAT44(uVar23,uVar30);
          if (8 < (long)uVar31) {
            pbVar27 = (byte *)((long)param_2 + lVar35 + uVar31);
            pbVar20 = (byte *)((long)param_2 + lVar35 + 0x10);
            if (pbVar27 <= pbVar20) {
              pbVar27 = pbVar20;
            }
            pbVar20 = pbVar16 + 8;
            if ((byte *)0x17 < pbVar27 + (-9 - (long)pbVar16)) {
              uVar32 = ((ulong)(pbVar27 + (-9 - (long)pbVar16)) >> 3) + 1;
              uVar28 = uVar32 & 0x3ffffffffffffffc;
              pbVar20 = pbVar20 + uVar28 * 8;
              uVar31 = 0;
              do {
                puVar18 = (uint *)((long)param_2 + uVar31 * 8 + lVar35 + 8);
                *puVar18 = uVar30;
                puVar18[1] = uVar23;
                puVar18[2] = uVar30;
                puVar18[3] = uVar23;
                puVar18 = (uint *)((long)param_2 + uVar31 * 8 + lVar35 + 0x18);
                *puVar18 = uVar30;
                puVar18[1] = uVar23;
                puVar18[2] = uVar30;
                puVar18[3] = uVar23;
                uVar31 = uVar31 + 4;
              } while (uVar28 != uVar31);
              if (uVar32 == uVar28) goto code_r0x004a37c1;
            }
            do {
              *(ulong *)pbVar20 = CONCAT44(uVar23,uVar30);
              pbVar20 = pbVar20 + 8;
            } while (pbVar20 < pbVar25);
          }
          goto code_r0x004a37c1;
        }
        uVar36 = 0;
code_r0x004a41b3:
        pbVar16 = (byte *)((long)param_2 + uVar36);
        puVar18 = (uint *)((long)param_1 + 1);
        uVar30 = (uint)(byte)*param_1;
        uVar23 = (uint)(byte)((byte)*param_1 >> 4);
        if (uVar23 != 0xf) {
          do {
            uVar32 = (ulong)uVar23;
            if ((puVar15 <= puVar18) || ((long)(uVar14 - 0x20) < (long)uVar36))
            goto code_r0x004a3d7a;
            uVar10 = *(undefined8 *)(puVar18 + 2);
            *(undefined8 *)pbVar16 = *(undefined8 *)puVar18;
            *(undefined8 *)(pbVar16 + 8) = uVar10;
            lVar35 = uVar36 + uVar32;
            uVar30 = uVar30 & 0xf;
            uVar31 = (ulong)uVar30;
            uVar6 = *(ushort *)((long)puVar18 + uVar32);
            param_1 = (uint *)((long)puVar18 + uVar32 + 2);
            lVar21 = lVar35 - (ulong)uVar6;
            if ((uVar30 == 0xf) || (uVar6 < 8)) goto joined_r0x004a3d1e;
            *(undefined8 *)((long)param_2 + lVar35) = *(undefined8 *)((long)param_2 + lVar21);
            *(undefined8 *)((long)param_2 + lVar35 + 8) =
                 *(undefined8 *)((long)param_2 + lVar21 + 8);
            *(undefined2 *)((long)param_2 + lVar35 + 0x10) =
                 *(undefined2 *)((long)param_2 + lVar21 + 0x10);
            uVar36 = lVar35 + uVar31 + 4;
            pbVar16 = (byte *)((long)param_2 + uVar31 + lVar35 + 4);
            bVar5 = *(byte *)((long)puVar18 + uVar32 + 2);
            uVar30 = (uint)bVar5;
            puVar18 = (uint *)((long)puVar18 + uVar32 + 3);
            uVar23 = (uint)(bVar5 >> 4);
          } while (uVar23 != 0xf);
        }
        puVar1 = (uint *)(pbVar2 + -0xf);
        puVar38 = puVar18;
        if ((puVar1 <= puVar18) || (puVar38 = (uint *)((long)param_1 + 2), puVar1 < puVar38))
        goto code_r0x004a42be;
        uVar32 = (ulong)(byte)*puVar18;
        if (uVar32 == 0xff) {
          uVar32 = 0xff;
          do {
            puVar18 = puVar38;
            puVar38 = (uint *)((long)puVar18 + 1);
            if (puVar1 < puVar38) goto code_r0x004a423b;
            uVar32 = uVar32 + (byte)*puVar18;
          } while ((ulong)(byte)*puVar18 == 0xff);
          if (uVar32 == 0xffffffffffffffff) {
code_r0x004a423b:
            puVar38 = (uint *)((long)puVar18 + 1);
code_r0x004a42be:
            uVar30 = ~(uint)puVar38 + iStack_60;
            goto code_r0x004a47c5;
          }
        }
        uVar32 = uVar32 + 0xf;
        if ((CARRY8((ulong)pbVar16,uVar32)) || (puVar18 = puVar38, CARRY8((ulong)puVar38,uVar32)))
        goto code_r0x004a42be;
code_r0x004a3d7a:
        pbVar16 = (byte *)((long)param_2 + uVar36);
        lVar35 = uVar36 + uVar32;
        if (((long)(uVar14 - 0xc) < lVar35) ||
           (puVar39 = (ushort *)((long)puVar18 + uVar32), pbVar2 + -8 < puVar39)) {
          pbVar25 = (byte *)((long)param_2 + lVar35);
          if (pbVar2 < (byte *)((long)puVar18 + uVar32)) {
            pbVar25 = pbVar16 + ((long)pbVar2 - (long)puVar18);
          }
          if (pbVar22 < pbVar25) {
            func_0x0099bd90(pbVar16,puVar18,uVar14 - uVar36);
            iVar29 = (int)pbVar22;
            goto code_r0x004a41f2;
          }
          if (pbVar2 < (byte *)((long)puVar18 + uVar32)) {
            uVar32 = (long)pbVar2 - (long)puVar18;
          }
          func_0x0099bd90(pbVar16,puVar18,uVar32);
          lVar35 = uVar36 + uVar32;
          iVar29 = iVar33 + (int)lVar35;
          if ((pbVar25 == pbVar22) ||
             (puVar39 = (ushort *)((long)puVar18 + uVar32), pbVar2 + -2 <= puVar39))
          goto code_r0x004a41f2;
        }
        else {
          pbVar25 = (byte *)((long)param_2 + uVar32 + uVar36);
          pbVar20 = (byte *)((long)param_2 + uVar36 + 8);
          if (pbVar25 <= pbVar20) {
            pbVar25 = pbVar20;
          }
          if (((byte *)0x47 < pbVar25 + (~uVar36 - (long)param_2)) &&
             ((byte *)0x1f < (byte *)((long)param_2 + (uVar36 - (long)puVar18)))) {
            uVar32 = ((ulong)(pbVar25 + (~uVar36 - (long)param_2)) >> 3) + 1;
            uVar31 = uVar32 & 0x3ffffffffffffffc;
            pbVar16 = pbVar16 + uVar31 * 8;
            uVar28 = 0;
            do {
              uVar10 = *(undefined8 *)(puVar18 + uVar28 * 2 + 2);
              uVar11 = *(undefined8 *)(puVar18 + uVar28 * 2 + 4);
              uVar12 = *(undefined8 *)(puVar18 + uVar28 * 2 + 4 + 2);
              pbVar25 = (byte *)((long)param_2 + uVar28 * 8 + uVar36);
              *(undefined8 *)pbVar25 = *(undefined8 *)(puVar18 + uVar28 * 2);
              *(undefined8 *)(pbVar25 + 8) = uVar10;
              pbVar25 = (byte *)((long)param_2 + uVar28 * 8 + uVar36 + 0x10);
              *(undefined8 *)pbVar25 = uVar11;
              *(undefined8 *)(pbVar25 + 8) = uVar12;
              uVar28 = uVar28 + 4;
            } while (uVar31 != uVar28);
            puVar18 = puVar18 + uVar31 * 2;
            if (uVar32 == uVar31) goto code_r0x004a3ec6;
          }
          do {
            *(undefined8 *)pbVar16 = *(undefined8 *)puVar18;
            pbVar16 = pbVar16 + 8;
            puVar18 = puVar18 + 2;
          } while (pbVar16 < (byte *)((long)param_2 + lVar35));
        }
code_r0x004a3ec6:
        uVar6 = *puVar39;
        param_1 = (uint *)(puVar39 + 1);
        lVar21 = lVar35 - (ulong)uVar6;
        uVar30 = uVar30 & 0xf;
        uVar31 = (ulong)uVar30;
joined_r0x004a3d1e:
        if (uVar30 == 0xf) {
          puVar38 = (uint *)((long)param_1 + 1);
          if (pbVar2 + -4 < puVar38) goto code_r0x004a42be;
          uVar36 = (ulong)(byte)*param_1;
          param_1 = puVar38;
          if (uVar36 == 0xff) {
            uVar36 = 0xff;
            do {
              param_1 = (uint *)((long)puVar38 + 1);
              if (pbVar2 + -4 < param_1) {
                puVar38 = (uint *)((long)puVar38 + 1);
                goto code_r0x004a42be;
              }
              uVar30 = *puVar38;
              uVar36 = uVar36 + (byte)uVar30;
              puVar38 = param_1;
            } while ((ulong)(byte)uVar30 == 0xff);
          }
          uVar31 = uVar36 + 0xf;
          puVar38 = param_1;
          if ((uVar36 == 0xffffffffffffffff) || (~(ulong)((long)param_2 + lVar35) < uVar31))
          goto code_r0x004a42be;
        }
        uVar30 = (uint)uVar6;
        uVar31 = uVar31 + 4;
code_r0x004a3f38:
        puVar38 = param_1;
        if (lVar21 < -0x10000) goto code_r0x004a42be;
        pbVar16 = (byte *)((long)param_2 + lVar35);
        pbVar25 = (byte *)((long)param_2 + lVar21);
        uVar36 = lVar35 + uVar31;
        if ((long)uVar36 <= (long)(uVar14 - 0xc)) {
          if (uVar30 < 8) {
            pbVar16[0] = 0;
            pbVar16[1] = 0;
            pbVar16[2] = 0;
            pbVar16[3] = 0;
            *pbVar16 = *pbVar25;
            pbVar16[1] = pbVar25[1];
            pbVar16[2] = pbVar25[2];
            pbVar16[3] = pbVar25[3];
            uVar23 = *(uint *)(&UNK_001fe790 + (uVar30 << 2));
            *(undefined4 *)(pbVar16 + 4) = *(undefined4 *)(pbVar25 + uVar23);
            pbVar25 = pbVar25 + ((ulong)uVar23 - (long)*(int *)(&UNK_001fe630 + (uVar30 << 2)));
          }
          else {
            *(undefined8 *)pbVar16 = *(undefined8 *)pbVar25;
            pbVar25 = pbVar25 + 8;
          }
          *(undefined8 *)(pbVar16 + 8) = *(undefined8 *)pbVar25;
          if (uVar31 < 0x11) goto code_r0x004a41b3;
          pbVar27 = (byte *)((long)param_2 + lVar35 + 0x18);
          pbVar20 = pbVar16 + uVar31;
          if (pbVar16 + uVar31 <= pbVar27) {
            pbVar20 = pbVar27;
          }
          pbVar27 = pbVar16 + 0x10;
          if (((byte *)0x67 < pbVar20 + (-0x11 - (long)pbVar16)) &&
             ((byte *)0x1f < (byte *)((long)param_2 + (lVar35 - (long)pbVar25) + 8))) {
            uVar28 = ((ulong)(pbVar20 + (-0x11 - (long)pbVar16)) >> 3) + 1;
            uVar32 = uVar28 & 0x3ffffffffffffffc;
            pbVar27 = pbVar27 + uVar32 * 8;
            uVar31 = 0;
            do {
              uVar10 = *(undefined8 *)(pbVar25 + uVar31 * 8 + 8 + 8);
              uVar11 = *(undefined8 *)(pbVar25 + uVar31 * 8 + 0x18);
              uVar12 = *(undefined8 *)(pbVar25 + uVar31 * 8 + 0x18 + 8);
              pbVar16 = (byte *)((long)param_2 + uVar31 * 8 + lVar35 + 0x10);
              *(undefined8 *)pbVar16 = *(undefined8 *)(pbVar25 + uVar31 * 8 + 8);
              *(undefined8 *)(pbVar16 + 8) = uVar10;
              pbVar16 = (byte *)((long)param_2 + uVar31 * 8 + lVar35 + 0x20);
              *(undefined8 *)pbVar16 = uVar11;
              *(undefined8 *)(pbVar16 + 8) = uVar12;
              uVar31 = uVar31 + 4;
            } while (uVar32 != uVar31);
            pbVar25 = pbVar25 + uVar32 * 8;
            if (uVar28 == uVar32) goto code_r0x004a41b3;
          }
          do {
            *(undefined8 *)pbVar27 = *(undefined8 *)(pbVar25 + 8);
            pbVar27 = pbVar27 + 8;
            pbVar25 = pbVar25 + 8;
          } while (pbVar27 < (byte *)((long)param_2 + uVar36));
          goto code_r0x004a41b3;
        }
        uVar32 = uVar14 - lVar35;
        if (uVar31 < uVar14 - lVar35) {
          uVar32 = uVar31;
        }
        uVar36 = uVar32 + lVar35;
        if (lVar35 < (long)(uVar32 + lVar21)) {
          if (0 < (long)uVar32) {
            pbVar20 = (byte *)((long)param_2 + lVar35) + uVar32;
            pbVar27 = (byte *)((long)param_2 + lVar35 + 1);
            if (pbVar20 <= pbVar27) {
              pbVar20 = pbVar27;
            }
            uVar32 = (long)pbVar20 - ((long)param_2 + lVar35);
            pbVar20 = pbVar16;
            pbVar27 = pbVar25;
            if ((3 < uVar32) && (0x1f < (ulong)(lVar35 - lVar21))) {
              uVar31 = 0;
              if (0x1f < uVar32) {
                uVar31 = uVar32 & 0xffffffffffffffe0;
                uVar28 = 0;
                do {
                  pbVar27 = (byte *)((long)param_2 + uVar28 + lVar21);
                  uVar10 = *(undefined8 *)(pbVar27 + 8);
                  pbVar20 = (byte *)((long)param_2 + uVar28 + lVar21 + 0x10);
                  uVar11 = *(undefined8 *)pbVar20;
                  uVar12 = *(undefined8 *)(pbVar20 + 8);
                  pbVar20 = (byte *)((long)param_2 + uVar28 + lVar35);
                  *(undefined8 *)pbVar20 = *(undefined8 *)pbVar27;
                  *(undefined8 *)(pbVar20 + 8) = uVar10;
                  pbVar20 = (byte *)((long)param_2 + uVar28 + lVar35 + 0x10);
                  *(undefined8 *)pbVar20 = uVar11;
                  *(undefined8 *)(pbVar20 + 8) = uVar12;
                  uVar28 = uVar28 + 0x20;
                } while (uVar31 != uVar28);
                if (uVar32 == uVar31) goto code_r0x004a4141;
                pbVar20 = pbVar16 + uVar31;
                pbVar27 = pbVar25 + uVar31;
                if ((uVar32 & 0x1c) == 0) goto code_r0x004a4130;
              }
              uVar28 = uVar32 & 0xfffffffffffffffc;
              do {
                *(undefined4 *)(pbVar16 + uVar31) = *(undefined4 *)(pbVar25 + uVar31);
                uVar31 = uVar31 + 4;
              } while (uVar28 != uVar31);
              pbVar20 = pbVar16 + uVar28;
              pbVar27 = pbVar25 + uVar28;
              if (uVar32 == uVar28) goto code_r0x004a4141;
            }
code_r0x004a4130:
            do {
              *pbVar20 = *pbVar27;
              pbVar20 = pbVar20 + 1;
              pbVar27 = pbVar27 + 1;
            } while (pbVar20 < (byte *)((long)param_2 + uVar36));
          }
        }
        else {
          func_0x0099bda0();
        }
code_r0x004a4141:
        iVar29 = (int)(byte *)((long)param_2 + uVar36);
        if (uVar36 == uVar14) goto code_r0x004a41f2;
        goto code_r0x004a41b3;
      }
      goto code_r0x004a47c5;
    }
  }
  uVar30 = 0;
code_r0x004a47c5:
  return (ulong)uVar30;
code_r0x004a41f2:
  uVar30 = iVar29 - iVar33;
  goto code_r0x004a47c5;
code_r0x0049e147:
  uVar30 = ~(uint)puVar38 + iStack_60;
code_r0x0049e14e:
  return (ulong)uVar30;
}


