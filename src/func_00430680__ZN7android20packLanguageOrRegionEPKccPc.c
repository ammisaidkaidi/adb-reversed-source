// Function: _ZN7android20packLanguageOrRegionEPKccPc
// Address: 00430680
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN7android20packLanguageOrRegionEPKccPc(byte *param_1,char param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  
  bVar3 = param_1[2];
  if ((bVar3 == 0x2d) || (bVar3 == 0)) {
    *param_3 = *param_1;
    bVar3 = param_1[1];
  }
  else {
    bVar1 = *param_1;
    bVar2 = param_1[1];
    *param_3 = (byte)(bVar2 - param_2) >> 3 & 0xf | (bVar3 - param_2) * '\x04' | 0x80;
    bVar3 = (bVar2 - param_2) * ' ' | bVar1 - param_2 & 0x7f;
  }
  param_3[1] = bVar3;
  return;
}


