// Function: _ZN4absl12lts_2026052619str_format_internal17FormatConvertImplERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS1_24FormatConversionSpecImplEPNS1_14FormatSinkImplE
// Address: 004d63a0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8
_ZN4absl12lts_2026052619str_format_internal17FormatConvertImplERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS1_24FormatConversionSpecImplEPNS1_14FormatSinkImplE
          (byte *param_1,ulong param_2,undefined4 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  long lVar2;
  byte bVar3;
  undefined8 uVar4;
  ulong uVar5;
  byte *pbVar6;
  bool bVar7;
  
  bVar7 = (*param_1 & 1) != 0;
  pbVar6 = param_1 + 1;
  if (bVar7) {
    pbVar6 = *(byte **)(param_1 + 0x10);
  }
  uVar5 = (ulong)(*param_1 >> 1);
  if (bVar7) {
    uVar5 = *(ulong *)(param_1 + 8);
  }
  bVar3 = (byte)(param_2 >> 8);
  if (bVar3 == 0) {
    uVar4 = 1;
    if (uVar5 != 0) {
      param_4[2] = param_4[2] + uVar5;
      lVar2 = param_4[3];
      if (uVar5 < (ulong)((long)param_4 + (0x420 - lVar2))) {
        func_0x0099bda0(lVar2,pbVar6,uVar5);
        param_4[3] = param_4[3] + uVar5;
        uVar4 = 1;
      }
      else {
        puVar1 = param_4 + 4;
        (*(code *)param_4[1])(*param_4,puVar1,lVar2 - (long)puVar1);
        param_4[3] = puVar1;
        (*(code *)param_4[1])(*param_4,pbVar6,uVar5);
        uVar4 = 1;
      }
    }
  }
  else {
    uVar4 = _ZN4absl12lts_2026052619str_format_internal14FormatSinkImpl15PutPaddedStringENSt3__117basic_string_viewIcNS3_11char_traitsIcEEEEiib
                      (param_4,pbVar6,uVar5,param_2 >> 0x20,param_3,bVar3 & 1);
  }
  return uVar4;
}


