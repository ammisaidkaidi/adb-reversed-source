// Function: _ZN4absl12lts_202605267CondVar6SignalEv
// Address: 004d1180
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN4absl12lts_202605267CondVar6SignalEv(ulong *param_1)

{
  long *plVar1;
  undefined4 uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  
  lVar3 = _ZN4absl12lts_2026052613base_internal30CurrentThreadIdentityIfPresentEv();
  if (lVar3 != 0) {
    *(int *)(lVar3 + 0x4c) = *(int *)(lVar3 + 0x4c) + 1;
  }
  uVar5 = *param_1;
  if (uVar5 != 0) {
    uVar2 = 0;
    do {
      if ((uVar5 & 1) == 0) {
        LOCK();
        uVar6 = *param_1;
        if (uVar5 == uVar6) {
          *param_1 = uVar5 | 1;
        }
        UNLOCK();
        if (uVar5 == uVar6) {
          plVar4 = (long *)(uVar5 & 0xfffffffffffffffc);
          if (plVar4 == (long *)0x0) {
            *param_1 = uVar5;
          }
          else {
            plVar1 = (long *)*plVar4;
            if (plVar1 == plVar4) {
              uVar5 = (ulong)((uint)uVar5 & 2);
              uVar6 = uVar5;
            }
            else {
              *plVar4 = *plVar1;
              uVar6 = (ulong)((uint)uVar5 & 2);
            }
            *param_1 = uVar5;
            _ZN4absl12lts_202605265Mutex3FerEPNS0_13base_internal14PerThreadSynchE
                      (*(undefined8 *)(plVar1[4] + 0x18));
            (*pcRam00000000009fb830)(&UNK_0016188a,param_1);
            if (uVar6 == 0) break;
          }
          func_0x004d0240(param_1,0xc);
          break;
        }
      }
      uVar2 = _ZN4absl12lts_2026052624synchronization_internal10MutexDelayEii(uVar2,1);
      uVar5 = *param_1;
    } while (uVar5 != 0);
  }
  if (lVar3 != 0) {
    lVar3 = _ZN4absl12lts_2026052613base_internal30CurrentThreadIdentityIfPresentEv();
    *(int *)(lVar3 + 0x4c) = *(int *)(lVar3 + 0x4c) + -1;
  }
  return;
}


