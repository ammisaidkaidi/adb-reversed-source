// Function: LZ4_compressHC_continue
// Address: 004ae1d0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8
LZ4_compressHC_continue(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 extraout_RDX;
  undefined8 uVar6;
  ulong uVar7;
  long in_FS_OFFSET;
  undefined4 uStack_7c;
  long lStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  uint uStack_3c;
  ulong uStack_38;
  
  uStack_38 = *(ulong *)(in_FS_OFFSET + 0x28);
  puStack_50 = &UNK_004ae200;
  uVar1 = LZ4_compressBound(param_4);
  puStack_50 = &UNK_004ae20d;
  uStack_3c = param_4;
  iVar2 = LZ4_compressBound(param_4);
  uVar7 = (ulong)uVar1;
  puStack_50 = &UNK_004ae22c;
  uVar4 = param_2;
  uVar6 = param_1;
  uVar3 = func_0x004ad780(param_1,param_2,param_3,&uStack_3c,uVar7,(int)uVar1 < iVar2);
  uVar5 = *(ulong *)(in_FS_OFFSET + 0x28);
  if (uVar5 == uStack_38) {
    return uVar3;
  }
  puStack_50 = &UNK_004ae24f;
  func_0x0099bd00();
  lStack_78 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_7c = (undefined4)uVar5;
  uStack_70 = (ulong)param_4;
  uStack_68 = param_1;
  uStack_60 = param_3;
  uStack_58 = param_2;
  puStack_50 = &stack0xfffffffffffffff8;
  iVar2 = LZ4_compressBound(uVar5 & 0xffffffff);
  uVar4 = func_0x004ad780(uVar6,uVar4,extraout_RDX,&uStack_7c,uVar7 & 0xffffffff,(int)uVar7 < iVar2)
  ;
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_78) {
    return uVar4;
  }
  func_0x0099bd00();
  return 0x40038;
}


