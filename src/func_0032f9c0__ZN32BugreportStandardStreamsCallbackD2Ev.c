// Function: _ZN32BugreportStandardStreamsCallbackD2Ev
// Address: 0032f9c0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN32BugreportStandardStreamsCallbackD2Ev(undefined8 *param_1)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  *param_1 = 0x99e160;
  if ((*(byte *)(param_1 + 0x12) & 1) != 0) {
    _ZdaPvSt11align_val_t(param_1[0x14],param_1[0x12] & 0xfffffffffffffffe);
  }
  lVar2 = param_1[0xe];
  if (lVar2 != 0) {
    lVar4 = param_1[0xf];
    lVar3 = lVar2;
    if (lVar2 != lVar4) {
      do {
        if ((*(byte *)(lVar4 + -0x18) & 1) != 0) {
          _ZdaPvSt11align_val_t
                    (*(undefined8 *)(lVar4 + -8),*(ulong *)(lVar4 + -0x18) & 0xfffffffffffffffe);
        }
        lVar4 = lVar4 + -0x18;
      } while (lVar4 != lVar2);
      lVar3 = param_1[0xe];
    }
    param_1[0xf] = lVar2;
    _ZdaPvSt11align_val_t(lVar3,param_1[0x10] - lVar3);
  }
  if ((*(byte *)(param_1 + 0xb) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 8);
  }
  else {
    _ZdaPvSt11align_val_t(param_1[0xd],param_1[0xb] & 0xfffffffffffffffe);
    bVar1 = *(byte *)(param_1 + 8);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 5);
  }
  else {
    _ZdaPvSt11align_val_t(param_1[10],param_1[8] & 0xfffffffffffffffe);
    bVar1 = *(byte *)(param_1 + 5);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 2);
  }
  else {
    _ZdaPvSt11align_val_t(param_1[7],param_1[5] & 0xfffffffffffffffe);
    bVar1 = *(byte *)(param_1 + 2);
  }
  if ((bVar1 & 1) == 0) {
    return;
  }
  free(param_1[4],param_1[2] & 0xfffffffffffffffe);
  return;
}


