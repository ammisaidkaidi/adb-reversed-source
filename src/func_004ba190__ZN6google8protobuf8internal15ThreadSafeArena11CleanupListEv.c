// Function: _ZN6google8protobuf8internal15ThreadSafeArena11CleanupListEv
// Address: 004ba190
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN6google8protobuf8internal15ThreadSafeArena11CleanupListEv(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  long *plVar3;
  uint uVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  uint uVar9;
  code *pcVar10;
  long lVar11;
  undefined8 *puVar12;
  
  uVar9 = *(uint *)(*(long **)(param_1 + 0x10) + 1);
  plVar6 = *(long **)(param_1 + 0x10);
  while (uVar9 != 0) {
    plVar3 = (long *)*plVar6;
    uVar2 = *(uint *)((long)plVar6 + 0xc);
    if (uVar2 != 0) {
      uVar4 = uVar9;
      if (uVar2 < uVar9) {
        uVar4 = uVar2;
      }
      lVar11 = (ulong)uVar4 << 3;
      do {
        _ZN6google8protobuf8internal7cleanup9ChunkList7CleanupERKNS1_11SerialArenaE
                  (*(long *)((long)plVar6 + lVar11 + (ulong)uVar9 * 8 + 8) + 0x50);
        lVar11 = lVar11 + -8;
      } while (lVar11 != 0);
    }
    plVar6 = plVar3;
    uVar9 = *(uint *)(plVar3 + 1);
  }
  if (*(undefined8 **)(param_1 + 0x78) != (undefined8 *)0x0) {
    uVar5 = *(ulong *)(*(long *)(param_1 + 0x68) + 8) & 0xfffffffffffffff8;
    if (uVar5 == 0) {
      pcVar10 = (code *)0x0;
    }
    else {
      pcVar10 = *(code **)(uVar5 + 0x18);
    }
    puVar12 = (undefined8 *)(*(long *)(param_1 + 0x80) + -0x10);
    puVar7 = *(undefined8 **)(param_1 + 0x78);
    while( true ) {
      puVar1 = puVar7 + 2;
      puVar8 = puVar12;
      if (((((puVar1 <= puVar12) && (puVar8 = puVar12 + -2, puVar1 <= puVar8)) &&
           (puVar8 = puVar12 + -4, puVar1 <= puVar8)) &&
          ((puVar8 = puVar12 + -6, puVar1 <= puVar8 && (puVar8 = puVar12 + -8, puVar1 <= puVar8))))
         && ((puVar8 = puVar12 + -10, puVar1 <= puVar8 &&
             ((puVar8 = puVar12 + -0xc, puVar1 <= puVar8 &&
              (puVar8 = puVar12 + -0xe, puVar1 <= puVar8)))))) {
        puVar8 = puVar12 + -0x10;
      }
      for (; puVar1 <= puVar8; puVar8 = puVar8 + -2) {
        (*(code *)puVar12[1])(*puVar12);
        puVar12 = puVar12 + -2;
      }
      puVar8 = (undefined8 *)*puVar7;
      if (puVar1 <= puVar12) {
        do {
          (*(code *)puVar12[1])(*puVar12);
          puVar12 = puVar12 + -2;
        } while (puVar1 <= puVar12);
        puVar8 = (undefined8 *)*puVar7;
      }
      if (pcVar10 == (code *)0x0) {
        _ZdaPvSt11align_val_t(puVar7,puVar7[1]);
      }
      else {
        (*pcVar10)();
      }
      if (puVar8 == (undefined8 *)0x0) break;
      puVar12 = (undefined8 *)((puVar8[1] - 0x10 & 0xfffffffffffffff0) + (long)puVar8);
      puVar7 = puVar8;
    }
  }
  return;
}


