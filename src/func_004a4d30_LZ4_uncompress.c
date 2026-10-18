// Function: LZ4_uncompress
// Address: 004a4d30
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


int LZ4_uncompress(ushort *param_1,long param_2,int param_3)

{
  ulong uVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ushort uVar8;
  long lVar9;
  ushort *puVar10;
  byte *pbVar11;
  ushort *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined4 *puVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  undefined1 *puVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  uint uVar23;
  long lVar24;
  ulong uVar25;
  int iStack_40;
  
  lVar20 = param_3 + param_2;
  puVar10 = param_1;
  lVar9 = param_2;
  do {
    uVar8 = *puVar10;
    pbVar11 = (byte *)((long)puVar10 + 1);
    uVar23 = (uint)(byte)((byte)uVar8 >> 4);
    uVar25 = (ulong)uVar23;
    if (uVar23 == 0xf) {
      lVar24 = 0;
      do {
        bVar2 = *pbVar11;
        pbVar11 = pbVar11 + 1;
        lVar24 = lVar24 + (ulong)bVar2;
      } while ((ulong)bVar2 == 0xff);
      uVar25 = lVar24 + 0xf;
    }
    if ((ulong)(lVar20 - lVar9) < uVar25) {
      return -1;
    }
    func_0x0099bd90(lVar9,pbVar11,uVar25);
    lVar24 = lVar9 + uVar25;
    puVar12 = (ushort *)(pbVar11 + uVar25);
    if ((ulong)(lVar20 - lVar24) < 0xc) {
      if (lVar24 != lVar20) {
        return -1;
      }
      iStack_40 = (int)param_1;
      return (int)puVar12 - iStack_40;
    }
    uVar22 = (ulong)((byte)uVar8 & 0xf);
    puVar10 = puVar12 + 1;
    if (uVar22 == 0xf) {
      lVar21 = 0;
      do {
        uVar8 = *puVar10;
        puVar10 = (ushort *)((long)puVar10 + 1);
        lVar21 = lVar21 + (ulong)(byte)uVar8;
      } while ((ulong)(byte)uVar8 == 0xff);
      uVar22 = lVar21 + 0xf;
    }
    uVar1 = uVar22 + 4;
    if ((ulong)(lVar20 - lVar24) < uVar1) {
      return -1;
    }
    uVar8 = *puVar12;
    if ((ulong)(lVar24 - param_2) < (ulong)uVar8) {
      return -1;
    }
    if (uVar1 != 0) {
      lVar21 = -(ulong)uVar8;
      if (uVar22 < 0xfffffffffffffffc) {
        uVar13 = 0;
        if (0x1f < uVar8) {
          if (uVar1 < 0x20) {
            uVar16 = 0;
          }
          else {
            uVar13 = uVar1 & 0xffffffffffffffe0;
            puVar14 = (undefined8 *)(lVar9 + uVar25 + 0x10);
            uVar16 = uVar13;
            do {
              puVar15 = (undefined4 *)((long)puVar14 + lVar21 + -0x10);
              uVar3 = puVar15[1];
              uVar4 = puVar15[2];
              uVar5 = puVar15[3];
              uVar6 = *(undefined8 *)((long)puVar14 + lVar21);
              uVar7 = ((undefined8 *)((long)puVar14 + lVar21))[1];
              *(undefined4 *)(puVar14 + -2) = *puVar15;
              *(undefined4 *)((long)puVar14 + -0xc) = uVar3;
              *(undefined4 *)(puVar14 + -1) = uVar4;
              *(undefined4 *)((long)puVar14 + -4) = uVar5;
              *puVar14 = uVar6;
              puVar14[1] = uVar7;
              puVar14 = puVar14 + 4;
              uVar16 = uVar16 - 0x20;
            } while (uVar16 != 0);
            if (uVar1 == uVar13) goto code_r0x004a4d60;
            uVar16 = uVar13;
            if ((uVar1 & 0x1c) == 0) goto code_r0x004a4eea;
          }
          uVar13 = uVar1 & 0xfffffffffffffffc;
          lVar17 = uVar16 - uVar13;
          puVar15 = (undefined4 *)(uVar16 + uVar25 + lVar9);
          do {
            *puVar15 = *(undefined4 *)((long)puVar15 + lVar21);
            puVar15 = puVar15 + 1;
            lVar17 = lVar17 + 4;
          } while (lVar17 != 0);
          if (uVar1 == uVar13) goto code_r0x004a4d60;
        }
      }
      else {
        uVar13 = 0;
      }
code_r0x004a4eea:
      uVar18 = uVar22 & 3;
      uVar16 = uVar13;
      if (uVar18 != 0) {
        lVar17 = -uVar13;
        puVar19 = (undefined1 *)(uVar13 + uVar25 + lVar9);
        do {
          *puVar19 = puVar19[lVar21];
          lVar17 = lVar17 + -1;
          puVar19 = puVar19 + 1;
          uVar18 = uVar18 - 1;
        } while (uVar18 != 0);
        uVar16 = -lVar17;
      }
      if (2 < (uVar22 - uVar13) + 3) {
        lVar17 = (uVar22 - uVar16) + 4;
        puVar19 = (undefined1 *)(lVar9 + uVar25 + uVar16 + 3);
        do {
          puVar19[-3] = puVar19[lVar21 + -3];
          puVar19[-2] = puVar19[lVar21 + -2];
          puVar19[-1] = puVar19[lVar21 + -1];
          *puVar19 = puVar19[lVar21];
          puVar19 = puVar19 + 4;
          lVar17 = lVar17 + -4;
        } while (lVar17 != 0);
      }
    }
code_r0x004a4d60:
    lVar9 = lVar24 + uVar1;
    if ((ulong)(lVar20 - lVar9) < 5) {
      return -1;
    }
  } while( true );
}


