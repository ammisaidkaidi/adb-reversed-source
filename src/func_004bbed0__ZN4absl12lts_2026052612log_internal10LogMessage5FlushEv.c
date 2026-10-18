// Function: _ZN4absl12lts_2026052612log_internal10LogMessage5FlushEv
// Address: 004bbed0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN4absl12lts_2026052612log_internal10LogMessage5FlushEv(undefined4 *param_1)

{
  int iVar1;
  undefined7 *puVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined4 *puVar10;
  undefined8 in_R8;
  undefined8 in_R9;
  long in_FS_OFFSET;
  bool bVar11;
  byte bStack_48;
  undefined7 uStack_47;
  ulong uStack_40;
  undefined7 *puStack_38;
  undefined4 uStack_2c;
  long lStack_28;
  
  lStack_28 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = *(int *)(*(long *)(param_1 + 2) + 0x28);
  puVar10 = param_1;
  iVar4 = _ZN4absl12lts_2026052611MinLogLevelEv();
  if (iVar4 <= iVar1) {
    lVar6 = *(long *)(param_1 + 2);
    if (*(char *)(lVar6 + 0x82) == '\x01') {
      _ZN4absl12lts_2026052612log_internal10LogMessage19CopyToEncodedBufferILNS2_10StringTypeE0EEEvNSt3__117basic_string_viewIcNS5_11char_traitsIcEEEE
                (param_1,&UNK_00186281,2);
      _ZN4absl12lts_2026052613base_internal8StrErrorEi(&bStack_48,*param_1);
      uVar8 = (ulong)(bStack_48 >> 1);
      puVar2 = &uStack_47;
      if ((bStack_48 & 1) != 0) {
        uVar8 = uStack_40;
        puVar2 = puStack_38;
      }
      _ZN4absl12lts_2026052612log_internal10LogMessage19CopyToEncodedBufferILNS2_10StringTypeE1EEEvNSt3__117basic_string_viewIcNS5_11char_traitsIcEEEE
                (param_1,puVar2,uVar8);
      _ZN4absl12lts_2026052612log_internal10LogMessage19CopyToEncodedBufferILNS2_10StringTypeE0EEEvNSt3__117basic_string_viewIcNS5_11char_traitsIcEEEE
                (param_1,&UNK_00161368,2);
      uStack_2c = *param_1;
      uVar5 = _ZN4absl12lts_2026052612log_internal10LogMessagelsIiEERS2_RKT_(param_1,&uStack_2c);
      _ZN4absl12lts_2026052612log_internal10LogMessage19CopyToEncodedBufferILNS2_10StringTypeE0EEEvNSt3__117basic_string_viewIcNS5_11char_traitsIcEEEE
                (uVar5,&UNK_00178ae2,1);
      if ((bStack_48 & 1) != 0) {
        _ZdaPvSt11align_val_t(puStack_38,CONCAT71(uStack_47,bStack_48) & 0xfffffffffffffffe);
      }
      lVar6 = *(long *)(param_1 + 2);
    }
    if ((*(int *)(lVar6 + 0x28) == 3) &&
       (cVar3 = _ZN4absl12lts_2026052612log_internal12ExitOnDFatalEv(), cVar3 != '\0')) {
      LOCK();
      bVar11 = cRam0000000000a00998 == '\0';
      if (bVar11) {
        cRam0000000000a00998 = '\x01';
      }
      UNLOCK();
      if (bVar11) {
        *(undefined1 *)(*(long *)(param_1 + 2) + 0x80) = 1;
      }
    }
    _ZN4absl12lts_2026052612log_internal10LogMessage14LogMessageData25FinalizeEncodingAndFormatEv
              (*(undefined8 *)(param_1 + 2));
    lVar9 = *(long *)(param_1 + 2);
    lVar6 = lVar9 + 0x1b8;
    lVar7 = *(long *)(lVar9 + 0x3c50);
    if (lVar7 == 0) {
      *(long *)(lVar9 + 0x3c50) = lVar6;
      *(undefined8 *)(lVar9 + 0x3c58) = 15000;
      _ZN4absl12lts_2026052612log_internal10LogMessage14LogMessageData27InitializeEncodingAndFormatEv
                (lVar9);
      lVar7 = *(long *)(lVar9 + 0x3c50);
      lVar9 = *(long *)(param_1 + 2);
    }
    *(long *)(lVar9 + 0x58) = lVar6;
    *(long *)(lVar9 + 0x60) = (lVar7 - lVar9) + -0x1b8;
    puVar10 = param_1;
    _ZN4absl12lts_2026052612log_internal10LogMessage9SendToLogEv();
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_28) {
    return;
  }
  uVar5 = func_0x0099bd00();
  if ((*(int *)(*(long *)(puVar10 + 2) + 0x28) == 3) &&
     (cVar3 = _ZN4absl12lts_2026052612log_internal12ExitOnDFatalEv(), cVar3 != '\0')) {
    _ZN4absl12lts_2026052612log_internal10LogMessage12PrepareToDieEv(puVar10);
  }
  lVar6 = *(long *)(puVar10 + 2);
  if ((*(ulong *)(lVar6 + 0x88) & 1) == 0) {
    lVar9 = lVar6 + 0x90;
  }
  else {
    lVar9 = *(long *)(lVar6 + 0x90);
  }
  _ZN4absl12lts_2026052612log_internal10LogToSinksERKNS0_8LogEntryENS0_4SpanIPNS0_7LogSinkEEEb
            (lVar6,lVar9,*(ulong *)(lVar6 + 0x88) >> 1,*(undefined1 *)(lVar6 + 0x110),in_R8,in_R9,
             uVar5,param_1);
  if ((*(int *)(*(long *)(puVar10 + 2) + 0x28) == 3) &&
     (cVar3 = _ZN4absl12lts_2026052612log_internal12ExitOnDFatalEv(), cVar3 != '\0')) {
    _ZN4absl12lts_2026052612log_internal13FlushLogSinksEv();
    if (*(char *)(*(long *)(puVar10 + 2) + 0x81) == '\x01') {
      _ZN4absl12lts_2026052612log_internal10LogMessage11FailQuietlyEv();
    }
    _ZN4absl12lts_2026052612log_internal10LogMessage21FailWithoutStackTraceEv();
    *(undefined1 *)(*(long *)(lVar6 + 8) + 0x81) = 1;
    return;
  }
  return;
}


