// Function: _ZN6google8protobuf8internal15ThreadSafeArena26AllocateAlignedWithCleanupEmmPFvPvE
// Address: 004ba7d0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _ZN6google8protobuf8internal15ThreadSafeArena26AllocateAlignedWithCleanupEmmPFvPvE
                (long *param_1,long param_2,ulong param_3,ulong param_4,undefined8 param_5,
                undefined8 param_6)

{
  ulong *puVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *in_FS_OFFSET;
  undefined1 auVar10 [16];
  long lVar11;
  
  lVar4 = *in_FS_OFFSET;
  lVar11 = lVar4 + -0x120;
  if (*(long *)(lVar4 + -0x118) == *param_1) {
    lVar4 = *(long *)(lVar4 + -0x110);
    uVar9 = param_2 + 7U & 0xfffffffffffffff8;
    uVar3 = -param_3 & (param_3 + *(long *)(lVar4 + 0x18)) - 1;
    uVar5 = uVar3 + uVar9;
    if (uVar5 <= *(ulong *)(lVar4 + 0x20)) {
      *(ulong *)(lVar4 + 0x18) = uVar5;
      puVar1 = *(ulong **)(lVar4 + 0x58);
      if (puVar1 < *(ulong **)(lVar4 + 0x60)) {
        *(ulong **)(lVar4 + 0x58) = puVar1 + 2;
        *puVar1 = uVar3;
        puVar1[1] = param_4;
      }
      else {
        _ZN6google8protobuf8internal7cleanup9ChunkList11AddFallbackEPvPFvS4_ERNS1_11SerialArenaE
                  (lVar4 + 0x50,uVar3,param_4,lVar4);
      }
      uVar9 = *(ulong *)(lVar4 + 0x58);
      uVar6 = *(ulong *)(lVar4 + 0x68);
      if (((long)(uVar6 - uVar9) < 0x181) && (uVar7 = *(ulong *)(lVar4 + 0x60), uVar6 < uVar7)) {
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
      *(ulong *)(lVar4 + 0x68) = uVar6;
      uVar9 = *(ulong *)(lVar4 + 8);
      if (((long)(uVar9 - uVar5) < 0x401) && (uVar6 = *(ulong *)(lVar4 + 0x20), uVar9 < uVar6)) {
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
      *(ulong *)(lVar4 + 8) = uVar9;
      return uVar3;
    }
  }
  else {
    lVar4 = _ZN6google8protobuf8internal15ThreadSafeArena22GetSerialArenaFallbackEm
                      (param_1,param_2 + 0x10);
    uVar9 = param_2 + 7U & 0xfffffffffffffff8;
    uVar3 = -param_3 & (*(long *)(lVar4 + 0x18) + param_3) - 1;
    uVar5 = uVar3 + uVar9;
    if (uVar5 <= *(ulong *)(lVar4 + 0x20)) {
      *(ulong *)(lVar4 + 0x18) = uVar5;
      puVar1 = *(ulong **)(lVar4 + 0x58);
      if (puVar1 < *(ulong **)(lVar4 + 0x60)) {
        *(ulong **)(lVar4 + 0x58) = puVar1 + 2;
        *puVar1 = uVar3;
        puVar1[1] = param_4;
      }
      else {
        _ZN6google8protobuf8internal7cleanup9ChunkList11AddFallbackEPvPFvS4_ERNS1_11SerialArenaE
                  (lVar4 + 0x50,uVar3,param_4,lVar4,param_5,param_6,lVar11);
      }
      uVar9 = *(ulong *)(lVar4 + 0x58);
      uVar6 = *(ulong *)(lVar4 + 0x68);
      if (((long)(uVar6 - uVar9) < 0x181) && (uVar7 = *(ulong *)(lVar4 + 0x60), uVar6 < uVar7)) {
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
      *(ulong *)(lVar4 + 0x68) = uVar6;
      uVar9 = *(ulong *)(lVar4 + 8);
      if (((long)(uVar9 - uVar5) < 0x401) && (uVar6 = *(ulong *)(lVar4 + 0x20), uVar9 < uVar6)) {
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
      *(ulong *)(lVar4 + 8) = uVar9;
      return uVar3;
    }
  }
  do {
    uVar5 = uVar9 + (param_3 - 8);
    if (param_3 < 9) {
      uVar5 = uVar9;
    }
    lVar11 = *(long *)(lVar4 + 0x10);
    if (*(long *)(lVar11 + 8) == 0) {
      uVar8 = 0;
    }
    else {
      *(long *)(lVar4 + 0x70) = (*(long *)(lVar4 + 0x18) - lVar11) + *(long *)(lVar4 + 0x70) + -0x10
      ;
      uVar8 = *(undefined8 *)(lVar11 + 8);
    }
    auVar10 = func_0x004b9c10(*(ulong *)(*(long *)(lVar4 + 0x40) + 8) & 0xfffffffffffffff8,uVar8,
                              uVar5);
    uVar5 = auVar10._8_8_;
    plVar2 = auVar10._0_8_;
    *(long *)(lVar4 + 0x28) = *(long *)(lVar4 + 0x28) + uVar5;
    *plVar2 = lVar11;
    plVar2[1] = uVar5;
    uVar6 = (uVar5 & 0xfffffffffffffff8) + (long)plVar2;
    *(long **)(lVar4 + 0x18) = plVar2 + 2;
    *(long **)(lVar4 + 8) = plVar2 + 2;
    *(ulong *)(lVar4 + 0x20) = uVar6;
    *(long **)(lVar4 + 0x10) = plVar2;
    uVar3 = *(long *)(lVar4 + 0x18) + (param_3 - 1) & -param_3;
    uVar5 = uVar3 + uVar9;
  } while (uVar6 < uVar5);
  *(ulong *)(lVar4 + 0x18) = uVar5;
  puVar1 = *(ulong **)(lVar4 + 0x58);
  if (puVar1 < *(ulong **)(lVar4 + 0x60)) {
    *(ulong **)(lVar4 + 0x58) = puVar1 + 2;
    *puVar1 = uVar3;
    puVar1[1] = param_4;
  }
  else {
    _ZN6google8protobuf8internal7cleanup9ChunkList11AddFallbackEPvPFvS4_ERNS1_11SerialArenaE
              (lVar4 + 0x50,uVar3,param_4,lVar4);
  }
  uVar9 = *(ulong *)(lVar4 + 0x58);
  uVar6 = *(ulong *)(lVar4 + 0x68);
  if (((long)(uVar6 - uVar9) < 0x181) && (uVar7 = *(ulong *)(lVar4 + 0x60), uVar6 < uVar7)) {
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
  *(ulong *)(lVar4 + 0x68) = uVar6;
  uVar9 = *(ulong *)(lVar4 + 8);
  if (((long)(uVar9 - uVar5) < 0x401) && (uVar6 = *(ulong *)(lVar4 + 0x20), uVar9 < uVar6)) {
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
  *(ulong *)(lVar4 + 8) = uVar9;
  return uVar3;
}


