// Function: _ZN4absl12lts_2026052625GetStackFramesWithContextEPPvPiiiPKvS3_
// Address: 004d48d0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _ZN4absl12lts_2026052625GetStackFramesWithContextEPPvPiiiPKvS3_
                (undefined8 param_1,ulong param_2,uint param_3,int param_4,undefined8 param_5,
                undefined8 param_6)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  int extraout_EDX;
  int extraout_EDX_00;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong *puVar10;
  ulong *puVar11;
  long in_FS_OFFSET;
  ulong uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  ulong *puStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  char cStack_41;
  ulong uStack_40;
  long lStack_38;
  
  uVar4 = (ulong)param_3;
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  puStack_70 = &UNK_004d4906;
  uStack_60 = param_5;
  cStack_41 = _ZN4absl12lts_2026052619internal_stacktrace16ShouldFixUpStackEv();
  uVar8 = param_1;
  uStack_58 = param_2;
  uStack_50 = param_1;
  if (pcRam0000000000a02f88 == (code *)0x0) {
    uVar6 = 0;
    puStack_70 = &UNK_004d494e;
    uStack_68 = param_6;
    iVar2 = func_0x004d50f0(param_1,0,param_2,uVar4);
  }
  else {
    puStack_70 = &UNK_004d4935;
    uVar6 = param_2;
    iVar2 = (*pcRam0000000000a02f88)(param_1,param_2,uVar4,(ulong)(param_4 + 1),uStack_60,param_6);
  }
  uStack_40 = (ulong)iVar2;
  if (cStack_41 != '\0') {
    uVar6 = 0;
    puStack_70 = &UNK_004d4970;
    uVar8 = uStack_50;
    _ZN4absl12lts_2026052619internal_stacktrace10FixUpStackEPPvPmPimRm
              (uStack_50,0,uStack_58,(long)(int)param_3);
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return uStack_40 & 0xffffffff;
  }
  puStack_70 = &UNK_004d4996;
  func_0x0099bd00();
  lStack_98 = *(long *)(in_FS_OFFSET + 0x28);
  puStack_b8 = &UNK_004d49ca;
  uVar7 = uVar6;
  uStack_90 = param_6;
  uStack_88 = uVar4;
  uStack_80 = param_2;
  uStack_78 = param_1;
  puStack_70 = &stack0xfffffffffffffff8;
  uVar3 = _ZN4absl12lts_2026052619internal_stacktrace16ShouldFixUpStackEv();
  puVar11 = (ulong *)(ulong)(extraout_EDX + 1);
  uVar9 = uVar8;
  if (pcRam0000000000a02f88 == (code *)0x0) {
    uStack_b0 = 0;
    puStack_b8 = &UNK_004d4a07;
    puVar10 = puVar11;
    iVar2 = func_0x004d4b80();
  }
  else {
    uVar7 = 0;
    puVar10 = (ulong *)0x0;
    puStack_b8 = &UNK_004d49ef;
    iVar2 = (*pcRam0000000000a02f88)(uVar8,0,uVar6 & 0xffffffff,puVar11,0,0);
  }
  uStack_a0 = (ulong)iVar2;
  if ((char)uVar3 != '\0') {
    puVar10 = &uStack_a0;
    uVar7 = 0;
    puStack_b8 = &UNK_004d4a25;
    uVar9 = uVar8;
    _ZN4absl12lts_2026052619internal_stacktrace10FixUpStackEPPvPmPimRm(uVar8,0,0,(long)(int)uVar6);
  }
  lVar5 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar5 == lStack_98) {
    return uStack_a0 & 0xffffffff;
  }
  puStack_b8 = &UNK_004d4a49;
  func_0x0099bd00();
  lStack_e8 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_e0 = uVar8;
  puStack_d8 = puVar11;
  uStack_d0 = (ulong)(param_4 + 1);
  uStack_c8 = uVar6 & 0xffffffff;
  uStack_c0 = (ulong)uVar3;
  puStack_b8 = (undefined *)&puStack_70;
  cVar1 = _ZN4absl12lts_2026052619internal_stacktrace16ShouldFixUpStackEv();
  uVar8 = uVar9;
  if (pcRam0000000000a02f88 == (code *)0x0) {
    iVar2 = func_0x004d4ce0();
  }
  else {
    iVar2 = (*pcRam0000000000a02f88)(uVar9,0,uVar7 & 0xffffffff,extraout_EDX_00 + 1,lVar5,puVar10);
  }
  uStack_f0 = (ulong)iVar2;
  if (cVar1 != '\0') {
    _ZN4absl12lts_2026052619internal_stacktrace10FixUpStackEPPvPmPimRm
              (uVar9,0,0,(long)(int)uVar7,&uStack_f0);
    uVar8 = uVar9;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_e8) {
    return uStack_f0 & 0xffffffff;
  }
  uVar4 = func_0x0099bd00();
  pcRam0000000000a02f88 = (code *)uVar8;
  return uVar4;
}


