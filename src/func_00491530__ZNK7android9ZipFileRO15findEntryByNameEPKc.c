// Function: _ZNK7android9ZipFileRO15findEntryByNameEPKc
// Address: 00491530
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 *
_ZNK7android9ZipFileRO15findEntryByNameEPKc
          (undefined8 *param_1,undefined2 *param_2,undefined8 param_3,undefined8 param_4,
          undefined4 *param_5,undefined8 *param_6)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined2 *extraout_RDX;
  long in_FS_OFFSET;
  undefined8 uStack_78;
  undefined4 *puStack_70;
  undefined4 *puStack_68;
  undefined2 *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_20;
  
  lStack_20 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_48 = 0;
  uStack_40 = (undefined2 *)0x0;
  uStack_58 = 0;
  uStack_50 = 0;
  puStack_68 = (undefined4 *)0x0;
  puStack_60 = (undefined2 *)0x0;
  uStack_78 = 0;
  puStack_70 = (undefined4 *)0x0;
  uStack_38 = func_0x0099bcf0(param_2);
  puVar4 = &uStack_78;
  uStack_40 = param_2;
  iVar2 = _Z9FindEntryP10ZipArchiveNSt3__117basic_string_viewIcNS1_11char_traitsIcEEEEP8ZipEntry
                    (*param_1,param_2,uStack_38);
  if (iVar2 == 0) {
    puVar3 = (undefined8 *)_Znwm(0x50);
    uVar1 = uStack_30;
    puVar3[6] = uStack_48;
    puVar3[4] = uStack_58;
    puVar3[5] = uStack_50;
    puVar3[2] = puStack_68;
    puVar3[3] = puStack_60;
    *puVar3 = uStack_78;
    puVar3[1] = puStack_70;
    *(undefined4 *)(puVar3 + 7) = (undefined4)uStack_40;
    *(undefined4 *)((long)puVar3 + 0x3c) = uStack_40._4_4_;
    *(undefined4 *)(puVar3 + 8) = (undefined4)uStack_38;
    *(undefined4 *)((long)puVar3 + 0x44) = uStack_38._4_4_;
    uStack_30 = 0;
    puVar3[9] = uVar1;
  }
  else {
    puVar3 = (undefined8 *)0x0;
  }
  _Z12EndIterationPv(uStack_30);
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_20) {
    return puVar3;
  }
  func_0x0099bd00();
  if (extraout_RDX != (undefined2 *)0x0) {
    *extraout_RDX = *param_2;
  }
  if (puVar4 != (undefined8 *)0x0) {
    *(undefined4 *)puVar4 = *(undefined4 *)(param_2 + 0x1a);
  }
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = *(undefined4 *)(param_2 + 0x18);
  }
  if (param_6 != (undefined8 *)0x0) {
    *param_6 = *(undefined8 *)(param_2 + 0xc);
  }
  if (puStack_70 != (undefined4 *)0x0) {
    *puStack_70 = *(undefined4 *)(param_2 + 2);
  }
  if (puStack_68 != (undefined4 *)0x0) {
    *puStack_68 = *(undefined4 *)(param_2 + 8);
  }
  if (puStack_60 != (undefined2 *)0x0) {
    *puStack_60 = param_2[0x16];
  }
  return (undefined8 *)0x1;
}


