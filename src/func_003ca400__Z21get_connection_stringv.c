// Function: _Z21get_connection_stringv
// Address: 003ca400
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 * _Z21get_connection_stringv(undefined8 *param_1)

{
  undefined1 (*pauVar1) [16];
  undefined1 (*pauVar2) [16];
  undefined1 (*pauVar3) [16];
  byte bVar4;
  uint uVar5;
  byte *pbVar6;
  undefined8 *puVar7;
  char cVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  byte *pbVar12;
  uint *puVar13;
  undefined4 *puVar14;
  ulong uVar15;
  undefined7 *puVar16;
  byte *pbVar17;
  byte *pbVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  undefined1 (*pauVar21) [16];
  ulong unaff_R12;
  ulong unaff_R13;
  long lVar22;
  byte *pbVar23;
  long in_FS_OFFSET;
  bool bVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  byte bStack_1d8;
  undefined1 uStack_1d7;
  undefined1 uStack_1d6;
  undefined5 uStack_1d5;
  undefined8 uStack_1c8;
  undefined1 auStack_1c0 [16];
  long lStack_1b0;
  byte bStack_1a0;
  undefined1 uStack_19f;
  undefined1 uStack_19e;
  undefined5 uStack_19d;
  undefined8 uStack_190;
  byte bStack_188;
  undefined1 uStack_187;
  undefined1 uStack_186;
  undefined5 uStack_185;
  byte *pbStack_180;
  long lStack_178;
  undefined1 auStack_170 [16];
  long lStack_160;
  undefined8 *puStack_150;
  undefined8 *puStack_148;
  byte *pbStack_140;
  ulong uStack_138;
  byte *pbStack_130;
  ulong uStack_128;
  code *pcStack_120;
  undefined1 auStack_110 [8];
  undefined8 uStack_108;
  ulong uStack_100;
  byte *pbStack_f8;
  undefined8 *puStack_e8;
  undefined8 *puStack_e0;
  ulong uStack_d8;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined *apuStack_80 [2];
  byte bStack_70;
  undefined7 uStack_6f;
  undefined7 *puStack_60;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  undefined8 *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)(in_FS_OFFSET + 0x28);
  apuStack_80[0] = &UNK_003ca422;
  uVar10 = _Z18supported_featuresv();
  apuStack_80[0] = &UNK_003ca42e;
  _Z18FeatureSetToStringRKNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEEE
            (&bStack_70,uVar10);
  puVar16 = puStack_60;
  if ((bStack_70 & 1) == 0) {
    puVar16 = &uStack_6f;
  }
  apuStack_80[0] = &UNK_003ca450;
  _ZN7android4base12StringPrintfEPKcz(auStack_58,&UNK_0015c790,puVar16);
  apuStack_80[0] = &UNK_003ca45a;
  puStack_40 = (undefined8 *)_Znwm(0x18);
  puStack_38 = puStack_40 + 3;
  puStack_40[2] = puStack_48;
  *puStack_40 = auStack_58;
  puStack_40[1] = uStack_50;
  auStack_58 = (undefined1  [8])0x0;
  uStack_50 = 0;
  puStack_48 = (undefined8 *)0x0;
  puStack_30 = puStack_38;
  if ((bStack_70 & 1) != 0) {
    apuStack_80[0] = &UNK_003ca49f;
    _ZdaPvSt11align_val_t(puStack_60,CONCAT71(uStack_6f,bStack_70) & 0xfffffffffffffffe);
  }
  uVar10 = adb_device_banner;
  apuStack_80[0] = &UNK_003ca4bb;
  _ZN7android4base4JoinIRKNSt3__16vectorINS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS7_IS9_EEEEcEES9_OT_T0_
            (auStack_58,&puStack_40,0x3b);
  puVar11 = puStack_48;
  if (((ulong)auStack_58 & 1) == 0) {
    puVar11 = (undefined8 *)(auStack_58 + 1);
  }
  apuStack_80[0] = &UNK_003ca4df;
  puVar19 = param_1;
  _ZN7android4base12StringPrintfEPKcz(param_1,&UNK_00159594,uVar10,puVar11);
  if (((ulong)auStack_58 & 1) != 0) {
    apuStack_80[0] = &UNK_003ca4f6;
    puVar19 = puStack_48;
    _ZdaPvSt11align_val_t(puStack_48,(ulong)auStack_58 & 0xfffffffffffffffe);
  }
  puVar7 = puStack_40;
  puVar11 = puStack_38;
  if (puStack_40 != (undefined8 *)0x0) {
    for (; puVar19 = puStack_40, puStack_40 = puVar19, puVar7 != puVar11; puVar11 = puVar11 + -3) {
      if ((*(byte *)(puVar11 + -3) & 1) != 0) {
        apuStack_80[0] = &UNK_003ca531;
        _ZdaPvSt11align_val_t(puVar11[-1],puVar11[-3] & 0xfffffffffffffffe);
      }
    }
    puStack_38 = puVar7;
    apuStack_80[0] = &UNK_003ca547;
    _ZdaPvSt11align_val_t(puVar19,(long)puStack_30 - (long)puVar19);
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_28) {
    return param_1;
  }
  apuStack_80[0] = &UNK_003ca569;
  func_0x0099bd00();
  puStack_a8 = *(undefined8 **)(in_FS_OFFSET + 0x28);
  puStack_a0 = param_1;
  apuStack_80[0] = &stack0xfffffffffffffff8;
  if ((((byte)adb_trace_mask & 1) != 0) &&
     (apuStack_80[0] = &stack0xfffffffffffffff8, (int)adb_trace_severity._0_4_ < 2)) {
    puStack_b8 = &UNK_003ca600;
    apuStack_80[0] = &stack0xfffffffffffffff8;
    cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
    if (cVar8 != '\0') {
      puStack_b8 = &UNK_003ca609;
      puVar13 = (uint *)func_0x0099bce0();
      uVar5 = *puVar13;
      unaff_R12 = (ulong)uVar5;
      puStack_b8 = &UNK_003ca635;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_b0,&UNK_00181a61,0x13f,1,0,0xffffffff);
      puStack_b8 = &UNK_003ca63d;
      uVar10 = _ZN7android4base10LogMessage6streamEv(auStack_b0);
      puStack_b8 = &UNK_003ca651;
      func_0x0032eb30(uVar10,&UNK_0016133d,0x18);
      puStack_b8 = &UNK_003ca659;
      _ZN7android4base10LogMessageD2Ev(auStack_b0);
      *puVar13 = uVar5;
    }
  }
  puStack_b8 = &UNK_003ca5b1;
  puVar11 = (undefined8 *)_Znwm(0x38);
  puVar11[1] = 0;
  puVar11[2] = 0;
  puVar11[3] = 0;
  puVar11[4] = 0;
  puVar11[5] = 0;
  puVar11[6] = 0;
  *puVar11 = 0x1000000534c5453;
  puStack_b8 = &UNK_003ca5d8;
  _Z11send_packetP7apacketP10atransport(puVar11,puVar19);
  if (*(undefined8 **)(in_FS_OFFSET + 0x28) == puStack_a8) {
    return *(undefined8 **)(in_FS_OFFSET + 0x28);
  }
  puStack_b8 = &UNK_003ca666;
  func_0x0099bd00();
  puStack_e8 = *(undefined8 **)(in_FS_OFFSET + 0x28);
  puStack_e0 = puVar19;
  uStack_d8 = unaff_R12;
  puStack_b8 = (undefined *)apuStack_80;
  if ((((byte)adb_trace_mask & 1) != 0) &&
     (puStack_b8 = (undefined *)apuStack_80, (int)adb_trace_severity._0_4_ < 2)) {
    pcStack_120 = (code *)&UNK_003ca7bb;
    puStack_b8 = (undefined *)apuStack_80;
    cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
    if (cVar8 != '\0') {
      pcStack_120 = (code *)&UNK_003ca7c8;
      puVar14 = (undefined4 *)func_0x0099bce0();
      uVar9 = *puVar14;
      pcStack_120 = (code *)&UNK_003ca7f4;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&uStack_108,&UNK_00181a61,0x148,1,0,0xffffffff);
      pcStack_120 = (code *)&UNK_003ca7fc;
      uVar10 = _ZN7android4base10LogMessage6streamEv(&uStack_108);
      pcStack_120 = (code *)&UNK_003ca810;
      func_0x0032eb30(uVar10,&UNK_00164389,0x14);
      pcStack_120 = (code *)&UNK_003ca818;
      _ZN7android4base10LogMessageD2Ev(&uStack_108);
      *puVar14 = uVar9;
    }
  }
  pcStack_120 = (code *)&UNK_003ca6b7;
  pbVar12 = (byte *)_Znwm(0x38);
  pbVar12[0xc] = 0;
  pbVar12[0xd] = 0;
  pbVar12[0xe] = 0;
  pbVar12[0xf] = 0;
  pbVar12[0x10] = 0;
  pbVar12[0x11] = 0;
  pbVar12[0x12] = 0;
  pbVar12[0x13] = 0;
  pbVar12[0x14] = 0;
  pbVar12[0x15] = 0;
  pbVar12[0x16] = 0;
  pbVar12[0x17] = 0;
  pbVar12[0] = 0x43;
  pbVar12[1] = 0x4e;
  pbVar12[2] = 0x58;
  pbVar12[3] = 0x4e;
  pbVar12[4] = 1;
  pbVar12[5] = 0;
  pbVar12[6] = 0;
  pbVar12[7] = 1;
  pcStack_120 = (code *)&UNK_003ca6de;
  uVar9 = _ZNK10atransport15get_max_payloadEv(puVar11);
  *(undefined4 *)(pbVar12 + 8) = uVar9;
  uStack_108 = 0;
  uStack_100 = 0;
  pbStack_f8 = (byte *)0x0;
  pcStack_120 = (code *)&UNK_003ca6fa;
  _Z21get_connection_stringv(&uStack_108);
  if (((uStack_108 & 1) != 0) && (0x1000 < uStack_100)) {
    pcStack_120 = (code *)&UNK_003ca716;
    cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(6,0);
    if (cVar8 != '\0') {
      pcStack_120 = (code *)&UNK_003ca825;
      puVar13 = (uint *)func_0x0099bce0();
      uVar5 = *puVar13;
      unaff_R13 = (ulong)uVar5;
      pcStack_120 = (code *)&UNK_003ca851;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_110,&UNK_00181a61,0x155,6,0,0xffffffff);
      pcStack_120 = (code *)&UNK_003ca859;
      uVar10 = _ZN7android4base10LogMessage6streamEv(auStack_110);
      pcStack_120 = (code *)&UNK_003ca86d;
      uVar10 = func_0x0032eb30(uVar10,&UNK_0018acbf,0x28);
      uVar15 = uStack_100;
      if ((uStack_108 & 1) == 0) {
        uVar15 = uStack_108 >> 1 & 0x7f;
      }
      pcStack_120 = (code *)&UNK_003ca887;
      uVar10 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar10,uVar15);
      pcStack_120 = (code *)&UNK_003ca89b;
      func_0x0032eb30(uVar10,&UNK_001692c7,1);
      pcStack_120 = (code *)&UNK_003ca8a3;
      _ZN7android4base10LogMessageD2Ev(auStack_110);
      *puVar13 = uVar5;
    }
  }
  pbVar18 = (byte *)((long)&uStack_108 + 1);
  uVar15 = uStack_108 >> 1 & 0x7f;
  if ((uStack_108 & 1) != 0) {
    pbVar18 = pbStack_f8;
    uVar15 = uStack_100;
  }
  pbVar12[0x28] = 0;
  pbVar12[0x29] = 0;
  pbVar12[0x2a] = 0;
  pbVar12[0x2b] = 0;
  pbVar12[0x2c] = 0;
  pbVar12[0x2d] = 0;
  pbVar12[0x2e] = 0;
  pbVar12[0x2f] = 0;
  pbVar12[0x30] = 0;
  pbVar12[0x31] = 0;
  pbVar12[0x32] = 0;
  pbVar12[0x33] = 0;
  pbVar12[0x34] = 0;
  pbVar12[0x35] = 0;
  pbVar12[0x36] = 0;
  pbVar12[0x37] = 0;
  pbVar12[0x18] = 0;
  pbVar12[0x19] = 0;
  pbVar12[0x1a] = 0;
  pbVar12[0x1b] = 0;
  pbVar12[0x1c] = 0;
  pbVar12[0x1d] = 0;
  pbVar12[0x1e] = 0;
  pbVar12[0x1f] = 0;
  pbVar12[0x20] = 0;
  pbVar12[0x21] = 0;
  pbVar12[0x22] = 0;
  pbVar12[0x23] = 0;
  pbVar12[0x24] = 0;
  pbVar12[0x25] = 0;
  pbVar12[0x26] = 0;
  pbVar12[0x27] = 0;
  pcStack_120 = (code *)&UNK_003ca754;
  _ZN5Block8allocateEm(pbVar12 + 0x18,uVar15);
  pcStack_120 = (code *)&UNK_003ca763;
  func_0x0099bd90(*(undefined8 *)(pbVar12 + 0x18),pbVar18,uVar15);
  *(undefined4 *)(pbVar12 + 0xc) = *(undefined4 *)(pbVar12 + 0x28);
  pcStack_120 = (code *)&UNK_003ca776;
  puVar19 = puVar11;
  pbVar17 = pbVar12;
  _Z11send_packetP7apacketP10atransport();
  if ((uStack_108 & 1) != 0) {
    puVar19 = (undefined8 *)(uStack_108 & 0xfffffffffffffffe);
    pcStack_120 = (code *)&UNK_003ca78d;
    pbVar17 = pbStack_f8;
    _ZdaPvSt11align_val_t();
  }
  if (*(undefined8 **)(in_FS_OFFSET + 0x28) == puStack_e8) {
    return *(undefined8 **)(in_FS_OFFSET + 0x28);
  }
  pcStack_120 = 
  _Z12parse_bannerRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEP10atransport;
  func_0x0099bd00();
  puStack_150 = *(undefined8 **)(in_FS_OFFSET + 0x28);
  puStack_148 = puVar11;
  pbStack_140 = pbVar18;
  uStack_138 = unaff_R13;
  pbStack_130 = pbVar12;
  uStack_128 = uVar15;
  pcStack_120 = (code *)&puStack_b8;
  if (((((byte)adb_trace_mask & 1) != 0) &&
      (pcStack_120 = (code *)&puStack_b8, (int)adb_trace_severity._0_4_ < 2)) &&
     (pcStack_120 = (code *)&puStack_b8,
     cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0), cVar8 != '\0')) {
    puVar14 = (undefined4 *)func_0x0099bce0();
    uVar9 = *puVar14;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (&bStack_188,&UNK_00181a61,0x160,1,0,0xffffffff);
    uVar10 = _ZN7android4base10LogMessage6streamEv(&bStack_188);
    if ((*pbVar17 & 1) == 0) {
      pbVar12 = pbVar17 + 1;
    }
    else {
      pbVar12 = *(byte **)(pbVar17 + 0x10);
    }
    _ZN7android4base12StringPrintfEPKcz(auStack_170,&UNK_0015c79c,pbVar12);
    func_0x0032e5a0(uVar10,auStack_170);
    if ((auStack_170[0] & 1) != 0) {
      _ZdaPvSt11align_val_t(lStack_160,auStack_170._0_8_ & 0xfffffffffffffffe);
    }
    _ZN7android4base10LogMessageD2Ev(&bStack_188);
    *puVar14 = uVar9;
  }
  auStack_170 = (undefined1  [16])0x0;
  lStack_160 = 0;
  bStack_188 = 2;
  uStack_187 = 0x3a;
  uStack_186 = 0;
  _ZN7android4base5SplitERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_
            (auStack_170,pbVar17,&bStack_188);
  if ((bStack_188 & 1) != 0) {
    _ZdaPvSt11align_val_t
              (lStack_178,
               CONCAT53(uStack_185,CONCAT12(uStack_186,CONCAT11(uStack_187,bStack_188))) &
               0xfffffffffffffffe);
  }
  bStack_188 = 0;
  uStack_187 = 0;
  _ZN10atransport11SetFeaturesERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
            (puVar19,&bStack_188);
  if ((bStack_188 & 1) != 0) {
    _ZdaPvSt11align_val_t
              (lStack_178,
               CONCAT53(uStack_185,CONCAT12(uStack_186,CONCAT11(uStack_187,bStack_188))) &
               0xfffffffffffffffe);
  }
  if (2 < (ulong)(((long)(auStack_170._8_8_ - auStack_170._0_8_) >> 3) * -0x5555555555555555)) {
    bStack_1a0 = 2;
    uStack_19f = 0x3b;
    uStack_19e = 0;
    _ZN7android4base5SplitERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_
              (&bStack_188,(byte *)(auStack_170._0_8_ + 0x30),&bStack_1a0);
    pbVar18 = pbStack_180;
    pbVar12 = (byte *)CONCAT53(uStack_185,CONCAT12(uStack_186,CONCAT11(uStack_187,bStack_188)));
    if (pbVar12 != pbStack_180) {
      pauVar1 = (undefined1 (*) [16])(puVar19 + 0xe);
      pauVar2 = (undefined1 (*) [16])(puVar19 + 0xb);
      pauVar3 = (undefined1 (*) [16])(puVar19 + 8);
      do {
        if ((*pbVar12 & 1) == 0) {
          if (*pbVar12 >> 1 != 0) goto code_r0x003caa37;
        }
        else if (*(long *)(pbVar12 + 8) != 0) {
code_r0x003caa37:
          auStack_1c0 = (undefined1  [16])0x0;
          lStack_1b0 = 0;
          bStack_1d8 = 2;
          uStack_1d7 = 0x3d;
          uStack_1d6 = 0;
          _ZN7android4base5SplitERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_
                    (auStack_1c0,pbVar12,&bStack_1d8);
          if ((bStack_1d8 & 1) != 0) {
            _ZdaPvSt11align_val_t
                      (uStack_1c8,
                       CONCAT53(uStack_1d5,CONCAT12(uStack_1d6,CONCAT11(uStack_1d7,bStack_1d8))) &
                       0xfffffffffffffffe);
          }
          pbVar17 = (byte *)auStack_1c0._0_8_;
          if (auStack_1c0._8_8_ - auStack_1c0._0_8_ == 0x30) {
            bVar4 = *(byte *)auStack_1c0._0_8_;
            if ((bVar4 & 1) == 0) {
              uVar15 = (ulong)(bVar4 >> 1);
            }
            else {
              uVar15 = *(ulong *)(auStack_1c0._0_8_ + 8);
            }
            if (uVar15 - 8 < 10) {
              pauVar21 = (undefined1 (*) [16])(auStack_1c0._0_8_ + 0x18);
              switch(uVar15) {
              case 8:
                if ((bVar4 & 1) == 0) {
                  pbVar17 = (byte *)(auStack_1c0._0_8_ + 1);
                }
                else {
                  pbVar17 = *(byte **)(auStack_1c0._0_8_ + 0x10);
                }
                if (*(long *)pbVar17 == 0x7365727574616566) {
                  _ZN10atransport11SetFeaturesERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                            (puVar19);
                }
                break;
              case 0xf:
                if ((bVar4 & 1) == 0) {
                  pbVar17 = (byte *)(auStack_1c0._0_8_ + 1);
                }
                else {
                  pbVar17 = *(byte **)(auStack_1c0._0_8_ + 0x10);
                }
                if (pauVar3 != pauVar21 &&
                    (*(long *)(pbVar17 + 7) == 0x656d616e2e746375 &&
                    *(long *)pbVar17 == 0x75646f72702e6f72)) {
                  bVar4 = (*pauVar21)[0];
                  if (((*pauVar3)[0] & 1) == 0) {
                    if ((bVar4 & 1) == 0) {
                      puVar19[10] = *(undefined8 *)(auStack_1c0._0_8_ + 0x28);
                      *pauVar3 = *pauVar21;
                    }
                    else {
                      uVar10 = *(undefined8 *)(auStack_1c0._0_8_ + 0x20);
                      uVar20 = *(undefined8 *)(auStack_1c0._0_8_ + 0x28);
                      pauVar21 = pauVar3;
code_r0x003cacfa:
                      func_0x0032e990(pauVar21,uVar20,uVar10);
                    }
                  }
                  else {
                    bVar24 = (bVar4 & 1) != 0;
                    pbVar17 = (byte *)(auStack_1c0._0_8_ + 0x19);
                    if (bVar24) {
                      pbVar17 = *(byte **)(auStack_1c0._0_8_ + 0x28);
                    }
                    uVar15 = (ulong)(bVar4 >> 1);
                    if (bVar24) {
                      uVar15 = *(ulong *)(auStack_1c0._0_8_ + 0x20);
                    }
                    func_0x0032e920(pauVar3,pbVar17,uVar15);
                  }
                }
                break;
              case 0x10:
                if ((bVar4 & 1) == 0) {
                  pbVar17 = (byte *)(auStack_1c0._0_8_ + 1);
                }
                else {
                  pbVar17 = *(byte **)(auStack_1c0._0_8_ + 0x10);
                }
                auVar25[0] = -(*pbVar17 == 0x72);
                auVar25[1] = -(pbVar17[1] == 0x6f);
                auVar25[2] = -(pbVar17[2] == 0x2e);
                auVar25[3] = -(pbVar17[3] == 0x70);
                auVar25[4] = -(pbVar17[4] == 0x72);
                auVar25[5] = -(pbVar17[5] == 0x6f);
                auVar25[6] = -(pbVar17[6] == 100);
                auVar25[7] = -(pbVar17[7] == 0x75);
                auVar25[8] = -(pbVar17[8] == 99);
                auVar25[9] = -(pbVar17[9] == 0x74);
                auVar25[10] = -(pbVar17[10] == 0x2e);
                auVar25[0xb] = -(pbVar17[0xb] == 0x6d);
                auVar25[0xc] = -(pbVar17[0xc] == 0x6f);
                auVar25[0xd] = -(pbVar17[0xd] == 100);
                auVar25[0xe] = -(pbVar17[0xe] == 0x65);
                auVar25[0xf] = -(pbVar17[0xf] == 0x6c);
                if (pauVar2 != pauVar21 &&
                    (ushort)((ushort)(SUB161(auVar25 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar25 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar25 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar25 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar25 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar25 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar25 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar25 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar25 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar25 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar25 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar25 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar25 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar25 >> 0x77,0) & 1) << 0xe |
                            (ushort)(auVar25[0xf] >> 7) << 0xf) == 0xffff) {
                  bVar4 = (*pauVar21)[0];
                  if (((*pauVar2)[0] & 1) == 0) {
                    if ((bVar4 & 1) != 0) {
                      uVar10 = *(undefined8 *)(auStack_1c0._0_8_ + 0x20);
                      uVar20 = *(undefined8 *)(auStack_1c0._0_8_ + 0x28);
                      pauVar21 = pauVar2;
                      goto code_r0x003cacfa;
                    }
                    puVar19[0xd] = *(undefined8 *)(auStack_1c0._0_8_ + 0x28);
                    *pauVar2 = *pauVar21;
                  }
                  else {
                    bVar24 = (bVar4 & 1) != 0;
                    pbVar17 = (byte *)(auStack_1c0._0_8_ + 0x19);
                    if (bVar24) {
                      pbVar17 = *(byte **)(auStack_1c0._0_8_ + 0x28);
                    }
                    uVar15 = (ulong)(bVar4 >> 1);
                    if (bVar24) {
                      uVar15 = *(ulong *)(auStack_1c0._0_8_ + 0x20);
                    }
                    func_0x0032e920(pauVar2,pbVar17,uVar15);
                  }
                }
                break;
              case 0x11:
                if ((bVar4 & 1) == 0) {
                  pbVar17 = (byte *)(auStack_1c0._0_8_ + 1);
                }
                else {
                  pbVar17 = *(byte **)(auStack_1c0._0_8_ + 0x10);
                }
                auVar26[0] = -(*pbVar17 == 0x72);
                auVar26[1] = -(pbVar17[1] == 0x6f);
                auVar26[2] = -(pbVar17[2] == 0x2e);
                auVar26[3] = -(pbVar17[3] == 0x70);
                auVar26[4] = -(pbVar17[4] == 0x72);
                auVar26[5] = -(pbVar17[5] == 0x6f);
                auVar26[6] = -(pbVar17[6] == 100);
                auVar26[7] = -(pbVar17[7] == 0x75);
                auVar26[8] = -(pbVar17[8] == 99);
                auVar26[9] = -(pbVar17[9] == 0x74);
                auVar26[10] = -(pbVar17[10] == 0x2e);
                auVar26[0xb] = -(pbVar17[0xb] == 100);
                auVar26[0xc] = -(pbVar17[0xc] == 0x65);
                auVar26[0xd] = -(pbVar17[0xd] == 0x76);
                auVar26[0xe] = -(pbVar17[0xe] == 0x69);
                auVar26[0xf] = -(pbVar17[0xf] == 99);
                auVar27[0] = -(pbVar17[0x10] == 0x65);
                auVar27[1] = 0xff;
                auVar27[2] = 0xff;
                auVar27[3] = 0xff;
                auVar27[4] = 0xff;
                auVar27[5] = 0xff;
                auVar27[6] = 0xff;
                auVar27[7] = 0xff;
                auVar27[8] = 0xff;
                auVar27[9] = 0xff;
                auVar27[10] = 0xff;
                auVar27[0xb] = 0xff;
                auVar27[0xc] = 0xff;
                auVar27[0xd] = 0xff;
                auVar27[0xe] = 0xff;
                auVar27[0xf] = 0xff;
                auVar27 = auVar27 & auVar26;
                if (pauVar1 != pauVar21 &&
                    (ushort)((ushort)(SUB161(auVar27 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar27 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar27 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar27 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar27 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar27 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar27 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar27 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar27 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar27 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar27 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar27 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar27[0xf] >> 7) << 0xf) == 0xffff) {
                  bVar4 = (*pauVar21)[0];
                  if (((*pauVar1)[0] & 1) == 0) {
                    if ((bVar4 & 1) != 0) {
                      uVar10 = *(undefined8 *)(auStack_1c0._0_8_ + 0x20);
                      uVar20 = *(undefined8 *)(auStack_1c0._0_8_ + 0x28);
                      pauVar21 = pauVar1;
                      goto code_r0x003cacfa;
                    }
                    puVar19[0x10] = *(undefined8 *)(auStack_1c0._0_8_ + 0x28);
                    *pauVar1 = *pauVar21;
                  }
                  else {
                    bVar24 = (bVar4 & 1) != 0;
                    pbVar17 = (byte *)(auStack_1c0._0_8_ + 0x19);
                    if (bVar24) {
                      pbVar17 = *(byte **)(auStack_1c0._0_8_ + 0x28);
                    }
                    uVar15 = (ulong)(bVar4 >> 1);
                    if (bVar24) {
                      uVar15 = *(ulong *)(auStack_1c0._0_8_ + 0x20);
                    }
                    func_0x0032e920(pauVar1,pbVar17,uVar15);
                  }
                }
              }
            }
            pbVar17 = (byte *)auStack_1c0._0_8_;
          }
          if (pbVar17 != (byte *)0x0) {
            pbVar6 = pbVar17;
            for (pbVar23 = (byte *)auStack_1c0._8_8_; pbVar17 != pbVar23; pbVar23 = pbVar23 + -0x18)
            {
              if ((pbVar23[-0x18] & 1) != 0) {
                _ZdaPvSt11align_val_t
                          (*(undefined8 *)(pbVar23 + -8),
                           *(ulong *)(pbVar23 + -0x18) & 0xfffffffffffffffe);
              }
              pbVar6 = (byte *)auStack_1c0._0_8_;
            }
            auStack_1c0._8_8_ = pbVar17;
            _ZdaPvSt11align_val_t(pbVar6,lStack_1b0 - (long)pbVar6);
          }
        }
        pbVar12 = pbVar12 + 0x18;
      } while (pbVar12 != pbVar18);
      pbVar12 = (byte *)CONCAT53(uStack_185,CONCAT12(uStack_186,CONCAT11(uStack_187,bStack_188)));
    }
    if (pbVar12 != (byte *)0x0) {
      pbVar18 = pbStack_180;
      pbVar17 = pbVar12;
      if (pbVar12 != pbStack_180) {
        do {
          if ((pbVar18[-0x18] & 1) != 0) {
            _ZdaPvSt11align_val_t
                      (*(undefined8 *)(pbVar18 + -8),
                       *(ulong *)(pbVar18 + -0x18) & 0xfffffffffffffffe);
          }
          pbVar18 = pbVar18 + -0x18;
        } while (pbVar18 != pbVar12);
        pbVar17 = (byte *)CONCAT53(uStack_185,CONCAT12(uStack_186,CONCAT11(uStack_187,bStack_188)));
      }
      pbStack_180 = pbVar12;
      _ZdaPvSt11align_val_t(pbVar17,lStack_178 - (long)pbVar17);
    }
    if ((bStack_1a0 & 1) != 0) {
      _ZdaPvSt11align_val_t
                (uStack_190,
                 CONCAT53(uStack_19d,CONCAT12(uStack_19e,CONCAT11(uStack_19f,bStack_1a0))) &
                 0xfffffffffffffffe);
    }
  }
  bVar4 = *(byte *)auStack_170._0_8_;
  if ((bVar4 & 1) == 0) {
    uVar15 = (ulong)(bVar4 >> 1);
    if (uVar15 == 6) goto code_r0x003cae19;
code_r0x003cadf2:
    if (uVar15 == 8) {
      if ((bVar4 & 1) == 0) {
        pbVar12 = (byte *)(auStack_170._0_8_ + 1);
      }
      else {
        pbVar12 = *(byte **)(auStack_170._0_8_ + 0x10);
      }
      if (*(long *)pbVar12 == 0x797265766f636572) {
        uVar10 = 9;
        if ((((byte)adb_trace_mask & 1) != 0) && ((int)adb_trace_severity._0_4_ < 2)) {
          cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
          if (cVar8 == '\0') {
            uVar10 = 9;
          }
          else {
            puVar14 = (undefined4 *)func_0x0099bce0();
            uVar9 = *puVar14;
            _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                      (&bStack_188,&UNK_00181a61,0x189,1,0,0xffffffff);
            uVar10 = _ZN7android4base10LogMessage6streamEv(&bStack_188);
            func_0x0032eb30(uVar10,&UNK_0017d582,0x27);
            _ZN7android4base10LogMessageD2Ev(&bStack_188);
            *puVar14 = uVar9;
            uVar10 = 9;
          }
        }
        goto code_r0x003cafc3;
      }
      if ((bVar4 & 1) == 0) {
        pbVar12 = (byte *)(auStack_170._0_8_ + 1);
      }
      else {
        pbVar12 = *(byte **)(auStack_170._0_8_ + 0x10);
      }
      if (*(long *)pbVar12 == 0x64616f6c65646973) {
        uVar10 = 10;
        if ((((byte)adb_trace_mask & 1) != 0) && ((int)adb_trace_severity._0_4_ < 2)) {
          cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
          if (cVar8 == '\0') {
            uVar10 = 10;
          }
          else {
            puVar14 = (undefined4 *)func_0x0099bce0();
            uVar9 = *puVar14;
            _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                      (&bStack_188,&UNK_00181a61,0x18c,1,0,0xffffffff);
            uVar10 = _ZN7android4base10LogMessage6streamEv(&bStack_188);
            func_0x0032eb30(uVar10,&UNK_00162dab,0x27);
            _ZN7android4base10LogMessageD2Ev(&bStack_188);
            *puVar14 = uVar9;
            uVar10 = 10;
          }
        }
        goto code_r0x003cafc3;
      }
    }
    else if (uVar15 == 10) {
      if ((bVar4 & 1) == 0) {
        pbVar12 = (byte *)(auStack_170._0_8_ + 1);
      }
      else {
        pbVar12 = *(byte **)(auStack_170._0_8_ + 0x10);
      }
      if (*(short *)(pbVar12 + 8) == 0x7265 && *(long *)pbVar12 == 0x64616f6c746f6f62) {
        uVar10 = 6;
        if ((((byte)adb_trace_mask & 1) != 0) && ((int)adb_trace_severity._0_4_ < 2)) {
          cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
          if (cVar8 == '\0') {
            uVar10 = 6;
          }
          else {
            puVar14 = (undefined4 *)func_0x0099bce0();
            uVar9 = *puVar14;
            _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                      (&bStack_188,&UNK_00181a61,0x183,1,0,0xffffffff);
            uVar10 = _ZN7android4base10LogMessage6streamEv(&bStack_188);
            func_0x0032eb30(uVar10,&UNK_001679a3,0x29);
            _ZN7android4base10LogMessageD2Ev(&bStack_188);
            *puVar14 = uVar9;
            uVar10 = 6;
          }
        }
        goto code_r0x003cafc3;
      }
    }
  }
  else {
    uVar15 = *(ulong *)(auStack_170._0_8_ + 8);
    if (uVar15 != 6) goto code_r0x003cadf2;
code_r0x003cae19:
    if ((bVar4 & 1) == 0) {
      pbVar12 = (byte *)(auStack_170._0_8_ + 1);
    }
    else {
      pbVar12 = *(byte **)(auStack_170._0_8_ + 0x10);
    }
    if (*(short *)(pbVar12 + 4) == 0x6563 && *(int *)pbVar12 == 0x69766564) {
      uVar10 = 7;
      if ((((byte)adb_trace_mask & 1) != 0) && ((int)adb_trace_severity._0_4_ < 2)) {
        cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
        if (cVar8 == '\0') {
          uVar10 = 7;
        }
        else {
          puVar14 = (undefined4 *)func_0x0099bce0();
          uVar9 = *puVar14;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (&bStack_188,&UNK_00181a61,0x186,1,0,0xffffffff);
          uVar10 = _ZN7android4base10LogMessage6streamEv(&bStack_188);
          func_0x0032eb30(uVar10,&UNK_00173ed4,0x25);
          _ZN7android4base10LogMessageD2Ev(&bStack_188);
          *puVar14 = uVar9;
          uVar10 = 7;
        }
      }
      goto code_r0x003cafc3;
    }
    if ((bVar4 & 1) == 0) {
      pbVar12 = (byte *)(auStack_170._0_8_ + 1);
    }
    else {
      pbVar12 = *(byte **)(auStack_170._0_8_ + 0x10);
    }
    if (*(short *)(pbVar12 + 4) == 0x6575 && *(int *)pbVar12 == 0x63736572) {
      uVar10 = 0xb;
      if ((((byte)adb_trace_mask & 1) != 0) && ((int)adb_trace_severity._0_4_ < 2)) {
        cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
        if (cVar8 == '\0') {
          uVar10 = 0xb;
        }
        else {
          puVar14 = (undefined4 *)func_0x0099bce0();
          uVar9 = *puVar14;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (&bStack_188,&UNK_00181a61,399,1,0,0xffffffff);
          uVar10 = _ZN7android4base10LogMessage6streamEv(&bStack_188);
          func_0x0032eb30(uVar10,&UNK_0015959b,0x25);
          _ZN7android4base10LogMessageD2Ev(&bStack_188);
          *puVar14 = uVar9;
          uVar10 = 0xb;
        }
      }
      goto code_r0x003cafc3;
    }
  }
  uVar10 = 8;
  if ((((byte)adb_trace_mask & 1) != 0) && ((int)adb_trace_severity._0_4_ < 2)) {
    cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
    if (cVar8 != '\0') goto code_r0x003cb105;
    goto code_r0x003cb0f6;
  }
code_r0x003cafc3:
  while( true ) {
    _ZN10atransport18SetConnectionStateE15ConnectionState(puVar19,uVar10);
    uVar10 = auStack_170._0_8_;
    if (auStack_170._0_8_ != 0) {
      for (lVar22 = auStack_170._8_8_; uVar10 != lVar22; lVar22 = lVar22 + -0x18) {
        if ((*(byte *)(lVar22 + -0x18) & 1) != 0) {
          _ZdaPvSt11align_val_t
                    (*(undefined8 *)(lVar22 + -8),*(ulong *)(lVar22 + -0x18) & 0xfffffffffffffffe);
        }
      }
      auStack_170._8_8_ = uVar10;
      _ZdaPvSt11align_val_t(auStack_170._0_8_,lStack_160 - auStack_170._0_8_);
    }
    if (*(undefined8 **)(in_FS_OFFSET + 0x28) == puStack_150) break;
    func_0x0099bd00();
code_r0x003cb105:
    puVar14 = (undefined4 *)func_0x0099bce0();
    uVar9 = *puVar14;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (&bStack_188,&UNK_00181a61,0x192,1,0,0xffffffff);
    uVar10 = _ZN7android4base10LogMessage6streamEv(&bStack_188);
    func_0x0032eb30(uVar10,&UNK_00170562,0x23);
    _ZN7android4base10LogMessageD2Ev(&bStack_188);
    *puVar14 = uVar9;
code_r0x003cb0f6:
    uVar10 = 8;
  }
  return *(undefined8 **)(in_FS_OFFSET + 0x28);
}


