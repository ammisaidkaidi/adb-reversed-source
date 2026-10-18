// Function: _ZN11incremental21ISSignedDatabaseEntryD0Ev
// Address: 003630b0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN11incremental21ISSignedDatabaseEntryD0Ev(undefined8 *param_1)

{
  *param_1 = 0x99e498;
  if ((*(byte *)(param_1 + 9) & 1) != 0) {
    _ZdaPvSt11align_val_t(param_1[0xb],param_1[9] & 0xfffffffffffffffe);
  }
  if ((*(byte *)(param_1 + 6) & 1) != 0) {
    _ZdaPvSt11align_val_t(param_1[8],param_1[6] & 0xfffffffffffffffe);
  }
  *param_1 = 0x99e4c8;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    _ZdaPvSt11align_val_t(param_1[3],param_1[1] & 0xfffffffffffffffe);
  }
  free(param_1,0x60);
  return;
}


