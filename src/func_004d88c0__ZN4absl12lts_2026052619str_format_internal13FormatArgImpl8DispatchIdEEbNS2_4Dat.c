// Function: _ZN4absl12lts_2026052619str_format_internal13FormatArgImpl8DispatchIdEEbNS2_4DataENS1_24FormatConversionSpecImplEPv
// Address: 004d88c0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8
_ZN4absl12lts_2026052619str_format_internal13FormatArgImpl8DispatchIdEEbNS2_4DataENS1_24FormatConversionSpecImplEPv
          (undefined8 param_1,ulong param_2,undefined4 param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 extraout_EDX;
  byte bVar5;
  long in_FS_OFFSET;
  ulong uStack_48;
  undefined4 uStack_40;
  long lStack_38;
  code *pcStack_30;
  ulong uStack_20;
  undefined4 uStack_18;
  long lStack_10;
  
  lStack_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = param_2;
  if (((param_2 & 0xff) == 0x13) || ((2L << ((byte)param_2 & 0x3f) & 0x9fe00U) == 0)) {
code_r0x004d8924:
    param_4 = uVar2;
    uVar3 = 0;
  }
  else {
    uStack_18 = param_3;
    if ((byte)param_2 == 0x12) {
      uStack_20 = CONCAT71((int7)(param_2 >> 8),0xc);
    }
    else {
      uVar2 = param_2 & 0xfffffffffffffff8;
      uStack_20 = param_2;
      if ((char)(param_2 & 0xfffffffffffffff8) != '\b') goto code_r0x004d8924;
    }
    pcStack_30 = (code *)&UNK_004d8922;
    uVar3 = _ZN4absl12lts_2026052619str_format_internal16ConvertFloatImplEdRKNS1_24FormatConversionSpecImplEPNS1_14FormatSinkImplE
                      (param_1);
  }
  lVar4 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar4 == lStack_10) {
    return uVar3;
  }
  pcStack_30 = 
  _ZN4absl12lts_2026052619str_format_internal13FormatArgImpl8DispatchIeEEbNS2_4DataENS1_24FormatConversionSpecImplEPv
  ;
  func_0x0099bd00();
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  bVar5 = (byte)param_4;
  if (((param_4 & 0xff) == 0x13) || ((2L << (bVar5 & 0x3f) & 0x9fe00U) == 0)) {
code_r0x004d89a6:
    uVar3 = 0;
    pcStack_30 = (code *)&stack0xfffffffffffffff8;
  }
  else {
    uStack_40 = extraout_EDX;
    if (bVar5 == 0x12) {
      uStack_48 = CONCAT71((int7)(param_4 >> 8),0xc);
    }
    else {
      uStack_48 = param_4;
      if ((bVar5 & 0xf8) != 8) goto code_r0x004d89a6;
    }
    pcStack_30 = (code *)&stack0xfffffffffffffff8;
    uVar3 = _ZN4absl12lts_2026052619str_format_internal16ConvertFloatImplEeRKNS1_24FormatConversionSpecImplEPNS1_14FormatSinkImplE
                      (&uStack_48,lVar4);
  }
  if (*(long *)(in_FS_OFFSET + 0x28) != lStack_38) {
    func_0x0099bd00();
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  return uVar3;
}


