// Function: _ZN4absl12lts_2026052619str_format_internal13FormatArgImpl8DispatchIbEEbNS2_4DataENS1_24FormatConversionSpecImplEPv
// Address: 004d8370
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _ZN4absl12lts_2026052619str_format_internal13FormatArgImpl8DispatchIbEEbNS2_4DataENS1_24FormatConversionSpecImplEPv
                (uint param_1,byte param_2,undefined8 param_3,uint *param_4)

{
  ulong uVar1;
  
  if (param_2 == 0x13) {
    *param_4 = param_1 & 1;
    return 1;
  }
  if ((2L << (param_2 & 0x3f) & 0x9fffaU) != 0) {
    uVar1 = _ZN4absl12lts_2026052619str_format_internal17FormatConvertImplIbTnNSt3__19enable_ifIXsr3std7is_sameIT_bEE5valueEiE4typeELi0EEENS1_16ArgConvertResultILNS0_23FormatConversionCharSetE655355EEES5_NS1_24FormatConversionSpecImplEPNS1_14FormatSinkImplE
                      (param_1 & 1,param_2,param_3,param_4);
    return uVar1 & 0xffffffffffffff01;
  }
  return 0;
}


