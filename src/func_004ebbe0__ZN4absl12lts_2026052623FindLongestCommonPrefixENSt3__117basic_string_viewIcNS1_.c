// Function: _ZN4absl12lts_2026052623FindLongestCommonPrefixENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_
// Address: 004ebbe0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN4absl12lts_2026052623FindLongestCommonPrefixENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_
               (long param_1,ulong param_2,long param_3,ulong param_4)

{
  short *psVar1;
  short *psVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 < param_2) {
    param_2 = param_4;
  }
  uVar4 = 0;
  if (param_2 < 8) {
    while (uVar4 + 2 <= param_2) {
      psVar1 = (short *)(param_1 + uVar4);
      psVar2 = (short *)(param_3 + uVar4);
      uVar4 = uVar4 + 2;
      if (*psVar1 != *psVar2) {
        return;
      }
    }
  }
  else {
    do {
      if (*(ulong *)(param_1 + uVar4) != *(ulong *)(param_3 + uVar4)) {
        for (uVar4 = *(ulong *)(param_3 + uVar4) ^ *(ulong *)(param_1 + uVar4); (uVar4 & 1) == 0;
            uVar4 = uVar4 >> 1 | 0x8000000000000000) {
        }
        return;
      }
      uVar3 = uVar4 + 0x10;
      uVar4 = uVar4 + 8;
    } while (uVar3 < param_2);
    uVar4 = *(ulong *)(param_1 + -8 + param_2);
    uVar3 = *(ulong *)(param_3 + -8 + param_2);
    if (uVar4 != uVar3) {
      for (uVar3 = uVar3 ^ uVar4; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x8000000000000000) {
      }
    }
  }
  return;
}


