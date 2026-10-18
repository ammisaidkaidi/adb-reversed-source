// Function: _ZN10atransport13SetConnectionENSt3__110shared_ptrI10ConnectionEE
// Address: 003eaff0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN10atransport13SetConnectionENSt3__110shared_ptrI10ConnectionEE
               (long param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  _ZNSt3__15mutex4lockEv(param_1 + 0x1a0);
  uVar4 = *(undefined4 *)param_2;
  uVar5 = *(undefined4 *)((long)param_2 + 4);
  uVar6 = *(undefined4 *)(param_2 + 1);
  uVar7 = *(undefined4 *)((long)param_2 + 0xc);
  *param_2 = 0;
  param_2[1] = 0;
  plVar3 = *(long **)(param_1 + 0x160);
  *(undefined4 *)(param_1 + 0x158) = uVar4;
  *(undefined4 *)(param_1 + 0x15c) = uVar5;
  *(undefined4 *)(param_1 + 0x160) = uVar6;
  *(undefined4 *)(param_1 + 0x164) = uVar7;
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      _ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  pthread_mutex_unlock(param_1 + 0x1a0);
  return;
}


