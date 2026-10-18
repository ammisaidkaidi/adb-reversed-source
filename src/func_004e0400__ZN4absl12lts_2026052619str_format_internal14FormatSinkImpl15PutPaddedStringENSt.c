// Function: _ZN4absl12lts_2026052619str_format_internal14FormatSinkImpl15PutPaddedStringENSt3__117basic_string_viewIcNS3_11char_traitsIcEEEEiib
// Address: 004e0400
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8
_ZN4absl12lts_2026052619str_format_internal14FormatSinkImpl15PutPaddedStringENSt3__117basic_string_viewIcNS3_11char_traitsIcEEEEiib
          (undefined8 *param_1,undefined8 param_2,ulong param_3,uint param_4,uint param_5,
          int param_6)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = (ulong)param_4;
  if ((int)param_4 < 1) {
    uVar4 = 0;
  }
  uVar5 = (ulong)param_5;
  if (param_3 < param_5) {
    uVar5 = param_3;
  }
  if ((int)param_5 < 0) {
    uVar5 = param_3;
  }
  uVar3 = 0;
  if (uVar5 <= uVar4) {
    uVar3 = uVar4 - uVar5;
  }
  if (param_6 == 0) {
    _ZN4absl12lts_2026052619str_format_internal14FormatSinkImpl6AppendEmc(param_1,uVar3,0x20);
    if (uVar5 != 0) {
      param_1[2] = param_1[2] + uVar5;
      lVar2 = param_1[3];
      if (uVar5 < (ulong)((long)param_1 + (0x420 - lVar2))) {
        func_0x0099bda0(lVar2,param_2,uVar5);
        param_1[3] = param_1[3] + uVar5;
      }
      else {
        puVar1 = param_1 + 4;
        (*(code *)param_1[1])(*param_1,puVar1,lVar2 - (long)puVar1);
        param_1[3] = puVar1;
        (*(code *)param_1[1])(*param_1,param_2,uVar5);
      }
    }
  }
  else {
    if (uVar5 != 0) {
      param_1[2] = param_1[2] + uVar5;
      lVar2 = param_1[3];
      if (uVar5 < (ulong)((long)param_1 + (0x420 - lVar2))) {
        func_0x0099bda0(lVar2,param_2,uVar5);
        param_1[3] = param_1[3] + uVar5;
      }
      else {
        puVar1 = param_1 + 4;
        (*(code *)param_1[1])(*param_1,puVar1,lVar2 - (long)puVar1);
        param_1[3] = puVar1;
        (*(code *)param_1[1])(*param_1,param_2,uVar5);
      }
    }
    _ZN4absl12lts_2026052619str_format_internal14FormatSinkImpl6AppendEmc(param_1,uVar3,0x20);
  }
  return 1;
}


