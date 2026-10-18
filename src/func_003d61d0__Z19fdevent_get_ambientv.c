// Function: _Z19fdevent_get_ambientv
// Address: 003d61d0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 _Z19fdevent_get_ambientv(void)

{
  int iVar1;
  undefined8 uVar2;
  
  if (cRam0000000000a00688 != '\0') {
    return uRam0000000000a00680;
  }
  iVar1 = __cxa_guard_acquire(0xa00688);
  if (iVar1 != 0) {
    uVar2 = _Znwm(0xc0);
    _ZN21fdevent_context_epollC2Ev(uVar2);
    uRam0000000000a00680 = uVar2;
    __cxa_guard_release(0xa00688);
  }
  return uRam0000000000a00680;
}


