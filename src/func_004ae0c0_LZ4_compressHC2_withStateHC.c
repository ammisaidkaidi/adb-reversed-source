// Function: LZ4_compressHC2_withStateHC
// Address: 004ae0c0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong LZ4_compressHC2_withStateHC
                (ulong param_1,ulong param_2,undefined8 param_3,undefined4 param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined2 uVar5;
  uint uVar6;
  int iVar7;
  long in_FS_OFFSET;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = &UNK_004ae0e5;
  uStack_38._4_4_ = param_5;
  uVar3 = LZ4_compressBound(param_4);
  if ((param_1 & 7) != 0 || param_1 == 0) {
    return 0;
  }
  uStack_40 = &UNK_004ae107;
  func_0x0099bdb0(param_1,0,0x40030);
  uVar1 = uStack_38._4_4_;
  *(undefined2 *)(param_1 + 0x40024) = 9;
  uStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_40 = (undefined *)CONCAT44(param_4,(int)uStack_40);
  uVar4 = 0;
  if ((param_1 & 7) == 0) {
    uStack_40 = (undefined *)CONCAT44(param_4,uVar3);
    if (*(char *)(param_1 + 0x40027) == '\0') {
      uVar6 = (*(int *)(param_1 + 0x40000) - *(int *)(param_1 + 0x40008)) +
              *(int *)(param_1 + 0x40018);
      *(undefined8 *)(param_1 + 0x40028) = 0;
    }
    else {
      uVar6 = 0;
      func_0x0099bdb0(param_1,0,0x40030);
    }
    uVar2 = 0xc;
    if (uVar1 < 0xc) {
      uVar2 = uVar1;
    }
    uVar5 = 9;
    if (0 < (int)uVar1) {
      uVar5 = (short)uVar2;
    }
    *(undefined2 *)(param_1 + 0x40024) = uVar5;
    if (0x40000000 < uVar6) {
      uVar6 = 0;
      func_0x0099bdb0(param_1,0,0x20000);
      func_0x0099bdb0(param_1 + 0x20000,0xff,0x20000);
    }
    iVar7 = uVar6 + 0x10000;
    *(int *)(param_1 + 0x40020) = iVar7;
    *(ulong *)(param_1 + 0x40008) = param_2;
    *(ulong *)(param_1 + 0x40000) = param_2;
    *(ulong *)(param_1 + 0x40010) = param_2;
    *(int *)(param_1 + 0x40018) = iVar7;
    *(int *)(param_1 + 0x4001c) = iVar7;
    iVar7 = LZ4_compressBound(param_4);
    uVar4 = func_0x004a84b0(param_1,param_2,param_3,(long)&uStack_40 + 4,
                            (ulong)uStack_40 & 0xffffffff,uVar1,(int)uStack_40 < iVar7);
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == uStack_38) {
    return uVar4;
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
  uVar4 = 0xc;
  if ((uint)param_2 < 0xc) {
    uVar4 = param_2 & 0xffffffff;
  }
  uVar5 = 9;
  if (0 < (int)(uint)param_2) {
    uVar5 = (undefined2)uVar4;
  }
  *(undefined2 *)(param_1 + 0x40024) = uVar5;
  return uVar4;
}


