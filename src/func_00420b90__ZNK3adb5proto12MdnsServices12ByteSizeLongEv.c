// Function: _ZNK3adb5proto12MdnsServices12ByteSizeLongEv
// Address: 00420b90
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long _ZNK3adb5proto12MdnsServices12ByteSizeLongEv(long param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  
  uVar3 = *(uint *)(param_1 + 0x10);
  if ((uVar3 & 7) == 0) {
    lVar12 = 0;
    goto code_r0x00420e0d;
  }
  if ((uVar3 & 1) == 0) {
code_r0x00420c6a:
    lVar12 = 0;
  }
  else {
    lVar12 = (long)*(int *)(param_1 + 0x20);
    lVar7 = *(ulong *)(param_1 + 0x18) + 7;
    if ((*(ulong *)(param_1 + 0x18) & 1) == 0) {
      lVar7 = param_1 + 0x18;
    }
    if (lVar12 == 0) goto code_r0x00420c6a;
    lVar9 = lVar12 * 8;
    lVar11 = 0;
    do {
      lVar5 = *(long *)(lVar7 + lVar11);
      if ((*(byte *)(lVar5 + 0x10) & 1) == 0) {
        lVar6 = 0;
      }
      else {
        lVar6 = _ZNK3adb5proto11MdnsService12ByteSizeLongEv(*(undefined8 *)(lVar5 + 0x18));
        uVar2 = (uint)lVar6 | 1;
        iVar4 = 0x1f;
        if (uVar2 != 0) {
          for (; uVar2 >> iVar4 == 0; iVar4 = iVar4 + -1) {
          }
        }
        lVar6 = lVar6 + (ulong)(iVar4 * 9 + 0x49U >> 6) + 1;
      }
      lVar5 = _ZNK6google8protobuf7Message29MaybeComputeUnknownFieldsSizeEmPKNS0_8internal10CachedSizeE
                        (lVar5,lVar6,lVar5 + 0x14);
      uVar2 = (uint)lVar5 | 1;
      iVar4 = 0x1f;
      if (uVar2 != 0) {
        for (; uVar2 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      lVar12 = lVar12 + lVar5 + (ulong)(iVar4 * 9 + 0x49U >> 6);
      lVar11 = lVar11 + 8;
    } while (lVar9 - lVar11 != 0);
  }
  if ((uVar3 & 2) != 0) {
    lVar9 = (long)*(int *)(param_1 + 0x38);
    lVar12 = lVar12 + lVar9;
    lVar7 = *(ulong *)(param_1 + 0x30) + 7;
    if ((*(ulong *)(param_1 + 0x30) & 1) == 0) {
      lVar7 = param_1 + 0x30;
    }
    if (lVar9 != 0) {
      lVar11 = 0;
      do {
        lVar5 = *(long *)(lVar7 + lVar11);
        uVar2 = *(uint *)(lVar5 + 0x10);
        if ((uVar2 & 3) == 0) {
          lVar6 = 0;
        }
        else {
          if ((uVar2 & 1) == 0) {
            lVar6 = 0;
          }
          else {
            lVar6 = _ZNK3adb5proto11MdnsService12ByteSizeLongEv(*(undefined8 *)(lVar5 + 0x18));
            uVar8 = (uint)lVar6 | 1;
            iVar4 = 0x1f;
            if (uVar8 != 0) {
              for (; uVar8 >> iVar4 == 0; iVar4 = iVar4 + -1) {
              }
            }
            lVar6 = lVar6 + (ulong)(iVar4 * 9 + 0x49U >> 6) + 1;
          }
          if ((uVar2 & 2) != 0) {
            lVar6 = lVar6 + (ulong)*(byte *)(lVar5 + 0x20) * 2;
          }
        }
        lVar5 = _ZNK6google8protobuf7Message29MaybeComputeUnknownFieldsSizeEmPKNS0_8internal10CachedSizeE
                          (lVar5,lVar6,lVar5 + 0x14);
        uVar2 = (uint)lVar5 | 1;
        iVar4 = 0x1f;
        if (uVar2 != 0) {
          for (; uVar2 >> iVar4 == 0; iVar4 = iVar4 + -1) {
          }
        }
        lVar12 = lVar12 + lVar5 + (ulong)(iVar4 * 9 + 0x49U >> 6);
        lVar11 = lVar11 + 8;
      } while (lVar9 << 3 != lVar11);
    }
  }
  if ((uVar3 & 4) != 0) {
    lVar9 = (long)*(int *)(param_1 + 0x50);
    lVar12 = lVar12 + lVar9;
    lVar7 = *(ulong *)(param_1 + 0x48) + 7;
    if ((*(ulong *)(param_1 + 0x48) & 1) == 0) {
      lVar7 = param_1 + 0x48;
    }
    if (lVar9 != 0) {
      lVar11 = 0;
      do {
        lVar5 = *(long *)(lVar7 + lVar11);
        if ((*(byte *)(lVar5 + 0x10) & 1) == 0) {
          lVar6 = 0;
        }
        else {
          lVar6 = _ZNK3adb5proto11MdnsService12ByteSizeLongEv(*(undefined8 *)(lVar5 + 0x18));
          uVar3 = (uint)lVar6 | 1;
          iVar4 = 0x1f;
          if (uVar3 != 0) {
            for (; uVar3 >> iVar4 == 0; iVar4 = iVar4 + -1) {
            }
          }
          lVar6 = lVar6 + (ulong)(iVar4 * 9 + 0x49U >> 6) + 1;
        }
        lVar5 = _ZNK6google8protobuf7Message29MaybeComputeUnknownFieldsSizeEmPKNS0_8internal10CachedSizeE
                          (lVar5,lVar6,lVar5 + 0x14);
        uVar3 = (uint)lVar5 | 1;
        iVar4 = 0x1f;
        if (uVar3 != 0) {
          for (; uVar3 >> iVar4 == 0; iVar4 = iVar4 + -1) {
          }
        }
        lVar12 = lVar12 + lVar5 + (ulong)(iVar4 * 9 + 0x49U >> 6);
        lVar11 = lVar11 + 8;
      } while (lVar9 * 8 != lVar11);
    }
  }
code_r0x00420e0d:
  piVar1 = (int *)(param_1 + 0x14);
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    if (((int)lVar12 != 0) || (*piVar1 != 0)) {
      *piVar1 = (int)lVar12;
    }
    return lVar12;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    puVar10 = _ZZN6google8protobuf15UnknownFieldSet16default_instanceEvE8instance;
  }
  else {
    puVar10 = (undefined1 *)((*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8);
  }
  lVar7 = _ZN6google8protobuf8internal10WireFormat24ComputeUnknownFieldsSizeERKNS0_15UnknownFieldSetE
                    (puVar10);
  iVar4 = (int)(lVar7 + lVar12);
  if ((iVar4 != 0) || (*piVar1 != 0)) {
    *piVar1 = iVar4;
  }
  return lVar7 + lVar12;
}


