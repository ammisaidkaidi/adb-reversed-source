// Function: _ZN4absl12lts_2026052624synchronization_internal12PerThreadSem23GetThreadBlockedCounterEv
// Address: 004d21f0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8
_ZN4absl12lts_2026052624synchronization_internal12PerThreadSem23GetThreadBlockedCounterEv(void)

{
  long lVar1;
  
  lVar1 = _ZN4absl12lts_2026052613base_internal30CurrentThreadIdentityIfPresentEv();
  if (lVar1 == 0) {
    lVar1 = _ZN4absl12lts_2026052624synchronization_internal20CreateThreadIdentityEv();
  }
  return *(undefined8 *)(lVar1 + 0x180);
}


