// Function: _ZN4absl12lts_2026052621RegisterCondVarTracerEPFvPKcPKvE
// Address: 004cf0a0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long _ZN4absl12lts_2026052621RegisterCondVarTracerEPFvPKcPKvE(long param_1)

{
  long lVar1;
  long lVar2;
  
  LOCK();
  lVar2 = lRam00000000009fb838;
  lVar1 = param_1;
  if (lRam00000000009fb838 != lRam00000000009fb830) {
    lVar2 = lRam00000000009fb830;
    lVar1 = lRam00000000009fb830;
  }
  lRam00000000009fb830 = lVar1;
  UNLOCK();
  return lVar2;
}


