// Function: _Z13fdevent_resetv
// Address: 003d6950
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _Z13fdevent_resetv(void)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  
  if (cRam0000000000a00688 == '\0') {
    iVar1 = __cxa_guard_acquire(0xa00688);
    if (iVar1 != 0) {
      plVar3 = (long *)_Znwm(0xc0);
      _ZN21fdevent_context_epollC2Ev(plVar3);
      plRam0000000000a00680 = plVar3;
      __cxa_guard_release(0xa00688);
    }
  }
  uVar2 = _Znwm(0xc0);
  _ZN21fdevent_context_epollC2Ev(uVar2);
  plVar3 = plRam0000000000a00680;
  plRam0000000000a00680 = (long *)uVar2;
  if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003d6992. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 8))();
    return;
  }
  return;
}


