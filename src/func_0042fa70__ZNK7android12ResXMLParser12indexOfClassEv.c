// Function: _ZNK7android12ResXMLParser12indexOfClassEv
// Address: 0042fa70
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long _ZNK7android12ResXMLParser12indexOfClassEv(long param_1)

{
  ulong uVar1;
  
  if ((*(int *)(param_1 + 8) == 0x102) &&
     (uVar1 = (ulong)*(ushort *)(*(long *)(param_1 + 0x18) + 0x10), uVar1 != 0)) {
    return uVar1 - 1;
  }
  return -2;
}


