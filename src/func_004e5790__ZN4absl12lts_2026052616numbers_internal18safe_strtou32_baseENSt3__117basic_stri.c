// Function: _ZN4absl12lts_2026052616numbers_internal18safe_strtou32_baseENSt3__117basic_string_viewIcNS2_11char_traitsIcEEEEPji
// Address: 004e5790
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _ZN4absl12lts_2026052616numbers_internal18safe_strtou32_baseENSt3__117basic_string_viewIcNS2_11char_traitsIcEEEEPji
                (byte *param_1,long param_2,uint *param_3,uint param_4)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  long lVar6;
  byte *pbVar7;
  ulong uVar8;
  byte *pbVar9;
  uint uVar10;
  
  *param_3 = 0;
  if (param_1 == (byte *)0x0) {
    return 0;
  }
  pbVar9 = param_1;
  if (param_2 != 0) {
    do {
      if ((_ZN4absl12lts_2026052614ascii_internal13kPropertyBitsE[*pbVar9] & 8) == 0) break;
      pbVar9 = pbVar9 + 1;
    } while (pbVar9 < param_1 + param_2);
  }
  do {
    lVar6 = param_2;
    if (param_1 + lVar6 <= pbVar9) {
      return 0;
    }
    param_2 = lVar6 + -1;
  } while ((_ZN4absl12lts_2026052614ascii_internal13kPropertyBitsE[param_1[lVar6 + -1]] & 8) != 0);
  bVar1 = *pbVar9;
  pbVar5 = param_1 + lVar6;
  if (((bVar1 != 0x2d) && (bVar1 != 0x2b)) || (pbVar9 = pbVar9 + 1, pbVar9 < pbVar5)) {
    pbVar7 = param_1;
    if (param_4 == 0x10) {
      param_4 = 0x10;
      if (((1 < (long)(param_1 + (param_2 - (long)pbVar9) + 1)) && (*pbVar9 == 0x30)) &&
         ((pbVar7 = (byte *)0x0, (pbVar9[1] | 0x20) == 0x78 &&
          (pbVar9 = pbVar9 + 2, pbVar5 <= pbVar9)))) {
        return 0;
      }
    }
    else if (param_4 == 0) {
      if ((long)(param_1 + (param_2 - (long)pbVar9) + 1) < 2) {
        param_4 = 10;
        if (param_1 + (param_2 - (long)pbVar9) == (byte *)0x0) {
          bVar2 = *pbVar9;
          pbVar9 = pbVar9 + (bVar2 == 0x30);
          param_4 = (uint)(bVar2 != 0x30) * 2 + 8;
        }
      }
      else if (*pbVar9 == 0x30) {
        if ((pbVar9[1] | 0x20) == 0x78) {
          pbVar9 = pbVar9 + 2;
          if (pbVar5 <= pbVar9) {
            return 0;
          }
          param_4 = 0x10;
        }
        else {
          pbVar9 = pbVar9 + 1;
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
    uVar4 = 0;
    if (bVar1 != 0x2d) {
      uVar8 = CONCAT71((int7)((ulong)pbVar7 >> 8),1);
      if (param_1 + lVar6 != pbVar9) {
        uVar4 = 0;
        do {
          uVar10 = (uint)(char)(&UNK_002004a4)[*pbVar9];
          if (param_4 <= uVar10) {
            uVar8 = 0;
            break;
          }
          if ((*(uint *)(&UNK_00200f70 + (ulong)param_4 * 4) < uVar4) ||
             (uVar3 = uVar4 * param_4, uVar4 = uVar3 + uVar10, CARRY4(uVar3,uVar10))) {
            uVar8 = 0;
            uVar4 = 0xffffffff;
            break;
          }
          pbVar9 = pbVar9 + 1;
        } while (pbVar9 < param_1 + lVar6);
      }
      *param_3 = uVar4;
      return uVar8 & 0xffffffff;
    }
  }
  return 0;
}


