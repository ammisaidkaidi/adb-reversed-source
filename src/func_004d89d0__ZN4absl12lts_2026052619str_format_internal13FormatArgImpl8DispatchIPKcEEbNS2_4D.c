// Function: _ZN4absl12lts_2026052619str_format_internal13FormatArgImpl8DispatchIPKcEEbNS2_4DataENS1_24FormatConversionSpecImplEPv
// Address: 004d89d0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8
_ZN4absl12lts_2026052619str_format_internal13FormatArgImpl8DispatchIPKcEEbNS2_4DataENS1_24FormatConversionSpecImplEPv
          (undefined8 param_1,byte param_2)

{
  undefined8 uVar1;
  
  if ((param_2 != 0x13) && ((2L << (param_2 & 0x3f) & 0x40004U) != 0)) {
    uVar1 = _ZN4absl12lts_2026052619str_format_internal17FormatConvertImplEPKcNS1_24FormatConversionSpecImplEPNS1_14FormatSinkImplE
                      ();
    return uVar1;
  }
  return 0;
}


