// Function: _ZN4absl12lts_2026052612log_internal16FormatLogMessageENS0_11LogSeverityENS0_13time_internal4cctz6detail10civil_timeINS3_10second_tagEEENS0_8DurationEiNSt3__117basic_string_viewIcNSA_11char_traitsIcEEEEiNS1_12PrefixFormatESE_
// Address: 004d53c0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long _ZN4absl12lts_2026052612log_internal16FormatLogMessageENS0_11LogSeverityENS0_13time_internal4cctz6detail10civil_timeINS3_10second_tagEEENS0_8DurationEiNSt3__117basic_string_viewIcNSA_11char_traitsIcEEEEiNS1_12PrefixFormatESE_
               (long param_1,uint param_2,undefined8 param_3,undefined8 param_4,ulong param_5,
               uint param_6,uint param_7,undefined8 param_8,undefined8 param_9,uint param_10,
               int param_11)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  undefined2 *puVar5;
  long lVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined4 extraout_EDX;
  ulong extraout_RDX;
  int iVar9;
  undefined *puVar10;
  uint uVar11;
  undefined8 uVar12;
  byte *pbVar13;
  undefined1 *puVar14;
  code *pcVar15;
  ulong uVar16;
  ulong uVar17;
  long in_FS_OFFSET;
  undefined4 uStack_174;
  ulong uStack_170;
  undefined4 uStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  long lStack_128;
  byte *pbStack_120;
  undefined1 *puStack_118;
  undefined8 uStack_110;
  ulong uStack_108;
  undefined *puStack_100;
  ulong uStack_f8;
  code *pcStack_f0;
  ulong uStack_e8;
  code *pcStack_e0;
  ulong uStack_d8;
  code *pcStack_d0;
  ulong uStack_c8;
  code *pcStack_c0;
  ulong uStack_b8;
  code *pcStack_b0;
  ulong uStack_a8;
  code *pcStack_a0;
  long lStack_98;
  code *pcStack_90;
  ulong uStack_88;
  code *pcStack_80;
  undefined1 *puStack_78;
  code *pcStack_70;
  ulong uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined1 *puStack_48;
  code *pcStack_40;
  long lStack_38;
  
  iVar9 = param_11;
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 < 4) {
    pbVar13 = *(byte **)(&UNK_009a0178 + (ulong)param_2 * 8);
  }
  else {
    pbVar13 = &UNK_001806e4;
  }
  if (param_5 >> 0x2b == 0) {
    lStack_98 = (ulong)param_6 / 4000 + param_5 * 1000000;
  }
  else {
    pcStack_f0 = (code *)CONCAT44(pcStack_f0._4_4_,param_6);
    puStack_100 = &UNK_004d5465;
    uStack_f8 = param_5;
    lStack_98 = _ZN4absl12lts_2026052612IDivDurationENS0_8DurationES1_PS1_
                          (param_5,param_6,0,4000,&uStack_f8);
  }
  uVar17 = (ulong)param_10;
  puStack_58 = &UNK_00162ac9;
  if (iVar9 == 1) {
    puStack_58 = &UNK_001839ce;
  }
  uStack_f8 = (ulong)*pbVar13;
  pcStack_f0 = 
  _ZN4absl12lts_2026052619str_format_internal13FormatArgImpl8DispatchIcEEbNS2_4DataENS1_24FormatConversionSpecImplEPv
  ;
  uStack_e8 = (ulong)(uint)(int)(char)param_4;
  pcStack_e0 = 
  _ZN4absl12lts_2026052619str_format_internal13FormatArgImpl8DispatchIiEEbNS2_4DataENS1_24FormatConversionSpecImplEPv
  ;
  uVar8 = (ulong)(uint)(int)(char)((ulong)param_4 >> 8);
  pcStack_d0 = 
  _ZN4absl12lts_2026052619str_format_internal13FormatArgImpl8DispatchIiEEbNS2_4DataENS1_24FormatConversionSpecImplEPv
  ;
  uStack_c8 = (ulong)(uint)(int)(char)((ulong)param_4 >> 0x10);
  pcStack_c0 = 
  _ZN4absl12lts_2026052619str_format_internal13FormatArgImpl8DispatchIiEEbNS2_4DataENS1_24FormatConversionSpecImplEPv
  ;
  uStack_b8 = (ulong)(uint)(int)(char)((ulong)param_4 >> 0x18);
  pcStack_b0 = 
  _ZN4absl12lts_2026052619str_format_internal13FormatArgImpl8DispatchIiEEbNS2_4DataENS1_24FormatConversionSpecImplEPv
  ;
  uStack_a8 = (ulong)(uint)(int)(char)((ulong)param_4 >> 0x20);
  pcStack_a0 = 
  _ZN4absl12lts_2026052619str_format_internal13FormatArgImpl8DispatchIiEEbNS2_4DataENS1_24FormatConversionSpecImplEPv
  ;
  pcStack_90 = 
  _ZN4absl12lts_2026052619str_format_internal13FormatArgImpl8DispatchIlEEbNS2_4DataENS1_24FormatConversionSpecImplEPv
  ;
  uStack_88 = (ulong)param_7;
  pcStack_80 = 
  _ZN4absl12lts_2026052619str_format_internal13FormatArgImpl8DispatchIiEEbNS2_4DataENS1_24FormatConversionSpecImplEPv
  ;
  pcStack_70 = 
  _ZN4absl12lts_2026052619str_format_internal13FormatArgImpl8DispatchINSt3__117basic_string_viewIcNS4_11char_traitsIcEEEEEEbNS2_4DataENS1_24FormatConversionSpecImplEPv
  ;
  pcStack_60 = 
  _ZN4absl12lts_2026052619str_format_internal13FormatArgImpl8DispatchIiEEbNS2_4DataENS1_24FormatConversionSpecImplEPv
  ;
  pcStack_50 = 
  _ZN4absl12lts_2026052619str_format_internal13FormatArgImpl8DispatchIPKcEEbNS2_4DataENS1_24FormatConversionSpecImplEPv
  ;
  pcStack_40 = 
  _ZN4absl12lts_2026052619str_format_internal13FormatArgImpl8DispatchINSt3__117basic_string_viewIcNS4_11char_traitsIcEEEEEEbNS2_4DataENS1_24FormatConversionSpecImplEPv
  ;
  puVar10 = &UNK_001883ba;
  uVar3 = (uint)&uStack_f8;
  uVar12 = 0xc;
  puStack_100 = &UNK_004d559b;
  lVar4 = param_1;
  uStack_d8 = uVar8;
  puStack_78 = (undefined1 *)&param_8;
  uStack_68 = uVar17;
  puStack_48 = &stack0x00000030;
  _ZN4absl12lts_2026052619str_format_internal10FormatPackENS1_21UntypedFormatSpecImplENS0_4SpanIKNS1_13FormatArgImplEEE
            (param_1,&UNK_001883ba,0x2e);
  uVar11 = (uint)lVar4;
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return param_1;
  }
  puStack_100 = &UNK_004d55c4;
  func_0x0099bd00();
  pcVar15 = pcStack_e0;
  lStack_130 = *(long *)(in_FS_OFFSET + 0x28);
  lStack_128 = param_1;
  pbStack_120 = pbVar13;
  puStack_118 = (undefined1 *)&param_8;
  uStack_110 = param_4;
  uStack_108 = uVar17;
  if (*(ulong *)(pcStack_e0 + 8) < 0x22) {
    *(long *)(pcStack_e0 + 8) = 0;
    puVar14 = *(undefined1 **)pcStack_e0;
    uVar17 = 0;
    uVar16 = 0;
    puStack_100 = &stack0xfffffffffffffff8;
    goto code_r0x004d5822;
  }
  puStack_100 = &stack0xfffffffffffffff8;
  lVar4 = _ZN4absl12lts_2026052612log_internal8TimeZoneEv();
  if (lVar4 == 0) {
    uVar2 = _ZN4absl12lts_202605269ToTimevalENS0_4TimeE(puVar10,extraout_RDX & 0xffffffff);
    puStack_160 = &UNK_0015b5e8;
    uStack_158 = 0x1b;
    if (uVar11 < 4) {
      puVar10 = *(undefined **)(&UNK_009a0178 + (ulong)uVar11 * 8);
    }
    else {
      puVar10 = &UNK_001806e4;
    }
    uStack_170 = CONCAT44(uStack_170._4_4_,uVar2);
    uStack_174 = extraout_EDX;
    uVar3 = _ZN4absl12lts_202605268SNPrintFIJciiiEEEiPcmRKNS0_19str_format_internal18FormatSpecTemplateIJXspclsr19str_format_internalE14ArgumentToConvIT_EEEEEEDpRKS5_
                      (*(long *)pcVar15,*(long *)(pcVar15 + 8),&puStack_160,puVar10,&uStack_170,
                       &uStack_174);
    puVar14 = *(undefined1 **)pcVar15;
    uVar17 = *(ulong *)(pcVar15 + 8);
    if ((int)uVar3 < 0) {
      uVar16 = 0;
      goto code_r0x004d5822;
    }
    uVar16 = (ulong)uVar3;
    puVar14 = puVar14 + uVar16;
    *(undefined1 **)pcVar15 = puVar14;
  }
  else {
    puVar14 = *(undefined1 **)pcVar15;
    if (uVar11 < 4) {
      puVar7 = *(undefined **)(&UNK_009a0178 + (ulong)uVar11 * 8);
    }
    else {
      puVar7 = &UNK_001806e4;
    }
    *puVar14 = *puVar7;
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    puStack_160 = (undefined *)0x0;
    uStack_158 = 0;
    _ZNK4absl12lts_202605268TimeZone2AtENS0_4TimeE
              (&puStack_160,lVar4,puVar10,extraout_RDX & 0xffffffff);
    _ZN4absl12lts_2026052616numbers_internal12PutTwoDigitsEjPc((int)(char)uStack_158,puVar14 + 1);
    _ZN4absl12lts_2026052616numbers_internal12PutTwoDigitsEjPc((int)uStack_158._1_1_,puVar14 + 3);
    puVar14[5] = 0x20;
    _ZN4absl12lts_2026052616numbers_internal12PutTwoDigitsEjPc((int)uStack_158._2_1_,puVar14 + 6);
    puVar14[8] = 0x3a;
    _ZN4absl12lts_2026052616numbers_internal12PutTwoDigitsEjPc((int)uStack_158._3_1_,puVar14 + 9);
    puVar14[0xb] = 0x3a;
    _ZN4absl12lts_2026052616numbers_internal12PutTwoDigitsEjPc((int)uStack_158._4_1_,puVar14 + 0xc);
    puVar14[0xe] = 0x2e;
    if (uStack_150 >> 0x2b == 0) {
      lVar4 = (uStack_148 & 0xffffffff) / 4000 + uStack_150 * 1000000;
    }
    else {
      uStack_170 = uStack_150;
      uStack_168 = (undefined4)uStack_148;
      lVar4 = _ZN4absl12lts_2026052612IDivDurationENS0_8DurationES1_PS1_
                        (uStack_150,uStack_148 & 0xffffffff,0,4000,&uStack_170);
    }
    _ZN4absl12lts_2026052616numbers_internal12PutTwoDigitsEjPc
              ((int)(SUB168(SEXT816(lVar4) * SEXT816(0x346dc5d63886594b),8) >> 0xb) -
               (SUB164(SEXT816(lVar4) * SEXT816(0x346dc5d63886594b),0xc) >> 0x1f),puVar14 + 0xf);
    auVar1 = SEXT816(lVar4 / 100) * ZEXT816(0xa3d70a3d70a3d70b);
    iVar9 = (int)(lVar4 / 100);
    _ZN4absl12lts_2026052616numbers_internal12PutTwoDigitsEjPc
              (iVar9 + ((int)(auVar1._8_8_ >> 6) - (auVar1._12_4_ >> 0x1f)) * -100,puVar14 + 0x11);
    _ZN4absl12lts_2026052616numbers_internal12PutTwoDigitsEjPc
              ((int)lVar4 + iVar9 * -100,puVar14 + 0x13);
    puVar14[0x15] = 0x20;
    if (uVar3 < 10) {
      puVar14[0x16] = 0x20;
      puVar14 = puVar14 + 0x17;
code_r0x004d57bf:
      *puVar14 = 0x20;
      puVar14 = puVar14 + 1;
code_r0x004d57c7:
      *puVar14 = 0x20;
      puVar14 = puVar14 + 1;
code_r0x004d57cf:
      *puVar14 = 0x20;
      puVar14 = puVar14 + 1;
code_r0x004d57d7:
      *puVar14 = 0x20;
      puVar14 = puVar14 + 1;
code_r0x004d57df:
      *puVar14 = 0x20;
      puVar14 = puVar14 + 1;
    }
    else {
      puVar14 = puVar14 + 0x16;
      if (uVar3 + 9 < 0x6d) goto code_r0x004d57bf;
      if (uVar3 + 99 < 1099) goto code_r0x004d57c7;
      if (uVar3 + 999 < 10999) goto code_r0x004d57cf;
      if (uVar3 + 9999 < 109999) goto code_r0x004d57d7;
      if (uVar3 + 99999 < 1099999) goto code_r0x004d57df;
    }
    puVar14 = (undefined1 *)
              _ZN4absl12lts_2026052616numbers_internal15FastIntToBufferEiPc(uVar3,puVar14);
    *puVar14 = 0x20;
    puVar14 = puVar14 + 1;
    uVar16 = (long)puVar14 - *(long *)pcStack_e0;
    *(undefined1 **)pcStack_e0 = puVar14;
    uVar17 = *(ulong *)(pcStack_e0 + 8);
    pcVar15 = pcStack_e0;
  }
  uVar17 = uVar17 - uVar16;
  *(ulong *)(pcVar15 + 8) = uVar17;
code_r0x004d5822:
  iVar9 = (int)uStack_e8;
  if (uVar8 < uVar17) {
    uVar17 = uVar8;
  }
  func_0x0099bda0(puVar14,uVar12,uVar17);
  puVar5 = (undefined2 *)(*(long *)pcVar15 + uVar17);
  *(undefined2 **)pcVar15 = puVar5;
  lVar4 = *(long *)(pcVar15 + 8);
  *(ulong *)(pcVar15 + 8) = lVar4 - uVar17;
  if (lVar4 - uVar17 < 0xe) {
    uVar8 = 0;
    lVar4 = 0;
  }
  else {
    *(undefined1 *)puVar5 = 0x3a;
    puVar5 = (undefined2 *)
             _ZN4absl12lts_2026052616numbers_internal15FastIntToBufferEiPc
                       ((ulong)pcStack_f0 & 0xffffffff,(undefined1 *)((long)puVar5 + 1));
    *puVar5 = 0x205d;
    puVar5 = puVar5 + 1;
    lVar4 = (long)puVar5 - *(long *)pcVar15;
    *(undefined2 **)pcVar15 = puVar5;
    uVar8 = *(long *)(pcVar15 + 8) - lVar4;
  }
  lVar4 = uVar17 + uVar16 + lVar4;
  *(ulong *)(pcVar15 + 8) = uVar8;
  if (iVar9 == 1) {
    uVar17 = 5;
    if (uVar8 < 5) {
      uVar17 = uVar8;
    }
    func_0x0099bda0(puVar5,&UNK_001839ce,uVar17);
    *(ulong *)pcVar15 = *(long *)pcVar15 + uVar17;
    *(ulong *)(pcVar15 + 8) = *(long *)(pcVar15 + 8) - uVar17;
    lVar4 = lVar4 + uVar17;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) != lStack_130) {
    func_0x0099bd00();
    lVar4 = *(long *)(in_FS_OFFSET + 0x28);
    lVar6 = _ZN4absl12lts_2026052619str_format_internal8SnprintFEPcmNS1_21UntypedFormatSpecImplENS0_4SpanIKNS1_13FormatArgImplEEE
                      ();
    if (*(long *)(in_FS_OFFSET + 0x28) != lVar4) {
      func_0x0099bd00();
      pcVar15 = (code *)swi(3);
      lVar4 = (*pcVar15)();
      return lVar4;
    }
    return lVar6;
  }
  return lVar4;
}


