// Function: _ZN4absl12lts_2026052612log_internal25SetLoggingGlobalsListenerEPFvvE
// Address: 004bf780
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long _ZN4absl12lts_2026052612log_internal25SetLoggingGlobalsListenerEPFvvE(long param_1)

{
  long lVar1;
  long lVar2;
  
  LOCK();
  lVar2 = lRam00000000009fb7b0;
  lVar1 = param_1;
  if (lRam00000000009fb7b0 != lRam00000000009fb7a8) {
    lVar2 = lRam00000000009fb7a8;
    lVar1 = lRam00000000009fb7a8;
  }
  lRam00000000009fb7a8 = lVar1;
  UNLOCK();
  return lVar2;
}


