// Function: _ZN4absl12lts_202605265Mutex20LockSlowWithDeadlineEPKNS0_6MuHowSEPKNS0_9ConditionENS0_24synchronization_internal13KernelTimeoutEi
// Address: 004cfab0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _ZN4absl12lts_202605265Mutex20LockSlowWithDeadlineEPKNS0_6MuHowSEPKNS0_9ConditionENS0_24synchronization_internal13KernelTimeoutEi
                (ulong *param_1,ulong ****param_2,ulong *param_3,ulong *param_4,uint param_5)

{
  char cVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long extraout_RDX;
  ulong ****ppppuVar6;
  long lVar7;
  undefined8 unaff_R12;
  undefined7 uVar9;
  undefined *puVar8;
  ulong *unaff_R14;
  ulong uVar10;
  long in_FS_OFFSET;
  undefined *puStack_f8;
  ulong ***pppuStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  ulong uStack_c0;
  long lStack_b8;
  ulong *puStack_b0;
  ulong uStack_a8;
  ulong *puStack_a0;
  ulong uStack_98;
  undefined *puStack_90;
  ulong *puStack_80;
  ulong ***pppuStack_78;
  ulong *puStack_70;
  ulong *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  long lStack_48;
  ulong uStack_40;
  long lStack_38;
  
  uVar10 = (ulong)param_5;
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = *param_1;
  puStack_80 = param_1;
  if (((ulong)*param_2 & uVar3) == 0) {
    LOCK();
    uVar4 = *param_1;
    if (uVar3 == uVar4) {
      *param_1 = (((ulong)((param_5 & 1) - 1) | 0xfffffffffffffffd) & uVar3 | (ulong)param_2[1]) +
                 (long)param_2[2];
    }
    UNLOCK();
    if (uVar3 != uVar4) goto code_r0x004cfb1f;
    uVar9 = (undefined7)((ulong)unaff_R12 >> 8);
    ppppuVar6 = param_2;
    if (param_3 != (ulong *)0x0) {
      puStack_90 = &UNK_004cfb13;
      param_1 = param_3;
      cVar1 = (*(code *)param_3[2])();
      uVar3 = CONCAT71(uVar9,1);
      if (cVar1 != '\0') goto code_r0x004cfbbe;
      goto code_r0x004cfb25;
    }
    uVar3 = CONCAT71(uVar9,1);
    param_4 = unaff_R14;
  }
  else {
code_r0x004cfb1f:
    uVar3 = 0;
code_r0x004cfb25:
    lStack_48 = 0;
    uStack_40 = 0;
    puStack_90 = &UNK_004cfb31;
    lStack_58 = _ZN4absl12lts_2026052613base_internal30CurrentThreadIdentityIfPresentEv();
    if (lStack_58 == 0) {
      puStack_90 = &UNK_004cfc0f;
      lStack_58 = _ZN4absl12lts_2026052624synchronization_internal20CreateThreadIdentityEv();
    }
    uStack_60 = 0;
    uStack_50 = 0;
    pppuStack_78 = (ulong ***)param_2;
    puStack_70 = param_3;
    puStack_68 = param_4;
    if (_ZN4absl12lts_2026052613base_internal10CycleClock19cycle_clock_source_E == (code *)0x0) {
      lStack_48 = rdtsc();
    }
    else {
      puStack_90 = &UNK_004cfb6b;
      lStack_48 = (*_ZN4absl12lts_2026052613base_internal10CycleClock19cycle_clock_source_E)();
    }
    param_1 = puStack_80;
    lStack_48 = lStack_48 >> 1;
    uStack_40 = uStack_40 & 0xffffffffffffff00;
    uVar4 = (ulong)(param_5 | 2);
    if (param_3 == (ulong *)0x0) {
      uVar4 = uVar10;
    }
    uVar5 = uVar4;
    if ((char)uVar3 != '\0') {
      puStack_90 = &UNK_004cfbf3;
      _ZN4absl12lts_202605265Mutex10UnlockSlowEPNS0_15SynchWaitParamsE(puStack_80,&pppuStack_78);
      puStack_90 = &UNK_004cfbff;
      _ZN4absl12lts_202605265Mutex5BlockEPNS0_13base_internal14PerThreadSynchE(param_1,lStack_58);
      uVar5 = (ulong)((uint)uVar4 | 1);
      param_4 = param_1;
      uVar10 = uVar4;
    }
    ppppuVar6 = &pppuStack_78;
    puStack_90 = &UNK_004cfba6;
    _ZN4absl12lts_202605265Mutex12LockSlowLoopEPNS0_15SynchWaitParamsEi(param_1,ppppuVar6,uVar5);
    uVar3 = CONCAT71((int7)(uVar3 >> 8),1);
    if ((param_3 != (ulong *)0x0) && (puStack_70 == (ulong *)0x0)) {
      puStack_90 = &UNK_004cfbbb;
      param_1 = param_3;
      uVar2 = (*(code *)param_3[2])();
      uVar3 = (ulong)uVar2;
    }
  }
code_r0x004cfbbe:
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return uVar3 & 0xffffffff;
  }
  puStack_90 = &UNK_004cfc19;
  func_0x0099bd00();
  lStack_b8 = *(long *)(in_FS_OFFSET + 0x28);
  puStack_b0 = param_3;
  uStack_a8 = uVar3;
  puStack_a0 = param_4;
  uStack_98 = uVar10;
  puStack_90 = &stack0xfffffffffffffff8;
  cVar1 = (*(code *)ppppuVar6[2])(ppppuVar6);
  uVar3 = 1;
  if (cVar1 == '\0') {
    puVar8 = &UNK_001ff6d0;
    if ((*param_1 & 8) == 0) {
      puVar8 = &UNK_001ff6f8;
    }
    lStack_c8 = 0;
    uStack_c0 = 0;
    lStack_d8 = _ZN4absl12lts_2026052613base_internal30CurrentThreadIdentityIfPresentEv();
    if (lStack_d8 == 0) {
      lStack_d8 = _ZN4absl12lts_2026052624synchronization_internal20CreateThreadIdentityEv();
    }
    uStack_e0 = 0;
    uStack_d0 = 0;
    puStack_f8 = puVar8;
    pppuStack_f0 = (ulong ***)ppppuVar6;
    lStack_e8 = extraout_RDX;
    if (_ZN4absl12lts_2026052613base_internal10CycleClock19cycle_clock_source_E == (code *)0x0) {
      lStack_c8 = rdtsc();
    }
    else {
      lStack_c8 = (*_ZN4absl12lts_2026052613base_internal10CycleClock19cycle_clock_source_E)();
    }
    lStack_c8 = lStack_c8 >> 1;
    uStack_c0 = uStack_c0 & 0xffffffffffffff00;
    _ZN4absl12lts_202605265Mutex10UnlockSlowEPNS0_15SynchWaitParamsE(param_1,&puStack_f8);
    _ZN4absl12lts_202605265Mutex5BlockEPNS0_13base_internal14PerThreadSynchE(param_1,lStack_d8);
    _ZN4absl12lts_202605265Mutex12LockSlowLoopEPNS0_15SynchWaitParamsEi(param_1,&puStack_f8,3);
    uVar3 = 1;
    if ((ulong ****)pppuStack_f0 == (ulong ****)0x0) {
      cVar1 = (*(code *)ppppuVar6[2])(ppppuVar6);
      uVar3 = 1;
      if (cVar1 == '\0') {
        if (extraout_RDX == -1) goto code_r0x004cfd53;
        uVar3 = 0;
      }
    }
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_b8) {
    return uVar3;
  }
  func_0x0099bd00();
code_r0x004cfd53:
  lVar7 = 3;
  _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
            (3,&UNK_00174346,0x644,&UNK_00183943,&UNK_0017a5bb,&UNK_00168060);
                    /* WARNING: Could not recover jumptable at 0x004cfd85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(lVar7 + 0x10))();
  return uVar3;
}


