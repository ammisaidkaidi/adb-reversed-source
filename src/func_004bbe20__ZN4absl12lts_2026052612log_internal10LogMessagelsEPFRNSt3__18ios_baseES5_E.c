// Function: _ZN4absl12lts_2026052612log_internal10LogMessagelsEPFRNSt3__18ios_baseES5_E
// Address: 004bbe20
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long _ZN4absl12lts_2026052612log_internal10LogMessagelsEPFRNSt3__18ios_baseES5_E
               (long param_1,code *param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
               undefined8 param_6)

{
  int iVar1;
  undefined7 *puVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long in_FS_OFFSET;
  bool bVar12;
  byte bStack_f0;
  undefined7 uStack_ef;
  ulong uStack_e8;
  undefined7 *puStack_e0;
  undefined4 uStack_d4;
  long lStack_d0;
  long lStack_c8;
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
  puStack_b0 = &UNK_004bbe83;
  _ZN4absl12lts_2026052612log_internal10LogMessage11OstreamViewC2ERNS2_14LogMessageDataE
            (&uStack_a8,*(undefined8 *)(param_1 + 8));
  puStack_b0 = &UNK_004bbe9c;
  (*param_2)(*(long *)(param_1 + 8) + 0x118 +
             *(long *)(*(long *)(*(long *)(param_1 + 8) + 0x118) + -0x18));
  puStack_b0 = &UNK_004bbea4;
  puVar10 = &uStack_a8;
  _ZN4absl12lts_2026052612log_internal10LogMessage11OstreamViewD2Ev();
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_28) {
    return param_1;
  }
  puStack_b0 = &UNK_004bbec9;
  func_0x0099bd00();
  lStack_d0 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = *(int *)(puVar10[1] + 0x28);
  puVar11 = puVar10;
  lStack_c8 = param_1;
  pcStack_c0 = param_2;
  puStack_b8 = &uStack_a8;
  puStack_b0 = &stack0xfffffffffffffff8;
  iVar4 = _ZN4absl12lts_2026052611MinLogLevelEv();
  if (iVar4 <= iVar1) {
    lVar6 = puVar10[1];
    if (*(char *)(lVar6 + 0x82) == '\x01') {
      _ZN4absl12lts_2026052612log_internal10LogMessage19CopyToEncodedBufferILNS2_10StringTypeE0EEEvNSt3__117basic_string_viewIcNS5_11char_traitsIcEEEE
                (puVar10,&UNK_00186281,2);
      _ZN4absl12lts_2026052613base_internal8StrErrorEi(&bStack_f0,*(undefined4 *)puVar10);
      uVar9 = (ulong)(bStack_f0 >> 1);
      puVar2 = &uStack_ef;
      if ((bStack_f0 & 1) != 0) {
        uVar9 = uStack_e8;
        puVar2 = puStack_e0;
      }
      _ZN4absl12lts_2026052612log_internal10LogMessage19CopyToEncodedBufferILNS2_10StringTypeE1EEEvNSt3__117basic_string_viewIcNS5_11char_traitsIcEEEE
                (puVar10,puVar2,uVar9);
      _ZN4absl12lts_2026052612log_internal10LogMessage19CopyToEncodedBufferILNS2_10StringTypeE0EEEvNSt3__117basic_string_viewIcNS5_11char_traitsIcEEEE
                (puVar10,&UNK_00161368,2);
      uStack_d4 = *(undefined4 *)puVar10;
      uVar5 = _ZN4absl12lts_2026052612log_internal10LogMessagelsIiEERS2_RKT_(puVar10,&uStack_d4);
      _ZN4absl12lts_2026052612log_internal10LogMessage19CopyToEncodedBufferILNS2_10StringTypeE0EEEvNSt3__117basic_string_viewIcNS5_11char_traitsIcEEEE
                (uVar5,&UNK_00178ae2,1);
      if ((bStack_f0 & 1) != 0) {
        _ZdaPvSt11align_val_t(puStack_e0,CONCAT71(uStack_ef,bStack_f0) & 0xfffffffffffffffe);
      }
      lVar6 = puVar10[1];
    }
    if ((*(int *)(lVar6 + 0x28) == 3) &&
       (cVar3 = _ZN4absl12lts_2026052612log_internal12ExitOnDFatalEv(), cVar3 != '\0')) {
      LOCK();
      bVar12 = cRam0000000000a00998 == '\0';
      if (bVar12) {
        cRam0000000000a00998 = '\x01';
      }
      UNLOCK();
      if (bVar12) {
        *(undefined1 *)(puVar10[1] + 0x80) = 1;
      }
    }
    _ZN4absl12lts_2026052612log_internal10LogMessage14LogMessageData25FinalizeEncodingAndFormatEv
              (puVar10[1]);
    lVar8 = puVar10[1];
    lVar6 = lVar8 + 0x1b8;
    lVar7 = *(long *)(lVar8 + 0x3c50);
    if (lVar7 == 0) {
      *(long *)(lVar8 + 0x3c50) = lVar6;
      *(undefined8 *)(lVar8 + 0x3c58) = 15000;
      _ZN4absl12lts_2026052612log_internal10LogMessage14LogMessageData27InitializeEncodingAndFormatEv
                (lVar8);
      lVar7 = *(long *)(lVar8 + 0x3c50);
      lVar8 = puVar10[1];
    }
    *(long *)(lVar8 + 0x58) = lVar6;
    *(long *)(lVar8 + 0x60) = (lVar7 - lVar8) + -0x1b8;
    puVar11 = puVar10;
    _ZN4absl12lts_2026052612log_internal10LogMessage9SendToLogEv();
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_d0) {
    return *(long *)(in_FS_OFFSET + 0x28);
  }
  uVar5 = func_0x0099bd00();
  if ((*(int *)(puVar11[1] + 0x28) == 3) &&
     (cVar3 = _ZN4absl12lts_2026052612log_internal12ExitOnDFatalEv(), cVar3 != '\0')) {
    _ZN4absl12lts_2026052612log_internal10LogMessage12PrepareToDieEv(puVar11);
  }
  lVar6 = puVar11[1];
  if ((*(ulong *)(lVar6 + 0x88) & 1) == 0) {
    lVar8 = lVar6 + 0x90;
  }
  else {
    lVar8 = *(long *)(lVar6 + 0x90);
  }
  _ZN4absl12lts_2026052612log_internal10LogToSinksERKNS0_8LogEntryENS0_4SpanIPNS0_7LogSinkEEEb
            (lVar6,lVar8,*(ulong *)(lVar6 + 0x88) >> 1,*(undefined1 *)(lVar6 + 0x110),param_5,
             param_6,uVar5,puVar10);
  lVar8 = puVar11[1];
  if ((*(int *)(lVar8 + 0x28) == 3) &&
     (lVar8 = _ZN4absl12lts_2026052612log_internal12ExitOnDFatalEv(), (char)lVar8 != '\0')) {
    _ZN4absl12lts_2026052612log_internal13FlushLogSinksEv();
    if (*(char *)(puVar11[1] + 0x81) == '\x01') {
      _ZN4absl12lts_2026052612log_internal10LogMessage11FailQuietlyEv();
    }
    _ZN4absl12lts_2026052612log_internal10LogMessage21FailWithoutStackTraceEv();
    lVar6 = *(long *)(lVar6 + 8);
    *(undefined1 *)(lVar6 + 0x81) = 1;
    return lVar6;
  }
  return lVar8;
}


