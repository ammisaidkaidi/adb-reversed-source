// Function: _ZN4absl12lts_2026052619RegisterMutexTracerEPFvPKcPKvlE
// Address: 004cf080
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long _ZN4absl12lts_2026052619RegisterMutexTracerEPFvPKcPKvlE(long param_1)

{
  long lVar1;
  long lVar2;
  
  LOCK();
  lVar2 = lRam00000000009fb828;
  lVar1 = param_1;
  if (lRam00000000009fb828 != lRam00000000009fb820) {
    lVar2 = lRam00000000009fb820;
    lVar1 = lRam00000000009fb820;
  }
  lRam00000000009fb820 = lVar1;
  UNLOCK();
  return lVar2;
}


