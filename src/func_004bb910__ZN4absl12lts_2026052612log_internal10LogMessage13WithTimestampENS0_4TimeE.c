// Function: _ZN4absl12lts_2026052612log_internal10LogMessage13WithTimestampENS0_4TimeE
// Address: 004bb910
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long _ZN4absl12lts_2026052612log_internal10LogMessage13WithTimestampENS0_4TimeE
               (long param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  *(undefined8 *)(lVar1 + 0x30) = param_2;
  *(undefined4 *)(lVar1 + 0x38) = param_3;
  return param_1;
}


