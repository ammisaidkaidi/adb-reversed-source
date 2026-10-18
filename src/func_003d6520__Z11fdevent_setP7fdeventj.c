// Function: _Z11fdevent_setP7fdeventj
// Address: 003d6520
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _Z11fdevent_setP7fdeventj(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  long *plVar2;
  
  if (cRam0000000000a00688 == '\0') {
    iVar1 = __cxa_guard_acquire(0xa00688);
    if (iVar1 != 0) {
      plVar2 = (long *)_Znwm(0xc0);
      _ZN21fdevent_context_epollC2Ev(plVar2);
      plRam0000000000a00680 = plVar2;
      __cxa_guard_release(0xa00688);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x003d6555. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plRam0000000000a00680 + 0x20))(plRam0000000000a00680,param_1,param_2);
  return;
}


