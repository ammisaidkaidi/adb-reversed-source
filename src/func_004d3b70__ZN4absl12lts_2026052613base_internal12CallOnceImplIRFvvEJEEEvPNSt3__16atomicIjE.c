// Function: _ZN4absl12lts_2026052613base_internal12CallOnceImplIRFvvEJEEEvPNSt3__16atomicIjEENS1_14SchedulingModeEOT_DpOT0_
// Address: 004d3b70
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN4absl12lts_2026052613base_internal12CallOnceImplIRFvvEJEEEvPNSt3__16atomicIjEENS1_14SchedulingModeEOT_DpOT0_
               (int *param_1,int param_2,code *param_3)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  
  if ((param_2 == 0) &&
     (lVar3 = _ZN4absl12lts_2026052613base_internal30CurrentThreadIdentityIfPresentEv(), lVar3 != 0)
     ) {
    *(int *)(lVar3 + 0x4c) = *(int *)(lVar3 + 0x4c) + 1;
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  LOCK();
  iVar2 = *param_1;
  if (iVar2 == 0) {
    *param_1 = 0x65c2937b;
  }
  UNLOCK();
  if ((iVar2 == 0) ||
     (iVar2 = _ZN4absl12lts_2026052613base_internal12SpinLockWaitEPNSt3__16atomicIjEEiPKNS1_22SpinLockWaitTransitionENS1_14SchedulingModeE
                        (param_1,3,
                         _ZZN4absl12lts_2026052613base_internal12CallOnceImplIRFvvEJEEEvPNSt3__16atomicIjEENS1_14SchedulingModeEOT_DpOT0_E5trans
                         ,param_2), iVar2 == 0)) {
    (*param_3)();
    LOCK();
    iVar2 = *param_1;
    *param_1 = 0xdd;
    UNLOCK();
    if (iVar2 == 0x5a308d2) {
      AbslInternalSpinLockWake_lts_20260526(param_1,1);
    }
  }
  if (bVar1 && param_2 == 0) {
    lVar3 = _ZN4absl12lts_2026052613base_internal30CurrentThreadIdentityIfPresentEv();
    *(int *)(lVar3 + 0x4c) = *(int *)(lVar3 + 0x4c) + -1;
  }
  return;
}


