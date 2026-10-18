// Function: _Z14fdevent_createiPFvP7fdeventjPvES1_
// Address: 003d6310
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _Z14fdevent_createiPFvP7fdeventjPvES1_(uint param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  uint *puVar6;
  ulong uVar7;
  long in_FS_OFFSET;
  uint uStack_3c;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  puVar3 = (undefined4 *)func_0x0099bce0();
  if (cRam0000000000a00688 == '\0') {
    iVar2 = __cxa_guard_acquire(0xa00688);
    if (iVar2 != 0) {
      uVar5 = _Znwm(0xc0);
      _ZN21fdevent_context_epollC2Ev(uVar5);
      uRam0000000000a00680 = uVar5;
      __cxa_guard_release(0xa00688);
    }
  }
  uVar5 = uRam0000000000a00680;
  *puVar3 = *puVar3;
  puVar6 = &uStack_3c;
  uStack_3c = param_1;
  uVar4 = _ZN15fdevent_context6CreateEN7android4base14unique_fd_implINS1_13DefaultCloserEEENSt3__17variantIJPFvijPvEPFvP7fdeventjS7_EEEES7_
                    (uVar5,puVar6,param_2,1,param_3);
  uVar1 = *puVar3;
  uVar7 = (ulong)uStack_3c;
  if (uStack_3c != 0xffffffff) {
    func_0x0099bd10();
  }
  *puVar3 = uVar1;
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return uVar4;
  }
  func_0x0099bd00();
  if (cRam0000000000a00688 == '\0') {
    iVar2 = __cxa_guard_acquire(0xa00688);
    if (iVar2 != 0) {
      uVar5 = _Znwm(0xc0);
      _ZN21fdevent_context_epollC2Ev(uVar5);
      uRam0000000000a00680 = uVar5;
      __cxa_guard_release(0xa00688);
    }
  }
  _ZN15fdevent_context7DestroyEP7fdevent(uVar7,uRam0000000000a00680,puVar6);
  return uVar7;
}


