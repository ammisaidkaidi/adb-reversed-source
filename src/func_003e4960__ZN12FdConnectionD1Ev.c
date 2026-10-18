// Function: _ZN12FdConnectionD1Ev
// Address: 003e4960
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN12FdConnectionD1Ev(undefined8 *param_1)

{
  undefined4 uVar1;
  long *plVar2;
  undefined4 *puVar3;
  
  *param_1 = 0x99ece0;
  plVar2 = (long *)param_1[2];
  param_1[2] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  puVar3 = (undefined4 *)func_0x0099bce0();
  uVar1 = *puVar3;
  if (*(int *)(param_1 + 1) != -1) {
    func_0x0099bd10();
  }
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *puVar3 = uVar1;
  return;
}


