// Function: _ZN4absl12lts_2026052619str_format_internal13FormatArgImpl8DispatchINSt3__117basic_string_viewIcNS4_11char_traitsIcEEEEEEbNS2_4DataENS1_24FormatConversionSpecImplEPv
// Address: 004d8a30
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8
_ZN4absl12lts_2026052619str_format_internal13FormatArgImpl8DispatchINSt3__117basic_string_viewIcNS4_11char_traitsIcEEEEEEbNS2_4DataENS1_24FormatConversionSpecImplEPv
          (undefined8 *param_1,ulong param_2,uint param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  
  if (((param_2 & 0xff) == 0x13) || ((2L << ((byte)param_2 & 0x3f) & 0x80004U) == 0)) {
    uVar6 = 0;
  }
  else {
    uVar2 = *param_1;
    uVar4 = param_1[1];
    if ((char)(param_2 >> 8) != '\0') {
      uVar5 = param_2 >> 0x20;
      if ((int)(param_2 >> 0x20) == 0 || (long)param_2 < 0) {
        uVar5 = 0;
      }
      uVar7 = (ulong)param_3;
      if (uVar4 < param_3) {
        uVar7 = uVar4;
      }
      if ((int)param_3 < 0) {
        uVar7 = uVar4;
      }
      uVar4 = 0;
      if (uVar7 <= uVar5) {
        uVar4 = uVar5 - uVar7;
      }
      if ((param_2 & 0x100) == 0) {
        _ZN4absl12lts_2026052619str_format_internal14FormatSinkImpl6AppendEmc(param_4,uVar4,0x20);
        if (uVar7 != 0) {
          param_4[2] = param_4[2] + uVar7;
          lVar3 = param_4[3];
          if (uVar7 < (ulong)((long)param_4 + (0x420 - lVar3))) {
            func_0x0099bda0(lVar3,uVar2,uVar7);
            param_4[3] = param_4[3] + uVar7;
          }
          else {
            puVar1 = param_4 + 4;
            (*(code *)param_4[1])(*param_4,puVar1,lVar3 - (long)puVar1);
            param_4[3] = puVar1;
            (*(code *)param_4[1])(*param_4,uVar2,uVar7);
          }
        }
      }
      else {
        if (uVar7 != 0) {
          param_4[2] = param_4[2] + uVar7;
          lVar3 = param_4[3];
          if (uVar7 < (ulong)((long)param_4 + (0x420 - lVar3))) {
            func_0x0099bda0(lVar3,uVar2,uVar7);
            param_4[3] = param_4[3] + uVar7;
          }
          else {
            puVar1 = param_4 + 4;
            (*(code *)param_4[1])(*param_4,puVar1,lVar3 - (long)puVar1);
            param_4[3] = puVar1;
            (*(code *)param_4[1])(*param_4,uVar2,uVar7);
          }
        }
        _ZN4absl12lts_2026052619str_format_internal14FormatSinkImpl6AppendEmc(param_4,uVar4,0x20);
      }
      return 1;
    }
    uVar6 = 1;
    if (uVar4 != 0) {
      param_4[2] = param_4[2] + uVar4;
      lVar3 = param_4[3];
      if (uVar4 < (ulong)((long)param_4 + (0x420 - lVar3))) {
        func_0x0099bda0(lVar3);
        param_4[3] = param_4[3] + uVar4;
      }
      else {
        puVar1 = param_4 + 4;
        (*(code *)param_4[1])(*param_4,puVar1,lVar3 - (long)puVar1);
        param_4[3] = puVar1;
        (*(code *)param_4[1])(*param_4,uVar2,uVar4);
      }
    }
  }
  return uVar6;
}


