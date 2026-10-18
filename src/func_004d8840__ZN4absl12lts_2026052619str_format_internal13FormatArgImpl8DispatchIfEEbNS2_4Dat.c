// Function: _ZN4absl12lts_2026052619str_format_internal13FormatArgImpl8DispatchIfEEbNS2_4DataENS1_24FormatConversionSpecImplEPv
// Address: 004d8840
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8
_ZN4absl12lts_2026052619str_format_internal13FormatArgImpl8DispatchIfEEbNS2_4DataENS1_24FormatConversionSpecImplEPv
          (undefined4 param_1,ulong param_2,undefined4 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  byte bVar3;
  long in_FS_OFFSET;
  ulong uStack_20;
  undefined4 uStack_18;
  long lStack_10;
  
  lStack_10 = *(long *)(in_FS_OFFSET + 0x28);
  bVar3 = (byte)param_2;
  if (((param_2 & 0xff) == 0x13) || ((2L << (bVar3 & 0x3f) & 0x9fe00U) == 0)) {
code_r0x004d88a3:
    uVar2 = 0;
  }
  else {
    uStack_18 = param_3;
    if (bVar3 == 0x12) {
      uStack_20 = CONCAT71((int7)(param_2 >> 8),0xc);
    }
    else {
      uStack_20 = param_2;
      if ((bVar3 & 0xf8) != 8) goto code_r0x004d88a3;
    }
    uVar2 = _ZN4absl12lts_2026052619str_format_internal16ConvertFloatImplEfRKNS1_24FormatConversionSpecImplEPNS1_14FormatSinkImplE
                      (param_1,&uStack_20,param_4);
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_10) {
    return uVar2;
  }
  func_0x0099bd00();
  pcVar1 = (code *)swi(3);
  uVar2 = (*pcVar1)();
  return uVar2;
}


