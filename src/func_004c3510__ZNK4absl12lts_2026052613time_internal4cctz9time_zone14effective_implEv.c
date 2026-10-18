// Function: _ZNK4absl12lts_2026052613time_internal4cctz9time_zone14effective_implEv
// Address: 004c3510
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long _ZNK4absl12lts_2026052613time_internal4cctz9time_zone14effective_implEv(long *param_1)

{
  int iVar1;
  long lVar2;
  
  if (*param_1 != 0) {
    return *param_1;
  }
  if (cRam0000000000a009f8 != '\0') {
    return lRam0000000000a009f0;
  }
  iVar1 = __cxa_guard_acquire(0xa009f8);
  if (iVar1 != 0) {
    lVar2 = _Znwm(0x20);
    _ZN4absl12lts_2026052613time_internal4cctz9time_zone4ImplC2Ev(lVar2);
    lRam0000000000a009f0 = lVar2;
    __cxa_guard_release(0xa009f8);
  }
  return lRam0000000000a009f0;
}


