// Function: _ZN6google8protobuf8internal11SerialArena23AllocateAlignedFallbackEm
// Address: 004b9060
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long _ZN6google8protobuf8internal11SerialArena23AllocateAlignedFallbackEm(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  undefined1 auVar7 [16];
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (*(long *)(lVar1 + 8) == 0) {
    uVar4 = 0;
  }
  else {
    *(long *)(param_1 + 0x70) =
         (*(long *)(param_1 + 0x18) - lVar1) + *(long *)(param_1 + 0x70) + -0x10;
    uVar4 = *(undefined8 *)(lVar1 + 8);
  }
  auVar7 = func_0x004b9c10(*(ulong *)(*(long *)(param_1 + 0x40) + 8) & 0xfffffffffffffff8,uVar4,
                           param_2);
  uVar3 = auVar7._8_8_;
  plVar5 = auVar7._0_8_;
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + uVar3;
  *plVar5 = lVar1;
  plVar5[1] = uVar3;
  plVar6 = plVar5 + 2;
  plVar2 = (long *)((long)plVar5 + (uVar3 & 0xfffffffffffffff8));
  *(long **)(param_1 + 0x18) = plVar6;
  *(long **)(param_1 + 8) = plVar6;
  *(long **)(param_1 + 0x20) = plVar2;
  *(long **)(param_1 + 0x10) = plVar5;
  lVar1 = *(long *)(param_1 + 0x18);
  if ((long)plVar2 - lVar1 < param_2) {
    lVar1 = 0;
  }
  else {
    plVar5 = (long *)(param_2 + lVar1);
    *(long **)(param_1 + 0x18) = plVar5;
    if (((long)plVar6 - (long)plVar5 < 0x401) && (0x10 < (uVar3 & 0xfffffffffffffff8))) {
      if (plVar5 < plVar6) {
        plVar5 = plVar6;
      }
      plVar6 = plVar5;
      if (plVar5 + 0x80 < plVar2) {
        plVar2 = plVar5 + 0x80;
      }
      for (; plVar6 < plVar2; plVar6 = plVar6 + 8) {
      }
    }
    *(long **)(param_1 + 8) = plVar6;
  }
  return lVar1;
}


