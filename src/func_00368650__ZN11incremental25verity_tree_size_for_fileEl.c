// Function: _ZN11incremental25verity_tree_size_for_fileEl
// Address: 00368650
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long _ZN11incremental25verity_tree_size_for_fileEl(long param_1)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (0x1000 < param_1) {
    lVar2 = 0;
    uVar4 = (param_1 - 1U >> 0xc) + 1;
    do {
      uVar3 = uVar4 + 0x7f >> 7;
      lVar2 = lVar2 + uVar3;
      bVar1 = 0x80 < uVar4;
      uVar4 = uVar3;
    } while (bVar1);
    return lVar2 * 0x1000;
  }
  return 0;
}


