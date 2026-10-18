// Function: _ZN14SyncConnection17ReportCopyFailureERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEES8_RK7syncmsg
// Address: 00345830
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8
_ZN14SyncConnection17ReportCopyFailureERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEES8_RK7syncmsg
          (undefined4 *param_1,byte *param_2,byte *param_3,long param_4)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  long lVar4;
  undefined4 *puVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  
  iVar1 = *(int *)(param_4 + 4);
  lVar4 = 0;
  lVar8 = 0;
  uVar3 = iVar1 + 1;
  if (uVar3 != 0) {
    uVar9 = (ulong)uVar3;
    lVar8 = _Znwm(uVar9);
    lVar4 = lVar8 + uVar9;
    func_0x0099bdb0(lVar8,0,uVar9);
  }
  cVar2 = _Z13ReadFdExactlyN7android4base11borrowed_fdEPvm(*param_1,lVar8,iVar1);
  if (cVar2 == '\0') {
    if ((*param_2 & 1) == 0) {
      param_2 = param_2 + 1;
      if ((*param_3 & 1) != 0) goto code_r0x003458f7;
code_r0x003458cb:
      param_3 = param_3 + 1;
    }
    else {
      param_2 = *(byte **)(param_2 + 0x10);
      if ((*param_3 & 1) == 0) goto code_r0x003458cb;
code_r0x003458f7:
      param_3 = *(byte **)(param_3 + 0x10);
    }
    puVar5 = (undefined4 *)func_0x0099bce0();
    lVar6 = func_0x0099bd20(*puVar5);
    puVar7 = &UNK_00173d94;
    goto code_r0x0034591b;
  }
  *(undefined1 *)(lVar8 + (ulong)*(uint *)(param_4 + 4)) = 0;
  if ((*param_2 & 1) == 0) {
    param_2 = param_2 + 1;
    if ((*param_3 & 1) != 0) goto code_r0x003458d8;
code_r0x003458b3:
    param_3 = param_3 + 1;
  }
  else {
    param_2 = *(byte **)(param_2 + 0x10);
    if ((*param_3 & 1) == 0) goto code_r0x003458b3;
code_r0x003458d8:
    param_3 = *(byte **)(param_3 + 0x10);
  }
  puVar7 = &UNK_0017eb2a;
  lVar6 = lVar8;
code_r0x0034591b:
  _ZN14SyncConnection5ErrorEPKcz(param_1,puVar7,param_2,param_3,lVar6);
  _ZdaPvSt11align_val_t(lVar8,lVar4 - lVar8);
  return 0;
}


