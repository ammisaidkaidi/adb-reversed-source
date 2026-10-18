// Function: _ZN10atransportD1Ev
// Address: 003ea3e0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Type propagation algorithm not settling */

void _ZN10atransportD1Ev(undefined8 *param_1)

{
  byte bVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  long in_FS_OFFSET;
  undefined1 auStack_40 [8];
  long lStack_38;
  undefined *puStack_30;
  
  puStack_30 = &UNK_003ea3fb;
  _ZN18ConnectionWaitable24SetConnectionEstablishedEb(param_1[0x29],0);
  puStack_30 = &UNK_003ea407;
  func_0x003e26d0(param_1 + 0x3a);
  plVar2 = (long *)param_1[0x32];
  if (plVar2 == param_1 + 0x2e) {
    lVar6 = 0x20;
  }
  else {
    lVar6 = 0x28;
    if (plVar2 == (long *)0x0) goto code_r0x003ea431;
  }
  puStack_30 = &UNK_003ea431;
  (**(code **)(*plVar2 + lVar6))();
code_r0x003ea431:
  plVar2 = (long *)param_1[0x2c];
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar3 = plVar2 + 1;
    lVar6 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      puStack_30 = &UNK_003ea458;
      (**(code **)(*plVar2 + 0x10))(plVar2);
      puStack_30 = &UNK_003ea460;
      _ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  plVar2 = (long *)param_1[0x2a];
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar3 = plVar2 + 1;
    lVar6 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      puStack_30 = &UNK_003ea487;
      (**(code **)(*plVar2 + 0x10))(plVar2);
      puStack_30 = &UNK_003ea48f;
      _ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  puStack_30 = &UNK_003ea49b;
  func_0x003f08a0(param_1 + 0x23);
  if (param_1[0x21] != 0) {
    plVar2 = (long *)param_1[0x20];
    plVar3 = *(long **)(param_1[0x1f] + 8);
    *(long **)(*plVar2 + 8) = plVar3;
    *plVar3 = *plVar2;
    param_1[0x21] = 0;
    while (plVar2 != param_1 + 0x1f) {
      plVar3 = (long *)plVar2[1];
      puStack_30 = &UNK_003ea4ee;
      _ZdaPvSt11align_val_t(plVar2,0x18);
      plVar2 = plVar3;
    }
  }
  lVar6 = param_1[0x1a];
  if (lVar6 != 0) {
    lVar7 = param_1[0x1b];
    lVar9 = lVar6;
    if (lVar6 != lVar7) {
      do {
        if ((*(byte *)(lVar7 + -0x18) & 1) != 0) {
          puStack_30 = &UNK_003ea541;
          _ZdaPvSt11align_val_t
                    (*(undefined8 *)(lVar7 + -8),*(ulong *)(lVar7 + -0x18) & 0xfffffffffffffffe);
        }
        lVar7 = lVar7 + -0x18;
      } while (lVar7 != lVar6);
      lVar9 = param_1[0x1a];
    }
    param_1[0x1b] = lVar6;
    puStack_30 = &UNK_003ea560;
    _ZdaPvSt11align_val_t(lVar9,param_1[0x1c] - lVar9);
  }
  if ((*(byte *)(param_1 + 0x11) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0xe);
  }
  else {
    puStack_30 = &UNK_003ea5bb;
    _ZdaPvSt11align_val_t(param_1[0x13],param_1[0x11] & 0xfffffffffffffffe);
    bVar1 = *(byte *)(param_1 + 0xe);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0xb);
  }
  else {
    puStack_30 = &UNK_003ea5d5;
    _ZdaPvSt11align_val_t(param_1[0x10],param_1[0xe] & 0xfffffffffffffffe);
    bVar1 = *(byte *)(param_1 + 0xb);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 8);
  }
  else {
    puStack_30 = &UNK_003ea5ec;
    _ZdaPvSt11align_val_t(param_1[0xd],param_1[0xb] & 0xfffffffffffffffe);
    bVar1 = *(byte *)(param_1 + 8);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 5);
  }
  else {
    puStack_30 = &UNK_003ea603;
    _ZdaPvSt11align_val_t(param_1[10],param_1[8] & 0xfffffffffffffffe);
    bVar1 = *(byte *)(param_1 + 5);
  }
  if ((bVar1 & 1) != 0) {
    puStack_30 = &UNK_003ea592;
    _ZdaPvSt11align_val_t(param_1[7],param_1[5] & 0xfffffffffffffffe);
  }
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  puVar10 = (undefined8 *)*param_1;
  if (puVar10 != (undefined8 *)param_1[1]) {
    lVar6 = _Z19fdevent_get_ambientv();
    if (*(char *)(lVar6 + 0x10) == '\x01') {
      lVar6 = _Z19fdevent_get_ambientv();
      lVar7 = _ZN7android4base11GetThreadIdEv();
      lVar6 = *(long *)(lVar6 + 8);
      if (lVar6 != lVar7) {
        do {
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (auStack_40,&UNK_00180212,0x16f,6,0,0xffffffff);
          uVar8 = _ZN7android4base10LogMessage6streamEv(auStack_40);
          uVar8 = func_0x0032eb30(uVar8,&UNK_00165d45,0xe);
          uVar8 = func_0x0032eb30(uVar8,&UNK_00162e7f,0x29);
          uVar8 = func_0x0032eb30(uVar8,&UNK_0015ae05,1);
          uVar8 = func_0x0032eb30(uVar8,&UNK_0015aef8,2);
          uVar8 = func_0x0032eb30(uVar8,&UNK_0015ae05,1);
          uVar8 = func_0x0032eb30(uVar8,&UNK_00183451,0x1c);
          uVar8 = func_0x0032eb30(uVar8,&UNK_0017ed76,0x2c);
          uVar8 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar8,lVar6);
          uVar8 = func_0x0032eb30(uVar8,&UNK_00165f20,0x1f);
          uVar8 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar8,lVar7);
          func_0x0032eb30(uVar8,&UNK_0017b788,2);
          _ZN7android4base10LogMessageD2Ev(auStack_40);
        } while( true );
      }
    }
    puVar10 = (undefined8 *)*param_1;
    puVar4 = (undefined8 *)param_1[1];
    if (puVar10 != puVar4) {
      do {
        *(undefined8 *)*puVar10 = 0;
        puVar10 = puVar10 + 1;
      } while (puVar10 != puVar4);
      puVar10 = (undefined8 *)*param_1;
    }
    param_1[1] = puVar10;
  }
  if (puVar10 == (undefined8 *)0x0) {
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
      return;
    }
  }
  else {
    param_1[1] = puVar10;
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
      free(puVar10,param_1[2] - (long)puVar10);
      return;
    }
  }
  func_0x0099bd00();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


