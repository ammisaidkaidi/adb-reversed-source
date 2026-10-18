// Function: LZ4_decompress_safe_withPrefix64k
// Address: 0049e3e0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


int LZ4_decompress_safe_withPrefix64k(ushort *param_1,long param_2,int param_3,uint param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  uint *puVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint *puVar7;
  byte bVar8;
  ushort uVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined8 uVar18;
  ushort uVar19;
  ushort *puVar20;
  undefined8 *puVar21;
  ulong uVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  long lVar25;
  byte *pbVar26;
  ushort *puVar27;
  uint uVar28;
  ulong uVar29;
  int iVar30;
  ushort *puVar31;
  byte *pbVar32;
  ushort *puVar33;
  ulong uVar34;
  ulong uVar35;
  ulong uVar36;
  uint uVar37;
  undefined8 *puVar38;
  long lVar39;
  ulong uVar40;
  uint uVar41;
  uint *puVar42;
  long lVar43;
  undefined8 *puVar44;
  undefined8 *puVar45;
  int iStack_68;
  
  iVar30 = -1;
  if (-1 < (int)param_4 && param_1 != (ushort *)0x0) {
    if (param_4 == 0) {
      if (param_3 == 1) {
        iVar30 = -(uint)((byte)*param_1 != 0);
      }
    }
    else if (param_3 != 0) {
      pbVar1 = (byte *)((long)param_1 + (long)param_3);
      uVar34 = (ulong)param_4;
      if (0x3f < param_4) {
        uVar40 = 0;
        puVar20 = param_1;
code_r0x0049e486:
        do {
          puVar5 = (undefined4 *)(uVar40 + param_2);
          puVar27 = (ushort *)((long)puVar20 + 1);
          bVar8 = (byte)*puVar20;
          uVar41 = (uint)bVar8;
          uVar29 = (ulong)(uint)(bVar8 >> 4);
          if (bVar8 >> 4 == 0xf) {
            puVar31 = (ushort *)(pbVar1 + -0xf);
            puVar33 = puVar27;
            if ((puVar31 <= puVar27) || (puVar33 = puVar20 + 1, puVar31 < puVar33))
            goto code_r0x0049ef43;
            uVar29 = (ulong)*(byte *)puVar27;
            if (uVar29 == 0xff) {
              uVar29 = 0xff;
              puVar20 = puVar33;
              do {
                puVar33 = (ushort *)((long)puVar20 + 1);
                if (puVar31 < puVar33) goto code_r0x0049ef43;
                uVar9 = *puVar20;
                uVar29 = uVar29 + (byte)uVar9;
                puVar20 = puVar33;
              } while ((ulong)(byte)uVar9 == 0xff);
              if (uVar29 == 0xffffffffffffffff) goto code_r0x0049ef43;
            }
            uVar29 = uVar29 + 0xf;
            puVar31 = (ushort *)((long)puVar33 + uVar29);
            if ((CARRY8((ulong)puVar5,uVar29)) || (CARRY8((ulong)puVar33,uVar29)))
            goto code_r0x0049ef43;
            lVar39 = uVar29 + uVar40;
            puVar27 = puVar33;
            if ((long)(uVar34 - 0x20) < lVar39) goto code_r0x0049e9e2;
            if (pbVar1 + -0x20 < puVar31) goto code_r0x0049e9e2;
            lVar43 = 0;
            do {
              uVar18 = *(undefined8 *)((byte *)((long)puVar33 + lVar43) + 8);
              *(undefined8 *)((long)puVar5 + lVar43) = *(undefined8 *)((long)puVar33 + lVar43);
              ((undefined8 *)((long)puVar5 + lVar43))[1] = uVar18;
              pbVar26 = (byte *)((long)puVar33 + lVar43 + 0x10);
              uVar11 = *(undefined4 *)(pbVar26 + 4);
              uVar12 = *(undefined4 *)(pbVar26 + 8);
              uVar13 = *(undefined4 *)(pbVar26 + 0xc);
              puVar6 = (undefined4 *)((long)puVar5 + lVar43 + 0x10);
              *puVar6 = *(undefined4 *)pbVar26;
              puVar6[1] = uVar11;
              puVar6[2] = uVar12;
              puVar6[3] = uVar13;
              lVar25 = lVar43 + 0x20;
              lVar43 = lVar43 + 0x20;
            } while ((ulong)((long)puVar5 + lVar25) < (ulong)(lVar39 + param_2));
          }
          else {
            if (pbVar1 + -0x11 < puVar27) goto code_r0x0049e9e2;
            uVar11 = *(undefined4 *)((long)puVar20 + 5);
            uVar12 = *(undefined4 *)((long)puVar20 + 9);
            uVar13 = *(undefined4 *)((long)puVar20 + 0xd);
            *puVar5 = *(undefined4 *)puVar27;
            puVar5[1] = uVar11;
            puVar5[2] = uVar12;
            puVar5[3] = uVar13;
            puVar31 = (ushort *)((long)puVar27 + uVar29);
            lVar39 = uVar40 + uVar29;
          }
          pbVar26 = (byte *)(lVar39 + param_2);
          uVar9 = *puVar31;
          uVar29 = (ulong)uVar9;
          uVar41 = (uint)uVar9;
          puVar20 = puVar31 + 1;
          lVar43 = lVar39 - uVar29;
          puVar42 = (uint *)(lVar43 + param_2);
          uVar35 = (ulong)(bVar8 & 0xf);
          if (uVar35 == 0xf) {
            puVar31 = (ushort *)((long)puVar31 + 3);
            puVar33 = puVar31;
            if (pbVar1 + -4 < puVar31) goto code_r0x0049ef43;
            uVar35 = (ulong)(byte)*puVar20;
            if (uVar35 == 0xff) {
              uVar35 = 0xff;
              puVar20 = puVar31;
              do {
                puVar31 = (ushort *)((long)puVar20 + 1);
                puVar33 = puVar31;
                if (pbVar1 + -4 < puVar31) goto code_r0x0049ef43;
                uVar19 = *puVar20;
                uVar35 = uVar35 + (byte)uVar19;
                puVar20 = puVar31;
              } while ((ulong)(byte)uVar19 == 0xff);
              if (uVar35 == 0xffffffffffffffff) goto code_r0x0049ef43;
            }
            uVar35 = uVar35 + 0x13;
            puVar33 = puVar31;
            if (CARRY8((ulong)pbVar26,uVar35)) goto code_r0x0049ef43;
            puVar20 = puVar31;
            if ((long)(uVar34 - 0x40) <= (long)(lVar39 + uVar35)) goto code_r0x0049ead9;
          }
          else {
            uVar40 = lVar39 + uVar35 + 4;
            uVar35 = uVar35 + 4;
            puVar31 = puVar20;
            if ((long)(uVar34 - 0x40) <= (long)uVar40) goto code_r0x0049ead9;
            if (7 < uVar9) {
              *(undefined8 *)pbVar26 = *(undefined8 *)puVar42;
              *(undefined8 *)(pbVar26 + 8) = *(undefined8 *)(puVar42 + 2);
              *(short *)(pbVar26 + 0x10) = (short)puVar42[4];
              goto code_r0x0049e486;
            }
          }
          puVar33 = puVar20;
          if (lVar43 < -0x10000) goto code_r0x0049ef43;
          uVar40 = uVar35 + lVar39;
          pbVar2 = (byte *)(uVar40 + param_2);
          if (uVar9 < 0x10) {
            if (uVar29 == 4) {
              uVar41 = *puVar42;
              uVar37 = uVar41 >> 0x10;
              uVar28 = uVar41;
            }
            else {
              if (uVar9 == 2) {
                uVar9 = (ushort)*puVar42;
                uVar28 = CONCAT22(uVar9,uVar9);
              }
              else {
                if (uVar9 != 1) {
                  if (uVar9 < 8) {
                    pbVar26[0] = 0;
                    pbVar26[1] = 0;
                    pbVar26[2] = 0;
                    pbVar26[3] = 0;
                    *pbVar26 = (byte)*puVar42;
                    pbVar26[1] = *(byte *)((long)puVar42 + 1);
                    pbVar26[2] = *(byte *)((long)puVar42 + 2);
                    pbVar26[3] = *(byte *)((long)puVar42 + 3);
                    uVar41 = *(uint *)(&UNK_001fe790 + (ulong)uVar9 * 4);
                    *(undefined4 *)(pbVar26 + 4) = *(undefined4 *)((long)puVar42 + (ulong)uVar41);
                    puVar42 = (uint *)((long)puVar42 +
                                      ((ulong)uVar41 -
                                      (long)*(int *)(&UNK_001fe630 + (ulong)uVar9 * 4)));
                  }
                  else {
                    *(undefined8 *)pbVar26 = *(undefined8 *)puVar42;
                    puVar42 = puVar42 + 2;
                  }
                  uVar29 = uVar35 + param_2 + lVar39;
                  uVar35 = param_2 + 0x10 + lVar39;
                  if (uVar29 <= uVar35) {
                    uVar29 = uVar35;
                  }
                  pbVar32 = pbVar26 + 8;
                  uVar29 = (uVar29 - (long)pbVar26) - 9;
                  if ((0x17 < uVar29) && (0x1f < (ulong)((param_2 + 8 + lVar39) - (long)puVar42))) {
                    uVar22 = (uVar29 >> 3) + 1;
                    uVar29 = uVar22 & 0x3ffffffffffffffc;
                    pbVar32 = pbVar32 + uVar29 * 8;
                    lVar39 = lVar39 + param_2 + 0x18;
                    uVar35 = 0;
                    do {
                      puVar3 = puVar42 + uVar35 * 2;
                      uVar15 = puVar3[1];
                      uVar16 = puVar3[2];
                      uVar17 = puVar3[3];
                      puVar7 = puVar42 + uVar35 * 2 + 4;
                      uVar41 = *puVar7;
                      uVar28 = puVar7[1];
                      uVar37 = puVar7[2];
                      uVar10 = puVar7[3];
                      puVar7 = (uint *)(lVar39 + -0x10 + uVar35 * 8);
                      *puVar7 = *puVar3;
                      puVar7[1] = uVar15;
                      puVar7[2] = uVar16;
                      puVar7[3] = uVar17;
                      puVar3 = (uint *)(lVar39 + uVar35 * 8);
                      *puVar3 = uVar41;
                      puVar3[1] = uVar28;
                      puVar3[2] = uVar37;
                      puVar3[3] = uVar10;
                      uVar35 = uVar35 + 4;
                    } while (uVar29 != uVar35);
                    puVar42 = puVar42 + uVar29 * 2;
                    if (uVar22 == uVar29) goto code_r0x0049e486;
                  }
                  do {
                    *(undefined8 *)pbVar32 = *(undefined8 *)puVar42;
                    pbVar32 = pbVar32 + 8;
                    puVar42 = puVar42 + 2;
                  } while (pbVar32 < pbVar2);
                  goto code_r0x0049e486;
                }
                bVar8 = (byte)*puVar42;
                uVar9 = CONCAT11(bVar8,bVar8);
                uVar28 = (uint)bVar8 * 0x1010101;
              }
              uVar41 = (uint)uVar9;
              uVar37 = uVar41;
            }
            uVar41 = uVar41 & 0xffff | uVar37 << 0x10;
            *(ulong *)pbVar26 = CONCAT44(uVar28,uVar41);
            if (8 < (long)uVar35) {
              uVar29 = uVar35 + param_2 + lVar39;
              uVar35 = param_2 + 0x10 + lVar39;
              if (uVar29 <= uVar35) {
                uVar29 = uVar35;
              }
              pbVar32 = pbVar26 + 8;
              uVar29 = (uVar29 - (long)pbVar26) - 9;
              if (0x17 < uVar29) {
                uVar22 = (uVar29 >> 3) + 1;
                uVar29 = uVar22 & 0x3ffffffffffffffc;
                pbVar32 = pbVar32 + uVar29 * 8;
                lVar39 = lVar39 + param_2 + 0x18;
                uVar35 = 0;
                do {
                  puVar42 = (uint *)(lVar39 + -0x10 + uVar35 * 8);
                  *puVar42 = uVar41;
                  puVar42[1] = uVar28;
                  puVar42[2] = uVar41;
                  puVar42[3] = uVar28;
                  puVar42 = (uint *)(lVar39 + uVar35 * 8);
                  *puVar42 = uVar41;
                  puVar42[1] = uVar28;
                  puVar42[2] = uVar41;
                  puVar42[3] = uVar28;
                  uVar35 = uVar35 + 4;
                } while (uVar29 != uVar35);
                if (uVar22 == uVar29) goto code_r0x0049e486;
              }
              do {
                *(ulong *)pbVar32 = CONCAT44(uVar28,uVar41);
                pbVar32 = pbVar32 + 8;
              } while (pbVar32 < pbVar2);
            }
            goto code_r0x0049e486;
          }
          do {
            uVar18 = *(undefined8 *)(pbVar26 + -uVar29 + 8);
            *(undefined8 *)pbVar26 = *(undefined8 *)(pbVar26 + -uVar29);
            *(undefined8 *)(pbVar26 + 8) = uVar18;
            uVar18 = *(undefined8 *)(pbVar26 + -uVar29 + 0x10 + 8);
            *(undefined8 *)(pbVar26 + 0x10) = *(undefined8 *)(pbVar26 + -uVar29 + 0x10);
            *(undefined8 *)(pbVar26 + 0x18) = uVar18;
            pbVar26 = pbVar26 + 0x20;
          } while (pbVar26 < pbVar2);
        } while( true );
      }
      uVar40 = 0;
      puVar31 = param_1;
code_r0x0049e8d7:
      do {
        puVar21 = (undefined8 *)(uVar40 + param_2);
        puVar27 = (ushort *)((long)puVar31 + 1);
        uVar41 = (uint)(byte)*puVar31;
        uVar28 = (uint)(byte)((byte)*puVar31 >> 4);
        if (uVar28 != 0xf) {
          do {
            uVar29 = (ulong)uVar28;
            if (((ushort *)((long)param_1 + (long)param_3 + -0x10) <= puVar27) ||
               ((long)(uVar34 - 0x20) < (long)uVar40)) goto code_r0x0049e9e2;
            uVar18 = *(undefined8 *)(puVar27 + 4);
            *puVar21 = *(undefined8 *)puVar27;
            puVar21[1] = uVar18;
            lVar39 = uVar40 + uVar29;
            uVar41 = uVar41 & 0xf;
            uVar35 = (ulong)uVar41;
            uVar9 = *(ushort *)((long)puVar27 + uVar29);
            puVar31 = (ushort *)((long)puVar27 + uVar29 + 2);
            lVar43 = lVar39 - (ulong)uVar9;
            if ((uVar41 == 0xf) || (uVar9 < 8)) goto joined_r0x0049ea87;
            *(undefined8 *)(param_2 + lVar39) = *(undefined8 *)(param_2 + lVar43);
            *(undefined8 *)(param_2 + 8 + lVar39) = *(undefined8 *)(param_2 + 8 + lVar43);
            *(undefined2 *)(param_2 + 0x10 + lVar39) = *(undefined2 *)(param_2 + 0x10 + lVar43);
            uVar40 = lVar39 + uVar35 + 4;
            puVar21 = (undefined8 *)(uVar35 + lVar39 + param_2 + 4);
            bVar8 = *(byte *)((long)puVar27 + uVar29 + 2);
            uVar41 = (uint)bVar8;
            puVar27 = (ushort *)((long)puVar27 + uVar29 + 3);
            uVar28 = (uint)(bVar8 >> 4);
          } while (uVar28 != 0xf);
        }
        puVar20 = (ushort *)(pbVar1 + -0xf);
        puVar33 = puVar27;
        if ((puVar20 <= puVar27) || (puVar33 = puVar31 + 1, puVar20 < puVar33))
        goto code_r0x0049ef43;
        uVar29 = (ulong)(byte)*puVar27;
        if (uVar29 == 0xff) {
          uVar29 = 0xff;
          do {
            puVar27 = puVar33;
            puVar33 = (ushort *)((long)puVar27 + 1);
            if (puVar20 < puVar33) goto code_r0x0049ed67;
            uVar29 = uVar29 + (byte)*puVar27;
          } while ((ulong)(byte)*puVar27 == 0xff);
          if (uVar29 == 0xffffffffffffffff) {
code_r0x0049ed67:
            puVar33 = (ushort *)((long)puVar27 + 1);
code_r0x0049ef43:
            iStack_68 = (int)param_1;
            return ~(uint)puVar33 + iStack_68;
          }
        }
        uVar29 = uVar29 + 0xf;
        if ((CARRY8((ulong)puVar21,uVar29)) || (puVar27 = puVar33, CARRY8((ulong)puVar33,uVar29)))
        goto code_r0x0049ef43;
code_r0x0049e9e2:
        puVar21 = (undefined8 *)(uVar40 + param_2);
        lVar39 = uVar40 + uVar29;
        if (((long)(uVar34 - 0xc) < lVar39) ||
           (puVar31 = (ushort *)((long)puVar27 + uVar29), pbVar1 + -8 < puVar31)) {
          puVar33 = puVar27;
          if (((byte *)((long)puVar27 + uVar29) == pbVar1) && (lVar39 <= (long)uVar34)) {
            func_0x0099bd90(puVar21);
            return (int)lVar39;
          }
          goto code_r0x0049ef43;
        }
        uVar29 = uVar29 + uVar40 + param_2;
        uVar35 = uVar40 + param_2 + 8;
        if (uVar29 <= uVar35) {
          uVar29 = uVar35;
        }
        uVar29 = (~uVar40 + uVar29) - param_2;
        if ((uVar29 < 0x48) || ((uVar40 + param_2) - (long)puVar27 < 0x20)) {
code_r0x0049ea50:
          do {
            *puVar21 = *(undefined8 *)puVar27;
            puVar21 = puVar21 + 1;
            puVar27 = puVar27 + 4;
          } while (puVar21 < (undefined8 *)(lVar39 + param_2));
        }
        else {
          uVar35 = (uVar29 >> 3) + 1;
          uVar22 = uVar35 & 0x3ffffffffffffffc;
          puVar21 = puVar21 + uVar22;
          uVar29 = 0;
          do {
            uVar18 = *(undefined8 *)(puVar27 + uVar29 * 4 + 4);
            puVar20 = puVar27 + uVar29 * 4 + 8;
            uVar11 = *(undefined4 *)puVar20;
            uVar12 = *(undefined4 *)(puVar20 + 2);
            uVar13 = *(undefined4 *)(puVar20 + 4);
            uVar14 = *(undefined4 *)(puVar20 + 6);
            puVar4 = (undefined8 *)(uVar40 + param_2 + uVar29 * 8);
            *puVar4 = *(undefined8 *)(puVar27 + uVar29 * 4);
            puVar4[1] = uVar18;
            puVar5 = (undefined4 *)(uVar40 + param_2 + 0x10 + uVar29 * 8);
            *puVar5 = uVar11;
            puVar5[1] = uVar12;
            puVar5[2] = uVar13;
            puVar5[3] = uVar14;
            uVar29 = uVar29 + 4;
          } while (uVar22 != uVar29);
          puVar27 = puVar27 + uVar22 * 4;
          if (uVar35 != uVar22) goto code_r0x0049ea50;
        }
        uVar9 = *puVar31;
        puVar31 = puVar31 + 1;
        lVar43 = lVar39 - (ulong)uVar9;
        uVar41 = uVar41 & 0xf;
        uVar35 = (ulong)uVar41;
joined_r0x0049ea87:
        if (uVar41 == 0xf) {
          puVar33 = (ushort *)((long)puVar31 + 1);
          if (pbVar1 + -4 < puVar33) goto code_r0x0049ef43;
          uVar40 = (ulong)(byte)*puVar31;
          puVar31 = puVar33;
          if (uVar40 == 0xff) {
            uVar40 = 0xff;
            do {
              puVar31 = (ushort *)((long)puVar33 + 1);
              if (pbVar1 + -4 < puVar31) {
                puVar33 = (ushort *)((long)puVar33 + 1);
                goto code_r0x0049ef43;
              }
              uVar19 = *puVar33;
              uVar40 = uVar40 + (byte)uVar19;
              puVar33 = puVar31;
            } while ((ulong)(byte)uVar19 == 0xff);
          }
          uVar35 = uVar40 + 0xf;
          puVar33 = puVar31;
          if ((uVar40 == 0xffffffffffffffff) || ((ulong)~(lVar39 + param_2) < uVar35))
          goto code_r0x0049ef43;
        }
        uVar41 = (uint)uVar9;
        uVar35 = uVar35 + 4;
code_r0x0049ead9:
        puVar33 = puVar31;
        if (lVar43 < -0x10000) goto code_r0x0049ef43;
        puVar21 = (undefined8 *)(lVar39 + param_2);
        puVar44 = (undefined8 *)(lVar43 + param_2);
        uVar40 = lVar39 + uVar35;
        puVar4 = (undefined8 *)(uVar40 + param_2);
        if (uVar41 < 8) {
          *(undefined4 *)puVar21 = 0;
          *(undefined1 *)puVar21 = *(undefined1 *)puVar44;
          *(undefined1 *)((long)puVar21 + 1) = *(undefined1 *)((long)puVar44 + 1);
          *(undefined1 *)((long)puVar21 + 2) = *(undefined1 *)((long)puVar44 + 2);
          *(undefined1 *)((long)puVar21 + 3) = *(undefined1 *)((long)puVar44 + 3);
          uVar28 = *(uint *)(&UNK_001fe790 + (uVar41 << 2));
          *(undefined4 *)((long)puVar21 + 4) = *(undefined4 *)((long)puVar44 + (ulong)uVar28);
          puVar44 = (undefined8 *)
                    ((long)puVar44 + ((ulong)uVar28 - (long)*(int *)(&UNK_001fe630 + (uVar41 << 2)))
                    );
        }
        else {
          *puVar21 = *puVar44;
          puVar44 = puVar44 + 1;
        }
        puVar23 = puVar21 + 1;
        if ((long)(uVar34 - 0xc) < (long)uVar40) {
          if ((long)(uVar34 - 5) < (long)uVar40) goto code_r0x0049ef43;
          lVar43 = uVar34 - 7;
          puVar45 = puVar44;
          if (lVar39 + 8 < lVar43) {
            uVar22 = (uVar34 + param_2) - 7;
            uVar29 = lVar39 + param_2 + 0x10;
            if (uVar29 < uVar22) {
              uVar29 = uVar22;
            }
            puVar24 = (undefined8 *)(uVar34 + param_2 + -7);
            uVar29 = (uVar29 - (long)puVar21) - 9;
            if ((uVar29 < 0x68) || ((ulong)((long)puVar21 + (8 - (long)puVar44)) < 0x20)) {
code_r0x0049ee20:
              do {
                *puVar23 = *puVar45;
                puVar23 = puVar23 + 1;
                puVar45 = puVar45 + 1;
              } while (puVar23 < puVar24);
            }
            else {
              uVar29 = (uVar29 >> 3) + 1;
              uVar22 = uVar29 & 0x3ffffffffffffffc;
              puVar23 = puVar23 + uVar22;
              uVar36 = 0;
              do {
                uVar18 = (puVar44 + uVar36)[1];
                puVar45 = puVar44 + uVar36 + 2;
                uVar11 = *(undefined4 *)puVar45;
                uVar12 = *(undefined4 *)((long)puVar45 + 4);
                uVar13 = *(undefined4 *)(puVar45 + 1);
                uVar14 = *(undefined4 *)((long)puVar45 + 0xc);
                puVar45 = (undefined8 *)(lVar39 + param_2 + 8 + uVar36 * 8);
                *puVar45 = puVar44[uVar36];
                puVar45[1] = uVar18;
                puVar5 = (undefined4 *)(lVar39 + param_2 + 0x18 + uVar36 * 8);
                *puVar5 = uVar11;
                puVar5[1] = uVar12;
                puVar5[2] = uVar13;
                puVar5[3] = uVar14;
                uVar36 = uVar36 + 4;
              } while (uVar22 != uVar36);
              puVar45 = puVar44 + uVar22;
              if (uVar29 != uVar22) goto code_r0x0049ee20;
            }
            puVar23 = puVar24;
            puVar45 = (undefined8 *)((long)puVar44 + (uVar34 - lVar39) + -0xf);
          }
          if (puVar23 < puVar4) {
            lVar25 = lVar39 + 8;
            if (lVar39 + 8 < lVar43) {
              lVar25 = lVar43;
            }
            uVar29 = (uVar35 + lVar39) - lVar25;
            puVar24 = puVar23;
            puVar38 = puVar45;
            if ((3 < uVar29) && (0x1f < (ulong)((long)puVar21 + (8 - (long)puVar44)))) {
              uVar35 = 0;
              if (0x1f < uVar29) {
                uVar35 = uVar29 & 0xffffffffffffffe0;
                uVar22 = 0;
                do {
                  puVar21 = (undefined8 *)((long)puVar44 + uVar22 + (lVar25 - lVar39) + -8);
                  uVar18 = puVar21[1];
                  puVar5 = (undefined4 *)((long)puVar44 + uVar22 + (lVar25 - lVar39) + 8);
                  uVar11 = *puVar5;
                  uVar12 = puVar5[1];
                  uVar13 = puVar5[2];
                  uVar14 = puVar5[3];
                  puVar24 = (undefined8 *)(lVar25 + param_2 + uVar22);
                  *puVar24 = *puVar21;
                  puVar24[1] = uVar18;
                  puVar5 = (undefined4 *)(lVar25 + param_2 + 0x10 + uVar22);
                  *puVar5 = uVar11;
                  puVar5[1] = uVar12;
                  puVar5[2] = uVar13;
                  puVar5[3] = uVar14;
                  uVar22 = uVar22 + 0x20;
                } while (uVar35 != uVar22);
                if (uVar29 == uVar35) goto code_r0x0049e8d7;
                puVar24 = (undefined8 *)((long)puVar23 + uVar35);
                puVar38 = (undefined8 *)((long)puVar45 + uVar35);
                if ((uVar29 & 0x1c) == 0) goto code_r0x0049ee82;
              }
              uVar22 = uVar29 & 0xfffffffffffffffc;
              do {
                *(undefined4 *)((long)puVar23 + uVar35) = *(undefined4 *)((long)puVar45 + uVar35);
                uVar35 = uVar35 + 4;
              } while (uVar22 != uVar35);
              puVar24 = (undefined8 *)((long)puVar23 + uVar22);
              puVar38 = (undefined8 *)((long)puVar45 + uVar22);
              if (uVar29 == uVar22) goto code_r0x0049e8d7;
            }
code_r0x0049ee82:
            do {
              *(undefined1 *)puVar24 = *(undefined1 *)puVar38;
              puVar24 = (undefined8 *)((long)puVar24 + 1);
              puVar38 = (undefined8 *)((long)puVar38 + 1);
            } while (puVar24 < puVar4);
          }
          goto code_r0x0049e8d7;
        }
        *puVar23 = *puVar44;
      } while (uVar35 < 0x11);
      uVar22 = lVar39 + param_2 + 0x18;
      uVar29 = uVar35 + (long)puVar21;
      if (uVar35 + (long)puVar21 <= uVar22) {
        uVar29 = uVar22;
      }
      puVar23 = puVar21 + 2;
      uVar29 = (uVar29 - (long)puVar21) - 0x11;
      puVar45 = puVar44;
      if ((0x67 < uVar29) && (0x1f < (ulong)((long)puVar21 + (8 - (long)puVar44)))) {
        uVar22 = (uVar29 >> 3) + 1;
        uVar35 = uVar22 & 0x3ffffffffffffffc;
        puVar45 = puVar44 + uVar35;
        puVar23 = puVar23 + uVar35;
        uVar29 = 0;
        do {
          uVar18 = (puVar44 + uVar29 + 1)[1];
          puVar21 = puVar44 + uVar29 + 3;
          uVar11 = *(undefined4 *)puVar21;
          uVar12 = *(undefined4 *)((long)puVar21 + 4);
          uVar13 = *(undefined4 *)(puVar21 + 1);
          uVar14 = *(undefined4 *)((long)puVar21 + 0xc);
          puVar21 = (undefined8 *)(lVar39 + param_2 + 0x10 + uVar29 * 8);
          *puVar21 = puVar44[uVar29 + 1];
          puVar21[1] = uVar18;
          puVar5 = (undefined4 *)(lVar39 + param_2 + 0x20 + uVar29 * 8);
          *puVar5 = uVar11;
          puVar5[1] = uVar12;
          puVar5[2] = uVar13;
          puVar5[3] = uVar14;
          uVar29 = uVar29 + 4;
        } while (uVar35 != uVar29);
        if (uVar22 == uVar35) goto code_r0x0049e8d7;
      }
      do {
        *puVar23 = puVar45[1];
        puVar23 = puVar23 + 1;
        puVar45 = puVar45 + 1;
      } while (puVar23 < puVar4);
      goto code_r0x0049e8d7;
    }
  }
  return iVar30;
}


