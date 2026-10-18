// Function: _ZN4absl12lts_2026052623FindLongestCommonSuffixENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_
// Address: 004ebca0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined1  [16]
_ZN4absl12lts_2026052623FindLongestCommonSuffixENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_
          (long param_1,ulong param_2,long param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  
  uVar6 = param_2;
  if (param_4 < param_2) {
    uVar6 = param_4;
  }
  if (uVar6 == 0) {
    return ZEXT816(0);
  }
  lVar1 = param_1 + param_2;
  pcVar3 = (char *)(param_4 + param_3);
  uVar4 = 0;
  do {
    pcVar3 = pcVar3 + -1;
    lVar2 = lVar1;
    uVar5 = uVar4;
    if (*(char *)(lVar1 + -1) != *pcVar3) break;
    lVar1 = lVar1 + -1;
    uVar4 = uVar4 + 1;
    lVar2 = (param_2 - uVar6) + param_1;
    uVar5 = uVar6;
  } while (uVar6 != uVar4);
  auVar7._8_8_ = uVar5;
  auVar7._0_8_ = lVar2;
  return auVar7;
}


