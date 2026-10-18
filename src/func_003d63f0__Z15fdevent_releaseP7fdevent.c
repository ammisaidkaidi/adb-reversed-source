// Function: _Z15fdevent_releaseP7fdevent
// Address: 003d63f0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 _Z15fdevent_releaseP7fdevent(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (cRam0000000000a00688 == '\0') {
    iVar1 = __cxa_guard_acquire(0xa00688);
    if (iVar1 != 0) {
      uVar2 = _Znwm(0xc0);
      _ZN21fdevent_context_epollC2Ev(uVar2);
      uRam0000000000a00680 = uVar2;
      __cxa_guard_release(0xa00688);
    }
  }
  _ZN15fdevent_context7DestroyEP7fdevent(param_1,uRam0000000000a00680,param_2);
  return param_1;
}


