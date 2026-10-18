// Function: LZ4_decompress_safe_usingDict
// Address: 004a3190
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Type propagation algorithm not settling */

int LZ4_decompress_safe_usingDict
              (uint *param_1,uint *param_2,int param_3,uint param_4,long param_5,int param_6)

{
  byte *pbVar1;
  undefined8 *puVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  uint uVar12;
  uint uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  uint *puVar16;
  byte *pbVar17;
  byte *pbVar18;
  byte *pbVar19;
  long lVar20;
  ushort *puVar21;
  uint *puVar22;
  long lVar23;
  ulong uVar24;
  uint *puVar25;
  uint uVar26;
  ulong uVar27;
  byte *pbVar28;
  uint *puVar29;
  uint *puVar30;
  uint uVar31;
  uint *puVar32;
  uint *puVar33;
  uint *puVar34;
  int iVar35;
  uint *puVar36;
  uint *puVar37;
  ulong uVar38;
  byte *pbVar39;
  uint *puVar40;
  ulong uVar41;
  byte *pbVar42;
  uint *puVar43;
  long lVar44;
  ulong uVar45;
  uint uVar46;
  ulong uVar47;
  byte *pbVar48;
  uint *puVar49;
  uint *puVar50;
  uint *puVar51;
  int iStack_50;
  uint *puStack_38;
  
  iVar35 = (int)param_2;
  iStack_50 = (int)param_1;
  if (param_6 != 0) {
    uVar41 = (ulong)param_6;
    if ((uint *)(param_5 + uVar41) == param_2) {
      if (param_6 < 0xffff) {
        if ((int)param_4 < 0 || param_1 == (uint *)0x0) {
          return -1;
        }
        if (param_4 == 0) {
          if (param_3 != 1) {
            return -1;
          }
          return -(uint)((byte)*param_1 != 0);
        }
        if (param_3 == 0) {
          return -1;
        }
        puVar50 = (uint *)((long)param_2 - uVar41);
        pbVar1 = (byte *)((long)param_1 + (long)param_3);
        puVar51 = (uint *)(ulong)param_4;
        puVar40 = (uint *)((long)param_2 + (long)puVar51);
        puVar22 = (uint *)((long)param_1 + (long)param_3 + -0x10);
        puVar43 = param_1;
        puVar36 = param_2;
        puVar37 = puVar51;
        if (param_4 < 0x40) goto code_r0x004a2613;
        puVar16 = (uint *)(pbVar1 + -0xf);
code_r0x004a1f79:
        do {
          puVar33 = (uint *)((long)param_1 + 1);
          bVar3 = (byte)*param_1;
          uVar46 = (uint)bVar3;
          pbVar48 = (byte *)(ulong)(uint)(bVar3 >> 4);
          if (bVar3 >> 4 == 0xf) {
            puVar29 = puVar33;
            if ((puVar16 <= puVar33) || (puVar29 = (uint *)((long)param_1 + 2), puVar16 < puVar29))
            goto code_r0x004a2929;
            pbVar48 = (byte *)(ulong)*(byte *)puVar33;
            if (pbVar48 == (byte *)0xff) {
              pbVar48 = (byte *)0xff;
              puVar43 = puVar29;
              do {
                puVar29 = (uint *)((long)puVar43 + 1);
                if (puVar16 < puVar29) goto code_r0x004a2929;
                puVar37 = (uint *)(ulong)(byte)*puVar43;
                pbVar48 = pbVar48 + (long)puVar37;
                puVar43 = puVar29;
              } while (puVar37 == (uint *)0xff);
              if (pbVar48 == (byte *)0xffffffffffffffff) goto code_r0x004a2929;
            }
            pbVar48 = pbVar48 + 0xf;
            puVar21 = (ushort *)((long)puVar29 + (long)pbVar48);
            puVar49 = (uint *)((long)puVar36 + (long)pbVar48);
            if ((CARRY8((ulong)puVar36,(ulong)pbVar48)) || (CARRY8((ulong)puVar29,(ulong)pbVar48)))
            goto code_r0x004a2929;
            puVar33 = puVar29;
            if ((uint *)((long)(param_2 + -8) + (long)puVar51) < puVar49) goto code_r0x004a245f;
            if (pbVar1 + -0x20 < puVar21) goto code_r0x004a245f;
            lVar44 = 0;
            do {
              uVar11 = *(undefined8 *)((byte *)((long)puVar29 + lVar44) + 8);
              *(undefined8 *)((long)puVar36 + lVar44) = *(undefined8 *)((long)puVar29 + lVar44);
              *(undefined8 *)((byte *)((long)puVar36 + lVar44) + 8) = uVar11;
              pbVar48 = (byte *)((long)puVar29 + lVar44 + 0x10);
              uVar7 = *(undefined4 *)(pbVar48 + 4);
              uVar8 = *(undefined4 *)(pbVar48 + 8);
              uVar9 = *(undefined4 *)(pbVar48 + 0xc);
              pbVar28 = (byte *)((long)puVar36 + lVar44 + 0x10);
              *(undefined4 *)pbVar28 = *(undefined4 *)pbVar48;
              *(undefined4 *)(pbVar28 + 4) = uVar7;
              *(undefined4 *)(pbVar28 + 8) = uVar8;
              *(undefined4 *)(pbVar28 + 0xc) = uVar9;
              lVar23 = lVar44 + 0x20;
              lVar44 = lVar44 + 0x20;
            } while ((uint *)((long)puVar36 + lVar23) < puVar49);
          }
          else {
            if (pbVar1 + -0x11 < puVar33) goto code_r0x004a245f;
            uVar46 = *(uint *)((long)param_1 + 5);
            uVar31 = *(uint *)((long)param_1 + 9);
            uVar26 = *(uint *)((long)param_1 + 0xd);
            *puVar36 = *puVar33;
            puVar36[1] = uVar46;
            puVar36[2] = uVar31;
            puVar36[3] = uVar26;
            puVar21 = (ushort *)((long)puVar33 + (long)pbVar48);
            puVar49 = (uint *)((long)puVar36 + (long)pbVar48);
          }
          uVar4 = *puVar21;
          uVar45 = (ulong)uVar4;
          param_1 = (uint *)(puVar21 + 1);
          puVar37 = (uint *)((long)puVar49 - uVar45);
          uVar41 = (ulong)(bVar3 & 0xf);
          puVar33 = puVar37;
          if (uVar41 == 0xf) {
            puVar43 = (uint *)((long)puVar21 + 3);
            puVar29 = puVar43;
            if (pbVar1 + -4 < puVar43) goto code_r0x004a2929;
            uVar41 = (ulong)(byte)*param_1;
            if (uVar41 == 0xff) {
              uVar41 = 0xff;
              puVar36 = puVar43;
              do {
                puVar43 = (uint *)((long)puVar36 + 1);
                puVar29 = puVar43;
                if (pbVar1 + -4 < puVar43) goto code_r0x004a2929;
                uVar46 = *puVar36;
                uVar41 = uVar41 + (byte)uVar46;
                puVar36 = puVar43;
              } while ((ulong)(byte)uVar46 == 0xff);
              if (uVar41 == 0xffffffffffffffff) goto code_r0x004a2929;
            }
            uVar41 = uVar41 + 0x13;
            puVar29 = puVar43;
            if (CARRY8((ulong)puVar49,uVar41)) goto code_r0x004a2929;
            param_1 = puVar43;
            if (puVar40 + -0x10 <= (uint *)((long)puVar49 + uVar41)) goto code_r0x004a2583;
          }
          else {
            puVar36 = (uint *)((long)puVar49 + uVar41 + 4);
            uVar41 = uVar41 + 4;
            puVar43 = param_1;
            if (puVar40 + -0x10 <= puVar36) goto code_r0x004a2583;
            if ((puVar50 <= puVar37) && (7 < uVar4)) {
              *(undefined8 *)puVar49 = *(undefined8 *)puVar37;
              *(undefined8 *)(puVar49 + 2) = *(undefined8 *)(puVar37 + 2);
              *(short *)(puVar49 + 4) = (short)puVar37[4];
              goto code_r0x004a1f79;
            }
          }
          puVar29 = param_1;
          if (puVar37 < puVar50) goto code_r0x004a2929;
          puVar36 = (uint *)(uVar41 + (long)puVar49);
          if (uVar4 < 0x10) {
            if (uVar45 == 4) {
              uVar46 = *puVar37;
              uVar26 = uVar46 >> 0x10;
              uVar31 = uVar46;
            }
            else {
              if (uVar4 == 2) {
                uVar4 = (ushort)*puVar37;
                uVar31 = CONCAT22(uVar4,uVar4);
              }
              else {
                if (uVar4 != 1) {
                  if (uVar4 < 8) {
                    *puVar49 = 0;
                    *(byte *)puVar49 = (byte)*puVar37;
                    *(byte *)((long)puVar49 + 1) = *(byte *)((long)puVar37 + 1);
                    *(byte *)((long)puVar49 + 2) = *(byte *)((long)puVar37 + 2);
                    *(byte *)((long)puVar49 + 3) = *(byte *)((long)puVar37 + 3);
                    uVar46 = *(uint *)(&UNK_001fe790 + (ulong)uVar4 * 4);
                    puVar49[1] = *(uint *)((long)puVar37 + (ulong)uVar46);
                    puVar43 = (uint *)((long)puVar37 +
                                      ((ulong)uVar46 -
                                      (long)*(int *)(&UNK_001fe630 + (ulong)uVar4 * 4)));
                  }
                  else {
                    *(undefined8 *)puVar49 = *(undefined8 *)puVar37;
                    puVar43 = puVar37 + 2;
                    puVar37 = puVar43;
                  }
                  puVar33 = (uint *)(uVar41 + (long)puVar49);
                  if ((uint *)(uVar41 + (long)puVar49) <= puVar49 + 4) {
                    puVar33 = puVar49 + 4;
                  }
                  puVar29 = puVar49 + 2;
                  pbVar48 = (byte *)((long)puVar33 + (-9 - (long)puVar49));
                  if (((byte *)0x17 < pbVar48) &&
                     ((byte *)0x1f < (byte *)((long)puVar49 + (8 - (long)puVar43)))) {
                    puVar33 = (uint *)(((ulong)pbVar48 >> 3) + 1);
                    puVar37 = (uint *)((ulong)puVar33 & 0x3ffffffffffffffc);
                    puVar29 = puVar29 + (long)puVar37 * 2;
                    puVar32 = (uint *)0x0;
                    do {
                      puVar30 = puVar43 + (long)puVar32 * 2;
                      uVar6 = puVar30[1];
                      uVar12 = puVar30[2];
                      uVar13 = puVar30[3];
                      puVar34 = puVar43 + (long)puVar32 * 2 + 4;
                      uVar46 = *puVar34;
                      uVar31 = puVar34[1];
                      uVar26 = puVar34[2];
                      uVar5 = puVar34[3];
                      puVar34 = puVar49 + (long)puVar32 * 2 + 2;
                      *puVar34 = *puVar30;
                      puVar34[1] = uVar6;
                      puVar34[2] = uVar12;
                      puVar34[3] = uVar13;
                      puVar30 = puVar49 + (long)puVar32 * 2 + 6;
                      *puVar30 = uVar46;
                      puVar30[1] = uVar31;
                      puVar30[2] = uVar26;
                      puVar30[3] = uVar5;
                      puVar32 = puVar32 + 1;
                    } while (puVar37 != puVar32);
                    puVar43 = puVar43 + (long)puVar37 * 2;
                    if (puVar33 == puVar37) goto code_r0x004a1f79;
                  }
                  do {
                    *(undefined8 *)puVar29 = *(undefined8 *)puVar43;
                    puVar29 = puVar29 + 2;
                    puVar43 = puVar43 + 2;
                  } while (puVar29 < puVar36);
                  goto code_r0x004a1f79;
                }
                bVar3 = (byte)*puVar37;
                uVar4 = CONCAT11(bVar3,bVar3);
                uVar31 = (uint)bVar3 * 0x1010101;
              }
              uVar46 = (uint)uVar4;
              uVar26 = uVar46;
            }
            puVar37 = (uint *)(ulong)(uVar26 << 0x10);
            uVar46 = uVar46 & 0xffff | uVar26 << 0x10;
            *(ulong *)puVar49 = CONCAT44(uVar31,uVar46);
            if (8 < uVar41) {
              puVar43 = (uint *)(uVar41 + (long)puVar49);
              if ((uint *)(uVar41 + (long)puVar49) <= puVar49 + 4) {
                puVar43 = puVar49 + 4;
              }
              puVar33 = puVar49 + 2;
              pbVar48 = (byte *)((long)puVar43 + (-9 - (long)puVar49));
              if ((byte *)0x17 < pbVar48) {
                puVar43 = (uint *)(((ulong)pbVar48 >> 3) + 1);
                puVar37 = (uint *)((ulong)puVar43 & 0x3ffffffffffffffc);
                puVar33 = puVar33 + (long)puVar37 * 2;
                puVar29 = (uint *)0x0;
                do {
                  puVar32 = puVar49 + (long)puVar29 * 2 + 2;
                  *puVar32 = uVar46;
                  puVar32[1] = uVar31;
                  puVar32[2] = uVar46;
                  puVar32[3] = uVar31;
                  puVar32 = puVar49 + (long)puVar29 * 2 + 6;
                  *puVar32 = uVar46;
                  puVar32[1] = uVar31;
                  puVar32[2] = uVar46;
                  puVar32[3] = uVar31;
                  puVar29 = puVar29 + 1;
                } while (puVar37 != puVar29);
                if (puVar43 == puVar37) goto code_r0x004a1f79;
              }
              do {
                *(ulong *)puVar33 = CONCAT44(uVar31,uVar46);
                puVar33 = puVar33 + 2;
              } while (puVar33 < puVar36);
            }
            goto code_r0x004a1f79;
          }
          do {
            puVar2 = (undefined8 *)((long)puVar49 + -uVar45);
            uVar11 = puVar2[1];
            *(undefined8 *)puVar49 = *puVar2;
            *(undefined8 *)(puVar49 + 2) = uVar11;
            pbVar48 = (byte *)((long)puVar49 + -uVar45 + 0x10);
            uVar11 = *(undefined8 *)(pbVar48 + 8);
            *(undefined8 *)(puVar49 + 4) = *(undefined8 *)pbVar48;
            *(undefined8 *)(puVar49 + 6) = uVar11;
            puVar49 = puVar49 + 8;
          } while (puVar49 < puVar36);
        } while( true );
      }
      iVar35 = -1;
      if (-1 < (int)param_4 && param_1 != (uint *)0x0) {
        if (param_4 == 0) {
          if (param_3 == 1) {
            iVar35 = -(uint)((byte)*param_1 != 0);
          }
        }
        else if (param_3 != 0) {
          pbVar1 = (byte *)((long)param_1 + (long)param_3);
          uVar41 = (ulong)param_4;
          puVar43 = (uint *)((long)param_1 + (long)param_3 + -0x10);
          if (0x3f < param_4) {
            uVar45 = 0;
code_r0x0049e486:
            do {
              puVar36 = (uint *)(uVar45 + (long)param_2);
              puVar40 = (uint *)((long)param_1 + 1);
              bVar3 = (byte)*param_1;
              uVar46 = (uint)bVar3;
              uVar27 = (ulong)(uint)(bVar3 >> 4);
              if (bVar3 >> 4 == 0xf) {
                puVar37 = (uint *)(pbVar1 + -0xf);
                puVar22 = puVar40;
                if ((puVar37 <= puVar40) ||
                   (puVar22 = (uint *)((long)param_1 + 2), puVar37 < puVar22))
                goto code_r0x0049ef43;
                uVar27 = (ulong)*(byte *)puVar40;
                if (uVar27 == 0xff) {
                  uVar27 = 0xff;
                  puVar40 = puVar22;
                  do {
                    puVar22 = (uint *)((long)puVar40 + 1);
                    if (puVar37 < puVar22) goto code_r0x0049ef43;
                    uVar31 = *puVar40;
                    uVar27 = uVar27 + (byte)uVar31;
                    puVar40 = puVar22;
                  } while ((ulong)(byte)uVar31 == 0xff);
                  if (uVar27 == 0xffffffffffffffff) goto code_r0x0049ef43;
                }
                uVar27 = uVar27 + 0xf;
                puVar21 = (ushort *)((long)puVar22 + uVar27);
                if ((CARRY8((ulong)puVar36,uVar27)) || (CARRY8((ulong)puVar22,uVar27)))
                goto code_r0x0049ef43;
                lVar44 = uVar27 + uVar45;
                puVar40 = puVar22;
                if ((long)(uVar41 - 0x20) < lVar44) goto code_r0x0049e9e2;
                if (pbVar1 + -0x20 < puVar21) goto code_r0x0049e9e2;
                lVar23 = 0;
                do {
                  uVar11 = *(undefined8 *)((byte *)((long)puVar22 + lVar23) + 8);
                  *(undefined8 *)((long)puVar36 + lVar23) = *(undefined8 *)((long)puVar22 + lVar23);
                  *(undefined8 *)((byte *)((long)puVar36 + lVar23) + 8) = uVar11;
                  pbVar48 = (byte *)((long)puVar22 + lVar23 + 0x10);
                  uVar7 = *(undefined4 *)(pbVar48 + 4);
                  uVar8 = *(undefined4 *)(pbVar48 + 8);
                  uVar9 = *(undefined4 *)(pbVar48 + 0xc);
                  pbVar28 = (byte *)((long)puVar36 + lVar23 + 0x10);
                  *(undefined4 *)pbVar28 = *(undefined4 *)pbVar48;
                  *(undefined4 *)(pbVar28 + 4) = uVar7;
                  *(undefined4 *)(pbVar28 + 8) = uVar8;
                  *(undefined4 *)(pbVar28 + 0xc) = uVar9;
                  lVar20 = lVar23 + 0x20;
                  lVar23 = lVar23 + 0x20;
                } while ((byte *)((long)puVar36 + lVar20) < (byte *)(lVar44 + (long)param_2));
              }
              else {
                if (pbVar1 + -0x11 < puVar40) goto code_r0x0049e9e2;
                uVar46 = *(uint *)((long)param_1 + 5);
                uVar31 = *(uint *)((long)param_1 + 9);
                uVar26 = *(uint *)((long)param_1 + 0xd);
                *puVar36 = *puVar40;
                puVar36[1] = uVar46;
                puVar36[2] = uVar31;
                puVar36[3] = uVar26;
                puVar21 = (ushort *)((long)puVar40 + uVar27);
                lVar44 = uVar45 + uVar27;
              }
              pbVar48 = (byte *)(lVar44 + (long)param_2);
              uVar4 = *puVar21;
              uVar27 = (ulong)uVar4;
              uVar46 = (uint)uVar4;
              param_1 = (uint *)(puVar21 + 1);
              lVar23 = lVar44 - uVar27;
              puVar40 = (uint *)(lVar23 + (long)param_2);
              uVar47 = (ulong)(bVar3 & 0xf);
              if (uVar47 == 0xf) {
                puVar36 = (uint *)((long)puVar21 + 3);
                puVar22 = puVar36;
                if (pbVar1 + -4 < puVar36) goto code_r0x0049ef43;
                uVar47 = (ulong)(byte)*param_1;
                if (uVar47 == 0xff) {
                  uVar47 = 0xff;
                  puVar37 = puVar36;
                  do {
                    puVar36 = (uint *)((long)puVar37 + 1);
                    puVar22 = puVar36;
                    if (pbVar1 + -4 < puVar36) goto code_r0x0049ef43;
                    uVar31 = *puVar37;
                    uVar47 = uVar47 + (byte)uVar31;
                    puVar37 = puVar36;
                  } while ((ulong)(byte)uVar31 == 0xff);
                  if (uVar47 == 0xffffffffffffffff) goto code_r0x0049ef43;
                }
                uVar47 = uVar47 + 0x13;
                puVar22 = puVar36;
                if (CARRY8((ulong)pbVar48,uVar47)) goto code_r0x0049ef43;
                param_1 = puVar36;
                if ((long)(uVar41 - 0x40) <= (long)(lVar44 + uVar47)) goto code_r0x0049ead9;
              }
              else {
                uVar45 = lVar44 + uVar47 + 4;
                uVar47 = uVar47 + 4;
                puVar36 = param_1;
                if ((long)(uVar41 - 0x40) <= (long)uVar45) goto code_r0x0049ead9;
                if (7 < uVar4) {
                  *(undefined8 *)pbVar48 = *(undefined8 *)puVar40;
                  *(undefined8 *)(pbVar48 + 8) = *(undefined8 *)(puVar40 + 2);
                  *(short *)(pbVar48 + 0x10) = (short)puVar40[4];
                  goto code_r0x0049e486;
                }
              }
              puVar22 = param_1;
              if (lVar23 < -0x10000) goto code_r0x0049ef43;
              uVar45 = uVar47 + lVar44;
              pbVar28 = (byte *)(uVar45 + (long)param_2);
              if (uVar4 < 0x10) {
                if (uVar27 == 4) {
                  uVar46 = *puVar40;
                  uVar26 = uVar46 >> 0x10;
                  uVar31 = uVar46;
                }
                else {
                  if (uVar4 == 2) {
                    uVar4 = (ushort)*puVar40;
                    uVar31 = CONCAT22(uVar4,uVar4);
                  }
                  else {
                    if (uVar4 != 1) {
                      if (uVar4 < 8) {
                        pbVar48[0] = 0;
                        pbVar48[1] = 0;
                        pbVar48[2] = 0;
                        pbVar48[3] = 0;
                        *pbVar48 = (byte)*puVar40;
                        pbVar48[1] = *(byte *)((long)puVar40 + 1);
                        pbVar48[2] = *(byte *)((long)puVar40 + 2);
                        pbVar48[3] = *(byte *)((long)puVar40 + 3);
                        uVar46 = *(uint *)(&UNK_001fe790 + (ulong)uVar4 * 4);
                        *(undefined4 *)(pbVar48 + 4) =
                             *(undefined4 *)((long)puVar40 + (ulong)uVar46);
                        puVar40 = (uint *)((long)puVar40 +
                                          ((ulong)uVar46 -
                                          (long)*(int *)(&UNK_001fe630 + (ulong)uVar4 * 4)));
                      }
                      else {
                        *(undefined8 *)pbVar48 = *(undefined8 *)puVar40;
                        puVar40 = puVar40 + 2;
                      }
                      pbVar39 = (byte *)((long)param_2 + lVar44 + uVar47);
                      pbVar42 = (byte *)((long)param_2 + lVar44 + 0x10);
                      if (pbVar39 <= pbVar42) {
                        pbVar39 = pbVar42;
                      }
                      pbVar42 = pbVar48 + 8;
                      if (((byte *)0x17 < pbVar39 + (-9 - (long)pbVar48)) &&
                         ((byte *)0x1f < (byte *)((long)param_2 + ((lVar44 + 8) - (long)puVar40))))
                      {
                        uVar24 = ((ulong)(pbVar39 + (-9 - (long)pbVar48)) >> 3) + 1;
                        uVar27 = uVar24 & 0x3ffffffffffffffc;
                        pbVar42 = pbVar42 + uVar27 * 8;
                        uVar47 = 0;
                        do {
                          puVar36 = puVar40 + uVar47 * 2;
                          uVar6 = puVar36[1];
                          uVar12 = puVar36[2];
                          uVar13 = puVar36[3];
                          puVar37 = puVar40 + uVar47 * 2 + 4;
                          uVar46 = *puVar37;
                          uVar31 = puVar37[1];
                          uVar26 = puVar37[2];
                          uVar5 = puVar37[3];
                          puVar37 = (uint *)((long)param_2 + uVar47 * 8 + lVar44 + 8);
                          *puVar37 = *puVar36;
                          puVar37[1] = uVar6;
                          puVar37[2] = uVar12;
                          puVar37[3] = uVar13;
                          puVar36 = (uint *)((long)param_2 + uVar47 * 8 + lVar44 + 0x18);
                          *puVar36 = uVar46;
                          puVar36[1] = uVar31;
                          puVar36[2] = uVar26;
                          puVar36[3] = uVar5;
                          uVar47 = uVar47 + 4;
                        } while (uVar27 != uVar47);
                        puVar40 = puVar40 + uVar27 * 2;
                        if (uVar24 == uVar27) goto code_r0x0049e486;
                      }
                      do {
                        *(undefined8 *)pbVar42 = *(undefined8 *)puVar40;
                        pbVar42 = pbVar42 + 8;
                        puVar40 = puVar40 + 2;
                      } while (pbVar42 < pbVar28);
                      goto code_r0x0049e486;
                    }
                    bVar3 = (byte)*puVar40;
                    uVar4 = CONCAT11(bVar3,bVar3);
                    uVar31 = (uint)bVar3 * 0x1010101;
                  }
                  uVar46 = (uint)uVar4;
                  uVar26 = uVar46;
                }
                uVar46 = uVar46 & 0xffff | uVar26 << 0x10;
                *(ulong *)pbVar48 = CONCAT44(uVar31,uVar46);
                if (8 < (long)uVar47) {
                  pbVar39 = (byte *)((long)param_2 + lVar44 + uVar47);
                  pbVar42 = (byte *)((long)param_2 + lVar44 + 0x10);
                  if (pbVar39 <= pbVar42) {
                    pbVar39 = pbVar42;
                  }
                  pbVar42 = pbVar48 + 8;
                  if ((byte *)0x17 < pbVar39 + (-9 - (long)pbVar48)) {
                    uVar24 = ((ulong)(pbVar39 + (-9 - (long)pbVar48)) >> 3) + 1;
                    uVar27 = uVar24 & 0x3ffffffffffffffc;
                    pbVar42 = pbVar42 + uVar27 * 8;
                    uVar47 = 0;
                    do {
                      puVar40 = (uint *)((long)param_2 + uVar47 * 8 + lVar44 + 8);
                      *puVar40 = uVar46;
                      puVar40[1] = uVar31;
                      puVar40[2] = uVar46;
                      puVar40[3] = uVar31;
                      puVar40 = (uint *)((long)param_2 + uVar47 * 8 + lVar44 + 0x18);
                      *puVar40 = uVar46;
                      puVar40[1] = uVar31;
                      puVar40[2] = uVar46;
                      puVar40[3] = uVar31;
                      uVar47 = uVar47 + 4;
                    } while (uVar27 != uVar47);
                    if (uVar24 == uVar27) goto code_r0x0049e486;
                  }
                  do {
                    *(ulong *)pbVar42 = CONCAT44(uVar31,uVar46);
                    pbVar42 = pbVar42 + 8;
                  } while (pbVar42 < pbVar28);
                }
                goto code_r0x0049e486;
              }
              do {
                uVar11 = *(undefined8 *)(pbVar48 + -uVar27 + 8);
                *(undefined8 *)pbVar48 = *(undefined8 *)(pbVar48 + -uVar27);
                *(undefined8 *)(pbVar48 + 8) = uVar11;
                uVar11 = *(undefined8 *)(pbVar48 + -uVar27 + 0x10 + 8);
                *(undefined8 *)(pbVar48 + 0x10) = *(undefined8 *)(pbVar48 + -uVar27 + 0x10);
                *(undefined8 *)(pbVar48 + 0x18) = uVar11;
                pbVar48 = pbVar48 + 0x20;
              } while (pbVar48 < pbVar28);
            } while( true );
          }
          uVar45 = 0;
          puVar36 = param_1;
code_r0x0049e8d7:
          do {
            pbVar48 = (byte *)(uVar45 + (long)param_2);
            puVar40 = (uint *)((long)puVar36 + 1);
            uVar46 = (uint)(byte)*puVar36;
            uVar31 = (uint)(byte)((byte)*puVar36 >> 4);
            if (uVar31 != 0xf) {
              do {
                uVar27 = (ulong)uVar31;
                if ((puVar43 <= puVar40) || ((long)(uVar41 - 0x20) < (long)uVar45))
                goto code_r0x0049e9e2;
                uVar11 = *(undefined8 *)(puVar40 + 2);
                *(undefined8 *)pbVar48 = *(undefined8 *)puVar40;
                *(undefined8 *)(pbVar48 + 8) = uVar11;
                lVar44 = uVar45 + uVar27;
                uVar46 = uVar46 & 0xf;
                uVar47 = (ulong)uVar46;
                uVar4 = *(ushort *)((long)puVar40 + uVar27);
                puVar36 = (uint *)((long)puVar40 + uVar27 + 2);
                lVar23 = lVar44 - (ulong)uVar4;
                if ((uVar46 == 0xf) || (uVar4 < 8)) goto joined_r0x0049ea87;
                *(undefined8 *)((long)param_2 + lVar44) = *(undefined8 *)((long)param_2 + lVar23);
                *(undefined8 *)((long)param_2 + lVar44 + 8) =
                     *(undefined8 *)((long)param_2 + lVar23 + 8);
                *(undefined2 *)((long)param_2 + lVar44 + 0x10) =
                     *(undefined2 *)((long)param_2 + lVar23 + 0x10);
                uVar45 = lVar44 + uVar47 + 4;
                pbVar48 = (byte *)((long)param_2 + uVar47 + lVar44 + 4);
                bVar3 = *(byte *)((long)puVar40 + uVar27 + 2);
                uVar46 = (uint)bVar3;
                puVar40 = (uint *)((long)puVar40 + uVar27 + 3);
                uVar31 = (uint)(bVar3 >> 4);
              } while (uVar31 != 0xf);
            }
            puVar37 = (uint *)(pbVar1 + -0xf);
            puVar22 = puVar40;
            if ((puVar37 <= puVar40) || (puVar22 = (uint *)((long)puVar36 + 2), puVar37 < puVar22))
            goto code_r0x0049ef43;
            uVar27 = (ulong)(byte)*puVar40;
            if (uVar27 == 0xff) {
              uVar27 = 0xff;
              do {
                puVar40 = puVar22;
                puVar22 = (uint *)((long)puVar40 + 1);
                if (puVar37 < puVar22) goto code_r0x0049ed67;
                uVar27 = uVar27 + (byte)*puVar40;
              } while ((ulong)(byte)*puVar40 == 0xff);
              if (uVar27 == 0xffffffffffffffff) {
code_r0x0049ed67:
                puVar22 = (uint *)((long)puVar40 + 1);
code_r0x0049ef43:
                return ~(uint)puVar22 + iStack_50;
              }
            }
            uVar27 = uVar27 + 0xf;
            if ((CARRY8((ulong)pbVar48,uVar27)) ||
               (puVar40 = puVar22, CARRY8((ulong)puVar22,uVar27))) goto code_r0x0049ef43;
code_r0x0049e9e2:
            pbVar48 = (byte *)(uVar45 + (long)param_2);
            lVar44 = uVar45 + uVar27;
            if (((long)(uVar41 - 0xc) < lVar44) ||
               (puVar21 = (ushort *)((long)puVar40 + uVar27), pbVar1 + -8 < puVar21)) {
              puVar22 = puVar40;
              if (((byte *)((long)puVar40 + uVar27) == pbVar1) && (lVar44 <= (long)uVar41)) {
                func_0x0099bd90(pbVar48);
                return (int)lVar44;
              }
              goto code_r0x0049ef43;
            }
            pbVar28 = (byte *)((long)param_2 + uVar27 + uVar45);
            pbVar39 = (byte *)((long)param_2 + uVar45 + 8);
            if (pbVar28 <= pbVar39) {
              pbVar28 = pbVar39;
            }
            if ((pbVar28 + (~uVar45 - (long)param_2) < (byte *)0x48) ||
               ((byte *)((long)param_2 + (uVar45 - (long)puVar40)) < (byte *)0x20)) {
code_r0x0049ea50:
              do {
                *(undefined8 *)pbVar48 = *(undefined8 *)puVar40;
                pbVar48 = pbVar48 + 8;
                puVar40 = puVar40 + 2;
              } while (pbVar48 < (byte *)(lVar44 + (long)param_2));
            }
            else {
              uVar47 = ((ulong)(pbVar28 + (~uVar45 - (long)param_2)) >> 3) + 1;
              uVar24 = uVar47 & 0x3ffffffffffffffc;
              pbVar48 = pbVar48 + uVar24 * 8;
              uVar27 = 0;
              do {
                uVar11 = *(undefined8 *)(puVar40 + uVar27 * 2 + 2);
                puVar36 = puVar40 + uVar27 * 2 + 4;
                uVar31 = *puVar36;
                uVar26 = puVar36[1];
                uVar5 = puVar36[2];
                uVar6 = puVar36[3];
                pbVar28 = (byte *)((long)param_2 + uVar27 * 8 + uVar45);
                *(undefined8 *)pbVar28 = *(undefined8 *)(puVar40 + uVar27 * 2);
                *(undefined8 *)(pbVar28 + 8) = uVar11;
                puVar36 = (uint *)((long)param_2 + uVar27 * 8 + uVar45 + 0x10);
                *puVar36 = uVar31;
                puVar36[1] = uVar26;
                puVar36[2] = uVar5;
                puVar36[3] = uVar6;
                uVar27 = uVar27 + 4;
              } while (uVar24 != uVar27);
              puVar40 = puVar40 + uVar24 * 2;
              if (uVar47 != uVar24) goto code_r0x0049ea50;
            }
            uVar4 = *puVar21;
            puVar36 = (uint *)(puVar21 + 1);
            lVar23 = lVar44 - (ulong)uVar4;
            uVar46 = uVar46 & 0xf;
            uVar47 = (ulong)uVar46;
joined_r0x0049ea87:
            if (uVar46 == 0xf) {
              puVar22 = (uint *)((long)puVar36 + 1);
              if (pbVar1 + -4 < puVar22) goto code_r0x0049ef43;
              uVar45 = (ulong)(byte)*puVar36;
              puVar36 = puVar22;
              if (uVar45 == 0xff) {
                uVar45 = 0xff;
                do {
                  puVar36 = (uint *)((long)puVar22 + 1);
                  if (pbVar1 + -4 < puVar36) {
                    puVar22 = (uint *)((long)puVar22 + 1);
                    goto code_r0x0049ef43;
                  }
                  uVar46 = *puVar22;
                  uVar45 = uVar45 + (byte)uVar46;
                  puVar22 = puVar36;
                } while ((ulong)(byte)uVar46 == 0xff);
              }
              uVar47 = uVar45 + 0xf;
              puVar22 = puVar36;
              if ((uVar45 == 0xffffffffffffffff) || (~(ulong)(lVar44 + (long)param_2) < uVar47))
              goto code_r0x0049ef43;
            }
            uVar46 = (uint)uVar4;
            uVar47 = uVar47 + 4;
code_r0x0049ead9:
            puVar22 = puVar36;
            if (lVar23 < -0x10000) goto code_r0x0049ef43;
            pbVar48 = (byte *)(lVar44 + (long)param_2);
            pbVar39 = (byte *)(lVar23 + (long)param_2);
            uVar45 = lVar44 + uVar47;
            pbVar28 = (byte *)(uVar45 + (long)param_2);
            if (uVar46 < 8) {
              pbVar48[0] = 0;
              pbVar48[1] = 0;
              pbVar48[2] = 0;
              pbVar48[3] = 0;
              *pbVar48 = *pbVar39;
              pbVar48[1] = pbVar39[1];
              pbVar48[2] = pbVar39[2];
              pbVar48[3] = pbVar39[3];
              uVar31 = *(uint *)(&UNK_001fe790 + (uVar46 << 2));
              *(undefined4 *)(pbVar48 + 4) = *(undefined4 *)(pbVar39 + uVar31);
              pbVar39 = pbVar39 + ((ulong)uVar31 - (long)*(int *)(&UNK_001fe630 + (uVar46 << 2)));
            }
            else {
              *(undefined8 *)pbVar48 = *(undefined8 *)pbVar39;
              pbVar39 = pbVar39 + 8;
            }
            pbVar42 = pbVar48 + 8;
            if ((long)(uVar41 - 0xc) < (long)uVar45) {
              if ((long)(uVar41 - 5) < (long)uVar45) goto code_r0x0049ef43;
              lVar23 = uVar41 - 7;
              pbVar17 = pbVar39;
              if (lVar44 + 8 < lVar23) {
                pbVar18 = (byte *)((long)param_2 + (uVar41 - 7));
                pbVar17 = (byte *)((long)param_2 + lVar44 + 0x10);
                if (pbVar17 < pbVar18) {
                  pbVar17 = pbVar18;
                }
                pbVar19 = (byte *)((long)param_2 + (uVar41 - 7));
                pbVar18 = pbVar39;
                if ((pbVar17 + (-9 - (long)pbVar48) < (byte *)0x68) ||
                   (pbVar48 + (8 - (long)pbVar39) < (byte *)0x20)) {
code_r0x0049ee20:
                  do {
                    *(undefined8 *)pbVar42 = *(undefined8 *)pbVar18;
                    pbVar42 = pbVar42 + 8;
                    pbVar18 = pbVar18 + 8;
                  } while (pbVar42 < pbVar19);
                }
                else {
                  uVar27 = ((ulong)(pbVar17 + (-9 - (long)pbVar48)) >> 3) + 1;
                  uVar24 = uVar27 & 0x3ffffffffffffffc;
                  pbVar42 = pbVar42 + uVar24 * 8;
                  uVar38 = 0;
                  do {
                    uVar11 = *(undefined8 *)(pbVar39 + uVar38 * 8 + 8);
                    pbVar17 = pbVar39 + uVar38 * 8 + 0x10;
                    uVar7 = *(undefined4 *)pbVar17;
                    uVar8 = *(undefined4 *)(pbVar17 + 4);
                    uVar9 = *(undefined4 *)(pbVar17 + 8);
                    uVar10 = *(undefined4 *)(pbVar17 + 0xc);
                    pbVar17 = (byte *)((long)param_2 + uVar38 * 8 + lVar44 + 8);
                    *(undefined8 *)pbVar17 = *(undefined8 *)(pbVar39 + uVar38 * 8);
                    *(undefined8 *)(pbVar17 + 8) = uVar11;
                    pbVar17 = (byte *)((long)param_2 + uVar38 * 8 + lVar44 + 0x18);
                    *(undefined4 *)pbVar17 = uVar7;
                    *(undefined4 *)(pbVar17 + 4) = uVar8;
                    *(undefined4 *)(pbVar17 + 8) = uVar9;
                    *(undefined4 *)(pbVar17 + 0xc) = uVar10;
                    uVar38 = uVar38 + 4;
                  } while (uVar24 != uVar38);
                  pbVar18 = pbVar39 + uVar24 * 8;
                  if (uVar27 != uVar24) goto code_r0x0049ee20;
                }
                pbVar42 = pbVar19;
                pbVar17 = pbVar39 + (uVar41 - lVar44) + -0xf;
              }
              if (pbVar42 < pbVar28) {
                lVar20 = lVar44 + 8;
                if (lVar44 + 8 < lVar23) {
                  lVar20 = lVar23;
                }
                uVar27 = (uVar47 + lVar44) - lVar20;
                pbVar18 = pbVar42;
                pbVar19 = pbVar17;
                if ((3 < uVar27) && ((byte *)0x1f < pbVar48 + (8 - (long)pbVar39))) {
                  uVar47 = 0;
                  if (0x1f < uVar27) {
                    uVar47 = uVar27 & 0xffffffffffffffe0;
                    uVar24 = 0;
                    do {
                      uVar11 = *(undefined8 *)(pbVar39 + uVar24 + (lVar20 - lVar44) + -8 + 8);
                      pbVar48 = pbVar39 + uVar24 + (lVar20 - lVar44) + 8;
                      uVar7 = *(undefined4 *)pbVar48;
                      uVar8 = *(undefined4 *)(pbVar48 + 4);
                      uVar9 = *(undefined4 *)(pbVar48 + 8);
                      uVar10 = *(undefined4 *)(pbVar48 + 0xc);
                      pbVar48 = (byte *)((long)param_2 + uVar24 + lVar20);
                      *(undefined8 *)pbVar48 =
                           *(undefined8 *)(pbVar39 + uVar24 + (lVar20 - lVar44) + -8);
                      *(undefined8 *)(pbVar48 + 8) = uVar11;
                      pbVar48 = (byte *)((long)param_2 + uVar24 + lVar20 + 0x10);
                      *(undefined4 *)pbVar48 = uVar7;
                      *(undefined4 *)(pbVar48 + 4) = uVar8;
                      *(undefined4 *)(pbVar48 + 8) = uVar9;
                      *(undefined4 *)(pbVar48 + 0xc) = uVar10;
                      uVar24 = uVar24 + 0x20;
                    } while (uVar47 != uVar24);
                    if (uVar27 == uVar47) goto code_r0x0049e8d7;
                    pbVar18 = pbVar42 + uVar47;
                    pbVar19 = pbVar17 + uVar47;
                    if ((uVar27 & 0x1c) == 0) goto code_r0x0049ee82;
                  }
                  uVar24 = uVar27 & 0xfffffffffffffffc;
                  do {
                    *(undefined4 *)(pbVar42 + uVar47) = *(undefined4 *)(pbVar17 + uVar47);
                    uVar47 = uVar47 + 4;
                  } while (uVar24 != uVar47);
                  pbVar18 = pbVar42 + uVar24;
                  pbVar19 = pbVar17 + uVar24;
                  if (uVar27 == uVar24) goto code_r0x0049e8d7;
                }
code_r0x0049ee82:
                do {
                  *pbVar18 = *pbVar19;
                  pbVar18 = pbVar18 + 1;
                  pbVar19 = pbVar19 + 1;
                } while (pbVar18 < pbVar28);
              }
              goto code_r0x0049e8d7;
            }
            *(undefined8 *)pbVar42 = *(undefined8 *)pbVar39;
          } while (uVar47 < 0x11);
          pbVar17 = (byte *)((long)param_2 + lVar44 + 0x18);
          pbVar42 = pbVar48 + uVar47;
          if (pbVar48 + uVar47 <= pbVar17) {
            pbVar42 = pbVar17;
          }
          pbVar17 = pbVar48 + 0x10;
          pbVar18 = pbVar39;
          if (((byte *)0x67 < pbVar42 + (-0x11 - (long)pbVar48)) &&
             ((byte *)0x1f < pbVar48 + (8 - (long)pbVar39))) {
            uVar24 = ((ulong)(pbVar42 + (-0x11 - (long)pbVar48)) >> 3) + 1;
            uVar47 = uVar24 & 0x3ffffffffffffffc;
            pbVar18 = pbVar39 + uVar47 * 8;
            pbVar17 = pbVar17 + uVar47 * 8;
            uVar27 = 0;
            do {
              uVar11 = *(undefined8 *)(pbVar39 + uVar27 * 8 + 8 + 8);
              pbVar48 = pbVar39 + uVar27 * 8 + 0x18;
              uVar7 = *(undefined4 *)pbVar48;
              uVar8 = *(undefined4 *)(pbVar48 + 4);
              uVar9 = *(undefined4 *)(pbVar48 + 8);
              uVar10 = *(undefined4 *)(pbVar48 + 0xc);
              pbVar48 = (byte *)((long)param_2 + uVar27 * 8 + lVar44 + 0x10);
              *(undefined8 *)pbVar48 = *(undefined8 *)(pbVar39 + uVar27 * 8 + 8);
              *(undefined8 *)(pbVar48 + 8) = uVar11;
              pbVar48 = (byte *)((long)param_2 + uVar27 * 8 + lVar44 + 0x20);
              *(undefined4 *)pbVar48 = uVar7;
              *(undefined4 *)(pbVar48 + 4) = uVar8;
              *(undefined4 *)(pbVar48 + 8) = uVar9;
              *(undefined4 *)(pbVar48 + 0xc) = uVar10;
              uVar27 = uVar27 + 4;
            } while (uVar47 != uVar27);
            if (uVar24 == uVar47) goto code_r0x0049e8d7;
          }
          do {
            *(undefined8 *)pbVar17 = *(undefined8 *)(pbVar18 + 8);
            pbVar17 = pbVar17 + 8;
            pbVar18 = pbVar18 + 8;
          } while (pbVar17 < pbVar28);
          goto code_r0x0049e8d7;
        }
      }
      return iVar35;
    }
    if ((int)param_4 < 0 || param_1 == (uint *)0x0) {
      return -1;
    }
    lVar44 = param_5 + uVar41;
    if (param_5 == 0) {
      lVar44 = 0;
    }
    if (param_4 == 0) {
      if (param_3 != 1) {
        return -1;
      }
      return -(uint)((byte)*param_1 != 0);
    }
    if (param_3 == 0) {
      return -1;
    }
    pbVar1 = (byte *)((long)param_1 + (long)param_3);
    uVar45 = (ulong)param_4;
    puVar43 = (uint *)((long)param_2 + uVar45);
    puVar37 = (uint *)((long)param_1 + (long)param_3 + -0x10);
    puVar36 = (uint *)((long)param_2 + (uVar45 - 0x20));
    puVar40 = param_2;
    if (param_4 < 0x40) goto code_r0x0049fdc3;
    puVar22 = (uint *)(pbVar1 + -0xf);
code_r0x0049f30c:
    do {
      puVar51 = (uint *)((long)param_1 + 1);
      bVar3 = (byte)*param_1;
      uVar46 = (uint)bVar3;
      uVar27 = (ulong)(uint)(bVar3 >> 4);
      puStack_38 = puVar51;
      if (bVar3 >> 4 == 0xf) {
        if ((puVar22 <= puVar51) || (puStack_38 = (uint *)((long)param_1 + 2), puVar22 < puStack_38)
           ) goto code_r0x004a0078;
        uVar27 = (ulong)*(byte *)puVar51;
        if (uVar27 == 0xff) {
          uVar27 = 0xff;
          puVar51 = puStack_38;
          do {
            puStack_38 = (uint *)((long)puVar51 + 1);
            if (puVar22 < puStack_38) goto code_r0x004a0078;
            uVar31 = *puVar51;
            uVar27 = uVar27 + (byte)uVar31;
            puVar51 = puStack_38;
          } while ((ulong)(byte)uVar31 == 0xff);
          if (uVar27 == 0xffffffffffffffff) goto code_r0x004a0078;
        }
        uVar27 = uVar27 + 0xf;
        puVar21 = (ushort *)((long)puStack_38 + uVar27);
        puVar51 = (uint *)((long)puVar40 + uVar27);
        if ((CARRY8((ulong)puVar40,uVar27)) || (CARRY8((ulong)puStack_38,uVar27)))
        goto code_r0x004a0078;
        if (puVar36 < puVar51) goto code_r0x0049f9e9;
        if (pbVar1 + -0x20 < puVar21) goto code_r0x0049f9e9;
        lVar23 = 0;
        do {
          uVar11 = *(undefined8 *)((byte *)((long)puStack_38 + lVar23) + 8);
          *(undefined8 *)((long)puVar40 + lVar23) = *(undefined8 *)((long)puStack_38 + lVar23);
          *(undefined8 *)((byte *)((long)puVar40 + lVar23) + 8) = uVar11;
          pbVar48 = (byte *)((long)puStack_38 + lVar23 + 0x10);
          uVar11 = *(undefined8 *)(pbVar48 + 8);
          pbVar28 = (byte *)((long)puVar40 + lVar23 + 0x10);
          *(undefined8 *)pbVar28 = *(undefined8 *)pbVar48;
          *(undefined8 *)(pbVar28 + 8) = uVar11;
          lVar20 = lVar23 + 0x20;
          lVar23 = lVar23 + 0x20;
        } while ((uint *)((long)puVar40 + lVar20) < puVar51);
      }
      else {
        if (pbVar1 + -0x11 < puVar51) goto code_r0x0049f9e9;
        uVar11 = *(undefined8 *)((long)param_1 + 9);
        *(undefined8 *)puVar40 = *(undefined8 *)puVar51;
        *(undefined8 *)(puVar40 + 2) = uVar11;
        puVar21 = (ushort *)((long)puVar51 + uVar27);
        puVar51 = (uint *)((long)puVar40 + uVar27);
      }
      uVar4 = *puVar21;
      uVar24 = (ulong)uVar4;
      param_1 = (uint *)(puVar21 + 1);
      puVar50 = (uint *)((long)puVar51 - uVar24);
      uVar47 = (ulong)(bVar3 & 0xf);
      if (uVar47 == 0xf) {
        puStack_38 = (uint *)((long)puVar21 + 3);
        if (pbVar1 + -4 < puStack_38) goto code_r0x004a0078;
        uVar47 = (ulong)(byte)*param_1;
        if (uVar47 == 0xff) {
          uVar47 = 0xff;
          puVar40 = puStack_38;
          do {
            puStack_38 = (uint *)((long)puVar40 + 1);
            if (pbVar1 + -4 < puStack_38) goto code_r0x004a0078;
            uVar46 = *puVar40;
            uVar47 = uVar47 + (byte)uVar46;
            puVar40 = puStack_38;
          } while ((ulong)(byte)uVar46 == 0xff);
          if (uVar47 == 0xffffffffffffffff) goto code_r0x004a0078;
        }
        uVar47 = uVar47 + 0x13;
        if (CARRY8((ulong)puVar51,uVar47)) goto code_r0x004a0078;
        if (puVar43 + -0x10 <= (uint *)((long)puVar51 + uVar47)) goto code_r0x0049fb21;
      }
      else {
        puVar40 = (uint *)((long)puVar51 + uVar47 + 4);
        uVar47 = uVar47 + 4;
        puStack_38 = param_1;
        if (puVar43 + -0x10 <= puVar40) goto code_r0x0049fb21;
        if ((param_2 <= puVar50) && (7 < uVar4)) {
          *(undefined8 *)puVar51 = *(undefined8 *)puVar50;
          *(undefined8 *)(puVar51 + 2) = *(undefined8 *)(puVar50 + 2);
          *(short *)(puVar51 + 4) = (short)puVar50[4];
          goto code_r0x0049f30c;
        }
      }
      if (uVar41 < 0x10000 && (uint *)((long)puVar50 + uVar41) < param_2) goto code_r0x004a0078;
      puVar16 = (uint *)((long)puVar51 + uVar47);
      param_1 = puStack_38;
      puVar40 = puVar16;
      if (param_2 <= puVar50) {
        if (uVar4 < 0x10) {
          if (uVar24 == 4) {
            uVar46 = *puVar50;
            uVar26 = uVar46 >> 0x10;
            uVar31 = uVar46;
          }
          else {
            if (uVar4 == 2) {
              uVar4 = (ushort)*puVar50;
              uVar31 = CONCAT22(uVar4,uVar4);
            }
            else {
              if (uVar4 != 1) {
                if (uVar4 < 8) {
                  *puVar51 = 0;
                  *(byte *)puVar51 = (byte)*puVar50;
                  *(byte *)((long)puVar51 + 1) = *(byte *)((long)puVar50 + 1);
                  *(byte *)((long)puVar51 + 2) = *(byte *)((long)puVar50 + 2);
                  *(byte *)((long)puVar51 + 3) = *(byte *)((long)puVar50 + 3);
                  uVar46 = *(uint *)(&UNK_001fe790 + (ulong)uVar4 * 4);
                  puVar51[1] = *(uint *)((long)puVar50 + (ulong)uVar46);
                  puVar50 = (uint *)((long)puVar50 +
                                    ((ulong)uVar46 -
                                    (long)*(int *)(&UNK_001fe630 + (ulong)uVar4 * 4)));
                }
                else {
                  *(undefined8 *)puVar51 = *(undefined8 *)puVar50;
                  puVar50 = puVar50 + 2;
                }
                puVar33 = (uint *)(uVar47 + (long)puVar51);
                if ((uint *)(uVar47 + (long)puVar51) <= puVar51 + 4) {
                  puVar33 = puVar51 + 4;
                }
                puVar49 = puVar51 + 2;
                pbVar48 = (byte *)((long)puVar33 + (-9 - (long)puVar51));
                puVar33 = puVar50;
                if (((byte *)0x17 < pbVar48) &&
                   ((byte *)0x1f < (byte *)((long)puVar51 + (8 - (long)puVar50)))) {
                  uVar24 = ((ulong)pbVar48 >> 3) + 1;
                  uVar27 = uVar24 & 0x3ffffffffffffffc;
                  puVar33 = puVar50 + uVar27 * 2;
                  puVar49 = puVar49 + uVar27 * 2;
                  uVar47 = 0;
                  do {
                    uVar11 = *(undefined8 *)(puVar50 + uVar47 * 2 + 2);
                    uVar14 = *(undefined8 *)(puVar50 + uVar47 * 2 + 4);
                    uVar15 = *(undefined8 *)(puVar50 + uVar47 * 2 + 4 + 2);
                    *(undefined8 *)(puVar51 + uVar47 * 2 + 2) =
                         *(undefined8 *)(puVar50 + uVar47 * 2);
                    *(undefined8 *)(puVar51 + uVar47 * 2 + 2 + 2) = uVar11;
                    *(undefined8 *)(puVar51 + uVar47 * 2 + 6) = uVar14;
                    *(undefined8 *)(puVar51 + uVar47 * 2 + 6 + 2) = uVar15;
                    uVar47 = uVar47 + 4;
                  } while (uVar27 != uVar47);
                  if (uVar24 == uVar27) goto code_r0x0049f30c;
                }
                do {
                  *(undefined8 *)puVar49 = *(undefined8 *)puVar33;
                  puVar49 = puVar49 + 2;
                  puVar33 = puVar33 + 2;
                } while (puVar49 < puVar16);
                goto code_r0x0049f30c;
              }
              bVar3 = (byte)*puVar50;
              uVar4 = CONCAT11(bVar3,bVar3);
              uVar31 = (uint)bVar3 * 0x1010101;
            }
            uVar46 = (uint)uVar4;
            uVar26 = uVar46;
          }
          uVar46 = uVar46 & 0xffff | uVar26 << 0x10;
          *(ulong *)puVar51 = CONCAT44(uVar31,uVar46);
          if (8 < uVar47) {
            puVar50 = (uint *)(uVar47 + (long)puVar51);
            if ((uint *)(uVar47 + (long)puVar51) <= puVar51 + 4) {
              puVar50 = puVar51 + 4;
            }
            puVar33 = puVar51 + 2;
            pbVar48 = (byte *)((long)puVar50 + (-9 - (long)puVar51));
            if ((byte *)0x17 < pbVar48) {
              uVar24 = ((ulong)pbVar48 >> 3) + 1;
              uVar27 = uVar24 & 0x3ffffffffffffffc;
              puVar33 = puVar33 + uVar27 * 2;
              uVar47 = 0;
              do {
                puVar50 = puVar51 + uVar47 * 2 + 2;
                *puVar50 = uVar46;
                puVar50[1] = uVar31;
                puVar50[2] = uVar46;
                puVar50[3] = uVar31;
                puVar50 = puVar51 + uVar47 * 2 + 6;
                *puVar50 = uVar46;
                puVar50[1] = uVar31;
                puVar50[2] = uVar46;
                puVar50[3] = uVar31;
                uVar47 = uVar47 + 4;
              } while (uVar27 != uVar47);
              if (uVar24 == uVar27) goto code_r0x0049f30c;
            }
            do {
              *(ulong *)puVar33 = CONCAT44(uVar31,uVar46);
              puVar33 = puVar33 + 2;
            } while (puVar33 < puVar16);
          }
          goto code_r0x0049f30c;
        }
        do {
          puVar2 = (undefined8 *)((long)puVar51 + -uVar24);
          uVar11 = puVar2[1];
          *(undefined8 *)puVar51 = *puVar2;
          *(undefined8 *)(puVar51 + 2) = uVar11;
          pbVar48 = (byte *)((long)puVar51 + -uVar24 + 0x10);
          uVar11 = *(undefined8 *)(pbVar48 + 8);
          *(undefined8 *)(puVar51 + 4) = *(undefined8 *)pbVar48;
          *(undefined8 *)(puVar51 + 6) = uVar11;
          puVar51 = puVar51 + 8;
        } while (puVar51 < puVar16);
        goto code_r0x0049f30c;
      }
      if ((uint *)((long)puVar43 + -5) < puVar16) goto code_r0x004a0078;
      uVar27 = (long)param_2 - (long)puVar50;
      if (uVar27 < uVar47) {
        func_0x0099bda0(puVar51,lVar44 - uVar27,uVar27);
        puVar40 = (uint *)(uVar27 + (long)puVar51);
        if (uVar47 - uVar27 <= (ulong)((long)puVar40 - (long)param_2)) {
          func_0x0099bda0(puVar40,param_2);
          puVar40 = puVar16;
          goto code_r0x0049f30c;
        }
        pbVar28 = (byte *)((long)param_2 + uVar24 + 1);
        pbVar48 = (byte *)(uVar47 + (long)puVar51);
        if ((byte *)(uVar47 + (long)puVar51) < pbVar28) {
          pbVar48 = pbVar28;
        }
        pbVar48 = pbVar48 + (-uVar24 - (long)param_2);
        puVar51 = param_2;
        if (((byte *)0x1f < pbVar48) && (0x1f < uVar4)) {
          pbVar28 = (byte *)((ulong)pbVar48 & 0xffffffffffffffe0);
          puVar40 = (uint *)((long)puVar40 + (long)pbVar28);
          pbVar39 = (byte *)0x0;
          do {
            uVar11 = *(undefined8 *)((byte *)((long)param_2 + (long)pbVar39) + 8);
            uVar14 = *(undefined8 *)((long)param_2 + (long)(pbVar39 + 0x10));
            uVar15 = *(undefined8 *)((byte *)((long)param_2 + (long)(pbVar39 + 0x10)) + 8);
            *(undefined8 *)((long)param_2 + (long)(pbVar39 + uVar24)) =
                 *(undefined8 *)((long)param_2 + (long)pbVar39);
            *(undefined8 *)((byte *)((long)param_2 + (long)(pbVar39 + uVar24)) + 8) = uVar11;
            *(undefined8 *)((long)param_2 + (long)(pbVar39 + uVar24 + 0x10)) = uVar14;
            *(undefined8 *)((byte *)((long)param_2 + (long)(pbVar39 + uVar24 + 0x10)) + 8) = uVar15;
            pbVar39 = pbVar39 + 0x20;
          } while (pbVar28 != pbVar39);
          puVar51 = (uint *)((long)param_2 + (long)pbVar28);
          if (pbVar48 == pbVar28) goto code_r0x0049f30c;
        }
        do {
          *(byte *)puVar40 = (byte)*puVar51;
          puVar40 = (uint *)((long)puVar40 + 1);
          puVar51 = (uint *)((long)puVar51 + 1);
        } while (puVar40 < puVar16);
        goto code_r0x0049f30c;
      }
      func_0x0099bd90(puVar51,lVar44 - uVar27,uVar47);
    } while( true );
  }
  if ((int)param_4 < 0 || param_1 == (uint *)0x0) {
    return -1;
  }
  if (param_4 == 0) {
    if (param_3 != 1) {
      return -1;
    }
    return -(uint)((byte)*param_1 != 0);
  }
  if (param_3 == 0) {
    return -1;
  }
  pbVar1 = (byte *)((long)param_1 + (long)param_3);
  uVar41 = (ulong)param_4;
  puVar36 = (uint *)((long)param_1 + (long)param_3 + -0x10);
  puVar37 = (uint *)((long)param_2 + (uVar41 - 0x20));
  puVar43 = param_1;
  puVar40 = param_2;
  if (param_4 < 0x40) goto code_r0x0049d3c3;
  puVar22 = (uint *)(pbVar1 + -0xf);
  puVar51 = (uint *)((long)param_2 + (uVar41 - 0x40));
code_r0x0049ccbb:
  do {
    puVar50 = (uint *)((long)param_1 + 1);
    bVar3 = (byte)*param_1;
    uVar46 = (uint)bVar3;
    uVar45 = (ulong)(uint)(bVar3 >> 4);
    if (bVar3 >> 4 == 0xf) {
      puVar16 = puVar50;
      if ((puVar22 <= puVar50) || (puVar16 = (uint *)((long)param_1 + 2), puVar22 < puVar16))
      goto code_r0x0049d6e8;
      uVar45 = (ulong)*(byte *)puVar50;
      if (uVar45 == 0xff) {
        uVar45 = 0xff;
        puVar43 = puVar16;
        do {
          puVar16 = (uint *)((long)puVar43 + 1);
          if (puVar22 < puVar16) goto code_r0x0049d6e8;
          uVar31 = *puVar43;
          uVar45 = uVar45 + (byte)uVar31;
          puVar43 = puVar16;
        } while ((ulong)(byte)uVar31 == 0xff);
        if (uVar45 == 0xffffffffffffffff) goto code_r0x0049d6e8;
      }
      uVar45 = uVar45 + 0xf;
      puVar21 = (ushort *)((long)puVar16 + uVar45);
      puVar33 = (uint *)((long)puVar40 + uVar45);
      if ((CARRY8((ulong)puVar40,uVar45)) || (CARRY8((ulong)puVar16,uVar45))) goto code_r0x0049d6e8;
      puVar50 = puVar16;
      if (puVar37 < puVar33) goto code_r0x0049d1f2;
      if (pbVar1 + -0x20 < puVar21) goto code_r0x0049d1f2;
      lVar44 = 0;
      do {
        uVar11 = *(undefined8 *)((byte *)((long)puVar16 + lVar44) + 8);
        *(undefined8 *)((long)puVar40 + lVar44) = *(undefined8 *)((long)puVar16 + lVar44);
        *(undefined8 *)((byte *)((long)puVar40 + lVar44) + 8) = uVar11;
        pbVar48 = (byte *)((long)puVar16 + lVar44 + 0x10);
        uVar7 = *(undefined4 *)(pbVar48 + 4);
        uVar8 = *(undefined4 *)(pbVar48 + 8);
        uVar9 = *(undefined4 *)(pbVar48 + 0xc);
        pbVar28 = (byte *)((long)puVar40 + lVar44 + 0x10);
        *(undefined4 *)pbVar28 = *(undefined4 *)pbVar48;
        *(undefined4 *)(pbVar28 + 4) = uVar7;
        *(undefined4 *)(pbVar28 + 8) = uVar8;
        *(undefined4 *)(pbVar28 + 0xc) = uVar9;
        lVar23 = lVar44 + 0x20;
        lVar44 = lVar44 + 0x20;
      } while ((uint *)((long)puVar40 + lVar23) < puVar33);
    }
    else {
      if (pbVar1 + -0x11 < puVar50) goto code_r0x0049d1f2;
      uVar46 = *(uint *)((long)param_1 + 5);
      uVar31 = *(uint *)((long)param_1 + 9);
      uVar26 = *(uint *)((long)param_1 + 0xd);
      *puVar40 = *puVar50;
      puVar40[1] = uVar46;
      puVar40[2] = uVar31;
      puVar40[3] = uVar26;
      puVar21 = (ushort *)((long)puVar50 + uVar45);
      puVar33 = (uint *)((long)puVar40 + uVar45);
    }
    uVar4 = *puVar21;
    uVar47 = (ulong)uVar4;
    param_1 = (uint *)(puVar21 + 1);
    puVar49 = (uint *)((long)puVar33 - uVar47);
    uVar27 = (ulong)(bVar3 & 0xf);
    if (uVar27 == 0xf) {
      puVar43 = (uint *)((long)puVar21 + 3);
      puVar16 = puVar43;
      if (pbVar1 + -4 < puVar43) goto code_r0x0049d6e8;
      uVar27 = (ulong)(byte)*param_1;
      if (uVar27 == 0xff) {
        uVar27 = 0xff;
        puVar40 = puVar43;
        do {
          puVar43 = (uint *)((long)puVar40 + 1);
          puVar16 = puVar43;
          if (pbVar1 + -4 < puVar43) goto code_r0x0049d6e8;
          uVar46 = *puVar40;
          uVar27 = uVar27 + (byte)uVar46;
          puVar40 = puVar43;
        } while ((ulong)(byte)uVar46 == 0xff);
        if (uVar27 == 0xffffffffffffffff) goto code_r0x0049d6e8;
      }
      uVar27 = uVar27 + 0x13;
      puVar16 = puVar43;
      if (CARRY8((ulong)puVar33,uVar27)) goto code_r0x0049d6e8;
      param_1 = puVar43;
      if (puVar51 <= (uint *)((long)puVar33 + uVar27)) goto code_r0x0049d324;
    }
    else {
      puVar40 = (uint *)((long)puVar33 + uVar27 + 4);
      uVar27 = uVar27 + 4;
      puVar43 = param_1;
      if (puVar51 <= puVar40) goto code_r0x0049d324;
      if ((param_2 <= puVar49) && (7 < uVar4)) {
        *(undefined8 *)puVar33 = *(undefined8 *)puVar49;
        *(undefined8 *)(puVar33 + 2) = *(undefined8 *)(puVar49 + 2);
        *(short *)(puVar33 + 4) = (short)puVar49[4];
        goto code_r0x0049ccbb;
      }
    }
    puVar16 = param_1;
    if (puVar49 < param_2) goto code_r0x0049d6e8;
    puVar40 = (uint *)((long)puVar33 + uVar27);
    if (uVar4 < 0x10) {
      if (uVar47 == 4) {
        uVar46 = *puVar49;
        uVar26 = uVar46 >> 0x10;
        uVar31 = uVar46;
      }
      else {
        if (uVar4 == 2) {
          uVar4 = (ushort)*puVar49;
          uVar31 = CONCAT22(uVar4,uVar4);
        }
        else {
          if (uVar4 != 1) {
            if (uVar4 < 8) {
              *puVar33 = 0;
              *(byte *)puVar33 = (byte)*puVar49;
              *(byte *)((long)puVar33 + 1) = *(byte *)((long)puVar49 + 1);
              *(byte *)((long)puVar33 + 2) = *(byte *)((long)puVar49 + 2);
              *(byte *)((long)puVar33 + 3) = *(byte *)((long)puVar49 + 3);
              uVar46 = *(uint *)(&UNK_001fe790 + (ulong)uVar4 * 4);
              puVar33[1] = *(uint *)((long)puVar49 + (ulong)uVar46);
              puVar49 = (uint *)((long)puVar49 +
                                ((ulong)uVar46 - (long)*(int *)(&UNK_001fe630 + (ulong)uVar4 * 4)));
            }
            else {
              *(undefined8 *)puVar33 = *(undefined8 *)puVar49;
              puVar49 = puVar49 + 2;
            }
            puVar43 = (uint *)(uVar27 + (long)puVar33);
            if ((uint *)(uVar27 + (long)puVar33) <= puVar33 + 4) {
              puVar43 = puVar33 + 4;
            }
            puVar50 = puVar33 + 2;
            pbVar48 = (byte *)((long)puVar43 + (-9 - (long)puVar33));
            if (((byte *)0x17 < pbVar48) &&
               ((byte *)0x1f < (byte *)((long)puVar33 + (8 - (long)puVar49)))) {
              uVar45 = ((ulong)pbVar48 >> 3) + 1;
              uVar47 = uVar45 & 0x3ffffffffffffffc;
              puVar50 = puVar50 + uVar47 * 2;
              uVar27 = 0;
              do {
                puVar43 = puVar49 + uVar27 * 2;
                uVar6 = puVar43[1];
                uVar12 = puVar43[2];
                uVar13 = puVar43[3];
                puVar16 = puVar49 + uVar27 * 2 + 4;
                uVar46 = *puVar16;
                uVar31 = puVar16[1];
                uVar26 = puVar16[2];
                uVar5 = puVar16[3];
                puVar16 = puVar33 + uVar27 * 2 + 2;
                *puVar16 = *puVar43;
                puVar16[1] = uVar6;
                puVar16[2] = uVar12;
                puVar16[3] = uVar13;
                puVar43 = puVar33 + uVar27 * 2 + 6;
                *puVar43 = uVar46;
                puVar43[1] = uVar31;
                puVar43[2] = uVar26;
                puVar43[3] = uVar5;
                uVar27 = uVar27 + 4;
              } while (uVar47 != uVar27);
              puVar49 = puVar49 + uVar47 * 2;
              if (uVar45 == uVar47) goto code_r0x0049ccbb;
            }
            do {
              *(undefined8 *)puVar50 = *(undefined8 *)puVar49;
              puVar50 = puVar50 + 2;
              puVar49 = puVar49 + 2;
            } while (puVar50 < puVar40);
            goto code_r0x0049ccbb;
          }
          bVar3 = (byte)*puVar49;
          uVar4 = CONCAT11(bVar3,bVar3);
          uVar31 = (uint)bVar3 * 0x1010101;
        }
        uVar46 = (uint)uVar4;
        uVar26 = uVar46;
      }
      uVar46 = uVar46 & 0xffff | uVar26 << 0x10;
      *(ulong *)puVar33 = CONCAT44(uVar31,uVar46);
      if (8 < uVar27) {
        puVar43 = (uint *)(uVar27 + (long)puVar33);
        if ((uint *)(uVar27 + (long)puVar33) <= puVar33 + 4) {
          puVar43 = puVar33 + 4;
        }
        puVar50 = puVar33 + 2;
        pbVar48 = (byte *)((long)puVar43 + (-9 - (long)puVar33));
        if ((byte *)0x17 < pbVar48) {
          uVar45 = ((ulong)pbVar48 >> 3) + 1;
          uVar47 = uVar45 & 0x3ffffffffffffffc;
          puVar50 = puVar50 + uVar47 * 2;
          uVar27 = 0;
          do {
            puVar43 = puVar33 + uVar27 * 2 + 2;
            *puVar43 = uVar46;
            puVar43[1] = uVar31;
            puVar43[2] = uVar46;
            puVar43[3] = uVar31;
            puVar43 = puVar33 + uVar27 * 2 + 6;
            *puVar43 = uVar46;
            puVar43[1] = uVar31;
            puVar43[2] = uVar46;
            puVar43[3] = uVar31;
            uVar27 = uVar27 + 4;
          } while (uVar47 != uVar27);
          if (uVar45 == uVar47) goto code_r0x0049ccbb;
        }
        do {
          *(ulong *)puVar50 = CONCAT44(uVar31,uVar46);
          puVar50 = puVar50 + 2;
        } while (puVar50 < puVar40);
      }
      goto code_r0x0049ccbb;
    }
    do {
      puVar2 = (undefined8 *)((long)puVar33 + -uVar47);
      uVar11 = puVar2[1];
      *(undefined8 *)puVar33 = *puVar2;
      *(undefined8 *)(puVar33 + 2) = uVar11;
      pbVar48 = (byte *)((long)puVar33 + -uVar47 + 0x10);
      uVar11 = *(undefined8 *)(pbVar48 + 8);
      *(undefined8 *)(puVar33 + 4) = *(undefined8 *)pbVar48;
      *(undefined8 *)(puVar33 + 6) = uVar11;
      puVar33 = puVar33 + 8;
    } while (puVar33 < puVar40);
  } while( true );
code_r0x004a2583:
  puVar29 = puVar43;
  if (puVar33 < puVar50) {
code_r0x004a2929:
    return ~(uint)puVar29 + iStack_50;
  }
  puVar36 = (uint *)(uVar41 + (long)puVar49);
  if ((uint)uVar45 < 8) {
    *puVar49 = 0;
    *(byte *)puVar49 = (byte)*puVar33;
    *(byte *)((long)puVar49 + 1) = *(byte *)((long)puVar33 + 1);
    *(byte *)((long)puVar49 + 2) = *(byte *)((long)puVar33 + 2);
    *(byte *)((long)puVar49 + 3) = *(byte *)((long)puVar33 + 3);
    uVar31 = (uint)uVar45 << 2;
    uVar46 = *(uint *)(&UNK_001fe790 + uVar31);
    puVar49[1] = *(uint *)((long)puVar33 + (ulong)uVar46);
    puVar37 = (uint *)&UNK_001fe630;
    puVar33 = (uint *)((long)puVar33 + ((ulong)uVar46 - (long)*(int *)(&UNK_001fe630 + uVar31)));
  }
  else {
    *(undefined8 *)puVar49 = *(undefined8 *)puVar33;
    puVar33 = puVar33 + 2;
    puVar37 = puVar33;
  }
  puVar16 = puVar49 + 2;
  if (puVar40 + -3 < puVar36) {
    if ((uint *)((long)puVar40 + -5) < puVar36) goto code_r0x004a2929;
    puVar29 = (uint *)((long)puVar40 + -7);
    puVar37 = (uint *)((byte *)((long)param_2 + (long)puVar51) + -7);
    puVar32 = puVar33;
    if (puVar16 < puVar29) {
      puVar32 = puVar49 + 4;
      if (puVar49 + 4 < puVar37) {
        puVar32 = puVar37;
      }
      pbVar48 = (byte *)((long)puVar32 + (-9 - (long)puVar49));
      puVar30 = puVar16;
      puVar32 = puVar33;
      if ((pbVar48 < (byte *)0x48) || ((byte *)((long)puVar49 + (8 - (long)puVar33)) < (byte *)0x20)
         ) {
code_r0x004a27ce:
        do {
          *(undefined8 *)puVar30 = *(undefined8 *)puVar32;
          puVar30 = puVar30 + 2;
          puVar32 = puVar32 + 2;
        } while (puVar30 < puVar29);
      }
      else {
        uVar45 = ((ulong)pbVar48 >> 3) + 1;
        uVar27 = uVar45 & 0x3ffffffffffffffc;
        puVar32 = puVar33 + uVar27 * 2;
        puVar30 = puVar16 + uVar27 * 2;
        uVar47 = 0;
        do {
          uVar11 = *(undefined8 *)(puVar33 + uVar47 * 2 + 2);
          puVar34 = puVar33 + uVar47 * 2 + 4;
          uVar46 = *puVar34;
          uVar31 = puVar34[1];
          uVar26 = puVar34[2];
          uVar5 = puVar34[3];
          *(undefined8 *)(puVar49 + uVar47 * 2 + 2) = *(undefined8 *)(puVar33 + uVar47 * 2);
          *(undefined8 *)(puVar49 + uVar47 * 2 + 2 + 2) = uVar11;
          puVar34 = puVar49 + uVar47 * 2 + 6;
          *puVar34 = uVar46;
          puVar34[1] = uVar31;
          puVar34[2] = uVar26;
          puVar34[3] = uVar5;
          uVar47 = uVar47 + 4;
        } while (uVar27 != uVar47);
        if (uVar45 != uVar27) goto code_r0x004a27ce;
      }
      lVar44 = (long)puVar29 - (long)puVar16;
      puVar16 = puVar29;
      puVar32 = (uint *)(lVar44 + (long)puVar33);
    }
    if (puVar16 < puVar36) {
      puVar29 = puVar49 + 2;
      if (puVar49 + 2 < puVar37) {
        puVar29 = puVar37;
      }
      puVar25 = (uint *)((long)puVar49 + (uVar41 - (long)puVar29));
      puVar30 = puVar16;
      puVar34 = puVar32;
      if (((uint *)0x3 < puVar25) &&
         (puVar37 = (uint *)((long)puVar49 + (8 - (long)puVar33)), (uint *)0x1f < puVar37)) {
        puVar37 = (uint *)0x0;
        if ((uint *)0x1f < puVar25) {
          puVar37 = (uint *)((ulong)puVar25 & 0xffffffffffffffe0);
          puVar30 = (uint *)0x0;
          do {
            pbVar28 = (byte *)((long)puVar33 + (long)((long)puVar29 + (-8 - (long)puVar49))) +
                      (long)puVar30;
            uVar11 = *(undefined8 *)(pbVar28 + 8);
            pbVar48 = (byte *)((long)puVar33 + (long)((long)puVar29 + (8 - (long)puVar49))) +
                      (long)puVar30;
            uVar7 = *(undefined4 *)pbVar48;
            uVar8 = *(undefined4 *)(pbVar48 + 4);
            uVar9 = *(undefined4 *)(pbVar48 + 8);
            uVar10 = *(undefined4 *)(pbVar48 + 0xc);
            *(undefined8 *)((long)puVar16 + (long)puVar30) = *(undefined8 *)pbVar28;
            *(undefined8 *)((byte *)((long)puVar16 + (long)puVar30) + 8) = uVar11;
            pbVar48 = (byte *)((long)(puVar16 + 4) + (long)puVar30);
            *(undefined4 *)pbVar48 = uVar7;
            *(undefined4 *)(pbVar48 + 4) = uVar8;
            *(undefined4 *)(pbVar48 + 8) = uVar9;
            *(undefined4 *)(pbVar48 + 0xc) = uVar10;
            puVar30 = puVar30 + 8;
          } while (puVar37 != puVar30);
          if (puVar25 == puVar37) goto code_r0x004a2613;
          puVar30 = (uint *)((long)puVar16 + (long)puVar37);
          puVar34 = (uint *)((long)puVar32 + (long)puVar37);
          if (((ulong)puVar25 & 0x1c) == 0) goto code_r0x004a288c;
        }
        puVar33 = (uint *)((ulong)puVar25 & 0xfffffffffffffffc);
        do {
          *(undefined4 *)((long)puVar16 + (long)puVar37) =
               *(undefined4 *)((long)puVar32 + (long)puVar37);
          puVar37 = puVar37 + 1;
        } while (puVar33 != puVar37);
        puVar30 = (uint *)((long)puVar16 + (long)puVar33);
        puVar34 = (uint *)((long)puVar32 + (long)puVar33);
        if (puVar25 == puVar33) goto code_r0x004a2613;
      }
code_r0x004a288c:
      do {
        *(byte *)puVar30 = (byte)*puVar34;
        puVar30 = (uint *)((long)puVar30 + 1);
        puVar34 = (uint *)((long)puVar34 + 1);
      } while (puVar30 < puVar36);
    }
  }
  else {
    *(undefined8 *)puVar16 = *(undefined8 *)puVar33;
    if (0x10 < uVar41) {
      puVar37 = (uint *)(uVar41 + (long)puVar49);
      if ((uint *)(uVar41 + (long)puVar49) <= puVar49 + 6) {
        puVar37 = puVar49 + 6;
      }
      puVar16 = puVar49 + 4;
      pbVar48 = (byte *)((long)puVar37 + (-0x11 - (long)puVar49));
      puVar37 = puVar33;
      if (((byte *)0x47 < pbVar48) && ((byte *)0x1f < (byte *)((long)puVar49 + (8 - (long)puVar33)))
         ) {
        uVar41 = ((ulong)pbVar48 >> 3) + 1;
        uVar45 = uVar41 & 0x3ffffffffffffffc;
        puVar37 = puVar33 + uVar45 * 2;
        puVar16 = puVar16 + uVar45 * 2;
        uVar27 = 0;
        do {
          uVar11 = *(undefined8 *)(puVar33 + uVar27 * 2 + 2 + 2);
          puVar29 = puVar33 + uVar27 * 2 + 6;
          uVar46 = *puVar29;
          uVar31 = puVar29[1];
          uVar26 = puVar29[2];
          uVar5 = puVar29[3];
          *(undefined8 *)(puVar49 + uVar27 * 2 + 4) = *(undefined8 *)(puVar33 + uVar27 * 2 + 2);
          *(undefined8 *)(puVar49 + uVar27 * 2 + 4 + 2) = uVar11;
          puVar29 = puVar49 + uVar27 * 2 + 8;
          *puVar29 = uVar46;
          puVar29[1] = uVar31;
          puVar29[2] = uVar26;
          puVar29[3] = uVar5;
          uVar27 = uVar27 + 4;
        } while (uVar45 != uVar27);
        if (uVar41 == uVar45) goto code_r0x004a2613;
      }
      puVar37 = puVar37 + 2;
      do {
        *(undefined8 *)puVar16 = *(undefined8 *)puVar37;
        puVar16 = puVar16 + 2;
        puVar37 = puVar37 + 2;
      } while (puVar16 < puVar36);
    }
  }
code_r0x004a2613:
  puVar33 = (uint *)((long)puVar43 + 1);
  bVar3 = (byte)*puVar43;
  while( true ) {
    uVar46 = (uint)bVar3;
    if (bVar3 >> 4 == 0xf) break;
    pbVar48 = (byte *)(ulong)(uint)(bVar3 >> 4);
    if ((puVar22 <= puVar33) || ((uint *)((long)(param_2 + -8) + (long)puVar51) < puVar36))
    goto code_r0x004a245f;
    uVar11 = *(undefined8 *)(puVar33 + 2);
    *(undefined8 *)puVar36 = *(undefined8 *)puVar33;
    *(undefined8 *)(puVar36 + 2) = uVar11;
    puVar49 = (uint *)((long)puVar36 + (long)pbVar48);
    uVar46 = uVar46 & 0xf;
    uVar41 = (ulong)uVar46;
    uVar45 = (ulong)*(ushort *)((long)puVar33 + (long)pbVar48);
    puVar43 = (uint *)((byte *)((long)puVar33 + (long)pbVar48) + 2);
    puVar37 = (uint *)((long)puVar49 - uVar45);
    if (((uVar46 == 0xf) || (*(ushort *)((long)puVar33 + (long)pbVar48) < 8)) || (puVar37 < puVar50)
       ) goto joined_r0x004a2529;
    *(undefined8 *)puVar49 = *(undefined8 *)puVar37;
    *(undefined8 *)(puVar49 + 2) = *(undefined8 *)(puVar37 + 2);
    *(short *)(puVar49 + 4) = (short)puVar37[4];
    puVar36 = (uint *)((long)puVar49 + uVar41 + 4);
    bVar3 = ((byte *)((long)puVar33 + (long)pbVar48))[2];
    puVar33 = (uint *)((byte *)((long)puVar33 + (long)pbVar48) + 3);
  }
  puVar37 = (uint *)(pbVar1 + -0xf);
  puVar29 = puVar33;
  if ((puVar37 <= puVar33) || (puVar29 = (uint *)((long)puVar43 + 2), puVar37 < puVar29))
  goto code_r0x004a2929;
  uVar41 = (ulong)(byte)*puVar33;
  if (uVar41 == 0xff) {
    uVar41 = 0xff;
    do {
      puVar43 = puVar29;
      puVar29 = (uint *)((long)puVar43 + 1);
      if (puVar37 < puVar29) goto code_r0x004a281b;
      uVar41 = uVar41 + (byte)*puVar43;
    } while ((ulong)(byte)*puVar43 == 0xff);
    if (uVar41 == 0xffffffffffffffff) {
code_r0x004a281b:
      puVar29 = (uint *)((long)puVar43 + 1);
      goto code_r0x004a2929;
    }
  }
  pbVar48 = (byte *)(uVar41 + 0xf);
  puVar37 = (uint *)((long)puVar36 + (long)pbVar48);
  if ((CARRY8((ulong)puVar36,(ulong)pbVar48)) ||
     (puVar33 = puVar29, CARRY8((ulong)puVar29,(ulong)pbVar48))) goto code_r0x004a2929;
code_r0x004a245f:
  puVar49 = (uint *)((long)puVar36 + (long)pbVar48);
  if ((puVar40 + -3 < puVar49) ||
     (puVar21 = (ushort *)((long)puVar33 + (long)pbVar48), pbVar1 + -8 < puVar21)) {
    puVar29 = puVar33;
    if (((byte *)((long)puVar33 + (long)pbVar48) == pbVar1) && (puVar49 <= puVar40)) {
      func_0x0099bd90(puVar36,puVar33,pbVar48,(byte *)((long)puVar33 + (long)pbVar48),puVar37);
      return (int)puVar49 - iVar35;
    }
    goto code_r0x004a2929;
  }
  puVar43 = (uint *)(pbVar48 + (long)puVar36);
  if (pbVar48 + (long)puVar36 <= puVar36 + 2) {
    puVar43 = puVar36 + 2;
  }
  if (((byte *)(~(ulong)puVar36 + (long)puVar43) < (byte *)0x38) ||
     ((ulong)((long)puVar36 - (long)puVar33) < 0x20)) {
code_r0x004a2500:
    do {
      *(undefined8 *)puVar36 = *(undefined8 *)puVar33;
      puVar36 = puVar36 + 2;
      puVar33 = puVar33 + 2;
    } while (puVar36 < puVar49);
  }
  else {
    uVar41 = (~(ulong)puVar36 + (long)puVar43 >> 3) + 1;
    uVar27 = uVar41 & 0x3ffffffffffffffc;
    uVar45 = 0;
    do {
      uVar11 = *(undefined8 *)(puVar33 + uVar45 * 2 + 2);
      puVar43 = puVar33 + uVar45 * 2 + 4;
      uVar31 = *puVar43;
      uVar26 = puVar43[1];
      uVar5 = puVar43[2];
      uVar6 = puVar43[3];
      *(undefined8 *)(puVar36 + uVar45 * 2) = *(undefined8 *)(puVar33 + uVar45 * 2);
      *(undefined8 *)(puVar36 + uVar45 * 2 + 2) = uVar11;
      puVar43 = puVar36 + uVar45 * 2 + 4;
      *puVar43 = uVar31;
      puVar43[1] = uVar26;
      puVar43[2] = uVar5;
      puVar43[3] = uVar6;
      uVar45 = uVar45 + 4;
    } while (uVar27 != uVar45);
    puVar33 = puVar33 + uVar27 * 2;
    puVar36 = puVar36 + uVar27 * 2;
    if (uVar41 != uVar27) goto code_r0x004a2500;
  }
  uVar45 = (ulong)*puVar21;
  puVar43 = (uint *)(puVar21 + 1);
  puVar37 = (uint *)((long)puVar49 - uVar45);
  uVar46 = uVar46 & 0xf;
  uVar41 = (ulong)uVar46;
joined_r0x004a2529:
  if (uVar46 == 0xf) {
    puVar29 = (uint *)((long)puVar43 + 1);
    if (pbVar1 + -4 < puVar29) goto code_r0x004a2929;
    uVar27 = (ulong)(byte)*puVar43;
    puVar43 = puVar29;
    if (uVar27 == 0xff) {
      uVar27 = 0xff;
      do {
        puVar43 = (uint *)((long)puVar29 + 1);
        if (pbVar1 + -4 < puVar43) {
          puVar29 = (uint *)((long)puVar29 + 1);
          goto code_r0x004a2929;
        }
        uVar46 = *puVar29;
        uVar27 = uVar27 + (byte)uVar46;
        puVar29 = puVar43;
      } while ((ulong)(byte)uVar46 == 0xff);
    }
    uVar41 = uVar27 + 0xf;
    puVar29 = puVar43;
    if ((uVar27 == 0xffffffffffffffff) || (~(ulong)puVar49 < uVar41)) goto code_r0x004a2929;
  }
  uVar41 = uVar41 + 4;
  puVar33 = puVar37;
  goto code_r0x004a2583;
code_r0x0049fb21:
  if (uVar41 < 0x10000 && (uint *)((long)puVar50 + uVar41) < param_2) {
code_r0x004a0078:
    return ~(uint)puStack_38 + iStack_50;
  }
  puVar22 = (uint *)((long)puVar51 + uVar47);
  param_1 = puStack_38;
  puVar40 = puVar22;
  if (puVar50 < param_2) {
    if ((uint *)((long)puVar43 + -5) < puVar22) goto code_r0x004a0078;
    uVar27 = (long)param_2 - (long)puVar50;
    if (uVar27 < uVar47) {
      func_0x0099bda0(puVar51,lVar44 - uVar27,uVar27);
      puVar40 = (uint *)((long)puVar51 + uVar27);
      if ((ulong)((long)puVar40 - (long)param_2) < uVar47 - uVar27) {
        pbVar28 = (byte *)((long)puVar51 + (long)param_2) + (1 - (long)puVar50);
        pbVar48 = (byte *)(uVar47 + (long)puVar51);
        if ((byte *)(uVar47 + (long)puVar51) < pbVar28) {
          pbVar48 = pbVar28;
        }
        uVar47 = (long)(pbVar48 + (long)puVar50) - ((long)puVar51 + (long)param_2);
        puVar50 = param_2;
        if ((0x1f < uVar47) && (0x1f < (ulong)((long)puVar40 - (long)param_2))) {
          uVar24 = uVar47 & 0xffffffffffffffe0;
          puVar40 = (uint *)((long)puVar40 + uVar24);
          uVar38 = 0;
          do {
            uVar11 = *(undefined8 *)((byte *)((long)param_2 + uVar38) + 8);
            pbVar48 = (byte *)((long)param_2 + uVar38 + 0x10);
            uVar14 = *(undefined8 *)pbVar48;
            uVar15 = *(undefined8 *)(pbVar48 + 8);
            pbVar48 = (byte *)((long)puVar51 + uVar38 + uVar27);
            *(undefined8 *)pbVar48 = *(undefined8 *)((long)param_2 + uVar38);
            *(undefined8 *)(pbVar48 + 8) = uVar11;
            pbVar48 = (byte *)((long)puVar51 + uVar38 + uVar27 + 0x10);
            *(undefined8 *)pbVar48 = uVar14;
            *(undefined8 *)(pbVar48 + 8) = uVar15;
            uVar38 = uVar38 + 0x20;
          } while (uVar24 != uVar38);
          puVar50 = (uint *)((long)param_2 + uVar24);
          if (uVar47 == uVar24) goto code_r0x0049fdc3;
        }
        do {
          *(byte *)puVar40 = (byte)*puVar50;
          puVar40 = (uint *)((long)puVar40 + 1);
          puVar50 = (uint *)((long)puVar50 + 1);
        } while (puVar40 < puVar22);
      }
      else {
        func_0x0099bda0(puVar40,param_2);
        puVar40 = puVar22;
      }
    }
    else {
      func_0x0099bd90(puVar51,lVar44 - uVar27,uVar47);
    }
  }
  else {
    if ((uint)uVar24 < 8) {
      *puVar51 = 0;
      *(byte *)puVar51 = (byte)*puVar50;
      *(byte *)((long)puVar51 + 1) = *(byte *)((long)puVar50 + 1);
      *(byte *)((long)puVar51 + 2) = *(byte *)((long)puVar50 + 2);
      *(byte *)((long)puVar51 + 3) = *(byte *)((long)puVar50 + 3);
      uVar31 = (uint)uVar24 << 2;
      uVar46 = *(uint *)(&UNK_001fe790 + uVar31);
      puVar51[1] = *(uint *)((long)puVar50 + (ulong)uVar46);
      puVar50 = (uint *)((long)puVar50 + ((ulong)uVar46 - (long)*(int *)(&UNK_001fe630 + uVar31)));
    }
    else {
      *(undefined8 *)puVar51 = *(undefined8 *)puVar50;
      puVar50 = puVar50 + 2;
    }
    puVar16 = puVar51 + 2;
    if (puVar43 + -3 < puVar22) {
      if ((uint *)((long)puVar43 + -5) < puVar22) goto code_r0x004a0078;
      puVar33 = (uint *)((long)puVar43 + -7);
      puVar29 = (uint *)((long)param_2 + (uVar45 - 7));
      puVar49 = puVar50;
      if (puVar16 < puVar33) {
        puVar49 = puVar51 + 4;
        if (puVar51 + 4 < puVar29) {
          puVar49 = puVar29;
        }
        pbVar48 = (byte *)((long)puVar49 + (-9 - (long)puVar51));
        puVar32 = puVar16;
        puVar49 = puVar50;
        if ((pbVar48 < (byte *)0x48) ||
           ((byte *)((long)puVar51 + (8 - (long)puVar50)) < (byte *)0x20)) {
code_r0x0049ff65:
          do {
            *(undefined8 *)puVar32 = *(undefined8 *)puVar49;
            puVar32 = puVar32 + 2;
            puVar49 = puVar49 + 2;
          } while (puVar32 < puVar33);
        }
        else {
          uVar27 = ((ulong)pbVar48 >> 3) + 1;
          uVar24 = uVar27 & 0x3ffffffffffffffc;
          puVar49 = puVar50 + uVar24 * 2;
          puVar32 = puVar16 + uVar24 * 2;
          uVar38 = 0;
          do {
            uVar11 = *(undefined8 *)(puVar50 + uVar38 * 2 + 2);
            uVar14 = *(undefined8 *)(puVar50 + uVar38 * 2 + 4);
            uVar15 = *(undefined8 *)(puVar50 + uVar38 * 2 + 4 + 2);
            *(undefined8 *)(puVar51 + uVar38 * 2 + 2) = *(undefined8 *)(puVar50 + uVar38 * 2);
            *(undefined8 *)(puVar51 + uVar38 * 2 + 2 + 2) = uVar11;
            *(undefined8 *)(puVar51 + uVar38 * 2 + 6) = uVar14;
            *(undefined8 *)(puVar51 + uVar38 * 2 + 6 + 2) = uVar15;
            uVar38 = uVar38 + 4;
          } while (uVar24 != uVar38);
          if (uVar27 != uVar24) goto code_r0x0049ff65;
        }
        lVar23 = (long)puVar33 - (long)puVar16;
        puVar16 = puVar33;
        puVar49 = (uint *)(lVar23 + (long)puVar50);
      }
      if (puVar16 < puVar22) {
        puVar33 = puVar51 + 2;
        if (puVar51 + 2 < puVar29) {
          puVar33 = puVar29;
        }
        pbVar48 = (byte *)((long)puVar51 + (uVar47 - (long)puVar33));
        puVar29 = puVar16;
        puVar32 = puVar49;
        if (((byte *)0x3 < pbVar48) &&
           ((byte *)0x1f < (byte *)((long)puVar51 + (8 - (long)puVar50)))) {
          pbVar28 = (byte *)0x0;
          if ((byte *)0x1f < pbVar48) {
            pbVar28 = (byte *)((ulong)pbVar48 & 0xffffffffffffffe0);
            pbVar39 = (byte *)0x0;
            do {
              pbVar17 = (byte *)((long)puVar50 +
                                (long)((long)puVar33 + (long)(pbVar39 + (-8 - (long)puVar51))));
              uVar11 = *(undefined8 *)(pbVar17 + 8);
              pbVar42 = (byte *)((long)puVar50 +
                                (long)((long)puVar33 + (long)(pbVar39 + (8 - (long)puVar51))));
              uVar14 = *(undefined8 *)pbVar42;
              uVar15 = *(undefined8 *)(pbVar42 + 8);
              *(undefined8 *)((long)puVar16 + (long)pbVar39) = *(undefined8 *)pbVar17;
              *(undefined8 *)((byte *)((long)puVar16 + (long)pbVar39) + 8) = uVar11;
              *(undefined8 *)((long)puVar16 + (long)(pbVar39 + 0x10)) = uVar14;
              *(undefined8 *)((byte *)((long)puVar16 + (long)(pbVar39 + 0x10)) + 8) = uVar15;
              pbVar39 = pbVar39 + 0x20;
            } while (pbVar28 != pbVar39);
            if (pbVar48 == pbVar28) goto code_r0x0049fdc3;
            puVar29 = (uint *)((long)puVar16 + (long)pbVar28);
            puVar32 = (uint *)((long)puVar49 + (long)pbVar28);
            if (((ulong)pbVar48 & 0x1c) == 0) goto code_r0x0049ffc3;
          }
          pbVar39 = (byte *)((ulong)pbVar48 & 0xfffffffffffffffc);
          do {
            *(undefined4 *)((long)puVar16 + (long)pbVar28) =
                 *(undefined4 *)((long)puVar49 + (long)pbVar28);
            pbVar28 = pbVar28 + 4;
          } while (pbVar39 != pbVar28);
          puVar29 = (uint *)((long)puVar16 + (long)pbVar39);
          puVar32 = (uint *)((long)puVar49 + (long)pbVar39);
          if (pbVar48 == pbVar39) goto code_r0x0049fdc3;
        }
code_r0x0049ffc3:
        do {
          *(byte *)puVar29 = (byte)*puVar32;
          puVar29 = (uint *)((long)puVar29 + 1);
          puVar32 = (uint *)((long)puVar32 + 1);
        } while (puVar29 < puVar22);
      }
    }
    else {
      *(undefined8 *)puVar16 = *(undefined8 *)puVar50;
      if (0x10 < uVar47) {
        puVar16 = (uint *)(uVar47 + (long)puVar51);
        if ((uint *)(uVar47 + (long)puVar51) <= puVar51 + 6) {
          puVar16 = puVar51 + 6;
        }
        puVar33 = puVar51 + 4;
        pbVar48 = (byte *)((long)puVar16 + (-0x11 - (long)puVar51));
        if (((byte *)0x47 < pbVar48) &&
           ((byte *)0x1f < (byte *)((long)puVar51 + (8 - (long)puVar50)))) {
          uVar24 = ((ulong)pbVar48 >> 3) + 1;
          uVar27 = uVar24 & 0x3ffffffffffffffc;
          puVar33 = puVar33 + uVar27 * 2;
          uVar47 = 0;
          do {
            uVar11 = *(undefined8 *)(puVar50 + uVar47 * 2 + 2 + 2);
            uVar14 = *(undefined8 *)(puVar50 + uVar47 * 2 + 6);
            uVar15 = *(undefined8 *)(puVar50 + uVar47 * 2 + 6 + 2);
            *(undefined8 *)(puVar51 + uVar47 * 2 + 4) = *(undefined8 *)(puVar50 + uVar47 * 2 + 2);
            *(undefined8 *)(puVar51 + uVar47 * 2 + 4 + 2) = uVar11;
            *(undefined8 *)(puVar51 + uVar47 * 2 + 8) = uVar14;
            *(undefined8 *)(puVar51 + uVar47 * 2 + 8 + 2) = uVar15;
            uVar47 = uVar47 + 4;
          } while (uVar27 != uVar47);
          puVar50 = puVar50 + uVar27 * 2;
          if (uVar24 == uVar27) goto code_r0x0049fdc3;
        }
        do {
          *(undefined8 *)puVar33 = *(undefined8 *)(puVar50 + 2);
          puVar33 = puVar33 + 2;
          puVar50 = puVar50 + 2;
        } while (puVar33 < puVar22);
      }
    }
  }
code_r0x0049fdc3:
  puVar22 = (uint *)((long)param_1 + 1);
  bVar3 = (byte)*param_1;
  while( true ) {
    uVar46 = (uint)bVar3;
    puStack_38 = puVar22;
    if (bVar3 >> 4 == 0xf) break;
    uVar27 = (ulong)(uint)(bVar3 >> 4);
    if ((puVar37 <= puVar22) || (puVar36 < puVar40)) goto code_r0x0049f9e9;
    uVar11 = *(undefined8 *)(puVar22 + 2);
    *(undefined8 *)puVar40 = *(undefined8 *)puVar22;
    *(undefined8 *)(puVar40 + 2) = uVar11;
    puVar51 = (uint *)((long)puVar40 + uVar27);
    uVar46 = uVar46 & 0xf;
    uVar47 = (ulong)uVar46;
    uVar24 = (ulong)*(ushort *)((long)puVar22 + uVar27);
    param_1 = (uint *)((long)puVar22 + uVar27 + 2);
    puVar50 = (uint *)((long)puVar51 - uVar24);
    if (((uVar46 == 0xf) || (*(ushort *)((long)puVar22 + uVar27) < 8)) || (puVar50 < param_2))
    goto joined_r0x0049f985;
    *(undefined8 *)puVar51 = *(undefined8 *)puVar50;
    *(undefined8 *)(puVar51 + 2) = *(undefined8 *)(puVar50 + 2);
    *(short *)(puVar51 + 4) = (short)puVar50[4];
    puVar40 = (uint *)((long)puVar51 + uVar47 + 4);
    bVar3 = *(byte *)((long)puVar22 + uVar27 + 2);
    puVar22 = (uint *)((long)puVar22 + uVar27 + 3);
  }
  puVar51 = (uint *)(pbVar1 + -0xf);
  if ((puVar51 <= puVar22) || (puStack_38 = (uint *)((long)param_1 + 2), puVar51 < puStack_38))
  goto code_r0x004a0078;
  uVar27 = (ulong)(byte)*puVar22;
  if (uVar27 == 0xff) {
    uVar27 = 0xff;
    do {
      puVar22 = puStack_38;
      puStack_38 = (uint *)((long)puVar22 + 1);
      if (puVar51 < puStack_38) goto code_r0x0049fe1e;
      uVar27 = uVar27 + (byte)*puVar22;
    } while ((ulong)(byte)*puVar22 == 0xff);
    if (uVar27 == 0xffffffffffffffff) {
code_r0x0049fe1e:
      puStack_38 = (uint *)((long)puVar22 + 1);
      goto code_r0x004a0078;
    }
  }
  uVar27 = uVar27 + 0xf;
  if ((CARRY8((ulong)puVar40,uVar27)) || (CARRY8((ulong)puStack_38,uVar27))) goto code_r0x004a0078;
code_r0x0049f9e9:
  puVar51 = (uint *)((long)puVar40 + uVar27);
  if ((puVar43 + -3 < puVar51) ||
     (puVar21 = (ushort *)((long)puStack_38 + uVar27), pbVar1 + -8 < puVar21)) {
    if (((byte *)((long)puStack_38 + uVar27) == pbVar1) && (puVar51 <= puVar43)) {
      func_0x0099bd90(puVar40);
      return (int)puVar51 - iVar35;
    }
    goto code_r0x004a0078;
  }
  puVar22 = (uint *)(uVar27 + (long)puVar40);
  if ((uint *)(uVar27 + (long)puVar40) <= puVar40 + 2) {
    puVar22 = puVar40 + 2;
  }
  if (((byte *)(~(ulong)puVar40 + (long)puVar22) < (byte *)0x38) ||
     ((ulong)((long)puVar40 - (long)puStack_38) < 0x20)) {
code_r0x0049faa0:
    do {
      *(undefined8 *)puVar40 = *(undefined8 *)puStack_38;
      puVar40 = puVar40 + 2;
      puStack_38 = puStack_38 + 2;
    } while (puVar40 < puVar51);
  }
  else {
    uVar27 = (~(ulong)puVar40 + (long)puVar22 >> 3) + 1;
    uVar47 = uVar27 & 0x3ffffffffffffffc;
    uVar24 = 0;
    do {
      uVar11 = *(undefined8 *)(puStack_38 + uVar24 * 2 + 2);
      uVar14 = *(undefined8 *)(puStack_38 + uVar24 * 2 + 4);
      uVar15 = *(undefined8 *)(puStack_38 + uVar24 * 2 + 4 + 2);
      *(undefined8 *)(puVar40 + uVar24 * 2) = *(undefined8 *)(puStack_38 + uVar24 * 2);
      *(undefined8 *)(puVar40 + uVar24 * 2 + 2) = uVar11;
      *(undefined8 *)(puVar40 + uVar24 * 2 + 4) = uVar14;
      *(undefined8 *)(puVar40 + uVar24 * 2 + 4 + 2) = uVar15;
      uVar24 = uVar24 + 4;
    } while (uVar47 != uVar24);
    puStack_38 = puStack_38 + uVar47 * 2;
    puVar40 = puVar40 + uVar47 * 2;
    if (uVar27 != uVar47) goto code_r0x0049faa0;
  }
  uVar24 = (ulong)*puVar21;
  param_1 = (uint *)(puVar21 + 1);
  puVar50 = (uint *)((long)puVar51 - uVar24);
  uVar46 = uVar46 & 0xf;
  uVar47 = (ulong)uVar46;
joined_r0x0049f985:
  puStack_38 = param_1;
  if (uVar46 == 0xf) {
    puStack_38 = (uint *)((long)param_1 + 1);
    if (pbVar1 + -4 < puStack_38) goto code_r0x004a0078;
    uVar27 = (ulong)(byte)*param_1;
    if (uVar27 == 0xff) {
      uVar27 = 0xff;
      puVar40 = puStack_38;
      do {
        puStack_38 = (uint *)((long)puVar40 + 1);
        if (pbVar1 + -4 < puStack_38) {
          puStack_38 = (uint *)((long)puVar40 + 1);
          goto code_r0x004a0078;
        }
        uVar46 = *puVar40;
        uVar27 = uVar27 + (byte)uVar46;
        puVar40 = puStack_38;
      } while ((ulong)(byte)uVar46 == 0xff);
    }
    uVar47 = uVar27 + 0xf;
    if ((uVar27 == 0xffffffffffffffff) || (~(ulong)puVar51 < uVar47)) goto code_r0x004a0078;
  }
  uVar47 = uVar47 + 4;
  goto code_r0x0049fb21;
code_r0x0049d324:
  puVar16 = puVar43;
  if (puVar49 < param_2) {
code_r0x0049d6e8:
    return ~(uint)puVar16 + iStack_50;
  }
  puVar40 = (uint *)((long)puVar33 + uVar27);
  if ((uint)uVar47 < 8) {
    *puVar33 = 0;
    *(byte *)puVar33 = (byte)*puVar49;
    *(byte *)((long)puVar33 + 1) = *(byte *)((long)puVar49 + 1);
    *(byte *)((long)puVar33 + 2) = *(byte *)((long)puVar49 + 2);
    *(byte *)((long)puVar33 + 3) = *(byte *)((long)puVar49 + 3);
    uVar31 = (uint)uVar47 << 2;
    uVar46 = *(uint *)(&UNK_001fe790 + uVar31);
    puVar33[1] = *(uint *)((long)puVar49 + (ulong)uVar46);
    puVar49 = (uint *)((long)puVar49 + ((ulong)uVar46 - (long)*(int *)(&UNK_001fe630 + uVar31)));
  }
  else {
    *(undefined8 *)puVar33 = *(undefined8 *)puVar49;
    puVar49 = puVar49 + 2;
  }
  puVar22 = puVar33 + 2;
  if ((uint *)((long)param_2 + (uVar41 - 0xc)) < puVar40) {
    if ((uint *)((long)param_2 + (uVar41 - 5)) < puVar40) goto code_r0x0049d6e8;
    puVar51 = (uint *)((long)param_2 + (uVar41 - 7));
    puVar16 = (uint *)((long)param_2 + (uVar41 - 7));
    puVar50 = puVar49;
    if (puVar22 < puVar51) {
      puVar50 = puVar33 + 4;
      if (puVar33 + 4 < puVar16) {
        puVar50 = puVar16;
      }
      pbVar48 = (byte *)((long)puVar50 + (-9 - (long)puVar33));
      puVar29 = puVar22;
      puVar50 = puVar49;
      if ((pbVar48 < (byte *)0x48) || ((byte *)((long)puVar33 + (8 - (long)puVar49)) < (byte *)0x20)
         ) {
code_r0x0049d582:
        do {
          *(undefined8 *)puVar29 = *(undefined8 *)puVar50;
          puVar29 = puVar29 + 2;
          puVar50 = puVar50 + 2;
        } while (puVar29 < puVar51);
      }
      else {
        uVar45 = ((ulong)pbVar48 >> 3) + 1;
        uVar24 = uVar45 & 0x3ffffffffffffffc;
        puVar50 = puVar49 + uVar24 * 2;
        puVar29 = puVar22 + uVar24 * 2;
        uVar47 = 0;
        do {
          uVar11 = *(undefined8 *)(puVar49 + uVar47 * 2 + 2);
          puVar32 = puVar49 + uVar47 * 2 + 4;
          uVar46 = *puVar32;
          uVar31 = puVar32[1];
          uVar26 = puVar32[2];
          uVar5 = puVar32[3];
          *(undefined8 *)(puVar33 + uVar47 * 2 + 2) = *(undefined8 *)(puVar49 + uVar47 * 2);
          *(undefined8 *)(puVar33 + uVar47 * 2 + 2 + 2) = uVar11;
          puVar32 = puVar33 + uVar47 * 2 + 6;
          *puVar32 = uVar46;
          puVar32[1] = uVar31;
          puVar32[2] = uVar26;
          puVar32[3] = uVar5;
          uVar47 = uVar47 + 4;
        } while (uVar24 != uVar47);
        if (uVar45 != uVar24) goto code_r0x0049d582;
      }
      lVar44 = (long)puVar51 - (long)puVar22;
      puVar22 = puVar51;
      puVar50 = (uint *)(lVar44 + (long)puVar49);
    }
    if (puVar22 < puVar40) {
      puVar51 = puVar33 + 2;
      if (puVar33 + 2 < puVar16) {
        puVar51 = puVar16;
      }
      pbVar48 = (byte *)((long)puVar33 + (uVar27 - (long)puVar51));
      puVar16 = puVar22;
      puVar29 = puVar50;
      if (((byte *)0x3 < pbVar48) && ((byte *)0x1f < (byte *)((long)puVar33 + (8 - (long)puVar49))))
      {
        pbVar28 = (byte *)0x0;
        if ((byte *)0x1f < pbVar48) {
          pbVar28 = (byte *)((ulong)pbVar48 & 0xffffffffffffffe0);
          pbVar39 = (byte *)0x0;
          do {
            pbVar17 = (byte *)((long)puVar49 +
                              (long)((long)puVar51 + (long)(pbVar39 + (-8 - (long)puVar33))));
            uVar11 = *(undefined8 *)(pbVar17 + 8);
            pbVar42 = (byte *)((long)puVar49 +
                              (long)((long)puVar51 + (long)(pbVar39 + (8 - (long)puVar33))));
            uVar7 = *(undefined4 *)pbVar42;
            uVar8 = *(undefined4 *)(pbVar42 + 4);
            uVar9 = *(undefined4 *)(pbVar42 + 8);
            uVar10 = *(undefined4 *)(pbVar42 + 0xc);
            *(undefined8 *)((long)puVar22 + (long)pbVar39) = *(undefined8 *)pbVar17;
            *(undefined8 *)((byte *)((long)puVar22 + (long)pbVar39) + 8) = uVar11;
            pbVar42 = (byte *)((long)puVar22 + (long)(pbVar39 + 0x10));
            *(undefined4 *)pbVar42 = uVar7;
            *(undefined4 *)(pbVar42 + 4) = uVar8;
            *(undefined4 *)(pbVar42 + 8) = uVar9;
            *(undefined4 *)(pbVar42 + 0xc) = uVar10;
            pbVar39 = pbVar39 + 0x20;
          } while (pbVar28 != pbVar39);
          if (pbVar48 == pbVar28) goto code_r0x0049d3c3;
          puVar16 = (uint *)((long)puVar22 + (long)pbVar28);
          puVar29 = (uint *)(pbVar28 + (long)puVar50);
          if (((ulong)pbVar48 & 0x1c) == 0) goto code_r0x0049d649;
        }
        pbVar39 = (byte *)((ulong)pbVar48 & 0xfffffffffffffffc);
        do {
          *(undefined4 *)((long)puVar22 + (long)pbVar28) =
               *(undefined4 *)((long)puVar50 + (long)pbVar28);
          pbVar28 = pbVar28 + 4;
        } while (pbVar39 != pbVar28);
        puVar16 = (uint *)((long)puVar22 + (long)pbVar39);
        puVar29 = (uint *)(pbVar39 + (long)puVar50);
        if (pbVar48 == pbVar39) goto code_r0x0049d3c3;
      }
code_r0x0049d649:
      do {
        *(byte *)puVar16 = (byte)*puVar29;
        puVar16 = (uint *)((long)puVar16 + 1);
        puVar29 = (uint *)((long)puVar29 + 1);
      } while (puVar16 < puVar40);
    }
  }
  else {
    *(undefined8 *)puVar22 = *(undefined8 *)puVar49;
    if (0x10 < uVar27) {
      puVar22 = (uint *)(uVar27 + (long)puVar33);
      if ((uint *)(uVar27 + (long)puVar33) <= puVar33 + 6) {
        puVar22 = puVar33 + 6;
      }
      puVar51 = puVar33 + 4;
      pbVar48 = (byte *)((long)puVar22 + (-0x11 - (long)puVar33));
      puVar22 = puVar49;
      if (((byte *)0x47 < pbVar48) && ((byte *)0x1f < (byte *)((long)puVar33 + (8 - (long)puVar49)))
         ) {
        uVar45 = ((ulong)pbVar48 >> 3) + 1;
        uVar47 = uVar45 & 0x3ffffffffffffffc;
        puVar22 = puVar49 + uVar47 * 2;
        puVar51 = puVar51 + uVar47 * 2;
        uVar27 = 0;
        do {
          uVar11 = *(undefined8 *)(puVar49 + uVar27 * 2 + 2 + 2);
          puVar50 = puVar49 + uVar27 * 2 + 6;
          uVar46 = *puVar50;
          uVar31 = puVar50[1];
          uVar26 = puVar50[2];
          uVar5 = puVar50[3];
          *(undefined8 *)(puVar33 + uVar27 * 2 + 4) = *(undefined8 *)(puVar49 + uVar27 * 2 + 2);
          *(undefined8 *)(puVar33 + uVar27 * 2 + 4 + 2) = uVar11;
          puVar50 = puVar33 + uVar27 * 2 + 8;
          *puVar50 = uVar46;
          puVar50[1] = uVar31;
          puVar50[2] = uVar26;
          puVar50[3] = uVar5;
          uVar27 = uVar27 + 4;
        } while (uVar47 != uVar27);
        if (uVar45 == uVar47) goto code_r0x0049d3c3;
      }
      do {
        *(undefined8 *)puVar51 = *(undefined8 *)(puVar22 + 2);
        puVar51 = puVar51 + 2;
        puVar22 = puVar22 + 2;
      } while (puVar51 < puVar40);
    }
  }
code_r0x0049d3c3:
  puVar50 = (uint *)((long)puVar43 + 1);
  bVar3 = (byte)*puVar43;
  while( true ) {
    uVar46 = (uint)bVar3;
    if (bVar3 >> 4 == 0xf) break;
    uVar45 = (ulong)(uint)(bVar3 >> 4);
    if ((puVar36 <= puVar50) || (puVar37 < puVar40)) goto code_r0x0049d1f2;
    uVar11 = *(undefined8 *)(puVar50 + 2);
    *(undefined8 *)puVar40 = *(undefined8 *)puVar50;
    *(undefined8 *)(puVar40 + 2) = uVar11;
    puVar33 = (uint *)((long)puVar40 + uVar45);
    uVar46 = uVar46 & 0xf;
    uVar27 = (ulong)uVar46;
    uVar47 = (ulong)*(ushort *)((long)puVar50 + uVar45);
    puVar43 = (uint *)((long)puVar50 + uVar45 + 2);
    puVar49 = (uint *)((long)puVar33 - uVar47);
    if (((uVar46 == 0xf) || (*(ushort *)((long)puVar50 + uVar45) < 8)) || (puVar49 < param_2))
    goto joined_r0x0049d2ca;
    *(undefined8 *)puVar33 = *(undefined8 *)puVar49;
    *(undefined8 *)(puVar33 + 2) = *(undefined8 *)(puVar49 + 2);
    *(short *)(puVar33 + 4) = (short)puVar49[4];
    puVar40 = (uint *)((long)puVar33 + uVar27 + 4);
    bVar3 = *(byte *)((long)puVar50 + uVar45 + 2);
    puVar50 = (uint *)((long)puVar50 + uVar45 + 3);
  }
  puVar22 = (uint *)(pbVar1 + -0xf);
  puVar16 = puVar50;
  if ((puVar22 <= puVar50) || (puVar16 = (uint *)((long)puVar43 + 2), puVar22 < puVar16))
  goto code_r0x0049d6e8;
  uVar45 = (ulong)(byte)*puVar50;
  if (uVar45 == 0xff) {
    uVar45 = 0xff;
    do {
      puVar43 = puVar16;
      puVar16 = (uint *)((long)puVar43 + 1);
      if (puVar22 < puVar16) goto code_r0x0049d5d7;
      uVar45 = uVar45 + (byte)*puVar43;
    } while ((ulong)(byte)*puVar43 == 0xff);
    if (uVar45 == 0xffffffffffffffff) {
code_r0x0049d5d7:
      puVar16 = (uint *)((long)puVar43 + 1);
      goto code_r0x0049d6e8;
    }
  }
  uVar45 = uVar45 + 0xf;
  if ((CARRY8((ulong)puVar40,uVar45)) || (puVar50 = puVar16, CARRY8((ulong)puVar16,uVar45)))
  goto code_r0x0049d6e8;
code_r0x0049d1f2:
  puVar33 = (uint *)((long)puVar40 + uVar45);
  if (((uint *)((long)param_2 + (uVar41 - 0xc)) < puVar33) ||
     (puVar21 = (ushort *)((long)puVar50 + uVar45), pbVar1 + -8 < puVar21)) {
    puVar16 = puVar50;
    if (((byte *)((long)puVar50 + uVar45) == pbVar1) &&
       (puVar33 <= (uint *)((long)param_2 + uVar41))) {
      func_0x0099bd90(puVar40,puVar50);
      return (int)puVar33 - iVar35;
    }
    goto code_r0x0049d6e8;
  }
  puVar43 = (uint *)(uVar45 + (long)puVar40);
  if ((uint *)(uVar45 + (long)puVar40) <= puVar40 + 2) {
    puVar43 = puVar40 + 2;
  }
  if (((byte *)(~(ulong)puVar40 + (long)puVar43) < (byte *)0x38) ||
     ((ulong)((long)puVar40 - (long)puVar50) < 0x20)) {
code_r0x0049d2a0:
    do {
      *(undefined8 *)puVar40 = *(undefined8 *)puVar50;
      puVar40 = puVar40 + 2;
      puVar50 = puVar50 + 2;
    } while (puVar40 < puVar33);
  }
  else {
    uVar47 = (~(ulong)puVar40 + (long)puVar43 >> 3) + 1;
    uVar27 = uVar47 & 0x3ffffffffffffffc;
    uVar45 = 0;
    do {
      uVar11 = *(undefined8 *)(puVar50 + uVar45 * 2 + 2);
      puVar43 = puVar50 + uVar45 * 2 + 4;
      uVar31 = *puVar43;
      uVar26 = puVar43[1];
      uVar5 = puVar43[2];
      uVar6 = puVar43[3];
      *(undefined8 *)(puVar40 + uVar45 * 2) = *(undefined8 *)(puVar50 + uVar45 * 2);
      *(undefined8 *)(puVar40 + uVar45 * 2 + 2) = uVar11;
      puVar43 = puVar40 + uVar45 * 2 + 4;
      *puVar43 = uVar31;
      puVar43[1] = uVar26;
      puVar43[2] = uVar5;
      puVar43[3] = uVar6;
      uVar45 = uVar45 + 4;
    } while (uVar27 != uVar45);
    puVar50 = puVar50 + uVar27 * 2;
    puVar40 = puVar40 + uVar27 * 2;
    if (uVar47 != uVar27) goto code_r0x0049d2a0;
  }
  uVar47 = (ulong)*puVar21;
  puVar43 = (uint *)(puVar21 + 1);
  puVar49 = (uint *)((long)puVar33 - uVar47);
  uVar46 = uVar46 & 0xf;
  uVar27 = (ulong)uVar46;
joined_r0x0049d2ca:
  if (uVar46 == 0xf) {
    puVar16 = (uint *)((long)puVar43 + 1);
    if (pbVar1 + -4 < puVar16) goto code_r0x0049d6e8;
    uVar45 = (ulong)(byte)*puVar43;
    puVar43 = puVar16;
    if (uVar45 == 0xff) {
      uVar45 = 0xff;
      do {
        puVar43 = (uint *)((long)puVar16 + 1);
        if (pbVar1 + -4 < puVar43) {
          puVar16 = (uint *)((long)puVar16 + 1);
          goto code_r0x0049d6e8;
        }
        uVar46 = *puVar16;
        uVar45 = uVar45 + (byte)uVar46;
        puVar16 = puVar43;
      } while ((ulong)(byte)uVar46 == 0xff);
    }
    uVar27 = uVar45 + 0xf;
    puVar16 = puVar43;
    if ((uVar45 == 0xffffffffffffffff) || (~(ulong)puVar33 < uVar27)) goto code_r0x0049d6e8;
  }
  uVar27 = uVar27 + 4;
  goto code_r0x0049d324;
}


