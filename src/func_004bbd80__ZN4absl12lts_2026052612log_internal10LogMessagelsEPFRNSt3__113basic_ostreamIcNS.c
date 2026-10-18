// Function: _ZN4absl12lts_2026052612log_internal10LogMessagelsEPFRNSt3__113basic_ostreamIcNS3_11char_traitsIcEEEES8_E
// Address: 004bbd80
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 *
_ZN4absl12lts_2026052612log_internal10LogMessagelsEPFRNSt3__113basic_ostreamIcNS3_11char_traitsIcEEEES8_E
          (undefined8 *param_1,code *param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  undefined7 *puVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  code *pcVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long in_FS_OFFSET;
  bool bVar14;
  byte bStack_198;
  undefined7 uStack_197;
  ulong uStack_190;
  undefined7 *puStack_188;
  undefined4 uStack_17c;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  code *pcStack_168;
  undefined8 *puStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d0;
  undefined8 *puStack_c8;
  code *pcStack_c0;
  undefined8 *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  lStack_28 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_68 = 0;
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
  pcVar10 = (code *)param_1[1];
  puStack_b0 = &UNK_004bbde3;
  _ZN4absl12lts_2026052612log_internal10LogMessage11OstreamViewC2ERNS2_14LogMessageDataE(&uStack_a8)
  ;
  puStack_b0 = &UNK_004bbdef;
  (*param_2)(param_1[1] + 0x118);
  puStack_b0 = &UNK_004bbdf7;
  puVar8 = &uStack_a8;
  _ZN4absl12lts_2026052612log_internal10LogMessage11OstreamViewD2Ev();
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_28) {
    return param_1;
  }
  puStack_b0 = &UNK_004bbe1c;
  func_0x0099bd00();
  lStack_d0 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_f0 = 0;
  uStack_e8 = 0;
  uStack_100 = 0;
  uStack_f8 = 0;
  uStack_110 = 0;
  uStack_108 = 0;
  uStack_120 = 0;
  uStack_118 = 0;
  uStack_130 = 0;
  uStack_128 = 0;
  uStack_140 = 0;
  uStack_138 = 0;
  uStack_150 = 0;
  uStack_148 = 0;
  uStack_e0 = 0;
  puStack_158 = &UNK_004bbe83;
  puStack_c8 = param_1;
  pcStack_c0 = param_2;
  puStack_b8 = &uStack_a8;
  puStack_b0 = &stack0xfffffffffffffff8;
  _ZN4absl12lts_2026052612log_internal10LogMessage11OstreamViewC2ERNS2_14LogMessageDataE
            (&uStack_150,puVar8[1]);
  puStack_158 = &UNK_004bbe9c;
  (*pcVar10)(puVar8[1] + 0x118 + *(long *)(*(long *)(puVar8[1] + 0x118) + -0x18));
  puStack_158 = &UNK_004bbea4;
  puVar12 = &uStack_150;
  _ZN4absl12lts_2026052612log_internal10LogMessage11OstreamViewD2Ev();
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_d0) {
    return puVar8;
  }
  puStack_158 = &UNK_004bbec9;
  func_0x0099bd00();
  puStack_178 = *(undefined8 **)(in_FS_OFFSET + 0x28);
  iVar1 = *(int *)(puVar12[1] + 0x28);
  puVar13 = puVar12;
  puStack_170 = puVar8;
  pcStack_168 = pcVar10;
  puStack_160 = &uStack_150;
  puStack_158 = (undefined *)&puStack_b0;
  iVar4 = _ZN4absl12lts_2026052611MinLogLevelEv();
  if (iVar4 <= iVar1) {
    lVar6 = puVar12[1];
    if (*(char *)(lVar6 + 0x82) == '\x01') {
      _ZN4absl12lts_2026052612log_internal10LogMessage19CopyToEncodedBufferILNS2_10StringTypeE0EEEvNSt3__117basic_string_viewIcNS5_11char_traitsIcEEEE
                (puVar12,&UNK_00186281,2);
      _ZN4absl12lts_2026052613base_internal8StrErrorEi(&bStack_198,*(undefined4 *)puVar12);
      uVar9 = (ulong)(bStack_198 >> 1);
      puVar2 = &uStack_197;
      if ((bStack_198 & 1) != 0) {
        uVar9 = uStack_190;
        puVar2 = puStack_188;
      }
      _ZN4absl12lts_2026052612log_internal10LogMessage19CopyToEncodedBufferILNS2_10StringTypeE1EEEvNSt3__117basic_string_viewIcNS5_11char_traitsIcEEEE
                (puVar12,puVar2,uVar9);
      _ZN4absl12lts_2026052612log_internal10LogMessage19CopyToEncodedBufferILNS2_10StringTypeE0EEEvNSt3__117basic_string_viewIcNS5_11char_traitsIcEEEE
                (puVar12,&UNK_00161368,2);
      uStack_17c = *(undefined4 *)puVar12;
      uVar5 = _ZN4absl12lts_2026052612log_internal10LogMessagelsIiEERS2_RKT_(puVar12,&uStack_17c);
      _ZN4absl12lts_2026052612log_internal10LogMessage19CopyToEncodedBufferILNS2_10StringTypeE0EEEvNSt3__117basic_string_viewIcNS5_11char_traitsIcEEEE
                (uVar5,&UNK_00178ae2,1);
      if ((bStack_198 & 1) != 0) {
        _ZdaPvSt11align_val_t(puStack_188,CONCAT71(uStack_197,bStack_198) & 0xfffffffffffffffe);
      }
      lVar6 = puVar12[1];
    }
    if ((*(int *)(lVar6 + 0x28) == 3) &&
       (cVar3 = _ZN4absl12lts_2026052612log_internal12ExitOnDFatalEv(), cVar3 != '\0')) {
      LOCK();
      bVar14 = cRam0000000000a00998 == '\0';
      if (bVar14) {
        cRam0000000000a00998 = '\x01';
      }
      UNLOCK();
      if (bVar14) {
        *(undefined1 *)(puVar12[1] + 0x80) = 1;
      }
    }
    _ZN4absl12lts_2026052612log_internal10LogMessage14LogMessageData25FinalizeEncodingAndFormatEv
              (puVar12[1]);
    lVar11 = puVar12[1];
    lVar6 = lVar11 + 0x1b8;
    lVar7 = *(long *)(lVar11 + 0x3c50);
    if (lVar7 == 0) {
      *(long *)(lVar11 + 0x3c50) = lVar6;
      *(undefined8 *)(lVar11 + 0x3c58) = 15000;
      _ZN4absl12lts_2026052612log_internal10LogMessage14LogMessageData27InitializeEncodingAndFormatEv
                (lVar11);
      lVar7 = *(long *)(lVar11 + 0x3c50);
      lVar11 = puVar12[1];
    }
    *(long *)(lVar11 + 0x58) = lVar6;
    *(long *)(lVar11 + 0x60) = (lVar7 - lVar11) + -0x1b8;
    puVar13 = puVar12;
    _ZN4absl12lts_2026052612log_internal10LogMessage9SendToLogEv();
  }
  if (*(undefined8 **)(in_FS_OFFSET + 0x28) == puStack_178) {
    return *(undefined8 **)(in_FS_OFFSET + 0x28);
  }
  uVar5 = func_0x0099bd00();
  if ((*(int *)(puVar13[1] + 0x28) == 3) &&
     (cVar3 = _ZN4absl12lts_2026052612log_internal12ExitOnDFatalEv(), cVar3 != '\0')) {
    _ZN4absl12lts_2026052612log_internal10LogMessage12PrepareToDieEv(puVar13);
  }
  lVar6 = puVar13[1];
  if ((*(ulong *)(lVar6 + 0x88) & 1) == 0) {
    lVar11 = lVar6 + 0x90;
  }
  else {
    lVar11 = *(long *)(lVar6 + 0x90);
  }
  _ZN4absl12lts_2026052612log_internal10LogToSinksERKNS0_8LogEntryENS0_4SpanIPNS0_7LogSinkEEEb
            (lVar6,lVar11,*(ulong *)(lVar6 + 0x88) >> 1,*(undefined1 *)(lVar6 + 0x110),param_5,
             param_6,uVar5,puVar12);
  puVar8 = (undefined8 *)puVar13[1];
  if ((*(int *)(puVar8 + 5) == 3) &&
     (puVar8 = (undefined8 *)_ZN4absl12lts_2026052612log_internal12ExitOnDFatalEv(),
     (char)puVar8 != '\0')) {
    _ZN4absl12lts_2026052612log_internal13FlushLogSinksEv();
    if (*(char *)(puVar13[1] + 0x81) == '\x01') {
      _ZN4absl12lts_2026052612log_internal10LogMessage11FailQuietlyEv();
    }
    _ZN4absl12lts_2026052612log_internal10LogMessage21FailWithoutStackTraceEv();
    puVar8 = *(undefined8 **)(lVar6 + 8);
    *(undefined1 *)((long)puVar8 + 0x81) = 1;
    return puVar8;
  }
  return puVar8;
}


