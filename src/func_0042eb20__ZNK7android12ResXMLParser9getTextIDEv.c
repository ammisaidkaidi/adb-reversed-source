// Function: _ZNK7android12ResXMLParser9getTextIDEv
// Address: 0042eb20
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined4 _ZNK7android12ResXMLParser9getTextIDEv(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if (*(int *)(param_1 + 8) == 0x104) {
    uVar1 = **(undefined4 **)(param_1 + 0x18);
  }
  return uVar1;
}


