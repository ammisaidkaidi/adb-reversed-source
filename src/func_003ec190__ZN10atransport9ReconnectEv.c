// Function: _ZN10atransport9ReconnectEv
// Address: 003ec190
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _ZN10atransport9ReconnectEv
                (long param_1,long *param_2,undefined8 param_3,long param_4,long *param_5,
                undefined8 param_6)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  byte **ppbVar8;
  uint **ppuVar9;
  char cVar10;
  int iVar11;
  ulong uVar12;
  long lVar13;
  uint *puVar14;
  long lVar15;
  byte **ppbVar16;
  long *plVar17;
  ulong uVar18;
  byte *pbVar19;
  undefined8 uVar20;
  uint uVar21;
  undefined *puVar22;
  ulong extraout_RDX;
  undefined4 *puVar23;
  undefined **ppuVar24;
  undefined1 uVar25;
  uint **unaff_R12;
  uint **ppuVar26;
  long in_FS_OFFSET;
  bool bVar27;
  uint *puStack_188;
  uint uStack_180;
  int iStack_17c;
  long lStack_178;
  long alStack_170 [4];
  long *plStack_150;
  byte *pbStack_140;
  ulong uStack_138;
  undefined8 uStack_130;
  byte **ppbStack_120;
  long lStack_110;
  undefined **ppuStack_108;
  uint **ppuStack_100;
  uint **ppuStack_f8;
  uint *puStack_f0;
  uint **ppuStack_e8;
  undefined *puStack_e0;
  uint *puStack_d0;
  undefined *apuStack_c8 [4];
  undefined **ppuStack_a8;
  ulong uStack_90;
  ulong uStack_88;
  uint **ppuStack_80;
  uint *puStack_78;
  uint **ppuStack_70;
  undefined *puStack_68;
  byte **ppbStack_60;
  uint *puStack_58;
  ulong uStack_50;
  undefined *puStack_20;
  long lStack_18;
  long lStack_10;
  
  lStack_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar14 = *(uint **)(param_1 + 400);
  lStack_18 = param_1;
  if (puVar14 == (uint *)0x0) {
    puStack_20 = &UNK_003ec1d9;
    func_0x00343f00();
  }
  else {
    param_2 = &lStack_18;
    puStack_20 = &UNK_003ec1bf;
    uVar12 = (**(code **)(*(long *)puVar14 + 0x30))();
    param_4 = *(long *)(in_FS_OFFSET + 0x28);
    if (param_4 == lStack_10) {
      return uVar12;
    }
  }
  puStack_20 = &UNK_003ec1de;
  func_0x0099bd00();
  uVar12 = (ulong)param_2 & 0xffffffff;
  uStack_50 = *(ulong *)(in_FS_OFFSET + 0x28);
  ppbStack_60 = ppbRam0000000000a006c8;
  puStack_68 = &UNK_003ec213;
  puStack_20 = &stack0xfffffffffffffff8;
  _ZNSt3__115recursive_mutex4lockEv();
  ppuVar9 = ppuRam0000000000a006d8;
  uVar25 = (undefined1)param_6;
  uVar21 = (uint)param_4;
  ppuVar26 = (uint **)ppuRam0000000000a006d8[1];
  if (ppuVar26 != ppuRam0000000000a006d8) {
    unaff_R12 = &puStack_58;
    do {
      uVar25 = (undefined1)param_6;
      uVar21 = (uint)param_4;
      puStack_58 = ppuVar26[2];
      ppbVar16 = *(byte ***)(puVar14 + 8);
      if (ppbVar16 == (byte **)0x0) {
        puStack_68 = &UNK_003ec297;
        func_0x00343f00();
        goto code_r0x003ec297;
      }
      puStack_68 = &UNK_003ec258;
      cVar10 = (**(code **)(*ppbVar16 + 0x30))(ppbVar16,unaff_R12);
      if (cVar10 != '\0') {
        if ((char)uVar12 == '\0') {
          puStack_68 = &UNK_003ec235;
          _ZN10atransport4KickEv(ppuVar26[2]);
        }
        else {
          puStack_68 = &UNK_003ec269;
          _ZN10atransport5ResetEv();
        }
      }
      uVar25 = (undefined1)param_6;
      uVar21 = (uint)param_4;
      ppuVar26 = (uint **)ppuVar26[1];
    } while (ppuVar26 != ppuVar9);
  }
  puStack_68 = &UNK_003ec274;
  ppbVar16 = ppbStack_60;
  _ZNSt3__115recursive_mutex6unlockEv();
  if (*(ulong *)(in_FS_OFFSET + 0x28) == uStack_50) {
    return *(ulong *)(in_FS_OFFSET + 0x28);
  }
code_r0x003ec297:
  puStack_68 = &UNK_003ec29c;
  func_0x0099bd00();
  uStack_90 = *(ulong *)(in_FS_OFFSET + 0x28);
  puVar23 = (undefined4 *)((ulong)ppbVar16 & 0xff);
  uStack_88 = uVar12;
  ppuStack_80 = unaff_R12;
  puStack_78 = puVar14;
  ppuStack_70 = ppuVar26;
  puStack_68 = (undefined *)&puStack_20;
  if ((((byte)adb_trace_mask & 0x20) != 0) &&
     (puStack_68 = (undefined *)&puStack_20, (int)adb_trace_severity._20_4_ < 2)) {
    puStack_e0 = &UNK_003ec342;
    puStack_68 = (undefined *)&puStack_20;
    cVar10 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
    if (cVar10 != '\0') {
      puStack_e0 = &UNK_003ec34d;
      puVar14 = (uint *)func_0x0099bce0();
      uVar3 = *puVar14;
      unaff_R12 = (uint **)(ulong)uVar3;
      ppuVar26 = &puStack_d0;
      uVar21 = 1;
      param_5 = (long *)0x0;
      uVar25 = 0xff;
      puStack_e0 = &UNK_003ec379;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i(ppuVar26,&UNK_0017a1e0,0x606);
      puStack_e0 = &UNK_003ec381;
      uVar20 = _ZN7android4base10LogMessage6streamEv(ppuVar26);
      puStack_e0 = &UNK_003ec395;
      uVar20 = func_0x0032eb30(uVar20,&UNK_00187daa,0x1a);
      puStack_e0 = &UNK_003ec39f;
      _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEb(uVar20,puVar23);
      puStack_e0 = &UNK_003ec3a7;
      _ZN7android4base10LogMessageD2Ev(ppuVar26);
      *puVar14 = uVar3;
    }
  }
  apuStack_c8[0] = &UNK_0099ef10;
  puStack_e0 = &UNK_003ec2f4;
  ppuStack_a8 = apuStack_c8;
  _Z13close_devicesNSt3__18functionIFbPK10atransportEEEb(apuStack_c8);
  ppuVar24 = ppuStack_a8;
  if (ppuStack_a8 == apuStack_c8) {
    lVar13 = 0x20;
code_r0x003ec30e:
    puVar22 = *ppuStack_a8;
    puStack_e0 = &UNK_003ec314;
    (**(code **)(puVar22 + lVar13))();
    uVar21 = (uint)puVar22;
  }
  else {
    lVar13 = 0x28;
    if (ppuStack_a8 != (undefined **)0x0) goto code_r0x003ec30e;
  }
  if (*(ulong *)(in_FS_OFFSET + 0x28) == uStack_90) {
    return *(ulong *)(in_FS_OFFSET + 0x28);
  }
  puStack_e0 = &UNK_003ec3b6;
  func_0x0099bd00();
  ppuStack_f8 = ppuVar9;
  puStack_188 = (uint *)(ulong)uVar21;
  lStack_110 = *(long *)(in_FS_OFFSET + 0x28);
  ppuStack_108 = apuStack_c8;
  ppuStack_100 = unaff_R12;
  puStack_f0 = puVar14;
  ppuStack_e8 = ppuVar26;
  puStack_e0 = (undefined *)&puStack_68;
  lVar13 = _Z19fdevent_get_ambientv();
  if (*(char *)(lVar13 + 0x10) == '\x01') {
    lVar13 = _Z19fdevent_get_ambientv();
    lVar15 = _ZN7android4base11GetThreadIdEv();
    if (*(long *)(lVar13 + 8) == lVar15) {
      do {
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (&pbStack_140,&UNK_0017a1e0,0x624,6,0,0xffffffff);
        uVar20 = _ZN7android4base10LogMessage6streamEv(&pbStack_140);
        uVar20 = func_0x0032eb30(uVar20,&UNK_00165d45,0xe);
        uVar20 = func_0x0032eb30(uVar20,&UNK_00162e7f,0x29);
        uVar20 = func_0x0032eb30(uVar20,&UNK_0015ae05,1);
        uVar20 = func_0x0032eb30(uVar20,&UNK_0016e934,2);
        uVar20 = func_0x0032eb30(uVar20,&UNK_0015ae05,1);
        uVar20 = func_0x0032eb30(uVar20,&UNK_00183451,0x1c);
        uVar20 = func_0x0032eb30(uVar20,&UNK_0017ed76,0x2c);
        uVar20 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar20,lVar15);
        uVar20 = func_0x0032eb30(uVar20,&UNK_00165f20,0x1f);
        uVar20 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar20,lVar15);
        func_0x0032eb30(uVar20,&UNK_0017b788,2);
        _ZN7android4base10LogMessageD2Ev(&pbStack_140);
      } while( true );
    }
  }
  uVar18 = extraout_RDX & 0xffffffff;
  uVar12 = _Znwm(0x200);
  plVar17 = (long *)param_5[4];
  if (plVar17 == (long *)0x0) {
    plStack_150 = (long *)0x0;
  }
  else if (plVar17 == param_5) {
    plStack_150 = alStack_170;
    (**(code **)(*plVar17 + 0x18))();
  }
  else {
    param_5[4] = 0;
    plStack_150 = plVar17;
  }
  _ZN10atransportC2E13TransportTypeNSt3__18functionIF15ReconnectResultPS_EEE15ConnectionState
            (uVar12,1,alStack_170,5);
  if (plStack_150 == alStack_170) {
    lVar13 = 0x20;
  }
  else {
    lVar13 = 0x28;
    if (plStack_150 == (long *)0x0) goto code_r0x003ec4a9;
  }
  (**(code **)(*plStack_150 + lVar13))();
code_r0x003ec4a9:
  *(undefined1 *)(uVar12 + 0xa0) = uVar25;
  if ((*(byte *)(uVar12 + 0x28) & 1) != 0) {
    _ZdaPvSt11align_val_t
              (*(undefined8 *)(uVar12 + 0x38),*(ulong *)(uVar12 + 0x28) & 0xfffffffffffffffe);
  }
  *(undefined8 *)(uVar12 + 0x38) = *(undefined8 *)(puVar23 + 4);
  uVar5 = puVar23[1];
  uVar6 = puVar23[2];
  uVar7 = puVar23[3];
  *(undefined4 *)(uVar12 + 0x28) = *puVar23;
  *(undefined4 *)(uVar12 + 0x2c) = uVar5;
  *(undefined4 *)(uVar12 + 0x30) = uVar6;
  *(undefined4 *)(uVar12 + 0x34) = uVar7;
  *(undefined2 *)puVar23 = 0;
  if (((((byte)adb_trace_mask & 8) != 0) && ((int)adb_trace_severity._12_4_ < 2)) &&
     (cVar10 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0), cVar10 != '\0')) {
    uStack_180 = (uint)extraout_RDX;
    ppbVar16 = (byte **)func_0x0099bce0();
    uVar21 = *(uint *)ppbVar16;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (&lStack_178,&UNK_0017a1e0,0x62b,1,0,0xffffffff);
    pbVar19 = (byte *)_ZN7android4base10LogMessage6streamEv(&lStack_178);
    if ((*(byte *)(uVar12 + 0x28) & 1) == 0) goto code_r0x003ec906;
    lVar13 = *(long *)(uVar12 + 0x38);
    goto code_r0x003ec90d;
  }
  do {
    iVar11 = *(int *)ppuVar24;
    *(undefined4 *)ppuVar24 = 0xffffffff;
    ppbVar16 = (byte **)func_0x0099bce0();
    iStack_17c = iVar11;
    iVar11 = _Z21init_socket_transportP10atransportN7android4base14unique_fd_implINS2_13DefaultCloserEEEib
                       (uVar12,&iStack_17c,uVar18,(ulong)puStack_188 & 0xff);
    uVar21 = *(uint *)ppbVar16;
    pbVar19 = (byte *)(ulong)uVar21;
    if (iStack_17c != -1) {
      func_0x0099bd10();
    }
    puVar14 = puStack_d0;
    iStack_17c = -1;
    *(uint *)ppbVar16 = uVar21;
    ppbVar8 = ppbRam0000000000a006c8;
    if (iVar11 < 0) {
      _ZN10atransportD1Ev(uVar12);
      _ZdaPvSt11align_val_t(uVar12,0x200);
      if (puVar14 != (uint *)0x0) {
        *puVar14 = *(uint *)ppbVar16;
      }
code_r0x003ec659:
      uVar18 = 0;
    }
    else {
      _ZNSt3__115recursive_mutex4lockEv(ppbRam0000000000a006c8);
      pbVar19 = (byte *)(uVar12 + 0x28);
      cVar10 = func_0x003ec970(lRam0000000000a006d0,pbVar19,uVar12,puVar14);
      if ((cVar10 == '\0') ||
         (cVar10 = func_0x003ec970(ppuRam0000000000a006d8,pbVar19,uVar12,puVar14),
         lVar13 = lRam0000000000a006d0, cVar10 == '\0')) {
        _ZNSt3__115recursive_mutex6unlockEv(ppbVar8);
        ppbVar16 = ppbVar8;
        goto code_r0x003ec659;
      }
      plVar17 = (long *)_Znwm(0x18);
      plVar17[2] = uVar12;
      *plVar17 = lVar13;
      puVar4 = *(undefined8 **)(lVar13 + 8);
      plVar17[1] = (long)puVar4;
      *puVar4 = plVar17;
      *(long **)(lVar13 + 8) = plVar17;
      *(long *)(lVar13 + 0x10) = *(long *)(lVar13 + 0x10) + 1;
      _ZNSt3__115recursive_mutex6unlockEv(ppbVar8);
      pbVar19 = *(byte **)(uVar12 + 0x148);
      puVar14 = *(uint **)(uVar12 + 0x150);
      if (puVar14 != (uint *)0x0) {
        LOCK();
        *(long *)(puVar14 + 2) = *(long *)(puVar14 + 2) + 1;
        UNLOCK();
      }
      pbStack_140 = &UNK_0099ee38;
      ppbVar16 = &pbStack_140;
      uStack_138 = uVar12;
      ppbStack_120 = ppbVar16;
      _Z21fdevent_run_on_looperNSt3__18functionIFvvEEE(ppbVar16);
      if (ppbStack_120 == ppbVar16) {
        lVar13 = 0x20;
code_r0x003ec685:
        lVar13 = (**(code **)(*ppbStack_120 + lVar13))();
      }
      else {
        lVar13 = 0x28;
        if (ppbStack_120 != (byte **)0x0) goto code_r0x003ec685;
      }
      uVar18 = CONCAT71((int7)((ulong)lVar13 >> 8),1);
      bVar27 = (char)puStack_188 == '\0';
      if (bVar27) {
        uStack_138 = 1;
        pbStack_140 = pbVar19 + 8;
        _ZNSt3__15mutex4lockEv();
        lVar13 = _ZNSt3__16chrono12steady_clock3nowEv();
        lStack_178 = lVar13 + 10000000000;
        do {
          if (pbVar19[1] != 0) {
            ppbVar16 = (byte **)CONCAT71((int7)((ulong)(pbVar19 + 0x30) >> 8),1);
            goto code_r0x003ec704;
          }
          lVar13 = func_0x003d06b0(pbVar19 + 0x30,&pbStack_140,&lStack_178);
        } while ((int)lVar13 != 1);
        ppbVar16 = (byte **)(ulong)pbVar19[1];
code_r0x003ec704:
        puVar1 = puStack_d0;
        bVar2 = *pbVar19;
        pbVar19 = (byte *)(ulong)bVar2;
        if ((char)uStack_138 == '\x01') {
          lVar13 = _ZNSt3__115recursive_mutex6unlockEv(pbStack_140);
        }
        puStack_188 = puVar14;
        if (((byte)ppbVar16 & bVar2) == 0) {
          uVar21 = 0x6e;
        }
        else {
          uVar18 = CONCAT71((int7)((ulong)lVar13 >> 8),1);
          if (*(int *)(uVar12 + 0x110) != 2) goto code_r0x003ec74b;
          uVar21 = 1;
        }
        if (puVar1 != (uint *)0x0) {
          *puVar1 = uVar21;
        }
        uVar18 = 0;
      }
code_r0x003ec74b:
      if (puVar14 != (uint *)0x0) {
        LOCK();
        puVar1 = puVar14 + 2;
        lVar13 = *(long *)puVar1;
        *(long *)puVar1 = *(long *)puVar1 + -1;
        UNLOCK();
        if (lVar13 == 0) {
          uVar18 = uVar18 & 0xffffffff;
          (**(code **)(*(long *)puVar14 + 0x10))(puVar14);
          _ZNSt3__119__shared_weak_count14__release_weakEv(puVar14);
          uVar12 = uVar18;
        }
      }
    }
    uVar21 = (uint)puVar14;
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_110) {
      return uVar18;
    }
    func_0x0099bd00();
code_r0x003ec906:
    lVar13 = uVar12 + 0x29;
code_r0x003ec90d:
    _ZN7android4base12StringPrintfEPKcz
              (&pbStack_140,&UNK_0016ec41,lVar13,*(undefined4 *)ppuVar24,uStack_180);
    func_0x0032e5a0(pbVar19,&pbStack_140);
    if (((ulong)pbStack_140 & 1) != 0) {
      _ZdaPvSt11align_val_t(uStack_130,(ulong)pbStack_140 & 0xfffffffffffffffe);
    }
    _ZN7android4base10LogMessageD2Ev(&lStack_178);
    *(uint *)ppbVar16 = uVar21;
    uVar18 = (ulong)uStack_180;
  } while( true );
}


