// Function: _ZNK6google8protobuf8internal15ThreadSafeArena22UnpoisonAllArenaBlocksEv
// Address: 004b9fb0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZNK6google8protobuf8internal15ThreadSafeArena22UnpoisonAllArenaBlocksEv(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  
  puVar3 = *(undefined8 **)(param_1 + 0x10);
  uVar4 = *(uint *)(puVar3 + 1);
  while (uVar4 != 0) {
    uVar1 = *(uint *)((long)puVar3 + 0xc);
    uVar2 = uVar4;
    if (uVar1 < uVar4) {
      uVar2 = uVar1;
    }
    puVar5 = (undefined8 *)*puVar3;
    if (uVar1 != 0) {
      puVar6 = puVar3 + (ulong)uVar4 + 2;
      uVar7 = (ulong)uVar2 * 8 - 8;
      puVar5 = puVar6;
      if ((~(uint)uVar7 & 0x18) != 0) {
        uVar8 = (ulong)(((uint)(uVar7 >> 3) & 0x1fffffff) + 1 & 3);
        do {
          puVar5 = puVar5 + 1;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      if (0x17 < uVar7) {
        do {
          puVar5 = puVar5 + 4;
        } while (puVar5 != puVar6 + uVar2);
      }
      puVar5 = (undefined8 *)*puVar3;
    }
    puVar3 = puVar5;
    uVar4 = *(uint *)(puVar3 + 1);
  }
  return;
}


