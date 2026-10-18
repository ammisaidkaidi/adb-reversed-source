// Function: _ZN6google8protobuf8internal7cleanup9ChunkList7CleanupERKNS1_11SerialArenaE
// Address: 004b8c50
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN6google8protobuf8internal7cleanup9ChunkList7CleanupERKNS1_11SerialArenaE
               (long *param_1,long param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined8 *puVar6;
  
  if ((undefined8 *)*param_1 != (undefined8 *)0x0) {
    uVar2 = *(ulong *)(*(long *)(param_2 + 0x40) + 8) & 0xfffffffffffffff8;
    if (uVar2 == 0) {
      pcVar5 = (code *)0x0;
    }
    else {
      pcVar5 = *(code **)(uVar2 + 0x18);
    }
    puVar6 = (undefined8 *)(param_1[1] + -0x10);
    puVar3 = (undefined8 *)*param_1;
    while( true ) {
      puVar1 = puVar3 + 2;
      puVar4 = puVar6;
      if (((((puVar1 <= puVar6) && (puVar4 = puVar6 + -2, puVar1 <= puVar4)) &&
           (puVar4 = puVar6 + -4, puVar1 <= puVar4)) &&
          ((puVar4 = puVar6 + -6, puVar1 <= puVar4 && (puVar4 = puVar6 + -8, puVar1 <= puVar4)))) &&
         ((puVar4 = puVar6 + -10, puVar1 <= puVar4 &&
          ((puVar4 = puVar6 + -0xc, puVar1 <= puVar4 && (puVar4 = puVar6 + -0xe, puVar1 <= puVar4)))
          ))) {
        puVar4 = puVar6 + -0x10;
      }
      for (; puVar1 <= puVar4; puVar4 = puVar4 + -2) {
        (*(code *)puVar6[1])(*puVar6);
        puVar6 = puVar6 + -2;
      }
      puVar4 = (undefined8 *)*puVar3;
      if (puVar1 <= puVar6) {
        do {
          (*(code *)puVar6[1])(*puVar6);
          puVar6 = puVar6 + -2;
        } while (puVar1 <= puVar6);
        puVar4 = (undefined8 *)*puVar3;
      }
      if (pcVar5 == (code *)0x0) {
        _ZdaPvSt11align_val_t(puVar3,puVar3[1]);
      }
      else {
        (*pcVar5)();
      }
      if (puVar4 == (undefined8 *)0x0) break;
      puVar6 = (undefined8 *)((puVar4[1] - 0x10 & 0xfffffffffffffff0) + (long)puVar4);
      puVar3 = puVar4;
    }
  }
  return;
}


