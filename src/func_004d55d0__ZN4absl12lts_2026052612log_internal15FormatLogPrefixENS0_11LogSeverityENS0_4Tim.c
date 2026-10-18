// Function: _ZN4absl12lts_2026052612log_internal15FormatLogPrefixENS0_11LogSeverityENS0_4TimeEiNSt3__117basic_string_viewIcNS4_11char_traitsIcEEEEiNS1_12PrefixFormatERNS0_4SpanIcEE
// Address: 004d55d0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long _ZN4absl12lts_2026052612log_internal15FormatLogPrefixENS0_11LogSeverityENS0_4TimeEiNSt3__117basic_string_viewIcNS4_11char_traitsIcEEEEiNS1_12PrefixFormatERNS0_4SpanIcEE
               (uint param_1,undefined8 param_2,undefined4 param_3,uint param_4,undefined8 param_5,
               ulong param_6,undefined4 param_7,int param_8,long *param_9)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  undefined4 uVar3;
  uint uVar4;
  long lVar5;
  undefined2 *puVar6;
  long lVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined4 extraout_EDX;
  int iVar10;
  undefined1 *puVar11;
  ulong uVar12;
  ulong uVar13;
  long in_FS_OFFSET;
  undefined4 uStack_7c;
  ulong uStack_78;
  undefined4 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  if ((ulong)param_9[1] < 0x22) {
    param_9[1] = 0;
    puVar11 = (undefined1 *)*param_9;
    uVar13 = 0;
    uVar12 = 0;
    goto code_r0x004d5822;
  }
  lVar5 = _ZN4absl12lts_2026052612log_internal8TimeZoneEv();
  if (lVar5 == 0) {
    uVar3 = _ZN4absl12lts_202605269ToTimevalENS0_4TimeE(param_2,param_3);
    puStack_68 = &UNK_0015b5e8;
    uStack_60 = 0x1b;
    if (param_1 < 4) {
      puVar8 = *(undefined **)(&UNK_009a0178 + (ulong)param_1 * 8);
    }
    else {
      puVar8 = &UNK_001806e4;
    }
    uStack_78 = CONCAT44(uStack_78._4_4_,uVar3);
    uStack_7c = extraout_EDX;
    uVar4 = _ZN4absl12lts_202605268SNPrintFIJciiiEEEiPcmRKNS0_19str_format_internal18FormatSpecTemplateIJXspclsr19str_format_internalE14ArgumentToConvIT_EEEEEEDpRKS5_
                      (*param_9,param_9[1],&puStack_68,puVar8,&uStack_78,&uStack_7c);
    puVar11 = (undefined1 *)*param_9;
    uVar13 = param_9[1];
    if ((int)uVar4 < 0) {
      uVar12 = 0;
      goto code_r0x004d5822;
    }
    uVar12 = (ulong)uVar4;
    puVar11 = puVar11 + uVar12;
    *param_9 = (long)puVar11;
  }
  else {
    puVar11 = (undefined1 *)*param_9;
    if (param_1 < 4) {
      puVar8 = *(undefined **)(&UNK_009a0178 + (ulong)param_1 * 8);
    }
    else {
      puVar8 = &UNK_001806e4;
    }
    *puVar11 = *puVar8;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    puStack_68 = (undefined *)0x0;
    uStack_60 = 0;
    _ZNK4absl12lts_202605268TimeZone2AtENS0_4TimeE(&puStack_68,lVar5,param_2,param_3);
    _ZN4absl12lts_2026052616numbers_internal12PutTwoDigitsEjPc((int)(char)uStack_60,puVar11 + 1);
    _ZN4absl12lts_2026052616numbers_internal12PutTwoDigitsEjPc((int)uStack_60._1_1_,puVar11 + 3);
    puVar11[5] = 0x20;
    _ZN4absl12lts_2026052616numbers_internal12PutTwoDigitsEjPc((int)uStack_60._2_1_,puVar11 + 6);
    puVar11[8] = 0x3a;
    _ZN4absl12lts_2026052616numbers_internal12PutTwoDigitsEjPc((int)uStack_60._3_1_,puVar11 + 9);
    puVar11[0xb] = 0x3a;
    _ZN4absl12lts_2026052616numbers_internal12PutTwoDigitsEjPc((int)uStack_60._4_1_,puVar11 + 0xc);
    puVar11[0xe] = 0x2e;
    if (uStack_58 >> 0x2b == 0) {
      lVar5 = (uStack_50 & 0xffffffff) / 4000 + uStack_58 * 1000000;
    }
    else {
      uStack_78 = uStack_58;
      uStack_70 = (undefined4)uStack_50;
      lVar5 = _ZN4absl12lts_2026052612IDivDurationENS0_8DurationES1_PS1_
                        (uStack_58,uStack_50 & 0xffffffff,0,4000,&uStack_78);
    }
    _ZN4absl12lts_2026052616numbers_internal12PutTwoDigitsEjPc
              ((int)(SUB168(SEXT816(lVar5) * SEXT816(0x346dc5d63886594b),8) >> 0xb) -
               (SUB164(SEXT816(lVar5) * SEXT816(0x346dc5d63886594b),0xc) >> 0x1f),puVar11 + 0xf);
    auVar2 = SEXT816(lVar5 / 100) * ZEXT816(0xa3d70a3d70a3d70b);
    iVar10 = (int)(lVar5 / 100);
    _ZN4absl12lts_2026052616numbers_internal12PutTwoDigitsEjPc
              (iVar10 + ((int)(auVar2._8_8_ >> 6) - (auVar2._12_4_ >> 0x1f)) * -100,puVar11 + 0x11);
    _ZN4absl12lts_2026052616numbers_internal12PutTwoDigitsEjPc
              ((int)lVar5 + iVar10 * -100,puVar11 + 0x13);
    puVar11[0x15] = 0x20;
    if (param_4 < 10) {
      puVar11[0x16] = 0x20;
      puVar11 = puVar11 + 0x17;
code_r0x004d57bf:
      *puVar11 = 0x20;
      puVar11 = puVar11 + 1;
code_r0x004d57c7:
      *puVar11 = 0x20;
      puVar11 = puVar11 + 1;
code_r0x004d57cf:
      *puVar11 = 0x20;
      puVar11 = puVar11 + 1;
code_r0x004d57d7:
      *puVar11 = 0x20;
      puVar11 = puVar11 + 1;
code_r0x004d57df:
      *puVar11 = 0x20;
      puVar11 = puVar11 + 1;
    }
    else {
      puVar11 = puVar11 + 0x16;
      if (param_4 + 9 < 0x6d) goto code_r0x004d57bf;
      if (param_4 + 99 < 1099) goto code_r0x004d57c7;
      if (param_4 + 999 < 10999) goto code_r0x004d57cf;
      if (param_4 + 9999 < 109999) goto code_r0x004d57d7;
      if (param_4 + 99999 < 1099999) goto code_r0x004d57df;
    }
    puVar11 = (undefined1 *)
              _ZN4absl12lts_2026052616numbers_internal15FastIntToBufferEiPc(param_4,puVar11);
    *puVar11 = 0x20;
    puVar11 = puVar11 + 1;
    uVar12 = (long)puVar11 - *param_9;
    *param_9 = (long)puVar11;
    uVar13 = param_9[1];
  }
  uVar13 = uVar13 - uVar12;
  param_9[1] = uVar13;
code_r0x004d5822:
  if (param_6 < uVar13) {
    uVar13 = param_6;
  }
  func_0x0099bda0(puVar11,param_5,uVar13);
  puVar6 = (undefined2 *)(*param_9 + uVar13);
  *param_9 = (long)puVar6;
  lVar5 = param_9[1];
  param_9[1] = lVar5 - uVar13;
  if (lVar5 - uVar13 < 0xe) {
    uVar9 = 0;
    lVar5 = 0;
  }
  else {
    *(undefined1 *)puVar6 = 0x3a;
    puVar6 = (undefined2 *)
             _ZN4absl12lts_2026052616numbers_internal15FastIntToBufferEiPc
                       (param_7,(undefined1 *)((long)puVar6 + 1));
    *puVar6 = 0x205d;
    puVar6 = puVar6 + 1;
    lVar5 = (long)puVar6 - *param_9;
    *param_9 = (long)puVar6;
    uVar9 = param_9[1] - lVar5;
  }
  lVar5 = uVar13 + uVar12 + lVar5;
  param_9[1] = uVar9;
  if (param_8 == 1) {
    uVar13 = 5;
    if (uVar9 < 5) {
      uVar13 = uVar9;
    }
    func_0x0099bda0(puVar6,&UNK_001839ce,uVar13);
    *param_9 = *param_9 + uVar13;
    param_9[1] = param_9[1] - uVar13;
    lVar5 = lVar5 + uVar13;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) != lStack_38) {
    func_0x0099bd00();
    lVar5 = *(long *)(in_FS_OFFSET + 0x28);
    lVar7 = _ZN4absl12lts_2026052619str_format_internal8SnprintFEPcmNS1_21UntypedFormatSpecImplENS0_4SpanIKNS1_13FormatArgImplEEE
                      ();
    if (*(long *)(in_FS_OFFSET + 0x28) != lVar5) {
      func_0x0099bd00();
      pcVar1 = (code *)swi(3);
      lVar5 = (*pcVar1)();
      return lVar5;
    }
    return lVar7;
  }
  return lVar5;
}


