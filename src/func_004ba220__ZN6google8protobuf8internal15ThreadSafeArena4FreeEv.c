// Function: _ZN6google8protobuf8internal15ThreadSafeArena4FreeEv
// Address: 004ba220
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined1  [16] _ZN6google8protobuf8internal15ThreadSafeArena4FreeEv(long param_1)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  code *pcVar11;
  ulong uVar12;
  undefined1 auVar13 [16];
  
  uVar9 = *(ulong *)(param_1 + 8) & 0xfffffffffffffff8;
  if (uVar9 == 0) {
    pcVar11 = (code *)0x0;
  }
  else {
    pcVar11 = *(code **)(uVar9 + 0x18);
  }
  uVar1 = *(uint *)(*(long **)(param_1 + 0x10) + 1);
  plVar7 = *(long **)(param_1 + 0x10);
  while (uVar1 != 0) {
    plVar3 = (long *)*plVar7;
    uVar9 = (ulong)uVar1;
    uVar12 = uVar9 * 8 + 0x17 & 0xffffffff8;
    uVar2 = *(uint *)((long)plVar7 + 0xc);
    if (uVar2 != 0) {
      if (uVar2 < uVar1) {
        uVar1 = uVar2;
      }
      lVar10 = uVar12 + (long)plVar7 + (ulong)uVar1 * 8;
      do {
        lVar4 = *(long *)(lVar10 + -8);
        if (*(long *)(lVar4 + 0x38) != 0) {
          _ZN6google8protobuf8internal11SerialArena16FreeStringBlocksEPNS1_11StringBlockEm
                    (*(long *)(lVar4 + 0x38),*(undefined8 *)(lVar4 + 0x48));
        }
        puVar5 = *(undefined8 **)(lVar4 + 0x10);
        uVar6 = puVar5[1];
        for (puVar8 = (undefined8 *)*puVar5; puVar8 != (undefined8 *)0x0;
            puVar8 = (undefined8 *)*puVar8) {
          if (pcVar11 == (code *)0x0) {
            _ZdaPvSt11align_val_t(puVar5,uVar6);
          }
          else {
            (*pcVar11)();
          }
          uVar6 = puVar8[1];
          puVar5 = puVar8;
        }
        if (pcVar11 == (code *)0x0) {
          _ZdaPvSt11align_val_t(puVar5,uVar6);
        }
        else {
          (*pcVar11)();
        }
        lVar10 = lVar10 + -8;
      } while (lVar10 != uVar12 + (long)plVar7);
      uVar9 = (ulong)*(uint *)(plVar7 + 1);
      uVar12 = uVar9 * 8 + 0x17 & 0xffffffff8;
    }
    _ZdaPvSt11align_val_t(plVar7,uVar12 + uVar9 * 8);
    plVar7 = plVar3;
    uVar1 = *(uint *)(plVar3 + 1);
  }
  if (*(long *)(param_1 + 0x60) != 0) {
    _ZN6google8protobuf8internal11SerialArena16FreeStringBlocksEPNS1_11StringBlockEm
              (*(long *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x70));
  }
  puVar5 = *(undefined8 **)(param_1 + 0x38);
  uVar6 = puVar5[1];
  for (puVar8 = (undefined8 *)*puVar5; puVar8 != (undefined8 *)0x0; puVar8 = (undefined8 *)*puVar8)
  {
    if (pcVar11 == (code *)0x0) {
      _ZdaPvSt11align_val_t(puVar5);
    }
    else {
      (*pcVar11)();
    }
    uVar6 = puVar8[1];
    puVar5 = puVar8;
  }
  auVar13._8_8_ = uVar6;
  auVar13._0_8_ = puVar5;
  return auVar13;
}


