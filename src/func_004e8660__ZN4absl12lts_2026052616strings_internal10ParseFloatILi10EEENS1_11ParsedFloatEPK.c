// Function: _ZN4absl12lts_2026052616strings_internal10ParseFloatILi10EEENS1_11ParsedFloatEPKcS5_NS0_12chars_formatE
// Address: 004e8660
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long * _ZN4absl12lts_2026052616strings_internal10ParseFloatILi10EEENS1_11ParsedFloatEPKcS5_NS0_12chars_formatE
                 (long *param_1,byte *param_2,byte *param_3,uint param_4)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  byte bVar5;
  byte *pbVar6;
  byte *pbVar7;
  int iVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  long lVar12;
  int iVar13;
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
  pbVar7 = param_2;
  pbVar6 = param_2;
  if (param_2 < param_3) {
    do {
      pbVar7 = pbVar6;
      if (*pbVar6 != 0x30) break;
      pbVar6 = pbVar6 + 1;
      pbVar7 = param_3;
    } while (pbVar6 != param_3);
  }
  pbVar6 = pbVar7;
  if (param_3 != pbVar7) {
    pbVar10 = pbVar7;
    do {
      pbVar6 = pbVar10;
      if (*pbVar10 != 0x30) break;
      pbVar10 = pbVar10 + 1;
      pbVar6 = pbVar7 + ((long)param_3 - (long)pbVar7);
    } while (pbVar10 != param_3);
  }
  pbVar10 = pbVar6 + 0x13;
  if ((long)param_3 - (long)pbVar6 < 0x14) {
    pbVar10 = param_3;
  }
  if (pbVar6 < pbVar10) {
    lVar3 = 0;
    pbVar11 = pbVar6;
    do {
      pbVar6 = pbVar11;
      if (9 < (byte)(*pbVar11 - 0x30)) break;
      lVar3 = (ulong)(*pbVar11 & 0xf) + lVar3 * 10;
      pbVar11 = pbVar11 + 1;
      pbVar6 = pbVar10;
    } while (pbVar11 != pbVar10);
    if (param_3 <= pbVar6) goto code_r0x004e879d;
code_r0x004e875a:
    lVar12 = (long)param_3 - (long)pbVar6;
    pbVar10 = pbVar6 + lVar12;
    bVar4 = false;
    do {
      pbVar11 = pbVar6;
      if (9 < (byte)(*pbVar6 - 0x30)) break;
      bVar4 = (bool)(bVar4 | *pbVar6 != 0x30);
      pbVar6 = pbVar6 + 1;
      lVar12 = lVar12 + -1;
      pbVar11 = pbVar10;
    } while (lVar12 != 0);
  }
  else {
    lVar3 = 0;
    if (pbVar6 < param_3) goto code_r0x004e875a;
code_r0x004e879d:
    bVar4 = false;
    pbVar11 = pbVar6;
  }
  iVar8 = (int)pbVar11 - (int)pbVar7;
  if (49999999 < iVar8) {
    return param_1;
  }
  pbVar6 = pbVar7 + iVar8;
  uVar2 = 0;
  if (iVar8 < 0x14) {
    uVar2 = 0x13 - iVar8;
  }
  iVar13 = 0x13;
  if (0x13 < iVar8) {
    iVar13 = iVar8;
  }
  iVar13 = iVar13 + -0x13;
  if ((pbVar6 < param_3) && (*pbVar6 == 0x2e)) {
    pbVar6 = pbVar6 + 1;
    pbVar10 = pbVar6;
    if (lVar3 == 0) {
      if (pbVar6 < param_3) {
        pbVar11 = pbVar6;
        do {
          pbVar10 = pbVar11;
          if (*pbVar11 != 0x30) break;
          pbVar11 = pbVar11 + 1;
          pbVar10 = pbVar7 + ((long)param_3 - (long)pbVar7);
        } while (pbVar11 < param_3);
      }
      iVar8 = (int)pbVar10 - (int)pbVar6;
      if (49999999 < iVar8) {
        return param_1;
      }
      iVar13 = iVar13 - iVar8;
      pbVar6 = pbVar10;
      for (pbVar7 = pbVar10; (param_3 != pbVar7 && (pbVar6 = pbVar7, *pbVar7 == 0x30));
          pbVar7 = pbVar7 + 1) {
        pbVar6 = param_3;
      }
    }
    pbVar7 = pbVar6 + uVar2;
    if ((long)param_3 - (long)pbVar6 <= (long)(ulong)uVar2) {
      pbVar7 = param_3;
    }
    pbVar11 = pbVar6;
    if (pbVar6 < pbVar7) {
      do {
        pbVar11 = pbVar6;
        if (9 < (byte)(*pbVar6 - 0x30)) break;
        lVar3 = (ulong)(*pbVar6 & 0xf) + lVar3 * 10;
        pbVar6 = pbVar6 + 1;
        pbVar11 = pbVar7;
      } while (pbVar6 != pbVar7);
    }
    if (pbVar11 < param_3) {
      lVar12 = (long)param_3 - (long)pbVar11;
      pbVar7 = pbVar11 + lVar12;
      bVar5 = 0;
      pbVar6 = pbVar11;
      do {
        pbVar11 = pbVar6;
        if (9 < (byte)(*pbVar6 - 0x30)) break;
        bVar5 = bVar5 | *pbVar6 != 0x30;
        pbVar6 = pbVar6 + 1;
        lVar12 = lVar12 + -1;
        pbVar11 = pbVar7;
      } while (lVar12 != 0);
      bVar4 = (bool)(bVar4 | bVar5);
    }
    uVar9 = (int)pbVar11 - (int)pbVar10;
    if ((int)uVar9 <= (int)uVar2) {
      uVar2 = uVar9;
    }
    if (49999999 < (int)uVar9) {
      return param_1;
    }
    pbVar6 = pbVar10 + (int)uVar9;
    iVar13 = iVar13 - uVar2;
  }
  if (param_2 == pbVar6) {
    return param_1;
  }
  if (((long)pbVar6 - (long)param_2 == 1) && (*param_2 == 0x2e)) {
    return param_1;
  }
  if (bVar4) {
    param_1[3] = (long)param_2;
    param_1[4] = (long)pbVar6;
  }
  *param_1 = lVar3;
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  uVar2 = param_4 & 3;
  uStack_38 = (ulong)uVar2;
  if (((uVar2 != 2) && (pbVar6 < param_3)) && ((*pbVar6 & 0xdf) == 0x45)) {
    pbVar7 = pbVar6 + 1;
    if (pbVar7 < param_3) {
      if (*pbVar7 == 0x2d) {
        uStack_38 = (ulong)uVar2;
        pbVar7 = pbVar6 + 2;
      }
      else {
        uStack_38 = CONCAT44(1,param_4) & 0xffffffff00000003;
        if (*pbVar7 == 0x2b) {
          pbVar7 = pbVar6 + 2;
        }
      }
    }
    else {
      uStack_38 = CONCAT44(1,uVar2);
    }
    iVar8 = func_0x004e85c0(pbVar7,param_3);
    pbVar10 = pbVar7 + iVar8;
    if ((uStack_38._4_1_ == '\0') && (iVar8 != 0)) {
      *(int *)((long)param_1 + 0xc) = -*(int *)((long)param_1 + 0xc);
      goto code_r0x004e89b9;
    }
    if (iVar8 != 0) goto code_r0x004e89b9;
  }
  pbVar10 = pbVar6;
  if ((int)uStack_38 == 1) {
    return param_1;
  }
code_r0x004e89b9:
  *(undefined4 *)(param_1 + 2) = 0;
  iVar8 = 0;
  if (*param_1 != 0) {
    iVar8 = iVar13 + *(int *)((long)param_1 + 0xc);
  }
  *(int *)(param_1 + 1) = iVar8;
  param_1[5] = (long)pbVar10;
  return param_1;
}


