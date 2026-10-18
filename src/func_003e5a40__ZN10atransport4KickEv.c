// Function: _ZN10atransport4KickEv
// Address: 003e5a40
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN10atransport4KickEv(long *param_1,char param_2)

{
  long *plVar1;
  byte bVar2;
  long lVar3;
  undefined4 uVar4;
  char cVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  long in_FS_OFFSET;
  undefined1 auStack_38 [8];
  long lStack_30;
  
  lStack_30 = *(long *)(in_FS_OFFSET + 0x28);
  LOCK();
  bVar2 = *(byte *)(param_1 + 0x19);
  *(byte *)(param_1 + 0x19) = 1;
  UNLOCK();
  plVar9 = param_1;
  if ((bVar2 & 1) == 0) {
    param_2 = '\0';
    cVar5 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(2);
    if (cVar5 != '\0') {
      puVar6 = (undefined4 *)func_0x0099bce0();
      uVar4 = *puVar6;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_38,&UNK_0017a1e0,0x463,2,0,0xffffffff);
      uVar7 = _ZN7android4base10LogMessage6streamEv(auStack_38);
      uVar7 = func_0x0032eb30(uVar7,&UNK_0015b179,0x12);
      uVar7 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEPKv(uVar7,param_1);
      uVar7 = func_0x0032eb30(uVar7,&UNK_0015ae05,1);
      param_2 = (char)param_1 + '(';
      func_0x0032e5a0(uVar7);
      _ZN7android4base10LogMessageD2Ev(auStack_38);
      *puVar6 = uVar4;
    }
    plVar1 = param_1 + 0x34;
    _ZNSt3__15mutex4lockEv(plVar1);
    plVar9 = (long *)param_1[0x2b];
    plVar8 = (long *)param_1[0x2c];
    if (plVar8 == (long *)0x0) {
      _ZNSt3__115recursive_mutex6unlockEv(plVar1);
      (**(code **)(*plVar9 + 0x20))();
    }
    else {
      LOCK();
      plVar8[1] = plVar8[1] + 1;
      UNLOCK();
      _ZNSt3__115recursive_mutex6unlockEv(plVar1);
      (**(code **)(*plVar9 + 0x20))();
      LOCK();
      plVar1 = plVar8 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        _ZNSt3__119__shared_weak_count14__release_weakEv();
        plVar9 = plVar8;
      }
    }
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_30) {
    return;
  }
  func_0x0099bd00();
  uVar7 = uRam0000000000a006c8;
  _ZNSt3__115recursive_mutex4lockEv(uRam0000000000a006c8);
  lVar3 = *(long *)(lRam0000000000a006d8 + 8);
  do {
    if (lVar3 == lRam0000000000a006d8) {
code_r0x003e5bdf:
      _ZNSt3__118condition_variable10notify_oneEv(lRam0000000000a006e0 + 0x38);
      pthread_mutex_unlock(uVar7);
      return;
    }
    if (*(long **)(lVar3 + 0x10) == plVar9) {
      if (lVar3 != lRam0000000000a006d8) {
        if (param_2 == '\0') {
          _ZN10atransport4KickEv(plVar9);
        }
        else {
          _ZN10atransport5ResetEv();
        }
      }
      goto code_r0x003e5bdf;
    }
    lVar3 = *(long *)(lVar3 + 8);
  } while( true );
}


