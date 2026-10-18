// Function: LZ4_compress_HC_extStateHC_fastReset
// Address: 004a82e0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong LZ4_compress_HC_extStateHC_fastReset
                (ulong param_1,ulong param_2,undefined8 param_3,undefined4 param_4,int param_5,
                uint param_6)

{
  uint uVar1;
  ulong uVar2;
  undefined2 uVar3;
  uint uVar4;
  int iVar5;
  long in_FS_OFFSET;
  undefined4 uStack_3c;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = 0;
  uStack_3c = param_4;
  if ((param_1 & 7) == 0) {
    if (*(char *)(param_1 + 0x40027) == '\0') {
      uVar4 = (*(int *)(param_1 + 0x40000) - *(int *)(param_1 + 0x40008)) +
              *(int *)(param_1 + 0x40018);
      *(undefined8 *)(param_1 + 0x40028) = 0;
    }
    else {
      uVar4 = 0;
      func_0x0099bdb0(param_1,0,0x40030);
    }
    uVar1 = 0xc;
    if (param_6 < 0xc) {
      uVar1 = param_6;
    }
    uVar3 = 9;
    if (0 < (int)param_6) {
      uVar3 = (short)uVar1;
    }
    *(undefined2 *)(param_1 + 0x40024) = uVar3;
    if (0x40000000 < uVar4) {
      uVar4 = 0;
      func_0x0099bdb0(param_1,0,0x20000);
      func_0x0099bdb0(param_1 + 0x20000,0xff,0x20000);
    }
    iVar5 = uVar4 + 0x10000;
    *(int *)(param_1 + 0x40020) = iVar5;
    *(ulong *)(param_1 + 0x40008) = param_2;
    *(ulong *)(param_1 + 0x40000) = param_2;
    *(ulong *)(param_1 + 0x40010) = param_2;
    *(int *)(param_1 + 0x40018) = iVar5;
    *(int *)(param_1 + 0x4001c) = iVar5;
    iVar5 = LZ4_compressBound(param_4);
    uVar2 = func_0x004a84b0(param_1,param_2,param_3,&uStack_3c,param_5,param_6,param_5 < iVar5);
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return uVar2;
  }
  func_0x0099bd00();
  if (*(char *)(param_1 + 0x40027) == '\0') {
    *(int *)(param_1 + 0x40018) =
         *(int *)(param_1 + 0x40018) + (*(int *)(param_1 + 0x40000) - *(int *)(param_1 + 0x40008));
    *(undefined8 *)(param_1 + 0x40028) = 0;
    *(undefined8 *)(param_1 + 0x40000) = 0;
    *(undefined8 *)(param_1 + 0x40008) = 0;
  }
  else if ((param_1 & 7) == 0) {
    func_0x0099bdb0();
  }
  uVar2 = 0xc;
  if ((uint)param_2 < 0xc) {
    uVar2 = param_2 & 0xffffffff;
  }
  uVar3 = 9;
  if (0 < (int)(uint)param_2) {
    uVar3 = (undefined2)uVar2;
  }
  *(undefined2 *)(param_1 + 0x40024) = uVar3;
  return uVar2;
}


