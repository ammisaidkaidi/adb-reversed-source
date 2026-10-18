// Function: _ZN4absl12lts_2026052612log_internal10LogMessage43CopyToEncodedBufferWithStructuredProtoFieldILNS2_10StringTypeE1EEEvNS1_20StructuredProtoFieldENSt3__117basic_string_viewIcNS6_11char_traitsIcEEEE
// Address: 004be030
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN4absl12lts_2026052612log_internal10LogMessage43CopyToEncodedBufferWithStructuredProtoFieldILNS2_10StringTypeE1EEEvNS1_20StructuredProtoFieldENSt3__117basic_string_viewIcNS6_11char_traitsIcEEEE
               (long param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5,
               undefined8 param_6,undefined8 param_7,undefined4 param_8,undefined4 param_9,
               undefined4 param_10,ulong param_11)

{
  code *pcVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long in_FS_OFFSET;
  undefined1 auVar5 [16];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  undefined4 uStack_68;
  undefined4 uStack_60;
  undefined4 auStack_58 [2];
  undefined4 uStack_50;
  ulong uStack_48;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = *(long *)(param_1 + 8);
  if (*(long *)(lVar3 + 0x3c50) == 0) {
    *(long *)(lVar3 + 0x3c50) = lVar3 + 0x1b8;
    *(undefined8 *)(lVar3 + 0x3c58) = 15000;
    _ZN4absl12lts_2026052612log_internal10LogMessage14LogMessageData27InitializeEncodingAndFormatEv
              ();
  }
  uStack_88 = *(undefined8 *)(lVar3 + 0x3c50);
  uStack_80 = *(undefined8 *)(lVar3 + 0x3c58);
  uStack_48 = param_11;
  auStack_58[0] = param_9;
  uStack_50 = param_10;
  uStack_68 = (undefined4)param_7;
  uStack_60 = param_8;
  uStack_78 = param_7;
  if ((param_11 & 0xffffffff) == 0xffffffff) {
    func_0x0043f2f0();
    goto code_r0x004be238;
  }
  puStack_70 = &uStack_78;
  lVar3 = (**(code **)(&UNK_0099fcc8 + (param_11 & 0xffffffff) * 8))(&puStack_70,auStack_58);
  auVar5 = _ZN4absl12lts_2026052612log_internal18EncodeMessageStartEmmPNS0_4SpanIcEE
                     (7,param_3 + lVar3 + 0xb,&uStack_88);
  cVar2 = _ZN4absl12lts_2026052612log_internal26EncodeStructuredProtoFieldENS1_20StructuredProtoFieldERNS0_4SpanIcEE
                    (&uStack_88);
  if (cVar2 == '\0') {
code_r0x004be1a3:
    lVar3 = *(long *)(param_1 + 8);
    lVar4 = lVar3;
    if (*(long *)(lVar3 + 0x3c50) == 0) {
      *(long *)(lVar3 + 0x3c50) = lVar3 + 0x1b8;
      *(undefined8 *)(lVar3 + 0x3c58) = 15000;
      _ZN4absl12lts_2026052612log_internal10LogMessage14LogMessageData27InitializeEncodingAndFormatEv
                (lVar3);
      lVar4 = *(long *)(param_1 + 8);
      if (*(long *)(lVar4 + 0x3c50) == 0) {
        *(long *)(lVar4 + 0x3c50) = lVar4 + 0x1b8;
        *(undefined8 *)(lVar4 + 0x3c58) = 15000;
        _ZN4absl12lts_2026052612log_internal10LogMessage14LogMessageData27InitializeEncodingAndFormatEv
                  (lVar4);
      }
    }
    *(long *)(lVar3 + 0x3c58) = *(long *)(lVar3 + 0x3c58) - *(long *)(lVar4 + 0x3c58);
  }
  else {
    cVar2 = _ZN4absl12lts_2026052612log_internal19EncodeBytesTruncateEmNS0_4SpanIKcEEPNS2_IcEE
                      (1,param_2,param_3,&uStack_88,param_5,param_6,(undefined4)param_7,param_8,
                       param_9,param_10,param_11);
    if (cVar2 == '\0') goto code_r0x004be1a3;
    _ZN4absl12lts_2026052612log_internal19EncodeMessageLengthENS0_4SpanIcEEPKS3_
              (auVar5._0_8_,auVar5._8_8_,&uStack_88);
    lVar3 = *(long *)(param_1 + 8);
    if (*(long *)(lVar3 + 0x3c50) == 0) {
      *(long *)(lVar3 + 0x3c50) = lVar3 + 0x1b8;
      *(undefined8 *)(lVar3 + 0x3c58) = 15000;
      _ZN4absl12lts_2026052612log_internal10LogMessage14LogMessageData27InitializeEncodingAndFormatEv
                ();
    }
    *(undefined4 *)(lVar3 + 0x3c50) = (undefined4)uStack_88;
    *(undefined4 *)(lVar3 + 0x3c54) = uStack_88._4_4_;
    *(undefined4 *)(lVar3 + 0x3c58) = (undefined4)uStack_80;
    *(undefined4 *)(lVar3 + 0x3c5c) = uStack_80._4_4_;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return;
  }
code_r0x004be238:
  func_0x0099bd00();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


