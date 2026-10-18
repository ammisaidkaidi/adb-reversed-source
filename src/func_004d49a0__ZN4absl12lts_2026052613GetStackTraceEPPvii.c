// Function: _ZN4absl12lts_2026052613GetStackTraceEPPvii
// Address: 004d49a0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _ZN4absl12lts_2026052613GetStackTraceEPPvii(undefined8 param_1,ulong param_2,int param_3)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  int extraout_EDX;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong *puVar7;
  ulong *puVar8;
  long in_FS_OFFSET;
  ulong uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  ulong *puStack_70;
  ulong uStack_38;
  long lStack_30;
  
  lStack_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = param_2;
  cVar1 = _ZN4absl12lts_2026052619internal_stacktrace16ShouldFixUpStackEv();
  puVar8 = (ulong *)(ulong)(param_3 + 1);
  uVar5 = param_1;
  if (pcRam0000000000a02f88 == (code *)0x0) {
    puVar7 = puVar8;
    iVar2 = func_0x004d4b80();
  }
  else {
    uVar3 = 0;
    puVar7 = (ulong *)0x0;
    iVar2 = (*pcRam0000000000a02f88)(param_1,0,param_2 & 0xffffffff,puVar8,0,0);
  }
  uStack_38 = (ulong)iVar2;
  if (cVar1 != '\0') {
    puVar7 = &uStack_38;
    uVar3 = 0;
    uVar5 = param_1;
    _ZN4absl12lts_2026052619internal_stacktrace10FixUpStackEPPvPmPimRm
              (param_1,0,0,(long)(int)param_2);
  }
  lVar4 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar4 == lStack_30) {
    return uStack_38 & 0xffffffff;
  }
  func_0x0099bd00();
  lStack_80 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_78 = param_1;
  puStack_70 = puVar8;
  cVar1 = _ZN4absl12lts_2026052619internal_stacktrace16ShouldFixUpStackEv();
  uVar6 = uVar5;
  if (pcRam0000000000a02f88 == (code *)0x0) {
    iVar2 = func_0x004d4ce0();
  }
  else {
    iVar2 = (*pcRam0000000000a02f88)(uVar5,0,uVar3 & 0xffffffff,extraout_EDX + 1,lVar4,puVar7);
  }
  uStack_88 = (ulong)iVar2;
  if (cVar1 != '\0') {
    _ZN4absl12lts_2026052619internal_stacktrace10FixUpStackEPPvPmPimRm
              (uVar5,0,0,(long)(int)uVar3,&uStack_88);
    uVar6 = uVar5;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_80) {
    return uStack_88 & 0xffffffff;
  }
  uVar3 = func_0x0099bd00();
  pcRam0000000000a02f88 = (code *)uVar6;
  return uVar3;
}


