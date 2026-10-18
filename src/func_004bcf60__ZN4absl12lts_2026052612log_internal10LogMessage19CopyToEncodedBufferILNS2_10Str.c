// Function: _ZN4absl12lts_2026052612log_internal10LogMessage19CopyToEncodedBufferILNS2_10StringTypeE1EEEvNSt3__117basic_string_viewIcNS5_11char_traitsIcEEEE
// Address: 004bcf60
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN4absl12lts_2026052612log_internal10LogMessage19CopyToEncodedBufferILNS2_10StringTypeE1EEEvNSt3__117basic_string_viewIcNS5_11char_traitsIcEEEE
               (long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  code *pcVar2;
  char cVar3;
  long lVar4;
  long in_FS_OFFSET;
  undefined1 auVar5 [16];
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = *(long *)(param_1 + 8);
  if (*(long *)(lVar1 + 0x3c50) == 0) {
    *(long *)(lVar1 + 0x3c50) = lVar1 + 0x1b8;
    *(undefined8 *)(lVar1 + 0x3c58) = 15000;
    _ZN4absl12lts_2026052612log_internal10LogMessage14LogMessageData27InitializeEncodingAndFormatEv
              ();
  }
  uStack_48 = *(undefined4 *)(lVar1 + 0x3c50);
  uStack_44 = *(undefined4 *)(lVar1 + 0x3c54);
  uStack_40 = *(undefined4 *)(lVar1 + 0x3c58);
  uStack_3c = *(undefined4 *)(lVar1 + 0x3c5c);
  auVar5 = _ZN4absl12lts_2026052612log_internal18EncodeMessageStartEmmPNS0_4SpanIcEE
                     (7,param_3 + 0xb,&uStack_48);
  cVar3 = _ZN4absl12lts_2026052612log_internal19EncodeBytesTruncateEmNS0_4SpanIKcEEPNS2_IcEE
                    (1,param_2,param_3,&uStack_48);
  if (cVar3 == '\0') {
    lVar1 = *(long *)(param_1 + 8);
    lVar4 = lVar1;
    if (*(long *)(lVar1 + 0x3c50) == 0) {
      *(long *)(lVar1 + 0x3c50) = lVar1 + 0x1b8;
      *(undefined8 *)(lVar1 + 0x3c58) = 15000;
      _ZN4absl12lts_2026052612log_internal10LogMessage14LogMessageData27InitializeEncodingAndFormatEv
                (lVar1);
      lVar4 = *(long *)(param_1 + 8);
      if (*(long *)(lVar4 + 0x3c50) == 0) {
        *(long *)(lVar4 + 0x3c50) = lVar4 + 0x1b8;
        *(undefined8 *)(lVar4 + 0x3c58) = 15000;
        _ZN4absl12lts_2026052612log_internal10LogMessage14LogMessageData27InitializeEncodingAndFormatEv
                  (lVar4);
      }
    }
    *(long *)(lVar1 + 0x3c58) = *(long *)(lVar1 + 0x3c58) - *(long *)(lVar4 + 0x3c58);
  }
  else {
    _ZN4absl12lts_2026052612log_internal19EncodeMessageLengthENS0_4SpanIcEEPKS3_
              (auVar5._0_8_,auVar5._8_8_,&uStack_48);
    lVar1 = *(long *)(param_1 + 8);
    if (*(long *)(lVar1 + 0x3c50) == 0) {
      *(long *)(lVar1 + 0x3c50) = lVar1 + 0x1b8;
      *(undefined8 *)(lVar1 + 0x3c58) = 15000;
      _ZN4absl12lts_2026052612log_internal10LogMessage14LogMessageData27InitializeEncodingAndFormatEv
                ();
    }
    *(undefined4 *)(lVar1 + 0x3c50) = uStack_48;
    *(undefined4 *)(lVar1 + 0x3c54) = uStack_44;
    *(undefined4 *)(lVar1 + 0x3c58) = uStack_40;
    *(undefined4 *)(lVar1 + 0x3c5c) = uStack_3c;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return;
  }
  func_0x0099bd00();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


