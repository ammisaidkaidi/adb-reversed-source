// Function: LZ4_decompress_fast_withPrefix64k
// Address: 0049ef60
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


int LZ4_decompress_fast_withPrefix64k(ushort *param_1,long param_2,int param_3)

{
  long lVar1;
  ulong uVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ushort uVar9;
  ushort *puVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined4 *puVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  undefined1 *puVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  byte *pbVar24;
  ushort *puVar25;
  int iStack_40;
  
  lVar21 = param_3 + param_2;
  lVar1 = param_2 + -0x10000;
  puVar10 = param_1;
  do {
    uVar9 = *puVar10;
    pbVar24 = (byte *)((long)puVar10 + 1);
    uVar11 = (uint)(byte)((byte)uVar9 >> 4);
    uVar13 = (ulong)uVar11;
    if (uVar11 == 0xf) {
      lVar12 = 0;
      do {
        bVar3 = *pbVar24;
        pbVar24 = pbVar24 + 1;
        lVar12 = lVar12 + (ulong)bVar3;
      } while ((ulong)bVar3 == 0xff);
      uVar13 = lVar12 + 0xf;
    }
    if ((ulong)(lVar21 - param_2) < uVar13) {
      return -1;
    }
    func_0x0099bd90(param_2,pbVar24,uVar13);
    lVar12 = param_2 + uVar13;
    puVar25 = (ushort *)(pbVar24 + uVar13);
    if ((ulong)(lVar21 - lVar12) < 0xc) {
      if (lVar12 != lVar21) {
        return -1;
      }
      iStack_40 = (int)param_1;
      return (int)puVar25 - iStack_40;
    }
    uVar23 = (ulong)((byte)uVar9 & 0xf);
    puVar10 = puVar25 + 1;
    if (uVar23 == 0xf) {
      lVar22 = 0;
      do {
        uVar9 = *puVar10;
        puVar10 = (ushort *)((long)puVar10 + 1);
        lVar22 = lVar22 + (ulong)(byte)uVar9;
      } while ((ulong)(byte)uVar9 == 0xff);
      uVar23 = lVar22 + 0xf;
    }
    uVar2 = uVar23 + 4;
    if ((ulong)(lVar21 - lVar12) < uVar2) {
      return -1;
    }
    uVar9 = *puVar25;
    if ((ulong)(lVar12 - lVar1) < (ulong)uVar9) {
      return -1;
    }
    if (uVar2 != 0) {
      lVar22 = -(ulong)uVar9;
      if (uVar23 < 0xfffffffffffffffc) {
        uVar14 = 0;
        if (0x1f < uVar9) {
          if (uVar2 < 0x20) {
            uVar17 = 0;
          }
          else {
            uVar14 = uVar2 & 0xffffffffffffffe0;
            puVar15 = (undefined8 *)(param_2 + uVar13 + 0x10);
            uVar17 = uVar14;
            do {
              puVar16 = (undefined4 *)((long)puVar15 + lVar22 + -0x10);
              uVar4 = puVar16[1];
              uVar5 = puVar16[2];
              uVar6 = puVar16[3];
              uVar7 = *(undefined8 *)((long)puVar15 + lVar22);
              uVar8 = ((undefined8 *)((long)puVar15 + lVar22))[1];
              *(undefined4 *)(puVar15 + -2) = *puVar16;
              *(undefined4 *)((long)puVar15 + -0xc) = uVar4;
              *(undefined4 *)(puVar15 + -1) = uVar5;
              *(undefined4 *)((long)puVar15 + -4) = uVar6;
              *puVar15 = uVar7;
              puVar15[1] = uVar8;
              puVar15 = puVar15 + 4;
              uVar17 = uVar17 - 0x20;
            } while (uVar17 != 0);
            if (uVar2 == uVar14) goto code_r0x0049ef90;
            uVar17 = uVar14;
            if ((uVar2 & 0x1c) == 0) goto code_r0x0049f12a;
          }
          uVar14 = uVar2 & 0xfffffffffffffffc;
          lVar18 = uVar17 - uVar14;
          puVar16 = (undefined4 *)(uVar17 + uVar13 + param_2);
          do {
            *puVar16 = *(undefined4 *)((long)puVar16 + lVar22);
            puVar16 = puVar16 + 1;
            lVar18 = lVar18 + 4;
          } while (lVar18 != 0);
          if (uVar2 == uVar14) goto code_r0x0049ef90;
        }
      }
      else {
        uVar14 = 0;
      }
code_r0x0049f12a:
      uVar19 = uVar23 & 3;
      uVar17 = uVar14;
      if (uVar19 != 0) {
        lVar18 = -uVar14;
        puVar20 = (undefined1 *)(uVar14 + uVar13 + param_2);
        do {
          *puVar20 = puVar20[lVar22];
          lVar18 = lVar18 + -1;
          puVar20 = puVar20 + 1;
          uVar19 = uVar19 - 1;
        } while (uVar19 != 0);
        uVar17 = -lVar18;
      }
      if (2 < (uVar23 - uVar14) + 3) {
        lVar18 = (uVar23 - uVar17) + 4;
        puVar20 = (undefined1 *)(param_2 + uVar13 + uVar17 + 3);
        do {
          puVar20[-3] = puVar20[lVar22 + -3];
          puVar20[-2] = puVar20[lVar22 + -2];
          puVar20[-1] = puVar20[lVar22 + -1];
          *puVar20 = puVar20[lVar22];
          puVar20 = puVar20 + 4;
          lVar18 = lVar18 + -4;
        } while (lVar18 != 0);
      }
    }
code_r0x0049ef90:
    param_2 = lVar12 + uVar2;
    if ((ulong)(lVar21 - param_2) < 5) {
      return -1;
    }
  } while( true );
}


