// Function: _ZN4absl12lts_2026052618EndsWithIgnoreCaseENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_
// Address: 004ebbb0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


bool _ZN4absl12lts_2026052618EndsWithIgnoreCaseENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_
               (long param_1,ulong param_2,undefined8 param_3,ulong param_4)

{
  int iVar1;
  
  if (param_2 < param_4) {
    return false;
  }
  iVar1 = _ZN4absl12lts_2026052616strings_internal10memcasecmpEPKcS3_m
                    (param_1 + (param_2 - param_4),param_3,param_4);
  return iVar1 == 0;
}


