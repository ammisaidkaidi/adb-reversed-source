// Function: _ZN4absl12lts_2026052619str_format_internal8SnprintFEPcmNS1_21UntypedFormatSpecImplENS0_4SpanIKNS1_13FormatArgImplEEE
// Address: 004ec9e0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long **** _ZN4absl12lts_2026052619str_format_internal8SnprintFEPcmNS1_21UntypedFormatSpecImplENS0_4SpanIKNS1_13FormatArgImplEEE
                    (long ****param_1,long param_2)

{
  int iVar1;
  long **pplVar2;
  undefined7 *puVar3;
  char cVar4;
  undefined1 uVar5;
  uint uVar6;
  undefined4 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  long ****pppplVar10;
  undefined8 *puVar11;
  long ****pppplVar12;
  ulong uVar13;
  long ***ppplVar14;
  long ***ppplVar15;
  byte bVar16;
  code *pcVar17;
  long ****pppplVar18;
  long ****unaff_R12;
  long ****unaff_R13;
  long lVar19;
  long ****pppplVar20;
  long ****pppplVar21;
  long in_FS_OFFSET;
  uint uStack_270;
  uint uStack_26c;
  long lStack_268;
  long ***ppplStack_260;
  long ***ppplStack_258;
  long ***ppplStack_250;
  long ***ppplStack_248;
  long ***ppplStack_240;
  undefined *puStack_238;
  ulong uStack_228;
  undefined8 uStack_220;
  long ***ppplStack_218;
  long ***ppplStack_210;
  undefined4 uStack_204;
  byte bStack_200;
  undefined7 uStack_1ff;
  ulong uStack_1f8;
  undefined7 *puStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  ulong uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  ulong uStack_1b0;
  undefined8 uStack_1a8;
  ulong uStack_1a0;
  undefined8 uStack_198;
  ulong uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  long **pplStack_168;
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
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [8];
  long ***ppplStack_c8;
  long ***ppplStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  long lStack_80;
  long ***ppplStack_78;
  undefined *apuStack_50 [2];
  long ***ppplStack_40;
  long ***ppplStack_38;
  long ***ppplStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)(in_FS_OFFSET + 0x28);
  pppplVar21 = (long ****)(param_2 + -1);
  ppplStack_38 = (long ***)(long ****)0x0;
  if (param_2 != 0) {
    ppplStack_38 = (long ***)pppplVar21;
  }
  ppplStack_30 = (long ***)0x0;
  pcVar17 = 
  _ZN4absl12lts_2026052619str_format_internal17FormatRawSinkImpl5FlushINS1_13BufferRawSinkEEEvPvNSt3__117basic_string_viewIcNS6_11char_traitsIcEEEE
  ;
  pppplVar12 = &ppplStack_40;
  apuStack_50[0] = &UNK_004eca2d;
  ppplStack_40 = (long ***)param_1;
  cVar4 = _ZN4absl12lts_2026052619str_format_internal13FormatUntypedENS1_17FormatRawSinkImplENS1_21UntypedFormatSpecImplENS0_4SpanIKNS1_13FormatArgImplEEE
                    ();
  if (cVar4 == '\0') {
    apuStack_50[0] = &UNK_004eca4d;
    puVar7 = (undefined4 *)func_0x0099bce0();
    *puVar7 = 0x16;
    pppplVar20 = (long ****)0xffffffff;
  }
  else {
    pppplVar20 = (long ****)ppplStack_30;
    if (param_2 != 0) {
      if (ppplStack_30 <= pppplVar21) {
        pppplVar21 = (long ****)ppplStack_30;
      }
      *(undefined1 *)((long)param_1 + (long)pppplVar21) = 0;
    }
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_28) {
    return pppplVar20;
  }
  apuStack_50[0] = &UNK_004eca77;
  func_0x0099bd00();
  lStack_80 = *(long *)(in_FS_OFFSET + 0x28);
  pppplVar20 = (long ****)((long)*(int *)pcVar17 + -1);
  pppplVar18 = (long ****)pcVar17;
  pppplVar10 = pppplVar12;
  ppplStack_78 = (long ***)param_1;
  apuStack_50[0] = &stack0xfffffffffffffff8;
  if (pppplVar12[2] <= pppplVar20) goto code_r0x004ecb8a;
  param_1 = (long ****)pppplVar12[1];
  if (*(char *)((long)pcVar17 + 0xc) == '\0') {
    unaff_R12 = (long ****)0xffffffff;
    uStack_204 = 0;
    ppplStack_218 = (long ***)0xffffffff;
    apuStack_50[0] = &stack0xfffffffffffffff8;
code_r0x004ecbb4:
    param_1 = param_1 + (long)pppplVar20 * 2;
    uStack_228 = (ulong)*(byte *)((long)pcVar17 + 0xe);
    puStack_1e8 = &UNK_0017ba3a;
    uStack_1e0 = 2;
    uStack_170 = 0;
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_f0 = 0;
    uStack_e8 = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    uStack_160 = 0;
    uStack_158 = 0;
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_190 = 0;
    uStack_188 = 0;
    uStack_1a0 = 0;
    uStack_198 = 0;
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    uStack_1c0 = 0;
    uStack_1b8 = 0;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    pppplVar20 = (long ****)
                 (_ZTVNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE + 0x40);
    uStack_1d8 = 0x9ba390;
    pplStack_168 = (long **)0x9ba3b8;
    puStack_238 = &UNK_004ecca8;
    ppplStack_210 = (long ***)pppplVar12;
    _ZNSt3__18ios_base4initEPv(&pplStack_168,&uStack_1d0);
    uStack_e0 = 0;
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_d8._0_4_ = 0xffffffff;
    uStack_1d8 = 0x9ba3f8;
    pplStack_168 = (long **)0x9ba420;
    unaff_R13 = (long ****)(_ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE + 0x10);
    uStack_1d0 = 0x9b9bf8;
    puStack_238 = &UNK_004eccf0;
    _ZNSt3__16localeC2Ev(&uStack_1c8);
    uStack_1a0 = 0;
    uStack_198 = 0;
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    uStack_1c0 = 0;
    uStack_1b8 = 0;
    uStack_220 = 0x9b9f28;
    uStack_1d0 = 0x9b9f28;
    uStack_190 = 0;
    uStack_188 = 0;
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = CONCAT44(uStack_170._4_4_,0x10);
    puStack_238 = &UNK_004ecd45;
    func_0x00348610(&uStack_1d0);
    puStack_238 = &UNK_004ecd5d;
    plVar8 = (long *)func_0x0032eb30(&uStack_1d8,&UNK_00189a6f,1);
    ppplStack_c0 = *param_1;
    uStack_b8 = *(undefined4 *)(param_1 + 1);
    uStack_b4 = *(undefined4 *)((long)param_1 + 0xc);
    auStack_d0 = (undefined1  [8])&puStack_1e8;
    ppplStack_c8 = (long ***)0x2;
    puStack_238 = &UNK_004ecd9f;
    cVar4 = _ZN4absl12lts_2026052619str_format_internal13FormatUntypedENS1_17FormatRawSinkImplENS1_21UntypedFormatSpecImplENS0_4SpanIKNS1_13FormatArgImplEEE
                      (plVar8,
                       _ZN4absl12lts_2026052619str_format_internal17FormatRawSinkImpl5FlushINSt3__113basic_ostreamIcNS4_11char_traitsIcEEEEEEvPvNS4_17basic_string_viewIcS7_EE
                       ,&UNK_0017ba3a,2,&ppplStack_c0,1);
    if (cVar4 == '\0') {
      puStack_238 = &UNK_004ecdbd;
      _ZNSt3__18ios_base5clearEj
                ((long)plVar8 + *(long *)(*plVar8 + -0x18),
                 *(uint *)((long)plVar8 + *(long *)(*plVar8 + -0x18) + 0x20) | 4);
    }
    puStack_238 = &UNK_004ecdd1;
    uVar9 = func_0x0032eb30(plVar8,&UNK_00173d53,1);
    puStack_238 = &UNK_004ecde7;
    _ZN4absl12lts_2026052619str_format_internal13FlagsToStringENS1_5FlagsE
              (&bStack_200,(undefined1)uStack_204);
    uVar13 = (ulong)(bStack_200 >> 1);
    puVar3 = &uStack_1ff;
    if ((bStack_200 & 1) != 0) {
      uVar13 = uStack_1f8;
      puVar3 = puStack_1f0;
    }
    puStack_238 = &UNK_004ece13;
    func_0x0032eb30(uVar9,puVar3,uVar13);
    if ((bStack_200 & 1) != 0) {
      puStack_238 = &UNK_004ece33;
      _ZdaPvSt11align_val_t(puStack_1f0,CONCAT71(uStack_1ff,bStack_200) & 0xfffffffffffffffe);
    }
    param_1 = (long ****)ppplStack_218;
    if (((ulong)ppplStack_c8 & 1) != 0) {
      puStack_238 = &UNK_004ece51;
      _ZdaPvSt11align_val_t(ppplStack_c0,CONCAT44(uStack_b4,uStack_b8) << 4);
    }
    if (-1 < (int)unaff_R12) {
      puStack_238 = &UNK_004ece65;
      _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(&uStack_1d8,unaff_R12);
    }
    if (-1 < (int)param_1) {
      puStack_238 = &UNK_004ece81;
      uVar9 = func_0x0032eb30(&uStack_1d8,&UNK_00162aea,1);
      puStack_238 = &UNK_004ece8b;
      _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(uVar9,(ulong)param_1 & 0xffffffff);
    }
    uVar5 = 0x3f;
    if ((byte)uStack_228 < 0x13) {
      uVar5 = (&UNK_002048f0)[uStack_228];
    }
    auStack_d0[0] = uVar5;
    puStack_238 = &UNK_004ecebc;
    pppplVar10 = (long ****)func_0x0032eb30(&uStack_1d8,auStack_d0,1);
    puStack_238 = &UNK_004eced0;
    func_0x0032eb30(pppplVar10,&UNK_00159b2b,1);
    if ((uStack_170 & 0x10) == 0) {
      pppplVar18 = (long ****)0x0;
      pppplVar21 = (long ****)0x0;
      if ((uStack_170 & 8) != 0) {
        puVar11 = &uStack_1c0;
        uVar13 = uStack_1b0;
        goto code_r0x004ecf1a;
      }
code_r0x004ecf30:
      auStack_d0[0] = (char)pppplVar21 * '\x02';
      pppplVar12 = (long ****)(auStack_d0 + 1);
code_r0x004ecf7c:
      puStack_238 = &UNK_004ecf87;
      func_0x0099bd90(pppplVar12,pppplVar18,pppplVar21);
      *(undefined1 *)((long)pppplVar12 + (long)pppplVar21) = 0;
      bVar16 = auStack_d0[0] & 1;
      pppplVar21 = (long ****)(ulong)(auStack_d0[0] >> 1);
      unaff_R12 = (long ****)(auStack_d0 + 1);
      if (((ulong)auStack_d0 & 1) != 0) {
        pppplVar21 = (long ****)ppplStack_c8;
        unaff_R12 = (long ****)ppplStack_c0;
      }
      if (pppplVar21 != (long ****)0x0) {
        ppplVar14 = (long ***)*ppplStack_210;
        ppplVar14[2] = (long **)((long)ppplVar14[2] + (long)pppplVar21);
        pplVar2 = ppplVar14[3];
        if (pppplVar21 < (long ****)((long)ppplVar14 + (0x420 - (long)pplVar2))) {
          puStack_238 = &UNK_004ecfe0;
          func_0x0099bda0(pplVar2,unaff_R12,pppplVar21);
          ppplVar14[3] = (long **)((long)ppplVar14[3] + (long)pppplVar21);
        }
        else {
          ppplVar15 = ppplVar14 + 4;
          puStack_238 = &UNK_004ecff8;
          (*(code *)ppplVar14[1])(*ppplVar14,ppplVar15,(long)pplVar2 - (long)ppplVar15);
          ppplVar14[3] = (long **)ppplVar15;
          puStack_238 = &UNK_004ed00a;
          (*(code *)ppplVar14[1])(*ppplVar14,unaff_R12,pppplVar21);
          bVar16 = auStack_d0[0] & 1;
        }
      }
      if (bVar16 != 0) {
        puStack_238 = &UNK_004ed030;
        _ZdaPvSt11align_val_t(ppplStack_c0,(ulong)auStack_d0 & 0xfffffffffffffffe);
      }
      param_1 = (long ****)&pplStack_168;
      uStack_1d8 = 0x9ba3f8;
      pplStack_168 = (long **)0x9ba420;
      uStack_1d0 = uStack_220;
      if ((uStack_190 & 1) != 0) {
        puStack_238 = &UNK_004ed07f;
        _ZdaPvSt11align_val_t(uStack_180,uStack_190 & 0xfffffffffffffffe);
      }
      uStack_1d0 = 0x9b9bf8;
      puStack_238 = &UNK_004ed092;
      _ZNSt3__16localeD2Ev(&uStack_1c8);
      pppplVar20 = (long ****)
                   (_ZTTNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE + 8);
      puStack_238 = &UNK_004ed0a5;
      pppplVar18 = pppplVar20;
      _ZNSt3__18ios_base4InitD1Ev(&uStack_1d8);
      puStack_238 = &UNK_004ed0ad;
      pppplVar10 = param_1;
      _ZNSt3__19basic_iosIwNS_11char_traitsIwEEED1Ev();
      pppplVar12 = (long ****)0x1;
      goto code_r0x004ed0af;
    }
    if (uStack_178 < uStack_1a0) {
      uStack_178 = uStack_1a0;
    }
    puVar11 = &uStack_1a8;
    uVar13 = uStack_178;
code_r0x004ecf1a:
    pppplVar18 = (long ****)*puVar11;
    pppplVar21 = (long ****)(uVar13 - (long)pppplVar18);
    if (pppplVar21 < (long ****)0xfffffffffffffff7) {
      if (pppplVar21 < (long ****)0x17) goto code_r0x004ecf30;
      lVar19 = 0x1a;
      if (((ulong)pppplVar21 | 7) != 0x17) {
        lVar19 = ((ulong)pppplVar21 | 7) + 1;
      }
      puStack_238 = &UNK_004ecf64;
      pppplVar12 = (long ****)_Znwm(lVar19);
      auStack_d0 = (undefined1  [8])(lVar19 + 1);
      ppplStack_c8 = (long ***)pppplVar21;
      ppplStack_c0 = (long ***)pppplVar12;
      goto code_r0x004ecf7c;
    }
  }
  else {
    uVar6 = *(uint *)((long)pcVar17 + 4);
    uStack_1d8 = CONCAT44(uStack_1d8._4_4_,uVar6);
    apuStack_50[0] = &stack0xfffffffffffffff8;
    if ((int)uVar6 < -1) {
      unaff_R12 = (long ****)(ulong)~uVar6;
      apuStack_50[0] = &stack0xfffffffffffffff8;
      if (unaff_R12 <= pppplVar12[2]) {
        pppplVar10 = (long ****)(param_1 + -2)[(long)unaff_R12 * 2];
        pppplVar18 = (long ****)0x90013;
        puStack_238 = &UNK_004ecb01;
        apuStack_50[0] = &stack0xfffffffffffffff8;
        cVar4 = (*(code *)(param_1 + -1)[(long)unaff_R12 * 2])(pppplVar10,0x90013,0,&uStack_1d8);
        unaff_R12 = (long ****)((long)unaff_R12 * 0x10);
        unaff_R13 = pppplVar12;
        pppplVar21 = (long ****)pcVar17;
        if (cVar4 != '\0') {
          uVar6 = (uint)uStack_1d8;
          if (-1 < (int)(uint)uStack_1d8) goto code_r0x004ecb1f;
          uVar6 = 0x80000001;
          if (0x80000001 < (uint)uStack_1d8) {
            uVar6 = (uint)uStack_1d8;
          }
          uVar6 = -uVar6;
          uStack_1d8 = CONCAT44(uStack_1d8._4_4_,uVar6);
          unaff_R13 = (long ****)CONCAT71((int7)((ulong)pppplVar12 >> 8),1);
          goto code_r0x004ecb22;
        }
      }
    }
    else {
code_r0x004ecb1f:
      unaff_R13 = (long ****)0x0;
code_r0x004ecb22:
      unaff_R12 = (long ****)(ulong)uVar6;
      uVar6 = *(uint *)((long)pcVar17 + 8);
      auStack_d0._0_4_ = uVar6;
      if (-2 < (int)uVar6) {
code_r0x004ecb6f:
        ppplStack_218 = (long ***)(ulong)uVar6;
        uStack_204 = (undefined4)
                     CONCAT71((int7)((ulong)unaff_R13 >> 8),
                              (byte)unaff_R13 | *(byte *)((long)pcVar17 + 0xc));
        goto code_r0x004ecbb4;
      }
      ppplVar14 = (long ***)(ulong)~uVar6;
      pppplVar18 = (long ****)pcVar17;
      pppplVar10 = pppplVar12;
      if (ppplVar14 <= pppplVar12[2]) {
        pppplVar10 = (long ****)pppplVar12[1][(long)ppplVar14 * 2 + -2];
        pppplVar18 = (long ****)0x90013;
        puStack_238 = &UNK_004ecb5b;
        cVar4 = (*(code *)pppplVar12[1][(long)ppplVar14 * 2 + -1])(pppplVar10,0x90013,0,auStack_d0);
        unaff_R12 = pppplVar12;
        pppplVar21 = (long ****)pcVar17;
        if (cVar4 != '\0') {
          unaff_R12 = (long ****)(uStack_1d8 & 0xffffffff);
          uVar6 = auStack_d0._0_4_;
          goto code_r0x004ecb6f;
        }
      }
    }
code_r0x004ecb8a:
    pppplVar12 = (long ****)0x0;
code_r0x004ed0af:
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_80) {
      return pppplVar12;
    }
    puStack_238 = &UNK_004ed0f8;
    func_0x0099bd00();
  }
  puStack_238 = &UNK_004ed0fd;
  func_0x0032e8f0();
  lStack_268 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = *(int *)pppplVar18;
  ppplStack_260 = (long ***)param_1;
  ppplStack_258 = (long ***)unaff_R12;
  ppplStack_250 = (long ***)unaff_R13;
  ppplStack_248 = (long ***)pppplVar20;
  ppplStack_240 = (long ***)pppplVar21;
  puStack_238 = (undefined *)apuStack_50;
  if ((long ***)((long)iVar1 + -1) < pppplVar10[2]) {
    ppplVar14 = pppplVar10[1];
    if (*(char *)((long)pppplVar18 + 0xc) == '\0') {
      uVar13 = 0xffffffff00090000;
      uVar6 = 0xffffffff;
      puStack_238 = (undefined *)apuStack_50;
    }
    else {
      uStack_26c = *(uint *)((long)pppplVar18 + 4);
      puStack_238 = (undefined *)apuStack_50;
      if ((int)uStack_26c < -1) {
        ppplVar15 = (long ***)(ulong)~uStack_26c;
        puStack_238 = (undefined *)apuStack_50;
        if ((pppplVar10[2] < ppplVar15) ||
           (puStack_238 = (undefined *)apuStack_50,
           cVar4 = (*(code *)ppplVar14[(long)ppplVar15 * 2 + -1])
                             (ppplVar14[(long)ppplVar15 * 2 + -2],0x90013,0,&uStack_26c),
           cVar4 == '\0')) goto code_r0x004ed204;
        if (-1 < (int)uStack_26c) goto code_r0x004ed196;
        uVar6 = 0x80000001;
        if (0x80000001 < uStack_26c) {
          uVar6 = uStack_26c;
        }
        uStack_26c = -uVar6;
        bVar16 = 1;
      }
      else {
code_r0x004ed196:
        bVar16 = 0;
      }
      uStack_270 = *(uint *)(pppplVar18 + 1);
      if (((int)uStack_270 < -1) &&
         ((ppplVar15 = (long ***)(ulong)~uStack_270, pppplVar10[2] < ppplVar15 ||
          (cVar4 = (*(code *)pppplVar10[1][(long)ppplVar15 * 2 + -1])
                             (pppplVar10[1][(long)ppplVar15 * 2 + -2],0x90013,0,&uStack_270),
          cVar4 == '\0')))) goto code_r0x004ed204;
      uVar13 = (ulong)(bVar16 | *(byte *)((long)pppplVar18 + 0xc)) << 8 |
               (ulong)*(byte *)((long)pppplVar18 + 0xd) << 0x10 | (ulong)uStack_26c << 0x20;
      uVar6 = uStack_270;
    }
    pppplVar21 = (long ****)
                 (*(code *)(ppplVar14 + ((long)iVar1 + -1) * 2)[1])
                           (ppplVar14[((long)iVar1 + -1) * 2],
                            *(byte *)((long)pppplVar18 + 0xe) | uVar13,uVar6,*pppplVar10);
  }
  else {
code_r0x004ed204:
    pppplVar21 = (long ****)0x0;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_268) {
    return pppplVar21;
  }
  func_0x0099bd00();
  pcVar17 = (code *)swi(3);
  pppplVar21 = (long ****)(*pcVar17)();
  return pppplVar21;
}


