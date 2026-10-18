// Function: _ZNK7android12ResXMLParser20getNamespacePrefixIDEv
// Address: 0042ebe0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined4 _ZNK7android12ResXMLParser20getNamespacePrefixIDEv(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if ((*(uint *)(param_1 + 8) & 0xfffffffe) == 0x100) {
    uVar1 = **(undefined4 **)(param_1 + 0x18);
  }
  return uVar1;
}


