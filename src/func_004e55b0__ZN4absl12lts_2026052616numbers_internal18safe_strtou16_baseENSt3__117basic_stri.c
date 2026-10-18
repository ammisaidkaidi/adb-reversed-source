// Function: _ZN4absl12lts_2026052616numbers_internal18safe_strtou16_baseENSt3__117basic_string_viewIcNS2_11char_traitsIcEEEEPti
// Address: 004e55b0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8
_ZN4absl12lts_2026052616numbers_internal18safe_strtou16_baseENSt3__117basic_string_viewIcNS2_11char_traitsIcEEEEPti
          (byte *param_1,long param_2,ushort *param_3,uint param_4)

{
  byte bVar1;
  byte bVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  ushort uVar6;
  byte *pbVar7;
  byte *pbVar8;
  int iVar9;
  
  *param_3 = 0;
  if (param_1 == (byte *)0x0) {
    return 0;
  }
  pbVar7 = param_1;
  if (param_2 != 0) {
    do {
      if ((_ZN4absl12lts_2026052614ascii_internal13kPropertyBitsE[*pbVar7] & 8) == 0) break;
      pbVar7 = pbVar7 + 1;
    } while (pbVar7 < param_1 + param_2);
  }
  do {
    lVar5 = param_2;
    if (param_1 + lVar5 <= pbVar7) {
      return 0;
    }
    param_2 = lVar5 + -1;
  } while ((_ZN4absl12lts_2026052614ascii_internal13kPropertyBitsE[param_1[lVar5 + -1]] & 8) != 0);
  bVar1 = *pbVar7;
  pbVar8 = param_1 + lVar5;
  if (((bVar1 != 0x2d) && (bVar1 != 0x2b)) || (pbVar7 = pbVar7 + 1, pbVar7 < pbVar8)) {
    if (param_4 == 0x10) {
      param_4 = 0x10;
      if (((1 < (long)(param_1 + (param_2 - (long)pbVar7) + 1)) && (*pbVar7 == 0x30)) &&
         (((pbVar7[1] | 0x20) == 0x78 && (pbVar7 = pbVar7 + 2, pbVar8 <= pbVar7)))) {
        return 0;
      }
    }
    else if (param_4 == 0) {
      if ((long)(param_1 + (param_2 - (long)pbVar7) + 1) < 2) {
        param_4 = 10;
        if (param_1 + (param_2 - (long)pbVar7) == (byte *)0x0) {
          bVar2 = *pbVar7;
          pbVar7 = pbVar7 + (bVar2 == 0x30);
          param_4 = (uint)(bVar2 != 0x30) * 2 + 8;
        }
      }
      else if (*pbVar7 == 0x30) {
        if ((pbVar7[1] | 0x20) == 0x78) {
          pbVar7 = pbVar7 + 2;
          if (pbVar8 <= pbVar7) {
            return 0;
          }
          param_4 = 0x10;
        }
        else {
          pbVar7 = pbVar7 + 1;
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
      if (param_1 + lVar5 == pbVar7) {
        uVar6 = 0;
      }
      else {
        iVar9 = 0;
        do {
          uVar6 = (ushort)iVar9;
          uVar4 = (int)(char)(&UNK_002004a4)[*pbVar7] & 0xffff;
          if (param_4 <= uVar4) {
            uVar3 = 0;
            break;
          }
          if ((*(ushort *)(&UNK_00200f20 + (ulong)param_4 * 2) < uVar6) ||
             ((uVar4 ^ 0xffff) < (iVar9 * param_4 & 0xffff))) {
            uVar3 = 0;
            uVar6 = 0xffff;
            break;
          }
          iVar9 = (int)(short)(char)(&UNK_002004a4)[*pbVar7] + iVar9 * param_4;
          uVar6 = (ushort)iVar9;
          pbVar7 = pbVar7 + 1;
        } while (pbVar7 < param_1 + lVar5);
      }
      *param_3 = uVar6;
      return uVar3;
    }
  }
  return 0;
}


