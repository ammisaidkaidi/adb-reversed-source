// Function: _ZN4absl12lts_2026052619str_format_internal17FormatConvertImplEDnNS1_24FormatConversionSpecImplEPNS1_14FormatSinkImplE
// Address: 004d69c0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8
_ZN4absl12lts_2026052619str_format_internal17FormatConvertImplEDnNS1_24FormatConversionSpecImplEPNS1_14FormatSinkImplE
          (undefined8 param_1,ulong param_2,undefined4 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  byte bVar3;
  undefined8 uVar4;
  
  if ((char)param_2 == '\x11') {
    param_4[2] = param_4[2] + 5;
    puVar2 = (undefined4 *)param_4[3];
    if ((ulong)((long)param_4 + (0x420 - (long)puVar2)) < 6) {
      puVar1 = param_4 + 4;
      (*(code *)param_4[1])(*param_4,puVar1,(long)puVar2 - (long)puVar1);
      param_4[3] = puVar1;
      (*(code *)param_4[1])(*param_4,&UNK_00181ead,5);
    }
    else {
      *(undefined1 *)(puVar2 + 1) = 0x29;
      *puVar2 = 0x6c696e28;
      param_4[3] = param_4[3] + 5;
    }
  }
  else {
    bVar3 = (byte)(param_2 >> 8);
    if (bVar3 != 0) {
      uVar4 = _ZN4absl12lts_2026052619str_format_internal14FormatSinkImpl15PutPaddedStringENSt3__117basic_string_viewIcNS3_11char_traitsIcEEEEiib
                        (param_4,0,0,param_2 >> 0x20,param_3,bVar3 & 1);
      return uVar4;
    }
  }
  return 1;
}


