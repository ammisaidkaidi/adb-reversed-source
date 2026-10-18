// Function: _ZNK7android15ResTable_config7compareERKS0_
// Address: 004308e0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


uint _ZNK7android15ResTable_config7compareERKS0_(long param_1,long param_2)

{
  char cVar1;
  uint uVar2;
  uint *puVar3;
  ulong uVar4;
  byte bVar5;
  ushort uVar6;
  uint uVar7;
  ulong uVar8;
  byte bVar9;
  ushort uVar10;
  uint *puVar11;
  bool bVar12;
  
  uVar2 = *(uint *)(param_1 + 4);
  uVar7 = *(uint *)(param_2 + 4);
  if (uVar2 != uVar7) {
code_r0x00430974:
    return (uVar7 < uVar2) - 1 | 1;
  }
  uVar2 = *(uint *)(param_1 + 8);
  uVar7 = *(uint *)(param_2 + 8);
  if (uVar2 != uVar7) goto code_r0x00430974;
  puVar3 = (uint *)(param_1 + 0x24);
  if (*(char *)(param_1 + 0x34) != '\0') {
    puVar3 = &_ZZN7android14compareLocalesERKNS_15ResTable_configES2_E11emptyScript;
  }
  puVar11 = (uint *)(param_2 + 0x24);
  if (*(char *)(param_2 + 0x34) != '\0') {
    puVar11 = &_ZZN7android14compareLocalesERKNS_15ResTable_configES2_E11emptyScript;
  }
  uVar2 = *puVar3;
  uVar7 = *puVar11;
  uVar2 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  uVar7 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
  cVar1 = (uVar2 >= uVar7 && uVar2 != uVar7) - (uVar2 < uVar7);
  if (cVar1 == '\0') {
    uVar4 = *(ulong *)(param_1 + 0x28);
    uVar8 = *(ulong *)(param_2 + 0x28);
    uVar4 = uVar4 >> 0x38 | (uVar4 & 0xff000000000000) >> 0x28 | (uVar4 & 0xff0000000000) >> 0x18 |
            (uVar4 & 0xff00000000) >> 8 | (uVar4 & 0xff000000) << 8 | (uVar4 & 0xff0000) << 0x18 |
            (uVar4 & 0xff00) << 0x28 | uVar4 << 0x38;
    uVar8 = uVar8 >> 0x38 | (uVar8 & 0xff000000000000) >> 0x28 | (uVar8 & 0xff0000000000) >> 0x18 |
            (uVar8 & 0xff00000000) >> 8 | (uVar8 & 0xff000000) << 8 | (uVar8 & 0xff0000) << 0x18 |
            (uVar8 & 0xff00) << 0x28 | uVar8 << 0x38;
    cVar1 = (uVar8 < uVar4) - (uVar4 < uVar8);
    if (cVar1 == '\0') {
      uVar4 = *(ulong *)(param_1 + 0x35);
      uVar8 = *(ulong *)(param_2 + 0x35);
      uVar4 = uVar4 >> 0x38 | (uVar4 & 0xff000000000000) >> 0x28 | (uVar4 & 0xff0000000000) >> 0x18
              | (uVar4 & 0xff00000000) >> 8 | (uVar4 & 0xff000000) << 8 | (uVar4 & 0xff0000) << 0x18
              | (uVar4 & 0xff00) << 0x28 | uVar4 << 0x38;
      uVar8 = uVar8 >> 0x38 | (uVar8 & 0xff000000000000) >> 0x28 | (uVar8 & 0xff0000000000) >> 0x18
              | (uVar8 & 0xff00000000) >> 8 | (uVar8 & 0xff000000) << 8 | (uVar8 & 0xff0000) << 0x18
              | (uVar8 & 0xff00) << 0x28 | uVar8 << 0x38;
      cVar1 = (uVar8 < uVar4) - (uVar4 < uVar8);
    }
  }
  if (cVar1 < '\0') {
    return 0xffffffff;
  }
  if (cVar1 != '\0') {
    return 1;
  }
  if (*(byte *)(param_1 + 0x13) != *(byte *)(param_2 + 0x13)) {
    return (uint)(*(byte *)(param_2 + 0x13) <= *(byte *)(param_1 + 0x13)) * 2 - 1;
  }
  uVar2 = *(uint *)(param_1 + 0xc);
  uVar7 = *(uint *)(param_2 + 0xc);
  if (uVar2 == uVar7) {
    uVar7 = *(uint *)(param_1 + 0x10) & 0xffffff;
    uVar2 = *(uint *)(param_2 + 0x10) & 0xffffff;
    if (uVar7 != uVar2) {
      bVar12 = uVar2 < uVar7;
      goto code_r0x00430a4d;
    }
    uVar2 = *(uint *)(param_1 + 0x14);
    uVar7 = *(uint *)(param_2 + 0x14);
    if (uVar2 == uVar7) {
      uVar6 = *(ushort *)(param_1 + 0x18);
      uVar10 = *(ushort *)(param_2 + 0x18);
      if (uVar6 == uVar10) {
        uVar6 = *(ushort *)(param_1 + 0x1a);
        uVar10 = *(ushort *)(param_2 + 0x1a);
        if (uVar6 == uVar10) {
          bVar5 = *(byte *)(param_1 + 0x1c);
          bVar9 = *(byte *)(param_2 + 0x1c);
          if (bVar5 == bVar9) {
            bVar5 = *(byte *)(param_1 + 0x30);
            bVar9 = *(byte *)(param_2 + 0x30);
            if (bVar5 == bVar9) {
              bVar5 = *(byte *)(param_1 + 0x31);
              bVar9 = *(byte *)(param_2 + 0x31);
              if (bVar5 == bVar9) {
                bVar5 = *(byte *)(param_1 + 0x1d);
                bVar9 = *(byte *)(param_2 + 0x1d);
                if (bVar5 == bVar9) {
                  uVar6 = *(ushort *)(param_1 + 0x1e);
                  uVar10 = *(ushort *)(param_2 + 0x1e);
                  if (uVar6 == uVar10) {
                    uVar2 = *(uint *)(param_1 + 0x20);
                    uVar7 = *(uint *)(param_2 + 0x20);
                    if (uVar2 == uVar7) {
                      return 0;
                    }
                    goto code_r0x00430a27;
                  }
                  goto code_r0x00430a42;
                }
              }
            }
          }
          bVar12 = bVar9 < bVar5;
          goto code_r0x00430a4d;
        }
      }
code_r0x00430a42:
      bVar12 = uVar10 < uVar6;
      goto code_r0x00430a4d;
    }
  }
code_r0x00430a27:
  bVar12 = uVar7 < uVar2;
code_r0x00430a4d:
  return bVar12 - 1 | 1;
}


