// Function: _ZN4absl12lts_202605265Mutex45InternalAttemptToUseMutexInFatalSignalHandlerEv
// Address: 004cf1c0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN4absl12lts_202605265Mutex45InternalAttemptToUseMutexInFatalSignalHandlerEv(void)

{
  long lVar1;
  
  lVar1 = _ZN4absl12lts_2026052613base_internal30CurrentThreadIdentityIfPresentEv();
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0x14) = 1;
  }
  return;
}


