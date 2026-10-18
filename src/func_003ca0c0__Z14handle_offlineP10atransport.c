// Function: _Z14handle_offlineP10atransport
// Address: 003ca0c0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


uint * _Z14handle_offlineP10atransport(long param_1,uint param_2)

{
  undefined1 (*pauVar1) [16];
  undefined1 (*pauVar2) [16];
  undefined1 (*pauVar3) [16];
  byte bVar4;
  uint uVar5;
  byte *pbVar6;
  uint *puVar7;
  char cVar8;
  int iVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  uint *puVar12;
  undefined8 *puVar13;
  uint *puVar14;
  byte *pbVar15;
  uint *puVar16;
  undefined4 *puVar17;
  uint uVar18;
  ulong uVar19;
  long extraout_RDX;
  undefined7 *puVar20;
  byte *pbVar21;
  byte *pbVar22;
  undefined8 *puVar23;
  undefined8 uVar24;
  uint uVar25;
  uint *puVar26;
  uint *puVar27;
  undefined1 (*pauVar28) [16];
  byte *unaff_R12;
  ulong unaff_R13;
  uint *unaff_R14;
  long lVar29;
  undefined8 unaff_R15;
  byte *pbVar30;
  long in_FS_OFFSET;
  bool bVar31;
  bool bVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  byte bStack_278;
  undefined1 uStack_277;
  undefined1 uStack_276;
  undefined5 uStack_275;
  undefined8 uStack_268;
  undefined1 auStack_260 [16];
  long lStack_250;
  byte bStack_240;
  undefined1 uStack_23f;
  undefined1 uStack_23e;
  undefined5 uStack_23d;
  undefined8 uStack_230;
  byte bStack_228;
  undefined1 uStack_227;
  undefined1 uStack_226;
  undefined5 uStack_225;
  byte *pbStack_220;
  long lStack_218;
  undefined1 auStack_210 [16];
  long lStack_200;
  uint *puStack_1f0;
  undefined8 *puStack_1e8;
  byte *pbStack_1e0;
  uint *puStack_1d8;
  byte *pbStack_1d0;
  ulong uStack_1c8;
  code *pcStack_1c0;
  undefined1 auStack_1b0 [8];
  undefined8 uStack_1a8;
  ulong uStack_1a0;
  byte *pbStack_198;
  uint *puStack_188;
  uint *puStack_180;
  ulong uStack_178;
  uint *puStack_170;
  uint *puStack_168;
  uint *puStack_160;
  undefined *puStack_158;
  uint auStack_150 [2];
  uint *puStack_148;
  uint *puStack_140;
  ulong uStack_138;
  uint *puStack_130;
  uint *puStack_128;
  undefined *apuStack_120 [2];
  byte bStack_110;
  undefined7 uStack_10f;
  undefined7 *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  uint *puStack_e8;
  uint *puStack_e0;
  uint *puStack_d8;
  uint *puStack_d0;
  long lStack_c8;
  long lStack_c0;
  ulong uStack_b8;
  uint *puStack_b0;
  undefined *puStack_a8;
  undefined4 uStack_9c;
  undefined1 auStack_98 [8];
  uint *puStack_90;
  long lStack_88;
  byte *pbStack_80;
  ulong uStack_78;
  uint *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  byte bStack_58;
  undefined7 uStack_57;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  uint *puStack_38;
  
  puStack_38 = *(uint **)(in_FS_OFFSET + 0x28);
  puStack_60 = &UNK_003ca0e6;
  lVar29 = param_1;
  iVar9 = _ZNK10atransport18GetConnectionStateEv();
  uVar25 = (uint)lVar29;
  bVar31 = ((byte)adb_trace_mask & 1) == 0;
  bVar32 = 1 < (int)adb_trace_severity._0_4_;
  uVar18 = (uint)CONCAT71(0xa006,bVar32 || bVar31);
  if (iVar9 == 5) {
    if (!bVar32 && !bVar31) {
      uVar25 = 1;
      param_2 = 0;
      puStack_60 = &UNK_003ca11f;
      cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc();
      if (cVar8 != '\0') {
        puStack_60 = &UNK_003ca12c;
        unaff_R14 = (uint *)func_0x0099bce0();
        uVar5 = *unaff_R14;
        unaff_R13 = (ulong)uVar5;
        uVar18 = 1;
        puStack_60 = &UNK_003ca158;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (auStack_40,&UNK_00181a61,0xcc,1,0,0xffffffff);
        puStack_60 = &UNK_003ca160;
        unaff_R15 = _ZN7android4base10LogMessage6streamEv(auStack_40);
        unaff_R12 = &bStack_58;
        puStack_60 = &UNK_003ca172;
        _ZNK10atransport11serial_nameEv(unaff_R12,param_1);
        puStack_60 = &UNK_003ca17d;
        uVar11 = func_0x0032e5a0(unaff_R15,unaff_R12);
        param_2 = 0x187ca0;
        puStack_60 = &UNK_003ca191;
        func_0x0032eb30(uVar11,&UNK_00187ca0,0x11);
        if ((bStack_58 & 1) != 0) {
          param_2 = (uint)CONCAT71(uStack_57,bStack_58) & 0xfffffffe;
          puStack_60 = &UNK_003ca1a8;
          _ZdaPvSt11align_val_t(uStack_48);
        }
        uVar25 = (uint)auStack_40;
        puStack_60 = &UNK_003ca1b1;
        _ZN7android4base10LogMessageD2Ev();
        *unaff_R14 = uVar5;
      }
    }
  }
  else {
    if (!bVar32 && !bVar31) {
      puStack_60 = &UNK_003ca209;
      cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
      if (cVar8 != '\0') {
        puStack_60 = &UNK_003ca212;
        unaff_R14 = (uint *)func_0x0099bce0();
        uVar25 = *unaff_R14;
        unaff_R13 = (ulong)uVar25;
        uVar18 = 1;
        puStack_60 = &UNK_003ca23e;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (auStack_40,&UNK_00181a61,0xd0,1,0,0xffffffff);
        puStack_60 = &UNK_003ca246;
        unaff_R15 = _ZN7android4base10LogMessage6streamEv(auStack_40);
        unaff_R12 = &bStack_58;
        puStack_60 = &UNK_003ca258;
        _ZNK10atransport11serial_nameEv(unaff_R12,param_1);
        puStack_60 = &UNK_003ca263;
        uVar11 = func_0x0032e5a0(unaff_R15,unaff_R12);
        puStack_60 = &UNK_003ca277;
        func_0x0032eb30(uVar11,&UNK_0015dffc,9);
        if ((bStack_58 & 1) != 0) {
          puStack_60 = &UNK_003ca28e;
          _ZdaPvSt11align_val_t(uStack_48,CONCAT71(uStack_57,bStack_58) & 0xfffffffffffffffe);
        }
        puStack_60 = &UNK_003ca297;
        _ZN7android4base10LogMessageD2Ev(auStack_40);
        *unaff_R14 = uVar25;
      }
    }
    param_2 = 5;
    puStack_60 = &UNK_003ca1c7;
    _ZN10atransport18SetConnectionStateE15ConnectionState(param_1);
    *(undefined1 *)(param_1 + 0x20) = 0;
    puStack_60 = &UNK_003ca1d3;
    _Z17close_all_socketsP10atransport(param_1);
    puStack_60 = &UNK_003ca1db;
    lVar29 = param_1;
    _ZN10atransport14RunDisconnectsEv();
    uVar25 = (uint)lVar29;
  }
  if (*(uint **)(in_FS_OFFSET + 0x28) == puStack_38) {
    return *(uint **)(in_FS_OFFSET + 0x28);
  }
  puStack_60 = &UNK_003ca2a4;
  func_0x0099bd00();
  puVar16 = (uint *)(ulong)param_2;
  uVar19 = (ulong)uVar25;
  puStack_90 = *(uint **)(in_FS_OFFSET + 0x28);
  lStack_88 = param_1;
  pbStack_80 = unaff_R12;
  uStack_78 = unaff_R13;
  puStack_70 = unaff_R14;
  uStack_68 = unaff_R15;
  puStack_60 = &stack0xfffffffffffffff8;
  if ((((byte)adb_trace_mask & 1) != 0) &&
     (puStack_60 = &stack0xfffffffffffffff8, (int)adb_trace_severity._0_4_ < 2)) {
    puStack_a8 = &UNK_003ca382;
    puStack_60 = &stack0xfffffffffffffff8;
    cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
    if (cVar8 != '\0') {
      puStack_a8 = &UNK_003ca38f;
      puVar17 = (undefined4 *)func_0x0099bce0();
      uStack_9c = *puVar17;
      puStack_a8 = &UNK_003ca3ba;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_98,&UNK_00181a61,0x10e,1,0,0xffffffff);
      puStack_a8 = &UNK_003ca3c3;
      uVar11 = _ZN7android4base10LogMessage6streamEv(auStack_98);
      puStack_a8 = &UNK_003ca3d7;
      func_0x0032eb30(uVar11,&UNK_0015c77d,0x12);
      puStack_a8 = &UNK_003ca3e0;
      _ZN7android4base10LogMessageD2Ev(auStack_98);
      *puVar17 = uStack_9c;
    }
  }
  puStack_a8 = &UNK_003ca300;
  puVar12 = (uint *)_Znwm(0x38);
  puVar12[3] = 0;
  puVar12[4] = 0;
  puVar12[5] = 0;
  puVar12[6] = 0;
  puVar12[7] = 0;
  puVar12[8] = 0;
  puVar12[9] = 0;
  puVar12[10] = 0;
  puVar12[10] = 0;
  puVar12[0xb] = 0;
  puVar12[0xc] = 0;
  puVar12[0xd] = 0;
  *puVar12 = 0x59414b4f;
  puVar12[1] = uVar25;
  puVar12[2] = param_2;
  if (*(char *)(extraout_RDX + 0x1c8) == '\x01') {
    puVar12[3] = 4;
    puStack_a8 = &UNK_003ca342;
    _ZN5Block6resizeEm(puVar12 + 6,4);
    **(uint **)(puVar12 + 6) = uVar18;
  }
  puStack_a8 = &UNK_003ca354;
  puVar26 = puVar12;
  _Z11send_packetP7apacketP10atransport(puVar12,extraout_RDX);
  if (*(uint **)(in_FS_OFFSET + 0x28) == puStack_90) {
    return *(uint **)(in_FS_OFFSET + 0x28);
  }
  puStack_a8 = &UNK_003ca3f1;
  func_0x0099bd00();
  lStack_c8 = *(long *)(in_FS_OFFSET + 0x28);
  apuStack_120[0] = &UNK_003ca422;
  lStack_c0 = extraout_RDX;
  uStack_b8 = (ulong)uVar18;
  puStack_b0 = puVar16;
  puStack_a8 = (undefined *)&puStack_60;
  uVar11 = _Z18supported_featuresv();
  apuStack_120[0] = &UNK_003ca42e;
  _Z18FeatureSetToStringRKNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEEE
            (&bStack_110,uVar11);
  puVar20 = puStack_100;
  if ((bStack_110 & 1) == 0) {
    puVar20 = &uStack_10f;
  }
  apuStack_120[0] = &UNK_003ca450;
  _ZN7android4base12StringPrintfEPKcz(&uStack_f8,&UNK_0015c790,puVar20);
  apuStack_120[0] = &UNK_003ca45a;
  puStack_e0 = (uint *)_Znwm(0x18);
  puStack_d8 = puStack_e0 + 6;
  *(uint **)(puStack_e0 + 4) = puStack_e8;
  *(ulong *)puStack_e0 = uStack_f8;
  *(undefined8 *)(puStack_e0 + 2) = uStack_f0;
  uStack_f8 = 0;
  uStack_f0 = 0;
  puStack_e8 = (uint *)0x0;
  puStack_d0 = puStack_d8;
  if ((bStack_110 & 1) != 0) {
    apuStack_120[0] = &UNK_003ca49f;
    _ZdaPvSt11align_val_t(puStack_100,CONCAT71(uStack_10f,bStack_110) & 0xfffffffffffffffe);
  }
  uVar11 = adb_device_banner;
  apuStack_120[0] = &UNK_003ca4bb;
  _ZN7android4base4JoinIRKNSt3__16vectorINS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS7_IS9_EEEEcEES9_OT_T0_
            (&uStack_f8,&puStack_e0,0x3b);
  puVar14 = puStack_e8;
  if ((uStack_f8 & 1) == 0) {
    puVar14 = (uint *)((long)&uStack_f8 + 1);
  }
  apuStack_120[0] = &UNK_003ca4df;
  puVar27 = puVar26;
  _ZN7android4base12StringPrintfEPKcz(puVar26,&UNK_00159594,uVar11,puVar14);
  if ((uStack_f8 & 1) != 0) {
    apuStack_120[0] = &UNK_003ca4f6;
    puVar27 = puStack_e8;
    _ZdaPvSt11align_val_t(puStack_e8,uStack_f8 & 0xfffffffffffffffe);
  }
  puVar14 = puStack_e0;
  puVar7 = puStack_d8;
  if (puStack_e0 != (uint *)0x0) {
    while (puVar16 = puVar7, puVar27 = puStack_e0, puStack_e0 = puVar27, puVar14 != puVar16) {
      if ((puVar16[-6] & 1) != 0) {
        apuStack_120[0] = &UNK_003ca531;
        _ZdaPvSt11align_val_t
                  (*(undefined8 *)(puVar16 + -2),*(ulong *)(puVar16 + -6) & 0xfffffffffffffffe);
      }
      puVar7 = puVar16 + -6;
    }
    puStack_d8 = puVar14;
    apuStack_120[0] = &UNK_003ca547;
    _ZdaPvSt11align_val_t(puVar27,(long)puStack_d0 - (long)puVar27);
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_c8) {
    return puVar26;
  }
  apuStack_120[0] = &UNK_003ca569;
  func_0x0099bd00();
  puStack_130 = puVar14;
  puStack_148 = *(uint **)(in_FS_OFFSET + 0x28);
  puStack_140 = puVar26;
  uStack_138 = uVar19;
  puStack_128 = puVar16;
  apuStack_120[0] = (undefined *)&puStack_a8;
  if ((((byte)adb_trace_mask & 1) != 0) &&
     (apuStack_120[0] = (undefined *)&puStack_a8, (int)adb_trace_severity._0_4_ < 2)) {
    puStack_158 = &UNK_003ca600;
    apuStack_120[0] = (undefined *)&puStack_a8;
    cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
    if (cVar8 != '\0') {
      puStack_158 = &UNK_003ca609;
      puVar14 = (uint *)func_0x0099bce0();
      uVar25 = *puVar14;
      uVar19 = (ulong)uVar25;
      puVar16 = auStack_150;
      puStack_158 = &UNK_003ca635;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (puVar16,&UNK_00181a61,0x13f,1,0,0xffffffff);
      puStack_158 = &UNK_003ca63d;
      uVar11 = _ZN7android4base10LogMessage6streamEv(puVar16);
      puStack_158 = &UNK_003ca651;
      func_0x0032eb30(uVar11,&UNK_0016133d,0x18);
      puStack_158 = &UNK_003ca659;
      _ZN7android4base10LogMessageD2Ev(puVar16);
      *puVar14 = uVar25;
    }
  }
  puStack_158 = &UNK_003ca5b1;
  puVar13 = (undefined8 *)_Znwm(0x38);
  puVar13[1] = 0;
  puVar13[2] = 0;
  puVar13[3] = 0;
  puVar13[4] = 0;
  puVar13[5] = 0;
  puVar13[6] = 0;
  *puVar13 = 0x1000000534c5453;
  puStack_158 = &UNK_003ca5d8;
  _Z11send_packetP7apacketP10atransport(puVar13,puVar27);
  if (*(uint **)(in_FS_OFFSET + 0x28) == puStack_148) {
    return *(uint **)(in_FS_OFFSET + 0x28);
  }
  puStack_158 = &UNK_003ca666;
  func_0x0099bd00();
  puStack_188 = *(uint **)(in_FS_OFFSET + 0x28);
  puStack_180 = puVar27;
  uStack_178 = uVar19;
  puStack_170 = puVar12;
  puStack_168 = puVar14;
  puStack_160 = puVar16;
  puStack_158 = (undefined *)apuStack_120;
  if ((((byte)adb_trace_mask & 1) != 0) &&
     (puStack_158 = (undefined *)apuStack_120, (int)adb_trace_severity._0_4_ < 2)) {
    pcStack_1c0 = (code *)&UNK_003ca7bb;
    puStack_158 = (undefined *)apuStack_120;
    cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
    if (cVar8 != '\0') {
      pcStack_1c0 = (code *)&UNK_003ca7c8;
      puVar17 = (undefined4 *)func_0x0099bce0();
      uVar10 = *puVar17;
      pcStack_1c0 = (code *)&UNK_003ca7f4;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&uStack_1a8,&UNK_00181a61,0x148,1,0,0xffffffff);
      pcStack_1c0 = (code *)&UNK_003ca7fc;
      uVar11 = _ZN7android4base10LogMessage6streamEv(&uStack_1a8);
      pcStack_1c0 = (code *)&UNK_003ca810;
      func_0x0032eb30(uVar11,&UNK_00164389,0x14);
      pcStack_1c0 = (code *)&UNK_003ca818;
      _ZN7android4base10LogMessageD2Ev(&uStack_1a8);
      *puVar17 = uVar10;
    }
  }
  pcStack_1c0 = (code *)&UNK_003ca6b7;
  pbVar15 = (byte *)_Znwm(0x38);
  pbVar15[0xc] = 0;
  pbVar15[0xd] = 0;
  pbVar15[0xe] = 0;
  pbVar15[0xf] = 0;
  pbVar15[0x10] = 0;
  pbVar15[0x11] = 0;
  pbVar15[0x12] = 0;
  pbVar15[0x13] = 0;
  pbVar15[0x14] = 0;
  pbVar15[0x15] = 0;
  pbVar15[0x16] = 0;
  pbVar15[0x17] = 0;
  pbVar15[0] = 0x43;
  pbVar15[1] = 0x4e;
  pbVar15[2] = 0x58;
  pbVar15[3] = 0x4e;
  pbVar15[4] = 1;
  pbVar15[5] = 0;
  pbVar15[6] = 0;
  pbVar15[7] = 1;
  pcStack_1c0 = (code *)&UNK_003ca6de;
  uVar10 = _ZNK10atransport15get_max_payloadEv(puVar13);
  *(undefined4 *)(pbVar15 + 8) = uVar10;
  uStack_1a8 = 0;
  uStack_1a0 = 0;
  pbStack_198 = (byte *)0x0;
  pcStack_1c0 = (code *)&UNK_003ca6fa;
  _Z21get_connection_stringv(&uStack_1a8);
  if (((uStack_1a8 & 1) != 0) && (0x1000 < uStack_1a0)) {
    pcStack_1c0 = (code *)&UNK_003ca716;
    cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(6,0);
    if (cVar8 != '\0') {
      pcStack_1c0 = (code *)&UNK_003ca825;
      puVar16 = (uint *)func_0x0099bce0();
      uVar25 = *puVar16;
      puVar12 = (uint *)(ulong)uVar25;
      pcStack_1c0 = (code *)&UNK_003ca851;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_1b0,&UNK_00181a61,0x155,6,0,0xffffffff);
      pcStack_1c0 = (code *)&UNK_003ca859;
      uVar11 = _ZN7android4base10LogMessage6streamEv(auStack_1b0);
      pcStack_1c0 = (code *)&UNK_003ca86d;
      uVar11 = func_0x0032eb30(uVar11,&UNK_0018acbf,0x28);
      uVar19 = uStack_1a0;
      if ((uStack_1a8 & 1) == 0) {
        uVar19 = uStack_1a8 >> 1 & 0x7f;
      }
      pcStack_1c0 = (code *)&UNK_003ca887;
      uVar11 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar11,uVar19);
      pcStack_1c0 = (code *)&UNK_003ca89b;
      func_0x0032eb30(uVar11,&UNK_001692c7,1);
      pcStack_1c0 = (code *)&UNK_003ca8a3;
      _ZN7android4base10LogMessageD2Ev(auStack_1b0);
      *puVar16 = uVar25;
    }
  }
  pbVar22 = (byte *)((long)&uStack_1a8 + 1);
  uVar19 = uStack_1a8 >> 1 & 0x7f;
  if ((uStack_1a8 & 1) != 0) {
    pbVar22 = pbStack_198;
    uVar19 = uStack_1a0;
  }
  pbVar15[0x28] = 0;
  pbVar15[0x29] = 0;
  pbVar15[0x2a] = 0;
  pbVar15[0x2b] = 0;
  pbVar15[0x2c] = 0;
  pbVar15[0x2d] = 0;
  pbVar15[0x2e] = 0;
  pbVar15[0x2f] = 0;
  pbVar15[0x30] = 0;
  pbVar15[0x31] = 0;
  pbVar15[0x32] = 0;
  pbVar15[0x33] = 0;
  pbVar15[0x34] = 0;
  pbVar15[0x35] = 0;
  pbVar15[0x36] = 0;
  pbVar15[0x37] = 0;
  pbVar15[0x18] = 0;
  pbVar15[0x19] = 0;
  pbVar15[0x1a] = 0;
  pbVar15[0x1b] = 0;
  pbVar15[0x1c] = 0;
  pbVar15[0x1d] = 0;
  pbVar15[0x1e] = 0;
  pbVar15[0x1f] = 0;
  pbVar15[0x20] = 0;
  pbVar15[0x21] = 0;
  pbVar15[0x22] = 0;
  pbVar15[0x23] = 0;
  pbVar15[0x24] = 0;
  pbVar15[0x25] = 0;
  pbVar15[0x26] = 0;
  pbVar15[0x27] = 0;
  pcStack_1c0 = (code *)&UNK_003ca754;
  _ZN5Block8allocateEm(pbVar15 + 0x18,uVar19);
  pcStack_1c0 = (code *)&UNK_003ca763;
  func_0x0099bd90(*(undefined8 *)(pbVar15 + 0x18),pbVar22,uVar19);
  *(undefined4 *)(pbVar15 + 0xc) = *(undefined4 *)(pbVar15 + 0x28);
  pcStack_1c0 = (code *)&UNK_003ca776;
  puVar23 = puVar13;
  pbVar21 = pbVar15;
  _Z11send_packetP7apacketP10atransport();
  if ((uStack_1a8 & 1) != 0) {
    puVar23 = (undefined8 *)(uStack_1a8 & 0xfffffffffffffffe);
    pcStack_1c0 = (code *)&UNK_003ca78d;
    pbVar21 = pbStack_198;
    _ZdaPvSt11align_val_t();
  }
  if (*(uint **)(in_FS_OFFSET + 0x28) == puStack_188) {
    return *(uint **)(in_FS_OFFSET + 0x28);
  }
  pcStack_1c0 = 
  _Z12parse_bannerRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEP10atransport;
  func_0x0099bd00();
  puStack_1f0 = *(uint **)(in_FS_OFFSET + 0x28);
  puStack_1e8 = puVar13;
  pbStack_1e0 = pbVar22;
  puStack_1d8 = puVar12;
  pbStack_1d0 = pbVar15;
  uStack_1c8 = uVar19;
  pcStack_1c0 = (code *)&puStack_158;
  if (((((byte)adb_trace_mask & 1) != 0) &&
      (pcStack_1c0 = (code *)&puStack_158, (int)adb_trace_severity._0_4_ < 2)) &&
     (pcStack_1c0 = (code *)&puStack_158,
     cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0), cVar8 != '\0')) {
    puVar17 = (undefined4 *)func_0x0099bce0();
    uVar10 = *puVar17;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (&bStack_228,&UNK_00181a61,0x160,1,0,0xffffffff);
    uVar11 = _ZN7android4base10LogMessage6streamEv(&bStack_228);
    if ((*pbVar21 & 1) == 0) {
      pbVar15 = pbVar21 + 1;
    }
    else {
      pbVar15 = *(byte **)(pbVar21 + 0x10);
    }
    _ZN7android4base12StringPrintfEPKcz(auStack_210,&UNK_0015c79c,pbVar15);
    func_0x0032e5a0(uVar11,auStack_210);
    if ((auStack_210[0] & 1) != 0) {
      _ZdaPvSt11align_val_t(lStack_200,auStack_210._0_8_ & 0xfffffffffffffffe);
    }
    _ZN7android4base10LogMessageD2Ev(&bStack_228);
    *puVar17 = uVar10;
  }
  auStack_210 = (undefined1  [16])0x0;
  lStack_200 = 0;
  bStack_228 = 2;
  uStack_227 = 0x3a;
  uStack_226 = 0;
  _ZN7android4base5SplitERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_
            (auStack_210,pbVar21,&bStack_228);
  if ((bStack_228 & 1) != 0) {
    _ZdaPvSt11align_val_t
              (lStack_218,
               CONCAT53(uStack_225,CONCAT12(uStack_226,CONCAT11(uStack_227,bStack_228))) &
               0xfffffffffffffffe);
  }
  bStack_228 = 0;
  uStack_227 = 0;
  _ZN10atransport11SetFeaturesERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
            (puVar23,&bStack_228);
  if ((bStack_228 & 1) != 0) {
    _ZdaPvSt11align_val_t
              (lStack_218,
               CONCAT53(uStack_225,CONCAT12(uStack_226,CONCAT11(uStack_227,bStack_228))) &
               0xfffffffffffffffe);
  }
  if (2 < (ulong)(((long)(auStack_210._8_8_ - auStack_210._0_8_) >> 3) * -0x5555555555555555)) {
    bStack_240 = 2;
    uStack_23f = 0x3b;
    uStack_23e = 0;
    _ZN7android4base5SplitERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_
              (&bStack_228,(byte *)(auStack_210._0_8_ + 0x30),&bStack_240);
    pbVar22 = pbStack_220;
    pbVar15 = (byte *)CONCAT53(uStack_225,CONCAT12(uStack_226,CONCAT11(uStack_227,bStack_228)));
    if (pbVar15 != pbStack_220) {
      pauVar1 = (undefined1 (*) [16])(puVar23 + 0xe);
      pauVar2 = (undefined1 (*) [16])(puVar23 + 0xb);
      pauVar3 = (undefined1 (*) [16])(puVar23 + 8);
      do {
        if ((*pbVar15 & 1) == 0) {
          if (*pbVar15 >> 1 != 0) goto code_r0x003caa37;
        }
        else if (*(long *)(pbVar15 + 8) != 0) {
code_r0x003caa37:
          auStack_260 = (undefined1  [16])0x0;
          lStack_250 = 0;
          bStack_278 = 2;
          uStack_277 = 0x3d;
          uStack_276 = 0;
          _ZN7android4base5SplitERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_
                    (auStack_260,pbVar15,&bStack_278);
          if ((bStack_278 & 1) != 0) {
            _ZdaPvSt11align_val_t
                      (uStack_268,
                       CONCAT53(uStack_275,CONCAT12(uStack_276,CONCAT11(uStack_277,bStack_278))) &
                       0xfffffffffffffffe);
          }
          pbVar21 = (byte *)auStack_260._0_8_;
          if (auStack_260._8_8_ - auStack_260._0_8_ == 0x30) {
            bVar4 = *(byte *)auStack_260._0_8_;
            if ((bVar4 & 1) == 0) {
              uVar19 = (ulong)(bVar4 >> 1);
            }
            else {
              uVar19 = *(ulong *)(auStack_260._0_8_ + 8);
            }
            if (uVar19 - 8 < 10) {
              pauVar28 = (undefined1 (*) [16])(auStack_260._0_8_ + 0x18);
              switch(uVar19) {
              case 8:
                if ((bVar4 & 1) == 0) {
                  pbVar21 = (byte *)(auStack_260._0_8_ + 1);
                }
                else {
                  pbVar21 = *(byte **)(auStack_260._0_8_ + 0x10);
                }
                if (*(long *)pbVar21 == 0x7365727574616566) {
                  _ZN10atransport11SetFeaturesERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                            (puVar23);
                }
                break;
              case 0xf:
                if ((bVar4 & 1) == 0) {
                  pbVar21 = (byte *)(auStack_260._0_8_ + 1);
                }
                else {
                  pbVar21 = *(byte **)(auStack_260._0_8_ + 0x10);
                }
                if (pauVar3 != pauVar28 &&
                    (*(long *)(pbVar21 + 7) == 0x656d616e2e746375 &&
                    *(long *)pbVar21 == 0x75646f72702e6f72)) {
                  bVar4 = (*pauVar28)[0];
                  if (((*pauVar3)[0] & 1) == 0) {
                    if ((bVar4 & 1) == 0) {
                      puVar23[10] = *(undefined8 *)(auStack_260._0_8_ + 0x28);
                      *pauVar3 = *pauVar28;
                    }
                    else {
                      uVar11 = *(undefined8 *)(auStack_260._0_8_ + 0x20);
                      uVar24 = *(undefined8 *)(auStack_260._0_8_ + 0x28);
                      pauVar28 = pauVar3;
code_r0x003cacfa:
                      func_0x0032e990(pauVar28,uVar24,uVar11);
                    }
                  }
                  else {
                    bVar32 = (bVar4 & 1) != 0;
                    pbVar21 = (byte *)(auStack_260._0_8_ + 0x19);
                    if (bVar32) {
                      pbVar21 = *(byte **)(auStack_260._0_8_ + 0x28);
                    }
                    uVar19 = (ulong)(bVar4 >> 1);
                    if (bVar32) {
                      uVar19 = *(ulong *)(auStack_260._0_8_ + 0x20);
                    }
                    func_0x0032e920(pauVar3,pbVar21,uVar19);
                  }
                }
                break;
              case 0x10:
                if ((bVar4 & 1) == 0) {
                  pbVar21 = (byte *)(auStack_260._0_8_ + 1);
                }
                else {
                  pbVar21 = *(byte **)(auStack_260._0_8_ + 0x10);
                }
                auVar33[0] = -(*pbVar21 == 0x72);
                auVar33[1] = -(pbVar21[1] == 0x6f);
                auVar33[2] = -(pbVar21[2] == 0x2e);
                auVar33[3] = -(pbVar21[3] == 0x70);
                auVar33[4] = -(pbVar21[4] == 0x72);
                auVar33[5] = -(pbVar21[5] == 0x6f);
                auVar33[6] = -(pbVar21[6] == 100);
                auVar33[7] = -(pbVar21[7] == 0x75);
                auVar33[8] = -(pbVar21[8] == 99);
                auVar33[9] = -(pbVar21[9] == 0x74);
                auVar33[10] = -(pbVar21[10] == 0x2e);
                auVar33[0xb] = -(pbVar21[0xb] == 0x6d);
                auVar33[0xc] = -(pbVar21[0xc] == 0x6f);
                auVar33[0xd] = -(pbVar21[0xd] == 100);
                auVar33[0xe] = -(pbVar21[0xe] == 0x65);
                auVar33[0xf] = -(pbVar21[0xf] == 0x6c);
                if (pauVar2 != pauVar28 &&
                    (ushort)((ushort)(SUB161(auVar33 >> 7,0) & 1) |
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
                            (ushort)(auVar33[0xf] >> 7) << 0xf) == 0xffff) {
                  bVar4 = (*pauVar28)[0];
                  if (((*pauVar2)[0] & 1) == 0) {
                    if ((bVar4 & 1) != 0) {
                      uVar11 = *(undefined8 *)(auStack_260._0_8_ + 0x20);
                      uVar24 = *(undefined8 *)(auStack_260._0_8_ + 0x28);
                      pauVar28 = pauVar2;
                      goto code_r0x003cacfa;
                    }
                    puVar23[0xd] = *(undefined8 *)(auStack_260._0_8_ + 0x28);
                    *pauVar2 = *pauVar28;
                  }
                  else {
                    bVar32 = (bVar4 & 1) != 0;
                    pbVar21 = (byte *)(auStack_260._0_8_ + 0x19);
                    if (bVar32) {
                      pbVar21 = *(byte **)(auStack_260._0_8_ + 0x28);
                    }
                    uVar19 = (ulong)(bVar4 >> 1);
                    if (bVar32) {
                      uVar19 = *(ulong *)(auStack_260._0_8_ + 0x20);
                    }
                    func_0x0032e920(pauVar2,pbVar21,uVar19);
                  }
                }
                break;
              case 0x11:
                if ((bVar4 & 1) == 0) {
                  pbVar21 = (byte *)(auStack_260._0_8_ + 1);
                }
                else {
                  pbVar21 = *(byte **)(auStack_260._0_8_ + 0x10);
                }
                auVar34[0] = -(*pbVar21 == 0x72);
                auVar34[1] = -(pbVar21[1] == 0x6f);
                auVar34[2] = -(pbVar21[2] == 0x2e);
                auVar34[3] = -(pbVar21[3] == 0x70);
                auVar34[4] = -(pbVar21[4] == 0x72);
                auVar34[5] = -(pbVar21[5] == 0x6f);
                auVar34[6] = -(pbVar21[6] == 100);
                auVar34[7] = -(pbVar21[7] == 0x75);
                auVar34[8] = -(pbVar21[8] == 99);
                auVar34[9] = -(pbVar21[9] == 0x74);
                auVar34[10] = -(pbVar21[10] == 0x2e);
                auVar34[0xb] = -(pbVar21[0xb] == 100);
                auVar34[0xc] = -(pbVar21[0xc] == 0x65);
                auVar34[0xd] = -(pbVar21[0xd] == 0x76);
                auVar34[0xe] = -(pbVar21[0xe] == 0x69);
                auVar34[0xf] = -(pbVar21[0xf] == 99);
                auVar35[0] = -(pbVar21[0x10] == 0x65);
                auVar35[1] = 0xff;
                auVar35[2] = 0xff;
                auVar35[3] = 0xff;
                auVar35[4] = 0xff;
                auVar35[5] = 0xff;
                auVar35[6] = 0xff;
                auVar35[7] = 0xff;
                auVar35[8] = 0xff;
                auVar35[9] = 0xff;
                auVar35[10] = 0xff;
                auVar35[0xb] = 0xff;
                auVar35[0xc] = 0xff;
                auVar35[0xd] = 0xff;
                auVar35[0xe] = 0xff;
                auVar35[0xf] = 0xff;
                auVar35 = auVar35 & auVar34;
                if (pauVar1 != pauVar28 &&
                    (ushort)((ushort)(SUB161(auVar35 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar35 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar35 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar35 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar35 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar35 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar35 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar35 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar35 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar35 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar35 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar35 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar35 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar35 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar35 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar35[0xf] >> 7) << 0xf) == 0xffff) {
                  bVar4 = (*pauVar28)[0];
                  if (((*pauVar1)[0] & 1) == 0) {
                    if ((bVar4 & 1) != 0) {
                      uVar11 = *(undefined8 *)(auStack_260._0_8_ + 0x20);
                      uVar24 = *(undefined8 *)(auStack_260._0_8_ + 0x28);
                      pauVar28 = pauVar1;
                      goto code_r0x003cacfa;
                    }
                    puVar23[0x10] = *(undefined8 *)(auStack_260._0_8_ + 0x28);
                    *pauVar1 = *pauVar28;
                  }
                  else {
                    bVar32 = (bVar4 & 1) != 0;
                    pbVar21 = (byte *)(auStack_260._0_8_ + 0x19);
                    if (bVar32) {
                      pbVar21 = *(byte **)(auStack_260._0_8_ + 0x28);
                    }
                    uVar19 = (ulong)(bVar4 >> 1);
                    if (bVar32) {
                      uVar19 = *(ulong *)(auStack_260._0_8_ + 0x20);
                    }
                    func_0x0032e920(pauVar1,pbVar21,uVar19);
                  }
                }
              }
            }
            pbVar21 = (byte *)auStack_260._0_8_;
          }
          if (pbVar21 != (byte *)0x0) {
            pbVar6 = pbVar21;
            for (pbVar30 = (byte *)auStack_260._8_8_; pbVar21 != pbVar30; pbVar30 = pbVar30 + -0x18)
            {
              if ((pbVar30[-0x18] & 1) != 0) {
                _ZdaPvSt11align_val_t
                          (*(undefined8 *)(pbVar30 + -8),
                           *(ulong *)(pbVar30 + -0x18) & 0xfffffffffffffffe);
              }
              pbVar6 = (byte *)auStack_260._0_8_;
            }
            auStack_260._8_8_ = pbVar21;
            _ZdaPvSt11align_val_t(pbVar6,lStack_250 - (long)pbVar6);
          }
        }
        pbVar15 = pbVar15 + 0x18;
      } while (pbVar15 != pbVar22);
      pbVar15 = (byte *)CONCAT53(uStack_225,CONCAT12(uStack_226,CONCAT11(uStack_227,bStack_228)));
    }
    if (pbVar15 != (byte *)0x0) {
      pbVar22 = pbStack_220;
      pbVar21 = pbVar15;
      if (pbVar15 != pbStack_220) {
        do {
          if ((pbVar22[-0x18] & 1) != 0) {
            _ZdaPvSt11align_val_t
                      (*(undefined8 *)(pbVar22 + -8),
                       *(ulong *)(pbVar22 + -0x18) & 0xfffffffffffffffe);
          }
          pbVar22 = pbVar22 + -0x18;
        } while (pbVar22 != pbVar15);
        pbVar21 = (byte *)CONCAT53(uStack_225,CONCAT12(uStack_226,CONCAT11(uStack_227,bStack_228)));
      }
      pbStack_220 = pbVar15;
      _ZdaPvSt11align_val_t(pbVar21,lStack_218 - (long)pbVar21);
    }
    if ((bStack_240 & 1) != 0) {
      _ZdaPvSt11align_val_t
                (uStack_230,
                 CONCAT53(uStack_23d,CONCAT12(uStack_23e,CONCAT11(uStack_23f,bStack_240))) &
                 0xfffffffffffffffe);
    }
  }
  bVar4 = *(byte *)auStack_210._0_8_;
  if ((bVar4 & 1) == 0) {
    uVar19 = (ulong)(bVar4 >> 1);
    if (uVar19 == 6) goto code_r0x003cae19;
code_r0x003cadf2:
    if (uVar19 == 8) {
      if ((bVar4 & 1) == 0) {
        pbVar15 = (byte *)(auStack_210._0_8_ + 1);
      }
      else {
        pbVar15 = *(byte **)(auStack_210._0_8_ + 0x10);
      }
      if (*(long *)pbVar15 == 0x797265766f636572) {
        uVar11 = 9;
        if ((((byte)adb_trace_mask & 1) != 0) && ((int)adb_trace_severity._0_4_ < 2)) {
          cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
          if (cVar8 == '\0') {
            uVar11 = 9;
          }
          else {
            puVar17 = (undefined4 *)func_0x0099bce0();
            uVar10 = *puVar17;
            _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                      (&bStack_228,&UNK_00181a61,0x189,1,0,0xffffffff);
            uVar11 = _ZN7android4base10LogMessage6streamEv(&bStack_228);
            func_0x0032eb30(uVar11,&UNK_0017d582,0x27);
            _ZN7android4base10LogMessageD2Ev(&bStack_228);
            *puVar17 = uVar10;
            uVar11 = 9;
          }
        }
        goto code_r0x003cafc3;
      }
      if ((bVar4 & 1) == 0) {
        pbVar15 = (byte *)(auStack_210._0_8_ + 1);
      }
      else {
        pbVar15 = *(byte **)(auStack_210._0_8_ + 0x10);
      }
      if (*(long *)pbVar15 == 0x64616f6c65646973) {
        uVar11 = 10;
        if ((((byte)adb_trace_mask & 1) != 0) && ((int)adb_trace_severity._0_4_ < 2)) {
          cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
          if (cVar8 == '\0') {
            uVar11 = 10;
          }
          else {
            puVar17 = (undefined4 *)func_0x0099bce0();
            uVar10 = *puVar17;
            _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                      (&bStack_228,&UNK_00181a61,0x18c,1,0,0xffffffff);
            uVar11 = _ZN7android4base10LogMessage6streamEv(&bStack_228);
            func_0x0032eb30(uVar11,&UNK_00162dab,0x27);
            _ZN7android4base10LogMessageD2Ev(&bStack_228);
            *puVar17 = uVar10;
            uVar11 = 10;
          }
        }
        goto code_r0x003cafc3;
      }
    }
    else if (uVar19 == 10) {
      if ((bVar4 & 1) == 0) {
        pbVar15 = (byte *)(auStack_210._0_8_ + 1);
      }
      else {
        pbVar15 = *(byte **)(auStack_210._0_8_ + 0x10);
      }
      if (*(short *)(pbVar15 + 8) == 0x7265 && *(long *)pbVar15 == 0x64616f6c746f6f62) {
        uVar11 = 6;
        if ((((byte)adb_trace_mask & 1) != 0) && ((int)adb_trace_severity._0_4_ < 2)) {
          cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
          if (cVar8 == '\0') {
            uVar11 = 6;
          }
          else {
            puVar17 = (undefined4 *)func_0x0099bce0();
            uVar10 = *puVar17;
            _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                      (&bStack_228,&UNK_00181a61,0x183,1,0,0xffffffff);
            uVar11 = _ZN7android4base10LogMessage6streamEv(&bStack_228);
            func_0x0032eb30(uVar11,&UNK_001679a3,0x29);
            _ZN7android4base10LogMessageD2Ev(&bStack_228);
            *puVar17 = uVar10;
            uVar11 = 6;
          }
        }
        goto code_r0x003cafc3;
      }
    }
  }
  else {
    uVar19 = *(ulong *)(auStack_210._0_8_ + 8);
    if (uVar19 != 6) goto code_r0x003cadf2;
code_r0x003cae19:
    if ((bVar4 & 1) == 0) {
      pbVar15 = (byte *)(auStack_210._0_8_ + 1);
    }
    else {
      pbVar15 = *(byte **)(auStack_210._0_8_ + 0x10);
    }
    if (*(short *)(pbVar15 + 4) == 0x6563 && *(int *)pbVar15 == 0x69766564) {
      uVar11 = 7;
      if ((((byte)adb_trace_mask & 1) != 0) && ((int)adb_trace_severity._0_4_ < 2)) {
        cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
        if (cVar8 == '\0') {
          uVar11 = 7;
        }
        else {
          puVar17 = (undefined4 *)func_0x0099bce0();
          uVar10 = *puVar17;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (&bStack_228,&UNK_00181a61,0x186,1,0,0xffffffff);
          uVar11 = _ZN7android4base10LogMessage6streamEv(&bStack_228);
          func_0x0032eb30(uVar11,&UNK_00173ed4,0x25);
          _ZN7android4base10LogMessageD2Ev(&bStack_228);
          *puVar17 = uVar10;
          uVar11 = 7;
        }
      }
      goto code_r0x003cafc3;
    }
    if ((bVar4 & 1) == 0) {
      pbVar15 = (byte *)(auStack_210._0_8_ + 1);
    }
    else {
      pbVar15 = *(byte **)(auStack_210._0_8_ + 0x10);
    }
    if (*(short *)(pbVar15 + 4) == 0x6575 && *(int *)pbVar15 == 0x63736572) {
      uVar11 = 0xb;
      if ((((byte)adb_trace_mask & 1) != 0) && ((int)adb_trace_severity._0_4_ < 2)) {
        cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
        if (cVar8 == '\0') {
          uVar11 = 0xb;
        }
        else {
          puVar17 = (undefined4 *)func_0x0099bce0();
          uVar10 = *puVar17;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (&bStack_228,&UNK_00181a61,399,1,0,0xffffffff);
          uVar11 = _ZN7android4base10LogMessage6streamEv(&bStack_228);
          func_0x0032eb30(uVar11,&UNK_0015959b,0x25);
          _ZN7android4base10LogMessageD2Ev(&bStack_228);
          *puVar17 = uVar10;
          uVar11 = 0xb;
        }
      }
      goto code_r0x003cafc3;
    }
  }
  uVar11 = 8;
  if ((((byte)adb_trace_mask & 1) != 0) && ((int)adb_trace_severity._0_4_ < 2)) {
    cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
    if (cVar8 != '\0') goto code_r0x003cb105;
    goto code_r0x003cb0f6;
  }
code_r0x003cafc3:
  while( true ) {
    _ZN10atransport18SetConnectionStateE15ConnectionState(puVar23,uVar11);
    uVar11 = auStack_210._0_8_;
    if (auStack_210._0_8_ != 0) {
      for (lVar29 = auStack_210._8_8_; uVar11 != lVar29; lVar29 = lVar29 + -0x18) {
        if ((*(byte *)(lVar29 + -0x18) & 1) != 0) {
          _ZdaPvSt11align_val_t
                    (*(undefined8 *)(lVar29 + -8),*(ulong *)(lVar29 + -0x18) & 0xfffffffffffffffe);
        }
      }
      auStack_210._8_8_ = uVar11;
      _ZdaPvSt11align_val_t(auStack_210._0_8_,lStack_200 - auStack_210._0_8_);
    }
    if (*(uint **)(in_FS_OFFSET + 0x28) == puStack_1f0) break;
    func_0x0099bd00();
code_r0x003cb105:
    puVar17 = (undefined4 *)func_0x0099bce0();
    uVar10 = *puVar17;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (&bStack_228,&UNK_00181a61,0x192,1,0,0xffffffff);
    uVar11 = _ZN7android4base10LogMessage6streamEv(&bStack_228);
    func_0x0032eb30(uVar11,&UNK_00170562,0x23);
    _ZN7android4base10LogMessageD2Ev(&bStack_228);
    *puVar17 = uVar10;
code_r0x003cb0f6:
    uVar11 = 8;
  }
  return *(uint **)(in_FS_OFFSET + 0x28);
}


