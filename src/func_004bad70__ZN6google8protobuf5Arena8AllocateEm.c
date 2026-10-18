// Function: _ZN6google8protobuf5Arena8AllocateEm
// Address: 004bad70
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long _ZN6google8protobuf5Arena8AllocateEm(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  long *in_FS_OFFSET;
  undefined1 auVar10 [16];
  
  if (*(long *)(*in_FS_OFFSET + -0x118) == *param_1) {
    lVar2 = *(long *)(*in_FS_OFFSET + -0x110);
    lVar1 = *(long *)(lVar2 + 0x18);
    uVar4 = *(ulong *)(lVar2 + 0x20);
    if (param_2 <= (long)(uVar4 - lVar1)) {
      uVar5 = param_2 + lVar1;
      *(ulong *)(lVar2 + 0x18) = uVar5;
      uVar6 = *(ulong *)(lVar2 + 8);
      if (((long)(uVar6 - uVar5) < 0x401) && (uVar6 < uVar4)) {
        if (uVar5 < uVar6) {
          uVar5 = uVar6;
        }
        uVar6 = uVar5;
        if (uVar5 + 0x400 < uVar4) {
          uVar4 = uVar5 + 0x400;
        }
        for (; uVar6 < uVar4; uVar6 = uVar6 + 0x40) {
        }
      }
      *(ulong *)(lVar2 + 8) = uVar6;
      return lVar1;
    }
  }
  else {
    lVar2 = _ZN6google8protobuf8internal15ThreadSafeArena22GetSerialArenaFallbackEm(param_1);
    lVar1 = *(long *)(lVar2 + 0x18);
    uVar4 = *(ulong *)(lVar2 + 0x20);
    if (param_2 <= (long)(uVar4 - lVar1)) {
      uVar5 = param_2 + lVar1;
      *(ulong *)(lVar2 + 0x18) = uVar5;
      uVar6 = *(ulong *)(lVar2 + 8);
      if (((long)(uVar6 - uVar5) < 0x401) && (uVar6 < uVar4)) {
        if (uVar5 < uVar6) {
          uVar5 = uVar6;
        }
        uVar6 = uVar5;
        if (uVar5 + 0x400 < uVar4) {
          uVar4 = uVar5 + 0x400;
        }
        for (; uVar6 < uVar4; uVar6 = uVar6 + 0x40) {
        }
      }
      *(ulong *)(lVar2 + 8) = uVar6;
      return lVar1;
    }
  }
  lVar1 = *(long *)(lVar2 + 0x10);
  if (*(long *)(lVar1 + 8) == 0) {
    uVar7 = 0;
  }
  else {
    *(long *)(lVar2 + 0x70) = (*(long *)(lVar2 + 0x18) - lVar1) + *(long *)(lVar2 + 0x70) + -0x10;
    uVar7 = *(undefined8 *)(lVar1 + 8);
  }
  auVar10 = func_0x004b9c10(*(ulong *)(*(long *)(lVar2 + 0x40) + 8) & 0xfffffffffffffff8,uVar7,
                            param_2);
  uVar4 = auVar10._8_8_;
  plVar8 = auVar10._0_8_;
  *(long *)(lVar2 + 0x28) = *(long *)(lVar2 + 0x28) + uVar4;
  *plVar8 = lVar1;
  plVar8[1] = uVar4;
  plVar9 = plVar8 + 2;
  plVar3 = (long *)((long)plVar8 + (uVar4 & 0xfffffffffffffff8));
  *(long **)(lVar2 + 0x18) = plVar9;
  *(long **)(lVar2 + 8) = plVar9;
  *(long **)(lVar2 + 0x20) = plVar3;
  *(long **)(lVar2 + 0x10) = plVar8;
  lVar1 = *(long *)(lVar2 + 0x18);
  if ((long)plVar3 - lVar1 < param_2) {
    lVar1 = 0;
  }
  else {
    plVar8 = (long *)(param_2 + lVar1);
    *(long **)(lVar2 + 0x18) = plVar8;
    if (((long)plVar9 - (long)plVar8 < 0x401) && (0x10 < (uVar4 & 0xfffffffffffffff8))) {
      if (plVar8 < plVar9) {
        plVar8 = plVar9;
      }
      plVar9 = plVar8;
      if (plVar8 + 0x80 < plVar3) {
        plVar3 = plVar8 + 0x80;
      }
      for (; plVar9 < plVar3; plVar9 = plVar9 + 8) {
      }
    }
    *(long **)(lVar2 + 8) = plVar9;
  }
  return lVar1;
}


