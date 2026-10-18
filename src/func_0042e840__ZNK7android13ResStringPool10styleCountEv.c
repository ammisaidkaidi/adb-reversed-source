// Function: _ZNK7android13ResStringPool10styleCountEv
// Address: 0042e840
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined4 _ZNK7android13ResStringPool10styleCountEv(long param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    return 0;
  }
  return *(undefined4 *)(*(long *)(param_1 + 0x18) + 0xc);
}


