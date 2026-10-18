// Function: _ZN4absl12lts_2026052619str_format_internal10AppendPackEPNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS1_21UntypedFormatSpecImplENS0_4SpanIKNS1_13FormatArgImplEEE
// Address: 004ec880
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


byte * _ZN4absl12lts_2026052619str_format_internal10AppendPackEPNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS1_21UntypedFormatSpecImplENS0_4SpanIKNS1_13FormatArgImplEEE
                 (byte *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  byte bVar1;
  char cVar2;
  ulong uVar3;
  
  bVar1 = *param_1;
  uVar3 = *(ulong *)(param_1 + 8);
  cVar2 = _ZN4absl12lts_2026052619str_format_internal13FormatUntypedENS1_17FormatRawSinkImplENS1_21UntypedFormatSpecImplENS0_4SpanIKNS1_13FormatArgImplEEE
                    (param_1,
                     _ZN4absl12lts_2026052619str_format_internal17FormatRawSinkImpl5FlushINSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEEEvPvNS4_17basic_string_viewIcS7_EE
                     ,param_2,param_3,param_4,param_5);
  if (cVar2 == '\0') {
    if ((bVar1 & 1) == 0) {
      uVar3 = (ulong)(bVar1 >> 1);
    }
    _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5eraseEmm
              (param_1,uVar3,0xffffffffffffffff);
  }
  return param_1;
}


