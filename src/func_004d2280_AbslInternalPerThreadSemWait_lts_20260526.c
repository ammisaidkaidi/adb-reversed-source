// Function: AbslInternalPerThreadSemWait_lts_20260526
// Address: 004d2280
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void AbslInternalPerThreadSemWait_lts_20260526(undefined8 param_1)

{
  int *piVar1;
  long lVar2;
  
  lVar2 = _ZN4absl12lts_2026052613base_internal30CurrentThreadIdentityIfPresentEv();
  if (lVar2 == 0) {
    lVar2 = _ZN4absl12lts_2026052624synchronization_internal20CreateThreadIdentityEv();
  }
  *(uint *)(lVar2 + 0x18c) = *(int *)(lVar2 + 0x188) + (uint)(*(int *)(lVar2 + 0x188) == 0);
  *(undefined1 *)(lVar2 + 400) = 0;
  piVar1 = *(int **)(lVar2 + 0x180);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  _ZN4absl12lts_2026052624synchronization_internal11FutexWaiter4WaitENS1_13KernelTimeoutE
            (lVar2 + 0x80,param_1);
  piVar1 = *(int **)(lVar2 + 0x180);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  *(undefined1 *)(lVar2 + 400) = 0;
  *(undefined4 *)(lVar2 + 0x18c) = 0;
  return;
}


