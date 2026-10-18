// Function: _ZNK7android8ResTable16isPackageDynamicEh
// Address: 0043b3e0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined1 _ZNK7android8ResTable16isPackageDynamicEh(long param_1,byte param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  
  if (*(int *)(param_1 + 0x50) != 0) {
    return 0;
  }
  if (param_2 == 0) {
    puVar4 = &UNK_00178d84;
    uVar3 = 0;
  }
  else {
    uVar3 = (ulong)param_2;
    uVar2 = (ulong)*(byte *)(param_1 + 0xe8 + uVar3);
    if (uVar2 == 0) {
      puVar4 = &UNK_001726be;
    }
    else {
      lVar1 = *(long *)(*(long *)(param_1 + 200) + -8 + uVar2 * 8);
      if (lVar1 != 0) {
        return *(undefined1 *)(lVar1 + 0x299);
      }
      puVar4 = &UNK_00170963;
    }
  }
  __android_log_print(5,&UNK_0015b3df,puVar4,uVar3);
  return 0;
}


