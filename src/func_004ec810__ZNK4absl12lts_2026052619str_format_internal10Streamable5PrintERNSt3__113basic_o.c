// Function: _ZNK4absl12lts_2026052619str_format_internal10Streamable5PrintERNSt3__113basic_ostreamIcNS3_11char_traitsIcEEEE
// Address: 004ec810
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long * _ZNK4absl12lts_2026052619str_format_internal10Streamable5PrintERNSt3__113basic_ostreamIcNS3_11char_traitsIcEEEE
                 (long *param_1,long *param_2)

{
  char cVar1;
  long *plVar2;
  
  if ((param_1[1] & 1U) == 0) {
    plVar2 = param_1 + 2;
  }
  else {
    plVar2 = (long *)param_1[2];
  }
  cVar1 = _ZN4absl12lts_2026052619str_format_internal13FormatUntypedENS1_17FormatRawSinkImplENS1_21UntypedFormatSpecImplENS0_4SpanIKNS1_13FormatArgImplEEE
                    (param_2,
                     _ZN4absl12lts_2026052619str_format_internal17FormatRawSinkImpl5FlushINSt3__113basic_ostreamIcNS4_11char_traitsIcEEEEEEvPvNS4_17basic_string_viewIcS7_EE
                     ,*(undefined8 *)*param_1,((undefined8 *)*param_1)[1],plVar2,
                     (ulong)param_1[1] >> 1);
  if (cVar1 == '\0') {
    _ZNSt3__18ios_base5clearEj
              ((long)param_2 + *(long *)(*param_2 + -0x18),
               *(uint *)((long)param_2 + *(long *)(*param_2 + -0x18) + 0x20) | 4);
  }
  return param_2;
}


