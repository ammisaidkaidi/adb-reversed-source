// Function: _ZN15fdevent_context13FlushRunQueueEv
// Address: 003d5e90
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN15fdevent_context13FlushRunQueueEv(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long in_FS_OFFSET;
  long alStack_68 [4];
  long *plStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  lVar5 = param_1 + 0x40;
  do {
    plStack_48 = (long *)0x0;
    uStack_40 = 0;
    alStack_68[2] = 0;
    alStack_68[3] = 0;
    alStack_68[0] = 0;
    alStack_68[1] = 0;
    _ZNSt3__15mutex4lockEv(lVar5);
    plVar6 = plStack_48;
    lVar2 = *(long *)(param_1 + 0x90);
    if (lVar2 == 0) {
      _ZNSt3__115recursive_mutex6unlockEv(lVar5);
    }
    else {
      plVar7 = (long *)((*(ulong *)(param_1 + 0x88) % 0x55) * 0x30 +
                       *(long *)(*(long *)(param_1 + 0x70) + (*(ulong *)(param_1 + 0x88) / 0x55) * 8
                                ));
      plStack_48 = (long *)0x0;
      if (plVar6 == alStack_68) {
        lVar1 = 0x20;
code_r0x003d5f75:
        (**(code **)(*plVar6 + lVar1))();
      }
      else {
        lVar1 = 0x28;
        if (plVar6 != (long *)0x0) goto code_r0x003d5f75;
      }
      plStack_48 = (long *)plVar7[4];
      if (plStack_48 == (long *)0x0) {
        plStack_48 = (long *)0x0;
      }
      else if (plStack_48 == plVar7) {
        plStack_48 = alStack_68;
        (**(code **)(*(long *)plVar7[4] + 0x18))();
      }
      else {
        plVar7[4] = 0;
      }
      uVar3 = *(ulong *)(param_1 + 0x88);
      lVar1 = *(long *)(*(long *)(param_1 + 0x70) + (uVar3 / 0x55) * 8);
      lVar4 = (uVar3 % 0x55) * 0x30;
      param_2 = (long *)(lVar1 + lVar4);
      plVar6 = *(long **)(lVar1 + 0x20 + lVar4);
      if (plVar6 == param_2) {
        lVar1 = 0x20;
code_r0x003d6015:
        (**(code **)(*plVar6 + lVar1))();
        uVar3 = *(ulong *)(param_1 + 0x88);
      }
      else {
        lVar1 = 0x28;
        if (plVar6 != (long *)0x0) goto code_r0x003d6015;
      }
      *(long *)(param_1 + 0x90) = *(long *)(param_1 + 0x90) + -1;
      *(ulong *)(param_1 + 0x88) = uVar3 + 1;
      if (0xa9 < uVar3 + 1) {
        param_2 = (long *)0xff0;
        _ZdaPvSt11align_val_t(**(undefined8 **)(param_1 + 0x70));
        *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x70) + 8;
        *(long *)(param_1 + 0x88) = *(long *)(param_1 + 0x88) + -0x55;
      }
      _ZNSt3__115recursive_mutex6unlockEv(lVar5);
      if (plStack_48 == (long *)0x0) {
        plVar6 = plStack_48;
        func_0x00343f00();
        goto code_r0x003d60b8;
      }
      (**(code **)(*plStack_48 + 0x30))();
    }
    plVar6 = plStack_48;
    if (plStack_48 == alStack_68) {
      lVar1 = 0x20;
code_r0x003d5ed5:
      (**(code **)(*plStack_48 + lVar1))();
    }
    else {
      lVar1 = 0x28;
      if (plStack_48 != (long *)0x0) goto code_r0x003d5ed5;
    }
  } while (lVar2 != 0);
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return;
  }
code_r0x003d60b8:
  func_0x0099bd00();
  _ZNSt3__15mutex4lockEv(plVar6 + 8);
  lVar5 = plVar6[0xe];
  lVar2 = plVar6[0xf];
  lVar1 = 0;
  if (lVar2 != lVar5) {
    lVar1 = (lVar2 - lVar5 >> 3) * 0x55 + -1;
  }
  if (lVar1 == plVar6[0x12] + plVar6[0x11]) {
    func_0x00345950(plVar6 + 0xd);
    lVar5 = plVar6[0xe];
    lVar2 = plVar6[0xf];
  }
  if (lVar5 == lVar2) {
    lVar5 = 0;
  }
  else {
    lVar5 = ((ulong)(plVar6[0x12] + plVar6[0x11]) % 0x55) * 0x30 +
            *(long *)(lVar5 + ((ulong)(plVar6[0x12] + plVar6[0x11]) / 0x55) * 8);
  }
  plVar7 = (long *)param_2[4];
  if (plVar7 == (long *)0x0) {
    *(undefined8 *)(lVar5 + 0x20) = 0;
  }
  else if (plVar7 == param_2) {
    *(long *)(lVar5 + 0x20) = lVar5;
    (**(code **)(*(long *)param_2[4] + 0x18))();
  }
  else {
    *(long **)(lVar5 + 0x20) = plVar7;
    param_2[4] = 0;
  }
  plVar6[0x12] = plVar6[0x12] + 1;
  _ZNSt3__115recursive_mutex6unlockEv(plVar6 + 8);
                    /* WARNING: Could not recover jumptable at 0x003d61b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar6 + 0x38))(plVar6);
  return;
}


