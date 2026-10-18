// Function: LZ4_compressHC_limitedOutput
// Address: 004adc90
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined4
LZ4_compressHC_limitedOutput(undefined8 param_1,undefined8 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined4 *puVar4;
  ulong extraout_RDX;
  undefined8 uVar5;
  ulong uVar6;
  undefined4 uVar7;
  long in_FS_OFFSET;
  undefined4 uStack_3c;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = 0x40038;
  uVar5 = param_2;
  iVar1 = param_4;
  uVar3 = func_0x0099c1e0(0x40038);
  if (uVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    if ((uVar3 & 7) == 0) {
      func_0x0099bdb0(uVar3,0,0x40028);
      *(undefined8 *)(uVar3 + 0x40028) = 0;
      *(undefined2 *)(uVar3 + 0x40024) = 9;
      *(undefined4 *)(uVar3 + 0x40020) = 0x10000;
      *(undefined8 *)(uVar3 + 0x40008) = param_1;
      *(undefined8 *)(uVar3 + 0x40000) = param_1;
      *(undefined8 *)(uVar3 + 0x40010) = param_1;
      *(undefined8 *)(uVar3 + 0x40018) = 0x1000000010000;
      uStack_3c = param_3;
      iVar1 = LZ4_compressBound(param_3);
      puVar4 = &uStack_3c;
      uVar2 = func_0x004a84b0(uVar3,param_1,param_2,puVar4,param_4,0,param_4 < iVar1);
      iVar1 = (int)puVar4;
      uVar5 = param_1;
    }
    func_0x0099c1f0(uVar3);
    uVar6 = uVar3;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return uVar2;
  }
  func_0x0099bd00();
  uVar2 = LZ4_compressBound(extraout_RDX & 0xffffffff);
  uVar3 = func_0x0099c1e0(0x40038);
  if (uVar3 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0;
    if ((uVar3 & 7) == 0) {
      func_0x0099bdb0(uVar3,0,0x40030);
      *(undefined2 *)(uVar3 + 0x40024) = 9;
      uVar7 = LZ4_compress_HC_extStateHC_fastReset
                        (uVar3,uVar6,uVar5,extraout_RDX & 0xffffffff,uVar2,iVar1);
    }
    func_0x0099c1f0(uVar3);
  }
  return uVar7;
}


