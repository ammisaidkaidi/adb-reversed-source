// Function: _ZN4absl12lts_2026052616strings_internal11BigUnsignedILi84EE22MultiplyByFiveToTheNthEi
// Address: 004eb110
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN4absl12lts_2026052616strings_internal11BigUnsignedILi84EE22MultiplyByFiveToTheNthEi
               (uint *param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (0xc < (int)param_2) {
    uVar2 = *param_1;
    uVar4 = param_2;
    do {
      if (0 < (int)uVar2) {
        if (uVar2 == 1) {
          uVar3 = 0;
          uVar5 = 0;
code_r0x004eb1a0:
          uVar7 = (ulong)param_1[uVar3 + 1] * 0x48c27395 + uVar5;
          param_1[uVar3 + 1] = (uint)uVar7;
          uVar5 = uVar7 >> 0x20;
        }
        else {
          uVar3 = 0;
          uVar5 = 0;
          do {
            uVar5 = (ulong)param_1[uVar3 + 1] * 0x48c27395 + uVar5;
            param_1[uVar3 + 1] = (uint)uVar5;
            uVar7 = (ulong)param_1[uVar3 + 2] * 0x48c27395 + (uVar5 >> 0x20);
            param_1[uVar3 + 2] = (uint)uVar7;
            uVar5 = uVar7 >> 0x20;
            uVar3 = uVar3 + 2;
          } while ((uVar2 & 0x7ffffffe) != uVar3);
          if ((uVar2 & 1) != 0) goto code_r0x004eb1a0;
        }
        if ((uVar2 < 0x54) && (uVar7 >> 0x20 != 0)) {
          param_1[(ulong)uVar2 + 1] = (uint)uVar5;
          uVar2 = uVar2 + 1;
          *param_1 = uVar2;
        }
      }
      param_2 = uVar4 - 0xd;
      bVar1 = 0x19 < (int)uVar4;
      uVar4 = param_2;
    } while (bVar1);
  }
  if ((int)param_2 < 1) {
    return;
  }
  uVar2 = *param_1;
  if ((ulong)uVar2 == 0) {
    return;
  }
  if ((int)uVar2 < 1) {
    return;
  }
  uVar3 = (ulong)*(uint *)(_ZN4absl12lts_2026052616strings_internal10kFiveToNthE +
                          (ulong)param_2 * 4);
  if (uVar2 == 1) {
    uVar5 = 0;
    uVar7 = 0;
  }
  else {
    uVar5 = 0;
    uVar7 = 0;
    do {
      uVar7 = param_1[uVar5 + 1] * uVar3 + uVar7;
      param_1[uVar5 + 1] = (uint)uVar7;
      uVar6 = param_1[uVar5 + 2] * uVar3 + (uVar7 >> 0x20);
      param_1[uVar5 + 2] = (uint)uVar6;
      uVar7 = uVar6 >> 0x20;
      uVar5 = uVar5 + 2;
    } while ((uVar2 & 0x7ffffffe) != uVar5);
    if ((uVar2 & 1) == 0) goto code_r0x004eb272;
  }
  uVar6 = param_1[uVar5 + 1] * uVar3 + uVar7;
  param_1[uVar5 + 1] = (uint)uVar6;
  uVar7 = uVar6 >> 0x20;
code_r0x004eb272:
  if ((uVar2 < 0x54) && (uVar6 >> 0x20 != 0)) {
    param_1[(ulong)uVar2 + 1] = (uint)uVar7;
    *param_1 = uVar2 + 1;
  }
  return;
}


