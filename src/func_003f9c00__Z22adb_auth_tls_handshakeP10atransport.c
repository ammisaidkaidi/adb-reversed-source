// Function: _Z22adb_auth_tls_handshakeP10atransport
// Address: 003f9c00
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Type propagation algorithm not settling */

ulong _Z22adb_auth_tls_handshakeP10atransport(uint *******param_1)

{
  uint *******pppppppuVar1;
  uint ****ppppuVar2;
  undefined4 uVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  uint *******pppppppuVar12;
  uint *******pppppppuVar13;
  uint ******ppppppuVar14;
  long lVar15;
  undefined8 uVar16;
  long *plVar17;
  long *plVar18;
  ulong uVar19;
  uint *****pppppuVar20;
  uint *******pppppppuVar21;
  uint *****pppppuVar22;
  uint *****pppppuVar23;
  uint *******pppppppuVar24;
  uint *******pppppppuVar25;
  uint *******unaff_R13;
  ulong uVar26;
  uint *****pppppuVar27;
  undefined1 *puVar28;
  uint ******ppppppuVar29;
  undefined4 *puVar30;
  uint *******pppppppuVar31;
  long in_FS_OFFSET;
  bool bVar32;
  long lStack_3b8;
  long *plStack_3b0;
  long lStack_3a8;
  long *plStack_3a0;
  long lStack_398;
  uint *******pppppppuStack_390;
  uint *******pppppppuStack_388;
  uint *******pppppppuStack_380;
  undefined4 *puStack_378;
  uint *******pppppppuStack_370;
  undefined *puStack_368;
  undefined8 uStack_360;
  uint uStack_34c;
  undefined4 *puStack_348;
  undefined4 uStack_33c;
  undefined1 auStack_338 [8];
  undefined8 uStack_330;
  ulong uStack_328;
  long lStack_320;
  uint ******appppppuStack_310 [34];
  ulong uStack_200;
  uint *******pppppppuStack_1f8;
  uint *******pppppppuStack_1f0;
  uint *******pppppppuStack_1e8;
  uint *******pppppppuStack_1e0;
  uint *******pppppppuStack_1d8;
  undefined *apuStack_1d0 [2];
  uint *******pppppppuStack_1c0;
  uint *******pppppppuStack_1b8;
  uint *******pppppppuStack_1b0;
  undefined4 uStack_1a4;
  uint ******appppppuStack_1a0 [2];
  undefined8 uStack_190;
  undefined1 auStack_188 [8];
  uint *******pppppppuStack_180;
  uint *******pppppppuStack_178;
  uint *******pppppppuStack_168;
  uint *******pppppppuStack_160;
  undefined1 uStack_151;
  uint *******pppppppuStack_150;
  long lStack_148;
  uint *******pppppppuStack_140;
  uint *******pppppppuStack_138;
  uint *******pppppppuStack_130;
  uint *******pppppppuStack_128;
  undefined4 *puStack_120;
  undefined *puStack_118;
  uint *******pppppppuStack_110;
  uint *******pppppppuStack_108;
  uint *******pppppppuStack_100;
  undefined4 *puStack_f8;
  uint *******pppppppuStack_f0;
  uint ******ppppppuStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c0;
  ulong uStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined1 auStack_a0 [8];
  uint *****pppppuStack_98;
  uint *******pppppppuStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  ulong uStack_78;
  uint *******pppppppuStack_70;
  undefined8 uStack_68;
  long lStack_60;
  uint *******pppppppuStack_58;
  undefined *puStack_30;
  uint ******ppppppuStack_28;
  ulong uStack_20;
  
  uStack_20 = *(ulong *)(in_FS_OFFSET + 0x28);
  puStack_30 = &UNK_003f9c25;
  uVar10 = _Znwm(8);
  puStack_30 = &UNK_003f9c30;
  _ZNSt3__115__thread_structC2Ev(uVar10);
  puStack_30 = &UNK_003f9c3a;
  puVar11 = (undefined8 *)_Znwm(0x10);
  *puVar11 = uVar10;
  puVar11[1] = param_1;
  puStack_30 = &UNK_003f9c56;
  uVar8 = func_0x0099be80(&ppppppuStack_28,0,&UNK_003faf40,puVar11);
  if (uVar8 == 0) {
    param_1 = &ppppppuStack_28;
    puStack_30 = &UNK_003f9c66;
    _ZNSt3__16thread6detachEv(param_1);
    puStack_30 = &UNK_003f9c6e;
    pppppppuVar25 = param_1;
    _ZNSt3__16threadD2Ev();
    if (*(ulong *)(in_FS_OFFSET + 0x28) == uStack_20) {
      return *(ulong *)(in_FS_OFFSET + 0x28);
    }
  }
  else {
    pppppppuVar25 = (uint *******)(ulong)uVar8;
    puStack_30 = &UNK_003f9c94;
    _ZNSt3__120__throw_system_errorEiPKc(pppppppuVar25,&UNK_0015f7ec);
  }
  puStack_30 = &UNK_003f9c99;
  func_0x0099bd00();
  lStack_60 = *(long *)(in_FS_OFFSET + 0x28);
  pppppppuStack_58 = param_1;
  puStack_30 = &stack0xfffffffffffffff8;
  if (((adb_trace_mask._1_1_ & 4) != 0) &&
     (puStack_30 = &stack0xfffffffffffffff8, (int)adb_trace_severity._40_4_ < 2)) {
    puStack_118 = &UNK_003fa317;
    puStack_30 = &stack0xfffffffffffffff8;
    cVar7 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
    if (cVar7 != '\0') {
      puStack_118 = &UNK_003fa324;
      param_1 = (uint *******)func_0x0099bce0();
      uVar8 = *(uint *)param_1;
      puStack_118 = &UNK_003fa350;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_80,&UNK_001706c4,0x203,1,0,0xffffffff);
      puStack_118 = &UNK_003fa358;
      uVar10 = _ZN7android4base10LogMessage6streamEv(auStack_80);
      puStack_118 = &UNK_003fa36c;
      func_0x0032eb30(uVar10,&UNK_00164516,0x17);
      puStack_118 = &UNK_003fa37b;
      _ZN7android4base10LogMessageD2Ev(auStack_80);
      *(uint *)param_1 = uVar8;
    }
  }
  puVar30 = &adb_trace_mask;
  puVar28 = adb_trace_severity;
  puStack_118 = &UNK_003f9cec;
  pppppppuVar31 = pppppppuVar25;
  pppppppuVar12 = (uint *******)SSL_get_client_CA_list();
  if (pppppppuVar12 == (uint *******)0x0) {
    if (((adb_trace_mask._1_1_ & 4) != 0) && ((int)adb_trace_severity._40_4_ < 2)) {
      pppppppuVar31 = (uint *******)0x1;
      puStack_118 = &UNK_003fa396;
      cVar7 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
      if (cVar7 != '\0') {
        puStack_118 = &UNK_003fa3a3;
        param_1 = (uint *******)func_0x0099bce0();
        uVar8 = *(uint *)param_1;
        puVar30 = (undefined4 *)(ulong)uVar8;
        puVar28 = auStack_80;
        puStack_118 = &UNK_003fa3cf;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (puVar28,&UNK_001706c4,0x209,1,0,0xffffffff);
        puStack_118 = &UNK_003fa3d7;
        uVar10 = _ZN7android4base10LogMessage6streamEv(puVar28);
        puStack_118 = &UNK_003fa3eb;
        func_0x0032eb30(uVar10,&UNK_0018ae20,0x33);
        puStack_118 = &UNK_003fa3f3;
        pppppppuVar31 = (uint *******)puVar28;
        _ZN7android4base10LogMessageD2Ev();
        *(uint *)param_1 = uVar8;
      }
    }
  }
  else {
    puStack_118 = &UNK_003f9d07;
    pppppppuVar31 = pppppppuVar12;
    pppppppuStack_100 = pppppppuVar25;
    pppppppuVar13 = (uint *******)OPENSSL_sk_num();
    param_1 = pppppppuVar12;
    if (pppppppuVar13 != (uint *******)0x0) {
      pppppppuVar25 = (uint *******)0x0;
      unaff_R13 = pppppppuVar13;
      pppppppuStack_110 = pppppppuVar13;
      pppppppuStack_f0 = pppppppuVar12;
      do {
        puStack_118 = &UNK_003f9d58;
        uVar10 = OPENSSL_sk_value(param_1,pppppppuVar25);
        pppppppuStack_70 = (uint *******)0x0;
        uStack_68 = 0;
        auStack_80 = (undefined1  [8])0x0;
        uStack_78 = 0;
        pppppppuVar31 = (uint *******)auStack_80;
        puStack_118 = &UNK_003f9d6f;
        _ZN3adb3tls27ParseEncodedKeyFromCAIssuerEP12X509_name_st(pppppppuVar31,uVar10);
        if ((char)uStack_68 != '\0') {
          if (((adb_trace_mask._1_1_ & 4) != 0) && ((int)adb_trace_severity._40_4_ < 2)) {
            puStack_118 = &UNK_003fa156;
            cVar7 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
            if (cVar7 != '\0') {
              puStack_118 = &UNK_003fa163;
              puVar30 = (undefined4 *)func_0x0099bce0();
              uVar3 = *puVar30;
              puStack_118 = &UNK_003fa18f;
              _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                        (auStack_a0,&UNK_001706c4,0x217,1,0,0xffffffff);
              puStack_118 = &UNK_003fa197;
              uVar10 = _ZN7android4base10LogMessage6streamEv(auStack_a0);
              puStack_118 = &UNK_003fa1ab;
              uVar10 = func_0x0032eb30(uVar10,&UNK_0017239b,0x20);
              puStack_118 = &UNK_003fa1b7;
              uVar10 = func_0x0032e5a0(uVar10,auStack_80);
              puStack_118 = &UNK_003fa1cb;
              func_0x0032eb30(uVar10,&UNK_00178ae2,1);
              puStack_118 = &UNK_003fa1d3;
              _ZN7android4base10LogMessageD2Ev(auStack_a0);
              *puVar30 = uVar3;
              param_1 = pppppppuStack_f0;
            }
          }
          pppppppuStack_90 = (uint *******)0x0;
          uStack_88 = 0;
          bVar32 = ((ulong)auStack_80 & 1) == 0;
          pppppppuVar12 = pppppppuStack_70;
          if (bVar32) {
            pppppppuVar12 = (uint *******)(auStack_80 + 1);
          }
          auStack_a0 = (undefined1  [8])0x0;
          pppppuStack_98 = (uint *****)0x0;
          uVar19 = (ulong)auStack_80 >> 1 & 0x7f;
          if (!bVar32) {
            uVar19 = uStack_78;
          }
          pppppppuVar31 = (uint *******)auStack_a0;
          puStack_118 = &UNK_003f9db6;
          _ZN3adb3tls21SHA256HexStringToBitsENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEE
                    (pppppppuVar31,pppppppuVar12,uVar19);
          bVar32 = false;
          if ((char)uStack_88 == '\x01') {
            pppppppuStack_108 = pppppppuRam0000000000a00738;
            puStack_118 = &UNK_003f9dd9;
            _ZNSt3__15mutex4lockEv();
            ppppppuStack_e8 = ppppppuRam0000000000a00740;
            ppppppuVar29 = (uint ******)ppppppuRam0000000000a00740[1];
            if (ppppppuVar29 != (uint ******)0x0) {
              ppppppuStack_e8 = ppppppuRam0000000000a00740 + 1;
              pppppuVar27 = (uint *****)((ulong)auStack_a0 >> 1 & 0x7f);
              pppppppuVar31 = (uint *******)(auStack_a0 + 1);
              if (((ulong)auStack_a0 & 1) != 0) {
                pppppppuVar31 = pppppppuStack_90;
                pppppuVar27 = pppppuStack_98;
              }
              do {
                while( true ) {
                  bVar32 = (*(byte *)(ppppppuVar29 + 4) & 1) != 0;
                  pppppuVar23 = (uint *****)((long)ppppppuVar29 + 0x21);
                  if (bVar32) {
                    pppppuVar23 = ppppppuVar29[6];
                  }
                  pppppuVar22 = (uint *****)(ulong)(*(byte *)(ppppppuVar29 + 4) >> 1);
                  if (bVar32) {
                    pppppuVar22 = ppppppuVar29[5];
                  }
                  pppppuVar20 = pppppuVar27;
                  if (pppppuVar22 < pppppuVar27) {
                    pppppuVar20 = pppppuVar22;
                  }
                  puStack_118 = &UNK_003f9e57;
                  iVar9 = func_0x0099c3a0(pppppppuVar31,pppppuVar23,pppppuVar20);
                  if (iVar9 != 0) break;
                  if (pppppuVar27 == pppppuVar22) {
                    if (ppppppuVar29 != ppppppuStack_e8) {
                      if (((adb_trace_mask._1_1_ & 4) != 0) && ((int)adb_trace_severity._40_4_ < 2))
                      {
                        puStack_118 = &UNK_003fa1f5;
                        cVar7 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
                        if (cVar7 != '\0') {
                          puStack_118 = &UNK_003fa202;
                          puVar30 = (undefined4 *)func_0x0099bce0();
                          ppppppuStack_e8 = (uint ******)CONCAT44(ppppppuStack_e8._4_4_,*puVar30);
                          puStack_118 = &UNK_003fa236;
                          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                                    (&uStack_c0,&UNK_001706c4,0x220,1,0,0xffffffff);
                          puStack_118 = &UNK_003fa23e;
                          uVar10 = _ZN7android4base10LogMessage6streamEv(&uStack_c0);
                          puStack_118 = &UNK_003fa252;
                          func_0x0032eb30(uVar10,&UNK_0018353b,0x19);
                          puStack_118 = &UNK_003fa25a;
                          _ZN7android4base10LogMessageD2Ev(&uStack_c0);
                          *puVar30 = ppppppuStack_e8._0_4_;
                        }
                      }
                      puStack_118 = &UNK_003f9ea6;
                      ppppppuVar14 = (uint ******)EVP_PKEY_new();
                      puStack_118 = &UNK_003f9eb5;
                      iVar9 = EVP_PKEY_set1_RSA(ppppppuVar14,ppppppuVar29[7]);
                      if (iVar9 == 0) {
                        puStack_118 = &UNK_003fa292;
                        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                                  (&uStack_c0,&UNK_001706c4,0x222,6,0,0xffffffff);
                        puStack_118 = &UNK_003fa29a;
                        uVar10 = _ZN7android4base10LogMessage6streamEv(&uStack_c0);
                        puStack_118 = &UNK_003fa2ae;
                        uVar10 = func_0x0032eb30(uVar10,&UNK_001771be,0x4b);
                        puStack_118 = &UNK_003fa2c2;
                        func_0x0032eb30(uVar10,&UNK_0015ae05,1);
                        puStack_118 = &UNK_003fa2ca;
                        _ZN7android4base10LogMessageD2Ev(&uStack_c0);
                      }
                      lStack_a8 = 0;
                      puStack_118 = &UNK_003f9ed1;
                      _ZN3adb6crypto23GenerateX509CertificateEP11evp_pkey_st
                                (&lStack_a8,ppppppuVar14);
                      uStack_c0 = 0;
                      uStack_b8 = 0;
                      lStack_b0 = 0;
                      puStack_118 = &UNK_003f9ef3;
                      _ZN3adb6crypto15X509ToPEMStringEP7x509_st(&uStack_c0,lStack_a8);
                      uStack_e0 = 0;
                      uStack_d8 = 0;
                      lStack_d0 = 0;
                      puStack_118 = &UNK_003f9f17;
                      _ZN3adb6crypto3Key11ToPEMStringEP11evp_pkey_st(&uStack_e0,ppppppuVar14);
                      uVar19 = uStack_c0 >> 1 & 0x7f;
                      lVar15 = (long)&uStack_c0 + 1;
                      if ((uStack_c0 & 1) != 0) {
                        uVar19 = uStack_b8;
                        lVar15 = lStack_b0;
                      }
                      lVar5 = (long)&uStack_e0 + 1;
                      if ((uStack_e0 & 1) != 0) {
                        lVar5 = lStack_d0;
                      }
                      puStack_118 = &UNK_003f9f70;
                      _ZN3adb3tls13TlsConnection13SetCertAndKeyEP6ssl_stNSt3__117basic_string_viewIcNS4_11char_traitsIcEEEES8_
                                (pppppppuStack_100,lVar15,uVar19,lVar5);
                      if ((uStack_e0 & 1) != 0) {
                        puStack_118 = &UNK_003f9f97;
                        _ZdaPvSt11align_val_t(lStack_d0,uStack_e0 & 0xfffffffffffffffe);
                      }
                      param_1 = pppppppuStack_f0;
                      if ((uStack_c0 & 1) != 0) {
                        puStack_118 = &UNK_003f9fbb;
                        _ZdaPvSt11align_val_t(lStack_b0,uStack_c0 & 0xfffffffffffffffe);
                      }
                      lVar15 = lStack_a8;
                      lStack_a8 = 0;
                      ppppppuStack_e8 = ppppppuVar14;
                      if (lVar15 != 0) {
                        puStack_118 = &UNK_003f9fd8;
                        X509_free();
                      }
                      bVar32 = true;
                      if (ppppppuStack_e8 != (uint ******)0x0) {
                        puStack_118 = &UNK_003f9ff3;
                        EVP_PKEY_free();
                      }
                      goto code_r0x003fa0e8;
                    }
                    goto code_r0x003fa000;
                  }
                  if (pppppuVar27 < pppppuVar22) goto code_r0x003f9e20;
code_r0x003f9e67:
                  ppppppuVar29 = (uint ******)ppppppuVar29[1];
                  if (ppppppuVar29 == (uint ******)0x0) goto code_r0x003fa000;
                }
                if (-1 < iVar9) goto code_r0x003f9e67;
code_r0x003f9e20:
                ppppppuVar29 = (uint ******)*ppppppuVar29;
              } while (ppppppuVar29 != (uint ******)0x0);
            }
code_r0x003fa000:
            param_1 = pppppppuStack_f0;
            bVar32 = false;
            if ((adb_trace_mask._1_1_ & 4) == 0) {
code_r0x003fa0e1:
              bVar32 = false;
              param_1 = pppppppuStack_f0;
            }
            else if ((int)adb_trace_severity._40_4_ < 2) {
              bVar32 = false;
              puStack_118 = &UNK_003fa03d;
              cVar7 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
              if (cVar7 != '\0') {
                puStack_118 = &UNK_003fa04a;
                puStack_f8 = (undefined4 *)func_0x0099bce0();
                ppppppuStack_e8 = (uint ******)CONCAT44(ppppppuStack_e8._4_4_,*puStack_f8);
                puStack_118 = &UNK_003fa085;
                _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                          (&uStack_c0,&UNK_001706c4,0x229,1,0,0xffffffff);
                puStack_118 = &UNK_003fa08d;
                uVar10 = _ZN7android4base10LogMessage6streamEv(&uStack_c0);
                puStack_118 = &UNK_003fa0a1;
                uVar10 = func_0x0032eb30(uVar10,&UNK_0018ae54,0xe);
                puStack_118 = &UNK_003fa0ad;
                uVar10 = func_0x0032e5a0(uVar10,auStack_80);
                puStack_118 = &UNK_003fa0c1;
                func_0x0032eb30(uVar10,&UNK_00178ae2,1);
                puStack_118 = &UNK_003fa0c9;
                _ZN7android4base10LogMessageD2Ev(&uStack_c0);
                *puStack_f8 = ppppppuStack_e8._0_4_;
                goto code_r0x003fa0e1;
              }
            }
code_r0x003fa0e8:
            puStack_118 = &UNK_003fa0f4;
            pppppppuVar31 = pppppppuStack_108;
            _ZNSt3__115recursive_mutex6unlockEv();
            if (((char)uStack_88 == '\x01') && (((ulong)auStack_a0 & 1) != 0)) {
              puStack_118 = &UNK_003fa111;
              pppppppuVar31 = pppppppuStack_90;
              _ZdaPvSt11align_val_t(pppppppuStack_90,(ulong)auStack_a0 & 0xfffffffffffffffe);
            }
          }
          puVar30 = &adb_trace_mask;
          puVar28 = adb_trace_severity;
          if (((char)uStack_68 == '\x01') && (((ulong)auStack_80 & 1) != 0)) {
            puStack_118 = &UNK_003fa145;
            pppppppuVar31 = pppppppuStack_70;
            _ZdaPvSt11align_val_t(pppppppuStack_70,(ulong)auStack_80 & 0xfffffffffffffffe);
          }
          unaff_R13 = pppppppuStack_110;
          if (bVar32) break;
        }
        puVar30 = &adb_trace_mask;
        puVar28 = adb_trace_severity;
        pppppppuVar25 = (uint *******)((long)pppppppuVar25 + 1);
      } while (pppppppuVar25 != unaff_R13);
    }
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_60) {
    return 1;
  }
  puStack_118 = &UNK_003fa400;
  func_0x0099bd00();
  lStack_148 = *(long *)(in_FS_OFFSET + 0x28);
  pppppppuVar12 = (uint *******)&pppppppuStack_168;
  apuStack_1d0[0] = &UNK_003fa430;
  pppppppuVar13 = pppppppuVar31;
  pppppppuStack_140 = param_1;
  pppppppuStack_138 = pppppppuVar25;
  pppppppuStack_130 = unaff_R13;
  pppppppuStack_128 = (uint *******)puVar28;
  puStack_120 = puVar30;
  puStack_118 = (undefined *)&puStack_30;
  func_0x003f7650();
  pppppppuVar21 = pppppppuStack_168;
  if (pppppppuStack_168 != (uint *******)0x0) {
    pppppppuStack_1c0 = pppppppuRam0000000000a00738;
    apuStack_1d0[0] = &UNK_003fa450;
    _ZNSt3__15mutex4lockEv();
    auStack_188 = (undefined1  [8])0x0;
    pppppppuStack_180 = (uint *******)0x0;
    pppppppuStack_178 = (uint *******)0x0;
    appppppuStack_1a0[0] = (uint ******)0x0;
    apuStack_1d0[0] = &UNK_003fa479;
    iVar9 = i2d_RSA_PUBKEY(pppppppuVar21,appppppuStack_1a0);
    pppppppuStack_1b0 = pppppppuVar21;
    pppppppuStack_1b8 = pppppppuVar31;
    if (iVar9 < 0) {
      apuStack_1d0[0] = &UNK_003fa4cf;
      cVar7 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4,0);
      if (cVar7 != '\0') {
        apuStack_1d0[0] = &UNK_003fa7b9;
        puVar30 = (undefined4 *)func_0x0099bce0();
        uVar3 = *puVar30;
        apuStack_1d0[0] = &UNK_003fa7e5;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (&pppppppuStack_150,&UNK_001706c4,0x6d,4,0,0xffffffff);
        apuStack_1d0[0] = &UNK_003fa7ed;
        uVar10 = _ZN7android4base10LogMessage6streamEv(&pppppppuStack_150);
        apuStack_1d0[0] = &UNK_003fa801;
        func_0x0032eb30(uVar10,&UNK_00166050,0x1f);
        apuStack_1d0[0] = &UNK_003fa809;
        _ZN7android4base10LogMessageD2Ev(&pppppppuStack_150);
        *puVar30 = uVar3;
      }
      auStack_188 = (undefined1  [8])0x0;
      pppppppuStack_180 = (uint *******)0x0;
      pppppppuStack_178 = (uint *******)0x0;
    }
    else {
      auStack_188 = (undefined1  [8])0x0;
      pppppppuStack_180 = (uint *******)0x0;
      pppppppuStack_178 = (uint *******)0x0;
      apuStack_1d0[0] = &UNK_003fa4ad;
      _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc(auStack_188,0x20,0);
      pppppppuVar25 = pppppppuStack_178;
      if (((ulong)auStack_188 & 1) == 0) {
        pppppppuVar25 = (uint *******)(auStack_188 + 1);
      }
      apuStack_1d0[0] = &UNK_003fa4f1;
      SHA256(appppppuStack_1a0[0],iVar9,pppppppuVar25);
      apuStack_1d0[0] = &UNK_003fa4fd;
      OPENSSL_free(appppppuStack_1a0[0]);
    }
    ppppppuVar14 = ppppppuRam0000000000a00740;
    ppppppuVar29 = (uint ******)ppppppuRam0000000000a00740[1];
    if (ppppppuVar29 != (uint ******)0x0) {
      pppppppuVar25 = (uint *******)(auStack_188 + 1);
      pppppppuVar31 = (uint *******)((ulong)auStack_188 >> 1 & 0x7f);
      if (((ulong)auStack_188 & 1) != 0) {
        pppppppuVar25 = pppppppuStack_178;
        pppppppuVar31 = pppppppuStack_180;
      }
      do {
        while( true ) {
          bVar32 = (*(byte *)(ppppppuVar29 + 4) & 1) != 0;
          pppppppuVar13 = (uint *******)((long)ppppppuVar29 + 0x21);
          if (bVar32) {
            pppppppuVar13 = (uint *******)ppppppuVar29[6];
          }
          pppppppuVar12 = (uint *******)(ulong)(*(byte *)(ppppppuVar29 + 4) >> 1);
          if (bVar32) {
            pppppppuVar12 = (uint *******)ppppppuVar29[5];
          }
          pppppppuVar21 = pppppppuVar31;
          if (pppppppuVar12 < pppppppuVar31) {
            pppppppuVar21 = pppppppuVar12;
          }
          apuStack_1d0[0] = &UNK_003fa563;
          iVar9 = func_0x0099c3a0(pppppppuVar25,pppppppuVar13,pppppppuVar21);
          if (iVar9 != 0) break;
          if (pppppppuVar31 == pppppppuVar12) {
            if (ppppppuVar29 != ppppppuVar14 + 1) {
              unaff_R13 = (uint *******)&UNK_00181c1f;
              pppppppuVar21 = pppppppuStack_1b0;
              goto code_r0x003fa614;
            }
            goto code_r0x003fa59b;
          }
          if (pppppppuVar31 < pppppppuVar12) goto code_r0x003fa530;
code_r0x003fa577:
          ppppppuVar29 = (uint ******)ppppppuVar29[1];
          if (ppppppuVar29 == (uint ******)0x0) goto code_r0x003fa59b;
        }
        if (-1 < iVar9) goto code_r0x003fa577;
code_r0x003fa530:
        ppppppuVar29 = (uint ******)*ppppppuVar29;
      } while (ppppppuVar29 != (uint ******)0x0);
    }
code_r0x003fa59b:
    pppppppuVar13 = (uint *******)auStack_188;
    appppppuStack_1a0[0] = ppppppuVar14;
    apuStack_1d0[0] = &UNK_003fa5c5;
    pppppppuStack_150 = pppppppuVar13;
    lVar15 = _ZZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_10shared_ptrI6rsa_stEEEENS_19__map_value_compareIS7_NS_4pairIKS7_SA_EENS_4lessIS7_EEEENS5_ISF_EEE16__emplace_uniqueB8nn220000IJRKNS_21piecewise_construct_tENS_5tupleIJRSE_EEENSP_IJEEEEEENSD_INS_15__tree_iteratorISB_PNS_11__tree_nodeISB_PvEElEEbEEDpOT_ENKUlSQ_SO_OSR_OSS_E_clESQ_SO_S13_S14_
                       (appppppuStack_1a0,pppppppuVar13,&_ZNSt3__119piecewise_constructE,
                        &pppppppuStack_150,&uStack_151);
    pppppppuVar12 = pppppppuStack_160;
    pppppppuVar21 = pppppppuStack_1b0;
    pppppppuStack_168 = (uint *******)0x0;
    pppppppuStack_160 = (uint *******)0x0;
    *(uint ********)(lVar15 + 0x38) = pppppppuStack_1b0;
    pppppppuVar25 = *(uint ********)(lVar15 + 0x40);
    *(uint ********)(lVar15 + 0x40) = pppppppuVar12;
    unaff_R13 = (uint *******)&UNK_0015e18b;
    if (pppppppuVar25 != (uint *******)0x0) {
      LOCK();
      pppppppuVar12 = pppppppuVar25 + 1;
      ppppppuVar29 = *pppppppuVar12;
      *pppppppuVar12 = (uint ******)((long)*pppppppuVar12 + -1);
      UNLOCK();
      if (ppppppuVar29 == (uint ******)0x0) {
        apuStack_1d0[0] = &UNK_003fa60c;
        (*(code *)(*pppppppuVar25)[2])(pppppppuVar25);
        apuStack_1d0[0] = &UNK_003fa614;
        _ZNSt3__119__shared_weak_count14__release_weakEv(pppppppuVar25);
      }
    }
code_r0x003fa614:
    if (((adb_trace_mask._1_1_ & 4) != 0) && ((int)adb_trace_severity._40_4_ < 2)) {
      pppppppuVar13 = (uint *******)0x0;
      apuStack_1d0[0] = &UNK_003fa6b4;
      cVar7 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1);
      if (cVar7 != '\0') {
        apuStack_1d0[0] = &UNK_003fa6c1;
        puVar30 = (undefined4 *)func_0x0099bce0();
        uStack_1a4 = *puVar30;
        apuStack_1d0[0] = &UNK_003fa6f2;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (&pppppppuStack_150,&UNK_001706c4,0x96,1,0,0xffffffff);
        apuStack_1d0[0] = &UNK_003fa6fa;
        uVar10 = _ZN7android4base10LogMessage6streamEv(&pppppppuStack_150);
        apuStack_1d0[0] = &UNK_003fa705;
        uVar16 = func_0x0099bcf0(unaff_R13);
        apuStack_1d0[0] = &UNK_003fa713;
        uVar10 = func_0x0032eb30(uVar10,unaff_R13,uVar16);
        apuStack_1d0[0] = &UNK_003fa727;
        uVar10 = func_0x0032eb30(uVar10,&UNK_0015e196,0xb);
        apuStack_1d0[0] = &UNK_003fa736;
        uVar10 = func_0x0032e5a0(uVar10,pppppppuStack_1b8);
        apuStack_1d0[0] = &UNK_003fa74a;
        pppppppuVar31 = (uint *******)func_0x0032eb30(uVar10,&UNK_00181c36,0x13);
        pppppppuVar13 = (uint *******)((ulong)auStack_188 >> 1 & 0x7f);
        pppppppuVar12 = (uint *******)(auStack_188 + 1);
        if (((ulong)auStack_188 & 1) != 0) {
          pppppppuVar13 = pppppppuStack_180;
          pppppppuVar12 = pppppppuStack_178;
        }
        pppppppuVar25 = appppppuStack_1a0;
        apuStack_1d0[0] = &UNK_003fa775;
        _ZN3adb3tls21SHA256BitsToHexStringENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEE
                  (pppppppuVar25,pppppppuVar12,pppppppuVar13);
        apuStack_1d0[0] = &UNK_003fa780;
        pppppppuVar13 = pppppppuVar25;
        func_0x0032e5a0(pppppppuVar31);
        if (((ulong)appppppuStack_1a0[0] & 1) != 0) {
          pppppppuVar13 = (uint *******)((ulong)appppppuStack_1a0[0] & 0xfffffffffffffffe);
          apuStack_1d0[0] = &UNK_003fa79d;
          _ZdaPvSt11align_val_t(uStack_190);
        }
        apuStack_1d0[0] = &UNK_003fa7a6;
        _ZN7android4base10LogMessageD2Ev(&pppppppuStack_150);
        *puVar30 = uStack_1a4;
      }
    }
    if (((ulong)auStack_188 & 1) != 0) {
      pppppppuVar13 = (uint *******)((ulong)auStack_188 & 0xfffffffffffffffe);
      apuStack_1d0[0] = &UNK_003fa645;
      _ZdaPvSt11align_val_t(pppppppuStack_178);
    }
    apuStack_1d0[0] = &UNK_003fa651;
    pppppppuVar12 = pppppppuStack_1c0;
    _ZNSt3__115recursive_mutex6unlockEv();
  }
  pppppppuVar24 = pppppppuStack_160;
  if (pppppppuStack_160 != (uint *******)0x0) {
    LOCK();
    pppppppuVar1 = pppppppuStack_160 + 1;
    ppppppuVar29 = *pppppppuVar1;
    *pppppppuVar1 = (uint ******)((long)*pppppppuVar1 + -1);
    UNLOCK();
    if (ppppppuVar29 == (uint ******)0x0) {
      apuStack_1d0[0] = &UNK_003fa675;
      (*(code *)(*pppppppuStack_160)[2])(pppppppuStack_160);
      apuStack_1d0[0] = &UNK_003fa67d;
      pppppppuVar12 = pppppppuVar24;
      _ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_148) {
    return (ulong)(pppppppuVar21 != (uint *******)0x0);
  }
  apuStack_1d0[0] = &UNK_003fa817;
  func_0x0099bd00();
  pppppppuStack_1e0 = pppppppuVar24;
  uStack_34c = (uint)pppppppuVar12;
  uStack_200 = *(ulong *)(in_FS_OFFSET + 0x28);
  puVar30 = &adb_trace_mask;
  pppppppuVar24 = pppppppuVar13;
  pppppppuStack_1f8 = pppppppuVar21;
  pppppppuStack_1f0 = pppppppuVar25;
  pppppppuStack_1e8 = unaff_R13;
  pppppppuStack_1d8 = pppppppuVar31;
  apuStack_1d0[0] = (undefined *)&puStack_118;
  if (((adb_trace_mask._1_1_ & 4) != 0) &&
     (apuStack_1d0[0] = (undefined *)&puStack_118, (int)adb_trace_severity._40_4_ < 2)) {
    pppppppuVar12 = (uint *******)0x1;
    pppppppuVar21 = (uint *******)((ulong)pppppppuVar13 & 0xffffffff);
    puStack_368 = &UNK_003fae5b;
    apuStack_1d0[0] = (undefined *)&puStack_118;
    cVar7 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
    pppppppuVar24 = (uint *******)((ulong)pppppppuVar13 & 0xffffffff);
    if (cVar7 != '\0') {
      puStack_368 = &UNK_003fae6a;
      unaff_R13 = (uint *******)func_0x0099bce0();
      uVar8 = *(uint *)unaff_R13;
      pppppppuVar31 = (uint *******)(ulong)uVar8;
      pppppppuVar25 = appppppuStack_310;
      puStack_368 = &UNK_003fae99;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (pppppppuVar25,&UNK_001706c4,0x156,1,0,0xffffffff);
      puStack_368 = &UNK_003faea1;
      uVar10 = _ZN7android4base10LogMessage6streamEv(pppppppuVar25);
      puStack_368 = &UNK_003faeb5;
      func_0x0032eb30(uVar10,&UNK_00189681,0x1e);
      puStack_368 = &UNK_003faebd;
      pppppppuVar12 = pppppppuVar25;
      _ZN7android4base10LogMessageD2Ev();
      pppppppuVar24 = (uint *******)((ulong)pppppppuVar13 & 0xffffffff);
      *(uint *)unaff_R13 = uVar8;
    }
  }
  if (((ulong)pppppppuVar24 & 1) != 0) {
    puStack_368 = &UNK_003fa883;
    func_0x0099bdb0(appppppuStack_310,0,0x110);
    pppppppuVar25 = (uint *******)&uStack_330;
code_r0x003fa890:
    while( true ) {
      pppppppuVar12 = (uint *******)(ulong)uStack_34c;
      puStack_368 = &UNK_003fa8a7;
      lVar15 = func_0x0099be20(pppppppuVar12,appppppuStack_310,0x110);
      if (lVar15 == -1) goto code_r0x003fa8d0;
      iVar9 = (int)lVar15;
      if (iVar9 == -1) break;
      if (0 < (long)iVar9) {
        pppppppuVar21 = (uint *******)((long)appppppuStack_310 + (long)iVar9);
        pppppppuVar31 = appppppuStack_310;
        do {
          plVar18 = *(long **)(lRam0000000000a00748 + 8);
          plVar17 = (long *)(lRam0000000000a00748 + 8);
          plVar6 = plVar17;
          if (plVar18 != (long *)0x0) {
            do {
              while ((int)*(uint *)pppppppuVar31 < (int)*(uint *)(plVar18 + 4)) {
                plVar18 = (long *)*plVar18;
                if (plVar18 == (long *)0x0) goto code_r0x003fa9c1;
              }
              if (*(uint *)pppppppuVar31 == *(uint *)(plVar18 + 4)) {
                plVar6 = plVar18;
                if (plVar18 != plVar17) goto code_r0x003fa9d5;
                break;
              }
              plVar18 = (long *)plVar18[1];
            } while (plVar18 != (long *)0x0);
          }
code_r0x003fa9c1:
          plVar18 = plVar6;
          puStack_368 = &UNK_003fa9cd;
          cVar7 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(6,0);
          if (cVar7 != '\0') {
            puStack_368 = &UNK_003fac63;
            puStack_348 = (undefined4 *)func_0x0099bce0();
            uStack_33c = *puStack_348;
            puStack_368 = &UNK_003fac94;
            _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                      (pppppppuVar25,&UNK_001706c4,0x16e,6,0,0xffffffff);
            puStack_368 = &UNK_003fac9c;
            uVar10 = _ZN7android4base10LogMessage6streamEv(pppppppuVar25);
            puStack_368 = &UNK_003facb0;
            uVar10 = func_0x0032eb30(uVar10,&UNK_0018671d,0x32);
            puStack_368 = &UNK_003facbb;
            _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(uVar10);
            puStack_368 = &UNK_003facc3;
            _ZN7android4base10LogMessageD2Ev(pppppppuVar25);
            *puStack_348 = uStack_33c;
          }
code_r0x003fa9d5:
          uStack_330 = (uint ******)0x0;
          uStack_328 = 0;
          lStack_320 = 0;
          if ((*(byte *)(plVar18 + 5) & 1) == 0) {
            lStack_320 = plVar18[7];
            uStack_330 = (uint ******)plVar18[5];
            uStack_328 = plVar18[6];
            uVar8 = *(uint *)((long)pppppppuVar31 + 0xc);
          }
          else {
            puStack_368 = &UNK_003faa30;
            func_0x00330340(pppppppuVar25,plVar18[7],plVar18[6]);
            uVar8 = *(uint *)((long)pppppppuVar31 + 0xc);
          }
          if (uVar8 != 0) {
            if (((ulong)uStack_330 & 1) == 0) {
              uVar26 = 0x16;
              if ((byte)uStack_330 == 0x2c) {
code_r0x003faa8a:
                uStack_360 = 0;
                puStack_368 = &UNK_003faaab;
                _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__grow_byEmmmmmm
                          (pppppppuVar25,uVar26,1,uVar26,uVar26,0);
                uVar19 = uVar26;
                goto code_r0x003faaae;
              }
              uVar19 = (ulong)((byte)uStack_330 >> 1);
              uVar26 = (ulong)uStack_330 >> 8;
              uStack_330 = (uint ******)CONCAT71((int7)uVar26,(byte)uStack_330 + 2);
              lVar15 = (long)&uStack_330 + 1;
            }
            else {
              uVar26 = ((ulong)uStack_330 & 0xfffffffffffffffe) - 1;
              uVar19 = uStack_328;
              if (uStack_328 == uVar26) goto code_r0x003faa8a;
code_r0x003faaae:
              uStack_328 = uVar19 + 1;
              lVar15 = lStack_320;
            }
            *(undefined2 *)(lVar15 + uVar19) = 0x2f;
            puStack_368 = &UNK_003faad2;
            _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                      (pppppppuVar25);
          }
          if (((ulong)*pppppppuVar31 & 0x18000000000) == 0) {
            puStack_368 = &UNK_003fab2c;
            cVar7 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(3,0);
            if (cVar7 != '\0') {
              puStack_368 = &UNK_003fab39;
              puStack_348 = (undefined4 *)func_0x0099bce0();
              uStack_33c = *puStack_348;
              puStack_368 = &UNK_003fab71;
              _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                        (auStack_338,&UNK_001706c4,0x17f,3,0);
              puStack_368 = &UNK_003fab79;
              uVar10 = _ZN7android4base10LogMessage6streamEv(auStack_338);
              puStack_368 = &UNK_003fab8d;
              uVar10 = func_0x0032eb30(uVar10,&UNK_0017d6f4,0x16);
              uVar19 = (ulong)uStack_330 >> 1 & 0x7f;
              lVar15 = (long)&uStack_330 + 1;
              if (((ulong)uStack_330 & 1) != 0) {
                uVar19 = uStack_328;
                lVar15 = lStack_320;
              }
              puStack_368 = &UNK_003fabbd;
              uVar10 = func_0x0032eb30(uVar10,lVar15,uVar19);
              puStack_368 = &UNK_003fabd1;
              plVar18 = (long *)func_0x0032eb30(uVar10,&UNK_0016143e,4);
              *(uint *)((long)plVar18 + *(long *)(*plVar18 + -0x18) + 8) =
                   *(uint *)((long)plVar18 + *(long *)(*plVar18 + -0x18) + 8) & 0xffffffb5 | 8;
              puStack_368 = &UNK_003fabf2;
              _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj(plVar18);
code_r0x003fabf2:
              puStack_368 = &UNK_003fabfa;
              _ZN7android4base10LogMessageD2Ev(auStack_338);
              *puStack_348 = uStack_33c;
            }
          }
          else {
            bVar32 = (adb_trace_mask._1_1_ & 4) != 0;
            if (((ulong)*pppppppuVar31 & 0x4000000000000000) == 0) {
              if ((int)adb_trace_severity._40_4_ < 2 && bVar32) {
                puStack_368 = &UNK_003face3;
                cVar7 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
                if (cVar7 != '\0') {
                  puStack_368 = &UNK_003facf0;
                  puStack_348 = (undefined4 *)func_0x0099bce0();
                  uStack_33c = *puStack_348;
                  puStack_368 = &UNK_003fad28;
                  _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                            (auStack_338,&UNK_001706c4,0x17b,1,0);
                  puStack_368 = &UNK_003fad30;
                  uVar10 = _ZN7android4base10LogMessage6streamEv(auStack_338);
                  puStack_368 = &UNK_003fad44;
                  uVar10 = func_0x0032eb30(uVar10,&UNK_00157972,0x16);
                  puStack_368 = &UNK_003fad4f;
                  uVar10 = func_0x0032e5a0(uVar10,pppppppuVar25);
                  puStack_368 = &UNK_003fad63;
                  func_0x0032eb30(uVar10,&UNK_00162c6d,1);
                  puStack_368 = &UNK_003fad6b;
                  _ZN7android4base10LogMessageD2Ev(auStack_338);
                  *puStack_348 = uStack_33c;
                }
              }
              puStack_368 = &UNK_003fab12;
              func_0x003f8ce0(pppppppuVar25);
            }
            else if ((int)adb_trace_severity._40_4_ < 2 && bVar32) {
              puStack_368 = &UNK_003fad8b;
              cVar7 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
              if (cVar7 != '\0') {
                puStack_368 = &UNK_003fad98;
                puStack_348 = (undefined4 *)func_0x0099bce0();
                uStack_33c = *puStack_348;
                puStack_368 = &UNK_003fadd0;
                _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                          (auStack_338,&UNK_001706c4,0x179,1,0);
                puStack_368 = &UNK_003fadd8;
                uVar10 = _ZN7android4base10LogMessage6streamEv(auStack_338);
                puStack_368 = &UNK_003fadec;
                uVar10 = func_0x0032eb30(uVar10,&UNK_00187e90,0x1b);
                puStack_368 = &UNK_003fadf7;
                uVar10 = func_0x0032e5a0(uVar10,pppppppuVar25);
                puStack_368 = &UNK_003fae0b;
                func_0x0032eb30(uVar10,&UNK_00162c6d,1);
                goto code_r0x003fabf2;
              }
            }
          }
          uVar8 = *(uint *)((long)pppppppuVar31 + 0xc);
          if (((ulong)uStack_330 & 1) != 0) {
            puStack_368 = &UNK_003fac40;
            _ZdaPvSt11align_val_t(lStack_320);
          }
          pppppppuVar31 = (uint *******)((long)pppppppuVar31 + (ulong)uVar8 + 0x10);
        } while (pppppppuVar31 < pppppppuVar21);
      }
    }
    puStack_368 = &UNK_003fa8bb;
    unaff_R13 = (uint *******)func_0x0099bce0();
    uVar8 = *(uint *)unaff_R13;
    goto joined_r0x003fa8e2;
  }
code_r0x003fae28:
  if (*(ulong *)(in_FS_OFFSET + 0x28) == uStack_200) {
    return *(ulong *)(in_FS_OFFSET + 0x28);
  }
  puStack_368 = &UNK_003faf3b;
  func_0x0099bd00();
  lStack_398 = *(long *)(in_FS_OFFSET + 0x28);
  pppppppuStack_390 = pppppppuVar21;
  pppppppuStack_388 = pppppppuVar25;
  pppppppuStack_380 = unaff_R13;
  puStack_378 = puVar30;
  pppppppuStack_370 = pppppppuVar31;
  puStack_368 = (undefined *)apuStack_1d0;
  puVar30 = (undefined4 *)_ZNSt3__119__thread_local_dataEv();
  ppppppuVar29 = *pppppppuVar12;
  *pppppppuVar12 = (uint ******)0x0;
  func_0x0099bfc0(*puVar30,ppppppuVar29);
  lStack_3a8 = 0;
  plStack_3a0 = (long *)0x0;
  _ZN10atransport3KeyEv(&lStack_3a8,pppppppuVar12[1]);
  if (lStack_3a8 == 0) {
    if ((((adb_trace_mask._1_1_ & 4) != 0) && ((int)adb_trace_severity._40_4_ < 2)) &&
       (cVar7 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0), cVar7 != '\0')) {
      puVar30 = (undefined4 *)func_0x0099bce0();
      uVar3 = *puVar30;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&lStack_3b8,&UNK_001706c4,0x1ec,1,0,0xffffffff);
      uVar10 = _ZN7android4base10LogMessage6streamEv(&lStack_3b8);
      func_0x0032eb30(uVar10,&UNK_0015e1a2,0x24);
      _ZN7android4base10LogMessageD2Ev(&lStack_3b8);
      *puVar30 = uVar3;
    }
    _ZN10atransport7NextKeyEv(&lStack_3b8,pppppppuVar12[1]);
    plVar18 = plStack_3a0;
    plStack_3a0 = plStack_3b0;
    lStack_3a8 = lStack_3b8;
    lStack_3b8 = 0;
    plStack_3b0 = (long *)0x0;
    if (plVar18 != (long *)0x0) {
      LOCK();
      plVar6 = plVar18 + 1;
      lVar15 = *plVar6;
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (lVar15 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
        _ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
      }
    }
    plVar18 = plStack_3b0;
    if (plStack_3b0 != (long *)0x0) {
      LOCK();
      plVar6 = plStack_3b0 + 1;
      lVar15 = *plVar6;
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (lVar15 == 0) {
        (**(code **)(*plStack_3b0 + 0x10))(plStack_3b0);
        _ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
      }
    }
    if (lStack_3a8 == 0) {
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&lStack_3b8,&UNK_001706c4,0x1ee,6,0,0xffffffff);
      uVar10 = _ZN7android4base10LogMessage6streamEv(&lStack_3b8);
      uVar10 = func_0x0032eb30(uVar10,&UNK_0016608e,0x11);
      func_0x0032eb30(uVar10,&UNK_0015ae05,1);
      _ZN7android4base10LogMessageD2Ev(&lStack_3b8);
    }
  }
  if ((((adb_trace_mask._1_1_ & 4) != 0) && ((int)adb_trace_severity._40_4_ < 2)) &&
     (cVar7 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0), cVar7 != '\0')) {
    puVar30 = (undefined4 *)func_0x0099bce0();
    uVar3 = *puVar30;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (&lStack_3b8,&UNK_001706c4,0x1f1,1,0,0xffffffff);
    uVar10 = _ZN7android4base10LogMessage6streamEv(&lStack_3b8);
    func_0x0032eb30(uVar10,&UNK_00167bf3,0x1b);
    _ZN7android4base10LogMessageD2Ev(&lStack_3b8);
    *puVar30 = uVar3;
  }
  ppppppuVar29 = pppppppuVar12[1];
  _ZNSt3__15mutex4lockEv(ppppppuVar29 + 0x34);
  pppppuVar27 = ppppppuVar29[0x2b];
  pppppuVar23 = ppppppuVar29[0x2c];
  if (pppppuVar23 != (uint *****)0x0) {
    LOCK();
    pppppuVar23[1] = (uint ****)((long)pppppuVar23[1] + 1);
    UNLOCK();
  }
  _ZNSt3__115recursive_mutex6unlockEv(ppppppuVar29 + 0x34);
  cVar7 = (*(code *)(*pppppuVar27)[5])(pppppuVar27,lStack_3a8,0);
  if (pppppuVar23 != (uint *****)0x0) {
    LOCK();
    pppppuVar27 = pppppuVar23 + 1;
    ppppuVar2 = *pppppuVar27;
    *pppppuVar27 = (uint ****)((long)*pppppuVar27 + -1);
    UNLOCK();
    if (ppppuVar2 == (uint ****)0x0) {
      (*(code *)(*pppppuVar23)[2])(pppppuVar23);
      _ZNSt3__119__shared_weak_count14__release_weakEv(pppppuVar23);
    }
  }
  bVar32 = (adb_trace_mask._1_1_ & 4) != 0;
  if (cVar7 == '\0') {
    if (((int)adb_trace_severity._40_4_ < 2 && bVar32) &&
       (cVar7 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0), cVar7 != '\0')) {
      puVar30 = (undefined4 *)func_0x0099bce0();
      uVar3 = *puVar30;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&lStack_3b8,&UNK_001706c4,0x1f6,1,0,0xffffffff);
      uVar10 = _ZN7android4base10LogMessage6streamEv(&lStack_3b8);
      func_0x0032eb30(uVar10,&UNK_00187eb1,0x23);
      _ZN7android4base10LogMessageD2Ev(&lStack_3b8);
      *puVar30 = uVar3;
    }
    _ZN10atransport4KickEv(pppppppuVar12[1]);
  }
  else if (((int)adb_trace_severity._40_4_ < 2 && bVar32) &&
          (cVar7 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0), cVar7 != '\0')) {
    puVar30 = (undefined4 *)func_0x0099bce0();
    uVar3 = *puVar30;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (&lStack_3b8,&UNK_001706c4,500,1,0,0xffffffff);
    uVar10 = _ZN7android4base10LogMessage6streamEv(&lStack_3b8);
    func_0x0032eb30(uVar10,&UNK_00183573,0x2f);
    _ZN7android4base10LogMessageD2Ev(&lStack_3b8);
    *puVar30 = uVar3;
  }
  plVar18 = plStack_3a0;
  if (plStack_3a0 != (long *)0x0) {
    LOCK();
    plVar6 = plStack_3a0 + 1;
    lVar15 = *plVar6;
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*plStack_3a0 + 0x10))(plStack_3a0);
      _ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
    }
  }
  ppppppuVar29 = *pppppppuVar12;
  *pppppppuVar12 = (uint ******)0x0;
  if (ppppppuVar29 != (uint ******)0x0) {
    _ZNSt3__115__thread_structD2Ev(ppppppuVar29);
    _ZdaPvSt11align_val_t(ppppppuVar29,8);
  }
  _ZdaPvSt11align_val_t(pppppppuVar12,0x10);
  if (*(long *)(in_FS_OFFSET + 0x28) != lStack_398) {
    func_0x0099bd00();
    pcVar4 = (code *)swi(3);
    uVar19 = (*pcVar4)();
    return uVar19;
  }
  return 0;
code_r0x003fa8d0:
  puStack_368 = &UNK_003fa8d5;
  unaff_R13 = (uint *******)func_0x0099bce0();
  uVar8 = *(uint *)unaff_R13;
  if (uVar8 == 4) goto code_r0x003fa890;
joined_r0x003fa8e2:
  if (uVar8 == 4) goto code_r0x003fa890;
  if (uVar8 != 0xb) {
    puStack_368 = &UNK_003fa8f9;
    cVar7 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(6,0);
    if (cVar7 != '\0') {
      uVar8 = *(uint *)unaff_R13;
      pppppppuVar21 = (uint *******)(ulong)uVar8;
      puStack_368 = &UNK_003fa920;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (pppppppuVar25,&UNK_001706c4,0x163,6,0);
      puStack_368 = &UNK_003fa928;
      uVar10 = _ZN7android4base10LogMessage6streamEv(pppppppuVar25);
      puStack_368 = &UNK_003fa93c;
      func_0x0032eb30(uVar10,&UNK_0018ae63,0x1c);
      puStack_368 = &UNK_003fa944;
      _ZN7android4base10LogMessageD2Ev(pppppppuVar25);
      *(uint *)unaff_R13 = uVar8;
    }
    goto code_r0x003fa890;
  }
  if (((adb_trace_mask._1_1_ & 4) != 0) && ((int)adb_trace_severity._40_4_ < 2)) {
    pppppppuVar12 = (uint *******)0x1;
    puStack_368 = &UNK_003faed4;
    cVar7 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
    if (cVar7 != '\0') {
      uVar8 = *(uint *)unaff_R13;
      puVar30 = (undefined4 *)(ulong)uVar8;
      pppppppuVar21 = (uint *******)&uStack_330;
      puStack_368 = &UNK_003faf09;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (pppppppuVar21,&UNK_001706c4,0x160,1,0,0xffffffff);
      puStack_368 = &UNK_003faf11;
      uVar10 = _ZN7android4base10LogMessage6streamEv(pppppppuVar21);
      puStack_368 = &UNK_003faf25;
      func_0x0032eb30(uVar10,&UNK_001706e9,0x17);
      puStack_368 = &UNK_003faf2d;
      pppppppuVar12 = pppppppuVar21;
      _ZN7android4base10LogMessageD2Ev();
      *(uint *)unaff_R13 = uVar8;
    }
  }
  goto code_r0x003fae28;
}


