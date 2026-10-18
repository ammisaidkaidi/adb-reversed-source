// Function: _ZN11ServiceInfoD2Ev
// Address: 003e2620
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN11ServiceInfoD2Ev(ulong *param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  
  func_0x003e26d0(param_1 + 0x10);
  puVar4 = (undefined8 *)param_1[0xc];
  while (puVar4 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar4;
    _ZdaPvSt11align_val_t(puVar4,0x20);
    puVar4 = puVar2;
  }
  uVar3 = param_1[10];
  param_1[10] = 0;
  if (uVar3 != 0) {
    _ZdaPvSt11align_val_t(uVar3,param_1[0xb] << 3);
  }
  if ((param_1[6] & 1) == 0) {
    bVar1 = (byte)param_1[3];
  }
  else {
    _ZdaPvSt11align_val_t(param_1[8],param_1[6] & 0xfffffffffffffffe);
    bVar1 = (byte)param_1[3];
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = (byte)*param_1;
  }
  else {
    _ZdaPvSt11align_val_t(param_1[5],param_1[3] & 0xfffffffffffffffe);
    bVar1 = (byte)*param_1;
  }
  if ((bVar1 & 1) == 0) {
    return;
  }
  free(param_1[2],*param_1 & 0xfffffffffffffffe);
  return;
}


