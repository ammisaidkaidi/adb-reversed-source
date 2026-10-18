// Function: _ZNK3adb5proto13AdbKnownHosts12ByteSizeLongEv
// Address: 00423bf0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long _ZNK3adb5proto13AdbKnownHosts12ByteSizeLongEv(long param_1)

{
  int *piVar1;
  long lVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  byte *pbVar9;
  long lVar10;
  undefined1 *puVar11;
  long lVar12;
  long lVar13;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    lVar13 = (long)*(int *)(param_1 + 0x20);
    lVar8 = *(ulong *)(param_1 + 0x18) + 7;
    if ((*(ulong *)(param_1 + 0x18) & 1) == 0) {
      lVar8 = param_1 + 0x18;
    }
    if (lVar13 != 0) {
      lVar2 = lVar13 * 8;
      lVar12 = 0;
      do {
        lVar6 = *(long *)(lVar8 + lVar12);
        if ((*(byte *)(lVar6 + 0x10) & 1) == 0) {
code_r0x00423c60:
          lVar10 = 0;
        }
        else {
          pbVar9 = (byte *)(*(ulong *)(lVar6 + 0x18) & 0xfffffffffffffffc);
          bVar3 = *pbVar9;
          if ((bVar3 & 1) == 0) {
            uVar7 = (ulong)(bVar3 >> 1);
          }
          else {
            uVar7 = *(ulong *)(pbVar9 + 8);
          }
          if (uVar7 == 0) goto code_r0x00423c60;
          uVar4 = (uint)uVar7 | 1;
          iVar5 = 0x1f;
          if (uVar4 != 0) {
            for (; uVar4 >> iVar5 == 0; iVar5 = iVar5 + -1) {
            }
          }
          lVar10 = uVar7 + (iVar5 * 9 + 0x49U >> 6) + 1;
        }
        lVar6 = _ZNK6google8protobuf7Message29MaybeComputeUnknownFieldsSizeEmPKNS0_8internal10CachedSizeE
                          (lVar6,lVar10,lVar6 + 0x14);
        uVar4 = (uint)lVar6 | 1;
        iVar5 = 0x1f;
        if (uVar4 != 0) {
          for (; uVar4 >> iVar5 == 0; iVar5 = iVar5 + -1) {
          }
        }
        lVar13 = lVar13 + lVar6 + (ulong)(iVar5 * 9 + 0x49U >> 6);
        lVar12 = lVar12 + 8;
      } while (lVar2 - lVar12 != 0);
      goto code_r0x00423cd4;
    }
  }
  lVar13 = 0;
code_r0x00423cd4:
  piVar1 = (int *)(param_1 + 0x14);
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    if (((int)lVar13 != 0) || (*piVar1 != 0)) {
      *piVar1 = (int)lVar13;
    }
    return lVar13;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    puVar11 = _ZZN6google8protobuf15UnknownFieldSet16default_instanceEvE8instance;
  }
  else {
    puVar11 = (undefined1 *)((*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8);
  }
  lVar8 = _ZN6google8protobuf8internal10WireFormat24ComputeUnknownFieldsSizeERKNS0_15UnknownFieldSetE
                    (puVar11);
  iVar5 = (int)(lVar8 + lVar13);
  if ((iVar5 != 0) || (*piVar1 != 0)) {
    *piVar1 = iVar5;
  }
  return lVar8 + lVar13;
}


