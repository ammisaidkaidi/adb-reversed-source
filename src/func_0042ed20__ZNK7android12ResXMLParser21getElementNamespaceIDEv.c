// Function: _ZNK7android12ResXMLParser21getElementNamespaceIDEv
// Address: 0042ed20
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined4 _ZNK7android12ResXMLParser21getElementNamespaceIDEv(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if ((*(uint *)(param_1 + 8) & 0xfffffffe) == 0x102) {
    uVar1 = **(undefined4 **)(param_1 + 0x18);
  }
  return uVar1;
}


