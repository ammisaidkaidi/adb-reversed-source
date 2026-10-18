// Function: _Z21StartAdbMdnsDiscoveryv
// Address: 00411460
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _Z21StartAdbMdnsDiscoveryv(void)

{
  undefined8 *puVar1;
  code *pcVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  char cVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined *in_RCX;
  undefined *puVar14;
  undefined8 extraout_RDX;
  uint *unaff_RBX;
  uint *puVar15;
  ulong uVar16;
  undefined *puVar17;
  int iVar18;
  undefined1 *puVar19;
  uint *puVar20;
  uint uVar21;
  uint *in_R9;
  undefined1 *unaff_R14;
  ulong unaff_R15;
  long lVar22;
  long lVar23;
  long in_FS_OFFSET;
  bool bVar24;
  uint uStack_310;
  bool bStack_30c;
  long *plStack_308;
  long *plStack_300;
  long *plStack_2f8;
  undefined8 uStack_2e8;
  ulong uStack_2e0;
  long lStack_2d8;
  undefined8 uStack_2c8;
  ulong uStack_2c0;
  long lStack_2b8;
  undefined8 uStack_2b0;
  undefined *puStack_2a8;
  ulong uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 *puStack_288;
  long lStack_280;
  undefined8 *puStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_258;
  ulong uStack_250;
  ulong uStack_248;
  undefined1 auStack_238 [8];
  ulong uStack_230;
  undefined8 *puStack_228;
  undefined8 uStack_220;
  undefined1 auStack_218 [8];
  char cStack_210;
  undefined8 uStack_208;
  ulong uStack_200;
  long lStack_1f8;
  ulong uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 *puStack_1d8;
  undefined8 *puStack_1d0;
  ulong uStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  long lStack_a8;
  uint *puStack_a0;
  uint auStack_68 [2];
  long lStack_60;
  uint *puStack_58;
  undefined1 *puStack_50;
  ulong uStack_48;
  undefined *puStack_40;
  undefined1 auStack_30 [8];
  long lStack_28;
  
  lStack_28 = *(long *)(in_FS_OFFSET + 0x28);
  iVar18 = 0x411540;
  puVar17 = &UNK_004115f0;
  puStack_40 = &UNK_0041148d;
  adbmdns_start();
  if (((adb_trace_mask._1_1_ & 0x40) != 0) && ((int)adb_trace_severity._56_4_ < 2)) {
    iVar18 = 1;
    puVar17 = (undefined *)0x0;
    puStack_40 = &UNK_004114cd;
    cVar6 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc();
    if (cVar6 != '\0') {
      puStack_40 = &UNK_004114d6;
      unaff_RBX = (uint *)func_0x0099bce0();
      uVar7 = *unaff_RBX;
      unaff_R15 = (ulong)uVar7;
      unaff_R14 = auStack_30;
      in_RCX = (undefined *)0x1;
      in_R9 = (uint *)0xffffffff;
      puStack_40 = &UNK_00411502;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i(unaff_R14,&UNK_0018af5d,0x85,1,0);
      puStack_40 = &UNK_0041150a;
      uVar8 = _ZN7android4base10LogMessage6streamEv(unaff_R14);
      puVar17 = &UNK_0017efb7;
      puStack_40 = &UNK_0041151e;
      func_0x0032eb30(uVar8,&UNK_0017efb7,0x1a);
      puStack_40 = &UNK_00411526;
      puVar19 = unaff_R14;
      _ZN7android4base10LogMessageD2Ev();
      iVar18 = (int)puVar19;
      *unaff_RBX = uVar7;
    }
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_28) {
    return;
  }
  puStack_40 = &UNK_00411533;
  func_0x0099bd00();
  uVar21 = 5 - iVar18;
  uVar7 = 1;
  if (iVar18 - 1U < 5) {
    uVar7 = uVar21;
  }
  lStack_60 = *(long *)(in_FS_OFFSET + 0x28);
  iVar18 = 0xa00630;
  puVar14 = in_RCX;
  puVar15 = unaff_RBX;
  puStack_58 = unaff_RBX;
  puStack_50 = unaff_R14;
  uStack_48 = unaff_R15;
  puStack_40 = &stack0xfffffffffffffff8;
  if (((adb_trace_mask._1_1_ & 0x80) != 0) &&
     (iVar18 = 0xa00640, puStack_40 = &stack0xfffffffffffffff8,
     (int)adb_trace_severity._60_4_ <= (int)uVar7)) {
    puVar15 = auStack_68;
    puVar14 = (undefined *)(ulong)uVar7;
    uVar21 = 0;
    in_R9 = (uint *)0xffffffff;
    puStack_40 = &stack0xfffffffffffffff8;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i(puVar15);
    uVar8 = _ZN7android4base10LogMessage6streamEv(puVar15);
    uVar9 = func_0x0099bcf0(in_RCX);
    func_0x0032eb30(uVar8,in_RCX,uVar9);
    puVar20 = puVar15;
    _ZN7android4base10LogMessageD2Ev();
    iVar18 = (int)puVar20;
    puVar17 = in_RCX;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_60) {
    return;
  }
  func_0x0099bd00();
  lStack_a8 = *(long *)(in_FS_OFFSET + 0x28);
  puStack_278 = (undefined8 *)0x0;
  uStack_270 = 0;
  puStack_288 = (undefined8 *)0x0;
  lStack_280 = 0;
  uStack_268 = 0x3f800000;
  puStack_a0 = puVar15;
  if (auStack_68[0] != 0) {
    lVar22 = 0;
    do {
      puStack_1d8 = *(undefined8 **)(lStack_60 + lVar22);
      puStack_1d0 = (undefined8 *)((undefined8 *)(lStack_60 + lVar22))[1];
      auStack_238 = (undefined1  [8])&puStack_288;
      _ZZNSt3__112__hash_tableI11IPv6Address15IPv6AddressHashNS_8equal_toIS1_EENS_9allocatorIS1_EEE16__emplace_uniqueB8nn220000IJRKS1_EEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS1_PvEEEEbEEDpOT_ENKUlSA_SA_E_clESA_SA_
                (auStack_238,&puStack_1d8,&puStack_1d8);
      lVar22 = lVar22 + 0x10;
    } while ((ulong)auStack_68[0] << 4 != lVar22);
  }
  if (uVar21 == 0) {
    uVar7 = 0;
    uStack_310 = 0;
  }
  else {
    uStack_310 = *in_R9 & 0xff;
    uVar7 = *in_R9 & 0xffffff00;
  }
  bStack_30c = uVar21 != 0;
  plStack_308 = (long *)0x0;
  plStack_300 = (long *)0x0;
  plStack_2f8 = (long *)0x0;
  if ((int)puStack_50 != 0) {
    uVar12 = (ulong)puStack_50 & 0xffffffff;
    lVar22 = 0;
    do {
      uStack_258 = 0;
      uStack_250 = 0;
      uStack_248 = 0;
      uVar8 = *(undefined8 *)(uStack_48 + lVar22);
      uVar21 = *(uint *)(uStack_48 + 8 + lVar22);
      uVar16 = (ulong)uVar21;
      if (uVar16 < 0x17) {
        uStack_258 = (ulong)(byte)((char)uVar21 * '\x02');
        uVar10 = (long)&uStack_258 + 1;
      }
      else {
        lVar23 = (uVar16 | 7) + 1;
        if ((uVar16 | 7) == 0x17) {
          lVar23 = 0x1a;
        }
        uVar10 = _Znwm(lVar23);
        uStack_258 = lVar23 + 1;
        uStack_250 = uVar16;
        uStack_248 = uVar10;
      }
      lVar23 = (long)&uStack_2c8 + 1;
      func_0x0099bd90(uVar10,uVar8,uVar16);
      *(undefined1 *)(uVar10 + uVar16) = 0;
      uStack_2c8 = 0;
      uStack_2c0 = 0;
      lStack_2b8 = 0;
      uVar8 = *(undefined8 *)(uStack_48 + 0x10 + lVar22);
      uVar21 = *(uint *)(uStack_48 + 0x18 + lVar22);
      uVar16 = (ulong)uVar21;
      if (uVar16 < 0x17) {
        uStack_2c8 = (ulong)(byte)((char)uVar21 * '\x02');
      }
      else {
        lVar11 = (uVar16 | 7) + 1;
        if ((uVar16 | 7) == 0x17) {
          lVar11 = 0x1a;
        }
        lVar23 = _Znwm(lVar11);
        uStack_2c8 = lVar11 + 1;
        uStack_2c0 = uVar16;
        lStack_2b8 = lVar23;
      }
      func_0x0099bd90(lVar23,uVar8,uVar16);
      *(undefined1 *)(lVar23 + uVar16) = 0;
      uStack_2e8 = 0;
      uStack_2e0 = 0;
      uStack_200 = uStack_258 >> 1 & 0x7f;
      uStack_208 = (long)&uStack_258 + 1;
      if ((uStack_258 & 1) != 0) {
        uStack_200 = uStack_250;
        uStack_208 = uStack_248;
      }
      bVar24 = (uStack_2c8 & 1) == 0;
      lStack_1f8 = lStack_2b8;
      if (bVar24) {
        lStack_1f8 = (long)&uStack_2c8 + 1;
      }
      lStack_2d8 = 0;
      uStack_1f0 = uStack_2c8 >> 1 & 0x7f;
      if (!bVar24) {
        uStack_1f0 = uStack_2c0;
      }
      uStack_1e8 = 0x1ad;
      puStack_1d8 = &uStack_1b0;
      uStack_c0 = 0;
      uStack_b8 = 0;
      uStack_d0 = 0;
      uStack_c8 = 0;
      uStack_e0 = 0;
      uStack_d8 = 0;
      uStack_f0 = 0;
      uStack_e8 = 0;
      uStack_100 = 0;
      uStack_f8 = 0;
      uStack_110 = 0;
      uStack_108 = 0;
      uStack_120 = 0;
      uStack_118 = 0;
      uStack_130 = 0;
      uStack_128 = 0;
      uStack_140 = 0;
      uStack_138 = 0;
      uStack_150 = 0;
      uStack_148 = 0;
      uStack_160 = 0;
      uStack_158 = 0;
      uStack_170 = 0;
      uStack_168 = 0;
      uStack_180 = 0;
      uStack_178 = 0;
      uStack_190 = 0;
      uStack_188 = 0;
      uStack_1a0 = 0;
      uStack_198 = 0;
      uStack_1b0 = 0;
      uStack_1a8 = 0;
      puStack_1d0 = (undefined8 *)0x100;
      uStack_1c8 = 0;
      puStack_1c0 = &UNK_00358010;
      uStack_1b8 = 0;
      uStack_2b0 = &UNK_00169739;
      puStack_2a8 = &UNK_0016973e;
      uStack_2a0 = uStack_2a0 & 0xffffffff00000000;
      uStack_298 = 0;
      uStack_290 = 2;
      uStack_230 = 2;
      puStack_228 = &uStack_208;
      uStack_220 = 0x1ad;
      auStack_238 = (undefined1  [8])&puStack_1d8;
      auStack_218[0] = 0;
      cStack_210 = '\0';
      puStack_b0 = puStack_1d8;
      func_0x003580e0(&uStack_2b0,auStack_238);
      if (cStack_210 == '\x01') {
        _ZNSt3__16localeD2Ev(auStack_218);
      }
      puVar13 = puStack_b0;
      uVar16 = uStack_1c8;
      if (0xfffffffffffffff6 < uStack_1c8) goto code_r0x0041204d;
      if (uStack_1c8 < 0x17) {
        uStack_2e8 = CONCAT71(uStack_2e8._1_7_,(char)uStack_1c8 * '\x02');
        lVar11 = (long)&uStack_2e8 + 1;
      }
      else {
        lVar23 = (uStack_1c8 | 7) + 1;
        if ((uStack_1c8 | 7) == 0x17) {
          lVar23 = 0x1a;
        }
        lVar11 = _Znwm(lVar23);
        uStack_2e8 = lVar23 + 1;
        uStack_2e0 = uVar16;
        lStack_2d8 = lVar11;
      }
      func_0x0099bd90(lVar11,puVar13,uVar16);
      *(undefined1 *)(lVar11 + uVar16) = 0;
      if (puVar13 != &uStack_1b0) {
        _ZdaPvSt11align_val_t(puVar13,puStack_1d0);
      }
      uVar16 = uStack_2e8 >> 1 & 0x7f;
      lVar23 = (long)&uStack_2e8 + 1;
      if ((uStack_2e8 & 1) != 0) {
        uVar16 = uStack_2e0;
        lVar23 = lStack_2d8;
      }
      puStack_1d8 = (undefined8 *)0x0;
      puStack_1d0 = (undefined8 *)0x0;
      uStack_1c8 = 0;
      _ZNSt3__16vectorIhNS_9allocatorIhEEE18__insert_with_sizeB8nn220000INS_11__wrap_iterIPcEES7_EENS5_IPhEENS5_IPKhEET_T0_l
                (&puStack_1d8,0,lVar23,lVar23 + uVar16);
      puVar13 = puStack_1d8;
      plVar3 = plStack_300;
      if (plStack_300 < plStack_2f8) {
        *plStack_300 = 0;
        plStack_300[1] = 0;
        plStack_300[2] = 0;
        lVar23 = (long)puStack_1d0 - (long)puStack_1d8;
        if (lVar23 != 0) {
          if (lVar23 < 0) goto code_r0x00412052;
          lVar11 = _Znwm(lVar23);
          *plVar3 = lVar11;
          plVar3[1] = lVar11;
          plVar3[2] = lVar11 + lVar23;
          func_0x0099bda0(lVar11,puVar13,lVar23);
          plVar3[1] = lVar11 + lVar23;
        }
        plStack_300 = plVar3 + 3;
      }
      else {
        plStack_300 = (long *)_ZNSt3__16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEE24__emplace_back_slow_pathIJRS3_EEEPS3_DpOT_
                                        (&plStack_308,&puStack_1d8);
      }
      if (puStack_1d8 != (undefined8 *)0x0) {
        puStack_1d0 = puStack_1d8;
        _ZdaPvSt11align_val_t(puStack_1d8,uStack_1c8 - (long)puStack_1d8);
      }
      if ((uStack_2e8 & 1) != 0) {
        _ZdaPvSt11align_val_t(lStack_2d8,uStack_2e8 & 0xfffffffffffffffe);
      }
      if ((uStack_2c8 & 1) != 0) {
        _ZdaPvSt11align_val_t(lStack_2b8,uStack_2c8 & 0xfffffffffffffffe);
      }
      if ((uStack_258 & 1) != 0) {
        _ZdaPvSt11align_val_t(uStack_248,uStack_258 & 0xfffffffffffffffe);
      }
      lVar22 = lVar22 + 0x20;
    } while (uVar12 << 5 != lVar22);
  }
  uStack_148 = 0;
  uStack_140 = 0;
  uStack_158 = 0;
  uStack_150 = 0;
  uStack_168 = 0;
  uStack_160 = 0;
  uStack_178 = 0;
  uStack_170 = 0;
  uStack_188 = 0;
  uStack_180 = 0;
  uStack_198 = 0;
  uStack_190 = 0;
  uStack_1a8 = 0;
  uStack_1a0 = 0;
  uStack_1b8 = 0;
  uStack_1b0 = 0;
  uStack_1c8 = 0;
  puStack_1c0 = (undefined *)0x0;
  puStack_1d8 = (undefined8 *)0x0;
  puStack_1d0 = (undefined8 *)0x0;
  uStack_138 = 0;
  uVar12 = func_0x0099bcf0(puVar17);
  if (uVar12 < 0xfffffffffffffff7) {
    if (uVar12 < 0x17) {
      auStack_238[0] = (char)uVar12 * '\x02';
      puVar13 = (undefined8 *)(auStack_238 + 1);
    }
    else {
      lVar22 = 0x1a;
      if ((uVar12 | 7) != 0x17) {
        lVar22 = (uVar12 | 7) + 1;
      }
      puVar13 = (undefined8 *)_Znwm(lVar22);
      auStack_238 = (undefined1  [8])(lVar22 + 1);
      uStack_230 = uVar12;
      puStack_228 = puVar13;
    }
    func_0x0099bda0(puVar13,puVar17,uVar12);
    *(undefined1 *)((long)puVar13 + uVar12) = 0;
    uVar12 = func_0x0099bcf0(extraout_RDX);
    if (uVar12 < 0xfffffffffffffff7) {
      if (uVar12 < 0x17) {
        uStack_208 = CONCAT71(uStack_208._1_7_,(char)uVar12 * '\x02');
        lVar23 = (long)&uStack_208 + 1;
      }
      else {
        lVar22 = 0x1a;
        if ((uVar12 | 7) != 0x17) {
          lVar22 = (uVar12 | 7) + 1;
        }
        lVar23 = _Znwm(lVar22);
        uStack_208 = lVar22 + 1;
        uStack_200 = uVar12;
        lStack_1f8 = lVar23;
      }
      func_0x0099bda0(lVar23,extraout_RDX,uVar12);
      *(undefined1 *)(lVar23 + uVar12) = 0;
      puVar17 = (undefined *)func_0x0099bcf0(puVar14);
      puVar15 = puStack_58;
      if (puVar17 < (undefined *)0xfffffffffffffff7) {
        if (puVar17 < (undefined *)0x17) {
          uStack_2b0 = (undefined *)CONCAT71(uStack_2b0._1_7_,(char)puVar17 * '\x02');
          uVar12 = (long)&uStack_2b0 + 1;
        }
        else {
          lVar22 = 0x1a;
          if (((ulong)puVar17 | 7) != 0x17) {
            lVar22 = ((ulong)puVar17 | 7) + 1;
          }
          uVar12 = _Znwm(lVar22);
          uStack_2b0 = (undefined *)(lVar22 + 1);
          puStack_2a8 = puVar17;
          uStack_2a0 = uVar12;
        }
        func_0x0099bda0(uVar12,puVar14,puVar17);
        puVar17[uVar12] = 0;
        uStack_258._0_5_ = CONCAT14(bStack_30c,uStack_310 | uVar7);
        _ZN11ServiceInfoC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEES8_S8_RKNS0_8optionalI11IPv4AddressEERKNS0_13unordered_setI11IPv6Address15IPv6AddressHashNS0_8equal_toISF_EENS4_ISF_EEEEtRKNS0_6vectorINSN_IhNS4_IhEEEENS4_ISP_EEEE
                  (&puStack_1d8,auStack_238,&uStack_208,&uStack_2b0,&uStack_258,&puStack_288,
                   (ulong)puVar15 & 0xffff,&plStack_308);
        if (((ulong)uStack_2b0 & 1) != 0) {
          _ZdaPvSt11align_val_t(uStack_2a0,(ulong)uStack_2b0 & 0xfffffffffffffffe);
        }
        if ((uStack_208 & 1) != 0) {
          _ZdaPvSt11align_val_t(lStack_1f8,uStack_208 & 0xfffffffffffffffe);
        }
        if (((ulong)auStack_238 & 1) != 0) {
          _ZdaPvSt11align_val_t(puStack_228,(ulong)auStack_238 & 0xfffffffffffffffe);
        }
        _Z23OnServiceReceiverResultRK11ServiceInfo16ServiceInfoState(&puStack_1d8,iVar18 + -1);
        _ZN11ServiceInfoD2Ev(&puStack_1d8);
        plVar5 = plStack_308;
        plVar3 = plStack_300;
        puVar13 = puStack_288;
        puVar4 = puStack_278;
        if (plStack_308 != (long *)0x0) {
          for (; plVar5 != plVar3; plVar3 = plVar3 + -3) {
            lVar22 = plVar3[-3];
            if (lVar22 != 0) {
              plVar3[-2] = lVar22;
              _ZdaPvSt11align_val_t(lVar22,plVar3[-1] - lVar22);
            }
          }
          plStack_300 = plVar5;
          _ZdaPvSt11align_val_t(plStack_308,(long)plStack_2f8 - (long)plStack_308);
          puVar13 = puStack_288;
          puVar4 = puStack_278;
        }
        while (puVar4 != (undefined8 *)0x0) {
          puVar1 = (undefined8 *)*puVar4;
          puStack_288 = puVar13;
          _ZdaPvSt11align_val_t(puVar4,0x20);
          puVar13 = puStack_288;
          puVar4 = puVar1;
        }
        puStack_288 = (undefined8 *)0x0;
        if (puVar13 != (undefined8 *)0x0) {
          _ZdaPvSt11align_val_t(puVar13,lStack_280 << 3);
        }
        if (*(long *)(in_FS_OFFSET + 0x28) == lStack_a8) {
          return;
        }
        goto code_r0x00412057;
      }
    }
  }
code_r0x0041204d:
  func_0x0032e8f0();
code_r0x00412052:
  func_0x00330ca0();
code_r0x00412057:
  func_0x0099bd00();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


