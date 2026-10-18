// Function: BrotliTransformDictionaryWord
// Address: 00373a90
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong BrotliTransformDictionaryWord
                (undefined4 *param_1,long param_2,uint param_3,long param_4,int param_5)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  byte bVar5;
  byte bVar6;
  undefined2 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  int iVar18;
  ulong uVar19;
  byte *pbVar20;
  long lVar21;
  byte *pbVar22;
  uint uVar23;
  ulong uVar24;
  uint uVar25;
  ulong uVar26;
  long lVar27;
  ulong uVar28;
  long lVar29;
  long lVar30;
  ulong uVar31;
  int iVar32;
  ulong uVar33;
  
  uVar33 = (ulong)param_3;
  lVar21 = *(long *)(param_4 + 8);
  lVar30 = *(long *)(param_4 + 0x20);
  lVar29 = (long)param_5;
  lVar27 = lVar29 * 3;
  uVar31 = (ulong)*(ushort *)(*(long *)(param_4 + 0x10) + (ulong)*(byte *)(lVar30 + lVar27) * 2);
  bVar5 = *(byte *)(lVar30 + 1 + lVar27);
  uVar19 = (ulong)*(ushort *)(*(long *)(param_4 + 0x10) + (ulong)*(byte *)(lVar30 + 2 + lVar27) * 2)
  ;
  bVar6 = *(byte *)(lVar21 + uVar31);
  uVar23 = (uint)bVar6;
  if (bVar6 == 0) {
    uVar31 = 0;
    if (9 < bVar5) goto code_r0x00373bb8;
code_r0x00373ccc:
    uVar33 = (ulong)(param_3 - bVar5);
  }
  else {
    lVar30 = lVar21 + uVar31;
    if ((bVar6 < 0x20) || (0xffffffffffffffdf < (lVar21 - (long)param_1) + uVar31)) {
      uVar31 = 0;
code_r0x00373b05:
      uVar25 = uVar23 - 1;
      if ((uVar23 & 3) != 0) {
        lVar27 = 0;
        do {
          *(undefined1 *)((long)param_1 + lVar27 + uVar31) = *(undefined1 *)(lVar30 + 1 + lVar27);
          lVar27 = lVar27 + 1;
        } while ((uVar23 & 3) != (uint)lVar27);
        uVar31 = uVar31 + lVar27;
        lVar30 = lVar30 + lVar27;
        uVar23 = uVar23 - (uint)lVar27;
      }
      if (2 < uVar25) {
        lVar27 = 0;
        do {
          *(undefined1 *)((long)param_1 + lVar27 + uVar31) = *(undefined1 *)(lVar30 + 1 + lVar27);
          *(undefined1 *)((long)param_1 + lVar27 + uVar31 + 1) =
               *(undefined1 *)(lVar30 + 2 + lVar27);
          *(undefined1 *)((long)param_1 + lVar27 + uVar31 + 2) =
               *(undefined1 *)(lVar30 + 3 + lVar27);
          *(undefined1 *)((long)param_1 + lVar27 + uVar31 + 3) =
               *(undefined1 *)(lVar30 + 4 + lVar27);
          lVar27 = lVar27 + 4;
        } while (uVar23 != (uint)lVar27);
        uVar31 = uVar31 + lVar27;
      }
    }
    else {
      uVar23 = (uint)bVar6;
      uVar25 = uVar23 & 0xffffffe0;
      uVar31 = (ulong)uVar25;
      uVar8 = *(undefined4 *)(lVar30 + 5);
      uVar9 = *(undefined4 *)(lVar30 + 9);
      uVar10 = *(undefined4 *)(lVar30 + 0xd);
      uVar11 = *(undefined4 *)(lVar30 + 0x11);
      uVar12 = *(undefined4 *)(lVar30 + 0x15);
      uVar13 = *(undefined4 *)(lVar30 + 0x19);
      uVar14 = *(undefined4 *)(lVar30 + 0x1d);
      *param_1 = *(undefined4 *)(lVar30 + 1);
      param_1[1] = uVar8;
      param_1[2] = uVar9;
      param_1[3] = uVar10;
      param_1[4] = uVar11;
      param_1[5] = uVar12;
      param_1[6] = uVar13;
      param_1[7] = uVar14;
      if (uVar31 != 0x20) {
        uVar8 = *(undefined4 *)(lVar30 + 0x25);
        uVar9 = *(undefined4 *)(lVar30 + 0x29);
        uVar10 = *(undefined4 *)(lVar30 + 0x2d);
        uVar11 = *(undefined4 *)(lVar30 + 0x31);
        uVar12 = *(undefined4 *)(lVar30 + 0x35);
        uVar13 = *(undefined4 *)(lVar30 + 0x39);
        uVar14 = *(undefined4 *)(lVar30 + 0x3d);
        param_1[8] = *(undefined4 *)(lVar30 + 0x21);
        param_1[9] = uVar8;
        param_1[10] = uVar9;
        param_1[0xb] = uVar10;
        param_1[0xc] = uVar11;
        param_1[0xd] = uVar12;
        param_1[0xe] = uVar13;
        param_1[0xf] = uVar14;
        if (uVar25 != 0x40) {
          uVar8 = *(undefined4 *)(lVar30 + 0x45);
          uVar9 = *(undefined4 *)(lVar30 + 0x49);
          uVar10 = *(undefined4 *)(lVar30 + 0x4d);
          uVar11 = *(undefined4 *)(lVar30 + 0x51);
          uVar12 = *(undefined4 *)(lVar30 + 0x55);
          uVar13 = *(undefined4 *)(lVar30 + 0x59);
          uVar14 = *(undefined4 *)(lVar30 + 0x5d);
          param_1[0x10] = *(undefined4 *)(lVar30 + 0x41);
          param_1[0x11] = uVar8;
          param_1[0x12] = uVar9;
          param_1[0x13] = uVar10;
          param_1[0x14] = uVar11;
          param_1[0x15] = uVar12;
          param_1[0x16] = uVar13;
          param_1[0x17] = uVar14;
          if (uVar25 != 0x60) {
            uVar8 = *(undefined4 *)(lVar30 + 0x65);
            uVar9 = *(undefined4 *)(lVar30 + 0x69);
            uVar10 = *(undefined4 *)(lVar30 + 0x6d);
            uVar11 = *(undefined4 *)(lVar30 + 0x71);
            uVar12 = *(undefined4 *)(lVar30 + 0x75);
            uVar13 = *(undefined4 *)(lVar30 + 0x79);
            uVar14 = *(undefined4 *)(lVar30 + 0x7d);
            param_1[0x18] = *(undefined4 *)(lVar30 + 0x61);
            param_1[0x19] = uVar8;
            param_1[0x1a] = uVar9;
            param_1[0x1b] = uVar10;
            param_1[0x1c] = uVar11;
            param_1[0x1d] = uVar12;
            param_1[0x1e] = uVar13;
            param_1[0x1f] = uVar14;
            if (uVar25 != 0x80) {
              uVar8 = *(undefined4 *)(lVar30 + 0x85);
              uVar9 = *(undefined4 *)(lVar30 + 0x89);
              uVar10 = *(undefined4 *)(lVar30 + 0x8d);
              uVar11 = *(undefined4 *)(lVar30 + 0x91);
              uVar12 = *(undefined4 *)(lVar30 + 0x95);
              uVar13 = *(undefined4 *)(lVar30 + 0x99);
              uVar14 = *(undefined4 *)(lVar30 + 0x9d);
              param_1[0x20] = *(undefined4 *)(lVar30 + 0x81);
              param_1[0x21] = uVar8;
              param_1[0x22] = uVar9;
              param_1[0x23] = uVar10;
              param_1[0x24] = uVar11;
              param_1[0x25] = uVar12;
              param_1[0x26] = uVar13;
              param_1[0x27] = uVar14;
              if (uVar25 != 0xa0) {
                uVar8 = *(undefined4 *)(lVar30 + 0xa5);
                uVar9 = *(undefined4 *)(lVar30 + 0xa9);
                uVar10 = *(undefined4 *)(lVar30 + 0xad);
                uVar11 = *(undefined4 *)(lVar30 + 0xb1);
                uVar12 = *(undefined4 *)(lVar30 + 0xb5);
                uVar13 = *(undefined4 *)(lVar30 + 0xb9);
                uVar14 = *(undefined4 *)(lVar30 + 0xbd);
                param_1[0x28] = *(undefined4 *)(lVar30 + 0xa1);
                param_1[0x29] = uVar8;
                param_1[0x2a] = uVar9;
                param_1[0x2b] = uVar10;
                param_1[0x2c] = uVar11;
                param_1[0x2d] = uVar12;
                param_1[0x2e] = uVar13;
                param_1[0x2f] = uVar14;
                if (uVar25 != 0xc0) {
                  uVar8 = *(undefined4 *)(lVar30 + 0xc5);
                  uVar9 = *(undefined4 *)(lVar30 + 0xc9);
                  uVar10 = *(undefined4 *)(lVar30 + 0xcd);
                  uVar11 = *(undefined4 *)(lVar30 + 0xd1);
                  uVar12 = *(undefined4 *)(lVar30 + 0xd5);
                  uVar13 = *(undefined4 *)(lVar30 + 0xd9);
                  uVar14 = *(undefined4 *)(lVar30 + 0xdd);
                  param_1[0x30] = *(undefined4 *)(lVar30 + 0xc1);
                  param_1[0x31] = uVar8;
                  param_1[0x32] = uVar9;
                  param_1[0x33] = uVar10;
                  param_1[0x34] = uVar11;
                  param_1[0x35] = uVar12;
                  param_1[0x36] = uVar13;
                  param_1[0x37] = uVar14;
                }
              }
            }
          }
        }
      }
      if (uVar25 != uVar23) {
        lVar30 = lVar30 + uVar31;
        uVar23 = uVar23 - uVar25;
        goto code_r0x00373b05;
      }
    }
    if (bVar5 < 10) goto code_r0x00373ccc;
code_r0x00373bb8:
    if ((byte)(bVar5 - 0xc) < 9) {
      param_2 = param_2 + (ulong)(bVar5 - 0xb);
      uVar33 = (ulong)(param_3 - (bVar5 - 0xb));
    }
  }
  uVar23 = (uint)uVar33;
  if (0 < (int)uVar23) {
    uVar28 = uVar31 & 0xffffffff;
    if ((uVar23 < 0x20) || ((long)param_1 + (uVar28 - param_2) < 0x20)) {
      uVar24 = 0;
      uVar31 = uVar28;
    }
    else {
      uVar24 = (ulong)(uVar23 & 0x7fffffe0);
      uVar31 = uVar24 + uVar28;
      uVar26 = 0;
      do {
        puVar2 = (undefined4 *)(param_2 + uVar26);
        uVar8 = puVar2[1];
        uVar9 = puVar2[2];
        uVar10 = puVar2[3];
        puVar3 = (undefined4 *)(param_2 + 0x10 + uVar26);
        uVar11 = *puVar3;
        uVar12 = puVar3[1];
        uVar13 = puVar3[2];
        uVar14 = puVar3[3];
        puVar3 = (undefined4 *)((long)param_1 + uVar26 + uVar28);
        *puVar3 = *puVar2;
        puVar3[1] = uVar8;
        puVar3[2] = uVar9;
        puVar3[3] = uVar10;
        puVar2 = (undefined4 *)((long)param_1 + uVar26 + uVar28 + 0x10);
        *puVar2 = uVar11;
        puVar2[1] = uVar12;
        puVar2[2] = uVar13;
        puVar2[3] = uVar14;
        uVar26 = uVar26 + 0x20;
      } while (uVar24 != uVar26);
      if ((uVar23 & 0x7fffffe0) == uVar23) goto code_r0x00373dc8;
    }
    uVar26 = uVar24;
    for (uVar28 = uVar33 & 3; uVar28 != 0; uVar28 = uVar28 - 1) {
      puVar1 = (undefined1 *)(param_2 + uVar26);
      uVar26 = uVar26 + 1;
      *(undefined1 *)((long)param_1 + uVar31) = *puVar1;
      uVar31 = uVar31 + 1;
    }
    if (uVar24 - uVar33 < 0xfffffffffffffffd) {
      param_2 = param_2 + uVar26;
      lVar30 = 0;
      do {
        *(undefined1 *)((long)param_1 + lVar30 + uVar31) = *(undefined1 *)(param_2 + lVar30);
        *(undefined1 *)((long)param_1 + lVar30 + uVar31 + 1) = *(undefined1 *)(param_2 + 1 + lVar30)
        ;
        *(undefined1 *)((long)param_1 + lVar30 + uVar31 + 2) = *(undefined1 *)(param_2 + 2 + lVar30)
        ;
        *(undefined1 *)((long)param_1 + lVar30 + uVar31 + 3) = *(undefined1 *)(param_2 + 3 + lVar30)
        ;
        lVar30 = lVar30 + 4;
      } while (uVar33 - uVar26 != lVar30);
      uVar31 = uVar31 + lVar30;
    }
  }
code_r0x00373dc8:
  pbVar22 = (byte *)(lVar21 + uVar19);
  iVar18 = (int)uVar31;
  switch((uint)bVar5) {
  case 10:
    lVar30 = (long)(int)(iVar18 - uVar23);
    bVar5 = *(byte *)((long)param_1 + lVar30);
    if (bVar5 < 0xc0) {
      if ((byte)(bVar5 + 0x9f) < 0x1a) {
        *(byte *)((long)param_1 + lVar30) = bVar5 & 0x5f;
      }
    }
    else if (bVar5 < 0xe0) {
      pbVar20 = (byte *)((long)param_1 + lVar30 + 1);
      *pbVar20 = *pbVar20 ^ 0x20;
    }
    else {
      pbVar20 = (byte *)((long)param_1 + lVar30 + 2);
      *pbVar20 = *pbVar20 ^ 5;
    }
    break;
  case 0xb:
    if (0 < (int)uVar23) {
      pbVar20 = (byte *)((long)(int)(iVar18 - uVar23) + (long)param_1);
      do {
        bVar5 = *pbVar20;
        if (bVar5 < 0xc0) {
          uVar23 = 1;
          if ((byte)(bVar5 + 0x9f) < 0x1a) {
            *pbVar20 = bVar5 & 0x5f;
          }
        }
        else if (bVar5 < 0xe0) {
          pbVar20[1] = pbVar20[1] ^ 0x20;
          uVar23 = 2;
        }
        else {
          pbVar20[2] = pbVar20[2] ^ 5;
          uVar23 = 3;
        }
        pbVar20 = pbVar20 + uVar23;
        iVar18 = (int)uVar33;
        uVar25 = iVar18 - uVar23;
        uVar33 = (ulong)uVar25;
      } while (uVar25 != 0 && (int)uVar23 <= iVar18);
    }
    break;
  case 0x15:
    func_0x003740d0((long)(int)(iVar18 - uVar23) + (long)param_1,uVar33,
                    *(undefined2 *)(*(long *)(param_4 + 0x28) + lVar29 * 2));
    break;
  case 0x16:
    if (0 < (int)uVar23) {
      lVar30 = (long)(int)(iVar18 - uVar23) + (long)param_1;
      uVar7 = *(undefined2 *)(*(long *)(param_4 + 0x28) + lVar29 * 2);
      do {
        iVar32 = (int)uVar33;
        iVar18 = func_0x003740d0(lVar30,uVar33,uVar7);
        lVar30 = lVar30 + iVar18;
        uVar23 = iVar32 - iVar18;
        uVar33 = (ulong)uVar23;
      } while (uVar23 != 0 && iVar18 <= iVar32);
    }
  }
  bVar5 = *pbVar22;
  uVar23 = (uint)bVar5;
  if (bVar5 != 0) {
    uVar31 = uVar31 & 0xffffffff;
    if ((0x1f < bVar5) && (((lVar21 - (long)param_1) - uVar31) + uVar19 < 0xffffffffffffffe0)) {
      uVar23 = (uint)bVar5;
      uVar25 = uVar23 & 0xffffffe0;
      uVar19 = (ulong)uVar25;
      uVar15 = *(undefined8 *)(pbVar22 + 9);
      uVar16 = *(undefined8 *)(pbVar22 + 0x11);
      uVar17 = *(undefined8 *)(pbVar22 + 0x19);
      *(undefined8 *)((long)param_1 + uVar31) = *(undefined8 *)(pbVar22 + 1);
      ((undefined8 *)((long)param_1 + uVar31))[1] = uVar15;
      puVar4 = (undefined8 *)((long)param_1 + uVar31 + 0x10);
      *puVar4 = uVar16;
      puVar4[1] = uVar17;
      if (uVar19 != 0x20) {
        uVar15 = *(undefined8 *)(pbVar22 + 0x29);
        uVar16 = *(undefined8 *)(pbVar22 + 0x31);
        uVar17 = *(undefined8 *)(pbVar22 + 0x39);
        puVar4 = (undefined8 *)((long)param_1 + uVar31 + 0x20);
        *puVar4 = *(undefined8 *)(pbVar22 + 0x21);
        puVar4[1] = uVar15;
        puVar4 = (undefined8 *)((long)param_1 + uVar31 + 0x30);
        *puVar4 = uVar16;
        puVar4[1] = uVar17;
        if (uVar25 != 0x40) {
          uVar15 = *(undefined8 *)(pbVar22 + 0x49);
          uVar16 = *(undefined8 *)(pbVar22 + 0x51);
          uVar17 = *(undefined8 *)(pbVar22 + 0x59);
          puVar4 = (undefined8 *)((long)param_1 + uVar31 + 0x40);
          *puVar4 = *(undefined8 *)(pbVar22 + 0x41);
          puVar4[1] = uVar15;
          puVar4 = (undefined8 *)((long)param_1 + uVar31 + 0x50);
          *puVar4 = uVar16;
          puVar4[1] = uVar17;
          if (uVar25 != 0x60) {
            uVar15 = *(undefined8 *)(pbVar22 + 0x69);
            uVar16 = *(undefined8 *)(pbVar22 + 0x71);
            uVar17 = *(undefined8 *)(pbVar22 + 0x79);
            puVar4 = (undefined8 *)((long)param_1 + uVar31 + 0x60);
            *puVar4 = *(undefined8 *)(pbVar22 + 0x61);
            puVar4[1] = uVar15;
            puVar4 = (undefined8 *)((long)param_1 + uVar31 + 0x70);
            *puVar4 = uVar16;
            puVar4[1] = uVar17;
            if (uVar25 != 0x80) {
              uVar15 = *(undefined8 *)(pbVar22 + 0x89);
              uVar16 = *(undefined8 *)(pbVar22 + 0x91);
              uVar17 = *(undefined8 *)(pbVar22 + 0x99);
              puVar4 = (undefined8 *)((long)param_1 + uVar31 + 0x80);
              *puVar4 = *(undefined8 *)(pbVar22 + 0x81);
              puVar4[1] = uVar15;
              puVar4 = (undefined8 *)((long)param_1 + uVar31 + 0x90);
              *puVar4 = uVar16;
              puVar4[1] = uVar17;
              if (uVar25 != 0xa0) {
                uVar15 = *(undefined8 *)(pbVar22 + 0xa9);
                uVar16 = *(undefined8 *)(pbVar22 + 0xb1);
                uVar17 = *(undefined8 *)(pbVar22 + 0xb9);
                puVar4 = (undefined8 *)((long)param_1 + uVar31 + 0xa0);
                *puVar4 = *(undefined8 *)(pbVar22 + 0xa1);
                puVar4[1] = uVar15;
                puVar4 = (undefined8 *)((long)param_1 + uVar31 + 0xb0);
                *puVar4 = uVar16;
                puVar4[1] = uVar17;
                if (uVar25 != 0xc0) {
                  uVar15 = *(undefined8 *)(pbVar22 + 0xc9);
                  uVar16 = *(undefined8 *)(pbVar22 + 0xd1);
                  uVar17 = *(undefined8 *)(pbVar22 + 0xd9);
                  puVar4 = (undefined8 *)((long)param_1 + uVar31 + 0xc0);
                  *puVar4 = *(undefined8 *)(pbVar22 + 0xc1);
                  puVar4[1] = uVar15;
                  puVar4 = (undefined8 *)((long)param_1 + uVar31 + 0xd0);
                  *puVar4 = uVar16;
                  puVar4[1] = uVar17;
                }
              }
            }
          }
        }
      }
      uVar31 = uVar31 + uVar19;
      if (uVar25 == uVar23) goto code_r0x003740b2;
      uVar23 = uVar23 - uVar25;
      pbVar22 = pbVar22 + uVar19;
    }
    uVar25 = uVar23 - 1;
    if ((uVar23 & 3) != 0) {
      lVar21 = 0;
      do {
        *(byte *)((long)param_1 + lVar21 + uVar31) = pbVar22[lVar21 + 1];
        lVar21 = lVar21 + 1;
      } while ((uVar23 & 3) != (uint)lVar21);
      uVar31 = uVar31 + lVar21;
      uVar23 = uVar23 - (uint)lVar21;
      pbVar22 = pbVar22 + lVar21;
    }
    if (2 < uVar25) {
      lVar21 = 0;
      do {
        *(byte *)((long)param_1 + lVar21 + uVar31) = pbVar22[lVar21 + 1];
        *(byte *)((long)param_1 + lVar21 + uVar31 + 1) = pbVar22[lVar21 + 2];
        *(byte *)((long)param_1 + lVar21 + uVar31 + 2) = pbVar22[lVar21 + 3];
        *(byte *)((long)param_1 + lVar21 + uVar31 + 3) = pbVar22[lVar21 + 4];
        lVar21 = lVar21 + 4;
      } while (uVar23 != (uint)lVar21);
      uVar31 = uVar31 + lVar21;
    }
  }
code_r0x003740b2:
  return uVar31 & 0xffffffff;
}


