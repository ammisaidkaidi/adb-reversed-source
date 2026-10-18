// Function: _ZN4absl12lts_2026052616numbers_internal16safe_strto8_baseENSt3__117basic_string_viewIcNS2_11char_traitsIcEEEEPai
// Address: 004e47d0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _ZN4absl12lts_2026052616numbers_internal16safe_strto8_baseENSt3__117basic_string_viewIcNS2_11char_traitsIcEEEEPai
                (byte *param_1,long param_2,char *param_3,ulong param_4)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  byte *pbVar8;
  byte *pbVar9;
  ulong uVar10;
  
  *param_3 = '\0';
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
    lVar7 = param_2;
    if (param_1 + lVar7 <= pbVar8) goto code_r0x004e48ff;
    param_2 = lVar7 + -1;
  } while ((_ZN4absl12lts_2026052614ascii_internal13kPropertyBitsE[param_1[lVar7 + -1]] & 8) != 0);
  bVar1 = *pbVar8;
  pbVar9 = param_1 + lVar7;
  if (((bVar1 == 0x2d) || (bVar1 == 0x2b)) && (pbVar8 = pbVar8 + 1, pbVar9 <= pbVar8)) {
code_r0x004e48ff:
    uVar6 = 0;
    goto code_r0x004e49f8;
  }
  iVar5 = (int)param_4;
  if (iVar5 == 0x10) {
    param_4 = 0x10;
    if (((1 < (long)(param_1 + (param_2 - (long)pbVar8) + 1)) && (*pbVar8 == 0x30)) &&
       (((pbVar8[1] | 0x20) == 0x78 && (pbVar8 = pbVar8 + 2, pbVar9 <= pbVar8))))
    goto code_r0x004e48ff;
  }
  else if (iVar5 == 0) {
    if ((long)(param_1 + (param_2 - (long)pbVar8) + 1) < 2) {
      param_4 = 10;
      if (param_1 + (param_2 - (long)pbVar8) == (byte *)0x0) {
        bVar2 = *pbVar8;
        pbVar8 = pbVar8 + (bVar2 == 0x30);
        param_4 = (ulong)((uint)(bVar2 != 0x30) * 2 + 8);
      }
    }
    else if (*pbVar8 == 0x30) {
      if ((pbVar8[1] | 0x20) == 0x78) {
        pbVar8 = pbVar8 + 2;
        if (pbVar9 <= pbVar8) goto code_r0x004e48ff;
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
  else if (0x22 < iVar5 - 2U) goto code_r0x004e48ff;
  param_1 = param_1 + lVar7;
  uVar10 = param_4 & 0xffffffff;
  uVar6 = CONCAT71((int7)(param_4 >> 8),1);
  if (bVar1 == 0x2d) {
    if (param_1 == pbVar8) {
code_r0x004e4994:
      cVar4 = '\0';
    }
    else {
      cVar4 = '\0';
      do {
        cVar3 = (&UNK_002004a4)[*pbVar8];
        if ((int)param_4 <= (int)cVar3) goto code_r0x004e49e8;
        if ((cVar4 < (char)(&UNK_002005e0)[uVar10]) ||
           (cVar4 = cVar4 * (char)uVar10, (int)cVar4 < cVar3 + -0x80)) {
          uVar6 = 0;
          cVar4 = -0x80;
          break;
        }
        cVar4 = cVar4 - cVar3;
        pbVar8 = pbVar8 + 1;
      } while (pbVar8 < param_1);
    }
  }
  else {
    if (param_1 == pbVar8) goto code_r0x004e4994;
    cVar4 = '\0';
    do {
      cVar3 = (&UNK_002004a4)[*pbVar8];
      if ((int)param_4 <= (int)cVar3) goto code_r0x004e49e8;
      if (((char)(&UNK_002005b0)[uVar10] < cVar4) ||
         (cVar4 = cVar4 * (char)uVar10, 0x7f - cVar3 < (int)cVar4)) {
        uVar6 = 0;
        cVar4 = '\x7f';
        break;
      }
      cVar4 = cVar3 + cVar4;
      pbVar8 = pbVar8 + 1;
    } while (pbVar8 < param_1);
  }
code_r0x004e49f6:
  *param_3 = cVar4;
code_r0x004e49f8:
  return uVar6 & 0xffffffff;
code_r0x004e49e8:
  uVar6 = 0;
  goto code_r0x004e49f6;
}


