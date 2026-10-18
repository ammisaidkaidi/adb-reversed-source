// Function: _Z13close_devicesNSt3__18functionIFbPK10atransportEEEb
// Address: 003ec1e0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _Z13close_devicesNSt3__18functionIFbPK10atransportEEEb
                (uint *param_1,ulong param_2,undefined8 param_3,undefined8 param_4,long *param_5,
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
  long lVar12;
  long lVar13;
  ulong uVar14;
  byte **ppbVar15;
  long *plVar16;
  ulong uVar17;
  byte *pbVar18;
  undefined8 uVar19;
  uint uVar20;
  undefined *puVar21;
  ulong extraout_RDX;
  undefined4 *puVar22;
  undefined **ppuVar23;
  undefined1 uVar24;
  uint **unaff_R12;
  uint *puVar25;
  uint **ppuVar26;
  long in_FS_OFFSET;
  bool bVar27;
  uint *puStack_170;
  uint uStack_168;
  int iStack_164;
  long lStack_160;
  long alStack_158 [4];
  long *plStack_138;
  byte *pbStack_128;
  ulong uStack_120;
  undefined8 uStack_118;
  byte **ppbStack_108;
  long lStack_f8;
  undefined **ppuStack_f0;
  uint **ppuStack_e8;
  uint **ppuStack_e0;
  uint *puStack_d8;
  uint **ppuStack_d0;
  undefined *puStack_c8;
  uint *puStack_b8;
  undefined *apuStack_b0 [4];
  undefined **ppuStack_90;
  ulong uStack_78;
  ulong uStack_70;
  uint **ppuStack_68;
  uint *puStack_60;
  uint **ppuStack_58;
  undefined *puStack_50;
  byte **ppbStack_48;
  uint *puStack_40;
  ulong uStack_38;
  
  param_2 = param_2 & 0xffffffff;
  uStack_38 = *(ulong *)(in_FS_OFFSET + 0x28);
  ppbStack_48 = ppbRam0000000000a006c8;
  puStack_50 = &UNK_003ec213;
  _ZNSt3__115recursive_mutex4lockEv();
  ppuVar9 = ppuRam0000000000a006d8;
  uVar24 = (undefined1)param_6;
  uVar20 = (uint)param_4;
  ppuVar26 = (uint **)ppuRam0000000000a006d8[1];
  if (ppuVar26 != ppuRam0000000000a006d8) {
    unaff_R12 = &puStack_40;
    do {
      uVar24 = (undefined1)param_6;
      uVar20 = (uint)param_4;
      puStack_40 = ppuVar26[2];
      ppbVar15 = *(byte ***)(param_1 + 8);
      if (ppbVar15 == (byte **)0x0) {
        puStack_50 = &UNK_003ec297;
        func_0x00343f00();
        goto code_r0x003ec297;
      }
      puStack_50 = &UNK_003ec258;
      cVar10 = (**(code **)(*ppbVar15 + 0x30))(ppbVar15,unaff_R12);
      if (cVar10 != '\0') {
        if ((char)param_2 == '\0') {
          puStack_50 = &UNK_003ec235;
          _ZN10atransport4KickEv(ppuVar26[2]);
        }
        else {
          puStack_50 = &UNK_003ec269;
          _ZN10atransport5ResetEv();
        }
      }
      uVar24 = (undefined1)param_6;
      uVar20 = (uint)param_4;
      ppuVar26 = (uint **)ppuVar26[1];
    } while (ppuVar26 != ppuVar9);
  }
  puStack_50 = &UNK_003ec274;
  ppbVar15 = ppbStack_48;
  _ZNSt3__115recursive_mutex6unlockEv();
  if (*(ulong *)(in_FS_OFFSET + 0x28) == uStack_38) {
    return *(ulong *)(in_FS_OFFSET + 0x28);
  }
code_r0x003ec297:
  puStack_50 = &UNK_003ec29c;
  func_0x0099bd00();
  uStack_78 = *(ulong *)(in_FS_OFFSET + 0x28);
  puVar22 = (undefined4 *)((ulong)ppbVar15 & 0xff);
  uStack_70 = param_2;
  ppuStack_68 = unaff_R12;
  puStack_60 = param_1;
  ppuStack_58 = ppuVar26;
  puStack_50 = &stack0xfffffffffffffff8;
  if ((((byte)adb_trace_mask & 0x20) != 0) &&
     (puStack_50 = &stack0xfffffffffffffff8, (int)adb_trace_severity._20_4_ < 2)) {
    puStack_c8 = &UNK_003ec342;
    puStack_50 = &stack0xfffffffffffffff8;
    cVar10 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
    if (cVar10 != '\0') {
      puStack_c8 = &UNK_003ec34d;
      param_1 = (uint *)func_0x0099bce0();
      uVar3 = *param_1;
      unaff_R12 = (uint **)(ulong)uVar3;
      ppuVar26 = &puStack_b8;
      uVar20 = 1;
      param_5 = (long *)0x0;
      uVar24 = 0xff;
      puStack_c8 = &UNK_003ec379;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i(ppuVar26,&UNK_0017a1e0,0x606);
      puStack_c8 = &UNK_003ec381;
      uVar19 = _ZN7android4base10LogMessage6streamEv(ppuVar26);
      puStack_c8 = &UNK_003ec395;
      uVar19 = func_0x0032eb30(uVar19,&UNK_00187daa,0x1a);
      puStack_c8 = &UNK_003ec39f;
      _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEb(uVar19,puVar22);
      puStack_c8 = &UNK_003ec3a7;
      _ZN7android4base10LogMessageD2Ev(ppuVar26);
      *param_1 = uVar3;
    }
  }
  apuStack_b0[0] = &UNK_0099ef10;
  puStack_c8 = &UNK_003ec2f4;
  ppuStack_90 = apuStack_b0;
  _Z13close_devicesNSt3__18functionIFbPK10atransportEEEb(apuStack_b0);
  ppuVar23 = ppuStack_90;
  if (ppuStack_90 == apuStack_b0) {
    lVar12 = 0x20;
code_r0x003ec30e:
    puVar21 = *ppuStack_90;
    puStack_c8 = &UNK_003ec314;
    (**(code **)(puVar21 + lVar12))();
    uVar20 = (uint)puVar21;
  }
  else {
    lVar12 = 0x28;
    if (ppuStack_90 != (undefined **)0x0) goto code_r0x003ec30e;
  }
  if (*(ulong *)(in_FS_OFFSET + 0x28) == uStack_78) {
    return *(ulong *)(in_FS_OFFSET + 0x28);
  }
  puStack_c8 = &UNK_003ec3b6;
  func_0x0099bd00();
  ppuStack_e0 = ppuVar9;
  puStack_170 = (uint *)(ulong)uVar20;
  lStack_f8 = *(long *)(in_FS_OFFSET + 0x28);
  ppuStack_f0 = apuStack_b0;
  ppuStack_e8 = unaff_R12;
  puStack_d8 = param_1;
  ppuStack_d0 = ppuVar26;
  puStack_c8 = (undefined *)&puStack_50;
  lVar12 = _Z19fdevent_get_ambientv();
  if (*(char *)(lVar12 + 0x10) == '\x01') {
    lVar12 = _Z19fdevent_get_ambientv();
    lVar13 = _ZN7android4base11GetThreadIdEv();
    if (*(long *)(lVar12 + 8) == lVar13) {
      do {
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (&pbStack_128,&UNK_0017a1e0,0x624,6,0,0xffffffff);
        uVar19 = _ZN7android4base10LogMessage6streamEv(&pbStack_128);
        uVar19 = func_0x0032eb30(uVar19,&UNK_00165d45,0xe);
        uVar19 = func_0x0032eb30(uVar19,&UNK_00162e7f,0x29);
        uVar19 = func_0x0032eb30(uVar19,&UNK_0015ae05,1);
        uVar19 = func_0x0032eb30(uVar19,&UNK_0016e934,2);
        uVar19 = func_0x0032eb30(uVar19,&UNK_0015ae05,1);
        uVar19 = func_0x0032eb30(uVar19,&UNK_00183451,0x1c);
        uVar19 = func_0x0032eb30(uVar19,&UNK_0017ed76,0x2c);
        uVar19 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar19,lVar13);
        uVar19 = func_0x0032eb30(uVar19,&UNK_00165f20,0x1f);
        uVar19 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar19,lVar13);
        func_0x0032eb30(uVar19,&UNK_0017b788,2);
        _ZN7android4base10LogMessageD2Ev(&pbStack_128);
      } while( true );
    }
  }
  uVar17 = extraout_RDX & 0xffffffff;
  uVar14 = _Znwm(0x200);
  plVar16 = (long *)param_5[4];
  if (plVar16 == (long *)0x0) {
    plStack_138 = (long *)0x0;
  }
  else if (plVar16 == param_5) {
    plStack_138 = alStack_158;
    (**(code **)(*plVar16 + 0x18))();
  }
  else {
    param_5[4] = 0;
    plStack_138 = plVar16;
  }
  _ZN10atransportC2E13TransportTypeNSt3__18functionIF15ReconnectResultPS_EEE15ConnectionState
            (uVar14,1,alStack_158,5);
  if (plStack_138 == alStack_158) {
    lVar12 = 0x20;
  }
  else {
    lVar12 = 0x28;
    if (plStack_138 == (long *)0x0) goto code_r0x003ec4a9;
  }
  (**(code **)(*plStack_138 + lVar12))();
code_r0x003ec4a9:
  *(undefined1 *)(uVar14 + 0xa0) = uVar24;
  if ((*(byte *)(uVar14 + 0x28) & 1) != 0) {
    _ZdaPvSt11align_val_t
              (*(undefined8 *)(uVar14 + 0x38),*(ulong *)(uVar14 + 0x28) & 0xfffffffffffffffe);
  }
  *(undefined8 *)(uVar14 + 0x38) = *(undefined8 *)(puVar22 + 4);
  uVar5 = puVar22[1];
  uVar6 = puVar22[2];
  uVar7 = puVar22[3];
  *(undefined4 *)(uVar14 + 0x28) = *puVar22;
  *(undefined4 *)(uVar14 + 0x2c) = uVar5;
  *(undefined4 *)(uVar14 + 0x30) = uVar6;
  *(undefined4 *)(uVar14 + 0x34) = uVar7;
  *(undefined2 *)puVar22 = 0;
  if (((((byte)adb_trace_mask & 8) != 0) && ((int)adb_trace_severity._12_4_ < 2)) &&
     (cVar10 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0), cVar10 != '\0')) {
    uStack_168 = (uint)extraout_RDX;
    ppbVar15 = (byte **)func_0x0099bce0();
    uVar20 = *(uint *)ppbVar15;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (&lStack_160,&UNK_0017a1e0,0x62b,1,0,0xffffffff);
    pbVar18 = (byte *)_ZN7android4base10LogMessage6streamEv(&lStack_160);
    if ((*(byte *)(uVar14 + 0x28) & 1) == 0) goto code_r0x003ec906;
    lVar12 = *(long *)(uVar14 + 0x38);
    goto code_r0x003ec90d;
  }
  do {
    iVar11 = *(int *)ppuVar23;
    *(undefined4 *)ppuVar23 = 0xffffffff;
    ppbVar15 = (byte **)func_0x0099bce0();
    iStack_164 = iVar11;
    iVar11 = _Z21init_socket_transportP10atransportN7android4base14unique_fd_implINS2_13DefaultCloserEEEib
                       (uVar14,&iStack_164,uVar17,(ulong)puStack_170 & 0xff);
    uVar20 = *(uint *)ppbVar15;
    pbVar18 = (byte *)(ulong)uVar20;
    if (iStack_164 != -1) {
      func_0x0099bd10();
    }
    puVar25 = puStack_b8;
    iStack_164 = -1;
    *(uint *)ppbVar15 = uVar20;
    ppbVar8 = ppbRam0000000000a006c8;
    if (iVar11 < 0) {
      _ZN10atransportD1Ev(uVar14);
      _ZdaPvSt11align_val_t(uVar14,0x200);
      if (puVar25 != (uint *)0x0) {
        *puVar25 = *(uint *)ppbVar15;
      }
code_r0x003ec659:
      uVar17 = 0;
    }
    else {
      _ZNSt3__115recursive_mutex4lockEv(ppbRam0000000000a006c8);
      pbVar18 = (byte *)(uVar14 + 0x28);
      cVar10 = func_0x003ec970(lRam0000000000a006d0,pbVar18,uVar14,puVar25);
      if ((cVar10 == '\0') ||
         (cVar10 = func_0x003ec970(ppuRam0000000000a006d8,pbVar18,uVar14,puVar25),
         lVar12 = lRam0000000000a006d0, cVar10 == '\0')) {
        _ZNSt3__115recursive_mutex6unlockEv(ppbVar8);
        ppbVar15 = ppbVar8;
        goto code_r0x003ec659;
      }
      plVar16 = (long *)_Znwm(0x18);
      plVar16[2] = uVar14;
      *plVar16 = lVar12;
      puVar4 = *(undefined8 **)(lVar12 + 8);
      plVar16[1] = (long)puVar4;
      *puVar4 = plVar16;
      *(long **)(lVar12 + 8) = plVar16;
      *(long *)(lVar12 + 0x10) = *(long *)(lVar12 + 0x10) + 1;
      _ZNSt3__115recursive_mutex6unlockEv(ppbVar8);
      pbVar18 = *(byte **)(uVar14 + 0x148);
      puVar25 = *(uint **)(uVar14 + 0x150);
      if (puVar25 != (uint *)0x0) {
        LOCK();
        *(long *)(puVar25 + 2) = *(long *)(puVar25 + 2) + 1;
        UNLOCK();
      }
      pbStack_128 = &UNK_0099ee38;
      ppbVar15 = &pbStack_128;
      uStack_120 = uVar14;
      ppbStack_108 = ppbVar15;
      _Z21fdevent_run_on_looperNSt3__18functionIFvvEEE(ppbVar15);
      if (ppbStack_108 == ppbVar15) {
        lVar12 = 0x20;
code_r0x003ec685:
        lVar12 = (**(code **)(*ppbStack_108 + lVar12))();
      }
      else {
        lVar12 = 0x28;
        if (ppbStack_108 != (byte **)0x0) goto code_r0x003ec685;
      }
      uVar17 = CONCAT71((int7)((ulong)lVar12 >> 8),1);
      bVar27 = (char)puStack_170 == '\0';
      if (bVar27) {
        uStack_120 = 1;
        pbStack_128 = pbVar18 + 8;
        _ZNSt3__15mutex4lockEv();
        lVar12 = _ZNSt3__16chrono12steady_clock3nowEv();
        lStack_160 = lVar12 + 10000000000;
        do {
          if (pbVar18[1] != 0) {
            ppbVar15 = (byte **)CONCAT71((int7)((ulong)(pbVar18 + 0x30) >> 8),1);
            goto code_r0x003ec704;
          }
          lVar12 = func_0x003d06b0(pbVar18 + 0x30,&pbStack_128,&lStack_160);
        } while ((int)lVar12 != 1);
        ppbVar15 = (byte **)(ulong)pbVar18[1];
code_r0x003ec704:
        puVar1 = puStack_b8;
        bVar2 = *pbVar18;
        pbVar18 = (byte *)(ulong)bVar2;
        if ((char)uStack_120 == '\x01') {
          lVar12 = _ZNSt3__115recursive_mutex6unlockEv(pbStack_128);
        }
        puStack_170 = puVar25;
        if (((byte)ppbVar15 & bVar2) == 0) {
          uVar20 = 0x6e;
        }
        else {
          uVar17 = CONCAT71((int7)((ulong)lVar12 >> 8),1);
          if (*(int *)(uVar14 + 0x110) != 2) goto code_r0x003ec74b;
          uVar20 = 1;
        }
        if (puVar1 != (uint *)0x0) {
          *puVar1 = uVar20;
        }
        uVar17 = 0;
      }
code_r0x003ec74b:
      if (puVar25 != (uint *)0x0) {
        LOCK();
        puVar1 = puVar25 + 2;
        lVar12 = *(long *)puVar1;
        *(long *)puVar1 = *(long *)puVar1 + -1;
        UNLOCK();
        if (lVar12 == 0) {
          uVar17 = uVar17 & 0xffffffff;
          (**(code **)(*(long *)puVar25 + 0x10))(puVar25);
          _ZNSt3__119__shared_weak_count14__release_weakEv(puVar25);
          uVar14 = uVar17;
        }
      }
    }
    uVar20 = (uint)puVar25;
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_f8) {
      return uVar17;
    }
    func_0x0099bd00();
code_r0x003ec906:
    lVar12 = uVar14 + 0x29;
code_r0x003ec90d:
    _ZN7android4base12StringPrintfEPKcz
              (&pbStack_128,&UNK_0016ec41,lVar12,*(undefined4 *)ppuVar23,uStack_168);
    func_0x0032e5a0(pbVar18,&pbStack_128);
    if (((ulong)pbStack_128 & 1) != 0) {
      _ZdaPvSt11align_val_t(uStack_118,(ulong)pbStack_128 & 0xfffffffffffffffe);
    }
    _ZN7android4base10LogMessageD2Ev(&lStack_160);
    *(uint *)ppbVar15 = uVar20;
    uVar17 = (ulong)uStack_168;
  } while( true );
}


