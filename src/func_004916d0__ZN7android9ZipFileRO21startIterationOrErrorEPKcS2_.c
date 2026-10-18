// Function: _ZN7android9ZipFileRO21startIterationOrErrorEPKcS2_
// Address: 004916d0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined1  [16]
_ZN7android9ZipFileRO21startIterationOrErrorEPKcS2_
          (undefined8 *param_1,undefined *param_2,undefined *param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined *puVar7;
  long *plVar8;
  long lVar9;
  long in_FS_OFFSET;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  long lStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  lStack_40 = 0;
  uVar5 = *param_1;
  if (param_2 == (undefined *)0x0) {
    param_2 = &UNK_00162ac9;
  }
  uVar3 = func_0x0099bcf0(param_2);
  if (param_3 == (undefined *)0x0) {
    param_3 = &UNK_00162ac9;
  }
  uVar4 = func_0x0099bcf0(param_3);
  plVar8 = &lStack_40;
  uVar1 = _Z14StartIterationP10ZipArchivePPvNSt3__117basic_string_viewIcNS3_11char_traitsIcEEEES7_
                    (uVar5,plVar8,param_2,uVar3,param_3,uVar4);
  if (uVar1 == 0) {
    puVar6 = (undefined8 *)_Znwm();
    lVar9 = lStack_40;
    puVar6[6] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[2] = 0;
    puVar6[3] = 0;
    *puVar6 = 0;
    puVar6[1] = 0;
    *(undefined4 *)(puVar6 + 7) = 0;
    *(undefined4 *)((long)puVar6 + 0x3c) = 0;
    *(undefined4 *)(puVar6 + 8) = 0;
    *(undefined4 *)((long)puVar6 + 0x44) = 0;
    lStack_40 = 0;
    puVar6[9] = lVar9;
    uVar5 = 0;
  }
  else {
    puVar7 = &UNK_0017f172;
    if ((undefined *)param_1[1] != (undefined *)0x0) {
      puVar7 = (undefined *)param_1[1];
    }
    puVar6 = (undefined8 *)(ulong)uVar1;
    uVar5 = _Z15ErrorCodeStringi(uVar1);
    plVar8 = (long *)&UNK_001699cb;
    __android_log_print(5,&UNK_001699cb,&UNK_0017bdec,puVar7,uVar5);
    uVar5 = 1;
  }
  lVar9 = lStack_40;
  _Z12EndIterationPv();
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    auVar10._8_8_ = uVar5;
    auVar10._0_8_ = puVar6;
    return auVar10;
  }
  func_0x0099bd00();
  iVar2 = _Z4NextPvP8ZipEntryPNSt3__117basic_string_viewIcNS2_11char_traitsIcEEEE(plVar8[9]);
  uVar5 = extraout_RDX;
  if (iVar2 == -1) {
    plVar8 = (long *)0x0;
  }
  else if (iVar2 != 0) {
    puVar7 = &UNK_0017f172;
    if (*(undefined **)(lVar9 + 8) != (undefined *)0x0) {
      puVar7 = *(undefined **)(lVar9 + 8);
    }
    uVar5 = _Z15ErrorCodeStringi(iVar2);
    plVar8 = (long *)0x0;
    __android_log_print(5,&UNK_001699cb,&UNK_0017a4c7,puVar7,uVar5);
    uVar5 = extraout_RDX_00;
  }
  auVar11._8_8_ = uVar5;
  auVar11._0_8_ = plVar8;
  return auVar11;
}


