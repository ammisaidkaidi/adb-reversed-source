// Function: _ZNK7android12ResXMLParser20getAttributeDataTypeEm
// Address: 0042f2f0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


char _ZNK7android12ResXMLParser20getAttributeDataTypeEm(long param_1,ulong param_2)

{
  char cVar1;
  long lVar2;
  char cVar3;
  
  cVar3 = '\0';
  if ((*(int *)(param_1 + 8) == 0x102) &&
     (lVar2 = *(long *)(param_1 + 0x18), param_2 < *(ushort *)(lVar2 + 0xc))) {
    cVar1 = *(char *)(param_2 * *(ushort *)(lVar2 + 10) + 0xf +
                     (ulong)*(ushort *)(lVar2 + 8) + lVar2);
    cVar3 = '\x01';
    if (cVar1 != '\a') {
      cVar3 = cVar1;
    }
  }
  return cVar3;
}


