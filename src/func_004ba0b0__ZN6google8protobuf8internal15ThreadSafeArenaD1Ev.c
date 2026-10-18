// Function: _ZN6google8protobuf8internal15ThreadSafeArenaD1Ev
// Address: 004ba0b0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN6google8protobuf8internal15ThreadSafeArenaD1Ev(long param_1)

{
  uint uVar1;
  long *plVar2;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  undefined1 auVar8 [16];
  
  uVar6 = *(uint *)(*(long **)(param_1 + 0x10) + 1);
  plVar4 = *(long **)(param_1 + 0x10);
  while (uVar6 != 0) {
    plVar2 = (long *)*plVar4;
    uVar1 = *(uint *)((long)plVar4 + 0xc);
    if (uVar1 != 0) {
      uVar3 = uVar6;
      if (uVar1 < uVar6) {
        uVar3 = uVar1;
      }
      lVar7 = (ulong)uVar3 << 3;
      do {
        _ZN6google8protobuf8internal7cleanup9ChunkList7CleanupERKNS1_11SerialArenaE
                  (*(long *)((long)plVar4 + lVar7 + (ulong)uVar6 * 8 + 8) + 0x50);
        lVar7 = lVar7 + -8;
      } while (lVar7 != 0);
    }
    plVar4 = plVar2;
    uVar6 = *(uint *)(plVar2 + 1);
  }
  _ZN6google8protobuf8internal7cleanup9ChunkList7CleanupERKNS1_11SerialArenaE
            (param_1 + 0x78,param_1 + 0x28);
  auVar8 = _ZN6google8protobuf8internal15ThreadSafeArena4FreeEv(param_1);
  lVar7 = auVar8._8_8_;
  if (lVar7 != 0 && (*(ulong *)(param_1 + 8) & 1) == 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffff8;
    if ((uVar5 != 0) &&
       (UNRECOVERED_JUMPTABLE = *(code **)(uVar5 + 0x18), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x004ba174. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(auVar8._0_8_,lVar7);
      return;
    }
    free(auVar8._0_8_,lVar7);
    return;
  }
  return;
}


