// Function: _ZNK7android8ResTable23getLastTypeIdForPackageEm
// Address: 0043a780
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined1 _ZNK7android8ResTable23getLastTypeIdForPackageEm(long param_1,long param_2)

{
  if (*(int *)(param_1 + 0x50) != 0) {
    return 0;
  }
  return *(undefined1 *)(*(long *)(*(long *)(param_1 + 200) + param_2 * 8) + 0xc0);
}


