// Function: _ZN7android28localeDataIsCloseToUsEnglishEPKc
// Address: 00440f60
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 _ZN7android28localeDataIsCloseToUsEnglishEPKc(ushort *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (ushort)(*param_1 << 8 | *param_1 >> 8) | 0x656e0000;
  do {
    if (uVar2 == 0x656e0000) {
      return 1;
    }
    if (uVar2 == 0x656e8400) {
      return 0;
    }
    if ((short)uVar2 == 0) {
      return 0;
    }
    uVar1 = _ZN7android25findParentLocalePackedKeyEPKcj(&UNK_001fee3c,uVar2);
    uVar2 = uVar2 & 0xffff0000;
    if (uVar1 != 0) {
      uVar2 = uVar1;
    }
  } while (uVar2 != 0);
  return 0;
}


