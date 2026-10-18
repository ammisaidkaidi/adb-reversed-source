// Function: _ZNK7android15DynamicRefTable19lookupResourceValueEPNS_9Res_valueE
// Address: 0042f4e0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8
_ZNK7android15DynamicRefTable19lookupResourceValueEPNS_9Res_valueE(long *param_1,long param_2)

{
  undefined8 uVar1;
  byte bVar2;
  
  bVar2 = *(char *)(param_2 + 3) - 1;
  if (bVar2 < 2) {
    if ((*(char *)((long)param_1 + 0x109) == '\0') && (0xffffff < *(uint *)(param_2 + 4))) {
      return 0;
    }
  }
  else if (1 < (byte)(*(char *)(param_2 + 3) - 7U)) {
    return 0;
  }
  if ((0xc3U >> (bVar2 & 0x1f) & bVar2 < 8) != 1) {
    return 0;
  }
  uVar1 = (**(code **)(*param_1 + 0x10))(param_1,param_2 + 4);
  if ((int)uVar1 == 0) {
    *(char *)(param_2 + 3) = (char)(0x201000000000201 >> ((bVar2 & 7) << 3));
    return 0;
  }
  return uVar1;
}


