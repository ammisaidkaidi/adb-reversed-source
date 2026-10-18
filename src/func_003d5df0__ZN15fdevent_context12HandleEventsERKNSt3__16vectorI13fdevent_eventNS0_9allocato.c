// Function: _ZN15fdevent_context12HandleEventsERKNSt3__16vectorI13fdevent_eventNS0_9allocatorIS2_EEEE
// Address: 003d5df0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN15fdevent_context12HandleEventsERKNSt3__16vectorI13fdevent_eventNS0_9allocatorIS2_EEEE
               (long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long in_FS_OFFSET;
  long alStack_68 [4];
  long *plStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  puVar3 = (ulong *)*param_2;
  plVar7 = param_2 + 1;
  if (puVar3 != (ulong *)*plVar7) {
    param_2 = (long *)(param_1 + 0xa0);
    do {
      if (*(long **)(param_1 + 0xa0) != (long *)0x0) {
        uVar4 = *puVar3;
        plVar8 = *(long **)(param_1 + 0xa0);
        do {
          while (uVar4 < (ulong)plVar8[4]) {
            plVar8 = (long *)*plVar8;
            if (plVar8 == (long *)0x0) goto code_r0x003d5e25;
          }
          if (uVar4 <= (ulong)plVar8[4]) {
            if (plVar8 != param_2) {
              param_2 = (long *)(ulong)(uint)puVar3[1];
              if (*(int *)(uVar4 + 0x30) == 0) {
                (**(code **)(uVar4 + 0x28))
                          (*(undefined4 *)(uVar4 + 8),param_2,*(undefined8 *)(uVar4 + 0x38));
              }
              else {
                (**(code **)(uVar4 + 0x28))(uVar4,param_2,*(undefined8 *)(uVar4 + 0x38));
              }
              goto _ZN15fdevent_context13FlushRunQueueEv;
            }
            break;
          }
          plVar8 = (long *)plVar8[1];
        } while (plVar8 != (long *)0x0);
      }
code_r0x003d5e25:
      puVar3 = puVar3 + 2;
    } while (puVar3 != (ulong *)*plVar7);
  }
_ZN15fdevent_context13FlushRunQueueEv:
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  lVar6 = param_1 + 0x40;
  do {
    plStack_48 = (long *)0x0;
    uStack_40 = 0;
    alStack_68[2] = 0;
    alStack_68[3] = 0;
    alStack_68[0] = 0;
    alStack_68[1] = 0;
    _ZNSt3__15mutex4lockEv(lVar6);
    plVar7 = plStack_48;
    lVar2 = *(long *)(param_1 + 0x90);
    if (lVar2 == 0) {
      _ZNSt3__115recursive_mutex6unlockEv(lVar6);
    }
    else {
      plVar8 = (long *)((*(ulong *)(param_1 + 0x88) % 0x55) * 0x30 +
                       *(long *)(*(long *)(param_1 + 0x70) + (*(ulong *)(param_1 + 0x88) / 0x55) * 8
                                ));
      plStack_48 = (long *)0x0;
      if (plVar7 == alStack_68) {
        lVar1 = 0x20;
code_r0x003d5f75:
        (**(code **)(*plVar7 + lVar1))();
      }
      else {
        lVar1 = 0x28;
        if (plVar7 != (long *)0x0) goto code_r0x003d5f75;
      }
      plStack_48 = (long *)plVar8[4];
      if (plStack_48 == (long *)0x0) {
        plStack_48 = (long *)0x0;
      }
      else if (plStack_48 == plVar8) {
        plStack_48 = alStack_68;
        (**(code **)(*(long *)plVar8[4] + 0x18))();
      }
      else {
        plVar8[4] = 0;
      }
      uVar4 = *(ulong *)(param_1 + 0x88);
      lVar1 = *(long *)(*(long *)(param_1 + 0x70) + (uVar4 / 0x55) * 8);
      lVar5 = (uVar4 % 0x55) * 0x30;
      param_2 = (long *)(lVar1 + lVar5);
      plVar7 = *(long **)(lVar1 + 0x20 + lVar5);
      if (plVar7 == param_2) {
        lVar1 = 0x20;
code_r0x003d6015:
        (**(code **)(*plVar7 + lVar1))();
        uVar4 = *(ulong *)(param_1 + 0x88);
      }
      else {
        lVar1 = 0x28;
        if (plVar7 != (long *)0x0) goto code_r0x003d6015;
      }
      *(long *)(param_1 + 0x90) = *(long *)(param_1 + 0x90) + -1;
      *(ulong *)(param_1 + 0x88) = uVar4 + 1;
      if (0xa9 < uVar4 + 1) {
        param_2 = (long *)0xff0;
        _ZdaPvSt11align_val_t(**(undefined8 **)(param_1 + 0x70));
        *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x70) + 8;
        *(long *)(param_1 + 0x88) = *(long *)(param_1 + 0x88) + -0x55;
      }
      _ZNSt3__115recursive_mutex6unlockEv(lVar6);
      if (plStack_48 == (long *)0x0) {
        plVar7 = plStack_48;
        func_0x00343f00();
        goto code_r0x003d60b8;
      }
      (**(code **)(*plStack_48 + 0x30))();
    }
    plVar7 = plStack_48;
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
  _ZNSt3__15mutex4lockEv(plVar7 + 8);
  lVar6 = plVar7[0xe];
  lVar2 = plVar7[0xf];
  lVar1 = 0;
  if (lVar2 != lVar6) {
    lVar1 = (lVar2 - lVar6 >> 3) * 0x55 + -1;
  }
  if (lVar1 == plVar7[0x12] + plVar7[0x11]) {
    func_0x00345950(plVar7 + 0xd);
    lVar6 = plVar7[0xe];
    lVar2 = plVar7[0xf];
  }
  if (lVar6 == lVar2) {
    lVar6 = 0;
  }
  else {
    lVar6 = ((ulong)(plVar7[0x12] + plVar7[0x11]) % 0x55) * 0x30 +
            *(long *)(lVar6 + ((ulong)(plVar7[0x12] + plVar7[0x11]) / 0x55) * 8);
  }
  plVar8 = (long *)param_2[4];
  if (plVar8 == (long *)0x0) {
    *(undefined8 *)(lVar6 + 0x20) = 0;
  }
  else if (plVar8 == param_2) {
    *(long *)(lVar6 + 0x20) = lVar6;
    (**(code **)(*(long *)param_2[4] + 0x18))();
  }
  else {
    *(long **)(lVar6 + 0x20) = plVar8;
    param_2[4] = 0;
  }
  plVar7[0x12] = plVar7[0x12] + 1;
  _ZNSt3__115recursive_mutex6unlockEv(plVar7 + 8);
                    /* WARNING: Could not recover jumptable at 0x003d61b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar7 + 0x38))(plVar7);
  return;
}


