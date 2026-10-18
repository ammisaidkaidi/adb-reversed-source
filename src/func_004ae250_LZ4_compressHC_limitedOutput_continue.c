// Function: LZ4_compressHC_limitedOutput_continue
// Address: 004ae250
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8
LZ4_compressHC_limitedOutput_continue
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined4 uStack_34;
  long lStack_30;
  
  lStack_30 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_34 = param_4;
  iVar1 = LZ4_compressBound(param_4);
  uVar2 = func_0x004ad780(param_1,param_2,param_3,&uStack_34,param_5,param_5 < iVar1);
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_30) {
    return uVar2;
  }
  func_0x0099bd00();
  return 0x40038;
}


