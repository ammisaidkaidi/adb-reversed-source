// Function: _ZNK7android12ResXMLParser16getElementNameIDEv
// Address: 0042edc0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined4 _ZNK7android12ResXMLParser16getElementNameIDEv(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if ((*(uint *)(param_1 + 8) & 0xfffffffe) == 0x102) {
    uVar1 = *(undefined4 *)(*(long *)(param_1 + 0x18) + 4);
  }
  return uVar1;
}


