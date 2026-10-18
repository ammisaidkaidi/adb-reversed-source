// Function: _ZN4absl12lts_202605267CondVar10WaitCommonEPNS0_5MutexENS0_24synchronization_internal13KernelTimeoutE
// Address: 004d0fb0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _ZN4absl12lts_202605267CondVar10WaitCommonEPNS0_5MutexENS0_24synchronization_internal13KernelTimeoutE
                (ulong *param_1,ulong *param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uVar9;
  undefined *puVar10;
  long in_FS_OFFSET;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong *puStack_60;
  long lStack_58;
  ulong *puStack_50;
  long lStack_48;
  ulong uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  puVar10 = &UNK_001ff6d0;
  if ((*param_2 & 8) == 0) {
    puVar10 = &UNK_001ff6f8;
  }
  uVar4 = *param_1;
  (*pcRam00000000009fb830)(&UNK_0017752c,param_1);
  if ((uVar4 & 2) != 0) {
    func_0x004d0240(param_1,10);
  }
  lStack_48 = 0;
  uStack_40 = 0;
  lStack_58 = _ZN4absl12lts_2026052613base_internal30CurrentThreadIdentityIfPresentEv();
  if (lStack_58 == 0) {
    lStack_58 = _ZN4absl12lts_2026052624synchronization_internal20CreateThreadIdentityEv();
  }
  uStack_70 = 0;
  puStack_78 = puVar10;
  uStack_68 = param_3;
  puStack_60 = param_2;
  puStack_50 = param_1;
  if (_ZN4absl12lts_2026052613base_internal10CycleClock19cycle_clock_source_E == (code *)0x0) {
    lStack_48 = rdtsc();
  }
  else {
    lStack_48 = (*_ZN4absl12lts_2026052613base_internal10CycleClock19cycle_clock_source_E)();
  }
  lStack_48 = lStack_48 >> 1;
  uStack_40 = uStack_40 & 0xffffffffffffff00;
  _ZN4absl12lts_202605265Mutex10UnlockSlowEPNS0_15SynchWaitParamsE(param_2,&puStack_78);
  uVar7 = 0;
  iVar3 = *(int *)(lStack_58 + 0x1c);
  while (iVar3 == 1) {
    cVar2 = AbslInternalPerThreadSemWait_lts_20260526(param_3);
    if (cVar2 == '\0') {
      _ZN4absl12lts_202605267CondVar6RemoveEPNS0_13base_internal14PerThreadSynchE(param_1,lStack_58)
      ;
      param_3 = 0xffffffffffffffff;
      uVar7 = 1;
    }
    iVar3 = *(int *)(lStack_58 + 0x1c);
  }
  if (*(long *)(lStack_58 + 0x20) != 0) {
    *(undefined8 *)(lStack_58 + 0x20) = 0;
    (*pcRam00000000009fb830)(&UNK_00157c40,param_1);
    if ((uVar4 & 2) != 0) {
      func_0x004d0240(param_1,0xb);
    }
    _ZN4absl12lts_202605265Mutex8LockSlowEPKNS0_6MuHowSEPKNS0_9ConditionEi(param_2,puVar10,0,3);
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
      return uVar7;
    }
    func_0x0099bd00();
  }
  puVar8 = (ulong *)0x3;
  _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
            (3,&UNK_00174346,0xa75,&UNK_00183943,&UNK_0017da9f,&UNK_00168086);
  uVar4 = _ZN4absl12lts_2026052613base_internal30CurrentThreadIdentityIfPresentEv();
  if (uVar4 != 0) {
    *(int *)(uVar4 + 0x4c) = *(int *)(uVar4 + 0x4c) + 1;
  }
  uVar7 = *puVar8;
  uVar6 = uVar4;
  if (uVar7 != 0) {
    uVar9 = 0;
    do {
      if ((uVar7 & 1) == 0) {
        LOCK();
        uVar6 = *puVar8;
        if (uVar7 == uVar6) {
          *puVar8 = uVar7 | 1;
        }
        UNLOCK();
        if (uVar7 == uVar6) {
          plVar5 = (long *)(uVar7 & 0xfffffffffffffffc);
          if (plVar5 == (long *)0x0) {
            *puVar8 = uVar7;
          }
          else {
            plVar1 = (long *)*plVar5;
            if (plVar1 == plVar5) {
              uVar7 = (ulong)((uint)uVar7 & 2);
              uVar9 = uVar7;
            }
            else {
              *plVar5 = *plVar1;
              uVar9 = (ulong)((uint)uVar7 & 2);
            }
            *puVar8 = uVar7;
            _ZN4absl12lts_202605265Mutex3FerEPNS0_13base_internal14PerThreadSynchE
                      (*(undefined8 *)(plVar1[4] + 0x18));
            uVar6 = (*pcRam00000000009fb830)(&UNK_0016188a,puVar8);
            if (uVar9 == 0) break;
          }
          uVar6 = func_0x004d0240(puVar8,0xc);
          break;
        }
      }
      uVar6 = _ZN4absl12lts_2026052624synchronization_internal10MutexDelayEii(uVar9,1);
      uVar9 = uVar6 & 0xffffffff;
      uVar7 = *puVar8;
    } while (uVar7 != 0);
  }
  if (uVar4 != 0) {
    uVar6 = _ZN4absl12lts_2026052613base_internal30CurrentThreadIdentityIfPresentEv();
    *(int *)(uVar6 + 0x4c) = *(int *)(uVar6 + 0x4c) + -1;
  }
  return uVar6;
}


