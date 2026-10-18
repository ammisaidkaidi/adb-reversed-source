// Function: _ZNK6google8protobuf8internal15ThreadSafeArena14SpaceAllocatedEv
// Address: 004ba6c0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long _ZNK6google8protobuf8internal15ThreadSafeArena14SpaceAllocatedEv(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  uint uVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  
  lVar4 = *(long *)(param_1 + 0x50);
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  uVar6 = *(uint *)(puVar5 + 1);
  while (uVar6 != 0) {
    uVar1 = *(uint *)((long)puVar5 + 0xc);
    uVar2 = uVar6;
    if (uVar1 < uVar6) {
      uVar2 = uVar1;
    }
    puVar3 = (undefined8 *)*puVar5;
    if (uVar1 != 0) {
      plVar8 = puVar5 + (ulong)uVar6 + 2;
      uVar9 = (ulong)uVar2 * 8 - 8;
      plVar7 = plVar8;
      if ((~(uint)uVar9 & 0x18) != 0) {
        uVar10 = (ulong)(((uint)(uVar9 >> 3) & 0x1fffffff) + 1 & 3);
        do {
          if (*plVar7 != 0) {
            lVar4 = lVar4 + *(long *)(*plVar7 + 0x28);
          }
          plVar7 = plVar7 + 1;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      if (0x17 < uVar9) {
        do {
          if (*plVar7 != 0) {
            lVar4 = lVar4 + *(long *)(*plVar7 + 0x28);
          }
          if (plVar7[1] != 0) {
            lVar4 = lVar4 + *(long *)(plVar7[1] + 0x28);
          }
          if (plVar7[2] != 0) {
            lVar4 = lVar4 + *(long *)(plVar7[2] + 0x28);
          }
          if (plVar7[3] != 0) {
            lVar4 = lVar4 + *(long *)(plVar7[3] + 0x28);
          }
          plVar7 = plVar7 + 4;
        } while (plVar7 != plVar8 + uVar2);
      }
      puVar3 = (undefined8 *)*puVar5;
    }
    puVar5 = puVar3;
    uVar6 = *(uint *)(puVar5 + 1);
  }
  return lVar4;
}


