// Function: _ZNK7android15ResTable_config14compareLogicalERKS0_
// Address: 00430a60
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


uint _ZNK7android15ResTable_config14compareLogicalERKS0_(long param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  uint *puVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  uint *puVar9;
  bool bVar10;
  
  bVar10 = *(ushort *)(param_1 + 4) < *(ushort *)(param_2 + 4);
  if ((*(ushort *)(param_1 + 4) != *(ushort *)(param_2 + 4)) ||
     (bVar10 = *(ushort *)(param_1 + 6) < *(ushort *)(param_2 + 6),
     *(ushort *)(param_1 + 6) != *(ushort *)(param_2 + 6))) {
    return (uint)!bVar10 * 2 - 1;
  }
  if (*(uint *)(param_1 + 8) != *(uint *)(param_2 + 8)) {
    return (*(uint *)(param_2 + 8) < *(uint *)(param_1 + 8)) - 1 | 1;
  }
  puVar5 = (uint *)(param_1 + 0x24);
  if (*(char *)(param_1 + 0x34) != '\0') {
    puVar5 = &_ZZN7android14compareLocalesERKNS_15ResTable_configES2_E11emptyScript;
  }
  puVar9 = (uint *)(param_2 + 0x24);
  if (*(char *)(param_2 + 0x34) != '\0') {
    puVar9 = &_ZZN7android14compareLocalesERKNS_15ResTable_configES2_E11emptyScript;
  }
  uVar4 = *puVar5;
  uVar7 = *puVar9;
  uVar4 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
  uVar7 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
  cVar3 = (uVar4 >= uVar7 && uVar4 != uVar7) - (uVar4 < uVar7);
  if (cVar3 == '\0') {
    uVar6 = *(ulong *)(param_1 + 0x28);
    uVar8 = *(ulong *)(param_2 + 0x28);
    uVar6 = uVar6 >> 0x38 | (uVar6 & 0xff000000000000) >> 0x28 | (uVar6 & 0xff0000000000) >> 0x18 |
            (uVar6 & 0xff00000000) >> 8 | (uVar6 & 0xff000000) << 8 | (uVar6 & 0xff0000) << 0x18 |
            (uVar6 & 0xff00) << 0x28 | uVar6 << 0x38;
    uVar8 = uVar8 >> 0x38 | (uVar8 & 0xff000000000000) >> 0x28 | (uVar8 & 0xff0000000000) >> 0x18 |
            (uVar8 & 0xff00000000) >> 8 | (uVar8 & 0xff000000) << 8 | (uVar8 & 0xff0000) << 0x18 |
            (uVar8 & 0xff00) << 0x28 | uVar8 << 0x38;
    cVar3 = (uVar8 < uVar6) - (uVar6 < uVar8);
    if (cVar3 == '\0') {
      uVar6 = *(ulong *)(param_1 + 0x35);
      uVar8 = *(ulong *)(param_2 + 0x35);
      uVar6 = uVar6 >> 0x38 | (uVar6 & 0xff000000000000) >> 0x28 | (uVar6 & 0xff0000000000) >> 0x18
              | (uVar6 & 0xff00000000) >> 8 | (uVar6 & 0xff000000) << 8 | (uVar6 & 0xff0000) << 0x18
              | (uVar6 & 0xff00) << 0x28 | uVar6 << 0x38;
      uVar8 = uVar8 >> 0x38 | (uVar8 & 0xff000000000000) >> 0x28 | (uVar8 & 0xff0000000000) >> 0x18
              | (uVar8 & 0xff00000000) >> 8 | (uVar8 & 0xff000000) << 8 | (uVar8 & 0xff0000) << 0x18
              | (uVar8 & 0xff00) << 0x28 | uVar8 << 0x38;
      cVar3 = (uVar8 < uVar6) - (uVar6 < uVar8);
    }
  }
  if (cVar3 < '\0') {
    return 0xffffffff;
  }
  if (cVar3 != '\0') {
    return 1;
  }
  bVar10 = *(byte *)(param_1 + 0x13) < *(byte *)(param_2 + 0x13);
  if (*(byte *)(param_1 + 0x13) == *(byte *)(param_2 + 0x13)) {
    bVar1 = *(byte *)(param_1 + 0x1c);
    bVar2 = *(byte *)(param_2 + 0x1c);
    if ((bVar2 & 0xc0) != (bVar1 & 0xc0)) {
      bVar10 = (bVar2 & 0xc0) <= (bVar1 & 0xc0);
      goto code_r0x00430bfb;
    }
    bVar10 = *(ushort *)(param_1 + 0x1e) < *(ushort *)(param_2 + 0x1e);
    if (((((*(ushort *)(param_1 + 0x1e) == *(ushort *)(param_2 + 0x1e)) &&
          (bVar10 = *(ushort *)(param_1 + 0x20) < *(ushort *)(param_2 + 0x20),
          *(ushort *)(param_1 + 0x20) == *(ushort *)(param_2 + 0x20))) &&
         (bVar10 = *(ushort *)(param_1 + 0x22) < *(ushort *)(param_2 + 0x22),
         *(ushort *)(param_1 + 0x22) == *(ushort *)(param_2 + 0x22))) &&
        (((bVar10 = *(ushort *)(param_1 + 0x14) < *(ushort *)(param_2 + 0x14),
          *(ushort *)(param_1 + 0x14) == *(ushort *)(param_2 + 0x14) &&
          (bVar10 = *(ushort *)(param_1 + 0x16) < *(ushort *)(param_2 + 0x16),
          *(ushort *)(param_1 + 0x16) == *(ushort *)(param_2 + 0x16))) &&
         ((bVar10 = *(ushort *)(param_1 + 0xe) < *(ushort *)(param_2 + 0xe),
          *(ushort *)(param_1 + 0xe) == *(ushort *)(param_2 + 0xe) &&
          ((bVar10 = *(byte *)(param_1 + 0xc) < *(byte *)(param_2 + 0xc),
           *(byte *)(param_1 + 0xc) == *(byte *)(param_2 + 0xc) &&
           (bVar10 = *(byte *)(param_1 + 0xd) < *(byte *)(param_2 + 0xd),
           *(byte *)(param_1 + 0xd) == *(byte *)(param_2 + 0xd))))))))) &&
       ((uVar7 = *(uint *)(param_1 + 0x10) & 0xffffff, uVar4 = *(uint *)(param_2 + 0x10) & 0xffffff,
        bVar10 = uVar7 < uVar4, uVar7 == uVar4 &&
        (((((bVar10 = bVar1 < bVar2, bVar1 == bVar2 &&
            (bVar10 = *(byte *)(param_1 + 0x30) < *(byte *)(param_2 + 0x30),
            *(byte *)(param_1 + 0x30) == *(byte *)(param_2 + 0x30))) &&
           (bVar10 = *(byte *)(param_1 + 0x31) < *(byte *)(param_2 + 0x31),
           *(byte *)(param_1 + 0x31) == *(byte *)(param_2 + 0x31))) &&
          ((bVar10 = *(byte *)(param_1 + 0x1d) < *(byte *)(param_2 + 0x1d),
           *(byte *)(param_1 + 0x1d) == *(byte *)(param_2 + 0x1d) &&
           (bVar10 = *(ushort *)(param_1 + 0x18) < *(ushort *)(param_2 + 0x18),
           *(ushort *)(param_1 + 0x18) == *(ushort *)(param_2 + 0x18))))) &&
         (bVar10 = *(ushort *)(param_1 + 0x1a) < *(ushort *)(param_2 + 0x1a),
         *(ushort *)(param_1 + 0x1a) == *(ushort *)(param_2 + 0x1a))))))) {
      return 0;
    }
  }
  bVar10 = !bVar10;
code_r0x00430bfb:
  return (uint)bVar10 * 2 - 1;
}


