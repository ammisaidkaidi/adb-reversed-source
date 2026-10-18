// Function: _ZN4absl12lts_2026052619str_format_internal17ConsumeConversionILb1EEEPKcS4_S4_PNS1_17UnboundConversionEPi
// Address: 004edb60
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


byte * _ZN4absl12lts_2026052619str_format_internal17ConsumeConversionILb1EEEPKcS4_S4_PNS1_17UnboundConversionEPi
                 (byte *param_1,byte *param_2,undefined4 *param_3)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  char cVar6;
  ulong uVar7;
  byte bVar8;
  long in_FS_OFFSET;
  bool bVar9;
  byte bStack_29;
  byte *pbStack_28;
  long lStack_20;
  
  lStack_20 = *(long *)(in_FS_OFFSET + 0x28);
  pbVar4 = pbStack_28;
  if (param_1 == param_2) goto code_r0x004ede88;
  pbStack_28 = param_1 + 1;
  bStack_29 = *param_1;
  pbVar4 = pbStack_28;
  if ((byte)(bStack_29 - 0x3a) < 0xf7) goto code_r0x004ede88;
  uVar2 = _ZN4absl12lts_2026052619str_format_internal11ParseDigitsERcRPKcS4_
                    (&bStack_29,&pbStack_28,param_2);
  *param_3 = uVar2;
  pbVar4 = pbStack_28;
  if (bStack_29 != 0x24) goto code_r0x004ede88;
  if (pbStack_28 == param_2) goto code_r0x004ede88;
  pbVar4 = pbStack_28 + 1;
  bStack_29 = *pbStack_28;
  uVar7 = (ulong)bStack_29;
  pbStack_28 = pbVar4;
  if ((char)bStack_29 < 'A') {
    if ((char)bStack_29 < '1') {
      do {
        pbStack_28 = pbVar4;
        if ((_ZN4absl12lts_2026052619str_format_internal13ConvTagHolder5valueE[uVar7] & 0xe0) !=
            0xc0) {
          if ('/' < (char)uVar7) goto code_r0x004edc3e;
          if ((char)uVar7 == '*') {
            *(byte *)(param_3 + 3) = *(byte *)(param_3 + 3) | 0x20;
            if (pbVar4 == param_2) goto code_r0x004ede88;
            pbStack_28 = pbVar4 + 1;
            bStack_29 = *pbVar4;
            pbVar4 = pbStack_28;
            if ((byte)(bStack_29 - 0x3a) < 0xf7) goto code_r0x004ede88;
            uVar3 = _ZN4absl12lts_2026052619str_format_internal11ParseDigitsERcRPKcS4_
                              (&bStack_29,&pbStack_28,param_2);
            param_3[1] = ~uVar3;
            pbVar4 = pbStack_28;
            if (bStack_29 != 0x24) goto code_r0x004ede88;
            if (pbStack_28 == param_2) goto code_r0x004ede88;
            bStack_29 = *pbStack_28;
            uVar7 = (ulong)bStack_29;
            pbStack_28 = pbStack_28 + 1;
          }
          goto code_r0x004edc59;
        }
        *(byte *)(param_3 + 3) =
             *(byte *)(param_3 + 3) |
             _ZN4absl12lts_2026052619str_format_internal13ConvTagHolder5valueE[uVar7] & 0x1f;
        pbVar5 = (byte *)0x0;
        if (pbVar4 == param_2) goto code_r0x004edda8;
        pbStack_28 = pbVar4 + 1;
        bStack_29 = *pbVar4;
        uVar7 = (ulong)bStack_29;
        pbVar4 = pbStack_28;
      } while ((char)bStack_29 < '1');
    }
    if ((byte)uVar7 < 0x3a) {
code_r0x004edc3e:
      uVar2 = _ZN4absl12lts_2026052619str_format_internal11ParseDigitsERcRPKcS4_
                        (&bStack_29,&pbStack_28,param_2);
      *(byte *)(param_3 + 3) = *(byte *)(param_3 + 3) | 0x20;
      param_3[1] = uVar2;
      uVar7 = (ulong)bStack_29;
code_r0x004edc59:
      if ((char)uVar7 == '.') {
        *(byte *)(param_3 + 3) = *(byte *)(param_3 + 3) | 0x20;
        pbVar4 = pbStack_28;
        if (pbStack_28 == param_2) goto code_r0x004ede88;
        pbVar4 = pbStack_28 + 1;
        bStack_29 = *pbStack_28;
        uVar7 = (ulong)bStack_29;
        if ((byte)(bStack_29 - 0x30) < 10) {
          pbStack_28 = pbVar4;
          uVar2 = _ZN4absl12lts_2026052619str_format_internal11ParseDigitsERcRPKcS4_
                            (&bStack_29,&pbStack_28,param_2);
          param_3[2] = uVar2;
          uVar7 = (ulong)bStack_29;
        }
        else if (bStack_29 == 0x2a) {
          if (pbVar4 == param_2) goto code_r0x004ede88;
          bStack_29 = pbStack_28[1];
          pbVar4 = pbStack_28 + 2;
          if ((byte)(bStack_29 - 0x3a) < 0xf7) goto code_r0x004ede88;
          pbStack_28 = pbStack_28 + 2;
          uVar3 = _ZN4absl12lts_2026052619str_format_internal11ParseDigitsERcRPKcS4_
                            (&bStack_29,&pbStack_28,param_2);
          param_3[2] = ~uVar3;
          pbVar4 = pbStack_28;
          if (bStack_29 != 0x24) goto code_r0x004ede88;
          if (pbStack_28 == param_2) goto code_r0x004ede88;
          bStack_29 = *pbStack_28;
          uVar7 = (ulong)bStack_29;
          pbStack_28 = pbStack_28 + 1;
        }
        else {
          param_3[2] = 0;
          pbStack_28 = pbVar4;
        }
      }
    }
  }
  cVar6 = (char)uVar7;
  bVar8 = _ZN4absl12lts_2026052619str_format_internal13ConvTagHolder5valueE[uVar7];
  pbVar4 = pbStack_28;
  if ((cVar6 == 'v') && (*(char *)(param_3 + 3) != '\0')) goto code_r0x004ede88;
  if (-1 < (char)bVar8) goto code_r0x004edda5;
  if (0xbf < bVar8) goto code_r0x004ede88;
  if (pbStack_28 == param_2) goto code_r0x004ede88;
  pbVar4 = pbStack_28 + 1;
  bVar1 = *pbStack_28;
  if ((cVar6 == 'h' || cVar6 == 'c') && bVar1 == 0x68) {
    *(undefined1 *)((long)param_3 + 0xd) = 1;
joined_r0x004ede29:
    if (pbVar4 == param_2) goto code_r0x004ede88;
    pbVar4 = pbStack_28 + 2;
    bVar1 = pbStack_28[1];
    bVar9 = false;
  }
  else {
    bVar8 = bVar8 & 0x3f;
    if (bVar8 == 2 && bVar1 == 0x6c) {
      *(undefined1 *)((long)param_3 + 0xd) = 3;
      goto joined_r0x004ede29;
    }
    *(byte *)((long)param_3 + 0xd) = bVar8;
    bVar9 = bVar8 == 2;
  }
  bVar8 = _ZN4absl12lts_2026052619str_format_internal13ConvTagHolder5valueE[bVar1];
  if (bVar1 == 0x76) goto code_r0x004ede88;
  if ((char)bVar8 < '\0') goto code_r0x004ede88;
  pbStack_28 = pbVar4;
  if (bVar9 && bVar1 == 99) {
    *(byte *)(param_3 + 3) = *(byte *)(param_3 + 3) | 0x20;
  }
code_r0x004edda5:
  *(byte *)((long)param_3 + 0xe) = bVar8;
  pbVar5 = pbStack_28;
code_r0x004edda8:
  while (*(long *)(in_FS_OFFSET + 0x28) != lStack_20) {
    func_0x0099bd00();
    pbVar4 = pbStack_28;
code_r0x004ede88:
    pbStack_28 = pbVar4;
    pbVar5 = (byte *)0x0;
  }
  return pbVar5;
}


