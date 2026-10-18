// Function: _Z19fdevent_set_timeoutP7fdeventNSt3__18optionalINS1_6chrono8durationIxNS1_5ratioILl1ELl1000EEEEEEE
// Address: 003d66a0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _Z19fdevent_set_timeoutP7fdeventNSt3__18optionalINS1_6chrono8durationIxNS1_5ratioILl1ELl1000EEEEEEE
               (long param_1,undefined8 param_2,undefined1 param_3)

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
  _ZNK15fdevent_context17CheckLooperThreadEv(uRam0000000000a00680);
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined1 *)(param_1 + 0x18) = param_3;
  uVar2 = _ZNSt3__16chrono12steady_clock3nowEv();
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  return;
}


