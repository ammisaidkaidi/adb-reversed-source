// Function: _Z11adb_versionv
// Address: 003c9a50
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined1 * _Z11adb_versionv(undefined1 *param_1)

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
  undefined1 *puVar14;
  ulong uVar15;
  ulong uVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  long in_FS_OFFSET;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  undefined1 uVar28;
  byte bStack_70;
  undefined1 auStack_6f [15];
  undefined1 *puStack_60;
  byte bStack_58;
  undefined1 auStack_57 [15];
  undefined1 *puStack_48;
  byte bStack_40;
  undefined1 auStack_3f [15];
  undefined1 *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)(in_FS_OFFSET + 0x28);
  func_0x0036b860(&bStack_40);
  puVar14 = puStack_30;
  if ((bStack_40 & 1) == 0) {
    puVar14 = auStack_3f;
  }
  _ZN7android4base17GetExecutablePathEv(&bStack_58);
  puVar19 = puStack_48;
  if ((bStack_58 & 1) == 0) {
    puVar19 = auStack_57;
  }
  _Z12GetOSVersionv(&bStack_70);
  puVar18 = puStack_60;
  if ((bStack_70 & 1) == 0) {
    puVar18 = auStack_6f;
  }
  puVar17 = param_1;
  _ZN7android4base12StringPrintfEPKcz
            (param_1,&UNK_001788d7,1,0,0x29,&UNK_00159584,puVar14,puVar19,puVar18);
  puVar14 = puStack_48;
  if ((bStack_70 & 1) != 0) {
    _ZdaPvSt11align_val_t();
    puVar17 = puStack_60;
    puVar14 = puStack_48;
  }
  if ((bStack_58 & 1) != 0) {
    _ZdaPvSt11align_val_t();
    puVar17 = puVar14;
  }
  if ((bStack_40 & 1) != 0) {
    _ZdaPvSt11align_val_t();
    puVar17 = puStack_30;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) != lStack_28) {
    func_0x0099bd00();
    uVar1 = *(uint *)(puVar17 + 0xc);
    if ((ulong)uVar1 == 0) {
      return (undefined1 *)0x0;
    }
    lVar4 = *(long *)(puVar17 + 0x18);
    if (uVar1 < 8) {
      uVar16 = 0;
      puVar14 = (undefined1 *)0x0;
    }
    else {
      uVar16 = (ulong)(uVar1 & 0xfffffff8);
      uVar15 = 0;
      iVar24 = 0;
      iVar25 = 0;
      iVar26 = 0;
      iVar27 = 0;
      iVar20 = 0;
      iVar21 = 0;
      iVar22 = 0;
      iVar23 = 0;
      do {
        uVar2 = *(undefined4 *)(lVar4 + uVar15);
        uVar3 = *(undefined4 *)(lVar4 + 4 + uVar15);
        uVar28 = (undefined1)((uint)uVar2 >> 8);
        uVar11 = (ulong)CONCAT12(uVar28,(short)uVar2) & 0xffffffffffff00ff;
        auVar5._8_4_ = 0;
        auVar5._0_8_ = uVar11;
        auVar5[0xc] = (char)((uint)uVar2 >> 0x18);
        auVar6[8] = (char)((uint)uVar2 >> 0x10);
        auVar6._0_8_ = uVar11;
        auVar6[9] = 0;
        auVar6._10_3_ = auVar5._10_3_;
        auVar12._5_8_ = 0;
        auVar12._0_5_ = auVar6._8_5_;
        auVar7[4] = uVar28;
        auVar7._0_4_ = (uint)uVar11;
        auVar7[5] = 0;
        auVar7._6_7_ = SUB137(auVar12 << 0x40,6);
        iVar24 = iVar24 + ((uint)uVar11 & 0xffff);
        iVar25 = iVar25 + auVar7._4_4_;
        iVar26 = iVar26 + auVar6._8_4_;
        iVar27 = iVar27 + (uint)(uint3)(auVar5._10_3_ >> 0x10);
        uVar28 = (undefined1)((uint)uVar3 >> 8);
        uVar11 = (ulong)CONCAT12(uVar28,(short)uVar3) & 0xffffffffffff00ff;
        auVar8._8_4_ = 0;
        auVar8._0_8_ = uVar11;
        auVar8[0xc] = (char)((uint)uVar3 >> 0x18);
        auVar9[8] = (char)((uint)uVar3 >> 0x10);
        auVar9._0_8_ = uVar11;
        auVar9[9] = 0;
        auVar9._10_3_ = auVar8._10_3_;
        auVar13._5_8_ = 0;
        auVar13._0_5_ = auVar9._8_5_;
        auVar10[4] = uVar28;
        auVar10._0_4_ = (uint)uVar11;
        auVar10[5] = 0;
        auVar10._6_7_ = SUB137(auVar13 << 0x40,6);
        iVar20 = iVar20 + ((uint)uVar11 & 0xffff);
        iVar21 = iVar21 + auVar10._4_4_;
        iVar22 = iVar22 + auVar9._8_4_;
        iVar23 = iVar23 + (uint)(uint3)(auVar8._10_3_ >> 0x10);
        uVar15 = uVar15 + 8;
      } while (uVar16 != uVar15);
      puVar14 = (undefined1 *)
                (ulong)(uint)(iVar23 + iVar27 + iVar21 + iVar25 + iVar22 + iVar26 + iVar20 + iVar24)
      ;
      if ((uVar1 & 0xfffffff8) == uVar1) {
        return puVar14;
      }
    }
    do {
      puVar14 = (undefined1 *)(ulong)((int)puVar14 + (uint)*(byte *)(lVar4 + uVar16));
      uVar16 = uVar16 + 1;
    } while (uVar1 != uVar16);
    return puVar14;
  }
  return param_1;
}


