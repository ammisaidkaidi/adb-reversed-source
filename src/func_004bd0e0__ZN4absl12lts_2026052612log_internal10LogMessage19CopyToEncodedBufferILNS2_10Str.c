// Function: _ZN4absl12lts_2026052612log_internal10LogMessage19CopyToEncodedBufferILNS2_10StringTypeE0EEEvcm
// Address: 004bd0e0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN4absl12lts_2026052612log_internal10LogMessage19CopyToEncodedBufferILNS2_10StringTypeE0EEEvcm
               (long param_1,undefined1 param_2,ulong param_3)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  long in_FS_OFFSET;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = *(long *)(param_1 + 8);
  if (*(long *)(lVar1 + 0x3c50) == 0) {
    *(long *)(lVar1 + 0x3c50) = lVar1 + 0x1b8;
    *(undefined8 *)(lVar1 + 0x3c58) = 15000;
    _ZN4absl12lts_2026052612log_internal10LogMessage14LogMessageData27InitializeEncodingAndFormatEv
              ();
  }
  uStack_48 = *(long *)(lVar1 + 0x3c50);
  uStack_40 = *(ulong *)(lVar1 + 0x3c58);
  auVar5 = _ZN4absl12lts_2026052612log_internal18EncodeMessageStartEmmPNS0_4SpanIcEE
                     (7,param_3 + 0xb,&uStack_48);
  auVar6 = _ZN4absl12lts_2026052612log_internal18EncodeMessageStartEmmPNS0_4SpanIcEE
                     (6,param_3,&uStack_48);
  if (auVar6._0_8_ == 0) {
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
    uVar3 = uStack_40;
    if (param_3 < uStack_40) {
      uVar3 = param_3;
    }
    func_0x0099bdb0(uStack_48,param_2,uVar3);
    uStack_48 = uStack_48 + uVar3;
    uStack_40 = uStack_40 - uVar3;
    _ZN4absl12lts_2026052612log_internal19EncodeMessageLengthENS0_4SpanIcEEPKS3_
              (auVar6._0_8_,auVar6._8_8_,&uStack_48);
    _ZN4absl12lts_2026052612log_internal19EncodeMessageLengthENS0_4SpanIcEEPKS3_
              (auVar5._0_8_,auVar5._8_8_,&uStack_48);
    lVar1 = *(long *)(param_1 + 8);
    if (*(long *)(lVar1 + 0x3c50) == 0) {
      *(long *)(lVar1 + 0x3c50) = lVar1 + 0x1b8;
      *(undefined8 *)(lVar1 + 0x3c58) = 15000;
      _ZN4absl12lts_2026052612log_internal10LogMessage14LogMessageData27InitializeEncodingAndFormatEv
                ();
    }
    *(undefined4 *)(lVar1 + 0x3c50) = (undefined4)uStack_48;
    *(undefined4 *)(lVar1 + 0x3c54) = uStack_48._4_4_;
    *(undefined4 *)(lVar1 + 0x3c58) = (undefined4)uStack_40;
    *(undefined4 *)(lVar1 + 0x3c5c) = uStack_40._4_4_;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return;
  }
  func_0x0099bd00();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


