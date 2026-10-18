// Function: _ZN4absl12lts_2026052613base_internal24RegisterSpinLockProfilerEPFvPKvlE
// Address: 004d3c10
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long _ZN4absl12lts_2026052613base_internal24RegisterSpinLockProfilerEPFvPKvlE(long param_1)

{
  long lVar1;
  long lVar2;
  
  LOCK();
  lVar2 = lRam00000000009fb848;
  lVar1 = param_1;
  if (lRam00000000009fb848 != lRam00000000009fb840) {
    lVar2 = lRam00000000009fb840;
    lVar1 = lRam00000000009fb840;
  }
  lRam00000000009fb840 = lVar1;
  UNLOCK();
  return lVar2;
}


