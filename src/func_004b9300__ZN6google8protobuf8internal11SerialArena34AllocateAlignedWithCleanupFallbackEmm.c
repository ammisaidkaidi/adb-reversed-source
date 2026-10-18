// Function: _ZN6google8protobuf8internal11SerialArena34AllocateAlignedWithCleanupFallbackEmmPFvPvE
// Address: 004b9300
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _ZN6google8protobuf8internal11SerialArena34AllocateAlignedWithCleanupFallbackEmmPFvPvE
                (long param_1,ulong param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  ulong *puVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  
  do {
    uVar9 = param_2 + 7 & 0xfffffffffffffff8;
    uVar5 = param_2 + (param_3 - 8);
    if (param_3 < 9) {
      uVar5 = uVar9;
    }
    lVar1 = *(long *)(param_1 + 0x10);
    if (*(long *)(lVar1 + 8) == 0) {
      uVar8 = 0;
    }
    else {
      *(long *)(param_1 + 0x70) =
           (*(long *)(param_1 + 0x18) - lVar1) + *(long *)(param_1 + 0x70) + -0x10;
      uVar8 = *(undefined8 *)(lVar1 + 8);
    }
    auVar10 = func_0x004b9c10(*(ulong *)(*(long *)(param_1 + 0x40) + 8) & 0xfffffffffffffff8,uVar8,
                              uVar5);
    uVar5 = auVar10._8_8_;
    plVar3 = auVar10._0_8_;
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + uVar5;
    *plVar3 = lVar1;
    plVar3[1] = uVar5;
    uVar6 = (uVar5 & 0xfffffffffffffff8) + (long)plVar3;
    *(long **)(param_1 + 0x18) = plVar3 + 2;
    *(long **)(param_1 + 8) = plVar3 + 2;
    *(ulong *)(param_1 + 0x20) = uVar6;
    *(long **)(param_1 + 0x10) = plVar3;
    uVar4 = *(long *)(param_1 + 0x18) + (param_3 - 1) & -param_3;
    uVar5 = uVar4 + uVar9;
    param_2 = uVar9;
  } while (uVar6 < uVar5);
  *(ulong *)(param_1 + 0x18) = uVar5;
  puVar2 = *(ulong **)(param_1 + 0x58);
  if (puVar2 < *(ulong **)(param_1 + 0x60)) {
    *(ulong **)(param_1 + 0x58) = puVar2 + 2;
    *puVar2 = uVar4;
    puVar2[1] = param_4;
  }
  else {
    _ZN6google8protobuf8internal7cleanup9ChunkList11AddFallbackEPvPFvS4_ERNS1_11SerialArenaE
              (param_1 + 0x50,uVar4,param_4,param_1);
  }
  uVar9 = *(ulong *)(param_1 + 0x58);
  uVar6 = *(ulong *)(param_1 + 0x68);
  if (((long)(uVar6 - uVar9) < 0x181) && (uVar7 = *(ulong *)(param_1 + 0x60), uVar6 < uVar7)) {
    if (uVar9 < uVar6) {
      uVar9 = uVar6;
    }
    uVar6 = uVar9;
    if (uVar9 + 0x180 < uVar7) {
      uVar7 = uVar9 + 0x180;
    }
    for (; uVar6 < uVar7; uVar6 = uVar6 + 0x40) {
    }
  }
  *(ulong *)(param_1 + 0x68) = uVar6;
  uVar9 = *(ulong *)(param_1 + 8);
  if (((long)(uVar9 - uVar5) < 0x401) && (uVar6 = *(ulong *)(param_1 + 0x20), uVar9 < uVar6)) {
    if (uVar5 < uVar9) {
      uVar5 = uVar9;
    }
    uVar9 = uVar5;
    if (uVar5 + 0x400 < uVar6) {
      uVar6 = uVar5 + 0x400;
    }
    for (; uVar9 < uVar6; uVar9 = uVar9 + 0x40) {
    }
  }
  *(ulong *)(param_1 + 8) = uVar9;
  return uVar4;
}


