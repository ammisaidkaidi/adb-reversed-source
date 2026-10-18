// Function: _ZN4absl12lts_2026052610SimpleAtofENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEEPf
// Address: 004e15e0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _ZN4absl12lts_2026052610SimpleAtofENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEEPf
                (byte *param_1,ulong param_2,float *param_3)

{
  byte *pbVar1;
  char cVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  double *extraout_RDX;
  undefined1 *extraout_RDX_00;
  ulong uVar6;
  ulong uVar7;
  undefined2 *puVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined8 unaff_R12;
  float fVar13;
  double dVar14;
  undefined1 auVar15 [12];
  
  *param_3 = 0.0;
  uVar12 = param_2;
  pbVar5 = param_1;
  pbVar4 = param_1;
  while ((uVar12 != 0 &&
         (pbVar5 = pbVar4,
         (_ZN4absl12lts_2026052614ascii_internal13kPropertyBitsE[*pbVar4] & 8) != 0))) {
    pbVar4 = pbVar4 + 1;
    uVar12 = uVar12 - 1;
    pbVar5 = param_1 + param_2;
  }
  uVar12 = (long)pbVar5 - (long)param_1;
  uVar6 = param_2 - uVar12;
  if (param_2 < uVar12) {
    pbVar10 = &UNK_001705cc;
    func_0x0032fc70();
    *extraout_RDX = 0.0;
    pbVar5 = pbVar10 + uVar6;
    uVar12 = uVar6;
    pbVar4 = pbVar10;
    pbVar9 = pbVar10;
    while ((uVar12 != 0 &&
           (pbVar4 = pbVar9,
           (_ZN4absl12lts_2026052614ascii_internal13kPropertyBitsE[*pbVar9] & 8) != 0))) {
      pbVar9 = pbVar9 + 1;
      uVar12 = uVar12 - 1;
      pbVar4 = pbVar5;
    }
    uVar12 = (long)pbVar4 - (long)pbVar10;
    uVar7 = uVar6 - uVar12;
    if (uVar6 < uVar12) {
      puVar11 = &UNK_001705cc;
      func_0x0032fc70(&UNK_001705cc);
      if (extraout_RDX_00 == (undefined1 *)0x0) {
        puVar8 = (undefined2 *)&UNK_001759e9;
        uVar12 = 3;
        _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
                  (3,&UNK_001759e9,0x7a,&UNK_00183943,&UNK_0017be6e,&UNK_00170b7d,pbVar5);
        uVar3 = (int)((uVar12 & 0xffffffff) * 0x67 >> 10) * 0xf601 + (int)uVar12 * 0x100 + 0x3030;
        *puVar8 = (short)uVar3;
        return (ulong)uVar3;
      }
      cVar2 = _ZN4absl12lts_2026052616EqualsIgnoreCaseENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_
                        ();
      uVar12 = CONCAT71((int7)((ulong)unaff_R12 >> 8),1);
      if ((((cVar2 == '\0') &&
           (cVar2 = _ZN4absl12lts_2026052616EqualsIgnoreCaseENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_
                              (puVar11,uVar7,&UNK_00189a6a,1), cVar2 == '\0')) &&
          (cVar2 = _ZN4absl12lts_2026052616EqualsIgnoreCaseENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_
                             (puVar11,uVar7,&UNK_00169a5e,3), cVar2 == '\0')) &&
         ((cVar2 = _ZN4absl12lts_2026052616EqualsIgnoreCaseENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_
                             (puVar11,uVar7,&UNK_001839d8,1), cVar2 == '\0' &&
          (cVar2 = _ZN4absl12lts_2026052616EqualsIgnoreCaseENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_
                             (puVar11,uVar7,&UNK_00175821,1), cVar2 == '\0')))) {
        cVar2 = _ZN4absl12lts_2026052616EqualsIgnoreCaseENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_
                          (puVar11,uVar7,&UNK_00157545,5);
        if (((cVar2 == '\0') &&
            ((cVar2 = _ZN4absl12lts_2026052616EqualsIgnoreCaseENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_
                                (puVar11,uVar7,&UNK_00178f05,1), cVar2 == '\0' &&
             (cVar2 = _ZN4absl12lts_2026052616EqualsIgnoreCaseENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_
                                (puVar11,uVar7,&UNK_0017db00,2), cVar2 == '\0')))) &&
           (cVar2 = _ZN4absl12lts_2026052616EqualsIgnoreCaseENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_
                              (puVar11,uVar7,&UNK_0015e5a3,1), cVar2 == '\0')) {
          cVar2 = _ZN4absl12lts_2026052616EqualsIgnoreCaseENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_
                            (puVar11,uVar7,&UNK_0017eb28,1);
          uVar12 = 0;
          if (cVar2 == '\0') goto code_r0x004e1926;
        }
        else {
          uVar12 = 0;
        }
      }
      *extraout_RDX_00 = (char)uVar12;
      uVar12 = CONCAT71((int7)(uVar12 >> 8),1);
code_r0x004e1926:
      return uVar12 & 0xffffffff;
    }
    pbVar10 = pbVar10 + uVar12;
    do {
      pbVar9 = pbVar10;
      if (pbVar5 == pbVar4) break;
      pbVar1 = pbVar5 + -1;
      pbVar9 = pbVar5;
      pbVar5 = pbVar5 + -1;
    } while ((_ZN4absl12lts_2026052614ascii_internal13kPropertyBitsE[*pbVar1] & 8) != 0);
    uVar12 = (long)pbVar9 - (long)pbVar4;
    if (uVar7 < (ulong)((long)pbVar9 - (long)pbVar4)) {
      uVar12 = uVar7;
    }
    if (uVar12 == 0) {
code_r0x004e178b:
      uVar6 = 0;
    }
    else {
      if (*pbVar10 == 0x2b) {
        uVar12 = uVar12 - 1;
        if ((uVar12 == 0) || (pbVar10[1] == 0x2d)) goto code_r0x004e178b;
        pbVar10 = pbVar10 + 1;
      }
      auVar15 = _ZN4absl12lts_2026052610from_charsEPKcS2_RdNS0_12chars_formatE
                          (pbVar10,pbVar10 + uVar12,extraout_RDX,3);
      uVar6 = 0;
      if (((auVar15._8_4_ != 0x16) && (auVar15._0_8_ == pbVar10 + uVar12)) &&
         (uVar6 = 1, auVar15._8_4_ == 0x22)) {
        if (*extraout_RDX <= 1.0) {
          if (-1.0 <= *extraout_RDX) {
            return 1;
          }
          dVar14 = -INFINITY;
        }
        else {
          dVar14 = INFINITY;
        }
        *extraout_RDX = dVar14;
      }
    }
    return uVar6;
  }
  pbVar9 = param_1 + uVar12;
  pbVar4 = param_1 + param_2;
  do {
    pbVar10 = pbVar9;
    if (pbVar4 == pbVar5) break;
    pbVar1 = pbVar4 + -1;
    pbVar10 = pbVar4;
    pbVar4 = pbVar4 + -1;
  } while ((_ZN4absl12lts_2026052614ascii_internal13kPropertyBitsE[*pbVar1] & 8) != 0);
  uVar12 = (long)pbVar10 - (long)pbVar5;
  if (uVar6 < (ulong)((long)pbVar10 - (long)pbVar5)) {
    uVar12 = uVar6;
  }
  if (uVar12 == 0) {
code_r0x004e167b:
    uVar6 = 0;
  }
  else {
    if (*pbVar9 == 0x2b) {
      uVar12 = uVar12 - 1;
      if ((uVar12 == 0) || (pbVar9[1] == 0x2d)) goto code_r0x004e167b;
      pbVar9 = pbVar9 + 1;
    }
    auVar15 = _ZN4absl12lts_2026052610from_charsEPKcS2_RfNS0_12chars_formatE
                        (pbVar9,pbVar9 + uVar12,param_3,3);
    uVar6 = 0;
    if (((auVar15._8_4_ != 0x16) && (auVar15._0_8_ == pbVar9 + uVar12)) &&
       (uVar6 = 1, auVar15._8_4_ == 0x22)) {
      if (*param_3 <= 1.0) {
        if (-1.0 <= *param_3) {
          return 1;
        }
        fVar13 = -INFINITY;
      }
      else {
        fVar13 = INFINITY;
      }
      *param_3 = fVar13;
    }
  }
  return uVar6;
}


