// Function: _ZNK7android12ResXMLParser12getCommentIDEv
// Address: 0042ea70
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined4 _ZNK7android12ResXMLParser12getCommentIDEv(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    return *(undefined4 *)(*(long *)(param_1 + 0x10) + 0xc);
  }
  return 0xffffffff;
}


