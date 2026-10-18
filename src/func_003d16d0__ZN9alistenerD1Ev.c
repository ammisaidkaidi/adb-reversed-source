// Function: _ZN9alistenerD1Ev
// Address: 003d16d0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN9alistenerD1Ev(undefined8 *param_1)

{
  _Z15fdevent_destroyP7fdevent(*param_1);
  if (param_1[8] != 0) {
    _ZN10atransport16RemoveDisconnectEP11adisconnect(param_1[8],param_1 + 9);
  }
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    _ZdaPvSt11align_val_t(param_1[7],param_1[5] & 0xfffffffffffffffe);
  }
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    return;
  }
  free(param_1[4],param_1[2] & 0xfffffffffffffffe);
  return;
}


