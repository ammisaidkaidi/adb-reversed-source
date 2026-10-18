// Function: _ZN11incremental17IncrementalServerD2Ev
// Address: 00366880
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN11incremental17IncrementalServerD2Ev(int *param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 *puVar3;
  long lVar4;
  long lVar5;
  
  lVar2 = *(long *)(param_1 + 0x1e);
  if (lVar2 != 0) {
    *(long *)(param_1 + 0x20) = lVar2;
    _ZdaPvSt11align_val_t(lVar2,*(long *)(param_1 + 0x22) - lVar2);
  }
  func_0x00367b70(param_1 + 0xe);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 != 0) {
    *(long *)(param_1 + 10) = lVar2;
    _ZdaPvSt11align_val_t(lVar2,*(long *)(param_1 + 0xc) - lVar2);
  }
  lVar2 = *(long *)(param_1 + 2);
  if (lVar2 != 0) {
    lVar5 = *(long *)(param_1 + 4);
    lVar4 = lVar2;
    if (lVar2 != lVar5) {
      do {
        lVar5 = lVar5 + -0x80;
        _ZN11incremental4FileD2Ev(lVar5);
      } while (lVar5 != lVar2);
      lVar4 = *(long *)(param_1 + 2);
    }
    *(long *)(param_1 + 4) = lVar2;
    _ZdaPvSt11align_val_t(lVar4,*(long *)(param_1 + 6) - lVar4);
  }
  puVar3 = (undefined4 *)func_0x0099bce0();
  uVar1 = *puVar3;
  if (param_1[1] != -1) {
    func_0x0099bd10();
  }
  param_1[1] = -1;
  *puVar3 = uVar1;
  if (*param_1 != -1) {
    func_0x0099bd10();
  }
  *param_1 = -1;
  *puVar3 = uVar1;
  return;
}


