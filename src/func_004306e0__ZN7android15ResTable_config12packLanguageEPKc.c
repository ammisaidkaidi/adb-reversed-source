// Function: _ZN7android15ResTable_config12packLanguageEPKc
// Address: 004306e0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN7android15ResTable_config12packLanguageEPKc(long param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  
  cVar1 = param_2[2];
  if ((cVar1 == '-') || (cVar1 == '\0')) {
    *(char *)(param_1 + 8) = *param_2;
    bVar4 = param_2[1];
  }
  else {
    cVar2 = *param_2;
    cVar3 = param_2[1];
    *(byte *)(param_1 + 8) = (byte)(cVar3 + 0x9fU) >> 3 & 0xf | cVar1 * '\x04' + 0x7cU | 0x80;
    bVar4 = (cVar3 + 0x9fU) * ' ' | cVar2 + 0x1fU & 0x7f;
  }
  *(byte *)(param_1 + 9) = bVar4;
  return;
}


