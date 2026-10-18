// Function: _ZNK7android12ResXMLParser13getLineNumberEv
// Address: 0042eb00
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined4 _ZNK7android12ResXMLParser13getLineNumberEv(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    return *(undefined4 *)(*(long *)(param_1 + 0x10) + 8);
  }
  return 0xffffffff;
}


