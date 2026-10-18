// Function: _ZN4absl12lts_2026052616strings_internal11BigUnsignedILi4EE12FiveToTheNthEi
// Address: 004e9c80
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


uint * _ZN4absl12lts_2026052616strings_internal11BigUnsignedILi4EE12FiveToTheNthEi
                 (uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  bool bVar9;
  
  uVar3 = (ulong)param_2;
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  _ZN4absl12lts_2026052616strings_internal11BigUnsignedILi4EEC1Em();
  if (0x1a < (int)param_2) {
    bVar9 = true;
    do {
      iVar8 = (int)(uVar3 * 0x2f684bdb >> 0x20);
      uVar5 = ((uint)((int)uVar3 - iVar8) >> 1) + iVar8 >> 4;
      if (0x13 < uVar5) {
        uVar5 = 0x14;
      }
      if (bVar9) {
        func_0x0099bda0(param_1 + 1,&UNK_00204160 + (ulong)((uVar5 - 1) * uVar5) * 4,uVar5 * 8);
        *param_1 = uVar5 * 2;
      }
      else {
        uVar1 = *param_1;
        uVar2 = uVar1 + uVar5 * 2;
        if (1 < (int)uVar2) {
          if (4 < uVar2) {
            uVar2 = 5;
          }
          iVar8 = uVar2 - 2;
          do {
            _ZN4absl12lts_2026052616strings_internal11BigUnsignedILi4EE12MultiplyStepEiPKjii
                      (param_1,uVar1,&UNK_00204160 + (ulong)((uVar5 - 1) * uVar5) * 4,uVar5 * 2,
                       iVar8);
            bVar9 = iVar8 != 0;
            iVar8 = iVar8 + -1;
          } while (bVar9);
        }
      }
      uVar5 = (int)uVar3 + uVar5 * -0x1b;
      uVar3 = (ulong)uVar5;
      bVar9 = false;
    } while (0x1a < (int)uVar5);
  }
  uVar5 = (uint)uVar3;
  if (0xc < (int)uVar5) {
    uVar2 = *param_1;
    do {
      if (0 < (int)uVar2) {
        if (uVar2 == 1) {
          uVar4 = 0;
          uVar6 = 0;
code_r0x004e9e41:
          uVar7 = (ulong)param_1[uVar4 + 1] * 0x48c27395 + uVar6;
          param_1[uVar4 + 1] = (uint)uVar7;
          uVar6 = uVar7 >> 0x20;
        }
        else {
          uVar4 = 0;
          uVar6 = 0;
          do {
            uVar6 = (ulong)param_1[uVar4 + 1] * 0x48c27395 + uVar6;
            param_1[uVar4 + 1] = (uint)uVar6;
            uVar7 = (ulong)param_1[uVar4 + 2] * 0x48c27395 + (uVar6 >> 0x20);
            param_1[uVar4 + 2] = (uint)uVar7;
            uVar6 = uVar7 >> 0x20;
            uVar4 = uVar4 + 2;
          } while ((uVar2 & 0x7ffffffe) != uVar4);
          if ((uVar2 & 1) != 0) goto code_r0x004e9e41;
        }
        if ((uVar2 < 4) && (uVar7 >> 0x20 != 0)) {
          param_1[(ulong)uVar2 + 1] = (uint)uVar6;
          uVar2 = uVar2 + 1;
          *param_1 = uVar2;
        }
      }
      iVar8 = (int)uVar3;
      uVar5 = iVar8 - 0xd;
      uVar3 = (ulong)uVar5;
    } while (0x19 < iVar8);
  }
  if ((int)uVar5 < 1) {
    return param_1;
  }
  uVar2 = *param_1;
  if ((ulong)uVar2 == 0) {
    return param_1;
  }
  if ((int)uVar2 < 1) {
    return param_1;
  }
  uVar3 = (ulong)*(uint *)(_ZN4absl12lts_2026052616strings_internal10kFiveToNthE + (ulong)uVar5 * 4)
  ;
  if (uVar2 == 1) {
    uVar4 = 0;
    uVar6 = 0;
  }
  else {
    uVar4 = 0;
    uVar6 = 0;
    do {
      uVar6 = param_1[uVar4 + 1] * uVar3 + uVar6;
      param_1[uVar4 + 1] = (uint)uVar6;
      uVar7 = param_1[uVar4 + 2] * uVar3 + (uVar6 >> 0x20);
      param_1[uVar4 + 2] = (uint)uVar7;
      uVar6 = uVar7 >> 0x20;
      uVar4 = uVar4 + 2;
    } while ((uVar2 & 0x7ffffffe) != uVar4);
    if ((uVar2 & 1) == 0) goto code_r0x004e9f12;
  }
  uVar7 = param_1[uVar4 + 1] * uVar3 + uVar6;
  param_1[uVar4 + 1] = (uint)uVar7;
  uVar6 = uVar7 >> 0x20;
code_r0x004e9f12:
  if ((uVar2 < 4) && (uVar7 >> 0x20 != 0)) {
    param_1[(ulong)uVar2 + 1] = (uint)uVar6;
    *param_1 = uVar2 + 1;
  }
  return param_1;
}


