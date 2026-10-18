// Function: _ZN7android8ResTable5ThemeD1Ev
// Address: 00432ea0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN7android8ResTable5ThemeD1Ev(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = 0;
  do {
    lVar1 = *(long *)(param_1 + 8 + lVar3 * 8);
    if (lVar1 != 0) {
      lVar2 = 8;
      do {
        if (*(long *)(lVar1 + lVar2) != 0) {
          func_0x0099c1f0();
        }
        lVar2 = lVar2 + 0x10;
      } while (lVar2 != 0x1008);
      func_0x0099c1f0(lVar1);
    }
    lVar3 = lVar3 + 1;
  } while (lVar3 != 0xff);
  return;
}


