// Function: LZ4_saveDictHC
// Address: 004adac0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


uint LZ4_saveDictHC(long param_1,long param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  
  uVar1 = (int)*(long *)(param_1 + 0x40000) - *(int *)(param_1 + 0x40008);
  uVar2 = 0x10000;
  if (param_3 < 0x10000) {
    uVar2 = param_3;
  }
  uVar4 = 0;
  if (3 < (int)param_3) {
    uVar4 = uVar2;
  }
  if ((int)uVar1 <= (int)uVar4) {
    uVar4 = uVar1;
  }
  if (0 < (int)uVar4) {
    func_0x0099bd90(param_2,*(long *)(param_1 + 0x40000) - (ulong)uVar4);
    uVar1 = *(int *)(param_1 + 0x40000) - *(int *)(param_1 + 0x40008);
  }
  lVar3 = (int)uVar4 + param_2;
  if (param_2 == 0) {
    lVar3 = 0;
  }
  *(long *)(param_1 + 0x40000) = lVar3;
  *(long *)(param_1 + 0x40008) = param_2;
  uVar1 = (*(int *)(param_1 + 0x40018) - uVar4) + uVar1;
  *(uint *)(param_1 + 0x40018) = uVar1;
  *(uint *)(param_1 + 0x4001c) = uVar1;
  *(long *)(param_1 + 0x40010) = param_2;
  if (*(uint *)(param_1 + 0x40020) < uVar1) {
    *(uint *)(param_1 + 0x40020) = uVar1;
  }
  return uVar4;
}


