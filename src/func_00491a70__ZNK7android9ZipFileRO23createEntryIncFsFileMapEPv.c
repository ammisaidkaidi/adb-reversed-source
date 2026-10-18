// Function: _ZNK7android9ZipFileRO23createEntryIncFsFileMapEPv
// Address: 00491a70
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined1 *
_ZNK7android9ZipFileRO23createEntryIncFsFileMapEPv
          (undefined1 *param_1,undefined8 *param_2,short *param_3)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long in_FS_OFFSET;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = _Z17GetFileDescriptorP10ZipArchive(*param_2);
  uVar1 = *(undefined4 *)(param_3 + (ulong)(*param_3 == 0) * 2 + 0x18);
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  _ZN7android5incfs12IncFsFileMapC1Ev(&uStack_a8);
  cVar2 = _ZN7android5incfs12IncFsFileMap6CreateEilmPKc
                    (&uStack_a8,uVar3,*(undefined8 *)(param_3 + 0xc),uVar1,param_2[1]);
  if (cVar2 == '\0') {
    *param_1 = 0;
  }
  else {
    _ZN7android5incfs12IncFsFileMapC1EOS1_(param_1,&uStack_a8);
  }
  param_1[0x70] = cVar2 != '\0';
  puVar6 = &uStack_a8;
  _ZN7android5incfs12IncFsFileMapD1Ev();
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return param_1;
  }
  func_0x0099bd00();
  iVar4 = _Z15ExtractToMemoryP10ZipArchivePK8ZipEntryPhm(*puVar6);
  if (iVar4 != 0) {
    uVar5 = _Z15ErrorCodeStringi(iVar4);
    __android_log_print(5,&UNK_001699cb,&UNK_00170a28,uVar5);
  }
  return (undefined1 *)(ulong)(iVar4 == 0);
}


