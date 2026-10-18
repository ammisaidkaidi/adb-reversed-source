// Function: _Z29mdns_get_pairing_service_infoRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE
// Address: 0040fa50
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong * _Z29mdns_get_pairing_service_infoRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE
                  (ulong *param_1,byte *param_2)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  ulong *puVar8;
  byte bVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  byte *pbVar13;
  ulong *puVar14;
  ulong *puVar15;
  long *plVar16;
  undefined4 *unaff_R12;
  undefined8 unaff_R13;
  long lVar17;
  byte *pbVar18;
  long in_FS_OFFSET;
  bool bVar19;
  undefined1 auStack_3e0 [8];
  ulong auStack_3d8 [3];
  undefined8 *puStack_3c0;
  ulong uStack_3b8;
  undefined *puStack_3b0;
  undefined *puStack_3a8;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined8 uStack_398;
  undefined8 uStack_390;
  ulong uStack_388;
  undefined1 *puStack_380;
  long lStack_378;
  ulong uStack_370;
  undefined8 uStack_368;
  undefined1 auStack_358 [8];
  ulong uStack_350;
  ulong *puStack_348;
  undefined8 uStack_340;
  undefined1 auStack_338 [8];
  char cStack_330;
  long lStack_308;
  undefined8 *puStack_2f8;
  undefined8 uStack_2f0;
  ulong uStack_2e8;
  undefined *puStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 *puStack_1d0;
  long lStack_1c8;
  long *plStack_1c0;
  undefined4 *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 *puStack_1a0;
  undefined *puStack_198;
  long lStack_190;
  long alStack_188 [21];
  ulong *puStack_e0;
  ulong *puStack_d8;
  byte *pbStack_d0;
  byte *pbStack_c8;
  undefined *apuStack_c0 [2];
  undefined4 uStack_ac;
  byte bStack_a8;
  undefined4 uStack_a7;
  undefined4 uStack_a3;
  undefined4 uStack_9f;
  undefined1 uStack_9b;
  undefined2 uStack_9a;
  undefined1 uStack_98;
  undefined5 uStack_97;
  undefined1 uStack_92;
  undefined1 uStack_91;
  ulong uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  ulong *puStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  ulong *puStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  ulong *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  uVar10 = (ulong)(*param_2 >> 1);
  bVar9 = *param_2 & 1;
  uVar4 = *(ulong *)(param_2 + 8);
  uVar12 = uVar4;
  if (bVar9 == 0) {
    uVar12 = uVar10;
  }
  if (uVar12 == 0) {
    apuStack_c0[0] = &UNK_0040fc05;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (&uStack_88,&UNK_0017bc23,0xb1,6,0,0xffffffff);
    apuStack_c0[0] = &UNK_0040fc0d;
    uVar5 = _ZN7android4base10LogMessage6streamEv(&uStack_88);
    apuStack_c0[0] = &UNK_0040fc21;
    uVar5 = func_0x0032eb30(uVar5,&UNK_0015b324,0x1b);
    apuStack_c0[0] = &UNK_0040fc35;
    func_0x0032eb30(uVar5,&UNK_0015ae05,1);
    apuStack_c0[0] = &UNK_0040fc3d;
    _ZN7android4base10LogMessageD2Ev(&uStack_88);
    uVar4 = *(ulong *)(param_2 + 8);
    bVar9 = *param_2 & 1;
    uVar10 = (ulong)(*param_2 >> 1);
  }
  puStack_48 = (ulong *)0x0;
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_68 = 0;
  puStack_60 = (ulong *)0x0;
  puStack_78 = (ulong *)0x0;
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  pbVar18 = param_2 + 1;
  pbVar13 = pbVar18;
  if (bVar9 != 0) {
    pbVar13 = *(byte **)(param_2 + 0x10);
    uVar10 = uVar4;
  }
  puVar8 = &uStack_88;
  apuStack_c0[0] = &UNK_0040fac7;
  _ZN4mdns24mdns_parse_instance_nameENSt3__117basic_string_viewIcNS0_11char_traitsIcEEEE
            (puVar8,pbVar13,uVar10);
  if ((char)uStack_40 == '\0') {
    if (((adb_trace_mask._1_1_ & 0x40) != 0) && ((int)adb_trace_severity._56_4_ < 2)) {
      puVar8 = (ulong *)0x1;
      apuStack_c0[0] = &UNK_0040fc5d;
      cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
      if (cVar2 != '\0') {
        apuStack_c0[0] = &UNK_0040fc6a;
        unaff_R12 = (undefined4 *)func_0x0099bce0();
        uStack_ac = *unaff_R12;
        apuStack_c0[0] = &UNK_0040fc9e;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (&uStack_90,&UNK_0017bc23,0xb5,1,0,0xffffffff);
        apuStack_c0[0] = &UNK_0040fca6;
        unaff_R13 = _ZN7android4base10LogMessage6streamEv(&uStack_90);
        if ((*param_2 & 1) != 0) {
          pbVar18 = *(byte **)(param_2 + 0x10);
        }
        param_2 = &bStack_a8;
        apuStack_c0[0] = &UNK_0040fcce;
        _ZN7android4base12StringPrintfEPKcz(param_2,&UNK_00186845,pbVar18);
        apuStack_c0[0] = &UNK_0040fcd9;
        func_0x0032e5a0(unaff_R13,param_2);
        if ((bStack_a8 & 1) != 0) {
          apuStack_c0[0] = &UNK_0040fcf9;
          _ZdaPvSt11align_val_t
                    (CONCAT17(uStack_91,CONCAT16(uStack_92,CONCAT51(uStack_97,uStack_98))),
                     CONCAT35((undefined3)uStack_a3,CONCAT41(uStack_a7,bStack_a8)) &
                     0xfffffffffffffffe);
        }
        puVar8 = &uStack_90;
        apuStack_c0[0] = &UNK_0040fd05;
        _ZN7android4base10LogMessageD2Ev(puVar8);
        *unaff_R12 = uStack_ac;
      }
    }
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 0x15) = 0;
  }
  else {
    bStack_a8 = 0x2a;
    uStack_a7 = 0x6264615f;
    uStack_a3 = 0x736c742d;
    uStack_9f = 0x6961702d;
    uStack_9b = 0x72;
    uStack_9a = 0x6e69;
    uStack_98 = 0x67;
    uStack_97 = 0x7063745f2e;
    uStack_92 = 0;
    apuStack_c0[0] = &UNK_0040fb14;
    puVar8 = param_1;
    _ZN4mdns18DiscoveredServices12FindInstanceERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_
              (param_1,_ZN4mdns19discovered_servicesE,&bStack_a8,&uStack_88);
    if ((bStack_a8 & 1) != 0) {
      puVar8 = (ulong *)CONCAT17(uStack_91,CONCAT16(uStack_92,CONCAT51(uStack_97,uStack_98)));
      apuStack_c0[0] = &UNK_0040fb34;
      _ZdaPvSt11align_val_t
                (puVar8,CONCAT35((undefined3)uStack_a3,CONCAT41(uStack_a7,bStack_a8)) &
                        0xfffffffffffffffe);
    }
  }
  if ((char)uStack_40 == '\x01') {
    puVar15 = puStack_60;
    if ((uStack_58 & 1) != 0) {
      apuStack_c0[0] = &UNK_0040fbc0;
      puVar8 = puStack_48;
      _ZdaPvSt11align_val_t(puStack_48,uStack_58 & 0xfffffffffffffffe);
      puVar15 = puStack_60;
    }
    puVar14 = puStack_78;
    puStack_60 = puVar15;
    if ((uStack_70 & 1) != 0) {
      apuStack_c0[0] = &UNK_0040fbd7;
      _ZdaPvSt11align_val_t(puVar15,uStack_70 & 0xfffffffffffffffe);
      puVar8 = puVar15;
      puVar14 = puStack_78;
    }
    puStack_78 = puVar14;
    if ((uStack_88 & 1) != 0) {
      apuStack_c0[0] = &UNK_0040fb87;
      _ZdaPvSt11align_val_t(puVar14,uStack_88 & 0xfffffffffffffffe);
      puVar8 = puVar14;
    }
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return param_1;
  }
  apuStack_c0[0] = &UNK_0040fd19;
  func_0x0099bd00();
  puStack_e0 = *(ulong **)(in_FS_OFFSET + 0x28);
  plVar11 = alStack_188;
  puStack_198 = &UNK_0040fd4f;
  puStack_d8 = param_1;
  pbStack_d0 = param_2;
  pbStack_c8 = pbVar18;
  apuStack_c0[0] = &stack0xfffffffffffffff8;
  _ZN11ServiceInfoC2ERKS_(plVar11,puVar8);
  puStack_198 = &UNK_0040fd59;
  uVar5 = _Znwm(8);
  puStack_198 = &UNK_0040fd64;
  _ZNSt3__115__thread_structC2Ev(uVar5);
  puStack_198 = &UNK_0040fd6e;
  puVar6 = (undefined8 *)_Znwm(0xb0);
  *puVar6 = uVar5;
  puStack_198 = &UNK_0040fd80;
  _ZN11ServiceInfoC2ERKS_(puVar6 + 1,plVar11);
  puStack_198 = &UNK_0040fd98;
  uVar3 = func_0x0099be80(&lStack_190,0,&UNK_0040fdf0,puVar6);
  if (uVar3 == 0) {
    plVar11 = &lStack_190;
    puStack_198 = &UNK_0040fdab;
    _ZNSt3__16thread6detachEv(plVar11);
    puStack_198 = &UNK_0040fdb3;
    _ZNSt3__16threadD2Ev(plVar11);
    plVar16 = alStack_188;
    puStack_198 = &UNK_0040fdbf;
    _ZN11ServiceInfoD2Ev();
    if (*(ulong **)(in_FS_OFFSET + 0x28) == puStack_e0) {
      return *(ulong **)(in_FS_OFFSET + 0x28);
    }
  }
  else {
    plVar16 = (long *)(ulong)uVar3;
    puStack_198 = &UNK_0040fdea;
    _ZNSt3__120__throw_system_errorEiPKc(plVar16,&UNK_0015f7ec);
  }
  puStack_198 = &UNK_0040fdef;
  func_0x0099bd00();
  lStack_1c8 = *(long *)(in_FS_OFFSET + 0x28);
  plStack_1c0 = plVar11;
  puStack_1b8 = unaff_R12;
  uStack_1b0 = unaff_R13;
  uStack_1a8 = uVar5;
  puStack_1a0 = puVar6;
  puStack_198 = (undefined *)apuStack_c0;
  puVar7 = (undefined4 *)_ZNSt3__119__thread_local_dataEv();
  lVar17 = *plVar16;
  *plVar16 = 0;
  func_0x0099bfc0(*puVar7,lVar17);
  if ((((adb_trace_mask._1_1_ & 0x40) != 0) && ((int)adb_trace_severity._56_4_ < 2)) &&
     (cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0), cVar2 != '\0')) {
    puVar7 = (undefined4 *)func_0x0099bce0();
    uVar1 = *puVar7;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (&puStack_2f8,&UNK_0017bc23,0x36,1,0,0xffffffff);
    uVar5 = _ZN7android4base10LogMessage6streamEv(&puStack_2f8);
    uVar5 = func_0x0032eb30(uVar5,&UNK_0018af32,0x2a);
    uVar5 = _ZlsRNSt3__113basic_ostreamIcNS_11char_traitsIcEEEERK11ServiceInfo(uVar5,plVar16 + 1);
    func_0x0032eb30(uVar5,&UNK_00162c6d,1);
    _ZN7android4base10LogMessageD2Ev(&puStack_2f8);
    *puVar7 = uVar1;
  }
  auStack_3d8[0] = 0;
  auStack_3d8[1] = 0;
  auStack_3d8[2] = 0;
  bVar19 = (*(byte *)(plVar16 + 1) & 1) != 0;
  uStack_388 = (long)plVar16 + 9;
  if (bVar19) {
    uStack_388 = plVar16[3];
  }
  puStack_380 = (undefined1 *)(ulong)(*(byte *)(plVar16 + 1) >> 1);
  if (bVar19) {
    puStack_380 = (undefined1 *)plVar16[2];
  }
  bVar19 = (*(byte *)(plVar16 + 4) & 1) != 0;
  lStack_378 = (long)plVar16 + 0x21;
  if (bVar19) {
    lStack_378 = plVar16[6];
  }
  uStack_370 = (ulong)(*(byte *)(plVar16 + 4) >> 1);
  if (bVar19) {
    uStack_370 = plVar16[5];
  }
  uStack_368 = 0x1ad;
  puStack_2f8 = &uStack_2d0;
  uStack_1e0 = 0;
  uStack_1d8 = 0;
  uStack_1f0 = 0;
  uStack_1e8 = 0;
  uStack_200 = 0;
  uStack_1f8 = 0;
  uStack_210 = 0;
  uStack_208 = 0;
  uStack_220 = 0;
  uStack_218 = 0;
  uStack_230 = 0;
  uStack_228 = 0;
  uStack_240 = 0;
  uStack_238 = 0;
  uStack_250 = 0;
  uStack_248 = 0;
  uStack_260 = 0;
  uStack_258 = 0;
  uStack_270 = 0;
  uStack_268 = 0;
  uStack_280 = 0;
  uStack_278 = 0;
  uStack_290 = 0;
  uStack_288 = 0;
  uStack_2a0 = 0;
  uStack_298 = 0;
  uStack_2b0 = 0;
  uStack_2a8 = 0;
  uStack_2c0 = 0;
  uStack_2b8 = 0;
  uStack_2d0 = 0;
  uStack_2c8 = 0;
  uStack_2f0 = 0x100;
  uStack_2e8 = 0;
  puStack_2e0 = &UNK_00358010;
  uStack_2d8 = 0;
  puStack_3b0 = &UNK_0015b132;
  puStack_3a8 = &UNK_0015b137;
  uStack_3a0 = 0;
  uStack_398 = 0;
  uStack_390 = 2;
  uStack_350 = 2;
  puStack_348 = &uStack_388;
  uStack_340 = 0x1ad;
  auStack_358 = (undefined1  [8])&puStack_2f8;
  auStack_338[0] = 0;
  cStack_330 = '\0';
  puStack_1d0 = puStack_2f8;
  func_0x003580e0(&puStack_3b0,auStack_358);
  if (cStack_330 == '\x01') {
    _ZNSt3__16localeD2Ev(auStack_338);
  }
  puVar6 = puStack_1d0;
  uVar4 = uStack_2e8;
  if (uStack_2e8 < 0xfffffffffffffff7) {
    if (uStack_2e8 < 0x17) {
      auStack_358[0] = (char)uStack_2e8 * '\x02';
      puVar8 = (ulong *)(auStack_358 + 1);
    }
    else {
      lVar17 = 0x1a;
      if ((uStack_2e8 | 7) != 0x17) {
        lVar17 = (uStack_2e8 | 7) + 1;
      }
      puVar8 = (ulong *)_Znwm(lVar17);
      auStack_358 = (undefined1  [8])(lVar17 + 1);
      uStack_350 = uVar4;
      puStack_348 = puVar8;
    }
    func_0x0099bd90(puVar8,puVar6,uVar4);
    *(undefined1 *)((long)puVar8 + uVar4) = 0;
    if (puVar6 != &uStack_2d0) {
      _ZdaPvSt11align_val_t(puVar6,uStack_2f0);
    }
    _Z14connect_deviceRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPS5_
              (auStack_358,auStack_3d8);
    if (((ulong)auStack_358 & 1) != 0) {
      _ZdaPvSt11align_val_t(puStack_348,(ulong)auStack_358 & 0xfffffffffffffffe);
    }
    if ((((adb_trace_mask._1_1_ & 0x40) != 0) && ((int)adb_trace_severity._56_4_ < 2)) &&
       (cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0), cVar2 != '\0')) {
      puVar7 = (undefined4 *)func_0x0099bce0();
      uVar1 = *puVar7;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_3e0,&UNK_0017bc23,0x39,1,0,0xffffffff);
      uVar5 = _ZN7android4base10LogMessage6streamEv(auStack_3e0);
      _ZNK11ServiceInfo17v4_address_stringEv(&puStack_3b0,plVar16 + 1);
      func_0x00410810(auStack_358,plVar16 + 1,plVar16 + 4,&puStack_3b0,plVar16 + 0x10,auStack_3d8);
      uStack_1e0 = 0;
      uStack_1d8 = 0;
      uStack_1f0 = 0;
      uStack_1e8 = 0;
      uStack_200 = 0;
      uStack_1f8 = 0;
      uStack_210 = 0;
      uStack_208 = 0;
      uStack_220 = 0;
      uStack_218 = 0;
      uStack_230 = 0;
      uStack_228 = 0;
      uStack_240 = 0;
      uStack_238 = 0;
      uStack_250 = 0;
      uStack_248 = 0;
      uStack_260 = 0;
      uStack_258 = 0;
      uStack_270 = 0;
      uStack_268 = 0;
      uStack_280 = 0;
      uStack_278 = 0;
      uStack_290 = 0;
      uStack_288 = 0;
      uStack_2a0 = 0;
      uStack_298 = 0;
      uStack_2b0 = 0;
      uStack_2a8 = 0;
      uStack_2c0 = 0;
      uStack_2b8 = 0;
      uStack_2d0 = 0;
      uStack_2c8 = 0;
      uStack_2f0 = 0x100;
      uStack_2e8 = 0;
      puStack_2e0 = &UNK_00358010;
      uStack_2d8 = 0;
      uStack_388 = 5;
      lStack_378 = lStack_308;
      puStack_380 = auStack_358;
      puStack_2f8 = &uStack_2d0;
      puStack_1d0 = &uStack_2d0;
      func_0x0036acc0(&puStack_2f8,&UNK_0017ef7d,0x2c);
      puStack_3c0 = puStack_1d0;
      uStack_3b8 = uStack_2e8;
      _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8nn220000INS_17basic_string_viewIcS2_EETnNS_9enable_ifIXaa35__can_be_converted_to_string_view_vIcS2_T_Entsr7is_sameIu14__remove_cvrefISA_ES5_EE5valueEiE4typeELi0EEERKSA_
                (&uStack_388,&puStack_3c0);
      if (puStack_1d0 != &uStack_2d0) {
        _ZdaPvSt11align_val_t(puStack_1d0,uStack_2f0);
      }
      func_0x0032e5a0(uVar5,&uStack_388);
      if ((uStack_388 & 1) != 0) {
        _ZdaPvSt11align_val_t(lStack_378,uStack_388 & 0xfffffffffffffffe);
      }
      if (((ulong)puStack_3b0 & 1) != 0) {
        _ZdaPvSt11align_val_t
                  (CONCAT44(uStack_39c,uStack_3a0),(ulong)puStack_3b0 & 0xfffffffffffffffe);
      }
      _ZN7android4base10LogMessageD2Ev(auStack_3e0);
      *puVar7 = uVar1;
    }
    if ((auStack_3d8[0] & 1) != 0) {
      _ZdaPvSt11align_val_t(auStack_3d8[2],auStack_3d8[0] & 0xfffffffffffffffe);
    }
    _ZN11ServiceInfoD2Ev(plVar16 + 1);
    lVar17 = *plVar16;
    *plVar16 = 0;
    if (lVar17 != 0) {
      _ZNSt3__115__thread_structD2Ev(lVar17);
      _ZdaPvSt11align_val_t(lVar17,8);
    }
    _ZdaPvSt11align_val_t(plVar16,0xb0);
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_1c8) {
      return (ulong *)0x0;
    }
  }
  else {
    func_0x0032e8f0();
  }
  func_0x0099bd00();
  puVar8 = (ulong *)free();
  return puVar8;
}


