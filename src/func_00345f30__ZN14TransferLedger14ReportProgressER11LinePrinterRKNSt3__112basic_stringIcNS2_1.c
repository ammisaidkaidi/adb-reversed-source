// Function: _ZN14TransferLedger14ReportProgressER11LinePrinterRKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEmm
// Address: 00345f30
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN14TransferLedger14ReportProgressER11LinePrinterRKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEmm
               (long param_1,undefined8 param_2,byte *param_3,ulong param_4,ulong param_5)

{
  byte bVar1;
  code *pcVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long in_FS_OFFSET;
  uint uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  long lStack_78;
  uint uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  long lStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  long lStack_48;
  undefined4 uStack_40;
  undefined1 uStack_3c;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  lVar6 = _ZNSt3__16chrono12steady_clock3nowEv();
  if (lVar6 < *(long *)(param_1 + 0x48) + 100000000) goto code_r0x0034618f;
  uStack_3c = 0;
  uStack_40 = 0x3f;
  uVar8 = *(ulong *)(param_1 + 0x20);
  if ((uVar8 != 0) && (*(ulong *)(param_1 + 0x18) <= uVar8)) {
    uVar7 = *(ulong *)(param_1 + 0x18) * 100;
    if ((uVar7 | uVar8) >> 0x20 == 0) {
      iVar5 = (int)((uVar7 & 0xffffffff) / (uVar8 & 0xffffffff));
    }
    else {
      iVar5 = (int)(uVar7 / uVar8);
    }
    if (iVar5 < 0x65) {
      func_0x0099c030(&uStack_40,5,&UNK_00184823,iVar5);
    }
  }
  if (param_5 < param_4 || param_5 == 0) {
    if ((*param_3 & 1) == 0) {
      param_3 = param_3 + 1;
    }
    else {
      param_3 = *(byte **)(param_3 + 0x10);
    }
    _ZN7android4base12StringPrintfEPKcz(&uStack_70,&UNK_0016ad60,&uStack_40,param_3,param_4);
  }
  else if (*(char *)(param_1 + 0x28) == '\x01') {
    param_4 = param_4 * 100;
    if ((param_4 | param_5) >> 0x20 == 0) {
      uVar4 = (undefined4)((param_4 & 0xffffffff) / (param_5 & 0xffffffff));
      if ((*param_3 & 1) == 0) goto code_r0x00346081;
code_r0x0034600f:
      param_3 = *(byte **)(param_3 + 0x10);
    }
    else {
      uVar4 = (undefined4)(param_4 / param_5);
      if ((*param_3 & 1) != 0) goto code_r0x0034600f;
code_r0x00346081:
      param_3 = param_3 + 1;
    }
    _ZN7android4base12StringPrintfEPKcz(&uStack_70,&UNK_001593eb,&uStack_40,param_3,uVar4);
  }
  else {
    if ((*param_3 & 1) == 0) {
      param_3 = param_3 + 1;
    }
    else {
      param_3 = *(byte **)(param_3 + 0x10);
    }
    _ZN7android4base12StringPrintfEPKcz(&uStack_70,&UNK_00180251,&uStack_40,param_3);
  }
  lStack_48 = lStack_60;
  uStack_58 = uStack_70;
  uVar3 = uStack_58;
  uStack_54 = uStack_6c;
  uStack_50 = uStack_68;
  uStack_4c = uStack_64;
  uStack_58._0_1_ = (byte)uStack_70;
  uVar8 = (ulong)((byte)uStack_58 >> 1);
  if ((uStack_70 & 1) != 0) {
    uVar8 = CONCAT44(uStack_64,uStack_68);
  }
  bVar1 = *(byte *)(param_1 + 0x30);
  if ((bVar1 & 1) == 0) {
    uVar7 = (ulong)(bVar1 >> 1);
  }
  else {
    uVar7 = *(ulong *)(param_1 + 0x38);
  }
  uStack_58 = uVar3;
  if (uVar8 == uVar7) {
    if ((uStack_70 & 1) == 0) {
      lStack_60 = (long)&uStack_58 + 1;
      if ((bVar1 & 1) != 0) goto code_r0x003460fe;
code_r0x003460f0:
      lVar9 = param_1 + 0x31;
    }
    else {
      if ((bVar1 & 1) == 0) goto code_r0x003460f0;
code_r0x003460fe:
      lVar9 = *(long *)(param_1 + 0x40);
    }
    iVar5 = func_0x0099bf90(lStack_60,lVar9);
    if (iVar5 == 0) {
      if ((uStack_70 & 1) != 0) {
        _ZdaPvSt11align_val_t(lStack_48,CONCAT44(uStack_54,uStack_58) & 0xfffffffffffffffe);
      }
      goto code_r0x0034618f;
    }
  }
  if ((uStack_70 & 1) == 0) {
    lStack_78 = lStack_48;
    uStack_88 = uStack_58;
    uStack_84 = uStack_54;
    uStack_80 = uStack_50;
    uStack_7c = uStack_4c;
  }
  else {
    func_0x00330340(&uStack_88,lStack_48,CONCAT44(uStack_64,uStack_68));
  }
  _ZN11LinePrinter5PrintENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEENS_8LineTypeE
            (param_2,&uStack_88,0);
  if ((uStack_88 & 1) != 0) {
    _ZdaPvSt11align_val_t(lStack_78,CONCAT44(uStack_84,uStack_88) & 0xfffffffffffffffe);
  }
  if ((*(byte *)(param_1 + 0x30) & 1) != 0) {
    _ZdaPvSt11align_val_t
              (*(undefined8 *)(param_1 + 0x40),*(ulong *)(param_1 + 0x30) & 0xfffffffffffffffe);
  }
  *(long *)(param_1 + 0x40) = lStack_48;
  *(uint *)(param_1 + 0x30) = uStack_58;
  *(undefined4 *)(param_1 + 0x34) = uStack_54;
  *(undefined4 *)(param_1 + 0x38) = uStack_50;
  *(undefined4 *)(param_1 + 0x3c) = uStack_4c;
  *(long *)(param_1 + 0x48) = lVar6;
code_r0x0034618f:
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return;
  }
  func_0x0099bd00();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


