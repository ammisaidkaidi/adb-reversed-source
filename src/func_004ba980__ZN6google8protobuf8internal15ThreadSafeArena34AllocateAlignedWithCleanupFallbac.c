// Function: _ZN6google8protobuf8internal15ThreadSafeArena34AllocateAlignedWithCleanupFallbackEmmPFvPvE
// Address: 004ba980
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _ZN6google8protobuf8internal15ThreadSafeArena34AllocateAlignedWithCleanupFallbackEmmPFvPvE
                (undefined8 param_1,long param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  ulong *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  
  lVar4 = _ZN6google8protobuf8internal15ThreadSafeArena22GetSerialArenaFallbackEm
                    (param_1,param_2 + 0x10);
  uVar10 = param_2 + 7U & 0xfffffffffffffff8;
  uVar8 = -param_3 & (*(long *)(lVar4 + 0x18) + param_3) - 1;
  uVar5 = uVar8 + uVar10;
  if (*(ulong *)(lVar4 + 0x20) < uVar5) {
    do {
      uVar5 = uVar10 + (param_3 - 8);
      if (param_3 < 9) {
        uVar5 = uVar10;
      }
      lVar1 = *(long *)(lVar4 + 0x10);
      if (*(long *)(lVar1 + 8) == 0) {
        uVar9 = 0;
      }
      else {
        *(long *)(lVar4 + 0x70) =
             (*(long *)(lVar4 + 0x18) - lVar1) + *(long *)(lVar4 + 0x70) + -0x10;
        uVar9 = *(undefined8 *)(lVar1 + 8);
      }
      auVar11 = func_0x004b9c10(*(ulong *)(*(long *)(lVar4 + 0x40) + 8) & 0xfffffffffffffff8,uVar9,
                                uVar5);
      uVar5 = auVar11._8_8_;
      plVar3 = auVar11._0_8_;
      *(long *)(lVar4 + 0x28) = *(long *)(lVar4 + 0x28) + uVar5;
      *plVar3 = lVar1;
      plVar3[1] = uVar5;
      uVar6 = (uVar5 & 0xfffffffffffffff8) + (long)plVar3;
      *(long **)(lVar4 + 0x18) = plVar3 + 2;
      *(long **)(lVar4 + 8) = plVar3 + 2;
      *(ulong *)(lVar4 + 0x20) = uVar6;
      *(long **)(lVar4 + 0x10) = plVar3;
      uVar8 = *(long *)(lVar4 + 0x18) + (param_3 - 1) & -param_3;
      uVar5 = uVar8 + uVar10;
    } while (uVar6 < uVar5);
    *(ulong *)(lVar4 + 0x18) = uVar5;
    puVar2 = *(ulong **)(lVar4 + 0x58);
    if (puVar2 < *(ulong **)(lVar4 + 0x60)) {
      *(ulong **)(lVar4 + 0x58) = puVar2 + 2;
      *puVar2 = uVar8;
      puVar2[1] = param_4;
    }
    else {
      _ZN6google8protobuf8internal7cleanup9ChunkList11AddFallbackEPvPFvS4_ERNS1_11SerialArenaE
                (lVar4 + 0x50,uVar8,param_4,lVar4);
    }
    uVar10 = *(ulong *)(lVar4 + 0x58);
    uVar6 = *(ulong *)(lVar4 + 0x68);
    if (((long)(uVar6 - uVar10) < 0x181) && (uVar7 = *(ulong *)(lVar4 + 0x60), uVar6 < uVar7)) {
      if (uVar10 < uVar6) {
        uVar10 = uVar6;
      }
      uVar6 = uVar10;
      if (uVar10 + 0x180 < uVar7) {
        uVar7 = uVar10 + 0x180;
      }
      for (; uVar6 < uVar7; uVar6 = uVar6 + 0x40) {
      }
    }
    *(ulong *)(lVar4 + 0x68) = uVar6;
    uVar10 = *(ulong *)(lVar4 + 8);
    if (((long)(uVar10 - uVar5) < 0x401) && (uVar6 = *(ulong *)(lVar4 + 0x20), uVar10 < uVar6)) {
      if (uVar5 < uVar10) {
        uVar5 = uVar10;
      }
      uVar10 = uVar5;
      if (uVar5 + 0x400 < uVar6) {
        uVar6 = uVar5 + 0x400;
      }
      for (; uVar10 < uVar6; uVar10 = uVar10 + 0x40) {
      }
    }
    *(ulong *)(lVar4 + 8) = uVar10;
    return uVar8;
  }
  *(ulong *)(lVar4 + 0x18) = uVar5;
  puVar2 = *(ulong **)(lVar4 + 0x58);
  if (puVar2 < *(ulong **)(lVar4 + 0x60)) {
    *(ulong **)(lVar4 + 0x58) = puVar2 + 2;
    *puVar2 = uVar8;
    puVar2[1] = param_4;
  }
  else {
    _ZN6google8protobuf8internal7cleanup9ChunkList11AddFallbackEPvPFvS4_ERNS1_11SerialArenaE
              (lVar4 + 0x50,uVar8,param_4,lVar4);
  }
  uVar10 = *(ulong *)(lVar4 + 0x58);
  uVar6 = *(ulong *)(lVar4 + 0x68);
  if (((long)(uVar6 - uVar10) < 0x181) && (uVar7 = *(ulong *)(lVar4 + 0x60), uVar6 < uVar7)) {
    if (uVar10 < uVar6) {
      uVar10 = uVar6;
    }
    uVar6 = uVar10;
    if (uVar10 + 0x180 < uVar7) {
      uVar7 = uVar10 + 0x180;
    }
    for (; uVar6 < uVar7; uVar6 = uVar6 + 0x40) {
    }
  }
  *(ulong *)(lVar4 + 0x68) = uVar6;
  uVar10 = *(ulong *)(lVar4 + 8);
  if (((long)(uVar10 - uVar5) < 0x401) && (uVar6 = *(ulong *)(lVar4 + 0x20), uVar10 < uVar6)) {
    if (uVar5 < uVar10) {
      uVar5 = uVar10;
    }
    uVar10 = uVar5;
    if (uVar5 + 0x400 < uVar6) {
      uVar6 = uVar5 + 0x400;
    }
    for (; uVar10 < uVar6; uVar10 = uVar10 + 0x40) {
    }
  }
  *(ulong *)(lVar4 + 8) = uVar10;
  return uVar8;
}


