// Function: _ZN4absl12lts_2026052616numbers_internal18safe_strtou64_baseENSt3__117basic_string_viewIcNS2_11char_traitsIcEEEEPmi
// Address: 004e5960
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8
_ZN4absl12lts_2026052616numbers_internal18safe_strtou64_baseENSt3__117basic_string_viewIcNS2_11char_traitsIcEEEEPmi
          (byte *param_1,long param_2,ulong *param_3,uint param_4)

{
  byte bVar1;
  byte bVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  ulong uVar10;
  
  *param_3 = 0;
  if (param_1 == (byte *)0x0) {
    return 0;
  }
  pbVar8 = param_1;
  if (param_2 != 0) {
    do {
      if ((_ZN4absl12lts_2026052614ascii_internal13kPropertyBitsE[*pbVar8] & 8) == 0) break;
      pbVar8 = pbVar8 + 1;
    } while (pbVar8 < param_1 + param_2);
  }
  do {
    lVar6 = param_2;
    if (param_1 + lVar6 <= pbVar8) {
      return 0;
    }
    param_2 = lVar6 + -1;
  } while ((_ZN4absl12lts_2026052614ascii_internal13kPropertyBitsE[param_1[lVar6 + -1]] & 8) != 0);
  bVar1 = *pbVar8;
  pbVar9 = param_1 + lVar6;
  if (((bVar1 != 0x2d) && (bVar1 != 0x2b)) || (pbVar8 = pbVar8 + 1, pbVar8 < pbVar9)) {
    if (param_4 == 0x10) {
      param_4 = 0x10;
      if (((1 < (long)(param_1 + (param_2 - (long)pbVar8) + 1)) && (*pbVar8 == 0x30)) &&
         (((pbVar8[1] | 0x20) == 0x78 && (pbVar8 = pbVar8 + 2, pbVar9 <= pbVar8)))) {
        return 0;
      }
    }
    else if (param_4 == 0) {
      if ((long)(param_1 + (param_2 - (long)pbVar8) + 1) < 2) {
        param_4 = 10;
        if (param_1 + (param_2 - (long)pbVar8) == (byte *)0x0) {
          bVar2 = *pbVar8;
          pbVar8 = pbVar8 + (bVar2 == 0x30);
          param_4 = (uint)(bVar2 != 0x30) * 2 + 8;
        }
      }
      else if (*pbVar8 == 0x30) {
        if ((pbVar8[1] | 0x20) == 0x78) {
          pbVar8 = pbVar8 + 2;
          if (pbVar9 <= pbVar8) {
            return 0;
          }
          param_4 = 0x10;
        }
        else {
          pbVar8 = pbVar8 + 1;
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
      uVar3 = 1;
      if (param_1 + lVar6 == pbVar8) {
        uVar5 = 0;
      }
      else {
        uVar7 = (ulong)param_4;
        uVar5 = 0;
        do {
          uVar10 = (ulong)(char)(&UNK_002004a4)[*pbVar8];
          if (uVar7 <= uVar10) {
            uVar3 = 0;
            break;
          }
          if ((*(ulong *)(&UNK_00201010 + uVar7 * 8) < uVar5) ||
             (uVar4 = uVar5 * uVar7, uVar5 = uVar4 + uVar10, CARRY8(uVar4,uVar10))) {
            uVar3 = 0;
            uVar5 = 0xffffffffffffffff;
            break;
          }
          pbVar8 = pbVar8 + 1;
        } while (pbVar8 < param_1 + lVar6);
      }
      *param_3 = uVar5;
      return uVar3;
    }
  }
  return 0;
}


