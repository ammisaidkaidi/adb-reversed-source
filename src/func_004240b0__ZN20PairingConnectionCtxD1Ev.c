// Function: _ZN20PairingConnectionCtxD1Ev
// Address: 004240b0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN20PairingConnectionCtxD1Ev(undefined8 *param_1)

{
  undefined4 uVar1;
  long lVar2;
  long *plVar3;
  undefined4 *puVar4;
  
  *param_1 = 0x99f740;
  puVar4 = (undefined4 *)func_0x0099bce0();
  uVar1 = *puVar4;
  if (*(int *)(param_1 + 0x80f) != -1) {
    func_0x0099bd10();
  }
  *(undefined4 *)(param_1 + 0x80f) = 0xffffffff;
  *puVar4 = uVar1;
  if (param_1[0x810] != 0) {
    _ZNSt3__16thread4joinEv(param_1 + 0x810);
  }
  _ZNSt3__16threadD2Ev(param_1 + 0x810);
  uVar1 = *puVar4;
  if (*(int *)(param_1 + 0x80f) != -1) {
    func_0x0099bd10();
  }
  *(undefined4 *)(param_1 + 0x80f) = 0xffffffff;
  *puVar4 = uVar1;
  lVar2 = param_1[0x80e];
  param_1[0x80e] = 0;
  if (lVar2 != 0) {
    pairing_auth_destroy();
  }
  plVar3 = (long *)param_1[0x80d];
  param_1[0x80d] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  lVar2 = param_1[0x408];
  if (lVar2 != 0) {
    param_1[0x409] = lVar2;
    _ZdaPvSt11align_val_t(lVar2,param_1[0x40a] - lVar2);
  }
  lVar2 = param_1[0x405];
  if (lVar2 != 0) {
    param_1[0x406] = lVar2;
    _ZdaPvSt11align_val_t(lVar2,param_1[0x407] - lVar2);
  }
  lVar2 = param_1[2];
  if (lVar2 != 0) {
    param_1[3] = lVar2;
    free(lVar2,param_1[4] - lVar2);
    return;
  }
  return;
}


