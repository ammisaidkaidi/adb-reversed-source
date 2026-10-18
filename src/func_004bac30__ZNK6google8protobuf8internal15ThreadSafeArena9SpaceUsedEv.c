// Function: _ZNK6google8protobuf8internal15ThreadSafeArena9SpaceUsedEv
// Address: 004bac30
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long _ZNK6google8protobuf8internal15ThreadSafeArena9SpaceUsedEv(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  
  if (*(long *)(param_1 + 0x60) == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = ((ulong)*(ushort *)(*(long *)(param_1 + 0x60) + 8) - *(long *)(param_1 + 0x70)) + -0x10;
  }
  uVar2 = *(ulong *)(*(long *)(param_1 + 0x38) + 8);
  if (uVar2 != 0) {
    uVar9 = (*(long *)(param_1 + 0x40) - *(long *)(param_1 + 0x38)) - 0x10;
    if (uVar2 < uVar9) {
      uVar9 = uVar2;
    }
    lVar6 = *(long *)(param_1 + 0x98) + lVar6 + uVar9;
  }
  puVar7 = *(undefined8 **)(param_1 + 0x10);
  uVar8 = *(uint *)(puVar7 + 1);
  while (uVar8 != 0) {
    uVar1 = *(uint *)((long)puVar7 + 0xc);
    uVar4 = uVar8;
    if (uVar1 < uVar8) {
      uVar4 = uVar1;
    }
    puVar5 = (undefined8 *)*puVar7;
    if (uVar1 != 0) {
      lVar10 = 0;
      do {
        lVar3 = *(long *)((long)puVar7 + lVar10 + (ulong)uVar8 * 8 + 0x10);
        if (lVar3 != 0) {
          if (*(long *)(lVar3 + 0x38) == 0) {
            lVar11 = 0;
          }
          else {
            lVar11 = ((ulong)*(ushort *)(*(long *)(lVar3 + 0x38) + 8) - *(long *)(lVar3 + 0x48)) +
                     -0x10;
          }
          uVar2 = *(ulong *)(*(long *)(lVar3 + 0x10) + 8);
          if (uVar2 != 0) {
            uVar9 = (*(long *)(lVar3 + 0x18) - *(long *)(lVar3 + 0x10)) - 0x10;
            if (uVar2 < uVar9) {
              uVar9 = uVar2;
            }
            lVar11 = *(long *)(lVar3 + 0x70) + lVar11 + uVar9;
          }
          lVar6 = lVar6 + lVar11 + -0x78;
        }
        lVar10 = lVar10 + 8;
      } while ((ulong)uVar4 * 8 != lVar10);
      puVar5 = (undefined8 *)*puVar7;
    }
    puVar7 = puVar5;
    uVar8 = *(uint *)(puVar7 + 1);
  }
  return lVar6 + (ulong)(*(ulong *)(param_1 + 8) < 8) * 0x20 + -0x20;
}


