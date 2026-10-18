// Function: _ZN4absl12lts_2026052613time_internal4cctz9time_zone4Impl7UTCImplEv
// Address: 004c38d0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 _ZN4absl12lts_2026052613time_internal4cctz9time_zone4Impl7UTCImplEv(void)

{
  int iVar1;
  undefined8 uVar2;
  
  if (cRam0000000000a009f8 != '\0') {
    return uRam0000000000a009f0;
  }
  iVar1 = __cxa_guard_acquire(0xa009f8);
  if (iVar1 != 0) {
    uVar2 = _Znwm(0x20);
    _ZN4absl12lts_2026052613time_internal4cctz9time_zone4ImplC2Ev(uVar2);
    uRam0000000000a009f0 = uVar2;
    __cxa_guard_release(0xa009f8);
  }
  return uRam0000000000a009f0;
}


