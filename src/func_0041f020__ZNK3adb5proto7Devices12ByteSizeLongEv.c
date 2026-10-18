// Function: _ZNK3adb5proto7Devices12ByteSizeLongEv
// Address: 0041f020
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long _ZNK3adb5proto7Devices12ByteSizeLongEv(long param_1)

{
  int *piVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    lVar9 = (long)*(int *)(param_1 + 0x20);
    lVar6 = *(ulong *)(param_1 + 0x18) + 7;
    if ((*(ulong *)(param_1 + 0x18) & 1) == 0) {
      lVar6 = param_1 + 0x18;
    }
    if (lVar9 != 0) {
      lVar2 = lVar9 * 8;
      lVar8 = 0;
      do {
        lVar5 = _ZNK3adb5proto6Device12ByteSizeLongEv(*(undefined8 *)(lVar6 + lVar8));
        uVar3 = (uint)lVar5 | 1;
        iVar4 = 0x1f;
        if (uVar3 != 0) {
          for (; uVar3 >> iVar4 == 0; iVar4 = iVar4 + -1) {
          }
        }
        lVar9 = lVar9 + lVar5 + (ulong)(iVar4 * 9 + 0x49U >> 6);
        lVar8 = lVar8 + 8;
      } while (lVar2 - lVar8 != 0);
      goto code_r0x0041f0bc;
    }
  }
  lVar9 = 0;
code_r0x0041f0bc:
  piVar1 = (int *)(param_1 + 0x14);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      puVar7 = _ZZN6google8protobuf15UnknownFieldSet16default_instanceEvE8instance;
    }
    else {
      puVar7 = (undefined1 *)((*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8);
    }
    lVar6 = _ZN6google8protobuf8internal10WireFormat24ComputeUnknownFieldsSizeERKNS0_15UnknownFieldSetE
                      (puVar7);
    iVar4 = (int)(lVar6 + lVar9);
    if ((iVar4 != 0) || (*piVar1 != 0)) {
      *piVar1 = iVar4;
    }
    return lVar6 + lVar9;
  }
  if (((int)lVar9 != 0) || (*piVar1 != 0)) {
    *piVar1 = (int)lVar9;
  }
  return lVar9;
}


