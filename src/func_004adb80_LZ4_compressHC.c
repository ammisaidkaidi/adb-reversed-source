// Function: LZ4_compressHC
// Address: 004adb80
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong LZ4_compressHC(ulong param_1,ulong param_2,uint param_3,uint *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined4 *puVar8;
  ulong extraout_RDX;
  ulong extraout_RDX_00;
  ulong uVar9;
  ulong uVar10;
  ulong unaff_R14;
  ulong uVar11;
  long in_FS_OFFSET;
  undefined4 uStack_94;
  long lStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  undefined *puStack_60;
  uint uStack_58;
  ulong uStack_48;
  uint uStack_3c;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  puStack_60 = &UNK_004adbae;
  uVar7 = param_2;
  uVar1 = LZ4_compressBound(param_3);
  uVar9 = 0x40038;
  puStack_60 = &UNK_004adbbb;
  uVar5 = func_0x0099c1e0();
  if (uVar5 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    uStack_48 = param_2;
    if ((uVar5 & 7) == 0) {
      puStack_60 = &UNK_004adbe6;
      func_0x0099bdb0(uVar5,0,0x40028);
      *(undefined8 *)(uVar5 + 0x40028) = 0;
      *(undefined2 *)(uVar5 + 0x40024) = 9;
      *(undefined4 *)(uVar5 + 0x40020) = 0x10000;
      *(ulong *)(uVar5 + 0x40008) = param_1;
      *(ulong *)(uVar5 + 0x40000) = param_1;
      *(ulong *)(uVar5 + 0x40010) = param_1;
      *(undefined8 *)(uVar5 + 0x40018) = 0x1000000010000;
      puStack_60 = &UNK_004adc38;
      uStack_3c = param_3;
      iVar2 = LZ4_compressBound(param_3);
      uStack_58 = (uint)((int)uVar1 < iVar2);
      param_4 = &uStack_3c;
      puStack_60 = &UNK_004adc5c;
      uVar7 = param_1;
      uVar3 = func_0x004a84b0(uVar5,param_1,uStack_48,param_4,uVar1,0);
      uVar6 = (ulong)uVar3;
    }
    puStack_60 = &UNK_004adc66;
    uVar9 = uVar5;
    func_0x0099c1f0();
    unaff_R14 = uVar5;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return uVar6;
  }
  puStack_60 = &UNK_004adc8f;
  func_0x0099bd00();
  lStack_90 = *(long *)(in_FS_OFFSET + 0x28);
  uVar10 = 0x40038;
  uVar5 = uVar7;
  iVar2 = (int)param_4;
  uStack_88 = uVar6;
  uStack_80 = (ulong)uVar1;
  uStack_78 = (ulong)param_3;
  uStack_70 = unaff_R14;
  uStack_68 = param_1;
  puStack_60 = &stack0xfffffffffffffff8;
  uVar6 = func_0x0099c1e0(0x40038);
  if (uVar6 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = 0;
    if ((uVar6 & 7) == 0) {
      func_0x0099bdb0(uVar6,0,0x40028);
      uStack_94 = (undefined4)extraout_RDX;
      *(undefined8 *)(uVar6 + 0x40028) = 0;
      *(undefined2 *)(uVar6 + 0x40024) = 9;
      *(undefined4 *)(uVar6 + 0x40020) = 0x10000;
      *(ulong *)(uVar6 + 0x40008) = uVar9;
      *(ulong *)(uVar6 + 0x40000) = uVar9;
      *(ulong *)(uVar6 + 0x40010) = uVar9;
      *(undefined8 *)(uVar6 + 0x40018) = 0x1000000010000;
      iVar2 = LZ4_compressBound(extraout_RDX & 0xffffffff);
      puVar8 = &uStack_94;
      uVar1 = func_0x004a84b0(uVar6,uVar9,uVar7,puVar8,(ulong)param_4 & 0xffffffff,0,
                              (int)param_4 < iVar2);
      iVar2 = (int)puVar8;
      uVar11 = (ulong)uVar1;
      uVar5 = uVar9;
    }
    func_0x0099c1f0(uVar6);
    uVar10 = uVar6;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_90) {
    return uVar11;
  }
  func_0x0099bd00();
  uVar4 = LZ4_compressBound(extraout_RDX_00 & 0xffffffff);
  uVar7 = func_0x0099c1e0(0x40038);
  if (uVar7 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    if ((uVar7 & 7) == 0) {
      func_0x0099bdb0(uVar7,0,0x40030);
      *(undefined2 *)(uVar7 + 0x40024) = 9;
      uVar1 = LZ4_compress_HC_extStateHC_fastReset
                        (uVar7,uVar10,uVar5,extraout_RDX_00 & 0xffffffff,uVar4,iVar2);
    }
    func_0x0099c1f0(uVar7);
  }
  return (ulong)uVar1;
}


