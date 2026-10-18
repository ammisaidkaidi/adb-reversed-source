// Function: _ZN15fdevent_context21CalculatePollDurationEv
// Address: 003d5ce0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined1  [16] _ZN15fdevent_context21CalculatePollDurationEv(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  bool bVar9;
  undefined1 auVar10 [16];
  
  lVar2 = _ZNSt3__16chrono12steady_clock3nowEv();
  _ZNK15fdevent_context17CheckLooperThreadEv(param_1);
  plVar3 = *(long **)(param_1 + 0x20);
  if (plVar3 == (long *)(param_1 + 0x28)) {
    iVar4 = 0;
    uVar7 = 0;
  }
  else {
    uVar7 = 0;
    uVar6 = 0;
    iVar4 = 0;
    do {
      if ((char)plVar3[8] == '\x01') {
        uVar5 = ((plVar3[9] - lVar2) + plVar3[7] * 1000000) / 1000000;
        if ((long)uVar5 < 1) {
          uVar5 = 0;
        }
        if (iVar4 == 0) {
          uVar6 = uVar5 >> 8;
          iVar4 = 1;
          uVar7 = uVar5 & 0xffffffff;
        }
        else {
          uVar7 = uVar7 & 0xff | uVar6 << 8;
          if (uVar5 < uVar7) {
            uVar7 = uVar5;
          }
          uVar6 = uVar7 >> 8;
          iVar4 = 1;
        }
      }
      plVar1 = (long *)plVar3[1];
      plVar8 = plVar3;
      if ((long *)plVar3[1] == (long *)0x0) {
        do {
          plVar3 = (long *)plVar8[2];
          bVar9 = plVar8 != (long *)*plVar3;
          plVar8 = plVar3;
        } while (bVar9);
      }
      else {
        do {
          plVar3 = plVar1;
          plVar1 = (long *)*plVar3;
        } while ((long *)*plVar3 != (long *)0x0);
      }
    } while (plVar3 != (long *)(param_1 + 0x28));
    uVar7 = uVar7 & 0xff | uVar6 << 8;
  }
  auVar10._8_4_ = iVar4;
  auVar10._0_8_ = uVar7;
  auVar10._12_4_ = 0;
  return auVar10;
}


