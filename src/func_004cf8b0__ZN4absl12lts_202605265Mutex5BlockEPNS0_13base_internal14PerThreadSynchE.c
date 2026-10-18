// Function: _ZN4absl12lts_202605265Mutex5BlockEPNS0_13base_internal14PerThreadSynchE
// Address: 004cf8b0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _ZN4absl12lts_202605265Mutex5BlockEPNS0_13base_internal14PerThreadSynchE
                (undefined8 param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  char cVar3;
  undefined4 uVar4;
  ulong *puVar5;
  
  uVar1 = *(uint *)((long)param_2 + 0x1c);
  while (uVar1 == 1) {
    cVar3 = AbslInternalPerThreadSemWait_lts_20260526(*(undefined8 *)(param_2[4] + 0x10));
    if (cVar3 == '\0') {
      _ZN4absl12lts_202605265Mutex9TryRemoveEPNS0_13base_internal14PerThreadSynchE(param_1,param_2);
      if (*param_2 != 0) {
        uVar4 = 0;
        do {
          uVar4 = _ZN4absl12lts_2026052624synchronization_internal10MutexDelayEii(uVar4,1);
          _ZN4absl12lts_202605265Mutex9TryRemoveEPNS0_13base_internal14PerThreadSynchE
                    (param_1,param_2);
        } while (*param_2 != 0);
      }
      *(undefined8 *)(param_2[4] + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(param_2[4] + 8) = 0;
    }
    uVar1 = *(uint *)((long)param_2 + 0x1c);
  }
  if ((param_2[4] == 0) && (*(char *)((long)param_2 + 0x14) == '\0')) {
    puVar5 = (ulong *)&UNK_00174346;
    _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
              (3,&UNK_00174346,0x4b2,&UNK_00183943,&UNK_0016322d,&UNK_0015b5bf);
    uVar2 = *puVar5;
    *puVar5 = 0;
    *(undefined4 *)((long)puVar5 + 0x1c) = 0;
    AbslInternalPerThreadSemPost_lts_20260526(puVar5);
    return uVar2;
  }
  param_2[4] = 0;
  return (ulong)uVar1;
}


