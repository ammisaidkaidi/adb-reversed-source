// Function: _ZN7android15DynamicRefTableD0Ev
// Address: 0043f0d0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN7android15DynamicRefTableD0Ev(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = 0x99f858;
  lVar1 = param_1[0x27];
  if (lVar1 != 0) {
    param_1[0x28] = lVar1;
    _ZdaPvSt11align_val_t(lVar1,param_1[0x29] - lVar1);
  }
  param_1[0x22] = 0x99faa8;
  _ZN7android10VectorImpl13finish_vectorEv(param_1 + 0x22);
  _ZN7android16SortedVectorImplD1Ev(param_1 + 0x22);
  free(param_1,0x150);
  return;
}


