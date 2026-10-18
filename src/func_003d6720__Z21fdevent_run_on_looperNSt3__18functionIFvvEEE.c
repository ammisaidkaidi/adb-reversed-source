// Function: _Z21fdevent_run_on_looperNSt3__18functionIFvvEEE
// Address: 003d6720
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _Z21fdevent_run_on_looperNSt3__18functionIFvvEEE(long *param_1)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long in_FS_OFFSET;
  long alStack_58 [4];
  long *plStack_38;
  long lStack_20;
  
  lStack_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((cRam0000000000a00688 == '\0') && (iVar2 = __cxa_guard_acquire(0xa00688), iVar2 != 0)) {
    plVar4 = (long *)_Znwm(0xc0);
    _ZN21fdevent_context_epollC2Ev(plVar4);
    plRam0000000000a00680 = plVar4;
    __cxa_guard_release(0xa00688);
  }
  plVar1 = plRam0000000000a00680;
  plVar4 = (long *)param_1[4];
  if (plVar4 == (long *)0x0) {
    plStack_38 = (long *)0x0;
  }
  else if (plVar4 == param_1) {
    plStack_38 = alStack_58;
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  else {
    param_1[4] = 0;
    plStack_38 = plVar4;
  }
  _ZN15fdevent_context3RunENSt3__18functionIFvvEEE(plVar1,alStack_58);
  if (plStack_38 == alStack_58) {
    lVar3 = 0x20;
  }
  else {
    lVar3 = 0x28;
    if (plStack_38 == (long *)0x0) goto code_r0x003d67b4;
  }
  (**(code **)(*plStack_38 + lVar3))();
code_r0x003d67b4:
  if (*(long *)(in_FS_OFFSET + 0x28) != lStack_20) {
    func_0x0099bd00();
    if ((cRam0000000000a00688 == '\0') && (iVar2 = __cxa_guard_acquire(0xa00688), iVar2 != 0)) {
      plVar4 = (long *)_Znwm(0xc0);
      _ZN21fdevent_context_epollC2Ev(plVar4);
      plRam0000000000a00680 = plVar4;
      __cxa_guard_release(0xa00688);
    }
                    /* WARNING: Could not recover jumptable at 0x003d6841. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plRam0000000000a00680 + 0x28))();
    return;
  }
  return;
}


