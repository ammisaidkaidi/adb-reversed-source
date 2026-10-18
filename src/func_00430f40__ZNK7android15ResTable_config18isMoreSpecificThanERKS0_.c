// Function: _ZNK7android15ResTable_config18isMoreSpecificThanERKS0_
// Address: 00430f40
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _ZNK7android15ResTable_config18isMoreSpecificThanERKS0_(long param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  short sVar3;
  short sVar4;
  uint uVar5;
  char cVar6;
  int iVar7;
  ulong uVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;
  
  uVar5 = *(uint *)(param_1 + 4);
  uVar8 = (ulong)uVar5;
  uVar10 = *(uint *)(param_2 + 4);
  if (uVar5 != 0 || uVar10 != 0) {
    if ((short)uVar5 != (short)uVar10) {
      if ((short)uVar5 == 0) {
        return 0;
      }
      if ((short)uVar10 == 0) goto code_r0x00431196;
    }
    if (0xffff < (uVar5 ^ uVar10)) {
      if (uVar5 < 0x10000) {
        return 0;
      }
      if (uVar10 < 0x10000) {
        return CONCAT71((uint7)(uint3)(uVar5 >> 8),1);
      }
    }
  }
  iVar7 = *(int *)(param_1 + 8);
  uVar5 = *(uint *)(param_2 + 8);
  uVar8 = (ulong)uVar5;
  if (iVar7 != 0 || uVar5 != 0) {
    if ((char)iVar7 != (char)uVar5) {
      if ((char)iVar7 == '\0') {
        return 0;
      }
      if ((char)uVar5 == '\0') goto code_r0x00431196;
    }
    uVar8 = (ulong)(uVar5 >> 0x10);
    cVar9 = (char)((uint)iVar7 >> 0x10);
    cVar6 = (char)(uVar5 >> 0x10);
    if (cVar9 != cVar6) {
      if (cVar9 == '\0') {
        return 0;
      }
      if (cVar6 == '\0') {
code_r0x00431196:
        return CONCAT71((int7)(uVar8 >> 8),1);
      }
    }
    iVar7 = ((uint)(*(char *)(param_1 + 0x35) != '\0') |
            (uint)((*(byte *)(param_1 + 0x34) ^ 1) & *(char *)(param_1 + 0x24) != '\0') * 2 +
            (uint)(*(char *)(param_1 + 0x28) != '\0') * 4) +
            (uint)(*(char *)(param_2 + 0x28) == '\0') * 4 +
            ((*(char *)(param_2 + 0x24) == '\0' | *(byte *)(param_2 + 0x34)) & 1) * 2 +
            (uint)(*(char *)(param_2 + 0x35) == '\0') + -7;
    if (iVar7 < 0) {
      return 0;
    }
    if (iVar7 != 0) {
      return CONCAT71((uint7)(uint3)((uint)iVar7 >> 8),1);
    }
    uVar8 = 0;
  }
  cVar6 = *(char *)(param_1 + 0x13);
  cVar9 = *(char *)(param_2 + 0x13);
  if (((cVar6 != '\0' || cVar9 != '\0') && (cVar6 != cVar9)) && (cVar6 == '\0' || cVar9 == '\0')) {
    return CONCAT71((int7)(uVar8 >> 8),cVar6 != '\0');
  }
  bVar1 = *(byte *)(param_1 + 0x1c);
  bVar2 = *(byte *)(param_2 + 0x1c);
  if (0x3f < (bVar2 ^ bVar1) && (bVar1 != 0 || bVar2 != 0)) {
    if (bVar1 < 0x40) {
      return 0;
    }
    if (bVar2 < 0x40) {
      return 1;
    }
  }
  sVar3 = *(short *)(param_1 + 0x1e);
  sVar4 = *(short *)(param_2 + 0x1e);
  if (((sVar3 != 0 || sVar4 != 0) && (sVar3 != sVar4)) && (sVar3 == 0 || sVar4 == 0)) {
    return (ulong)(sVar3 != 0);
  }
  uVar5 = *(uint *)(param_1 + 0x20);
  uVar8 = (ulong)uVar5;
  uVar10 = *(uint *)(param_2 + 0x20);
  if (uVar5 != 0 || uVar10 != 0) {
    if ((short)uVar5 != (short)uVar10) {
      if ((short)uVar5 == 0) {
        return 0;
      }
      if ((short)uVar10 == 0) goto code_r0x00431351;
    }
    if (0xffff < (uVar5 ^ uVar10)) {
      if (uVar5 < 0x10000) {
        return 0;
      }
      if (uVar10 < 0x10000) {
        return CONCAT71((uint7)(uint3)(uVar5 >> 8),1);
      }
    }
  }
  if (bVar1 != 0 || bVar2 != 0) {
    uVar8 = 0;
    if (((bVar2 ^ bVar1) & 0xf) != 0) {
      if ((bVar1 & 0xf) == 0) {
        return 0;
      }
      if ((bVar2 & 0xf) == 0) goto code_r0x00431351;
    }
    if (((bVar2 ^ bVar1) & 0x30) != 0) {
      if ((bVar1 & 0x30) == 0) {
        return 0;
      }
      if ((bVar2 & 0x30) == 0) goto code_r0x00431351;
    }
  }
  bVar1 = *(byte *)(param_1 + 0x30);
  bVar2 = *(byte *)(param_2 + 0x30);
  uVar8 = 0;
  if ((bVar1 != 0 || bVar2 != 0) && (((bVar2 ^ bVar1) & 3) != 0)) {
    if ((bVar1 & 3) == 0) {
      return 0;
    }
    if ((bVar2 & 3) == 0) goto code_r0x00431351;
  }
  bVar1 = *(byte *)(param_1 + 0x31);
  bVar2 = *(byte *)(param_2 + 0x31);
  uVar8 = 0;
  if (bVar1 != 0 || bVar2 != 0) {
    if (((bVar2 ^ bVar1) & 0xc) != 0) {
      if ((bVar1 & 0xc) == 0) {
        return 0;
      }
      if ((bVar2 & 0xc) == 0) goto code_r0x00431351;
    }
    if (((bVar2 ^ bVar1) & 3) != 0) {
      if ((bVar1 & 3) == 0) {
        return 0;
      }
      if ((bVar2 & 3) == 0) goto code_r0x00431351;
    }
  }
  uVar8 = 0;
  if (*(char *)(param_1 + 0xc) != *(char *)(param_2 + 0xc)) {
    if (*(char *)(param_1 + 0xc) == '\0') {
      return 0;
    }
    if (*(char *)(param_2 + 0xc) == '\0') goto code_r0x00431351;
  }
  bVar1 = *(byte *)(param_1 + 0x1d);
  bVar2 = *(byte *)(param_2 + 0x1d);
  uVar8 = 0;
  if (bVar1 != 0 || bVar2 != 0) {
    if (((bVar2 ^ bVar1) & 0xf) != 0) {
      if ((bVar1 & 0xf) == 0) {
        return 0;
      }
      if ((bVar2 & 0xf) == 0) goto code_r0x00431351;
    }
    if (((bVar2 ^ bVar1) & 0x30) != 0) {
      if ((bVar1 & 0x30) == 0) {
        return 0;
      }
      if ((bVar2 & 0x30) == 0) goto code_r0x00431351;
    }
  }
  uVar8 = 0;
  if (*(char *)(param_1 + 0xd) != *(char *)(param_2 + 0xd)) {
    if (*(char *)(param_1 + 0xd) == '\0') {
      return 0;
    }
    if (*(char *)(param_2 + 0xd) == '\0') goto code_r0x00431351;
  }
  uVar5 = *(uint *)(param_1 + 0x10);
  uVar8 = (ulong)uVar5;
  if ((uVar5 & 0xffffff) == 0) {
    if ((*(uint *)(param_2 + 0x10) & 0xffffff) != 0) {
      uVar10 = *(uint *)(param_2 + 0x10) >> 0x10;
      goto code_r0x00431288;
    }
  }
  else {
    uVar10 = (uint)*(byte *)(param_2 + 0x12);
code_r0x00431288:
    uVar11 = uVar10 & 0xff ^ uVar5 >> 0x10 & 0xff;
    if ((uVar11 & 3) != 0) {
      if ((uVar5 & 0x30000) == 0) {
        return 0;
      }
      if ((uVar10 & 3) == 0) goto code_r0x00431351;
    }
    if ((uVar11 & 0xc) != 0) {
      if ((uVar5 & 0xc0000) == 0) {
        return 0;
      }
      if ((uVar10 & 0xc) == 0) goto code_r0x00431351;
    }
    if (*(char *)(param_2 + 0x10) != (char)uVar5) {
      if ((char)uVar5 == '\0') {
        return 0;
      }
      if (*(char *)(param_2 + 0x10) == '\0') goto code_r0x00431351;
    }
    uVar8 = (ulong)(uVar5 >> 8);
    cVar6 = (char)(uVar5 >> 8);
    if (*(char *)(param_2 + 0x11) != cVar6) {
      if (cVar6 == '\0') {
        return 0;
      }
      if (*(char *)(param_2 + 0x11) == '\0') goto code_r0x00431351;
    }
  }
  uVar5 = *(uint *)(param_1 + 0x14);
  uVar8 = (ulong)uVar5;
  uVar10 = *(uint *)(param_2 + 0x14);
  if (uVar5 != 0 || uVar10 != 0) {
    if ((short)uVar5 != (short)uVar10) {
      if ((short)uVar5 == 0) {
        return 0;
      }
      if ((short)uVar10 == 0) goto code_r0x00431351;
    }
    if (0xffff < (uVar5 ^ uVar10)) {
      if (uVar5 < 0x10000) {
        return 0;
      }
      if (uVar10 < 0x10000) {
        return CONCAT71((uint7)(uint3)(uVar5 >> 8),1);
      }
    }
  }
  uVar5 = *(uint *)(param_1 + 0x18);
  uVar8 = (ulong)uVar5;
  uVar10 = *(uint *)(param_2 + 0x18);
  if (uVar5 != 0 || uVar10 != 0) {
    if ((short)uVar5 != (short)uVar10) {
      if ((short)uVar5 == 0) {
        return 0;
      }
      if ((short)uVar10 == 0) {
code_r0x00431351:
        return CONCAT71((int7)(uVar8 >> 8),1);
      }
    }
    if (((0xffff < (uVar5 ^ uVar10)) && (0xffff < uVar5)) && (uVar10 < 0x10000)) {
      return CONCAT71((uint7)(uint3)(uVar5 >> 8),1);
    }
  }
  return 0;
}


