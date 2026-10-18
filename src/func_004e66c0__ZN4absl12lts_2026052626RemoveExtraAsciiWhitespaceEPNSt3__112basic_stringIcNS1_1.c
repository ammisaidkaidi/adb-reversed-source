// Function: _ZN4absl12lts_2026052626RemoveExtraAsciiWhitespaceEPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE
// Address: 004e66c0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN4absl12lts_2026052626RemoveExtraAsciiWhitespaceEPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE
               (byte *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  code *pcVar3;
  byte *pbVar4;
  ulong uVar5;
  byte bVar6;
  byte *pbVar7;
  ulong uVar8;
  byte *pbVar9;
  ulong uVar10;
  byte bVar11;
  ulong uVar12;
  byte *pbVar13;
  ulong uVar14;
  byte *pbVar15;
  byte *pbVar16;
  bool bVar17;
  
  bVar6 = *param_1;
  pbVar1 = param_1 + 1;
  uVar12 = (ulong)(bVar6 >> 1);
  bVar17 = (bVar6 & 1) == 0;
  pbVar7 = *(byte **)(param_1 + 0x10);
  pbVar4 = pbVar7;
  if (bVar17) {
    pbVar4 = pbVar1;
  }
  uVar5 = *(ulong *)(param_1 + 8);
  uVar14 = uVar5;
  if (bVar17) {
    uVar14 = uVar12;
  }
  pbVar16 = pbVar4;
  pbVar15 = pbVar4;
  uVar8 = uVar14;
  while ((uVar8 != 0 &&
         (pbVar16 = pbVar15,
         (_ZN4absl12lts_2026052614ascii_internal13kPropertyBitsE[*pbVar15] & 8) != 0))) {
    pbVar15 = pbVar15 + 1;
    uVar8 = uVar8 - 1;
    pbVar16 = pbVar4 + uVar14;
  }
  uVar8 = (long)pbVar16 - (long)pbVar4;
  if (uVar14 < uVar8) {
    func_0x0032fc70(&UNK_001705cc);
code_r0x004e681a:
    func_0x0032fc60();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pbVar13 = pbVar4 + uVar8;
  pbVar15 = pbVar4 + uVar14;
  do {
    pbVar9 = pbVar13;
    if (pbVar15 == pbVar16) break;
    pbVar2 = pbVar15 + -1;
    pbVar9 = pbVar15;
    pbVar15 = pbVar15 + -1;
  } while ((_ZN4absl12lts_2026052614ascii_internal13kPropertyBitsE[*pbVar2] & 8) != 0);
  uVar10 = (long)pbVar9 - (long)pbVar16;
  if (uVar14 - uVar8 < (ulong)((long)pbVar9 - (long)pbVar16)) {
    uVar10 = uVar14 - uVar8;
  }
  if (uVar10 == 0) {
    if ((bVar6 & 1) == 0) {
      param_1[0] = 0;
      param_1[1] = 0;
    }
    else {
      *pbVar7 = 0;
      param_1[8] = 0;
      param_1[9] = 0;
      param_1[10] = 0;
      param_1[0xb] = 0;
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      param_1[0xe] = 0;
      param_1[0xf] = 0;
    }
  }
  else {
    pbVar15 = pbVar13 + uVar10;
    if (pbVar16 < pbVar15) {
      bVar6 = 0;
      do {
        bVar11 = (_ZN4absl12lts_2026052614ascii_internal13kPropertyBitsE[*pbVar13] & 8) >> 3;
        pbVar4[-(ulong)(bVar6 & bVar11)] = *pbVar13;
        pbVar4 = pbVar4 + -(ulong)(bVar6 & bVar11) + 1;
        pbVar13 = pbVar13 + 1;
        bVar6 = bVar11;
      } while (pbVar13 < pbVar15);
      bVar6 = *param_1;
      uVar5 = *(ulong *)(param_1 + 8);
      pbVar7 = *(byte **)(param_1 + 0x10);
      uVar12 = (ulong)(bVar6 >> 1);
    }
    pbVar16 = pbVar1;
    if ((bVar6 & 1) != 0) {
      uVar12 = uVar5;
      pbVar16 = pbVar7;
    }
    uVar5 = (long)pbVar4 - (long)pbVar16;
    if (uVar12 < uVar5) goto code_r0x004e681a;
    if ((bVar6 & 1) == 0) {
      *param_1 = (char)uVar5 * '\x02';
      pbVar7 = pbVar1;
    }
    else {
      *(ulong *)(param_1 + 8) = uVar5;
    }
    pbVar7[uVar5] = 0;
  }
  return;
}


