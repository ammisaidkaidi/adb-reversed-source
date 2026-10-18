// Function: _ZN4absl12lts_2026052612log_internal15LogMessageFatalC1EPKciS4_
// Address: 004bdac0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 *
_ZN4absl12lts_2026052612log_internal15LogMessageFatalC1EPKciS4_
          (undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined *puVar1;
  char *pcVar2;
  long lVar3;
  char cVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  long lVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined4 uVar12;
  undefined4 extraout_EDX;
  long lVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined8 *puVar18;
  undefined *unaff_R13;
  ulong uVar19;
  long in_FS_OFFSET;
  undefined1 auVar20 [16];
  undefined1 auVar21 [12];
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 *puStack_30;
  
  param_3 = param_3 & 0xffffffff;
  puStack_30 = *(undefined8 **)(in_FS_OFFSET + 0x28);
  puVar9 = &uStack_38;
  puStack_40 = &UNK_004bdaf4;
  uStack_38 = param_4;
  uVar10 = func_0x0099bcf0(param_2);
  puStack_40 = &UNK_004bdb0a;
  _ZN4absl12lts_2026052612log_internal10LogMessageC1ENSt3__117basic_string_viewIcNS3_11char_traitsIcEEEEiNS0_11LogSeverityE
            (param_1,param_2,uVar10,param_3,3);
  puStack_40 = &UNK_004bdb1e;
  _ZN4absl12lts_2026052612log_internal10LogMessage19CopyToEncodedBufferILNS2_10StringTypeE0EEEvNSt3__117basic_string_viewIcNS5_11char_traitsIcEEEE
            (param_1,&UNK_00165d45,0xe);
  puStack_40 = &UNK_004bdb29;
  puVar11 = (undefined8 *)
            _ZN4absl12lts_2026052612log_internal10LogMessagelsIPKcEERS2_RKT_(param_1,puVar9);
  puVar16 = &UNK_0015ae05;
  puStack_40 = &UNK_004bdb3d;
  _ZN4absl12lts_2026052612log_internal10LogMessage19CopyToEncodedBufferILNS2_10StringTypeE0EEEvNSt3__117basic_string_viewIcNS5_11char_traitsIcEEEE
            (puVar11,&UNK_0015ae05,1);
  if (*(undefined8 **)(in_FS_OFFSET + 0x28) == puStack_30) {
    return *(undefined8 **)(in_FS_OFFSET + 0x28);
  }
  puStack_40 = &UNK_004bdb5e;
  func_0x0099bd00();
  ppuVar15 = &puStack_40;
  puStack_40 = &stack0xfffffffffffffff8;
  _ZN4absl12lts_2026052612log_internal10LogMessage21FailWithoutStackTraceEv();
  uVar10 = func_0x0099bcf0(puVar16);
  uVar6 = 3;
  ppuVar14 = &puStack_40;
  uVar12 = extraout_EDX;
  while( true ) {
    puVar17 = puVar16;
    *(undefined ***)((long)ppuVar14 + -8) = ppuVar15;
    *(undefined8 *)((long)ppuVar14 + -0x10) = param_1;
    *(undefined8 *)((long)ppuVar14 + -0x18) = param_2;
    *(undefined **)((long)ppuVar14 + -0x20) = unaff_R13;
    *(undefined8 **)((long)ppuVar14 + -0x28) = puVar9;
    *(ulong *)((long)ppuVar14 + -0x30) = param_3;
    *(undefined4 *)((long)ppuVar14 + -0x50) = uVar6;
    *(undefined4 *)((long)ppuVar14 + -0x4c) = uVar12;
    *(undefined8 *)((long)ppuVar14 + -0x58) = uVar10;
    *(undefined8 *)((long)ppuVar14 + -0x38) = *(undefined8 *)(in_FS_OFFSET + 0x28);
    *(undefined **)((long)ppuVar14 + -0x60) = &UNK_004bd8ee;
    puVar8 = (undefined4 *)func_0x0099bce0();
    *(undefined4 *)puVar11 = *puVar8;
    *(undefined **)((long)ppuVar14 + -0x60) = &UNK_004bd8f7;
    auVar20 = _ZN4absl12lts_202605263NowEv();
    uVar19 = auVar20._8_8_ & 0xffffffff;
    *(undefined **)((long)ppuVar14 + -0x60) = &UNK_004bd907;
    puVar9 = (undefined8 *)_Znwm(0x76f8);
    *(long *)((long)ppuVar14 + -0x48) = auVar20._0_8_;
    *(int *)((long)ppuVar14 + -0x40) = auVar20._8_4_;
    uVar12 = *(undefined4 *)((long)ppuVar14 + -0x4c);
    *(ulong *)((long)ppuVar14 + -0x60) = uVar19;
    *(undefined8 *)((long)ppuVar14 + -0x68) = *(undefined8 *)((long)ppuVar14 + -0x48);
    *(undefined **)((long)ppuVar14 + -0x70) = &UNK_004bd92f;
    puVar16 = puVar17;
    puVar18 = puVar9;
    _ZN4absl12lts_2026052612log_internal10LogMessage14LogMessageDataC1ENSt3__117basic_string_viewIcNS4_11char_traitsIcEEEEiNS0_11LogSeverityENS0_4TimeE
              (puVar9,puVar17,*(undefined8 *)((long)ppuVar14 + -0x58));
    puVar11[1] = puVar9;
    *(undefined2 *)(puVar9 + 0x10) = 0;
    *(undefined1 *)((long)puVar9 + 0x82) = 0;
    if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)((long)ppuVar14 + -0x38)) break;
    *(undefined **)((long)ppuVar14 + -0x60) = &UNK_004bd975;
    auVar21 = func_0x0099bd00();
    uVar12 = auVar21._8_4_;
    *(undefined1 **)((long)ppuVar14 + -0x60) = (undefined1 *)((long)ppuVar14 + -8);
    *(ulong *)((long)ppuVar14 + -0x68) = uVar19;
    *(long *)((long)ppuVar14 + -0x70) = auVar20._0_8_;
    *(undefined8 **)((long)ppuVar14 + -0x78) = puVar11;
    *(long *)((long)ppuVar14 + -0x80) = auVar21._0_8_;
    *(undefined **)((long)ppuVar14 + -0x88) = &UNK_004bd990;
    uVar10 = func_0x0099bcf0(puVar16);
    uVar6 = 0;
    param_3 = *(ulong *)((long)ppuVar14 + -0x78);
    param_2 = *(undefined8 *)((long)ppuVar14 + -0x70);
    param_1 = *(undefined8 *)((long)ppuVar14 + -0x68);
    ppuVar15 = *(undefined ***)((long)ppuVar14 + -0x60);
    ppuVar14 = (undefined **)((long)ppuVar14 + -0x58);
    puVar11 = puVar18;
    unaff_R13 = puVar17;
  }
  *(undefined8 *)((long)ppuVar14 + -8) = *(undefined8 *)((long)ppuVar14 + -8);
  *(undefined8 *)((long)ppuVar14 + -0x10) = *(undefined8 *)((long)ppuVar14 + -0x10);
  *(undefined8 *)((long)ppuVar14 + -0x18) = *(undefined8 *)((long)ppuVar14 + -0x18);
  *(undefined8 *)((long)ppuVar14 + -0x20) = *(undefined8 *)((long)ppuVar14 + -0x30);
  *(undefined8 *)((long)ppuVar14 + -0x28) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  *(undefined **)((long)ppuVar14 + -0xb0) = &UNK_004bb755;
  puVar9 = puVar11;
  cVar4 = _ZN4absl12lts_2026052612log_internal13IsInitializedEv();
  if (cVar4 != '\0') {
    lVar13 = puVar11[1];
    puVar9 = *(undefined8 **)(lVar13 + 0x10);
    puVar16 = *(undefined **)(lVar13 + 0x18);
    uVar6 = *(undefined4 *)(lVar13 + 0x20);
    *(undefined **)((long)ppuVar14 + -0xb0) = &UNK_004bb771;
    cVar4 = _ZN4absl12lts_2026052612log_internal20ShouldLogBacktraceAtENSt3__117basic_string_viewIcNS2_11char_traitsIcEEEEi
                      (puVar9,puVar16,uVar6);
    if (cVar4 != '\0') {
      *(undefined8 *)((long)ppuVar14 + -0x48) = 0;
      *(undefined8 *)((long)ppuVar14 + -0x40) = 0;
      *(undefined8 *)((long)ppuVar14 + -0x58) = 0;
      *(undefined8 *)((long)ppuVar14 + -0x50) = 0;
      *(undefined8 *)((long)ppuVar14 + -0x68) = 0;
      *(undefined8 *)((long)ppuVar14 + -0x60) = 0;
      *(undefined8 *)((long)ppuVar14 + -0x78) = 0;
      *(undefined8 *)((long)ppuVar14 + -0x70) = 0;
      *(undefined8 *)((long)ppuVar14 + -0x88) = 0;
      *(undefined8 *)((long)ppuVar14 + -0x80) = 0;
      *(undefined8 *)((long)ppuVar14 + -0x98) = 0;
      *(undefined8 *)((long)ppuVar14 + -0x90) = 0;
      *(undefined8 *)((long)ppuVar14 + -0xa8) = 0;
      *(undefined8 *)((long)ppuVar14 + -0xa0) = 0;
      *(undefined8 *)((long)ppuVar14 + -0x38) = 0;
      uVar10 = puVar11[1];
      puVar11 = (undefined8 *)((long)ppuVar14 + -0xa8);
      *(undefined **)((long)ppuVar14 + -0xb0) = &UNK_004bb7b9;
      _ZN4absl12lts_2026052612log_internal10LogMessage11OstreamViewC2ERNS2_14LogMessageDataE
                (puVar11,uVar10);
      *(undefined **)((long)ppuVar14 + -0xb0) = &UNK_004bb7d7;
      func_0x0032eb30(*(long *)((long)ppuVar14 + -0x68) + 0x118,&UNK_001648e3,0xe);
      *(undefined **)((long)ppuVar14 + -0xb0) = &UNK_004bb7dc;
      uVar6 = _ZN4absl12lts_2026052612log_internal24MaxFramesInLogStackTraceEv();
      *(undefined **)((long)ppuVar14 + -0xb0) = &UNK_004bb7e4;
      uVar5 = _ZN4absl12lts_2026052612log_internal28ShouldSymbolizeLogStackTraceEv();
      uVar12 = 0x4bc4a0;
      *(undefined **)((long)ppuVar14 + -0xb0) = &UNK_004bb802;
      _ZN4absl12lts_2026052618debugging_internal14DumpStackTraceEiibPFvPKcPvES4_
                (1,uVar6,uVar5,&UNK_004bc4a0,*(long *)((long)ppuVar14 + -0x68) + 0x118);
      puVar16 = &UNK_0017b788;
      *(undefined **)((long)ppuVar14 + -0xb0) = &UNK_004bb81a;
      func_0x0032eb30(*(long *)((long)ppuVar14 + -0x68) + 0x118,&UNK_0017b788,2);
      *(undefined **)((long)ppuVar14 + -0xb0) = &UNK_004bb822;
      puVar9 = puVar11;
      _ZN4absl12lts_2026052612log_internal10LogMessage11OstreamViewD2Ev();
    }
  }
  if (*(undefined8 **)(in_FS_OFFSET + 0x28) == *(undefined8 **)((long)ppuVar14 + -0x28)) {
    return *(undefined8 **)(in_FS_OFFSET + 0x28);
  }
  *(undefined **)((long)ppuVar14 + -0xb0) = &UNK_004bb844;
  auVar20 = func_0x0099bd00();
  lVar13 = auVar20._8_8_;
  *(undefined1 **)((long)ppuVar14 + -0xb0) = (undefined1 *)((long)ppuVar14 + -8);
  *(undefined8 **)((long)ppuVar14 + -0xb8) = puVar11;
  *(long *)((long)ppuVar14 + -0xc0) = auVar20._0_8_;
  puVar11 = (undefined8 *)puVar9[1];
  *puVar11 = puVar16;
  puVar11[1] = lVar13;
  if (lVar13 == 0) {
    lVar13 = 0;
  }
  else {
    lVar3 = 0;
    puVar17 = puVar16;
    do {
      lVar7 = lVar3;
      if (lVar13 == lVar7) goto code_r0x004bb8a0;
      puVar1 = puVar17 + -1;
      pcVar2 = puVar17 + lVar13 + -1;
      lVar3 = lVar7 + 1;
      puVar17 = puVar1;
    } while (*pcVar2 != '/');
    if (lVar13 + 1 != lVar7 + 1) {
      puVar16 = puVar1 + lVar13 + 1;
      lVar13 = lVar7;
    }
  }
code_r0x004bb8a0:
  lVar3 = puVar9[1];
  *(undefined **)(lVar3 + 0x10) = puVar16;
  *(long *)(lVar3 + 0x18) = lVar13;
  *(undefined4 *)(puVar9[1] + 0x20) = uVar12;
  *(undefined **)((long)ppuVar14 + -200) = &UNK_004bb8bb;
  _ZN4absl12lts_2026052612log_internal10LogMessage20LogBacktraceIfNeededEv(puVar9);
  return puVar9;
}


