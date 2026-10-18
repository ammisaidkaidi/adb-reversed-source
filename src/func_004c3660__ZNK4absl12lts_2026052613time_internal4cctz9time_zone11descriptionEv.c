// Function: _ZNK4absl12lts_2026052613time_internal4cctz9time_zone11descriptionEv
// Address: 004c3660
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8
_ZNK4absl12lts_2026052613time_internal4cctz9time_zone11descriptionEv
          (undefined8 param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  if (lVar1 == 0) {
    lVar1 = _ZN4absl12lts_2026052613time_internal4cctz9time_zone4Impl3UTCEv();
  }
  (**(code **)(**(long **)(lVar1 + 0x18) + 0x38))(param_1);
  return param_1;
}


