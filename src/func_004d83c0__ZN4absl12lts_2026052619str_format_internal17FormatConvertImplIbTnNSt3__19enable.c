// Function: _ZN4absl12lts_2026052619str_format_internal17FormatConvertImplIbTnNSt3__19enable_ifIXsr3std7is_sameIT_bEE5valueEiE4typeELi0EEENS1_16ArgConvertResultILNS0_23FormatConversionCharSetE655355EEES5_NS1_24FormatConversionSpecImplEPNS1_14FormatSinkImplE
// Address: 004d83c0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8
_ZN4absl12lts_2026052619str_format_internal17FormatConvertImplIbTnNSt3__19enable_ifIXsr3std7is_sameIT_bEE5valueEiE4typeELi0EEENS1_16ArgConvertResultILNS0_23FormatConversionCharSetE655355EEES5_NS1_24FormatConversionSpecImplEPNS1_14FormatSinkImplE
          (char param_1,char param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  if (param_2 != '\x12') {
    uVar3 = _ZN4absl12lts_2026052619str_format_internal13ConvertIntArgIiEEbT_NS1_24FormatConversionSpecImplEPNS1_14FormatSinkImplE
                      (param_1);
    return uVar3;
  }
  if (param_1 == '\0') {
    param_4[2] = param_4[2] + 5;
    puVar2 = (undefined4 *)param_4[3];
    if (5 < (ulong)((long)param_4 + (0x420 - (long)puVar2))) {
      *(undefined1 *)(puVar2 + 1) = 0x65;
      *puVar2 = 0x736c6166;
      param_4[3] = param_4[3] + 5;
      return 1;
    }
    puVar1 = param_4 + 4;
    (*(code *)param_4[1])(*param_4,puVar1,(long)puVar2 - (long)puVar1);
    param_4[3] = puVar1;
    uVar3 = *param_4;
    puVar5 = &UNK_00157545;
    uVar4 = 5;
  }
  else {
    param_4[2] = param_4[2] + 4;
    puVar2 = (undefined4 *)param_4[3];
    if (4 < (ulong)((long)param_4 + (0x420 - (long)puVar2))) {
      *puVar2 = 0x65757274;
      param_4[3] = param_4[3] + 4;
      return 1;
    }
    puVar1 = param_4 + 4;
    (*(code *)param_4[1])(*param_4,puVar1,(long)puVar2 - (long)puVar1);
    param_4[3] = puVar1;
    uVar3 = *param_4;
    puVar5 = &UNK_001703d2;
    uVar4 = 4;
  }
  (*(code *)param_4[1])(uVar3,puVar5,uVar4);
  return 1;
}


