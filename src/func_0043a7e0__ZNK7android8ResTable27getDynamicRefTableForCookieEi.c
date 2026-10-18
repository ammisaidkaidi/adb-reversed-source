// Function: _ZNK7android8ResTable27getDynamicRefTableForCookieEi
// Address: 0043a7e0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long _ZNK7android8ResTable27getDynamicRefTableForCookieEi(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 0xd0) == 0) {
    return 0;
  }
  lVar2 = 0;
  do {
    lVar1 = *(long *)(*(long *)(param_1 + 200) + lVar2 * 8);
    if (*(long *)(lVar1 + 0x28) != 0) {
      lVar3 = 0;
      do {
        if (*(int *)(*(long *)(*(long *)(*(long *)(lVar1 + 0x20) + lVar3 * 8) + 8) + 0x30) ==
            param_2) {
          return lVar1 + 0x148;
        }
        lVar3 = lVar3 + 1;
      } while (*(long *)(lVar1 + 0x28) != lVar3);
    }
    lVar2 = lVar2 + 1;
  } while (lVar2 != *(long *)(param_1 + 0xd0));
  return 0;
}


