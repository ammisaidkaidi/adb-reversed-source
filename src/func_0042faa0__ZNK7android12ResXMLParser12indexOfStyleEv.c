// Function: _ZNK7android12ResXMLParser12indexOfStyleEv
// Address: 0042faa0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long _ZNK7android12ResXMLParser12indexOfStyleEv(long param_1)

{
  ulong uVar1;
  
  if ((*(int *)(param_1 + 8) == 0x102) &&
     (uVar1 = (ulong)*(ushort *)(*(long *)(param_1 + 0x18) + 0x12), uVar1 != 0)) {
    return uVar1 - 1;
  }
  return -2;
}


