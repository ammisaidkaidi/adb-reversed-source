// Function: _ZN4absl12lts_2026052612log_internal10LogMessage11OstreamViewC2ERNS2_14LogMessageDataE
// Address: 004bc100
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN4absl12lts_2026052612log_internal10LogMessage11OstreamViewC2ERNS2_14LogMessageDataE
               (undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  
  *param_1 = 0x9b9bf8;
  _ZNSt3__16localeC2Ev(param_1 + 1);
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0x99fc58;
  param_1[8] = param_2;
  if (*(long *)(param_2 + 0x3c50) == 0) {
    *(long *)(param_2 + 0x3c50) = param_2 + 0x1b8;
    *(undefined8 *)(param_2 + 0x3c58) = 15000;
    _ZN4absl12lts_2026052612log_internal10LogMessage14LogMessageData27InitializeEncodingAndFormatEv
              (param_2);
  }
  uVar5 = *(undefined4 *)(param_2 + 0x3c54);
  uVar6 = *(undefined4 *)(param_2 + 0x3c58);
  uVar7 = *(undefined4 *)(param_2 + 0x3c5c);
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x3c50);
  *(undefined4 *)((long)param_1 + 0x4c) = uVar5;
  *(undefined4 *)(param_1 + 10) = uVar6;
  *(undefined4 *)((long)param_1 + 0x54) = uVar7;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  auVar9 = _ZN4absl12lts_2026052612log_internal18EncodeMessageStartEmmPNS0_4SpanIcEE
                     (7,param_1[10],param_1 + 9);
  *(undefined1 (*) [16])(param_1 + 0xb) = auVar9;
  auVar9 = _ZN4absl12lts_2026052612log_internal18EncodeMessageStartEmmPNS0_4SpanIcEE
                     (1,param_1[10],param_1 + 9);
  *(undefined1 (*) [16])(param_1 + 0xd) = auVar9;
  lVar1 = param_1[8];
  lVar2 = param_1[9];
  param_1[6] = lVar2;
  param_1[5] = lVar2;
  param_1[7] = param_1[10] + lVar2;
  lVar3 = *(long *)(*(long *)(lVar1 + 0x118) + -0x18);
  lVar2 = lVar1 + lVar3;
  *(undefined8 **)(lVar1 + 0x140 + lVar3) = param_1;
  uVar8 = (uint)(*(long *)(lVar2 + 0x140) == 0);
  *(uint *)(lVar2 + 0x138) = uVar8;
  if ((*(uint *)(lVar2 + 0x13c) & uVar8) == 0) {
    return;
  }
  func_0x008b8b90(&UNK_001640a1);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


