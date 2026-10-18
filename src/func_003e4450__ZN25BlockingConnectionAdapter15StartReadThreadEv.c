// Function: _ZN25BlockingConnectionAdapter15StartReadThreadEv
// Address: 003e4450
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _ZN25BlockingConnectionAdapter15StartReadThreadEv(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 extraout_RDX;
  undefined *puVar4;
  undefined8 *puVar5;
  long in_FS_OFFSET;
  undefined8 uStack_28;
  ulong uStack_20;
  
  uStack_20 = *(ulong *)(in_FS_OFFSET + 0x28);
  uVar2 = _Znwm(8);
  _ZNSt3__115__thread_structC2Ev(uVar2);
  puVar3 = (undefined8 *)_Znwm(0x10);
  *puVar3 = uVar2;
  puVar3[1] = param_1;
  puVar5 = &uStack_28;
  puVar4 = (undefined *)0x0;
  uVar1 = func_0x0099be80(puVar5,0,&UNK_003eeec0,puVar3);
  if (uVar1 == 0) {
    if (*(long *)(param_1 + 0x20) == 0) {
      *(undefined8 *)(param_1 + 0x20) = uStack_28;
      uStack_28 = 0;
      puVar5 = &uStack_28;
      _ZNSt3__16threadD2Ev();
      if (*(ulong *)(in_FS_OFFSET + 0x28) == uStack_20) {
        return *(ulong *)(in_FS_OFFSET + 0x28);
      }
      goto code_r0x003e44f5;
    }
  }
  else {
    puVar4 = &UNK_0015f7ec;
    puVar5 = (undefined8 *)(ulong)uVar1;
    _ZNSt3__120__throw_system_errorEiPKc(puVar5,&UNK_0015f7ec);
  }
  _ZSt9terminatev();
code_r0x003e44f5:
  func_0x0099bd00();
  _ZNSt3__15mutex4lockEv(puVar5 + 0xc);
  if (puVar5[4] != 0) {
    _ZNSt3__16thread4joinEv(puVar5 + 4);
  }
  uVar1 = (**(code **)(*(long *)puVar5[3] + 0x20))((long *)puVar5[3],puVar4,extraout_RDX);
  _ZN25BlockingConnectionAdapter15StartReadThreadEv(puVar5);
  _ZNSt3__115recursive_mutex6unlockEv(puVar5 + 0xc);
  return (ulong)uVar1;
}


