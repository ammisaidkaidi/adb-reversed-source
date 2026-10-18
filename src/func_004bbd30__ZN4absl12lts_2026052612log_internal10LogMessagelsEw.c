// Function: _ZN4absl12lts_2026052612log_internal10LogMessagelsEw
// Address: 004bbd30
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 *
_ZN4absl12lts_2026052612log_internal10LogMessagelsEw
          (undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
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
  code *pcVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long in_FS_OFFSET;
  bool bVar15;
  byte bStack_1c0;
  undefined7 uStack_1bf;
  ulong uStack_1b8;
  undefined7 *puStack_1b0;
  undefined4 uStack_1a4;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  code *pcStack_190;
  undefined8 *puStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
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
  long lStack_f8;
  undefined8 *puStack_f0;
  code *pcStack_e8;
  undefined8 *puStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
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
  long lStack_50;
  undefined8 *puStack_48;
  undefined *apuStack_30 [2];
  undefined4 uStack_1c;
  long lStack_18;
  
  lStack_18 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar10 = (code *)&uStack_1c;
  apuStack_30[0] = &UNK_004bbd5a;
  puVar8 = param_1;
  uStack_1c = param_2;
  _ZN4absl12lts_2026052612log_internal10LogMessage19CopyToEncodedBufferILNS2_10StringTypeE1EEEvNSt3__117basic_string_viewIwNS5_11char_traitsIwEEEE
            (param_1,pcVar10,1);
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_18) {
    return param_1;
  }
  apuStack_30[0] = &UNK_004bbd78;
  func_0x0099bd00();
  lStack_50 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_60 = 0;
  pcVar11 = (code *)puVar8[1];
  puStack_d8 = &UNK_004bbde3;
  puStack_48 = param_1;
  apuStack_30[0] = &stack0xfffffffffffffff8;
  _ZN4absl12lts_2026052612log_internal10LogMessage11OstreamViewC2ERNS2_14LogMessageDataE(&uStack_d0)
  ;
  puStack_d8 = &UNK_004bbdef;
  (*pcVar10)(puVar8[1] + 0x118);
  puStack_d8 = &UNK_004bbdf7;
  puVar13 = &uStack_d0;
  _ZN4absl12lts_2026052612log_internal10LogMessage11OstreamViewD2Ev();
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_50) {
    return puVar8;
  }
  puStack_d8 = &UNK_004bbe1c;
  func_0x0099bd00();
  lStack_f8 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_118 = 0;
  uStack_110 = 0;
  uStack_128 = 0;
  uStack_120 = 0;
  uStack_138 = 0;
  uStack_130 = 0;
  uStack_148 = 0;
  uStack_140 = 0;
  uStack_158 = 0;
  uStack_150 = 0;
  uStack_168 = 0;
  uStack_160 = 0;
  uStack_178 = 0;
  uStack_170 = 0;
  uStack_108 = 0;
  puStack_180 = &UNK_004bbe83;
  puStack_f0 = puVar8;
  pcStack_e8 = pcVar10;
  puStack_e0 = &uStack_d0;
  puStack_d8 = (undefined *)apuStack_30;
  _ZN4absl12lts_2026052612log_internal10LogMessage11OstreamViewC2ERNS2_14LogMessageDataE
            (&uStack_178,puVar13[1]);
  puStack_180 = &UNK_004bbe9c;
  (*pcVar11)(puVar13[1] + 0x118 + *(long *)(*(long *)(puVar13[1] + 0x118) + -0x18));
  puStack_180 = &UNK_004bbea4;
  puVar8 = &uStack_178;
  _ZN4absl12lts_2026052612log_internal10LogMessage11OstreamViewD2Ev();
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_f8) {
    return puVar13;
  }
  puStack_180 = &UNK_004bbec9;
  func_0x0099bd00();
  puStack_1a0 = *(undefined8 **)(in_FS_OFFSET + 0x28);
  iVar1 = *(int *)(puVar8[1] + 0x28);
  puVar14 = puVar8;
  puStack_198 = puVar13;
  pcStack_190 = pcVar11;
  puStack_188 = &uStack_178;
  puStack_180 = (undefined *)&puStack_d8;
  iVar4 = _ZN4absl12lts_2026052611MinLogLevelEv();
  if (iVar4 <= iVar1) {
    lVar6 = puVar8[1];
    if (*(char *)(lVar6 + 0x82) == '\x01') {
      _ZN4absl12lts_2026052612log_internal10LogMessage19CopyToEncodedBufferILNS2_10StringTypeE0EEEvNSt3__117basic_string_viewIcNS5_11char_traitsIcEEEE
                (puVar8,&UNK_00186281,2);
      _ZN4absl12lts_2026052613base_internal8StrErrorEi(&bStack_1c0,*(undefined4 *)puVar8);
      uVar9 = (ulong)(bStack_1c0 >> 1);
      puVar2 = &uStack_1bf;
      if ((bStack_1c0 & 1) != 0) {
        uVar9 = uStack_1b8;
        puVar2 = puStack_1b0;
      }
      _ZN4absl12lts_2026052612log_internal10LogMessage19CopyToEncodedBufferILNS2_10StringTypeE1EEEvNSt3__117basic_string_viewIcNS5_11char_traitsIcEEEE
                (puVar8,puVar2,uVar9);
      _ZN4absl12lts_2026052612log_internal10LogMessage19CopyToEncodedBufferILNS2_10StringTypeE0EEEvNSt3__117basic_string_viewIcNS5_11char_traitsIcEEEE
                (puVar8,&UNK_00161368,2);
      uStack_1a4 = *(undefined4 *)puVar8;
      uVar5 = _ZN4absl12lts_2026052612log_internal10LogMessagelsIiEERS2_RKT_(puVar8,&uStack_1a4);
      _ZN4absl12lts_2026052612log_internal10LogMessage19CopyToEncodedBufferILNS2_10StringTypeE0EEEvNSt3__117basic_string_viewIcNS5_11char_traitsIcEEEE
                (uVar5,&UNK_00178ae2,1);
      if ((bStack_1c0 & 1) != 0) {
        _ZdaPvSt11align_val_t(puStack_1b0,CONCAT71(uStack_1bf,bStack_1c0) & 0xfffffffffffffffe);
      }
      lVar6 = puVar8[1];
    }
    if ((*(int *)(lVar6 + 0x28) == 3) &&
       (cVar3 = _ZN4absl12lts_2026052612log_internal12ExitOnDFatalEv(), cVar3 != '\0')) {
      LOCK();
      bVar15 = cRam0000000000a00998 == '\0';
      if (bVar15) {
        cRam0000000000a00998 = '\x01';
      }
      UNLOCK();
      if (bVar15) {
        *(undefined1 *)(puVar8[1] + 0x80) = 1;
      }
    }
    _ZN4absl12lts_2026052612log_internal10LogMessage14LogMessageData25FinalizeEncodingAndFormatEv
              (puVar8[1]);
    lVar12 = puVar8[1];
    lVar6 = lVar12 + 0x1b8;
    lVar7 = *(long *)(lVar12 + 0x3c50);
    if (lVar7 == 0) {
      *(long *)(lVar12 + 0x3c50) = lVar6;
      *(undefined8 *)(lVar12 + 0x3c58) = 15000;
      _ZN4absl12lts_2026052612log_internal10LogMessage14LogMessageData27InitializeEncodingAndFormatEv
                (lVar12);
      lVar7 = *(long *)(lVar12 + 0x3c50);
      lVar12 = puVar8[1];
    }
    *(long *)(lVar12 + 0x58) = lVar6;
    *(long *)(lVar12 + 0x60) = (lVar7 - lVar12) + -0x1b8;
    puVar14 = puVar8;
    _ZN4absl12lts_2026052612log_internal10LogMessage9SendToLogEv();
  }
  if (*(undefined8 **)(in_FS_OFFSET + 0x28) == puStack_1a0) {
    return *(undefined8 **)(in_FS_OFFSET + 0x28);
  }
  uVar5 = func_0x0099bd00();
  if ((*(int *)(puVar14[1] + 0x28) == 3) &&
     (cVar3 = _ZN4absl12lts_2026052612log_internal12ExitOnDFatalEv(), cVar3 != '\0')) {
    _ZN4absl12lts_2026052612log_internal10LogMessage12PrepareToDieEv(puVar14);
  }
  lVar6 = puVar14[1];
  if ((*(ulong *)(lVar6 + 0x88) & 1) == 0) {
    lVar12 = lVar6 + 0x90;
  }
  else {
    lVar12 = *(long *)(lVar6 + 0x90);
  }
  _ZN4absl12lts_2026052612log_internal10LogToSinksERKNS0_8LogEntryENS0_4SpanIPNS0_7LogSinkEEEb
            (lVar6,lVar12,*(ulong *)(lVar6 + 0x88) >> 1,*(undefined1 *)(lVar6 + 0x110),param_5,
             param_6,uVar5,puVar8);
  puVar8 = (undefined8 *)puVar14[1];
  if ((*(int *)(puVar8 + 5) == 3) &&
     (puVar8 = (undefined8 *)_ZN4absl12lts_2026052612log_internal12ExitOnDFatalEv(),
     (char)puVar8 != '\0')) {
    _ZN4absl12lts_2026052612log_internal13FlushLogSinksEv();
    if (*(char *)(puVar14[1] + 0x81) == '\x01') {
      _ZN4absl12lts_2026052612log_internal10LogMessage11FailQuietlyEv();
    }
    _ZN4absl12lts_2026052612log_internal10LogMessage21FailWithoutStackTraceEv();
    puVar8 = *(undefined8 **)(lVar6 + 8);
    *(undefined1 *)((long)puVar8 + 0x81) = 1;
    return puVar8;
  }
  return puVar8;
}


