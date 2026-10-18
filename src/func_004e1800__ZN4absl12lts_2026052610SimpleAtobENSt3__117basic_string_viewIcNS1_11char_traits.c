// Function: _ZN4absl12lts_2026052610SimpleAtobENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEEPb
// Address: 004e1800
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _ZN4absl12lts_2026052610SimpleAtobENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEEPb
                (undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  char cVar1;
  uint uVar2;
  undefined2 *puVar3;
  ulong uVar4;
  undefined8 unaff_R12;
  
  if (param_3 == (undefined1 *)0x0) {
    puVar3 = (undefined2 *)&UNK_001759e9;
    uVar4 = 3;
    _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
              (3,&UNK_001759e9,0x7a,&UNK_00183943,&UNK_0017be6e,&UNK_00170b7d);
    uVar2 = (int)((uVar4 & 0xffffffff) * 0x67 >> 10) * 0xf601 + (int)uVar4 * 0x100 + 0x3030;
    *puVar3 = (short)uVar2;
    return (ulong)uVar2;
  }
  cVar1 = _ZN4absl12lts_2026052616EqualsIgnoreCaseENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_
                    (param_1,param_2,&UNK_001703d2,4);
  uVar4 = CONCAT71((int7)((ulong)unaff_R12 >> 8),1);
  if ((((cVar1 == '\0') &&
       (cVar1 = _ZN4absl12lts_2026052616EqualsIgnoreCaseENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_
                          (param_1,param_2,&UNK_00189a6a,1), cVar1 == '\0')) &&
      (cVar1 = _ZN4absl12lts_2026052616EqualsIgnoreCaseENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_
                         (param_1,param_2,&UNK_00169a5e,3), cVar1 == '\0')) &&
     ((cVar1 = _ZN4absl12lts_2026052616EqualsIgnoreCaseENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_
                         (param_1,param_2,&UNK_001839d8,1), cVar1 == '\0' &&
      (cVar1 = _ZN4absl12lts_2026052616EqualsIgnoreCaseENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_
                         (param_1,param_2,&UNK_00175821,1), cVar1 == '\0')))) {
    cVar1 = _ZN4absl12lts_2026052616EqualsIgnoreCaseENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_
                      (param_1,param_2,&UNK_00157545,5);
    if (((cVar1 == '\0') &&
        ((cVar1 = _ZN4absl12lts_2026052616EqualsIgnoreCaseENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_
                            (param_1,param_2,&UNK_00178f05,1), cVar1 == '\0' &&
         (cVar1 = _ZN4absl12lts_2026052616EqualsIgnoreCaseENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_
                            (param_1,param_2,&UNK_0017db00,2), cVar1 == '\0')))) &&
       (cVar1 = _ZN4absl12lts_2026052616EqualsIgnoreCaseENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_
                          (param_1,param_2,&UNK_0015e5a3,1), cVar1 == '\0')) {
      cVar1 = _ZN4absl12lts_2026052616EqualsIgnoreCaseENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_
                        (param_1,param_2,&UNK_0017eb28,1);
      uVar4 = 0;
      if (cVar1 == '\0') goto code_r0x004e1926;
    }
    else {
      uVar4 = 0;
    }
  }
  *param_3 = (char)uVar4;
  uVar4 = CONCAT71((int7)(uVar4 >> 8),1);
code_r0x004e1926:
  return uVar4 & 0xffffffff;
}


