// Function: _ZN10atransport5WriteEP7apacket
// Address: 003e5950
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _ZN10atransport5WriteEP7apacket(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  byte bVar3;
  undefined4 uVar4;
  long *plVar5;
  long lVar6;
  char cVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  char cVar12;
  long *plVar13;
  long *plVar14;
  long in_FS_OFFSET;
  undefined1 auStack_70 [8];
  ulong uStack_68;
  long *plStack_60;
  long lStack_58;
  ulong uStack_50;
  long *plStack_48;
  undefined *puStack_40;
  long *plStack_38;
  long lStack_30;
  
  lStack_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = param_1 + 0x1a0;
  puStack_40 = &UNK_003e5981;
  _ZNSt3__15mutex4lockEv(lVar2);
  plVar13 = *(long **)(param_1 + 0x158);
  plVar5 = *(long **)(param_1 + 0x160);
  if (plVar5 != (long *)0x0) {
    LOCK();
    plVar5[1] = plVar5[1] + 1;
    UNLOCK();
  }
  puStack_40 = &UNK_003e59a1;
  _ZNSt3__115recursive_mutex6unlockEv(lVar2);
  cVar12 = (char)&plStack_38;
  puStack_40 = &UNK_003e59b2;
  plStack_38 = param_2;
  uVar8 = (**(code **)(*plVar13 + 0x10))();
  plVar14 = plStack_38;
  plStack_38 = (long *)0x0;
  if (plVar14 != (long *)0x0) {
    lVar6 = plVar14[3];
    plVar14[3] = 0;
    if (lVar6 != 0) {
      puStack_40 = &UNK_003e59dc;
      _ZdaPvSt11align_val_t();
    }
    cVar12 = '8';
    puStack_40 = &UNK_003e59e9;
    plVar13 = plVar14;
    _ZdaPvSt11align_val_t();
  }
  if (plVar5 != (long *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      puStack_40 = &UNK_003e5a09;
      (**(code **)(*plVar5 + 0x10))(plVar5);
      puStack_40 = &UNK_003e5a11;
      plVar13 = plVar5;
      _ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_30) {
    return (ulong)((uVar8 & 0xff) - 1);
  }
  puStack_40 = &UNK_003e5a38;
  func_0x0099bd00();
  plStack_48 = plVar14;
  uStack_68 = *(ulong *)(in_FS_OFFSET + 0x28);
  LOCK();
  bVar3 = *(byte *)(plVar13 + 0x19);
  *(byte *)(plVar13 + 0x19) = 1;
  UNLOCK();
  plVar14 = plVar13;
  plStack_60 = plVar5;
  lStack_58 = lVar2;
  uStack_50 = (ulong)uVar8;
  puStack_40 = &stack0xfffffffffffffff8;
  if ((bVar3 & 1) == 0) {
    cVar12 = '\0';
    puStack_40 = &stack0xfffffffffffffff8;
    cVar7 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(2);
    if (cVar7 != '\0') {
      puVar9 = (undefined4 *)func_0x0099bce0();
      uVar4 = *puVar9;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_70,&UNK_0017a1e0,0x463,2,0,0xffffffff);
      uVar10 = _ZN7android4base10LogMessage6streamEv(auStack_70);
      uVar10 = func_0x0032eb30(uVar10,&UNK_0015b179,0x12);
      uVar10 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEPKv(uVar10,plVar13);
      uVar10 = func_0x0032eb30(uVar10,&UNK_0015ae05,1);
      cVar12 = (char)plVar13 + '(';
      func_0x0032e5a0(uVar10);
      _ZN7android4base10LogMessageD2Ev(auStack_70);
      *puVar9 = uVar4;
    }
    plVar5 = plVar13 + 0x34;
    _ZNSt3__15mutex4lockEv(plVar5);
    plVar14 = (long *)plVar13[0x2b];
    plVar13 = (long *)plVar13[0x2c];
    if (plVar13 == (long *)0x0) {
      _ZNSt3__115recursive_mutex6unlockEv(plVar5);
      (**(code **)(*plVar14 + 0x20))();
    }
    else {
      LOCK();
      plVar13[1] = plVar13[1] + 1;
      UNLOCK();
      _ZNSt3__115recursive_mutex6unlockEv(plVar5);
      (**(code **)(*plVar14 + 0x20))();
      LOCK();
      plVar5 = plVar13 + 1;
      lVar2 = *plVar5;
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
        _ZNSt3__119__shared_weak_count14__release_weakEv();
        plVar14 = plVar13;
      }
    }
  }
  if (*(ulong *)(in_FS_OFFSET + 0x28) == uStack_68) {
    return *(ulong *)(in_FS_OFFSET + 0x28);
  }
  func_0x0099bd00();
  uVar10 = uRam0000000000a006c8;
  _ZNSt3__115recursive_mutex4lockEv(uRam0000000000a006c8);
  lVar2 = *(long *)(lRam0000000000a006d8 + 8);
  do {
    if (lVar2 == lRam0000000000a006d8) {
code_r0x003e5bdf:
      _ZNSt3__118condition_variable10notify_oneEv(lRam0000000000a006e0 + 0x38);
      uVar11 = pthread_mutex_unlock(uVar10);
      return uVar11;
    }
    if (*(long **)(lVar2 + 0x10) == plVar14) {
      if (lVar2 != lRam0000000000a006d8) {
        if (cVar12 == '\0') {
          _ZN10atransport4KickEv(plVar14);
        }
        else {
          _ZN10atransport5ResetEv();
        }
      }
      goto code_r0x003e5bdf;
    }
    lVar2 = *(long *)(lVar2 + 8);
  } while( true );
}


