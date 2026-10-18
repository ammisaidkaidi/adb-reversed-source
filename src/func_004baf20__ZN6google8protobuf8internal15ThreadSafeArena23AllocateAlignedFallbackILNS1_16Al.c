// Function: _ZN6google8protobuf8internal15ThreadSafeArena23AllocateAlignedFallbackILNS1_16AllocationClientE1EEEPvm
// Address: 004baf20
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 *
_ZN6google8protobuf8internal15ThreadSafeArena23AllocateAlignedFallbackILNS1_16AllocationClientE1EEEPvm
          (undefined8 param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  undefined1 auVar10 [16];
  
  pbVar3 = (byte *)_ZN6google8protobuf8internal15ThreadSafeArena22GetSerialArenaFallbackEm();
  if (0xf < param_2) {
    lVar1 = 0x3f;
    if (param_2 - 1 != 0) {
      for (; param_2 - 1 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    uVar5 = lVar1 - 3;
    if (uVar5 < *pbVar3) {
      puVar2 = *(undefined8 **)(*(long *)(pbVar3 + 0x30) + uVar5 * 8);
      if (puVar2 != (undefined8 *)0x0) {
        *(undefined8 *)(*(long *)(pbVar3 + 0x30) + uVar5 * 8) = *puVar2;
        return puVar2;
      }
    }
  }
  puVar2 = *(undefined8 **)(pbVar3 + 0x18);
  uVar5 = *(ulong *)(pbVar3 + 0x20);
  if ((long)param_2 <= (long)(uVar5 - (long)puVar2)) {
    param_2 = param_2 + (long)puVar2;
    *(ulong *)(pbVar3 + 0x18) = param_2;
    uVar6 = *(ulong *)(pbVar3 + 8);
    if (((long)(uVar6 - param_2) < 0x401) && (uVar6 < uVar5)) {
      if (param_2 < uVar6) {
        param_2 = uVar6;
      }
      uVar6 = param_2;
      if (param_2 + 0x400 < uVar5) {
        uVar5 = param_2 + 0x400;
      }
      for (; uVar6 < uVar5; uVar6 = uVar6 + 0x40) {
      }
    }
    *(ulong *)(pbVar3 + 8) = uVar6;
    return puVar2;
  }
  lVar1 = *(long *)(pbVar3 + 0x10);
  if (*(long *)(lVar1 + 8) == 0) {
    uVar7 = 0;
  }
  else {
    *(long *)(pbVar3 + 0x70) = (*(long *)(pbVar3 + 0x18) - lVar1) + *(long *)(pbVar3 + 0x70) + -0x10
    ;
    uVar7 = *(undefined8 *)(lVar1 + 8);
  }
  auVar10 = func_0x004b9c10(*(ulong *)(*(long *)(pbVar3 + 0x40) + 8) & 0xfffffffffffffff8,uVar7,
                            param_2);
  uVar5 = auVar10._8_8_;
  plVar8 = auVar10._0_8_;
  *(ulong *)(pbVar3 + 0x28) = *(long *)(pbVar3 + 0x28) + uVar5;
  *plVar8 = lVar1;
  plVar8[1] = uVar5;
  plVar9 = plVar8 + 2;
  plVar4 = (long *)((long)plVar8 + (uVar5 & 0xfffffffffffffff8));
  *(long **)(pbVar3 + 0x18) = plVar9;
  *(long **)(pbVar3 + 8) = plVar9;
  *(long **)(pbVar3 + 0x20) = plVar4;
  *(long **)(pbVar3 + 0x10) = plVar8;
  puVar2 = *(undefined8 **)(pbVar3 + 0x18);
  if ((long)plVar4 - (long)puVar2 < (long)param_2) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    plVar8 = (long *)(param_2 + (long)puVar2);
    *(long **)(pbVar3 + 0x18) = plVar8;
    if (((long)plVar9 - (long)plVar8 < 0x401) && (0x10 < (uVar5 & 0xfffffffffffffff8))) {
      if (plVar8 < plVar9) {
        plVar8 = plVar9;
      }
      plVar9 = plVar8;
      if (plVar8 + 0x80 < plVar4) {
        plVar4 = plVar8 + 0x80;
      }
      for (; plVar9 < plVar4; plVar9 = plVar9 + 8) {
      }
    }
    *(long **)(pbVar3 + 8) = plVar9;
  }
  return puVar2;
}


