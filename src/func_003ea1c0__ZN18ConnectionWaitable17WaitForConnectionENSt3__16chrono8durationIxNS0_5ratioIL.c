// Function: _ZN18ConnectionWaitable17WaitForConnectionENSt3__16chrono8durationIxNS0_5ratioILl1ELl1000EEEEE
// Address: 003ea1c0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Type propagation algorithm not settling */

ulong _ZN18ConnectionWaitable17WaitForConnectionENSt3__16chrono8durationIxNS0_5ratioILl1ELl1000EEEEE
                (byte *param_1,byte **param_2)

{
  byte *pbVar1;
  long *plVar2;
  byte bVar3;
  long *plVar4;
  undefined8 *puVar5;
  code *pcVar6;
  char cVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  byte **ppbVar14;
  byte *pbVar15;
  byte *pbVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined8 unaff_R13;
  byte bVar19;
  undefined7 uVar20;
  byte *pbVar21;
  long in_FS_OFFSET;
  undefined1 auStack_f0 [8];
  ulong uStack_e8;
  byte *pbStack_e0;
  long *plStack_d8;
  byte *pbStack_d0;
  byte *pbStack_c8;
  byte *pbStack_c0;
  undefined *puStack_b8;
  undefined4 uStack_a4;
  byte bStack_a0;
  undefined7 uStack_9f;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  ulong uStack_80;
  ulong uStack_78;
  long *plStack_70;
  undefined *puStack_50;
  long lStack_48;
  byte *pbStack_40;
  undefined8 uStack_38;
  long lStack_30;
  
  lStack_30 = *(long *)(in_FS_OFFSET + 0x28);
  pbVar15 = param_1 + 8;
  uStack_38 = 1;
  puStack_50 = &UNK_003ea1fb;
  ppbVar14 = param_2;
  pbStack_40 = pbVar15;
  _ZNSt3__15mutex4lockEv();
  pbVar1 = param_1 + 0x30;
  puStack_50 = &UNK_003ea204;
  lStack_48 = _ZNSt3__16chrono12steady_clock3nowEv();
  lStack_48 = (long)param_2 * 1000000 + lStack_48;
  plVar9 = &lStack_48;
  do {
    if (param_1[1] != 0) {
      uVar20 = (undefined7)((ulong)pbVar1 >> 8);
      bVar19 = 1;
      goto code_r0x003ea243;
    }
    puStack_50 = &UNK_003ea234;
    ppbVar14 = &pbStack_40;
    pbVar15 = pbVar1;
    iVar8 = func_0x003d06b0(pbVar1,&pbStack_40,plVar9);
  } while (iVar8 != 1);
  bVar19 = param_1[1];
  uVar20 = 0;
code_r0x003ea243:
  bVar3 = *param_1;
  if ((char)uStack_38 == '\x01') {
    puStack_50 = &UNK_003ea255;
    pbVar15 = pbStack_40;
    _ZNSt3__115recursive_mutex6unlockEv();
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_30) {
    return CONCAT71(uVar20,bVar19 & bVar3) & 0xffffffff;
  }
  puStack_50 = &UNK_003ea27c;
  func_0x0099bd00();
  pbVar21 = (byte *)((ulong)ppbVar14 & 0xffffffff);
  uStack_80 = *(ulong *)(in_FS_OFFSET + 0x28);
  pbVar1 = pbVar15 + 8;
  puStack_b8 = &UNK_003ea2b0;
  pbVar16 = pbVar1;
  uStack_78 = (ulong)bVar3;
  plStack_70 = plVar9;
  puStack_50 = &stack0xfffffffffffffff8;
  _ZNSt3__15mutex4lockEv();
  if (pbVar15[1] == 0) {
    pbVar15[1] = 1;
    *pbVar15 = (byte)pbVar21;
    if ((((byte)adb_trace_mask & 8) != 0) && ((int)adb_trace_severity._12_4_ < 2)) {
      puStack_b8 = &UNK_003ea341;
      cVar7 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
      if (cVar7 != '\0') {
        puStack_b8 = &UNK_003ea34a;
        plVar9 = (long *)func_0x0099bce0();
        uStack_a4 = (undefined4)*plVar9;
        puStack_b8 = &UNK_003ea378;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (auStack_88,&UNK_0017a1e0,0x449,1,0,0xffffffff);
        puStack_b8 = &UNK_003ea380;
        unaff_R13 = _ZN7android4base10LogMessage6streamEv(auStack_88);
        pbVar21 = &bStack_a0;
        puStack_b8 = &UNK_003ea39c;
        _ZN7android4base12StringPrintfEPKcz(pbVar21,&UNK_0015c8b0,(ulong)ppbVar14 & 0xff);
        puStack_b8 = &UNK_003ea3a7;
        func_0x0032e5a0(unaff_R13,pbVar21);
        if ((bStack_a0 & 1) != 0) {
          puStack_b8 = &UNK_003ea3be;
          _ZdaPvSt11align_val_t(uStack_90,CONCAT71(uStack_9f,bStack_a0) & 0xfffffffffffffffe);
        }
        puStack_b8 = &UNK_003ea3c7;
        _ZN7android4base10LogMessageD2Ev(auStack_88);
        *(undefined4 *)plVar9 = uStack_a4;
      }
    }
    puStack_b8 = &UNK_003ea307;
    _ZNSt3__115recursive_mutex6unlockEv(pbVar1);
    pbVar15 = pbVar15 + 0x30;
    puStack_b8 = &UNK_003ea313;
    pbVar16 = pbVar15;
    _ZNSt3__118condition_variable10notify_oneEv();
    if (*(ulong *)(in_FS_OFFSET + 0x28) == uStack_80) {
      return *(ulong *)(in_FS_OFFSET + 0x28);
    }
  }
  else if (*(ulong *)(in_FS_OFFSET + 0x28) == uStack_80) {
    uVar13 = pthread_mutex_unlock(pbVar1);
    return uVar13;
  }
  puStack_b8 = &UNK_003ea3d8;
  plStack_d8 = (long *)func_0x0099bd00();
  pbStack_e0 = &UNK_003ea3fb;
  pbStack_d0 = pbVar15;
  pbStack_c8 = pbVar1;
  pbStack_c0 = pbVar21;
  puStack_b8 = (undefined *)&puStack_50;
  _ZN18ConnectionWaitable24SetConnectionEstablishedEb(*(undefined8 *)(pbVar16 + 0x148),0);
  pbStack_e0 = &UNK_003ea407;
  func_0x003e26d0(pbVar16 + 0x1d0);
  pbVar1 = *(byte **)(pbVar16 + 400);
  if (pbVar1 == pbVar16 + 0x170) {
    lVar10 = 0x20;
  }
  else {
    lVar10 = 0x28;
    if (pbVar1 == (byte *)0x0) goto code_r0x003ea431;
  }
  pbStack_e0 = &UNK_003ea431;
  (**(code **)(*(long *)pbVar1 + lVar10))();
code_r0x003ea431:
  plVar4 = *(long **)(pbVar16 + 0x160);
  if (plVar4 != (long *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar10 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar10 == 0) {
      pbStack_e0 = &UNK_003ea458;
      (**(code **)(*plVar4 + 0x10))(plVar4);
      pbStack_e0 = &UNK_003ea460;
      _ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar4 = *(long **)(pbVar16 + 0x150);
  if (plVar4 != (long *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar10 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar10 == 0) {
      pbStack_e0 = &UNK_003ea487;
      (**(code **)(*plVar4 + 0x10))(plVar4);
      pbStack_e0 = &UNK_003ea48f;
      _ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  pbStack_e0 = &UNK_003ea49b;
  func_0x003f08a0(pbVar16 + 0x118);
  if (*(long *)(pbVar16 + 0x108) != 0) {
    pbVar1 = *(byte **)(pbVar16 + 0x100);
    puVar18 = *(undefined8 **)(*(long *)(pbVar16 + 0xf8) + 8);
    *(undefined8 **)(*(long *)pbVar1 + 8) = puVar18;
    *puVar18 = *(undefined8 *)pbVar1;
    pbVar16[0x108] = 0;
    pbVar16[0x109] = 0;
    pbVar16[0x10a] = 0;
    pbVar16[0x10b] = 0;
    pbVar16[0x10c] = 0;
    pbVar16[0x10d] = 0;
    pbVar16[0x10e] = 0;
    pbVar16[0x10f] = 0;
    while (pbVar1 != pbVar16 + 0xf8) {
      pbVar15 = *(byte **)(pbVar1 + 8);
      pbStack_e0 = &UNK_003ea4ee;
      _ZdaPvSt11align_val_t(pbVar1,0x18);
      pbVar1 = pbVar15;
    }
  }
  lVar10 = *(long *)(pbVar16 + 0xd0);
  if (lVar10 != 0) {
    lVar11 = *(long *)(pbVar16 + 0xd8);
    lVar17 = lVar10;
    if (lVar10 != lVar11) {
      do {
        if ((*(byte *)(lVar11 + -0x18) & 1) != 0) {
          pbStack_e0 = &UNK_003ea541;
          _ZdaPvSt11align_val_t
                    (*(undefined8 *)(lVar11 + -8),*(ulong *)(lVar11 + -0x18) & 0xfffffffffffffffe);
        }
        lVar11 = lVar11 + -0x18;
      } while (lVar11 != lVar10);
      lVar17 = *(long *)(pbVar16 + 0xd0);
    }
    *(long *)(pbVar16 + 0xd8) = lVar10;
    pbStack_e0 = &UNK_003ea560;
    _ZdaPvSt11align_val_t(lVar17,*(long *)(pbVar16 + 0xe0) - lVar17);
  }
  if ((pbVar16[0x88] & 1) == 0) {
    bVar19 = pbVar16[0x70];
  }
  else {
    pbStack_e0 = &UNK_003ea5bb;
    _ZdaPvSt11align_val_t
              (*(undefined8 *)(pbVar16 + 0x98),*(ulong *)(pbVar16 + 0x88) & 0xfffffffffffffffe);
    bVar19 = pbVar16[0x70];
  }
  if ((bVar19 & 1) == 0) {
    bVar19 = pbVar16[0x58];
  }
  else {
    pbStack_e0 = &UNK_003ea5d5;
    _ZdaPvSt11align_val_t
              (*(undefined8 *)(pbVar16 + 0x80),*(ulong *)(pbVar16 + 0x70) & 0xfffffffffffffffe);
    bVar19 = pbVar16[0x58];
  }
  if ((bVar19 & 1) == 0) {
    bVar19 = pbVar16[0x40];
  }
  else {
    pbStack_e0 = &UNK_003ea5ec;
    _ZdaPvSt11align_val_t
              (*(undefined8 *)(pbVar16 + 0x68),*(ulong *)(pbVar16 + 0x58) & 0xfffffffffffffffe);
    bVar19 = pbVar16[0x40];
  }
  if ((bVar19 & 1) == 0) {
    bVar19 = pbVar16[0x28];
  }
  else {
    pbStack_e0 = &UNK_003ea603;
    _ZdaPvSt11align_val_t
              (*(undefined8 *)(pbVar16 + 0x50),*(ulong *)(pbVar16 + 0x40) & 0xfffffffffffffffe);
    bVar19 = pbVar16[0x28];
  }
  if ((bVar19 & 1) != 0) {
    pbStack_e0 = &UNK_003ea592;
    _ZdaPvSt11align_val_t
              (*(undefined8 *)(pbVar16 + 0x38),*(ulong *)(pbVar16 + 0x28) & 0xfffffffffffffffe);
  }
  pbStack_e0 = pbStack_d0;
  uStack_e8 = *(ulong *)(in_FS_OFFSET + 0x28);
  puVar18 = *(undefined8 **)pbVar16;
  plStack_d8 = plVar9;
  pbStack_d0 = (byte *)unaff_R13;
  if (puVar18 != *(undefined8 **)(pbVar16 + 8)) {
    lVar10 = _Z19fdevent_get_ambientv();
    if (*(char *)(lVar10 + 0x10) == '\x01') {
      lVar10 = _Z19fdevent_get_ambientv();
      lVar11 = _ZN7android4base11GetThreadIdEv();
      lVar10 = *(long *)(lVar10 + 8);
      if (lVar10 != lVar11) {
        do {
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (auStack_f0,&UNK_00180212,0x16f,6,0,0xffffffff);
          uVar12 = _ZN7android4base10LogMessage6streamEv(auStack_f0);
          uVar12 = func_0x0032eb30(uVar12,&UNK_00165d45,0xe);
          uVar12 = func_0x0032eb30(uVar12,&UNK_00162e7f,0x29);
          uVar12 = func_0x0032eb30(uVar12,&UNK_0015ae05,1);
          uVar12 = func_0x0032eb30(uVar12,&UNK_0015aef8,2);
          uVar12 = func_0x0032eb30(uVar12,&UNK_0015ae05,1);
          uVar12 = func_0x0032eb30(uVar12,&UNK_00183451,0x1c);
          uVar12 = func_0x0032eb30(uVar12,&UNK_0017ed76,0x2c);
          uVar12 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar12,lVar10);
          uVar12 = func_0x0032eb30(uVar12,&UNK_00165f20,0x1f);
          uVar12 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar12,lVar11);
          func_0x0032eb30(uVar12,&UNK_0017b788,2);
          _ZN7android4base10LogMessageD2Ev(auStack_f0);
        } while( true );
      }
    }
    puVar18 = *(undefined8 **)pbVar16;
    puVar5 = *(undefined8 **)(pbVar16 + 8);
    if (puVar18 != puVar5) {
      do {
        *(undefined8 *)*puVar18 = 0;
        puVar18 = puVar18 + 1;
      } while (puVar18 != puVar5);
      puVar18 = *(undefined8 **)pbVar16;
    }
    *(undefined8 **)(pbVar16 + 8) = puVar18;
  }
  if (puVar18 == (undefined8 *)0x0) {
    if (*(ulong *)(in_FS_OFFSET + 0x28) == uStack_e8) {
      return *(ulong *)(in_FS_OFFSET + 0x28);
    }
  }
  else {
    *(undefined8 **)(pbVar16 + 8) = puVar18;
    if (*(ulong *)(in_FS_OFFSET + 0x28) == uStack_e8) {
      uVar13 = free(puVar18,*(long *)(pbVar16 + 0x10) - (long)puVar18);
      return uVar13;
    }
  }
  func_0x0099bd00();
  pcVar6 = (code *)swi(3);
  uVar13 = (*pcVar6)();
  return uVar13;
}


