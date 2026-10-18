// Function: _Z10send_readyjjP10atransportj
// Address: 003ca2b0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


uint * _Z10send_readyjjP10atransportj(uint param_1,uint param_2,long param_3,uint param_4)

{
  undefined1 (*pauVar1) [16];
  undefined1 (*pauVar2) [16];
  undefined1 (*pauVar3) [16];
  byte bVar4;
  uint uVar5;
  byte *pbVar6;
  uint *puVar7;
  char cVar8;
  undefined4 uVar9;
  uint *puVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  uint *puVar13;
  byte *pbVar14;
  uint *puVar15;
  undefined4 *puVar16;
  ulong uVar17;
  undefined7 *puVar18;
  byte *pbVar19;
  byte *pbVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  uint *puVar23;
  uint *puVar24;
  undefined1 (*pauVar25) [16];
  long lVar26;
  byte *pbVar27;
  long in_FS_OFFSET;
  bool bVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  byte bStack_220;
  undefined1 uStack_21f;
  undefined1 uStack_21e;
  undefined5 uStack_21d;
  undefined8 uStack_210;
  undefined1 auStack_208 [16];
  long lStack_1f8;
  byte bStack_1e8;
  undefined1 uStack_1e7;
  undefined1 uStack_1e6;
  undefined5 uStack_1e5;
  undefined8 uStack_1d8;
  byte bStack_1d0;
  undefined1 uStack_1cf;
  undefined1 uStack_1ce;
  undefined5 uStack_1cd;
  byte *pbStack_1c8;
  long lStack_1c0;
  undefined1 auStack_1b8 [16];
  long lStack_1a8;
  uint *puStack_198;
  undefined8 *puStack_190;
  byte *pbStack_188;
  uint *puStack_180;
  byte *pbStack_178;
  ulong uStack_170;
  code *pcStack_168;
  undefined1 auStack_158 [8];
  undefined8 uStack_150;
  ulong uStack_148;
  byte *pbStack_140;
  uint *puStack_130;
  uint *puStack_128;
  ulong uStack_120;
  uint *puStack_118;
  uint *puStack_110;
  uint *puStack_108;
  undefined *puStack_100;
  uint auStack_f8 [2];
  uint *puStack_f0;
  uint *puStack_e8;
  ulong uStack_e0;
  uint *puStack_d8;
  uint *puStack_d0;
  undefined *apuStack_c8 [2];
  byte bStack_b8;
  undefined7 uStack_b7;
  undefined7 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  uint *puStack_90;
  uint *puStack_88;
  uint *puStack_80;
  uint *puStack_78;
  long lStack_70;
  long lStack_68;
  ulong uStack_60;
  uint *puStack_58;
  undefined *puStack_50;
  undefined4 uStack_44;
  undefined1 auStack_40 [8];
  uint *puStack_38;
  
  puVar15 = (uint *)(ulong)param_2;
  uVar17 = (ulong)param_1;
  puStack_38 = *(uint **)(in_FS_OFFSET + 0x28);
  if ((((byte)adb_trace_mask & 1) != 0) && ((int)adb_trace_severity._0_4_ < 2)) {
    puStack_50 = &UNK_003ca382;
    cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
    if (cVar8 != '\0') {
      puStack_50 = &UNK_003ca38f;
      puVar16 = (undefined4 *)func_0x0099bce0();
      uStack_44 = *puVar16;
      puStack_50 = &UNK_003ca3ba;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_40,&UNK_00181a61,0x10e,1,0,0xffffffff);
      puStack_50 = &UNK_003ca3c3;
      uVar11 = _ZN7android4base10LogMessage6streamEv(auStack_40);
      puStack_50 = &UNK_003ca3d7;
      func_0x0032eb30(uVar11,&UNK_0015c77d,0x12);
      puStack_50 = &UNK_003ca3e0;
      _ZN7android4base10LogMessageD2Ev(auStack_40);
      *puVar16 = uStack_44;
    }
  }
  puStack_50 = &UNK_003ca300;
  puVar10 = (uint *)_Znwm(0x38);
  puVar10[3] = 0;
  puVar10[4] = 0;
  puVar10[5] = 0;
  puVar10[6] = 0;
  puVar10[7] = 0;
  puVar10[8] = 0;
  puVar10[9] = 0;
  puVar10[10] = 0;
  puVar10[10] = 0;
  puVar10[0xb] = 0;
  puVar10[0xc] = 0;
  puVar10[0xd] = 0;
  *puVar10 = 0x59414b4f;
  puVar10[1] = param_1;
  puVar10[2] = param_2;
  if (*(char *)(param_3 + 0x1c8) == '\x01') {
    puVar10[3] = 4;
    puStack_50 = &UNK_003ca342;
    _ZN5Block6resizeEm(puVar10 + 6,4);
    **(uint **)(puVar10 + 6) = param_4;
  }
  puStack_50 = &UNK_003ca354;
  puVar23 = puVar10;
  _Z11send_packetP7apacketP10atransport(puVar10,param_3);
  if (*(uint **)(in_FS_OFFSET + 0x28) == puStack_38) {
    return *(uint **)(in_FS_OFFSET + 0x28);
  }
  puStack_50 = &UNK_003ca3f1;
  func_0x0099bd00();
  lStack_70 = *(long *)(in_FS_OFFSET + 0x28);
  apuStack_c8[0] = &UNK_003ca422;
  lStack_68 = param_3;
  uStack_60 = (ulong)param_4;
  puStack_58 = puVar15;
  puStack_50 = &stack0xfffffffffffffff8;
  uVar11 = _Z18supported_featuresv();
  apuStack_c8[0] = &UNK_003ca42e;
  _Z18FeatureSetToStringRKNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEEE
            (&bStack_b8,uVar11);
  puVar18 = puStack_a8;
  if ((bStack_b8 & 1) == 0) {
    puVar18 = &uStack_b7;
  }
  apuStack_c8[0] = &UNK_003ca450;
  _ZN7android4base12StringPrintfEPKcz(&uStack_a0,&UNK_0015c790,puVar18);
  apuStack_c8[0] = &UNK_003ca45a;
  puStack_88 = (uint *)_Znwm(0x18);
  puStack_80 = puStack_88 + 6;
  *(uint **)(puStack_88 + 4) = puStack_90;
  *(ulong *)puStack_88 = uStack_a0;
  *(undefined8 *)(puStack_88 + 2) = uStack_98;
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_90 = (uint *)0x0;
  puStack_78 = puStack_80;
  if ((bStack_b8 & 1) != 0) {
    apuStack_c8[0] = &UNK_003ca49f;
    _ZdaPvSt11align_val_t(puStack_a8,CONCAT71(uStack_b7,bStack_b8) & 0xfffffffffffffffe);
  }
  uVar11 = adb_device_banner;
  apuStack_c8[0] = &UNK_003ca4bb;
  _ZN7android4base4JoinIRKNSt3__16vectorINS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS7_IS9_EEEEcEES9_OT_T0_
            (&uStack_a0,&puStack_88,0x3b);
  puVar13 = puStack_90;
  if ((uStack_a0 & 1) == 0) {
    puVar13 = (uint *)((long)&uStack_a0 + 1);
  }
  apuStack_c8[0] = &UNK_003ca4df;
  puVar24 = puVar23;
  _ZN7android4base12StringPrintfEPKcz(puVar23,&UNK_00159594,uVar11,puVar13);
  if ((uStack_a0 & 1) != 0) {
    apuStack_c8[0] = &UNK_003ca4f6;
    puVar24 = puStack_90;
    _ZdaPvSt11align_val_t(puStack_90,uStack_a0 & 0xfffffffffffffffe);
  }
  puVar13 = puStack_88;
  puVar7 = puStack_80;
  if (puStack_88 != (uint *)0x0) {
    while (puVar15 = puVar7, puVar24 = puStack_88, puStack_88 = puVar24, puVar13 != puVar15) {
      if ((puVar15[-6] & 1) != 0) {
        apuStack_c8[0] = &UNK_003ca531;
        _ZdaPvSt11align_val_t
                  (*(undefined8 *)(puVar15 + -2),*(ulong *)(puVar15 + -6) & 0xfffffffffffffffe);
      }
      puVar7 = puVar15 + -6;
    }
    puStack_80 = puVar13;
    apuStack_c8[0] = &UNK_003ca547;
    _ZdaPvSt11align_val_t(puVar24,(long)puStack_78 - (long)puVar24);
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_70) {
    return puVar23;
  }
  apuStack_c8[0] = &UNK_003ca569;
  func_0x0099bd00();
  puStack_d8 = puVar13;
  puStack_f0 = *(uint **)(in_FS_OFFSET + 0x28);
  puStack_e8 = puVar23;
  uStack_e0 = uVar17;
  puStack_d0 = puVar15;
  apuStack_c8[0] = (undefined *)&puStack_50;
  if ((((byte)adb_trace_mask & 1) != 0) &&
     (apuStack_c8[0] = (undefined *)&puStack_50, (int)adb_trace_severity._0_4_ < 2)) {
    puStack_100 = &UNK_003ca600;
    apuStack_c8[0] = (undefined *)&puStack_50;
    cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
    if (cVar8 != '\0') {
      puStack_100 = &UNK_003ca609;
      puVar13 = (uint *)func_0x0099bce0();
      uVar5 = *puVar13;
      uVar17 = (ulong)uVar5;
      puVar15 = auStack_f8;
      puStack_100 = &UNK_003ca635;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (puVar15,&UNK_00181a61,0x13f,1,0,0xffffffff);
      puStack_100 = &UNK_003ca63d;
      uVar11 = _ZN7android4base10LogMessage6streamEv(puVar15);
      puStack_100 = &UNK_003ca651;
      func_0x0032eb30(uVar11,&UNK_0016133d,0x18);
      puStack_100 = &UNK_003ca659;
      _ZN7android4base10LogMessageD2Ev(puVar15);
      *puVar13 = uVar5;
    }
  }
  puStack_100 = &UNK_003ca5b1;
  puVar12 = (undefined8 *)_Znwm(0x38);
  puVar12[1] = 0;
  puVar12[2] = 0;
  puVar12[3] = 0;
  puVar12[4] = 0;
  puVar12[5] = 0;
  puVar12[6] = 0;
  *puVar12 = 0x1000000534c5453;
  puStack_100 = &UNK_003ca5d8;
  _Z11send_packetP7apacketP10atransport(puVar12,puVar24);
  if (*(uint **)(in_FS_OFFSET + 0x28) == puStack_f0) {
    return *(uint **)(in_FS_OFFSET + 0x28);
  }
  puStack_100 = &UNK_003ca666;
  func_0x0099bd00();
  puStack_130 = *(uint **)(in_FS_OFFSET + 0x28);
  puStack_128 = puVar24;
  uStack_120 = uVar17;
  puStack_118 = puVar10;
  puStack_110 = puVar13;
  puStack_108 = puVar15;
  puStack_100 = (undefined *)apuStack_c8;
  if ((((byte)adb_trace_mask & 1) != 0) &&
     (puStack_100 = (undefined *)apuStack_c8, (int)adb_trace_severity._0_4_ < 2)) {
    pcStack_168 = (code *)&UNK_003ca7bb;
    puStack_100 = (undefined *)apuStack_c8;
    cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
    if (cVar8 != '\0') {
      pcStack_168 = (code *)&UNK_003ca7c8;
      puVar16 = (undefined4 *)func_0x0099bce0();
      uVar9 = *puVar16;
      pcStack_168 = (code *)&UNK_003ca7f4;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&uStack_150,&UNK_00181a61,0x148,1,0,0xffffffff);
      pcStack_168 = (code *)&UNK_003ca7fc;
      uVar11 = _ZN7android4base10LogMessage6streamEv(&uStack_150);
      pcStack_168 = (code *)&UNK_003ca810;
      func_0x0032eb30(uVar11,&UNK_00164389,0x14);
      pcStack_168 = (code *)&UNK_003ca818;
      _ZN7android4base10LogMessageD2Ev(&uStack_150);
      *puVar16 = uVar9;
    }
  }
  pcStack_168 = (code *)&UNK_003ca6b7;
  pbVar14 = (byte *)_Znwm(0x38);
  pbVar14[0xc] = 0;
  pbVar14[0xd] = 0;
  pbVar14[0xe] = 0;
  pbVar14[0xf] = 0;
  pbVar14[0x10] = 0;
  pbVar14[0x11] = 0;
  pbVar14[0x12] = 0;
  pbVar14[0x13] = 0;
  pbVar14[0x14] = 0;
  pbVar14[0x15] = 0;
  pbVar14[0x16] = 0;
  pbVar14[0x17] = 0;
  pbVar14[0] = 0x43;
  pbVar14[1] = 0x4e;
  pbVar14[2] = 0x58;
  pbVar14[3] = 0x4e;
  pbVar14[4] = 1;
  pbVar14[5] = 0;
  pbVar14[6] = 0;
  pbVar14[7] = 1;
  pcStack_168 = (code *)&UNK_003ca6de;
  uVar9 = _ZNK10atransport15get_max_payloadEv(puVar12);
  *(undefined4 *)(pbVar14 + 8) = uVar9;
  uStack_150 = 0;
  uStack_148 = 0;
  pbStack_140 = (byte *)0x0;
  pcStack_168 = (code *)&UNK_003ca6fa;
  _Z21get_connection_stringv(&uStack_150);
  if (((uStack_150 & 1) != 0) && (0x1000 < uStack_148)) {
    pcStack_168 = (code *)&UNK_003ca716;
    cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(6,0);
    if (cVar8 != '\0') {
      pcStack_168 = (code *)&UNK_003ca825;
      puVar15 = (uint *)func_0x0099bce0();
      uVar5 = *puVar15;
      puVar10 = (uint *)(ulong)uVar5;
      pcStack_168 = (code *)&UNK_003ca851;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_158,&UNK_00181a61,0x155,6,0,0xffffffff);
      pcStack_168 = (code *)&UNK_003ca859;
      uVar11 = _ZN7android4base10LogMessage6streamEv(auStack_158);
      pcStack_168 = (code *)&UNK_003ca86d;
      uVar11 = func_0x0032eb30(uVar11,&UNK_0018acbf,0x28);
      uVar17 = uStack_148;
      if ((uStack_150 & 1) == 0) {
        uVar17 = uStack_150 >> 1 & 0x7f;
      }
      pcStack_168 = (code *)&UNK_003ca887;
      uVar11 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar11,uVar17);
      pcStack_168 = (code *)&UNK_003ca89b;
      func_0x0032eb30(uVar11,&UNK_001692c7,1);
      pcStack_168 = (code *)&UNK_003ca8a3;
      _ZN7android4base10LogMessageD2Ev(auStack_158);
      *puVar15 = uVar5;
    }
  }
  pbVar20 = (byte *)((long)&uStack_150 + 1);
  uVar17 = uStack_150 >> 1 & 0x7f;
  if ((uStack_150 & 1) != 0) {
    pbVar20 = pbStack_140;
    uVar17 = uStack_148;
  }
  pbVar14[0x28] = 0;
  pbVar14[0x29] = 0;
  pbVar14[0x2a] = 0;
  pbVar14[0x2b] = 0;
  pbVar14[0x2c] = 0;
  pbVar14[0x2d] = 0;
  pbVar14[0x2e] = 0;
  pbVar14[0x2f] = 0;
  pbVar14[0x30] = 0;
  pbVar14[0x31] = 0;
  pbVar14[0x32] = 0;
  pbVar14[0x33] = 0;
  pbVar14[0x34] = 0;
  pbVar14[0x35] = 0;
  pbVar14[0x36] = 0;
  pbVar14[0x37] = 0;
  pbVar14[0x18] = 0;
  pbVar14[0x19] = 0;
  pbVar14[0x1a] = 0;
  pbVar14[0x1b] = 0;
  pbVar14[0x1c] = 0;
  pbVar14[0x1d] = 0;
  pbVar14[0x1e] = 0;
  pbVar14[0x1f] = 0;
  pbVar14[0x20] = 0;
  pbVar14[0x21] = 0;
  pbVar14[0x22] = 0;
  pbVar14[0x23] = 0;
  pbVar14[0x24] = 0;
  pbVar14[0x25] = 0;
  pbVar14[0x26] = 0;
  pbVar14[0x27] = 0;
  pcStack_168 = (code *)&UNK_003ca754;
  _ZN5Block8allocateEm(pbVar14 + 0x18,uVar17);
  pcStack_168 = (code *)&UNK_003ca763;
  func_0x0099bd90(*(undefined8 *)(pbVar14 + 0x18),pbVar20,uVar17);
  *(undefined4 *)(pbVar14 + 0xc) = *(undefined4 *)(pbVar14 + 0x28);
  pcStack_168 = (code *)&UNK_003ca776;
  puVar21 = puVar12;
  pbVar19 = pbVar14;
  _Z11send_packetP7apacketP10atransport();
  if ((uStack_150 & 1) != 0) {
    puVar21 = (undefined8 *)(uStack_150 & 0xfffffffffffffffe);
    pcStack_168 = (code *)&UNK_003ca78d;
    pbVar19 = pbStack_140;
    _ZdaPvSt11align_val_t();
  }
  if (*(uint **)(in_FS_OFFSET + 0x28) == puStack_130) {
    return *(uint **)(in_FS_OFFSET + 0x28);
  }
  pcStack_168 = 
  _Z12parse_bannerRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEP10atransport;
  func_0x0099bd00();
  puStack_198 = *(uint **)(in_FS_OFFSET + 0x28);
  puStack_190 = puVar12;
  pbStack_188 = pbVar20;
  puStack_180 = puVar10;
  pbStack_178 = pbVar14;
  uStack_170 = uVar17;
  pcStack_168 = (code *)&puStack_100;
  if (((((byte)adb_trace_mask & 1) != 0) &&
      (pcStack_168 = (code *)&puStack_100, (int)adb_trace_severity._0_4_ < 2)) &&
     (pcStack_168 = (code *)&puStack_100,
     cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0), cVar8 != '\0')) {
    puVar16 = (undefined4 *)func_0x0099bce0();
    uVar9 = *puVar16;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (&bStack_1d0,&UNK_00181a61,0x160,1,0,0xffffffff);
    uVar11 = _ZN7android4base10LogMessage6streamEv(&bStack_1d0);
    if ((*pbVar19 & 1) == 0) {
      pbVar14 = pbVar19 + 1;
    }
    else {
      pbVar14 = *(byte **)(pbVar19 + 0x10);
    }
    _ZN7android4base12StringPrintfEPKcz(auStack_1b8,&UNK_0015c79c,pbVar14);
    func_0x0032e5a0(uVar11,auStack_1b8);
    if ((auStack_1b8[0] & 1) != 0) {
      _ZdaPvSt11align_val_t(lStack_1a8,auStack_1b8._0_8_ & 0xfffffffffffffffe);
    }
    _ZN7android4base10LogMessageD2Ev(&bStack_1d0);
    *puVar16 = uVar9;
  }
  auStack_1b8 = (undefined1  [16])0x0;
  lStack_1a8 = 0;
  bStack_1d0 = 2;
  uStack_1cf = 0x3a;
  uStack_1ce = 0;
  _ZN7android4base5SplitERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_
            (auStack_1b8,pbVar19,&bStack_1d0);
  if ((bStack_1d0 & 1) != 0) {
    _ZdaPvSt11align_val_t
              (lStack_1c0,
               CONCAT53(uStack_1cd,CONCAT12(uStack_1ce,CONCAT11(uStack_1cf,bStack_1d0))) &
               0xfffffffffffffffe);
  }
  bStack_1d0 = 0;
  uStack_1cf = 0;
  _ZN10atransport11SetFeaturesERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
            (puVar21,&bStack_1d0);
  if ((bStack_1d0 & 1) != 0) {
    _ZdaPvSt11align_val_t
              (lStack_1c0,
               CONCAT53(uStack_1cd,CONCAT12(uStack_1ce,CONCAT11(uStack_1cf,bStack_1d0))) &
               0xfffffffffffffffe);
  }
  if (2 < (ulong)(((long)(auStack_1b8._8_8_ - auStack_1b8._0_8_) >> 3) * -0x5555555555555555)) {
    bStack_1e8 = 2;
    uStack_1e7 = 0x3b;
    uStack_1e6 = 0;
    _ZN7android4base5SplitERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_
              (&bStack_1d0,(byte *)(auStack_1b8._0_8_ + 0x30),&bStack_1e8);
    pbVar20 = pbStack_1c8;
    pbVar14 = (byte *)CONCAT53(uStack_1cd,CONCAT12(uStack_1ce,CONCAT11(uStack_1cf,bStack_1d0)));
    if (pbVar14 != pbStack_1c8) {
      pauVar1 = (undefined1 (*) [16])(puVar21 + 0xe);
      pauVar2 = (undefined1 (*) [16])(puVar21 + 0xb);
      pauVar3 = (undefined1 (*) [16])(puVar21 + 8);
      do {
        if ((*pbVar14 & 1) == 0) {
          if (*pbVar14 >> 1 != 0) goto code_r0x003caa37;
        }
        else if (*(long *)(pbVar14 + 8) != 0) {
code_r0x003caa37:
          auStack_208 = (undefined1  [16])0x0;
          lStack_1f8 = 0;
          bStack_220 = 2;
          uStack_21f = 0x3d;
          uStack_21e = 0;
          _ZN7android4base5SplitERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_
                    (auStack_208,pbVar14,&bStack_220);
          if ((bStack_220 & 1) != 0) {
            _ZdaPvSt11align_val_t
                      (uStack_210,
                       CONCAT53(uStack_21d,CONCAT12(uStack_21e,CONCAT11(uStack_21f,bStack_220))) &
                       0xfffffffffffffffe);
          }
          pbVar19 = (byte *)auStack_208._0_8_;
          if (auStack_208._8_8_ - auStack_208._0_8_ == 0x30) {
            bVar4 = *(byte *)auStack_208._0_8_;
            if ((bVar4 & 1) == 0) {
              uVar17 = (ulong)(bVar4 >> 1);
            }
            else {
              uVar17 = *(ulong *)(auStack_208._0_8_ + 8);
            }
            if (uVar17 - 8 < 10) {
              pauVar25 = (undefined1 (*) [16])(auStack_208._0_8_ + 0x18);
              switch(uVar17) {
              case 8:
                if ((bVar4 & 1) == 0) {
                  pbVar19 = (byte *)(auStack_208._0_8_ + 1);
                }
                else {
                  pbVar19 = *(byte **)(auStack_208._0_8_ + 0x10);
                }
                if (*(long *)pbVar19 == 0x7365727574616566) {
                  _ZN10atransport11SetFeaturesERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                            (puVar21);
                }
                break;
              case 0xf:
                if ((bVar4 & 1) == 0) {
                  pbVar19 = (byte *)(auStack_208._0_8_ + 1);
                }
                else {
                  pbVar19 = *(byte **)(auStack_208._0_8_ + 0x10);
                }
                if (pauVar3 != pauVar25 &&
                    (*(long *)(pbVar19 + 7) == 0x656d616e2e746375 &&
                    *(long *)pbVar19 == 0x75646f72702e6f72)) {
                  bVar4 = (*pauVar25)[0];
                  if (((*pauVar3)[0] & 1) == 0) {
                    if ((bVar4 & 1) == 0) {
                      puVar21[10] = *(undefined8 *)(auStack_208._0_8_ + 0x28);
                      *pauVar3 = *pauVar25;
                    }
                    else {
                      uVar11 = *(undefined8 *)(auStack_208._0_8_ + 0x20);
                      uVar22 = *(undefined8 *)(auStack_208._0_8_ + 0x28);
                      pauVar25 = pauVar3;
code_r0x003cacfa:
                      func_0x0032e990(pauVar25,uVar22,uVar11);
                    }
                  }
                  else {
                    bVar28 = (bVar4 & 1) != 0;
                    pbVar19 = (byte *)(auStack_208._0_8_ + 0x19);
                    if (bVar28) {
                      pbVar19 = *(byte **)(auStack_208._0_8_ + 0x28);
                    }
                    uVar17 = (ulong)(bVar4 >> 1);
                    if (bVar28) {
                      uVar17 = *(ulong *)(auStack_208._0_8_ + 0x20);
                    }
                    func_0x0032e920(pauVar3,pbVar19,uVar17);
                  }
                }
                break;
              case 0x10:
                if ((bVar4 & 1) == 0) {
                  pbVar19 = (byte *)(auStack_208._0_8_ + 1);
                }
                else {
                  pbVar19 = *(byte **)(auStack_208._0_8_ + 0x10);
                }
                auVar29[0] = -(*pbVar19 == 0x72);
                auVar29[1] = -(pbVar19[1] == 0x6f);
                auVar29[2] = -(pbVar19[2] == 0x2e);
                auVar29[3] = -(pbVar19[3] == 0x70);
                auVar29[4] = -(pbVar19[4] == 0x72);
                auVar29[5] = -(pbVar19[5] == 0x6f);
                auVar29[6] = -(pbVar19[6] == 100);
                auVar29[7] = -(pbVar19[7] == 0x75);
                auVar29[8] = -(pbVar19[8] == 99);
                auVar29[9] = -(pbVar19[9] == 0x74);
                auVar29[10] = -(pbVar19[10] == 0x2e);
                auVar29[0xb] = -(pbVar19[0xb] == 0x6d);
                auVar29[0xc] = -(pbVar19[0xc] == 0x6f);
                auVar29[0xd] = -(pbVar19[0xd] == 100);
                auVar29[0xe] = -(pbVar19[0xe] == 0x65);
                auVar29[0xf] = -(pbVar19[0xf] == 0x6c);
                if (pauVar2 != pauVar25 &&
                    (ushort)((ushort)(SUB161(auVar29 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar29 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar29 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar29 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar29 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar29 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar29 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar29 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar29 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar29 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar29 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar29 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe |
                            (ushort)(auVar29[0xf] >> 7) << 0xf) == 0xffff) {
                  bVar4 = (*pauVar25)[0];
                  if (((*pauVar2)[0] & 1) == 0) {
                    if ((bVar4 & 1) != 0) {
                      uVar11 = *(undefined8 *)(auStack_208._0_8_ + 0x20);
                      uVar22 = *(undefined8 *)(auStack_208._0_8_ + 0x28);
                      pauVar25 = pauVar2;
                      goto code_r0x003cacfa;
                    }
                    puVar21[0xd] = *(undefined8 *)(auStack_208._0_8_ + 0x28);
                    *pauVar2 = *pauVar25;
                  }
                  else {
                    bVar28 = (bVar4 & 1) != 0;
                    pbVar19 = (byte *)(auStack_208._0_8_ + 0x19);
                    if (bVar28) {
                      pbVar19 = *(byte **)(auStack_208._0_8_ + 0x28);
                    }
                    uVar17 = (ulong)(bVar4 >> 1);
                    if (bVar28) {
                      uVar17 = *(ulong *)(auStack_208._0_8_ + 0x20);
                    }
                    func_0x0032e920(pauVar2,pbVar19,uVar17);
                  }
                }
                break;
              case 0x11:
                if ((bVar4 & 1) == 0) {
                  pbVar19 = (byte *)(auStack_208._0_8_ + 1);
                }
                else {
                  pbVar19 = *(byte **)(auStack_208._0_8_ + 0x10);
                }
                auVar30[0] = -(*pbVar19 == 0x72);
                auVar30[1] = -(pbVar19[1] == 0x6f);
                auVar30[2] = -(pbVar19[2] == 0x2e);
                auVar30[3] = -(pbVar19[3] == 0x70);
                auVar30[4] = -(pbVar19[4] == 0x72);
                auVar30[5] = -(pbVar19[5] == 0x6f);
                auVar30[6] = -(pbVar19[6] == 100);
                auVar30[7] = -(pbVar19[7] == 0x75);
                auVar30[8] = -(pbVar19[8] == 99);
                auVar30[9] = -(pbVar19[9] == 0x74);
                auVar30[10] = -(pbVar19[10] == 0x2e);
                auVar30[0xb] = -(pbVar19[0xb] == 100);
                auVar30[0xc] = -(pbVar19[0xc] == 0x65);
                auVar30[0xd] = -(pbVar19[0xd] == 0x76);
                auVar30[0xe] = -(pbVar19[0xe] == 0x69);
                auVar30[0xf] = -(pbVar19[0xf] == 99);
                auVar31[0] = -(pbVar19[0x10] == 0x65);
                auVar31[1] = 0xff;
                auVar31[2] = 0xff;
                auVar31[3] = 0xff;
                auVar31[4] = 0xff;
                auVar31[5] = 0xff;
                auVar31[6] = 0xff;
                auVar31[7] = 0xff;
                auVar31[8] = 0xff;
                auVar31[9] = 0xff;
                auVar31[10] = 0xff;
                auVar31[0xb] = 0xff;
                auVar31[0xc] = 0xff;
                auVar31[0xd] = 0xff;
                auVar31[0xe] = 0xff;
                auVar31[0xf] = 0xff;
                auVar31 = auVar31 & auVar30;
                if (pauVar1 != pauVar25 &&
                    (ushort)((ushort)(SUB161(auVar31 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar31 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar31 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar31 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar31 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar31 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar31 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar31 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar31 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar31 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar31 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar31 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar31 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar31 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar31 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar31[0xf] >> 7) << 0xf) == 0xffff) {
                  bVar4 = (*pauVar25)[0];
                  if (((*pauVar1)[0] & 1) == 0) {
                    if ((bVar4 & 1) != 0) {
                      uVar11 = *(undefined8 *)(auStack_208._0_8_ + 0x20);
                      uVar22 = *(undefined8 *)(auStack_208._0_8_ + 0x28);
                      pauVar25 = pauVar1;
                      goto code_r0x003cacfa;
                    }
                    puVar21[0x10] = *(undefined8 *)(auStack_208._0_8_ + 0x28);
                    *pauVar1 = *pauVar25;
                  }
                  else {
                    bVar28 = (bVar4 & 1) != 0;
                    pbVar19 = (byte *)(auStack_208._0_8_ + 0x19);
                    if (bVar28) {
                      pbVar19 = *(byte **)(auStack_208._0_8_ + 0x28);
                    }
                    uVar17 = (ulong)(bVar4 >> 1);
                    if (bVar28) {
                      uVar17 = *(ulong *)(auStack_208._0_8_ + 0x20);
                    }
                    func_0x0032e920(pauVar1,pbVar19,uVar17);
                  }
                }
              }
            }
            pbVar19 = (byte *)auStack_208._0_8_;
          }
          if (pbVar19 != (byte *)0x0) {
            pbVar6 = pbVar19;
            for (pbVar27 = (byte *)auStack_208._8_8_; pbVar19 != pbVar27; pbVar27 = pbVar27 + -0x18)
            {
              if ((pbVar27[-0x18] & 1) != 0) {
                _ZdaPvSt11align_val_t
                          (*(undefined8 *)(pbVar27 + -8),
                           *(ulong *)(pbVar27 + -0x18) & 0xfffffffffffffffe);
              }
              pbVar6 = (byte *)auStack_208._0_8_;
            }
            auStack_208._8_8_ = pbVar19;
            _ZdaPvSt11align_val_t(pbVar6,lStack_1f8 - (long)pbVar6);
          }
        }
        pbVar14 = pbVar14 + 0x18;
      } while (pbVar14 != pbVar20);
      pbVar14 = (byte *)CONCAT53(uStack_1cd,CONCAT12(uStack_1ce,CONCAT11(uStack_1cf,bStack_1d0)));
    }
    if (pbVar14 != (byte *)0x0) {
      pbVar20 = pbStack_1c8;
      pbVar19 = pbVar14;
      if (pbVar14 != pbStack_1c8) {
        do {
          if ((pbVar20[-0x18] & 1) != 0) {
            _ZdaPvSt11align_val_t
                      (*(undefined8 *)(pbVar20 + -8),
                       *(ulong *)(pbVar20 + -0x18) & 0xfffffffffffffffe);
          }
          pbVar20 = pbVar20 + -0x18;
        } while (pbVar20 != pbVar14);
        pbVar19 = (byte *)CONCAT53(uStack_1cd,CONCAT12(uStack_1ce,CONCAT11(uStack_1cf,bStack_1d0)));
      }
      pbStack_1c8 = pbVar14;
      _ZdaPvSt11align_val_t(pbVar19,lStack_1c0 - (long)pbVar19);
    }
    if ((bStack_1e8 & 1) != 0) {
      _ZdaPvSt11align_val_t
                (uStack_1d8,
                 CONCAT53(uStack_1e5,CONCAT12(uStack_1e6,CONCAT11(uStack_1e7,bStack_1e8))) &
                 0xfffffffffffffffe);
    }
  }
  bVar4 = *(byte *)auStack_1b8._0_8_;
  if ((bVar4 & 1) == 0) {
    uVar17 = (ulong)(bVar4 >> 1);
    if (uVar17 == 6) goto code_r0x003cae19;
code_r0x003cadf2:
    if (uVar17 == 8) {
      if ((bVar4 & 1) == 0) {
        pbVar14 = (byte *)(auStack_1b8._0_8_ + 1);
      }
      else {
        pbVar14 = *(byte **)(auStack_1b8._0_8_ + 0x10);
      }
      if (*(long *)pbVar14 == 0x797265766f636572) {
        uVar11 = 9;
        if ((((byte)adb_trace_mask & 1) != 0) && ((int)adb_trace_severity._0_4_ < 2)) {
          cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
          if (cVar8 == '\0') {
            uVar11 = 9;
          }
          else {
            puVar16 = (undefined4 *)func_0x0099bce0();
            uVar9 = *puVar16;
            _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                      (&bStack_1d0,&UNK_00181a61,0x189,1,0,0xffffffff);
            uVar11 = _ZN7android4base10LogMessage6streamEv(&bStack_1d0);
            func_0x0032eb30(uVar11,&UNK_0017d582,0x27);
            _ZN7android4base10LogMessageD2Ev(&bStack_1d0);
            *puVar16 = uVar9;
            uVar11 = 9;
          }
        }
        goto code_r0x003cafc3;
      }
      if ((bVar4 & 1) == 0) {
        pbVar14 = (byte *)(auStack_1b8._0_8_ + 1);
      }
      else {
        pbVar14 = *(byte **)(auStack_1b8._0_8_ + 0x10);
      }
      if (*(long *)pbVar14 == 0x64616f6c65646973) {
        uVar11 = 10;
        if ((((byte)adb_trace_mask & 1) != 0) && ((int)adb_trace_severity._0_4_ < 2)) {
          cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
          if (cVar8 == '\0') {
            uVar11 = 10;
          }
          else {
            puVar16 = (undefined4 *)func_0x0099bce0();
            uVar9 = *puVar16;
            _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                      (&bStack_1d0,&UNK_00181a61,0x18c,1,0,0xffffffff);
            uVar11 = _ZN7android4base10LogMessage6streamEv(&bStack_1d0);
            func_0x0032eb30(uVar11,&UNK_00162dab,0x27);
            _ZN7android4base10LogMessageD2Ev(&bStack_1d0);
            *puVar16 = uVar9;
            uVar11 = 10;
          }
        }
        goto code_r0x003cafc3;
      }
    }
    else if (uVar17 == 10) {
      if ((bVar4 & 1) == 0) {
        pbVar14 = (byte *)(auStack_1b8._0_8_ + 1);
      }
      else {
        pbVar14 = *(byte **)(auStack_1b8._0_8_ + 0x10);
      }
      if (*(short *)(pbVar14 + 8) == 0x7265 && *(long *)pbVar14 == 0x64616f6c746f6f62) {
        uVar11 = 6;
        if ((((byte)adb_trace_mask & 1) != 0) && ((int)adb_trace_severity._0_4_ < 2)) {
          cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
          if (cVar8 == '\0') {
            uVar11 = 6;
          }
          else {
            puVar16 = (undefined4 *)func_0x0099bce0();
            uVar9 = *puVar16;
            _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                      (&bStack_1d0,&UNK_00181a61,0x183,1,0,0xffffffff);
            uVar11 = _ZN7android4base10LogMessage6streamEv(&bStack_1d0);
            func_0x0032eb30(uVar11,&UNK_001679a3,0x29);
            _ZN7android4base10LogMessageD2Ev(&bStack_1d0);
            *puVar16 = uVar9;
            uVar11 = 6;
          }
        }
        goto code_r0x003cafc3;
      }
    }
  }
  else {
    uVar17 = *(ulong *)(auStack_1b8._0_8_ + 8);
    if (uVar17 != 6) goto code_r0x003cadf2;
code_r0x003cae19:
    if ((bVar4 & 1) == 0) {
      pbVar14 = (byte *)(auStack_1b8._0_8_ + 1);
    }
    else {
      pbVar14 = *(byte **)(auStack_1b8._0_8_ + 0x10);
    }
    if (*(short *)(pbVar14 + 4) == 0x6563 && *(int *)pbVar14 == 0x69766564) {
      uVar11 = 7;
      if ((((byte)adb_trace_mask & 1) != 0) && ((int)adb_trace_severity._0_4_ < 2)) {
        cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
        if (cVar8 == '\0') {
          uVar11 = 7;
        }
        else {
          puVar16 = (undefined4 *)func_0x0099bce0();
          uVar9 = *puVar16;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (&bStack_1d0,&UNK_00181a61,0x186,1,0,0xffffffff);
          uVar11 = _ZN7android4base10LogMessage6streamEv(&bStack_1d0);
          func_0x0032eb30(uVar11,&UNK_00173ed4,0x25);
          _ZN7android4base10LogMessageD2Ev(&bStack_1d0);
          *puVar16 = uVar9;
          uVar11 = 7;
        }
      }
      goto code_r0x003cafc3;
    }
    if ((bVar4 & 1) == 0) {
      pbVar14 = (byte *)(auStack_1b8._0_8_ + 1);
    }
    else {
      pbVar14 = *(byte **)(auStack_1b8._0_8_ + 0x10);
    }
    if (*(short *)(pbVar14 + 4) == 0x6575 && *(int *)pbVar14 == 0x63736572) {
      uVar11 = 0xb;
      if ((((byte)adb_trace_mask & 1) != 0) && ((int)adb_trace_severity._0_4_ < 2)) {
        cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
        if (cVar8 == '\0') {
          uVar11 = 0xb;
        }
        else {
          puVar16 = (undefined4 *)func_0x0099bce0();
          uVar9 = *puVar16;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (&bStack_1d0,&UNK_00181a61,399,1,0,0xffffffff);
          uVar11 = _ZN7android4base10LogMessage6streamEv(&bStack_1d0);
          func_0x0032eb30(uVar11,&UNK_0015959b,0x25);
          _ZN7android4base10LogMessageD2Ev(&bStack_1d0);
          *puVar16 = uVar9;
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
    _ZN10atransport18SetConnectionStateE15ConnectionState(puVar21,uVar11);
    uVar11 = auStack_1b8._0_8_;
    if (auStack_1b8._0_8_ != 0) {
      for (lVar26 = auStack_1b8._8_8_; uVar11 != lVar26; lVar26 = lVar26 + -0x18) {
        if ((*(byte *)(lVar26 + -0x18) & 1) != 0) {
          _ZdaPvSt11align_val_t
                    (*(undefined8 *)(lVar26 + -8),*(ulong *)(lVar26 + -0x18) & 0xfffffffffffffffe);
        }
      }
      auStack_1b8._8_8_ = uVar11;
      _ZdaPvSt11align_val_t(auStack_1b8._0_8_,lStack_1a8 - auStack_1b8._0_8_);
    }
    if (*(uint **)(in_FS_OFFSET + 0x28) == puStack_198) break;
    func_0x0099bd00();
code_r0x003cb105:
    puVar16 = (undefined4 *)func_0x0099bce0();
    uVar9 = *puVar16;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (&bStack_1d0,&UNK_00181a61,0x192,1,0,0xffffffff);
    uVar11 = _ZN7android4base10LogMessage6streamEv(&bStack_1d0);
    func_0x0032eb30(uVar11,&UNK_00170562,0x23);
    _ZN7android4base10LogMessageD2Ev(&bStack_1d0);
    *puVar16 = uVar9;
code_r0x003cb0f6:
    uVar11 = 8;
  }
  return *(uint **)(in_FS_OFFSET + 0x28);
}


