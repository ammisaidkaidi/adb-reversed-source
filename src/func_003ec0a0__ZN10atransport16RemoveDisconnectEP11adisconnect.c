// Function: _ZN10atransport16RemoveDisconnectEP11adisconnect
// Address: 003ec0a0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN10atransport16RemoveDisconnectEP11adisconnect(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long in_FS_OFFSET;
  undefined8 uStack_18;
  long lStack_10;
  
  lStack_10 = *(long *)(in_FS_OFFSET + 0x28);
  param_1 = param_1 + 0xf8;
  uStack_18 = param_2;
  func_0x003f0c30(param_1,&uStack_18);
  if (*(long *)(in_FS_OFFSET + 0x28) != lStack_10) {
    func_0x0099bd00();
    for (plVar1 = *(long **)(param_1 + 0x100); plVar1 != (long *)(param_1 + 0xf8);
        plVar1 = (long *)plVar1[1]) {
      (**(code **)plVar1[2])(((undefined8 *)plVar1[2])[1],param_1);
    }
    if (*(long *)(param_1 + 0x108) != 0) {
      plVar1 = *(long **)(param_1 + 0x100);
      plVar2 = *(long **)(*(long *)(param_1 + 0xf8) + 8);
      *(long **)(*plVar1 + 8) = plVar2;
      *plVar2 = *plVar1;
      *(undefined8 *)(param_1 + 0x108) = 0;
      while (plVar1 != (long *)(param_1 + 0xf8)) {
        plVar2 = (long *)plVar1[1];
        _ZdaPvSt11align_val_t(plVar1,0x18);
        plVar1 = plVar2;
      }
    }
    return;
  }
  return;
}


