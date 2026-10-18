// Function: _ZN14SyncConnection10WriteOrDieERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEES8_PKvm
// Address: 003456b0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8
_ZN14SyncConnection10WriteOrDieERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEES8_PKvm
          (undefined4 *param_1,byte *param_2,byte *param_3,undefined8 param_4,undefined8 param_5)

{
  code *pcVar1;
  char cVar2;
  int *piVar3;
  undefined8 uVar4;
  int *unaff_R12;
  long in_FS_OFFSET;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined8 uStack_44;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  cVar2 = _Z14WriteFdExactlyN7android4base11borrowed_fdEPKvm(*param_1,param_4,param_5);
  if (cVar2 == '\0') {
    piVar3 = (int *)func_0x0099bce0();
    if (*piVar3 != 0x68) goto code_r0x00345773;
    uStack_48 = 0;
    uStack_44 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_4c = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    cVar2 = _Z13ReadFdExactlyN7android4base11borrowed_fdEPvm(*param_1,&uStack_88,8);
    if (cVar2 == '\0') goto code_r0x00345799;
    if ((int)uStack_88 == 0x4c494146) {
      _ZN14SyncConnection17ReportCopyFailureERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEES8_RK7syncmsg
                (param_1,param_2,param_3,&uStack_88);
      func_0x0099bfd0(1);
      goto code_r0x0034576e;
    }
    if ((*param_2 & 1) != 0) {
      param_2 = *(byte **)(param_2 + 0x10);
      goto code_r0x003457f3;
    }
  }
  else {
    piVar3 = unaff_R12;
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
      return CONCAT71((int7)((ulong)*(long *)(in_FS_OFFSET + 0x28) >> 8),1);
    }
code_r0x0034576e:
    func_0x0099bd00();
    unaff_R12 = piVar3;
code_r0x00345773:
    piVar3 = unaff_R12;
    uVar4 = func_0x0099bd20();
    _ZN14SyncConnection5ErrorEPKcz(param_1,&UNK_00167859,param_5,uVar4);
    func_0x0099bfd0(1);
code_r0x00345799:
    if ((*param_2 & 1) == 0) {
      param_2 = param_2 + 1;
    }
    else {
      param_2 = *(byte **)(param_2 + 0x10);
    }
    if ((*param_3 & 1) == 0) {
      param_3 = param_3 + 1;
    }
    else {
      param_3 = *(byte **)(param_3 + 0x10);
    }
    uVar4 = func_0x0099bd20(*piVar3);
    _ZN14SyncConnection5ErrorEPKcz(param_1,&UNK_00164270,param_2,param_3,uVar4);
    func_0x0099bfd0(1);
  }
  param_2 = param_2 + 1;
code_r0x003457f3:
  if ((*param_3 & 1) == 0) {
    param_3 = param_3 + 1;
  }
  else {
    param_3 = *(byte **)(param_3 + 0x10);
  }
  _ZN14SyncConnection5ErrorEPKcz(param_1,&UNK_0017543e,param_2,param_3);
  func_0x0099bfd0(1);
  pcVar1 = (code *)swi(3);
  uVar4 = (*pcVar1)();
  return uVar4;
}


