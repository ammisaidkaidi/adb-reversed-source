// Function: _ZN4absl12lts_2026052616numbers_internal18safe_strto128_baseENSt3__117basic_string_viewIcNS2_11char_traitsIcEEEEPNS0_6int128Ei
// Address: 004e50b0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _ZN4absl12lts_2026052616numbers_internal18safe_strto128_baseENSt3__117basic_string_viewIcNS2_11char_traitsIcEEEEPNS0_6int128Ei
                (byte *param_1,ulong param_2,ulong *param_3,uint param_4)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  ulong uVar9;
  byte *pbVar10;
  undefined7 uVar12;
  ulong uVar11;
  long lVar13;
  long lVar14;
  byte *pbVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  byte *pbStack_38;
  
  *param_3 = 0;
  param_3[1] = 0;
  if (param_1 == (byte *)0x0) {
    return 0;
  }
  pbVar15 = param_1;
  if (param_2 != 0) {
    do {
      if ((_ZN4absl12lts_2026052614ascii_internal13kPropertyBitsE[*pbVar15] & 8) == 0) break;
      pbVar15 = pbVar15 + 1;
    } while (pbVar15 < param_1 + param_2);
  }
  do {
    uVar11 = param_2;
    if (param_1 + uVar11 <= pbVar15) goto code_r0x004e51f8;
    param_2 = uVar11 - 1;
  } while ((_ZN4absl12lts_2026052614ascii_internal13kPropertyBitsE[param_1[uVar11 - 1]] & 8) != 0);
  bVar1 = *pbVar15;
  pbVar10 = param_1 + uVar11;
  if (((bVar1 == 0x2d) || (bVar1 == 0x2b)) && (pbVar15 = pbVar15 + 1, pbVar10 <= pbVar15)) {
code_r0x004e51f8:
    uVar11 = 0;
    goto code_r0x004e53bd;
  }
  if (param_4 == 0x10) {
    param_4 = 0x10;
    if (((1 < (long)(param_1 + (param_2 - (long)pbVar15) + 1)) && (*pbVar15 == 0x30)) &&
       ((param_2 = 0, (pbVar15[1] | 0x20) == 0x78 && (pbVar15 = pbVar15 + 2, pbVar10 <= pbVar15))))
    goto code_r0x004e51f8;
  }
  else if (param_4 == 0) {
    if ((long)(param_1 + (param_2 - (long)pbVar15) + 1) < 2) {
      param_4 = 10;
      if (param_1 + (param_2 - (long)pbVar15) == (byte *)0x0) {
        bVar2 = *pbVar15;
        pbVar15 = pbVar15 + (bVar2 == 0x30);
        param_4 = (uint)(bVar2 != 0x30) * 2 + 8;
      }
    }
    else if (*pbVar15 == 0x30) {
      if ((pbVar15[1] | 0x20) == 0x78) {
        pbVar15 = pbVar15 + 2;
        if (pbVar10 <= pbVar15) goto code_r0x004e51f8;
        param_4 = 0x10;
      }
      else {
        pbVar15 = pbVar15 + 1;
        param_4 = 8;
      }
    }
    else {
      param_4 = 10;
    }
  }
  else {
    param_2 = (ulong)(param_4 - 2);
    if (0x22 < param_4 - 2) goto code_r0x004e51f8;
  }
  pbStack_38 = param_1 + uVar11;
  uVar12 = (undefined7)(param_2 >> 8);
  if (bVar1 == 0x2d) {
    uVar11 = CONCAT71(uVar12,1);
    if (pbStack_38 == pbVar15) {
code_r0x004e52ea:
      uVar16 = 0;
      uVar11 = CONCAT71(uVar12,1);
      uVar19 = 0;
    }
    else {
      uVar17 = CONCAT44(0,param_4);
      uVar16 = 0;
      uVar19 = 0;
      do {
        if ((int)param_4 <= (int)(char)(&UNK_002004a4)[*pbVar15]) goto code_r0x004e538f;
        lVar4 = uVar19 - *(long *)(&UNK_00200ca8 + uVar17 * 0x10);
        if ((SBORROW8(uVar19,*(long *)(&UNK_00200ca8 + uVar17 * 0x10)) !=
            SBORROW8(lVar4,(ulong)(uVar16 < *(ulong *)(&UNK_00200ca0 + uVar17 * 0x10)))) !=
            (long)(lVar4 - (ulong)(uVar16 < *(ulong *)(&UNK_00200ca0 + uVar17 * 0x10))) < 0) {
code_r0x004e5393:
          uVar11 = 0;
          uVar16 = 0;
          uVar19 = 0x8000000000000000;
          break;
        }
        auVar5._8_8_ = 0;
        auVar5._0_8_ = uVar16;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar17;
        uVar9 = SUB168(auVar5 * auVar7,0);
        lVar13 = SUB168(auVar5 * auVar7,8) + uVar19 * uVar17;
        uVar19 = (ulong)(char)(&UNK_002004a4)[*pbVar15];
        uVar16 = (long)uVar19 >> 0x3f | 0x8000000000000000;
        lVar4 = lVar13 - uVar16;
        if ((SBORROW8(lVar13,uVar16) != SBORROW8(lVar4,(ulong)(uVar9 < uVar19))) !=
            (long)(lVar4 - (ulong)(uVar9 < uVar19)) < 0) goto code_r0x004e5393;
        uVar16 = uVar9 - uVar19;
        uVar19 = (lVar13 - ((long)uVar19 >> 0x3f)) - (ulong)(uVar9 < uVar19);
        pbVar15 = pbVar15 + 1;
      } while (pbVar15 < pbStack_38);
    }
  }
  else {
    uVar11 = CONCAT71(uVar12,1);
    if (pbStack_38 == pbVar15) goto code_r0x004e52ea;
    uVar17 = CONCAT44(0,param_4);
    uVar16 = 0;
    uVar19 = 0;
    do {
      cVar3 = (&UNK_002004a4)[*pbVar15];
      if ((long)(ulong)((ulong)(long)cVar3 < uVar17) <= (long)cVar3 >> 0x3f) goto code_r0x004e538f;
      lVar4 = *(long *)(&UNK_00200a58 + uVar17 * 0x10) - uVar19;
      if ((SBORROW8(*(long *)(&UNK_00200a58 + uVar17 * 0x10),uVar19) !=
          SBORROW8(lVar4,(ulong)(*(ulong *)(&UNK_00200a50 + uVar17 * 0x10) < uVar16))) !=
          (long)(lVar4 - (ulong)(*(ulong *)(&UNK_00200a50 + uVar17 * 0x10) < uVar16)) < 0) {
code_r0x004e53a3:
        uVar11 = 0;
        uVar16 = 0xffffffffffffffff;
        uVar19 = 0x7fffffffffffffff;
        break;
      }
      uVar18 = (ulong)cVar3;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar16;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar17;
      uVar9 = SUB168(auVar6 * auVar8,0);
      lVar14 = SUB168(auVar6 * auVar8,8) + uVar19 * uVar17;
      lVar4 = 0x7fffffffffffffff - ((long)uVar18 >> 0x3f);
      uVar16 = (ulong)(-uVar18 - 1 < uVar9);
      lVar13 = lVar4 - lVar14;
      if ((SBORROW8(lVar4,lVar14) != SBORROW8(lVar13,uVar16)) != (long)(lVar13 - uVar16) < 0)
      goto code_r0x004e53a3;
      uVar16 = uVar9 + uVar18;
      uVar19 = lVar14 + ((long)uVar18 >> 0x3f) + (ulong)CARRY8(uVar9,uVar18);
      pbVar15 = pbVar15 + 1;
    } while (pbVar15 < pbStack_38);
  }
code_r0x004e53b6:
  *param_3 = uVar16;
  param_3[1] = uVar19;
code_r0x004e53bd:
  return uVar11 & 0xffffffff;
code_r0x004e538f:
  uVar11 = 0;
  goto code_r0x004e53b6;
}


