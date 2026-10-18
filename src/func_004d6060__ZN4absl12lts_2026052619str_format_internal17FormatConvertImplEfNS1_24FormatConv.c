// Function: _ZN4absl12lts_2026052619str_format_internal17FormatConvertImplEfNS1_24FormatConversionSpecImplEPNS1_14FormatSinkImplE
// Address: 004d6060
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8
_ZN4absl12lts_2026052619str_format_internal17FormatConvertImplEfNS1_24FormatConversionSpecImplEPNS1_14FormatSinkImplE
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
  char **extraout_RDX_00;
  ulong extraout_RDX_01;
  char **ppcVar7;
  char *pcVar8;
  ulong uVar9;
  ulong *puVar10;
  char *pcVar11;
  char **ppcVar12;
  char **ppcVar13;
  char **unaff_R12;
  char **unaff_R14;
  byte *pbVar14;
  char **unaff_R15;
  long in_FS_OFFSET;
  bool bVar15;
  char *pcStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined *puStack_90;
  unkbyte10 Stack_88;
  char *pcStack_70;
  undefined4 uStack_68;
  char **ppcStack_60;
  undefined *apuStack_58 [2];
  char cStack_48;
  undefined7 uStack_47;
  undefined2 uStack_40;
  undefined2 uStack_3e;
  long lStack_38;
  undefined *apuStack_30 [2];
  ulong uStack_20;
  undefined4 uStack_18;
  long lStack_10;
  
  lStack_10 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_18 = SUB84(param_2,0);
  if ((char)param_1 == '\x12') {
    uStack_20 = CONCAT71((int7)(param_1 >> 8),0xc);
code_r0x004d6092:
    puVar10 = &uStack_20;
    apuStack_30[0] = &UNK_004d609e;
    uVar4 = _ZN4absl12lts_2026052619str_format_internal16ConvertFloatImplEfRKNS1_24FormatConversionSpecImplEPNS1_14FormatSinkImplE
                      ();
    param_2 = param_3;
  }
  else {
    puVar10 = (ulong *)(param_1 & 0xfffffffffffffff8);
    uStack_20 = param_1;
    if ((char)puVar10 == '\b') goto code_r0x004d6092;
    uVar4 = 0;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_10) {
    return uVar4;
  }
  apuStack_30[0] = &UNK_004d60bc;
  func_0x0099bd00();
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  cStack_48 = (char)puVar10;
  uStack_47 = (undefined7)((ulong)puVar10 >> 8);
  uStack_40 = SUB82(param_2,0);
  uStack_3e = (undefined2)((ulong)param_2 >> 0x10);
  if (cStack_48 == '\x12') {
    cStack_48 = '\f';
code_r0x004d60f2:
    pcVar8 = &cStack_48;
    apuStack_58[0] = &UNK_004d60fe;
    param_2 = extraout_RDX;
    apuStack_30[0] = &stack0xfffffffffffffff8;
    uVar4 = _ZN4absl12lts_2026052619str_format_internal16ConvertFloatImplEdRKNS1_24FormatConversionSpecImplEPNS1_14FormatSinkImplE
                      ();
  }
  else {
    pcVar8 = (char *)((ulong)puVar10 & 0xfffffffffffffff8);
    if ((char)pcVar8 == '\b') goto code_r0x004d60f2;
    uVar4 = 0;
    apuStack_30[0] = &stack0xfffffffffffffff8;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return uVar4;
  }
  apuStack_58[0] = &UNK_004d611c;
  func_0x0099bd00();
  ppcStack_60 = *(char ***)(in_FS_OFFSET + 0x28);
  uStack_68 = SUB84(param_2,0);
  if ((char)pcVar8 == '\x12') {
    pcStack_70 = (char *)CONCAT71((int7)((ulong)pcVar8 >> 8),0xc);
code_r0x004d6155:
    ppcVar7 = &pcStack_70;
    puStack_90 = &UNK_004d6164;
    param_2 = extraout_RDX_00;
    Stack_88 = CONCAT28(uStack_40,CONCAT71(uStack_47,cStack_48));
    apuStack_58[0] = (undefined *)apuStack_30;
    uVar4 = _ZN4absl12lts_2026052619str_format_internal16ConvertFloatImplEeRKNS1_24FormatConversionSpecImplEPNS1_14FormatSinkImplE
                      ();
  }
  else {
    ppcVar7 = (char **)((ulong)pcVar8 & 0xfffffffffffffff8);
    pcStack_70 = pcVar8;
    if ((char)ppcVar7 == '\b') goto code_r0x004d6155;
    uVar4 = 0;
    apuStack_58[0] = (undefined *)apuStack_30;
  }
  ppcVar13 = *(char ***)(in_FS_OFFSET + 0x28);
  if (ppcVar13 == ppcStack_60) {
    return uVar4;
  }
  puStack_90 = &UNK_004d6184;
  func_0x0099bd00();
  puStack_c0 = *(undefined8 **)(in_FS_OFFSET + 0x28);
  ppcVar12 = ppcVar7;
  if ((char)param_2 == '\x11') {
    if (ppcVar7 == (char **)0x0) {
      ppcVar13[2] = ppcVar13[2] + 5;
      pcVar8 = ppcVar13[3];
      if ((byte *)((long)ppcVar13 + (0x420 - (long)pcVar8)) < (byte *)0x6) {
        ppcVar7 = ppcVar13 + 4;
        puStack_90 = (undefined *)apuStack_58;
        (*(code *)ppcVar13[1])(*ppcVar13,ppcVar7,(long)pcVar8 - (long)ppcVar7);
        ppcVar13[3] = (char *)ppcVar7;
        ppcVar12 = (char **)*ppcVar13;
        param_2 = (char **)&UNK_00181ead;
        (*(code *)ppcVar13[1])(ppcVar12,&UNK_00181ead,5);
        unaff_R14 = ppcVar13;
      }
      else {
        builtin_strncpy(pcVar8,"(nil)",5);
        ppcVar13[3] = ppcVar13[3] + 5;
        puStack_90 = (undefined *)apuStack_58;
      }
    }
    else {
      uStack_d0 = 0;
      uStack_c8 = 0;
      uStack_e0 = 0;
      uStack_d8 = 0;
      uStack_f0 = 0;
      uStack_e8 = 0;
      pcVar8 = (char *)((long)&uStack_c8 + 5);
      do {
        pcVar11 = pcVar8;
        *(undefined2 *)(pcVar11 + -3) =
             *(undefined2 *)
              (_ZN4absl12lts_2026052616numbers_internal9kHexTableE + ((ulong)ppcVar7 & 0xff) * 2);
        ppcVar13 = (char **)((ulong)ppcVar7 >> 8);
        bVar15 = (char **)0xff < ppcVar7;
        pcVar8 = pcVar11 + -2;
        ppcVar7 = ppcVar13;
      } while (bVar15);
      pcStack_100 = pcVar11 + -3;
      if (pcVar11[-3] == '0') {
        pcStack_100 = pcVar11 + -2;
      }
      lStack_f8 = (long)&uStack_c8 + (4 - (long)pcStack_100);
      ppcVar12 = &pcStack_100;
      puStack_90 = (undefined *)apuStack_58;
      func_0x004d5b70();
    }
  }
  else {
    bVar3 = (byte)((ulong)param_2 >> 8);
    if (ppcVar7 == (char **)0x0) {
      puStack_90 = (undefined *)apuStack_58;
      if (bVar3 != 0) {
        unaff_R14 = (char **)0x0;
        puStack_90 = (undefined *)apuStack_58;
        goto code_r0x004d62ca;
      }
    }
    else {
      if ((int)extraout_RDX_01 < 0) {
        puStack_90 = (undefined *)apuStack_58;
        unaff_R14 = (char **)func_0x0099bcf0();
      }
      else {
        puStack_90 = (undefined *)apuStack_58;
        pbVar5 = (byte *)func_0x0099c070(ppcVar7,0);
        pbVar14 = (byte *)((long)ppcVar7 + (extraout_RDX_01 & 0xffffffff));
        if (pbVar5 != (byte *)0x0) {
          pbVar14 = pbVar5;
        }
        unaff_R14 = (char **)(pbVar14 + -(long)ppcVar7);
      }
      unaff_R15 = (char **)(extraout_RDX_01 & 0xffffffff);
      unaff_R12 = ppcVar13;
      if (bVar3 != 0) {
code_r0x004d62ca:
        unaff_R15 = (char **)(extraout_RDX_01 & 0xffffffff);
        uVar9 = (ulong)param_2 >> 0x20;
        param_2 = ppcVar7;
        uVar4 = _ZN4absl12lts_2026052619str_format_internal14FormatSinkImpl15PutPaddedStringENSt3__117basic_string_viewIcNS3_11char_traitsIcEEEEiib
                          (ppcVar13,ppcVar7,unaff_R14,uVar9,unaff_R15,bVar3 & 1);
        ppcVar12 = ppcVar13;
        ppcVar13 = unaff_R12;
        goto code_r0x004d637d;
      }
      uVar4 = 1;
      if (unaff_R14 == (char **)0x0) goto code_r0x004d637d;
      ppcVar13[2] = (char *)((long)unaff_R14 + (long)ppcVar13[2]);
      ppcVar12 = (char **)ppcVar13[3];
      if (unaff_R14 < (char **)((long)ppcVar13 + (0x420 - (long)ppcVar12))) {
        param_2 = ppcVar7;
        func_0x0099bda0(ppcVar12,ppcVar7,unaff_R14);
        ppcVar13[3] = (char *)((long)unaff_R14 + (long)ppcVar13[3]);
        ppcVar7 = ppcVar13;
      }
      else {
        unaff_R15 = ppcVar13 + 4;
        (*(code *)ppcVar13[1])(*ppcVar13,unaff_R15,(long)ppcVar12 - (long)unaff_R15);
        ppcVar13[3] = (char *)unaff_R15;
        ppcVar12 = (char **)*ppcVar13;
        param_2 = ppcVar7;
        (*(code *)ppcVar13[1])(ppcVar12,ppcVar7,unaff_R14);
      }
    }
  }
  uVar4 = 1;
  ppcVar13 = unaff_R12;
code_r0x004d637d:
  puVar6 = *(undefined8 **)(in_FS_OFFSET + 0x28);
  if (puVar6 == puStack_c0) {
    return uVar4;
  }
  func_0x0099bd00();
  bVar15 = (*(byte *)ppcVar12 & 1) != 0;
  pbVar14 = (byte *)((long)ppcVar12 + 1);
  if (bVar15) {
    pbVar14 = (byte *)ppcVar12[2];
  }
  pcVar8 = (char *)(ulong)(*(byte *)ppcVar12 >> 1);
  if (bVar15) {
    pcVar8 = ppcVar12[1];
  }
  bVar3 = (byte)((ulong)param_2 >> 8);
  if (bVar3 == 0) {
    uVar4 = 1;
    if (pcVar8 != (char *)0x0) {
      puVar6[2] = pcVar8 + puVar6[2];
      lVar2 = puVar6[3];
      if (pcVar8 < (char *)((long)puVar6 + (0x420 - lVar2))) {
        func_0x0099bda0(lVar2,pbVar14,pcVar8);
        puVar6[3] = pcVar8 + puVar6[3];
        uVar4 = 1;
      }
      else {
        puVar1 = puVar6 + 4;
        (*(code *)puVar6[1])(*puVar6,puVar1,lVar2 - (long)puVar1);
        puVar6[3] = puVar1;
        (*(code *)puVar6[1])(*puVar6,pbVar14,pcVar8);
        uVar4 = 1;
      }
    }
  }
  else {
    uVar4 = _ZN4absl12lts_2026052619str_format_internal14FormatSinkImpl15PutPaddedStringENSt3__117basic_string_viewIcNS3_11char_traitsIcEEEEiib
                      (puVar6,pbVar14,pcVar8,(ulong)param_2 >> 0x20,extraout_EDX,bVar3 & 1,ppcVar7,
                       ppcVar13,unaff_R14,unaff_R15,&puStack_90);
  }
  return uVar4;
}


