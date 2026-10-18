// Function: _ZN4absl12lts_2026052612log_internal10LogMessageC1ENSt3__117basic_string_viewIcNS3_11char_traitsIcEEEEiNS0_11LogSeverityE
// Address: 004bd8ba
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined4 *
_ZN4absl12lts_2026052612log_internal10LogMessageC1ENSt3__117basic_string_viewIcNS3_11char_traitsIcEEEEiNS0_11LogSeverityE
          (undefined4 *param_1,undefined *param_2,undefined8 param_3,ulong param_4,
          undefined4 param_5)

{
  undefined *puVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  char cVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  long lVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  long lVar12;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  undefined *puVar13;
  undefined4 *unaff_R12;
  undefined *unaff_R13;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  ulong uVar14;
  long in_FS_OFFSET;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  while( true ) {
    puVar13 = param_2;
    *(undefined8 *)((long)register0x00000020 + -8) = unaff_RBP;
    *(undefined8 *)((long)register0x00000020 + -0x10) = unaff_R15;
    *(undefined8 *)((long)register0x00000020 + -0x18) = unaff_R14;
    *(undefined **)((long)register0x00000020 + -0x20) = unaff_R13;
    *(undefined4 **)((long)register0x00000020 + -0x28) = unaff_R12;
    *(undefined8 *)((long)register0x00000020 + -0x30) = unaff_RBX;
    *(undefined4 *)((long)register0x00000020 + -0x50) = param_5;
    *(int *)((long)register0x00000020 + -0x4c) = (int)param_4;
    *(undefined8 *)((long)register0x00000020 + -0x58) = param_3;
    *(undefined8 *)((long)register0x00000020 + -0x38) = *(undefined8 *)(in_FS_OFFSET + 0x28);
    *(undefined **)((long)register0x00000020 + -0x60) = &UNK_004bd8ee;
    puVar10 = (undefined4 *)func_0x0099bce0();
    *param_1 = *puVar10;
    *(undefined **)((long)register0x00000020 + -0x60) = &UNK_004bd8f7;
    auVar15 = _ZN4absl12lts_202605263NowEv();
    uVar14 = auVar15._8_8_ & 0xffffffff;
    *(undefined **)((long)register0x00000020 + -0x60) = &UNK_004bd907;
    unaff_R12 = (undefined4 *)_Znwm(0x76f8);
    *(long *)((long)register0x00000020 + -0x48) = auVar15._0_8_;
    *(int *)((long)register0x00000020 + -0x40) = auVar15._8_4_;
    uVar11 = *(undefined4 *)((long)register0x00000020 + -0x4c);
    *(ulong *)((long)register0x00000020 + -0x60) = uVar14;
    *(undefined8 *)((long)register0x00000020 + -0x68) =
         *(undefined8 *)((long)register0x00000020 + -0x48);
    *(undefined **)((long)register0x00000020 + -0x70) = &UNK_004bd92f;
    param_2 = puVar13;
    puVar10 = unaff_R12;
    _ZN4absl12lts_2026052612log_internal10LogMessage14LogMessageDataC1ENSt3__117basic_string_viewIcNS4_11char_traitsIcEEEEiNS0_11LogSeverityENS0_4TimeE
              (unaff_R12,puVar13,*(undefined8 *)((long)register0x00000020 + -0x58));
    *(undefined4 **)(param_1 + 2) = unaff_R12;
    *(undefined2 *)(unaff_R12 + 0x20) = 0;
    *(undefined1 *)((long)unaff_R12 + 0x82) = 0;
    if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)((long)register0x00000020 + -0x38)) break;
    *(undefined **)((long)register0x00000020 + -0x60) = &UNK_004bd975;
    auVar16 = func_0x0099bd00();
    *(undefined1 **)((long)register0x00000020 + -0x60) =
         (undefined1 *)((long)register0x00000020 + -8);
    *(ulong *)((long)register0x00000020 + -0x68) = uVar14;
    *(long *)((long)register0x00000020 + -0x70) = auVar15._0_8_;
    *(undefined4 **)((long)register0x00000020 + -0x78) = param_1;
    *(long *)((long)register0x00000020 + -0x80) = auVar16._0_8_;
    param_4 = auVar16._8_8_ & 0xffffffff;
    *(undefined **)((long)register0x00000020 + -0x88) = &UNK_004bd990;
    param_3 = func_0x0099bcf0(param_2);
    param_5 = 0;
    unaff_RBX = *(undefined8 *)((long)register0x00000020 + -0x78);
    unaff_R14 = *(undefined8 *)((long)register0x00000020 + -0x70);
    unaff_R15 = *(undefined8 *)((long)register0x00000020 + -0x68);
    unaff_RBP = *(undefined8 *)((long)register0x00000020 + -0x60);
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x58);
    param_1 = puVar10;
    unaff_R13 = puVar13;
  }
  *(undefined8 *)((long)register0x00000020 + -8) = *(undefined8 *)((long)register0x00000020 + -8);
  *(undefined8 *)((long)register0x00000020 + -0x10) =
       *(undefined8 *)((long)register0x00000020 + -0x10);
  *(undefined8 *)((long)register0x00000020 + -0x18) =
       *(undefined8 *)((long)register0x00000020 + -0x18);
  *(undefined8 *)((long)register0x00000020 + -0x20) =
       *(undefined8 *)((long)register0x00000020 + -0x30);
  *(undefined8 *)((long)register0x00000020 + -0x28) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  *(undefined **)((long)register0x00000020 + -0xb0) = &UNK_004bb755;
  puVar10 = param_1;
  cVar6 = _ZN4absl12lts_2026052612log_internal13IsInitializedEv();
  if (cVar6 != '\0') {
    lVar12 = *(long *)(param_1 + 2);
    puVar10 = *(undefined4 **)(lVar12 + 0x10);
    param_2 = *(undefined **)(lVar12 + 0x18);
    uVar8 = *(undefined4 *)(lVar12 + 0x20);
    *(undefined **)((long)register0x00000020 + -0xb0) = &UNK_004bb771;
    cVar6 = _ZN4absl12lts_2026052612log_internal20ShouldLogBacktraceAtENSt3__117basic_string_viewIcNS2_11char_traitsIcEEEEi
                      (puVar10,param_2,uVar8);
    if (cVar6 != '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x48) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x58) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x68) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x78) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x88) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x80) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x98) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x90) = 0;
      *(undefined8 *)((long)register0x00000020 + -0xa8) = 0;
      *(undefined8 *)((long)register0x00000020 + -0xa0) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x38) = 0;
      uVar3 = *(undefined8 *)(param_1 + 2);
      param_1 = (undefined4 *)((long)register0x00000020 + -0xa8);
      *(undefined **)((long)register0x00000020 + -0xb0) = &UNK_004bb7b9;
      _ZN4absl12lts_2026052612log_internal10LogMessage11OstreamViewC2ERNS2_14LogMessageDataE
                (param_1,uVar3);
      *(undefined **)((long)register0x00000020 + -0xb0) = &UNK_004bb7d7;
      func_0x0032eb30(*(long *)((long)register0x00000020 + -0x68) + 0x118,&UNK_001648e3,0xe);
      *(undefined **)((long)register0x00000020 + -0xb0) = &UNK_004bb7dc;
      uVar8 = _ZN4absl12lts_2026052612log_internal24MaxFramesInLogStackTraceEv();
      *(undefined **)((long)register0x00000020 + -0xb0) = &UNK_004bb7e4;
      uVar7 = _ZN4absl12lts_2026052612log_internal28ShouldSymbolizeLogStackTraceEv();
      uVar11 = 0x4bc4a0;
      *(undefined **)((long)register0x00000020 + -0xb0) = &UNK_004bb802;
      _ZN4absl12lts_2026052618debugging_internal14DumpStackTraceEiibPFvPKcPvES4_
                (1,uVar8,uVar7,&UNK_004bc4a0,*(long *)((long)register0x00000020 + -0x68) + 0x118);
      param_2 = &UNK_0017b788;
      *(undefined **)((long)register0x00000020 + -0xb0) = &UNK_004bb81a;
      func_0x0032eb30(*(long *)((long)register0x00000020 + -0x68) + 0x118,&UNK_0017b788,2);
      *(undefined **)((long)register0x00000020 + -0xb0) = &UNK_004bb822;
      puVar10 = param_1;
      _ZN4absl12lts_2026052612log_internal10LogMessage11OstreamViewD2Ev();
    }
  }
  if (*(undefined4 **)(in_FS_OFFSET + 0x28) == *(undefined4 **)((long)register0x00000020 + -0x28)) {
    return *(undefined4 **)(in_FS_OFFSET + 0x28);
  }
  *(undefined **)((long)register0x00000020 + -0xb0) = &UNK_004bb844;
  auVar15 = func_0x0099bd00();
  lVar12 = auVar15._8_8_;
  *(undefined1 **)((long)register0x00000020 + -0xb0) = (undefined1 *)((long)register0x00000020 + -8)
  ;
  *(undefined4 **)((long)register0x00000020 + -0xb8) = param_1;
  *(long *)((long)register0x00000020 + -0xc0) = auVar15._0_8_;
  puVar4 = *(undefined8 **)(puVar10 + 2);
  *puVar4 = param_2;
  puVar4[1] = lVar12;
  if (lVar12 == 0) {
    lVar12 = 0;
  }
  else {
    lVar5 = 0;
    puVar13 = param_2;
    do {
      lVar9 = lVar5;
      if (lVar12 == lVar9) goto code_r0x004bb8a0;
      puVar1 = puVar13 + -1;
      pcVar2 = puVar13 + lVar12 + -1;
      lVar5 = lVar9 + 1;
      puVar13 = puVar1;
    } while (*pcVar2 != '/');
    if (lVar12 + 1 != lVar9 + 1) {
      param_2 = puVar1 + lVar12 + 1;
      lVar12 = lVar9;
    }
  }
code_r0x004bb8a0:
  lVar5 = *(long *)(puVar10 + 2);
  *(undefined **)(lVar5 + 0x10) = param_2;
  *(long *)(lVar5 + 0x18) = lVar12;
  *(undefined4 *)(*(long *)(puVar10 + 2) + 0x20) = uVar11;
  *(undefined **)((long)register0x00000020 + -200) = &UNK_004bb8bb;
  _ZN4absl12lts_2026052612log_internal10LogMessage20LogBacktraceIfNeededEv(puVar10);
  return puVar10;
}


