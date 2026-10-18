// Function: _ZN4absl12lts_2026052619ReleasableMutexLock7ReleaseEv
// Address: 004d1320
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


code * _ZN4absl12lts_2026052619ReleasableMutexLock7ReleaseEv(undefined8 *param_1)

{
  ulong *puVar1;
  code *pcVar2;
  code *pcVar3;
  undefined8 extraout_RDX;
  undefined *puVar4;
  undefined8 *puVar5;
  bool bVar6;
  
  puVar1 = (ulong *)*param_1;
  if (puVar1 == (ulong *)0x0) {
    puVar4 = &UNK_00174346;
    puVar5 = (undefined8 *)0x3;
    _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
              (3,&UNK_00174346,0xad8,&UNK_00183943,&UNK_0017f188,&UNK_00189a16);
    puVar5[1] = 0;
    puVar5[2] = _ZN4absl12lts_202605269Condition19CallVoidPtrFunctionEPKS1_;
    puVar5[3] = extraout_RDX;
    *puVar5 = puVar4;
    return _ZN4absl12lts_202605269Condition19CallVoidPtrFunctionEPKS1_;
  }
  pcVar2 = (code *)*puVar1;
  if (((uint)pcVar2 & 0x1e ^ 10) < 6) {
    LOCK();
    pcVar3 = (code *)*puVar1;
    bVar6 = pcVar2 == pcVar3;
    if (bVar6) {
      *puVar1 = (ulong)pcVar2 & 0xffffffffffffffd7;
      pcVar3 = pcVar2;
    }
    UNLOCK();
    if (bVar6) goto code_r0x004d134c;
  }
  pcVar3 = (code *)_ZN4absl12lts_202605265Mutex10UnlockSlowEPNS0_15SynchWaitParamsE(puVar1,0);
code_r0x004d134c:
  *param_1 = 0;
  return pcVar3;
}


