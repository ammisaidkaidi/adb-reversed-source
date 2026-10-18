// Function: _ZNK7android15ResTable_config12unpackRegionEPc
// Address: 00430800
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 _ZNK7android15ResTable_config12unpackRegionEPc(long param_1,char *param_2)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = *(byte *)(param_1 + 10);
  if ((char)bVar1 < '\0') {
    bVar2 = *(byte *)(param_1 + 0xb);
    *param_2 = (bVar2 & 0x1f) + 0x30;
    param_2[1] = (bVar2 >> 5 | (bVar1 & 3) << 3) + 0x30;
    param_2[2] = (bVar1 >> 2 & 0x1f) + 0x30;
    param_2[3] = '\0';
    return 3;
  }
  if (bVar1 != 0) {
    *(undefined2 *)param_2 = *(undefined2 *)(param_1 + 10);
    param_2[2] = '\0';
    param_2[3] = '\0';
    return 2;
  }
  param_2[0] = '\0';
  param_2[1] = '\0';
  param_2[2] = '\0';
  param_2[3] = '\0';
  return 0;
}


