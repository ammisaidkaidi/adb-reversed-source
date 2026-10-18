// Function: _ZN4absl12lts_2026052612log_internal10LogMessage19CopyToEncodedBufferILNS2_10StringTypeE0EEEvNSt3__117basic_string_viewIwNS5_11char_traitsIwEEEE
// Address: 004bd460
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 *
_ZN4absl12lts_2026052612log_internal10LogMessage19CopyToEncodedBufferILNS2_10StringTypeE0EEEvNSt3__117basic_string_viewIwNS5_11char_traitsIwEEEE
          (undefined8 *param_1,long param_2,undefined2 *param_3,ulong param_4)

{
  char *pcVar1;
  char cVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  undefined8 *extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  code **ppcVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  ulong uVar23;
  long in_FS_OFFSET;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined2 uStack_b2;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined2 *puStack_a0;
  long lStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined2 uStack_3a;
  undefined8 *puStack_38;
  
  puStack_38 = *(undefined8 **)(in_FS_OFFSET + 0x28);
  lVar12 = param_1[1];
  puStack_60 = param_1;
  if (*(long *)(lVar12 + 0x3c50) == 0) {
    *(long *)(lVar12 + 0x3c50) = lVar12 + 0x1b8;
    *(undefined8 *)(lVar12 + 0x3c58) = 15000;
    pcStack_80 = (code *)&UNK_004bd4bb;
    _ZN4absl12lts_2026052612log_internal10LogMessage14LogMessageData27InitializeEncodingAndFormatEv
              ();
  }
  uStack_58 = *(long *)(lVar12 + 0x3c50);
  uStack_50 = *(ulong *)(lVar12 + 0x3c58);
  lVar12 = (long)param_3 * 4;
  pcStack_80 = (code *)&UNK_004bd4e3;
  auVar24 = _ZN4absl12lts_2026052612log_internal18EncodeMessageStartEmmPNS0_4SpanIcEE
                      (7,(long)param_3 * 4 + 0xb,&uStack_58);
  uStack_78 = auVar24._0_8_;
  puVar18 = (undefined8 *)0x6;
  pcStack_80 = (code *)&UNK_004bd4fa;
  lVar11 = lVar12;
  auVar25 = _ZN4absl12lts_2026052612log_internal18EncodeMessageStartEmmPNS0_4SpanIcEE
                      (6,lVar12,&uStack_58);
  puVar8 = puStack_60;
  puVar19 = auVar25._0_8_;
  if (puVar19 == (undefined8 *)0x0) {
    puVar21 = (undefined8 *)puStack_60[1];
    puVar19 = puVar21;
    if (puVar21[0x78a] == 0) {
      puVar21[0x78a] = puVar21 + 0x37;
      puVar21[0x78b] = 15000;
      pcStack_80 = (code *)&UNK_004bd610;
      puVar18 = puVar21;
      _ZN4absl12lts_2026052612log_internal10LogMessage14LogMessageData27InitializeEncodingAndFormatEv
                ();
      puVar19 = (undefined8 *)puVar8[1];
      if (puVar19[0x78a] == 0) {
        puVar19[0x78a] = puVar19 + 0x37;
        puVar19[0x78b] = 15000;
        pcStack_80 = (code *)&UNK_004bd63f;
        puVar18 = puVar19;
        _ZN4absl12lts_2026052612log_internal10LogMessage14LogMessageData27InitializeEncodingAndFormatEv
                  ();
      }
    }
    puVar21[0x78b] = puVar21[0x78b] - puVar19[0x78b];
  }
  else {
    uStack_3a = 0;
    lStack_70 = auVar24._8_8_;
    uStack_68 = auVar25._8_8_;
    if (param_3 != (undefined2 *)0x0) {
      lVar11 = 0;
      param_3 = &uStack_3a;
      do {
        param_4 = uStack_50;
        if (uStack_50 < 4) break;
        pcStack_80 = (code *)&UNK_004bd55e;
        lVar5 = _ZN4absl12lts_2026052616strings_internal10WideToUtf8EwPcRNS1_10ShiftStateE
                          (*(undefined4 *)(param_2 + lVar11),uStack_58,param_3);
        if (lVar5 == -1) {
          pcStack_80 = (code *)&UNK_004bd575;
          lVar5 = _ZN4absl12lts_2026052616strings_internal10WideToUtf8EwPcRNS1_10ShiftStateE
                            (0xfffd,uStack_58,param_3);
        }
        uStack_58 = uStack_58 + lVar5;
        param_4 = uStack_50 - lVar5;
        lVar11 = lVar11 + 4;
        uStack_50 = param_4;
      } while (lVar12 - lVar11 != 0);
    }
    puVar21 = &uStack_58;
    pcStack_80 = (code *)&UNK_004bd58a;
    _ZN4absl12lts_2026052612log_internal19EncodeMessageLengthENS0_4SpanIcEEPKS3_
              (puVar19,uStack_68,puVar21);
    pcStack_80 = (code *)&UNK_004bd59a;
    lVar11 = lStack_70;
    _ZN4absl12lts_2026052612log_internal19EncodeMessageLengthENS0_4SpanIcEEPKS3_
              (uStack_78,lStack_70,puVar21);
    puVar22 = (undefined8 *)puStack_60[1];
    puVar8 = puVar22 + 0x78a;
    puVar18 = puVar22;
    if (puVar22[0x78a] == 0) {
      puVar22[0x78a] = puVar22 + 0x37;
      puVar22[0x78b] = 15000;
      pcStack_80 = (code *)&UNK_004bd5d1;
      _ZN4absl12lts_2026052612log_internal10LogMessage14LogMessageData27InitializeEncodingAndFormatEv
                ();
    }
    *(undefined4 *)puVar8 = (undefined4)uStack_58;
    *(undefined4 *)((long)puVar22 + 0x3c54) = uStack_58._4_4_;
    *(undefined4 *)(puVar22 + 0x78b) = (undefined4)uStack_50;
    *(undefined4 *)((long)puVar22 + 0x3c5c) = uStack_50._4_4_;
  }
  if (*(undefined8 **)(in_FS_OFFSET + 0x28) == puStack_38) {
    return *(undefined8 **)(in_FS_OFFSET + 0x28);
  }
  pcStack_80 = 
  _ZN4absl12lts_2026052612log_internal10LogMessage19CopyToEncodedBufferILNS2_10StringTypeE1EEEvNSt3__117basic_string_viewIwNS5_11char_traitsIwEEEE
  ;
  func_0x0099bd00();
  ppcVar14 = &pcStack_80;
  puStack_b0 = *(undefined8 **)(in_FS_OFFSET + 0x28);
  lVar5 = puVar18[1];
  puStack_d8 = puVar18;
  puStack_a8 = puVar8;
  puStack_a0 = param_3;
  lStack_98 = lVar12;
  puStack_90 = puVar21;
  puStack_88 = puVar19;
  pcStack_80 = (code *)&stack0xfffffffffffffff8;
  if (*(long *)(lVar5 + 0x3c50) == 0) {
    *(long *)(lVar5 + 0x3c50) = lVar5 + 0x1b8;
    *(undefined8 *)(lVar5 + 0x3c58) = 15000;
    pcStack_80 = (code *)&stack0xfffffffffffffff8;
    _ZN4absl12lts_2026052612log_internal10LogMessage14LogMessageData27InitializeEncodingAndFormatEv
              ();
  }
  uStack_d0 = *(long *)(lVar5 + 0x3c50);
  uStack_c8 = *(ulong *)(lVar5 + 0x3c58);
  puVar17 = (undefined *)((long)extraout_RDX * 4);
  auVar24 = _ZN4absl12lts_2026052612log_internal18EncodeMessageStartEmmPNS0_4SpanIcEE
                      (7,(long)extraout_RDX * 4 + 0xb,&uStack_d0);
  uStack_f0 = auVar24._0_8_;
  puVar19 = (undefined8 *)0x1;
  puVar15 = puVar17;
  auVar25 = _ZN4absl12lts_2026052612log_internal18EncodeMessageStartEmmPNS0_4SpanIcEE
                      (1,puVar17,&uStack_d0);
  puVar18 = puStack_d8;
  puVar21 = auVar25._0_8_;
  uVar9 = (undefined4)param_4;
  puVar8 = extraout_RDX;
  if (puVar21 == (undefined8 *)0x0) {
    puVar22 = (undefined8 *)puStack_d8[1];
    puVar21 = puVar22;
    if (puVar22[0x78a] == 0) {
      puVar22[0x78a] = puVar22 + 0x37;
      puVar22[0x78b] = 15000;
      puVar19 = puVar22;
      _ZN4absl12lts_2026052612log_internal10LogMessage14LogMessageData27InitializeEncodingAndFormatEv
                ();
      puVar21 = (undefined8 *)puVar18[1];
      if (puVar21[0x78a] == 0) {
        puVar21[0x78a] = puVar21 + 0x37;
        puVar21[0x78b] = 15000;
        puVar19 = puVar21;
        _ZN4absl12lts_2026052612log_internal10LogMessage14LogMessageData27InitializeEncodingAndFormatEv
                  ();
      }
    }
    puVar22[0x78b] = puVar22[0x78b] - puVar21[0x78b];
  }
  else {
    uStack_b2 = 0;
    puStack_e8 = auVar24._8_8_;
    uStack_e0 = auVar25._8_8_;
    if (extraout_RDX != (undefined8 *)0x0) {
      lVar12 = 0;
      puVar8 = (undefined8 *)&uStack_b2;
      do {
        param_4 = uStack_c8;
        if (uStack_c8 < 4) break;
        lVar5 = _ZN4absl12lts_2026052616strings_internal10WideToUtf8EwPcRNS1_10ShiftStateE
                          (*(undefined4 *)(lVar11 + lVar12),uStack_d0,puVar8);
        if (lVar5 == -1) {
          lVar5 = _ZN4absl12lts_2026052616strings_internal10WideToUtf8EwPcRNS1_10ShiftStateE
                            (0xfffd,uStack_d0,puVar8);
        }
        uStack_d0 = uStack_d0 + lVar5;
        param_4 = uStack_c8 - lVar5;
        lVar12 = lVar12 + 4;
        uStack_c8 = param_4;
      } while ((long)puVar17 - lVar12 != 0);
    }
    uVar9 = (undefined4)param_4;
    puVar22 = &uStack_d0;
    _ZN4absl12lts_2026052612log_internal19EncodeMessageLengthENS0_4SpanIcEEPKS3_
              (puVar21,uStack_e0,puVar22);
    puVar15 = puStack_e8;
    _ZN4absl12lts_2026052612log_internal19EncodeMessageLengthENS0_4SpanIcEEPKS3_
              (uStack_f0,puStack_e8,puVar22);
    puVar13 = (undefined8 *)puStack_d8[1];
    puVar18 = puVar13 + 0x78a;
    puVar19 = puVar13;
    if (puVar13[0x78a] == 0) {
      puVar13[0x78a] = puVar13 + 0x37;
      puVar13[0x78b] = 15000;
      _ZN4absl12lts_2026052612log_internal10LogMessage14LogMessageData27InitializeEncodingAndFormatEv
                ();
    }
    *(undefined4 *)puVar18 = (undefined4)uStack_d0;
    *(undefined4 *)((long)puVar13 + 0x3c54) = uStack_d0._4_4_;
    *(undefined4 *)(puVar13 + 0x78b) = (undefined4)uStack_c8;
    *(undefined4 *)((long)puVar13 + 0x3c5c) = uStack_c8._4_4_;
  }
  if (*(undefined8 **)(in_FS_OFFSET + 0x28) == puStack_b0) {
    return *(undefined8 **)(in_FS_OFFSET + 0x28);
  }
  func_0x0099bd00();
  uVar6 = func_0x0099bcf0(puVar15);
  puVar13 = &uStack_f0;
  uVar10 = extraout_RDX_00;
  while( true ) {
    puVar16 = puVar15;
    *(code ***)((long)puVar13 + -8) = ppcVar14;
    *(undefined8 **)((long)puVar13 + -0x10) = puVar21;
    *(undefined8 **)((long)puVar13 + -0x18) = puVar22;
    *(undefined **)((long)puVar13 + -0x20) = puVar17;
    *(undefined8 **)((long)puVar13 + -0x28) = puVar8;
    *(undefined8 **)((long)puVar13 + -0x30) = puVar18;
    *(undefined4 *)((long)puVar13 + -0x50) = uVar9;
    *(int *)((long)puVar13 + -0x4c) = (int)uVar10;
    *(undefined8 *)((long)puVar13 + -0x58) = uVar6;
    *(undefined8 *)((long)puVar13 + -0x38) = *(undefined8 *)(in_FS_OFFSET + 0x28);
    *(undefined **)((long)puVar13 + -0x60) = &UNK_004bd8ee;
    puVar7 = (undefined4 *)func_0x0099bce0();
    *(undefined4 *)puVar19 = *puVar7;
    *(undefined **)((long)puVar13 + -0x60) = &UNK_004bd8f7;
    auVar24 = _ZN4absl12lts_202605263NowEv();
    uVar23 = auVar24._8_8_ & 0xffffffff;
    *(undefined **)((long)puVar13 + -0x60) = &UNK_004bd907;
    puVar8 = (undefined8 *)_Znwm(0x76f8);
    *(long *)((long)puVar13 + -0x48) = auVar24._0_8_;
    *(int *)((long)puVar13 + -0x40) = auVar24._8_4_;
    uVar9 = *(undefined4 *)((long)puVar13 + -0x4c);
    *(ulong *)((long)puVar13 + -0x60) = uVar23;
    *(undefined8 *)((long)puVar13 + -0x68) = *(undefined8 *)((long)puVar13 + -0x48);
    *(undefined **)((long)puVar13 + -0x70) = &UNK_004bd92f;
    puVar15 = puVar16;
    puVar20 = puVar8;
    _ZN4absl12lts_2026052612log_internal10LogMessage14LogMessageDataC1ENSt3__117basic_string_viewIcNS4_11char_traitsIcEEEEiNS0_11LogSeverityENS0_4TimeE
              (puVar8,puVar16,*(undefined8 *)((long)puVar13 + -0x58));
    puVar19[1] = puVar8;
    *(undefined2 *)(puVar8 + 0x10) = 0;
    *(undefined1 *)((long)puVar8 + 0x82) = 0;
    if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)((long)puVar13 + -0x38)) break;
    *(undefined **)((long)puVar13 + -0x60) = &UNK_004bd975;
    auVar25 = func_0x0099bd00();
    uVar10 = auVar25._8_8_;
    *(undefined1 **)((long)puVar13 + -0x60) = (undefined1 *)((long)puVar13 + -8);
    *(ulong *)((long)puVar13 + -0x68) = uVar23;
    *(long *)((long)puVar13 + -0x70) = auVar24._0_8_;
    *(undefined8 **)((long)puVar13 + -0x78) = puVar19;
    *(long *)((long)puVar13 + -0x80) = auVar25._0_8_;
    *(undefined **)((long)puVar13 + -0x88) = &UNK_004bd990;
    uVar6 = func_0x0099bcf0(puVar15);
    uVar9 = 0;
    puVar18 = *(undefined8 **)((long)puVar13 + -0x78);
    puVar22 = *(undefined8 **)((long)puVar13 + -0x70);
    puVar21 = *(undefined8 **)((long)puVar13 + -0x68);
    ppcVar14 = *(code ***)((long)puVar13 + -0x60);
    puVar13 = (undefined8 *)((long)puVar13 + -0x58);
    puVar19 = puVar20;
    puVar17 = puVar16;
  }
  *(undefined8 *)((long)puVar13 + -8) = *(undefined8 *)((long)puVar13 + -8);
  *(undefined8 *)((long)puVar13 + -0x10) = *(undefined8 *)((long)puVar13 + -0x10);
  *(undefined8 *)((long)puVar13 + -0x18) = *(undefined8 *)((long)puVar13 + -0x18);
  *(undefined8 *)((long)puVar13 + -0x20) = *(undefined8 *)((long)puVar13 + -0x30);
  *(undefined8 *)((long)puVar13 + -0x28) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  *(undefined **)((long)puVar13 + -0xb0) = &UNK_004bb755;
  puVar8 = puVar19;
  cVar2 = _ZN4absl12lts_2026052612log_internal13IsInitializedEv();
  if (cVar2 != '\0') {
    lVar12 = puVar19[1];
    puVar8 = *(undefined8 **)(lVar12 + 0x10);
    puVar15 = *(undefined **)(lVar12 + 0x18);
    uVar4 = *(undefined4 *)(lVar12 + 0x20);
    *(undefined **)((long)puVar13 + -0xb0) = &UNK_004bb771;
    cVar2 = _ZN4absl12lts_2026052612log_internal20ShouldLogBacktraceAtENSt3__117basic_string_viewIcNS2_11char_traitsIcEEEEi
                      (puVar8,puVar15,uVar4);
    if (cVar2 != '\0') {
      *(undefined8 *)((long)puVar13 + -0x48) = 0;
      *(undefined8 *)((long)puVar13 + -0x40) = 0;
      *(undefined8 *)((long)puVar13 + -0x58) = 0;
      *(undefined8 *)((long)puVar13 + -0x50) = 0;
      *(undefined8 *)((long)puVar13 + -0x68) = 0;
      *(undefined8 *)((long)puVar13 + -0x60) = 0;
      *(undefined8 *)((long)puVar13 + -0x78) = 0;
      *(undefined8 *)((long)puVar13 + -0x70) = 0;
      *(undefined8 *)((long)puVar13 + -0x88) = 0;
      *(undefined8 *)((long)puVar13 + -0x80) = 0;
      *(undefined8 *)((long)puVar13 + -0x98) = 0;
      *(undefined8 *)((long)puVar13 + -0x90) = 0;
      *(undefined8 *)((long)puVar13 + -0xa8) = 0;
      *(undefined8 *)((long)puVar13 + -0xa0) = 0;
      *(undefined8 *)((long)puVar13 + -0x38) = 0;
      uVar10 = puVar19[1];
      puVar19 = (undefined8 *)((long)puVar13 + -0xa8);
      *(undefined **)((long)puVar13 + -0xb0) = &UNK_004bb7b9;
      _ZN4absl12lts_2026052612log_internal10LogMessage11OstreamViewC2ERNS2_14LogMessageDataE
                (puVar19,uVar10);
      *(undefined **)((long)puVar13 + -0xb0) = &UNK_004bb7d7;
      func_0x0032eb30(*(long *)((long)puVar13 + -0x68) + 0x118,&UNK_001648e3,0xe);
      *(undefined **)((long)puVar13 + -0xb0) = &UNK_004bb7dc;
      uVar4 = _ZN4absl12lts_2026052612log_internal24MaxFramesInLogStackTraceEv();
      *(undefined **)((long)puVar13 + -0xb0) = &UNK_004bb7e4;
      uVar3 = _ZN4absl12lts_2026052612log_internal28ShouldSymbolizeLogStackTraceEv();
      uVar9 = 0x4bc4a0;
      *(undefined **)((long)puVar13 + -0xb0) = &UNK_004bb802;
      _ZN4absl12lts_2026052618debugging_internal14DumpStackTraceEiibPFvPKcPvES4_
                (1,uVar4,uVar3,&UNK_004bc4a0,*(long *)((long)puVar13 + -0x68) + 0x118);
      puVar15 = &UNK_0017b788;
      *(undefined **)((long)puVar13 + -0xb0) = &UNK_004bb81a;
      func_0x0032eb30(*(long *)((long)puVar13 + -0x68) + 0x118,&UNK_0017b788,2);
      *(undefined **)((long)puVar13 + -0xb0) = &UNK_004bb822;
      puVar8 = puVar19;
      _ZN4absl12lts_2026052612log_internal10LogMessage11OstreamViewD2Ev();
    }
  }
  if (*(undefined8 **)(in_FS_OFFSET + 0x28) == *(undefined8 **)((long)puVar13 + -0x28)) {
    return *(undefined8 **)(in_FS_OFFSET + 0x28);
  }
  *(undefined **)((long)puVar13 + -0xb0) = &UNK_004bb844;
  auVar24 = func_0x0099bd00();
  lVar12 = auVar24._8_8_;
  *(undefined1 **)((long)puVar13 + -0xb0) = (undefined1 *)((long)puVar13 + -8);
  *(undefined8 **)((long)puVar13 + -0xb8) = puVar19;
  *(long *)((long)puVar13 + -0xc0) = auVar24._0_8_;
  puVar19 = (undefined8 *)puVar8[1];
  *puVar19 = puVar15;
  puVar19[1] = lVar12;
  if (lVar12 == 0) {
    lVar12 = 0;
  }
  else {
    lVar11 = 0;
    puVar17 = puVar15;
    do {
      lVar5 = lVar11;
      if (lVar12 == lVar5) goto code_r0x004bb8a0;
      puVar16 = puVar17 + -1;
      pcVar1 = puVar17 + lVar12 + -1;
      lVar11 = lVar5 + 1;
      puVar17 = puVar16;
    } while (*pcVar1 != '/');
    if (lVar12 + 1 != lVar5 + 1) {
      puVar15 = puVar16 + lVar12 + 1;
      lVar12 = lVar5;
    }
  }
code_r0x004bb8a0:
  lVar11 = puVar8[1];
  *(undefined **)(lVar11 + 0x10) = puVar15;
  *(long *)(lVar11 + 0x18) = lVar12;
  *(undefined4 *)(puVar8[1] + 0x20) = uVar9;
  *(undefined **)((long)puVar13 + -200) = &UNK_004bb8bb;
  _ZN4absl12lts_2026052612log_internal10LogMessage20LogBacktraceIfNeededEv(puVar8);
  return puVar8;
}


