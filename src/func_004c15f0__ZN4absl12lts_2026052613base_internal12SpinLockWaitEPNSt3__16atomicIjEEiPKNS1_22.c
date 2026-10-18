// Function: _ZN4absl12lts_2026052613base_internal12SpinLockWaitEPNSt3__16atomicIjEEiPKNS1_22SpinLockWaitTransitionENS1_14SchedulingModeE
// Address: 004c15f0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


int _ZN4absl12lts_2026052613base_internal12SpinLockWaitEPNSt3__16atomicIjEEiPKNS1_22SpinLockWaitTransitionENS1_14SchedulingModeE
              (int *param_1,uint param_2,long param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  
  iVar5 = 0;
code_r0x004c1631:
  do {
    iVar2 = *param_1;
    if (param_2 != 0) {
      lVar4 = 0;
      do {
        if (iVar2 == *(int *)(param_3 + lVar4)) {
          iVar3 = *(int *)(param_3 + 4 + lVar4);
          if (iVar3 != iVar2) {
            LOCK();
            iVar1 = *param_1;
            if (iVar2 == iVar1) {
              *param_1 = iVar3;
            }
            UNLOCK();
            if (iVar2 != iVar1) goto code_r0x004c1631;
          }
          if (*(char *)(param_3 + 8 + lVar4) == '\x01') {
            return iVar2;
          }
          goto code_r0x004c1631;
        }
        lVar4 = lVar4 + 0xc;
      } while ((ulong)param_2 * 0xc != lVar4);
    }
    iVar5 = iVar5 + 1;
    AbslInternalSpinLockDelay_lts_20260526(param_1,iVar2,iVar5);
  } while( true );
}


