// Function: _ZNK7android15ResTable_config24isLocaleMoreSpecificThanERKS0_
// Address: 00430ea0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


int _ZNK7android15ResTable_config24isLocaleMoreSpecificThanERKS0_(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(param_2 + 8);
  if (iVar1 != 0 || iVar2 != 0) {
    if ((char)iVar1 != (char)iVar2) {
      if ((char)iVar1 == '\0') {
        return -1;
      }
      if ((char)iVar2 == '\0') {
        return 1;
      }
    }
    cVar4 = (char)((uint)iVar1 >> 0x10);
    cVar3 = (char)((uint)iVar2 >> 0x10);
    if (cVar4 != cVar3) {
      if (cVar4 == '\0') {
        return -1;
      }
      if (cVar3 == '\0') {
        return 1;
      }
    }
  }
  return ((uint)(*(char *)(param_1 + 0x35) != '\0') |
         (uint)((*(byte *)(param_1 + 0x34) ^ 1) & *(char *)(param_1 + 0x24) != '\0') * 2 +
         (uint)(*(char *)(param_1 + 0x28) != '\0') * 4) +
         (uint)(*(char *)(param_2 + 0x28) == '\0') * 4 +
         ((*(char *)(param_2 + 0x24) == '\0' | *(byte *)(param_2 + 0x34)) & 1) * 2 +
         (uint)(*(char *)(param_2 + 0x35) == '\0') + -7;
}


