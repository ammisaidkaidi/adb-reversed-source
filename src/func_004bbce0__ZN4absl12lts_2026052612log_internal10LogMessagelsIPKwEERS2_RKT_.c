// Function: _ZN4absl12lts_2026052612log_internal10LogMessagelsIPKwEERS2_RKT_
// Address: 004bbce0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8
_ZN4absl12lts_2026052612log_internal10LogMessagelsIPKwEERS2_RKT_(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_2;
  if (lVar1 == 0) {
    _ZN4absl12lts_2026052612log_internal10LogMessage19CopyToEncodedBufferILNS2_10StringTypeE1EEEvNSt3__117basic_string_viewIcNS5_11char_traitsIcEEEE
              (param_1,&_ZN4absl12lts_2026052612log_internal9kCharNullE,6);
  }
  else {
    uVar2 = func_0x0099c610(lVar1);
    _ZN4absl12lts_2026052612log_internal10LogMessage19CopyToEncodedBufferILNS2_10StringTypeE1EEEvNSt3__117basic_string_viewIwNS5_11char_traitsIwEEEE
              (param_1,lVar1,uVar2);
  }
  return param_1;
}


