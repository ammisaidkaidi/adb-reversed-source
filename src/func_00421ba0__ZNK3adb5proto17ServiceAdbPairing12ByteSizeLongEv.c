// Function: _ZNK3adb5proto17ServiceAdbPairing12ByteSizeLongEv
// Address: 00421ba0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long _ZNK3adb5proto17ServiceAdbPairing12ByteSizeLongEv(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  int *piVar5;
  undefined1 *puVar6;
  
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = _ZNK3adb5proto11MdnsService12ByteSizeLongEv(*(undefined8 *)(param_1 + 0x18));
    uVar4 = (uint)lVar2 | 1;
    iVar1 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar1 == 0; iVar1 = iVar1 + -1) {
      }
    }
    lVar2 = lVar2 + (ulong)(iVar1 * 9 + 0x49U >> 6) + 1;
  }
  piVar5 = (int *)(param_1 + 0x14);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      puVar6 = _ZZN6google8protobuf15UnknownFieldSet16default_instanceEvE8instance;
    }
    else {
      puVar6 = (undefined1 *)((*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8);
    }
    lVar3 = _ZN6google8protobuf8internal10WireFormat24ComputeUnknownFieldsSizeERKNS0_15UnknownFieldSetE
                      (puVar6);
    iVar1 = (int)(lVar3 + lVar2);
    if ((iVar1 != 0) || (*piVar5 != 0)) {
      *piVar5 = iVar1;
    }
    return lVar3 + lVar2;
  }
  if (((int)lVar2 != 0) || (*piVar5 != 0)) {
    *piVar5 = (int)lVar2;
  }
  return lVar2;
}


