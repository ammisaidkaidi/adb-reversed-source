// Function: LZ4_uncompress_unknownOutputSize
// Address: 004a4fb0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


int LZ4_uncompress_unknownOutputSize(uint *param_1,uint *param_2,int param_3,uint param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  uint *puVar3;
  undefined8 *puVar4;
  uint *puVar5;
  byte *pbVar6;
  byte bVar7;
  ushort uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint uVar15;
  uint uVar16;
  undefined8 uVar17;
  long lVar18;
  int iVar19;
  uint *puVar20;
  uint *puVar21;
  uint *puVar22;
  uint uVar23;
  ulong uVar24;
  uint *puVar25;
  byte *pbVar26;
  ulong uVar27;
  long lVar28;
  uint *puVar29;
  ulong uVar30;
  uint *puVar31;
  byte *pbVar32;
  uint *puVar33;
  ulong uVar34;
  byte *pbVar35;
  uint *puVar36;
  uint uVar37;
  uint uVar38;
  ushort *puVar39;
  uint *puVar40;
  ulong uVar41;
  int iStack_50;
  
  iVar19 = -1;
  if (-1 < (int)param_4 && param_1 != (uint *)0x0) {
    if (param_4 == 0) {
      if (param_3 == 1) {
        iVar19 = -(uint)((byte)*param_1 != 0);
      }
    }
    else if (param_3 != 0) {
      pbVar1 = (byte *)((long)param_1 + (long)param_3);
      uVar30 = (ulong)param_4;
      puVar3 = (uint *)((long)param_2 + (uVar30 - 0x20));
      puVar40 = param_1;
      puVar29 = param_2;
      if (param_4 < 0x40) goto code_r0x0049d3c3;
      puVar25 = (uint *)(pbVar1 + -0xf);
      puVar20 = (uint *)((long)param_2 + (uVar30 - 0x40));
      puVar22 = param_1;
code_r0x0049ccbb:
      do {
        puVar33 = (uint *)((long)puVar22 + 1);
        bVar7 = (byte)*puVar22;
        uVar23 = (uint)bVar7;
        uVar27 = (ulong)(uint)(bVar7 >> 4);
        if (bVar7 >> 4 == 0xf) {
          puVar21 = puVar33;
          if ((puVar25 <= puVar33) || (puVar21 = (uint *)((long)puVar22 + 2), puVar25 < puVar21))
          goto code_r0x0049d6e8;
          uVar27 = (ulong)*(byte *)puVar33;
          if (uVar27 == 0xff) {
            uVar27 = 0xff;
            puVar40 = puVar21;
            do {
              puVar21 = (uint *)((long)puVar40 + 1);
              if (puVar25 < puVar21) goto code_r0x0049d6e8;
              uVar37 = *puVar40;
              uVar27 = uVar27 + (byte)uVar37;
              puVar40 = puVar21;
            } while ((ulong)(byte)uVar37 == 0xff);
            if (uVar27 == 0xffffffffffffffff) goto code_r0x0049d6e8;
          }
          uVar27 = uVar27 + 0xf;
          puVar39 = (ushort *)((long)puVar21 + uVar27);
          puVar36 = (uint *)((long)puVar29 + uVar27);
          if ((CARRY8((ulong)puVar29,uVar27)) || (CARRY8((ulong)puVar21,uVar27)))
          goto code_r0x0049d6e8;
          puVar33 = puVar21;
          if (puVar3 < puVar36) goto code_r0x0049d1f2;
          if (pbVar1 + -0x20 < puVar39) goto code_r0x0049d1f2;
          lVar28 = 0;
          do {
            uVar17 = *(undefined8 *)((byte *)((long)puVar21 + lVar28) + 8);
            *(undefined8 *)((long)puVar29 + lVar28) = *(undefined8 *)((long)puVar21 + lVar28);
            *(undefined8 *)((byte *)((long)puVar29 + lVar28) + 8) = uVar17;
            pbVar26 = (byte *)((long)puVar21 + lVar28 + 0x10);
            uVar11 = *(undefined4 *)(pbVar26 + 4);
            uVar12 = *(undefined4 *)(pbVar26 + 8);
            uVar13 = *(undefined4 *)(pbVar26 + 0xc);
            pbVar35 = (byte *)((long)puVar29 + lVar28 + 0x10);
            *(undefined4 *)pbVar35 = *(undefined4 *)pbVar26;
            *(undefined4 *)(pbVar35 + 4) = uVar11;
            *(undefined4 *)(pbVar35 + 8) = uVar12;
            *(undefined4 *)(pbVar35 + 0xc) = uVar13;
            lVar18 = lVar28 + 0x20;
            lVar28 = lVar28 + 0x20;
          } while ((uint *)((long)puVar29 + lVar18) < puVar36);
        }
        else {
          if (pbVar1 + -0x11 < puVar33) goto code_r0x0049d1f2;
          uVar23 = *(uint *)((long)puVar22 + 5);
          uVar37 = *(uint *)((long)puVar22 + 9);
          uVar38 = *(uint *)((long)puVar22 + 0xd);
          *puVar29 = *puVar33;
          puVar29[1] = uVar23;
          puVar29[2] = uVar37;
          puVar29[3] = uVar38;
          puVar39 = (ushort *)((long)puVar33 + uVar27);
          puVar36 = (uint *)((long)puVar29 + uVar27);
        }
        uVar8 = *puVar39;
        uVar41 = (ulong)uVar8;
        puVar22 = (uint *)(puVar39 + 1);
        puVar31 = (uint *)((long)puVar36 - uVar41);
        uVar24 = (ulong)(bVar7 & 0xf);
        if (uVar24 == 0xf) {
          puVar40 = (uint *)((long)puVar39 + 3);
          puVar21 = puVar40;
          if (pbVar1 + -4 < puVar40) goto code_r0x0049d6e8;
          uVar24 = (ulong)(byte)*puVar22;
          if (uVar24 == 0xff) {
            uVar24 = 0xff;
            puVar29 = puVar40;
            do {
              puVar40 = (uint *)((long)puVar29 + 1);
              puVar21 = puVar40;
              if (pbVar1 + -4 < puVar40) goto code_r0x0049d6e8;
              uVar23 = *puVar29;
              uVar24 = uVar24 + (byte)uVar23;
              puVar29 = puVar40;
            } while ((ulong)(byte)uVar23 == 0xff);
            if (uVar24 == 0xffffffffffffffff) goto code_r0x0049d6e8;
          }
          uVar24 = uVar24 + 0x13;
          puVar21 = puVar40;
          if (CARRY8((ulong)puVar36,uVar24)) goto code_r0x0049d6e8;
          puVar22 = puVar40;
          if (puVar20 <= (uint *)((long)puVar36 + uVar24)) goto code_r0x0049d324;
        }
        else {
          puVar29 = (uint *)((long)puVar36 + uVar24 + 4);
          uVar24 = uVar24 + 4;
          puVar40 = puVar22;
          if (puVar20 <= puVar29) goto code_r0x0049d324;
          if ((param_2 <= puVar31) && (7 < uVar8)) {
            *(undefined8 *)puVar36 = *(undefined8 *)puVar31;
            *(undefined8 *)(puVar36 + 2) = *(undefined8 *)(puVar31 + 2);
            *(short *)(puVar36 + 4) = (short)puVar31[4];
            goto code_r0x0049ccbb;
          }
        }
        puVar21 = puVar22;
        if (puVar31 < param_2) goto code_r0x0049d6e8;
        puVar29 = (uint *)((long)puVar36 + uVar24);
        if (uVar8 < 0x10) {
          if (uVar41 == 4) {
            uVar23 = *puVar31;
            uVar38 = uVar23 >> 0x10;
            uVar37 = uVar23;
          }
          else {
            if (uVar8 == 2) {
              uVar8 = (ushort)*puVar31;
              uVar37 = CONCAT22(uVar8,uVar8);
            }
            else {
              if (uVar8 != 1) {
                if (uVar8 < 8) {
                  *puVar36 = 0;
                  *(byte *)puVar36 = (byte)*puVar31;
                  *(byte *)((long)puVar36 + 1) = *(byte *)((long)puVar31 + 1);
                  *(byte *)((long)puVar36 + 2) = *(byte *)((long)puVar31 + 2);
                  *(byte *)((long)puVar36 + 3) = *(byte *)((long)puVar31 + 3);
                  uVar23 = *(uint *)(&UNK_001fe790 + (ulong)uVar8 * 4);
                  puVar36[1] = *(uint *)((long)puVar31 + (ulong)uVar23);
                  puVar31 = (uint *)((long)puVar31 +
                                    ((ulong)uVar23 -
                                    (long)*(int *)(&UNK_001fe630 + (ulong)uVar8 * 4)));
                }
                else {
                  *(undefined8 *)puVar36 = *(undefined8 *)puVar31;
                  puVar31 = puVar31 + 2;
                }
                puVar40 = (uint *)(uVar24 + (long)puVar36);
                if ((uint *)(uVar24 + (long)puVar36) <= puVar36 + 4) {
                  puVar40 = puVar36 + 4;
                }
                puVar33 = puVar36 + 2;
                pbVar26 = (byte *)((long)puVar40 + (-9 - (long)puVar36));
                if (((byte *)0x17 < pbVar26) &&
                   ((byte *)0x1f < (byte *)((long)puVar36 + (8 - (long)puVar31)))) {
                  uVar27 = ((ulong)pbVar26 >> 3) + 1;
                  uVar41 = uVar27 & 0x3ffffffffffffffc;
                  puVar33 = puVar33 + uVar41 * 2;
                  uVar24 = 0;
                  do {
                    puVar40 = puVar31 + uVar24 * 2;
                    uVar10 = puVar40[1];
                    uVar15 = puVar40[2];
                    uVar16 = puVar40[3];
                    puVar21 = puVar31 + uVar24 * 2 + 4;
                    uVar23 = *puVar21;
                    uVar37 = puVar21[1];
                    uVar38 = puVar21[2];
                    uVar9 = puVar21[3];
                    puVar21 = puVar36 + uVar24 * 2 + 2;
                    *puVar21 = *puVar40;
                    puVar21[1] = uVar10;
                    puVar21[2] = uVar15;
                    puVar21[3] = uVar16;
                    puVar40 = puVar36 + uVar24 * 2 + 6;
                    *puVar40 = uVar23;
                    puVar40[1] = uVar37;
                    puVar40[2] = uVar38;
                    puVar40[3] = uVar9;
                    uVar24 = uVar24 + 4;
                  } while (uVar41 != uVar24);
                  puVar31 = puVar31 + uVar41 * 2;
                  if (uVar27 == uVar41) goto code_r0x0049ccbb;
                }
                do {
                  *(undefined8 *)puVar33 = *(undefined8 *)puVar31;
                  puVar33 = puVar33 + 2;
                  puVar31 = puVar31 + 2;
                } while (puVar33 < puVar29);
                goto code_r0x0049ccbb;
              }
              bVar7 = (byte)*puVar31;
              uVar8 = CONCAT11(bVar7,bVar7);
              uVar37 = (uint)bVar7 * 0x1010101;
            }
            uVar23 = (uint)uVar8;
            uVar38 = uVar23;
          }
          uVar23 = uVar23 & 0xffff | uVar38 << 0x10;
          *(ulong *)puVar36 = CONCAT44(uVar37,uVar23);
          if (8 < uVar24) {
            puVar40 = (uint *)(uVar24 + (long)puVar36);
            if ((uint *)(uVar24 + (long)puVar36) <= puVar36 + 4) {
              puVar40 = puVar36 + 4;
            }
            puVar33 = puVar36 + 2;
            pbVar26 = (byte *)((long)puVar40 + (-9 - (long)puVar36));
            if ((byte *)0x17 < pbVar26) {
              uVar27 = ((ulong)pbVar26 >> 3) + 1;
              uVar41 = uVar27 & 0x3ffffffffffffffc;
              puVar33 = puVar33 + uVar41 * 2;
              uVar24 = 0;
              do {
                puVar40 = puVar36 + uVar24 * 2 + 2;
                *puVar40 = uVar23;
                puVar40[1] = uVar37;
                puVar40[2] = uVar23;
                puVar40[3] = uVar37;
                puVar40 = puVar36 + uVar24 * 2 + 6;
                *puVar40 = uVar23;
                puVar40[1] = uVar37;
                puVar40[2] = uVar23;
                puVar40[3] = uVar37;
                uVar24 = uVar24 + 4;
              } while (uVar41 != uVar24);
              if (uVar27 == uVar41) goto code_r0x0049ccbb;
            }
            do {
              *(ulong *)puVar33 = CONCAT44(uVar37,uVar23);
              puVar33 = puVar33 + 2;
            } while (puVar33 < puVar29);
          }
          goto code_r0x0049ccbb;
        }
        do {
          puVar4 = (undefined8 *)((long)puVar36 + -uVar41);
          uVar17 = puVar4[1];
          *(undefined8 *)puVar36 = *puVar4;
          *(undefined8 *)(puVar36 + 2) = uVar17;
          pbVar26 = (byte *)((long)puVar36 + -uVar41 + 0x10);
          uVar17 = *(undefined8 *)(pbVar26 + 8);
          *(undefined8 *)(puVar36 + 4) = *(undefined8 *)pbVar26;
          *(undefined8 *)(puVar36 + 6) = uVar17;
          puVar36 = puVar36 + 8;
        } while (puVar36 < puVar29);
      } while( true );
    }
  }
  return iVar19;
code_r0x0049d324:
  puVar21 = puVar40;
  if (puVar31 < param_2) {
code_r0x0049d6e8:
    iStack_50 = (int)param_1;
    return ~(uint)puVar21 + iStack_50;
  }
  puVar29 = (uint *)((long)puVar36 + uVar24);
  if ((uint)uVar41 < 8) {
    *puVar36 = 0;
    *(byte *)puVar36 = (byte)*puVar31;
    *(byte *)((long)puVar36 + 1) = *(byte *)((long)puVar31 + 1);
    *(byte *)((long)puVar36 + 2) = *(byte *)((long)puVar31 + 2);
    *(byte *)((long)puVar36 + 3) = *(byte *)((long)puVar31 + 3);
    uVar37 = (uint)uVar41 << 2;
    uVar23 = *(uint *)(&UNK_001fe790 + uVar37);
    puVar36[1] = *(uint *)((long)puVar31 + (ulong)uVar23);
    puVar31 = (uint *)((long)puVar31 + ((ulong)uVar23 - (long)*(int *)(&UNK_001fe630 + uVar37)));
  }
  else {
    *(undefined8 *)puVar36 = *(undefined8 *)puVar31;
    puVar31 = puVar31 + 2;
  }
  puVar25 = puVar36 + 2;
  if ((uint *)((long)param_2 + (uVar30 - 0xc)) < puVar29) {
    if ((uint *)((long)param_2 + (uVar30 - 5)) < puVar29) goto code_r0x0049d6e8;
    puVar22 = (uint *)((long)param_2 + (uVar30 - 7));
    puVar33 = (uint *)((long)param_2 + (uVar30 - 7));
    puVar20 = puVar31;
    if (puVar25 < puVar22) {
      puVar20 = puVar36 + 4;
      if (puVar36 + 4 < puVar33) {
        puVar20 = puVar33;
      }
      pbVar26 = (byte *)((long)puVar20 + (-9 - (long)puVar36));
      puVar21 = puVar25;
      puVar20 = puVar31;
      if ((pbVar26 < (byte *)0x48) || ((byte *)((long)puVar36 + (8 - (long)puVar31)) < (byte *)0x20)
         ) {
code_r0x0049d582:
        do {
          *(undefined8 *)puVar21 = *(undefined8 *)puVar20;
          puVar21 = puVar21 + 2;
          puVar20 = puVar20 + 2;
        } while (puVar21 < puVar22);
      }
      else {
        uVar27 = ((ulong)pbVar26 >> 3) + 1;
        uVar34 = uVar27 & 0x3ffffffffffffffc;
        puVar20 = puVar31 + uVar34 * 2;
        puVar21 = puVar25 + uVar34 * 2;
        uVar41 = 0;
        do {
          uVar17 = *(undefined8 *)(puVar31 + uVar41 * 2 + 2);
          puVar5 = puVar31 + uVar41 * 2 + 4;
          uVar23 = *puVar5;
          uVar37 = puVar5[1];
          uVar38 = puVar5[2];
          uVar9 = puVar5[3];
          *(undefined8 *)(puVar36 + uVar41 * 2 + 2) = *(undefined8 *)(puVar31 + uVar41 * 2);
          *(undefined8 *)(puVar36 + uVar41 * 2 + 2 + 2) = uVar17;
          puVar5 = puVar36 + uVar41 * 2 + 6;
          *puVar5 = uVar23;
          puVar5[1] = uVar37;
          puVar5[2] = uVar38;
          puVar5[3] = uVar9;
          uVar41 = uVar41 + 4;
        } while (uVar34 != uVar41);
        if (uVar27 != uVar34) goto code_r0x0049d582;
      }
      lVar28 = (long)puVar22 - (long)puVar25;
      puVar25 = puVar22;
      puVar20 = (uint *)(lVar28 + (long)puVar31);
    }
    if (puVar25 < puVar29) {
      puVar22 = puVar36 + 2;
      if (puVar36 + 2 < puVar33) {
        puVar22 = puVar33;
      }
      pbVar26 = (byte *)((long)puVar36 + (uVar24 - (long)puVar22));
      puVar33 = puVar25;
      puVar21 = puVar20;
      if (((byte *)0x3 < pbVar26) && ((byte *)0x1f < (byte *)((long)puVar36 + (8 - (long)puVar31))))
      {
        pbVar35 = (byte *)0x0;
        if ((byte *)0x1f < pbVar26) {
          pbVar35 = (byte *)((ulong)pbVar26 & 0xffffffffffffffe0);
          pbVar32 = (byte *)0x0;
          do {
            pbVar6 = (byte *)((long)puVar31 +
                             (long)((long)puVar22 + (long)(pbVar32 + (-8 - (long)puVar36))));
            uVar17 = *(undefined8 *)(pbVar6 + 8);
            pbVar2 = (byte *)((long)puVar31 +
                             (long)((long)puVar22 + (long)(pbVar32 + (8 - (long)puVar36))));
            uVar11 = *(undefined4 *)pbVar2;
            uVar12 = *(undefined4 *)(pbVar2 + 4);
            uVar13 = *(undefined4 *)(pbVar2 + 8);
            uVar14 = *(undefined4 *)(pbVar2 + 0xc);
            *(undefined8 *)((long)puVar25 + (long)pbVar32) = *(undefined8 *)pbVar6;
            *(undefined8 *)((byte *)((long)puVar25 + (long)pbVar32) + 8) = uVar17;
            pbVar2 = (byte *)((long)puVar25 + (long)(pbVar32 + 0x10));
            *(undefined4 *)pbVar2 = uVar11;
            *(undefined4 *)(pbVar2 + 4) = uVar12;
            *(undefined4 *)(pbVar2 + 8) = uVar13;
            *(undefined4 *)(pbVar2 + 0xc) = uVar14;
            pbVar32 = pbVar32 + 0x20;
          } while (pbVar35 != pbVar32);
          if (pbVar26 == pbVar35) goto code_r0x0049d3c3;
          puVar33 = (uint *)((long)puVar25 + (long)pbVar35);
          puVar21 = (uint *)(pbVar35 + (long)puVar20);
          if (((ulong)pbVar26 & 0x1c) == 0) goto code_r0x0049d649;
        }
        pbVar32 = (byte *)((ulong)pbVar26 & 0xfffffffffffffffc);
        do {
          *(undefined4 *)((long)puVar25 + (long)pbVar35) =
               *(undefined4 *)((long)puVar20 + (long)pbVar35);
          pbVar35 = pbVar35 + 4;
        } while (pbVar32 != pbVar35);
        puVar33 = (uint *)((long)puVar25 + (long)pbVar32);
        puVar21 = (uint *)(pbVar32 + (long)puVar20);
        if (pbVar26 == pbVar32) goto code_r0x0049d3c3;
      }
code_r0x0049d649:
      do {
        *(byte *)puVar33 = (byte)*puVar21;
        puVar33 = (uint *)((long)puVar33 + 1);
        puVar21 = (uint *)((long)puVar21 + 1);
      } while (puVar33 < puVar29);
    }
  }
  else {
    *(undefined8 *)puVar25 = *(undefined8 *)puVar31;
    if (0x10 < uVar24) {
      puVar25 = (uint *)(uVar24 + (long)puVar36);
      if ((uint *)(uVar24 + (long)puVar36) <= puVar36 + 6) {
        puVar25 = puVar36 + 6;
      }
      puVar22 = puVar36 + 4;
      pbVar26 = (byte *)((long)puVar25 + (-0x11 - (long)puVar36));
      puVar25 = puVar31;
      if (((byte *)0x47 < pbVar26) && ((byte *)0x1f < (byte *)((long)puVar36 + (8 - (long)puVar31)))
         ) {
        uVar27 = ((ulong)pbVar26 >> 3) + 1;
        uVar41 = uVar27 & 0x3ffffffffffffffc;
        puVar25 = puVar31 + uVar41 * 2;
        puVar22 = puVar22 + uVar41 * 2;
        uVar24 = 0;
        do {
          uVar17 = *(undefined8 *)(puVar31 + uVar24 * 2 + 2 + 2);
          puVar20 = puVar31 + uVar24 * 2 + 6;
          uVar23 = *puVar20;
          uVar37 = puVar20[1];
          uVar38 = puVar20[2];
          uVar9 = puVar20[3];
          *(undefined8 *)(puVar36 + uVar24 * 2 + 4) = *(undefined8 *)(puVar31 + uVar24 * 2 + 2);
          *(undefined8 *)(puVar36 + uVar24 * 2 + 4 + 2) = uVar17;
          puVar20 = puVar36 + uVar24 * 2 + 8;
          *puVar20 = uVar23;
          puVar20[1] = uVar37;
          puVar20[2] = uVar38;
          puVar20[3] = uVar9;
          uVar24 = uVar24 + 4;
        } while (uVar41 != uVar24);
        if (uVar27 == uVar41) goto code_r0x0049d3c3;
      }
      do {
        *(undefined8 *)puVar22 = *(undefined8 *)(puVar25 + 2);
        puVar22 = puVar22 + 2;
        puVar25 = puVar25 + 2;
      } while (puVar22 < puVar29);
    }
  }
code_r0x0049d3c3:
  puVar33 = (uint *)((long)puVar40 + 1);
  bVar7 = (byte)*puVar40;
  while( true ) {
    uVar23 = (uint)bVar7;
    if (bVar7 >> 4 == 0xf) break;
    uVar27 = (ulong)(uint)(bVar7 >> 4);
    if (((uint *)((long)param_1 + (long)param_3 + -0x10) <= puVar33) || (puVar3 < puVar29))
    goto code_r0x0049d1f2;
    uVar17 = *(undefined8 *)(puVar33 + 2);
    *(undefined8 *)puVar29 = *(undefined8 *)puVar33;
    *(undefined8 *)(puVar29 + 2) = uVar17;
    puVar36 = (uint *)((long)puVar29 + uVar27);
    uVar23 = uVar23 & 0xf;
    uVar24 = (ulong)uVar23;
    uVar41 = (ulong)*(ushort *)((long)puVar33 + uVar27);
    puVar40 = (uint *)((long)puVar33 + uVar27 + 2);
    puVar31 = (uint *)((long)puVar36 - uVar41);
    if (((uVar23 == 0xf) || (*(ushort *)((long)puVar33 + uVar27) < 8)) || (puVar31 < param_2))
    goto joined_r0x0049d2ca;
    *(undefined8 *)puVar36 = *(undefined8 *)puVar31;
    *(undefined8 *)(puVar36 + 2) = *(undefined8 *)(puVar31 + 2);
    *(short *)(puVar36 + 4) = (short)puVar31[4];
    puVar29 = (uint *)((long)puVar36 + uVar24 + 4);
    bVar7 = *(byte *)((long)puVar33 + uVar27 + 2);
    puVar33 = (uint *)((long)puVar33 + uVar27 + 3);
  }
  puVar25 = (uint *)(pbVar1 + -0xf);
  puVar21 = puVar33;
  if ((puVar25 <= puVar33) || (puVar21 = (uint *)((long)puVar40 + 2), puVar25 < puVar21))
  goto code_r0x0049d6e8;
  uVar27 = (ulong)(byte)*puVar33;
  if (uVar27 == 0xff) {
    uVar27 = 0xff;
    do {
      puVar40 = puVar21;
      puVar21 = (uint *)((long)puVar40 + 1);
      if (puVar25 < puVar21) goto code_r0x0049d5d7;
      uVar27 = uVar27 + (byte)*puVar40;
    } while ((ulong)(byte)*puVar40 == 0xff);
    if (uVar27 == 0xffffffffffffffff) {
code_r0x0049d5d7:
      puVar21 = (uint *)((long)puVar40 + 1);
      goto code_r0x0049d6e8;
    }
  }
  uVar27 = uVar27 + 0xf;
  if ((CARRY8((ulong)puVar29,uVar27)) || (puVar33 = puVar21, CARRY8((ulong)puVar21,uVar27)))
  goto code_r0x0049d6e8;
code_r0x0049d1f2:
  puVar36 = (uint *)((long)puVar29 + uVar27);
  if (((uint *)((long)param_2 + (uVar30 - 0xc)) < puVar36) ||
     (puVar39 = (ushort *)((long)puVar33 + uVar27), pbVar1 + -8 < puVar39)) {
    puVar21 = puVar33;
    if (((byte *)((long)puVar33 + uVar27) == pbVar1) &&
       (puVar36 <= (uint *)((long)param_2 + uVar30))) {
      func_0x0099bd90(puVar29,puVar33);
      return (int)puVar36 - (int)param_2;
    }
    goto code_r0x0049d6e8;
  }
  puVar40 = (uint *)(uVar27 + (long)puVar29);
  if ((uint *)(uVar27 + (long)puVar29) <= puVar29 + 2) {
    puVar40 = puVar29 + 2;
  }
  if (((byte *)(~(ulong)puVar29 + (long)puVar40) < (byte *)0x38) ||
     ((ulong)((long)puVar29 - (long)puVar33) < 0x20)) {
code_r0x0049d2a0:
    do {
      *(undefined8 *)puVar29 = *(undefined8 *)puVar33;
      puVar29 = puVar29 + 2;
      puVar33 = puVar33 + 2;
    } while (puVar29 < puVar36);
  }
  else {
    uVar41 = (~(ulong)puVar29 + (long)puVar40 >> 3) + 1;
    uVar24 = uVar41 & 0x3ffffffffffffffc;
    uVar27 = 0;
    do {
      uVar17 = *(undefined8 *)(puVar33 + uVar27 * 2 + 2);
      puVar40 = puVar33 + uVar27 * 2 + 4;
      uVar37 = *puVar40;
      uVar38 = puVar40[1];
      uVar9 = puVar40[2];
      uVar10 = puVar40[3];
      *(undefined8 *)(puVar29 + uVar27 * 2) = *(undefined8 *)(puVar33 + uVar27 * 2);
      *(undefined8 *)(puVar29 + uVar27 * 2 + 2) = uVar17;
      puVar40 = puVar29 + uVar27 * 2 + 4;
      *puVar40 = uVar37;
      puVar40[1] = uVar38;
      puVar40[2] = uVar9;
      puVar40[3] = uVar10;
      uVar27 = uVar27 + 4;
    } while (uVar24 != uVar27);
    puVar33 = puVar33 + uVar24 * 2;
    puVar29 = puVar29 + uVar24 * 2;
    if (uVar41 != uVar24) goto code_r0x0049d2a0;
  }
  uVar41 = (ulong)*puVar39;
  puVar40 = (uint *)(puVar39 + 1);
  puVar31 = (uint *)((long)puVar36 - uVar41);
  uVar23 = uVar23 & 0xf;
  uVar24 = (ulong)uVar23;
joined_r0x0049d2ca:
  if (uVar23 == 0xf) {
    puVar21 = (uint *)((long)puVar40 + 1);
    if (pbVar1 + -4 < puVar21) goto code_r0x0049d6e8;
    uVar27 = (ulong)(byte)*puVar40;
    puVar40 = puVar21;
    if (uVar27 == 0xff) {
      uVar27 = 0xff;
      do {
        puVar40 = (uint *)((long)puVar21 + 1);
        if (pbVar1 + -4 < puVar40) {
          puVar21 = (uint *)((long)puVar21 + 1);
          goto code_r0x0049d6e8;
        }
        uVar23 = *puVar21;
        uVar27 = uVar27 + (byte)uVar23;
        puVar21 = puVar40;
      } while ((ulong)(byte)uVar23 == 0xff);
    }
    uVar24 = uVar27 + 0xf;
    puVar21 = puVar40;
    if ((uVar27 == 0xffffffffffffffff) || (~(ulong)puVar36 < uVar24)) goto code_r0x0049d6e8;
  }
  uVar24 = uVar24 + 4;
  goto code_r0x0049d324;
}


