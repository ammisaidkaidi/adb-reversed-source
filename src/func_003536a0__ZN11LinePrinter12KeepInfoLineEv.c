// Function: _ZN11LinePrinter12KeepInfoLineEv
// Address: 003536a0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong * _ZN11LinePrinter12KeepInfoLineEv(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong *puVar2;
  long in_FS_OFFSET;
  undefined2 uStack_30;
  undefined1 uStack_2e;
  ulong *puStack_18;
  
  puStack_18 = *(ulong **)(in_FS_OFFSET + 0x28);
  if (*(byte *)((long)param_1 + 1) == 1) {
    if (*(byte *)((long)param_1 + 2) == 0) {
      uStack_30 = 0xa02;
      uStack_2e = 0;
      func_0x00353780(&uStack_30);
    }
    *(byte *)((long)param_1 + 2) = 1;
    puVar2 = param_1;
  }
  else {
    puVar2 = param_1 + 1;
    func_0x00353780();
    if ((param_1[1] & 1) == 0) {
      *(undefined2 *)(param_1 + 1) = 0;
    }
    else {
      *(undefined1 *)param_1[3] = 0;
      param_1[2] = 0;
    }
  }
  if (*(ulong **)(in_FS_OFFSET + 0x28) == puStack_18) {
    return *(ulong **)(in_FS_OFFSET + 0x28);
  }
  func_0x0099bd00();
  if ((*puVar2 & 1) != 0) {
    _ZdaPvSt11align_val_t(puVar2[2],*puVar2 & 0xfffffffffffffffe);
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
  }
  puVar2[2] = param_2[2];
  uVar1 = param_2[1];
  *puVar2 = *param_2;
  puVar2[1] = uVar1;
  *(undefined2 *)param_2 = 0;
  return puVar2;
}


