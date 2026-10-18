// Function: _ZN10atransport14RunDisconnectsEv
// Address: 003ec0f0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN10atransport14RunDisconnectsEv(long param_1)

{
  long *plVar1;
  long *plVar2;
  
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


