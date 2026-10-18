// Function: _ZN4absl12lts_2026052624synchronization_internal11FutexWaiter4PostEv
// Address: 004d40d0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN4absl12lts_2026052624synchronization_internal11FutexWaiter4PostEv(int *param_1)

{
  int iVar1;
  code *pcVar2;
  long lVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined8 in_R9;
  undefined1 *puVar6;
  
  puVar6 = &stack0xfffffffffffffff8;
  LOCK();
  iVar1 = *param_1;
  *param_1 = *param_1 + 1;
  UNLOCK();
  if (iVar1 == 0) {
    lVar3 = func_0x0099c620(0xca,param_1,0x81,1);
    if (lVar3 < 0) {
      piVar4 = (int *)func_0x0099bce0();
      if (0 < *piVar4) {
        uVar5 = 3;
        _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
                  (3,&UNK_001649fd,99,&UNK_00181e87,-*piVar4);
        lVar3 = func_0x0099c620(0xca,uVar5,0x81,1);
        if (lVar3 < 0) {
          piVar4 = (int *)func_0x0099bce0();
          if (0 < *piVar4) {
            _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
                      (3,&UNK_001649fd,99,&UNK_00181e87,-*piVar4,in_R9,puVar6);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        return;
      }
    }
  }
  return;
}


