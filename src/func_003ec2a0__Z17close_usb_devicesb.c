// Function: _Z17close_usb_devicesb
// Address: 003ec2a0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _Z17close_usb_devicesb
                (byte param_1,undefined8 param_2,undefined8 param_3,uint param_4,long *param_5,
                undefined1 param_6)

{
  uint *puVar1;
  byte bVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte **ppbVar7;
  char cVar8;
  int iVar9;
  long lVar10;
  uint *puVar11;
  long lVar12;
  ulong uVar13;
  byte **ppbVar14;
  long *plVar15;
  ulong uVar16;
  byte *pbVar17;
  undefined8 uVar18;
  undefined *puVar19;
  ulong extraout_RDX;
  undefined4 *puVar20;
  undefined **ppuVar21;
  ulong unaff_R12;
  uint uVar22;
  long in_FS_OFFSET;
  bool bVar23;
  uint *puStack_128;
  uint uStack_120;
  int iStack_11c;
  long lStack_118;
  long alStack_110 [4];
  long *plStack_f0;
  byte *pbStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  byte **ppbStack_c0;
  long lStack_b0;
  undefined **ppuStack_a8;
  ulong uStack_a0;
  uint *puStack_70;
  undefined *apuStack_68 [4];
  undefined **ppuStack_48;
  ulong uStack_30;
  
  uStack_30 = *(ulong *)(in_FS_OFFSET + 0x28);
  puVar20 = (undefined4 *)(ulong)param_1;
  if (((((byte)adb_trace_mask & 0x20) != 0) && ((int)adb_trace_severity._20_4_ < 2)) &&
     (cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0), cVar8 != '\0')) {
    puVar11 = (uint *)func_0x0099bce0();
    uVar22 = *puVar11;
    unaff_R12 = (ulong)uVar22;
    param_4 = 1;
    param_5 = (long *)0x0;
    param_6 = 0xff;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i(&puStack_70,&UNK_0017a1e0,0x606);
    uVar18 = _ZN7android4base10LogMessage6streamEv(&puStack_70);
    uVar18 = func_0x0032eb30(uVar18,&UNK_00187daa,0x1a);
    _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEb(uVar18,puVar20);
    _ZN7android4base10LogMessageD2Ev(&puStack_70);
    *puVar11 = uVar22;
  }
  apuStack_68[0] = &UNK_0099ef10;
  ppuStack_48 = apuStack_68;
  _Z13close_devicesNSt3__18functionIFbPK10atransportEEEb(apuStack_68);
  ppuVar21 = ppuStack_48;
  if (ppuStack_48 == apuStack_68) {
    lVar10 = 0x20;
code_r0x003ec30e:
    puVar19 = *ppuStack_48;
    (**(code **)(puVar19 + lVar10))();
    param_4 = (uint)puVar19;
  }
  else {
    lVar10 = 0x28;
    if (ppuStack_48 != (undefined **)0x0) goto code_r0x003ec30e;
  }
  if (*(ulong *)(in_FS_OFFSET + 0x28) == uStack_30) {
    return *(ulong *)(in_FS_OFFSET + 0x28);
  }
  func_0x0099bd00();
  puStack_128 = (uint *)(ulong)param_4;
  lStack_b0 = *(long *)(in_FS_OFFSET + 0x28);
  ppuStack_a8 = apuStack_68;
  uStack_a0 = unaff_R12;
  lVar10 = _Z19fdevent_get_ambientv();
  if (*(char *)(lVar10 + 0x10) == '\x01') {
    lVar10 = _Z19fdevent_get_ambientv();
    lVar12 = _ZN7android4base11GetThreadIdEv();
    if (*(long *)(lVar10 + 8) == lVar12) {
      do {
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (&pbStack_e0,&UNK_0017a1e0,0x624,6,0,0xffffffff);
        uVar18 = _ZN7android4base10LogMessage6streamEv(&pbStack_e0);
        uVar18 = func_0x0032eb30(uVar18,&UNK_00165d45,0xe);
        uVar18 = func_0x0032eb30(uVar18,&UNK_00162e7f,0x29);
        uVar18 = func_0x0032eb30(uVar18,&UNK_0015ae05,1);
        uVar18 = func_0x0032eb30(uVar18,&UNK_0016e934,2);
        uVar18 = func_0x0032eb30(uVar18,&UNK_0015ae05,1);
        uVar18 = func_0x0032eb30(uVar18,&UNK_00183451,0x1c);
        uVar18 = func_0x0032eb30(uVar18,&UNK_0017ed76,0x2c);
        uVar18 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar18,lVar12);
        uVar18 = func_0x0032eb30(uVar18,&UNK_00165f20,0x1f);
        uVar18 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar18,lVar12);
        func_0x0032eb30(uVar18,&UNK_0017b788,2);
        _ZN7android4base10LogMessageD2Ev(&pbStack_e0);
      } while( true );
    }
  }
  uVar16 = extraout_RDX & 0xffffffff;
  uVar13 = _Znwm(0x200);
  plVar15 = (long *)param_5[4];
  if (plVar15 == (long *)0x0) {
    plStack_f0 = (long *)0x0;
  }
  else if (plVar15 == param_5) {
    plStack_f0 = alStack_110;
    (**(code **)(*plVar15 + 0x18))();
  }
  else {
    param_5[4] = 0;
    plStack_f0 = plVar15;
  }
  _ZN10atransportC2E13TransportTypeNSt3__18functionIF15ReconnectResultPS_EEE15ConnectionState
            (uVar13,1,alStack_110,5);
  if (plStack_f0 == alStack_110) {
    lVar10 = 0x20;
  }
  else {
    lVar10 = 0x28;
    if (plStack_f0 == (long *)0x0) goto code_r0x003ec4a9;
  }
  (**(code **)(*plStack_f0 + lVar10))();
code_r0x003ec4a9:
  *(undefined1 *)(uVar13 + 0xa0) = param_6;
  if ((*(byte *)(uVar13 + 0x28) & 1) != 0) {
    _ZdaPvSt11align_val_t
              (*(undefined8 *)(uVar13 + 0x38),*(ulong *)(uVar13 + 0x28) & 0xfffffffffffffffe);
  }
  *(undefined8 *)(uVar13 + 0x38) = *(undefined8 *)(puVar20 + 4);
  uVar4 = puVar20[1];
  uVar5 = puVar20[2];
  uVar6 = puVar20[3];
  *(undefined4 *)(uVar13 + 0x28) = *puVar20;
  *(undefined4 *)(uVar13 + 0x2c) = uVar4;
  *(undefined4 *)(uVar13 + 0x30) = uVar5;
  *(undefined4 *)(uVar13 + 0x34) = uVar6;
  *(undefined2 *)puVar20 = 0;
  if (((((byte)adb_trace_mask & 8) != 0) && ((int)adb_trace_severity._12_4_ < 2)) &&
     (cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0), cVar8 != '\0')) {
    uStack_120 = (uint)extraout_RDX;
    ppbVar14 = (byte **)func_0x0099bce0();
    uVar22 = *(uint *)ppbVar14;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (&lStack_118,&UNK_0017a1e0,0x62b,1,0,0xffffffff);
    pbVar17 = (byte *)_ZN7android4base10LogMessage6streamEv(&lStack_118);
    if ((*(byte *)(uVar13 + 0x28) & 1) == 0) goto code_r0x003ec906;
    lVar10 = *(long *)(uVar13 + 0x38);
    goto code_r0x003ec90d;
  }
  do {
    iVar9 = *(int *)ppuVar21;
    *(undefined4 *)ppuVar21 = 0xffffffff;
    ppbVar14 = (byte **)func_0x0099bce0();
    iStack_11c = iVar9;
    iVar9 = _Z21init_socket_transportP10atransportN7android4base14unique_fd_implINS2_13DefaultCloserEEEib
                      (uVar13,&iStack_11c,uVar16,(ulong)puStack_128 & 0xff);
    uVar22 = *(uint *)ppbVar14;
    pbVar17 = (byte *)(ulong)uVar22;
    if (iStack_11c != -1) {
      func_0x0099bd10();
    }
    puVar11 = puStack_70;
    iStack_11c = -1;
    *(uint *)ppbVar14 = uVar22;
    ppbVar7 = ppbRam0000000000a006c8;
    if (iVar9 < 0) {
      _ZN10atransportD1Ev(uVar13);
      _ZdaPvSt11align_val_t(uVar13,0x200);
      if (puVar11 != (uint *)0x0) {
        *puVar11 = *(uint *)ppbVar14;
      }
code_r0x003ec659:
      uVar16 = 0;
    }
    else {
      _ZNSt3__115recursive_mutex4lockEv(ppbRam0000000000a006c8);
      pbVar17 = (byte *)(uVar13 + 0x28);
      cVar8 = func_0x003ec970(lRam0000000000a006d0,pbVar17,uVar13,puVar11);
      if ((cVar8 == '\0') ||
         (cVar8 = func_0x003ec970(uRam0000000000a006d8,pbVar17,uVar13,puVar11),
         lVar10 = lRam0000000000a006d0, cVar8 == '\0')) {
        _ZNSt3__115recursive_mutex6unlockEv(ppbVar7);
        ppbVar14 = ppbVar7;
        goto code_r0x003ec659;
      }
      plVar15 = (long *)_Znwm(0x18);
      plVar15[2] = uVar13;
      *plVar15 = lVar10;
      puVar3 = *(undefined8 **)(lVar10 + 8);
      plVar15[1] = (long)puVar3;
      *puVar3 = plVar15;
      *(long **)(lVar10 + 8) = plVar15;
      *(long *)(lVar10 + 0x10) = *(long *)(lVar10 + 0x10) + 1;
      _ZNSt3__115recursive_mutex6unlockEv(ppbVar7);
      pbVar17 = *(byte **)(uVar13 + 0x148);
      puVar11 = *(uint **)(uVar13 + 0x150);
      if (puVar11 != (uint *)0x0) {
        LOCK();
        *(long *)(puVar11 + 2) = *(long *)(puVar11 + 2) + 1;
        UNLOCK();
      }
      pbStack_e0 = &UNK_0099ee38;
      ppbVar14 = &pbStack_e0;
      uStack_d8 = uVar13;
      ppbStack_c0 = ppbVar14;
      _Z21fdevent_run_on_looperNSt3__18functionIFvvEEE(ppbVar14);
      if (ppbStack_c0 == ppbVar14) {
        lVar10 = 0x20;
code_r0x003ec685:
        lVar10 = (**(code **)(*ppbStack_c0 + lVar10))();
      }
      else {
        lVar10 = 0x28;
        if (ppbStack_c0 != (byte **)0x0) goto code_r0x003ec685;
      }
      uVar16 = CONCAT71((int7)((ulong)lVar10 >> 8),1);
      bVar23 = (char)puStack_128 == '\0';
      if (bVar23) {
        uStack_d8 = 1;
        pbStack_e0 = pbVar17 + 8;
        _ZNSt3__15mutex4lockEv();
        lVar10 = _ZNSt3__16chrono12steady_clock3nowEv();
        lStack_118 = lVar10 + 10000000000;
        do {
          if (pbVar17[1] != 0) {
            ppbVar14 = (byte **)CONCAT71((int7)((ulong)(pbVar17 + 0x30) >> 8),1);
            goto code_r0x003ec704;
          }
          lVar10 = func_0x003d06b0(pbVar17 + 0x30,&pbStack_e0,&lStack_118);
        } while ((int)lVar10 != 1);
        ppbVar14 = (byte **)(ulong)pbVar17[1];
code_r0x003ec704:
        puVar1 = puStack_70;
        bVar2 = *pbVar17;
        pbVar17 = (byte *)(ulong)bVar2;
        if ((char)uStack_d8 == '\x01') {
          lVar10 = _ZNSt3__115recursive_mutex6unlockEv(pbStack_e0);
        }
        puStack_128 = puVar11;
        if (((byte)ppbVar14 & bVar2) == 0) {
          uVar22 = 0x6e;
        }
        else {
          uVar16 = CONCAT71((int7)((ulong)lVar10 >> 8),1);
          if (*(int *)(uVar13 + 0x110) != 2) goto code_r0x003ec74b;
          uVar22 = 1;
        }
        if (puVar1 != (uint *)0x0) {
          *puVar1 = uVar22;
        }
        uVar16 = 0;
      }
code_r0x003ec74b:
      if (puVar11 != (uint *)0x0) {
        LOCK();
        puVar1 = puVar11 + 2;
        lVar10 = *(long *)puVar1;
        *(long *)puVar1 = *(long *)puVar1 + -1;
        UNLOCK();
        if (lVar10 == 0) {
          uVar16 = uVar16 & 0xffffffff;
          (**(code **)(*(long *)puVar11 + 0x10))(puVar11);
          _ZNSt3__119__shared_weak_count14__release_weakEv(puVar11);
          uVar13 = uVar16;
        }
      }
    }
    uVar22 = (uint)puVar11;
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_b0) {
      return uVar16;
    }
    func_0x0099bd00();
code_r0x003ec906:
    lVar10 = uVar13 + 0x29;
code_r0x003ec90d:
    _ZN7android4base12StringPrintfEPKcz
              (&pbStack_e0,&UNK_0016ec41,lVar10,*(undefined4 *)ppuVar21,uStack_120);
    func_0x0032e5a0(pbVar17,&pbStack_e0);
    if (((ulong)pbStack_e0 & 1) != 0) {
      _ZdaPvSt11align_val_t(uStack_d0,(ulong)pbStack_e0 & 0xfffffffffffffffe);
    }
    _ZN7android4base10LogMessageD2Ev(&lStack_118);
    *(uint *)ppbVar14 = uVar22;
    uVar16 = (ulong)uStack_120;
  } while( true );
}


