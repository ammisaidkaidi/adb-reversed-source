// Function: _ZN18ConnectionWaitable24SetConnectionEstablishedEb
// Address: 003ea280
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Type propagation algorithm not settling */

void _ZN18ConnectionWaitable24SetConnectionEstablishedEb(undefined8 *param_1,ulong param_2)

{
  byte bVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  code *pcVar5;
  char cVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined4 *unaff_R12;
  undefined8 unaff_R13;
  byte *pbVar13;
  long in_FS_OFFSET;
  undefined1 auStack_a8 [8];
  long lStack_a0;
  undefined8 *puStack_98;
  undefined4 *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  byte *pbStack_78;
  undefined *puStack_70;
  undefined4 uStack_5c;
  byte bStack_58;
  undefined7 uStack_57;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  long lStack_38;
  
  pbVar13 = (byte *)(param_2 & 0xffffffff);
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  puVar12 = param_1 + 1;
  puStack_70 = &UNK_003ea2b0;
  puVar10 = puVar12;
  _ZNSt3__15mutex4lockEv();
  if (*(char *)((long)param_1 + 1) == '\0') {
    *(undefined1 *)((long)param_1 + 1) = 1;
    *(char *)param_1 = (char)pbVar13;
    if ((((byte)adb_trace_mask & 8) != 0) && ((int)adb_trace_severity._12_4_ < 2)) {
      puStack_70 = &UNK_003ea341;
      cVar6 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
      if (cVar6 != '\0') {
        puStack_70 = &UNK_003ea34a;
        unaff_R12 = (undefined4 *)func_0x0099bce0();
        uStack_5c = *unaff_R12;
        puStack_70 = &UNK_003ea378;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (auStack_40,&UNK_0017a1e0,0x449,1,0,0xffffffff);
        puStack_70 = &UNK_003ea380;
        unaff_R13 = _ZN7android4base10LogMessage6streamEv(auStack_40);
        pbVar13 = &bStack_58;
        puStack_70 = &UNK_003ea39c;
        _ZN7android4base12StringPrintfEPKcz(pbVar13,&UNK_0015c8b0,param_2 & 0xff);
        puStack_70 = &UNK_003ea3a7;
        func_0x0032e5a0(unaff_R13,pbVar13);
        if ((bStack_58 & 1) != 0) {
          puStack_70 = &UNK_003ea3be;
          _ZdaPvSt11align_val_t(uStack_48,CONCAT71(uStack_57,bStack_58) & 0xfffffffffffffffe);
        }
        puStack_70 = &UNK_003ea3c7;
        _ZN7android4base10LogMessageD2Ev(auStack_40);
        *unaff_R12 = uStack_5c;
      }
    }
    puStack_70 = &UNK_003ea307;
    _ZNSt3__115recursive_mutex6unlockEv(puVar12);
    param_1 = param_1 + 6;
    puStack_70 = &UNK_003ea313;
    puVar10 = param_1;
    _ZNSt3__118condition_variable10notify_oneEv();
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
      return;
    }
  }
  else if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    pthread_mutex_unlock(puVar12);
    return;
  }
  puStack_70 = &UNK_003ea3d8;
  puStack_90 = (undefined4 *)func_0x0099bd00();
  puStack_98 = (undefined8 *)&UNK_003ea3fb;
  puStack_88 = param_1;
  puStack_80 = puVar12;
  pbStack_78 = pbVar13;
  puStack_70 = &stack0xfffffffffffffff8;
  _ZN18ConnectionWaitable24SetConnectionEstablishedEb(puVar10[0x29],0);
  puStack_98 = (undefined8 *)&UNK_003ea407;
  func_0x003e26d0(puVar10 + 0x3a);
  plVar2 = (long *)puVar10[0x32];
  if (plVar2 == puVar10 + 0x2e) {
    lVar7 = 0x20;
  }
  else {
    lVar7 = 0x28;
    if (plVar2 == (long *)0x0) goto code_r0x003ea431;
  }
  puStack_98 = (undefined8 *)&UNK_003ea431;
  (**(code **)(*plVar2 + lVar7))();
code_r0x003ea431:
  plVar2 = (long *)puVar10[0x2c];
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar3 = plVar2 + 1;
    lVar7 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      puStack_98 = (undefined8 *)&UNK_003ea458;
      (**(code **)(*plVar2 + 0x10))(plVar2);
      puStack_98 = (undefined8 *)&UNK_003ea460;
      _ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  plVar2 = (long *)puVar10[0x2a];
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar3 = plVar2 + 1;
    lVar7 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      puStack_98 = (undefined8 *)&UNK_003ea487;
      (**(code **)(*plVar2 + 0x10))(plVar2);
      puStack_98 = (undefined8 *)&UNK_003ea48f;
      _ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  puStack_98 = (undefined8 *)&UNK_003ea49b;
  func_0x003f08a0(puVar10 + 0x23);
  if (puVar10[0x21] != 0) {
    plVar2 = (long *)puVar10[0x20];
    plVar3 = *(long **)(puVar10[0x1f] + 8);
    *(long **)(*plVar2 + 8) = plVar3;
    *plVar3 = *plVar2;
    puVar10[0x21] = 0;
    while (plVar2 != puVar10 + 0x1f) {
      plVar3 = (long *)plVar2[1];
      puStack_98 = (undefined8 *)&UNK_003ea4ee;
      _ZdaPvSt11align_val_t(plVar2,0x18);
      plVar2 = plVar3;
    }
  }
  lVar7 = puVar10[0x1a];
  if (lVar7 != 0) {
    lVar8 = puVar10[0x1b];
    lVar11 = lVar7;
    if (lVar7 != lVar8) {
      do {
        if ((*(byte *)(lVar8 + -0x18) & 1) != 0) {
          puStack_98 = (undefined8 *)&UNK_003ea541;
          _ZdaPvSt11align_val_t
                    (*(undefined8 *)(lVar8 + -8),*(ulong *)(lVar8 + -0x18) & 0xfffffffffffffffe);
        }
        lVar8 = lVar8 + -0x18;
      } while (lVar8 != lVar7);
      lVar11 = puVar10[0x1a];
    }
    puVar10[0x1b] = lVar7;
    puStack_98 = (undefined8 *)&UNK_003ea560;
    _ZdaPvSt11align_val_t(lVar11,puVar10[0x1c] - lVar11);
  }
  if ((*(byte *)(puVar10 + 0x11) & 1) == 0) {
    bVar1 = *(byte *)(puVar10 + 0xe);
  }
  else {
    puStack_98 = (undefined8 *)&UNK_003ea5bb;
    _ZdaPvSt11align_val_t(puVar10[0x13],puVar10[0x11] & 0xfffffffffffffffe);
    bVar1 = *(byte *)(puVar10 + 0xe);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(puVar10 + 0xb);
  }
  else {
    puStack_98 = (undefined8 *)&UNK_003ea5d5;
    _ZdaPvSt11align_val_t(puVar10[0x10],puVar10[0xe] & 0xfffffffffffffffe);
    bVar1 = *(byte *)(puVar10 + 0xb);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(puVar10 + 8);
  }
  else {
    puStack_98 = (undefined8 *)&UNK_003ea5ec;
    _ZdaPvSt11align_val_t(puVar10[0xd],puVar10[0xb] & 0xfffffffffffffffe);
    bVar1 = *(byte *)(puVar10 + 8);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(puVar10 + 5);
  }
  else {
    puStack_98 = (undefined8 *)&UNK_003ea603;
    _ZdaPvSt11align_val_t(puVar10[10],puVar10[8] & 0xfffffffffffffffe);
    bVar1 = *(byte *)(puVar10 + 5);
  }
  if ((bVar1 & 1) != 0) {
    puStack_98 = (undefined8 *)&UNK_003ea592;
    _ZdaPvSt11align_val_t(puVar10[7],puVar10[5] & 0xfffffffffffffffe);
  }
  puStack_98 = puStack_88;
  lStack_a0 = *(long *)(in_FS_OFFSET + 0x28);
  puVar12 = (undefined8 *)*puVar10;
  puStack_90 = unaff_R12;
  puStack_88 = (undefined8 *)unaff_R13;
  if (puVar12 != (undefined8 *)puVar10[1]) {
    lVar7 = _Z19fdevent_get_ambientv();
    if (*(char *)(lVar7 + 0x10) == '\x01') {
      lVar7 = _Z19fdevent_get_ambientv();
      lVar8 = _ZN7android4base11GetThreadIdEv();
      lVar7 = *(long *)(lVar7 + 8);
      if (lVar7 != lVar8) {
        do {
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (auStack_a8,&UNK_00180212,0x16f,6,0,0xffffffff);
          uVar9 = _ZN7android4base10LogMessage6streamEv(auStack_a8);
          uVar9 = func_0x0032eb30(uVar9,&UNK_00165d45,0xe);
          uVar9 = func_0x0032eb30(uVar9,&UNK_00162e7f,0x29);
          uVar9 = func_0x0032eb30(uVar9,&UNK_0015ae05,1);
          uVar9 = func_0x0032eb30(uVar9,&UNK_0015aef8,2);
          uVar9 = func_0x0032eb30(uVar9,&UNK_0015ae05,1);
          uVar9 = func_0x0032eb30(uVar9,&UNK_00183451,0x1c);
          uVar9 = func_0x0032eb30(uVar9,&UNK_0017ed76,0x2c);
          uVar9 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar9,lVar7);
          uVar9 = func_0x0032eb30(uVar9,&UNK_00165f20,0x1f);
          uVar9 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar9,lVar8);
          func_0x0032eb30(uVar9,&UNK_0017b788,2);
          _ZN7android4base10LogMessageD2Ev(auStack_a8);
        } while( true );
      }
    }
    puVar12 = (undefined8 *)*puVar10;
    puVar4 = (undefined8 *)puVar10[1];
    if (puVar12 != puVar4) {
      do {
        *(undefined8 *)*puVar12 = 0;
        puVar12 = puVar12 + 1;
      } while (puVar12 != puVar4);
      puVar12 = (undefined8 *)*puVar10;
    }
    puVar10[1] = puVar12;
  }
  if (puVar12 == (undefined8 *)0x0) {
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_a0) {
      return;
    }
  }
  else {
    puVar10[1] = puVar12;
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_a0) {
      free(puVar12,puVar10[2] - (long)puVar12);
      return;
    }
  }
  func_0x0099bd00();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


