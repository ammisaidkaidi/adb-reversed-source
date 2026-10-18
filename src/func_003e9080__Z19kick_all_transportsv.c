// Function: _Z19kick_all_transportsv
// Address: 003e9080
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _Z19kick_all_transportsv(void)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long in_FS_OFFSET;
  bool bVar9;
  undefined *puStack_68;
  long lStack_60;
  undefined **ppuStack_48;
  long lStack_38;
  
  lVar8 = lRam0000000000a006e0;
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = _Z19fdevent_get_ambientv();
  if (*(char *)(lVar3 + 0x10) == '\x01') {
    lVar3 = _Z19fdevent_get_ambientv();
    lVar4 = _ZN7android4base11GetThreadIdEv();
    lVar3 = *(long *)(lVar3 + 8);
    if (lVar3 != lVar4) {
      do {
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (&puStack_68,&UNK_0017a1e0,0xa5,6,0,0xffffffff);
        uVar5 = _ZN7android4base10LogMessage6streamEv(&puStack_68);
        uVar5 = func_0x0032eb30(uVar5,&UNK_00165d45,0xe);
        uVar5 = func_0x0032eb30(uVar5,&UNK_00162e7f,0x29);
        uVar5 = func_0x0032eb30(uVar5,&UNK_0015ae05,1);
        uVar5 = func_0x0032eb30(uVar5,&UNK_0015aef8,2);
        uVar5 = func_0x0032eb30(uVar5,&UNK_0015ae05,1);
        uVar5 = func_0x0032eb30(uVar5,&UNK_00183451,0x1c);
        uVar5 = func_0x0032eb30(uVar5,&UNK_0017ed76,0x2c);
        uVar5 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar5,lVar3);
        uVar5 = func_0x0032eb30(uVar5,&UNK_00165f20,0x1f);
        uVar5 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar5,lVar4);
        func_0x0032eb30(uVar5,&UNK_0017b788,2);
        _ZN7android4base10LogMessageD2Ev(&puStack_68);
      } while( true );
    }
  }
  _ZNSt3__15mutex4lockEv(lVar8);
  *(undefined1 *)(lVar8 + 0x28) = 0;
  _ZNSt3__115recursive_mutex6unlockEv(lVar8);
  _ZNSt3__118condition_variable10notify_oneEv(lVar8 + 0x38);
  _ZNSt3__16thread4joinEv(lVar8 + 0x30);
  _ZNSt3__15mutex4lockEv(lVar8);
  lVar3 = *(long *)(lVar8 + 0x78);
  if (lVar3 != 0) {
    do {
      plVar1 = *(long **)(lVar8 + 0x68);
      plVar2 = (long *)plVar1[1];
      plVar7 = plVar1;
      if ((long *)plVar1[1] == (long *)0x0) {
        do {
          plVar6 = (long *)plVar7[2];
          bVar9 = plVar7 != (long *)*plVar6;
          plVar7 = plVar6;
        } while (bVar9);
      }
      else {
        do {
          plVar6 = plVar2;
          plVar2 = (long *)*plVar6;
        } while ((long *)*plVar6 != (long *)0x0);
      }
      lVar4 = plVar1[4];
      *(long **)(lVar8 + 0x68) = plVar6;
      *(long *)(lVar8 + 0x78) = lVar3 + -1;
      func_0x003d6d50(*(undefined8 *)(lVar8 + 0x70),plVar1);
      _ZdaPvSt11align_val_t(plVar1,0x38);
      puStack_68 = &UNK_0099eda8;
      lStack_60 = lVar4;
      ppuStack_48 = &puStack_68;
      _Z21fdevent_run_on_looperNSt3__18functionIFvvEEE(&puStack_68);
      if (ppuStack_48 == &puStack_68) {
        lVar3 = 0x20;
code_r0x003e9125:
        (**(code **)(*ppuStack_48 + lVar3))();
      }
      else {
        lVar3 = 0x28;
        if (ppuStack_48 != (undefined **)0x0) goto code_r0x003e9125;
      }
      lVar3 = *(long *)(lVar8 + 0x78);
    } while (lVar3 != 0);
  }
  _ZNSt3__115recursive_mutex6unlockEv(lVar8);
  uVar5 = uRam0000000000a006c8;
  _ZNSt3__115recursive_mutex4lockEv(uRam0000000000a006c8);
  lVar3 = lRam0000000000a006d8;
  for (lVar8 = *(long *)(lRam0000000000a006d8 + 8); lVar8 != lVar3; lVar8 = *(long *)(lVar8 + 8)) {
    _ZN10atransport4KickEv(*(undefined8 *)(lVar8 + 0x10));
  }
  _ZNSt3__115recursive_mutex6unlockEv(uVar5);
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return;
  }
  func_0x0099bd00();
  uVar5 = uRam0000000000a006c8;
  _ZNSt3__115recursive_mutex4lockEv(uRam0000000000a006c8);
  lVar3 = lRam0000000000a006d8;
  for (lVar8 = *(long *)(lRam0000000000a006d8 + 8); lVar8 != lVar3; lVar8 = *(long *)(lVar8 + 8)) {
    if ((*(int *)(*(long *)(lVar8 + 0x10) + 0x24) == 1) &&
       (*(char *)(*(long *)(lVar8 + 0x10) + 0xa0) == '\x01')) {
      _ZN10atransport4KickEv();
    }
  }
  pthread_mutex_unlock(uVar5);
  return;
}


