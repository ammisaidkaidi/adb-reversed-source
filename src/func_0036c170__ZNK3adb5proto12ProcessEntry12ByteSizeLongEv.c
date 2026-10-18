// Function: _ZNK3adb5proto12ProcessEntry12ByteSizeLongEv
// Address: 0036c170
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _ZNK3adb5proto12ProcessEntry12ByteSizeLongEv(long param_1)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  byte *pbVar8;
  ulong uVar9;
  undefined1 *puVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong uVar13;
  uint uVar14;
  
  uVar3 = *(uint *)(param_1 + 0x10);
  uVar9 = (ulong)(uVar3 >> 7 & 2);
  if ((char)uVar3 != '\0') {
    if ((uVar3 & 1) != 0) {
      uVar7 = (ulong)*(uint *)(param_1 + 0x20);
      uVar9 = uVar9 + uVar7;
      if (0 < (int)*(uint *)(param_1 + 0x20)) {
        uVar4 = *(ulong *)(param_1 + 0x18);
        puVar11 = (ulong *)(uVar4 + 7);
        do {
          puVar12 = puVar11;
          if ((uVar4 & 1) == 0) {
            puVar12 = (ulong *)(param_1 + 0x18);
          }
          bVar2 = *(byte *)*puVar12;
          if ((bVar2 & 1) == 0) {
            uVar13 = (ulong)(bVar2 >> 1);
          }
          else {
            uVar13 = *(ulong *)((byte *)*puVar12 + 8);
          }
          uVar14 = (uint)uVar13 | 1;
          iVar5 = 0x1f;
          if (uVar14 != 0) {
            for (; uVar14 >> iVar5 == 0; iVar5 = iVar5 + -1) {
            }
          }
          uVar9 = uVar9 + uVar13 + (ulong)(iVar5 * 9 + 0x49U >> 6);
          puVar11 = puVar11 + 1;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
    }
    if ((uVar3 & 2) != 0) {
      pbVar8 = (byte *)(*(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc);
      bVar2 = *pbVar8;
      if ((bVar2 & 1) == 0) {
        uVar7 = (ulong)(bVar2 >> 1);
      }
      else {
        uVar7 = *(ulong *)(pbVar8 + 8);
      }
      if (uVar7 != 0) {
        uVar14 = (uint)uVar7 | 1;
        iVar5 = 0x1f;
        if (uVar14 != 0) {
          for (; uVar14 >> iVar5 == 0; iVar5 = iVar5 + -1) {
          }
        }
        uVar9 = uVar9 + uVar7 + (ulong)(iVar5 * 9 + 0x49U >> 6) + 1;
      }
    }
    if ((uVar3 & 4) != 0) {
      pbVar8 = (byte *)(*(ulong *)(param_1 + 0x38) & 0xfffffffffffffffc);
      bVar2 = *pbVar8;
      if ((bVar2 & 1) == 0) {
        uVar7 = (ulong)(bVar2 >> 1);
      }
      else {
        uVar7 = *(ulong *)(pbVar8 + 8);
      }
      uVar14 = (uint)uVar7 | 1;
      iVar5 = 0x1f;
      if (uVar14 != 0) {
        for (; uVar14 >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      uVar9 = uVar9 + uVar7 + (ulong)(iVar5 * 9 + 0x49U >> 6) + 1;
    }
    if (((uVar3 & 8) != 0) && (*(ulong *)(param_1 + 0x40) != 0)) {
      uVar7 = *(ulong *)(param_1 + 0x40) | 1;
      lVar6 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      uVar9 = uVar9 + ((int)lVar6 * 9 + 0x89U >> 6);
    }
    if ((uVar3 & 0x10) != 0) {
      uVar7 = *(ulong *)(param_1 + 0x48) | 1;
      lVar6 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      uVar9 = uVar9 + ((int)lVar6 * 9 + 0x89U >> 6);
    }
    if ((uVar3 & 0x20) != 0) {
      uVar7 = *(ulong *)(param_1 + 0x50) | 1;
      lVar6 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      uVar9 = uVar9 + ((int)lVar6 * 9 + 0x89U >> 6);
    }
    uVar7 = 0;
    if ((uVar3 & 0x40) != 0) {
      uVar7 = (ulong)((uint)*(byte *)(param_1 + 0x58) * 2);
    }
    uVar9 = uVar7 + uVar9;
    if ((char)uVar3 < '\0') {
      uVar9 = uVar9 + (ulong)*(byte *)(param_1 + 0x59) * 2;
    }
  }
  piVar1 = (int *)(param_1 + 0x14);
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    if (((int)uVar9 != 0) || (*piVar1 != 0)) {
      *piVar1 = (int)uVar9;
    }
    return uVar9;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    puVar10 = _ZZN6google8protobuf15UnknownFieldSet16default_instanceEvE8instance;
  }
  else {
    puVar10 = (undefined1 *)((*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8);
  }
  lVar6 = _ZN6google8protobuf8internal10WireFormat24ComputeUnknownFieldsSizeERKNS0_15UnknownFieldSetE
                    (puVar10);
  iVar5 = (int)(lVar6 + uVar9);
  if ((iVar5 != 0) || (*piVar1 != 0)) {
    *piVar1 = iVar5;
  }
  return lVar6 + uVar9;
}


