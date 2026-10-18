// Function: _ZN10atransport13AddDisconnectEP11adisconnect
// Address: 003ec050
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN10atransport13AddDisconnectEP11adisconnect(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)_Znwm(0x18);
  plVar2[2] = param_2;
  plVar2[1] = param_1 + 0xf8;
  lVar1 = *(long *)(param_1 + 0xf8);
  *plVar2 = lVar1;
  *(long **)(lVar1 + 8) = plVar2;
  *(long **)(param_1 + 0xf8) = plVar2;
  *(long *)(param_1 + 0x108) = *(long *)(param_1 + 0x108) + 1;
  return;
}


