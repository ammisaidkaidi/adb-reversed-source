// Function: _ZN4absl12lts_2026052612log_internal10LogMessage20LogBacktraceIfNeededEv
// Address: 004bb730
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 *
_ZN4absl12lts_2026052612log_internal10LogMessage20LogBacktraceIfNeededEv
          (undefined8 *param_1,undefined *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined *puVar1;
  char *pcVar2;
  undefined8 *puVar3;
  char cVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  long lVar7;
  long extraout_RDX;
  long lVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  long in_FS_OFFSET;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 *puStack_28;
  
  puStack_28 = *(undefined8 **)(in_FS_OFFSET + 0x28);
  puVar9 = param_1;
  cVar4 = _ZN4absl12lts_2026052612log_internal13IsInitializedEv();
  if (cVar4 != '\0') {
    lVar8 = param_1[1];
    puVar9 = *(undefined8 **)(lVar8 + 0x10);
    param_2 = *(undefined **)(lVar8 + 0x18);
    cVar4 = _ZN4absl12lts_2026052612log_internal20ShouldLogBacktraceAtENSt3__117basic_string_viewIcNS2_11char_traitsIcEEEEi
                      (puVar9,param_2,*(undefined4 *)(lVar8 + 0x20));
    if (cVar4 != '\0') {
      uStack_48 = 0;
      uStack_40 = 0;
      uStack_58 = 0;
      uStack_50 = 0;
      lStack_68 = 0;
      uStack_60 = 0;
      uStack_78 = 0;
      uStack_70 = 0;
      uStack_88 = 0;
      uStack_80 = 0;
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_a8 = 0;
      uStack_a0 = 0;
      uStack_38 = 0;
      puVar9 = &uStack_a8;
      _ZN4absl12lts_2026052612log_internal10LogMessage11OstreamViewC2ERNS2_14LogMessageDataE
                (puVar9,param_1[1]);
      func_0x0032eb30(lStack_68 + 0x118,&UNK_001648e3,0xe);
      uVar6 = _ZN4absl12lts_2026052612log_internal24MaxFramesInLogStackTraceEv();
      uVar5 = _ZN4absl12lts_2026052612log_internal28ShouldSymbolizeLogStackTraceEv();
      param_4 = 0x4bc4a0;
      _ZN4absl12lts_2026052618debugging_internal14DumpStackTraceEiibPFvPKcPvES4_
                (1,uVar6,uVar5,&UNK_004bc4a0,lStack_68 + 0x118);
      param_2 = &UNK_0017b788;
      func_0x0032eb30(lStack_68 + 0x118,&UNK_0017b788,2);
      _ZN4absl12lts_2026052612log_internal10LogMessage11OstreamViewD2Ev();
    }
  }
  if (*(undefined8 **)(in_FS_OFFSET + 0x28) == puStack_28) {
    return *(undefined8 **)(in_FS_OFFSET + 0x28);
  }
  func_0x0099bd00();
  puVar3 = (undefined8 *)puVar9[1];
  *puVar3 = param_2;
  puVar3[1] = extraout_RDX;
  if (extraout_RDX == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = 0;
    puVar10 = param_2;
    do {
      lVar7 = lVar8;
      lVar8 = extraout_RDX;
      if (extraout_RDX == lVar7) goto code_r0x004bb8a0;
      puVar1 = puVar10 + -1;
      pcVar2 = puVar10 + extraout_RDX + -1;
      lVar8 = lVar7 + 1;
      puVar10 = puVar1;
    } while (*pcVar2 != '/');
    lVar8 = extraout_RDX;
    if (extraout_RDX + 1 != lVar7 + 1) {
      param_2 = puVar1 + extraout_RDX + 1;
      lVar8 = lVar7;
    }
  }
code_r0x004bb8a0:
  lVar7 = puVar9[1];
  *(undefined **)(lVar7 + 0x10) = param_2;
  *(long *)(lVar7 + 0x18) = lVar8;
  *(undefined4 *)(puVar9[1] + 0x20) = param_4;
  _ZN4absl12lts_2026052612log_internal10LogMessage20LogBacktraceIfNeededEv(puVar9);
  return puVar9;
}


