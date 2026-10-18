// Function: _Z26calculate_apacket_checksumPK7apacket
// Address: 003c9b60
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


int _Z26calculate_apacket_checksumPK7apacket(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  undefined1 auVar5 [13];
  undefined1 auVar6 [13];
  undefined1 auVar7 [13];
  undefined1 auVar8 [13];
  undefined1 auVar9 [13];
  undefined1 auVar10 [13];
  ulong uVar11;
  undefined1 auVar12 [13];
  undefined1 auVar13 [13];
  int iVar14;
  ulong uVar15;
  ulong uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  undefined1 uVar24;
  
  uVar1 = *(uint *)(param_1 + 0xc);
  if ((ulong)uVar1 == 0) {
    return 0;
  }
  lVar4 = *(long *)(param_1 + 0x18);
  if (uVar1 < 8) {
    uVar16 = 0;
    iVar14 = 0;
  }
  else {
    uVar16 = (ulong)(uVar1 & 0xfffffff8);
    uVar15 = 0;
    iVar20 = 0;
    iVar21 = 0;
    iVar22 = 0;
    iVar23 = 0;
    iVar14 = 0;
    iVar17 = 0;
    iVar18 = 0;
    iVar19 = 0;
    do {
      uVar2 = *(undefined4 *)(lVar4 + uVar15);
      uVar3 = *(undefined4 *)(lVar4 + 4 + uVar15);
      uVar24 = (undefined1)((uint)uVar2 >> 8);
      uVar11 = (ulong)CONCAT12(uVar24,(short)uVar2) & 0xffffffffffff00ff;
      auVar5._8_4_ = 0;
      auVar5._0_8_ = uVar11;
      auVar5[0xc] = (char)((uint)uVar2 >> 0x18);
      auVar6[8] = (char)((uint)uVar2 >> 0x10);
      auVar6._0_8_ = uVar11;
      auVar6[9] = 0;
      auVar6._10_3_ = auVar5._10_3_;
      auVar12._5_8_ = 0;
      auVar12._0_5_ = auVar6._8_5_;
      auVar7[4] = uVar24;
      auVar7._0_4_ = (uint)uVar11;
      auVar7[5] = 0;
      auVar7._6_7_ = SUB137(auVar12 << 0x40,6);
      iVar20 = iVar20 + ((uint)uVar11 & 0xffff);
      iVar21 = iVar21 + auVar7._4_4_;
      iVar22 = iVar22 + auVar6._8_4_;
      iVar23 = iVar23 + (uint)(uint3)(auVar5._10_3_ >> 0x10);
      uVar24 = (undefined1)((uint)uVar3 >> 8);
      uVar11 = (ulong)CONCAT12(uVar24,(short)uVar3) & 0xffffffffffff00ff;
      auVar8._8_4_ = 0;
      auVar8._0_8_ = uVar11;
      auVar8[0xc] = (char)((uint)uVar3 >> 0x18);
      auVar9[8] = (char)((uint)uVar3 >> 0x10);
      auVar9._0_8_ = uVar11;
      auVar9[9] = 0;
      auVar9._10_3_ = auVar8._10_3_;
      auVar13._5_8_ = 0;
      auVar13._0_5_ = auVar9._8_5_;
      auVar10[4] = uVar24;
      auVar10._0_4_ = (uint)uVar11;
      auVar10[5] = 0;
      auVar10._6_7_ = SUB137(auVar13 << 0x40,6);
      iVar14 = iVar14 + ((uint)uVar11 & 0xffff);
      iVar17 = iVar17 + auVar10._4_4_;
      iVar18 = iVar18 + auVar9._8_4_;
      iVar19 = iVar19 + (uint)(uint3)(auVar8._10_3_ >> 0x10);
      uVar15 = uVar15 + 8;
    } while (uVar16 != uVar15);
    iVar14 = iVar19 + iVar23 + iVar17 + iVar21 + iVar18 + iVar22 + iVar14 + iVar20;
    if ((uVar1 & 0xfffffff8) == uVar1) {
      return iVar14;
    }
  }
  do {
    iVar14 = iVar14 + (uint)*(byte *)(lVar4 + uVar16);
    uVar16 = uVar16 + 1;
  } while (uVar1 != uVar16);
  return iVar14;
}


