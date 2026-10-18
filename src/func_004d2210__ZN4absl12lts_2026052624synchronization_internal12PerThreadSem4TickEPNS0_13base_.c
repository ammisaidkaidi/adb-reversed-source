// Function: _ZN4absl12lts_2026052624synchronization_internal12PerThreadSem4TickEPNS0_13base_internal14ThreadIdentityE
// Address: 004d2210
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN4absl12lts_2026052624synchronization_internal12PerThreadSem4TickEPNS0_13base_internal14ThreadIdentityE
               (long param_1)

{
  int iVar1;
  code *pcVar2;
  long lVar3;
  int *piVar4;
  
  LOCK();
  piVar4 = (int *)(param_1 + 0x188);
  iVar1 = *piVar4;
  *piVar4 = *piVar4 + 1;
  UNLOCK();
  if (((*(int *)(param_1 + 0x18c) != 0) && (0x3c < (iVar1 - *(int *)(param_1 + 0x18c)) + 1)) &&
     (*(char *)(param_1 + 400) == '\0')) {
    lVar3 = func_0x0099c620(0xca,param_1 + 0x80,0x81,1);
    if (lVar3 < 0) {
      piVar4 = (int *)func_0x0099bce0();
      if (0 < *piVar4) {
        _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
                  (3,&UNK_001649fd,99,&UNK_00181e87,-*piVar4);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    return;
  }
  return;
}


