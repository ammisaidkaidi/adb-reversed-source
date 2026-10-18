// Function: _Z16connect_emulatori
// Address: 0040b000
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


byte * _Z16connect_emulatori(uint param_1)

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
  undefined8 extraout_RDX;
  ulong uVar20;
  undefined1 *puVar21;
  ulong uVar22;
  int iVar23;
  undefined4 uVar24;
  ulong *puVar25;
  ulong *puVar26;
  undefined4 **ppuVar27;
  undefined *puVar28;
  byte *pbVar29;
  undefined8 *puVar30;
  byte *unaff_R12;
  byte *pbVar31;
  long in_FS_OFFSET;
  bool bVar32;
  undefined1 auVar33 [16];
  undefined4 **ppuStack_298;
  undefined4 *puStack_278;
  undefined4 *puStack_270;
  undefined4 *puStack_268;
  ulong uStack_260;
  undefined8 uStack_258;
  undefined1 *puStack_250;
  int iStack_248;
  int iStack_244;
  undefined1 auStack_240 [5];
  byte abStack_23b [3];
  undefined4 *puStack_238;
  undefined4 *puStack_230;
  undefined1 auStack_220 [16];
  undefined4 *puStack_210;
  undefined4 uStack_208;
  int iStack_204;
  undefined1 auStack_200 [16];
  undefined1 *puStack_1f0;
  byte abStack_1e0 [32];
  byte *pbStack_1c0;
  byte *pbStack_1b0;
  byte *pbStack_1a8;
  byte *pbStack_1a0;
  byte *pbStack_198;
  long *plStack_190;
  undefined4 *puStack_188;
  undefined *puStack_180;
  undefined4 *puStack_178;
  byte *pbStack_170;
  long *plStack_168;
  byte *pbStack_160;
  uint *puStack_158;
  byte *pbStack_150;
  ulong uStack_148;
  ulong uStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_120;
  uint uStack_114;
  ulong uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  uint uStack_ec;
  undefined1 auStack_e8 [8];
  undefined8 uStack_e0;
  ulong uStack_d8;
  byte *pbStack_d0;
  undefined *apuStack_c0 [4];
  undefined **ppuStack_a0;
  long lStack_90;
  ulong uStack_88;
  undefined *puStack_60;
  ulong auStack_58 [4];
  long lStack_38;
  
  puVar25 = (ulong *)(ulong)param_1;
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  puStack_60 = &UNK_0040b026;
  lVar8 = _Z19fdevent_get_ambientv();
  if (*(char *)(lVar8 + 0x10) == '\x01') {
    puStack_60 = &UNK_0040b031;
    lVar8 = _Z19fdevent_get_ambientv();
    puStack_60 = &UNK_0040b039;
    lVar9 = _ZN7android4base11GetThreadIdEv();
    if (*(long *)(lVar8 + 8) == lVar9) {
      do {
        puStack_60 = &UNK_0040b0e2;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (auStack_58,&UNK_0015b284,0x4f,6,0,0xffffffff);
        puStack_60 = &UNK_0040b0ea;
        uVar18 = _ZN7android4base10LogMessage6streamEv(auStack_58);
        puStack_60 = &UNK_0040b0fe;
        uVar18 = func_0x0032eb30(uVar18,&UNK_00165d45,0xe);
        puStack_60 = &UNK_0040b112;
        uVar18 = func_0x0032eb30(uVar18,&UNK_00162e7f,0x29);
        puStack_60 = &UNK_0040b122;
        uVar18 = func_0x0032eb30(uVar18,&UNK_0015ae05,1);
        puStack_60 = &UNK_0040b136;
        uVar18 = func_0x0032eb30(uVar18,&UNK_0016e934,2);
        puStack_60 = &UNK_0040b146;
        uVar18 = func_0x0032eb30(uVar18,&UNK_0015ae05,1);
        puStack_60 = &UNK_0040b15a;
        uVar18 = func_0x0032eb30(uVar18,&UNK_00183451,0x1c);
        puStack_60 = &UNK_0040b16e;
        uVar18 = func_0x0032eb30(uVar18,&UNK_0017ed76,0x2c);
        puStack_60 = &UNK_0040b179;
        uVar18 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar18,lVar9);
        puStack_60 = &UNK_0040b189;
        uVar18 = func_0x0032eb30(uVar18,&UNK_00165f20,0x1f);
        puStack_60 = &UNK_0040b194;
        uVar18 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar18,lVar9);
        puStack_60 = &UNK_0040b1a4;
        func_0x0032eb30(uVar18,&UNK_0017b788,2);
        puStack_60 = &UNK_0040b1ac;
        _ZN7android4base10LogMessageD2Ev(auStack_58);
      } while( true );
    }
  }
  param_1 = param_1 - 1;
  auStack_58[0] = 0;
  auStack_58[1] = 0;
  auStack_58[2] = 0;
  puStack_60 = &UNK_0040b05e;
  uVar6 = _Z32connect_emulator_arbitrary_portsiiPNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE
                    (param_1,puVar25,auStack_58);
  if ((auStack_58[0] & 1) != 0) {
    puVar25 = (ulong *)(auStack_58[0] & 0xfffffffffffffffe);
    puStack_60 = &UNK_0040b077;
    uVar20 = auStack_58[2];
    _ZdaPvSt11align_val_t();
    param_1 = (uint)uVar20;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return (byte *)(ulong)(uVar6 == 0);
  }
  puStack_60 = &UNK_0040b1b6;
  func_0x0099bd00();
  puVar14 = (uint *)((ulong)puVar25 & 0xffffffff);
  uVar20 = (ulong)param_1;
  lStack_90 = *(long *)(in_FS_OFFSET + 0x28);
  puStack_138 = &UNK_0040b1f2;
  puVar26 = puVar25;
  uStack_120 = extraout_RDX;
  uStack_88 = (ulong)uVar6;
  puStack_60 = &stack0xfffffffffffffff8;
  lVar8 = _Z19fdevent_get_ambientv();
  if (*(char *)(lVar8 + 0x10) == '\x01') {
    puStack_138 = &UNK_0040b1fd;
    lVar8 = _Z19fdevent_get_ambientv();
    puStack_138 = &UNK_0040b205;
    lVar9 = _ZN7android4base11GetThreadIdEv();
    if (*(long *)(lVar8 + 8) == lVar9) {
      do {
        puStack_138 = &UNK_0040b592;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (&uStack_e0,&UNK_0015b284,0x98,6,0,0xffffffff);
        puStack_138 = &UNK_0040b59a;
        uVar18 = _ZN7android4base10LogMessage6streamEv(&uStack_e0);
        puStack_138 = &UNK_0040b5ae;
        uVar18 = func_0x0032eb30(uVar18,&UNK_00165d45,0xe);
        puStack_138 = &UNK_0040b5c2;
        uVar18 = func_0x0032eb30(uVar18,&UNK_00162e7f,0x29);
        puStack_138 = &UNK_0040b5d2;
        uVar18 = func_0x0032eb30(uVar18,&UNK_0015ae05,1);
        puStack_138 = &UNK_0040b5e6;
        uVar18 = func_0x0032eb30(uVar18,&UNK_0016e934,2);
        puStack_138 = &UNK_0040b5f6;
        uVar18 = func_0x0032eb30(uVar18,&UNK_0015ae05,1);
        puStack_138 = &UNK_0040b60a;
        uVar18 = func_0x0032eb30(uVar18,&UNK_00183451,0x1c);
        puStack_138 = &UNK_0040b61e;
        uVar18 = func_0x0032eb30(uVar18,&UNK_0017ed76,0x2c);
        puStack_138 = &UNK_0040b629;
        uVar18 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar18,lVar9);
        puStack_138 = &UNK_0040b639;
        uVar18 = func_0x0032eb30(uVar18,&UNK_00165f20,0x1f);
        puStack_138 = &UNK_0040b644;
        uVar18 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar18,lVar9);
        puStack_138 = &UNK_0040b654;
        func_0x0032eb30(uVar18,&UNK_0017b788,2);
        puStack_138 = &UNK_0040b65c;
        _ZN7android4base10LogMessageD2Ev(&uStack_e0);
      } while( true );
    }
  }
  pbVar11 = (byte *)((ulong)puVar25 & 0xffffffff);
  puStack_138 = &UNK_0040b216;
  lVar8 = _Z35find_emulator_transport_by_adb_porti();
  pbVar31 = (byte *)0xffffffff;
  if (lVar8 == 0) {
    puVar26 = (ulong *)&UNK_001862a3;
    puStack_138 = &UNK_0040b23a;
    _ZN7android4base12StringPrintfEPKcz(&uStack_e0,&UNK_001862a3,uVar20);
    pbVar11 = pbStack_d0;
    if ((uStack_e0 & 1) == 0) {
      pbVar11 = (byte *)((long)&uStack_e0 + 1);
    }
    puStack_138 = &UNK_0040b24f;
    lVar8 = _Z14find_transportPKc();
    if ((uStack_e0 & 1) != 0) {
      puVar26 = (ulong *)(uStack_e0 & 0xfffffffffffffffe);
      puStack_138 = &UNK_0040b269;
      pbVar11 = pbStack_d0;
      _ZdaPvSt11align_val_t();
    }
    if (lVar8 != 0) goto code_r0x0040b504;
    puStack_138 = &UNK_0040b27e;
    unaff_R12 = (byte *)func_0x0099be70(&UNK_0016b055);
    if (unaff_R12 == (byte *)0x0) {
code_r0x0040b343:
      pbVar11 = (byte *)((ulong)puVar25 & 0xffffffff);
      puVar26 = (ulong *)0x1;
      puStack_138 = &UNK_0040b356;
      uVar7 = _Z23network_loopback_clientiiPNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE
                        (pbVar11,1,uStack_120);
      unaff_R12 = (byte *)(ulong)uVar7;
      puStack_138 = &UNK_0040b35e;
      puVar12 = (uint *)func_0x0099bce0();
      uVar6 = *puVar12;
      uVar19 = (ulong)uVar6;
      if ((int)pbVar31 != -1) {
        puStack_138 = &UNK_0040b375;
        func_0x0099bd10();
        pbVar11 = pbVar31;
      }
      *puVar12 = uVar6;
      if (-1 < (int)uVar7) {
code_r0x0040b387:
        if ((((byte)adb_trace_mask & 8) != 0) && ((int)adb_trace_severity._12_4_ < 2)) {
          puStack_138 = &UNK_0040b66d;
          cVar5 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
          if (cVar5 != '\0') {
            uStack_114 = (uint)uVar20;
            puStack_138 = &UNK_0040b681;
            puVar15 = (undefined4 *)func_0x0099bce0();
            uStack_120 = CONCAT44(uStack_120._4_4_,*puVar15);
            puStack_138 = &UNK_0040b6b5;
            _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                      (auStack_e8,&UNK_0015b284,0xab,1,0,0xffffffff);
            puStack_138 = &UNK_0040b6bd;
            uVar18 = _ZN7android4base10LogMessage6streamEv(auStack_e8);
            puStack_138 = &UNK_0040b6d8;
            _ZN7android4base12StringPrintfEPKcz(&uStack_e0,&UNK_00162fa2,unaff_R12);
            puStack_138 = &UNK_0040b6e3;
            func_0x0032e5a0(uVar18,&uStack_e0);
            if ((uStack_e0 & 1) != 0) {
              puStack_138 = &UNK_0040b6fa;
              _ZdaPvSt11align_val_t(pbStack_d0,uStack_e0 & 0xfffffffffffffffe);
            }
            puStack_138 = &UNK_0040b706;
            _ZN7android4base10LogMessageD2Ev(auStack_e8);
            *puVar15 = (undefined4)uStack_120;
            uVar20 = (ulong)uStack_114;
          }
        }
        puStack_138 = &UNK_0040b3b3;
        uVar6 = func_0x0099bf10(unaff_R12,1);
        if ((uVar6 & 0x80000001) == 0) {
          puStack_138 = &UNK_0040b3ce;
          func_0x0099bf10(unaff_R12,2,uVar6 | 1);
        }
        uStack_e0 = CONCAT44(uStack_e0._4_4_,1);
        puStack_138 = &UNK_0040b3f1;
        func_0x0099bf50(unaff_R12,6,1,&uStack_e0,4);
        uStack_e0 = 0;
        uStack_d8 = 0;
        pbStack_d0 = (byte *)0x0;
        puStack_138 = &UNK_0040b415;
        _ZN7android4base12StringPrintfEPKcz(&uStack_e0,&UNK_001862a3,uVar20);
        puStack_138 = &UNK_0040b41a;
        puVar12 = (uint *)func_0x0099bce0();
        uStack_110 = uStack_e0;
        uStack_108 = uStack_d8;
        uStack_100 = pbStack_d0;
        uStack_e0 = 0;
        uStack_d8 = 0;
        pbStack_d0 = (byte *)0x0;
        apuStack_c0[0] = &UNK_0099f2c0;
        uStack_130 = 0;
        puVar26 = &uStack_110;
        puStack_138 = &UNK_0040b484;
        uStack_ec = (uint)unaff_R12;
        ppuStack_a0 = apuStack_c0;
        uVar6 = _Z25register_socket_transportN7android4base14unique_fd_implINS0_13DefaultCloserEEENSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEibNS4_8functionIF15ReconnectResultP10atransportEEEbPi
                          (&uStack_ec,puVar26,(ulong)puVar25 & 0xffffffff,1,apuStack_c0,0);
        puVar14 = (uint *)(ulong)uVar6;
        if (ppuStack_a0 == apuStack_c0) {
          lVar8 = 0x20;
code_r0x0040b4a0:
          puStack_138 = &UNK_0040b4a6;
          (**(code **)(*ppuStack_a0 + lVar8))();
        }
        else {
          lVar8 = 0x28;
          if (ppuStack_a0 != (undefined **)0x0) goto code_r0x0040b4a0;
        }
        if ((uStack_110 & 1) != 0) {
          puVar26 = (ulong *)(uStack_110 & 0xfffffffffffffffe);
          puStack_138 = &UNK_0040b4c6;
          _ZdaPvSt11align_val_t(uStack_100);
        }
        uVar7 = *puVar12;
        uVar20 = (ulong)uVar7;
        pbVar11 = (byte *)(ulong)uStack_ec;
        if (uStack_ec != 0xffffffff) {
          puStack_138 = &UNK_0040b4d9;
          func_0x0099bd10();
        }
        uStack_ec = 0xffffffff;
        *puVar12 = uVar7;
        if ((uStack_e0 & 1) != 0) {
          puVar26 = (ulong *)(uStack_e0 & 0xfffffffffffffffe);
          puStack_138 = &UNK_0040b4fd;
          pbVar11 = pbStack_d0;
          _ZdaPvSt11align_val_t();
        }
        pbVar31 = (byte *)(ulong)((uVar6 & 0xff) - 1);
        goto code_r0x0040b504;
      }
      pbVar31 = (byte *)0xffffffff;
      if (uVar7 != 0xffffffff) {
        pbVar11 = (byte *)(ulong)uVar7;
        puStack_138 = &UNK_0040b54e;
        func_0x0099bd10();
        puVar14 = puVar12;
      }
      goto code_r0x0040b50c;
    }
    puStack_138 = &UNK_0040b292;
    pbVar11 = unaff_R12;
    uVar10 = func_0x0099bcf0();
    uVar19 = 0;
    if (uVar10 < 0xfffffffffffffff7) {
      if (uVar10 < 0x17) {
        uStack_e0 = CONCAT71(uStack_e0._1_7_,(char)uVar10 * '\x02');
        pbVar11 = (byte *)((long)&uStack_e0 + 1);
      }
      else {
        lVar8 = 0x1a;
        if ((uVar10 | 7) != 0x17) {
          lVar8 = (uVar10 | 7) + 1;
        }
        puStack_138 = &UNK_0040b2dc;
        uStack_114 = param_1;
        pbVar11 = (byte *)_Znwm(lVar8);
        uStack_e0 = lVar8 + 1;
        uVar20 = (ulong)uStack_114;
        uStack_d8 = uVar10;
        pbStack_d0 = pbVar11;
      }
      puStack_138 = &UNK_0040b303;
      func_0x0099bd90(pbVar11,unaff_R12,uVar10);
      pbVar11[uVar10] = 0;
      puStack_138 = &UNK_0040b321;
      uVar6 = _Z15network_connectRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiiiPS5_
                        (&uStack_e0,(ulong)puVar25 & 0xffffffff,1,0,uStack_120);
      unaff_R12 = (byte *)(ulong)uVar6;
      if ((uStack_e0 & 1) != 0) {
        puStack_138 = &UNK_0040b33b;
        _ZdaPvSt11align_val_t(pbStack_d0,uStack_e0 & 0xfffffffffffffffe);
      }
      pbVar31 = unaff_R12;
      if ((int)uVar6 < 0) goto code_r0x0040b343;
      goto code_r0x0040b387;
    }
  }
  else {
code_r0x0040b504:
    puStack_138 = &UNK_0040b509;
    puVar12 = (uint *)func_0x0099bce0();
    uVar19 = (ulong)*puVar12;
code_r0x0040b50c:
    *puVar12 = (uint)uVar19;
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_90) {
      return pbVar31;
    }
    puStack_138 = &UNK_0040b720;
    func_0x0099bd00();
  }
  puStack_138 = &UNK_0040b725;
  func_0x0032e8f0();
  pbStack_160 = *(byte **)(in_FS_OFFSET + 0x28);
  puStack_180 = &UNK_0040b75c;
  puStack_158 = puVar14;
  pbStack_150 = unaff_R12;
  uStack_148 = uVar19;
  uStack_140 = uVar20;
  puStack_138 = (undefined *)&puStack_60;
  plVar13 = (long *)_Znwm(0x18);
  uVar20 = *puVar26;
  *(undefined4 *)puVar26 = 0xffffffff;
  puStack_180 = &UNK_0040b76e;
  puVar14 = (uint *)func_0x0099bce0();
  plStack_168 = (long *)CONCAT44(plStack_168._4_4_,(int)uVar20);
  puStack_180 = &UNK_0040b781;
  _ZN12FdConnectionC1EN7android4base14unique_fd_implINS1_13DefaultCloserEEE(plVar13,&plStack_168);
  uVar6 = *puVar14;
  pbVar16 = (byte *)(ulong)uVar6;
  if ((int)plStack_168 != -1) {
    puStack_180 = &UNK_0040b791;
    func_0x0099bd10();
  }
  *puVar14 = uVar6;
  puStack_180 = &UNK_0040b79e;
  puVar15 = (undefined4 *)_Znwm(0xc0);
  puStack_180 = &UNK_0040b7b1;
  plStack_168 = plVar13;
  _ZN25BlockingConnectionAdapterC1ENSt3__110unique_ptrI18BlockingConnectionNS0_14default_deleteIS2_EEEE
            (puVar15,&plStack_168);
  plVar4 = plStack_168;
  plStack_168 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    puStack_180 = &UNK_0040b7c8;
    (**(code **)(*plVar4 + 8))();
  }
  puStack_180 = &UNK_0040b7d6;
  puStack_178 = puVar15;
  pbStack_170 = (byte *)_Znwm(0x20);
  pbStack_170[8] = 0;
  pbStack_170[9] = 0;
  pbStack_170[10] = 0;
  pbStack_170[0xb] = 0;
  pbStack_170[0xc] = 0;
  pbStack_170[0xd] = 0;
  pbStack_170[0xe] = 0;
  pbStack_170[0xf] = 0;
  pbStack_170[0x10] = 0;
  pbStack_170[0x11] = 0;
  pbStack_170[0x12] = 0;
  pbStack_170[0x13] = 0;
  pbStack_170[0x14] = 0;
  pbStack_170[0x15] = 0;
  pbStack_170[0x16] = 0;
  pbStack_170[0x17] = 0;
  pbStack_170[0] = 0x40;
  pbStack_170[1] = 0xf2;
  pbStack_170[2] = 0x99;
  pbStack_170[3] = 0;
  pbStack_170[4] = 0;
  pbStack_170[5] = 0;
  pbStack_170[6] = 0;
  pbStack_170[7] = 0;
  *(undefined4 **)(pbStack_170 + 0x18) = puVar15;
  ppuVar27 = &puStack_178;
  puStack_180 = &UNK_0040b7ff;
  _ZN10atransport13SetConnectionENSt3__110shared_ptrI10ConnectionEE();
  pbVar29 = pbStack_170;
  if (pbStack_170 != (byte *)0x0) {
    LOCK();
    pbVar1 = pbStack_170 + 8;
    lVar8 = *(long *)pbVar1;
    *(long *)pbVar1 = *(long *)pbVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      puStack_180 = &UNK_0040b823;
      (**(code **)(*(long *)pbStack_170 + 0x10))(pbStack_170);
      puStack_180 = &UNK_0040b82b;
      pbVar11 = pbVar29;
      _ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  if (*(byte **)(in_FS_OFFSET + 0x28) == pbStack_160) {
    return *(byte **)(in_FS_OFFSET + 0x28);
  }
  puStack_180 = &UNK_0040b84c;
  func_0x0099bd00();
  pbStack_1a8 = pbVar29;
  pbStack_1b0 = *(byte **)(in_FS_OFFSET + 0x28);
  pbVar29 = pbVar11;
  pbStack_1a0 = pbVar16;
  pbStack_198 = pbVar31;
  plStack_190 = plVar13;
  puStack_188 = puVar15;
  puStack_180 = (undefined *)&puStack_138;
  lVar8 = _Z19fdevent_get_ambientv();
  if (*(char *)(lVar8 + 0x10) == '\x01') {
    pbVar16 = (byte *)_Z19fdevent_get_ambientv();
    lVar8 = _ZN7android4base11GetThreadIdEv();
    if (*(long *)(pbVar16 + 8) == lVar8) {
      do {
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (auStack_200,&UNK_0015b284,0x5a,6,0,0xffffffff);
        uVar18 = _ZN7android4base10LogMessage6streamEv(auStack_200);
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
        _ZN7android4base10LogMessageD2Ev(auStack_200);
      } while( true );
    }
  }
  if ((*pbVar11 & 1) == 0) {
    if (*pbVar11 >> 1 == 0) goto code_r0x0040baa4;
  }
  else if (*(long *)(pbVar11 + 8) == 0) {
code_r0x0040baa4:
    if (((ulong)*ppuVar27 & 1) == 0) {
      *(byte *)ppuVar27 = 0x1a;
      puVar14 = (uint *)((long)ppuVar27 + 1);
    }
    else {
      ppuVar27[1] = (undefined4 *)0xd;
      puVar14 = ppuVar27[2];
    }
    pbVar31 = (byte *)((long)puVar14 + 5);
    pbVar31[0] = 0x20;
    pbVar31[1] = 0x61;
    pbVar31[2] = 100;
    pbVar31[3] = 100;
    pbVar31[4] = 0x72;
    pbVar31[5] = 0x65;
    pbVar31[6] = 0x73;
    pbVar31[7] = 0x73;
    puVar14[0] = 0x74706d65;
    puVar14[1] = 0x64612079;
    *(byte *)((long)puVar14 + 0xd) = 0;
    goto code_r0x0040be4d;
  }
  ppuStack_298 = ppuVar27;
  if ((((byte)adb_trace_mask & 8) != 0) && ((int)adb_trace_severity._12_4_ < 2)) {
    pbVar29 = (byte *)0x1;
    cVar5 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
    if (cVar5 != '\0') {
      puVar15 = (undefined4 *)func_0x0099bce0();
      uVar24 = *puVar15;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_220,&UNK_0015b284,0x60,1,0,0xffffffff);
      pbVar16 = (byte *)_ZN7android4base10LogMessage6streamEv(auStack_220);
      if ((*pbVar11 & 1) == 0) goto code_r0x0040c006;
      pbVar31 = *(byte **)(pbVar11 + 0x10);
      goto code_r0x0040c00a;
    }
  }
  do {
    uVar6 = (uint)pbVar29;
    iStack_204 = -1;
    uStack_208 = 0;
    auStack_200 = (undefined1  [16])0x0;
    puStack_1f0 = (undefined1 *)0x0;
    auStack_220 = (undefined1  [16])0x0;
    puStack_210 = (undefined4 *)0x0;
    bVar2 = *pbVar11;
    puVar15 = (undefined4 *)(ulong)(bVar2 >> 1);
    if ((bVar2 & 1) != 0) {
      puVar15 = *(undefined4 **)(pbVar11 + 8);
    }
    if (puVar15 < (undefined4 *)0x6) {
code_r0x0040b961:
      pbVar16 = *(byte **)(pbVar11 + 0x10);
code_r0x0040b97c:
      puStack_230 = (undefined4 *)0x0;
      uVar20 = 0;
      stack0xfffffffffffffdc1 = SUB1615((undefined1  [16])0x0,1);
      auStack_240[0] = ((char)puVar15 + '\x04') * '\x02';
code_r0x0040b986:
      pbVar11 = pbVar11 + 1;
      if ((bVar2 & 1) != 0) {
        pbVar11 = pbVar16;
      }
      pbVar31 = (byte *)(puStack_230 + 1);
      bVar32 = (uVar20 & 1) != 0;
      puVar17 = (undefined4 *)(auStack_240 + 1);
      if (bVar32) {
        puVar17 = puStack_230;
      }
      *puVar17 = 0x3a706374;
      pbVar16 = abStack_23b;
      if (bVar32) {
        pbVar16 = pbVar31;
      }
      func_0x0099bd90(pbVar16,pbVar11,puVar15);
      pbVar16[(long)puVar15] = 0;
      if ((auStack_220[0] & 1) != 0) {
        _ZdaPvSt11align_val_t(puStack_210,auStack_220._0_8_ & 0xfffffffffffffffe);
      }
      puStack_210 = puStack_230;
      auStack_220._0_8_ = _auStack_240;
      auStack_220._8_8_ = puStack_238;
code_r0x0040b9fd:
    }
    else {
      pbVar16 = *(byte **)(pbVar11 + 0x10);
      pbVar31 = pbVar16;
      if ((bVar2 & 1) == 0) {
        pbVar31 = pbVar11 + 1;
      }
      if (*(short *)(pbVar31 + 4) != 0x3a6b || *(int *)pbVar31 != 0x636f7376) {
        if (puVar15 < (undefined4 *)0x10) goto code_r0x0040b961;
        pbVar16 = *(byte **)(pbVar11 + 0x10);
        pbVar31 = pbVar11 + 1;
        if ((bVar2 & 1) != 0) {
          pbVar31 = pbVar16;
        }
        auVar33[0] = -(*pbVar31 == 0x6c);
        auVar33[1] = -(pbVar31[1] == 0x6f);
        auVar33[2] = -(pbVar31[2] == 99);
        auVar33[3] = -(pbVar31[3] == 0x61);
        auVar33[4] = -(pbVar31[4] == 0x6c);
        auVar33[5] = -(pbVar31[5] == 0x66);
        auVar33[6] = -(pbVar31[6] == 0x69);
        auVar33[7] = -(pbVar31[7] == 0x6c);
        auVar33[8] = -(pbVar31[8] == 0x65);
        auVar33[9] = -(pbVar31[9] == 0x73);
        auVar33[10] = -(pbVar31[10] == 0x79);
        auVar33[0xb] = -(pbVar31[0xb] == 0x73);
        auVar33[0xc] = -(pbVar31[0xc] == 0x74);
        auVar33[0xd] = -(pbVar31[0xd] == 0x65);
        auVar33[0xe] = -(pbVar31[0xe] == 0x6d);
        auVar33[0xf] = -(pbVar31[0xf] == 0x3a);
        if ((ushort)((ushort)(SUB161(auVar33 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar33 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar33 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar33 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar33 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar33 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar33 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar33 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar33 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar33 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar33 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar33 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar33 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar33 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar33 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar33[0xf] >> 7) << 0xf) == 0xffff) goto code_r0x0040bd39;
        _auStack_240 = (undefined1  [16])0x0;
        puStack_230 = (undefined4 *)0x0;
        puVar17 = puVar15 + 1;
        if (puVar17 < (undefined4 *)0xfffffffffffffff7) {
          if (puVar17 < (undefined4 *)0x17) goto code_r0x0040b97c;
          lVar8 = 0x1a;
          if (((ulong)puVar17 | 7) != 0x17) {
            lVar8 = ((ulong)puVar17 | 7) + 1;
          }
          puStack_230 = (undefined4 *)_Znwm();
          puStack_238 = puVar17;
          _auStack_240 = lVar8 + 1U;
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
        puVar30 = *(undefined8 **)(lRam0000000000a00858 + uVar10 * 8);
        if (puVar30 == (undefined8 *)0x0) {
          pbVar11 = (byte *)0x0;
          goto code_r0x0040c160;
        }
        puVar30 = (undefined8 *)*puVar30;
        break;
      }
code_r0x0040bd39:
      if (auStack_220 != pbVar11) {
        if ((bVar2 & 1) != 0) {
          func_0x0032e990(auStack_220,pbVar16);
          goto code_r0x0040ba05;
        }
        puStack_210 = *(undefined4 **)(pbVar11 + 0x10);
        auStack_220._0_8_ = *(undefined8 *)pbVar11;
        auStack_220._8_8_ = *(undefined8 *)(pbVar11 + 8);
        goto code_r0x0040b9fd;
      }
    }
code_r0x0040ba05:
    bVar32 = (auStack_220[0] & 1) != 0;
    puVar17 = (undefined4 *)(auStack_220 + 1);
    if (bVar32) {
      puVar17 = puStack_210;
    }
    uVar20 = (ulong)(auStack_220[0] >> 1);
    if (bVar32) {
      uVar20 = auStack_220._8_8_;
    }
    _Z19socket_spec_connectPN7android4base14unique_fd_implINS0_13DefaultCloserEEENSt3__117basic_string_viewIcNS5_11char_traitsIcEEEEPiPNS5_12basic_stringIcS8_NS5_9allocatorIcEEEESF_
              (&iStack_204,puVar17,uVar20,&uStack_208,auStack_200,ppuStack_298);
    if (iStack_204 != -1) {
      _auStack_240 = (undefined1  [16])0x0;
      puStack_230 = (undefined4 *)0x0;
      if ((auStack_220[0] & 1) == 0) {
        puStack_230 = puStack_210;
        _auStack_240 = auStack_220;
        iVar23 = iStack_204;
      }
      else {
        func_0x00330340(auStack_240,puStack_210,auStack_220._8_8_);
        iVar23 = iStack_204;
      }
      iStack_244 = 0;
      iStack_248 = -1;
      iStack_204 = -1;
      puVar17 = (undefined4 *)func_0x0099bce0();
      *puVar17 = *puVar17;
      iStack_248 = iVar23;
      if ((auStack_200[0] & 1) == 0) {
        puStack_250 = puStack_1f0;
        uStack_260 = auStack_200._0_8_;
        uStack_258 = auStack_200._8_8_;
      }
      else {
        func_0x00330340(&uStack_260,puStack_1f0,auStack_200._8_8_);
      }
      uVar24 = uStack_208;
      puVar3 = puStack_230;
      uVar18 = _auStack_240;
      puVar15 = puStack_238;
      _auStack_240 = ZEXT816(0);
      puStack_230 = (undefined4 *)0x0;
      lVar8 = 0x20;
      pbStack_1c0 = (byte *)_Znwm(0x20);
      *(undefined **)pbStack_1c0 = &UNK_0099f278;
      *(undefined8 *)(pbStack_1c0 + 8) = uVar18;
      *(undefined4 **)(pbStack_1c0 + 0x10) = puVar15;
      *(undefined4 **)(pbStack_1c0 + 0x18) = puVar3;
      pbVar16 = abStack_1e0;
      uVar6 = _Z25register_socket_transportN7android4base14unique_fd_implINS0_13DefaultCloserEEENSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEibNS4_8functionIF15ReconnectResultP10atransportEEEbPi
                        (&iStack_248,&uStack_260,uVar24,0,pbVar16,0,&iStack_244);
      puVar15 = (undefined4 *)(ulong)uVar6;
      if ((pbStack_1c0 == pbVar16) || (lVar8 = 0x28, pbStack_1c0 != (byte *)0x0)) {
        (**(code **)(*(long *)pbStack_1c0 + lVar8))();
      }
      if ((uStack_260 & 1) != 0) {
        _ZdaPvSt11align_val_t(puStack_250,uStack_260 & 0xfffffffffffffffe);
      }
      uVar24 = *puVar17;
      if (iStack_248 != -1) {
        func_0x0099bd10();
      }
      iStack_248 = -1;
      *puVar17 = uVar24;
      if ((char)uVar6 == '\0') {
        puVar21 = auStack_200 + 1;
        if (iStack_244 == 1) {
          if ((auStack_200[0] & 1) != 0) {
            puVar21 = puStack_1f0;
          }
          puVar28 = &UNK_0015b2d4;
        }
        else if (iStack_244 == 0x72) {
          if ((auStack_200[0] & 1) != 0) {
            puVar21 = puStack_1f0;
          }
          puVar28 = &UNK_0016b03d;
        }
        else {
          if ((auStack_200[0] & 1) != 0) {
            puVar21 = puStack_1f0;
          }
          puVar28 = &UNK_0017ef46;
        }
      }
      else {
        puVar21 = puStack_1f0;
        if ((auStack_200[0] & 1) == 0) {
          puVar21 = auStack_200 + 1;
        }
        puVar28 = &UNK_0017727e;
      }
      _ZN7android4base12StringPrintfEPKcz(&puStack_278,puVar28,puVar21);
      if (((ulong)*ppuStack_298 & 1) != 0) {
        _ZdaPvSt11align_val_t(ppuStack_298[2],(ulong)*ppuStack_298 & 0xfffffffffffffffe);
      }
      ppuStack_298[2] = puStack_268;
      *ppuStack_298 = puStack_278;
      ppuStack_298[1] = puStack_270;
      if ((auStack_240[0] & 1) != 0) {
        _ZdaPvSt11align_val_t(puStack_230,_auStack_240 & 0xfffffffffffffffe);
      }
    }
    if ((auStack_220[0] & 1) != 0) {
      _ZdaPvSt11align_val_t(puStack_210,auStack_220._0_8_ & 0xfffffffffffffffe);
    }
    if ((auStack_200[0] & 1) != 0) {
      _ZdaPvSt11align_val_t(puStack_1f0,auStack_200._0_8_ & 0xfffffffffffffffe);
    }
    puVar14 = (uint *)func_0x0099bce0();
    uVar6 = *puVar14;
    pbVar11 = (byte *)(ulong)uVar6;
    if (iStack_204 != -1) {
      func_0x0099bd10();
    }
    *puVar14 = uVar6;
code_r0x0040be4d:
    uVar24 = SUB84(puVar14,0);
    if (*(byte **)(in_FS_OFFSET + 0x28) == pbStack_1b0) {
      return *(byte **)(in_FS_OFFSET + 0x28);
    }
    func_0x0099bd00();
code_r0x0040c006:
    pbVar31 = pbVar11 + 1;
code_r0x0040c00a:
    _ZN7android4base12StringPrintfEPKcz(auStack_200,&UNK_0015b2b7,pbVar31);
    func_0x0032e5a0(pbVar16,auStack_200);
    if ((auStack_200[0] & 1) != 0) {
      _ZdaPvSt11align_val_t(puStack_1f0,auStack_200._0_8_ & 0xfffffffffffffffe);
    }
    pbVar29 = auStack_220;
    _ZN7android4base10LogMessageD2Ev();
    *puVar15 = uVar24;
  } while( true );
code_r0x0040c109:
  pbVar11 = (byte *)0x0;
  if (puVar30 == (undefined8 *)0x0) {
code_r0x0040c160:
    _ZNSt3__115recursive_mutex6unlockEv(uVar18);
    return pbVar11;
  }
  uVar22 = puVar30[1];
  if (uVar22 == uVar19) {
    if (*(uint *)(puVar30 + 2) == uVar6) {
      pbVar11 = (byte *)puVar30[3];
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
  puVar30 = (undefined8 *)*puVar30;
  goto code_r0x0040c109;
}


