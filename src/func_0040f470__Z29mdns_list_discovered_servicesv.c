// Function: _Z29mdns_list_discovered_servicesv
// Address: 0040f470
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Type propagation algorithm not settling */

byte ******* _Z29mdns_list_discovered_servicesv(byte *******param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  char cVar3;
  uint uVar4;
  long lVar5;
  byte ******ppppppbVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  ulong *puVar10;
  byte *******pppppppbVar11;
  byte bVar12;
  byte ******ppppppbVar13;
  long *plVar14;
  undefined1 *puVar15;
  byte ******ppppppbVar16;
  byte ******ppppppbVar17;
  byte *******pppppppbVar18;
  byte *******pppppppbVar19;
  byte *******pppppppbVar20;
  byte *******pppppppbVar21;
  long *plVar22;
  byte *******unaff_R12;
  byte *******unaff_R13;
  byte *******pppppppbVar23;
  long in_FS_OFFSET;
  bool bVar24;
  undefined1 auStack_6a0 [8];
  ulong auStack_698 [3];
  undefined8 *puStack_680;
  ulong uStack_678;
  undefined *puStack_670;
  undefined *puStack_668;
  undefined4 uStack_660;
  undefined4 uStack_65c;
  undefined8 uStack_658;
  undefined8 uStack_650;
  ulong uStack_648;
  undefined1 *puStack_640;
  long lStack_638;
  ulong uStack_630;
  undefined8 uStack_628;
  undefined1 auStack_618 [8];
  ulong uStack_610;
  ulong *puStack_608;
  undefined8 uStack_600;
  undefined1 auStack_5f8 [8];
  char cStack_5f0;
  long lStack_5c8;
  undefined8 *puStack_5b8;
  undefined8 uStack_5b0;
  ulong uStack_5a8;
  undefined *puStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 *puStack_490;
  long lStack_488;
  long *plStack_480;
  byte *******pppppppbStack_478;
  byte *******pppppppbStack_470;
  undefined8 uStack_468;
  undefined8 *puStack_460;
  undefined *puStack_458;
  long lStack_450;
  long alStack_448 [21];
  byte *******pppppppbStack_3a0;
  byte *******pppppppbStack_398;
  byte *******pppppppbStack_390;
  byte ******ppppppbStack_388;
  undefined *apuStack_380 [2];
  undefined4 uStack_36c;
  undefined1 auStack_368 [5];
  undefined4 uStack_363;
  undefined4 uStack_35f;
  undefined1 uStack_35b;
  undefined2 uStack_35a;
  undefined1 uStack_358;
  undefined5 uStack_357;
  undefined1 uStack_352;
  undefined1 uStack_351;
  byte ******ppppppbStack_350;
  byte ******ppppppbStack_348;
  undefined8 uStack_340;
  byte *******pppppppbStack_338;
  ulong uStack_330;
  undefined8 uStack_328;
  byte *******pppppppbStack_320;
  ulong uStack_318;
  undefined8 uStack_310;
  byte *******pppppppbStack_308;
  undefined8 uStack_300;
  long lStack_2f8;
  byte *******pppppppbStack_2f0;
  byte *******pppppppbStack_2e8;
  byte *******pppppppbStack_2e0;
  byte *******pppppppbStack_2d8;
  byte *******pppppppbStack_2d0;
  undefined *apuStack_2c8 [2];
  undefined4 uStack_2b4;
  undefined1 auStack_2b0 [8];
  byte *******pppppppbStack_2a8;
  byte *******pppppppbStack_2a0;
  byte ******ppppppbStack_298;
  undefined *puStack_290;
  undefined4 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  byte ******ppppppbStack_270;
  undefined8 uStack_268;
  byte *******pppppppbStack_260;
  undefined1 auStack_258 [8];
  ulong uStack_250;
  byte *******pppppppbStack_248;
  undefined1 auStack_240 [8];
  ulong uStack_238;
  byte *******pppppppbStack_230;
  undefined8 uStack_228;
  byte *******pppppppbStack_220;
  undefined8 uStack_218;
  byte *******pppppppbStack_210;
  undefined8 uStack_208;
  undefined1 auStack_200 [8];
  char cStack_1f8;
  byte *******pppppppbStack_1f0;
  ulong uStack_1e8;
  byte *******pppppppbStack_1e0;
  ulong uStack_1d8;
  undefined8 uStack_1d0;
  byte *******pppppppbStack_1c0;
  undefined8 uStack_1b8;
  byte *******pppppppbStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  byte ******ppppppbStack_198;
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
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  byte *******pppppppbStack_98;
  long lStack_90;
  byte *******pppppppbStack_88;
  undefined *puStack_60;
  byte ******ppppppbStack_58;
  byte *******pppppppbStack_50;
  byte *******pppppppbStack_38;
  long lStack_20;
  
  lStack_20 = *(long *)(in_FS_OFFSET + 0x28);
  *param_1 = (byte ******)0x0;
  param_1[1] = (byte ******)0x0;
  param_1[2] = (byte ******)0x0;
  ppppppbStack_58 = (byte ******)&UNK_0099f308;
  puStack_60 = &UNK_0040f4bf;
  pppppppbVar11 = &ppppppbStack_58;
  pppppppbStack_50 = param_1;
  pppppppbStack_38 = &ppppppbStack_58;
  _ZN4mdns18DiscoveredServices14ForAllServicesERKNSt3__18functionIFvRK11ServiceInfoEEE
            (_ZN4mdns19discovered_servicesE);
  pppppppbVar18 = pppppppbStack_38;
  if (pppppppbStack_38 == &ppppppbStack_58) {
    lVar5 = 0x20;
code_r0x0040f4d9:
    puStack_60 = &UNK_0040f4df;
    (**(code **)((long)*pppppppbStack_38 + lVar5))();
  }
  else {
    lVar5 = 0x28;
    if (pppppppbStack_38 != (byte *******)0x0) goto code_r0x0040f4d9;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_20) {
    return param_1;
  }
  puStack_60 = &UNK_0040f4ff;
  func_0x0099bd00();
  puStack_60 = &stack0xfffffffffffffff8;
  pppppppbStack_88 = param_1;
  lStack_90 = *(long *)(in_FS_OFFSET + 0x28);
  ppppppbVar13 = (byte ******)(ulong)(*(byte *)pppppppbVar11 >> 1);
  bVar12 = *(byte *)pppppppbVar11 & 1;
  ppppppbVar6 = pppppppbVar11[1];
  ppppppbVar16 = ppppppbVar6;
  if (bVar12 == 0) {
    ppppppbVar16 = ppppppbVar13;
  }
  if (ppppppbVar16 == (byte ******)0x0) {
    apuStack_2c8[0] = &UNK_0040f933;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (&pppppppbStack_1c0,&UNK_0017bc23,0xa3,6,0,0xffffffff);
    apuStack_2c8[0] = &UNK_0040f93b;
    uVar7 = _ZN7android4base10LogMessage6streamEv(&pppppppbStack_1c0);
    apuStack_2c8[0] = &UNK_0040f94f;
    uVar7 = func_0x0032eb30(uVar7,&UNK_0015b324,0x1b);
    apuStack_2c8[0] = &UNK_0040f963;
    func_0x0032eb30(uVar7,&UNK_0015ae05,1);
    apuStack_2c8[0] = &UNK_0040f96b;
    _ZN7android4base10LogMessageD2Ev(&pppppppbStack_1c0);
    ppppppbVar6 = pppppppbVar11[1];
    bVar12 = *(byte *)pppppppbVar11 & 1;
    ppppppbVar13 = (byte ******)(ulong)(*(byte *)pppppppbVar11 >> 1);
  }
  pppppppbStack_230 = (byte *******)0x0;
  uStack_228 = 0;
  auStack_240 = (undefined1  [8])0x0;
  uStack_238 = 0;
  uStack_250 = 0;
  pppppppbStack_248 = (byte *******)0x0;
  pppppppbStack_260 = (byte *******)0x0;
  auStack_258 = (undefined1  [8])0x0;
  ppppppbStack_270 = (byte ******)0x0;
  uStack_268 = 0;
  pppppppbVar21 = (byte *******)((long)pppppppbVar11 + 1);
  puVar15 = (undefined1 *)pppppppbVar21;
  if (bVar12 != 0) {
    puVar15 = (undefined1 *)pppppppbVar11[2];
    ppppppbVar13 = ppppppbVar6;
  }
  pppppppbVar20 = &ppppppbStack_270;
  apuStack_2c8[0] = &UNK_0040f589;
  _ZN4mdns24mdns_parse_instance_nameENSt3__117basic_string_viewIcNS0_11char_traitsIcEEEE
            (pppppppbVar20,puVar15,ppppppbVar13);
  if ((char)uStack_228 == '\0') {
    pppppppbVar23 = pppppppbVar11;
    if (((adb_trace_mask._1_1_ & 0x40) != 0) && ((int)adb_trace_severity._56_4_ < 2)) {
      pppppppbVar20 = (byte *******)0x1;
      puVar15 = (undefined1 *)0x0;
      apuStack_2c8[0] = &UNK_0040f98b;
      cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc();
      if (cVar3 != '\0') {
        apuStack_2c8[0] = &UNK_0040f998;
        unaff_R12 = (byte *******)func_0x0099bce0();
        uStack_2b4 = *(undefined4 *)unaff_R12;
        apuStack_2c8[0] = &UNK_0040f9cc;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (&pppppppbStack_220,&UNK_0017bc23,0xa7,1,0,0xffffffff);
        apuStack_2c8[0] = &UNK_0040f9d4;
        unaff_R13 = (byte *******)_ZN7android4base10LogMessage6streamEv(&pppppppbStack_220);
        if (((ulong)*pppppppbVar11 & 1) != 0) {
          pppppppbVar21 = (byte *******)pppppppbVar11[2];
        }
        pppppppbVar23 = (byte *******)&pppppppbStack_1c0;
        apuStack_2c8[0] = &UNK_0040f9fc;
        _ZN7android4base12StringPrintfEPKcz(pppppppbVar23,&UNK_00186845,pppppppbVar21);
        apuStack_2c8[0] = &UNK_0040fa07;
        puVar15 = (undefined1 *)pppppppbVar23;
        func_0x0032e5a0(unaff_R13);
        if (((ulong)pppppppbStack_1c0 & 1) != 0) {
          puVar15 = (undefined1 *)((ulong)pppppppbStack_1c0 & 0xfffffffffffffffe);
          apuStack_2c8[0] = &UNK_0040fa27;
          _ZdaPvSt11align_val_t(pppppppbStack_1b0);
        }
        pppppppbVar20 = (byte *******)&pppppppbStack_220;
        apuStack_2c8[0] = &UNK_0040fa33;
        _ZN7android4base10LogMessageD2Ev();
        *(undefined4 *)unaff_R12 = uStack_2b4;
      }
    }
    *(byte *)pppppppbVar18 = 0;
    *(byte *)(pppppppbVar18 + 0x15) = 0;
  }
  else {
    bVar24 = ((ulong)auStack_258 & 1) != 0;
    pppppppbStack_1f0 = (byte *******)(auStack_258 + 1);
    if (bVar24) {
      pppppppbStack_1f0 = pppppppbStack_248;
    }
    auStack_2b0 = (undefined1  [8])0x0;
    pppppppbStack_2a8 = (byte *******)0x0;
    uStack_1e8 = (ulong)auStack_258 >> 1 & 0x7f;
    if (bVar24) {
      uStack_1e8 = uStack_250;
    }
    pppppppbStack_2a0 = (byte *******)0x0;
    uStack_1d0 = 0x1ad;
    pppppppbStack_1e0 = (byte *******)(auStack_240 + 1);
    uStack_1d8 = (ulong)auStack_240 >> 1 & 0x7f;
    if (((ulong)auStack_240 & 1) != 0) {
      uStack_1d8 = uStack_238;
      pppppppbStack_1e0 = pppppppbStack_230;
    }
    unaff_R13 = &ppppppbStack_198;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
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
    ppppppbStack_198 = (byte ******)0x0;
    uStack_190 = 0;
    uStack_1b8 = 0x100;
    pppppppbStack_1b0 = (byte *******)0x0;
    puStack_1a8 = &UNK_00358010;
    uStack_1a0 = 0;
    ppppppbStack_298 = (byte ******)&UNK_0015b132;
    puStack_290 = &UNK_0015b137;
    uStack_288 = 0;
    uStack_280 = 0;
    uStack_278 = 2;
    uStack_218 = 2;
    pppppppbStack_210 = (byte *******)&pppppppbStack_1f0;
    uStack_208 = 0x1ad;
    pppppppbStack_220 = (byte *******)&pppppppbStack_1c0;
    auStack_200[0] = 0;
    cStack_1f8 = '\0';
    pppppppbVar20 = &ppppppbStack_298;
    puVar15 = (undefined1 *)&pppppppbStack_220;
    apuStack_2c8[0] = &UNK_0040f74e;
    pppppppbStack_1c0 = unaff_R13;
    pppppppbStack_98 = unaff_R13;
    func_0x003580e0();
    if (cStack_1f8 == '\x01') {
      pppppppbVar20 = (byte *******)auStack_200;
      apuStack_2c8[0] = &UNK_0040f763;
      _ZNSt3__16localeD2Ev();
    }
    pppppppbVar23 = pppppppbStack_98;
    pppppppbVar21 = pppppppbStack_1b0;
    if ((byte *******)0xfffffffffffffff6 < pppppppbStack_1b0) goto code_r0x0040fa47;
    if (pppppppbStack_1b0 < (byte *******)0x17) {
      auStack_2b0[0] = (char)pppppppbStack_1b0 * '\x02';
      unaff_R12 = (byte *******)(auStack_2b0 + 1);
    }
    else {
      lVar5 = 0x1a;
      if (((ulong)pppppppbStack_1b0 | 7) != 0x17) {
        lVar5 = ((ulong)pppppppbStack_1b0 | 7) + 1;
      }
      apuStack_2c8[0] = &UNK_0040f7df;
      unaff_R12 = (byte *******)_Znwm(lVar5);
      auStack_2b0 = (undefined1  [8])(lVar5 + 1);
      pppppppbStack_2a8 = pppppppbVar21;
      pppppppbStack_2a0 = unaff_R12;
    }
    unaff_R13 = &ppppppbStack_198;
    apuStack_2c8[0] = &UNK_0040f80f;
    func_0x0099bd90(unaff_R12,pppppppbVar23,pppppppbVar21);
    *(byte *)((long)unaff_R12 + (long)pppppppbVar21) = 0;
    if (pppppppbVar23 != unaff_R13) {
      apuStack_2c8[0] = &UNK_0040f828;
      _ZdaPvSt11align_val_t(pppppppbVar23,uStack_1b8);
    }
    puVar15 = _ZN4mdns19discovered_servicesE;
    apuStack_2c8[0] = &UNK_0040f845;
    pppppppbVar20 = pppppppbVar18;
    _ZN4mdns18DiscoveredServices12FindInstanceERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_
              (pppppppbVar18,_ZN4mdns19discovered_servicesE,auStack_2b0,&ppppppbStack_270);
    if (((ulong)auStack_2b0 & 1) != 0) {
      puVar15 = (undefined1 *)((ulong)auStack_2b0 & 0xfffffffffffffffe);
      apuStack_2c8[0] = &UNK_0040f865;
      pppppppbVar20 = pppppppbStack_2a0;
      _ZdaPvSt11align_val_t();
    }
  }
  if ((char)uStack_228 == '\x01') {
    pppppppbVar11 = pppppppbStack_248;
    if (((ulong)auStack_240 & 1) != 0) {
      puVar15 = (undefined1 *)((ulong)auStack_240 & 0xfffffffffffffffe);
      apuStack_2c8[0] = &UNK_0040f8df;
      pppppppbVar20 = pppppppbStack_230;
      _ZdaPvSt11align_val_t();
      pppppppbVar11 = pppppppbStack_248;
    }
    pppppppbVar19 = pppppppbStack_260;
    pppppppbStack_248 = pppppppbVar11;
    if (((ulong)auStack_258 & 1) != 0) {
      puVar15 = (undefined1 *)((ulong)auStack_258 & 0xfffffffffffffffe);
      apuStack_2c8[0] = &UNK_0040f8ff;
      _ZdaPvSt11align_val_t();
      pppppppbVar20 = pppppppbVar11;
      pppppppbVar19 = pppppppbStack_260;
    }
    pppppppbStack_260 = pppppppbVar19;
    if (((ulong)ppppppbStack_270 & 1) != 0) {
      puVar15 = (undefined1 *)((ulong)ppppppbStack_270 & 0xfffffffffffffffe);
      apuStack_2c8[0] = &UNK_0040f8a0;
      _ZdaPvSt11align_val_t();
      pppppppbVar20 = pppppppbVar19;
    }
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_90) {
    return pppppppbVar18;
  }
  apuStack_2c8[0] = &UNK_0040fa47;
  func_0x0099bd00();
  pppppppbVar11 = pppppppbVar23;
code_r0x0040fa47:
  apuStack_2c8[0] = &UNK_0040fa4c;
  func_0x0032e8f0();
  apuStack_2c8[0] = (undefined *)&puStack_60;
  pppppppbStack_2d0 = pppppppbVar21;
  pppppppbStack_2d8 = pppppppbVar11;
  pppppppbStack_2e0 = unaff_R13;
  pppppppbStack_2e8 = unaff_R12;
  pppppppbStack_2f0 = pppppppbVar18;
  lStack_2f8 = *(long *)(in_FS_OFFSET + 0x28);
  ppppppbVar13 = (byte ******)(ulong)((byte)*puVar15 >> 1);
  bVar12 = *puVar15 & 1;
  ppppppbVar6 = *(byte *******)((long)puVar15 + 8);
  ppppppbVar16 = ppppppbVar6;
  if (bVar12 == 0) {
    ppppppbVar16 = ppppppbVar13;
  }
  if (ppppppbVar16 == (byte ******)0x0) {
    apuStack_380[0] = &UNK_0040fc05;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (&ppppppbStack_348,&UNK_0017bc23,0xb1,6,0,0xffffffff);
    apuStack_380[0] = &UNK_0040fc0d;
    uVar7 = _ZN7android4base10LogMessage6streamEv(&ppppppbStack_348);
    apuStack_380[0] = &UNK_0040fc21;
    uVar7 = func_0x0032eb30(uVar7,&UNK_0015b324,0x1b);
    apuStack_380[0] = &UNK_0040fc35;
    func_0x0032eb30(uVar7,&UNK_0015ae05,1);
    apuStack_380[0] = &UNK_0040fc3d;
    _ZN7android4base10LogMessageD2Ev(&ppppppbStack_348);
    ppppppbVar6 = *(byte *******)((long)puVar15 + 8);
    bVar12 = *puVar15 & 1;
    ppppppbVar13 = (byte ******)(ulong)((byte)*puVar15 >> 1);
  }
  pppppppbStack_308 = (byte *******)0x0;
  uStack_300 = 0;
  uStack_318 = 0;
  uStack_310 = 0;
  uStack_328 = 0;
  pppppppbStack_320 = (byte *******)0x0;
  pppppppbStack_338 = (byte *******)0x0;
  uStack_330 = 0;
  ppppppbStack_348 = (byte ******)0x0;
  uStack_340 = 0;
  ppppppbVar16 = (byte ******)((long)puVar15 + 1);
  ppppppbVar17 = ppppppbVar16;
  if (bVar12 != 0) {
    ppppppbVar17 = *(byte *******)((long)puVar15 + 0x10);
    ppppppbVar13 = ppppppbVar6;
  }
  pppppppbVar11 = &ppppppbStack_348;
  apuStack_380[0] = &UNK_0040fac7;
  _ZN4mdns24mdns_parse_instance_nameENSt3__117basic_string_viewIcNS0_11char_traitsIcEEEE
            (pppppppbVar11,ppppppbVar17,ppppppbVar13);
  if ((char)uStack_300 == '\0') {
    if (((adb_trace_mask._1_1_ & 0x40) != 0) && ((int)adb_trace_severity._56_4_ < 2)) {
      pppppppbVar11 = (byte *******)0x1;
      apuStack_380[0] = &UNK_0040fc5d;
      cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
      if (cVar3 != '\0') {
        apuStack_380[0] = &UNK_0040fc6a;
        unaff_R12 = (byte *******)func_0x0099bce0();
        uStack_36c = *(undefined4 *)unaff_R12;
        apuStack_380[0] = &UNK_0040fc9e;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (&ppppppbStack_350,&UNK_0017bc23,0xb5,1,0,0xffffffff);
        apuStack_380[0] = &UNK_0040fca6;
        unaff_R13 = (byte *******)_ZN7android4base10LogMessage6streamEv(&ppppppbStack_350);
        if (((ulong)*(byte *******)puVar15 & 1) != 0) {
          ppppppbVar16 = *(byte *******)((long)puVar15 + 0x10);
        }
        puVar15 = auStack_368;
        apuStack_380[0] = &UNK_0040fcce;
        _ZN7android4base12StringPrintfEPKcz(puVar15,&UNK_00186845,ppppppbVar16);
        apuStack_380[0] = &UNK_0040fcd9;
        func_0x0032e5a0(unaff_R13,puVar15);
        if ((auStack_368[0] & 1) != 0) {
          apuStack_380[0] = &UNK_0040fcf9;
          _ZdaPvSt11align_val_t
                    (CONCAT17(uStack_351,CONCAT16(uStack_352,CONCAT51(uStack_357,uStack_358))),
                     CONCAT35((undefined3)uStack_363,CONCAT41(auStack_368._1_4_,auStack_368[0])) &
                     0xfffffffffffffffe);
        }
        pppppppbVar11 = &ppppppbStack_350;
        apuStack_380[0] = &UNK_0040fd05;
        _ZN7android4base10LogMessageD2Ev(pppppppbVar11);
        *(undefined4 *)unaff_R12 = uStack_36c;
      }
    }
    *(byte *)pppppppbVar20 = 0;
    *(byte *)(pppppppbVar20 + 0x15) = 0;
  }
  else {
    auStack_368[0] = 0x2a;
    auStack_368._1_4_ = 0x6264615f;
    uStack_363 = 0x736c742d;
    uStack_35f = 0x6961702d;
    uStack_35b = 0x72;
    uStack_35a = 0x6e69;
    uStack_358 = 0x67;
    uStack_357 = 0x7063745f2e;
    uStack_352 = 0;
    apuStack_380[0] = &UNK_0040fb14;
    pppppppbVar11 = pppppppbVar20;
    _ZN4mdns18DiscoveredServices12FindInstanceERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_
              (pppppppbVar20,_ZN4mdns19discovered_servicesE,auStack_368,&ppppppbStack_348);
    if ((auStack_368[0] & 1) != 0) {
      pppppppbVar11 =
           (byte *******)CONCAT17(uStack_351,CONCAT16(uStack_352,CONCAT51(uStack_357,uStack_358)));
      apuStack_380[0] = &UNK_0040fb34;
      _ZdaPvSt11align_val_t
                (pppppppbVar11,
                 CONCAT35((undefined3)uStack_363,CONCAT41(auStack_368._1_4_,auStack_368[0])) &
                 0xfffffffffffffffe);
    }
  }
  if ((char)uStack_300 == '\x01') {
    pppppppbVar18 = pppppppbStack_320;
    if ((uStack_318 & 1) != 0) {
      apuStack_380[0] = &UNK_0040fbc0;
      pppppppbVar11 = pppppppbStack_308;
      _ZdaPvSt11align_val_t(pppppppbStack_308,uStack_318 & 0xfffffffffffffffe);
      pppppppbVar18 = pppppppbStack_320;
    }
    pppppppbVar21 = pppppppbStack_338;
    pppppppbStack_320 = pppppppbVar18;
    if ((uStack_330 & 1) != 0) {
      apuStack_380[0] = &UNK_0040fbd7;
      _ZdaPvSt11align_val_t(pppppppbVar18,uStack_330 & 0xfffffffffffffffe);
      pppppppbVar11 = pppppppbVar18;
      pppppppbVar21 = pppppppbStack_338;
    }
    pppppppbStack_338 = pppppppbVar21;
    if (((ulong)ppppppbStack_348 & 1) != 0) {
      apuStack_380[0] = &UNK_0040fb87;
      _ZdaPvSt11align_val_t(pppppppbVar21,(ulong)ppppppbStack_348 & 0xfffffffffffffffe);
      pppppppbVar11 = pppppppbVar21;
    }
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_2f8) {
    return pppppppbVar20;
  }
  apuStack_380[0] = &UNK_0040fd19;
  func_0x0099bd00();
  pppppppbStack_3a0 = *(byte ********)(in_FS_OFFSET + 0x28);
  plVar14 = alStack_448;
  puStack_458 = &UNK_0040fd4f;
  pppppppbStack_398 = pppppppbVar20;
  pppppppbStack_390 = (byte *******)puVar15;
  ppppppbStack_388 = ppppppbVar16;
  apuStack_380[0] = (undefined *)apuStack_2c8;
  _ZN11ServiceInfoC2ERKS_(plVar14,pppppppbVar11);
  puStack_458 = &UNK_0040fd59;
  uVar7 = _Znwm(8);
  puStack_458 = &UNK_0040fd64;
  _ZNSt3__115__thread_structC2Ev(uVar7);
  puStack_458 = &UNK_0040fd6e;
  puVar8 = (undefined8 *)_Znwm(0xb0);
  *puVar8 = uVar7;
  puStack_458 = &UNK_0040fd80;
  _ZN11ServiceInfoC2ERKS_(puVar8 + 1,plVar14);
  puStack_458 = &UNK_0040fd98;
  uVar4 = func_0x0099be80(&lStack_450,0,&UNK_0040fdf0,puVar8);
  if (uVar4 == 0) {
    plVar14 = &lStack_450;
    puStack_458 = &UNK_0040fdab;
    _ZNSt3__16thread6detachEv(plVar14);
    puStack_458 = &UNK_0040fdb3;
    _ZNSt3__16threadD2Ev(plVar14);
    plVar22 = alStack_448;
    puStack_458 = &UNK_0040fdbf;
    _ZN11ServiceInfoD2Ev();
    if (*(byte ********)(in_FS_OFFSET + 0x28) == pppppppbStack_3a0) {
      return *(byte ********)(in_FS_OFFSET + 0x28);
    }
  }
  else {
    plVar22 = (long *)(ulong)uVar4;
    puStack_458 = &UNK_0040fdea;
    _ZNSt3__120__throw_system_errorEiPKc(plVar22,&UNK_0015f7ec);
  }
  puStack_458 = &UNK_0040fdef;
  func_0x0099bd00();
  lStack_488 = *(long *)(in_FS_OFFSET + 0x28);
  plStack_480 = plVar14;
  pppppppbStack_478 = unaff_R12;
  pppppppbStack_470 = unaff_R13;
  uStack_468 = uVar7;
  puStack_460 = puVar8;
  puStack_458 = (undefined *)apuStack_380;
  puVar9 = (undefined4 *)_ZNSt3__119__thread_local_dataEv();
  lVar5 = *plVar22;
  *plVar22 = 0;
  func_0x0099bfc0(*puVar9,lVar5);
  if ((((adb_trace_mask._1_1_ & 0x40) != 0) && ((int)adb_trace_severity._56_4_ < 2)) &&
     (cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0), cVar3 != '\0')) {
    puVar9 = (undefined4 *)func_0x0099bce0();
    uVar1 = *puVar9;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (&puStack_5b8,&UNK_0017bc23,0x36,1,0,0xffffffff);
    uVar7 = _ZN7android4base10LogMessage6streamEv(&puStack_5b8);
    uVar7 = func_0x0032eb30(uVar7,&UNK_0018af32,0x2a);
    uVar7 = _ZlsRNSt3__113basic_ostreamIcNS_11char_traitsIcEEEERK11ServiceInfo(uVar7,plVar22 + 1);
    func_0x0032eb30(uVar7,&UNK_00162c6d,1);
    _ZN7android4base10LogMessageD2Ev(&puStack_5b8);
    *puVar9 = uVar1;
  }
  auStack_698[0] = 0;
  auStack_698[1] = 0;
  auStack_698[2] = 0;
  bVar24 = (*(byte *)(plVar22 + 1) & 1) != 0;
  uStack_648 = (long)plVar22 + 9;
  if (bVar24) {
    uStack_648 = plVar22[3];
  }
  puStack_640 = (undefined1 *)(ulong)(*(byte *)(plVar22 + 1) >> 1);
  if (bVar24) {
    puStack_640 = (undefined1 *)plVar22[2];
  }
  bVar24 = (*(byte *)(plVar22 + 4) & 1) != 0;
  lStack_638 = (long)plVar22 + 0x21;
  if (bVar24) {
    lStack_638 = plVar22[6];
  }
  uStack_630 = (ulong)(*(byte *)(plVar22 + 4) >> 1);
  if (bVar24) {
    uStack_630 = plVar22[5];
  }
  uStack_628 = 0x1ad;
  puStack_5b8 = &uStack_590;
  uStack_4a0 = 0;
  uStack_498 = 0;
  uStack_4b0 = 0;
  uStack_4a8 = 0;
  uStack_4c0 = 0;
  uStack_4b8 = 0;
  uStack_4d0 = 0;
  uStack_4c8 = 0;
  uStack_4e0 = 0;
  uStack_4d8 = 0;
  uStack_4f0 = 0;
  uStack_4e8 = 0;
  uStack_500 = 0;
  uStack_4f8 = 0;
  uStack_510 = 0;
  uStack_508 = 0;
  uStack_520 = 0;
  uStack_518 = 0;
  uStack_530 = 0;
  uStack_528 = 0;
  uStack_540 = 0;
  uStack_538 = 0;
  uStack_550 = 0;
  uStack_548 = 0;
  uStack_560 = 0;
  uStack_558 = 0;
  uStack_570 = 0;
  uStack_568 = 0;
  uStack_580 = 0;
  uStack_578 = 0;
  uStack_590 = 0;
  uStack_588 = 0;
  uStack_5b0 = 0x100;
  uStack_5a8 = 0;
  puStack_5a0 = &UNK_00358010;
  uStack_598 = 0;
  puStack_670 = &UNK_0015b132;
  puStack_668 = &UNK_0015b137;
  uStack_660 = 0;
  uStack_658 = 0;
  uStack_650 = 2;
  uStack_610 = 2;
  puStack_608 = &uStack_648;
  uStack_600 = 0x1ad;
  auStack_618 = (undefined1  [8])&puStack_5b8;
  auStack_5f8[0] = 0;
  cStack_5f0 = '\0';
  puStack_490 = puStack_5b8;
  func_0x003580e0(&puStack_670,auStack_618);
  if (cStack_5f0 == '\x01') {
    _ZNSt3__16localeD2Ev(auStack_5f8);
  }
  puVar8 = puStack_490;
  uVar2 = uStack_5a8;
  if (uStack_5a8 < 0xfffffffffffffff7) {
    if (uStack_5a8 < 0x17) {
      auStack_618[0] = (char)uStack_5a8 * '\x02';
      puVar10 = (ulong *)(auStack_618 + 1);
    }
    else {
      lVar5 = 0x1a;
      if ((uStack_5a8 | 7) != 0x17) {
        lVar5 = (uStack_5a8 | 7) + 1;
      }
      puVar10 = (ulong *)_Znwm(lVar5);
      auStack_618 = (undefined1  [8])(lVar5 + 1);
      uStack_610 = uVar2;
      puStack_608 = puVar10;
    }
    func_0x0099bd90(puVar10,puVar8,uVar2);
    *(undefined1 *)((long)puVar10 + uVar2) = 0;
    if (puVar8 != &uStack_590) {
      _ZdaPvSt11align_val_t(puVar8,uStack_5b0);
    }
    _Z14connect_deviceRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPS5_
              (auStack_618,auStack_698);
    if (((ulong)auStack_618 & 1) != 0) {
      _ZdaPvSt11align_val_t(puStack_608,(ulong)auStack_618 & 0xfffffffffffffffe);
    }
    if ((((adb_trace_mask._1_1_ & 0x40) != 0) && ((int)adb_trace_severity._56_4_ < 2)) &&
       (cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0), cVar3 != '\0')) {
      puVar9 = (undefined4 *)func_0x0099bce0();
      uVar1 = *puVar9;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_6a0,&UNK_0017bc23,0x39,1,0,0xffffffff);
      uVar7 = _ZN7android4base10LogMessage6streamEv(auStack_6a0);
      _ZNK11ServiceInfo17v4_address_stringEv(&puStack_670,plVar22 + 1);
      func_0x00410810(auStack_618,plVar22 + 1,plVar22 + 4,&puStack_670,plVar22 + 0x10,auStack_698);
      uStack_4a0 = 0;
      uStack_498 = 0;
      uStack_4b0 = 0;
      uStack_4a8 = 0;
      uStack_4c0 = 0;
      uStack_4b8 = 0;
      uStack_4d0 = 0;
      uStack_4c8 = 0;
      uStack_4e0 = 0;
      uStack_4d8 = 0;
      uStack_4f0 = 0;
      uStack_4e8 = 0;
      uStack_500 = 0;
      uStack_4f8 = 0;
      uStack_510 = 0;
      uStack_508 = 0;
      uStack_520 = 0;
      uStack_518 = 0;
      uStack_530 = 0;
      uStack_528 = 0;
      uStack_540 = 0;
      uStack_538 = 0;
      uStack_550 = 0;
      uStack_548 = 0;
      uStack_560 = 0;
      uStack_558 = 0;
      uStack_570 = 0;
      uStack_568 = 0;
      uStack_580 = 0;
      uStack_578 = 0;
      uStack_590 = 0;
      uStack_588 = 0;
      uStack_5b0 = 0x100;
      uStack_5a8 = 0;
      puStack_5a0 = &UNK_00358010;
      uStack_598 = 0;
      uStack_648 = 5;
      lStack_638 = lStack_5c8;
      puStack_640 = auStack_618;
      puStack_5b8 = &uStack_590;
      puStack_490 = &uStack_590;
      func_0x0036acc0(&puStack_5b8,&UNK_0017ef7d,0x2c);
      puStack_680 = puStack_490;
      uStack_678 = uStack_5a8;
      _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8nn220000INS_17basic_string_viewIcS2_EETnNS_9enable_ifIXaa35__can_be_converted_to_string_view_vIcS2_T_Entsr7is_sameIu14__remove_cvrefISA_ES5_EE5valueEiE4typeELi0EEERKSA_
                (&uStack_648,&puStack_680);
      if (puStack_490 != &uStack_590) {
        _ZdaPvSt11align_val_t(puStack_490,uStack_5b0);
      }
      func_0x0032e5a0(uVar7,&uStack_648);
      if ((uStack_648 & 1) != 0) {
        _ZdaPvSt11align_val_t(lStack_638,uStack_648 & 0xfffffffffffffffe);
      }
      if (((ulong)puStack_670 & 1) != 0) {
        _ZdaPvSt11align_val_t
                  (CONCAT44(uStack_65c,uStack_660),(ulong)puStack_670 & 0xfffffffffffffffe);
      }
      _ZN7android4base10LogMessageD2Ev(auStack_6a0);
      *puVar9 = uVar1;
    }
    if ((auStack_698[0] & 1) != 0) {
      _ZdaPvSt11align_val_t(auStack_698[2],auStack_698[0] & 0xfffffffffffffffe);
    }
    _ZN11ServiceInfoD2Ev(plVar22 + 1);
    lVar5 = *plVar22;
    *plVar22 = 0;
    if (lVar5 != 0) {
      _ZNSt3__115__thread_structD2Ev(lVar5);
      _ZdaPvSt11align_val_t(lVar5,8);
    }
    _ZdaPvSt11align_val_t(plVar22,0xb0);
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_488) {
      return (byte *******)0x0;
    }
  }
  else {
    func_0x0032e8f0();
  }
  func_0x0099bd00();
  pppppppbVar11 = (byte *******)free();
  return pppppppbVar11;
}


