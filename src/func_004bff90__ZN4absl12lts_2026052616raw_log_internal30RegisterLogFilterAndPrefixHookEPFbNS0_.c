// Function: _ZN4absl12lts_2026052616raw_log_internal30RegisterLogFilterAndPrefixHookEPFbNS0_11LogSeverityEPKciPPcPiE
// Address: 004bff90
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long _ZN4absl12lts_2026052616raw_log_internal30RegisterLogFilterAndPrefixHookEPFbNS0_11LogSeverityEPKciPPcPiE
               (long param_1)

{
  long lVar1;
  long lVar2;
  
  LOCK();
  lVar2 = lRam00000000009fb7d8;
  lVar1 = param_1;
  if (lRam00000000009fb7d8 != lRam00000000009fb7d0) {
    lVar2 = lRam00000000009fb7d0;
    lVar1 = lRam00000000009fb7d0;
  }
  lRam00000000009fb7d0 = lVar1;
  UNLOCK();
  return lVar2;
}


