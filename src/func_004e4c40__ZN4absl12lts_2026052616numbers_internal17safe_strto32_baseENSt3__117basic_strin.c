// Function: _ZN4absl12lts_2026052616numbers_internal17safe_strto32_baseENSt3__117basic_string_viewIcNS2_11char_traitsIcEEEEPii
// Address: 004e4c40
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8
_ZN4absl12lts_2026052616numbers_internal17safe_strto32_baseENSt3__117basic_string_viewIcNS2_11char_traitsIcEEEEPii
          (byte *param_1,long param_2,int *param_3,uint param_4)

{
  byte bVar1;
  byte bVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  
  *param_3 = 0;
  if (param_1 == (byte *)0x0) {
    return 0;
  }
  pbVar6 = param_1;
  if (param_2 != 0) {
    do {
      if ((_ZN4absl12lts_2026052614ascii_internal13kPropertyBitsE[*pbVar6] & 8) == 0) break;
      pbVar6 = pbVar6 + 1;
    } while (pbVar6 < param_1 + param_2);
  }
  do {
    lVar5 = param_2;
    if (param_1 + lVar5 <= pbVar6) {
      return 0;
    }
    param_2 = lVar5 + -1;
  } while ((_ZN4absl12lts_2026052614ascii_internal13kPropertyBitsE[param_1[lVar5 + -1]] & 8) != 0);
  bVar1 = *pbVar6;
  pbVar7 = param_1 + lVar5;
  if (((bVar1 == 0x2d) || (bVar1 == 0x2b)) && (pbVar6 = pbVar6 + 1, pbVar7 <= pbVar6)) {
    return 0;
  }
  if (param_4 == 0x10) {
    param_4 = 0x10;
    if (((1 < (long)(param_1 + (param_2 - (long)pbVar6) + 1)) && (*pbVar6 == 0x30)) &&
       (((pbVar6[1] | 0x20) == 0x78 && (pbVar6 = pbVar6 + 2, pbVar7 <= pbVar6)))) {
      return 0;
    }
  }
  else if (param_4 == 0) {
    if ((long)(param_1 + (param_2 - (long)pbVar6) + 1) < 2) {
      param_4 = 10;
      if (param_1 + (param_2 - (long)pbVar6) == (byte *)0x0) {
        bVar2 = *pbVar6;
        pbVar6 = pbVar6 + (bVar2 == 0x30);
        param_4 = (uint)(bVar2 != 0x30) * 2 + 8;
      }
    }
    else if (*pbVar6 == 0x30) {
      if ((pbVar6[1] | 0x20) == 0x78) {
        pbVar6 = pbVar6 + 2;
        if (pbVar7 <= pbVar6) {
          return 0;
        }
        param_4 = 0x10;
      }
      else {
        pbVar6 = pbVar6 + 1;
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
  param_1 = param_1 + lVar5;
  if (bVar1 == 0x2d) {
    uVar3 = 1;
    if (param_1 != pbVar6) {
      iVar4 = 0;
      do {
        uVar8 = (uint)(char)(&UNK_002004a4)[*pbVar6];
        if ((int)param_4 <= (int)uVar8) goto code_r0x004e4e50;
        if ((iVar4 < *(int *)(&UNK_00200750 + (ulong)param_4 * 4)) ||
           ((int)(iVar4 * param_4) < (int)(uVar8 | 0x80000000))) {
          uVar3 = 0;
          iVar4 = -0x80000000;
          break;
        }
        iVar4 = iVar4 * param_4 - uVar8;
        pbVar6 = pbVar6 + 1;
      } while (pbVar6 < param_1);
      goto code_r0x004e4e64;
    }
  }
  else {
    uVar3 = 1;
    if (param_1 != pbVar6) {
      iVar4 = 0;
      do {
        uVar8 = (uint)(char)(&UNK_002004a4)[*pbVar6];
        if ((int)param_4 <= (int)uVar8) goto code_r0x004e4e50;
        if ((*(int *)(&UNK_002006b0 + (ulong)param_4 * 4) < iVar4) ||
           ((int)(uVar8 ^ 0x7fffffff) < (int)(iVar4 * param_4))) {
          uVar3 = 0;
          iVar4 = 0x7fffffff;
          break;
        }
        iVar4 = iVar4 * param_4 + uVar8;
        pbVar6 = pbVar6 + 1;
      } while (pbVar6 < param_1);
      goto code_r0x004e4e64;
    }
  }
  uVar3 = 1;
  iVar4 = 0;
code_r0x004e4e64:
  *param_3 = iVar4;
  return uVar3;
code_r0x004e4e50:
  uVar3 = 0;
  goto code_r0x004e4e64;
}


