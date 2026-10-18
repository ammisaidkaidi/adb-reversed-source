// Function: _Z23adb_tls_set_certificateP6ssl_st
// Address: 003f9ca0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Type propagation algorithm not settling */

ulong _Z23adb_tls_set_certificateP6ssl_st(uint *******param_1)

{
  uint *******pppppppuVar1;
  uint ****ppppuVar2;
  uint uVar3;
  undefined4 uVar4;
  code *pcVar5;
  long lVar6;
  long *plVar7;
  char cVar8;
  int iVar9;
  uint *******pppppppuVar10;
  uint *******pppppppuVar11;
  undefined8 uVar12;
  uint ******ppppppuVar13;
  long lVar14;
  undefined8 uVar15;
  long *plVar16;
  long *plVar17;
  ulong uVar18;
  uint *****pppppuVar19;
  uint *******pppppppuVar20;
  uint *******unaff_RBX;
  uint *****pppppuVar21;
  uint *****pppppuVar22;
  uint *******pppppppuVar23;
  uint *******unaff_R13;
  ulong uVar24;
  uint *****pppppuVar25;
  undefined1 *puVar26;
  uint ******ppppppuVar27;
  undefined4 *puVar28;
  uint *******pppppppuVar29;
  long in_FS_OFFSET;
  bool bVar30;
  long lStack_390;
  long *plStack_388;
  long lStack_380;
  long *plStack_378;
  long lStack_370;
  uint *******pppppppuStack_368;
  uint *******pppppppuStack_360;
  uint *******pppppppuStack_358;
  undefined4 *puStack_350;
  uint *******pppppppuStack_348;
  undefined *puStack_340;
  undefined8 uStack_338;
  uint uStack_324;
  undefined4 *puStack_320;
  undefined4 uStack_314;
  undefined1 auStack_310 [8];
  undefined8 uStack_308;
  ulong uStack_300;
  long lStack_2f8;
  uint ******appppppuStack_2e8 [34];
  ulong uStack_1d8;
  uint *******pppppppuStack_1d0;
  uint *******pppppppuStack_1c8;
  uint *******pppppppuStack_1c0;
  uint *******pppppppuStack_1b8;
  uint *******pppppppuStack_1b0;
  undefined *apuStack_1a8 [2];
  uint *******pppppppuStack_198;
  uint *******pppppppuStack_190;
  uint *******pppppppuStack_188;
  undefined4 uStack_17c;
  uint ******appppppuStack_178 [2];
  undefined8 uStack_168;
  undefined1 auStack_160 [8];
  uint *******pppppppuStack_158;
  uint *******pppppppuStack_150;
  uint *******pppppppuStack_140;
  uint *******pppppppuStack_138;
  undefined1 uStack_129;
  uint *******pppppppuStack_128;
  long lStack_120;
  uint *******pppppppuStack_118;
  uint *******pppppppuStack_110;
  uint *******pppppppuStack_108;
  uint *******pppppppuStack_100;
  undefined4 *puStack_f8;
  undefined *puStack_f0;
  uint *******pppppppuStack_e8;
  uint *******pppppppuStack_e0;
  uint *******pppppppuStack_d8;
  undefined4 *puStack_d0;
  uint *******pppppppuStack_c8;
  uint ******ppppppuStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_98;
  ulong uStack_90;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [8];
  uint *****pppppuStack_70;
  uint *******pppppppuStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  ulong uStack_50;
  uint *******pppppppuStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  if (((adb_trace_mask._1_1_ & 4) != 0) && ((int)adb_trace_severity._40_4_ < 2)) {
    puStack_f0 = &UNK_003fa317;
    cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
    if (cVar8 != '\0') {
      puStack_f0 = &UNK_003fa324;
      unaff_RBX = (uint *******)func_0x0099bce0();
      uVar3 = *(uint *)unaff_RBX;
      puStack_f0 = &UNK_003fa350;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_58,&UNK_001706c4,0x203,1,0,0xffffffff);
      puStack_f0 = &UNK_003fa358;
      uVar12 = _ZN7android4base10LogMessage6streamEv(auStack_58);
      puStack_f0 = &UNK_003fa36c;
      func_0x0032eb30(uVar12,&UNK_00164516,0x17);
      puStack_f0 = &UNK_003fa37b;
      _ZN7android4base10LogMessageD2Ev(auStack_58);
      *(uint *)unaff_RBX = uVar3;
    }
  }
  puVar28 = &adb_trace_mask;
  puVar26 = adb_trace_severity;
  puStack_f0 = &UNK_003f9cec;
  pppppppuVar29 = param_1;
  pppppppuVar10 = (uint *******)SSL_get_client_CA_list();
  if (pppppppuVar10 == (uint *******)0x0) {
    if (((adb_trace_mask._1_1_ & 4) != 0) && ((int)adb_trace_severity._40_4_ < 2)) {
      pppppppuVar29 = (uint *******)0x1;
      puStack_f0 = &UNK_003fa396;
      cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
      if (cVar8 != '\0') {
        puStack_f0 = &UNK_003fa3a3;
        unaff_RBX = (uint *******)func_0x0099bce0();
        uVar3 = *(uint *)unaff_RBX;
        puVar28 = (undefined4 *)(ulong)uVar3;
        puVar26 = auStack_58;
        puStack_f0 = &UNK_003fa3cf;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (puVar26,&UNK_001706c4,0x209,1,0,0xffffffff);
        puStack_f0 = &UNK_003fa3d7;
        uVar12 = _ZN7android4base10LogMessage6streamEv(puVar26);
        puStack_f0 = &UNK_003fa3eb;
        func_0x0032eb30(uVar12,&UNK_0018ae20,0x33);
        puStack_f0 = &UNK_003fa3f3;
        pppppppuVar29 = (uint *******)puVar26;
        _ZN7android4base10LogMessageD2Ev();
        *(uint *)unaff_RBX = uVar3;
      }
    }
  }
  else {
    puStack_f0 = &UNK_003f9d07;
    pppppppuVar29 = pppppppuVar10;
    pppppppuStack_d8 = param_1;
    pppppppuVar11 = (uint *******)OPENSSL_sk_num();
    unaff_RBX = pppppppuVar10;
    if (pppppppuVar11 != (uint *******)0x0) {
      param_1 = (uint *******)0x0;
      unaff_R13 = pppppppuVar11;
      pppppppuStack_e8 = pppppppuVar11;
      pppppppuStack_c8 = pppppppuVar10;
      do {
        puStack_f0 = &UNK_003f9d58;
        uVar12 = OPENSSL_sk_value(unaff_RBX,param_1);
        pppppppuStack_48 = (uint *******)0x0;
        uStack_40 = 0;
        auStack_58 = (undefined1  [8])0x0;
        uStack_50 = 0;
        pppppppuVar29 = (uint *******)auStack_58;
        puStack_f0 = &UNK_003f9d6f;
        _ZN3adb3tls27ParseEncodedKeyFromCAIssuerEP12X509_name_st(pppppppuVar29,uVar12);
        if ((char)uStack_40 != '\0') {
          if (((adb_trace_mask._1_1_ & 4) != 0) && ((int)adb_trace_severity._40_4_ < 2)) {
            puStack_f0 = &UNK_003fa156;
            cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
            if (cVar8 != '\0') {
              puStack_f0 = &UNK_003fa163;
              puVar28 = (undefined4 *)func_0x0099bce0();
              uVar4 = *puVar28;
              puStack_f0 = &UNK_003fa18f;
              _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                        (auStack_78,&UNK_001706c4,0x217,1,0,0xffffffff);
              puStack_f0 = &UNK_003fa197;
              uVar12 = _ZN7android4base10LogMessage6streamEv(auStack_78);
              puStack_f0 = &UNK_003fa1ab;
              uVar12 = func_0x0032eb30(uVar12,&UNK_0017239b,0x20);
              puStack_f0 = &UNK_003fa1b7;
              uVar12 = func_0x0032e5a0(uVar12,auStack_58);
              puStack_f0 = &UNK_003fa1cb;
              func_0x0032eb30(uVar12,&UNK_00178ae2,1);
              puStack_f0 = &UNK_003fa1d3;
              _ZN7android4base10LogMessageD2Ev(auStack_78);
              *puVar28 = uVar4;
              unaff_RBX = pppppppuStack_c8;
            }
          }
          pppppppuStack_68 = (uint *******)0x0;
          uStack_60 = 0;
          bVar30 = ((ulong)auStack_58 & 1) == 0;
          pppppppuVar10 = pppppppuStack_48;
          if (bVar30) {
            pppppppuVar10 = (uint *******)(auStack_58 + 1);
          }
          auStack_78 = (undefined1  [8])0x0;
          pppppuStack_70 = (uint *****)0x0;
          uVar18 = (ulong)auStack_58 >> 1 & 0x7f;
          if (!bVar30) {
            uVar18 = uStack_50;
          }
          pppppppuVar29 = (uint *******)auStack_78;
          puStack_f0 = &UNK_003f9db6;
          _ZN3adb3tls21SHA256HexStringToBitsENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEE
                    (pppppppuVar29,pppppppuVar10,uVar18);
          bVar30 = false;
          if ((char)uStack_60 == '\x01') {
            pppppppuStack_e0 = pppppppuRam0000000000a00738;
            puStack_f0 = &UNK_003f9dd9;
            _ZNSt3__15mutex4lockEv();
            ppppppuStack_c0 = ppppppuRam0000000000a00740;
            ppppppuVar27 = (uint ******)ppppppuRam0000000000a00740[1];
            if (ppppppuVar27 != (uint ******)0x0) {
              ppppppuStack_c0 = ppppppuRam0000000000a00740 + 1;
              pppppuVar25 = (uint *****)((ulong)auStack_78 >> 1 & 0x7f);
              pppppppuVar29 = (uint *******)(auStack_78 + 1);
              if (((ulong)auStack_78 & 1) != 0) {
                pppppppuVar29 = pppppppuStack_68;
                pppppuVar25 = pppppuStack_70;
              }
              do {
                while( true ) {
                  bVar30 = (*(byte *)(ppppppuVar27 + 4) & 1) != 0;
                  pppppuVar22 = (uint *****)((long)ppppppuVar27 + 0x21);
                  if (bVar30) {
                    pppppuVar22 = ppppppuVar27[6];
                  }
                  pppppuVar21 = (uint *****)(ulong)(*(byte *)(ppppppuVar27 + 4) >> 1);
                  if (bVar30) {
                    pppppuVar21 = ppppppuVar27[5];
                  }
                  pppppuVar19 = pppppuVar25;
                  if (pppppuVar21 < pppppuVar25) {
                    pppppuVar19 = pppppuVar21;
                  }
                  puStack_f0 = &UNK_003f9e57;
                  iVar9 = func_0x0099c3a0(pppppppuVar29,pppppuVar22,pppppuVar19);
                  if (iVar9 != 0) break;
                  if (pppppuVar25 == pppppuVar21) {
                    if (ppppppuVar27 != ppppppuStack_c0) {
                      if (((adb_trace_mask._1_1_ & 4) != 0) && ((int)adb_trace_severity._40_4_ < 2))
                      {
                        puStack_f0 = &UNK_003fa1f5;
                        cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
                        if (cVar8 != '\0') {
                          puStack_f0 = &UNK_003fa202;
                          puVar28 = (undefined4 *)func_0x0099bce0();
                          ppppppuStack_c0 = (uint ******)CONCAT44(ppppppuStack_c0._4_4_,*puVar28);
                          puStack_f0 = &UNK_003fa236;
                          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                                    (&uStack_98,&UNK_001706c4,0x220,1,0,0xffffffff);
                          puStack_f0 = &UNK_003fa23e;
                          uVar12 = _ZN7android4base10LogMessage6streamEv(&uStack_98);
                          puStack_f0 = &UNK_003fa252;
                          func_0x0032eb30(uVar12,&UNK_0018353b,0x19);
                          puStack_f0 = &UNK_003fa25a;
                          _ZN7android4base10LogMessageD2Ev(&uStack_98);
                          *puVar28 = ppppppuStack_c0._0_4_;
                        }
                      }
                      puStack_f0 = &UNK_003f9ea6;
                      ppppppuVar13 = (uint ******)EVP_PKEY_new();
                      puStack_f0 = &UNK_003f9eb5;
                      iVar9 = EVP_PKEY_set1_RSA(ppppppuVar13,ppppppuVar27[7]);
                      if (iVar9 == 0) {
                        puStack_f0 = &UNK_003fa292;
                        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                                  (&uStack_98,&UNK_001706c4,0x222,6,0,0xffffffff);
                        puStack_f0 = &UNK_003fa29a;
                        uVar12 = _ZN7android4base10LogMessage6streamEv(&uStack_98);
                        puStack_f0 = &UNK_003fa2ae;
                        uVar12 = func_0x0032eb30(uVar12,&UNK_001771be,0x4b);
                        puStack_f0 = &UNK_003fa2c2;
                        func_0x0032eb30(uVar12,&UNK_0015ae05,1);
                        puStack_f0 = &UNK_003fa2ca;
                        _ZN7android4base10LogMessageD2Ev(&uStack_98);
                      }
                      lStack_80 = 0;
                      puStack_f0 = &UNK_003f9ed1;
                      _ZN3adb6crypto23GenerateX509CertificateEP11evp_pkey_st
                                (&lStack_80,ppppppuVar13);
                      uStack_98 = 0;
                      uStack_90 = 0;
                      lStack_88 = 0;
                      puStack_f0 = &UNK_003f9ef3;
                      _ZN3adb6crypto15X509ToPEMStringEP7x509_st(&uStack_98,lStack_80);
                      uStack_b8 = 0;
                      uStack_b0 = 0;
                      lStack_a8 = 0;
                      puStack_f0 = &UNK_003f9f17;
                      _ZN3adb6crypto3Key11ToPEMStringEP11evp_pkey_st(&uStack_b8,ppppppuVar13);
                      uVar18 = uStack_98 >> 1 & 0x7f;
                      lVar14 = (long)&uStack_98 + 1;
                      if ((uStack_98 & 1) != 0) {
                        uVar18 = uStack_90;
                        lVar14 = lStack_88;
                      }
                      lVar6 = (long)&uStack_b8 + 1;
                      if ((uStack_b8 & 1) != 0) {
                        lVar6 = lStack_a8;
                      }
                      puStack_f0 = &UNK_003f9f70;
                      _ZN3adb3tls13TlsConnection13SetCertAndKeyEP6ssl_stNSt3__117basic_string_viewIcNS4_11char_traitsIcEEEES8_
                                (pppppppuStack_d8,lVar14,uVar18,lVar6);
                      if ((uStack_b8 & 1) != 0) {
                        puStack_f0 = &UNK_003f9f97;
                        _ZdaPvSt11align_val_t(lStack_a8,uStack_b8 & 0xfffffffffffffffe);
                      }
                      unaff_RBX = pppppppuStack_c8;
                      if ((uStack_98 & 1) != 0) {
                        puStack_f0 = &UNK_003f9fbb;
                        _ZdaPvSt11align_val_t(lStack_88,uStack_98 & 0xfffffffffffffffe);
                      }
                      lVar14 = lStack_80;
                      lStack_80 = 0;
                      ppppppuStack_c0 = ppppppuVar13;
                      if (lVar14 != 0) {
                        puStack_f0 = &UNK_003f9fd8;
                        X509_free();
                      }
                      bVar30 = true;
                      if (ppppppuStack_c0 != (uint ******)0x0) {
                        puStack_f0 = &UNK_003f9ff3;
                        EVP_PKEY_free();
                      }
                      goto code_r0x003fa0e8;
                    }
                    goto code_r0x003fa000;
                  }
                  if (pppppuVar25 < pppppuVar21) goto code_r0x003f9e20;
code_r0x003f9e67:
                  ppppppuVar27 = (uint ******)ppppppuVar27[1];
                  if (ppppppuVar27 == (uint ******)0x0) goto code_r0x003fa000;
                }
                if (-1 < iVar9) goto code_r0x003f9e67;
code_r0x003f9e20:
                ppppppuVar27 = (uint ******)*ppppppuVar27;
              } while (ppppppuVar27 != (uint ******)0x0);
            }
code_r0x003fa000:
            unaff_RBX = pppppppuStack_c8;
            bVar30 = false;
            if ((adb_trace_mask._1_1_ & 4) == 0) {
code_r0x003fa0e1:
              bVar30 = false;
              unaff_RBX = pppppppuStack_c8;
            }
            else if ((int)adb_trace_severity._40_4_ < 2) {
              bVar30 = false;
              puStack_f0 = &UNK_003fa03d;
              cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
              if (cVar8 != '\0') {
                puStack_f0 = &UNK_003fa04a;
                puStack_d0 = (undefined4 *)func_0x0099bce0();
                ppppppuStack_c0 = (uint ******)CONCAT44(ppppppuStack_c0._4_4_,*puStack_d0);
                puStack_f0 = &UNK_003fa085;
                _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                          (&uStack_98,&UNK_001706c4,0x229,1,0,0xffffffff);
                puStack_f0 = &UNK_003fa08d;
                uVar12 = _ZN7android4base10LogMessage6streamEv(&uStack_98);
                puStack_f0 = &UNK_003fa0a1;
                uVar12 = func_0x0032eb30(uVar12,&UNK_0018ae54,0xe);
                puStack_f0 = &UNK_003fa0ad;
                uVar12 = func_0x0032e5a0(uVar12,auStack_58);
                puStack_f0 = &UNK_003fa0c1;
                func_0x0032eb30(uVar12,&UNK_00178ae2,1);
                puStack_f0 = &UNK_003fa0c9;
                _ZN7android4base10LogMessageD2Ev(&uStack_98);
                *puStack_d0 = ppppppuStack_c0._0_4_;
                goto code_r0x003fa0e1;
              }
            }
code_r0x003fa0e8:
            puStack_f0 = &UNK_003fa0f4;
            pppppppuVar29 = pppppppuStack_e0;
            _ZNSt3__115recursive_mutex6unlockEv();
            if (((char)uStack_60 == '\x01') && (((ulong)auStack_78 & 1) != 0)) {
              puStack_f0 = &UNK_003fa111;
              pppppppuVar29 = pppppppuStack_68;
              _ZdaPvSt11align_val_t(pppppppuStack_68,(ulong)auStack_78 & 0xfffffffffffffffe);
            }
          }
          puVar28 = &adb_trace_mask;
          puVar26 = adb_trace_severity;
          if (((char)uStack_40 == '\x01') && (((ulong)auStack_58 & 1) != 0)) {
            puStack_f0 = &UNK_003fa145;
            pppppppuVar29 = pppppppuStack_48;
            _ZdaPvSt11align_val_t(pppppppuStack_48,(ulong)auStack_58 & 0xfffffffffffffffe);
          }
          unaff_R13 = pppppppuStack_e8;
          if (bVar30) break;
        }
        puVar28 = &adb_trace_mask;
        puVar26 = adb_trace_severity;
        param_1 = (uint *******)((long)param_1 + 1);
      } while (param_1 != unaff_R13);
    }
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return 1;
  }
  puStack_f0 = &UNK_003fa400;
  func_0x0099bd00();
  lStack_120 = *(long *)(in_FS_OFFSET + 0x28);
  pppppppuVar10 = (uint *******)&pppppppuStack_140;
  apuStack_1a8[0] = &UNK_003fa430;
  pppppppuVar11 = pppppppuVar29;
  pppppppuStack_118 = unaff_RBX;
  pppppppuStack_110 = param_1;
  pppppppuStack_108 = unaff_R13;
  pppppppuStack_100 = (uint *******)puVar26;
  puStack_f8 = puVar28;
  puStack_f0 = &stack0xfffffffffffffff8;
  func_0x003f7650();
  pppppppuVar20 = pppppppuStack_140;
  if (pppppppuStack_140 != (uint *******)0x0) {
    pppppppuStack_198 = pppppppuRam0000000000a00738;
    apuStack_1a8[0] = &UNK_003fa450;
    _ZNSt3__15mutex4lockEv();
    auStack_160 = (undefined1  [8])0x0;
    pppppppuStack_158 = (uint *******)0x0;
    pppppppuStack_150 = (uint *******)0x0;
    appppppuStack_178[0] = (uint ******)0x0;
    apuStack_1a8[0] = &UNK_003fa479;
    iVar9 = i2d_RSA_PUBKEY(pppppppuVar20,appppppuStack_178);
    pppppppuStack_188 = pppppppuVar20;
    pppppppuStack_190 = pppppppuVar29;
    if (iVar9 < 0) {
      apuStack_1a8[0] = &UNK_003fa4cf;
      cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4,0);
      if (cVar8 != '\0') {
        apuStack_1a8[0] = &UNK_003fa7b9;
        puVar28 = (undefined4 *)func_0x0099bce0();
        uVar4 = *puVar28;
        apuStack_1a8[0] = &UNK_003fa7e5;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (&pppppppuStack_128,&UNK_001706c4,0x6d,4,0,0xffffffff);
        apuStack_1a8[0] = &UNK_003fa7ed;
        uVar12 = _ZN7android4base10LogMessage6streamEv(&pppppppuStack_128);
        apuStack_1a8[0] = &UNK_003fa801;
        func_0x0032eb30(uVar12,&UNK_00166050,0x1f);
        apuStack_1a8[0] = &UNK_003fa809;
        _ZN7android4base10LogMessageD2Ev(&pppppppuStack_128);
        *puVar28 = uVar4;
      }
      auStack_160 = (undefined1  [8])0x0;
      pppppppuStack_158 = (uint *******)0x0;
      pppppppuStack_150 = (uint *******)0x0;
    }
    else {
      auStack_160 = (undefined1  [8])0x0;
      pppppppuStack_158 = (uint *******)0x0;
      pppppppuStack_150 = (uint *******)0x0;
      apuStack_1a8[0] = &UNK_003fa4ad;
      _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc(auStack_160,0x20,0);
      pppppppuVar10 = pppppppuStack_150;
      if (((ulong)auStack_160 & 1) == 0) {
        pppppppuVar10 = (uint *******)(auStack_160 + 1);
      }
      apuStack_1a8[0] = &UNK_003fa4f1;
      SHA256(appppppuStack_178[0],iVar9,pppppppuVar10);
      apuStack_1a8[0] = &UNK_003fa4fd;
      OPENSSL_free(appppppuStack_178[0]);
    }
    ppppppuVar13 = ppppppuRam0000000000a00740;
    ppppppuVar27 = (uint ******)ppppppuRam0000000000a00740[1];
    if (ppppppuVar27 != (uint ******)0x0) {
      param_1 = (uint *******)(auStack_160 + 1);
      pppppppuVar29 = (uint *******)((ulong)auStack_160 >> 1 & 0x7f);
      if (((ulong)auStack_160 & 1) != 0) {
        param_1 = pppppppuStack_150;
        pppppppuVar29 = pppppppuStack_158;
      }
      do {
        while( true ) {
          bVar30 = (*(byte *)(ppppppuVar27 + 4) & 1) != 0;
          pppppppuVar11 = (uint *******)((long)ppppppuVar27 + 0x21);
          if (bVar30) {
            pppppppuVar11 = (uint *******)ppppppuVar27[6];
          }
          pppppppuVar10 = (uint *******)(ulong)(*(byte *)(ppppppuVar27 + 4) >> 1);
          if (bVar30) {
            pppppppuVar10 = (uint *******)ppppppuVar27[5];
          }
          pppppppuVar20 = pppppppuVar29;
          if (pppppppuVar10 < pppppppuVar29) {
            pppppppuVar20 = pppppppuVar10;
          }
          apuStack_1a8[0] = &UNK_003fa563;
          iVar9 = func_0x0099c3a0(param_1,pppppppuVar11,pppppppuVar20);
          if (iVar9 != 0) break;
          if (pppppppuVar29 == pppppppuVar10) {
            if (ppppppuVar27 != ppppppuVar13 + 1) {
              unaff_R13 = (uint *******)&UNK_00181c1f;
              pppppppuVar20 = pppppppuStack_188;
              goto code_r0x003fa614;
            }
            goto code_r0x003fa59b;
          }
          if (pppppppuVar29 < pppppppuVar10) goto code_r0x003fa530;
code_r0x003fa577:
          ppppppuVar27 = (uint ******)ppppppuVar27[1];
          if (ppppppuVar27 == (uint ******)0x0) goto code_r0x003fa59b;
        }
        if (-1 < iVar9) goto code_r0x003fa577;
code_r0x003fa530:
        ppppppuVar27 = (uint ******)*ppppppuVar27;
      } while (ppppppuVar27 != (uint ******)0x0);
    }
code_r0x003fa59b:
    pppppppuVar11 = (uint *******)auStack_160;
    appppppuStack_178[0] = ppppppuVar13;
    apuStack_1a8[0] = &UNK_003fa5c5;
    pppppppuStack_128 = pppppppuVar11;
    lVar14 = _ZZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_10shared_ptrI6rsa_stEEEENS_19__map_value_compareIS7_NS_4pairIKS7_SA_EENS_4lessIS7_EEEENS5_ISF_EEE16__emplace_uniqueB8nn220000IJRKNS_21piecewise_construct_tENS_5tupleIJRSE_EEENSP_IJEEEEEENSD_INS_15__tree_iteratorISB_PNS_11__tree_nodeISB_PvEElEEbEEDpOT_ENKUlSQ_SO_OSR_OSS_E_clESQ_SO_S13_S14_
                       (appppppuStack_178,pppppppuVar11,&_ZNSt3__119piecewise_constructE,
                        &pppppppuStack_128,&uStack_129);
    pppppppuVar10 = pppppppuStack_138;
    pppppppuVar20 = pppppppuStack_188;
    pppppppuStack_140 = (uint *******)0x0;
    pppppppuStack_138 = (uint *******)0x0;
    *(uint ********)(lVar14 + 0x38) = pppppppuStack_188;
    param_1 = *(uint ********)(lVar14 + 0x40);
    *(uint ********)(lVar14 + 0x40) = pppppppuVar10;
    unaff_R13 = (uint *******)&UNK_0015e18b;
    if (param_1 != (uint *******)0x0) {
      LOCK();
      pppppppuVar10 = param_1 + 1;
      ppppppuVar27 = *pppppppuVar10;
      *pppppppuVar10 = (uint ******)((long)*pppppppuVar10 + -1);
      UNLOCK();
      if (ppppppuVar27 == (uint ******)0x0) {
        apuStack_1a8[0] = &UNK_003fa60c;
        (*(code *)(*param_1)[2])(param_1);
        apuStack_1a8[0] = &UNK_003fa614;
        _ZNSt3__119__shared_weak_count14__release_weakEv(param_1);
      }
    }
code_r0x003fa614:
    if (((adb_trace_mask._1_1_ & 4) != 0) && ((int)adb_trace_severity._40_4_ < 2)) {
      pppppppuVar11 = (uint *******)0x0;
      apuStack_1a8[0] = &UNK_003fa6b4;
      cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1);
      if (cVar8 != '\0') {
        apuStack_1a8[0] = &UNK_003fa6c1;
        puVar28 = (undefined4 *)func_0x0099bce0();
        uStack_17c = *puVar28;
        apuStack_1a8[0] = &UNK_003fa6f2;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (&pppppppuStack_128,&UNK_001706c4,0x96,1,0,0xffffffff);
        apuStack_1a8[0] = &UNK_003fa6fa;
        uVar12 = _ZN7android4base10LogMessage6streamEv(&pppppppuStack_128);
        apuStack_1a8[0] = &UNK_003fa705;
        uVar15 = func_0x0099bcf0(unaff_R13);
        apuStack_1a8[0] = &UNK_003fa713;
        uVar12 = func_0x0032eb30(uVar12,unaff_R13,uVar15);
        apuStack_1a8[0] = &UNK_003fa727;
        uVar12 = func_0x0032eb30(uVar12,&UNK_0015e196,0xb);
        apuStack_1a8[0] = &UNK_003fa736;
        uVar12 = func_0x0032e5a0(uVar12,pppppppuStack_190);
        apuStack_1a8[0] = &UNK_003fa74a;
        pppppppuVar29 = (uint *******)func_0x0032eb30(uVar12,&UNK_00181c36,0x13);
        pppppppuVar11 = (uint *******)((ulong)auStack_160 >> 1 & 0x7f);
        pppppppuVar10 = (uint *******)(auStack_160 + 1);
        if (((ulong)auStack_160 & 1) != 0) {
          pppppppuVar11 = pppppppuStack_158;
          pppppppuVar10 = pppppppuStack_150;
        }
        param_1 = appppppuStack_178;
        apuStack_1a8[0] = &UNK_003fa775;
        _ZN3adb3tls21SHA256BitsToHexStringENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEE
                  (param_1,pppppppuVar10,pppppppuVar11);
        apuStack_1a8[0] = &UNK_003fa780;
        pppppppuVar11 = param_1;
        func_0x0032e5a0(pppppppuVar29);
        if (((ulong)appppppuStack_178[0] & 1) != 0) {
          pppppppuVar11 = (uint *******)((ulong)appppppuStack_178[0] & 0xfffffffffffffffe);
          apuStack_1a8[0] = &UNK_003fa79d;
          _ZdaPvSt11align_val_t(uStack_168);
        }
        apuStack_1a8[0] = &UNK_003fa7a6;
        _ZN7android4base10LogMessageD2Ev(&pppppppuStack_128);
        *puVar28 = uStack_17c;
      }
    }
    if (((ulong)auStack_160 & 1) != 0) {
      pppppppuVar11 = (uint *******)((ulong)auStack_160 & 0xfffffffffffffffe);
      apuStack_1a8[0] = &UNK_003fa645;
      _ZdaPvSt11align_val_t(pppppppuStack_150);
    }
    apuStack_1a8[0] = &UNK_003fa651;
    pppppppuVar10 = pppppppuStack_198;
    _ZNSt3__115recursive_mutex6unlockEv();
  }
  pppppppuVar23 = pppppppuStack_138;
  if (pppppppuStack_138 != (uint *******)0x0) {
    LOCK();
    pppppppuVar1 = pppppppuStack_138 + 1;
    ppppppuVar27 = *pppppppuVar1;
    *pppppppuVar1 = (uint ******)((long)*pppppppuVar1 + -1);
    UNLOCK();
    if (ppppppuVar27 == (uint ******)0x0) {
      apuStack_1a8[0] = &UNK_003fa675;
      (*(code *)(*pppppppuStack_138)[2])(pppppppuStack_138);
      apuStack_1a8[0] = &UNK_003fa67d;
      pppppppuVar10 = pppppppuVar23;
      _ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_120) {
    return (ulong)(pppppppuVar20 != (uint *******)0x0);
  }
  apuStack_1a8[0] = &UNK_003fa817;
  func_0x0099bd00();
  pppppppuStack_1b8 = pppppppuVar23;
  uStack_324 = (uint)pppppppuVar10;
  uStack_1d8 = *(ulong *)(in_FS_OFFSET + 0x28);
  puVar28 = &adb_trace_mask;
  pppppppuVar23 = pppppppuVar11;
  pppppppuStack_1d0 = pppppppuVar20;
  pppppppuStack_1c8 = param_1;
  pppppppuStack_1c0 = unaff_R13;
  pppppppuStack_1b0 = pppppppuVar29;
  apuStack_1a8[0] = (undefined *)&puStack_f0;
  if (((adb_trace_mask._1_1_ & 4) != 0) &&
     (apuStack_1a8[0] = (undefined *)&puStack_f0, (int)adb_trace_severity._40_4_ < 2)) {
    pppppppuVar10 = (uint *******)0x1;
    pppppppuVar20 = (uint *******)((ulong)pppppppuVar11 & 0xffffffff);
    puStack_340 = &UNK_003fae5b;
    apuStack_1a8[0] = (undefined *)&puStack_f0;
    cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
    pppppppuVar23 = (uint *******)((ulong)pppppppuVar11 & 0xffffffff);
    if (cVar8 != '\0') {
      puStack_340 = &UNK_003fae6a;
      unaff_R13 = (uint *******)func_0x0099bce0();
      uVar3 = *(uint *)unaff_R13;
      pppppppuVar29 = (uint *******)(ulong)uVar3;
      param_1 = appppppuStack_2e8;
      puStack_340 = &UNK_003fae99;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (param_1,&UNK_001706c4,0x156,1,0,0xffffffff);
      puStack_340 = &UNK_003faea1;
      uVar12 = _ZN7android4base10LogMessage6streamEv(param_1);
      puStack_340 = &UNK_003faeb5;
      func_0x0032eb30(uVar12,&UNK_00189681,0x1e);
      puStack_340 = &UNK_003faebd;
      pppppppuVar10 = param_1;
      _ZN7android4base10LogMessageD2Ev();
      pppppppuVar23 = (uint *******)((ulong)pppppppuVar11 & 0xffffffff);
      *(uint *)unaff_R13 = uVar3;
    }
  }
  if (((ulong)pppppppuVar23 & 1) != 0) {
    puStack_340 = &UNK_003fa883;
    func_0x0099bdb0(appppppuStack_2e8,0,0x110);
    param_1 = (uint *******)&uStack_308;
code_r0x003fa890:
    while( true ) {
      pppppppuVar10 = (uint *******)(ulong)uStack_324;
      puStack_340 = &UNK_003fa8a7;
      lVar14 = func_0x0099be20(pppppppuVar10,appppppuStack_2e8,0x110);
      if (lVar14 == -1) goto code_r0x003fa8d0;
      iVar9 = (int)lVar14;
      if (iVar9 == -1) break;
      if (0 < (long)iVar9) {
        pppppppuVar20 = (uint *******)((long)appppppuStack_2e8 + (long)iVar9);
        pppppppuVar29 = appppppuStack_2e8;
        do {
          plVar17 = *(long **)(lRam0000000000a00748 + 8);
          plVar16 = (long *)(lRam0000000000a00748 + 8);
          plVar7 = plVar16;
          if (plVar17 != (long *)0x0) {
            do {
              while ((int)*(uint *)pppppppuVar29 < (int)*(uint *)(plVar17 + 4)) {
                plVar17 = (long *)*plVar17;
                if (plVar17 == (long *)0x0) goto code_r0x003fa9c1;
              }
              if (*(uint *)pppppppuVar29 == *(uint *)(plVar17 + 4)) {
                plVar7 = plVar17;
                if (plVar17 != plVar16) goto code_r0x003fa9d5;
                break;
              }
              plVar17 = (long *)plVar17[1];
            } while (plVar17 != (long *)0x0);
          }
code_r0x003fa9c1:
          plVar17 = plVar7;
          puStack_340 = &UNK_003fa9cd;
          cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(6,0);
          if (cVar8 != '\0') {
            puStack_340 = &UNK_003fac63;
            puStack_320 = (undefined4 *)func_0x0099bce0();
            uStack_314 = *puStack_320;
            puStack_340 = &UNK_003fac94;
            _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                      (param_1,&UNK_001706c4,0x16e,6,0,0xffffffff);
            puStack_340 = &UNK_003fac9c;
            uVar12 = _ZN7android4base10LogMessage6streamEv(param_1);
            puStack_340 = &UNK_003facb0;
            uVar12 = func_0x0032eb30(uVar12,&UNK_0018671d,0x32);
            puStack_340 = &UNK_003facbb;
            _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(uVar12);
            puStack_340 = &UNK_003facc3;
            _ZN7android4base10LogMessageD2Ev(param_1);
            *puStack_320 = uStack_314;
          }
code_r0x003fa9d5:
          uStack_308 = (uint ******)0x0;
          uStack_300 = 0;
          lStack_2f8 = 0;
          if ((*(byte *)(plVar17 + 5) & 1) == 0) {
            lStack_2f8 = plVar17[7];
            uStack_308 = (uint ******)plVar17[5];
            uStack_300 = plVar17[6];
            uVar3 = *(uint *)((long)pppppppuVar29 + 0xc);
          }
          else {
            puStack_340 = &UNK_003faa30;
            func_0x00330340(param_1,plVar17[7],plVar17[6]);
            uVar3 = *(uint *)((long)pppppppuVar29 + 0xc);
          }
          if (uVar3 != 0) {
            if (((ulong)uStack_308 & 1) == 0) {
              uVar24 = 0x16;
              if ((byte)uStack_308 == 0x2c) {
code_r0x003faa8a:
                uStack_338 = 0;
                puStack_340 = &UNK_003faaab;
                _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__grow_byEmmmmmm
                          (param_1,uVar24,1,uVar24,uVar24,0);
                uVar18 = uVar24;
                goto code_r0x003faaae;
              }
              uVar18 = (ulong)((byte)uStack_308 >> 1);
              uVar24 = (ulong)uStack_308 >> 8;
              uStack_308 = (uint ******)CONCAT71((int7)uVar24,(byte)uStack_308 + 2);
              lVar14 = (long)&uStack_308 + 1;
            }
            else {
              uVar24 = ((ulong)uStack_308 & 0xfffffffffffffffe) - 1;
              uVar18 = uStack_300;
              if (uStack_300 == uVar24) goto code_r0x003faa8a;
code_r0x003faaae:
              uStack_300 = uVar18 + 1;
              lVar14 = lStack_2f8;
            }
            *(undefined2 *)(lVar14 + uVar18) = 0x2f;
            puStack_340 = &UNK_003faad2;
            _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc(param_1);
          }
          if (((ulong)*pppppppuVar29 & 0x18000000000) == 0) {
            puStack_340 = &UNK_003fab2c;
            cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(3,0);
            if (cVar8 != '\0') {
              puStack_340 = &UNK_003fab39;
              puStack_320 = (undefined4 *)func_0x0099bce0();
              uStack_314 = *puStack_320;
              puStack_340 = &UNK_003fab71;
              _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                        (auStack_310,&UNK_001706c4,0x17f,3,0);
              puStack_340 = &UNK_003fab79;
              uVar12 = _ZN7android4base10LogMessage6streamEv(auStack_310);
              puStack_340 = &UNK_003fab8d;
              uVar12 = func_0x0032eb30(uVar12,&UNK_0017d6f4,0x16);
              uVar18 = (ulong)uStack_308 >> 1 & 0x7f;
              lVar14 = (long)&uStack_308 + 1;
              if (((ulong)uStack_308 & 1) != 0) {
                uVar18 = uStack_300;
                lVar14 = lStack_2f8;
              }
              puStack_340 = &UNK_003fabbd;
              uVar12 = func_0x0032eb30(uVar12,lVar14,uVar18);
              puStack_340 = &UNK_003fabd1;
              plVar17 = (long *)func_0x0032eb30(uVar12,&UNK_0016143e,4);
              *(uint *)((long)plVar17 + *(long *)(*plVar17 + -0x18) + 8) =
                   *(uint *)((long)plVar17 + *(long *)(*plVar17 + -0x18) + 8) & 0xffffffb5 | 8;
              puStack_340 = &UNK_003fabf2;
              _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj(plVar17);
code_r0x003fabf2:
              puStack_340 = &UNK_003fabfa;
              _ZN7android4base10LogMessageD2Ev(auStack_310);
              *puStack_320 = uStack_314;
            }
          }
          else {
            bVar30 = (adb_trace_mask._1_1_ & 4) != 0;
            if (((ulong)*pppppppuVar29 & 0x4000000000000000) == 0) {
              if ((int)adb_trace_severity._40_4_ < 2 && bVar30) {
                puStack_340 = &UNK_003face3;
                cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
                if (cVar8 != '\0') {
                  puStack_340 = &UNK_003facf0;
                  puStack_320 = (undefined4 *)func_0x0099bce0();
                  uStack_314 = *puStack_320;
                  puStack_340 = &UNK_003fad28;
                  _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                            (auStack_310,&UNK_001706c4,0x17b,1,0);
                  puStack_340 = &UNK_003fad30;
                  uVar12 = _ZN7android4base10LogMessage6streamEv(auStack_310);
                  puStack_340 = &UNK_003fad44;
                  uVar12 = func_0x0032eb30(uVar12,&UNK_00157972,0x16);
                  puStack_340 = &UNK_003fad4f;
                  uVar12 = func_0x0032e5a0(uVar12,param_1);
                  puStack_340 = &UNK_003fad63;
                  func_0x0032eb30(uVar12,&UNK_00162c6d,1);
                  puStack_340 = &UNK_003fad6b;
                  _ZN7android4base10LogMessageD2Ev(auStack_310);
                  *puStack_320 = uStack_314;
                }
              }
              puStack_340 = &UNK_003fab12;
              func_0x003f8ce0(param_1);
            }
            else if ((int)adb_trace_severity._40_4_ < 2 && bVar30) {
              puStack_340 = &UNK_003fad8b;
              cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
              if (cVar8 != '\0') {
                puStack_340 = &UNK_003fad98;
                puStack_320 = (undefined4 *)func_0x0099bce0();
                uStack_314 = *puStack_320;
                puStack_340 = &UNK_003fadd0;
                _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                          (auStack_310,&UNK_001706c4,0x179,1,0);
                puStack_340 = &UNK_003fadd8;
                uVar12 = _ZN7android4base10LogMessage6streamEv(auStack_310);
                puStack_340 = &UNK_003fadec;
                uVar12 = func_0x0032eb30(uVar12,&UNK_00187e90,0x1b);
                puStack_340 = &UNK_003fadf7;
                uVar12 = func_0x0032e5a0(uVar12,param_1);
                puStack_340 = &UNK_003fae0b;
                func_0x0032eb30(uVar12,&UNK_00162c6d,1);
                goto code_r0x003fabf2;
              }
            }
          }
          uVar3 = *(uint *)((long)pppppppuVar29 + 0xc);
          if (((ulong)uStack_308 & 1) != 0) {
            puStack_340 = &UNK_003fac40;
            _ZdaPvSt11align_val_t(lStack_2f8);
          }
          pppppppuVar29 = (uint *******)((long)pppppppuVar29 + (ulong)uVar3 + 0x10);
        } while (pppppppuVar29 < pppppppuVar20);
      }
    }
    puStack_340 = &UNK_003fa8bb;
    unaff_R13 = (uint *******)func_0x0099bce0();
    uVar3 = *(uint *)unaff_R13;
    goto joined_r0x003fa8e2;
  }
code_r0x003fae28:
  if (*(ulong *)(in_FS_OFFSET + 0x28) == uStack_1d8) {
    return *(ulong *)(in_FS_OFFSET + 0x28);
  }
  puStack_340 = &UNK_003faf3b;
  func_0x0099bd00();
  lStack_370 = *(long *)(in_FS_OFFSET + 0x28);
  pppppppuStack_368 = pppppppuVar20;
  pppppppuStack_360 = param_1;
  pppppppuStack_358 = unaff_R13;
  puStack_350 = puVar28;
  pppppppuStack_348 = pppppppuVar29;
  puStack_340 = (undefined *)apuStack_1a8;
  puVar28 = (undefined4 *)_ZNSt3__119__thread_local_dataEv();
  ppppppuVar27 = *pppppppuVar10;
  *pppppppuVar10 = (uint ******)0x0;
  func_0x0099bfc0(*puVar28,ppppppuVar27);
  lStack_380 = 0;
  plStack_378 = (long *)0x0;
  _ZN10atransport3KeyEv(&lStack_380,pppppppuVar10[1]);
  if (lStack_380 == 0) {
    if ((((adb_trace_mask._1_1_ & 4) != 0) && ((int)adb_trace_severity._40_4_ < 2)) &&
       (cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0), cVar8 != '\0')) {
      puVar28 = (undefined4 *)func_0x0099bce0();
      uVar4 = *puVar28;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&lStack_390,&UNK_001706c4,0x1ec,1,0,0xffffffff);
      uVar12 = _ZN7android4base10LogMessage6streamEv(&lStack_390);
      func_0x0032eb30(uVar12,&UNK_0015e1a2,0x24);
      _ZN7android4base10LogMessageD2Ev(&lStack_390);
      *puVar28 = uVar4;
    }
    _ZN10atransport7NextKeyEv(&lStack_390,pppppppuVar10[1]);
    plVar17 = plStack_378;
    plStack_378 = plStack_388;
    lStack_380 = lStack_390;
    lStack_390 = 0;
    plStack_388 = (long *)0x0;
    if (plVar17 != (long *)0x0) {
      LOCK();
      plVar7 = plVar17 + 1;
      lVar14 = *plVar7;
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
        _ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
      }
    }
    plVar17 = plStack_388;
    if (plStack_388 != (long *)0x0) {
      LOCK();
      plVar7 = plStack_388 + 1;
      lVar14 = *plVar7;
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plStack_388 + 0x10))(plStack_388);
        _ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
      }
    }
    if (lStack_380 == 0) {
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&lStack_390,&UNK_001706c4,0x1ee,6,0,0xffffffff);
      uVar12 = _ZN7android4base10LogMessage6streamEv(&lStack_390);
      uVar12 = func_0x0032eb30(uVar12,&UNK_0016608e,0x11);
      func_0x0032eb30(uVar12,&UNK_0015ae05,1);
      _ZN7android4base10LogMessageD2Ev(&lStack_390);
    }
  }
  if ((((adb_trace_mask._1_1_ & 4) != 0) && ((int)adb_trace_severity._40_4_ < 2)) &&
     (cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0), cVar8 != '\0')) {
    puVar28 = (undefined4 *)func_0x0099bce0();
    uVar4 = *puVar28;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (&lStack_390,&UNK_001706c4,0x1f1,1,0,0xffffffff);
    uVar12 = _ZN7android4base10LogMessage6streamEv(&lStack_390);
    func_0x0032eb30(uVar12,&UNK_00167bf3,0x1b);
    _ZN7android4base10LogMessageD2Ev(&lStack_390);
    *puVar28 = uVar4;
  }
  ppppppuVar27 = pppppppuVar10[1];
  _ZNSt3__15mutex4lockEv(ppppppuVar27 + 0x34);
  pppppuVar25 = ppppppuVar27[0x2b];
  pppppuVar22 = ppppppuVar27[0x2c];
  if (pppppuVar22 != (uint *****)0x0) {
    LOCK();
    pppppuVar22[1] = (uint ****)((long)pppppuVar22[1] + 1);
    UNLOCK();
  }
  _ZNSt3__115recursive_mutex6unlockEv(ppppppuVar27 + 0x34);
  cVar8 = (*(code *)(*pppppuVar25)[5])(pppppuVar25,lStack_380,0);
  if (pppppuVar22 != (uint *****)0x0) {
    LOCK();
    pppppuVar25 = pppppuVar22 + 1;
    ppppuVar2 = *pppppuVar25;
    *pppppuVar25 = (uint ****)((long)*pppppuVar25 + -1);
    UNLOCK();
    if (ppppuVar2 == (uint ****)0x0) {
      (*(code *)(*pppppuVar22)[2])(pppppuVar22);
      _ZNSt3__119__shared_weak_count14__release_weakEv(pppppuVar22);
    }
  }
  bVar30 = (adb_trace_mask._1_1_ & 4) != 0;
  if (cVar8 == '\0') {
    if (((int)adb_trace_severity._40_4_ < 2 && bVar30) &&
       (cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0), cVar8 != '\0')) {
      puVar28 = (undefined4 *)func_0x0099bce0();
      uVar4 = *puVar28;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&lStack_390,&UNK_001706c4,0x1f6,1,0,0xffffffff);
      uVar12 = _ZN7android4base10LogMessage6streamEv(&lStack_390);
      func_0x0032eb30(uVar12,&UNK_00187eb1,0x23);
      _ZN7android4base10LogMessageD2Ev(&lStack_390);
      *puVar28 = uVar4;
    }
    _ZN10atransport4KickEv(pppppppuVar10[1]);
  }
  else if (((int)adb_trace_severity._40_4_ < 2 && bVar30) &&
          (cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0), cVar8 != '\0')) {
    puVar28 = (undefined4 *)func_0x0099bce0();
    uVar4 = *puVar28;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (&lStack_390,&UNK_001706c4,500,1,0,0xffffffff);
    uVar12 = _ZN7android4base10LogMessage6streamEv(&lStack_390);
    func_0x0032eb30(uVar12,&UNK_00183573,0x2f);
    _ZN7android4base10LogMessageD2Ev(&lStack_390);
    *puVar28 = uVar4;
  }
  plVar17 = plStack_378;
  if (plStack_378 != (long *)0x0) {
    LOCK();
    plVar7 = plStack_378 + 1;
    lVar14 = *plVar7;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plStack_378 + 0x10))(plStack_378);
      _ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
    }
  }
  ppppppuVar27 = *pppppppuVar10;
  *pppppppuVar10 = (uint ******)0x0;
  if (ppppppuVar27 != (uint ******)0x0) {
    _ZNSt3__115__thread_structD2Ev(ppppppuVar27);
    _ZdaPvSt11align_val_t(ppppppuVar27,8);
  }
  _ZdaPvSt11align_val_t(pppppppuVar10,0x10);
  if (*(long *)(in_FS_OFFSET + 0x28) != lStack_370) {
    func_0x0099bd00();
    pcVar5 = (code *)swi(3);
    uVar18 = (*pcVar5)();
    return uVar18;
  }
  return 0;
code_r0x003fa8d0:
  puStack_340 = &UNK_003fa8d5;
  unaff_R13 = (uint *******)func_0x0099bce0();
  uVar3 = *(uint *)unaff_R13;
  if (uVar3 == 4) goto code_r0x003fa890;
joined_r0x003fa8e2:
  if (uVar3 == 4) goto code_r0x003fa890;
  if (uVar3 != 0xb) {
    puStack_340 = &UNK_003fa8f9;
    cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(6,0);
    if (cVar8 != '\0') {
      uVar3 = *(uint *)unaff_R13;
      pppppppuVar20 = (uint *******)(ulong)uVar3;
      puStack_340 = &UNK_003fa920;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i(param_1,&UNK_001706c4,0x163,6,0);
      puStack_340 = &UNK_003fa928;
      uVar12 = _ZN7android4base10LogMessage6streamEv(param_1);
      puStack_340 = &UNK_003fa93c;
      func_0x0032eb30(uVar12,&UNK_0018ae63,0x1c);
      puStack_340 = &UNK_003fa944;
      _ZN7android4base10LogMessageD2Ev(param_1);
      *(uint *)unaff_R13 = uVar3;
    }
    goto code_r0x003fa890;
  }
  if (((adb_trace_mask._1_1_ & 4) != 0) && ((int)adb_trace_severity._40_4_ < 2)) {
    pppppppuVar10 = (uint *******)0x1;
    puStack_340 = &UNK_003faed4;
    cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
    if (cVar8 != '\0') {
      uVar3 = *(uint *)unaff_R13;
      puVar28 = (undefined4 *)(ulong)uVar3;
      pppppppuVar20 = (uint *******)&uStack_308;
      puStack_340 = &UNK_003faf09;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (pppppppuVar20,&UNK_001706c4,0x160,1,0,0xffffffff);
      puStack_340 = &UNK_003faf11;
      uVar12 = _ZN7android4base10LogMessage6streamEv(pppppppuVar20);
      puStack_340 = &UNK_003faf25;
      func_0x0032eb30(uVar12,&UNK_001706e9,0x17);
      puStack_340 = &UNK_003faf2d;
      pppppppuVar10 = pppppppuVar20;
      _ZN7android4base10LogMessageD2Ev();
      *(uint *)unaff_R13 = uVar3;
    }
  }
  goto code_r0x003fae28;
}


