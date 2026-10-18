// Function: _ZN11incremental4FileD2Ev
// Address: 00366a80
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN11incremental4FileD2Ev(long *param_1)

{
  long lVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  puVar2 = (undefined4 *)func_0x0099bce0();
  uVar3 = *puVar2;
  if ((int)param_1[0xe] != -1) {
    func_0x0099bd10();
  }
  *(undefined4 *)(param_1 + 0xe) = 0xffffffff;
  *puVar2 = uVar3;
  lVar1 = param_1[0xb];
  if (lVar1 != 0) {
    param_1[0xc] = lVar1;
    _ZdaPvSt11align_val_t(lVar1,param_1[0xd] - lVar1);
    uVar3 = *puVar2;
  }
  if ((int)param_1[10] != -1) {
    func_0x0099bd10();
  }
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *puVar2 = uVar3;
  if (param_1[4] != 0) {
    _ZdaPvSt11align_val_t(param_1[4],param_1[6] << 3);
  }
  if (*param_1 != 0) {
    free(*param_1,param_1[2] << 3);
    return;
  }
  return;
}


