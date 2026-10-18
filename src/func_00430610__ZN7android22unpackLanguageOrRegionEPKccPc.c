// Function: _ZN7android22unpackLanguageOrRegionEPKccPc
// Address: 00430610
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 _ZN7android22unpackLanguageOrRegionEPKccPc(byte *param_1,char param_2,char *param_3)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = *param_1;
  if ((char)bVar1 < '\0') {
    bVar2 = param_1[1];
    *param_3 = (bVar2 & 0x1f) + param_2;
    param_3[1] = (bVar2 >> 5) + param_2 + (bVar1 * '\b' & 0x18);
    param_3[2] = (bVar1 >> 2 & 0x1f) + param_2;
    param_3[3] = '\0';
    return 3;
  }
  if (bVar1 != 0) {
    *(undefined2 *)param_3 = *(undefined2 *)param_1;
    param_3[2] = '\0';
    param_3[3] = '\0';
    return 2;
  }
  param_3[0] = '\0';
  param_3[1] = '\0';
  param_3[2] = '\0';
  param_3[3] = '\0';
  return 0;
}


