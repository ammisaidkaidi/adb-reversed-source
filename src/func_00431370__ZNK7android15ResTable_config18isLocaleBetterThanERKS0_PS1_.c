// Function: _ZNK7android15ResTable_config18isLocaleBetterThanERKS0_PS1_
// Address: 00431370
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


bool _ZNK7android15ResTable_config18isLocaleBetterThanERKS0_PS1_
               (long param_1,long param_2,long param_3)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  char cVar7;
  uint uVar8;
  char cVar9;
  char cVar10;
  
  uVar8 = *(uint *)(param_3 + 8);
  if (uVar8 == 0) {
    return false;
  }
  uVar6 = *(uint *)(param_1 + 8);
  uVar1 = *(uint *)(param_2 + 8);
  if (uVar6 == 0 && uVar1 == 0) {
    return false;
  }
  cVar2 = (char)uVar1;
  cVar10 = (char)uVar6;
  cVar7 = (char)(uVar6 >> 8);
  cVar9 = (char)(uVar1 >> 8);
  if (cVar7 != cVar9 || cVar10 != cVar2) {
    if (cVar10 == -0x53) {
      if (cVar9 != 'l' || (cVar2 != 't' || cVar7 != '\x05')) goto code_r0x004314fd;
    }
    else if (((uVar6 & 0xff) != 0x74) || (cVar9 != '\x05' || (cVar2 != -0x53 || cVar7 != 'l'))) {
code_r0x004314fd:
      if ((uVar8 & 0xffff) == 0x6e65) {
        if ((uVar8 & 0xffff0000) == 0x53550000) {
          if (cVar10 == '\0') {
            if ((char)(uVar1 >> 0x10) == '\0') {
              return false;
            }
            if ((uVar1 >> 0x10 & 0xff) != 0x55) {
              return true;
            }
            return (uVar1 & 0xff000000) != 0x53000000;
          }
          if ((char)(uVar6 >> 0x10) == '\0') {
            return true;
          }
          if ((uVar6 >> 0x10 & 0xff) != 0x55) {
            return false;
          }
          return (uVar6 & 0xff000000) == 0x53000000;
        }
        cVar2 = _ZN7android28localeDataIsCloseToUsEnglishEPKc(param_3 + 10);
        uVar6 = (uint)*(byte *)(param_1 + 8);
        if (cVar2 != '\0') {
          if (*(byte *)(param_1 + 8) == 0) {
            bVar3 = _ZN7android28localeDataIsCloseToUsEnglishEPKc(param_2 + 10);
            return (bool)(bVar3 ^ 1);
          }
          uVar8 = (ushort)(*(ushort *)(param_1 + 10) << 8 | *(ushort *)(param_1 + 10) >> 8) |
                  0x656e0000;
          do {
            if (uVar8 == 0x656e0000) {
              return true;
            }
            if (uVar8 == 0x656e8400) {
              return false;
            }
            if ((short)uVar8 == 0) {
              return false;
            }
            uVar6 = _ZN7android25findParentLocalePackedKeyEPKcj(&UNK_001fee3c,uVar8);
            uVar8 = uVar8 & 0xffff0000;
            if (uVar6 != 0) {
              uVar8 = uVar6;
            }
          } while (uVar8 != 0);
          return false;
        }
      }
      return (char)uVar6 != '\0';
    }
  }
  iVar4 = _ZN7android24localeDataCompareRegionsEPKcS1_S1_S1_S1_
                    (param_1 + 10,param_2 + 10,(char *)(param_3 + 8),param_3 + 0x24,param_3 + 10);
  if (iVar4 != 0) {
    return 0 < iVar4;
  }
  iVar4 = func_0x0099bed0(param_1 + 0x28,param_3 + 0x28,8);
  iVar5 = func_0x0099bed0(param_2 + 0x28,param_3 + 0x28,8);
  if ((iVar4 == 0) == (iVar5 != 0)) {
    return iVar4 == 0;
  }
  iVar4 = func_0x0099bed0(param_1 + 0x35,param_3 + 0x35,8);
  iVar5 = func_0x0099bed0(param_2 + 0x35,param_3 + 0x35,8);
  if ((iVar4 == 0) == (iVar5 != 0)) {
    return iVar4 == 0;
  }
  if ((*(char *)(param_1 + 8) == *(char *)(param_3 + 8)) &&
     (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) {
    if (*(char *)(param_2 + 8) != *(char *)(param_1 + 8)) {
      return true;
    }
    if (*(char *)(param_2 + 9) != *(char *)(param_1 + 9)) {
      return true;
    }
  }
  return false;
}


