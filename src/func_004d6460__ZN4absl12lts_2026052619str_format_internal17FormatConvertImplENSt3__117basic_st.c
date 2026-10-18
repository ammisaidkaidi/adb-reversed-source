// Function: _ZN4absl12lts_2026052619str_format_internal17FormatConvertImplENSt3__117basic_string_viewIcNS2_11char_traitsIcEEEENS1_24FormatConversionSpecImplEPNS1_14FormatSinkImplE
// Address: 004d6460
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8
_ZN4absl12lts_2026052619str_format_internal17FormatConvertImplENSt3__117basic_string_viewIcNS2_11char_traitsIcEEEENS1_24FormatConversionSpecImplEPNS1_14FormatSinkImplE
          (undefined8 param_1,ulong param_2,ulong param_3,undefined4 param_4,undefined8 *param_5)

{
  undefined8 *puVar1;
  long lVar2;
  byte bVar3;
  undefined8 uVar4;
  
  bVar3 = (byte)(param_3 >> 8);
  if (bVar3 == 0) {
    uVar4 = 1;
    if (param_2 != 0) {
      param_5[2] = param_5[2] + param_2;
      lVar2 = param_5[3];
      if (param_2 < (ulong)((long)param_5 + (0x420 - lVar2))) {
        func_0x0099bda0(lVar2,param_1,param_2);
        param_5[3] = param_5[3] + param_2;
        uVar4 = 1;
      }
      else {
        puVar1 = param_5 + 4;
        (*(code *)param_5[1])(*param_5,puVar1,lVar2 - (long)puVar1);
        param_5[3] = puVar1;
        (*(code *)param_5[1])(*param_5,param_1,param_2);
        uVar4 = 1;
      }
    }
  }
  else {
    uVar4 = _ZN4absl12lts_2026052619str_format_internal14FormatSinkImpl15PutPaddedStringENSt3__117basic_string_viewIcNS3_11char_traitsIcEEEEiib
                      (param_5,param_1,param_2,param_3 >> 0x20,param_4,bVar3 & 1);
  }
  return uVar4;
}


