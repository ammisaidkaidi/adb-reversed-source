// Function: _ZNK3adb5proto13ServiceAdbTls12ByteSizeLongEv
// Address: 00421810
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long _ZNK3adb5proto13ServiceAdbTls12ByteSizeLongEv(long param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  undefined1 *puVar7;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 & 3) == 0) {
    lVar4 = 0;
  }
  else {
    if ((uVar2 & 1) == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = _ZNK3adb5proto11MdnsService12ByteSizeLongEv(*(undefined8 *)(param_1 + 0x18));
      uVar6 = (uint)lVar4 | 1;
      iVar3 = 0x1f;
      if (uVar6 != 0) {
        for (; uVar6 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      lVar4 = lVar4 + (ulong)(iVar3 * 9 + 0x49U >> 6) + 1;
    }
    if ((uVar2 & 2) != 0) {
      lVar4 = lVar4 + (ulong)*(byte *)(param_1 + 0x20) * 2;
    }
  }
  piVar1 = (int *)(param_1 + 0x14);
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    if (((int)lVar4 != 0) || (*piVar1 != 0)) {
      *piVar1 = (int)lVar4;
    }
    return lVar4;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    puVar7 = _ZZN6google8protobuf15UnknownFieldSet16default_instanceEvE8instance;
  }
  else {
    puVar7 = (undefined1 *)((*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8);
  }
  lVar5 = _ZN6google8protobuf8internal10WireFormat24ComputeUnknownFieldsSizeERKNS0_15UnknownFieldSetE
                    (puVar7);
  iVar3 = (int)(lVar5 + lVar4);
  if ((iVar3 != 0) || (*piVar1 != 0)) {
    *piVar1 = iVar3;
  }
  return lVar5 + lVar4;
}


