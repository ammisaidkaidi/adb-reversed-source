// Function: _Z32connect_emulator_arbitrary_portsiiPNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE
// Address: 0040b1c0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


byte * _Z32connect_emulator_arbitrary_portsiiPNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE
                 (uint param_1,ulong *param_2,undefined8 param_3)

{
  byte *pbVar1;
  byte bVar2;
  undefined4 *puVar3;
  long *plVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  byte *pbVar11;
  uint *puVar12;
  long *plVar13;
  uint *puVar14;
  undefined4 *puVar15;
  byte *pbVar16;
  undefined4 *puVar17;
  undefined8 uVar18;
  ulong uVar19;
  ulong uVar20;
  undefined1 *puVar21;
  ulong uVar22;
  int iVar23;
  undefined4 uVar24;
  ulong *puVar25;
  undefined4 **ppuVar26;
  undefined *puVar27;
  byte *pbVar28;
  undefined8 *puVar29;
  byte *unaff_R12;
  byte *pbVar30;
  long in_FS_OFFSET;
  bool bVar31;
  undefined1 auVar32 [16];
  undefined4 **ppuStack_240;
  undefined4 *puStack_220;
  undefined4 *puStack_218;
  undefined4 *puStack_210;
  ulong uStack_208;
  undefined8 uStack_200;
  undefined1 *puStack_1f8;
  int iStack_1f0;
  int iStack_1ec;
  undefined1 auStack_1e8 [5];
  byte abStack_1e3 [3];
  undefined4 *puStack_1e0;
  undefined4 *puStack_1d8;
  undefined1 auStack_1c8 [16];
  undefined4 *puStack_1b8;
  undefined4 uStack_1b0;
  int iStack_1ac;
  undefined1 auStack_1a8 [16];
  undefined1 *puStack_198;
  byte abStack_188 [32];
  byte *pbStack_168;
  byte *pbStack_158;
  byte *pbStack_150;
  byte *pbStack_148;
  byte *pbStack_140;
  long *plStack_138;
  undefined4 *puStack_130;
  undefined *puStack_128;
  undefined4 *puStack_120;
  byte *pbStack_118;
  long *plStack_110;
  byte *pbStack_108;
  uint *puStack_100;
  byte *pbStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_c8;
  uint uStack_bc;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  uint uStack_94;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  ulong uStack_80;
  byte *pbStack_78;
  undefined *apuStack_68 [4];
  undefined **ppuStack_48;
  long lStack_38;
  
  puVar14 = (uint *)((ulong)param_2 & 0xffffffff);
  uVar20 = (ulong)param_1;
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  puStack_e0 = &UNK_0040b1f2;
  puVar25 = param_2;
  uStack_c8 = param_3;
  lVar8 = _Z19fdevent_get_ambientv();
  if (*(char *)(lVar8 + 0x10) == '\x01') {
    puStack_e0 = &UNK_0040b1fd;
    lVar8 = _Z19fdevent_get_ambientv();
    puStack_e0 = &UNK_0040b205;
    lVar9 = _ZN7android4base11GetThreadIdEv();
    if (*(long *)(lVar8 + 8) == lVar9) {
      do {
        puStack_e0 = &UNK_0040b592;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (&uStack_88,&UNK_0015b284,0x98,6,0,0xffffffff);
        puStack_e0 = &UNK_0040b59a;
        uVar18 = _ZN7android4base10LogMessage6streamEv(&uStack_88);
        puStack_e0 = &UNK_0040b5ae;
        uVar18 = func_0x0032eb30(uVar18,&UNK_00165d45,0xe);
        puStack_e0 = &UNK_0040b5c2;
        uVar18 = func_0x0032eb30(uVar18,&UNK_00162e7f,0x29);
        puStack_e0 = &UNK_0040b5d2;
        uVar18 = func_0x0032eb30(uVar18,&UNK_0015ae05,1);
        puStack_e0 = &UNK_0040b5e6;
        uVar18 = func_0x0032eb30(uVar18,&UNK_0016e934,2);
        puStack_e0 = &UNK_0040b5f6;
        uVar18 = func_0x0032eb30(uVar18,&UNK_0015ae05,1);
        puStack_e0 = &UNK_0040b60a;
        uVar18 = func_0x0032eb30(uVar18,&UNK_00183451,0x1c);
        puStack_e0 = &UNK_0040b61e;
        uVar18 = func_0x0032eb30(uVar18,&UNK_0017ed76,0x2c);
        puStack_e0 = &UNK_0040b629;
        uVar18 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar18,lVar9);
        puStack_e0 = &UNK_0040b639;
        uVar18 = func_0x0032eb30(uVar18,&UNK_00165f20,0x1f);
        puStack_e0 = &UNK_0040b644;
        uVar18 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar18,lVar9);
        puStack_e0 = &UNK_0040b654;
        func_0x0032eb30(uVar18,&UNK_0017b788,2);
        puStack_e0 = &UNK_0040b65c;
        _ZN7android4base10LogMessageD2Ev(&uStack_88);
      } while( true );
    }
  }
  pbVar11 = (byte *)((ulong)param_2 & 0xffffffff);
  puStack_e0 = &UNK_0040b216;
  lVar8 = _Z35find_emulator_transport_by_adb_porti();
  pbVar30 = (byte *)0xffffffff;
  if (lVar8 == 0) {
    puVar25 = (ulong *)&UNK_001862a3;
    puStack_e0 = &UNK_0040b23a;
    _ZN7android4base12StringPrintfEPKcz(&uStack_88,&UNK_001862a3,uVar20);
    pbVar11 = pbStack_78;
    if ((uStack_88 & 1) == 0) {
      pbVar11 = (byte *)((long)&uStack_88 + 1);
    }
    puStack_e0 = &UNK_0040b24f;
    lVar8 = _Z14find_transportPKc();
    if ((uStack_88 & 1) != 0) {
      puVar25 = (ulong *)(uStack_88 & 0xfffffffffffffffe);
      puStack_e0 = &UNK_0040b269;
      pbVar11 = pbStack_78;
      _ZdaPvSt11align_val_t();
    }
    if (lVar8 != 0) goto code_r0x0040b504;
    puStack_e0 = &UNK_0040b27e;
    unaff_R12 = (byte *)func_0x0099be70(&UNK_0016b055);
    if (unaff_R12 == (byte *)0x0) {
code_r0x0040b343:
      pbVar11 = (byte *)((ulong)param_2 & 0xffffffff);
      puVar25 = (ulong *)0x1;
      puStack_e0 = &UNK_0040b356;
      uVar7 = _Z23network_loopback_clientiiPNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE
                        (pbVar11,1,uStack_c8);
      unaff_R12 = (byte *)(ulong)uVar7;
      puStack_e0 = &UNK_0040b35e;
      puVar12 = (uint *)func_0x0099bce0();
      uVar6 = *puVar12;
      uVar19 = (ulong)uVar6;
      if ((int)pbVar30 != -1) {
        puStack_e0 = &UNK_0040b375;
        func_0x0099bd10();
        pbVar11 = pbVar30;
      }
      *puVar12 = uVar6;
      if (-1 < (int)uVar7) {
code_r0x0040b387:
        if ((((byte)adb_trace_mask & 8) != 0) && ((int)adb_trace_severity._12_4_ < 2)) {
          puStack_e0 = &UNK_0040b66d;
          cVar5 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
          if (cVar5 != '\0') {
            uStack_bc = (uint)uVar20;
            puStack_e0 = &UNK_0040b681;
            puVar15 = (undefined4 *)func_0x0099bce0();
            uStack_c8 = CONCAT44(uStack_c8._4_4_,*puVar15);
            puStack_e0 = &UNK_0040b6b5;
            _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                      (auStack_90,&UNK_0015b284,0xab,1,0,0xffffffff);
            puStack_e0 = &UNK_0040b6bd;
            uVar18 = _ZN7android4base10LogMessage6streamEv(auStack_90);
            puStack_e0 = &UNK_0040b6d8;
            _ZN7android4base12StringPrintfEPKcz(&uStack_88,&UNK_00162fa2,unaff_R12);
            puStack_e0 = &UNK_0040b6e3;
            func_0x0032e5a0(uVar18,&uStack_88);
            if ((uStack_88 & 1) != 0) {
              puStack_e0 = &UNK_0040b6fa;
              _ZdaPvSt11align_val_t(pbStack_78,uStack_88 & 0xfffffffffffffffe);
            }
            puStack_e0 = &UNK_0040b706;
            _ZN7android4base10LogMessageD2Ev(auStack_90);
            *puVar15 = (undefined4)uStack_c8;
            uVar20 = (ulong)uStack_bc;
          }
        }
        puStack_e0 = &UNK_0040b3b3;
        uVar6 = func_0x0099bf10(unaff_R12,1);
        if ((uVar6 & 0x80000001) == 0) {
          puStack_e0 = &UNK_0040b3ce;
          func_0x0099bf10(unaff_R12,2,uVar6 | 1);
        }
        uStack_88 = CONCAT44(uStack_88._4_4_,1);
        puStack_e0 = &UNK_0040b3f1;
        func_0x0099bf50(unaff_R12,6,1,&uStack_88,4);
        uStack_88 = 0;
        uStack_80 = 0;
        pbStack_78 = (byte *)0x0;
        puStack_e0 = &UNK_0040b415;
        _ZN7android4base12StringPrintfEPKcz(&uStack_88,&UNK_001862a3,uVar20);
        puStack_e0 = &UNK_0040b41a;
        puVar12 = (uint *)func_0x0099bce0();
        uStack_b8 = uStack_88;
        uStack_b0 = uStack_80;
        uStack_a8 = pbStack_78;
        uStack_88 = 0;
        uStack_80 = 0;
        pbStack_78 = (byte *)0x0;
        apuStack_68[0] = &UNK_0099f2c0;
        uStack_d8 = 0;
        puVar25 = &uStack_b8;
        puStack_e0 = &UNK_0040b484;
        uStack_94 = (uint)unaff_R12;
        ppuStack_48 = apuStack_68;
        uVar6 = _Z25register_socket_transportN7android4base14unique_fd_implINS0_13DefaultCloserEEENSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEibNS4_8functionIF15ReconnectResultP10atransportEEEbPi
                          (&uStack_94,puVar25,(ulong)param_2 & 0xffffffff,1,apuStack_68,0);
        puVar14 = (uint *)(ulong)uVar6;
        if (ppuStack_48 == apuStack_68) {
          lVar8 = 0x20;
code_r0x0040b4a0:
          puStack_e0 = &UNK_0040b4a6;
          (**(code **)(*ppuStack_48 + lVar8))();
        }
        else {
          lVar8 = 0x28;
          if (ppuStack_48 != (undefined **)0x0) goto code_r0x0040b4a0;
        }
        if ((uStack_b8 & 1) != 0) {
          puVar25 = (ulong *)(uStack_b8 & 0xfffffffffffffffe);
          puStack_e0 = &UNK_0040b4c6;
          _ZdaPvSt11align_val_t(uStack_a8);
        }
        uVar7 = *puVar12;
        uVar20 = (ulong)uVar7;
        pbVar11 = (byte *)(ulong)uStack_94;
        if (uStack_94 != 0xffffffff) {
          puStack_e0 = &UNK_0040b4d9;
          func_0x0099bd10();
        }
        uStack_94 = 0xffffffff;
        *puVar12 = uVar7;
        if ((uStack_88 & 1) != 0) {
          puVar25 = (ulong *)(uStack_88 & 0xfffffffffffffffe);
          puStack_e0 = &UNK_0040b4fd;
          pbVar11 = pbStack_78;
          _ZdaPvSt11align_val_t();
        }
        pbVar30 = (byte *)(ulong)((uVar6 & 0xff) - 1);
        goto code_r0x0040b504;
      }
      pbVar30 = (byte *)0xffffffff;
      if (uVar7 != 0xffffffff) {
        pbVar11 = (byte *)(ulong)uVar7;
        puStack_e0 = &UNK_0040b54e;
        func_0x0099bd10();
        puVar14 = puVar12;
      }
      goto code_r0x0040b50c;
    }
    puStack_e0 = &UNK_0040b292;
    pbVar11 = unaff_R12;
    uVar10 = func_0x0099bcf0();
    uVar19 = 0;
    if (uVar10 < 0xfffffffffffffff7) {
      if (uVar10 < 0x17) {
        uStack_88 = CONCAT71(uStack_88._1_7_,(char)uVar10 * '\x02');
        pbVar11 = (byte *)((long)&uStack_88 + 1);
      }
      else {
        lVar8 = 0x1a;
        if ((uVar10 | 7) != 0x17) {
          lVar8 = (uVar10 | 7) + 1;
        }
        puStack_e0 = &UNK_0040b2dc;
        uStack_bc = param_1;
        pbVar11 = (byte *)_Znwm(lVar8);
        uStack_88 = lVar8 + 1;
        uVar20 = (ulong)uStack_bc;
        uStack_80 = uVar10;
        pbStack_78 = pbVar11;
      }
      puStack_e0 = &UNK_0040b303;
      func_0x0099bd90(pbVar11,unaff_R12,uVar10);
      pbVar11[uVar10] = 0;
      puStack_e0 = &UNK_0040b321;
      uVar6 = _Z15network_connectRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiiiPS5_
                        (&uStack_88,(ulong)param_2 & 0xffffffff,1,0,uStack_c8);
      unaff_R12 = (byte *)(ulong)uVar6;
      if ((uStack_88 & 1) != 0) {
        puStack_e0 = &UNK_0040b33b;
        _ZdaPvSt11align_val_t(pbStack_78,uStack_88 & 0xfffffffffffffffe);
      }
      pbVar30 = unaff_R12;
      if ((int)uVar6 < 0) goto code_r0x0040b343;
      goto code_r0x0040b387;
    }
  }
  else {
code_r0x0040b504:
    puStack_e0 = &UNK_0040b509;
    puVar12 = (uint *)func_0x0099bce0();
    uVar19 = (ulong)*puVar12;
code_r0x0040b50c:
    *puVar12 = (uint)uVar19;
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
      return pbVar30;
    }
    puStack_e0 = &UNK_0040b720;
    func_0x0099bd00();
  }
  puStack_e0 = &UNK_0040b725;
  func_0x0032e8f0();
  pbStack_108 = *(byte **)(in_FS_OFFSET + 0x28);
  puStack_128 = &UNK_0040b75c;
  puStack_100 = puVar14;
  pbStack_f8 = unaff_R12;
  uStack_f0 = uVar19;
  uStack_e8 = uVar20;
  puStack_e0 = &stack0xfffffffffffffff8;
  plVar13 = (long *)_Znwm(0x18);
  uVar20 = *puVar25;
  *(undefined4 *)puVar25 = 0xffffffff;
  puStack_128 = &UNK_0040b76e;
  puVar14 = (uint *)func_0x0099bce0();
  plStack_110 = (long *)CONCAT44(plStack_110._4_4_,(int)uVar20);
  puStack_128 = &UNK_0040b781;
  _ZN12FdConnectionC1EN7android4base14unique_fd_implINS1_13DefaultCloserEEE(plVar13,&plStack_110);
  uVar6 = *puVar14;
  pbVar16 = (byte *)(ulong)uVar6;
  if ((int)plStack_110 != -1) {
    puStack_128 = &UNK_0040b791;
    func_0x0099bd10();
  }
  *puVar14 = uVar6;
  puStack_128 = &UNK_0040b79e;
  puVar15 = (undefined4 *)_Znwm(0xc0);
  puStack_128 = &UNK_0040b7b1;
  plStack_110 = plVar13;
  _ZN25BlockingConnectionAdapterC1ENSt3__110unique_ptrI18BlockingConnectionNS0_14default_deleteIS2_EEEE
            (puVar15,&plStack_110);
  plVar4 = plStack_110;
  plStack_110 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    puStack_128 = &UNK_0040b7c8;
    (**(code **)(*plVar4 + 8))();
  }
  puStack_128 = &UNK_0040b7d6;
  puStack_120 = puVar15;
  pbStack_118 = (byte *)_Znwm(0x20);
  pbStack_118[8] = 0;
  pbStack_118[9] = 0;
  pbStack_118[10] = 0;
  pbStack_118[0xb] = 0;
  pbStack_118[0xc] = 0;
  pbStack_118[0xd] = 0;
  pbStack_118[0xe] = 0;
  pbStack_118[0xf] = 0;
  pbStack_118[0x10] = 0;
  pbStack_118[0x11] = 0;
  pbStack_118[0x12] = 0;
  pbStack_118[0x13] = 0;
  pbStack_118[0x14] = 0;
  pbStack_118[0x15] = 0;
  pbStack_118[0x16] = 0;
  pbStack_118[0x17] = 0;
  pbStack_118[0] = 0x40;
  pbStack_118[1] = 0xf2;
  pbStack_118[2] = 0x99;
  pbStack_118[3] = 0;
  pbStack_118[4] = 0;
  pbStack_118[5] = 0;
  pbStack_118[6] = 0;
  pbStack_118[7] = 0;
  *(undefined4 **)(pbStack_118 + 0x18) = puVar15;
  ppuVar26 = &puStack_120;
  puStack_128 = &UNK_0040b7ff;
  _ZN10atransport13SetConnectionENSt3__110shared_ptrI10ConnectionEE();
  pbVar28 = pbStack_118;
  if (pbStack_118 != (byte *)0x0) {
    LOCK();
    pbVar1 = pbStack_118 + 8;
    lVar8 = *(long *)pbVar1;
    *(long *)pbVar1 = *(long *)pbVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      puStack_128 = &UNK_0040b823;
      (**(code **)(*(long *)pbStack_118 + 0x10))(pbStack_118);
      puStack_128 = &UNK_0040b82b;
      pbVar11 = pbVar28;
      _ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  if (*(byte **)(in_FS_OFFSET + 0x28) == pbStack_108) {
    return *(byte **)(in_FS_OFFSET + 0x28);
  }
  puStack_128 = &UNK_0040b84c;
  func_0x0099bd00();
  pbStack_150 = pbVar28;
  pbStack_158 = *(byte **)(in_FS_OFFSET + 0x28);
  pbVar28 = pbVar11;
  pbStack_148 = pbVar16;
  pbStack_140 = pbVar30;
  plStack_138 = plVar13;
  puStack_130 = puVar15;
  puStack_128 = (undefined *)&puStack_e0;
  lVar8 = _Z19fdevent_get_ambientv();
  if (*(char *)(lVar8 + 0x10) == '\x01') {
    pbVar16 = (byte *)_Z19fdevent_get_ambientv();
    lVar8 = _ZN7android4base11GetThreadIdEv();
    if (*(long *)(pbVar16 + 8) == lVar8) {
      do {
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (auStack_1a8,&UNK_0015b284,0x5a,6,0,0xffffffff);
        uVar18 = _ZN7android4base10LogMessage6streamEv(auStack_1a8);
        uVar18 = func_0x0032eb30(uVar18,&UNK_00165d45,0xe);
        uVar18 = func_0x0032eb30(uVar18,&UNK_00162e7f,0x29);
        uVar18 = func_0x0032eb30(uVar18,&UNK_0015ae05,1);
        uVar18 = func_0x0032eb30(uVar18,&UNK_0016e934,2);
        uVar18 = func_0x0032eb30(uVar18,&UNK_0015ae05,1);
        uVar18 = func_0x0032eb30(uVar18,&UNK_00183451,0x1c);
        uVar18 = func_0x0032eb30(uVar18,&UNK_0017ed76,0x2c);
        uVar18 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar18,lVar8);
        uVar18 = func_0x0032eb30(uVar18,&UNK_00165f20,0x1f);
        uVar18 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar18,lVar8);
        func_0x0032eb30(uVar18,&UNK_0017b788,2);
        _ZN7android4base10LogMessageD2Ev(auStack_1a8);
      } while( true );
    }
  }
  if ((*pbVar11 & 1) == 0) {
    if (*pbVar11 >> 1 == 0) goto code_r0x0040baa4;
  }
  else if (*(long *)(pbVar11 + 8) == 0) {
code_r0x0040baa4:
    if (((ulong)*ppuVar26 & 1) == 0) {
      *(byte *)ppuVar26 = 0x1a;
      puVar14 = (uint *)((long)ppuVar26 + 1);
    }
    else {
      ppuVar26[1] = (undefined4 *)0xd;
      puVar14 = ppuVar26[2];
    }
    pbVar30 = (byte *)((long)puVar14 + 5);
    pbVar30[0] = 0x20;
    pbVar30[1] = 0x61;
    pbVar30[2] = 100;
    pbVar30[3] = 100;
    pbVar30[4] = 0x72;
    pbVar30[5] = 0x65;
    pbVar30[6] = 0x73;
    pbVar30[7] = 0x73;
    puVar14[0] = 0x74706d65;
    puVar14[1] = 0x64612079;
    *(byte *)((long)puVar14 + 0xd) = 0;
    goto code_r0x0040be4d;
  }
  ppuStack_240 = ppuVar26;
  if ((((byte)adb_trace_mask & 8) != 0) && ((int)adb_trace_severity._12_4_ < 2)) {
    pbVar28 = (byte *)0x1;
    cVar5 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
    if (cVar5 != '\0') {
      puVar15 = (undefined4 *)func_0x0099bce0();
      uVar24 = *puVar15;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_1c8,&UNK_0015b284,0x60,1,0,0xffffffff);
      pbVar16 = (byte *)_ZN7android4base10LogMessage6streamEv(auStack_1c8);
      if ((*pbVar11 & 1) == 0) goto code_r0x0040c006;
      pbVar30 = *(byte **)(pbVar11 + 0x10);
      goto code_r0x0040c00a;
    }
  }
  do {
    uVar6 = (uint)pbVar28;
    iStack_1ac = -1;
    uStack_1b0 = 0;
    auStack_1a8 = (undefined1  [16])0x0;
    puStack_198 = (undefined1 *)0x0;
    auStack_1c8 = (undefined1  [16])0x0;
    puStack_1b8 = (undefined4 *)0x0;
    bVar2 = *pbVar11;
    puVar15 = (undefined4 *)(ulong)(bVar2 >> 1);
    if ((bVar2 & 1) != 0) {
      puVar15 = *(undefined4 **)(pbVar11 + 8);
    }
    if (puVar15 < (undefined4 *)0x6) {
code_r0x0040b961:
      pbVar16 = *(byte **)(pbVar11 + 0x10);
code_r0x0040b97c:
      puStack_1d8 = (undefined4 *)0x0;
      uVar20 = 0;
      stack0xfffffffffffffe19 = SUB1615((undefined1  [16])0x0,1);
      auStack_1e8[0] = ((char)puVar15 + '\x04') * '\x02';
code_r0x0040b986:
      pbVar11 = pbVar11 + 1;
      if ((bVar2 & 1) != 0) {
        pbVar11 = pbVar16;
      }
      pbVar30 = (byte *)(puStack_1d8 + 1);
      bVar31 = (uVar20 & 1) != 0;
      puVar17 = (undefined4 *)(auStack_1e8 + 1);
      if (bVar31) {
        puVar17 = puStack_1d8;
      }
      *puVar17 = 0x3a706374;
      pbVar16 = abStack_1e3;
      if (bVar31) {
        pbVar16 = pbVar30;
      }
      func_0x0099bd90(pbVar16,pbVar11,puVar15);
      pbVar16[(long)puVar15] = 0;
      if ((auStack_1c8[0] & 1) != 0) {
        _ZdaPvSt11align_val_t(puStack_1b8,auStack_1c8._0_8_ & 0xfffffffffffffffe);
      }
      puStack_1b8 = puStack_1d8;
      auStack_1c8._0_8_ = _auStack_1e8;
      auStack_1c8._8_8_ = puStack_1e0;
code_r0x0040b9fd:
    }
    else {
      pbVar16 = *(byte **)(pbVar11 + 0x10);
      pbVar30 = pbVar16;
      if ((bVar2 & 1) == 0) {
        pbVar30 = pbVar11 + 1;
      }
      if (*(short *)(pbVar30 + 4) != 0x3a6b || *(int *)pbVar30 != 0x636f7376) {
        if (puVar15 < (undefined4 *)0x10) goto code_r0x0040b961;
        pbVar16 = *(byte **)(pbVar11 + 0x10);
        pbVar30 = pbVar11 + 1;
        if ((bVar2 & 1) != 0) {
          pbVar30 = pbVar16;
        }
        auVar32[0] = -(*pbVar30 == 0x6c);
        auVar32[1] = -(pbVar30[1] == 0x6f);
        auVar32[2] = -(pbVar30[2] == 99);
        auVar32[3] = -(pbVar30[3] == 0x61);
        auVar32[4] = -(pbVar30[4] == 0x6c);
        auVar32[5] = -(pbVar30[5] == 0x66);
        auVar32[6] = -(pbVar30[6] == 0x69);
        auVar32[7] = -(pbVar30[7] == 0x6c);
        auVar32[8] = -(pbVar30[8] == 0x65);
        auVar32[9] = -(pbVar30[9] == 0x73);
        auVar32[10] = -(pbVar30[10] == 0x79);
        auVar32[0xb] = -(pbVar30[0xb] == 0x73);
        auVar32[0xc] = -(pbVar30[0xc] == 0x74);
        auVar32[0xd] = -(pbVar30[0xd] == 0x65);
        auVar32[0xe] = -(pbVar30[0xe] == 0x6d);
        auVar32[0xf] = -(pbVar30[0xf] == 0x3a);
        if ((ushort)((ushort)(SUB161(auVar32 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar32 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar32 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar32 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar32 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar32 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar32 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar32 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar32 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar32 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar32 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar32 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar32 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar32 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar32[0xf] >> 7) << 0xf) == 0xffff) goto code_r0x0040bd39;
        _auStack_1e8 = (undefined1  [16])0x0;
        puStack_1d8 = (undefined4 *)0x0;
        puVar17 = puVar15 + 1;
        if (puVar17 < (undefined4 *)0xfffffffffffffff7) {
          if (puVar17 < (undefined4 *)0x17) goto code_r0x0040b97c;
          lVar8 = 0x1a;
          if (((ulong)puVar17 | 7) != 0x17) {
            lVar8 = ((ulong)puVar17 | 7) + 1;
          }
          puStack_1d8 = (undefined4 *)_Znwm();
          puStack_1e0 = puVar17;
          _auStack_1e8 = lVar8 + 1U;
          uVar20 = lVar8 + 1U & 0xffffffff;
          goto code_r0x0040b986;
        }
        func_0x0032e8f0();
        uVar18 = uRam0000000000a00850;
        _ZNSt3__15mutex4lockEv(uRam0000000000a00850);
        pbVar11 = (byte *)0x0;
        if ((uRam0000000000a00860 == 0) || (lRam0000000000a00870 == 0)) goto code_r0x0040c160;
        uVar19 = (ulong)(int)uVar6;
        uVar20 = uRam0000000000a00860 - 1;
        if ((uRam0000000000a00860 & uVar20) == 0) {
          uVar10 = uVar20 & uVar19;
        }
        else {
          uVar10 = uVar19;
          if (uRam0000000000a00860 <= uVar19) {
            if ((uVar19 | uRam0000000000a00860) >> 0x20 == 0) {
              uVar10 = (ulong)uVar6 % (uRam0000000000a00860 & 0xffffffff);
            }
            else {
              uVar10 = uVar19 % uRam0000000000a00860;
            }
          }
        }
        puVar29 = *(undefined8 **)(lRam0000000000a00858 + uVar10 * 8);
        if (puVar29 == (undefined8 *)0x0) {
          pbVar11 = (byte *)0x0;
          goto code_r0x0040c160;
        }
        puVar29 = (undefined8 *)*puVar29;
        break;
      }
code_r0x0040bd39:
      if (auStack_1c8 != pbVar11) {
        if ((bVar2 & 1) != 0) {
          func_0x0032e990(auStack_1c8,pbVar16);
          goto code_r0x0040ba05;
        }
        puStack_1b8 = *(undefined4 **)(pbVar11 + 0x10);
        auStack_1c8._0_8_ = *(undefined8 *)pbVar11;
        auStack_1c8._8_8_ = *(undefined8 *)(pbVar11 + 8);
        goto code_r0x0040b9fd;
      }
    }
code_r0x0040ba05:
    bVar31 = (auStack_1c8[0] & 1) != 0;
    puVar17 = (undefined4 *)(auStack_1c8 + 1);
    if (bVar31) {
      puVar17 = puStack_1b8;
    }
    uVar20 = (ulong)(auStack_1c8[0] >> 1);
    if (bVar31) {
      uVar20 = auStack_1c8._8_8_;
    }
    _Z19socket_spec_connectPN7android4base14unique_fd_implINS0_13DefaultCloserEEENSt3__117basic_string_viewIcNS5_11char_traitsIcEEEEPiPNS5_12basic_stringIcS8_NS5_9allocatorIcEEEESF_
              (&iStack_1ac,puVar17,uVar20,&uStack_1b0,auStack_1a8,ppuStack_240);
    if (iStack_1ac != -1) {
      _auStack_1e8 = (undefined1  [16])0x0;
      puStack_1d8 = (undefined4 *)0x0;
      if ((auStack_1c8[0] & 1) == 0) {
        puStack_1d8 = puStack_1b8;
        _auStack_1e8 = auStack_1c8;
        iVar23 = iStack_1ac;
      }
      else {
        func_0x00330340(auStack_1e8,puStack_1b8,auStack_1c8._8_8_);
        iVar23 = iStack_1ac;
      }
      iStack_1ec = 0;
      iStack_1f0 = -1;
      iStack_1ac = -1;
      puVar17 = (undefined4 *)func_0x0099bce0();
      *puVar17 = *puVar17;
      iStack_1f0 = iVar23;
      if ((auStack_1a8[0] & 1) == 0) {
        puStack_1f8 = puStack_198;
        uStack_208 = auStack_1a8._0_8_;
        uStack_200 = auStack_1a8._8_8_;
      }
      else {
        func_0x00330340(&uStack_208,puStack_198,auStack_1a8._8_8_);
      }
      uVar24 = uStack_1b0;
      puVar3 = puStack_1d8;
      uVar18 = _auStack_1e8;
      puVar15 = puStack_1e0;
      _auStack_1e8 = ZEXT816(0);
      puStack_1d8 = (undefined4 *)0x0;
      lVar8 = 0x20;
      pbStack_168 = (byte *)_Znwm(0x20);
      *(undefined **)pbStack_168 = &UNK_0099f278;
      *(undefined8 *)(pbStack_168 + 8) = uVar18;
      *(undefined4 **)(pbStack_168 + 0x10) = puVar15;
      *(undefined4 **)(pbStack_168 + 0x18) = puVar3;
      pbVar16 = abStack_188;
      uVar6 = _Z25register_socket_transportN7android4base14unique_fd_implINS0_13DefaultCloserEEENSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEibNS4_8functionIF15ReconnectResultP10atransportEEEbPi
                        (&iStack_1f0,&uStack_208,uVar24,0,pbVar16,0,&iStack_1ec);
      puVar15 = (undefined4 *)(ulong)uVar6;
      if ((pbStack_168 == pbVar16) || (lVar8 = 0x28, pbStack_168 != (byte *)0x0)) {
        (**(code **)(*(long *)pbStack_168 + lVar8))();
      }
      if ((uStack_208 & 1) != 0) {
        _ZdaPvSt11align_val_t(puStack_1f8,uStack_208 & 0xfffffffffffffffe);
      }
      uVar24 = *puVar17;
      if (iStack_1f0 != -1) {
        func_0x0099bd10();
      }
      iStack_1f0 = -1;
      *puVar17 = uVar24;
      if ((char)uVar6 == '\0') {
        puVar21 = auStack_1a8 + 1;
        if (iStack_1ec == 1) {
          if ((auStack_1a8[0] & 1) != 0) {
            puVar21 = puStack_198;
          }
          puVar27 = &UNK_0015b2d4;
        }
        else if (iStack_1ec == 0x72) {
          if ((auStack_1a8[0] & 1) != 0) {
            puVar21 = puStack_198;
          }
          puVar27 = &UNK_0016b03d;
        }
        else {
          if ((auStack_1a8[0] & 1) != 0) {
            puVar21 = puStack_198;
          }
          puVar27 = &UNK_0017ef46;
        }
      }
      else {
        puVar21 = puStack_198;
        if ((auStack_1a8[0] & 1) == 0) {
          puVar21 = auStack_1a8 + 1;
        }
        puVar27 = &UNK_0017727e;
      }
      _ZN7android4base12StringPrintfEPKcz(&puStack_220,puVar27,puVar21);
      if (((ulong)*ppuStack_240 & 1) != 0) {
        _ZdaPvSt11align_val_t(ppuStack_240[2],(ulong)*ppuStack_240 & 0xfffffffffffffffe);
      }
      ppuStack_240[2] = puStack_210;
      *ppuStack_240 = puStack_220;
      ppuStack_240[1] = puStack_218;
      if ((auStack_1e8[0] & 1) != 0) {
        _ZdaPvSt11align_val_t(puStack_1d8,_auStack_1e8 & 0xfffffffffffffffe);
      }
    }
    if ((auStack_1c8[0] & 1) != 0) {
      _ZdaPvSt11align_val_t(puStack_1b8,auStack_1c8._0_8_ & 0xfffffffffffffffe);
    }
    if ((auStack_1a8[0] & 1) != 0) {
      _ZdaPvSt11align_val_t(puStack_198,auStack_1a8._0_8_ & 0xfffffffffffffffe);
    }
    puVar14 = (uint *)func_0x0099bce0();
    uVar6 = *puVar14;
    pbVar11 = (byte *)(ulong)uVar6;
    if (iStack_1ac != -1) {
      func_0x0099bd10();
    }
    *puVar14 = uVar6;
code_r0x0040be4d:
    uVar24 = SUB84(puVar14,0);
    if (*(byte **)(in_FS_OFFSET + 0x28) == pbStack_158) {
      return *(byte **)(in_FS_OFFSET + 0x28);
    }
    func_0x0099bd00();
code_r0x0040c006:
    pbVar30 = pbVar11 + 1;
code_r0x0040c00a:
    _ZN7android4base12StringPrintfEPKcz(auStack_1a8,&UNK_0015b2b7,pbVar30);
    func_0x0032e5a0(pbVar16,auStack_1a8);
    if ((auStack_1a8[0] & 1) != 0) {
      _ZdaPvSt11align_val_t(puStack_198,auStack_1a8._0_8_ & 0xfffffffffffffffe);
    }
    pbVar28 = auStack_1c8;
    _ZN7android4base10LogMessageD2Ev();
    *puVar15 = uVar24;
  } while( true );
code_r0x0040c109:
  pbVar11 = (byte *)0x0;
  if (puVar29 == (undefined8 *)0x0) {
code_r0x0040c160:
    _ZNSt3__115recursive_mutex6unlockEv(uVar18);
    return pbVar11;
  }
  uVar22 = puVar29[1];
  if (uVar22 == uVar19) {
    if (*(uint *)(puVar29 + 2) == uVar6) {
      pbVar11 = (byte *)puVar29[3];
      goto code_r0x0040c160;
    }
  }
  else {
    if ((uRam0000000000a00860 & uVar20) == 0) {
      uVar22 = uVar22 & uVar20;
    }
    else if (uRam0000000000a00860 <= uVar22) {
      if ((uVar22 | uRam0000000000a00860) >> 0x20 == 0) {
        uVar22 = (uVar22 & 0xffffffff) % (uRam0000000000a00860 & 0xffffffff);
      }
      else {
        uVar22 = uVar22 % uRam0000000000a00860;
      }
    }
    pbVar11 = (byte *)0x0;
    if (uVar22 != uVar10) goto code_r0x0040c160;
  }
  puVar29 = (undefined8 *)*puVar29;
  goto code_r0x0040c109;
}


