// Function: _ZN4absl12lts_2026052619str_format_internal7FprintFEP8_IO_FILENS1_21UntypedFormatSpecImplENS0_4SpanIKNS1_13FormatArgImplEEE
// Address: 004ec940
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long **** _ZN4absl12lts_2026052619str_format_internal7FprintFEP8_IO_FILENS1_21UntypedFormatSpecImplENS0_4SpanIKNS1_13FormatArgImplEEE
                    (long ***param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5)

{
  int iVar1;
  long **pplVar2;
  undefined7 *puVar3;
  char cVar4;
  undefined1 uVar5;
  uint uVar6;
  int *piVar7;
  undefined4 *puVar8;
  long *plVar9;
  undefined8 uVar10;
  long ****pppplVar11;
  undefined8 *puVar12;
  long ****pppplVar13;
  ulong uVar14;
  long ****pppplVar15;
  long ***ppplVar16;
  long ***ppplVar17;
  byte bVar18;
  ulong unaff_RBX;
  code *pcVar19;
  code *pcVar20;
  long ****pppplVar21;
  long ****unaff_R12;
  long ****unaff_R13;
  long lVar22;
  long ****pppplVar23;
  long ****pppplVar24;
  long in_FS_OFFSET;
  uint uStack_2a8;
  uint uStack_2a4;
  long lStack_2a0;
  long ***ppplStack_298;
  long ***ppplStack_290;
  long ***ppplStack_288;
  long ***ppplStack_280;
  long ***ppplStack_278;
  undefined *puStack_270;
  ulong uStack_260;
  undefined8 uStack_258;
  long ***ppplStack_250;
  long ***ppplStack_248;
  undefined4 uStack_23c;
  byte bStack_238;
  undefined7 uStack_237;
  ulong uStack_230;
  undefined7 *puStack_228;
  undefined *puStack_220;
  undefined8 uStack_218;
  ulong uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  ulong uStack_1e8;
  undefined8 uStack_1e0;
  ulong uStack_1d8;
  undefined8 uStack_1d0;
  ulong uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  long **pplStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 auStack_108 [8];
  long ***ppplStack_100;
  long ***ppplStack_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  long lStack_b8;
  long ***ppplStack_b0;
  undefined *apuStack_88 [2];
  long ***ppplStack_78;
  long ***ppplStack_70;
  long ***ppplStack_68;
  long lStack_60;
  ulong uStack_58;
  undefined *apuStack_40 [2];
  long **pplStack_30;
  ulong uStack_28;
  long ***ppplStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_28 = 0;
  ppplStack_20 = (long ***)0x0;
  pcVar19 = 
  _ZN4absl12lts_2026052619str_format_internal17FormatRawSinkImpl5FlushINS1_11FILERawSinkEEEvPvNSt3__117basic_string_viewIcNS6_11char_traitsIcEEEE
  ;
  pppplVar15 = (long ****)&pplStack_30;
  apuStack_40[0] = &UNK_004ec97d;
  pplStack_30 = (long **)param_1;
  cVar4 = _ZN4absl12lts_2026052619str_format_internal13FormatUntypedENS1_17FormatRawSinkImplENS1_21UntypedFormatSpecImplENS0_4SpanIKNS1_13FormatArgImplEEE
                    (pppplVar15,
                     _ZN4absl12lts_2026052619str_format_internal17FormatRawSinkImpl5FlushINS1_11FILERawSinkEEEvPvNSt3__117basic_string_viewIcNS6_11char_traitsIcEEEE
                     ,param_2,param_3,param_4,param_5);
  if (cVar4 == '\0') {
    apuStack_40[0] = &UNK_004ec996;
    puVar8 = (undefined4 *)func_0x0099bce0();
    *puVar8 = 0x16;
code_r0x004ec99c:
    pppplVar24 = (long ****)0xffffffff;
  }
  else {
    iVar1 = (int)uStack_28;
    unaff_RBX = uStack_28 & 0xffffffff;
    if ((int)uStack_28 != 0) {
      apuStack_40[0] = &UNK_004ec98d;
      piVar7 = (int *)func_0x0099bce0();
      *piVar7 = iVar1;
      goto code_r0x004ec99c;
    }
    pppplVar24 = (long ****)ppplStack_20;
    if (((ulong)ppplStack_20 & 0xffffffff80000000) != 0) {
      apuStack_40[0] = &UNK_004ec9c8;
      puVar8 = (undefined4 *)func_0x0099bce0();
      *puVar8 = 0x1b;
      goto code_r0x004ec99c;
    }
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_18) {
    return pppplVar24;
  }
  apuStack_40[0] = &UNK_004ec9d5;
  func_0x0099bd00();
  lStack_60 = *(long *)(in_FS_OFFSET + 0x28);
  pppplVar24 = (long ****)(pcVar19 + -1);
  ppplStack_70 = (long ***)(long ****)0x0;
  if (pcVar19 != (code *)0x0) {
    ppplStack_70 = (long ***)pppplVar24;
  }
  ppplStack_68 = (long ***)0x0;
  pcVar20 = 
  _ZN4absl12lts_2026052619str_format_internal17FormatRawSinkImpl5FlushINS1_13BufferRawSinkEEEvPvNSt3__117basic_string_viewIcNS6_11char_traitsIcEEEE
  ;
  pppplVar13 = &ppplStack_78;
  apuStack_88[0] = &UNK_004eca2d;
  ppplStack_78 = (long ***)pppplVar15;
  uStack_58 = unaff_RBX;
  apuStack_40[0] = &stack0xfffffffffffffff8;
  cVar4 = _ZN4absl12lts_2026052619str_format_internal13FormatUntypedENS1_17FormatRawSinkImplENS1_21UntypedFormatSpecImplENS0_4SpanIKNS1_13FormatArgImplEEE
                    ();
  if (cVar4 == '\0') {
    apuStack_88[0] = &UNK_004eca4d;
    puVar8 = (undefined4 *)func_0x0099bce0();
    *puVar8 = 0x16;
    pppplVar23 = (long ****)0xffffffff;
  }
  else {
    pppplVar23 = (long ****)ppplStack_68;
    if (pcVar19 != (code *)0x0) {
      if (ppplStack_68 <= pppplVar24) {
        pppplVar24 = (long ****)ppplStack_68;
      }
      *(undefined1 *)((long)pppplVar15 + (long)pppplVar24) = 0;
    }
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_60) {
    return pppplVar23;
  }
  apuStack_88[0] = &UNK_004eca77;
  func_0x0099bd00();
  lStack_b8 = *(long *)(in_FS_OFFSET + 0x28);
  pppplVar23 = (long ****)((long)*(int *)pcVar20 + -1);
  pppplVar21 = (long ****)pcVar20;
  pppplVar11 = pppplVar13;
  ppplStack_b0 = (long ***)pppplVar15;
  apuStack_88[0] = (undefined *)apuStack_40;
  if (pppplVar13[2] <= pppplVar23) goto code_r0x004ecb8a;
  pppplVar15 = (long ****)pppplVar13[1];
  if (*(char *)((long)pcVar20 + 0xc) == '\0') {
    unaff_R12 = (long ****)0xffffffff;
    uStack_23c = 0;
    ppplStack_250 = (long ***)0xffffffff;
    apuStack_88[0] = (undefined *)apuStack_40;
code_r0x004ecbb4:
    pppplVar15 = pppplVar15 + (long)pppplVar23 * 2;
    uStack_260 = (ulong)*(byte *)((long)pcVar20 + 0xe);
    puStack_220 = &UNK_0017ba3a;
    uStack_218 = 2;
    uStack_1a8 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_168 = 0;
    uStack_160 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    uStack_188 = 0;
    uStack_180 = 0;
    uStack_198 = 0;
    uStack_190 = 0;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uStack_1c8 = 0;
    uStack_1c0 = 0;
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1e8 = 0;
    uStack_1e0 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    uStack_208 = 0;
    uStack_200 = 0;
    pppplVar23 = (long ****)
                 (_ZTVNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE + 0x40);
    uStack_210 = 0x9ba390;
    pplStack_1a0 = (long **)0x9ba3b8;
    puStack_270 = &UNK_004ecca8;
    ppplStack_248 = (long ***)pppplVar13;
    _ZNSt3__18ios_base4initEPv(&pplStack_1a0,&uStack_208);
    uStack_118 = 0;
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_110._0_4_ = 0xffffffff;
    uStack_210 = 0x9ba3f8;
    pplStack_1a0 = (long **)0x9ba420;
    unaff_R13 = (long ****)(_ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE + 0x10);
    uStack_208 = 0x9b9bf8;
    puStack_270 = &UNK_004eccf0;
    _ZNSt3__16localeC2Ev(&uStack_200);
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1e8 = 0;
    uStack_1e0 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    uStack_258 = 0x9b9f28;
    uStack_208 = 0x9b9f28;
    uStack_1c8 = 0;
    uStack_1c0 = 0;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uStack_1a8 = CONCAT44(uStack_1a8._4_4_,0x10);
    puStack_270 = &UNK_004ecd45;
    func_0x00348610(&uStack_208);
    puStack_270 = &UNK_004ecd5d;
    plVar9 = (long *)func_0x0032eb30(&uStack_210,&UNK_00189a6f,1);
    ppplStack_f8 = *pppplVar15;
    uStack_f0 = *(undefined4 *)(pppplVar15 + 1);
    uStack_ec = *(undefined4 *)((long)pppplVar15 + 0xc);
    auStack_108 = (undefined1  [8])&puStack_220;
    ppplStack_100 = (long ***)0x2;
    puStack_270 = &UNK_004ecd9f;
    cVar4 = _ZN4absl12lts_2026052619str_format_internal13FormatUntypedENS1_17FormatRawSinkImplENS1_21UntypedFormatSpecImplENS0_4SpanIKNS1_13FormatArgImplEEE
                      (plVar9,
                       _ZN4absl12lts_2026052619str_format_internal17FormatRawSinkImpl5FlushINSt3__113basic_ostreamIcNS4_11char_traitsIcEEEEEEvPvNS4_17basic_string_viewIcS7_EE
                       ,&UNK_0017ba3a,2,&ppplStack_f8,1);
    if (cVar4 == '\0') {
      puStack_270 = &UNK_004ecdbd;
      _ZNSt3__18ios_base5clearEj
                ((long)plVar9 + *(long *)(*plVar9 + -0x18),
                 *(uint *)((long)plVar9 + *(long *)(*plVar9 + -0x18) + 0x20) | 4);
    }
    puStack_270 = &UNK_004ecdd1;
    uVar10 = func_0x0032eb30(plVar9,&UNK_00173d53,1);
    puStack_270 = &UNK_004ecde7;
    _ZN4absl12lts_2026052619str_format_internal13FlagsToStringENS1_5FlagsE
              (&bStack_238,(undefined1)uStack_23c);
    uVar14 = (ulong)(bStack_238 >> 1);
    puVar3 = &uStack_237;
    if ((bStack_238 & 1) != 0) {
      uVar14 = uStack_230;
      puVar3 = puStack_228;
    }
    puStack_270 = &UNK_004ece13;
    func_0x0032eb30(uVar10,puVar3,uVar14);
    if ((bStack_238 & 1) != 0) {
      puStack_270 = &UNK_004ece33;
      _ZdaPvSt11align_val_t(puStack_228,CONCAT71(uStack_237,bStack_238) & 0xfffffffffffffffe);
    }
    pppplVar15 = (long ****)ppplStack_250;
    if (((ulong)ppplStack_100 & 1) != 0) {
      puStack_270 = &UNK_004ece51;
      _ZdaPvSt11align_val_t(ppplStack_f8,CONCAT44(uStack_ec,uStack_f0) << 4);
    }
    if (-1 < (int)unaff_R12) {
      puStack_270 = &UNK_004ece65;
      _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(&uStack_210,unaff_R12);
    }
    if (-1 < (int)pppplVar15) {
      puStack_270 = &UNK_004ece81;
      uVar10 = func_0x0032eb30(&uStack_210,&UNK_00162aea,1);
      puStack_270 = &UNK_004ece8b;
      _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(uVar10,(ulong)pppplVar15 & 0xffffffff);
    }
    uVar5 = 0x3f;
    if ((byte)uStack_260 < 0x13) {
      uVar5 = (&UNK_002048f0)[uStack_260];
    }
    auStack_108[0] = uVar5;
    puStack_270 = &UNK_004ecebc;
    pppplVar11 = (long ****)func_0x0032eb30(&uStack_210,auStack_108,1);
    puStack_270 = &UNK_004eced0;
    func_0x0032eb30(pppplVar11,&UNK_00159b2b,1);
    if ((uStack_1a8 & 0x10) == 0) {
      pppplVar21 = (long ****)0x0;
      pppplVar24 = (long ****)0x0;
      if ((uStack_1a8 & 8) != 0) {
        puVar12 = &uStack_1f8;
        uVar14 = uStack_1e8;
        goto code_r0x004ecf1a;
      }
code_r0x004ecf30:
      auStack_108[0] = (char)pppplVar24 * '\x02';
      pppplVar15 = (long ****)(auStack_108 + 1);
code_r0x004ecf7c:
      puStack_270 = &UNK_004ecf87;
      func_0x0099bd90(pppplVar15,pppplVar21,pppplVar24);
      *(undefined1 *)((long)pppplVar15 + (long)pppplVar24) = 0;
      bVar18 = auStack_108[0] & 1;
      pppplVar24 = (long ****)(ulong)(auStack_108[0] >> 1);
      unaff_R12 = (long ****)(auStack_108 + 1);
      if (((ulong)auStack_108 & 1) != 0) {
        pppplVar24 = (long ****)ppplStack_100;
        unaff_R12 = (long ****)ppplStack_f8;
      }
      if (pppplVar24 != (long ****)0x0) {
        ppplVar16 = (long ***)*ppplStack_248;
        ppplVar16[2] = (long **)((long)ppplVar16[2] + (long)pppplVar24);
        pplVar2 = ppplVar16[3];
        if (pppplVar24 < (long ****)((long)ppplVar16 + (0x420 - (long)pplVar2))) {
          puStack_270 = &UNK_004ecfe0;
          func_0x0099bda0(pplVar2,unaff_R12,pppplVar24);
          ppplVar16[3] = (long **)((long)ppplVar16[3] + (long)pppplVar24);
        }
        else {
          ppplVar17 = ppplVar16 + 4;
          puStack_270 = &UNK_004ecff8;
          (*(code *)ppplVar16[1])(*ppplVar16,ppplVar17,(long)pplVar2 - (long)ppplVar17);
          ppplVar16[3] = (long **)ppplVar17;
          puStack_270 = &UNK_004ed00a;
          (*(code *)ppplVar16[1])(*ppplVar16,unaff_R12,pppplVar24);
          bVar18 = auStack_108[0] & 1;
        }
      }
      if (bVar18 != 0) {
        puStack_270 = &UNK_004ed030;
        _ZdaPvSt11align_val_t(ppplStack_f8,(ulong)auStack_108 & 0xfffffffffffffffe);
      }
      pppplVar15 = (long ****)&pplStack_1a0;
      uStack_210 = 0x9ba3f8;
      pplStack_1a0 = (long **)0x9ba420;
      uStack_208 = uStack_258;
      if ((uStack_1c8 & 1) != 0) {
        puStack_270 = &UNK_004ed07f;
        _ZdaPvSt11align_val_t(uStack_1b8,uStack_1c8 & 0xfffffffffffffffe);
      }
      uStack_208 = 0x9b9bf8;
      puStack_270 = &UNK_004ed092;
      _ZNSt3__16localeD2Ev(&uStack_200);
      pppplVar23 = (long ****)
                   (_ZTTNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE + 8);
      puStack_270 = &UNK_004ed0a5;
      pppplVar21 = pppplVar23;
      _ZNSt3__18ios_base4InitD1Ev(&uStack_210);
      puStack_270 = &UNK_004ed0ad;
      pppplVar11 = pppplVar15;
      _ZNSt3__19basic_iosIwNS_11char_traitsIwEEED1Ev();
      pppplVar13 = (long ****)0x1;
      goto code_r0x004ed0af;
    }
    if (uStack_1b0 < uStack_1d8) {
      uStack_1b0 = uStack_1d8;
    }
    puVar12 = &uStack_1e0;
    uVar14 = uStack_1b0;
code_r0x004ecf1a:
    pppplVar21 = (long ****)*puVar12;
    pppplVar24 = (long ****)(uVar14 - (long)pppplVar21);
    if (pppplVar24 < (long ****)0xfffffffffffffff7) {
      if (pppplVar24 < (long ****)0x17) goto code_r0x004ecf30;
      lVar22 = 0x1a;
      if (((ulong)pppplVar24 | 7) != 0x17) {
        lVar22 = ((ulong)pppplVar24 | 7) + 1;
      }
      puStack_270 = &UNK_004ecf64;
      pppplVar15 = (long ****)_Znwm(lVar22);
      auStack_108 = (undefined1  [8])(lVar22 + 1);
      ppplStack_100 = (long ***)pppplVar24;
      ppplStack_f8 = (long ***)pppplVar15;
      goto code_r0x004ecf7c;
    }
  }
  else {
    uVar6 = *(uint *)((long)pcVar20 + 4);
    uStack_210 = CONCAT44(uStack_210._4_4_,uVar6);
    apuStack_88[0] = (undefined *)apuStack_40;
    if ((int)uVar6 < -1) {
      unaff_R12 = (long ****)(ulong)~uVar6;
      apuStack_88[0] = (undefined *)apuStack_40;
      if (unaff_R12 <= pppplVar13[2]) {
        pppplVar11 = (long ****)(pppplVar15 + -2)[(long)unaff_R12 * 2];
        pppplVar21 = (long ****)0x90013;
        puStack_270 = &UNK_004ecb01;
        apuStack_88[0] = (undefined *)apuStack_40;
        cVar4 = (*(code *)(pppplVar15 + -1)[(long)unaff_R12 * 2])(pppplVar11,0x90013,0,&uStack_210);
        unaff_R12 = (long ****)((long)unaff_R12 * 0x10);
        unaff_R13 = pppplVar13;
        pppplVar24 = (long ****)pcVar20;
        if (cVar4 != '\0') {
          uVar6 = (uint)uStack_210;
          if (-1 < (int)(uint)uStack_210) goto code_r0x004ecb1f;
          uVar6 = 0x80000001;
          if (0x80000001 < (uint)uStack_210) {
            uVar6 = (uint)uStack_210;
          }
          uVar6 = -uVar6;
          uStack_210 = CONCAT44(uStack_210._4_4_,uVar6);
          unaff_R13 = (long ****)CONCAT71((int7)((ulong)pppplVar13 >> 8),1);
          goto code_r0x004ecb22;
        }
      }
    }
    else {
code_r0x004ecb1f:
      unaff_R13 = (long ****)0x0;
code_r0x004ecb22:
      unaff_R12 = (long ****)(ulong)uVar6;
      uVar6 = *(uint *)((long)pcVar20 + 8);
      auStack_108._0_4_ = uVar6;
      if (-2 < (int)uVar6) {
code_r0x004ecb6f:
        ppplStack_250 = (long ***)(ulong)uVar6;
        uStack_23c = (undefined4)
                     CONCAT71((int7)((ulong)unaff_R13 >> 8),
                              (byte)unaff_R13 | *(byte *)((long)pcVar20 + 0xc));
        goto code_r0x004ecbb4;
      }
      ppplVar16 = (long ***)(ulong)~uVar6;
      pppplVar21 = (long ****)pcVar20;
      pppplVar11 = pppplVar13;
      if (ppplVar16 <= pppplVar13[2]) {
        pppplVar11 = (long ****)pppplVar13[1][(long)ppplVar16 * 2 + -2];
        pppplVar21 = (long ****)0x90013;
        puStack_270 = &UNK_004ecb5b;
        cVar4 = (*(code *)pppplVar13[1][(long)ppplVar16 * 2 + -1])(pppplVar11,0x90013,0,auStack_108)
        ;
        unaff_R12 = pppplVar13;
        pppplVar24 = (long ****)pcVar20;
        if (cVar4 != '\0') {
          unaff_R12 = (long ****)(uStack_210 & 0xffffffff);
          uVar6 = auStack_108._0_4_;
          goto code_r0x004ecb6f;
        }
      }
    }
code_r0x004ecb8a:
    pppplVar13 = (long ****)0x0;
code_r0x004ed0af:
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_b8) {
      return pppplVar13;
    }
    puStack_270 = &UNK_004ed0f8;
    func_0x0099bd00();
  }
  puStack_270 = &UNK_004ed0fd;
  func_0x0032e8f0();
  lStack_2a0 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = *(int *)pppplVar21;
  ppplStack_298 = (long ***)pppplVar15;
  ppplStack_290 = (long ***)unaff_R12;
  ppplStack_288 = (long ***)unaff_R13;
  ppplStack_280 = (long ***)pppplVar23;
  ppplStack_278 = (long ***)pppplVar24;
  puStack_270 = (undefined *)apuStack_88;
  if ((long ***)((long)iVar1 + -1) < pppplVar11[2]) {
    ppplVar16 = pppplVar11[1];
    if (*(char *)((long)pppplVar21 + 0xc) == '\0') {
      uVar14 = 0xffffffff00090000;
      uVar6 = 0xffffffff;
      puStack_270 = (undefined *)apuStack_88;
    }
    else {
      uStack_2a4 = *(uint *)((long)pppplVar21 + 4);
      puStack_270 = (undefined *)apuStack_88;
      if ((int)uStack_2a4 < -1) {
        ppplVar17 = (long ***)(ulong)~uStack_2a4;
        puStack_270 = (undefined *)apuStack_88;
        if ((pppplVar11[2] < ppplVar17) ||
           (puStack_270 = (undefined *)apuStack_88,
           cVar4 = (*(code *)ppplVar16[(long)ppplVar17 * 2 + -1])
                             (ppplVar16[(long)ppplVar17 * 2 + -2],0x90013,0,&uStack_2a4),
           cVar4 == '\0')) goto code_r0x004ed204;
        if (-1 < (int)uStack_2a4) goto code_r0x004ed196;
        uVar6 = 0x80000001;
        if (0x80000001 < uStack_2a4) {
          uVar6 = uStack_2a4;
        }
        uStack_2a4 = -uVar6;
        bVar18 = 1;
      }
      else {
code_r0x004ed196:
        bVar18 = 0;
      }
      uStack_2a8 = *(uint *)(pppplVar21 + 1);
      if (((int)uStack_2a8 < -1) &&
         ((ppplVar17 = (long ***)(ulong)~uStack_2a8, pppplVar11[2] < ppplVar17 ||
          (cVar4 = (*(code *)pppplVar11[1][(long)ppplVar17 * 2 + -1])
                             (pppplVar11[1][(long)ppplVar17 * 2 + -2],0x90013,0,&uStack_2a8),
          cVar4 == '\0')))) goto code_r0x004ed204;
      uVar14 = (ulong)(bVar18 | *(byte *)((long)pppplVar21 + 0xc)) << 8 |
               (ulong)*(byte *)((long)pppplVar21 + 0xd) << 0x10 | (ulong)uStack_2a4 << 0x20;
      uVar6 = uStack_2a8;
    }
    pppplVar15 = (long ****)
                 (*(code *)(ppplVar16 + ((long)iVar1 + -1) * 2)[1])
                           (ppplVar16[((long)iVar1 + -1) * 2],
                            *(byte *)((long)pppplVar21 + 0xe) | uVar14,uVar6,*pppplVar11);
  }
  else {
code_r0x004ed204:
    pppplVar15 = (long ****)0x0;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_2a0) {
    return pppplVar15;
  }
  func_0x0099bd00();
  pcVar19 = (code *)swi(3);
  pppplVar15 = (long ****)(*pcVar19)();
  return pppplVar15;
}


