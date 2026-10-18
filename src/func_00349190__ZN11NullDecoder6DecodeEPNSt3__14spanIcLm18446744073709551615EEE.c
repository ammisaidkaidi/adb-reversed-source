// Function: _ZN11NullDecoder6DecodeEPNSt3__14spanIcLm18446744073709551615EEE
// Address: 00349190
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


int _ZN11NullDecoder6DecodeEPNSt3__14spanIcLm18446744073709551615EEE(long param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)(param_1 + 0x40);
  uVar4 = *(ulong *)(param_1 + 0x48);
  lVar6 = lVar5;
  if (uVar4 != 0) {
    do {
      lVar6 = *(long *)(param_1 + 0x18);
      if (*(long *)(param_1 + 0x10) == lVar6) break;
      lVar2 = *(long *)(param_1 + 0x20) * 0x20;
      uVar3 = *(long *)(*(long *)(param_1 + 0x28) + 0x10 + lVar2) - lVar6;
      if (uVar4 <= uVar3) {
        uVar3 = uVar4;
      }
      func_0x0099bda0(lVar5,lVar6 + *(long *)(*(long *)(param_1 + 0x28) + lVar2),uVar3);
      lVar5 = lVar5 + uVar3;
      _ZN8IOVector10drop_frontEm(param_1 + 0x10,uVar3);
      uVar4 = uVar4 - uVar3;
    } while (uVar4 != 0);
    lVar6 = *(long *)(param_1 + 0x40);
  }
  *param_2 = lVar6;
  param_2[1] = lVar5 - lVar6;
  iVar1 = 3;
  if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) {
    iVar1 = 2 - (uint)*(byte *)(param_1 + 8);
  }
  return iVar1;
}


