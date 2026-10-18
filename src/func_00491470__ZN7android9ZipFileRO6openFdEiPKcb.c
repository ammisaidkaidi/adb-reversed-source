// Function: _ZN7android9ZipFileRO6openFdEiPKcb
// Address: 00491470
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 *
_ZN7android9ZipFileRO6openFdEiPKcb
          (ulong param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4,
          undefined8 *param_5,undefined8 *param_6)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined2 *extraout_RDX;
  undefined8 *puVar6;
  long in_FS_OFFSET;
  undefined8 uStack_b0;
  undefined4 *puStack_a8;
  undefined4 *puStack_a0;
  undefined2 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  undefined *puStack_40;
  undefined8 *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)(in_FS_OFFSET + 0x28);
  puStack_30 = (undefined8 *)0x0;
  puStack_40 = &UNK_004914a3;
  puVar6 = param_2;
  iVar1 = _Z13OpenArchiveFdiPKcPP10ZipArchiveb(param_1,param_2,&puStack_30,param_3);
  if (iVar1 == 0) {
    puStack_40 = &UNK_004914e9;
    puVar2 = (undefined8 *)_Znwm(0x10);
    puVar5 = puStack_30;
    puStack_40 = &UNK_004914f8;
    puVar4 = param_2;
    uVar3 = func_0x0099c590();
    *puVar2 = puVar5;
    puVar2[1] = uVar3;
  }
  else {
    puStack_40 = &UNK_004914ae;
    param_6 = (undefined8 *)_Z15ErrorCodeStringi(iVar1);
    puVar6 = (undefined8 *)&UNK_001699cb;
    puVar2 = (undefined8 *)0x0;
    puStack_40 = &UNK_004914d4;
    param_5 = param_2;
    __android_log_print(5,&UNK_001699cb,&UNK_0015cc41,param_1 & 0xffffffff);
    puStack_40 = &UNK_004914dd;
    puVar4 = puStack_30;
    _Z12CloseArchiveP10ZipArchive();
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_28) {
    return puVar2;
  }
  puStack_40 = &UNK_00491521;
  func_0x0099bd00();
  lStack_58 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_80 = 0;
  uStack_78 = (undefined8 *)0x0;
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_a0 = (undefined4 *)0x0;
  puStack_98 = (undefined2 *)0x0;
  uStack_b0 = 0;
  puStack_a8 = (undefined4 *)0x0;
  puStack_50 = param_2;
  puStack_48 = puVar2;
  puStack_40 = &stack0xfffffffffffffff8;
  uStack_70 = func_0x0099bcf0(puVar6);
  puVar5 = &uStack_b0;
  uStack_78 = puVar6;
  iVar1 = _Z9FindEntryP10ZipArchiveNSt3__117basic_string_viewIcNS1_11char_traitsIcEEEEP8ZipEntry
                    (*puVar4,puVar6,uStack_70);
  if (iVar1 == 0) {
    puVar4 = (undefined8 *)_Znwm(0x50);
    uVar3 = uStack_68;
    puVar4[6] = uStack_80;
    puVar4[4] = uStack_90;
    puVar4[5] = uStack_88;
    puVar4[2] = puStack_a0;
    puVar4[3] = puStack_98;
    *puVar4 = uStack_b0;
    puVar4[1] = puStack_a8;
    *(undefined4 *)(puVar4 + 7) = (undefined4)uStack_78;
    *(undefined4 *)((long)puVar4 + 0x3c) = uStack_78._4_4_;
    *(undefined4 *)(puVar4 + 8) = (undefined4)uStack_70;
    *(undefined4 *)((long)puVar4 + 0x44) = uStack_70._4_4_;
    uStack_68 = 0;
    puVar4[9] = uVar3;
  }
  else {
    puVar4 = (undefined8 *)0x0;
  }
  _Z12EndIterationPv(uStack_68);
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_58) {
    return puVar4;
  }
  func_0x0099bd00();
  if (extraout_RDX != (undefined2 *)0x0) {
    *extraout_RDX = *(undefined2 *)puVar6;
  }
  if (puVar5 != (undefined8 *)0x0) {
    *(undefined4 *)puVar5 = *(undefined4 *)((long)puVar6 + 0x34);
  }
  if (param_5 != (undefined8 *)0x0) {
    *(undefined4 *)param_5 = *(undefined4 *)(puVar6 + 6);
  }
  if (param_6 != (undefined8 *)0x0) {
    *param_6 = puVar6[3];
  }
  if (puStack_a8 != (undefined4 *)0x0) {
    *puStack_a8 = *(undefined4 *)((long)puVar6 + 4);
  }
  if (puStack_a0 != (undefined4 *)0x0) {
    *puStack_a0 = *(undefined4 *)(puVar6 + 2);
  }
  if (puStack_98 != (undefined2 *)0x0) {
    *puStack_98 = *(undefined2 *)((long)puVar6 + 0x2c);
  }
  return (undefined8 *)0x1;
}


