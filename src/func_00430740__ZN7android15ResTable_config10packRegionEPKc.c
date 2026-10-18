// Function: _ZN7android15ResTable_config10packRegionEPKc
// Address: 00430740
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN7android15ResTable_config10packRegionEPKc(long param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  
  bVar3 = param_2[2];
  if ((bVar3 == 0x2d) || (bVar3 == 0)) {
    *(char *)(param_1 + 10) = *param_2;
    bVar3 = param_2[1];
  }
  else {
    cVar1 = *param_2;
    cVar2 = param_2[1];
    *(byte *)(param_1 + 10) = ((bVar3 & 0x1f) << 2 | (byte)(cVar2 + 0x50U) >> 3 & 0xf) ^ 0xc0;
    bVar3 = cVar2 << 5 | cVar1 + 0x50U & 0x7f;
  }
  *(byte *)(param_1 + 0xb) = bVar3;
  return;
}


