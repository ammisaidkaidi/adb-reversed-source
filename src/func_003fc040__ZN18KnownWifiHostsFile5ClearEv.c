// Function: _ZN18KnownWifiHostsFile5ClearEv
// Address: 003fc040
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN18KnownWifiHostsFile5ClearEv(byte *param_1)

{
  if ((*param_1 & 1) == 0) {
    param_1 = param_1 + 1;
  }
  else {
    param_1 = *(byte **)(param_1 + 0x10);
  }
  unlink(param_1);
  return;
}


