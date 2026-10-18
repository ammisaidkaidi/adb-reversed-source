// Function: _ZNK4absl12lts_2026052613time_internal4cctz9time_zone15next_transitionERKNSt3__16chrono10time_pointINS5_12system_clockENS5_8durationIlNS4_5ratioILl1ELl1EEEEEEEPNS3_16civil_transitionE
// Address: 004c35b0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZNK4absl12lts_2026052613time_internal4cctz9time_zone15next_transitionERKNSt3__16chrono10time_pointINS5_12system_clockENS5_8durationIlNS4_5ratioILl1ELl1EEEEEEEPNS3_16civil_transitionE
               (long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    lVar1 = _ZN4absl12lts_2026052613time_internal4cctz9time_zone4Impl3UTCEv();
  }
                    /* WARNING: Could not recover jumptable at 0x004c35df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(lVar1 + 0x18) + 0x20))(*(long **)(lVar1 + 0x18),param_2,param_3);
  return;
}


