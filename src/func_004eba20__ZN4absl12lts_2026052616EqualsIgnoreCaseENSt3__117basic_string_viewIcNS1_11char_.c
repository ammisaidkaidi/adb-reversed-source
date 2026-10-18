// Function: _ZN4absl12lts_2026052616EqualsIgnoreCaseENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_
// Address: 004eba20
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


bool _ZN4absl12lts_2026052616EqualsIgnoreCaseENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_
               (undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  
  if (param_2 == param_4) {
    iVar1 = _ZN4absl12lts_2026052616strings_internal10memcasecmpEPKcS3_m(param_1,param_3,param_2);
    return iVar1 == 0;
  }
  return false;
}


