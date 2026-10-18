// Function: _ZN4absl12lts_2026052618debugging_internal14DumpStackTraceEiibPFvPKcPvES4_
// Address: 004eea10
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN4absl12lts_2026052618debugging_internal14DumpStackTraceEiibPFvPKcPvES4_
               (int param_1,ulong param_2,char param_3,code *param_4,undefined8 param_5)

{
  long lVar1;
  code *pcVar2;
  char cVar3;
  uint uVar4;
  undefined1 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
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
  
  uVar6 = param_2 & 0xffffffff;
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  if ((int)param_2 < 0x41) {
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
      lStack_a58 = 0;
    }
    uVar6 = param_2 & 0xffffffff;
    if (puVar5 == (undefined1 *)0x0) {
      uVar6 = 0x40;
      puVar5 = auStack_a38;
    }
  }
  func_0x0099bdb0(auStack_a38,0,0x200);
  uVar4 = _ZN4absl12lts_2026052613GetStackTraceEPPvii(puVar5,uVar6,param_1 + 1);
  if (0 < (int)uVar4) {
    uVar6 = 0;
    do {
      lVar1 = *(long *)(puVar5 + uVar6 * 8);
      if (param_3 == '\0') {
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
        func_0x0099c030(&uStack_438,100,&UNK_0015b604,&UNK_00181eb9,0x12,lVar1);
        (*param_4)(&uStack_438,param_5);
      }
      else {
        func_0x0099bdb0(&uStack_438,0,0x400);
        cVar3 = _ZN4absl12lts_202605269SymbolizeEPKvPci(lVar1 + -1,&uStack_438,0x400);
        if (cVar3 == '\0') {
          cVar3 = _ZN4absl12lts_202605269SymbolizeEPKvPci(lVar1,&uStack_438,0x400);
          puVar7 = (undefined8 *)&UNK_001743fe;
          if (cVar3 != '\0') goto code_r0x004eebdc;
        }
        else {
code_r0x004eebdc:
          puVar7 = &uStack_438;
        }
        func_0x0099bdb0(auStack_838,0,0x400);
        func_0x0099c030(auStack_838,0x400,&UNK_00169a62,&UNK_00181eb9,0x12,lVar1,puVar7);
        (*param_4)(auStack_838);
      }
      uVar6 = uVar6 + 1;
    } while (uVar4 != uVar6);
  }
  if (pcRam0000000000a02f90 != (code *)0x0) {
    (*pcRam0000000000a02f90)(puVar5,uVar4,0,param_4,param_5);
  }
  if (lStack_a58 != 0) {
    func_0x0099c710(puVar5);
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return;
  }
  func_0x0099bd00();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


