// Function: _Z22init_reconnect_handlerv
// Address: 003e8e70
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _Z22init_reconnect_handlerv(void)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long in_FS_OFFSET;
  bool bVar11;
  undefined *puStack_b0;
  long lStack_a8;
  undefined **ppuStack_90;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_40;
  long lStack_38;
  
  lVar10 = lRam0000000000a006e0;
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  lVar4 = _Z19fdevent_get_ambientv();
  if (*(char *)(lVar4 + 0x10) == '\x01') {
    lVar4 = _Z19fdevent_get_ambientv();
    lVar5 = _ZN7android4base11GetThreadIdEv();
    lVar4 = *(long *)(lVar4 + 8);
    if (lVar4 != lVar5) {
      do {
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (&uStack_40,&UNK_0017a1e0,0xa0,6,0,0xffffffff);
        uVar6 = _ZN7android4base10LogMessage6streamEv(&uStack_40);
        uVar6 = func_0x0032eb30(uVar6,&UNK_00165d45,0xe);
        uVar6 = func_0x0032eb30(uVar6,&UNK_00162e7f,0x29);
        uVar6 = func_0x0032eb30(uVar6,&UNK_0015ae05,1);
        uVar6 = func_0x0032eb30(uVar6,&UNK_0015aef8,2);
        uVar6 = func_0x0032eb30(uVar6,&UNK_0015ae05,1);
        uVar6 = func_0x0032eb30(uVar6,&UNK_00183451,0x1c);
        uVar6 = func_0x0032eb30(uVar6,&UNK_0017ed76,0x2c);
        uVar6 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar6,lVar4);
        uVar6 = func_0x0032eb30(uVar6,&UNK_00165f20,0x1f);
        uVar6 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar6,lVar5);
        func_0x0032eb30(uVar6,&UNK_0017b788,2);
        _ZN7android4base10LogMessageD2Ev(&uStack_40);
      } while( true );
    }
  }
  uVar6 = _Znwm(8);
  _ZNSt3__115__thread_structC2Ev(uVar6);
  puVar7 = (undefined8 *)_Znwm(0x20);
  *puVar7 = uVar6;
  puVar7[1] = &UNK_003ede60;
  puVar7[2] = 0;
  puVar7[3] = lVar10;
  iVar3 = func_0x0099be80(&uStack_40,0,&UNK_003eea70,puVar7);
  if (iVar3 == 0) {
    if (*(long *)(lVar10 + 0x30) == 0) {
      *(undefined8 *)(lVar10 + 0x30) = uStack_40;
      uStack_40 = 0;
      _ZNSt3__16threadD2Ev(&uStack_40);
      if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
        return;
      }
      goto code_r0x003e9078;
    }
  }
  else {
    _ZNSt3__120__throw_system_errorEiPKc(iVar3,&UNK_0015f7ec);
  }
  _ZSt9terminatev();
code_r0x003e9078:
  func_0x0099bd00();
  lVar10 = lRam0000000000a006e0;
  lStack_80 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_78 = uVar6;
  lVar4 = _Z19fdevent_get_ambientv();
  if (*(char *)(lVar4 + 0x10) == '\x01') {
    lVar4 = _Z19fdevent_get_ambientv();
    lVar5 = _ZN7android4base11GetThreadIdEv();
    lVar4 = *(long *)(lVar4 + 8);
    if (lVar4 != lVar5) {
      do {
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (&puStack_b0,&UNK_0017a1e0,0xa5,6,0,0xffffffff);
        uVar6 = _ZN7android4base10LogMessage6streamEv(&puStack_b0);
        uVar6 = func_0x0032eb30(uVar6,&UNK_00165d45,0xe);
        uVar6 = func_0x0032eb30(uVar6,&UNK_00162e7f,0x29);
        uVar6 = func_0x0032eb30(uVar6,&UNK_0015ae05,1);
        uVar6 = func_0x0032eb30(uVar6,&UNK_0015aef8,2);
        uVar6 = func_0x0032eb30(uVar6,&UNK_0015ae05,1);
        uVar6 = func_0x0032eb30(uVar6,&UNK_00183451,0x1c);
        uVar6 = func_0x0032eb30(uVar6,&UNK_0017ed76,0x2c);
        uVar6 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar6,lVar4);
        uVar6 = func_0x0032eb30(uVar6,&UNK_00165f20,0x1f);
        uVar6 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar6,lVar5);
        func_0x0032eb30(uVar6,&UNK_0017b788,2);
        _ZN7android4base10LogMessageD2Ev(&puStack_b0);
      } while( true );
    }
  }
  _ZNSt3__15mutex4lockEv(lVar10);
  *(undefined1 *)(lVar10 + 0x28) = 0;
  _ZNSt3__115recursive_mutex6unlockEv(lVar10);
  _ZNSt3__118condition_variable10notify_oneEv(lVar10 + 0x38);
  _ZNSt3__16thread4joinEv(lVar10 + 0x30);
  _ZNSt3__15mutex4lockEv(lVar10);
  lVar4 = *(long *)(lVar10 + 0x78);
  if (lVar4 != 0) {
    do {
      plVar1 = *(long **)(lVar10 + 0x68);
      plVar2 = (long *)plVar1[1];
      plVar9 = plVar1;
      if ((long *)plVar1[1] == (long *)0x0) {
        do {
          plVar8 = (long *)plVar9[2];
          bVar11 = plVar9 != (long *)*plVar8;
          plVar9 = plVar8;
        } while (bVar11);
      }
      else {
        do {
          plVar8 = plVar2;
          plVar2 = (long *)*plVar8;
        } while ((long *)*plVar8 != (long *)0x0);
      }
      lVar5 = plVar1[4];
      *(long **)(lVar10 + 0x68) = plVar8;
      *(long *)(lVar10 + 0x78) = lVar4 + -1;
      func_0x003d6d50(*(undefined8 *)(lVar10 + 0x70),plVar1);
      _ZdaPvSt11align_val_t(plVar1,0x38);
      puStack_b0 = &UNK_0099eda8;
      lStack_a8 = lVar5;
      ppuStack_90 = &puStack_b0;
      _Z21fdevent_run_on_looperNSt3__18functionIFvvEEE(&puStack_b0);
      if (ppuStack_90 == &puStack_b0) {
        lVar4 = 0x20;
code_r0x003e9125:
        (**(code **)(*ppuStack_90 + lVar4))();
      }
      else {
        lVar4 = 0x28;
        if (ppuStack_90 != (undefined **)0x0) goto code_r0x003e9125;
      }
      lVar4 = *(long *)(lVar10 + 0x78);
    } while (lVar4 != 0);
  }
  _ZNSt3__115recursive_mutex6unlockEv(lVar10);
  uVar6 = uRam0000000000a006c8;
  _ZNSt3__115recursive_mutex4lockEv(uRam0000000000a006c8);
  lVar4 = lRam0000000000a006d8;
  for (lVar10 = *(long *)(lRam0000000000a006d8 + 8); lVar10 != lVar4; lVar10 = *(long *)(lVar10 + 8)
      ) {
    _ZN10atransport4KickEv(*(undefined8 *)(lVar10 + 0x10));
  }
  _ZNSt3__115recursive_mutex6unlockEv(uVar6);
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_80) {
    return;
  }
  func_0x0099bd00();
  uVar6 = uRam0000000000a006c8;
  _ZNSt3__115recursive_mutex4lockEv(uRam0000000000a006c8);
  lVar4 = lRam0000000000a006d8;
  for (lVar10 = *(long *)(lRam0000000000a006d8 + 8); lVar10 != lVar4; lVar10 = *(long *)(lVar10 + 8)
      ) {
    if ((*(int *)(*(long *)(lVar10 + 0x10) + 0x24) == 1) &&
       (*(char *)(*(long *)(lVar10 + 0x10) + 0xa0) == '\x01')) {
      _ZN10atransport4KickEv();
    }
  }
  pthread_mutex_unlock(uVar6);
  return;
}


