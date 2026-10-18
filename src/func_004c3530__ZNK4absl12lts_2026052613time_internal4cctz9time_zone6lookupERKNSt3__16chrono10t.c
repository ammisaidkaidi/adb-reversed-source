// Function: _ZNK4absl12lts_2026052613time_internal4cctz9time_zone6lookupERKNSt3__16chrono10time_pointINS5_12system_clockENS5_8durationIlNS4_5ratioILl1ELl1EEEEEEE
// Address: 004c3530
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8
_ZNK4absl12lts_2026052613time_internal4cctz9time_zone6lookupERKNSt3__16chrono10time_pointINS5_12system_clockENS5_8durationIlNS4_5ratioILl1ELl1EEEEEEE
          (undefined8 param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *param_2;
  if (lVar1 == 0) {
    lVar1 = _ZN4absl12lts_2026052613time_internal4cctz9time_zone4Impl3UTCEv();
  }
  (**(code **)(**(long **)(lVar1 + 0x18) + 0x10))(param_1,*(long **)(lVar1 + 0x18),param_3);
  return param_1;
}


