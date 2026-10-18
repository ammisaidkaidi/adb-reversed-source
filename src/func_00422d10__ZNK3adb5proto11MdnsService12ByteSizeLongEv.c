// Function: _ZNK3adb5proto11MdnsService12ByteSizeLongEv
// Address: 00422d10
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Type propagation algorithm not settling */

ulong _ZNK3adb5proto11MdnsService12ByteSizeLongEv(long param_1)

{
  int *piVar1;
  byte bVar2;
  ulong uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  byte *pbVar9;
  ulong uVar10;
  undefined1 *puVar11;
  ulong *puVar12;
  ulong *puVar13;
  ulong uVar14;
  
  uVar4 = *(uint *)(param_1 + 0x10);
  if ((char)uVar4 == '\0') {
    uVar10 = 0;
  }
  else {
    if ((uVar4 & 1) == 0) {
      uVar10 = 0;
    }
    else {
      uVar7 = (ulong)*(uint *)(param_1 + 0x20);
      uVar10 = uVar7;
      if (0 < (int)*(uint *)(param_1 + 0x20)) {
        uVar3 = *(ulong *)(param_1 + 0x18);
        puVar12 = (ulong *)(uVar3 + 7);
        do {
          puVar13 = puVar12;
          if ((uVar3 & 1) == 0) {
            puVar13 = (ulong *)(param_1 + 0x18);
          }
          bVar2 = *(byte *)*puVar13;
          if ((bVar2 & 1) == 0) {
            uVar14 = (ulong)(bVar2 >> 1);
          }
          else {
            uVar14 = *(ulong *)((byte *)*puVar13 + 8);
          }
          uVar8 = (uint)uVar14 | 1;
          iVar5 = 0x1f;
          if (uVar8 != 0) {
            for (; uVar8 >> iVar5 == 0; iVar5 = iVar5 + -1) {
            }
          }
          uVar10 = uVar10 + uVar14 + (ulong)(iVar5 * 9 + 0x49U >> 6);
          puVar12 = puVar12 + 1;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
    }
    if ((uVar4 & 2) != 0) {
      pbVar9 = (byte *)(*(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc);
      bVar2 = *pbVar9;
      if ((bVar2 & 1) == 0) {
        uVar7 = (ulong)(bVar2 >> 1);
      }
      else {
        uVar7 = *(ulong *)(pbVar9 + 8);
      }
      if (uVar7 != 0) {
        uVar8 = (uint)uVar7 | 1;
        iVar5 = 0x1f;
        if (uVar8 != 0) {
          for (; uVar8 >> iVar5 == 0; iVar5 = iVar5 + -1) {
          }
        }
        uVar10 = uVar10 + uVar7 + (ulong)(iVar5 * 9 + 0x49U >> 6) + 1;
      }
    }
    if ((uVar4 & 4) != 0) {
      pbVar9 = (byte *)(*(ulong *)(param_1 + 0x38) & 0xfffffffffffffffc);
      bVar2 = *pbVar9;
      if ((bVar2 & 1) == 0) {
        uVar7 = (ulong)(bVar2 >> 1);
      }
      else {
        uVar7 = *(ulong *)(pbVar9 + 8);
      }
      if (uVar7 != 0) {
        uVar8 = (uint)uVar7 | 1;
        iVar5 = 0x1f;
        if (uVar8 != 0) {
          for (; uVar8 >> iVar5 == 0; iVar5 = iVar5 + -1) {
          }
        }
        uVar10 = uVar10 + uVar7 + (ulong)(iVar5 * 9 + 0x49U >> 6) + 1;
      }
    }
    if ((uVar4 & 8) != 0) {
      pbVar9 = (byte *)(*(ulong *)(param_1 + 0x40) & 0xfffffffffffffffc);
      bVar2 = *pbVar9;
      if ((bVar2 & 1) == 0) {
        uVar7 = (ulong)(bVar2 >> 1);
      }
      else {
        uVar7 = *(ulong *)(pbVar9 + 8);
      }
      if (uVar7 != 0) {
        uVar8 = (uint)uVar7 | 1;
        iVar5 = 0x1f;
        if (uVar8 != 0) {
          for (; uVar8 >> iVar5 == 0; iVar5 = iVar5 + -1) {
          }
        }
        uVar10 = uVar10 + uVar7 + (ulong)(iVar5 * 9 + 0x49U >> 6) + 1;
      }
    }
    if ((uVar4 & 0x10) != 0) {
      pbVar9 = (byte *)(*(ulong *)(param_1 + 0x48) & 0xfffffffffffffffc);
      bVar2 = *pbVar9;
      if ((bVar2 & 1) == 0) {
        uVar7 = (ulong)(bVar2 >> 1);
      }
      else {
        uVar7 = *(ulong *)(pbVar9 + 8);
      }
      uVar8 = (uint)uVar7 | 1;
      iVar5 = 0x1f;
      if (uVar8 != 0) {
        for (; uVar8 >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      uVar10 = uVar10 + uVar7 + (ulong)(iVar5 * 9 + 0x49U >> 6) + 1;
    }
    if ((uVar4 & 0x20) != 0) {
      pbVar9 = (byte *)(*(ulong *)(param_1 + 0x50) & 0xfffffffffffffffc);
      bVar2 = *pbVar9;
      if ((bVar2 & 1) == 0) {
        uVar7 = (ulong)(bVar2 >> 1);
      }
      else {
        uVar7 = *(ulong *)(pbVar9 + 8);
      }
      uVar8 = (uint)uVar7 | 1;
      iVar5 = 0x1f;
      if (uVar8 != 0) {
        for (; uVar8 >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      uVar10 = uVar10 + uVar7 + (ulong)(iVar5 * 9 + 0x49U >> 6) + 1;
    }
    if ((uVar4 & 0x40) != 0) {
      pbVar9 = (byte *)(*(ulong *)(param_1 + 0x58) & 0xfffffffffffffffc);
      bVar2 = *pbVar9;
      if ((bVar2 & 1) == 0) {
        uVar7 = (ulong)(bVar2 >> 1);
      }
      else {
        uVar7 = *(ulong *)(pbVar9 + 8);
      }
      uVar8 = (uint)uVar7 | 1;
      iVar5 = 0x1f;
      if (uVar8 != 0) {
        for (; uVar8 >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      uVar10 = uVar10 + uVar7 + (ulong)(iVar5 * 9 + 0x49U >> 6) + 1;
    }
    if ((char)uVar4 < '\0') {
      pbVar9 = (byte *)(*(ulong *)(param_1 + 0x60) & 0xfffffffffffffffc);
      bVar2 = *pbVar9;
      if ((bVar2 & 1) == 0) {
        uVar7 = (ulong)(bVar2 >> 1);
      }
      else {
        uVar7 = *(ulong *)(pbVar9 + 8);
      }
      uVar8 = (uint)uVar7 | 1;
      iVar5 = 0x1f;
      if (uVar8 != 0) {
        for (; uVar8 >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      uVar10 = uVar10 + uVar7 + (ulong)(iVar5 * 9 + 0x49U >> 6) + 1;
    }
  }
  if ((uVar4 & 0xf00) != 0) {
    if ((uVar4 & 0x100) != 0) {
      pbVar9 = (byte *)(*(ulong *)(param_1 + 0x68) & 0xfffffffffffffffc);
      bVar2 = *pbVar9;
      if ((bVar2 & 1) == 0) {
        uVar7 = (ulong)(bVar2 >> 1);
      }
      else {
        uVar7 = *(ulong *)(pbVar9 + 8);
      }
      uVar8 = (uint)uVar7 | 1;
      iVar5 = 0x1f;
      if (uVar8 != 0) {
        for (; uVar8 >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      uVar10 = uVar10 + uVar7 + (ulong)(iVar5 * 9 + 0x49U >> 6) + 1;
    }
    if ((uVar4 & 0x200) != 0) {
      pbVar9 = (byte *)(*(ulong *)(param_1 + 0x70) & 0xfffffffffffffffc);
      bVar2 = *pbVar9;
      if ((bVar2 & 1) == 0) {
        uVar7 = (ulong)(bVar2 >> 1);
      }
      else {
        uVar7 = *(ulong *)(pbVar9 + 8);
      }
      uVar8 = (uint)uVar7 | 1;
      iVar5 = 0x1f;
      if (uVar8 != 0) {
        for (; uVar8 >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      uVar10 = uVar10 + uVar7 + (ulong)(iVar5 * 9 + 0x49U >> 6) + 1;
    }
    if ((uVar4 & 0x400) != 0) {
      pbVar9 = (byte *)(*(ulong *)(param_1 + 0x78) & 0xfffffffffffffffc);
      bVar2 = *pbVar9;
      if ((bVar2 & 1) == 0) {
        uVar7 = (ulong)(bVar2 >> 1);
      }
      else {
        uVar7 = *(ulong *)(pbVar9 + 8);
      }
      uVar8 = (uint)uVar7 | 1;
      iVar5 = 0x1f;
      if (uVar8 != 0) {
        for (; uVar8 >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      uVar10 = uVar10 + uVar7 + (ulong)(iVar5 * 9 + 0x49U >> 6) + 1;
    }
    if (((uVar4 & 0x800) != 0) && (*(uint *)(param_1 + 0x80) != 0)) {
      uVar4 = *(uint *)(param_1 + 0x80) | 1;
      iVar5 = 0x1f;
      if (uVar4 != 0) {
        for (; uVar4 >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      uVar10 = uVar10 + (iVar5 * 9 + 0x89U >> 6);
    }
  }
  piVar1 = (int *)(param_1 + 0x14);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      puVar11 = _ZZN6google8protobuf15UnknownFieldSet16default_instanceEvE8instance;
    }
    else {
      puVar11 = (undefined1 *)((*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8);
    }
    lVar6 = _ZN6google8protobuf8internal10WireFormat24ComputeUnknownFieldsSizeERKNS0_15UnknownFieldSetE
                      (puVar11);
    iVar5 = (int)(lVar6 + uVar10);
    if ((iVar5 != 0) || (*piVar1 != 0)) {
      *piVar1 = iVar5;
    }
    return lVar6 + uVar10;
  }
  if (((int)uVar10 != 0) || (*piVar1 != 0)) {
    *piVar1 = (int)uVar10;
  }
  return uVar10;
}


