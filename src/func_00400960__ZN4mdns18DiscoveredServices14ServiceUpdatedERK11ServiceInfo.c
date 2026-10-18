// Function: _ZN4mdns18DiscoveredServices14ServiceUpdatedERK11ServiceInfo
// Address: 00400960
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined1 *
_ZN4mdns18DiscoveredServices14ServiceUpdatedERK11ServiceInfo
          (undefined1 *param_1,undefined4 *param_2)

{
  long *plVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  undefined8 *puVar5;
  byte *****pppppbVar6;
  code *pcVar7;
  char cVar8;
  int iVar9;
  long lVar10;
  uint *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined1 *puVar14;
  ulong **ppuVar15;
  byte *extraout_RDX;
  long extraout_RDX_00;
  byte ******ppppppbVar16;
  undefined4 *puVar17;
  undefined **ppuVar18;
  byte *******pppppppbVar19;
  byte ******ppppppbVar20;
  undefined1 *puVar21;
  undefined **ppuVar22;
  long *plVar23;
  undefined4 **unaff_R13;
  undefined4 *puVar24;
  ulong uVar25;
  long in_FS_OFFSET;
  bool bVar26;
  undefined8 uStack_2e8;
  ulong uStack_2e0;
  long lStack_2d8;
  undefined *puStack_2d0;
  undefined *puStack_2c8;
  undefined4 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  byte ******ppppppbStack_2a8;
  undefined8 uStack_2a0;
  ulong **ppuStack_298;
  undefined8 uStack_290;
  undefined1 auStack_288 [8];
  char cStack_280;
  ulong *puStack_278;
  ulong *puStack_270;
  byte *pbStack_268;
  ulong uStack_260;
  undefined8 uStack_258;
  byte *****pppppbStack_248;
  undefined8 uStack_240;
  ulong uStack_238;
  undefined *puStack_230;
  undefined8 uStack_228;
  byte ****ppppbStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
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
  byte *****pppppbStack_120;
  long lStack_118;
  undefined1 *puStack_110;
  undefined **ppuStack_108;
  undefined4 **ppuStack_100;
  undefined4 *puStack_f8;
  undefined1 *puStack_f0;
  undefined *puStack_e8;
  undefined *apuStack_d8 [2];
  undefined8 uStack_c8;
  undefined1 *puStack_c0;
  undefined4 *puStack_b8;
  undefined4 *puStack_b0;
  undefined4 **ppuStack_a8;
  undefined1 *puStack_a0;
  ulong uStack_98;
  undefined *apuStack_90 [2];
  undefined4 *puStack_80;
  undefined1 *puStack_78;
  long lStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_49;
  ulong *puStack_48;
  undefined4 *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  apuStack_90[0] = &UNK_00400989;
  _ZNSt3__15mutex4lockEv();
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  apuStack_90[0] = &UNK_004009a7;
  func_0x004006e0(&uStack_68,param_2);
  puVar17 = (undefined4 *)(param_1 + 0x28);
  apuStack_90[0] = &UNK_004009b6;
  lVar10 = _ZNKSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE11ServiceInfoEENS_22__unordered_map_hasherIS7_NS_4pairIKS7_S8_EENS_4hashIS7_EENS_8equal_toIS7_EEEENS_21__unordered_map_equalIS7_SD_SH_SF_EENS5_ISD_EEE4findIS7_EENS_21__hash_const_iteratorIPNS_11__hash_nodeIS9_PvEEEERKT_
                     (puVar17,&uStack_68);
  puStack_48 = &uStack_68;
  puStack_40 = puVar17;
  if (lVar10 == 0) {
    ppuVar15 = &puStack_48;
    apuStack_90[0] = &UNK_00400ad7;
    lVar10 = _ZZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE11ServiceInfoEENS_22__unordered_map_hasherIS7_NS_4pairIKS7_S8_EENS_4hashIS7_EENS_8equal_toIS7_EEEENS_21__unordered_map_equalIS7_SD_SH_SF_EENS5_ISD_EEE16__emplace_uniqueB8nn220000IJRKNS_21piecewise_construct_tENS_5tupleIJRSC_EEENSR_IJEEEEEENSB_INS_15__hash_iteratorIPNS_11__hash_nodeIS9_PvEEEEbEEDpOT_ENKUlSS_SQ_OST_OSU_E_clESS_SQ_S15_S16_
                       (&puStack_40,&uStack_68,&_ZNSt3__119piecewise_constructE,ppuVar15,&uStack_49)
    ;
    apuStack_90[0] = &UNK_00400ae3;
    puVar24 = param_2;
    _ZN11ServiceInfoaSERKS_(lVar10 + 0x28);
    uVar25 = CONCAT71((int7)((ulong)&uStack_68 >> 8),1);
    goto code_r0x00400bbf;
  }
  ppuVar15 = &puStack_48;
  apuStack_90[0] = &UNK_004009e2;
  lStack_70 = _ZZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE11ServiceInfoEENS_22__unordered_map_hasherIS7_NS_4pairIKS7_S8_EENS_4hashIS7_EENS_8equal_toIS7_EEEENS_21__unordered_map_equalIS7_SD_SH_SF_EENS5_ISD_EEE16__emplace_uniqueB8nn220000IJRKNS_21piecewise_construct_tENS_5tupleIJRSC_EEENSR_IJEEEEEENSB_INS_15__hash_iteratorIPNS_11__hash_nodeIS9_PvEEEEbEEDpOT_ENKUlSS_SQ_OST_OSU_E_clESS_SQ_S15_S16_
                        (&puStack_40,&uStack_68,&_ZNSt3__119piecewise_constructE,ppuVar15,&uStack_49
                        );
  if (*(char *)(param_2 + 0x13) == '\x01') {
    ppuVar15 = (ulong **)(lStack_70 + 0x70);
    if ((*(char *)(lStack_70 + 0x74) != '\0') && (param_2[0x12] == *(int *)ppuVar15))
    goto code_r0x00400a13;
    *(undefined1 *)(lStack_70 + 0x74) = *(undefined1 *)(param_2 + 0x13);
    *(undefined4 *)ppuVar15 = param_2[0x12];
    bVar26 = true;
  }
  else {
code_r0x00400a13:
    bVar26 = false;
  }
  plVar23 = *(long **)(param_2 + 0x18);
  puStack_80 = param_2;
  puStack_78 = param_1;
  if (plVar23 != (long *)0x0) {
    puVar17 = (undefined4 *)(lStack_70 + 0x78);
    unaff_R13 = &puStack_40;
    do {
      plVar1 = plVar23 + 2;
      apuStack_90[0] = &UNK_00400a57;
      lVar10 = _ZNKSt3__112__hash_tableI11IPv6Address15IPv6AddressHashNS_8equal_toIS1_EENS_9allocatorIS1_EEE4findIS1_EENS_21__hash_const_iteratorIPNS_11__hash_nodeIS1_PvEEEERKT_
                         (puVar17,plVar1);
      if (lVar10 == 0) {
        apuStack_90[0] = &UNK_00400a6e;
        puStack_40 = puVar17;
        _ZZNSt3__112__hash_tableI11IPv6Address15IPv6AddressHashNS_8equal_toIS1_EENS_9allocatorIS1_EEE16__emplace_uniqueB8nn220000IJRKS1_EEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS1_PvEEEEbEEDpOT_ENKUlSA_SA_E_clESA_SA_
                  (unaff_R13,plVar1,plVar1);
        bVar26 = true;
      }
      plVar23 = (long *)*plVar23;
    } while (plVar23 != (long *)0x0);
  }
  lVar10 = lStack_70;
  puVar17 = puStack_80;
  if (*(short *)(puStack_80 + 0x1e) == *(short *)(lStack_70 + 0xa0)) {
    puVar24 = (undefined4 *)(lStack_70 + 0xa8);
    apuStack_90[0] = &UNK_00400aa2;
    cVar8 = func_0x00401320(puStack_80 + 0x20);
    if (cVar8 == '\0') {
code_r0x00400b10:
      puVar24 = puVar17 + 0x20;
      apuStack_90[0] = &UNK_00400b1b;
      func_0x00401a90(lVar10 + 0xa8);
      goto code_r0x00400b1b;
    }
    if (bVar26) goto code_r0x00400b1b;
    uVar25 = 0;
  }
  else {
    *(short *)(lStack_70 + 0xa0) = *(short *)(puStack_80 + 0x1e);
    puVar24 = (undefined4 *)(lStack_70 + 0xa8);
    apuStack_90[0] = &UNK_00400b0c;
    cVar8 = func_0x00401320(puStack_80 + 0x20);
    if (cVar8 == '\0') goto code_r0x00400b10;
code_r0x00400b1b:
    param_1 = puStack_78;
    param_2 = puVar17 + 0x20;
    uVar25 = CONCAT71((int7)((ulong)(lVar10 + 0xa8) >> 8),1);
    if ((adb_trace_mask._1_1_ & 0x40) != 0) {
      if ((int)adb_trace_severity._56_4_ < 2) {
        puVar24 = (undefined4 *)0x0;
        apuStack_90[0] = &UNK_00400b4c;
        cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1);
        if (cVar8 != '\0') {
          apuStack_90[0] = &UNK_00400b55;
          param_2 = (undefined4 *)func_0x0099bce0();
          lStack_70 = CONCAT44(lStack_70._4_4_,*param_2);
          unaff_R13 = &puStack_40;
          ppuVar15 = (ulong **)0x1;
          apuStack_90[0] = &UNK_00400b83;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (unaff_R13,&UNK_00184b51,0x70,1,0,0xffffffff);
          apuStack_90[0] = &UNK_00400b8b;
          uVar12 = _ZN7android4base10LogMessage6streamEv(unaff_R13);
          apuStack_90[0] = &UNK_00400b9f;
          uVar12 = func_0x0032eb30(uVar12,&UNK_0016afe0,0xf);
          apuStack_90[0] = &UNK_00400baa;
          puVar24 = puVar17;
          _ZlsRNSt3__113basic_ostreamIcNS_11char_traitsIcEEEERK11ServiceInfo(uVar12);
          apuStack_90[0] = &UNK_00400bb2;
          _ZN7android4base10LogMessageD2Ev(unaff_R13);
          *param_2 = (undefined4)lStack_70;
        }
      }
      goto code_r0x00400bbf;
    }
  }
  param_2 = puVar17 + 0x20;
  param_1 = puStack_78;
code_r0x00400bbf:
  if ((uStack_68 & 1) != 0) {
    puVar24 = (undefined4 *)(uStack_68 & 0xfffffffffffffffe);
    apuStack_90[0] = &UNK_00400bd6;
    _ZdaPvSt11align_val_t(uStack_58);
  }
  apuStack_90[0] = &UNK_00400bde;
  puVar14 = param_1;
  _ZNSt3__115recursive_mutex6unlockEv();
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return (undefined1 *)(uVar25 & 0xffffffff);
  }
  apuStack_90[0] = &UNK_00400c04;
  func_0x0099bd00();
  puStack_c0 = *(undefined1 **)(in_FS_OFFSET + 0x28);
  puStack_e8 = &UNK_00400c39;
  puStack_b8 = puVar17;
  puStack_b0 = param_2;
  ppuStack_a8 = unaff_R13;
  puStack_a0 = param_1;
  uStack_98 = uVar25;
  apuStack_90[0] = &stack0xfffffffffffffff8;
  _ZNSt3__15mutex4lockEv();
  if (((adb_trace_mask._1_1_ & 0x40) != 0) && ((int)adb_trace_severity._56_4_ < 2)) {
    puStack_e8 = &UNK_00400cbe;
    cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
    if (cVar8 != '\0') {
      puStack_e8 = &UNK_00400cc7;
      puVar11 = (uint *)func_0x0099bce0();
      uVar4 = *puVar11;
      unaff_R13 = (undefined4 **)(ulong)uVar4;
      ppuVar15 = (ulong **)0x1;
      puStack_e8 = &UNK_00400cf3;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (apuStack_d8,&UNK_00184b51,0x78,1,0,0xffffffff);
      puStack_e8 = &UNK_00400cfb;
      uVar12 = _ZN7android4base10LogMessage6streamEv(apuStack_d8);
      puStack_e8 = &UNK_00400d0f;
      uVar12 = func_0x0032eb30(uVar12,&UNK_0016aff0,0x10);
      puStack_e8 = &UNK_00400d1a;
      _ZlsRNSt3__113basic_ostreamIcNS_11char_traitsIcEEEERK11ServiceInfo(uVar12,puVar24);
      puStack_e8 = &UNK_00400d22;
      _ZN7android4base10LogMessageD2Ev(apuStack_d8);
      *puVar11 = uVar4;
    }
  }
  puStack_e8 = &UNK_00400c66;
  func_0x004006e0(apuStack_d8,puVar24);
  puStack_e8 = &UNK_00400c71;
  ppuVar18 = apuStack_d8;
  _ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE11ServiceInfoEENS_22__unordered_map_hasherIS7_NS_4pairIKS7_S8_EENS_4hashIS7_EENS_8equal_toIS7_EEEENS_21__unordered_map_equalIS7_SD_SH_SF_EENS5_ISD_EEE14__erase_uniqueIS7_EEmRKT_
            (puVar14 + 0x28);
  if (((byte)apuStack_d8[0] & 1) != 0) {
    ppuVar18 = (undefined **)
               (CONCAT71(apuStack_d8[0]._1_7_,(byte)apuStack_d8[0]) & 0xfffffffffffffffe);
    puStack_e8 = &UNK_00400c88;
    _ZdaPvSt11align_val_t(uStack_c8);
  }
  puStack_e8 = &UNK_00400c90;
  puVar21 = puVar14;
  _ZNSt3__115recursive_mutex6unlockEv();
  if (*(undefined1 **)(in_FS_OFFSET + 0x28) == puStack_c0) {
    return *(undefined1 **)(in_FS_OFFSET + 0x28);
  }
  puStack_e8 = &UNK_00400d2f;
  func_0x0099bd00();
  lStack_118 = *(long *)(in_FS_OFFSET + 0x28);
  puStack_110 = puVar14;
  ppuStack_108 = apuStack_d8;
  ppuStack_100 = unaff_R13;
  puStack_f8 = puVar24;
  puStack_f0 = puVar14 + 0x28;
  puStack_e8 = (undefined *)apuStack_90;
  _ZNSt3__15mutex4lockEv(ppuVar18);
  uStack_2e8 = (byte ******)0x0;
  uStack_2e0 = 0;
  lStack_2d8 = 0;
  bVar26 = (*(byte *)ppuVar15 & 1) != 0;
  puStack_278 = (ulong *)((long)ppuVar15 + 1);
  if (bVar26) {
    puStack_278 = ppuVar15[2];
  }
  puStack_270 = (ulong *)(ulong)(*(byte *)ppuVar15 >> 1);
  if (bVar26) {
    puStack_270 = ppuVar15[1];
  }
  bVar26 = (*extraout_RDX & 1) != 0;
  pbStack_268 = extraout_RDX + 1;
  if (bVar26) {
    pbStack_268 = *(byte **)(extraout_RDX + 0x10);
  }
  uStack_260 = (ulong)(*extraout_RDX >> 1);
  if (bVar26) {
    uStack_260 = *(ulong *)(extraout_RDX + 8);
  }
  uStack_258 = 0x1ad;
  pppppbStack_248 = &ppppbStack_220;
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
  uStack_1c0 = 0;
  uStack_1b8 = 0;
  uStack_1d0 = 0;
  uStack_1c8 = 0;
  uStack_1e0 = 0;
  uStack_1d8 = 0;
  uStack_1f0 = 0;
  uStack_1e8 = 0;
  uStack_200 = 0;
  uStack_1f8 = 0;
  uStack_210 = 0;
  uStack_208 = 0;
  ppppbStack_220 = (byte ****)0x0;
  uStack_218 = 0;
  uStack_240 = 0x100;
  uStack_238 = 0;
  puStack_230 = &UNK_00358010;
  uStack_228 = 0;
  puStack_2d0 = &UNK_0015b132;
  puStack_2c8 = &UNK_0015b137;
  uStack_2c0 = 0;
  uStack_2b8 = 0;
  uStack_2b0 = 2;
  uStack_2a0 = 2;
  ppuStack_298 = &puStack_278;
  uStack_290 = 0x1ad;
  ppppppbStack_2a8 = &pppppbStack_248;
  auStack_288[0] = 0;
  cStack_280 = '\0';
  ppuVar22 = &puStack_2d0;
  pppppppbVar19 = &ppppppbStack_2a8;
  pppppbStack_120 = pppppbStack_248;
  func_0x003580e0();
  if (cStack_280 == '\x01') {
    ppuVar22 = (undefined **)auStack_288;
    _ZNSt3__16localeD2Ev();
  }
  pppppbVar6 = pppppbStack_120;
  uVar25 = uStack_238;
  if (uStack_238 < 0xfffffffffffffff7) {
    if (uStack_238 < 0x17) {
      uStack_2e8 = (byte ******)CONCAT71(uStack_2e8._1_7_,(char)uStack_238 * '\x02');
      lVar13 = (long)&uStack_2e8 + 1;
    }
    else {
      lVar10 = 0x1a;
      if ((uStack_238 | 7) != 0x17) {
        lVar10 = (uStack_238 | 7) + 1;
      }
      lVar13 = _Znwm(lVar10);
      uStack_2e8 = (byte ******)(lVar10 + 1);
      uStack_2e0 = uVar25;
      lStack_2d8 = lVar13;
    }
    func_0x0099bd90(lVar13,pppppbVar6,uVar25);
    *(undefined1 *)(lVar13 + uVar25) = 0;
    if (pppppbVar6 != &ppppbStack_220) {
      _ZdaPvSt11align_val_t(pppppbVar6,uStack_240);
    }
    pppppppbVar19 = (byte *******)&uStack_2e8;
    lVar10 = _ZNKSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE11ServiceInfoEENS_22__unordered_map_hasherIS7_NS_4pairIKS7_S8_EENS_4hashIS7_EENS_8equal_toIS7_EEEENS_21__unordered_map_equalIS7_SD_SH_SF_EENS5_ISD_EEE4findIS7_EENS_21__hash_const_iteratorIPNS_11__hash_nodeIS9_PvEEEERKT_
                       (ppuVar18 + 5);
    if (lVar10 == 0) {
      *puVar21 = 0;
    }
    else {
      ppppppbStack_2a8 = (byte ******)&uStack_2e8;
      pppppbStack_248 = (byte *****)(ppuVar18 + 5);
      lVar13 = _ZZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE11ServiceInfoEENS_22__unordered_map_hasherIS7_NS_4pairIKS7_S8_EENS_4hashIS7_EENS_8equal_toIS7_EEEENS_21__unordered_map_equalIS7_SD_SH_SF_EENS5_ISD_EEE16__emplace_uniqueB8nn220000IJRKNS_21piecewise_construct_tENS_5tupleIJRSC_EEENSR_IJEEEEEENSB_INS_15__hash_iteratorIPNS_11__hash_nodeIS9_PvEEEEbEEDpOT_ENKUlSS_SQ_OST_OSU_E_clESS_SQ_S15_S16_
                         (&pppppbStack_248,&uStack_2e8,&_ZNSt3__119piecewise_constructE,
                          &ppppppbStack_2a8,&puStack_278);
      pppppppbVar19 = (byte *******)(lVar13 + 0x28);
      _ZN11ServiceInfoC2ERKS_(puVar21);
    }
    puVar21[0xa8] = lVar10 != 0;
    if (((ulong)uStack_2e8 & 1) != 0) {
      pppppppbVar19 = (byte *******)((ulong)uStack_2e8 & 0xfffffffffffffffe);
      _ZdaPvSt11align_val_t(lStack_2d8);
    }
    _ZNSt3__115recursive_mutex6unlockEv();
    ppuVar22 = ppuVar18;
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_118) {
      return puVar21;
    }
  }
  else {
    func_0x0032e8f0();
  }
  func_0x0099bd00();
  _ZNSt3__15mutex4lockEv();
  plVar23 = (long *)ppuVar22[7];
  if (plVar23 != (long *)0x0) {
    do {
      bVar2 = *(byte *)(plVar23 + 8);
      if ((bVar2 & 1) == 0) {
        ppppppbVar16 = (byte ******)(ulong)(bVar2 >> 1);
      }
      else {
        ppppppbVar16 = (byte ******)plVar23[9];
      }
      bVar3 = *(byte *)pppppppbVar19;
      if ((bVar3 & 1) == 0) {
        ppppppbVar20 = (byte ******)(ulong)(bVar3 >> 1);
      }
      else {
        ppppppbVar20 = pppppppbVar19[1];
      }
      if (ppppppbVar16 == ppppppbVar20) {
        if ((bVar2 & 1) == 0) {
          lVar10 = (long)plVar23 + 0x41;
        }
        else {
          lVar10 = plVar23[10];
        }
        ppppppbVar16 = (byte ******)((long)pppppppbVar19 + 1);
        if ((bVar3 & 1) != 0) {
          ppppppbVar16 = pppppppbVar19[2];
        }
        iVar9 = func_0x0099bf90(lVar10);
        if (iVar9 == 0) {
          ppuVar18 = *(undefined ***)(extraout_RDX_00 + 0x20);
          if (ppuVar18 == (undefined **)0x0) {
            func_0x00343f00();
            _ZNSt3__15mutex4lockEv();
            for (puVar5 = (undefined8 *)ppuVar18[7]; ppuVar22 = ppuVar18,
                puVar5 != (undefined8 *)0x0; puVar5 = (undefined8 *)*puVar5) {
              pppppbVar6 = ppppppbVar16[4];
              if (pppppbVar6 == (byte *****)0x0) {
                func_0x00343f00();
                pcVar7 = (code *)swi(3);
                puVar14 = (undefined1 *)(*pcVar7)();
                return puVar14;
              }
              (*(code *)(*pppppbVar6)[6])(pppppbVar6,puVar5 + 5);
            }
            break;
          }
          (**(code **)(*ppuVar18 + 0x30))(ppuVar18,plVar23 + 5);
        }
      }
      plVar23 = (long *)*plVar23;
    } while (plVar23 != (long *)0x0);
  }
  puVar14 = (undefined1 *)pthread_mutex_unlock(ppuVar22);
  return puVar14;
}


