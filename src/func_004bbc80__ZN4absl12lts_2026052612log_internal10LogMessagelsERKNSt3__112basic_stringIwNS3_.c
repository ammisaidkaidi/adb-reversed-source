// Function: _ZN4absl12lts_2026052612log_internal10LogMessagelsERKNSt3__112basic_stringIwNS3_11char_traitsIwEENS3_9allocatorIwEEEE
// Address: 004bbc80
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8
_ZN4absl12lts_2026052612log_internal10LogMessagelsERKNSt3__112basic_stringIwNS3_11char_traitsIwEENS3_9allocatorIwEEEE
          (undefined8 param_1,byte *param_2)

{
  byte *pbVar1;
  ulong uVar2;
  bool bVar3;
  
  bVar3 = (*param_2 & 1) != 0;
  pbVar1 = param_2 + 4;
  if (bVar3) {
    pbVar1 = *(byte **)(param_2 + 0x10);
  }
  uVar2 = (ulong)(*param_2 >> 1);
  if (bVar3) {
    uVar2 = *(ulong *)(param_2 + 8);
  }
  _ZN4absl12lts_2026052612log_internal10LogMessage19CopyToEncodedBufferILNS2_10StringTypeE1EEEvNSt3__117basic_string_viewIwNS5_11char_traitsIwEEEE
            (param_1,pbVar1,uVar2);
  return param_1;
}


