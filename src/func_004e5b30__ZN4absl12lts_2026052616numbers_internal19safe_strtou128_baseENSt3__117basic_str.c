// Function: _ZN4absl12lts_2026052616numbers_internal19safe_strtou128_baseENSt3__117basic_string_viewIcNS2_11char_traitsIcEEEEPNS0_7uint128Ei
// Address: 004e5b30
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8
_ZN4absl12lts_2026052616numbers_internal19safe_strtou128_baseENSt3__117basic_string_viewIcNS2_11char_traitsIcEEEEPNS0_7uint128Ei
          (byte *param_1,long param_2,undefined1 (*param_3) [16],uint param_4)

{
  byte bVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  byte *pbVar10;
  byte *pbVar11;
  ulong uVar12;
  ulong uVar13;
  
  *param_3 = (undefined1  [16])0x0;
  if (param_1 == (byte *)0x0) {
    return 0;
  }
  pbVar10 = param_1;
  if (param_2 != 0) {
    do {
      if ((_ZN4absl12lts_2026052614ascii_internal13kPropertyBitsE[*pbVar10] & 8) == 0) break;
      pbVar10 = pbVar10 + 1;
    } while (pbVar10 < param_1 + param_2);
  }
  do {
    lVar9 = param_2;
    if (param_1 + lVar9 <= pbVar10) {
      return 0;
    }
    param_2 = lVar9 + -1;
  } while ((_ZN4absl12lts_2026052614ascii_internal13kPropertyBitsE[param_1[lVar9 + -1]] & 8) != 0);
  bVar1 = *pbVar10;
  pbVar11 = param_1 + lVar9;
  if (((bVar1 != 0x2d) && (bVar1 != 0x2b)) || (pbVar10 = pbVar10 + 1, pbVar10 < pbVar11)) {
    if (param_4 == 0x10) {
      param_4 = 0x10;
      if (((1 < (long)(param_1 + (param_2 - (long)pbVar10) + 1)) && (*pbVar10 == 0x30)) &&
         (((pbVar10[1] | 0x20) == 0x78 && (pbVar10 = pbVar10 + 2, pbVar11 <= pbVar10)))) {
        return 0;
      }
    }
    else if (param_4 == 0) {
      if ((long)(param_1 + (param_2 - (long)pbVar10) + 1) < 2) {
        param_4 = 10;
        if (param_1 + (param_2 - (long)pbVar10) == (byte *)0x0) {
          bVar2 = *pbVar10;
          pbVar10 = pbVar10 + (bVar2 == 0x30);
          param_4 = (uint)(bVar2 != 0x30) * 2 + 8;
        }
      }
      else if (*pbVar10 == 0x30) {
        if ((pbVar10[1] | 0x20) == 0x78) {
          pbVar10 = pbVar10 + 2;
          if (pbVar11 <= pbVar10) {
            return 0;
          }
          param_4 = 0x10;
        }
        else {
          pbVar10 = pbVar10 + 1;
          param_4 = 8;
        }
      }
      else {
        param_4 = 10;
      }
    }
    else if (0x22 < param_4 - 2) {
      return 0;
    }
    if (bVar1 != 0x2d) {
      if (param_1 + lVar9 == pbVar10) {
        uVar6 = 0;
        uVar8 = 0;
      }
      else {
        uVar7 = CONCAT44(0,param_4);
        uVar8 = 0;
        uVar6 = 0;
        do {
          uVar13 = (ulong)(char)(&UNK_002004a4)[*pbVar10];
          uVar12 = (ulong)((char)(&UNK_002004a4)[*pbVar10] >> 7);
          if ((uVar13 < uVar7) <= uVar12) {
            *(ulong *)*param_3 = uVar6;
            *(ulong *)(*param_3 + 8) = uVar8;
            return 0;
          }
          if (*(ulong *)(&UNK_00201148 + uVar7 * 0x10) < uVar8 ||
              *(ulong *)(&UNK_00201148 + uVar7 * 0x10) - uVar8 <
              (ulong)(*(ulong *)(&UNK_00201140 + uVar7 * 0x10) < uVar6)) {
            *(undefined4 *)*param_3 = 0xffffffff;
            *(undefined4 *)(*param_3 + 4) = 0xffffffff;
            *(undefined4 *)(*param_3 + 8) = 0xffffffff;
            *(undefined4 *)(*param_3 + 0xc) = 0xffffffff;
            return 0;
          }
          auVar3._8_8_ = 0;
          auVar3._0_8_ = uVar6;
          auVar4._8_8_ = 0;
          auVar4._0_8_ = uVar7;
          uVar5 = SUB168(auVar3 * auVar4,0);
          uVar8 = SUB168(auVar3 * auVar4,8) + uVar8 * uVar7;
          if (~uVar12 < uVar8 || ~uVar12 - uVar8 < (ulong)(~uVar13 < uVar5)) {
            *(undefined4 *)*param_3 = 0xffffffff;
            *(undefined4 *)(*param_3 + 4) = 0xffffffff;
            *(undefined4 *)(*param_3 + 8) = 0xffffffff;
            *(undefined4 *)(*param_3 + 0xc) = 0xffffffff;
            return 0;
          }
          uVar6 = uVar5 + uVar13;
          uVar8 = uVar12 + uVar8 + (ulong)CARRY8(uVar5,uVar13);
          pbVar10 = pbVar10 + 1;
        } while (pbVar10 < param_1 + lVar9);
      }
      *(ulong *)*param_3 = uVar6;
      *(ulong *)(*param_3 + 8) = uVar8;
      return CONCAT71((int7)(uVar6 >> 8),1);
    }
  }
  return 0;
}


