// Function: _ZNK7android12ResXMLParser12getTextValueEPNS_9Res_valueE
// Address: 0042ebb0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8
_ZNK7android12ResXMLParser12getTextValueEPNS_9Res_valueE(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0xffffffff80000001;
  if (*(int *)(param_1 + 8) == 0x104) {
    *param_2 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 4);
    uVar1 = 8;
  }
  return uVar1;
}


