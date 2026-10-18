// Function: _ZNK4absl12lts_2026052613time_internal4cctz9time_zone6lookupERKNS2_6detail10civil_timeINS4_10second_tagEEE
// Address: 004c3570
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8
_ZNK4absl12lts_2026052613time_internal4cctz9time_zone6lookupERKNS2_6detail10civil_timeINS4_10second_tagEEE
          (undefined8 param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *param_2;
  if (lVar1 == 0) {
    lVar1 = _ZN4absl12lts_2026052613time_internal4cctz9time_zone4Impl3UTCEv();
  }
  (**(code **)(**(long **)(lVar1 + 0x18) + 0x18))(param_1,*(long **)(lVar1 + 0x18),param_3);
  return param_1;
}


