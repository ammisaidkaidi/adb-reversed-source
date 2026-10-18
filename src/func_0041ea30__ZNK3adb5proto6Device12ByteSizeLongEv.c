// Function: _ZNK3adb5proto6Device12ByteSizeLongEv
// Address: 0041ea30
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long _ZNK3adb5proto6Device12ByteSizeLongEv(long param_1)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  byte *pbVar8;
  long lVar9;
  undefined1 *puVar10;
  
  uVar3 = *(uint *)(param_1 + 0x10);
  if ((char)uVar3 == '\0') {
    lVar9 = 0;
    goto code_r0x0041ec1b;
  }
  if ((uVar3 & 1) == 0) {
code_r0x0041ea62:
    lVar9 = 0;
  }
  else {
    pbVar8 = (byte *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
    bVar2 = *pbVar8;
    if ((bVar2 & 1) == 0) {
      uVar6 = (ulong)(bVar2 >> 1);
      if (uVar6 != 0) goto code_r0x0041ea97;
      goto code_r0x0041ea62;
    }
    uVar6 = *(ulong *)(pbVar8 + 8);
    if (uVar6 == 0) goto code_r0x0041ea62;
code_r0x0041ea97:
    uVar7 = (uint)uVar6 | 1;
    iVar4 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    lVar9 = uVar6 + (iVar4 * 9 + 0x49U >> 6) + 1;
  }
  if ((uVar3 & 2) != 0) {
    pbVar8 = (byte *)(*(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc);
    bVar2 = *pbVar8;
    if ((bVar2 & 1) == 0) {
      uVar6 = (ulong)(bVar2 >> 1);
    }
    else {
      uVar6 = *(ulong *)(pbVar8 + 8);
    }
    if (uVar6 != 0) {
      uVar7 = (uint)uVar6 | 1;
      iVar4 = 0x1f;
      if (uVar7 != 0) {
        for (; uVar7 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      lVar9 = lVar9 + uVar6 + (ulong)(iVar4 * 9 + 0x49U >> 6) + 1;
    }
  }
  if ((uVar3 & 4) != 0) {
    pbVar8 = (byte *)(*(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc);
    bVar2 = *pbVar8;
    if ((bVar2 & 1) == 0) {
      uVar6 = (ulong)(bVar2 >> 1);
    }
    else {
      uVar6 = *(ulong *)(pbVar8 + 8);
    }
    if (uVar6 != 0) {
      uVar7 = (uint)uVar6 | 1;
      iVar4 = 0x1f;
      if (uVar7 != 0) {
        for (; uVar7 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      lVar9 = lVar9 + uVar6 + (ulong)(iVar4 * 9 + 0x49U >> 6) + 1;
    }
  }
  if ((uVar3 & 8) != 0) {
    pbVar8 = (byte *)(*(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc);
    bVar2 = *pbVar8;
    if ((bVar2 & 1) == 0) {
      uVar6 = (ulong)(bVar2 >> 1);
    }
    else {
      uVar6 = *(ulong *)(pbVar8 + 8);
    }
    if (uVar6 != 0) {
      uVar7 = (uint)uVar6 | 1;
      iVar4 = 0x1f;
      if (uVar7 != 0) {
        for (; uVar7 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      lVar9 = lVar9 + uVar6 + (ulong)(iVar4 * 9 + 0x49U >> 6) + 1;
    }
  }
  if ((uVar3 & 0x10) != 0) {
    pbVar8 = (byte *)(*(ulong *)(param_1 + 0x38) & 0xfffffffffffffffc);
    bVar2 = *pbVar8;
    if ((bVar2 & 1) == 0) {
      uVar6 = (ulong)(bVar2 >> 1);
    }
    else {
      uVar6 = *(ulong *)(pbVar8 + 8);
    }
    if (uVar6 != 0) {
      uVar7 = (uint)uVar6 | 1;
      iVar4 = 0x1f;
      if (uVar7 != 0) {
        for (; uVar7 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      lVar9 = lVar9 + uVar6 + (ulong)(iVar4 * 9 + 0x49U >> 6) + 1;
    }
  }
  if (((uVar3 & 0x20) != 0) && ((long)*(int *)(param_1 + 0x40) != 0)) {
    uVar6 = (long)*(int *)(param_1 + 0x40) | 1;
    lVar5 = 0x3f;
    if (uVar6 != 0) {
      for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    lVar9 = lVar9 + (ulong)((int)lVar5 * 9 + 0x49U >> 6) + 1;
  }
  if (((uVar3 & 0x40) != 0) && ((long)*(int *)(param_1 + 0x44) != 0)) {
    uVar6 = (long)*(int *)(param_1 + 0x44) | 1;
    lVar5 = 0x3f;
    if (uVar6 != 0) {
      for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    lVar9 = lVar9 + (ulong)((int)lVar5 * 9 + 0x49U >> 6) + 1;
  }
  if (((char)uVar3 < '\0') && (*(ulong *)(param_1 + 0x48) != 0)) {
    uVar6 = *(ulong *)(param_1 + 0x48) | 1;
    lVar5 = 0x3f;
    if (uVar6 != 0) {
      for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    lVar9 = lVar9 + (ulong)((int)lVar5 * 9 + 0x89U >> 6);
  }
code_r0x0041ec1b:
  if ((uVar3 & 0x300) != 0) {
    if (((uVar3 & 0x100) != 0) && (*(ulong *)(param_1 + 0x50) != 0)) {
      uVar6 = *(ulong *)(param_1 + 0x50) | 1;
      lVar5 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      lVar9 = lVar9 + (ulong)((int)lVar5 * 9 + 0x89U >> 6);
    }
    if (((uVar3 & 0x200) != 0) && (*(ulong *)(param_1 + 0x58) != 0)) {
      uVar6 = *(ulong *)(param_1 + 0x58) | 1;
      lVar5 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      lVar9 = lVar9 + (ulong)((int)lVar5 * 9 + 0x89U >> 6);
    }
  }
  piVar1 = (int *)(param_1 + 0x14);
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    if (((int)lVar9 != 0) || (*piVar1 != 0)) {
      *piVar1 = (int)lVar9;
    }
    return lVar9;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    puVar10 = _ZZN6google8protobuf15UnknownFieldSet16default_instanceEvE8instance;
  }
  else {
    puVar10 = (undefined1 *)((*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8);
  }
  lVar5 = _ZN6google8protobuf8internal10WireFormat24ComputeUnknownFieldsSizeERKNS0_15UnknownFieldSetE
                    (puVar10);
  iVar4 = (int)(lVar5 + lVar9);
  if ((iVar4 != 0) || (*piVar1 != 0)) {
    *piVar1 = iVar4;
  }
  return lVar5 + lVar9;
}


