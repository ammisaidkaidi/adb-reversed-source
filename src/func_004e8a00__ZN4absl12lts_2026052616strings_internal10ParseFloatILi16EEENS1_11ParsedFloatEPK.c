// Function: _ZN4absl12lts_2026052616strings_internal10ParseFloatILi16EEENS1_11ParsedFloatEPKcS5_NS0_12chars_formatE
// Address: 004e8a00
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong * _ZN4absl12lts_2026052616strings_internal10ParseFloatILi16EEENS1_11ParsedFloatEPKcS5_NS0_12chars_formatE
                  (ulong *param_1,byte *param_2,byte *param_3,uint param_4)

{
  char cVar1;
  ulong uVar2;
  byte bVar3;
  byte bVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  long lVar8;
  int iVar9;
  uint uVar10;
  byte *pbVar11;
  byte *pbVar12;
  bool bVar13;
  int iVar14;
  undefined8 uStack_38;
  
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  if (param_2 == param_3) {
    return param_1;
  }
  cVar1 = func_0x004e8470(param_2,param_3,param_1);
  if (cVar1 != '\0') {
    return param_1;
  }
  pbVar6 = param_2;
  pbVar5 = param_2;
  if (param_2 < param_3) {
    do {
      pbVar6 = pbVar5;
      if (*pbVar5 != 0x30) break;
      pbVar5 = pbVar5 + 1;
      pbVar6 = param_3;
    } while (pbVar5 != param_3);
  }
  pbVar5 = pbVar6;
  if (param_3 != pbVar6) {
    pbVar11 = pbVar6;
    do {
      pbVar5 = pbVar11;
      if (*pbVar11 != 0x30) break;
      pbVar11 = pbVar11 + 1;
      pbVar5 = pbVar6 + ((long)param_3 - (long)pbVar6);
    } while (pbVar11 != param_3);
  }
  pbVar11 = pbVar5 + 0xf;
  if ((long)param_3 - (long)pbVar5 < 0x10) {
    pbVar11 = param_3;
  }
  if (pbVar5 < pbVar11) {
    uVar2 = 0;
    pbVar12 = pbVar5;
    do {
      pbVar5 = pbVar12;
      if ((long)(char)(&UNK_00203ff0)[*pbVar12] < 0) break;
      uVar2 = uVar2 * 0x10 + (long)(char)(&UNK_00203ff0)[*pbVar12];
      pbVar12 = pbVar12 + 1;
      pbVar5 = pbVar11;
    } while (pbVar12 != pbVar11);
    if (param_3 <= pbVar5) goto code_r0x004e8b3d;
code_r0x004e8af5:
    lVar8 = (long)param_3 - (long)pbVar5;
    pbVar11 = pbVar5 + lVar8;
    bVar3 = 0;
    do {
      pbVar12 = pbVar5;
      if ((char)(&UNK_00203ff0)[*pbVar5] < '\0') break;
      bVar3 = bVar3 | *pbVar5 != 0x30;
      pbVar5 = pbVar5 + 1;
      lVar8 = lVar8 + -1;
      pbVar12 = pbVar11;
    } while (lVar8 != 0);
    iVar9 = (int)pbVar12;
  }
  else {
    uVar2 = 0;
    if (pbVar5 < param_3) goto code_r0x004e8af5;
code_r0x004e8b3d:
    iVar9 = (int)pbVar5;
    bVar3 = 0;
  }
  iVar9 = iVar9 - (int)pbVar6;
  if (12499999 < iVar9) {
    return param_1;
  }
  pbVar5 = pbVar6 + iVar9;
  uVar7 = 0;
  if (iVar9 < 0x10) {
    uVar7 = 0xf - iVar9;
  }
  iVar14 = 0xf;
  if (0xf < iVar9) {
    iVar14 = iVar9;
  }
  iVar14 = iVar14 + -0xf;
  bVar4 = bVar3;
  if ((pbVar5 < param_3) && (*pbVar5 == 0x2e)) {
    pbVar5 = pbVar5 + 1;
    pbVar11 = pbVar5;
    if (uVar2 == 0) {
      if (pbVar5 < param_3) {
        pbVar12 = pbVar5;
        do {
          pbVar11 = pbVar12;
          if (*pbVar12 != 0x30) break;
          pbVar12 = pbVar12 + 1;
          pbVar11 = pbVar6 + ((long)param_3 - (long)pbVar6);
        } while (pbVar12 < param_3);
      }
      iVar9 = (int)pbVar11 - (int)pbVar5;
      if (12499999 < iVar9) {
        return param_1;
      }
      iVar14 = iVar14 - iVar9;
      pbVar5 = pbVar11;
      for (pbVar6 = pbVar11; (param_3 != pbVar6 && (pbVar5 = pbVar6, *pbVar6 == 0x30));
          pbVar6 = pbVar6 + 1) {
        pbVar5 = param_3;
      }
    }
    pbVar6 = pbVar5 + uVar7;
    if ((long)param_3 - (long)pbVar5 <= (long)(ulong)uVar7) {
      pbVar6 = param_3;
    }
    pbVar12 = pbVar5;
    if (pbVar5 < pbVar6) {
      do {
        pbVar12 = pbVar5;
        if ((long)(char)(&UNK_00203ff0)[*pbVar5] < 0) break;
        uVar2 = uVar2 * 0x10 + (long)(char)(&UNK_00203ff0)[*pbVar5];
        pbVar5 = pbVar5 + 1;
        pbVar12 = pbVar6;
      } while (pbVar5 != pbVar6);
    }
    if (pbVar12 < param_3) {
      lVar8 = (long)param_3 - (long)pbVar12;
      pbVar6 = pbVar12 + lVar8;
      bVar13 = false;
      pbVar5 = pbVar12;
      do {
        pbVar12 = pbVar5;
        if ((char)(&UNK_00203ff0)[*pbVar5] < '\0') break;
        bVar13 = (bool)(bVar13 | *pbVar5 != 0x30);
        pbVar5 = pbVar5 + 1;
        lVar8 = lVar8 + -1;
        pbVar12 = pbVar6;
      } while (lVar8 != 0);
      bVar4 = 1;
      if (!bVar13) {
        bVar4 = bVar3;
      }
    }
    uVar10 = (int)pbVar12 - (int)pbVar11;
    if ((int)uVar10 <= (int)uVar7) {
      uVar7 = uVar10;
    }
    if (12499999 < (int)uVar10) {
      return param_1;
    }
    pbVar5 = pbVar11 + (int)uVar10;
    iVar14 = iVar14 - uVar7;
  }
  if (param_2 == pbVar5) {
    return param_1;
  }
  if (((long)pbVar5 - (long)param_2 == 1) && (*param_2 == 0x2e)) {
    return param_1;
  }
  *param_1 = uVar2 | bVar4;
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  param_4 = param_4 & 3;
  uStack_38 = (ulong)param_4;
  if (((param_4 != 2) && (pbVar5 < param_3)) && ((*pbVar5 & 0xdf) == 0x50)) {
    pbVar6 = pbVar5 + 1;
    if (pbVar6 < param_3) {
      if (*pbVar6 == 0x2d) {
        uStack_38 = (ulong)param_4;
        pbVar6 = pbVar5 + 2;
      }
      else {
        uStack_38 = CONCAT44(1,param_4);
        if (*pbVar6 == 0x2b) {
          pbVar6 = pbVar5 + 2;
        }
      }
    }
    else {
      uStack_38 = CONCAT44(1,param_4);
    }
    iVar9 = func_0x004e85c0(pbVar6,param_3);
    pbVar11 = pbVar6 + iVar9;
    if ((uStack_38._4_1_ == '\0') && (iVar9 != 0)) {
      *(int *)((long)param_1 + 0xc) = -*(int *)((long)param_1 + 0xc);
      goto code_r0x004e8d6c;
    }
    if (iVar9 != 0) goto code_r0x004e8d6c;
  }
  pbVar11 = pbVar5;
  if ((int)uStack_38 == 1) {
    return param_1;
  }
code_r0x004e8d6c:
  *(undefined4 *)(param_1 + 2) = 0;
  iVar9 = 0;
  if (*param_1 != 0) {
    iVar9 = iVar14 * 4 + *(int *)((long)param_1 + 0xc);
  }
  *(int *)(param_1 + 1) = iVar9;
  param_1[5] = (ulong)pbVar11;
  return param_1;
}


