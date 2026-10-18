// Function: _ZN4absl12lts_2026052610SimpleAtodENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEEPd
// Address: 004e16f0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _ZN4absl12lts_2026052610SimpleAtodENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEEPd
                (byte *param_1,ulong param_2,double *param_3)

{
  byte *pbVar1;
  char cVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined1 *extraout_RDX;
  byte *pbVar6;
  ulong uVar7;
  undefined2 *puVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined8 unaff_R12;
  double dVar11;
  undefined1 auVar12 [12];
  
  *param_3 = 0.0;
  pbVar6 = param_1 + param_2;
  uVar10 = param_2;
  pbVar5 = param_1;
  pbVar4 = param_1;
  while ((uVar10 != 0 &&
         (pbVar5 = pbVar4,
         (_ZN4absl12lts_2026052614ascii_internal13kPropertyBitsE[*pbVar4] & 8) != 0))) {
    pbVar4 = pbVar4 + 1;
    uVar10 = uVar10 - 1;
    pbVar5 = pbVar6;
  }
  uVar10 = (long)pbVar5 - (long)param_1;
  uVar7 = param_2 - uVar10;
  if (param_2 < uVar10) {
    puVar9 = &UNK_001705cc;
    func_0x0032fc70(&UNK_001705cc);
    if (extraout_RDX == (undefined1 *)0x0) {
      puVar8 = (undefined2 *)&UNK_001759e9;
      uVar10 = 3;
      _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
                (3,&UNK_001759e9,0x7a,&UNK_00183943,&UNK_0017be6e,&UNK_00170b7d,pbVar6);
      uVar3 = (int)((uVar10 & 0xffffffff) * 0x67 >> 10) * 0xf601 + (int)uVar10 * 0x100 + 0x3030;
      *puVar8 = (short)uVar3;
      return (ulong)uVar3;
    }
    cVar2 = _ZN4absl12lts_2026052616EqualsIgnoreCaseENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_
                      ();
    uVar10 = CONCAT71((int7)((ulong)unaff_R12 >> 8),1);
    if ((((cVar2 == '\0') &&
         (cVar2 = _ZN4absl12lts_2026052616EqualsIgnoreCaseENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_
                            (puVar9,uVar7,&UNK_00189a6a,1), cVar2 == '\0')) &&
        (cVar2 = _ZN4absl12lts_2026052616EqualsIgnoreCaseENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_
                           (puVar9,uVar7,&UNK_00169a5e,3), cVar2 == '\0')) &&
       ((cVar2 = _ZN4absl12lts_2026052616EqualsIgnoreCaseENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_
                           (puVar9,uVar7,&UNK_001839d8,1), cVar2 == '\0' &&
        (cVar2 = _ZN4absl12lts_2026052616EqualsIgnoreCaseENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_
                           (puVar9,uVar7,&UNK_00175821,1), cVar2 == '\0')))) {
      cVar2 = _ZN4absl12lts_2026052616EqualsIgnoreCaseENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_
                        (puVar9,uVar7,&UNK_00157545,5);
      if (((cVar2 == '\0') &&
          ((cVar2 = _ZN4absl12lts_2026052616EqualsIgnoreCaseENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_
                              (puVar9,uVar7,&UNK_00178f05,1), cVar2 == '\0' &&
           (cVar2 = _ZN4absl12lts_2026052616EqualsIgnoreCaseENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_
                              (puVar9,uVar7,&UNK_0017db00,2), cVar2 == '\0')))) &&
         (cVar2 = _ZN4absl12lts_2026052616EqualsIgnoreCaseENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_
                            (puVar9,uVar7,&UNK_0015e5a3,1), cVar2 == '\0')) {
        cVar2 = _ZN4absl12lts_2026052616EqualsIgnoreCaseENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_
                          (puVar9,uVar7,&UNK_0017eb28,1);
        uVar10 = 0;
        if (cVar2 == '\0') goto code_r0x004e1926;
      }
      else {
        uVar10 = 0;
      }
    }
    *extraout_RDX = (char)uVar10;
    uVar10 = CONCAT71((int7)(uVar10 >> 8),1);
code_r0x004e1926:
    return uVar10 & 0xffffffff;
  }
  param_1 = param_1 + uVar10;
  do {
    pbVar4 = param_1;
    if (pbVar6 == pbVar5) break;
    pbVar1 = pbVar6 + -1;
    pbVar4 = pbVar6;
    pbVar6 = pbVar6 + -1;
  } while ((_ZN4absl12lts_2026052614ascii_internal13kPropertyBitsE[*pbVar1] & 8) != 0);
  uVar10 = (long)pbVar4 - (long)pbVar5;
  if (uVar7 < (ulong)((long)pbVar4 - (long)pbVar5)) {
    uVar10 = uVar7;
  }
  if (uVar10 == 0) {
code_r0x004e178b:
    uVar7 = 0;
  }
  else {
    if (*param_1 == 0x2b) {
      uVar10 = uVar10 - 1;
      if ((uVar10 == 0) || (param_1[1] == 0x2d)) goto code_r0x004e178b;
      param_1 = param_1 + 1;
    }
    auVar12 = _ZN4absl12lts_2026052610from_charsEPKcS2_RdNS0_12chars_formatE
                        (param_1,param_1 + uVar10,param_3,3);
    uVar7 = 0;
    if (((auVar12._8_4_ != 0x16) && (auVar12._0_8_ == param_1 + uVar10)) &&
       (uVar7 = 1, auVar12._8_4_ == 0x22)) {
      if (*param_3 <= 1.0) {
        if (-1.0 <= *param_3) {
          return 1;
        }
        dVar11 = -INFINITY;
      }
      else {
        dVar11 = INFINITY;
      }
      *param_3 = dVar11;
    }
  }
  return uVar7;
}


