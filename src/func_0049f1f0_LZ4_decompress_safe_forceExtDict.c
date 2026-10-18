// Function: LZ4_decompress_safe_forceExtDict
// Address: 0049f1f0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


int LZ4_decompress_safe_forceExtDict
              (ushort *param_1,uint *param_2,int param_3,uint param_4,long param_5,ulong param_6)

{
  byte *pbVar1;
  uint *puVar2;
  uint *puVar3;
  byte *pbVar4;
  uint *puVar5;
  undefined8 *puVar6;
  byte *pbVar7;
  byte bVar8;
  ushort uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  ushort uVar14;
  long lVar15;
  ushort *puVar16;
  uint *puVar17;
  ushort *puVar18;
  long lVar19;
  uint *puVar20;
  ulong uVar21;
  uint uVar22;
  ulong uVar23;
  ulong uVar24;
  byte *pbVar25;
  uint *puVar26;
  uint uVar27;
  uint *puVar28;
  ulong uVar29;
  byte *pbVar30;
  ushort *puVar31;
  uint *puVar32;
  uint *puVar33;
  uint uVar34;
  ulong uVar35;
  byte *pbVar36;
  uint *puVar37;
  int iVar38;
  uint *puVar39;
  int iStack_88;
  ushort *puStack_38;
  
  iVar38 = -1;
  if (-1 < (int)param_4 && param_1 != (ushort *)0x0) {
    lVar15 = param_5 + param_6;
    if (param_5 == 0) {
      lVar15 = 0;
    }
    if (param_4 == 0) {
      if (param_3 == 1) {
        iVar38 = -(uint)((byte)*param_1 != 0);
      }
    }
    else if (param_3 != 0) {
      pbVar1 = (byte *)((long)param_1 + (long)param_3);
      uVar23 = (ulong)param_4;
      puVar2 = (uint *)((long)param_2 + uVar23);
      puVar5 = (uint *)((long)param_2 + (uVar23 - 0x20));
      puVar32 = param_2;
      puVar31 = param_1;
      if (param_4 < 0x40) goto code_r0x0049fdc3;
      puVar31 = (ushort *)(pbVar1 + -0xf);
      puVar18 = param_1;
code_r0x0049f30c:
      while( true ) {
        puVar16 = (ushort *)((long)puVar18 + 1);
        bVar8 = (byte)*puVar18;
        uVar34 = (uint)bVar8;
        uVar24 = (ulong)(uint)(bVar8 >> 4);
        puStack_38 = puVar16;
        if (bVar8 >> 4 == 0xf) {
          if ((puVar31 <= puVar16) || (puStack_38 = puVar18 + 1, puVar31 < puStack_38))
          goto code_r0x004a0078;
          uVar24 = (ulong)*(byte *)puVar16;
          if (uVar24 == 0xff) {
            uVar24 = 0xff;
            puVar18 = puStack_38;
            do {
              puStack_38 = (ushort *)((long)puVar18 + 1);
              if (puVar31 < puStack_38) goto code_r0x004a0078;
              uVar9 = *puVar18;
              uVar24 = uVar24 + (byte)uVar9;
              puVar18 = puStack_38;
            } while ((ulong)(byte)uVar9 == 0xff);
            if (uVar24 == 0xffffffffffffffff) goto code_r0x004a0078;
          }
          uVar24 = uVar24 + 0xf;
          puVar16 = (ushort *)((long)puStack_38 + uVar24);
          puVar39 = (uint *)((long)puVar32 + uVar24);
          if ((CARRY8((ulong)puVar32,uVar24)) || (CARRY8((ulong)puStack_38,uVar24)))
          goto code_r0x004a0078;
          if (puVar5 < puVar39) goto code_r0x0049f9e9;
          if (pbVar1 + -0x20 < puVar16) goto code_r0x0049f9e9;
          lVar19 = 0;
          do {
            uVar10 = *(undefined8 *)((byte *)((long)puStack_38 + lVar19) + 8);
            *(undefined8 *)((long)puVar32 + lVar19) = *(undefined8 *)((long)puStack_38 + lVar19);
            *(undefined8 *)((byte *)((long)puVar32 + lVar19) + 8) = uVar10;
            pbVar36 = (byte *)((long)puStack_38 + lVar19 + 0x10);
            uVar10 = *(undefined8 *)(pbVar36 + 8);
            pbVar25 = (byte *)((long)puVar32 + lVar19 + 0x10);
            *(undefined8 *)pbVar25 = *(undefined8 *)pbVar36;
            *(undefined8 *)(pbVar25 + 8) = uVar10;
            lVar13 = lVar19 + 0x20;
            lVar19 = lVar19 + 0x20;
          } while ((uint *)((long)puVar32 + lVar13) < puVar39);
        }
        else {
          if (pbVar1 + -0x11 < puVar16) goto code_r0x0049f9e9;
          uVar10 = *(undefined8 *)((long)puVar18 + 9);
          *(undefined8 *)puVar32 = *(undefined8 *)puVar16;
          *(undefined8 *)(puVar32 + 2) = uVar10;
          puVar16 = (ushort *)((long)puVar16 + uVar24);
          puVar39 = (uint *)((long)puVar32 + uVar24);
        }
        uVar9 = *puVar16;
        uVar21 = (ulong)uVar9;
        puVar18 = puVar16 + 1;
        puVar37 = (uint *)((long)puVar39 - uVar21);
        uVar35 = (ulong)(bVar8 & 0xf);
        if (uVar35 == 0xf) break;
        puVar32 = (uint *)((long)puVar39 + uVar35 + 4);
        uVar35 = uVar35 + 4;
        puStack_38 = puVar18;
        if (puVar2 + -0x10 <= puVar32) goto code_r0x0049fb21;
        if ((puVar37 < param_2) || (uVar9 < 8)) goto code_r0x0049f480;
        *(undefined8 *)puVar39 = *(undefined8 *)puVar37;
        *(undefined8 *)(puVar39 + 2) = *(undefined8 *)(puVar37 + 2);
        *(short *)(puVar39 + 4) = (short)puVar37[4];
      }
      puStack_38 = (ushort *)((long)puVar16 + 3);
      if (pbVar1 + -4 < puStack_38) goto code_r0x004a0078;
      uVar35 = (ulong)(byte)*puVar18;
      if (uVar35 == 0xff) {
        uVar35 = 0xff;
        puVar18 = puStack_38;
        do {
          puStack_38 = (ushort *)((long)puVar18 + 1);
          if (pbVar1 + -4 < puStack_38) goto code_r0x004a0078;
          uVar14 = *puVar18;
          uVar35 = uVar35 + (byte)uVar14;
          puVar18 = puStack_38;
        } while ((ulong)(byte)uVar14 == 0xff);
        if (uVar35 == 0xffffffffffffffff) goto code_r0x004a0078;
      }
      uVar35 = uVar35 + 0x13;
      if (CARRY8((ulong)puVar39,uVar35)) goto code_r0x004a0078;
      if (puVar2 + -0x10 <= (uint *)((long)puVar39 + uVar35)) goto code_r0x0049fb21;
code_r0x0049f480:
      if (param_6 < 0x10000 && (uint *)((long)puVar37 + param_6) < param_2) goto code_r0x004a0078;
      puVar3 = (uint *)((long)puVar39 + uVar35);
      puVar32 = puVar3;
      puVar18 = puStack_38;
      if (puVar37 < param_2) {
        if ((uint *)((long)puVar2 + -5) < puVar3) goto code_r0x004a0078;
        uVar24 = (long)param_2 - (long)puVar37;
        if (uVar35 <= uVar24) {
          func_0x0099bd90(puVar39,lVar15 - uVar24,uVar35);
          goto code_r0x0049f30c;
        }
        func_0x0099bda0(puVar39,lVar15 - uVar24,uVar24);
        puVar32 = (uint *)(uVar24 + (long)puVar39);
        if ((ulong)((long)puVar32 - (long)param_2) < uVar35 - uVar24) {
          pbVar25 = (byte *)((long)param_2 + uVar21 + 1);
          pbVar36 = (byte *)(uVar35 + (long)puVar39);
          if ((byte *)(uVar35 + (long)puVar39) < pbVar25) {
            pbVar36 = pbVar25;
          }
          pbVar36 = pbVar36 + (-uVar21 - (long)param_2);
          puVar39 = param_2;
          if (((byte *)0x1f < pbVar36) && (0x1f < uVar9)) {
            pbVar25 = (byte *)((ulong)pbVar36 & 0xffffffffffffffe0);
            puVar32 = (uint *)((long)puVar32 + (long)pbVar25);
            pbVar30 = (byte *)0x0;
            do {
              uVar10 = *(undefined8 *)((byte *)((long)param_2 + (long)pbVar30) + 8);
              uVar11 = *(undefined8 *)((long)param_2 + (long)(pbVar30 + 0x10));
              uVar12 = *(undefined8 *)((byte *)((long)param_2 + (long)(pbVar30 + 0x10)) + 8);
              *(undefined8 *)((long)param_2 + (long)(pbVar30 + uVar21)) =
                   *(undefined8 *)((long)param_2 + (long)pbVar30);
              *(undefined8 *)((byte *)((long)param_2 + (long)(pbVar30 + uVar21)) + 8) = uVar10;
              *(undefined8 *)((long)param_2 + (long)(pbVar30 + uVar21 + 0x10)) = uVar11;
              *(undefined8 *)((byte *)((long)param_2 + (long)(pbVar30 + uVar21 + 0x10)) + 8) =
                   uVar12;
              pbVar30 = pbVar30 + 0x20;
            } while (pbVar25 != pbVar30);
            puVar39 = (uint *)((long)param_2 + (long)pbVar25);
            if (pbVar36 == pbVar25) goto code_r0x0049f30c;
          }
          do {
            *(byte *)puVar32 = (byte)*puVar39;
            puVar32 = (uint *)((long)puVar32 + 1);
            puVar39 = (uint *)((long)puVar39 + 1);
          } while (puVar32 < puVar3);
          goto code_r0x0049f30c;
        }
        func_0x0099bda0(puVar32,param_2);
        puVar32 = puVar3;
        goto code_r0x0049f30c;
      }
      if (0xf < uVar9) {
        do {
          puVar6 = (undefined8 *)((long)puVar39 + -uVar21);
          uVar10 = puVar6[1];
          *(undefined8 *)puVar39 = *puVar6;
          *(undefined8 *)(puVar39 + 2) = uVar10;
          pbVar36 = (byte *)((long)puVar39 + -uVar21 + 0x10);
          uVar10 = *(undefined8 *)(pbVar36 + 8);
          *(undefined8 *)(puVar39 + 4) = *(undefined8 *)pbVar36;
          *(undefined8 *)(puVar39 + 6) = uVar10;
          puVar39 = puVar39 + 8;
        } while (puVar39 < puVar3);
        goto code_r0x0049f30c;
      }
      if (uVar21 == 4) {
        uVar34 = *puVar37;
        uVar22 = uVar34 >> 0x10;
        uVar27 = uVar34;
      }
      else {
        if (uVar9 == 2) {
          uVar9 = (ushort)*puVar37;
          uVar27 = CONCAT22(uVar9,uVar9);
        }
        else {
          if (uVar9 != 1) {
            if (uVar9 < 8) {
              *puVar39 = 0;
              *(byte *)puVar39 = (byte)*puVar37;
              *(byte *)((long)puVar39 + 1) = *(byte *)((long)puVar37 + 1);
              *(byte *)((long)puVar39 + 2) = *(byte *)((long)puVar37 + 2);
              *(byte *)((long)puVar39 + 3) = *(byte *)((long)puVar37 + 3);
              uVar34 = *(uint *)(&UNK_001fe790 + (ulong)uVar9 * 4);
              puVar39[1] = *(uint *)((long)puVar37 + (ulong)uVar34);
              puVar37 = (uint *)((long)puVar37 +
                                ((ulong)uVar34 - (long)*(int *)(&UNK_001fe630 + (ulong)uVar9 * 4)));
            }
            else {
              *(undefined8 *)puVar39 = *(undefined8 *)puVar37;
              puVar37 = puVar37 + 2;
            }
            puVar20 = (uint *)(uVar35 + (long)puVar39);
            if ((uint *)(uVar35 + (long)puVar39) <= puVar39 + 4) {
              puVar20 = puVar39 + 4;
            }
            puVar17 = puVar39 + 2;
            pbVar36 = (byte *)((long)puVar20 + (-9 - (long)puVar39));
            puVar20 = puVar37;
            if (((byte *)0x17 < pbVar36) &&
               ((byte *)0x1f < (byte *)((long)puVar39 + (8 - (long)puVar37)))) {
              uVar21 = ((ulong)pbVar36 >> 3) + 1;
              uVar24 = uVar21 & 0x3ffffffffffffffc;
              puVar20 = puVar37 + uVar24 * 2;
              puVar17 = puVar17 + uVar24 * 2;
              uVar35 = 0;
              do {
                uVar10 = *(undefined8 *)(puVar37 + uVar35 * 2 + 2);
                uVar11 = *(undefined8 *)(puVar37 + uVar35 * 2 + 4);
                uVar12 = *(undefined8 *)(puVar37 + uVar35 * 2 + 4 + 2);
                *(undefined8 *)(puVar39 + uVar35 * 2 + 2) = *(undefined8 *)(puVar37 + uVar35 * 2);
                *(undefined8 *)(puVar39 + uVar35 * 2 + 2 + 2) = uVar10;
                *(undefined8 *)(puVar39 + uVar35 * 2 + 6) = uVar11;
                *(undefined8 *)(puVar39 + uVar35 * 2 + 6 + 2) = uVar12;
                uVar35 = uVar35 + 4;
              } while (uVar24 != uVar35);
              if (uVar21 == uVar24) goto code_r0x0049f30c;
            }
            do {
              *(undefined8 *)puVar17 = *(undefined8 *)puVar20;
              puVar17 = puVar17 + 2;
              puVar20 = puVar20 + 2;
            } while (puVar17 < puVar3);
            goto code_r0x0049f30c;
          }
          bVar8 = (byte)*puVar37;
          uVar9 = CONCAT11(bVar8,bVar8);
          uVar27 = (uint)bVar8 * 0x1010101;
        }
        uVar34 = (uint)uVar9;
        uVar22 = uVar34;
      }
      uVar34 = uVar34 & 0xffff | uVar22 << 0x10;
      *(ulong *)puVar39 = CONCAT44(uVar27,uVar34);
      if (8 < uVar35) {
        puVar37 = (uint *)(uVar35 + (long)puVar39);
        if ((uint *)(uVar35 + (long)puVar39) <= puVar39 + 4) {
          puVar37 = puVar39 + 4;
        }
        puVar20 = puVar39 + 2;
        pbVar36 = (byte *)((long)puVar37 + (-9 - (long)puVar39));
        if ((byte *)0x17 < pbVar36) {
          uVar21 = ((ulong)pbVar36 >> 3) + 1;
          uVar24 = uVar21 & 0x3ffffffffffffffc;
          puVar20 = puVar20 + uVar24 * 2;
          uVar35 = 0;
          do {
            puVar37 = puVar39 + uVar35 * 2 + 2;
            *puVar37 = uVar34;
            puVar37[1] = uVar27;
            puVar37[2] = uVar34;
            puVar37[3] = uVar27;
            puVar37 = puVar39 + uVar35 * 2 + 6;
            *puVar37 = uVar34;
            puVar37[1] = uVar27;
            puVar37[2] = uVar34;
            puVar37[3] = uVar27;
            uVar35 = uVar35 + 4;
          } while (uVar24 != uVar35);
          if (uVar21 == uVar24) goto code_r0x0049f30c;
        }
        do {
          *(ulong *)puVar20 = CONCAT44(uVar27,uVar34);
          puVar20 = puVar20 + 2;
        } while (puVar20 < puVar3);
      }
      goto code_r0x0049f30c;
    }
  }
  return iVar38;
code_r0x0049fb21:
  if (param_6 < 0x10000 && (uint *)((long)puVar37 + param_6) < param_2) {
code_r0x004a0078:
    iStack_88 = (int)param_1;
    return ~(uint)puStack_38 + iStack_88;
  }
  puVar3 = (uint *)((long)puVar39 + uVar35);
  puVar32 = puVar3;
  puVar31 = puStack_38;
  if (puVar37 < param_2) {
    if ((uint *)((long)puVar2 + -5) < puVar3) goto code_r0x004a0078;
    uVar24 = (long)param_2 - (long)puVar37;
    if (uVar24 < uVar35) {
      func_0x0099bda0(puVar39,lVar15 - uVar24,uVar24);
      puVar32 = (uint *)((long)puVar39 + uVar24);
      if ((ulong)((long)puVar32 - (long)param_2) < uVar35 - uVar24) {
        pbVar25 = (byte *)((long)puVar39 + (long)param_2) + (1 - (long)puVar37);
        pbVar36 = (byte *)(uVar35 + (long)puVar39);
        if ((byte *)(uVar35 + (long)puVar39) < pbVar25) {
          pbVar36 = pbVar25;
        }
        uVar35 = (long)(pbVar36 + (long)puVar37) - ((long)puVar39 + (long)param_2);
        puVar37 = param_2;
        if ((0x1f < uVar35) && (0x1f < (ulong)((long)puVar32 - (long)param_2))) {
          uVar21 = uVar35 & 0xffffffffffffffe0;
          puVar32 = (uint *)((long)puVar32 + uVar21);
          uVar29 = 0;
          do {
            uVar10 = *(undefined8 *)((byte *)((long)param_2 + uVar29) + 8);
            pbVar36 = (byte *)((long)param_2 + uVar29 + 0x10);
            uVar11 = *(undefined8 *)pbVar36;
            uVar12 = *(undefined8 *)(pbVar36 + 8);
            pbVar36 = (byte *)((long)puVar39 + uVar29 + uVar24);
            *(undefined8 *)pbVar36 = *(undefined8 *)((long)param_2 + uVar29);
            *(undefined8 *)(pbVar36 + 8) = uVar10;
            pbVar36 = (byte *)((long)puVar39 + uVar29 + uVar24 + 0x10);
            *(undefined8 *)pbVar36 = uVar11;
            *(undefined8 *)(pbVar36 + 8) = uVar12;
            uVar29 = uVar29 + 0x20;
          } while (uVar21 != uVar29);
          puVar37 = (uint *)((long)param_2 + uVar21);
          if (uVar35 == uVar21) goto code_r0x0049fdc3;
        }
        do {
          *(byte *)puVar32 = (byte)*puVar37;
          puVar32 = (uint *)((long)puVar32 + 1);
          puVar37 = (uint *)((long)puVar37 + 1);
        } while (puVar32 < puVar3);
      }
      else {
        func_0x0099bda0(puVar32,param_2);
        puVar32 = puVar3;
      }
    }
    else {
      func_0x0099bd90(puVar39,lVar15 - uVar24,uVar35);
    }
  }
  else {
    if ((uint)uVar21 < 8) {
      *puVar39 = 0;
      *(byte *)puVar39 = (byte)*puVar37;
      *(byte *)((long)puVar39 + 1) = *(byte *)((long)puVar37 + 1);
      *(byte *)((long)puVar39 + 2) = *(byte *)((long)puVar37 + 2);
      *(byte *)((long)puVar39 + 3) = *(byte *)((long)puVar37 + 3);
      uVar27 = (uint)uVar21 << 2;
      uVar34 = *(uint *)(&UNK_001fe790 + uVar27);
      puVar39[1] = *(uint *)((long)puVar37 + (ulong)uVar34);
      puVar37 = (uint *)((long)puVar37 + ((ulong)uVar34 - (long)*(int *)(&UNK_001fe630 + uVar27)));
    }
    else {
      *(undefined8 *)puVar39 = *(undefined8 *)puVar37;
      puVar37 = puVar37 + 2;
    }
    puVar20 = puVar39 + 2;
    if (puVar2 + -3 < puVar3) {
      if ((uint *)((long)puVar2 + -5) < puVar3) goto code_r0x004a0078;
      puVar17 = (uint *)((long)puVar2 + -7);
      puVar26 = (uint *)((long)param_2 + (uVar23 - 7));
      puVar33 = puVar37;
      if (puVar20 < puVar17) {
        puVar33 = puVar39 + 4;
        if (puVar39 + 4 < puVar26) {
          puVar33 = puVar26;
        }
        pbVar36 = (byte *)((long)puVar33 + (-9 - (long)puVar39));
        puVar28 = puVar20;
        puVar33 = puVar37;
        if ((pbVar36 < (byte *)0x48) ||
           ((byte *)((long)puVar39 + (8 - (long)puVar37)) < (byte *)0x20)) {
code_r0x0049ff65:
          do {
            *(undefined8 *)puVar28 = *(undefined8 *)puVar33;
            puVar28 = puVar28 + 2;
            puVar33 = puVar33 + 2;
          } while (puVar28 < puVar17);
        }
        else {
          uVar24 = ((ulong)pbVar36 >> 3) + 1;
          uVar21 = uVar24 & 0x3ffffffffffffffc;
          puVar33 = puVar37 + uVar21 * 2;
          puVar28 = puVar20 + uVar21 * 2;
          uVar29 = 0;
          do {
            uVar10 = *(undefined8 *)(puVar37 + uVar29 * 2 + 2);
            uVar11 = *(undefined8 *)(puVar37 + uVar29 * 2 + 4);
            uVar12 = *(undefined8 *)(puVar37 + uVar29 * 2 + 4 + 2);
            *(undefined8 *)(puVar39 + uVar29 * 2 + 2) = *(undefined8 *)(puVar37 + uVar29 * 2);
            *(undefined8 *)(puVar39 + uVar29 * 2 + 2 + 2) = uVar10;
            *(undefined8 *)(puVar39 + uVar29 * 2 + 6) = uVar11;
            *(undefined8 *)(puVar39 + uVar29 * 2 + 6 + 2) = uVar12;
            uVar29 = uVar29 + 4;
          } while (uVar21 != uVar29);
          if (uVar24 != uVar21) goto code_r0x0049ff65;
        }
        lVar19 = (long)puVar17 - (long)puVar20;
        puVar20 = puVar17;
        puVar33 = (uint *)(lVar19 + (long)puVar37);
      }
      if (puVar20 < puVar3) {
        puVar17 = puVar39 + 2;
        if (puVar39 + 2 < puVar26) {
          puVar17 = puVar26;
        }
        pbVar36 = (byte *)((long)puVar39 + (uVar35 - (long)puVar17));
        puVar26 = puVar20;
        puVar28 = puVar33;
        if (((byte *)0x3 < pbVar36) &&
           ((byte *)0x1f < (byte *)((long)puVar39 + (8 - (long)puVar37)))) {
          pbVar25 = (byte *)0x0;
          if ((byte *)0x1f < pbVar36) {
            pbVar25 = (byte *)((ulong)pbVar36 & 0xffffffffffffffe0);
            pbVar30 = (byte *)0x0;
            do {
              pbVar7 = (byte *)((long)puVar37 +
                               (long)((long)puVar17 + (long)(pbVar30 + (-8 - (long)puVar39))));
              uVar10 = *(undefined8 *)(pbVar7 + 8);
              pbVar4 = (byte *)((long)puVar37 +
                               (long)((long)puVar17 + (long)(pbVar30 + (8 - (long)puVar39))));
              uVar11 = *(undefined8 *)pbVar4;
              uVar12 = *(undefined8 *)(pbVar4 + 8);
              *(undefined8 *)((long)puVar20 + (long)pbVar30) = *(undefined8 *)pbVar7;
              *(undefined8 *)((byte *)((long)puVar20 + (long)pbVar30) + 8) = uVar10;
              *(undefined8 *)((long)puVar20 + (long)(pbVar30 + 0x10)) = uVar11;
              *(undefined8 *)((byte *)((long)puVar20 + (long)(pbVar30 + 0x10)) + 8) = uVar12;
              pbVar30 = pbVar30 + 0x20;
            } while (pbVar25 != pbVar30);
            if (pbVar36 == pbVar25) goto code_r0x0049fdc3;
            puVar26 = (uint *)((long)puVar20 + (long)pbVar25);
            puVar28 = (uint *)((long)puVar33 + (long)pbVar25);
            if (((ulong)pbVar36 & 0x1c) == 0) goto code_r0x0049ffc3;
          }
          pbVar30 = (byte *)((ulong)pbVar36 & 0xfffffffffffffffc);
          do {
            *(undefined4 *)((long)puVar20 + (long)pbVar25) =
                 *(undefined4 *)((long)puVar33 + (long)pbVar25);
            pbVar25 = pbVar25 + 4;
          } while (pbVar30 != pbVar25);
          puVar26 = (uint *)((long)puVar20 + (long)pbVar30);
          puVar28 = (uint *)((long)puVar33 + (long)pbVar30);
          if (pbVar36 == pbVar30) goto code_r0x0049fdc3;
        }
code_r0x0049ffc3:
        do {
          *(byte *)puVar26 = (byte)*puVar28;
          puVar26 = (uint *)((long)puVar26 + 1);
          puVar28 = (uint *)((long)puVar28 + 1);
        } while (puVar26 < puVar3);
      }
    }
    else {
      *(undefined8 *)puVar20 = *(undefined8 *)puVar37;
      if (0x10 < uVar35) {
        puVar20 = (uint *)(uVar35 + (long)puVar39);
        if ((uint *)(uVar35 + (long)puVar39) <= puVar39 + 6) {
          puVar20 = puVar39 + 6;
        }
        puVar17 = puVar39 + 4;
        pbVar36 = (byte *)((long)puVar20 + (-0x11 - (long)puVar39));
        if (((byte *)0x47 < pbVar36) &&
           ((byte *)0x1f < (byte *)((long)puVar39 + (8 - (long)puVar37)))) {
          uVar21 = ((ulong)pbVar36 >> 3) + 1;
          uVar24 = uVar21 & 0x3ffffffffffffffc;
          puVar17 = puVar17 + uVar24 * 2;
          uVar35 = 0;
          do {
            uVar10 = *(undefined8 *)(puVar37 + uVar35 * 2 + 2 + 2);
            uVar11 = *(undefined8 *)(puVar37 + uVar35 * 2 + 6);
            uVar12 = *(undefined8 *)(puVar37 + uVar35 * 2 + 6 + 2);
            *(undefined8 *)(puVar39 + uVar35 * 2 + 4) = *(undefined8 *)(puVar37 + uVar35 * 2 + 2);
            *(undefined8 *)(puVar39 + uVar35 * 2 + 4 + 2) = uVar10;
            *(undefined8 *)(puVar39 + uVar35 * 2 + 8) = uVar11;
            *(undefined8 *)(puVar39 + uVar35 * 2 + 8 + 2) = uVar12;
            uVar35 = uVar35 + 4;
          } while (uVar24 != uVar35);
          puVar37 = puVar37 + uVar24 * 2;
          if (uVar21 == uVar24) goto code_r0x0049fdc3;
        }
        do {
          *(undefined8 *)puVar17 = *(undefined8 *)(puVar37 + 2);
          puVar17 = puVar17 + 2;
          puVar37 = puVar37 + 2;
        } while (puVar17 < puVar3);
      }
    }
  }
code_r0x0049fdc3:
  puVar18 = (ushort *)((long)puVar31 + 1);
  bVar8 = (byte)*puVar31;
  while( true ) {
    uVar34 = (uint)bVar8;
    puStack_38 = puVar18;
    if (bVar8 >> 4 == 0xf) break;
    uVar24 = (ulong)(uint)(bVar8 >> 4);
    if (((ushort *)((long)param_1 + (long)param_3 + -0x10) <= puVar18) || (puVar5 < puVar32))
    goto code_r0x0049f9e9;
    uVar10 = *(undefined8 *)(puVar18 + 4);
    *(undefined8 *)puVar32 = *(undefined8 *)puVar18;
    *(undefined8 *)(puVar32 + 2) = uVar10;
    puVar39 = (uint *)((long)puVar32 + uVar24);
    uVar34 = uVar34 & 0xf;
    uVar35 = (ulong)uVar34;
    uVar21 = (ulong)*(ushort *)((long)puVar18 + uVar24);
    puVar31 = (ushort *)((long)puVar18 + uVar24 + 2);
    puVar37 = (uint *)((long)puVar39 - uVar21);
    if (((uVar34 == 0xf) || (*(ushort *)((long)puVar18 + uVar24) < 8)) || (puVar37 < param_2))
    goto joined_r0x0049f985;
    *(undefined8 *)puVar39 = *(undefined8 *)puVar37;
    *(undefined8 *)(puVar39 + 2) = *(undefined8 *)(puVar37 + 2);
    *(short *)(puVar39 + 4) = (short)puVar37[4];
    puVar32 = (uint *)((long)puVar39 + uVar35 + 4);
    bVar8 = *(byte *)((long)puVar18 + uVar24 + 2);
    puVar18 = (ushort *)((long)puVar18 + uVar24 + 3);
  }
  puVar16 = (ushort *)(pbVar1 + -0xf);
  if ((puVar16 <= puVar18) || (puStack_38 = puVar31 + 1, puVar16 < puStack_38))
  goto code_r0x004a0078;
  uVar24 = (ulong)(byte)*puVar18;
  if (uVar24 == 0xff) {
    uVar24 = 0xff;
    do {
      puVar31 = puStack_38;
      puStack_38 = (ushort *)((long)puVar31 + 1);
      if (puVar16 < puStack_38) goto code_r0x0049fe1e;
      uVar24 = uVar24 + (byte)*puVar31;
    } while ((ulong)(byte)*puVar31 == 0xff);
    if (uVar24 == 0xffffffffffffffff) {
code_r0x0049fe1e:
      puStack_38 = (ushort *)((long)puVar31 + 1);
      goto code_r0x004a0078;
    }
  }
  uVar24 = uVar24 + 0xf;
  if ((CARRY8((ulong)puVar32,uVar24)) || (CARRY8((ulong)puStack_38,uVar24))) goto code_r0x004a0078;
code_r0x0049f9e9:
  puVar39 = (uint *)((long)puVar32 + uVar24);
  if ((puVar2 + -3 < puVar39) ||
     (puVar31 = (ushort *)((long)puStack_38 + uVar24), pbVar1 + -8 < puVar31)) {
    if (((byte *)((long)puStack_38 + uVar24) == pbVar1) && (puVar39 <= puVar2)) {
      func_0x0099bd90(puVar32);
      return (int)puVar39 - (int)param_2;
    }
    goto code_r0x004a0078;
  }
  puVar37 = (uint *)(uVar24 + (long)puVar32);
  if ((uint *)(uVar24 + (long)puVar32) <= puVar32 + 2) {
    puVar37 = puVar32 + 2;
  }
  if (((byte *)(~(ulong)puVar32 + (long)puVar37) < (byte *)0x38) ||
     ((ulong)((long)puVar32 - (long)puStack_38) < 0x20)) {
code_r0x0049faa0:
    do {
      *(undefined8 *)puVar32 = *(undefined8 *)puStack_38;
      puVar32 = puVar32 + 2;
      puStack_38 = puStack_38 + 4;
    } while (puVar32 < puVar39);
  }
  else {
    uVar24 = (~(ulong)puVar32 + (long)puVar37 >> 3) + 1;
    uVar35 = uVar24 & 0x3ffffffffffffffc;
    uVar21 = 0;
    do {
      uVar10 = *(undefined8 *)(puStack_38 + uVar21 * 4 + 4);
      uVar11 = *(undefined8 *)(puStack_38 + uVar21 * 4 + 8);
      uVar12 = *(undefined8 *)(puStack_38 + uVar21 * 4 + 8 + 4);
      *(undefined8 *)(puVar32 + uVar21 * 2) = *(undefined8 *)(puStack_38 + uVar21 * 4);
      *(undefined8 *)(puVar32 + uVar21 * 2 + 2) = uVar10;
      *(undefined8 *)(puVar32 + uVar21 * 2 + 4) = uVar11;
      *(undefined8 *)(puVar32 + uVar21 * 2 + 4 + 2) = uVar12;
      uVar21 = uVar21 + 4;
    } while (uVar35 != uVar21);
    puStack_38 = puStack_38 + uVar35 * 4;
    puVar32 = puVar32 + uVar35 * 2;
    if (uVar24 != uVar35) goto code_r0x0049faa0;
  }
  uVar21 = (ulong)*puVar31;
  puVar31 = puVar31 + 1;
  puVar37 = (uint *)((long)puVar39 - uVar21);
  uVar34 = uVar34 & 0xf;
  uVar35 = (ulong)uVar34;
joined_r0x0049f985:
  puStack_38 = puVar31;
  if (uVar34 == 0xf) {
    puStack_38 = (ushort *)((long)puVar31 + 1);
    if (pbVar1 + -4 < puStack_38) goto code_r0x004a0078;
    uVar24 = (ulong)(byte)*puVar31;
    if (uVar24 == 0xff) {
      uVar24 = 0xff;
      puVar31 = puStack_38;
      do {
        puStack_38 = (ushort *)((long)puVar31 + 1);
        if (pbVar1 + -4 < puStack_38) {
          puStack_38 = (ushort *)((long)puVar31 + 1);
          goto code_r0x004a0078;
        }
        uVar9 = *puVar31;
        uVar24 = uVar24 + (byte)uVar9;
        puVar31 = puStack_38;
      } while ((ulong)(byte)uVar9 == 0xff);
    }
    uVar35 = uVar24 + 0xf;
    if ((uVar24 == 0xffffffffffffffff) || (~(ulong)puVar39 < uVar35)) goto code_r0x004a0078;
  }
  uVar35 = uVar35 + 4;
  goto code_r0x0049fb21;
}


