// Function: _ZN4absl12lts_2026052619str_format_internal17ConsumeConversionILb0EEEPKcS4_S4_PNS1_17UnboundConversionEPi
// Address: 004ede90
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


byte * _ZN4absl12lts_2026052619str_format_internal17ConsumeConversionILb0EEEPKcS4_S4_PNS1_17UnboundConversionEPi
                 (byte *param_1,byte *param_2,int *param_3,int *param_4)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  char cVar4;
  ulong uVar5;
  byte bVar6;
  long in_FS_OFFSET;
  bool bVar7;
  byte bStack_39;
  byte *pbStack_38;
  long lStack_30;
  
  lStack_30 = *(long *)(in_FS_OFFSET + 0x28);
  pbVar3 = pbStack_38;
  if (param_1 == param_2) goto code_r0x004ee0d1;
  pbVar3 = param_1 + 1;
  bStack_39 = *param_1;
  uVar5 = (ulong)bStack_39;
  pbStack_38 = pbVar3;
  if ((char)bStack_39 < 'A') {
    if ((char)bStack_39 < '1') {
      do {
        uVar5 = (ulong)bStack_39;
        if ((_ZN4absl12lts_2026052619str_format_internal13ConvTagHolder5valueE[uVar5] & 0xe0) !=
            0xc0) {
          pbStack_38 = pbVar3;
          if ('/' < (char)bStack_39) goto code_r0x004edf53;
          if (bStack_39 == 0x2a) {
            *(byte *)(param_3 + 3) = *(byte *)(param_3 + 3) | 0x20;
            if (pbVar3 == param_2) goto code_r0x004ee0d1;
            pbStack_38 = pbVar3 + 1;
            bStack_39 = *pbVar3;
            uVar5 = (ulong)bStack_39;
            iVar2 = *param_4;
            *param_4 = iVar2 + 1;
            param_3[1] = -2 - iVar2;
          }
          goto code_r0x004edfe3;
        }
        *(byte *)(param_3 + 3) =
             *(byte *)(param_3 + 3) |
             _ZN4absl12lts_2026052619str_format_internal13ConvTagHolder5valueE[uVar5] & 0x1f;
        if (pbVar3 == param_2) goto code_r0x004ee0d1;
        bStack_39 = *pbVar3;
        pbVar3 = pbVar3 + 1;
      } while ((char)bStack_39 < '1');
      uVar5 = (ulong)bStack_39;
      pbStack_38 = pbVar3;
    }
    if (bStack_39 < 0x3a) {
code_r0x004edf53:
      iVar2 = _ZN4absl12lts_2026052619str_format_internal11ParseDigitsERcRPKcS4_
                        (&bStack_39,&pbStack_38,param_2);
      uVar5 = (ulong)bStack_39;
      if (bStack_39 == 0x24) {
        pbVar3 = pbStack_38;
        if (*param_4 != 0) goto code_r0x004ee0d1;
        *param_4 = -1;
        pbVar3 = (byte *)_ZN4absl12lts_2026052619str_format_internal17ConsumeConversionILb1EEEPKcS4_S4_PNS1_17UnboundConversionEPi
                                   (param_1,param_2,param_3,param_4);
        goto code_r0x004ee0a9;
      }
      *(byte *)(param_3 + 3) = *(byte *)(param_3 + 3) | 0x20;
      param_3[1] = iVar2;
code_r0x004edfe3:
      if ((char)uVar5 == '.') {
        *(byte *)(param_3 + 3) = *(byte *)(param_3 + 3) | 0x20;
        pbVar3 = pbStack_38;
        if (pbStack_38 == param_2) goto code_r0x004ee0d1;
        pbVar3 = pbStack_38 + 1;
        bStack_39 = *pbStack_38;
        if ((byte)(bStack_39 - 0x30) < 10) {
          pbStack_38 = pbVar3;
          iVar2 = _ZN4absl12lts_2026052619str_format_internal11ParseDigitsERcRPKcS4_
                            (&bStack_39,&pbStack_38,param_2);
          param_3[2] = iVar2;
        }
        else {
          if (bStack_39 == 0x2a) {
            if (pbVar3 == param_2) goto code_r0x004ee0d1;
            bStack_39 = pbStack_38[1];
            uVar5 = (ulong)bStack_39;
            iVar2 = *param_4;
            *param_4 = iVar2 + 1;
            param_3[2] = -2 - iVar2;
            pbStack_38 = pbStack_38 + 2;
            goto code_r0x004ee07a;
          }
          param_3[2] = 0;
          pbStack_38 = pbVar3;
        }
        uVar5 = (ulong)bStack_39;
      }
    }
  }
code_r0x004ee07a:
  cVar4 = (char)uVar5;
  bVar6 = _ZN4absl12lts_2026052619str_format_internal13ConvTagHolder5valueE[uVar5];
  pbVar3 = pbStack_38;
  if ((cVar4 == 'v') && ((char)param_3[3] != '\0')) goto code_r0x004ee0d1;
  if ((char)bVar6 < '\0') {
    if (0xbf < bVar6) goto code_r0x004ee0d1;
    if (pbStack_38 == param_2) goto code_r0x004ee0d1;
    pbVar3 = pbStack_38 + 1;
    bVar1 = *pbStack_38;
    if ((cVar4 == 'h' || cVar4 == 'c') && bVar1 == 0x68) {
      *(undefined1 *)((long)param_3 + 0xd) = 1;
code_r0x004ee131:
      if (pbVar3 == param_2) goto code_r0x004ee0d1;
      pbVar3 = pbStack_38 + 2;
      bVar1 = pbStack_38[1];
      bVar7 = false;
    }
    else {
      bVar6 = bVar6 & 0x3f;
      if (bVar6 == 2 && bVar1 == 0x6c) {
        *(undefined1 *)((long)param_3 + 0xd) = 3;
        goto code_r0x004ee131;
      }
      *(byte *)((long)param_3 + 0xd) = bVar6;
      bVar7 = bVar6 == 2;
    }
    bVar6 = _ZN4absl12lts_2026052619str_format_internal13ConvTagHolder5valueE[bVar1];
    if (bVar1 == 0x76) goto code_r0x004ee0d1;
    if ((char)bVar6 < '\0') goto code_r0x004ee0d1;
    pbStack_38 = pbVar3;
    if (bVar7 && bVar1 == 99) {
      *(byte *)(param_3 + 3) = *(byte *)(param_3 + 3) | 0x20;
    }
  }
  *(byte *)((long)param_3 + 0xe) = bVar6;
  iVar2 = *param_4;
  *param_4 = iVar2 + 1;
  *param_3 = iVar2 + 1;
  pbVar3 = pbStack_38;
code_r0x004ee0a9:
  while (*(long *)(in_FS_OFFSET + 0x28) != lStack_30) {
    func_0x0099bd00();
    pbVar3 = pbStack_38;
code_r0x004ee0d1:
    pbStack_38 = pbVar3;
    pbVar3 = (byte *)0x0;
  }
  return pbVar3;
}


