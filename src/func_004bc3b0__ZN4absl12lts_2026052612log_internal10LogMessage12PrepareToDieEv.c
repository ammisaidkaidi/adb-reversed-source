// Function: _ZN4absl12lts_2026052612log_internal10LogMessage12PrepareToDieEv
// Address: 004bc3b0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN4absl12lts_2026052612log_internal10LogMessage12PrepareToDieEv(long param_1)

{
  code *pcVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  undefined1 *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  long in_FS_OFFSET;
  long lStack_a58;
  undefined1 auStack_a38 [512];
  undefined1 auStack_838 [1024];
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined4 uStack_3d8;
  long lStack_38;
  
  lVar8 = *(long *)(param_1 + 8);
  if (*(char *)(lVar8 + 0x80) == '\x01') {
    AbslInternalOnFatalLogMessage_lts_20260526();
    lVar8 = *(long *)(param_1 + 8);
  }
  if (*(char *)(lVar8 + 0x81) != '\0') {
    return;
  }
  if ((*(ulong *)(lVar8 + 0x88) & 1) == 0) {
    lVar7 = lVar8 + 0x90;
  }
  else {
    lVar7 = *(long *)(lVar8 + 0x90);
  }
  _ZN4absl12lts_2026052612log_internal10LogToSinksERKNS0_8LogEntryENS0_4SpanIPNS0_7LogSinkEEEb
            (lVar8,lVar7,*(ulong *)(lVar8 + 0x88) >> 1,*(undefined1 *)(lVar8 + 0x110));
  func_0x0032ea60(*(long *)(param_1 + 8) + 0x68,&UNK_00163209);
  uVar4 = _ZN4absl12lts_2026052612log_internal24MaxFramesInLogStackTraceEv();
  uVar6 = (ulong)uVar4;
  cVar2 = _ZN4absl12lts_2026052612log_internal28ShouldSymbolizeLogStackTraceEv();
  lVar8 = *(long *)(param_1 + 8) + 0x68;
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  if ((int)uVar4 < 0x41) {
    lStack_a58 = 0;
    puVar5 = auStack_a38;
  }
  else {
    lStack_a58 = uVar6 << 3;
    puVar5 = (undefined1 *)func_0x0099c720(0,lStack_a58,3,0x22,0xffffffff,0);
    if (puVar5 == (undefined1 *)0xffffffffffffffff) {
      puVar5 = (undefined1 *)0x0;
    }
    if (puVar5 == (undefined1 *)0x0) {
      uVar6 = 0x40;
      lStack_a58 = 0;
      puVar5 = auStack_a38;
    }
  }
  func_0x0099bdb0(auStack_a38,0,0x200);
  uVar4 = _ZN4absl12lts_2026052613GetStackTraceEPPvii(puVar5,uVar6,1);
  if (0 < (int)uVar4) {
    uVar6 = 0;
    do {
      lVar7 = *(long *)(puVar5 + uVar6 * 8);
      if (cVar2 == '\0') {
        uStack_3e8 = 0;
        uStack_3e0 = 0;
        uStack_3f8 = 0;
        uStack_3f0 = 0;
        uStack_408 = 0;
        uStack_400 = 0;
        uStack_418 = 0;
        uStack_410 = 0;
        uStack_428 = 0;
        uStack_420 = 0;
        uStack_438 = 0;
        uStack_430 = 0;
        uStack_3d8 = 0;
        func_0x0099c030(&uStack_438,100,&UNK_0015b604,&UNK_00181eb9,0x12,lVar7);
        (*(code *)&UNK_004bc450)(&uStack_438,lVar8);
      }
      else {
        func_0x0099bdb0(&uStack_438,0,0x400);
        cVar3 = _ZN4absl12lts_202605269SymbolizeEPKvPci(lVar7 + -1,&uStack_438,0x400);
        if (cVar3 == '\0') {
          cVar3 = _ZN4absl12lts_202605269SymbolizeEPKvPci(lVar7,&uStack_438,0x400);
          puVar9 = (undefined8 *)&UNK_001743fe;
          if (cVar3 != '\0') goto code_r0x004eebdc;
        }
        else {
code_r0x004eebdc:
          puVar9 = &uStack_438;
        }
        func_0x0099bdb0(auStack_838,0,0x400);
        func_0x0099c030(auStack_838,0x400,&UNK_00169a62,&UNK_00181eb9,0x12,lVar7,puVar9);
        (*(code *)&UNK_004bc450)(auStack_838);
      }
      uVar6 = uVar6 + 1;
    } while (uVar4 != uVar6);
  }
  if (pcRam0000000000a02f90 != (code *)0x0) {
    (*pcRam0000000000a02f90)(puVar5,uVar4,0,&UNK_004bc450,lVar8);
  }
  if (lStack_a58 != 0) {
    func_0x0099c710(puVar5);
  }
  if (*(long *)(in_FS_OFFSET + 0x28) != lStack_38) {
    func_0x0099bd00();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}


