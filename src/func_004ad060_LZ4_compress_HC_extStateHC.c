// Function: LZ4_compress_HC_extStateHC
// Address: 004ad060
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong LZ4_compress_HC_extStateHC
                (ulong param_1,ulong param_2,undefined8 param_3,undefined4 param_4,
                undefined4 param_5,uint param_6)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  undefined2 uVar4;
  uint uVar5;
  int iVar6;
  long in_FS_OFFSET;
  undefined8 uStack_40;
  long lStack_38;
  
  if ((param_1 & 7) != 0 || param_1 == 0) {
    return 0;
  }
  uStack_40 = &UNK_004ad09f;
  lStack_38 = param_3;
  func_0x0099bdb0(param_1,0,0x40030);
  lVar1 = lStack_38;
  *(undefined2 *)(param_1 + 0x40024) = 9;
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_40 = (undefined *)CONCAT44(param_4,(int)uStack_40);
  uVar3 = 0;
  if ((param_1 & 7) == 0) {
    uStack_40 = (undefined *)CONCAT44(param_4,param_5);
    if (*(char *)(param_1 + 0x40027) == '\0') {
      uVar5 = (*(int *)(param_1 + 0x40000) - *(int *)(param_1 + 0x40008)) +
              *(int *)(param_1 + 0x40018);
      *(undefined8 *)(param_1 + 0x40028) = 0;
    }
    else {
      uVar5 = 0;
      func_0x0099bdb0(param_1,0,0x40030);
    }
    uVar2 = 0xc;
    if (param_6 < 0xc) {
      uVar2 = param_6;
    }
    uVar4 = 9;
    if (0 < (int)param_6) {
      uVar4 = (short)uVar2;
    }
    *(undefined2 *)(param_1 + 0x40024) = uVar4;
    if (0x40000000 < uVar5) {
      uVar5 = 0;
      func_0x0099bdb0(param_1,0,0x20000);
      func_0x0099bdb0(param_1 + 0x20000,0xff,0x20000);
    }
    iVar6 = uVar5 + 0x10000;
    *(int *)(param_1 + 0x40020) = iVar6;
    *(ulong *)(param_1 + 0x40008) = param_2;
    *(ulong *)(param_1 + 0x40000) = param_2;
    *(ulong *)(param_1 + 0x40010) = param_2;
    *(int *)(param_1 + 0x40018) = iVar6;
    *(int *)(param_1 + 0x4001c) = iVar6;
    iVar6 = LZ4_compressBound(param_4);
    uVar3 = func_0x004a84b0(param_1,param_2,lVar1,(long)&uStack_40 + 4,(ulong)uStack_40 & 0xffffffff
                            ,param_6,(int)uStack_40 < iVar6);
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return uVar3;
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
  uVar3 = 0xc;
  if ((uint)param_2 < 0xc) {
    uVar3 = param_2 & 0xffffffff;
  }
  uVar4 = 9;
  if (0 < (int)(uint)param_2) {
    uVar4 = (undefined2)uVar3;
  }
  *(undefined2 *)(param_1 + 0x40024) = uVar4;
  return uVar3;
}


