// Function: _ZNK7android12ResXMLParser23getAttributeNamespaceIDEm
// Address: 0042eed0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined4 _ZNK7android12ResXMLParser23getAttributeNamespaceIDEm(long param_1,ulong param_2)

{
  long lVar1;
  undefined4 uVar2;
  
  uVar2 = 0xfffffffe;
  if ((*(int *)(param_1 + 8) == 0x102) &&
     (lVar1 = *(long *)(param_1 + 0x18), param_2 < *(ushort *)(lVar1 + 0xc))) {
    uVar2 = *(undefined4 *)
             (param_2 * *(ushort *)(lVar1 + 10) + (ulong)*(ushort *)(lVar1 + 8) + lVar1);
  }
  return uVar2;
}


