// Function: _ZN4absl12lts_2026052621StrContainsIgnoreCaseENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_
// Address: 004eba50
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


bool _ZN4absl12lts_2026052621StrContainsIgnoreCaseENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_
               (long param_1,ulong param_2,undefined8 param_3,ulong param_4)

{
  bool bVar1;
  int iVar2;
  
  if (param_2 < param_4) {
    return false;
  }
  do {
    param_2 = param_2 - 1;
    iVar2 = _ZN4absl12lts_2026052616strings_internal10memcasecmpEPKcS3_m(param_1,param_3,param_4);
    bVar1 = iVar2 == 0;
    if (iVar2 == 0) {
      return bVar1;
    }
    param_1 = param_1 + 1;
  } while (param_4 <= param_2);
  return bVar1;
}


