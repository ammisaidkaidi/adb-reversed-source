// Function: _ZN4absl12lts_2026052612log_internal10LogMessage13WithVerbosityEi
// Address: 004bb8f0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long _ZN4absl12lts_2026052612log_internal10LogMessage13WithVerbosityEi(long param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    iVar1 = param_2;
  }
  if (param_2 == -1) {
    iVar1 = param_2;
  }
  *(int *)(*(long *)(param_1 + 8) + 0x2c) = iVar1;
  return param_1;
}


