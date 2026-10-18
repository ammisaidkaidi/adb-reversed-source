// Function: _ZN4absl12lts_2026052621RegisterMutexProfilerEPFvlE
// Address: 004cf060
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long _ZN4absl12lts_2026052621RegisterMutexProfilerEPFvlE(long param_1)

{
  long lVar1;
  long lVar2;
  
  LOCK();
  lVar2 = lRam00000000009fb818;
  lVar1 = param_1;
  if (lRam00000000009fb818 != lRam00000000009fb810) {
    lVar2 = lRam00000000009fb810;
    lVar1 = lRam00000000009fb810;
  }
  lRam00000000009fb810 = lVar1;
  UNLOCK();
  return lVar2;
}


