// Function: _ZNK3adb5proto8HostInfo12ByteSizeLongEv
// Address: 00423830
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long _ZNK3adb5proto8HostInfo12ByteSizeLongEv(long param_1)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  byte *pbVar6;
  int *piVar7;
  long lVar8;
  undefined1 *puVar9;
  
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    lVar8 = 0;
  }
  else {
    pbVar6 = (byte *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
    bVar1 = *pbVar6;
    if ((bVar1 & 1) == 0) {
      uVar3 = (ulong)(bVar1 >> 1);
    }
    else {
      uVar3 = *(ulong *)(pbVar6 + 8);
    }
    if (uVar3 == 0) {
      lVar8 = 0;
    }
    else {
      uVar5 = (uint)uVar3 | 1;
      iVar2 = 0x1f;
      if (uVar5 != 0) {
        for (; uVar5 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      lVar8 = uVar3 + (iVar2 * 9 + 0x49U >> 6) + 1;
    }
  }
  piVar7 = (int *)(param_1 + 0x14);
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    if (((int)lVar8 != 0) || (*piVar7 != 0)) {
      *piVar7 = (int)lVar8;
    }
    return lVar8;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    puVar9 = _ZZN6google8protobuf15UnknownFieldSet16default_instanceEvE8instance;
  }
  else {
    puVar9 = (undefined1 *)((*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8);
  }
  lVar4 = _ZN6google8protobuf8internal10WireFormat24ComputeUnknownFieldsSizeERKNS0_15UnknownFieldSetE
                    (puVar9);
  iVar2 = (int)(lVar4 + lVar8);
  if ((iVar2 != 0) || (*piVar7 != 0)) {
    *piVar7 = iVar2;
  }
  return lVar4 + lVar8;
}


