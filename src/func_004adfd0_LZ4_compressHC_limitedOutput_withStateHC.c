// Function: LZ4_compressHC_limitedOutput_withStateHC
// Address: 004adfd0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong LZ4_compressHC_limitedOutput_withStateHC
                (ulong param_1,ulong param_2,undefined8 param_3,uint param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined2 uVar6;
  ulong uVar7;
  undefined8 extraout_RDX;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  ulong unaff_R12;
  ulong unaff_R13;
  undefined8 unaff_R14;
  ulong unaff_R15;
  long in_FS_OFFSET;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  undefined *puStack_50;
  uint uStack_48;
  uint uStack_3c;
  ulong uStack_38;
  
  uStack_38 = *(ulong *)(in_FS_OFFSET + 0x28);
  uVar5 = 0;
  uVar8 = param_2;
  uVar9 = param_1;
  uStack_70 = unaff_R12;
  uStack_68 = unaff_R13;
  uStack_60 = unaff_R14;
  if ((param_1 & 7) == 0 && param_1 != 0) {
    unaff_R15 = (ulong)param_5;
    puStack_50 = &UNK_004ae021;
    func_0x0099bdb0(param_1,0,0x40030);
    *(undefined8 *)(param_1 + 0x40028) = 0;
    *(undefined2 *)(param_1 + 0x40024) = 9;
    *(undefined4 *)(param_1 + 0x40020) = 0x10000;
    *(ulong *)(param_1 + 0x40008) = param_2;
    *(ulong *)(param_1 + 0x40000) = param_2;
    *(ulong *)(param_1 + 0x40010) = param_2;
    *(undefined8 *)(param_1 + 0x40018) = 0x1000000010000;
    puStack_50 = &UNK_004ae078;
    uStack_3c = param_4;
    iVar3 = LZ4_compressBound(param_4);
    uStack_48 = (uint)((int)param_5 < iVar3);
    puStack_50 = &UNK_004ae09b;
    uVar5 = func_0x004a84b0(param_1,param_2,param_3,&uStack_3c,param_5,0);
    uStack_70 = param_1;
    uStack_68 = param_2;
    uStack_60 = param_3;
  }
  uVar7 = *(ulong *)(in_FS_OFFSET + 0x28);
  if (uVar7 == uStack_38) {
    return uVar5;
  }
  puStack_50 = &UNK_004ae0be;
  uStack_80._0_4_ = func_0x0099bd00();
  uStack_88 = &UNK_004ae0e5;
  uStack_78 = (ulong)param_4;
  uStack_58 = unaff_R15;
  puStack_50 = &stack0xfffffffffffffff8;
  uStack_80._4_4_ = param_5;
  uVar4 = LZ4_compressBound(uVar7 & 0xffffffff);
  if ((uVar9 & 7) != 0 || uVar9 == 0) {
    return 0;
  }
  uStack_88 = &UNK_004ae107;
  func_0x0099bdb0(uVar9,0,0x40030);
  uVar1 = uStack_80._4_4_;
  *(undefined2 *)(uVar9 + 0x40024) = 9;
  uStack_80 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_88 = (undefined *)CONCAT44((int)uVar7,(int)uStack_88);
  uVar5 = 0;
  if ((uVar9 & 7) == 0) {
    uStack_88 = (undefined *)CONCAT44((int)uVar7,uVar4);
    if (*(char *)(uVar9 + 0x40027) == '\0') {
      uVar10 = (*(int *)(uVar9 + 0x40000) - *(int *)(uVar9 + 0x40008)) + *(int *)(uVar9 + 0x40018);
      *(undefined8 *)(uVar9 + 0x40028) = 0;
    }
    else {
      uVar10 = 0;
      func_0x0099bdb0(uVar9,0,0x40030);
    }
    uVar2 = 0xc;
    if (uVar1 < 0xc) {
      uVar2 = uVar1;
    }
    uVar6 = 9;
    if (0 < (int)uVar1) {
      uVar6 = (short)uVar2;
    }
    *(undefined2 *)(uVar9 + 0x40024) = uVar6;
    if (0x40000000 < uVar10) {
      uVar10 = 0;
      func_0x0099bdb0(uVar9,0,0x20000);
      func_0x0099bdb0(uVar9 + 0x20000,0xff,0x20000);
    }
    iVar3 = uVar10 + 0x10000;
    *(int *)(uVar9 + 0x40020) = iVar3;
    *(ulong *)(uVar9 + 0x40008) = uVar8;
    *(ulong *)(uVar9 + 0x40000) = uVar8;
    *(ulong *)(uVar9 + 0x40010) = uVar8;
    *(int *)(uVar9 + 0x40018) = iVar3;
    *(int *)(uVar9 + 0x4001c) = iVar3;
    iVar3 = LZ4_compressBound(uVar7 & 0xffffffff);
    uVar5 = func_0x004a84b0(uVar9,uVar8,extraout_RDX,(long)&uStack_88 + 4,
                            (ulong)uStack_88 & 0xffffffff,uVar1,(int)uStack_88 < iVar3);
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == uStack_80) {
    return uVar5;
  }
  func_0x0099bd00();
  if (*(char *)(uVar9 + 0x40027) == '\0') {
    *(int *)(uVar9 + 0x40018) =
         *(int *)(uVar9 + 0x40018) + (*(int *)(uVar9 + 0x40000) - *(int *)(uVar9 + 0x40008));
    *(undefined8 *)(uVar9 + 0x40028) = 0;
    *(undefined8 *)(uVar9 + 0x40000) = 0;
    *(undefined8 *)(uVar9 + 0x40008) = 0;
  }
  else if ((uVar9 & 7) == 0) {
    func_0x0099bdb0();
  }
  uVar5 = 0xc;
  if ((uint)uVar8 < 0xc) {
    uVar5 = uVar8 & 0xffffffff;
  }
  uVar6 = 9;
  if (0 < (int)(uint)uVar8) {
    uVar6 = (undefined2)uVar5;
  }
  *(undefined2 *)(uVar9 + 0x40024) = uVar6;
  return uVar5;
}


