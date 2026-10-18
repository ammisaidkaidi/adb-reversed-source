// Function: _ZNK7android8ResTable16getBasePackageIdEm
// Address: 0043a760
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined4 _ZNK7android8ResTable16getBasePackageIdEm(long param_1,long param_2)

{
  if (*(int *)(param_1 + 0x50) != 0) {
    return 0;
  }
  return *(undefined4 *)(*(long *)(*(long *)(param_1 + 200) + param_2 * 8) + 0x10);
}


