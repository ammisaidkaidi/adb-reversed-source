// Function: LZ4_decompress_fast_continue
// Address: 004a2940
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


int LZ4_decompress_fast_continue(long *param_1,ushort *param_2,long param_3,int param_4)

{
  long lVar1;
  undefined4 *puVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ushort uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 *puVar18;
  undefined4 *puVar19;
  ulong uVar20;
  ulong uVar21;
  undefined1 *puVar22;
  long lVar23;
  long lVar24;
  byte *pbVar25;
  ushort *puVar26;
  ulong uVar27;
  int iStack_58;
  int iStack_34;
  
  lVar10 = param_1[3];
  iStack_58 = (int)param_2;
  if (lVar10 == 0) {
    lVar10 = param_3 + param_4;
    lVar11 = param_3;
    do {
      uVar9 = *param_2;
      pbVar25 = (byte *)((long)param_2 + 1);
      uVar14 = (uint)(byte)((byte)uVar9 >> 4);
      uVar16 = (ulong)uVar14;
      if (uVar14 == 0xf) {
        lVar23 = 0;
        do {
          bVar3 = *pbVar25;
          pbVar25 = pbVar25 + 1;
          lVar23 = lVar23 + (ulong)bVar3;
        } while ((ulong)bVar3 == 0xff);
        uVar16 = lVar23 + 0xf;
      }
      iStack_34 = -1;
      if ((ulong)(lVar10 - lVar11) < uVar16) {
        return -1;
      }
      func_0x0099bd90(lVar11,pbVar25,uVar16);
      lVar23 = uVar16 + lVar11;
      puVar26 = (ushort *)(pbVar25 + uVar16);
      if ((ulong)(lVar10 - lVar23) < 0xc) {
        if (lVar23 != lVar10) {
          return -1;
        }
        iStack_58 = (int)puVar26 - iStack_58;
        if (iStack_58 < 1) {
          return iStack_58;
        }
        param_1[3] = (long)param_4;
        param_1[1] = lVar10;
        return iStack_58;
      }
      uVar17 = (ulong)((byte)uVar9 & 0xf);
      param_2 = puVar26 + 1;
      if (uVar17 == 0xf) {
        lVar24 = 0;
        do {
          uVar9 = *param_2;
          param_2 = (ushort *)((long)param_2 + 1);
          lVar24 = lVar24 + (ulong)(byte)uVar9;
        } while ((ulong)(byte)uVar9 == 0xff);
        uVar17 = lVar24 + 0xf;
      }
      uVar27 = uVar17 + 4;
      if ((ulong)(lVar10 - lVar23) < uVar27) {
        return -1;
      }
      uVar9 = *puVar26;
      if ((ulong)(lVar23 - param_3) < (ulong)uVar9) {
        return -1;
      }
      if (uVar27 != 0) {
        lVar24 = -(ulong)uVar9;
        if (uVar17 < 0xfffffffffffffffc) {
          uVar13 = 0;
          if (0x1f < uVar9) {
            if (uVar27 < 0x20) {
              uVar20 = 0;
            }
            else {
              uVar13 = uVar27 & 0xffffffffffffffe0;
              puVar18 = (undefined8 *)(uVar16 + lVar11 + 0x10);
              uVar20 = uVar13;
              do {
                puVar19 = (undefined4 *)((long)puVar18 + lVar24 + -0x10);
                uVar4 = puVar19[1];
                uVar5 = puVar19[2];
                uVar6 = puVar19[3];
                uVar7 = *(undefined8 *)((long)puVar18 + lVar24);
                uVar8 = ((undefined8 *)((long)puVar18 + lVar24))[1];
                *(undefined4 *)(puVar18 + -2) = *puVar19;
                *(undefined4 *)((long)puVar18 + -0xc) = uVar4;
                *(undefined4 *)(puVar18 + -1) = uVar5;
                *(undefined4 *)((long)puVar18 + -4) = uVar6;
                *puVar18 = uVar7;
                puVar18[1] = uVar8;
                puVar18 = puVar18 + 4;
                uVar20 = uVar20 - 0x20;
              } while (uVar20 != 0);
              if (uVar27 == uVar13) goto code_r0x004a29d0;
              uVar20 = uVar13;
              if ((uVar27 & 0x1c) == 0) goto code_r0x004a2b5a;
            }
            uVar13 = uVar27 & 0xfffffffffffffffc;
            lVar12 = uVar20 - uVar13;
            puVar19 = (undefined4 *)(uVar20 + uVar16 + lVar11);
            do {
              *puVar19 = *(undefined4 *)((long)puVar19 + lVar24);
              puVar19 = puVar19 + 1;
              lVar12 = lVar12 + 4;
            } while (lVar12 != 0);
            if (uVar27 == uVar13) goto code_r0x004a29d0;
          }
        }
        else {
          uVar13 = 0;
        }
code_r0x004a2b5a:
        uVar21 = uVar17 & 3;
        uVar20 = uVar13;
        if (uVar21 != 0) {
          lVar12 = -uVar13;
          puVar22 = (undefined1 *)(uVar13 + uVar16 + lVar11);
          do {
            *puVar22 = puVar22[lVar24];
            lVar12 = lVar12 + -1;
            puVar22 = puVar22 + 1;
            uVar21 = uVar21 - 1;
          } while (uVar21 != 0);
          uVar20 = -lVar12;
        }
        if (2 < (uVar17 - uVar13) + 3) {
          lVar12 = (uVar17 - uVar20) + 4;
          puVar22 = (undefined1 *)(uVar16 + uVar20 + lVar11 + 3);
          do {
            puVar22[-3] = puVar22[lVar24 + -3];
            puVar22[-2] = puVar22[lVar24 + -2];
            puVar22[-1] = puVar22[lVar24 + -1];
            *puVar22 = puVar22[lVar24];
            puVar22 = puVar22 + 4;
            lVar12 = lVar12 + -4;
          } while (lVar12 != 0);
        }
      }
code_r0x004a29d0:
      lVar11 = lVar23 + uVar27;
    } while (4 < (ulong)(lVar10 - lVar11));
  }
  else if (param_1[1] == param_3) {
    lVar23 = param_1[2];
    lVar12 = (long)param_4;
    lVar11 = param_3 + lVar12;
    lVar10 = param_3 - lVar10;
    lVar24 = *param_1;
    do {
      uVar9 = *param_2;
      pbVar25 = (byte *)((long)param_2 + 1);
      uVar14 = (uint)(byte)((byte)uVar9 >> 4);
      uVar16 = (ulong)uVar14;
      if (uVar14 == 0xf) {
        lVar15 = 0;
        do {
          bVar3 = *pbVar25;
          pbVar25 = pbVar25 + 1;
          lVar15 = lVar15 + (ulong)bVar3;
        } while ((ulong)bVar3 == 0xff);
        uVar16 = lVar15 + 0xf;
      }
      if ((ulong)(lVar11 - param_3) < uVar16) {
        return -1;
      }
      iStack_34 = -1;
      func_0x0099bd90(param_3,pbVar25,uVar16);
      param_3 = param_3 + uVar16;
      puVar26 = (ushort *)(pbVar25 + uVar16);
      if ((ulong)(lVar11 - param_3) < 0xc) {
        if (param_3 != lVar11) {
          return -1;
        }
        iStack_58 = (int)puVar26 - iStack_58;
        if (iStack_58 < 1) {
          return iStack_58;
        }
        param_1[3] = param_1[3] + lVar12;
        param_1[1] = param_1[1] + lVar12;
        return iStack_58;
      }
      uVar16 = (ulong)((byte)uVar9 & 0xf);
      param_2 = puVar26 + 1;
      if (uVar16 == 0xf) {
        lVar15 = 0;
        do {
          uVar9 = *param_2;
          param_2 = (ushort *)((long)param_2 + 1);
          lVar15 = lVar15 + (ulong)(byte)uVar9;
        } while ((ulong)(byte)uVar9 == 0xff);
        uVar16 = lVar15 + 0xf;
      }
      uVar16 = uVar16 + 4;
      if ((ulong)(lVar11 - param_3) < uVar16) {
        return -1;
      }
      uVar17 = (ulong)*puVar26;
      uVar27 = param_3 - lVar10;
      if (lVar23 + uVar27 < uVar17) {
        return -1;
      }
      lVar15 = uVar27 - uVar17;
      if (uVar27 < uVar17) {
        lVar1 = lVar24 + lVar23 + lVar15;
        uVar17 = -lVar15;
        if (uVar16 < uVar17) {
          func_0x0099bd90(param_3,lVar1,uVar16);
          uVar27 = 0;
          uVar17 = uVar16;
        }
        else {
          func_0x0099bd90(param_3,lVar1,uVar17);
          uVar27 = uVar16 + lVar15;
        }
        param_3 = param_3 + uVar17;
        lVar15 = lVar10;
      }
      else {
        uVar27 = uVar16;
        lVar15 = param_3 - uVar17;
      }
      if (uVar27 != 0) {
        if (uVar27 < 4) {
          uVar16 = 0;
        }
        else {
          uVar16 = 0;
          if (0x1f < (ulong)(param_3 - lVar15)) {
            if (uVar27 < 0x20) {
              uVar17 = 0;
            }
            else {
              uVar16 = uVar27 & 0xffffffffffffffe0;
              uVar17 = 0;
              do {
                puVar19 = (undefined4 *)(lVar15 + uVar17);
                uVar4 = puVar19[1];
                uVar5 = puVar19[2];
                uVar6 = puVar19[3];
                puVar18 = (undefined8 *)(lVar15 + 0x10 + uVar17);
                uVar7 = *puVar18;
                uVar8 = puVar18[1];
                puVar2 = (undefined4 *)(param_3 + uVar17);
                *puVar2 = *puVar19;
                puVar2[1] = uVar4;
                puVar2[2] = uVar5;
                puVar2[3] = uVar6;
                puVar18 = (undefined8 *)(param_3 + 0x10 + uVar17);
                *puVar18 = uVar7;
                puVar18[1] = uVar8;
                uVar17 = uVar17 + 0x20;
              } while (uVar16 != uVar17);
              if (uVar27 == uVar16) goto code_r0x004a2c30;
              uVar17 = uVar16;
              if ((uVar27 & 0x1c) == 0) goto code_r0x004a2e09;
            }
            uVar16 = uVar27 & 0xfffffffffffffffc;
            do {
              *(undefined4 *)(param_3 + uVar17) = *(undefined4 *)(lVar15 + uVar17);
              uVar17 = uVar17 + 4;
            } while (uVar16 != uVar17);
            if (uVar27 == uVar16) goto code_r0x004a2c30;
          }
        }
code_r0x004a2e09:
        uVar13 = uVar16;
        for (uVar17 = uVar27 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
          *(undefined1 *)(param_3 + uVar13) = *(undefined1 *)(lVar15 + uVar13);
          uVar13 = uVar13 + 1;
        }
        if (uVar16 - uVar27 < 0xfffffffffffffffd) {
          do {
            *(undefined1 *)(param_3 + uVar13) = *(undefined1 *)(lVar15 + uVar13);
            *(undefined1 *)(param_3 + 1 + uVar13) = *(undefined1 *)(lVar15 + 1 + uVar13);
            *(undefined1 *)(param_3 + 2 + uVar13) = *(undefined1 *)(lVar15 + 2 + uVar13);
            *(undefined1 *)(param_3 + 3 + uVar13) = *(undefined1 *)(lVar15 + 3 + uVar13);
            uVar13 = uVar13 + 4;
          } while (uVar27 != uVar13);
        }
      }
code_r0x004a2c30:
      param_3 = param_3 + uVar27;
    } while (4 < (ulong)(lVar11 - param_3));
  }
  else {
    param_1[2] = lVar10;
    lVar10 = param_1[1] - lVar10;
    *param_1 = lVar10;
    iStack_34 = func_0x004a2ee0(param_2,param_3,param_4,lVar10);
    if (0 < iStack_34) {
      param_1[3] = (long)param_4;
      param_1[1] = param_3 + param_4;
    }
  }
  return iStack_34;
}


