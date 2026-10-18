// Function: _ZNK7android13ResStringPool4sizeEv
// Address: 0042e820
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined4 _ZNK7android13ResStringPool4sizeEv(long param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    return 0;
  }
  return *(undefined4 *)(*(long *)(param_1 + 0x18) + 8);
}


