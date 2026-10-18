// Function: _ZN4absl12lts_2026052612log_internal10LogMessage11OstreamViewD2Ev
// Address: 004bc210
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN4absl12lts_2026052612log_internal10LogMessage11OstreamViewD2Ev(undefined8 *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  
  lVar7 = param_1[8];
  lVar8 = *(long *)(*(long *)(lVar7 + 0x118) + -0x18);
  *(undefined8 *)(lVar7 + 0x140 + lVar8) = 0;
  _ZNSt3__18ios_base5clearEj(lVar7 + lVar8 + 0x118,0);
  if (param_1[0xd] == 0) {
    lVar7 = param_1[8];
    lVar8 = lVar7;
    if (*(long *)(lVar7 + 0x3c50) == 0) {
      *(long *)(lVar7 + 0x3c50) = lVar7 + 0x1b8;
      *(undefined8 *)(lVar7 + 0x3c58) = 15000;
      _ZN4absl12lts_2026052612log_internal10LogMessage14LogMessageData27InitializeEncodingAndFormatEv
                (lVar7);
      lVar8 = param_1[8];
      if (*(long *)(lVar8 + 0x3c50) == 0) {
        *(long *)(lVar8 + 0x3c50) = lVar8 + 0x1b8;
        *(undefined8 *)(lVar8 + 0x3c58) = 15000;
        _ZN4absl12lts_2026052612log_internal10LogMessage14LogMessageData27InitializeEncodingAndFormatEv
                  (lVar8);
      }
    }
    *(long *)(lVar7 + 0x3c58) = *(long *)(lVar7 + 0x3c58) - *(long *)(lVar8 + 0x3c58);
  }
  else {
    lVar7 = param_1[6] - param_1[5];
    if (lVar7 != 0) {
      puVar1 = param_1 + 9;
      param_1[9] = param_1[9] + lVar7;
      param_1[10] = param_1[10] - lVar7;
      _ZN4absl12lts_2026052612log_internal19EncodeMessageLengthENS0_4SpanIcEEPKS3_
                (param_1[0xd],param_1[0xe],puVar1);
      _ZN4absl12lts_2026052612log_internal19EncodeMessageLengthENS0_4SpanIcEEPKS3_
                (param_1[0xb],param_1[0xc],puVar1);
      lVar7 = param_1[8];
      if (*(long *)(lVar7 + 0x3c50) == 0) {
        *(long *)(lVar7 + 0x3c50) = lVar7 + 0x1b8;
        *(undefined8 *)(lVar7 + 0x3c58) = 15000;
        _ZN4absl12lts_2026052612log_internal10LogMessage14LogMessageData27InitializeEncodingAndFormatEv
                  ();
      }
      uVar4 = *(undefined4 *)((long)param_1 + 0x4c);
      uVar5 = *(undefined4 *)(param_1 + 10);
      uVar6 = *(undefined4 *)((long)param_1 + 0x54);
      *(undefined4 *)(lVar7 + 0x3c50) = *(undefined4 *)puVar1;
      *(undefined4 *)(lVar7 + 0x3c54) = uVar4;
      *(undefined4 *)(lVar7 + 0x3c58) = uVar5;
      *(undefined4 *)(lVar7 + 0x3c5c) = uVar6;
    }
  }
  *param_1 = 0x9b9bf8;
  plVar3 = (long *)param_1[1];
  if (plVar3 != (long *)0xa06c60) {
    LOCK();
    plVar2 = plVar3 + 1;
    lVar7 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar7 == 0) {
                    /* WARNING: Could not recover jumptable at 0x008e8b45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}


