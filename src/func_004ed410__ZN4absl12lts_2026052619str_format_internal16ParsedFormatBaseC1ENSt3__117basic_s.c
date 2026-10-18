// Function: _ZN4absl12lts_2026052619str_format_internal16ParsedFormatBaseC1ENSt3__117basic_string_viewIcNS3_11char_traitsIcEEEEbSt16initializer_listINS0_23FormatConversionCharSetEE
// Address: 004ed410
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN4absl12lts_2026052619str_format_internal16ParsedFormatBaseC1ENSt3__117basic_string_viewIcNS3_11char_traitsIcEEEEbSt16initializer_listINS0_23FormatConversionCharSetEE
               (byte *param_1,undefined8 param_2,long param_3,undefined1 param_4,undefined8 param_5,
               undefined8 param_6)

{
  char cVar1;
  byte bVar2;
  undefined8 uVar3;
  
  if (param_3 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = _Znam(param_3);
  }
  *(undefined8 *)(param_1 + 8) = uVar3;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  cVar1 = _ZN4absl12lts_2026052619str_format_internal17ParseFormatStringINS1_16ParsedFormatBase20ParsedFormatConsumerEEEbNSt3__117basic_string_viewIcNS5_11char_traitsIcEEEET_
                    (param_2,param_3,param_1);
  bVar2 = 1;
  if (cVar1 != '\0') {
    bVar2 = _ZNK4absl12lts_2026052619str_format_internal16ParsedFormatBase18MatchesConversionsEbSt16initializer_listINS0_23FormatConversionCharSetEE
                      (param_1,param_4,param_5,param_6);
    bVar2 = bVar2 ^ 1;
  }
  *param_1 = bVar2;
  return;
}


