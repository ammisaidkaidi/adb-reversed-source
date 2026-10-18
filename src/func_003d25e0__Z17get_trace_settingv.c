// Function: _Z17get_trace_settingv
// Address: 003d25e0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Removing unreachable block (ram,0x007dc67c) */

long * _Z17get_trace_settingv(long *param_1)

{
  undefined1 auVar1 [16];
  undefined8 *puVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  uint *puVar10;
  long *plVar11;
  code *pcVar12;
  long *plVar13;
  undefined4 *puVar14;
  undefined8 uVar15;
  long lVar16;
  long *plVar17;
  uint uVar18;
  undefined1 *puVar19;
  char *pcVar20;
  byte *pbVar21;
  undefined4 uVar22;
  undefined *puVar23;
  undefined8 *puVar24;
  byte *pbVar25;
  long in_FS_OFFSET;
  undefined1 auStack_3e8 [8];
  long lStack_3e0;
  long *plStack_3d8;
  long lStack_3c8;
  code *pcStack_3c0;
  long *plStack_3a8;
  undefined1 auStack_398 [8];
  code *pcStack_390;
  long *plStack_388;
  long *plStack_378;
  long *plStack_360;
  undefined8 *puStack_358;
  byte *pbStack_350;
  long lStack_348;
  byte *pbStack_340;
  undefined *puStack_338;
  undefined4 *puStack_328;
  undefined *puStack_320;
  byte bStack_318;
  undefined1 uStack_317;
  undefined1 uStack_316;
  undefined5 uStack_315;
  undefined8 uStack_308;
  undefined1 auStack_300 [16];
  long lStack_2f0;
  undefined1 auStack_2e0 [16];
  undefined1 auStack_2d0 [16];
  undefined8 uStack_2c0;
  undefined1 auStack_2b0 [16];
  long lStack_2a0;
  undefined4 uStack_298;
  undefined1 uStack_290;
  undefined4 uStack_28f;
  undefined4 uStack_278;
  undefined1 uStack_270;
  undefined4 uStack_26f;
  undefined4 uStack_258;
  undefined1 uStack_250;
  undefined4 uStack_24f;
  undefined3 uStack_24b;
  undefined1 uStack_248;
  undefined4 uStack_238;
  undefined1 uStack_230;
  undefined4 uStack_22f;
  undefined3 uStack_22b;
  undefined1 uStack_228;
  undefined4 uStack_218;
  undefined1 uStack_210;
  undefined4 uStack_20f;
  undefined4 uStack_1f8;
  undefined1 uStack_1f0;
  undefined4 uStack_1ef;
  undefined4 uStack_1d8;
  undefined1 uStack_1d0;
  undefined4 uStack_1cf;
  undefined1 uStack_1cb;
  undefined4 uStack_1b8;
  undefined1 uStack_1b0;
  undefined4 uStack_1af;
  undefined3 uStack_1ab;
  undefined1 uStack_1a8;
  undefined4 uStack_198;
  undefined1 uStack_190;
  undefined8 uStack_18f;
  undefined1 uStack_187;
  undefined1 uStack_186;
  undefined4 uStack_178;
  undefined1 uStack_170;
  undefined4 uStack_16f;
  undefined1 uStack_16b;
  undefined4 uStack_158;
  undefined1 uStack_150;
  undefined8 uStack_14f;
  undefined1 uStack_147;
  undefined4 uStack_138;
  byte bStack_130;
  undefined4 uStack_12f;
  undefined1 uStack_12b;
  undefined4 uStack_118;
  byte bStack_110;
  undefined4 uStack_10f;
  undefined3 uStack_10b;
  undefined1 uStack_108;
  undefined4 uStack_f8;
  undefined1 uStack_f0;
  undefined4 uStack_ef;
  undefined1 uStack_eb;
  undefined1 uStack_ea;
  undefined4 uStack_d8;
  undefined1 uStack_d0;
  undefined7 uStack_cf;
  undefined4 uStack_c8;
  undefined1 uStack_c4;
  undefined4 uStack_b8;
  undefined1 uStack_b0;
  undefined4 uStack_af;
  undefined1 uStack_ab;
  undefined4 uStack_98;
  undefined1 uStack_90;
  undefined8 uStack_8f;
  undefined2 uStack_87;
  undefined1 uStack_85;
  undefined4 uStack_78;
  long *plStack_70;
  long *plStack_68;
  undefined *apuStack_40 [2];
  
  apuStack_40[0] = &UNK_003d25fd;
  puVar6 = (undefined *)func_0x0099be70(&UNK_001722da);
  puVar23 = &UNK_00162ac9;
  if (puVar6 != (undefined *)0x0) {
    puVar23 = puVar6;
  }
  apuStack_40[0] = &UNK_003d2613;
  puVar6 = puVar23;
  uVar7 = func_0x0099bcf0();
  if (uVar7 < 0xfffffffffffffff7) {
    if (uVar7 < 0x17) {
      *(char *)param_1 = (char)uVar7 * '\x02';
      pcVar20 = (char *)((long)param_1 + 1);
    }
    else {
      lVar16 = 0x1a;
      if ((uVar7 | 7) != 0x17) {
        lVar16 = (uVar7 | 7) + 1;
      }
      apuStack_40[0] = &UNK_003d2653;
      pcVar20 = (char *)_Znwm(lVar16);
      *param_1 = lVar16 + 1;
      param_1[1] = uVar7;
      param_1[2] = (long)pcVar20;
    }
    apuStack_40[0] = &UNK_003d2672;
    func_0x0099bd90(pcVar20,puVar23,uVar7);
    pcVar20[uVar7] = '\0';
    return param_1;
  }
  apuStack_40[0] = &UNK_003d268e;
  func_0x0032e8f0();
  plStack_70 = *(long **)(in_FS_OFFSET + 0x28);
  adb_trace_mask = 0;
  auStack_2b0._0_3_ = 0x3102;
  uStack_298 = 0xffffffff;
  uStack_290 = 6;
  uStack_28f = 0x6c6c61;
  uStack_278 = 0xffffffff;
  uStack_270 = 6;
  uStack_26f = 0x626461;
  uStack_258 = 0;
  uStack_250 = 0xe;
  uStack_24f = 0x6b636f73;
  uStack_24b = 0x737465;
  uStack_248 = 0;
  uStack_238 = 1;
  uStack_230 = 0xe;
  uStack_22f = 0x6b636170;
  uStack_22b = 0x737465;
  uStack_228 = 0;
  uStack_218 = 2;
  uStack_210 = 6;
  uStack_20f = 0x787772;
  uStack_1f8 = 4;
  uStack_1f0 = 6;
  uStack_1ef = 0x627375;
  uStack_1d8 = 5;
  uStack_1d0 = 8;
  uStack_1cf = 0x636e7973;
  uStack_1cb = 0;
  uStack_1b8 = 6;
  uStack_1b0 = 0xe;
  uStack_1af = 0x64737973;
  uStack_1ab = 0x737065;
  uStack_1a8 = 0;
  uStack_198 = 7;
  uStack_190 = 0x12;
  uStack_18f = 0x726f70736e617274;
  uStack_187 = 0x74;
  uStack_186 = 0;
  uStack_178 = 3;
  uStack_170 = 8;
  uStack_16f = 0x7077646a;
  uStack_16b = 0;
  uStack_158 = 8;
  uStack_150 = 0x10;
  uStack_14f = 0x7365636976726573;
  uStack_147 = 0;
  uStack_138 = 9;
  bStack_130 = 8;
  uStack_12f = 0x68747561;
  uStack_12b = 0;
  uStack_118 = 10;
  bStack_110 = 0xe;
  uStack_10b = 0x746e65;
  uStack_10f = 0x76656466;
  uStack_108 = 0;
  uStack_f8 = 0xb;
  uStack_f0 = 10;
  uStack_eb = 0x6c;
  uStack_ef = 0x6c656873;
  uStack_ea = 0;
  uStack_d8 = 0xc;
  uStack_d0 = 0x16;
  uStack_cf = 0x656d6572636e69;
  uStack_c8 = 0x6c61746e;
  uStack_c4 = 0;
  uStack_b8 = 0xd;
  uStack_b0 = 8;
  uStack_af = 0x736e646d;
  uStack_ab = 0;
  uStack_98 = 0xe;
  uStack_90 = 0x14;
  uStack_8f = 0x6174732d736e646d;
  uStack_87 = 0x6b63;
  uStack_85 = 0;
  uStack_78 = 0xf;
  auStack_2d0 = (undefined1  [16])0x0;
  auStack_2e0 = (undefined1  [16])0x0;
  uStack_2c0 = 0x3f800000;
  pbVar21 = &bStack_130;
  pbVar25 = &bStack_110;
  puStack_338 = &UNK_003d29b1;
  puStack_320 = puVar6;
  plStack_68 = param_1;
  apuStack_40[0] = &stack0xfffffffffffffff8;
  auStack_300._0_8_ = auStack_2e0;
  _ZZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_22__unordered_map_hasherIS7_NS_4pairIKS7_iEENS_4hashIS7_EENS_8equal_toIS7_EEEENS_21__unordered_map_equalIS7_SC_SG_SE_EENS5_ISC_EEE16__emplace_uniqueB8nn220000IJRKSC_EEENSA_INS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEEDpOT_ENKUlRSB_SO_E_clESZ_SO_
            (auStack_300,auStack_2b0);
  puStack_338 = &UNK_003d29ca;
  auStack_300._0_8_ = auStack_2e0;
  _ZZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_22__unordered_map_hasherIS7_NS_4pairIKS7_iEENS_4hashIS7_EENS_8equal_toIS7_EEEENS_21__unordered_map_equalIS7_SC_SG_SE_EENS5_ISC_EEE16__emplace_uniqueB8nn220000IJRKSC_EEENSA_INS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEEDpOT_ENKUlRSB_SO_E_clESZ_SO_
            (auStack_300,&uStack_290);
  puStack_338 = &UNK_003d29e3;
  auStack_300._0_8_ = auStack_2e0;
  _ZZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_22__unordered_map_hasherIS7_NS_4pairIKS7_iEENS_4hashIS7_EENS_8equal_toIS7_EEEENS_21__unordered_map_equalIS7_SC_SG_SE_EENS5_ISC_EEE16__emplace_uniqueB8nn220000IJRKSC_EEENSA_INS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEEDpOT_ENKUlRSB_SO_E_clESZ_SO_
            (auStack_300,&uStack_270);
  puStack_338 = &UNK_003d29fc;
  auStack_300._0_8_ = auStack_2e0;
  _ZZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_22__unordered_map_hasherIS7_NS_4pairIKS7_iEENS_4hashIS7_EENS_8equal_toIS7_EEEENS_21__unordered_map_equalIS7_SC_SG_SE_EENS5_ISC_EEE16__emplace_uniqueB8nn220000IJRKSC_EEENSA_INS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEEDpOT_ENKUlRSB_SO_E_clESZ_SO_
            (auStack_300,&uStack_250);
  puStack_338 = &UNK_003d2a15;
  auStack_300._0_8_ = auStack_2e0;
  _ZZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_22__unordered_map_hasherIS7_NS_4pairIKS7_iEENS_4hashIS7_EENS_8equal_toIS7_EEEENS_21__unordered_map_equalIS7_SC_SG_SE_EENS5_ISC_EEE16__emplace_uniqueB8nn220000IJRKSC_EEENSA_INS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEEDpOT_ENKUlRSB_SO_E_clESZ_SO_
            (auStack_300,&uStack_230);
  puStack_338 = &UNK_003d2a2e;
  auStack_300._0_8_ = auStack_2e0;
  _ZZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_22__unordered_map_hasherIS7_NS_4pairIKS7_iEENS_4hashIS7_EENS_8equal_toIS7_EEEENS_21__unordered_map_equalIS7_SC_SG_SE_EENS5_ISC_EEE16__emplace_uniqueB8nn220000IJRKSC_EEENSA_INS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEEDpOT_ENKUlRSB_SO_E_clESZ_SO_
            (auStack_300,&uStack_210);
  puStack_338 = &UNK_003d2a47;
  auStack_300._0_8_ = auStack_2e0;
  _ZZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_22__unordered_map_hasherIS7_NS_4pairIKS7_iEENS_4hashIS7_EENS_8equal_toIS7_EEEENS_21__unordered_map_equalIS7_SC_SG_SE_EENS5_ISC_EEE16__emplace_uniqueB8nn220000IJRKSC_EEENSA_INS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEEDpOT_ENKUlRSB_SO_E_clESZ_SO_
            (auStack_300,&uStack_1f0);
  puStack_338 = &UNK_003d2a60;
  auStack_300._0_8_ = auStack_2e0;
  _ZZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_22__unordered_map_hasherIS7_NS_4pairIKS7_iEENS_4hashIS7_EENS_8equal_toIS7_EEEENS_21__unordered_map_equalIS7_SC_SG_SE_EENS5_ISC_EEE16__emplace_uniqueB8nn220000IJRKSC_EEENSA_INS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEEDpOT_ENKUlRSB_SO_E_clESZ_SO_
            (auStack_300,&uStack_1d0);
  puStack_338 = &UNK_003d2a79;
  auStack_300._0_8_ = auStack_2e0;
  _ZZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_22__unordered_map_hasherIS7_NS_4pairIKS7_iEENS_4hashIS7_EENS_8equal_toIS7_EEEENS_21__unordered_map_equalIS7_SC_SG_SE_EENS5_ISC_EEE16__emplace_uniqueB8nn220000IJRKSC_EEENSA_INS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEEDpOT_ENKUlRSB_SO_E_clESZ_SO_
            (auStack_300,&uStack_1b0);
  puStack_338 = &UNK_003d2a92;
  auStack_300._0_8_ = auStack_2e0;
  _ZZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_22__unordered_map_hasherIS7_NS_4pairIKS7_iEENS_4hashIS7_EENS_8equal_toIS7_EEEENS_21__unordered_map_equalIS7_SC_SG_SE_EENS5_ISC_EEE16__emplace_uniqueB8nn220000IJRKSC_EEENSA_INS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEEDpOT_ENKUlRSB_SO_E_clESZ_SO_
            (auStack_300,&uStack_190);
  puStack_338 = &UNK_003d2aab;
  auStack_300._0_8_ = auStack_2e0;
  _ZZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_22__unordered_map_hasherIS7_NS_4pairIKS7_iEENS_4hashIS7_EENS_8equal_toIS7_EEEENS_21__unordered_map_equalIS7_SC_SG_SE_EENS5_ISC_EEE16__emplace_uniqueB8nn220000IJRKSC_EEENSA_INS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEEDpOT_ENKUlRSB_SO_E_clESZ_SO_
            (auStack_300,&uStack_170);
  puStack_338 = &UNK_003d2ac0;
  auStack_300._0_8_ = auStack_2e0;
  _ZZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_22__unordered_map_hasherIS7_NS_4pairIKS7_iEENS_4hashIS7_EENS_8equal_toIS7_EEEENS_21__unordered_map_equalIS7_SC_SG_SE_EENS5_ISC_EEE16__emplace_uniqueB8nn220000IJRKSC_EEENSA_INS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEEDpOT_ENKUlRSB_SO_E_clESZ_SO_
            (auStack_300,&uStack_150,&uStack_150);
  puStack_338 = &UNK_003d2ad5;
  auStack_300._0_8_ = auStack_2e0;
  _ZZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_22__unordered_map_hasherIS7_NS_4pairIKS7_iEENS_4hashIS7_EENS_8equal_toIS7_EEEENS_21__unordered_map_equalIS7_SC_SG_SE_EENS5_ISC_EEE16__emplace_uniqueB8nn220000IJRKSC_EEENSA_INS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEEDpOT_ENKUlRSB_SO_E_clESZ_SO_
            (auStack_300,pbVar21,pbVar21);
  puStack_338 = &UNK_003d2aea;
  auStack_300._0_8_ = auStack_2e0;
  _ZZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_22__unordered_map_hasherIS7_NS_4pairIKS7_iEENS_4hashIS7_EENS_8equal_toIS7_EEEENS_21__unordered_map_equalIS7_SC_SG_SE_EENS5_ISC_EEE16__emplace_uniqueB8nn220000IJRKSC_EEENSA_INS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEEDpOT_ENKUlRSB_SO_E_clESZ_SO_
            (auStack_300,pbVar25,pbVar25);
  puStack_338 = &UNK_003d2b03;
  auStack_300._0_8_ = auStack_2e0;
  _ZZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_22__unordered_map_hasherIS7_NS_4pairIKS7_iEENS_4hashIS7_EENS_8equal_toIS7_EEEENS_21__unordered_map_equalIS7_SC_SG_SE_EENS5_ISC_EEE16__emplace_uniqueB8nn220000IJRKSC_EEENSA_INS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEEDpOT_ENKUlRSB_SO_E_clESZ_SO_
            (auStack_300,&uStack_f0);
  puStack_338 = &UNK_003d2b1c;
  auStack_300._0_8_ = auStack_2e0;
  _ZZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_22__unordered_map_hasherIS7_NS_4pairIKS7_iEENS_4hashIS7_EENS_8equal_toIS7_EEEENS_21__unordered_map_equalIS7_SC_SG_SE_EENS5_ISC_EEE16__emplace_uniqueB8nn220000IJRKSC_EEENSA_INS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEEDpOT_ENKUlRSB_SO_E_clESZ_SO_
            (auStack_300,&uStack_d0);
  puStack_338 = &UNK_003d2b32;
  auStack_300._0_8_ = auStack_2e0;
  _ZZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_22__unordered_map_hasherIS7_NS_4pairIKS7_iEENS_4hashIS7_EENS_8equal_toIS7_EEEENS_21__unordered_map_equalIS7_SC_SG_SE_EENS5_ISC_EEE16__emplace_uniqueB8nn220000IJRKSC_EEENSA_INS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEEDpOT_ENKUlRSB_SO_E_clESZ_SO_
            (auStack_300,&uStack_b0);
  auStack_300._0_8_ = auStack_2e0;
  puStack_338 = &UNK_003d2b48;
  _ZZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_22__unordered_map_hasherIS7_NS_4pairIKS7_iEENS_4hashIS7_EENS_8equal_toIS7_EEEENS_21__unordered_map_equalIS7_SC_SG_SE_EENS5_ISC_EEE16__emplace_uniqueB8nn220000IJRKSC_EEENSA_INS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEEDpOT_ENKUlRSB_SO_E_clESZ_SO_
            (auStack_300,&uStack_90);
  lVar16 = 0x220;
  do {
    if ((auStack_2b0[lVar16] & 1) != 0) {
      puStack_338 = &UNK_003d2b7d;
      _ZdaPvSt11align_val_t
                (*(undefined8 *)((long)&lStack_2a0 + lVar16),
                 *(ulong *)(auStack_2b0 + lVar16) & 0xfffffffffffffffe);
    }
    lVar16 = lVar16 + -0x20;
  } while (lVar16 != -0x20);
  lVar16 = auStack_2d0._8_8_ + -2;
  if (lVar16 != 0x10) {
    puStack_338 = &UNK_003d2b9c;
    cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(6,0);
    if (cVar3 != '\0') {
      puStack_338 = &UNK_003d30e6;
      puVar10 = (uint *)func_0x0099bce0();
      uVar18 = *puVar10;
      pbVar21 = (byte *)(ulong)uVar18;
      pbVar25 = auStack_2b0;
      puStack_338 = &UNK_003d3115;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (pbVar25,&UNK_0015c7d6,0x8d,6,0,0xffffffff);
      puStack_338 = &UNK_003d311d;
      uVar15 = _ZN7android4base10LogMessage6streamEv(pbVar25);
      puStack_338 = &UNK_003d3131;
      uVar15 = func_0x0032eb30(uVar15,&UNK_0015b0a1,0x15);
      puStack_338 = &UNK_003d313e;
      uVar15 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar15,0x10);
      puStack_338 = &UNK_003d3152;
      uVar15 = func_0x0032eb30(uVar15,&UNK_0017d5d7,0x16);
      puStack_338 = &UNK_003d315d;
      _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar15,lVar16);
      puStack_338 = &UNK_003d3165;
      _ZN7android4base10LogMessageD2Ev(pbVar25);
      *puVar10 = uVar18;
    }
  }
  auStack_2b0 = (undefined1  [16])0x0;
  lStack_2a0 = 0;
  auStack_300._0_4_ = 0x202c04;
  puStack_338 = &UNK_003d2bec;
  _ZN7android4base5SplitERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_
            (auStack_2b0,puStack_320,auStack_300);
  if ((auStack_300[0] & 1) != 0) {
    puStack_338 = &UNK_003d2c0c;
    _ZdaPvSt11align_val_t(lStack_2f0,auStack_300._0_8_ & 0xfffffffffffffffe);
  }
  puVar24 = (undefined8 *)auStack_2b0._8_8_;
  for (lVar16 = auStack_2b0._0_8_; (undefined8 *)lVar16 != puVar24; lVar16 = lVar16 + 0x18) {
    auStack_300 = (undefined1  [16])0x0;
    lStack_2f0 = 0;
    bStack_318 = 2;
    uStack_317 = 0x3a;
    uStack_316 = 0;
    puStack_338 = &UNK_003d2c6a;
    _ZN7android4base5SplitERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_
              (auStack_300,lVar16,&bStack_318);
    if ((bStack_318 & 1) != 0) {
      puStack_338 = &UNK_003d2c8a;
      _ZdaPvSt11align_val_t
                (uStack_308,
                 CONCAT53(uStack_315,CONCAT12(uStack_316,CONCAT11(uStack_317,bStack_318))) &
                 0xfffffffffffffffe);
    }
    uVar15 = auStack_300._0_8_;
    if ((ulong)(((long)(auStack_300._8_8_ - auStack_300._0_8_) >> 3) * -0x5555555555555555) < 2) {
code_r0x003d2d94:
      uVar22 = 1;
    }
    else {
      bVar4 = *(byte *)(auStack_300._0_8_ + 0x18);
      if ((bVar4 & 1) == 0) {
        if (bVar4 >> 1 == 1) goto code_r0x003d2cf1;
code_r0x003d2d80:
        puStack_338 = &UNK_003d2d8c;
        cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4,0);
        if (cVar3 != '\0') {
          puStack_338 = &UNK_003d2f4a;
          puVar14 = (undefined4 *)func_0x0099bce0();
          puStack_320 = (undefined *)CONCAT44(puStack_320._4_4_,*puVar14);
          pbVar25 = &bStack_318;
          puStack_338 = &UNK_003d2f7e;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (pbVar25,&UNK_0015c7d6,0xa4,4,0,0xffffffff);
          puStack_338 = &UNK_003d2f86;
          uVar9 = _ZN7android4base10LogMessage6streamEv(pbVar25);
          puStack_338 = &UNK_003d2f9a;
          uVar9 = func_0x0032eb30(uVar9,&UNK_0015b0b7,0x1f);
          puStack_338 = &UNK_003d2fa5;
          uVar9 = func_0x0032e5a0(uVar9,uVar15);
          puStack_338 = &UNK_003d2fb9;
          uVar9 = func_0x0032eb30(uVar9,&UNK_00186281,2);
          puStack_338 = &UNK_003d2fc6;
          func_0x0032e5a0(uVar9,uVar15 + 0x18);
          puStack_338 = &UNK_003d2fce;
          _ZN7android4base10LogMessageD2Ev(pbVar25);
          *puVar14 = puStack_320._0_4_;
        }
        goto code_r0x003d2d94;
      }
      if (*(long *)(auStack_300._0_8_ + 0x20) != 1) goto code_r0x003d2d80;
code_r0x003d2cf1:
      if ((bVar4 & 1) == 0) {
        pcVar20 = (char *)(auStack_300._0_8_ + 0x19);
      }
      else {
        pcVar20 = *(char **)(auStack_300._0_8_ + 0x28);
      }
      uVar22 = 0;
      if (*pcVar20 != 'v') {
        if ((bVar4 & 1) == 0) {
          cVar3 = *(char *)(auStack_300._0_8_ + 0x19);
        }
        else {
          cVar3 = **(char **)(auStack_300._0_8_ + 0x28);
        }
        if (cVar3 == 'd') goto code_r0x003d2d94;
        if ((bVar4 & 1) == 0) {
          pcVar20 = (char *)(auStack_300._0_8_ + 0x19);
        }
        else {
          pcVar20 = *(char **)(auStack_300._0_8_ + 0x28);
        }
        uVar22 = 2;
        if (*pcVar20 != 'i') {
          if ((bVar4 & 1) == 0) {
            pcVar20 = (char *)(auStack_300._0_8_ + 0x19);
          }
          else {
            pcVar20 = *(char **)(auStack_300._0_8_ + 0x28);
          }
          uVar22 = 3;
          if (*pcVar20 != 'w') {
            if ((bVar4 & 1) == 0) {
              pcVar20 = (char *)(auStack_300._0_8_ + 0x19);
            }
            else {
              pcVar20 = *(char **)(auStack_300._0_8_ + 0x28);
            }
            uVar22 = 4;
            if (*pcVar20 != 'e') goto code_r0x003d2d80;
          }
        }
      }
    }
    puStack_338 = &UNK_003d2da9;
    lVar8 = _ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPKN4absl12lts_2026052613time_internal4cctz9time_zone4ImplEEENS_22__unordered_map_hasherIS7_NS_4pairIKS7_SF_EENS_4hashIS7_EENS_8equal_toIS7_EEEENS_21__unordered_map_equalIS7_SK_SO_SM_EENS5_ISK_EEE4findIS7_EENS_15__hash_iteratorIPNS_11__hash_nodeISG_PvEEEERKT_
                      (auStack_2e0,uVar15);
    if (lVar8 == 0) {
      puStack_338 = &UNK_003d2dec;
      cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4,0);
      iVar5 = 3;
      if (cVar3 != '\0') {
        puStack_338 = &UNK_003d2dff;
        puStack_328 = (undefined4 *)func_0x0099bce0();
        puStack_320 = (undefined *)CONCAT44(puStack_320._4_4_,*puStack_328);
        pbVar25 = &bStack_318;
        puStack_338 = &UNK_003d2e37;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (pbVar25,&UNK_0015c7d6,0xaa,4,0,0xffffffff);
        puStack_338 = &UNK_003d2e3f;
        uVar9 = _ZN7android4base10LogMessage6streamEv(pbVar25);
        puStack_338 = &UNK_003d2e53;
        uVar9 = func_0x0032eb30(uVar9,&UNK_00162e08,0x14);
        puStack_338 = &UNK_003d2e5e;
        func_0x0032e5a0(uVar9,uVar15);
        puStack_338 = &UNK_003d2e66;
        _ZN7android4base10LogMessageD2Ev(pbVar25);
        *puStack_328 = puStack_320._0_4_;
      }
    }
    else {
      iVar5 = *(int *)(lVar8 + 0x28);
      if ((long)iVar5 == -1) {
        adb_trace_mask = 0xffffffff;
        iVar5 = 2;
        adb_trace_severity._0_4_ = uVar22;
        adb_trace_severity._4_4_ = uVar22;
        adb_trace_severity._8_4_ = uVar22;
        adb_trace_severity._12_4_ = uVar22;
        adb_trace_severity._16_4_ = uVar22;
        adb_trace_severity._20_4_ = uVar22;
        adb_trace_severity._24_4_ = uVar22;
        adb_trace_severity._28_4_ = uVar22;
        adb_trace_severity._32_4_ = uVar22;
        adb_trace_severity._36_4_ = uVar22;
        adb_trace_severity._40_4_ = uVar22;
        adb_trace_severity._44_4_ = uVar22;
        adb_trace_severity._48_4_ = uVar22;
        adb_trace_severity._52_4_ = uVar22;
        adb_trace_severity._56_4_ = uVar22;
        adb_trace_severity._60_4_ = uVar22;
      }
      else {
        adb_trace_mask = adb_trace_mask | 1 << ((byte)iVar5 & 0x1f);
        *(undefined4 *)(adb_trace_severity + (long)iVar5 * 4) = uVar22;
        iVar5 = 0;
      }
    }
    pbVar21 = (byte *)auStack_300._0_8_;
    if ((byte *)auStack_300._0_8_ != (byte *)0x0) {
      for (pbVar25 = (byte *)auStack_300._8_8_; pbVar21 != pbVar25; pbVar25 = pbVar25 + -0x18) {
        if ((pbVar25[-0x18] & 1) != 0) {
          puStack_338 = &UNK_003d2f01;
          _ZdaPvSt11align_val_t
                    (*(undefined8 *)(pbVar25 + -8),*(ulong *)(pbVar25 + -0x18) & 0xfffffffffffffffe)
          ;
        }
      }
      auStack_300._8_8_ = pbVar21;
      puStack_338 = &UNK_003d2f2d;
      _ZdaPvSt11align_val_t(auStack_300._0_8_,lStack_2f0 - auStack_300._0_8_);
    }
    if ((iVar5 != 3) && (iVar5 != 0)) break;
  }
  if (adb_trace_mask != 0) {
    puStack_338 = &UNK_003d2ff0;
    _ZN7android4base21SetMinimumLogSeverityENS0_11LogSeverityE(0);
  }
  uVar15 = auStack_2b0._0_8_;
  if (auStack_2b0._0_8_ != 0) {
    for (puVar24 = (undefined8 *)auStack_2b0._8_8_; (undefined8 *)uVar15 != puVar24;
        puVar24 = (undefined8 *)((long)puVar24 + -0x18)) {
      if ((*(byte *)((long)puVar24 + -0x18) & 1) != 0) {
        puStack_338 = &UNK_003d3031;
        _ZdaPvSt11align_val_t
                  (*(undefined8 *)((long)puVar24 + -8),
                   *(ulong *)((long)puVar24 + -0x18) & 0xfffffffffffffffe);
      }
    }
    auStack_2b0._8_8_ = uVar15;
    puStack_338 = &UNK_003d3050;
    _ZdaPvSt11align_val_t(auStack_2b0._0_8_,lStack_2a0 - auStack_2b0._0_8_);
  }
  puVar2 = (undefined8 *)auStack_2d0._0_8_;
  while (puVar2 != (undefined8 *)0x0) {
    puVar24 = (undefined8 *)*puVar2;
    if ((*(byte *)(puVar2 + 2) & 1) != 0) {
      puStack_338 = &UNK_003d30df;
      _ZdaPvSt11align_val_t(puVar2[4],puVar2[2] & 0xfffffffffffffffe);
    }
    puStack_338 = &UNK_003d30bd;
    _ZdaPvSt11align_val_t(puVar2,0x30);
    puVar2 = puVar24;
  }
  lVar16 = auStack_2e0._0_8_;
  uVar15 = auStack_2e0._8_8_;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = auStack_2e0._8_8_;
  auStack_2e0 = auVar1 << 0x40;
  if (lVar16 != 0) {
    puStack_338 = &UNK_003d3083;
    _ZdaPvSt11align_val_t(lVar16,uVar15 << 3);
  }
  if (*(long **)(in_FS_OFFSET + 0x28) == plStack_70) {
    return *(long **)(in_FS_OFFSET + 0x28);
  }
  puStack_338 = &UNK_003d3172;
  func_0x0099bd00();
  plStack_360 = *(long **)(in_FS_OFFSET + 0x28);
  auStack_3e8 = (undefined1  [8])0x0;
  lStack_3e0 = 0;
  plStack_3d8 = (long *)0x0;
  puStack_358 = puVar2;
  pbStack_350 = pbVar21;
  lStack_348 = (long)puVar24;
  pbStack_340 = pbVar25;
  puStack_338 = (undefined *)apuStack_40;
  lVar8 = func_0x0099be70(&UNK_0016e937);
  if (lVar8 != 0) {
    func_0x0032ea60(auStack_3e8,lVar8);
    func_0x0099c290(&UNK_0016e937);
  }
  auStack_398 = (undefined1  [8])0x99ea20;
  pcStack_390 = _Z9AdbLoggerN7android4base5LogIdENS0_11LogSeverityEPKcS4_jS4_;
  lStack_3c8 = 0x99ea68;
  pcStack_3c0 = _ZN7android4base14DefaultAborterEPKc;
  plVar17 = (long *)auStack_398;
  plStack_3a8 = &lStack_3c8;
  plStack_378 = (long *)auStack_398;
  _ZN7android4base11InitLoggingEPPcONSt3__18functionIFvNS0_5LogIdENS0_11LogSeverityEPKcS8_jS8_EEEONS4_IFvS8_EEE
            (lVar16,auStack_398,&lStack_3c8);
  uVar18 = (uint)plVar17;
  if (plStack_3a8 == &lStack_3c8) {
    lVar16 = 0x20;
code_r0x003d3258:
    (**(code **)(*plStack_3a8 + lVar16))();
  }
  else {
    lVar16 = 0x28;
    if (plStack_3a8 != (long *)0x0) goto code_r0x003d3258;
  }
  if (plStack_378 == (long *)auStack_398) {
    lVar16 = 0x20;
code_r0x003d3278:
    (**(code **)(*plStack_378 + lVar16))();
  }
  else {
    lVar16 = 0x28;
    if (plStack_378 != (long *)0x0) goto code_r0x003d3278;
  }
  if (((ulong)auStack_3e8 & 1) == 0) {
    if (auStack_3e8[0] >> 1 != 0) goto code_r0x003d32a0;
  }
  else if (lStack_3e0 != 0) {
code_r0x003d32a0:
    plVar17 = plStack_3d8;
    if (((ulong)auStack_3e8 & 1) == 0) {
      plVar17 = (long *)(auStack_3e8 + 1);
    }
    func_0x0099c2a0(&UNK_0016e937,plVar17,1);
    uVar18 = (uint)plVar17;
  }
  plVar11 = (long *)func_0x0099be70(&UNK_001722da);
  plVar17 = (long *)&UNK_00162ac9;
  if (plVar11 != (long *)0x0) {
    plVar17 = plVar11;
  }
  plVar11 = plVar17;
  pcVar12 = (code *)func_0x0099bcf0();
  if ((code *)0xfffffffffffffff6 < pcVar12) {
    func_0x0032e8f0();
    goto code_r0x003d348f;
  }
  auStack_398 = (undefined1  [8])0x0;
  pcStack_390 = (code *)0x0;
  plStack_388 = (long *)0x0;
  if (pcVar12 < (code *)0x17) {
    auStack_398._1_7_ = 0;
    auStack_398[0] = (char)pcVar12 * '\x02';
    plVar13 = (long *)(auStack_398 + 1);
  }
  else {
    lVar16 = 0x1a;
    if (((ulong)pcVar12 | 7) != 0x17) {
      lVar16 = ((ulong)pcVar12 | 7) + 1;
    }
    plVar13 = (long *)_Znwm(lVar16);
    auStack_398 = (undefined1  [8])(lVar16 + 1);
    pcStack_390 = pcVar12;
    plStack_388 = plVar13;
  }
  plVar11 = plVar13;
  func_0x0099bd90(plVar13,plVar17,pcVar12);
  uVar18 = (uint)plVar17;
  *(code *)((long)plVar13 + (long)pcVar12) = (code)0x0;
  bVar4 = auStack_398[0] & 1;
  if (((ulong)auStack_398 & 1) == 0) {
    if (auStack_398[0] >> 1 != 0) goto code_r0x003d337a;
  }
  else if (pcStack_390 != (code *)0x0) {
code_r0x003d337a:
    plVar11 = (long *)auStack_398;
    _Z19parse_trace_settingRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE();
    bVar4 = auStack_398[0] & 1;
  }
  if (bVar4 != 0) {
    uVar18 = auStack_398._0_4_ & 0xfffffffe;
    plVar11 = plStack_388;
    _ZdaPvSt11align_val_t();
  }
  if (((adb_trace_mask & 1) != 0) && ((int)adb_trace_severity._0_4_ < 2)) {
    plVar11 = (long *)0x1;
    uVar18 = 0;
    cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc();
    if (cVar3 != '\0') {
      puVar14 = (undefined4 *)func_0x0099bce0();
      uVar22 = *puVar14;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&lStack_3c8,&UNK_0015c7d6,0xe9,1,0,0xffffffff);
      uVar15 = _ZN7android4base10LogMessage6streamEv(&lStack_3c8);
      puVar19 = auStack_398;
      _Z11adb_versionv(puVar19);
      func_0x0032e5a0(uVar15);
      uVar18 = (uint)puVar19;
      if (((ulong)auStack_398 & 1) != 0) {
        uVar18 = auStack_398._0_4_ & 0xfffffffe;
        _ZdaPvSt11align_val_t(plStack_388);
      }
      plVar11 = &lStack_3c8;
      _ZN7android4base10LogMessageD2Ev();
      *puVar14 = uVar22;
    }
  }
  if (((ulong)auStack_3e8 & 1) != 0) {
    uVar18 = auStack_3e8._0_4_ & 0xfffffffe;
    plVar11 = plStack_3d8;
    _ZdaPvSt11align_val_t();
  }
  if (*(long **)(in_FS_OFFSET + 0x28) == plStack_360) {
    return *(long **)(in_FS_OFFSET + 0x28);
  }
code_r0x003d348f:
  func_0x0099bd00();
  adb_trace_mask = adb_trace_mask | 1 << ((byte)plVar11 & 0x1f);
  *(uint *)(adb_trace_severity + ((ulong)plVar11 & 0xffffffff) * 4) = uVar18;
  iVar5 = __android_log_set_minimum_priority(2);
  uVar18 = 6;
  if (iVar5 - 1U < 6) {
    uVar18 = *(uint *)(&UNK_00223110 + (ulong)(iVar5 - 1U) * 4);
  }
  return (long *)(ulong)uVar18;
}


