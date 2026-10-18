// Function: _ZN4absl12lts_2026052619str_format_internal32ConsumeUnboundConversionNoInlineEPKcS3_PNS1_17UnboundConversionEPi
// Address: 004ed370
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


byte * _ZN4absl12lts_2026052619str_format_internal32ConsumeUnboundConversionNoInlineEPKcS3_PNS1_17UnboundConversionEPi
                 (byte *param_1,byte *param_2,int *param_3,int *param_4)

{
  byte *pbVar1;
  byte bVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  char cVar8;
  ulong uVar9;
  byte bVar10;
  long in_FS_OFFSET;
  bool bVar11;
  undefined8 uStack_40;
  byte *pbStack_38;
  undefined8 uStack_30;
  
  if (*param_4 < 0) {
    lVar3 = *(long *)(in_FS_OFFSET + 0x28);
    if (param_1 == param_2) goto code_r0x004ede88;
    uStack_30 = CONCAT17(*param_1,(undefined7)uStack_30);
    if ((byte)(*param_1 - 0x3a) < 0xf7) goto code_r0x004ede88;
    uStack_40 = &UNK_004edbaf;
    iVar5 = _ZN4absl12lts_2026052619str_format_internal11ParseDigitsERcRPKcS4_
                      ((long)&uStack_30 + 7,&stack0xffffffffffffffd8,param_2);
    *param_3 = iVar5;
    if (uStack_30._7_1_ != '$') goto code_r0x004ede88;
    if (param_1 + 1 == param_2) goto code_r0x004ede88;
    pbVar6 = param_1 + 2;
    bVar10 = param_1[1];
    uVar9 = (ulong)bVar10;
    uStack_30 = CONCAT17(bVar10,(undefined7)uStack_30);
    pbVar7 = pbVar6;
    if ((char)bVar10 < 'A') {
      if ((char)bVar10 < '1') {
        pbVar7 = (byte *)0x0;
        do {
          if ((_ZN4absl12lts_2026052619str_format_internal13ConvTagHolder5valueE[uVar9] & 0xe0) !=
              0xc0) {
            if ('/' < (char)uVar9) goto code_r0x004edc3e;
            if ((char)uVar9 == '*') {
              *(byte *)(param_3 + 3) = *(byte *)(param_3 + 3) | 0x20;
              if (pbVar6 == param_2) goto code_r0x004ede88;
              pbVar7 = pbVar6 + 1;
              uStack_30 = CONCAT17(*pbVar6,(undefined7)uStack_30);
              if ((byte)(*pbVar6 - 0x3a) < 0xf7) goto code_r0x004ede88;
              uStack_40 = &UNK_004edd4b;
              uVar4 = _ZN4absl12lts_2026052619str_format_internal11ParseDigitsERcRPKcS4_
                                ((long)&uStack_30 + 7,&stack0xffffffffffffffd8,param_2);
              param_3[1] = ~uVar4;
              if (uStack_30._7_1_ != '$') goto code_r0x004ede88;
              if (pbVar7 == param_2) goto code_r0x004ede88;
              pbVar6 = pbVar6 + 2;
              bVar10 = *pbVar7;
              uVar9 = (ulong)bVar10;
              uStack_30 = CONCAT17(bVar10,(undefined7)uStack_30);
            }
            goto code_r0x004edc59;
          }
          *(byte *)(param_3 + 3) =
               *(byte *)(param_3 + 3) |
               _ZN4absl12lts_2026052619str_format_internal13ConvTagHolder5valueE[uVar9] & 0x1f;
          if (pbVar6 == param_2) goto code_r0x004edda8;
          pbVar1 = pbVar6 + 1;
          bVar10 = *pbVar6;
          uVar9 = (ulong)bVar10;
          uStack_30 = CONCAT17(bVar10,(undefined7)uStack_30);
          pbVar6 = pbVar1;
        } while ((char)bVar10 < '1');
      }
      pbVar7 = pbVar6;
      pbVar6 = pbVar7;
      if ((byte)uVar9 < 0x3a) {
code_r0x004edc3e:
        uStack_40 = &UNK_004edc4e;
        iVar5 = _ZN4absl12lts_2026052619str_format_internal11ParseDigitsERcRPKcS4_
                          ((long)&uStack_30 + 7,&stack0xffffffffffffffd8,param_2);
        *(byte *)(param_3 + 3) = *(byte *)(param_3 + 3) | 0x20;
        param_3[1] = iVar5;
        uVar9 = uStack_30 >> 0x38;
code_r0x004edc59:
        pbVar7 = pbVar6;
        if ((char)uVar9 == '.') {
          *(byte *)(param_3 + 3) = *(byte *)(param_3 + 3) | 0x20;
          if (pbVar6 == param_2) goto code_r0x004ede88;
          pbVar7 = pbVar6 + 1;
          bVar10 = *pbVar6;
          uVar9 = (ulong)bVar10;
          uStack_30 = CONCAT17(bVar10,(undefined7)uStack_30);
          if ((byte)(bVar10 - 0x30) < 10) {
            uStack_40 = &UNK_004edc9a;
            iVar5 = _ZN4absl12lts_2026052619str_format_internal11ParseDigitsERcRPKcS4_
                              ((long)&uStack_30 + 7,&stack0xffffffffffffffd8,param_2);
            param_3[2] = iVar5;
            uVar9 = uStack_30 >> 0x38;
          }
          else if (bVar10 == 0x2a) {
            if (pbVar7 == param_2) goto code_r0x004ede88;
            uStack_30 = CONCAT17(pbVar6[1],(undefined7)uStack_30);
            if ((byte)(pbVar6[1] - 0x3a) < 0xf7) goto code_r0x004ede88;
            uStack_40 = &UNK_004edce1;
            uVar4 = _ZN4absl12lts_2026052619str_format_internal11ParseDigitsERcRPKcS4_
                              ((long)&uStack_30 + 7,&stack0xffffffffffffffd8,param_2);
            param_3[2] = ~uVar4;
            if (uStack_30._7_1_ != '$') goto code_r0x004ede88;
            if (pbVar6 + 2 == param_2) goto code_r0x004ede88;
            pbVar7 = pbVar6 + 3;
            bVar10 = pbVar6[2];
            uVar9 = (ulong)bVar10;
            uStack_30 = CONCAT17(bVar10,(undefined7)uStack_30);
          }
          else {
            param_3[2] = 0;
          }
        }
      }
    }
    cVar8 = (char)uVar9;
    bVar10 = _ZN4absl12lts_2026052619str_format_internal13ConvTagHolder5valueE[uVar9];
    if ((cVar8 == 'v') && ((char)param_3[3] != '\0')) goto code_r0x004ede88;
    if (-1 < (char)bVar10) goto code_r0x004edda5;
    if (0xbf < bVar10) goto code_r0x004ede88;
    if (pbVar7 == param_2) goto code_r0x004ede88;
    pbVar6 = pbVar7 + 1;
    bVar2 = *pbVar7;
    if ((cVar8 == 'h' || cVar8 == 'c') && bVar2 == 0x68) {
      *(undefined1 *)((long)param_3 + 0xd) = 1;
joined_r0x004ede29:
      if (pbVar6 == param_2) goto code_r0x004ede88;
      pbVar6 = pbVar7 + 2;
      bVar2 = pbVar7[1];
      bVar11 = false;
    }
    else {
      bVar10 = bVar10 & 0x3f;
      if (bVar10 == 2 && bVar2 == 0x6c) {
        *(undefined1 *)((long)param_3 + 0xd) = 3;
        goto joined_r0x004ede29;
      }
      *(byte *)((long)param_3 + 0xd) = bVar10;
      bVar11 = bVar10 == 2;
    }
    bVar10 = _ZN4absl12lts_2026052619str_format_internal13ConvTagHolder5valueE[bVar2];
    if (bVar2 == 0x76) goto code_r0x004ede88;
    if ((char)bVar10 < '\0') goto code_r0x004ede88;
    pbVar7 = pbVar6;
    if (bVar11 && bVar2 == 99) {
      *(byte *)(param_3 + 3) = *(byte *)(param_3 + 3) | 0x20;
    }
code_r0x004edda5:
    *(byte *)((long)param_3 + 0xe) = bVar10;
code_r0x004edda8:
    while (*(long *)(in_FS_OFFSET + 0x28) != lVar3) {
      uStack_40 = &UNK_004ede81;
      func_0x0099bd00();
code_r0x004ede88:
      pbVar7 = (byte *)0x0;
    }
    return pbVar7;
  }
  uStack_30 = *(long *)(in_FS_OFFSET + 0x28);
  pbVar7 = pbStack_38;
  if (param_1 == param_2) goto code_r0x004ee0d1;
  pbVar7 = param_1 + 1;
  bVar10 = *param_1;
  uVar9 = (ulong)bVar10;
  uStack_40 = (undefined *)CONCAT17(bVar10,(undefined7)uStack_40);
  pbStack_38 = pbVar7;
  if ((char)bVar10 < 'A') {
    if ((char)bVar10 < '1') {
      do {
        uVar9 = (ulong)bVar10;
        if ((_ZN4absl12lts_2026052619str_format_internal13ConvTagHolder5valueE[uVar9] & 0xe0) !=
            0xc0) {
          uStack_40 = (undefined *)CONCAT17(bVar10,(undefined7)uStack_40);
          pbStack_38 = pbVar7;
          if ('/' < (char)bVar10) goto code_r0x004edf53;
          if (bVar10 == 0x2a) {
            *(byte *)(param_3 + 3) = *(byte *)(param_3 + 3) | 0x20;
            if (pbVar7 == param_2) goto code_r0x004ee0d1;
            pbStack_38 = pbVar7 + 1;
            uVar9 = (ulong)*pbVar7;
            uStack_40 = (undefined *)CONCAT17(*pbVar7,(undefined7)uStack_40);
            iVar5 = *param_4;
            *param_4 = iVar5 + 1;
            param_3[1] = -2 - iVar5;
          }
          goto code_r0x004edfe3;
        }
        *(byte *)(param_3 + 3) =
             *(byte *)(param_3 + 3) |
             _ZN4absl12lts_2026052619str_format_internal13ConvTagHolder5valueE[uVar9] & 0x1f;
        if (pbVar7 == param_2) {
          uStack_40 = (undefined *)CONCAT17(bVar10,(undefined7)uStack_40);
          goto code_r0x004ee0d1;
        }
        bVar10 = *pbVar7;
        pbVar7 = pbVar7 + 1;
      } while ((char)bVar10 < '1');
      uStack_40 = (undefined *)CONCAT17(bVar10,(undefined7)uStack_40);
      uVar9 = (ulong)bVar10;
      pbStack_38 = pbVar7;
    }
    if (bVar10 < 0x3a) {
code_r0x004edf53:
      iVar5 = _ZN4absl12lts_2026052619str_format_internal11ParseDigitsERcRPKcS4_
                        ((long)&uStack_40 + 7,&pbStack_38,param_2);
      uVar9 = (ulong)uStack_40._7_1_;
      if (uStack_40._7_1_ == 0x24) {
        pbVar7 = pbStack_38;
        if (*param_4 != 0) goto code_r0x004ee0d1;
        *param_4 = -1;
        pbVar7 = (byte *)_ZN4absl12lts_2026052619str_format_internal17ConsumeConversionILb1EEEPKcS4_S4_PNS1_17UnboundConversionEPi
                                   (param_1,param_2,param_3,param_4);
        goto code_r0x004ee0a9;
      }
      *(byte *)(param_3 + 3) = *(byte *)(param_3 + 3) | 0x20;
      param_3[1] = iVar5;
code_r0x004edfe3:
      if ((char)uVar9 == '.') {
        *(byte *)(param_3 + 3) = *(byte *)(param_3 + 3) | 0x20;
        pbVar7 = pbStack_38;
        if (pbStack_38 == param_2) goto code_r0x004ee0d1;
        pbVar7 = pbStack_38 + 1;
        bVar10 = *pbStack_38;
        uStack_40 = (undefined *)CONCAT17(bVar10,(undefined7)uStack_40);
        if ((byte)(bVar10 - 0x30) < 10) {
          pbStack_38 = pbVar7;
          iVar5 = _ZN4absl12lts_2026052619str_format_internal11ParseDigitsERcRPKcS4_
                            ((long)&uStack_40 + 7,&pbStack_38,param_2);
          param_3[2] = iVar5;
          bVar10 = uStack_40._7_1_;
        }
        else {
          if (bVar10 == 0x2a) {
            if (pbVar7 == param_2) goto code_r0x004ee0d1;
            uVar9 = (ulong)pbStack_38[1];
            uStack_40 = (undefined *)CONCAT17(pbStack_38[1],(undefined7)uStack_40);
            iVar5 = *param_4;
            *param_4 = iVar5 + 1;
            param_3[2] = -2 - iVar5;
            pbStack_38 = pbStack_38 + 2;
            goto code_r0x004ee07a;
          }
          param_3[2] = 0;
          pbStack_38 = pbVar7;
        }
        uVar9 = (ulong)bVar10;
      }
    }
  }
code_r0x004ee07a:
  cVar8 = (char)uVar9;
  bVar10 = _ZN4absl12lts_2026052619str_format_internal13ConvTagHolder5valueE[uVar9];
  pbVar7 = pbStack_38;
  if ((cVar8 == 'v') && ((char)param_3[3] != '\0')) goto code_r0x004ee0d1;
  if ((char)bVar10 < '\0') {
    if (0xbf < bVar10) goto code_r0x004ee0d1;
    if (pbStack_38 == param_2) goto code_r0x004ee0d1;
    pbVar7 = pbStack_38 + 1;
    bVar2 = *pbStack_38;
    if ((cVar8 == 'h' || cVar8 == 'c') && bVar2 == 0x68) {
      *(undefined1 *)((long)param_3 + 0xd) = 1;
code_r0x004ee131:
      if (pbVar7 == param_2) goto code_r0x004ee0d1;
      pbVar7 = pbStack_38 + 2;
      bVar2 = pbStack_38[1];
      bVar11 = false;
    }
    else {
      bVar10 = bVar10 & 0x3f;
      if (bVar10 == 2 && bVar2 == 0x6c) {
        *(undefined1 *)((long)param_3 + 0xd) = 3;
        goto code_r0x004ee131;
      }
      *(byte *)((long)param_3 + 0xd) = bVar10;
      bVar11 = bVar10 == 2;
    }
    bVar10 = _ZN4absl12lts_2026052619str_format_internal13ConvTagHolder5valueE[bVar2];
    if (bVar2 == 0x76) goto code_r0x004ee0d1;
    if ((char)bVar10 < '\0') goto code_r0x004ee0d1;
    pbStack_38 = pbVar7;
    if (bVar11 && bVar2 == 99) {
      *(byte *)(param_3 + 3) = *(byte *)(param_3 + 3) | 0x20;
    }
  }
  *(byte *)((long)param_3 + 0xe) = bVar10;
  iVar5 = *param_4;
  *param_4 = iVar5 + 1;
  *param_3 = iVar5 + 1;
  pbVar7 = pbStack_38;
code_r0x004ee0a9:
  while (*(long *)(in_FS_OFFSET + 0x28) != uStack_30) {
    func_0x0099bd00();
    pbVar7 = pbStack_38;
code_r0x004ee0d1:
    pbStack_38 = pbVar7;
    pbVar7 = (byte *)0x0;
  }
  return pbVar7;
}


