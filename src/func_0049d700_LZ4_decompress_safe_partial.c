// Function: LZ4_decompress_safe_partial
// Address: 0049d700
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


int LZ4_decompress_safe_partial(uint *param_1,uint *param_2,int param_3,uint param_4,uint param_5)

{
  byte *pbVar1;
  uint *puVar2;
  byte *pbVar3;
  undefined8 *puVar4;
  uint *puVar5;
  byte bVar6;
  ushort uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  uint *puVar15;
  ulong uVar16;
  uint *puVar17;
  ulong uVar18;
  byte *pbVar19;
  uint *puVar20;
  long lVar21;
  uint *puVar22;
  uint *puVar23;
  uint uVar24;
  uint uVar25;
  uint *puVar26;
  ulong uVar27;
  uint uVar28;
  ushort *puVar29;
  int iVar30;
  uint *puVar31;
  uint *puVar32;
  int iStack_58;
  
  if ((int)param_4 < (int)param_5) {
    param_5 = param_4;
  }
  iVar30 = -1;
  if (-1 < (int)param_5 && param_1 != (uint *)0x0) {
    if (param_5 == 0) {
      iVar30 = 0;
    }
    else if (param_3 != 0) {
      pbVar1 = (byte *)((long)param_1 + (long)param_3);
      puVar20 = (uint *)((long)param_2 + (ulong)param_5);
      puVar2 = (uint *)((long)param_2 + ((ulong)param_5 - 0x20));
      puVar26 = param_2;
      puVar32 = param_1;
      if (param_5 < 0x40) goto code_r0x0049dffa;
      puVar17 = (uint *)(pbVar1 + -0xf);
code_r0x0049d7c6:
      while( true ) {
        puVar15 = (uint *)((long)puVar32 + 1);
        bVar6 = (byte)*puVar32;
        uVar24 = (uint)bVar6;
        uVar27 = (ulong)(uint)(bVar6 >> 4);
        if (bVar6 >> 4 == 0xf) {
          puVar31 = puVar15;
          if ((puVar17 <= puVar15) || (puVar31 = (uint *)((long)puVar32 + 2), puVar17 < puVar31))
          goto code_r0x0049e147;
          uVar27 = (ulong)*(byte *)puVar15;
          if (uVar27 == 0xff) {
            uVar27 = 0xff;
            puVar32 = puVar31;
            do {
              puVar31 = (uint *)((long)puVar32 + 1);
              if (puVar17 < puVar31) goto code_r0x0049e147;
              uVar25 = *puVar32;
              uVar27 = uVar27 + (byte)uVar25;
              puVar32 = puVar31;
            } while ((ulong)(byte)uVar25 == 0xff);
            if (uVar27 == 0xffffffffffffffff) goto code_r0x0049e147;
          }
          uVar27 = uVar27 + 0xf;
          puVar29 = (ushort *)((long)puVar31 + uVar27);
          puVar23 = (uint *)((long)puVar26 + uVar27);
          if ((CARRY8((ulong)puVar26,uVar27)) || (CARRY8((ulong)puVar31,uVar27)))
          goto code_r0x0049e147;
          puVar15 = puVar31;
          if (puVar2 < puVar23) goto code_r0x0049dcc1;
          if (pbVar1 + -0x20 < puVar29) goto code_r0x0049dcc1;
          lVar21 = 0;
          do {
            uVar11 = *(undefined8 *)((byte *)((long)puVar31 + lVar21) + 8);
            *(undefined8 *)((long)puVar26 + lVar21) = *(undefined8 *)((long)puVar31 + lVar21);
            *(undefined8 *)((byte *)((long)puVar26 + lVar21) + 8) = uVar11;
            pbVar19 = (byte *)((long)puVar31 + lVar21 + 0x10);
            uVar8 = *(undefined4 *)(pbVar19 + 4);
            uVar9 = *(undefined4 *)(pbVar19 + 8);
            uVar10 = *(undefined4 *)(pbVar19 + 0xc);
            pbVar3 = (byte *)((long)puVar26 + lVar21 + 0x10);
            *(undefined4 *)pbVar3 = *(undefined4 *)pbVar19;
            *(undefined4 *)(pbVar3 + 4) = uVar8;
            *(undefined4 *)(pbVar3 + 8) = uVar9;
            *(undefined4 *)(pbVar3 + 0xc) = uVar10;
            lVar14 = lVar21 + 0x20;
            lVar21 = lVar21 + 0x20;
          } while ((uint *)((long)puVar26 + lVar14) < puVar23);
        }
        else {
          if (pbVar1 + -0x11 < puVar15) goto code_r0x0049dcc1;
          uVar24 = *(uint *)((long)puVar32 + 5);
          uVar25 = *(uint *)((long)puVar32 + 9);
          uVar28 = *(uint *)((long)puVar32 + 0xd);
          *puVar26 = *puVar15;
          puVar26[1] = uVar24;
          puVar26[2] = uVar25;
          puVar26[3] = uVar28;
          puVar29 = (ushort *)((long)puVar15 + uVar27);
          puVar23 = (uint *)((long)puVar26 + uVar27);
        }
        uVar7 = *puVar29;
        uVar16 = (ulong)uVar7;
        puVar32 = (uint *)(puVar29 + 1);
        puVar22 = (uint *)((long)puVar23 - uVar16);
        uVar18 = (ulong)(bVar6 & 0xf);
        if (uVar18 == 0xf) break;
        puVar26 = (uint *)((long)puVar23 + uVar18 + 4);
        uVar18 = uVar18 + 4;
        if (puVar20 + -0x10 <= puVar26) goto code_r0x0049de44;
        if ((puVar22 < param_2) || (uVar7 < 8)) goto code_r0x0049d920;
        *(undefined8 *)puVar23 = *(undefined8 *)puVar22;
        *(undefined8 *)(puVar23 + 2) = *(undefined8 *)(puVar22 + 2);
        *(short *)(puVar23 + 4) = (short)puVar22[4];
      }
      puVar31 = (uint *)((long)puVar29 + 3);
      if (pbVar1 + -4 < puVar31) goto code_r0x0049e147;
      uVar18 = (ulong)(byte)*puVar32;
      if (uVar18 == 0xff) {
        uVar18 = 0xff;
        puVar32 = puVar31;
        do {
          puVar31 = (uint *)((long)puVar32 + 1);
          if (pbVar1 + -4 < puVar31) goto code_r0x0049e147;
          uVar24 = *puVar32;
          uVar18 = uVar18 + (byte)uVar24;
          puVar32 = puVar31;
        } while ((ulong)(byte)uVar24 == 0xff);
        if (uVar18 == 0xffffffffffffffff) goto code_r0x0049e147;
      }
      uVar18 = uVar18 + 0x13;
      if (CARRY8((ulong)puVar23,uVar18)) goto code_r0x0049e147;
      puVar32 = puVar31;
      if ((uint *)((long)puVar23 + uVar18) < puVar20 + -0x10) {
code_r0x0049d920:
        puVar31 = puVar32;
        if (puVar22 < param_2) goto code_r0x0049e147;
        puVar26 = (uint *)((long)puVar23 + uVar18);
        if (0xf < uVar7) {
          do {
            puVar4 = (undefined8 *)((long)puVar23 + -uVar16);
            uVar11 = puVar4[1];
            *(undefined8 *)puVar23 = *puVar4;
            *(undefined8 *)(puVar23 + 2) = uVar11;
            pbVar19 = (byte *)((long)puVar23 + -uVar16 + 0x10);
            uVar11 = *(undefined8 *)(pbVar19 + 8);
            *(undefined8 *)(puVar23 + 4) = *(undefined8 *)pbVar19;
            *(undefined8 *)(puVar23 + 6) = uVar11;
            puVar23 = puVar23 + 8;
          } while (puVar23 < puVar26);
          goto code_r0x0049d7c6;
        }
        if (uVar16 == 4) {
          uVar24 = *puVar22;
          uVar28 = uVar24 >> 0x10;
          uVar25 = uVar24;
        }
        else {
          if (uVar7 == 2) {
            uVar7 = (ushort)*puVar22;
            uVar25 = CONCAT22(uVar7,uVar7);
          }
          else {
            if (uVar7 != 1) {
              if (uVar7 < 8) {
                *puVar23 = 0;
                *(byte *)puVar23 = (byte)*puVar22;
                *(byte *)((long)puVar23 + 1) = *(byte *)((long)puVar22 + 1);
                *(byte *)((long)puVar23 + 2) = *(byte *)((long)puVar22 + 2);
                *(byte *)((long)puVar23 + 3) = *(byte *)((long)puVar22 + 3);
                uVar24 = *(uint *)(&UNK_001fe790 + (ulong)uVar7 * 4);
                puVar23[1] = *(uint *)((long)puVar22 + (ulong)uVar24);
                puVar22 = (uint *)((long)puVar22 +
                                  ((ulong)uVar24 - (long)*(int *)(&UNK_001fe630 + (ulong)uVar7 * 4))
                                  );
              }
              else {
                *(undefined8 *)puVar23 = *(undefined8 *)puVar22;
                puVar22 = puVar22 + 2;
              }
              puVar15 = (uint *)(uVar18 + (long)puVar23);
              if ((uint *)(uVar18 + (long)puVar23) <= puVar23 + 4) {
                puVar15 = puVar23 + 4;
              }
              puVar31 = puVar23 + 2;
              pbVar19 = (byte *)((long)puVar15 + (-9 - (long)puVar23));
              if (((byte *)0x17 < pbVar19) &&
                 ((byte *)0x1f < (byte *)((long)puVar23 + (8 - (long)puVar22)))) {
                uVar27 = ((ulong)pbVar19 >> 3) + 1;
                uVar18 = uVar27 & 0x3ffffffffffffffc;
                puVar31 = puVar31 + uVar18 * 2;
                uVar16 = 0;
                do {
                  puVar15 = puVar22 + uVar16 * 2;
                  uVar24 = puVar15[1];
                  uVar25 = puVar15[2];
                  uVar28 = puVar15[3];
                  uVar11 = *(undefined8 *)(puVar22 + uVar16 * 2 + 4);
                  uVar12 = *(undefined8 *)(puVar22 + uVar16 * 2 + 4 + 2);
                  puVar5 = puVar23 + uVar16 * 2 + 2;
                  *puVar5 = *puVar15;
                  puVar5[1] = uVar24;
                  puVar5[2] = uVar25;
                  puVar5[3] = uVar28;
                  *(undefined8 *)(puVar23 + uVar16 * 2 + 6) = uVar11;
                  *(undefined8 *)(puVar23 + uVar16 * 2 + 6 + 2) = uVar12;
                  uVar16 = uVar16 + 4;
                } while (uVar18 != uVar16);
                puVar22 = puVar22 + uVar18 * 2;
                if (uVar27 == uVar18) goto code_r0x0049d7c6;
              }
              do {
                *(undefined8 *)puVar31 = *(undefined8 *)puVar22;
                puVar31 = puVar31 + 2;
                puVar22 = puVar22 + 2;
              } while (puVar31 < puVar26);
              goto code_r0x0049d7c6;
            }
            bVar6 = (byte)*puVar22;
            uVar7 = CONCAT11(bVar6,bVar6);
            uVar25 = (uint)bVar6 * 0x1010101;
          }
          uVar24 = (uint)uVar7;
          uVar28 = uVar24;
        }
        uVar24 = uVar24 & 0xffff | uVar28 << 0x10;
        *(ulong *)puVar23 = CONCAT44(uVar25,uVar24);
        if (8 < uVar18) {
          puVar15 = (uint *)(uVar18 + (long)puVar23);
          if ((uint *)(uVar18 + (long)puVar23) <= puVar23 + 4) {
            puVar15 = puVar23 + 4;
          }
          puVar31 = puVar23 + 2;
          pbVar19 = (byte *)((long)puVar15 + (-9 - (long)puVar23));
          if ((byte *)0x17 < pbVar19) {
            uVar27 = ((ulong)pbVar19 >> 3) + 1;
            uVar16 = uVar27 & 0x3ffffffffffffffc;
            puVar31 = puVar31 + uVar16 * 2;
            uVar18 = 0;
            do {
              puVar15 = puVar23 + uVar18 * 2 + 2;
              *puVar15 = uVar24;
              puVar15[1] = uVar25;
              puVar15[2] = uVar24;
              puVar15[3] = uVar25;
              puVar15 = puVar23 + uVar18 * 2 + 6;
              *puVar15 = uVar24;
              puVar15[1] = uVar25;
              puVar15[2] = uVar24;
              puVar15[3] = uVar25;
              uVar18 = uVar18 + 4;
            } while (uVar16 != uVar18);
            if (uVar27 == uVar16) goto code_r0x0049d7c6;
          }
          do {
            *(ulong *)puVar31 = CONCAT44(uVar25,uVar24);
            puVar31 = puVar31 + 2;
          } while (puVar31 < puVar26);
        }
        goto code_r0x0049d7c6;
      }
code_r0x0049de44:
      do {
        puVar31 = puVar32;
        if (puVar22 < param_2) {
code_r0x0049e147:
          iStack_58 = (int)param_1;
          return ~(uint)puVar31 + iStack_58;
        }
        puVar26 = (uint *)((long)puVar23 + uVar18);
        if (puVar20 + -3 < puVar26) {
          uVar27 = (long)puVar20 - (long)puVar23;
          if (uVar18 < (ulong)((long)puVar20 - (long)puVar23)) {
            uVar27 = uVar18;
          }
          puVar26 = (uint *)((long)puVar23 + uVar27);
          if (puVar23 < (uint *)((long)puVar22 + uVar27)) {
            if (uVar27 != 0) {
              pbVar19 = (byte *)(uVar27 + (long)puVar23);
              if ((byte *)(uVar27 + (long)puVar23) <= (byte *)((long)puVar23 + 1U)) {
                pbVar19 = (byte *)((long)puVar23 + 1U);
              }
              uVar27 = (long)pbVar19 - (long)puVar23;
              puVar17 = puVar23;
              puVar15 = puVar22;
              if ((3 < uVar27) && (0x1f < (ulong)((long)puVar23 - (long)puVar22))) {
                uVar18 = 0;
                if (0x1f < uVar27) {
                  uVar18 = uVar27 & 0xffffffffffffffe0;
                  uVar16 = 0;
                  do {
                    uVar11 = *(undefined8 *)((byte *)((long)puVar22 + uVar16) + 8);
                    pbVar19 = (byte *)((long)puVar22 + uVar16 + 0x10);
                    uVar12 = *(undefined8 *)pbVar19;
                    uVar13 = *(undefined8 *)(pbVar19 + 8);
                    *(undefined8 *)((long)puVar23 + uVar16) =
                         *(undefined8 *)((long)puVar22 + uVar16);
                    *(undefined8 *)((byte *)((long)puVar23 + uVar16) + 8) = uVar11;
                    pbVar19 = (byte *)((long)puVar23 + uVar16 + 0x10);
                    *(undefined8 *)pbVar19 = uVar12;
                    *(undefined8 *)(pbVar19 + 8) = uVar13;
                    uVar16 = uVar16 + 0x20;
                  } while (uVar18 != uVar16);
                  if (uVar27 == uVar18) goto code_r0x0049dff1;
                  puVar17 = (uint *)((long)puVar23 + uVar18);
                  puVar15 = (uint *)((long)puVar22 + uVar18);
                  if ((uVar27 & 0x1c) == 0) goto code_r0x0049dfe0;
                }
                uVar16 = uVar27 & 0xfffffffffffffffc;
                do {
                  *(undefined4 *)((long)puVar23 + uVar18) = *(undefined4 *)((long)puVar22 + uVar18);
                  uVar18 = uVar18 + 4;
                } while (uVar16 != uVar18);
                puVar17 = (uint *)((long)puVar23 + uVar16);
                puVar15 = (uint *)((long)puVar22 + uVar16);
                if (uVar27 == uVar16) goto code_r0x0049dff1;
              }
code_r0x0049dfe0:
              do {
                *(byte *)puVar17 = (byte)*puVar15;
                puVar17 = (uint *)((long)puVar17 + 1);
                puVar15 = (uint *)((long)puVar15 + 1);
              } while (puVar17 < puVar26);
            }
          }
          else {
            func_0x0099bda0();
          }
code_r0x0049dff1:
          puVar23 = puVar20;
          if (puVar26 == puVar20) goto code_r0x0049e08a;
        }
        else {
          if ((uint)uVar16 < 8) {
            *puVar23 = 0;
            *(byte *)puVar23 = (byte)*puVar22;
            *(byte *)((long)puVar23 + 1) = *(byte *)((long)puVar22 + 1);
            *(byte *)((long)puVar23 + 2) = *(byte *)((long)puVar22 + 2);
            *(byte *)((long)puVar23 + 3) = *(byte *)((long)puVar22 + 3);
            uVar25 = (uint)uVar16 << 2;
            uVar24 = *(uint *)(&UNK_001fe790 + uVar25);
            puVar23[1] = *(uint *)((long)puVar22 + (ulong)uVar24);
            puVar22 = (uint *)((long)puVar22 +
                              ((ulong)uVar24 - (long)*(int *)(&UNK_001fe630 + uVar25)));
          }
          else {
            *(undefined8 *)puVar23 = *(undefined8 *)puVar22;
            puVar22 = puVar22 + 2;
          }
          *(undefined8 *)(puVar23 + 2) = *(undefined8 *)puVar22;
          if (0x10 < uVar18) {
            puVar17 = (uint *)(uVar18 + (long)puVar23);
            if ((uint *)(uVar18 + (long)puVar23) <= puVar23 + 6) {
              puVar17 = puVar23 + 6;
            }
            puVar15 = puVar23 + 4;
            pbVar19 = (byte *)((long)puVar17 + (-0x11 - (long)puVar23));
            puVar17 = puVar22;
            if (((byte *)0x47 < pbVar19) &&
               ((byte *)0x1f < (byte *)((long)puVar23 + (8 - (long)puVar22)))) {
              uVar27 = ((ulong)pbVar19 >> 3) + 1;
              uVar18 = uVar27 & 0x3ffffffffffffffc;
              puVar17 = puVar22 + uVar18 * 2;
              puVar15 = puVar15 + uVar18 * 2;
              uVar16 = 0;
              do {
                uVar11 = *(undefined8 *)(puVar22 + uVar16 * 2 + 2 + 2);
                uVar12 = *(undefined8 *)(puVar22 + uVar16 * 2 + 6);
                uVar13 = *(undefined8 *)(puVar22 + uVar16 * 2 + 6 + 2);
                *(undefined8 *)(puVar23 + uVar16 * 2 + 4) =
                     *(undefined8 *)(puVar22 + uVar16 * 2 + 2);
                *(undefined8 *)(puVar23 + uVar16 * 2 + 4 + 2) = uVar11;
                *(undefined8 *)(puVar23 + uVar16 * 2 + 8) = uVar12;
                *(undefined8 *)(puVar23 + uVar16 * 2 + 8 + 2) = uVar13;
                uVar16 = uVar16 + 4;
              } while (uVar18 != uVar16);
              if (uVar27 == uVar18) goto code_r0x0049dffa;
            }
            do {
              *(undefined8 *)puVar15 = *(undefined8 *)(puVar17 + 2);
              puVar15 = puVar15 + 2;
              puVar17 = puVar17 + 2;
            } while (puVar15 < puVar26);
          }
        }
code_r0x0049dffa:
        puVar15 = (uint *)((long)puVar32 + 1);
        bVar6 = (byte)*puVar32;
        while( true ) {
          uVar24 = (uint)bVar6;
          if (bVar6 >> 4 == 0xf) break;
          uVar27 = (ulong)(uint)(bVar6 >> 4);
          if (((uint *)((long)param_1 + (long)param_3 + -0x10) <= puVar15) || (puVar2 < puVar26))
          goto code_r0x0049dcc1;
          uVar11 = *(undefined8 *)(puVar15 + 2);
          *(undefined8 *)puVar26 = *(undefined8 *)puVar15;
          *(undefined8 *)(puVar26 + 2) = uVar11;
          puVar23 = (uint *)((long)puVar26 + uVar27);
          uVar18 = (ulong)(uVar24 & 0xf);
          uVar16 = (ulong)*(ushort *)((long)puVar15 + uVar27);
          puVar32 = (uint *)((long)puVar15 + uVar27 + 2);
          puVar22 = (uint *)((long)puVar23 - uVar16);
          if ((((uVar24 & 0xf) == 0xf) || (*(ushort *)((long)puVar15 + uVar27) < 8)) ||
             (puVar22 < param_2)) goto code_r0x0049ddee;
          *(undefined8 *)puVar23 = *(undefined8 *)puVar22;
          *(undefined8 *)(puVar23 + 2) = *(undefined8 *)(puVar22 + 2);
          *(short *)(puVar23 + 4) = (short)puVar22[4];
          puVar26 = (uint *)((long)puVar23 + uVar18 + 4);
          bVar6 = *(byte *)((long)puVar15 + uVar27 + 2);
          puVar15 = (uint *)((long)puVar15 + uVar27 + 3);
        }
        puVar17 = (uint *)(pbVar1 + -0xf);
        puVar31 = puVar15;
        if ((puVar17 <= puVar15) || (puVar31 = (uint *)((long)puVar32 + 2), puVar17 < puVar31))
        goto code_r0x0049e147;
        uVar27 = (ulong)(byte)*puVar15;
        puVar15 = puVar31;
        if (uVar27 == 0xff) {
          uVar27 = 0xff;
          do {
            puVar32 = puVar31;
            puVar15 = (uint *)((long)puVar32 + 1);
            if (puVar17 < puVar15) goto code_r0x0049e0c7;
            uVar27 = uVar27 + (byte)*puVar32;
            puVar31 = puVar15;
          } while ((ulong)(byte)*puVar32 == 0xff);
          if (uVar27 == 0xffffffffffffffff) {
code_r0x0049e0c7:
            puVar31 = (uint *)((long)puVar32 + 1);
            goto code_r0x0049e147;
          }
        }
        uVar27 = uVar27 + 0xf;
        puVar31 = puVar15;
        if ((CARRY8((ulong)puVar26,uVar27)) || (CARRY8((ulong)puVar15,uVar27)))
        goto code_r0x0049e147;
code_r0x0049dcc1:
        puVar23 = (uint *)((long)puVar26 + uVar27);
        if ((puVar20 + -3 < puVar23) ||
           (puVar29 = (ushort *)((long)puVar15 + uVar27), pbVar1 + -8 < puVar29)) {
          puVar32 = puVar23;
          if (pbVar1 < (byte *)((long)puVar15 + uVar27)) {
            puVar32 = (uint *)((long)puVar26 + ((long)pbVar1 - (long)puVar15));
          }
          if (puVar20 < puVar32) {
            func_0x0099bd90(puVar26,puVar15,(long)puVar20 - (long)puVar26);
            puVar23 = puVar20;
code_r0x0049e08a:
            return (int)puVar23 - (int)param_2;
          }
          if (pbVar1 < (byte *)((long)puVar15 + uVar27)) {
            uVar27 = (long)pbVar1 - (long)puVar15;
          }
          func_0x0099bd90(puVar26,puVar15,uVar27);
          puVar23 = (uint *)((long)puVar26 + uVar27);
          if ((puVar32 == puVar20) ||
             (puVar29 = (ushort *)((long)puVar15 + uVar27), pbVar1 + -2 <= puVar29))
          goto code_r0x0049e08a;
        }
        else {
          puVar32 = (uint *)(uVar27 + (long)puVar26);
          if ((uint *)(uVar27 + (long)puVar26) <= puVar26 + 2) {
            puVar32 = puVar26 + 2;
          }
          if (((byte *)0x37 < (byte *)(~(ulong)puVar26 + (long)puVar32)) &&
             (0x1f < (ulong)((long)puVar26 - (long)puVar15))) {
            uVar27 = (~(ulong)puVar26 + (long)puVar32 >> 3) + 1;
            uVar18 = uVar27 & 0x3ffffffffffffffc;
            uVar16 = 0;
            do {
              uVar11 = *(undefined8 *)(puVar15 + uVar16 * 2 + 2);
              uVar12 = *(undefined8 *)(puVar15 + uVar16 * 2 + 4);
              uVar13 = *(undefined8 *)(puVar15 + uVar16 * 2 + 4 + 2);
              *(undefined8 *)(puVar26 + uVar16 * 2) = *(undefined8 *)(puVar15 + uVar16 * 2);
              *(undefined8 *)(puVar26 + uVar16 * 2 + 2) = uVar11;
              *(undefined8 *)(puVar26 + uVar16 * 2 + 4) = uVar12;
              *(undefined8 *)(puVar26 + uVar16 * 2 + 4 + 2) = uVar13;
              uVar16 = uVar16 + 4;
            } while (uVar18 != uVar16);
            puVar15 = puVar15 + uVar18 * 2;
            puVar26 = puVar26 + uVar18 * 2;
            if (uVar27 == uVar18) goto code_r0x0049ddda;
          }
          do {
            *(undefined8 *)puVar26 = *(undefined8 *)puVar15;
            puVar26 = puVar26 + 2;
            puVar15 = puVar15 + 2;
          } while (puVar26 < puVar23);
        }
code_r0x0049ddda:
        uVar16 = (ulong)*puVar29;
        puVar32 = (uint *)(puVar29 + 1);
        puVar22 = (uint *)((long)puVar23 - uVar16);
        uVar18 = (ulong)(uVar24 & 0xf);
code_r0x0049ddee:
        puVar31 = puVar32;
        if ((int)uVar18 == 0xf) {
          puVar31 = (uint *)((long)puVar32 + 1);
          if (pbVar1 + -4 < puVar31) goto code_r0x0049e147;
          uVar27 = (ulong)(byte)*puVar32;
          if (uVar27 == 0xff) {
            uVar27 = 0xff;
            puVar32 = puVar31;
            do {
              puVar31 = (uint *)((long)puVar32 + 1);
              if (pbVar1 + -4 < puVar31) {
                puVar31 = (uint *)((long)puVar32 + 1);
                goto code_r0x0049e147;
              }
              uVar24 = *puVar32;
              uVar27 = uVar27 + (byte)uVar24;
              puVar32 = puVar31;
            } while ((ulong)(byte)uVar24 == 0xff);
          }
          uVar18 = uVar27 + 0xf;
          if ((uVar27 == 0xffffffffffffffff) || (~(ulong)puVar23 < uVar18)) goto code_r0x0049e147;
        }
        uVar18 = uVar18 + 4;
        puVar32 = puVar31;
      } while( true );
    }
  }
  return iVar30;
}


