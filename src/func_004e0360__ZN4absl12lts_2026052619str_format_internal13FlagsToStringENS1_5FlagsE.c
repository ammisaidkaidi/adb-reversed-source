// Function: _ZN4absl12lts_2026052619str_format_internal13FlagsToStringENS1_5FlagsE
// Address: 004e0360
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 *
_ZN4absl12lts_2026052619str_format_internal13FlagsToStringENS1_5FlagsE
          (undefined8 *param_1,uint param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_001801f1;
  if ((param_2 & 1) == 0) {
    puVar1 = &UNK_00162ac9;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc(param_1,puVar1);
  puVar1 = &UNK_0015cb17;
  if ((param_2 & 2) == 0) {
    puVar1 = &UNK_00162ac9;
  }
  _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc(param_1,puVar1);
  puVar1 = &UNK_0015ae05;
  if ((param_2 & 4) == 0) {
    puVar1 = &UNK_00162ac9;
  }
  _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc(param_1,puVar1);
  puVar1 = &UNK_00164869;
  if ((param_2 & 8) == 0) {
    puVar1 = &UNK_00162ac9;
  }
  _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc(param_1,puVar1);
  puVar1 = &UNK_0017eb28;
  if ((param_2 & 0x10) == 0) {
    puVar1 = &UNK_00162ac9;
  }
  _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc(param_1,puVar1);
  return param_1;
}


