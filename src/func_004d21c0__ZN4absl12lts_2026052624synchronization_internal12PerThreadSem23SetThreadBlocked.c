// Function: _ZN4absl12lts_2026052624synchronization_internal12PerThreadSem23SetThreadBlockedCounterEPNSt3__16atomicIiEE
// Address: 004d21c0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN4absl12lts_2026052624synchronization_internal12PerThreadSem23SetThreadBlockedCounterEPNSt3__16atomicIiEE
               (undefined8 param_1)

{
  long lVar1;
  
  lVar1 = _ZN4absl12lts_2026052613base_internal30CurrentThreadIdentityIfPresentEv();
  if (lVar1 == 0) {
    lVar1 = _ZN4absl12lts_2026052624synchronization_internal20CreateThreadIdentityEv();
  }
  *(undefined8 *)(lVar1 + 0x180) = param_1;
  return;
}


