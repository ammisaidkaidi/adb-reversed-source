// Function: _Z11fdevent_delP7fdeventj
// Address: 003d6620
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _Z11fdevent_delP7fdeventj(long param_1,ushort param_2,undefined8 param_3,undefined1 param_4)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 extraout_RDX;
  long in_FS_OFFSET;
  undefined1 auStack_38 [8];
  undefined *puStack_30;
  
  if (cRam0000000000a00688 == '\0') {
    puStack_30 = &UNK_003d6662;
    iVar1 = __cxa_guard_acquire(0xa00688);
    if (iVar1 != 0) {
      puStack_30 = &UNK_003d6673;
      plVar3 = (long *)_Znwm(0xc0);
      puStack_30 = &UNK_003d667e;
      _ZN21fdevent_context_epollC2Ev(plVar3);
      puStack_30 = &UNK_003d6691;
      plRam0000000000a00680 = plVar3;
      __cxa_guard_release(0xa00688);
    }
  }
  plVar3 = plRam0000000000a00680;
  puStack_30 = *(undefined **)(in_FS_OFFSET + 0x28);
  if ((param_2 & 8) != 0) {
    param_4 = 6;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (auStack_38,&UNK_00167a35,0x72,6,0,0xffffffff);
    uVar2 = _ZN7android4base10LogMessage6streamEv(auStack_38);
    uVar2 = func_0x0032eb30(uVar2,&UNK_0017ba7b,0x25);
    func_0x0032eb30(uVar2,&UNK_0015ae05,1);
    _ZN7android4base10LogMessageD2Ev(auStack_38);
  }
  (**(code **)(*plVar3 + 0x20))(plVar3,param_1,~param_2 & *(ushort *)(param_1 + 0xc));
  if ((undefined *)*(long *)(in_FS_OFFSET + 0x28) == puStack_30) {
    return;
  }
  func_0x0099bd00();
  _ZNK15fdevent_context17CheckLooperThreadEv();
  *(undefined8 *)(param_1 + 0x10) = extraout_RDX;
  *(undefined1 *)(param_1 + 0x18) = param_4;
  uVar2 = _ZNSt3__16chrono12steady_clock3nowEv();
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  return;
}


