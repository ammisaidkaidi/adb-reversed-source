// Function: _ZN4absl12lts_202605265Mutex11AwaitCommonERKNS0_9ConditionENS0_24synchronization_internal13KernelTimeoutE
// Address: 004cfc20
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8
_ZN4absl12lts_202605265Mutex11AwaitCommonERKNS0_9ConditionENS0_24synchronization_internal13KernelTimeoutE
          (ulong *param_1,long param_2,long param_3)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long in_FS_OFFSET;
  undefined *puStack_70;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  long lStack_40;
  ulong uStack_38;
  long lStack_30;
  
  lStack_30 = *(long *)(in_FS_OFFSET + 0x28);
  cVar1 = (**(code **)(param_2 + 0x10))(param_2);
  uVar2 = 1;
  if (cVar1 == '\0') {
    puVar4 = &UNK_001ff6d0;
    if ((*param_1 & 8) == 0) {
      puVar4 = &UNK_001ff6f8;
    }
    lStack_40 = 0;
    uStack_38 = 0;
    lStack_50 = _ZN4absl12lts_2026052613base_internal30CurrentThreadIdentityIfPresentEv();
    if (lStack_50 == 0) {
      lStack_50 = _ZN4absl12lts_2026052624synchronization_internal20CreateThreadIdentityEv();
    }
    uStack_58 = 0;
    uStack_48 = 0;
    puStack_70 = puVar4;
    lStack_68 = param_2;
    lStack_60 = param_3;
    if (_ZN4absl12lts_2026052613base_internal10CycleClock19cycle_clock_source_E == (code *)0x0) {
      lStack_40 = rdtsc();
    }
    else {
      lStack_40 = (*_ZN4absl12lts_2026052613base_internal10CycleClock19cycle_clock_source_E)();
    }
    lStack_40 = lStack_40 >> 1;
    uStack_38 = uStack_38 & 0xffffffffffffff00;
    _ZN4absl12lts_202605265Mutex10UnlockSlowEPNS0_15SynchWaitParamsE(param_1,&puStack_70);
    _ZN4absl12lts_202605265Mutex5BlockEPNS0_13base_internal14PerThreadSynchE(param_1,lStack_50);
    _ZN4absl12lts_202605265Mutex12LockSlowLoopEPNS0_15SynchWaitParamsEi(param_1,&puStack_70,3);
    uVar2 = 1;
    if (lStack_68 == 0) {
      cVar1 = (**(code **)(param_2 + 0x10))(param_2);
      uVar2 = 1;
      if (cVar1 == '\0') {
        if (param_3 == -1) goto code_r0x004cfd53;
        uVar2 = 0;
      }
    }
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_30) {
    return uVar2;
  }
  func_0x0099bd00();
code_r0x004cfd53:
  lVar3 = 3;
  _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
            (3,&UNK_00174346,0x644,&UNK_00183943,&UNK_0017a5bb,&UNK_00168060);
                    /* WARNING: Could not recover jumptable at 0x004cfd85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(lVar3 + 0x10))();
  return uVar2;
}


