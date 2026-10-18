// Function: _Z15fdevent_destroyP7fdevent
// Address: 003d6470
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _Z15fdevent_destroyP7fdevent(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long in_FS_OFFSET;
  uint uStack_24;
  long lStack_20;
  
  lStack_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (cRam0000000000a00688 == '\0') {
    iVar2 = __cxa_guard_acquire(0xa00688);
    if (iVar2 != 0) {
      plVar4 = (long *)_Znwm(0xc0);
      _ZN21fdevent_context_epollC2Ev(plVar4);
      plRam0000000000a00680 = plVar4;
      __cxa_guard_release(0xa00688);
    }
  }
  plVar4 = plRam0000000000a00680;
  _ZN15fdevent_context7DestroyEP7fdevent(&uStack_24,plRam0000000000a00680,param_1);
  puVar3 = (undefined4 *)func_0x0099bce0();
  uVar1 = *puVar3;
  uVar6 = (ulong)uStack_24;
  if (uStack_24 != 0xffffffff) {
    func_0x0099bd10();
  }
  *puVar3 = uVar1;
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_20) {
    return;
  }
  func_0x0099bd00();
  if (cRam0000000000a00688 == '\0') {
    iVar2 = __cxa_guard_acquire(0xa00688);
    if (iVar2 != 0) {
      plVar5 = (long *)_Znwm(0xc0);
      _ZN21fdevent_context_epollC2Ev(plVar5);
      plRam0000000000a00680 = plVar5;
      __cxa_guard_release(0xa00688);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x003d6555. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plRam0000000000a00680 + 0x20))
            (plRam0000000000a00680,uVar6,(ulong)plVar4 & 0xffffffff);
  return;
}


