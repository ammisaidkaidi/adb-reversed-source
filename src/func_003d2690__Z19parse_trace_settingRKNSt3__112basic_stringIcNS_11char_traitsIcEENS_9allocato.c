// Function: _Z19parse_trace_settingRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE
// Address: 003d2690
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Removing unreachable block (ram,0x007dc67c) */

ulong _Z19parse_trace_settingRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE
                (undefined8 param_1)

{
  undefined1 auVar1 [16];
  undefined8 *puVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  char *pcVar6;
  long lVar7;
  undefined8 uVar8;
  uint *puVar9;
  long *plVar10;
  code *pcVar11;
  long *plVar12;
  undefined4 *puVar13;
  undefined8 uVar14;
  long lVar15;
  long *plVar16;
  uint uVar17;
  undefined1 *puVar18;
  byte *pbVar19;
  undefined4 uVar20;
  undefined8 *puVar21;
  byte *pbVar22;
  long in_FS_OFFSET;
  undefined1 auStack_3b0 [8];
  long lStack_3a8;
  long *plStack_3a0;
  long lStack_390;
  code *pcStack_388;
  long *plStack_370;
  undefined1 auStack_360 [8];
  code *pcStack_358;
  long *plStack_350;
  long *plStack_340;
  ulong uStack_328;
  undefined8 *puStack_320;
  byte *pbStack_318;
  long lStack_310;
  byte *pbStack_308;
  undefined *puStack_300;
  undefined4 *puStack_2f0;
  undefined8 uStack_2e8;
  byte bStack_2e0;
  undefined1 uStack_2df;
  undefined1 uStack_2de;
  undefined5 uStack_2dd;
  undefined8 uStack_2d0;
  undefined1 auStack_2c8 [16];
  long lStack_2b8;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [16];
  undefined8 uStack_288;
  undefined1 auStack_278 [16];
  long lStack_268;
  undefined4 uStack_260;
  undefined1 uStack_258;
  undefined4 uStack_257;
  undefined4 uStack_240;
  undefined1 uStack_238;
  undefined4 uStack_237;
  undefined4 uStack_220;
  undefined1 uStack_218;
  undefined4 uStack_217;
  undefined3 uStack_213;
  undefined1 uStack_210;
  undefined4 uStack_200;
  undefined1 uStack_1f8;
  undefined4 uStack_1f7;
  undefined3 uStack_1f3;
  undefined1 uStack_1f0;
  undefined4 uStack_1e0;
  undefined1 uStack_1d8;
  undefined4 uStack_1d7;
  undefined4 uStack_1c0;
  undefined1 uStack_1b8;
  undefined4 uStack_1b7;
  undefined4 uStack_1a0;
  undefined1 uStack_198;
  undefined4 uStack_197;
  undefined1 uStack_193;
  undefined4 uStack_180;
  undefined1 uStack_178;
  undefined4 uStack_177;
  undefined3 uStack_173;
  undefined1 uStack_170;
  undefined4 uStack_160;
  undefined1 uStack_158;
  undefined8 uStack_157;
  undefined1 uStack_14f;
  undefined1 uStack_14e;
  undefined4 uStack_140;
  undefined1 uStack_138;
  undefined4 uStack_137;
  undefined1 uStack_133;
  undefined4 uStack_120;
  undefined1 uStack_118;
  undefined8 uStack_117;
  undefined1 uStack_10f;
  undefined4 uStack_100;
  byte bStack_f8;
  undefined4 uStack_f7;
  undefined1 uStack_f3;
  undefined4 uStack_e0;
  byte bStack_d8;
  undefined4 uStack_d7;
  undefined3 uStack_d3;
  undefined1 uStack_d0;
  undefined4 uStack_c0;
  undefined1 uStack_b8;
  undefined4 uStack_b7;
  undefined1 uStack_b3;
  undefined1 uStack_b2;
  undefined4 uStack_a0;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined4 uStack_90;
  undefined1 uStack_8c;
  undefined4 uStack_80;
  undefined1 uStack_78;
  undefined4 uStack_77;
  undefined1 uStack_73;
  undefined4 uStack_60;
  undefined1 uStack_58;
  undefined8 uStack_57;
  undefined2 uStack_4f;
  undefined1 uStack_4d;
  undefined4 uStack_40;
  ulong uStack_38;
  
  uStack_38 = *(ulong *)(in_FS_OFFSET + 0x28);
  adb_trace_mask = 0;
  auStack_278._0_3_ = 0x3102;
  uStack_260 = 0xffffffff;
  uStack_258 = 6;
  uStack_257 = 0x6c6c61;
  uStack_240 = 0xffffffff;
  uStack_238 = 6;
  uStack_237 = 0x626461;
  uStack_220 = 0;
  uStack_218 = 0xe;
  uStack_217 = 0x6b636f73;
  uStack_213 = 0x737465;
  uStack_210 = 0;
  uStack_200 = 1;
  uStack_1f8 = 0xe;
  uStack_1f7 = 0x6b636170;
  uStack_1f3 = 0x737465;
  uStack_1f0 = 0;
  uStack_1e0 = 2;
  uStack_1d8 = 6;
  uStack_1d7 = 0x787772;
  uStack_1c0 = 4;
  uStack_1b8 = 6;
  uStack_1b7 = 0x627375;
  uStack_1a0 = 5;
  uStack_198 = 8;
  uStack_197 = 0x636e7973;
  uStack_193 = 0;
  uStack_180 = 6;
  uStack_178 = 0xe;
  uStack_177 = 0x64737973;
  uStack_173 = 0x737065;
  uStack_170 = 0;
  uStack_160 = 7;
  uStack_158 = 0x12;
  uStack_157 = 0x726f70736e617274;
  uStack_14f = 0x74;
  uStack_14e = 0;
  uStack_140 = 3;
  uStack_138 = 8;
  uStack_137 = 0x7077646a;
  uStack_133 = 0;
  uStack_120 = 8;
  uStack_118 = 0x10;
  uStack_117 = 0x7365636976726573;
  uStack_10f = 0;
  uStack_100 = 9;
  bStack_f8 = 8;
  uStack_f7 = 0x68747561;
  uStack_f3 = 0;
  uStack_e0 = 10;
  bStack_d8 = 0xe;
  uStack_d3 = 0x746e65;
  uStack_d7 = 0x76656466;
  uStack_d0 = 0;
  uStack_c0 = 0xb;
  uStack_b8 = 10;
  uStack_b3 = 0x6c;
  uStack_b7 = 0x6c656873;
  uStack_b2 = 0;
  uStack_a0 = 0xc;
  uStack_98 = 0x16;
  uStack_97 = 0x656d6572636e69;
  uStack_90 = 0x6c61746e;
  uStack_8c = 0;
  uStack_80 = 0xd;
  uStack_78 = 8;
  uStack_77 = 0x736e646d;
  uStack_73 = 0;
  uStack_60 = 0xe;
  uStack_58 = 0x14;
  uStack_57 = 0x6174732d736e646d;
  uStack_4f = 0x6b63;
  uStack_4d = 0;
  uStack_40 = 0xf;
  auStack_298 = (undefined1  [16])0x0;
  auStack_2a8 = (undefined1  [16])0x0;
  uStack_288 = 0x3f800000;
  pbVar19 = &bStack_f8;
  pbVar22 = &bStack_d8;
  puStack_300 = &UNK_003d29b1;
  uStack_2e8 = param_1;
  auStack_2c8._0_8_ = auStack_2a8;
  _ZZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_22__unordered_map_hasherIS7_NS_4pairIKS7_iEENS_4hashIS7_EENS_8equal_toIS7_EEEENS_21__unordered_map_equalIS7_SC_SG_SE_EENS5_ISC_EEE16__emplace_uniqueB8nn220000IJRKSC_EEENSA_INS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEEDpOT_ENKUlRSB_SO_E_clESZ_SO_
            (auStack_2c8,auStack_278);
  puStack_300 = &UNK_003d29ca;
  auStack_2c8._0_8_ = auStack_2a8;
  _ZZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_22__unordered_map_hasherIS7_NS_4pairIKS7_iEENS_4hashIS7_EENS_8equal_toIS7_EEEENS_21__unordered_map_equalIS7_SC_SG_SE_EENS5_ISC_EEE16__emplace_uniqueB8nn220000IJRKSC_EEENSA_INS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEEDpOT_ENKUlRSB_SO_E_clESZ_SO_
            (auStack_2c8,&uStack_258);
  puStack_300 = &UNK_003d29e3;
  auStack_2c8._0_8_ = auStack_2a8;
  _ZZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_22__unordered_map_hasherIS7_NS_4pairIKS7_iEENS_4hashIS7_EENS_8equal_toIS7_EEEENS_21__unordered_map_equalIS7_SC_SG_SE_EENS5_ISC_EEE16__emplace_uniqueB8nn220000IJRKSC_EEENSA_INS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEEDpOT_ENKUlRSB_SO_E_clESZ_SO_
            (auStack_2c8,&uStack_238);
  puStack_300 = &UNK_003d29fc;
  auStack_2c8._0_8_ = auStack_2a8;
  _ZZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_22__unordered_map_hasherIS7_NS_4pairIKS7_iEENS_4hashIS7_EENS_8equal_toIS7_EEEENS_21__unordered_map_equalIS7_SC_SG_SE_EENS5_ISC_EEE16__emplace_uniqueB8nn220000IJRKSC_EEENSA_INS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEEDpOT_ENKUlRSB_SO_E_clESZ_SO_
            (auStack_2c8,&uStack_218);
  puStack_300 = &UNK_003d2a15;
  auStack_2c8._0_8_ = auStack_2a8;
  _ZZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_22__unordered_map_hasherIS7_NS_4pairIKS7_iEENS_4hashIS7_EENS_8equal_toIS7_EEEENS_21__unordered_map_equalIS7_SC_SG_SE_EENS5_ISC_EEE16__emplace_uniqueB8nn220000IJRKSC_EEENSA_INS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEEDpOT_ENKUlRSB_SO_E_clESZ_SO_
            (auStack_2c8,&uStack_1f8);
  puStack_300 = &UNK_003d2a2e;
  auStack_2c8._0_8_ = auStack_2a8;
  _ZZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_22__unordered_map_hasherIS7_NS_4pairIKS7_iEENS_4hashIS7_EENS_8equal_toIS7_EEEENS_21__unordered_map_equalIS7_SC_SG_SE_EENS5_ISC_EEE16__emplace_uniqueB8nn220000IJRKSC_EEENSA_INS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEEDpOT_ENKUlRSB_SO_E_clESZ_SO_
            (auStack_2c8,&uStack_1d8);
  puStack_300 = &UNK_003d2a47;
  auStack_2c8._0_8_ = auStack_2a8;
  _ZZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_22__unordered_map_hasherIS7_NS_4pairIKS7_iEENS_4hashIS7_EENS_8equal_toIS7_EEEENS_21__unordered_map_equalIS7_SC_SG_SE_EENS5_ISC_EEE16__emplace_uniqueB8nn220000IJRKSC_EEENSA_INS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEEDpOT_ENKUlRSB_SO_E_clESZ_SO_
            (auStack_2c8,&uStack_1b8);
  puStack_300 = &UNK_003d2a60;
  auStack_2c8._0_8_ = auStack_2a8;
  _ZZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_22__unordered_map_hasherIS7_NS_4pairIKS7_iEENS_4hashIS7_EENS_8equal_toIS7_EEEENS_21__unordered_map_equalIS7_SC_SG_SE_EENS5_ISC_EEE16__emplace_uniqueB8nn220000IJRKSC_EEENSA_INS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEEDpOT_ENKUlRSB_SO_E_clESZ_SO_
            (auStack_2c8,&uStack_198);
  puStack_300 = &UNK_003d2a79;
  auStack_2c8._0_8_ = auStack_2a8;
  _ZZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_22__unordered_map_hasherIS7_NS_4pairIKS7_iEENS_4hashIS7_EENS_8equal_toIS7_EEEENS_21__unordered_map_equalIS7_SC_SG_SE_EENS5_ISC_EEE16__emplace_uniqueB8nn220000IJRKSC_EEENSA_INS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEEDpOT_ENKUlRSB_SO_E_clESZ_SO_
            (auStack_2c8,&uStack_178);
  puStack_300 = &UNK_003d2a92;
  auStack_2c8._0_8_ = auStack_2a8;
  _ZZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_22__unordered_map_hasherIS7_NS_4pairIKS7_iEENS_4hashIS7_EENS_8equal_toIS7_EEEENS_21__unordered_map_equalIS7_SC_SG_SE_EENS5_ISC_EEE16__emplace_uniqueB8nn220000IJRKSC_EEENSA_INS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEEDpOT_ENKUlRSB_SO_E_clESZ_SO_
            (auStack_2c8,&uStack_158);
  puStack_300 = &UNK_003d2aab;
  auStack_2c8._0_8_ = auStack_2a8;
  _ZZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_22__unordered_map_hasherIS7_NS_4pairIKS7_iEENS_4hashIS7_EENS_8equal_toIS7_EEEENS_21__unordered_map_equalIS7_SC_SG_SE_EENS5_ISC_EEE16__emplace_uniqueB8nn220000IJRKSC_EEENSA_INS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEEDpOT_ENKUlRSB_SO_E_clESZ_SO_
            (auStack_2c8,&uStack_138);
  puStack_300 = &UNK_003d2ac0;
  auStack_2c8._0_8_ = auStack_2a8;
  _ZZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_22__unordered_map_hasherIS7_NS_4pairIKS7_iEENS_4hashIS7_EENS_8equal_toIS7_EEEENS_21__unordered_map_equalIS7_SC_SG_SE_EENS5_ISC_EEE16__emplace_uniqueB8nn220000IJRKSC_EEENSA_INS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEEDpOT_ENKUlRSB_SO_E_clESZ_SO_
            (auStack_2c8,&uStack_118,&uStack_118);
  puStack_300 = &UNK_003d2ad5;
  auStack_2c8._0_8_ = auStack_2a8;
  _ZZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_22__unordered_map_hasherIS7_NS_4pairIKS7_iEENS_4hashIS7_EENS_8equal_toIS7_EEEENS_21__unordered_map_equalIS7_SC_SG_SE_EENS5_ISC_EEE16__emplace_uniqueB8nn220000IJRKSC_EEENSA_INS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEEDpOT_ENKUlRSB_SO_E_clESZ_SO_
            (auStack_2c8,pbVar19,pbVar19);
  puStack_300 = &UNK_003d2aea;
  auStack_2c8._0_8_ = auStack_2a8;
  _ZZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_22__unordered_map_hasherIS7_NS_4pairIKS7_iEENS_4hashIS7_EENS_8equal_toIS7_EEEENS_21__unordered_map_equalIS7_SC_SG_SE_EENS5_ISC_EEE16__emplace_uniqueB8nn220000IJRKSC_EEENSA_INS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEEDpOT_ENKUlRSB_SO_E_clESZ_SO_
            (auStack_2c8,pbVar22,pbVar22);
  puStack_300 = &UNK_003d2b03;
  auStack_2c8._0_8_ = auStack_2a8;
  _ZZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_22__unordered_map_hasherIS7_NS_4pairIKS7_iEENS_4hashIS7_EENS_8equal_toIS7_EEEENS_21__unordered_map_equalIS7_SC_SG_SE_EENS5_ISC_EEE16__emplace_uniqueB8nn220000IJRKSC_EEENSA_INS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEEDpOT_ENKUlRSB_SO_E_clESZ_SO_
            (auStack_2c8,&uStack_b8);
  puStack_300 = &UNK_003d2b1c;
  auStack_2c8._0_8_ = auStack_2a8;
  _ZZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_22__unordered_map_hasherIS7_NS_4pairIKS7_iEENS_4hashIS7_EENS_8equal_toIS7_EEEENS_21__unordered_map_equalIS7_SC_SG_SE_EENS5_ISC_EEE16__emplace_uniqueB8nn220000IJRKSC_EEENSA_INS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEEDpOT_ENKUlRSB_SO_E_clESZ_SO_
            (auStack_2c8,&uStack_98);
  puStack_300 = &UNK_003d2b32;
  auStack_2c8._0_8_ = auStack_2a8;
  _ZZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_22__unordered_map_hasherIS7_NS_4pairIKS7_iEENS_4hashIS7_EENS_8equal_toIS7_EEEENS_21__unordered_map_equalIS7_SC_SG_SE_EENS5_ISC_EEE16__emplace_uniqueB8nn220000IJRKSC_EEENSA_INS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEEDpOT_ENKUlRSB_SO_E_clESZ_SO_
            (auStack_2c8,&uStack_78);
  auStack_2c8._0_8_ = auStack_2a8;
  puStack_300 = &UNK_003d2b48;
  _ZZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_22__unordered_map_hasherIS7_NS_4pairIKS7_iEENS_4hashIS7_EENS_8equal_toIS7_EEEENS_21__unordered_map_equalIS7_SC_SG_SE_EENS5_ISC_EEE16__emplace_uniqueB8nn220000IJRKSC_EEENSA_INS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEEDpOT_ENKUlRSB_SO_E_clESZ_SO_
            (auStack_2c8,&uStack_58);
  lVar15 = 0x220;
  do {
    if ((auStack_278[lVar15] & 1) != 0) {
      puStack_300 = &UNK_003d2b7d;
      _ZdaPvSt11align_val_t
                (*(undefined8 *)((long)&lStack_268 + lVar15),
                 *(ulong *)(auStack_278 + lVar15) & 0xfffffffffffffffe);
    }
    lVar15 = lVar15 + -0x20;
  } while (lVar15 != -0x20);
  lVar15 = auStack_298._8_8_ + -2;
  if (lVar15 != 0x10) {
    puStack_300 = &UNK_003d2b9c;
    cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(6,0);
    if (cVar3 != '\0') {
      puStack_300 = &UNK_003d30e6;
      puVar9 = (uint *)func_0x0099bce0();
      uVar17 = *puVar9;
      pbVar19 = (byte *)(ulong)uVar17;
      pbVar22 = auStack_278;
      puStack_300 = &UNK_003d3115;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (pbVar22,&UNK_0015c7d6,0x8d,6,0,0xffffffff);
      puStack_300 = &UNK_003d311d;
      uVar14 = _ZN7android4base10LogMessage6streamEv(pbVar22);
      puStack_300 = &UNK_003d3131;
      uVar14 = func_0x0032eb30(uVar14,&UNK_0015b0a1,0x15);
      puStack_300 = &UNK_003d313e;
      uVar14 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar14,0x10);
      puStack_300 = &UNK_003d3152;
      uVar14 = func_0x0032eb30(uVar14,&UNK_0017d5d7,0x16);
      puStack_300 = &UNK_003d315d;
      _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar14,lVar15);
      puStack_300 = &UNK_003d3165;
      _ZN7android4base10LogMessageD2Ev(pbVar22);
      *puVar9 = uVar17;
    }
  }
  auStack_278 = (undefined1  [16])0x0;
  lStack_268 = 0;
  auStack_2c8._0_4_ = 0x202c04;
  puStack_300 = &UNK_003d2bec;
  _ZN7android4base5SplitERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_
            (auStack_278,uStack_2e8,auStack_2c8);
  if ((auStack_2c8[0] & 1) != 0) {
    puStack_300 = &UNK_003d2c0c;
    _ZdaPvSt11align_val_t(lStack_2b8,auStack_2c8._0_8_ & 0xfffffffffffffffe);
  }
  puVar21 = (undefined8 *)auStack_278._8_8_;
  for (lVar15 = auStack_278._0_8_; (undefined8 *)lVar15 != puVar21; lVar15 = lVar15 + 0x18) {
    auStack_2c8 = (undefined1  [16])0x0;
    lStack_2b8 = 0;
    bStack_2e0 = 2;
    uStack_2df = 0x3a;
    uStack_2de = 0;
    puStack_300 = &UNK_003d2c6a;
    _ZN7android4base5SplitERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_
              (auStack_2c8,lVar15,&bStack_2e0);
    if ((bStack_2e0 & 1) != 0) {
      puStack_300 = &UNK_003d2c8a;
      _ZdaPvSt11align_val_t
                (uStack_2d0,
                 CONCAT53(uStack_2dd,CONCAT12(uStack_2de,CONCAT11(uStack_2df,bStack_2e0))) &
                 0xfffffffffffffffe);
    }
    uVar14 = auStack_2c8._0_8_;
    if ((ulong)(((long)(auStack_2c8._8_8_ - auStack_2c8._0_8_) >> 3) * -0x5555555555555555) < 2) {
code_r0x003d2d94:
      uVar20 = 1;
    }
    else {
      bVar4 = *(byte *)(auStack_2c8._0_8_ + 0x18);
      if ((bVar4 & 1) == 0) {
        if (bVar4 >> 1 == 1) goto code_r0x003d2cf1;
code_r0x003d2d80:
        puStack_300 = &UNK_003d2d8c;
        cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4,0);
        if (cVar3 != '\0') {
          puStack_300 = &UNK_003d2f4a;
          puVar13 = (undefined4 *)func_0x0099bce0();
          uStack_2e8 = CONCAT44(uStack_2e8._4_4_,*puVar13);
          pbVar22 = &bStack_2e0;
          puStack_300 = &UNK_003d2f7e;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (pbVar22,&UNK_0015c7d6,0xa4,4,0,0xffffffff);
          puStack_300 = &UNK_003d2f86;
          uVar8 = _ZN7android4base10LogMessage6streamEv(pbVar22);
          puStack_300 = &UNK_003d2f9a;
          uVar8 = func_0x0032eb30(uVar8,&UNK_0015b0b7,0x1f);
          puStack_300 = &UNK_003d2fa5;
          uVar8 = func_0x0032e5a0(uVar8,uVar14);
          puStack_300 = &UNK_003d2fb9;
          uVar8 = func_0x0032eb30(uVar8,&UNK_00186281,2);
          puStack_300 = &UNK_003d2fc6;
          func_0x0032e5a0(uVar8,uVar14 + 0x18);
          puStack_300 = &UNK_003d2fce;
          _ZN7android4base10LogMessageD2Ev(pbVar22);
          *puVar13 = (undefined4)uStack_2e8;
        }
        goto code_r0x003d2d94;
      }
      if (*(long *)(auStack_2c8._0_8_ + 0x20) != 1) goto code_r0x003d2d80;
code_r0x003d2cf1:
      if ((bVar4 & 1) == 0) {
        pcVar6 = (char *)(auStack_2c8._0_8_ + 0x19);
      }
      else {
        pcVar6 = *(char **)(auStack_2c8._0_8_ + 0x28);
      }
      uVar20 = 0;
      if (*pcVar6 != 'v') {
        if ((bVar4 & 1) == 0) {
          cVar3 = *(char *)(auStack_2c8._0_8_ + 0x19);
        }
        else {
          cVar3 = **(char **)(auStack_2c8._0_8_ + 0x28);
        }
        if (cVar3 == 'd') goto code_r0x003d2d94;
        if ((bVar4 & 1) == 0) {
          pcVar6 = (char *)(auStack_2c8._0_8_ + 0x19);
        }
        else {
          pcVar6 = *(char **)(auStack_2c8._0_8_ + 0x28);
        }
        uVar20 = 2;
        if (*pcVar6 != 'i') {
          if ((bVar4 & 1) == 0) {
            pcVar6 = (char *)(auStack_2c8._0_8_ + 0x19);
          }
          else {
            pcVar6 = *(char **)(auStack_2c8._0_8_ + 0x28);
          }
          uVar20 = 3;
          if (*pcVar6 != 'w') {
            if ((bVar4 & 1) == 0) {
              pcVar6 = (char *)(auStack_2c8._0_8_ + 0x19);
            }
            else {
              pcVar6 = *(char **)(auStack_2c8._0_8_ + 0x28);
            }
            uVar20 = 4;
            if (*pcVar6 != 'e') goto code_r0x003d2d80;
          }
        }
      }
    }
    puStack_300 = &UNK_003d2da9;
    lVar7 = _ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPKN4absl12lts_2026052613time_internal4cctz9time_zone4ImplEEENS_22__unordered_map_hasherIS7_NS_4pairIKS7_SF_EENS_4hashIS7_EENS_8equal_toIS7_EEEENS_21__unordered_map_equalIS7_SK_SO_SM_EENS5_ISK_EEE4findIS7_EENS_15__hash_iteratorIPNS_11__hash_nodeISG_PvEEEERKT_
                      (auStack_2a8,uVar14);
    if (lVar7 == 0) {
      puStack_300 = &UNK_003d2dec;
      cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4,0);
      iVar5 = 3;
      if (cVar3 != '\0') {
        puStack_300 = &UNK_003d2dff;
        puStack_2f0 = (undefined4 *)func_0x0099bce0();
        uStack_2e8 = CONCAT44(uStack_2e8._4_4_,*puStack_2f0);
        pbVar22 = &bStack_2e0;
        puStack_300 = &UNK_003d2e37;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (pbVar22,&UNK_0015c7d6,0xaa,4,0,0xffffffff);
        puStack_300 = &UNK_003d2e3f;
        uVar8 = _ZN7android4base10LogMessage6streamEv(pbVar22);
        puStack_300 = &UNK_003d2e53;
        uVar8 = func_0x0032eb30(uVar8,&UNK_00162e08,0x14);
        puStack_300 = &UNK_003d2e5e;
        func_0x0032e5a0(uVar8,uVar14);
        puStack_300 = &UNK_003d2e66;
        _ZN7android4base10LogMessageD2Ev(pbVar22);
        *puStack_2f0 = (undefined4)uStack_2e8;
      }
    }
    else {
      iVar5 = *(int *)(lVar7 + 0x28);
      if ((long)iVar5 == -1) {
        adb_trace_mask = 0xffffffff;
        iVar5 = 2;
        adb_trace_severity._0_4_ = uVar20;
        adb_trace_severity._4_4_ = uVar20;
        adb_trace_severity._8_4_ = uVar20;
        adb_trace_severity._12_4_ = uVar20;
        adb_trace_severity._16_4_ = uVar20;
        adb_trace_severity._20_4_ = uVar20;
        adb_trace_severity._24_4_ = uVar20;
        adb_trace_severity._28_4_ = uVar20;
        adb_trace_severity._32_4_ = uVar20;
        adb_trace_severity._36_4_ = uVar20;
        adb_trace_severity._40_4_ = uVar20;
        adb_trace_severity._44_4_ = uVar20;
        adb_trace_severity._48_4_ = uVar20;
        adb_trace_severity._52_4_ = uVar20;
        adb_trace_severity._56_4_ = uVar20;
        adb_trace_severity._60_4_ = uVar20;
      }
      else {
        adb_trace_mask = adb_trace_mask | 1 << ((byte)iVar5 & 0x1f);
        *(undefined4 *)(adb_trace_severity + (long)iVar5 * 4) = uVar20;
        iVar5 = 0;
      }
    }
    pbVar19 = (byte *)auStack_2c8._0_8_;
    if ((byte *)auStack_2c8._0_8_ != (byte *)0x0) {
      for (pbVar22 = (byte *)auStack_2c8._8_8_; pbVar19 != pbVar22; pbVar22 = pbVar22 + -0x18) {
        if ((pbVar22[-0x18] & 1) != 0) {
          puStack_300 = &UNK_003d2f01;
          _ZdaPvSt11align_val_t
                    (*(undefined8 *)(pbVar22 + -8),*(ulong *)(pbVar22 + -0x18) & 0xfffffffffffffffe)
          ;
        }
      }
      auStack_2c8._8_8_ = pbVar19;
      puStack_300 = &UNK_003d2f2d;
      _ZdaPvSt11align_val_t(auStack_2c8._0_8_,lStack_2b8 - auStack_2c8._0_8_);
    }
    if ((iVar5 != 3) && (iVar5 != 0)) break;
  }
  if (adb_trace_mask != 0) {
    puStack_300 = &UNK_003d2ff0;
    _ZN7android4base21SetMinimumLogSeverityENS0_11LogSeverityE(0);
  }
  uVar14 = auStack_278._0_8_;
  if (auStack_278._0_8_ != 0) {
    for (puVar21 = (undefined8 *)auStack_278._8_8_; (undefined8 *)uVar14 != puVar21;
        puVar21 = (undefined8 *)((long)puVar21 + -0x18)) {
      if ((*(byte *)((long)puVar21 + -0x18) & 1) != 0) {
        puStack_300 = &UNK_003d3031;
        _ZdaPvSt11align_val_t
                  (*(undefined8 *)((long)puVar21 + -8),
                   *(ulong *)((long)puVar21 + -0x18) & 0xfffffffffffffffe);
      }
    }
    auStack_278._8_8_ = uVar14;
    puStack_300 = &UNK_003d3050;
    _ZdaPvSt11align_val_t(auStack_278._0_8_,lStack_268 - auStack_278._0_8_);
  }
  puVar2 = (undefined8 *)auStack_298._0_8_;
  while (puVar2 != (undefined8 *)0x0) {
    puVar21 = (undefined8 *)*puVar2;
    if ((*(byte *)(puVar2 + 2) & 1) != 0) {
      puStack_300 = &UNK_003d30df;
      _ZdaPvSt11align_val_t(puVar2[4],puVar2[2] & 0xfffffffffffffffe);
    }
    puStack_300 = &UNK_003d30bd;
    _ZdaPvSt11align_val_t(puVar2,0x30);
    puVar2 = puVar21;
  }
  lVar15 = auStack_2a8._0_8_;
  uVar14 = auStack_2a8._8_8_;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = auStack_2a8._8_8_;
  auStack_2a8 = auVar1 << 0x40;
  if (lVar15 != 0) {
    puStack_300 = &UNK_003d3083;
    _ZdaPvSt11align_val_t(lVar15,uVar14 << 3);
  }
  if (*(ulong *)(in_FS_OFFSET + 0x28) == uStack_38) {
    return *(ulong *)(in_FS_OFFSET + 0x28);
  }
  puStack_300 = &UNK_003d3172;
  func_0x0099bd00();
  uStack_328 = *(ulong *)(in_FS_OFFSET + 0x28);
  auStack_3b0 = (undefined1  [8])0x0;
  lStack_3a8 = 0;
  plStack_3a0 = (long *)0x0;
  puStack_320 = puVar2;
  pbStack_318 = pbVar19;
  lStack_310 = (long)puVar21;
  pbStack_308 = pbVar22;
  puStack_300 = &stack0xfffffffffffffff8;
  lVar7 = func_0x0099be70(&UNK_0016e937);
  if (lVar7 != 0) {
    func_0x0032ea60(auStack_3b0,lVar7);
    func_0x0099c290(&UNK_0016e937);
  }
  auStack_360 = (undefined1  [8])0x99ea20;
  pcStack_358 = _Z9AdbLoggerN7android4base5LogIdENS0_11LogSeverityEPKcS4_jS4_;
  lStack_390 = 0x99ea68;
  pcStack_388 = _ZN7android4base14DefaultAborterEPKc;
  plVar16 = (long *)auStack_360;
  plStack_370 = &lStack_390;
  plStack_340 = (long *)auStack_360;
  _ZN7android4base11InitLoggingEPPcONSt3__18functionIFvNS0_5LogIdENS0_11LogSeverityEPKcS8_jS8_EEEONS4_IFvS8_EEE
            (lVar15,auStack_360,&lStack_390);
  uVar17 = (uint)plVar16;
  if (plStack_370 == &lStack_390) {
    lVar15 = 0x20;
code_r0x003d3258:
    (**(code **)(*plStack_370 + lVar15))();
  }
  else {
    lVar15 = 0x28;
    if (plStack_370 != (long *)0x0) goto code_r0x003d3258;
  }
  if (plStack_340 == (long *)auStack_360) {
    lVar15 = 0x20;
code_r0x003d3278:
    (**(code **)(*plStack_340 + lVar15))();
  }
  else {
    lVar15 = 0x28;
    if (plStack_340 != (long *)0x0) goto code_r0x003d3278;
  }
  if (((ulong)auStack_3b0 & 1) == 0) {
    if (auStack_3b0[0] >> 1 != 0) goto code_r0x003d32a0;
  }
  else if (lStack_3a8 != 0) {
code_r0x003d32a0:
    plVar16 = plStack_3a0;
    if (((ulong)auStack_3b0 & 1) == 0) {
      plVar16 = (long *)(auStack_3b0 + 1);
    }
    func_0x0099c2a0(&UNK_0016e937,plVar16,1);
    uVar17 = (uint)plVar16;
  }
  plVar10 = (long *)func_0x0099be70(&UNK_001722da);
  plVar16 = (long *)&UNK_00162ac9;
  if (plVar10 != (long *)0x0) {
    plVar16 = plVar10;
  }
  plVar10 = plVar16;
  pcVar11 = (code *)func_0x0099bcf0();
  if ((code *)0xfffffffffffffff6 < pcVar11) {
    func_0x0032e8f0();
    goto code_r0x003d348f;
  }
  auStack_360 = (undefined1  [8])0x0;
  pcStack_358 = (code *)0x0;
  plStack_350 = (long *)0x0;
  if (pcVar11 < (code *)0x17) {
    auStack_360._1_7_ = 0;
    auStack_360[0] = (char)pcVar11 * '\x02';
    plVar12 = (long *)(auStack_360 + 1);
  }
  else {
    lVar15 = 0x1a;
    if (((ulong)pcVar11 | 7) != 0x17) {
      lVar15 = ((ulong)pcVar11 | 7) + 1;
    }
    plVar12 = (long *)_Znwm(lVar15);
    auStack_360 = (undefined1  [8])(lVar15 + 1);
    pcStack_358 = pcVar11;
    plStack_350 = plVar12;
  }
  plVar10 = plVar12;
  func_0x0099bd90(plVar12,plVar16,pcVar11);
  uVar17 = (uint)plVar16;
  *(code *)((long)plVar12 + (long)pcVar11) = (code)0x0;
  bVar4 = auStack_360[0] & 1;
  if (((ulong)auStack_360 & 1) == 0) {
    if (auStack_360[0] >> 1 != 0) goto code_r0x003d337a;
  }
  else if (pcStack_358 != (code *)0x0) {
code_r0x003d337a:
    plVar10 = (long *)auStack_360;
    _Z19parse_trace_settingRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE();
    bVar4 = auStack_360[0] & 1;
  }
  if (bVar4 != 0) {
    uVar17 = auStack_360._0_4_ & 0xfffffffe;
    plVar10 = plStack_350;
    _ZdaPvSt11align_val_t();
  }
  if (((adb_trace_mask & 1) != 0) && ((int)adb_trace_severity._0_4_ < 2)) {
    plVar10 = (long *)0x1;
    uVar17 = 0;
    cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc();
    if (cVar3 != '\0') {
      puVar13 = (undefined4 *)func_0x0099bce0();
      uVar20 = *puVar13;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&lStack_390,&UNK_0015c7d6,0xe9,1,0,0xffffffff);
      uVar14 = _ZN7android4base10LogMessage6streamEv(&lStack_390);
      puVar18 = auStack_360;
      _Z11adb_versionv(puVar18);
      func_0x0032e5a0(uVar14);
      uVar17 = (uint)puVar18;
      if (((ulong)auStack_360 & 1) != 0) {
        uVar17 = auStack_360._0_4_ & 0xfffffffe;
        _ZdaPvSt11align_val_t(plStack_350);
      }
      plVar10 = &lStack_390;
      _ZN7android4base10LogMessageD2Ev();
      *puVar13 = uVar20;
    }
  }
  if (((ulong)auStack_3b0 & 1) != 0) {
    uVar17 = auStack_3b0._0_4_ & 0xfffffffe;
    plVar10 = plStack_3a0;
    _ZdaPvSt11align_val_t();
  }
  if (*(ulong *)(in_FS_OFFSET + 0x28) == uStack_328) {
    return *(ulong *)(in_FS_OFFSET + 0x28);
  }
code_r0x003d348f:
  func_0x0099bd00();
  adb_trace_mask = adb_trace_mask | 1 << ((byte)plVar10 & 0x1f);
  *(uint *)(adb_trace_severity + ((ulong)plVar10 & 0xffffffff) * 4) = uVar17;
  iVar5 = __android_log_set_minimum_priority(2);
  uVar17 = 6;
  if (iVar5 - 1U < 6) {
    uVar17 = *(uint *)(&UNK_00223110 + (ulong)(iVar5 - 1U) * 4);
  }
  return (ulong)uVar17;
}


