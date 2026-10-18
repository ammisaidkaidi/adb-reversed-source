// Function: _Z25register_socket_transportN7android4base14unique_fd_implINS0_13DefaultCloserEEENSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEibNS4_8functionIF15ReconnectResultP10atransportEEEbPi
// Address: 003ec3c0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _Z25register_socket_transportN7android4base14unique_fd_implINS0_13DefaultCloserEEENSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEibNS4_8functionIF15ReconnectResultP10atransportEEEbPi
                (int *param_1,undefined4 *param_2,undefined4 param_3,uint param_4,long *param_5,
                undefined1 param_6,uint *param_7)

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
  long lVar11;
  ulong uVar12;
  byte **ppbVar13;
  long *plVar14;
  ulong uVar15;
  byte *pbVar16;
  undefined8 uVar17;
  uint uVar18;
  uint *puVar19;
  long in_FS_OFFSET;
  bool bVar20;
  uint *puStack_b0;
  undefined4 uStack_a8;
  int iStack_a4;
  long lStack_a0;
  long alStack_98 [4];
  long *plStack_78;
  byte *pbStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  byte **ppbStack_48;
  long lStack_38;
  
  puStack_b0 = (uint *)(ulong)param_4;
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  lVar10 = _Z19fdevent_get_ambientv();
  if (*(char *)(lVar10 + 0x10) == '\x01') {
    lVar10 = _Z19fdevent_get_ambientv();
    lVar11 = _ZN7android4base11GetThreadIdEv();
    if (*(long *)(lVar10 + 8) == lVar11) {
      do {
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (&pbStack_68,&UNK_0017a1e0,0x624,6,0,0xffffffff);
        uVar17 = _ZN7android4base10LogMessage6streamEv(&pbStack_68);
        uVar17 = func_0x0032eb30(uVar17,&UNK_00165d45,0xe);
        uVar17 = func_0x0032eb30(uVar17,&UNK_00162e7f,0x29);
        uVar17 = func_0x0032eb30(uVar17,&UNK_0015ae05,1);
        uVar17 = func_0x0032eb30(uVar17,&UNK_0016e934,2);
        uVar17 = func_0x0032eb30(uVar17,&UNK_0015ae05,1);
        uVar17 = func_0x0032eb30(uVar17,&UNK_00183451,0x1c);
        uVar17 = func_0x0032eb30(uVar17,&UNK_0017ed76,0x2c);
        uVar17 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar17,lVar11);
        uVar17 = func_0x0032eb30(uVar17,&UNK_00165f20,0x1f);
        uVar17 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar17,lVar11);
        func_0x0032eb30(uVar17,&UNK_0017b788,2);
        _ZN7android4base10LogMessageD2Ev(&pbStack_68);
      } while( true );
    }
  }
  uVar12 = _Znwm(0x200);
  plVar14 = (long *)param_5[4];
  if (plVar14 == (long *)0x0) {
    plStack_78 = (long *)0x0;
  }
  else if (plVar14 == param_5) {
    plStack_78 = alStack_98;
    (**(code **)(*plVar14 + 0x18))();
  }
  else {
    param_5[4] = 0;
    plStack_78 = plVar14;
  }
  _ZN10atransportC2E13TransportTypeNSt3__18functionIF15ReconnectResultPS_EEE15ConnectionState
            (uVar12,1,alStack_98,5);
  if (plStack_78 == alStack_98) {
    lVar10 = 0x20;
  }
  else {
    lVar10 = 0x28;
    if (plStack_78 == (long *)0x0) goto code_r0x003ec4a9;
  }
  (**(code **)(*plStack_78 + lVar10))();
code_r0x003ec4a9:
  *(undefined1 *)(uVar12 + 0xa0) = param_6;
  if ((*(byte *)(uVar12 + 0x28) & 1) != 0) {
    _ZdaPvSt11align_val_t
              (*(undefined8 *)(uVar12 + 0x38),*(ulong *)(uVar12 + 0x28) & 0xfffffffffffffffe);
  }
  *(undefined8 *)(uVar12 + 0x38) = *(undefined8 *)(param_2 + 4);
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  *(undefined4 *)(uVar12 + 0x28) = *param_2;
  *(undefined4 *)(uVar12 + 0x2c) = uVar4;
  *(undefined4 *)(uVar12 + 0x30) = uVar5;
  *(undefined4 *)(uVar12 + 0x34) = uVar6;
  *(undefined2 *)param_2 = 0;
  if (((((byte)adb_trace_mask & 8) != 0) && ((int)adb_trace_severity._12_4_ < 2)) &&
     (cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0), cVar8 != '\0')) {
    ppbVar13 = (byte **)func_0x0099bce0();
    uVar18 = *(uint *)ppbVar13;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (&lStack_a0,&UNK_0017a1e0,0x62b,1,0,0xffffffff);
    pbVar16 = (byte *)_ZN7android4base10LogMessage6streamEv(&lStack_a0);
    uStack_a8 = param_3;
    if ((*(byte *)(uVar12 + 0x28) & 1) == 0) goto code_r0x003ec906;
    lVar10 = *(long *)(uVar12 + 0x38);
    goto code_r0x003ec90d;
  }
  do {
    iVar9 = *param_1;
    *param_1 = -1;
    ppbVar13 = (byte **)func_0x0099bce0();
    iStack_a4 = iVar9;
    iVar9 = _Z21init_socket_transportP10atransportN7android4base14unique_fd_implINS2_13DefaultCloserEEEib
                      (uVar12,&iStack_a4,param_3,(ulong)puStack_b0 & 0xff);
    uVar18 = *(uint *)ppbVar13;
    pbVar16 = (byte *)(ulong)uVar18;
    if (iStack_a4 != -1) {
      func_0x0099bd10();
    }
    iStack_a4 = -1;
    *(uint *)ppbVar13 = uVar18;
    ppbVar7 = ppbRam0000000000a006c8;
    if (iVar9 < 0) {
      _ZN10atransportD1Ev(uVar12);
      _ZdaPvSt11align_val_t(uVar12,0x200);
      if (param_7 != (uint *)0x0) {
        *param_7 = *(uint *)ppbVar13;
      }
code_r0x003ec659:
      uVar15 = 0;
      puVar19 = param_7;
    }
    else {
      _ZNSt3__115recursive_mutex4lockEv(ppbRam0000000000a006c8);
      pbVar16 = (byte *)(uVar12 + 0x28);
      cVar8 = func_0x003ec970(lRam0000000000a006d0,pbVar16,uVar12,param_7);
      if ((cVar8 == '\0') ||
         (cVar8 = func_0x003ec970(uRam0000000000a006d8,pbVar16,uVar12,param_7),
         lVar10 = lRam0000000000a006d0, cVar8 == '\0')) {
        _ZNSt3__115recursive_mutex6unlockEv(ppbVar7);
        ppbVar13 = ppbVar7;
        goto code_r0x003ec659;
      }
      plVar14 = (long *)_Znwm(0x18);
      plVar14[2] = uVar12;
      *plVar14 = lVar10;
      puVar3 = *(undefined8 **)(lVar10 + 8);
      plVar14[1] = (long)puVar3;
      *puVar3 = plVar14;
      *(long **)(lVar10 + 8) = plVar14;
      *(long *)(lVar10 + 0x10) = *(long *)(lVar10 + 0x10) + 1;
      _ZNSt3__115recursive_mutex6unlockEv(ppbVar7);
      pbVar16 = *(byte **)(uVar12 + 0x148);
      puVar19 = *(uint **)(uVar12 + 0x150);
      if (puVar19 != (uint *)0x0) {
        LOCK();
        *(long *)(puVar19 + 2) = *(long *)(puVar19 + 2) + 1;
        UNLOCK();
      }
      pbStack_68 = &UNK_0099ee38;
      ppbVar13 = &pbStack_68;
      uStack_60 = uVar12;
      ppbStack_48 = ppbVar13;
      _Z21fdevent_run_on_looperNSt3__18functionIFvvEEE(ppbVar13);
      if (ppbStack_48 == ppbVar13) {
        lVar10 = 0x20;
code_r0x003ec685:
        lVar10 = (**(code **)(*ppbStack_48 + lVar10))();
      }
      else {
        lVar10 = 0x28;
        if (ppbStack_48 != (byte **)0x0) goto code_r0x003ec685;
      }
      uVar15 = CONCAT71((int7)((ulong)lVar10 >> 8),1);
      bVar20 = (char)puStack_b0 == '\0';
      if (bVar20) {
        uStack_60 = 1;
        pbStack_68 = pbVar16 + 8;
        _ZNSt3__15mutex4lockEv();
        lVar10 = _ZNSt3__16chrono12steady_clock3nowEv();
        lStack_a0 = lVar10 + 10000000000;
        do {
          if (pbVar16[1] != 0) {
            ppbVar13 = (byte **)CONCAT71((int7)((ulong)(pbVar16 + 0x30) >> 8),1);
            goto code_r0x003ec704;
          }
          lVar10 = func_0x003d06b0(pbVar16 + 0x30,&pbStack_68,&lStack_a0);
        } while ((int)lVar10 != 1);
        ppbVar13 = (byte **)(ulong)pbVar16[1];
code_r0x003ec704:
        bVar2 = *pbVar16;
        pbVar16 = (byte *)(ulong)bVar2;
        if ((char)uStack_60 == '\x01') {
          lVar10 = _ZNSt3__115recursive_mutex6unlockEv(pbStack_68);
        }
        puStack_b0 = puVar19;
        if (((byte)ppbVar13 & bVar2) == 0) {
          uVar18 = 0x6e;
        }
        else {
          uVar15 = CONCAT71((int7)((ulong)lVar10 >> 8),1);
          if (*(int *)(uVar12 + 0x110) != 2) goto code_r0x003ec74b;
          uVar18 = 1;
        }
        if (param_7 != (uint *)0x0) {
          *param_7 = uVar18;
        }
        uVar15 = 0;
      }
code_r0x003ec74b:
      if (puVar19 != (uint *)0x0) {
        LOCK();
        puVar1 = puVar19 + 2;
        lVar10 = *(long *)puVar1;
        *(long *)puVar1 = *(long *)puVar1 + -1;
        UNLOCK();
        if (lVar10 == 0) {
          uVar15 = uVar15 & 0xffffffff;
          (**(code **)(*(long *)puVar19 + 0x10))(puVar19);
          _ZNSt3__119__shared_weak_count14__release_weakEv(puVar19);
          uVar12 = uVar15;
        }
      }
    }
    uVar18 = (uint)puVar19;
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
      return uVar15;
    }
    func_0x0099bd00();
code_r0x003ec906:
    lVar10 = uVar12 + 0x29;
code_r0x003ec90d:
    _ZN7android4base12StringPrintfEPKcz(&pbStack_68,&UNK_0016ec41,lVar10,*param_1,uStack_a8);
    func_0x0032e5a0(pbVar16,&pbStack_68);
    if (((ulong)pbStack_68 & 1) != 0) {
      _ZdaPvSt11align_val_t(uStack_58,(ulong)pbStack_68 & 0xfffffffffffffffe);
    }
    _ZN7android4base10LogMessageD2Ev(&lStack_a0);
    *(uint *)ppbVar13 = uVar18;
    param_3 = uStack_a8;
  } while( true );
}


