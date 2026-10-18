// Function: _ZN4absl12lts_2026052616strings_internal11BigUnsignedILi84EE10ReadDigitsEPKcS5_i
// Address: 004ea530
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


int _ZN4absl12lts_2026052616strings_internal11BigUnsignedILi84EE10ReadDigitsEPKcS5_i
              (uint *param_1,char *param_2,char *param_3,int param_4)

{
  uint *puVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  char *pcVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  int iVar15;
  char *pcVar16;
  char *pcVar17;
  bool bVar18;
  
  if (0 < (long)(int)*param_1) {
    func_0x0099bdb0(param_1 + 1,0,(long)(int)*param_1 << 2);
  }
  *param_1 = 0;
  pcVar6 = param_2;
  if (param_2 < param_3) {
    do {
      pcVar6 = param_2;
      if (*param_2 != '0') break;
      param_2 = param_2 + 1;
      pcVar6 = param_3;
    } while (param_2 != param_3);
  }
  pcVar17 = param_3;
  if (pcVar6 < param_3) {
    iVar8 = (int)param_3 - (uint)pcVar6;
    iVar9 = 0;
    do {
      pcVar16 = pcVar17 + -1;
      if (*pcVar16 != '0') {
        if (*pcVar16 != '.') {
          if (iVar9 == 0) goto code_r0x004ea61f;
          goto code_r0x004ea5f3;
        }
        pcVar17 = pcVar16;
        if (pcVar16 <= pcVar6) goto code_r0x004ea61f;
        iVar8 = 0;
        goto code_r0x004ea5d0;
      }
      iVar9 = iVar9 + 1;
      pcVar17 = pcVar16;
    } while (pcVar6 < pcVar16);
    pcVar17 = pcVar6;
    iVar9 = iVar8;
    if (iVar8 != 0) {
code_r0x004ea5f3:
      pcVar16 = (char *)func_0x0099c070(pcVar6,0x2e,(long)pcVar17 - (long)pcVar6);
      iVar15 = 0;
      if (pcVar16 == pcVar17) {
        iVar15 = iVar9;
      }
      if (pcVar16 == (char *)0x0) {
        iVar15 = iVar9;
      }
      goto code_r0x004ea622;
    }
  }
code_r0x004ea61f:
  iVar15 = 0;
  goto code_r0x004ea622;
  while( true ) {
    iVar8 = iVar8 + 1;
    pcVar16 = pcVar16 + -1;
    pcVar17 = pcVar6;
    iVar15 = (~(uint)pcVar6 + (int)param_3) - iVar9;
    if (pcVar16 <= pcVar6) break;
code_r0x004ea5d0:
    pcVar17 = pcVar16;
    iVar15 = iVar8;
    if (pcVar16[-1] != '0') break;
  }
code_r0x004ea622:
  iVar8 = 0;
  iVar9 = iVar8;
  if (param_4 < 1 || pcVar6 == pcVar17) goto code_r0x004ea8c5;
  uVar5 = 0;
  iVar9 = 0;
  uVar4 = 0;
  do {
    cVar2 = *pcVar6;
    if (cVar2 == '.') {
      iVar9 = 1;
    }
    else {
      cVar7 = cVar2 + -0x30;
      param_4 = param_4 + -1;
      if (((param_4 == 0) && (pcVar6 + 1 != pcVar17)) && ((cVar2 == '5' || (cVar2 == '0')))) {
        cVar7 = cVar2 + -0x2f;
      }
      iVar15 = iVar15 - iVar9;
      uVar5 = (int)cVar7 + uVar5 * 10;
      iVar8 = iVar8 + 1;
      if (iVar8 == 9) {
        iVar8 = 0;
        uVar10 = (uint)uVar4;
        uVar12 = 0;
        if (0 < (int)uVar10) {
          if (uVar10 == 1) {
            uVar12 = 0;
            uVar14 = 0;
code_r0x004ea726:
            uVar11 = (ulong)param_1[uVar12 + 1] * 1000000000 + uVar14;
            param_1[uVar12 + 1] = (uint)uVar11;
            uVar14 = uVar11 >> 0x20;
          }
          else {
            uVar12 = 0;
            uVar14 = 0;
            do {
              uVar14 = (ulong)param_1[uVar12 + 1] * 1000000000 + uVar14;
              param_1[uVar12 + 1] = (uint)uVar14;
              uVar11 = (ulong)param_1[uVar12 + 2] * 1000000000 + (uVar14 >> 0x20);
              param_1[uVar12 + 2] = (uint)uVar11;
              uVar14 = uVar11 >> 0x20;
              uVar12 = uVar12 + 2;
            } while ((uVar10 & 0x7ffffffe) != uVar12);
            if ((uVar4 & 1) != 0) goto code_r0x004ea726;
          }
          uVar12 = uVar4;
          if ((uVar10 < 0x54) && (uVar11 >> 0x20 != 0)) {
            param_1[uVar4 + 1] = (uint)uVar14;
            *param_1 = uVar10 + 1;
            uVar12 = (ulong)(uVar10 + 1);
          }
        }
        uVar4 = uVar12;
        if (uVar5 == 0) {
          uVar5 = 0;
        }
        else {
          uVar12 = 0;
          do {
            puVar1 = param_1 + uVar12 + 1;
            bVar18 = CARRY4(*puVar1,uVar5);
            *puVar1 = *puVar1 + uVar5;
            uVar10 = (int)uVar12 + (uint)bVar18;
            uVar12 = (ulong)uVar10;
            if (!bVar18) break;
            uVar5 = (uint)bVar18;
          } while (uVar10 < 0x54);
          uVar5 = uVar10 + 1;
          if (uVar10 + 1 <= (uint)uVar4) {
            uVar5 = (uint)uVar4;
          }
          if (0x53 < uVar5) {
            uVar5 = 0x54;
          }
          uVar4 = (ulong)uVar5;
          *param_1 = uVar5;
          uVar5 = 0;
          iVar8 = 0;
        }
      }
    }
    pcVar6 = pcVar6 + 1;
  } while ((pcVar6 != pcVar17) && (0 < param_4));
  if (iVar8 == 0) goto code_r0x004ea8c5;
  uVar10 = (uint)uVar4;
  if (uVar10 == 0) {
    uVar4 = 0;
  }
  else {
    uVar12 = (ulong)*(uint *)(_ZN4absl12lts_2026052616strings_internal9kTenToNthE + (long)iVar8 * 4)
    ;
    if (uVar10 == 1) {
      uVar11 = 0;
      uVar14 = 0;
code_r0x004ea84f:
      uVar13 = param_1[uVar11 + 1] * uVar12 + uVar14;
      param_1[uVar11 + 1] = (uint)uVar13;
      uVar14 = uVar13 >> 0x20;
    }
    else {
      uVar11 = 0;
      uVar14 = 0;
      do {
        uVar14 = param_1[uVar11 + 1] * uVar12 + uVar14;
        param_1[uVar11 + 1] = (uint)uVar14;
        uVar13 = param_1[uVar11 + 2] * uVar12 + (uVar14 >> 0x20);
        param_1[uVar11 + 2] = (uint)uVar13;
        uVar14 = uVar13 >> 0x20;
        uVar11 = uVar11 + 2;
      } while ((uVar10 & 0x7ffffffe) != uVar11);
      if ((uVar4 & 1) != 0) goto code_r0x004ea84f;
    }
    if ((uVar10 < 0x54) && (uVar13 >> 0x20 != 0)) {
      param_1[uVar4 + 1] = (uint)uVar14;
      uVar4 = (ulong)(uVar10 + 1);
      *param_1 = uVar10 + 1;
    }
  }
  if (uVar5 != 0) {
    uVar12 = 0;
    do {
      puVar1 = param_1 + uVar12 + 1;
      bVar18 = CARRY4(*puVar1,uVar5);
      *puVar1 = *puVar1 + uVar5;
      uVar10 = (int)uVar12 + (uint)bVar18;
      uVar12 = (ulong)uVar10;
      if (!bVar18) break;
      uVar5 = (uint)bVar18;
    } while (uVar10 < 0x54);
    uVar5 = uVar10 + 1;
    if ((int)(uVar10 + 1) <= (int)(uint)uVar4) {
      uVar5 = (uint)uVar4;
    }
    uVar10 = 0x54;
    if (uVar5 < 0x54) {
      uVar10 = uVar5;
    }
    *param_1 = uVar10;
  }
code_r0x004ea8c5:
  if (pcVar6 < pcVar17 && iVar9 == 0) {
    lVar3 = func_0x0099c070(pcVar6,0x2e,(long)pcVar17 - (long)pcVar6);
    iVar9 = (int)pcVar17;
    if (lVar3 != 0) {
      iVar9 = (int)lVar3;
    }
    iVar15 = iVar15 + (iVar9 - (int)pcVar6);
  }
  return iVar15;
}


