// Function: _ZN4absl12lts_2026052619str_format_internal13FormatArgImpl8DispatchINSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEEEbNS2_4DataENS1_24FormatConversionSpecImplEPv
// Address: 004d8a00
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8
_ZN4absl12lts_2026052619str_format_internal13FormatArgImpl8DispatchINSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEEEbNS2_4DataENS1_24FormatConversionSpecImplEPv
          (undefined8 param_1,byte param_2)

{
  undefined8 uVar1;
  
  if ((param_2 != 0x13) && ((2L << (param_2 & 0x3f) & 0x80004U) != 0)) {
    uVar1 = _ZN4absl12lts_2026052619str_format_internal17FormatConvertImplERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS1_24FormatConversionSpecImplEPNS1_14FormatSinkImplE
                      ();
    return uVar1;
  }
  return 0;
}


