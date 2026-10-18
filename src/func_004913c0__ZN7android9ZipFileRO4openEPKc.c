// Function: _ZN7android9ZipFileRO4openEPKc
// Address: 004913c0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long * _ZN7android9ZipFileRO4openEPKc(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined2 *extraout_RDX;
  long *plVar6;
  long *plVar7;
  undefined4 uVar8;
  long *plVar9;
  long *in_R8;
  long *in_R9;
  long unaff_R15;
  long in_FS_OFFSET;
  long lStack_e8;
  undefined4 *puStack_e0;
  undefined4 *puStack_d8;
  undefined2 *puStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_90;
  long *plStack_88;
  undefined8 *puStack_80;
  undefined *puStack_78;
  long *plStack_68;
  long lStack_60;
  undefined8 uStack_58;
  long *plStack_50;
  long lStack_48;
  undefined *apuStack_40 [2];
  long lStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)(in_FS_OFFSET + 0x28);
  lStack_30 = 0;
  plVar6 = &lStack_30;
  apuStack_40[0] = &UNK_004913ee;
  iVar1 = _Z11OpenArchivePKcPP10ZipArchive();
  if (iVar1 == 0) {
    apuStack_40[0] = &UNK_00491431;
    plVar5 = (long *)_Znwm(0x10);
    unaff_R15 = lStack_30;
    apuStack_40[0] = &UNK_00491440;
    uVar4 = param_1;
    lVar2 = func_0x0099c590(param_1);
    uVar8 = (undefined4)uVar4;
    *plVar5 = unaff_R15;
    plVar5[1] = lVar2;
  }
  else {
    apuStack_40[0] = &UNK_004913f9;
    in_R8 = (long *)_Z15ErrorCodeStringi(iVar1);
    plVar6 = (long *)&UNK_001699cb;
    plVar5 = (long *)0x0;
    apuStack_40[0] = &UNK_0049141c;
    __android_log_print(5,&UNK_001699cb,&UNK_0016178d,param_1);
    apuStack_40[0] = &UNK_00491425;
    lVar2 = lStack_30;
    _Z12CloseArchiveP10ZipArchive(lStack_30);
    uVar8 = (undefined4)lVar2;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_28) {
    return plVar5;
  }
  apuStack_40[0] = &UNK_00491469;
  func_0x0099bd00();
  lStack_60 = *(long *)(in_FS_OFFSET + 0x28);
  plStack_68 = (long *)0x0;
  puStack_78 = &UNK_004914a3;
  plVar7 = plVar6;
  uStack_58 = param_1;
  plStack_50 = plVar5;
  lStack_48 = unaff_R15;
  apuStack_40[0] = &stack0xfffffffffffffff8;
  iVar1 = _Z13OpenArchiveFdiPKcPP10ZipArchiveb();
  if (iVar1 == 0) {
    puStack_78 = &UNK_004914e9;
    puVar3 = (undefined8 *)_Znwm(0x10);
    plVar5 = plStack_68;
    puStack_78 = &UNK_004914f8;
    plVar9 = plVar6;
    uVar4 = func_0x0099c590();
    *puVar3 = plVar5;
    puVar3[1] = uVar4;
  }
  else {
    puStack_78 = &UNK_004914ae;
    in_R9 = (long *)_Z15ErrorCodeStringi(iVar1);
    plVar7 = (long *)&UNK_001699cb;
    puVar3 = (undefined8 *)0x0;
    puStack_78 = &UNK_004914d4;
    in_R8 = plVar6;
    __android_log_print(5,&UNK_001699cb,&UNK_0015cc41,uVar8);
    puStack_78 = &UNK_004914dd;
    plVar9 = plStack_68;
    _Z12CloseArchiveP10ZipArchive();
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_60) {
    return puVar3;
  }
  puStack_78 = &UNK_00491521;
  func_0x0099bd00();
  lStack_90 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_a8 = 0;
  lStack_a0 = 0;
  lStack_b8 = 0;
  uStack_b0 = (long *)0x0;
  lStack_c8 = 0;
  lStack_c0 = 0;
  puStack_d8 = (undefined4 *)0x0;
  puStack_d0 = (undefined2 *)0x0;
  lStack_e8 = 0;
  puStack_e0 = (undefined4 *)0x0;
  plStack_88 = plVar6;
  puStack_80 = puVar3;
  puStack_78 = (undefined *)apuStack_40;
  uStack_a8 = func_0x0099bcf0(plVar7);
  uStack_b0 = plVar7;
  plVar6 = &lStack_e8;
  iVar1 = _Z9FindEntryP10ZipArchiveNSt3__117basic_string_viewIcNS1_11char_traitsIcEEEEP8ZipEntry
                    (*plVar9,plVar7,uStack_a8);
  if (iVar1 == 0) {
    plVar5 = (long *)_Znwm(0x50);
    lVar2 = lStack_a0;
    plVar5[6] = lStack_b8;
    plVar5[4] = lStack_c8;
    plVar5[5] = lStack_c0;
    plVar5[2] = (long)puStack_d8;
    plVar5[3] = (long)puStack_d0;
    *plVar5 = lStack_e8;
    plVar5[1] = (long)puStack_e0;
    *(undefined4 *)(plVar5 + 7) = (undefined4)uStack_b0;
    *(undefined4 *)((long)plVar5 + 0x3c) = uStack_b0._4_4_;
    *(undefined4 *)(plVar5 + 8) = (undefined4)uStack_a8;
    *(undefined4 *)((long)plVar5 + 0x44) = uStack_a8._4_4_;
    lStack_a0 = 0;
    plVar5[9] = lVar2;
  }
  else {
    plVar5 = (long *)0x0;
  }
  _Z12EndIterationPv(lStack_a0);
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_90) {
    return plVar5;
  }
  func_0x0099bd00();
  if (extraout_RDX != (undefined2 *)0x0) {
    *extraout_RDX = (short)*plVar7;
  }
  if (plVar6 != (long *)0x0) {
    *(undefined4 *)plVar6 = *(undefined4 *)((long)plVar7 + 0x34);
  }
  if (in_R8 != (long *)0x0) {
    *(int *)in_R8 = (int)plVar7[6];
  }
  if (in_R9 != (long *)0x0) {
    *in_R9 = plVar7[3];
  }
  if (puStack_e0 != (undefined4 *)0x0) {
    *puStack_e0 = *(undefined4 *)((long)plVar7 + 4);
  }
  if (puStack_d8 != (undefined4 *)0x0) {
    *puStack_d8 = (int)plVar7[2];
  }
  if (puStack_d0 != (undefined2 *)0x0) {
    *puStack_d0 = *(undefined2 *)((long)plVar7 + 0x2c);
  }
  return (undefined8 *)0x1;
}


