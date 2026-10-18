// Function: LZ4_decompress_fast_usingDict
// Address: 004a48a0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


int LZ4_decompress_fast_usingDict(ushort *param_1,long param_2,int param_3,long param_4,int param_5)

{
  undefined4 *puVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ushort uVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined4 *puVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  undefined1 *puVar21;
  long lVar22;
  byte *pbVar23;
  ushort *puVar24;
  ulong uVar25;
  int iStack_50;
  
  iStack_50 = (int)param_1;
  if (param_5 == 0) {
    lVar14 = 0;
  }
  else {
    lVar14 = (long)param_5;
    if (param_4 + lVar14 != param_2) {
      lVar18 = param_3 + param_2;
      lVar22 = param_2;
      do {
        uVar8 = *param_1;
        pbVar23 = (byte *)((long)param_1 + 1);
        uVar10 = (uint)(byte)((byte)uVar8 >> 4);
        uVar12 = (ulong)uVar10;
        if (uVar10 == 0xf) {
          lVar11 = 0;
          do {
            bVar2 = *pbVar23;
            pbVar23 = pbVar23 + 1;
            lVar11 = lVar11 + (ulong)bVar2;
          } while ((ulong)bVar2 == 0xff);
          uVar12 = lVar11 + 0xf;
        }
        if ((ulong)(lVar18 - lVar22) < uVar12) {
          return -1;
        }
        func_0x0099bd90(lVar22,pbVar23,uVar12);
        lVar22 = lVar22 + uVar12;
        puVar24 = (ushort *)(pbVar23 + uVar12);
        if ((ulong)(lVar18 - lVar22) < 0xc) {
          if (lVar22 != lVar18) {
            return -1;
          }
          return (int)puVar24 - iStack_50;
        }
        uVar12 = (ulong)((byte)uVar8 & 0xf);
        param_1 = puVar24 + 1;
        if (uVar12 == 0xf) {
          lVar11 = 0;
          do {
            uVar8 = *param_1;
            param_1 = (ushort *)((long)param_1 + 1);
            lVar11 = lVar11 + (ulong)(byte)uVar8;
          } while ((ulong)(byte)uVar8 == 0xff);
          uVar12 = lVar11 + 0xf;
        }
        uVar12 = uVar12 + 4;
        if ((ulong)(lVar18 - lVar22) < uVar12) {
          return -1;
        }
        uVar13 = (ulong)*puVar24;
        uVar25 = lVar22 - param_2;
        if (lVar14 + uVar25 < uVar13) {
          return -1;
        }
        lVar11 = uVar25 - uVar13;
        if (uVar25 < uVar13) {
          lVar19 = param_4 + lVar14 + lVar11;
          uVar13 = -lVar11;
          if (uVar12 < uVar13) {
            func_0x0099bd90(lVar22,lVar19,uVar12);
            uVar25 = 0;
            uVar13 = uVar12;
          }
          else {
            func_0x0099bd90(lVar22,lVar19,uVar13);
            uVar25 = uVar12 + lVar11;
          }
          lVar22 = lVar22 + uVar13;
          lVar11 = param_2;
        }
        else {
          uVar25 = uVar12;
          lVar11 = lVar22 - uVar13;
        }
        if (uVar25 != 0) {
          if (uVar25 < 4) {
            uVar12 = 0;
          }
          else {
            uVar12 = 0;
            if (0x1f < (ulong)(lVar22 - lVar11)) {
              if (uVar25 < 0x20) {
                uVar13 = 0;
              }
              else {
                uVar12 = uVar25 & 0xffffffffffffffe0;
                uVar13 = 0;
                do {
                  puVar16 = (undefined4 *)(lVar11 + uVar13);
                  uVar3 = puVar16[1];
                  uVar4 = puVar16[2];
                  uVar5 = puVar16[3];
                  puVar15 = (undefined8 *)(lVar11 + 0x10 + uVar13);
                  uVar6 = *puVar15;
                  uVar7 = puVar15[1];
                  puVar1 = (undefined4 *)(lVar22 + uVar13);
                  *puVar1 = *puVar16;
                  puVar1[1] = uVar3;
                  puVar1[2] = uVar4;
                  puVar1[3] = uVar5;
                  puVar15 = (undefined8 *)(lVar22 + 0x10 + uVar13);
                  *puVar15 = uVar6;
                  puVar15[1] = uVar7;
                  uVar13 = uVar13 + 0x20;
                } while (uVar12 != uVar13);
                if (uVar25 == uVar12) goto code_r0x004a2f20;
                uVar13 = uVar12;
                if ((uVar25 & 0x1c) == 0) goto code_r0x004a30fa;
              }
              uVar12 = uVar25 & 0xfffffffffffffffc;
              do {
                *(undefined4 *)(lVar22 + uVar13) = *(undefined4 *)(lVar11 + uVar13);
                uVar13 = uVar13 + 4;
              } while (uVar12 != uVar13);
              if (uVar25 == uVar12) goto code_r0x004a2f20;
            }
          }
code_r0x004a30fa:
          uVar9 = uVar12;
          for (uVar13 = uVar25 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
            *(undefined1 *)(lVar22 + uVar9) = *(undefined1 *)(lVar11 + uVar9);
            uVar9 = uVar9 + 1;
          }
          if (uVar12 - uVar25 < 0xfffffffffffffffd) {
            do {
              *(undefined1 *)(lVar22 + uVar9) = *(undefined1 *)(lVar11 + uVar9);
              *(undefined1 *)(lVar22 + 1 + uVar9) = *(undefined1 *)(lVar11 + 1 + uVar9);
              *(undefined1 *)(lVar22 + 2 + uVar9) = *(undefined1 *)(lVar11 + 2 + uVar9);
              *(undefined1 *)(lVar22 + 3 + uVar9) = *(undefined1 *)(lVar11 + 3 + uVar9);
              uVar9 = uVar9 + 4;
            } while (uVar25 != uVar9);
          }
        }
code_r0x004a2f20:
        lVar22 = lVar22 + uVar25;
        if ((ulong)(lVar18 - lVar22) < 5) {
          return -1;
        }
      } while( true );
    }
  }
  lVar22 = param_3 + param_2;
  lVar14 = param_2 - lVar14;
  do {
    uVar8 = *param_1;
    pbVar23 = (byte *)((long)param_1 + 1);
    uVar10 = (uint)(byte)((byte)uVar8 >> 4);
    uVar12 = (ulong)uVar10;
    if (uVar10 == 0xf) {
      lVar18 = 0;
      do {
        bVar2 = *pbVar23;
        pbVar23 = pbVar23 + 1;
        lVar18 = lVar18 + (ulong)bVar2;
      } while ((ulong)bVar2 == 0xff);
      uVar12 = lVar18 + 0xf;
    }
    if ((ulong)(lVar22 - param_2) < uVar12) {
      return -1;
    }
    func_0x0099bd90(param_2,pbVar23,uVar12);
    lVar18 = param_2 + uVar12;
    puVar24 = (ushort *)(pbVar23 + uVar12);
    if ((ulong)(lVar22 - lVar18) < 0xc) {
      if (lVar18 != lVar22) {
        return -1;
      }
      return (int)puVar24 - iStack_50;
    }
    uVar13 = (ulong)((byte)uVar8 & 0xf);
    param_1 = puVar24 + 1;
    if (uVar13 == 0xf) {
      lVar11 = 0;
      do {
        uVar8 = *param_1;
        param_1 = (ushort *)((long)param_1 + 1);
        lVar11 = lVar11 + (ulong)(byte)uVar8;
      } while ((ulong)(byte)uVar8 == 0xff);
      uVar13 = lVar11 + 0xf;
    }
    uVar25 = uVar13 + 4;
    if ((ulong)(lVar22 - lVar18) < uVar25) {
      return -1;
    }
    uVar8 = *puVar24;
    if ((ulong)(lVar18 - lVar14) < (ulong)uVar8) {
      return -1;
    }
    if (uVar25 != 0) {
      lVar11 = -(ulong)uVar8;
      if (uVar13 < 0xfffffffffffffffc) {
        uVar9 = 0;
        if (0x1f < uVar8) {
          if (uVar25 < 0x20) {
            uVar17 = 0;
          }
          else {
            uVar9 = uVar25 & 0xffffffffffffffe0;
            puVar15 = (undefined8 *)(param_2 + uVar12 + 0x10);
            uVar17 = uVar9;
            do {
              puVar16 = (undefined4 *)((long)puVar15 + lVar11 + -0x10);
              uVar3 = puVar16[1];
              uVar4 = puVar16[2];
              uVar5 = puVar16[3];
              uVar6 = *(undefined8 *)((long)puVar15 + lVar11);
              uVar7 = ((undefined8 *)((long)puVar15 + lVar11))[1];
              *(undefined4 *)(puVar15 + -2) = *puVar16;
              *(undefined4 *)((long)puVar15 + -0xc) = uVar3;
              *(undefined4 *)(puVar15 + -1) = uVar4;
              *(undefined4 *)((long)puVar15 + -4) = uVar5;
              *puVar15 = uVar6;
              puVar15[1] = uVar7;
              puVar15 = puVar15 + 4;
              uVar17 = uVar17 - 0x20;
            } while (uVar17 != 0);
            if (uVar25 == uVar9) goto code_r0x004a4900;
            uVar17 = uVar9;
            if ((uVar25 & 0x1c) == 0) goto code_r0x004a4a9a;
          }
          uVar9 = uVar25 & 0xfffffffffffffffc;
          lVar19 = uVar17 - uVar9;
          puVar16 = (undefined4 *)(uVar17 + uVar12 + param_2);
          do {
            *puVar16 = *(undefined4 *)((long)puVar16 + lVar11);
            puVar16 = puVar16 + 1;
            lVar19 = lVar19 + 4;
          } while (lVar19 != 0);
          if (uVar25 == uVar9) goto code_r0x004a4900;
        }
      }
      else {
        uVar9 = 0;
      }
code_r0x004a4a9a:
      uVar20 = uVar13 & 3;
      uVar17 = uVar9;
      if (uVar20 != 0) {
        lVar19 = -uVar9;
        puVar21 = (undefined1 *)(uVar9 + uVar12 + param_2);
        do {
          *puVar21 = puVar21[lVar11];
          lVar19 = lVar19 + -1;
          puVar21 = puVar21 + 1;
          uVar20 = uVar20 - 1;
        } while (uVar20 != 0);
        uVar17 = -lVar19;
      }
      if (2 < (uVar13 - uVar9) + 3) {
        lVar19 = (uVar13 - uVar17) + 4;
        puVar21 = (undefined1 *)(param_2 + uVar12 + uVar17 + 3);
        do {
          puVar21[-3] = puVar21[lVar11 + -3];
          puVar21[-2] = puVar21[lVar11 + -2];
          puVar21[-1] = puVar21[lVar11 + -1];
          *puVar21 = puVar21[lVar11];
          puVar21 = puVar21 + 4;
          lVar19 = lVar19 + -4;
        } while (lVar19 != 0);
      }
    }
code_r0x004a4900:
    param_2 = lVar18 + uVar25;
    if ((ulong)(lVar22 - param_2) < 5) {
      return -1;
    }
  } while( true );
}


