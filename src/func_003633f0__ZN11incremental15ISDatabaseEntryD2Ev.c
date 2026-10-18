// Function: _ZN11incremental15ISDatabaseEntryD2Ev
// Address: 003633f0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN11incremental15ISDatabaseEntryD2Ev(undefined8 *param_1)

{
  *param_1 = 0x99e4c8;
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    return;
  }
  free(param_1[3],param_1[1] & 0xfffffffffffffffe);
  return;
}


