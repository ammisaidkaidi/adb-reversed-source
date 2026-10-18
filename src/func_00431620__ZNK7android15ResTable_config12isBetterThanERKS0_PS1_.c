// Function: _ZNK7android15ResTable_config12isBetterThanERKS0_PS1_
// Address: 00431620
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Type propagation algorithm not settling */

bool _ZNK7android15ResTable_config12isBetterThanERKS0_PS1_(long param_1,long param_2,long param_3)

{
  short sVar1;
  short sVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  char cVar7;
  ushort uVar8;
  char cVar9;
  ushort uVar10;
  uint uVar11;
  uint uVar12;
  byte bVar13;
  ushort uVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  int iVar18;
  byte bVar19;
  int iVar20;
  int iVar21;
  bool bVar22;
  bool bVar23;
  
  if (param_3 == 0) {
    uVar5 = *(uint *)(param_1 + 4);
    uVar11 = *(uint *)(param_2 + 4);
    if (uVar5 != 0 || uVar11 != 0) {
      if ((short)uVar5 != (short)uVar11) {
        if ((short)uVar5 == 0) {
          return false;
        }
        if ((short)uVar11 == 0) {
          return true;
        }
      }
      if (0xffff < (uVar5 ^ uVar11)) {
        if (uVar5 < 0x10000) {
          return false;
        }
        if (uVar11 < 0x10000) {
          return true;
        }
      }
    }
    iVar21 = *(int *)(param_1 + 8);
    iVar18 = *(int *)(param_2 + 8);
    if (iVar21 != 0 || iVar18 != 0) {
      if ((char)iVar21 != (char)iVar18) {
        if ((char)iVar21 == '\0') {
          return false;
        }
        if ((char)iVar18 == '\0') {
          return true;
        }
      }
      cVar9 = (char)((uint)iVar21 >> 0x10);
      cVar7 = (char)((uint)iVar18 >> 0x10);
      if (cVar9 != cVar7) {
        if (cVar9 == '\0') {
          return false;
        }
        if (cVar7 == '\0') {
          return true;
        }
      }
      iVar21 = ((uint)(*(char *)(param_1 + 0x35) != '\0') |
               (uint)((*(byte *)(param_1 + 0x34) ^ 1) & *(char *)(param_1 + 0x24) != '\0') * 2 +
               (uint)(*(char *)(param_1 + 0x28) != '\0') * 4) +
               (uint)(*(char *)(param_2 + 0x28) == '\0') * 4 +
               ((*(char *)(param_2 + 0x24) == '\0' | *(byte *)(param_2 + 0x34)) & 1) * 2 +
               (uint)(*(char *)(param_2 + 0x35) == '\0');
      if (iVar21 + -7 < 0) {
        return false;
      }
      if (iVar21 != 7) {
        return true;
      }
    }
    cVar7 = *(char *)(param_1 + 0x13);
    cVar9 = *(char *)(param_2 + 0x13);
    if (((cVar7 != '\0' || cVar9 != '\0') && (cVar7 != cVar9)) && (cVar7 == '\0' || cVar9 == '\0'))
    {
      return cVar7 != '\0';
    }
    bVar15 = *(byte *)(param_1 + 0x1c);
    bVar17 = *(byte *)(param_2 + 0x1c);
    if (0x3f < (bVar17 ^ bVar15) && (bVar15 != 0 || bVar17 != 0)) {
      if (bVar15 < 0x40) {
        return false;
      }
      if (bVar17 < 0x40) {
        return true;
      }
    }
    sVar1 = *(short *)(param_1 + 0x1e);
    sVar2 = *(short *)(param_2 + 0x1e);
    if (((sVar1 != 0 || sVar2 != 0) && (sVar1 != sVar2)) && (sVar1 == 0 || sVar2 == 0)) {
      return sVar1 != 0;
    }
    uVar5 = *(uint *)(param_1 + 0x20);
    uVar11 = *(uint *)(param_2 + 0x20);
    if (uVar5 != 0 || uVar11 != 0) {
      if ((short)uVar5 != (short)uVar11) {
        if ((short)uVar5 == 0) {
          return false;
        }
        if ((short)uVar11 == 0) {
          return true;
        }
      }
      if (0xffff < (uVar5 ^ uVar11)) {
        if (uVar5 < 0x10000) {
          return false;
        }
        if (uVar11 < 0x10000) {
          return true;
        }
      }
    }
    if (bVar15 != 0 || bVar17 != 0) {
      if (((bVar17 ^ bVar15) & 0xf) != 0) {
        if ((bVar15 & 0xf) == 0) {
          return false;
        }
        if ((bVar17 & 0xf) == 0) {
          return true;
        }
      }
      if (((bVar17 ^ bVar15) & 0x30) != 0) {
        if ((bVar15 & 0x30) == 0) {
          return false;
        }
        if ((bVar17 & 0x30) == 0) {
          return true;
        }
      }
    }
    bVar15 = *(byte *)(param_1 + 0x30);
    bVar17 = *(byte *)(param_2 + 0x30);
    if ((bVar15 != 0 || bVar17 != 0) && (((bVar17 ^ bVar15) & 3) != 0)) {
      if ((bVar15 & 3) == 0) {
        return false;
      }
      if ((bVar17 & 3) == 0) {
        return true;
      }
    }
    bVar15 = *(byte *)(param_1 + 0x31);
    bVar17 = *(byte *)(param_2 + 0x31);
    if (bVar15 != 0 || bVar17 != 0) {
      if (((bVar17 ^ bVar15) & 0xc) != 0) {
        if ((bVar15 & 0xc) == 0) {
          return false;
        }
        if ((bVar17 & 0xc) == 0) {
          return true;
        }
      }
      if (((bVar17 ^ bVar15) & 3) != 0) {
        if ((bVar15 & 3) == 0) {
          return false;
        }
        if ((bVar17 & 3) == 0) {
          return true;
        }
      }
    }
    if (*(char *)(param_1 + 0xc) != *(char *)(param_2 + 0xc)) {
      if (*(char *)(param_1 + 0xc) == '\0') {
        return false;
      }
      if (*(char *)(param_2 + 0xc) == '\0') {
        return true;
      }
    }
    bVar15 = *(byte *)(param_1 + 0x1d);
    bVar17 = *(byte *)(param_2 + 0x1d);
    if (bVar15 != 0 || bVar17 != 0) {
      if (((bVar17 ^ bVar15) & 0xf) != 0) {
        if ((bVar15 & 0xf) == 0) {
          return false;
        }
        if ((bVar17 & 0xf) == 0) {
          return true;
        }
      }
      if (((bVar17 ^ bVar15) & 0x30) != 0) {
        if ((bVar15 & 0x30) == 0) {
          return false;
        }
        if ((bVar17 & 0x30) == 0) {
          return true;
        }
      }
    }
    if (*(char *)(param_1 + 0xd) != *(char *)(param_2 + 0xd)) {
      if (*(char *)(param_1 + 0xd) == '\0') {
        return false;
      }
      if (*(char *)(param_2 + 0xd) == '\0') {
        return true;
      }
    }
    uVar5 = *(uint *)(param_1 + 0x10);
    if ((uVar5 & 0xffffff) == 0) {
      if ((*(uint *)(param_2 + 0x10) & 0xffffff) == 0) goto code_r0x004312f0;
      uVar11 = *(uint *)(param_2 + 0x10) >> 0x10;
    }
    else {
      uVar11 = (uint)*(byte *)(param_2 + 0x12);
    }
    uVar12 = uVar11 & 0xff ^ uVar5 >> 0x10 & 0xff;
    if ((uVar12 & 3) != 0) {
      if ((uVar5 & 0x30000) == 0) {
        return false;
      }
      if ((uVar11 & 3) == 0) {
        return true;
      }
    }
    if ((uVar12 & 0xc) != 0) {
      if ((uVar5 & 0xc0000) == 0) {
        return false;
      }
      if ((uVar11 & 0xc) == 0) {
        return true;
      }
    }
    if (*(char *)(param_2 + 0x10) != (char)uVar5) {
      if ((char)uVar5 == '\0') {
        return false;
      }
      if (*(char *)(param_2 + 0x10) == '\0') {
        return true;
      }
    }
    cVar7 = (char)(uVar5 >> 8);
    if (*(char *)(param_2 + 0x11) != cVar7) {
      if (cVar7 == '\0') {
        return false;
      }
      if (*(char *)(param_2 + 0x11) == '\0') {
        return true;
      }
    }
code_r0x004312f0:
    uVar5 = *(uint *)(param_1 + 0x14);
    uVar11 = *(uint *)(param_2 + 0x14);
    if (uVar5 != 0 || uVar11 != 0) {
      if ((short)uVar5 != (short)uVar11) {
        if ((short)uVar5 == 0) {
          return false;
        }
        if ((short)uVar11 == 0) {
          return true;
        }
      }
      if (0xffff < (uVar5 ^ uVar11)) {
        if (uVar5 < 0x10000) {
          return false;
        }
        if (uVar11 < 0x10000) {
          return true;
        }
      }
    }
    uVar5 = *(uint *)(param_1 + 0x18);
    uVar11 = *(uint *)(param_2 + 0x18);
    if (uVar5 != 0 || uVar11 != 0) {
      if ((short)uVar5 != (short)uVar11) {
        if ((short)uVar5 == 0) {
          return false;
        }
        if ((short)uVar11 == 0) {
          return true;
        }
      }
      if (((0xffff < (uVar5 ^ uVar11)) && (0xffff < uVar5)) && (uVar11 < 0x10000)) {
        return true;
      }
    }
    return false;
  }
  uVar5 = *(uint *)(param_1 + 4);
  uVar11 = *(uint *)(param_2 + 4);
  if (uVar5 != 0 || uVar11 != 0) {
    if (((short)uVar5 != (short)uVar11) && (*(short *)(param_3 + 4) != 0)) {
      return (short)uVar5 != 0;
    }
    if ((0xffff < (uVar11 ^ uVar5)) && (*(short *)(param_3 + 6) != 0)) {
      return 0xffff < uVar5;
    }
  }
  if (((*(int *)(param_3 + 8) != 0) && (*(int *)(param_2 + 8) != 0 || *(int *)(param_1 + 8) != 0))
     && (cVar7 = _ZNK7android15ResTable_config18isLocaleBetterThanERKS0_PS1_(), cVar7 != '\0')) {
    return true;
  }
  cVar7 = *(char *)(param_1 + 0x13);
  if ((cVar7 != *(char *)(param_2 + 0x13) && (cVar7 != '\0' || *(char *)(param_2 + 0x13) != '\0'))
     && (*(char *)(param_3 + 0x13) != '\0')) {
code_r0x004316c1:
    return cVar7 != '\0';
  }
  bVar15 = *(byte *)(param_1 + 0x1c);
  bVar17 = *(byte *)(param_2 + 0x1c);
  if ((bVar17 != 0 || bVar15 != 0) &&
     ((0x3f < (bVar17 ^ bVar15) && (0x3f < *(byte *)(param_3 + 0x1c))))) {
    bVar22 = (bVar15 & 0xc0) < (bVar17 & 0xc0);
    bVar23 = (bVar15 & 0xc0) == (bVar17 & 0xc0);
    goto code_r0x00431868;
  }
  uVar3 = *(ushort *)(param_1 + 0x1e);
  uVar4 = *(ushort *)(param_2 + 0x1e);
  if (uVar3 != uVar4 && (uVar3 != 0 || uVar4 != 0)) {
    bVar22 = uVar3 < uVar4;
    bVar23 = uVar3 == uVar4;
    goto code_r0x00431868;
  }
  uVar5 = *(uint *)(param_1 + 0x20);
  uVar11 = *(uint *)(param_2 + 0x20);
  if (uVar5 != 0 || uVar11 != 0) {
    uVar3 = *(ushort *)(param_3 + 0x20);
    iVar21 = (uint)uVar3 - (uVar5 & 0xffff);
    iVar18 = (uint)uVar3 - (uVar11 & 0xffff);
    if (uVar3 == 0) {
      iVar21 = 0;
      iVar18 = 0;
    }
    uVar3 = *(ushort *)(param_3 + 0x22);
    iVar20 = (iVar21 + (uint)uVar3) - (uVar5 >> 0x10);
    iVar6 = (iVar18 + (uint)uVar3) - (uVar11 >> 0x10);
    if (uVar3 == 0) {
      iVar20 = iVar21;
      iVar6 = iVar18;
    }
    if (iVar20 != iVar6) {
      return iVar20 < iVar6;
    }
  }
  if (bVar17 != 0 || bVar15 != 0) {
    if ((((bVar17 ^ bVar15) & 0xf) != 0) && (bVar16 = *(byte *)(param_3 + 0x1c) & 0xf, bVar16 != 0))
    {
      bVar19 = bVar17 & 0xf;
      if ((bVar17 & 0xf) == 0) {
        bVar19 = 2;
      }
      bVar23 = (bVar15 & 0xf) != 0;
      bVar13 = 2;
      if (bVar23) {
        bVar13 = bVar15 & 0xf;
      }
      if (bVar16 == 1) {
        bVar19 = bVar17 & 0xf;
        bVar13 = bVar15 & 0xf;
      }
      if (bVar13 != bVar19) {
        return bVar19 < bVar13;
      }
      return bVar23;
    }
    if ((((bVar17 ^ bVar15) & 0x30) != 0) && ((*(byte *)(param_3 + 0x1c) & 0x30) != 0)) {
      return (bVar15 & 0x30) != 0;
    }
  }
  bVar15 = *(byte *)(param_1 + 0x30);
  if (((bVar15 != 0 || *(byte *)(param_2 + 0x30) != 0) &&
      (((*(byte *)(param_2 + 0x30) ^ bVar15) & 3) != 0)) && ((*(byte *)(param_3 + 0x30) & 3) != 0))
  {
code_r0x0043189d:
    return (bVar15 & 3) != 0;
  }
  bVar15 = *(byte *)(param_1 + 0x31);
  if (bVar15 != 0 || *(byte *)(param_2 + 0x31) != 0) {
    bVar17 = *(byte *)(param_2 + 0x31) ^ bVar15;
    if (((bVar17 & 3) != 0) && ((*(byte *)(param_3 + 0x31) & 3) != 0)) goto code_r0x0043189d;
    if (((bVar17 & 0xc) != 0) && ((*(byte *)(param_3 + 0x31) & 0xc) != 0)) {
      return (bVar15 & 0xc) != 0;
    }
  }
  cVar7 = *(char *)(param_1 + 0xc);
  if ((cVar7 != *(char *)(param_2 + 0xc)) && (*(char *)(param_3 + 0xc) != '\0'))
  goto code_r0x004316c1;
  bVar15 = *(byte *)(param_1 + 0x1d);
  if (bVar15 != 0 || *(byte *)(param_2 + 0x1d) != 0) {
    bVar17 = *(byte *)(param_2 + 0x1d) ^ bVar15;
    if (((bVar17 & 0xf) != 0) && ((*(byte *)(param_3 + 0x1d) & 0xf) != 0)) {
      return (bVar15 & 0xf) != 0;
    }
    if (((bVar17 & 0x30) != 0) && ((*(byte *)(param_3 + 0x1d) & 0x30) != 0)) {
      return (bVar15 & 0x30) != 0;
    }
  }
  uVar5 = *(uint *)(param_1 + 0xc);
  uVar11 = *(uint *)(param_2 + 0xc);
  if (uVar5 != 0 || uVar11 != 0) {
    if (uVar5 >> 0x10 != uVar11 >> 0x10) {
      uVar3 = (ushort)(uVar5 >> 0x10);
      if (uVar5 < 0x10000) {
        uVar3 = 0xa0;
      }
      uVar4 = (ushort)(uVar11 >> 0x10);
      if (uVar11 < 0x10000) {
        uVar4 = 0xa0;
      }
      if (uVar3 != 0xfffe) {
        if (uVar4 == 0xfffe) {
          return false;
        }
        uVar8 = *(ushort *)(param_3 + 0xe);
        uVar14 = uVar8;
        if (uVar8 == 0xfffe) {
          uVar14 = 0xa0;
        }
        if (uVar8 == 0) {
          uVar14 = 0xa0;
        }
        uVar8 = uVar3;
        if (uVar4 >= uVar3 && uVar4 != uVar3) {
          uVar8 = uVar4;
        }
        uVar10 = uVar3;
        if (uVar4 < uVar3) {
          uVar10 = uVar4;
        }
        return (uVar14 <= uVar10 && uVar14 != uVar8) != uVar4 <= uVar3;
      }
      return true;
    }
    cVar7 = (char)(uVar5 >> 8);
    if ((cVar7 != (char)(uVar11 >> 8)) && (*(char *)(param_3 + 0xd) != '\0')) {
      return cVar7 != '\0';
    }
  }
  uVar5 = *(uint *)(param_1 + 0x10);
  if ((uVar5 & 0xffffff) == 0) {
    if ((*(uint *)(param_2 + 0x10) & 0xffffff) != 0) {
      bVar15 = (byte)(*(uint *)(param_2 + 0x10) >> 0x10);
      goto code_r0x0043193d;
    }
  }
  else {
    bVar15 = *(byte *)(param_2 + 0x12);
code_r0x0043193d:
    bVar16 = (byte)(uVar5 >> 0x10);
    bVar19 = bVar16 & 3;
    bVar17 = bVar15 & 3;
    if ((bVar19 != bVar17) && (bVar13 = *(byte *)(param_3 + 0x12) & 3, bVar13 != 0)) {
      if ((uVar5 & 0x30000) == 0) {
        return false;
      }
      if (bVar17 == 0) {
        return true;
      }
      if (bVar13 == bVar19) {
        return true;
      }
      if (bVar13 == bVar17) {
        return false;
      }
    }
    if (((bVar16 & 0xc) != (bVar15 & 0xc)) && ((*(byte *)(param_3 + 0x12) & 0xc) != 0)) {
      if ((uVar5 & 0xc0000) == 0) {
        return false;
      }
      if ((bVar15 & 0xc) == 0) {
        return true;
      }
    }
    if ((*(char *)(param_2 + 0x10) != (char)uVar5) && (*(char *)(param_3 + 0x10) != '\0')) {
      return (char)uVar5 != '\0';
    }
    cVar7 = (char)(uVar5 >> 8);
    if ((*(char *)(param_2 + 0x11) != cVar7) && (*(char *)(param_3 + 0x11) != '\0')) {
      return cVar7 != '\0';
    }
  }
  uVar5 = *(uint *)(param_1 + 0x14);
  uVar11 = *(uint *)(param_2 + 0x14);
  if (uVar5 != 0 || uVar11 != 0) {
    uVar3 = *(ushort *)(param_3 + 0x14);
    iVar18 = (uint)uVar3 - (uVar5 & 0xffff);
    iVar21 = (uint)uVar3 - (uVar11 & 0xffff);
    if (uVar3 == 0) {
      iVar21 = 0;
      iVar18 = 0;
    }
    uVar3 = *(ushort *)(param_3 + 0x16);
    iVar20 = (iVar21 + (uint)uVar3) - (uVar11 >> 0x10);
    iVar6 = (iVar18 + (uint)uVar3) - (uVar5 >> 0x10);
    if (uVar3 == 0) {
      iVar20 = iVar21;
      iVar6 = iVar18;
    }
    if (iVar6 != iVar20) {
      return iVar6 < iVar20;
    }
  }
  uVar5 = *(uint *)(param_1 + 0x18);
  uVar11 = *(uint *)(param_2 + 0x18);
  if ((uVar5 == 0 && uVar11 == 0) || (*(int *)(param_3 + 0x18) == 0)) {
    return false;
  }
  bVar22 = (ushort)uVar5 < (ushort)uVar11;
  bVar23 = false;
  if ((ushort)uVar5 == (ushort)uVar11) {
    bVar22 = uVar5 >> 0x10 < uVar11 >> 0x10;
    bVar23 = uVar5 >> 0x10 == uVar11 >> 0x10;
  }
code_r0x00431868:
  return !bVar22 && !bVar23;
}


