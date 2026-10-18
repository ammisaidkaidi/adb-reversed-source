// Function: _ZN7android24localeDataCompareRegionsEPKcS1_S1_S1_S1_
// Address: 00440c40
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


byte * _ZN7android24localeDataCompareRegionsEPKcS1_S1_S1_S1_
                 (byte *param_1,byte *param_2,byte *param_3,byte *param_4,ushort *param_5)

{
  ushort uVar1;
  long lVar2;
  byte bVar3;
  uint uVar4;
  byte *pbVar5;
  long lVar6;
  byte *pbVar7;
  long lVar8;
  uint uVar9;
  ushort *extraout_RDX;
  uint uVar10;
  byte *pbVar11;
  long *plVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte bVar15;
  undefined4 uVar17;
  byte *unaff_R12;
  byte *pbVar18;
  byte *unaff_R14;
  byte bVar19;
  long in_FS_OFFSET;
  undefined8 uStack_70;
  long lStack_68;
  uint uStack_5c;
  byte *pbStack_58;
  long lStack_50;
  undefined1 *puStack_48;
  uint uStack_3c;
  long lStack_38;
  byte *pbVar16;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  bVar3 = *param_1;
  pbVar11 = (byte *)(ulong)bVar3;
  bVar19 = param_2[1];
  pbVar13 = (byte *)(ulong)bVar19;
  bVar15 = param_1[1] ^ bVar19 | bVar3 ^ *param_2;
  pbVar16 = (byte *)(ulong)bVar15;
  plVar12 = &lStack_68;
  pbVar7 = (byte *)0x0;
  if (bVar15 != 0) {
    uVar9 = (uint)param_3[1] << 0x10 | (uint)*param_3 << 0x18;
    uVar10 = CONCAT11(bVar3,param_1[1]) | uVar9;
    uVar4 = CONCAT11(*param_2,bVar19) | uVar9;
    uVar9 = (ushort)(*param_5 << 8 | *param_5 >> 8) | uVar9;
    uStack_3c = uVar4;
    if (uVar4 == 0x65734d58 || uVar4 == 0x65735553) {
      uStack_3c = 0x6573a424;
    }
    if ((uVar10 != 0x6573a424) == (uVar10 == 0x65734d58 || uVar10 == 0x65735553)) {
      uStack_3c = uVar4;
    }
    if ((uVar10 == 0x65734d58 || uVar10 == 0x65735553) &&
        (uVar4 != 0x6573a424) != (uVar4 == 0x65734d58 || uVar4 == 0x65735553)) {
      uVar10 = 0x6573a424;
      uStack_3c = uVar4;
    }
    pbVar11 = (byte *)(ulong)uVar10;
    lVar2 = -((ulong)(iRam0000000000a00950 + 1) * 4 + 0xf & 0xfffffffffffffff0);
    unaff_R12 = (byte *)((long)&lStack_68 + lVar2);
    pbVar13 = (byte *)0x0;
    puStack_48 = (undefined1 *)&lStack_68;
    *(undefined **)((long)&uStack_70 + lVar2) = &UNK_00440d4b;
    pbVar16 = unaff_R12;
    func_0x0099bdb0(unaff_R12,0,(ulong)(iRam0000000000a00950 + 1) << 2);
    pbVar7 = (byte *)0x1;
    do {
      pbVar5 = pbVar7;
      *(uint *)((long)&uStack_70 + (long)pbVar5 * 4 + lVar2 + 4) = uVar9;
      plVar12 = (long *)puStack_48;
      if (uVar10 == uVar9) {
        pbVar7 = (byte *)0x1;
        goto code_r0x00440ebd;
      }
      if (uStack_3c == uVar9) {
        pbVar7 = (byte *)0xffffffff;
        goto code_r0x00440ebd;
      }
      if ((short)uVar9 == 0) break;
      pbVar13 = (byte *)(ulong)uVar9;
      *(undefined **)((long)&uStack_70 + lVar2) = &UNK_00440d7c;
      pbVar16 = param_4;
      uVar4 = _ZN7android25findParentLocalePackedKeyEPKcj();
      uVar9 = uVar9 & 0xffff0000;
      if (uVar4 != 0) {
        uVar9 = uVar4;
      }
      pbVar7 = pbVar5 + 1;
      unaff_R14 = pbVar5;
    } while (uVar9 != 0);
    pbStack_58 = param_4;
    uStack_5c = uVar10;
    lVar8 = 0;
    do {
      pbVar7 = pbStack_58;
      pbVar14 = (byte *)(ulong)uVar10;
      lVar6 = lVar8;
      if (pbVar5 != (byte *)0x0) {
        pbVar11 = (byte *)0x0;
        do {
          if (*(uint *)(unaff_R12 + (long)pbVar11 * 4) == uVar10) goto code_r0x00440df5;
          pbVar11 = pbVar11 + 1;
        } while (pbVar5 != pbVar11);
      }
      pbVar11 = (byte *)0xffffffffffffffff;
      if ((short)uVar10 == 0) break;
      lStack_50 = lVar8;
      *(undefined **)((long)&uStack_70 + lVar2) = &UNK_00440ddf;
      uVar9 = _ZN7android25findParentLocalePackedKeyEPKcj();
      uVar10 = uVar10 & 0xffff0000;
      if (uVar9 != 0) {
        uVar10 = uVar9;
      }
      lVar6 = lStack_50;
      pbVar13 = pbVar14;
      pbVar16 = pbVar7;
      lVar8 = lVar8 + 1;
    } while (uVar10 != 0);
code_r0x00440df5:
    pbVar11 = pbVar11 + lVar6;
    lVar8 = 0;
    pbVar7 = (byte *)(ulong)uStack_3c;
    do {
      pbVar14 = pbStack_58;
      uVar10 = (uint)pbVar7;
      lVar6 = lVar8;
      param_4 = pbVar7;
      if (pbVar5 != (byte *)0x0) {
        pbVar18 = (byte *)0x0;
        do {
          if (*(uint *)(unaff_R12 + (long)pbVar18 * 4) == uVar10) goto code_r0x00440e5d;
          pbVar18 = pbVar18 + 1;
        } while (pbVar5 != pbVar18);
      }
      pbVar18 = (byte *)0xffffffffffffffff;
      if ((short)pbVar7 == 0) break;
      lStack_68 = lVar8 + 1;
      lStack_50 = lVar8;
      *(undefined **)((long)&uStack_70 + lVar2) = &UNK_00440e43;
      uVar9 = _ZN7android25findParentLocalePackedKeyEPKcj();
      uVar10 = uVar10 & 0xffff0000;
      if (uVar9 != 0) {
        uVar10 = uVar9;
      }
      param_4 = (byte *)(ulong)uVar10;
      lVar6 = lStack_50;
      lVar8 = lStack_68;
      pbVar13 = pbVar7;
      pbVar16 = pbVar14;
      pbVar7 = param_4;
    } while (uVar10 != 0);
code_r0x00440e5d:
    unaff_R14 = pbStack_58;
    uVar10 = uStack_5c;
    if (pbVar11 == pbVar18 + lVar6) {
      pbVar11 = (byte *)(ulong)uStack_5c;
      *(undefined **)((long)&uStack_70 + lVar2) = &UNK_00440e76;
      uVar4 = _ZN7android22isLocaleRepresentativeEjPKc(uVar10,unaff_R14);
      uVar9 = uStack_3c;
      pbVar16 = (byte *)(ulong)uStack_3c;
      *(undefined **)((long)&uStack_70 + lVar2) = &UNK_00440e88;
      pbVar13 = unaff_R14;
      bVar3 = _ZN7android22isLocaleRepresentativeEjPKc();
      bVar19 = (byte)uVar4 ^ bVar3;
      param_4 = (byte *)(ulong)CONCAT31((int3)(uVar4 >> 8),bVar19);
      uVar10 = uVar9 - uVar10;
      if (bVar19 != 0) {
        uVar10 = (uVar4 & 0xff) - (uint)bVar3;
      }
      unaff_R12 = (byte *)(ulong)uVar10;
      plVar12 = (long *)puStack_48;
      pbVar7 = unaff_R12;
    }
    else {
      pbVar7 = (byte *)(ulong)(uint)((int)(pbVar18 + lVar6) - (int)pbVar11);
      plVar12 = (long *)puStack_48;
      unaff_R14 = pbVar5;
    }
  }
code_r0x00440ebd:
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return pbVar7;
  }
  *(undefined **)((long)plVar12 + -8) = &UNK_00440ee3;
  func_0x0099bd00();
  *(undefined1 **)((long)plVar12 + -8) = &stack0xfffffffffffffff8;
  *(byte **)((long)plVar12 + -0x10) = param_4;
  *(byte **)((long)plVar12 + -0x18) = unaff_R14;
  *(byte **)((long)plVar12 + -0x20) = unaff_R12;
  *(byte **)((long)plVar12 + -0x28) = pbVar11;
  bVar3 = *pbVar13;
  pbVar7 = (byte *)(ulong)bVar3;
  uVar17 = 0;
  if (bVar3 == 0) goto code_r0x00440f34;
  uVar10 = (uint)pbVar13[1] << 0x10 | (uint)bVar3 << 0x18;
  uVar1 = *extraout_RDX;
  *(undefined **)((long)plVar12 + -0x30) = &UNK_00440f2c;
  pbVar7 = (byte *)_ZN7android18lookupLikelyScriptEj((ushort)(uVar1 << 8 | uVar1 >> 8) | uVar10);
  if (pbVar7 == (byte *)0x0) {
    uVar17 = 0;
    if ((char)*extraout_RDX == '\0') goto code_r0x00440f34;
    *(undefined **)((long)plVar12 + -0x30) = &UNK_00440f4e;
    pbVar7 = (byte *)_ZN7android18lookupLikelyScriptEj(uVar10);
    if (pbVar7 == (byte *)0x0) goto code_r0x00440f34;
  }
  uVar17 = *(undefined4 *)pbVar7;
code_r0x00440f34:
  *(undefined4 *)pbVar16 = uVar17;
  return pbVar7;
}


