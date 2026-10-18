// Function: _ZN4absl12lts_2026052612log_internal10LogMessage14LogMessageData25FinalizeEncodingAndFormatEv
// Address: 004bb480
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long * _ZN4absl12lts_2026052612log_internal10LogMessage14LogMessageData25FinalizeEncodingAndFormatEv
                 (long *param_1)

{
  char *pcVar1;
  uint uVar2;
  undefined8 *puVar3;
  byte bVar4;
  char cVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  undefined4 uVar11;
  undefined *puVar12;
  long extraout_RDX;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  undefined4 *unaff_R15;
  long in_FS_OFFSET;
  long alStack_190 [16];
  long *plStack_110;
  long *plStack_108;
  long *plStack_100;
  long **pplStack_f8;
  undefined *puStack_f0;
  long *plStack_e8;
  long lStack_e0;
  long lStack_d8;
  long *plStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long *plStack_98;
  long *plStack_90;
  long *plStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  long *plStack_38;
  
  plStack_38 = *(long **)(in_FS_OFFSET + 0x28);
  plVar13 = param_1 + 0x37;
  lStack_80 = param_1[0x78a];
  if (lStack_80 == 0) {
    param_1[0x78a] = (long)plVar13;
    param_1[0x78b] = 15000;
    puStack_f0 = &UNK_004bb4d1;
    _ZN4absl12lts_2026052612log_internal10LogMessage14LogMessageData27InitializeEncodingAndFormatEv
              (param_1);
    lStack_80 = param_1[0x78a];
  }
  lStack_80 = lStack_80 - (long)plVar13;
  plStack_e8 = param_1 + 0x78c;
  plStack_90 = (long *)0x3a96;
  plStack_d0 = param_1;
  plStack_98 = plStack_e8;
  plStack_88 = plVar13;
  if (*(char *)((long)param_1 + 0x24) == '\x01') {
    lVar8 = param_1[5];
    unaff_R15 = (undefined4 *)param_1[6];
    lVar10 = param_1[7];
    uVar11 = *(undefined4 *)((long)param_1 + 0x3c);
    lStack_e0 = param_1[2];
    lStack_d8 = param_1[3];
    uVar2 = *(uint *)(param_1 + 4);
    puStack_f0 = &UNK_004bb574;
    bVar4 = _ZN4absl12lts_2026052612log_internal24ThreadIsLoggingToLogSinkEv();
    param_1 = plStack_d0;
    plStack_100 = (long *)(ulong)bVar4;
    pplStack_f8 = &plStack_98;
    plStack_110 = (long *)&UNK_004bb5ac;
    plStack_108 = (long *)(ulong)uVar2;
    lVar8 = _ZN4absl12lts_2026052612log_internal15FormatLogPrefixENS0_11LogSeverityENS0_4TimeEiNSt3__117basic_string_viewIcNS4_11char_traitsIcEEEEiNS1_12PrefixFormatERNS0_4SpanIcEE
                      ((int)lVar8,unaff_R15,(int)lVar10,uVar11,lStack_e0,lStack_d8);
    plVar13 = (long *)(ulong)uVar2;
  }
  else {
    lVar8 = 0;
  }
  param_1[10] = lVar8;
  uStack_b8 = 0;
  uStack_b0 = 0;
  lStack_c8 = 0;
  lStack_c0 = 0;
  uStack_a8 = 0;
  plVar15 = &lStack_c8;
  puStack_f0 = &UNK_004bb5e4;
  cVar5 = _ZN4absl12lts_2026052612log_internal10ProtoField10DecodeFromEPNS0_4SpanIKcEE
                    (plVar15,&plStack_88);
  if (cVar5 != '\0') {
    param_1 = &lStack_78;
    unaff_R15 = &uStack_48;
    do {
      if ((lStack_c8 == 7) && (lStack_c0 == 2)) {
        uStack_48 = (undefined4)uStack_b0;
        uStack_44 = uStack_b0._4_4_;
        uStack_40 = (undefined4)uStack_a8;
        uStack_3c = uStack_a8._4_4_;
        if ((long *)0x1 < plStack_90) {
          uStack_68 = 0;
          uStack_60 = 0;
          lStack_78 = 0;
          lStack_70 = 0;
          plStack_58 = (long *)0x0;
          do {
            do {
              puStack_f0 = &UNK_004bb66b;
              cVar5 = _ZN4absl12lts_2026052612log_internal10ProtoField10DecodeFromEPNS0_4SpanIKcEE
                                (param_1,unaff_R15);
              if (cVar5 == '\0') goto code_r0x004bb610;
            } while (((lStack_78 != 6) && (lStack_78 != 1)) || (lStack_70 != 2));
            plVar13 = plStack_90;
            if (plStack_58 < plStack_90) {
              plVar13 = plStack_58;
            }
            puStack_f0 = &UNK_004bb6ab;
            func_0x0099bda0(plStack_98,uStack_60,plVar13);
            plStack_98 = (long *)((long)plStack_98 + (long)plVar13);
            plStack_90 = (long *)((long)plStack_90 - (long)plVar13);
          } while (plStack_58 <= plVar13);
        }
      }
code_r0x004bb610:
      puStack_f0 = &UNK_004bb61b;
      plVar15 = &lStack_c8;
      cVar5 = _ZN4absl12lts_2026052612log_internal10ProtoField10DecodeFromEPNS0_4SpanIKcEE
                        (&lStack_c8,&plStack_88);
    } while (cVar5 != '\0');
  }
  *(undefined2 *)((long)plStack_d0 + (long)((long)plStack_98 + (0x3c60 - (long)plStack_e8))) = 10;
  puVar9 = (undefined *)((long)plStack_98 + (2 - (long)plStack_e8));
  puVar12 = (undefined *)0x3a98;
  if (puVar9 < (undefined *)0x3a98) {
    puVar12 = puVar9;
  }
  plStack_d0[8] = (long)plStack_e8;
  plStack_d0[9] = (long)puVar12;
  if (*(long **)(in_FS_OFFSET + 0x28) == plStack_38) {
    return *(long **)(in_FS_OFFSET + 0x28);
  }
  puStack_f0 = &UNK_004bb727;
  plVar14 = plStack_e8;
  func_0x0099bd00();
  uVar11 = SUB84(puVar12,0);
  plStack_110 = *(long **)(in_FS_OFFSET + 0x28);
  plVar16 = plVar15;
  plStack_108 = plVar13;
  plStack_100 = param_1;
  pplStack_f8 = (long **)unaff_R15;
  puStack_f0 = &stack0xfffffffffffffff8;
  cVar5 = _ZN4absl12lts_2026052612log_internal13IsInitializedEv();
  if (cVar5 != '\0') {
    lVar8 = plVar15[1];
    plVar16 = *(long **)(lVar8 + 0x10);
    plVar14 = *(long **)(lVar8 + 0x18);
    cVar5 = _ZN4absl12lts_2026052612log_internal20ShouldLogBacktraceAtENSt3__117basic_string_viewIcNS2_11char_traitsIcEEEEi
                      (plVar16,plVar14,*(undefined4 *)(lVar8 + 0x20));
    if (cVar5 != '\0') {
      alStack_190[0xc] = 0;
      alStack_190[0xd] = 0;
      alStack_190[10] = 0;
      alStack_190[0xb] = 0;
      alStack_190[8] = 0;
      alStack_190[9] = 0;
      alStack_190[6] = 0;
      alStack_190[7] = 0;
      alStack_190[4] = 0;
      alStack_190[5] = 0;
      alStack_190[2] = 0;
      alStack_190[3] = 0;
      alStack_190[0] = 0;
      alStack_190[1] = 0;
      alStack_190[0xe] = 0;
      plVar16 = alStack_190;
      _ZN4absl12lts_2026052612log_internal10LogMessage11OstreamViewC2ERNS2_14LogMessageDataE
                (plVar16,plVar15[1]);
      func_0x0032eb30(alStack_190[8] + 0x118,&UNK_001648e3,0xe);
      uVar7 = _ZN4absl12lts_2026052612log_internal24MaxFramesInLogStackTraceEv();
      uVar6 = _ZN4absl12lts_2026052612log_internal28ShouldSymbolizeLogStackTraceEv();
      uVar11 = 0x4bc4a0;
      _ZN4absl12lts_2026052618debugging_internal14DumpStackTraceEiibPFvPKcPvES4_
                (1,uVar7,uVar6,&UNK_004bc4a0,alStack_190[8] + 0x118);
      plVar14 = (long *)&UNK_0017b788;
      func_0x0032eb30(alStack_190[8] + 0x118,&UNK_0017b788,2);
      _ZN4absl12lts_2026052612log_internal10LogMessage11OstreamViewD2Ev();
    }
  }
  if (*(long **)(in_FS_OFFSET + 0x28) == plStack_110) {
    return *(long **)(in_FS_OFFSET + 0x28);
  }
  func_0x0099bd00();
  puVar3 = (undefined8 *)plVar16[1];
  *puVar3 = plVar14;
  puVar3[1] = extraout_RDX;
  if (extraout_RDX == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = 0;
    plVar13 = plVar14;
    do {
      lVar10 = lVar8;
      lVar8 = extraout_RDX;
      if (extraout_RDX == lVar10) goto code_r0x004bb8a0;
      plVar15 = (long *)((long)plVar13 + -1);
      pcVar1 = (char *)((long)plVar13 + extraout_RDX + -1);
      lVar8 = lVar10 + 1;
      plVar13 = plVar15;
    } while (*pcVar1 != '/');
    lVar8 = extraout_RDX;
    if (extraout_RDX + 1 != lVar10 + 1) {
      plVar14 = (long *)((long)plVar15 + extraout_RDX + 1);
      lVar8 = lVar10;
    }
  }
code_r0x004bb8a0:
  lVar10 = plVar16[1];
  *(long **)(lVar10 + 0x10) = plVar14;
  *(long *)(lVar10 + 0x18) = lVar8;
  *(undefined4 *)(plVar16[1] + 0x20) = uVar11;
  _ZN4absl12lts_2026052612log_internal10LogMessage20LogBacktraceIfNeededEv(plVar16);
  return plVar16;
}


