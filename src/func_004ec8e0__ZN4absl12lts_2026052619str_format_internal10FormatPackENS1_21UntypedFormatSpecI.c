// Function: _ZN4absl12lts_2026052619str_format_internal10FormatPackENS1_21UntypedFormatSpecImplENS0_4SpanIKNS1_13FormatArgImplEEE
// Address: 004ec8e0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


byte * _ZN4absl12lts_2026052619str_format_internal10FormatPackENS1_21UntypedFormatSpecImplENS0_4SpanIKNS1_13FormatArgImplEEE
                 (byte *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  char cVar1;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  cVar1 = _ZN4absl12lts_2026052619str_format_internal13FormatUntypedENS1_17FormatRawSinkImplENS1_21UntypedFormatSpecImplENS0_4SpanIKNS1_13FormatArgImplEEE
                    (param_1,
                     _ZN4absl12lts_2026052619str_format_internal17FormatRawSinkImpl5FlushINSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEEEvPvNS4_17basic_string_viewIcS7_EE
                     ,param_2,param_3,param_4,param_5);
  if (cVar1 == '\0') {
    if ((*param_1 & 1) == 0) {
      param_1[0] = 0;
      param_1[1] = 0;
    }
    else {
      **(undefined1 **)(param_1 + 0x10) = 0;
      param_1[8] = 0;
      param_1[9] = 0;
      param_1[10] = 0;
      param_1[0xb] = 0;
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      param_1[0xe] = 0;
      param_1[0xf] = 0;
    }
  }
  return param_1;
}


