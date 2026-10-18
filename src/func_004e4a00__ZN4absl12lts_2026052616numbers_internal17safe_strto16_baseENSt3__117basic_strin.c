// Function: _ZN4absl12lts_2026052616numbers_internal17safe_strto16_baseENSt3__117basic_string_viewIcNS2_11char_traitsIcEEEEPsi
// Address: 004e4a00
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8
_ZN4absl12lts_2026052616numbers_internal17safe_strto16_baseENSt3__117basic_string_viewIcNS2_11char_traitsIcEEEEPsi
          (byte *param_1,long param_2,short *param_3,uint param_4)

{
  byte bVar1;
  byte bVar2;
  undefined8 uVar3;
  short sVar4;
  long lVar6;
  byte *pbVar7;
  byte *pbVar8;
  int iVar9;
  int iVar5;
  
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
    lVar6 = param_2;
    if (param_1 + lVar6 <= pbVar7) {
      return 0;
    }
    param_2 = lVar6 + -1;
  } while ((_ZN4absl12lts_2026052614ascii_internal13kPropertyBitsE[param_1[lVar6 + -1]] & 8) != 0);
  bVar1 = *pbVar7;
  pbVar8 = param_1 + lVar6;
  if (((bVar1 == 0x2d) || (bVar1 == 0x2b)) && (pbVar7 = pbVar7 + 1, pbVar8 <= pbVar7)) {
    return 0;
  }
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
  param_1 = param_1 + lVar6;
  if (bVar1 == 0x2d) {
    uVar3 = 1;
    if (param_1 != pbVar7) {
      iVar5 = 0;
      do {
        sVar4 = (short)iVar5;
        iVar9 = (int)(char)(&UNK_002004a4)[*pbVar7];
        if ((int)param_4 <= iVar9) goto code_r0x004e4c25;
        if ((sVar4 < *(short *)(&UNK_00200660 + (ulong)param_4 * 2)) ||
           ((int)(short)(iVar5 * param_4) < iVar9 + -0x8000)) {
          uVar3 = 0;
          sVar4 = -0x8000;
          break;
        }
        iVar5 = iVar5 * param_4 - iVar9;
        sVar4 = (short)iVar5;
        pbVar7 = pbVar7 + 1;
      } while (pbVar7 < param_1);
      goto code_r0x004e4c37;
    }
  }
  else {
    uVar3 = 1;
    if (param_1 != pbVar7) {
      iVar5 = 0;
      do {
        sVar4 = (short)iVar5;
        iVar9 = (int)(char)(&UNK_002004a4)[*pbVar7];
        if ((int)param_4 <= iVar9) goto code_r0x004e4c25;
        if ((*(short *)(&UNK_00200610 + (ulong)param_4 * 2) < sVar4) ||
           (0x7fff - iVar9 < (int)(short)(iVar5 * param_4))) {
          uVar3 = 0;
          sVar4 = 0x7fff;
          break;
        }
        iVar5 = iVar5 * param_4 + iVar9;
        sVar4 = (short)iVar5;
        pbVar7 = pbVar7 + 1;
      } while (pbVar7 < param_1);
      goto code_r0x004e4c37;
    }
  }
  uVar3 = 1;
  sVar4 = 0;
code_r0x004e4c37:
  *param_3 = sVar4;
  return uVar3;
code_r0x004e4c25:
  uVar3 = 0;
  goto code_r0x004e4c37;
}


