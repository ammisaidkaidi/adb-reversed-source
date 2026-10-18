// Function: LZ4_compressHC_withStateHC
// Address: 004aded0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong LZ4_compressHC_withStateHC
                (ulong param_1,ulong param_2,undefined8 param_3,uint param_4,ulong param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined2 uVar9;
  ulong uVar10;
  ulong extraout_RDX;
  undefined8 extraout_RDX_00;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  long in_FS_OFFSET;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  undefined *puStack_98;
  uint uStack_90;
  undefined4 uStack_84;
  ulong uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  undefined *puStack_50;
  uint uStack_48;
  uint uStack_3c;
  ulong uStack_38;
  
  uVar14 = (ulong)param_4;
  uStack_38 = *(ulong *)(in_FS_OFFSET + 0x28);
  uVar5 = (ulong)param_4;
  puStack_50 = &UNK_004adf01;
  uVar6 = param_2;
  uVar2 = LZ4_compressBound();
  uVar13 = (ulong)uVar2;
  uVar7 = 0;
  if ((param_1 & 7) == 0 && param_1 != 0) {
    puStack_50 = &UNK_004adf2a;
    func_0x0099bdb0(param_1,0,0x40030);
    *(undefined8 *)(param_1 + 0x40028) = 0;
    *(undefined2 *)(param_1 + 0x40024) = 9;
    *(undefined4 *)(param_1 + 0x40020) = 0x10000;
    *(ulong *)(param_1 + 0x40008) = param_2;
    *(ulong *)(param_1 + 0x40000) = param_2;
    *(ulong *)(param_1 + 0x40010) = param_2;
    *(undefined8 *)(param_1 + 0x40018) = 0x1000000010000;
    puStack_50 = &UNK_004adf7c;
    uStack_3c = param_4;
    iVar3 = LZ4_compressBound(param_4);
    uStack_48 = (uint)((int)uVar2 < iVar3);
    param_5 = (ulong)uVar2;
    puStack_50 = &UNK_004adf9f;
    uVar6 = param_2;
    uVar5 = param_1;
    uVar7 = func_0x004a84b0(param_1,param_2,param_3,&uStack_3c,param_5,0);
  }
  uVar10 = *(ulong *)(in_FS_OFFSET + 0x28);
  if (uVar10 == uStack_38) {
    return uVar7;
  }
  puStack_50 = &UNK_004adfc2;
  func_0x0099bd00();
  uVar2 = (uint)param_5;
  uStack_80 = *(ulong *)(in_FS_OFFSET + 0x28);
  uVar8 = 0;
  uVar7 = uVar6;
  uVar11 = uVar5;
  uStack_78 = param_3;
  uStack_70 = uVar13;
  uStack_68 = uVar14;
  uStack_60 = param_2;
  uStack_58 = param_1;
  puStack_50 = &stack0xfffffffffffffff8;
  if ((uVar5 & 7) == 0 && uVar5 != 0) {
    param_1 = param_5 & 0xffffffff;
    puStack_98 = &UNK_004ae021;
    puStack_50 = &stack0xfffffffffffffff8;
    func_0x0099bdb0();
    uStack_84 = (undefined4)uVar10;
    *(undefined8 *)(uVar5 + 0x40028) = 0;
    *(undefined2 *)(uVar5 + 0x40024) = 9;
    *(undefined4 *)(uVar5 + 0x40020) = 0x10000;
    *(ulong *)(uVar5 + 0x40008) = uVar6;
    *(ulong *)(uVar5 + 0x40000) = uVar6;
    *(ulong *)(uVar5 + 0x40010) = uVar6;
    *(undefined8 *)(uVar5 + 0x40018) = 0x1000000010000;
    puStack_98 = &UNK_004ae078;
    iVar3 = LZ4_compressBound(uVar10 & 0xffffffff);
    uStack_90 = (uint)((int)uVar2 < iVar3);
    puStack_98 = &UNK_004ae09b;
    uVar8 = func_0x004a84b0(uVar5,uVar6,extraout_RDX,&uStack_84,param_5 & 0xffffffff,0);
    uVar13 = uVar5;
    uVar14 = uVar6;
    param_2 = extraout_RDX;
  }
  uVar6 = *(ulong *)(in_FS_OFFSET + 0x28);
  if (uVar6 == uStack_80) {
    return uVar8;
  }
  puStack_98 = &UNK_004ae0be;
  uStack_c8._0_4_ = func_0x0099bd00();
  uStack_d0 = &UNK_004ae0e5;
  uStack_c0 = uVar10 & 0xffffffff;
  uStack_b8 = uVar13;
  uStack_b0 = uVar14;
  uStack_a8 = param_2;
  uStack_a0 = param_1;
  puStack_98 = (undefined *)&puStack_50;
  uStack_c8._4_4_ = uVar2;
  uVar4 = LZ4_compressBound(uVar6 & 0xffffffff);
  if ((uVar11 & 7) != 0 || uVar11 == 0) {
    return 0;
  }
  uStack_d0 = &UNK_004ae107;
  func_0x0099bdb0(uVar11,0,0x40030);
  uVar2 = uStack_c8._4_4_;
  *(undefined2 *)(uVar11 + 0x40024) = 9;
  uStack_c8 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_d0 = (undefined *)CONCAT44((int)uVar6,(int)uStack_d0);
  uVar5 = 0;
  if ((uVar11 & 7) == 0) {
    uStack_d0 = (undefined *)CONCAT44((int)uVar6,uVar4);
    if (*(char *)(uVar11 + 0x40027) == '\0') {
      uVar12 = (*(int *)(uVar11 + 0x40000) - *(int *)(uVar11 + 0x40008)) +
               *(int *)(uVar11 + 0x40018);
      *(undefined8 *)(uVar11 + 0x40028) = 0;
    }
    else {
      uVar12 = 0;
      func_0x0099bdb0(uVar11,0,0x40030);
    }
    uVar1 = 0xc;
    if (uVar2 < 0xc) {
      uVar1 = uVar2;
    }
    uVar9 = 9;
    if (0 < (int)uVar2) {
      uVar9 = (short)uVar1;
    }
    *(undefined2 *)(uVar11 + 0x40024) = uVar9;
    if (0x40000000 < uVar12) {
      uVar12 = 0;
      func_0x0099bdb0(uVar11,0,0x20000);
      func_0x0099bdb0(uVar11 + 0x20000,0xff,0x20000);
    }
    iVar3 = uVar12 + 0x10000;
    *(int *)(uVar11 + 0x40020) = iVar3;
    *(ulong *)(uVar11 + 0x40008) = uVar7;
    *(ulong *)(uVar11 + 0x40000) = uVar7;
    *(ulong *)(uVar11 + 0x40010) = uVar7;
    *(int *)(uVar11 + 0x40018) = iVar3;
    *(int *)(uVar11 + 0x4001c) = iVar3;
    iVar3 = LZ4_compressBound(uVar6 & 0xffffffff);
    uVar5 = func_0x004a84b0(uVar11,uVar7,extraout_RDX_00,(long)&uStack_d0 + 4,
                            (ulong)uStack_d0 & 0xffffffff,uVar2,(int)uStack_d0 < iVar3);
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == uStack_c8) {
    return uVar5;
  }
  func_0x0099bd00();
  if (*(char *)(uVar11 + 0x40027) == '\0') {
    *(int *)(uVar11 + 0x40018) =
         *(int *)(uVar11 + 0x40018) + (*(int *)(uVar11 + 0x40000) - *(int *)(uVar11 + 0x40008));
    *(undefined8 *)(uVar11 + 0x40028) = 0;
    *(undefined8 *)(uVar11 + 0x40000) = 0;
    *(undefined8 *)(uVar11 + 0x40008) = 0;
  }
  else if ((uVar11 & 7) == 0) {
    func_0x0099bdb0();
  }
  uVar6 = 0xc;
  if ((uint)uVar7 < 0xc) {
    uVar6 = uVar7 & 0xffffffff;
  }
  uVar9 = 9;
  if (0 < (int)(uint)uVar7) {
    uVar9 = (undefined2)uVar6;
  }
  *(undefined2 *)(uVar11 + 0x40024) = uVar9;
  return uVar6;
}


