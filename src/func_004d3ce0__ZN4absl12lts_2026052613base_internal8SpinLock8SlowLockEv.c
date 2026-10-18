// Function: _ZN4absl12lts_2026052613base_internal8SpinLock8SlowLockEv
// Address: 004d3ce0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN4absl12lts_2026052613base_internal8SpinLock8SlowLockEv(uint *param_1)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  bool bVar9;
  int iStack_38;
  
  uVar2 = _ZN4absl12lts_2026052613base_internal8SpinLock8SpinLoopEv();
  uVar7 = (ulong)uVar2;
  if ((uVar2 & 1) == 0) {
    if (((uVar2 & 2) == 0) &&
       (lVar5 = _ZN4absl12lts_2026052613base_internal30CurrentThreadIdentityIfPresentEv(),
       lVar5 != 0)) {
      *(int *)(lVar5 + 0x4c) = *(int *)(lVar5 + 0x4c) + 1;
      LOCK();
      uVar4 = *param_1;
      bVar9 = uVar2 == uVar4;
      if (bVar9) {
        *param_1 = uVar2 | 5;
        uVar4 = uVar2;
      }
      UNLOCK();
      if (!bVar9) {
        uVar7 = (ulong)uVar4;
        lVar5 = _ZN4absl12lts_2026052613base_internal30CurrentThreadIdentityIfPresentEv();
        *(int *)(lVar5 + 0x4c) = *(int *)(lVar5 + 0x4c) + -1;
      }
    }
    else {
      LOCK();
      uVar4 = *param_1;
      if (uVar2 == uVar4) {
        *param_1 = uVar2 | 1;
        uVar4 = uVar2;
      }
      UNLOCK();
      uVar7 = (ulong)uVar4;
    }
  }
  if ((uVar7 & 1) != 0) {
    uVar1 = uVar7 >> 1;
    if (_ZN4absl12lts_2026052613base_internal10CycleClock19cycle_clock_source_E == (code *)0x0) {
      lVar5 = rdtsc();
    }
    else {
      lVar5 = (*_ZN4absl12lts_2026052613base_internal10CycleClock19cycle_clock_source_E)();
    }
    iStack_38 = 0;
    uVar2 = 0;
    do {
      while (uVar4 = (uint)uVar7, uVar4 < 8) {
        uVar7 = (ulong)(uVar4 | 8);
        LOCK();
        uVar3 = *param_1;
        bVar9 = uVar4 == uVar3;
        if (bVar9) {
          *param_1 = uVar4 | 8;
          uVar3 = uVar4;
        }
        UNLOCK();
        if (bVar9) break;
        uVar7 = (ulong)uVar3;
        if ((uVar3 & 1) == 0) {
          if (((uVar3 & 2) == 0) &&
             (lVar6 = _ZN4absl12lts_2026052613base_internal30CurrentThreadIdentityIfPresentEv(),
             lVar6 != 0)) {
            *(int *)(lVar6 + 0x4c) = *(int *)(lVar6 + 0x4c) + 1;
            LOCK();
            uVar4 = *param_1;
            bVar9 = uVar3 == uVar4;
            if (bVar9) {
              *param_1 = uVar3 | uVar2 | 5;
              uVar4 = uVar3;
            }
            UNLOCK();
            if (!bVar9) {
              uVar7 = (ulong)uVar4;
              lVar6 = _ZN4absl12lts_2026052613base_internal30CurrentThreadIdentityIfPresentEv();
              *(int *)(lVar6 + 0x4c) = *(int *)(lVar6 + 0x4c) + -1;
            }
          }
          else {
            LOCK();
            uVar4 = *param_1;
            if (uVar3 == uVar4) {
              *param_1 = uVar3 | uVar2 | 1;
              uVar4 = uVar3;
            }
            UNLOCK();
            uVar7 = (ulong)uVar4;
          }
        }
        else if (7 < uVar3) break;
        if ((uVar7 & 1) == 0) {
          return;
        }
      }
      iStack_38 = iStack_38 + 1;
      AbslInternalSpinLockDelay_lts_20260526(param_1,uVar7,iStack_38,(uint)uVar1 & 1);
      uVar4 = _ZN4absl12lts_2026052613base_internal8SpinLock8SpinLoopEv(param_1);
      uVar7 = (ulong)uVar4;
      if (_ZN4absl12lts_2026052613base_internal10CycleClock19cycle_clock_source_E == (code *)0x0) {
        lVar6 = rdtsc();
      }
      else {
        lVar6 = (*_ZN4absl12lts_2026052613base_internal10CycleClock19cycle_clock_source_E)();
      }
      uVar8 = (lVar6 >> 1) - (lVar5 >> 1) >> 7;
      if (0x1ffffffe < (long)uVar8) {
        uVar8 = 0x1fffffff;
      }
      uVar2 = (int)uVar8 << 3;
      if ((uVar8 & 0x1fffffff) == 0) {
        uVar2 = 8;
      }
      else if (uVar2 == 8) {
        uVar2 = 0x10;
      }
      if ((uVar4 & 1) == 0) {
        if (((uVar4 & 2) == 0) &&
           (lVar6 = _ZN4absl12lts_2026052613base_internal30CurrentThreadIdentityIfPresentEv(),
           lVar6 != 0)) {
          *(int *)(lVar6 + 0x4c) = *(int *)(lVar6 + 0x4c) + 1;
          LOCK();
          uVar3 = *param_1;
          bVar9 = uVar4 == uVar3;
          if (bVar9) {
            *param_1 = uVar4 | uVar2 | 5;
            uVar3 = uVar4;
          }
          UNLOCK();
          if (!bVar9) {
            uVar7 = (ulong)uVar3;
            lVar6 = _ZN4absl12lts_2026052613base_internal30CurrentThreadIdentityIfPresentEv();
            *(int *)(lVar6 + 0x4c) = *(int *)(lVar6 + 0x4c) + -1;
          }
        }
        else {
          LOCK();
          uVar3 = *param_1;
          if (uVar4 == uVar3) {
            *param_1 = uVar4 | uVar2 | 1;
            uVar3 = uVar4;
          }
          UNLOCK();
          uVar7 = (ulong)uVar3;
        }
      }
    } while ((uVar7 & 1) != 0);
  }
  return;
}


