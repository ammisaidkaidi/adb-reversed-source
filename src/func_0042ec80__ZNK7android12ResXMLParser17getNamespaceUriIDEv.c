// Function: _ZNK7android12ResXMLParser17getNamespaceUriIDEv
// Address: 0042ec80
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined4 _ZNK7android12ResXMLParser17getNamespaceUriIDEv(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if ((*(uint *)(param_1 + 8) & 0xfffffffe) == 0x100) {
    uVar1 = *(undefined4 *)(*(long *)(param_1 + 0x18) + 4);
  }
  return uVar1;
}


