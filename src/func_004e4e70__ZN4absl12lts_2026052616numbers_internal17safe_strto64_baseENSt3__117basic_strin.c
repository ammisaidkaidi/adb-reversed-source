// Function: _ZN4absl12lts_2026052616numbers_internal17safe_strto64_baseENSt3__117basic_string_viewIcNS2_11char_traitsIcEEEEPli
// Address: 004e4e70
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8
_ZN4absl12lts_2026052616numbers_internal17safe_strto64_baseENSt3__117basic_string_viewIcNS2_11char_traitsIcEEEEPli
          (byte *param_1,long param_2,long *param_3,uint param_4)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  
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
    lVar5 = param_2;
    if (param_1 + lVar5 <= pbVar9) {
      return 0;
    }
    param_2 = lVar5 + -1;
  } while ((_ZN4absl12lts_2026052614ascii_internal13kPropertyBitsE[param_1[lVar5 + -1]] & 8) != 0);
  bVar1 = *pbVar9;
  pbVar10 = param_1 + lVar5;
  if (((bVar1 == 0x2d) || (bVar1 == 0x2b)) && (pbVar9 = pbVar9 + 1, pbVar10 <= pbVar9)) {
    return 0;
  }
  if (param_4 == 0x10) {
    param_4 = 0x10;
    if (((1 < (long)(param_1 + (param_2 - (long)pbVar9) + 1)) && (*pbVar9 == 0x30)) &&
       (((pbVar9[1] | 0x20) == 0x78 && (pbVar9 = pbVar9 + 2, pbVar10 <= pbVar9)))) {
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
        if (pbVar10 <= pbVar9) {
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
  param_1 = param_1 + lVar5;
  uVar8 = (ulong)param_4;
  if (bVar1 == 0x2d) {
    uVar4 = 1;
    if (param_1 != pbVar9) {
      lVar5 = 0;
      do {
        iVar6 = (int)(char)(&UNK_002004a4)[*pbVar9];
        if ((int)param_4 <= iVar6) goto code_r0x004e50a6;
        lVar3 = -0x8000000000000000;
        if (lVar5 < *(long *)(&UNK_00200920 + uVar8 * 8)) goto code_r0x004e509f;
        if ((long)(lVar5 * uVar8) < (long)((long)iVar6 | 0x8000000000000000U))
        goto code_r0x004e509f;
        lVar5 = lVar5 * uVar8 - (long)iVar6;
        pbVar9 = pbVar9 + 1;
      } while (pbVar9 < param_1);
      goto code_r0x004e50a8;
    }
  }
  else {
    uVar4 = 1;
    if (param_1 != pbVar9) {
      lVar5 = 0;
      do {
        lVar7 = (long)(char)(&UNK_002004a4)[*pbVar9];
        if ((long)uVar8 <= lVar7) goto code_r0x004e50a6;
        lVar3 = 0x7fffffffffffffff;
        if ((*(long *)(&UNK_002007f0 + uVar8 * 8) < lVar5) ||
           (lVar5 = lVar5 * uVar8,
           lVar5 - (0x7fffffffffffffff - lVar7) != 0 && 0x7fffffffffffffff - lVar7 <= lVar5))
        goto code_r0x004e509f;
        lVar5 = lVar5 + lVar7;
        pbVar9 = pbVar9 + 1;
      } while (pbVar9 < param_1);
      goto code_r0x004e50a8;
    }
  }
  uVar4 = 1;
  lVar5 = 0;
code_r0x004e50a8:
  *param_3 = lVar5;
  return uVar4;
code_r0x004e50a6:
  uVar4 = 0;
  goto code_r0x004e50a8;
code_r0x004e509f:
  lVar5 = lVar3;
  uVar4 = 0;
  goto code_r0x004e50a8;
}


