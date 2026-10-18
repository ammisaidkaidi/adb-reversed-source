// Function: LZ4HC_searchExtDict
// Address: 004a7f70
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined1  [16]
LZ4HC_searchExtDict(int *param_1,int param_2,int *param_3,ulong *param_4,long param_5,int param_6,
                   uint param_7,int param_8)

{
  ulong *puVar1;
  ulong *puVar2;
  char *pcVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  ulong *puVar13;
  int iVar14;
  int iVar15;
  long lVar16;
  uint uVar17;
  ulong uVar18;
  ulong *puVar19;
  uint uVar20;
  ulong *puVar21;
  ulong uVar22;
  long lVar23;
  uint uVar24;
  bool bVar25;
  undefined1 auVar26 [16];
  int iStack_58;
  uint uStack_38;
  
  lVar4 = *(long *)(param_5 + 0x40008);
  uVar9 = (ulong)*(uint *)(param_5 + 0x40018);
  lVar10 = (*(long *)(param_5 + 0x40000) - lVar4) + uVar9;
  uVar24 = *(uint *)(param_5 + (ulong)((uint)(*param_1 * -0x61c8864f) >> 0x11) * 4);
  iVar14 = (param_6 + uVar24) - (int)lVar10;
  uVar5 = param_2 - iVar14;
  if (uVar5 < 0x10000) {
    lVar23 = lVar4 - uVar9;
    puVar1 = (ulong *)(param_1 + 1);
    uVar18 = 0;
    uStack_38 = 0;
    do {
      bVar25 = param_8 == 0;
      param_8 = param_8 + -1;
      if (bVar25) break;
      uVar11 = (ulong)uVar24;
      if (*(int *)(lVar23 + uVar11) == *param_1) {
        puVar19 = (ulong *)((lVar10 - uVar11) + (long)param_1);
        if (param_4 < puVar19) {
          puVar19 = param_4;
        }
        puVar21 = (ulong *)(lVar23 + uVar11 + 4);
        puVar2 = (ulong *)((long)puVar19 - 7);
        puVar13 = puVar1;
        if (puVar1 < puVar2) {
          if (*puVar21 == *puVar1) {
            puVar21 = (ulong *)(lVar23 + uVar11 + 0xc);
            puVar13 = (ulong *)(param_1 + 3);
            goto code_r0x004a8112;
          }
          uVar12 = 0;
          for (uVar22 = *puVar1 ^ *puVar21; (uVar22 & 1) == 0;
              uVar22 = uVar22 >> 1 | 0x8000000000000000) {
            uVar12 = uVar12 + 1;
          }
          uVar12 = uVar12 >> 3;
        }
        else {
code_r0x004a8112:
          if (puVar13 < puVar2) {
            iVar15 = (-4 - (int)param_1) + (int)puVar13;
code_r0x004a8120:
            if (*puVar21 == *puVar13) goto code_r0x004a812f;
            uVar12 = 0;
            for (uVar22 = *puVar13 ^ *puVar21; (uVar22 & 1) == 0;
                uVar22 = uVar22 >> 1 | 0x8000000000000000) {
              uVar12 = uVar12 + 1;
            }
            uVar12 = (uVar12 >> 3) + iVar15;
            goto code_r0x004a81d9;
          }
code_r0x004a8140:
          if ((puVar13 < (ulong *)((long)puVar19 - 3U)) && ((int)*puVar21 == (int)*puVar13)) {
            puVar13 = (ulong *)((long)puVar13 + 4);
            puVar21 = (ulong *)((long)puVar21 + 4);
          }
          if ((puVar13 < (ulong *)((long)puVar19 - 1U)) && ((short)*puVar21 == (short)*puVar13)) {
            puVar13 = (ulong *)((long)puVar13 + 2);
            puVar21 = (ulong *)((long)puVar21 + 2);
          }
          if (puVar13 < puVar19) {
            puVar13 = (ulong *)((long)puVar13 + (ulong)((char)*puVar21 == (char)*puVar13));
          }
          iStack_58 = (int)puVar1;
          uVar12 = (int)puVar13 - iStack_58;
        }
code_r0x004a81d9:
        uVar7 = 0;
        if (param_3 < param_1) {
          lVar16 = uVar9 - uVar11;
          if ((long)(uVar9 - uVar11) < (long)param_3 - (long)param_1) {
            lVar16 = (long)param_3 - (long)param_1;
          }
          lVar8 = 0;
          uVar17 = (uint)lVar16;
          if ((int)uVar17 < -3) {
            lVar8 = 0;
code_r0x004a8220:
            uVar7 = *(uint *)((long)param_1 + lVar8 + -4);
            uVar20 = *(uint *)(lVar23 + -4 + uVar11 + lVar8);
            if (uVar7 == uVar20) goto code_r0x004a822f;
            uVar20 = uVar20 ^ uVar7;
            uVar7 = 0x1f;
            if (uVar20 != 0) {
              for (; uVar20 >> uVar7 == 0; uVar7 = uVar7 - 1) {
              }
            }
            uVar7 = (int)lVar8 - ((uVar7 ^ 0x18) >> 3);
            goto code_r0x004a8050;
          }
code_r0x004a8240:
          uVar7 = (uint)lVar8;
          lVar16 = (long)(int)uVar7;
          uVar20 = uVar17;
          if ((int)uVar7 < (int)uVar17) {
            uVar20 = uVar7;
          }
          uVar6 = uVar7 + 1;
          do {
            uVar7 = uVar20;
            if (lVar16 <= (int)uVar17) break;
            lVar8 = lVar16 + -1;
            uVar7 = uVar6 - 1;
            pcVar3 = (char *)(uVar11 + ~uVar9 + lVar4 + lVar16);
            lVar16 = lVar16 + -1;
            uVar6 = uVar7;
          } while (*(char *)((long)param_1 + lVar8) == *pcVar3);
        }
code_r0x004a8050:
        uVar12 = (uVar12 + 4) - uVar7;
        if ((int)param_7 < (int)uVar12) {
          uVar18 = (ulong)uVar7;
          uStack_38 = uVar5;
          param_7 = uVar12;
        }
      }
      uVar5 = (uint)*(ushort *)(param_5 + 0x20000 + (ulong)(uVar24 & 0xffff) * 2);
      uVar24 = uVar24 - uVar5;
      iVar14 = iVar14 - uVar5;
      uVar5 = param_2 - iVar14;
    } while (uVar5 < 0x10000);
    uVar9 = (ulong)uStack_38;
  }
  else {
    uVar9 = 0;
    uVar18 = 0;
  }
  auVar26._8_8_ = uVar18;
  auVar26._0_8_ = (ulong)param_7 << 0x20 | uVar9;
  return auVar26;
code_r0x004a812f:
  puVar13 = puVar13 + 1;
  puVar21 = puVar21 + 1;
  iVar15 = iVar15 + 8;
  if (puVar2 <= puVar13) goto code_r0x004a8140;
  goto code_r0x004a8120;
code_r0x004a822f:
  lVar8 = lVar8 + -4;
  if (lVar8 <= (long)(int)uVar17 + 3) goto code_r0x004a8240;
  goto code_r0x004a8220;
}


