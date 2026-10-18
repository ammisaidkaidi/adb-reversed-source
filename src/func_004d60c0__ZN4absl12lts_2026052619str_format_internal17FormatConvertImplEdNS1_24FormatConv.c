// Function: _ZN4absl12lts_2026052619str_format_internal17FormatConvertImplEdNS1_24FormatConversionSpecImplEPNS1_14FormatSinkImplE
// Address: 004d60c0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8
_ZN4absl12lts_2026052619str_format_internal17FormatConvertImplEdNS1_24FormatConversionSpecImplEPNS1_14FormatSinkImplE
          (ulong param_1,char **param_2,char **param_3)

{
  undefined8 *puVar1;
  long lVar2;
  byte bVar3;
  undefined8 uVar4;
  byte *pbVar5;
  undefined8 *puVar6;
  undefined4 extraout_EDX;
  char **extraout_RDX;
  ulong extraout_RDX_00;
  char **ppcVar7;
  char *pcVar8;
  ulong uVar9;
  char *pcVar10;
  char **ppcVar11;
  char **ppcVar12;
  char **unaff_R12;
  char **unaff_R14;
  byte *pbVar13;
  char **unaff_R15;
  long in_FS_OFFSET;
  bool bVar14;
  char *pcStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined *puStack_68;
  unkbyte10 Stack_60;
  char *pcStack_48;
  undefined4 uStack_40;
  char **ppcStack_38;
  undefined *apuStack_30 [2];
  char cStack_20;
  undefined7 uStack_1f;
  undefined2 uStack_18;
  undefined2 uStack_16;
  long lStack_10;
  
  lStack_10 = *(long *)(in_FS_OFFSET + 0x28);
  cStack_20 = (char)param_1;
  uStack_1f = (undefined7)(param_1 >> 8);
  uStack_18 = SUB82(param_2,0);
  uStack_16 = (undefined2)((ulong)param_2 >> 0x10);
  if (cStack_20 == '\x12') {
    cStack_20 = '\f';
code_r0x004d60f2:
    pcVar8 = &cStack_20;
    apuStack_30[0] = &UNK_004d60fe;
    uVar4 = _ZN4absl12lts_2026052619str_format_internal16ConvertFloatImplEdRKNS1_24FormatConversionSpecImplEPNS1_14FormatSinkImplE
                      ();
    param_2 = param_3;
  }
  else {
    pcVar8 = (char *)(param_1 & 0xfffffffffffffff8);
    if ((char)pcVar8 == '\b') goto code_r0x004d60f2;
    uVar4 = 0;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_10) {
    return uVar4;
  }
  apuStack_30[0] = &UNK_004d611c;
  func_0x0099bd00();
  ppcStack_38 = *(char ***)(in_FS_OFFSET + 0x28);
  uStack_40 = SUB84(param_2,0);
  if ((char)pcVar8 == '\x12') {
    pcStack_48 = (char *)CONCAT71((int7)((ulong)pcVar8 >> 8),0xc);
code_r0x004d6155:
    ppcVar7 = &pcStack_48;
    puStack_68 = &UNK_004d6164;
    param_2 = extraout_RDX;
    Stack_60 = CONCAT28(uStack_18,CONCAT71(uStack_1f,cStack_20));
    apuStack_30[0] = &stack0xfffffffffffffff8;
    uVar4 = _ZN4absl12lts_2026052619str_format_internal16ConvertFloatImplEeRKNS1_24FormatConversionSpecImplEPNS1_14FormatSinkImplE
                      ();
  }
  else {
    ppcVar7 = (char **)((ulong)pcVar8 & 0xfffffffffffffff8);
    pcStack_48 = pcVar8;
    if ((char)ppcVar7 == '\b') goto code_r0x004d6155;
    uVar4 = 0;
    apuStack_30[0] = &stack0xfffffffffffffff8;
  }
  ppcVar12 = *(char ***)(in_FS_OFFSET + 0x28);
  if (ppcVar12 == ppcStack_38) {
    return uVar4;
  }
  puStack_68 = &UNK_004d6184;
  func_0x0099bd00();
  puStack_98 = *(undefined8 **)(in_FS_OFFSET + 0x28);
  ppcVar11 = ppcVar7;
  if ((char)param_2 == '\x11') {
    if (ppcVar7 == (char **)0x0) {
      ppcVar12[2] = ppcVar12[2] + 5;
      pcVar8 = ppcVar12[3];
      if ((byte *)((long)ppcVar12 + (0x420 - (long)pcVar8)) < (byte *)0x6) {
        ppcVar7 = ppcVar12 + 4;
        puStack_68 = (undefined *)apuStack_30;
        (*(code *)ppcVar12[1])(*ppcVar12,ppcVar7,(long)pcVar8 - (long)ppcVar7);
        ppcVar12[3] = (char *)ppcVar7;
        ppcVar11 = (char **)*ppcVar12;
        param_2 = (char **)&UNK_00181ead;
        (*(code *)ppcVar12[1])(ppcVar11,&UNK_00181ead,5);
        unaff_R14 = ppcVar12;
      }
      else {
        builtin_strncpy(pcVar8,"(nil)",5);
        ppcVar12[3] = ppcVar12[3] + 5;
        puStack_68 = (undefined *)apuStack_30;
      }
    }
    else {
      uStack_a8 = 0;
      uStack_a0 = 0;
      uStack_b8 = 0;
      uStack_b0 = 0;
      uStack_c8 = 0;
      uStack_c0 = 0;
      pcVar8 = (char *)((long)&uStack_a0 + 5);
      do {
        pcVar10 = pcVar8;
        *(undefined2 *)(pcVar10 + -3) =
             *(undefined2 *)
              (_ZN4absl12lts_2026052616numbers_internal9kHexTableE + ((ulong)ppcVar7 & 0xff) * 2);
        ppcVar12 = (char **)((ulong)ppcVar7 >> 8);
        bVar14 = (char **)0xff < ppcVar7;
        pcVar8 = pcVar10 + -2;
        ppcVar7 = ppcVar12;
      } while (bVar14);
      pcStack_d8 = pcVar10 + -3;
      if (pcVar10[-3] == '0') {
        pcStack_d8 = pcVar10 + -2;
      }
      lStack_d0 = (long)&uStack_a0 + (4 - (long)pcStack_d8);
      ppcVar11 = &pcStack_d8;
      puStack_68 = (undefined *)apuStack_30;
      func_0x004d5b70();
    }
  }
  else {
    bVar3 = (byte)((ulong)param_2 >> 8);
    if (ppcVar7 == (char **)0x0) {
      puStack_68 = (undefined *)apuStack_30;
      if (bVar3 != 0) {
        unaff_R14 = (char **)0x0;
        puStack_68 = (undefined *)apuStack_30;
        goto code_r0x004d62ca;
      }
    }
    else {
      if ((int)extraout_RDX_00 < 0) {
        puStack_68 = (undefined *)apuStack_30;
        unaff_R14 = (char **)func_0x0099bcf0();
      }
      else {
        puStack_68 = (undefined *)apuStack_30;
        pbVar5 = (byte *)func_0x0099c070(ppcVar7,0);
        pbVar13 = (byte *)((long)ppcVar7 + (extraout_RDX_00 & 0xffffffff));
        if (pbVar5 != (byte *)0x0) {
          pbVar13 = pbVar5;
        }
        unaff_R14 = (char **)(pbVar13 + -(long)ppcVar7);
      }
      unaff_R15 = (char **)(extraout_RDX_00 & 0xffffffff);
      unaff_R12 = ppcVar12;
      if (bVar3 != 0) {
code_r0x004d62ca:
        unaff_R15 = (char **)(extraout_RDX_00 & 0xffffffff);
        uVar9 = (ulong)param_2 >> 0x20;
        param_2 = ppcVar7;
        uVar4 = _ZN4absl12lts_2026052619str_format_internal14FormatSinkImpl15PutPaddedStringENSt3__117basic_string_viewIcNS3_11char_traitsIcEEEEiib
                          (ppcVar12,ppcVar7,unaff_R14,uVar9,unaff_R15,bVar3 & 1);
        ppcVar11 = ppcVar12;
        ppcVar12 = unaff_R12;
        goto code_r0x004d637d;
      }
      uVar4 = 1;
      if (unaff_R14 == (char **)0x0) goto code_r0x004d637d;
      ppcVar12[2] = (char *)((long)unaff_R14 + (long)ppcVar12[2]);
      ppcVar11 = (char **)ppcVar12[3];
      if (unaff_R14 < (char **)((long)ppcVar12 + (0x420 - (long)ppcVar11))) {
        param_2 = ppcVar7;
        func_0x0099bda0(ppcVar11,ppcVar7,unaff_R14);
        ppcVar12[3] = (char *)((long)unaff_R14 + (long)ppcVar12[3]);
        ppcVar7 = ppcVar12;
      }
      else {
        unaff_R15 = ppcVar12 + 4;
        (*(code *)ppcVar12[1])(*ppcVar12,unaff_R15,(long)ppcVar11 - (long)unaff_R15);
        ppcVar12[3] = (char *)unaff_R15;
        ppcVar11 = (char **)*ppcVar12;
        param_2 = ppcVar7;
        (*(code *)ppcVar12[1])(ppcVar11,ppcVar7,unaff_R14);
      }
    }
  }
  uVar4 = 1;
  ppcVar12 = unaff_R12;
code_r0x004d637d:
  puVar6 = *(undefined8 **)(in_FS_OFFSET + 0x28);
  if (puVar6 == puStack_98) {
    return uVar4;
  }
  func_0x0099bd00();
  bVar14 = (*(byte *)ppcVar11 & 1) != 0;
  pbVar13 = (byte *)((long)ppcVar11 + 1);
  if (bVar14) {
    pbVar13 = (byte *)ppcVar11[2];
  }
  pcVar8 = (char *)(ulong)(*(byte *)ppcVar11 >> 1);
  if (bVar14) {
    pcVar8 = ppcVar11[1];
  }
  bVar3 = (byte)((ulong)param_2 >> 8);
  if (bVar3 == 0) {
    uVar4 = 1;
    if (pcVar8 != (char *)0x0) {
      puVar6[2] = pcVar8 + puVar6[2];
      lVar2 = puVar6[3];
      if (pcVar8 < (char *)((long)puVar6 + (0x420 - lVar2))) {
        func_0x0099bda0(lVar2,pbVar13,pcVar8);
        puVar6[3] = pcVar8 + puVar6[3];
        uVar4 = 1;
      }
      else {
        puVar1 = puVar6 + 4;
        (*(code *)puVar6[1])(*puVar6,puVar1,lVar2 - (long)puVar1);
        puVar6[3] = puVar1;
        (*(code *)puVar6[1])(*puVar6,pbVar13,pcVar8);
        uVar4 = 1;
      }
    }
  }
  else {
    uVar4 = _ZN4absl12lts_2026052619str_format_internal14FormatSinkImpl15PutPaddedStringENSt3__117basic_string_viewIcNS3_11char_traitsIcEEEEiib
                      (puVar6,pbVar13,pcVar8,(ulong)param_2 >> 0x20,extraout_EDX,bVar3 & 1,ppcVar7,
                       ppcVar12,unaff_R14,unaff_R15,&puStack_68);
  }
  return uVar4;
}


