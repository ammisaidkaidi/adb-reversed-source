// Function: _ZN4absl12lts_2026052612log_internal10LogMessage21FailWithoutStackTraceEv
// Address: 004bda50
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Removing unreachable block (ram,0x004bda68) */
/* WARNING: Removing unreachable block (ram,0x004bda72) */
/* WARNING: Removing unreachable block (ram,0x004bda77) */

undefined4 *
_ZN4absl12lts_2026052612log_internal10LogMessage21FailWithoutStackTraceEv
          (undefined8 param_1,undefined *param_2)

{
  undefined *puVar1;
  char *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  char cVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  long lVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined4 extraout_EDX;
  long lVar12;
  undefined8 unaff_RBX;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined *puVar15;
  undefined4 *puVar16;
  undefined4 *unaff_R12;
  undefined *unaff_R13;
  undefined8 unaff_R14;
  ulong uVar17;
  undefined8 unaff_R15;
  long in_FS_OFFSET;
  undefined1 auVar18 [16];
  undefined1 auVar19 [12];
  
  puVar14 = &stack0xfffffffffffffff8;
  puVar16 = (undefined4 *)0x1;
  _ZN4absl12lts_2026052612log_internal24SetSuppressSigabortTraceEb();
  func_0x0099c5e0();
  func_0x0099c600();
  uVar10 = func_0x0099bcf0(param_2);
  uVar7 = 3;
  puVar13 = &stack0xfffffffffffffff8;
  uVar11 = extraout_EDX;
  while( true ) {
    puVar15 = param_2;
    *(undefined1 **)(puVar13 + -8) = puVar14;
    *(undefined8 *)(puVar13 + -0x10) = unaff_R15;
    *(undefined8 *)(puVar13 + -0x18) = unaff_R14;
    *(undefined **)(puVar13 + -0x20) = unaff_R13;
    *(undefined4 **)(puVar13 + -0x28) = unaff_R12;
    *(undefined8 *)(puVar13 + -0x30) = unaff_RBX;
    *(undefined4 *)(puVar13 + -0x50) = uVar7;
    *(undefined4 *)(puVar13 + -0x4c) = uVar11;
    *(undefined8 *)(puVar13 + -0x58) = uVar10;
    *(undefined8 *)(puVar13 + -0x38) = *(undefined8 *)(in_FS_OFFSET + 0x28);
    *(undefined **)(puVar13 + -0x60) = &UNK_004bd8ee;
    puVar9 = (undefined4 *)func_0x0099bce0();
    *puVar16 = *puVar9;
    *(undefined **)(puVar13 + -0x60) = &UNK_004bd8f7;
    auVar18 = _ZN4absl12lts_202605263NowEv();
    uVar17 = auVar18._8_8_ & 0xffffffff;
    *(undefined **)(puVar13 + -0x60) = &UNK_004bd907;
    unaff_R12 = (undefined4 *)_Znwm(0x76f8);
    *(long *)(puVar13 + -0x48) = auVar18._0_8_;
    *(int *)(puVar13 + -0x40) = auVar18._8_4_;
    uVar11 = *(undefined4 *)(puVar13 + -0x4c);
    *(ulong *)(puVar13 + -0x60) = uVar17;
    *(undefined8 *)(puVar13 + -0x68) = *(undefined8 *)(puVar13 + -0x48);
    *(undefined **)(puVar13 + -0x70) = &UNK_004bd92f;
    param_2 = puVar15;
    puVar9 = unaff_R12;
    _ZN4absl12lts_2026052612log_internal10LogMessage14LogMessageDataC1ENSt3__117basic_string_viewIcNS4_11char_traitsIcEEEEiNS0_11LogSeverityENS0_4TimeE
              (unaff_R12,puVar15,*(undefined8 *)(puVar13 + -0x58));
    *(undefined4 **)(puVar16 + 2) = unaff_R12;
    *(undefined2 *)(unaff_R12 + 0x20) = 0;
    *(undefined1 *)((long)unaff_R12 + 0x82) = 0;
    if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(puVar13 + -0x38)) break;
    *(undefined **)(puVar13 + -0x60) = &UNK_004bd975;
    auVar19 = func_0x0099bd00();
    uVar11 = auVar19._8_4_;
    *(undefined1 **)(puVar13 + -0x60) = puVar13 + -8;
    *(ulong *)(puVar13 + -0x68) = uVar17;
    *(long *)(puVar13 + -0x70) = auVar18._0_8_;
    *(undefined4 **)(puVar13 + -0x78) = puVar16;
    *(long *)(puVar13 + -0x80) = auVar19._0_8_;
    *(undefined **)(puVar13 + -0x88) = &UNK_004bd990;
    uVar10 = func_0x0099bcf0(param_2);
    uVar7 = 0;
    unaff_RBX = *(undefined8 *)(puVar13 + -0x78);
    unaff_R14 = *(undefined8 *)(puVar13 + -0x70);
    unaff_R15 = *(undefined8 *)(puVar13 + -0x68);
    puVar14 = *(undefined1 **)(puVar13 + -0x60);
    puVar13 = puVar13 + -0x58;
    puVar16 = puVar9;
    unaff_R13 = puVar15;
  }
  *(undefined8 *)(puVar13 + -8) = *(undefined8 *)(puVar13 + -8);
  *(undefined8 *)(puVar13 + -0x10) = *(undefined8 *)(puVar13 + -0x10);
  *(undefined8 *)(puVar13 + -0x18) = *(undefined8 *)(puVar13 + -0x18);
  *(undefined8 *)(puVar13 + -0x20) = *(undefined8 *)(puVar13 + -0x30);
  *(undefined8 *)(puVar13 + -0x28) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  *(undefined **)(puVar13 + -0xb0) = &UNK_004bb755;
  puVar9 = puVar16;
  cVar5 = _ZN4absl12lts_2026052612log_internal13IsInitializedEv();
  if (cVar5 != '\0') {
    lVar12 = *(long *)(puVar16 + 2);
    puVar9 = *(undefined4 **)(lVar12 + 0x10);
    param_2 = *(undefined **)(lVar12 + 0x18);
    uVar7 = *(undefined4 *)(lVar12 + 0x20);
    *(undefined **)(puVar13 + -0xb0) = &UNK_004bb771;
    cVar5 = _ZN4absl12lts_2026052612log_internal20ShouldLogBacktraceAtENSt3__117basic_string_viewIcNS2_11char_traitsIcEEEEi
                      (puVar9,param_2,uVar7);
    if (cVar5 != '\0') {
      *(undefined8 *)(puVar13 + -0x48) = 0;
      *(undefined8 *)(puVar13 + -0x40) = 0;
      *(undefined8 *)(puVar13 + -0x58) = 0;
      *(undefined8 *)(puVar13 + -0x50) = 0;
      *(undefined8 *)(puVar13 + -0x68) = 0;
      *(undefined8 *)(puVar13 + -0x60) = 0;
      *(undefined8 *)(puVar13 + -0x78) = 0;
      *(undefined8 *)(puVar13 + -0x70) = 0;
      *(undefined8 *)(puVar13 + -0x88) = 0;
      *(undefined8 *)(puVar13 + -0x80) = 0;
      *(undefined8 *)(puVar13 + -0x98) = 0;
      *(undefined8 *)(puVar13 + -0x90) = 0;
      *(undefined8 *)(puVar13 + -0xa8) = 0;
      *(undefined8 *)(puVar13 + -0xa0) = 0;
      *(undefined8 *)(puVar13 + -0x38) = 0;
      uVar10 = *(undefined8 *)(puVar16 + 2);
      puVar16 = (undefined4 *)(puVar13 + -0xa8);
      *(undefined **)(puVar13 + -0xb0) = &UNK_004bb7b9;
      _ZN4absl12lts_2026052612log_internal10LogMessage11OstreamViewC2ERNS2_14LogMessageDataE
                (puVar16,uVar10);
      *(undefined **)(puVar13 + -0xb0) = &UNK_004bb7d7;
      func_0x0032eb30(*(long *)(puVar13 + -0x68) + 0x118,&UNK_001648e3,0xe);
      *(undefined **)(puVar13 + -0xb0) = &UNK_004bb7dc;
      uVar7 = _ZN4absl12lts_2026052612log_internal24MaxFramesInLogStackTraceEv();
      *(undefined **)(puVar13 + -0xb0) = &UNK_004bb7e4;
      uVar6 = _ZN4absl12lts_2026052612log_internal28ShouldSymbolizeLogStackTraceEv();
      uVar11 = 0x4bc4a0;
      *(undefined **)(puVar13 + -0xb0) = &UNK_004bb802;
      _ZN4absl12lts_2026052618debugging_internal14DumpStackTraceEiibPFvPKcPvES4_
                (1,uVar7,uVar6,&UNK_004bc4a0,*(long *)(puVar13 + -0x68) + 0x118);
      param_2 = &UNK_0017b788;
      *(undefined **)(puVar13 + -0xb0) = &UNK_004bb81a;
      func_0x0032eb30(*(long *)(puVar13 + -0x68) + 0x118,&UNK_0017b788,2);
      *(undefined **)(puVar13 + -0xb0) = &UNK_004bb822;
      puVar9 = puVar16;
      _ZN4absl12lts_2026052612log_internal10LogMessage11OstreamViewD2Ev();
    }
  }
  if (*(undefined4 **)(in_FS_OFFSET + 0x28) == *(undefined4 **)(puVar13 + -0x28)) {
    return *(undefined4 **)(in_FS_OFFSET + 0x28);
  }
  *(undefined **)(puVar13 + -0xb0) = &UNK_004bb844;
  auVar18 = func_0x0099bd00();
  lVar12 = auVar18._8_8_;
  *(undefined1 **)(puVar13 + -0xb0) = puVar13 + -8;
  *(undefined4 **)(puVar13 + -0xb8) = puVar16;
  *(long *)(puVar13 + -0xc0) = auVar18._0_8_;
  puVar3 = *(undefined8 **)(puVar9 + 2);
  *puVar3 = param_2;
  puVar3[1] = lVar12;
  if (lVar12 == 0) {
    lVar12 = 0;
  }
  else {
    lVar4 = 0;
    puVar15 = param_2;
    do {
      lVar8 = lVar4;
      if (lVar12 == lVar8) goto code_r0x004bb8a0;
      puVar1 = puVar15 + -1;
      pcVar2 = puVar15 + lVar12 + -1;
      lVar4 = lVar8 + 1;
      puVar15 = puVar1;
    } while (*pcVar2 != '/');
    if (lVar12 + 1 != lVar8 + 1) {
      param_2 = puVar1 + lVar12 + 1;
      lVar12 = lVar8;
    }
  }
code_r0x004bb8a0:
  lVar4 = *(long *)(puVar9 + 2);
  *(undefined **)(lVar4 + 0x10) = param_2;
  *(long *)(lVar4 + 0x18) = lVar12;
  *(undefined4 *)(*(long *)(puVar9 + 2) + 0x20) = uVar11;
  *(undefined **)(puVar13 + -200) = &UNK_004bb8bb;
  _ZN4absl12lts_2026052612log_internal10LogMessage20LogBacktraceIfNeededEv(puVar9);
  return puVar9;
}


