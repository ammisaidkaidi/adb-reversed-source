// Function: _ZN32BugreportStandardStreamsCallback4DoneEi
// Address: 0032fff0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong _ZN32BugreportStandardStreamsCallback4DoneEi(long param_1)

{
  byte *pbVar1;
  code *pcVar2;
  byte bVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  byte *pbVar7;
  long lVar8;
  byte *pbVar9;
  long *plVar10;
  long in_FS_OFFSET;
  uint uStack_88;
  undefined4 uStack_84;
  undefined1 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long *plStack_60;
  undefined1 auStack_58 [4];
  undefined4 uStack_54;
  undefined8 uStack_50;
  long *plStack_48;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  _ZN32BugreportStandardStreamsCallback11ProcessLineERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
            (param_1,param_1 + 0x90);
  if (*(long *)(param_1 + 0x70) != *(long *)(param_1 + 0x78)) {
    func_0x0099bd30(_stderr,&UNK_00165c28,
                    (*(long *)(param_1 + 0x78) - *(long *)(param_1 + 0x70) >> 3) *
                    -0x5555555555555555);
    pbVar1 = *(byte **)(param_1 + 0x78);
    for (pbVar9 = *(byte **)(param_1 + 0x70); pbVar9 != pbVar1; pbVar9 = pbVar9 + 0x18) {
      if ((*pbVar9 & 1) == 0) {
        pbVar7 = pbVar9 + 1;
      }
      else {
        pbVar7 = *(byte **)(pbVar9 + 0x10);
      }
      func_0x0099bd30(_stderr,&UNK_00183182,pbVar7);
    }
    func_0x0099bd40(&UNK_00172057,0x48,1,_stderr);
  }
  uVar4 = (ulong)*(uint *)(param_1 + 0x8c);
  if (*(uint *)(param_1 + 0x8c) != 0) goto code_r0x0033022c;
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    if (*(byte *)(param_1 + 0x10) >> 1 == 0) goto code_r0x00330088;
  }
  else if (*(long *)(param_1 + 0x18) == 0) {
code_r0x00330088:
    func_0x0099bd30(_stderr,&UNK_00184753,&UNK_0018c405,&UNK_0018c409);
    uVar4 = 0xffffffff;
    goto code_r0x0033022c;
  }
  _auStack_58 = 0;
  uStack_50 = 0;
  plStack_48 = (long *)0x0;
  bVar3 = *(byte *)(param_1 + 0x28);
  if ((bVar3 & 1) == 0) {
    if (bVar3 >> 1 == 0) goto code_r0x003300c1;
code_r0x0033006d:
    if ((bVar3 & 1) == 0) {
      lVar5 = param_1 + 0x29;
      if ((*(byte *)(param_1 + 0x40) & 1) != 0) goto code_r0x003300ee;
code_r0x0033007b:
      lVar8 = param_1 + 0x41;
    }
    else {
      lVar5 = *(long *)(param_1 + 0x38);
      if ((*(byte *)(param_1 + 0x40) & 1) == 0) goto code_r0x0033007b;
code_r0x003300ee:
      lVar8 = *(long *)(param_1 + 0x50);
    }
    _ZN7android4base12StringPrintfEPKcz(&uStack_70,&UNK_00176d9e,lVar5,0x2f,lVar8);
    if ((_auStack_58 & 1) != 0) {
      _ZdaPvSt11align_val_t(plStack_48,_auStack_58 & 0xfffffffffffffffe);
    }
    plStack_48 = plStack_60;
code_r0x0033012c:
    _auStack_58 = CONCAT44(uStack_70._4_4_,(undefined4)uStack_70);
    uStack_50 = CONCAT44(uStack_68._4_4_,(undefined4)uStack_68);
  }
  else {
    if (*(long *)(param_1 + 0x30) != 0) goto code_r0x0033006d;
code_r0x003300c1:
    pbVar9 = (byte *)(param_1 + 0x40);
    if (auStack_58 != pbVar9) {
      if ((*pbVar9 & 1) != 0) {
        func_0x0032e990(auStack_58,*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x48));
        goto code_r0x00330130;
      }
      plStack_48 = *(long **)(param_1 + 0x50);
      uStack_70._0_4_ = *(undefined4 *)pbVar9;
      uStack_70._4_4_ = *(undefined4 *)(param_1 + 0x44);
      uStack_68._0_4_ = *(undefined4 *)(param_1 + 0x48);
      uStack_68._4_4_ = *(undefined4 *)(param_1 + 0x4c);
      goto code_r0x0033012c;
    }
  }
code_r0x00330130:
  lVar5 = param_1 + 0x11;
  lVar8 = lVar5;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    lVar8 = *(long *)(param_1 + 0x20);
  }
  uStack_70 = (long *)_Znwm(8);
  uStack_68 = uStack_70 + 1;
  *uStack_70 = lVar8;
  uStack_88 = 0x6c75700e;
  uStack_84 = 0x676e696c;
  uStack_80 = 0;
  plStack_60 = uStack_68;
  _ZN32BugreportStandardStreamsCallback14SetLineMessageERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
            (param_1,&uStack_88);
  if ((uStack_88 & 1) != 0) {
    _ZdaPvSt11align_val_t(uStack_78,CONCAT44(uStack_84,uStack_88) & 0xfffffffffffffffe);
  }
  plVar10 = (long *)(auStack_58 + 1);
  plVar6 = plVar10;
  if ((_auStack_58 & 1) != 0) {
    plVar6 = plStack_48;
  }
  if ((*(byte *)(param_1 + 0x58) & 1) == 0) {
    lVar8 = param_1 + 0x59;
  }
  else {
    lVar8 = *(long *)(param_1 + 0x68);
  }
  bVar3 = (**(code **)(**(long **)(param_1 + 8) + 8))
                    (*(long **)(param_1 + 8),&uStack_70,plVar6,0,lVar8);
  *(uint *)(param_1 + 0x8c) = (uint)(bVar3 ^ 1);
  if ((bVar3 ^ 1) == 0) {
    if ((_auStack_58 & 1) != 0) {
      plVar10 = plStack_48;
    }
    func_0x0099be10(&UNK_00173c34,plVar10);
  }
  else {
    if ((_auStack_58 & 1) != 0) {
      plVar10 = plStack_48;
    }
    if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
      lVar5 = *(long *)(param_1 + 0x20);
    }
    func_0x0099bd30(_stderr,&UNK_001610e6,plVar10,lVar5);
  }
  if (uStack_70 != (long *)0x0) {
    uStack_68 = uStack_70;
    _ZdaPvSt11align_val_t(uStack_70,(long)plStack_60 - (long)uStack_70);
  }
  if ((_auStack_58 & 1) != 0) {
    _ZdaPvSt11align_val_t(plStack_48,_auStack_58 & 0xfffffffffffffffe);
  }
  uVar4 = (ulong)*(uint *)(param_1 + 0x8c);
code_r0x0033022c:
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return uVar4;
  }
  func_0x0099bd00();
  pcVar2 = (code *)swi(3);
  uVar4 = (*pcVar2)();
  return uVar4;
}


