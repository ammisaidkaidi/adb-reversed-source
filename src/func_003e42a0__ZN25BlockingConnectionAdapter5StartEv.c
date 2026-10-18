// Function: _ZN25BlockingConnectionAdapter5StartEv
// Address: 003e42a0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _ZN25BlockingConnectionAdapter5StartEv(long param_1)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined8 extraout_RDX;
  undefined *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  long in_FS_OFFSET;
  ulong uStack_90;
  ulong uStack_88;
  long lStack_80;
  ulong *puStack_78;
  undefined *puStack_70;
  undefined4 uStack_5c;
  ulong auStack_58 [2];
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  puVar8 = (ulong *)(param_1 + 0x60);
  puStack_70 = &UNK_003e42cd;
  _ZNSt3__15mutex4lockEv(puVar8);
  if (*(char *)(param_1 + 0x10) == '\x01') {
    puStack_70 = &UNK_003e42df;
    cVar1 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(6,0);
    if (cVar1 != '\0') {
      puStack_70 = &UNK_003e438b;
      puVar5 = (undefined4 *)func_0x0099bce0();
      uStack_5c = *puVar5;
      puStack_70 = &UNK_003e43b9;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_40,&UNK_0017a1e0,0x139,6,0,0xffffffff);
      puStack_70 = &UNK_003e43c1;
      uVar3 = _ZN7android4base10LogMessage6streamEv(auStack_40);
      puStack_70 = &UNK_003e43d5;
      uVar3 = func_0x0032eb30(uVar3,&UNK_0016ebd7,0x1a);
      puStack_70 = &UNK_003e43e7;
      _ZNK10Connection6SerialEv(auStack_58,param_1);
      puStack_70 = &UNK_003e43f2;
      uVar3 = func_0x0032e5a0(uVar3,auStack_58);
      puStack_70 = &UNK_003e4406;
      func_0x0032eb30(uVar3,&UNK_00169639,0x19);
      if ((auStack_58[0] & 1) != 0) {
        puStack_70 = &UNK_003e441d;
        _ZdaPvSt11align_val_t(uStack_48,auStack_58[0] & 0xfffffffffffffffe);
      }
      puStack_70 = &UNK_003e4426;
      _ZN7android4base10LogMessageD2Ev(auStack_40);
      *puVar5 = uStack_5c;
    }
  }
  puStack_70 = &UNK_003e42ef;
  _ZN25BlockingConnectionAdapter15StartReadThreadEv(param_1);
  puStack_70 = &UNK_003e42f9;
  uVar3 = _Znwm(8);
  puStack_70 = &UNK_003e4304;
  _ZNSt3__115__thread_structC2Ev(uVar3);
  puStack_70 = &UNK_003e430e;
  puVar4 = (undefined8 *)_Znwm(0x10);
  *puVar4 = uVar3;
  puVar4[1] = param_1;
  puVar7 = auStack_58;
  puStack_70 = &UNK_003e432a;
  uVar2 = func_0x0099be80(puVar7,0,&UNK_003eeaf0,puVar4);
  if (uVar2 == 0) {
    if (*(long *)(param_1 + 0x28) != 0) goto code_r0x003e443f;
    *(ulong *)(param_1 + 0x28) = auStack_58[0];
    auStack_58[0] = 0;
    puStack_70 = &UNK_003e4356;
    _ZNSt3__16threadD2Ev(auStack_58);
    *(undefined1 *)(param_1 + 0x10) = 1;
    puStack_70 = &UNK_003e4362;
    puVar7 = puVar8;
    _ZNSt3__115recursive_mutex6unlockEv();
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
      return CONCAT71((int7)((ulong)*(long *)(in_FS_OFFSET + 0x28) >> 8),1);
    }
  }
  else {
    puVar7 = (ulong *)(ulong)uVar2;
    puStack_70 = &UNK_003e443f;
    _ZNSt3__120__throw_system_errorEiPKc(puVar7,&UNK_0015f7ec);
code_r0x003e443f:
    puStack_70 = &UNK_003e4444;
    _ZSt9terminatev();
  }
  puStack_70 = &UNK_003e4449;
  func_0x0099bd00();
  uStack_88 = *(ulong *)(in_FS_OFFSET + 0x28);
  lStack_80 = param_1;
  puStack_78 = puVar8;
  puStack_70 = &stack0xfffffffffffffff8;
  uVar3 = _Znwm(8);
  _ZNSt3__115__thread_structC2Ev(uVar3);
  puVar4 = (undefined8 *)_Znwm(0x10);
  *puVar4 = uVar3;
  puVar4[1] = puVar7;
  puVar8 = &uStack_90;
  puVar6 = (undefined *)0x0;
  uVar2 = func_0x0099be80(puVar8,0,&UNK_003eeec0,puVar4);
  if (uVar2 == 0) {
    if (puVar7[4] == 0) {
      puVar7[4] = uStack_90;
      uStack_90 = 0;
      puVar8 = &uStack_90;
      _ZNSt3__16threadD2Ev();
      if (*(ulong *)(in_FS_OFFSET + 0x28) == uStack_88) {
        return *(ulong *)(in_FS_OFFSET + 0x28);
      }
      goto code_r0x003e44f5;
    }
  }
  else {
    puVar6 = &UNK_0015f7ec;
    puVar8 = (ulong *)(ulong)uVar2;
    _ZNSt3__120__throw_system_errorEiPKc(puVar8,&UNK_0015f7ec);
  }
  _ZSt9terminatev();
code_r0x003e44f5:
  func_0x0099bd00();
  _ZNSt3__15mutex4lockEv(puVar8 + 0xc);
  if (puVar8[4] != 0) {
    _ZNSt3__16thread4joinEv(puVar8 + 4);
  }
  uVar2 = (**(code **)(*(long *)puVar8[3] + 0x20))((long *)puVar8[3],puVar6,extraout_RDX);
  _ZN25BlockingConnectionAdapter15StartReadThreadEv(puVar8);
  _ZNSt3__115recursive_mutex6unlockEv(puVar8 + 0xc);
  return (ulong)uVar2;
}


