// Function: _ZN4absl12lts_2026052612log_internal10LogMessage19CopyToEncodedBufferILNS2_10StringTypeE1EEEvNSt3__117basic_string_viewIwNS5_11char_traitsIwEEEE
// Address: 004bd670
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 *
_ZN4absl12lts_2026052612log_internal10LogMessage19CopyToEncodedBufferILNS2_10StringTypeE1EEEvNSt3__117basic_string_viewIwNS5_11char_traitsIwEEEE
          (undefined8 *param_1,long param_2,undefined8 *param_3,ulong param_4)

{
  char *pcVar1;
  char cVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined8 extraout_RDX;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined1 *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  ulong uVar22;
  long in_FS_OFFSET;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined2 uStack_3a;
  undefined8 *puStack_38;
  
  puVar14 = &stack0xfffffffffffffff8;
  puStack_38 = *(undefined8 **)(in_FS_OFFSET + 0x28);
  lVar11 = param_1[1];
  puStack_60 = param_1;
  if (*(long *)(lVar11 + 0x3c50) == 0) {
    *(long *)(lVar11 + 0x3c50) = lVar11 + 0x1b8;
    *(undefined8 *)(lVar11 + 0x3c58) = 15000;
    _ZN4absl12lts_2026052612log_internal10LogMessage14LogMessageData27InitializeEncodingAndFormatEv
              ();
  }
  uStack_58 = *(long *)(lVar11 + 0x3c50);
  uStack_50 = *(ulong *)(lVar11 + 0x3c58);
  puVar17 = (undefined *)((long)param_3 * 4);
  auVar23 = _ZN4absl12lts_2026052612log_internal18EncodeMessageStartEmmPNS0_4SpanIcEE
                      (7,(long)param_3 * 4 + 0xb,&uStack_58);
  uStack_78 = auVar23._0_8_;
  puVar18 = (undefined8 *)0x1;
  puVar15 = puVar17;
  auVar24 = _ZN4absl12lts_2026052612log_internal18EncodeMessageStartEmmPNS0_4SpanIcEE
                      (1,puVar17,&uStack_58);
  puVar12 = puStack_60;
  puVar21 = auVar24._0_8_;
  uVar9 = (undefined4)param_4;
  if (puVar21 == (undefined8 *)0x0) {
    puVar20 = (undefined8 *)puStack_60[1];
    puVar21 = puVar20;
    if (puVar20[0x78a] == 0) {
      puVar20[0x78a] = puVar20 + 0x37;
      puVar20[0x78b] = 15000;
      puVar18 = puVar20;
      _ZN4absl12lts_2026052612log_internal10LogMessage14LogMessageData27InitializeEncodingAndFormatEv
                ();
      puVar21 = (undefined8 *)puVar12[1];
      if (puVar21[0x78a] == 0) {
        puVar21[0x78a] = puVar21 + 0x37;
        puVar21[0x78b] = 15000;
        puVar18 = puVar21;
        _ZN4absl12lts_2026052612log_internal10LogMessage14LogMessageData27InitializeEncodingAndFormatEv
                  ();
      }
    }
    puVar20[0x78b] = puVar20[0x78b] - puVar21[0x78b];
  }
  else {
    uStack_3a = 0;
    puStack_70 = auVar23._8_8_;
    uStack_68 = auVar24._8_8_;
    if (param_3 != (undefined8 *)0x0) {
      lVar11 = 0;
      param_3 = (undefined8 *)&uStack_3a;
      do {
        param_4 = uStack_50;
        if (uStack_50 < 4) break;
        lVar6 = _ZN4absl12lts_2026052616strings_internal10WideToUtf8EwPcRNS1_10ShiftStateE
                          (*(undefined4 *)(param_2 + lVar11),uStack_58,param_3);
        if (lVar6 == -1) {
          lVar6 = _ZN4absl12lts_2026052616strings_internal10WideToUtf8EwPcRNS1_10ShiftStateE
                            (0xfffd,uStack_58,param_3);
        }
        uStack_58 = uStack_58 + lVar6;
        param_4 = uStack_50 - lVar6;
        lVar11 = lVar11 + 4;
        uStack_50 = param_4;
      } while ((long)puVar17 - lVar11 != 0);
    }
    uVar9 = (undefined4)param_4;
    puVar20 = &uStack_58;
    _ZN4absl12lts_2026052612log_internal19EncodeMessageLengthENS0_4SpanIcEEPKS3_
              (puVar21,uStack_68,puVar20);
    puVar15 = puStack_70;
    _ZN4absl12lts_2026052612log_internal19EncodeMessageLengthENS0_4SpanIcEEPKS3_
              (uStack_78,puStack_70,puVar20);
    puVar13 = (undefined8 *)puStack_60[1];
    puVar12 = puVar13 + 0x78a;
    puVar18 = puVar13;
    if (puVar13[0x78a] == 0) {
      puVar13[0x78a] = puVar13 + 0x37;
      puVar13[0x78b] = 15000;
      _ZN4absl12lts_2026052612log_internal10LogMessage14LogMessageData27InitializeEncodingAndFormatEv
                ();
    }
    *(undefined4 *)puVar12 = (undefined4)uStack_58;
    *(undefined4 *)((long)puVar13 + 0x3c54) = uStack_58._4_4_;
    *(undefined4 *)(puVar13 + 0x78b) = (undefined4)uStack_50;
    *(undefined4 *)((long)puVar13 + 0x3c5c) = uStack_50._4_4_;
  }
  if (*(undefined8 **)(in_FS_OFFSET + 0x28) == puStack_38) {
    return *(undefined8 **)(in_FS_OFFSET + 0x28);
  }
  func_0x0099bd00();
  uVar7 = func_0x0099bcf0(puVar15);
  puVar13 = &uStack_78;
  uVar10 = extraout_RDX;
  while( true ) {
    puVar16 = puVar15;
    *(undefined1 **)((long)puVar13 + -8) = puVar14;
    *(undefined8 **)((long)puVar13 + -0x10) = puVar21;
    *(undefined8 **)((long)puVar13 + -0x18) = puVar20;
    *(undefined **)((long)puVar13 + -0x20) = puVar17;
    *(undefined8 **)((long)puVar13 + -0x28) = param_3;
    *(undefined8 **)((long)puVar13 + -0x30) = puVar12;
    *(undefined4 *)((long)puVar13 + -0x50) = uVar9;
    *(int *)((long)puVar13 + -0x4c) = (int)uVar10;
    *(undefined8 *)((long)puVar13 + -0x58) = uVar7;
    *(undefined8 *)((long)puVar13 + -0x38) = *(undefined8 *)(in_FS_OFFSET + 0x28);
    *(undefined **)((long)puVar13 + -0x60) = &UNK_004bd8ee;
    puVar8 = (undefined4 *)func_0x0099bce0();
    *(undefined4 *)puVar18 = *puVar8;
    *(undefined **)((long)puVar13 + -0x60) = &UNK_004bd8f7;
    auVar23 = _ZN4absl12lts_202605263NowEv();
    uVar22 = auVar23._8_8_ & 0xffffffff;
    *(undefined **)((long)puVar13 + -0x60) = &UNK_004bd907;
    param_3 = (undefined8 *)_Znwm(0x76f8);
    *(long *)((long)puVar13 + -0x48) = auVar23._0_8_;
    *(int *)((long)puVar13 + -0x40) = auVar23._8_4_;
    uVar9 = *(undefined4 *)((long)puVar13 + -0x4c);
    *(ulong *)((long)puVar13 + -0x60) = uVar22;
    *(undefined8 *)((long)puVar13 + -0x68) = *(undefined8 *)((long)puVar13 + -0x48);
    *(undefined **)((long)puVar13 + -0x70) = &UNK_004bd92f;
    puVar15 = puVar16;
    puVar19 = param_3;
    _ZN4absl12lts_2026052612log_internal10LogMessage14LogMessageDataC1ENSt3__117basic_string_viewIcNS4_11char_traitsIcEEEEiNS0_11LogSeverityENS0_4TimeE
              (param_3,puVar16,*(undefined8 *)((long)puVar13 + -0x58));
    puVar18[1] = param_3;
    *(undefined2 *)(param_3 + 0x10) = 0;
    *(undefined1 *)((long)param_3 + 0x82) = 0;
    if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)((long)puVar13 + -0x38)) break;
    *(undefined **)((long)puVar13 + -0x60) = &UNK_004bd975;
    auVar24 = func_0x0099bd00();
    uVar10 = auVar24._8_8_;
    *(undefined1 **)((long)puVar13 + -0x60) = (undefined1 *)((long)puVar13 + -8);
    *(ulong *)((long)puVar13 + -0x68) = uVar22;
    *(long *)((long)puVar13 + -0x70) = auVar23._0_8_;
    *(undefined8 **)((long)puVar13 + -0x78) = puVar18;
    *(long *)((long)puVar13 + -0x80) = auVar24._0_8_;
    *(undefined **)((long)puVar13 + -0x88) = &UNK_004bd990;
    uVar7 = func_0x0099bcf0(puVar15);
    uVar9 = 0;
    puVar12 = *(undefined8 **)((long)puVar13 + -0x78);
    puVar20 = *(undefined8 **)((long)puVar13 + -0x70);
    puVar21 = *(undefined8 **)((long)puVar13 + -0x68);
    puVar14 = *(undefined1 **)((long)puVar13 + -0x60);
    puVar13 = (undefined8 *)((long)puVar13 + -0x58);
    puVar18 = puVar19;
    puVar17 = puVar16;
  }
  *(undefined8 *)((long)puVar13 + -8) = *(undefined8 *)((long)puVar13 + -8);
  *(undefined8 *)((long)puVar13 + -0x10) = *(undefined8 *)((long)puVar13 + -0x10);
  *(undefined8 *)((long)puVar13 + -0x18) = *(undefined8 *)((long)puVar13 + -0x18);
  *(undefined8 *)((long)puVar13 + -0x20) = *(undefined8 *)((long)puVar13 + -0x30);
  *(undefined8 *)((long)puVar13 + -0x28) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  *(undefined **)((long)puVar13 + -0xb0) = &UNK_004bb755;
  puVar12 = puVar18;
  cVar2 = _ZN4absl12lts_2026052612log_internal13IsInitializedEv();
  if (cVar2 != '\0') {
    lVar11 = puVar18[1];
    puVar12 = *(undefined8 **)(lVar11 + 0x10);
    puVar15 = *(undefined **)(lVar11 + 0x18);
    uVar4 = *(undefined4 *)(lVar11 + 0x20);
    *(undefined **)((long)puVar13 + -0xb0) = &UNK_004bb771;
    cVar2 = _ZN4absl12lts_2026052612log_internal20ShouldLogBacktraceAtENSt3__117basic_string_viewIcNS2_11char_traitsIcEEEEi
                      (puVar12,puVar15,uVar4);
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
      uVar10 = puVar18[1];
      puVar18 = (undefined8 *)((long)puVar13 + -0xa8);
      *(undefined **)((long)puVar13 + -0xb0) = &UNK_004bb7b9;
      _ZN4absl12lts_2026052612log_internal10LogMessage11OstreamViewC2ERNS2_14LogMessageDataE
                (puVar18,uVar10);
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
      puVar12 = puVar18;
      _ZN4absl12lts_2026052612log_internal10LogMessage11OstreamViewD2Ev();
    }
  }
  if (*(undefined8 **)(in_FS_OFFSET + 0x28) == *(undefined8 **)((long)puVar13 + -0x28)) {
    return *(undefined8 **)(in_FS_OFFSET + 0x28);
  }
  *(undefined **)((long)puVar13 + -0xb0) = &UNK_004bb844;
  auVar23 = func_0x0099bd00();
  lVar11 = auVar23._8_8_;
  *(undefined1 **)((long)puVar13 + -0xb0) = (undefined1 *)((long)puVar13 + -8);
  *(undefined8 **)((long)puVar13 + -0xb8) = puVar18;
  *(long *)((long)puVar13 + -0xc0) = auVar23._0_8_;
  puVar18 = (undefined8 *)puVar12[1];
  *puVar18 = puVar15;
  puVar18[1] = lVar11;
  if (lVar11 == 0) {
    lVar11 = 0;
  }
  else {
    lVar6 = 0;
    puVar17 = puVar15;
    do {
      lVar5 = lVar6;
      if (lVar11 == lVar5) goto code_r0x004bb8a0;
      puVar16 = puVar17 + -1;
      pcVar1 = puVar17 + lVar11 + -1;
      lVar6 = lVar5 + 1;
      puVar17 = puVar16;
    } while (*pcVar1 != '/');
    if (lVar11 + 1 != lVar5 + 1) {
      puVar15 = puVar16 + lVar11 + 1;
      lVar11 = lVar5;
    }
  }
code_r0x004bb8a0:
  lVar6 = puVar12[1];
  *(undefined **)(lVar6 + 0x10) = puVar15;
  *(long *)(lVar6 + 0x18) = lVar11;
  *(undefined4 *)(puVar12[1] + 0x20) = uVar9;
  *(undefined **)((long)puVar13 + -200) = &UNK_004bb8bb;
  _ZN4absl12lts_2026052612log_internal10LogMessage20LogBacktraceIfNeededEv(puVar12);
  return puVar12;
}


