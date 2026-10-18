// Function: _ZNK7android8ResTable18getBasePackageNameEm
// Address: 0043a720
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 _ZNK7android8ResTable18getBasePackageNameEm(undefined8 param_1,long param_2,long param_3)

{
  if (*(int *)(param_2 + 0x50) == 0) {
    _ZN7android8String16C2ERKS0_(param_1,*(long *)(*(long *)(param_2 + 200) + param_3 * 8) + 8);
  }
  else {
    _ZN7android8String16C2Ev(param_1);
  }
  return param_1;
}


