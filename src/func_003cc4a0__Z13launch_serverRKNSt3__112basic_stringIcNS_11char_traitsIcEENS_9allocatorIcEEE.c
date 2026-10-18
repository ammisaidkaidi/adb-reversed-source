// Function: _Z13launch_serverRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPKc
// Address: 003cc4a0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long ** _Z13launch_serverRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPKc
                  (byte *param_1,long param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte *pbVar5;
  byte *pbVar6;
  char cVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong uVar16;
  long lVar17;
  long **pplVar18;
  ulong extraout_RDX;
  ulong uVar19;
  undefined **ppuVar20;
  undefined *puVar21;
  undefined **ppuVar22;
  undefined1 uVar23;
  undefined **ppuVar24;
  byte *pbVar25;
  long **pplVar26;
  ulong unaff_R13;
  long lVar27;
  int iVar28;
  long in_FS_OFFSET;
  bool bVar29;
  int iStack_1e4;
  byte bStack_1e0;
  undefined1 uStack_1df;
  undefined1 uStack_1de;
  undefined1 uStack_1dd;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  long lStack_1d0;
  undefined8 uStack_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  long lStack_1b8;
  byte *pbStack_1a8;
  byte *pbStack_1a0;
  long lStack_198;
  undefined1 auStack_188 [8];
  ulong uStack_180;
  undefined **ppuStack_178;
  long lStack_168;
  long **pplStack_160;
  long **pplStack_158;
  ulong uStack_150;
  undefined **ppuStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined **ppuStack_110;
  long lStack_f8;
  int *piStack_f0;
  ulong uStack_e8;
  undefined *apuStack_e0 [2];
  uint uStack_cc;
  undefined *puStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  int iStack_64;
  long lStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  undefined **ppuStack_48;
  long **pplStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_50 = (long **)0x0;
  apuStack_e0[0] = &UNK_003cc4de;
  lStack_60 = param_2;
  iVar9 = func_0x0099c230(&uStack_50,0x80000);
  pplVar18 = uStack_50;
  uVar15 = _stderr;
  if (iVar9 == 0) {
    iVar28 = (int)uStack_50;
    apuStack_e0[0] = &UNK_003cc4ef;
    piVar11 = (int *)func_0x0099bce0();
    iStack_64 = iVar28;
    uVar10 = uStack_50._4_4_;
    uStack_88 = 0;
    uStack_80 = 0;
    lStack_78 = 0;
    apuStack_e0[0] = &UNK_003cc512;
    _ZN7android4base17GetExecutablePathEv(&uStack_88);
    uStack_a8 = 0;
    uStack_a0 = 0;
    puStack_98 = (undefined *)0x0;
    apuStack_e0[0] = &UNK_003cc536;
    _ZNSt3__19to_stringEi(&uStack_a8,uVar10);
    uStack_cc = uVar10;
    if ((*param_1 & 1) == 0) {
      param_1 = param_1 + 1;
    }
    else {
      param_1 = *(byte **)(param_1 + 0x10);
    }
    apuStack_e0[0] = &UNK_003cc558;
    plVar12 = (long *)_Znwm(0x18);
    plStack_58 = plVar12 + 3;
    *plVar12 = (long)&UNK_0016957c;
    plVar12[1] = (long)&UNK_0015c7ad;
    plVar12[2] = (long)param_1;
    plStack_c0 = plVar12;
    plStack_b0 = plStack_58;
    if (gListenAll == '\x01') {
      apuStack_e0[0] = &UNK_003cc5a4;
      plStack_b8 = plStack_58;
      plStack_c0 = (long *)_Znwm(0x30);
      plStack_b0 = plStack_c0 + 6;
      plStack_c0[3] = (long)&UNK_001722b3;
      plStack_58 = plStack_c0 + 4;
      uVar3 = *(undefined4 *)((long)plVar12 + 4);
      lVar13 = plVar12[1];
      uVar4 = *(undefined4 *)((long)plVar12 + 0xc);
      *(int *)plStack_c0 = (int)*plVar12;
      *(undefined4 *)((long)plStack_c0 + 4) = uVar3;
      *(int *)(plStack_c0 + 1) = (int)lVar13;
      *(undefined4 *)((long)plStack_c0 + 0xc) = uVar4;
      plStack_c0[2] = plVar12[2];
      apuStack_e0[0] = &UNK_003cc5e9;
      plStack_b8 = plStack_58;
      _ZdaPvSt11align_val_t(plVar12,0x18);
      bVar29 = plStack_58 < plStack_b0;
    }
    else {
      bVar29 = false;
    }
    puStack_c8 = &UNK_0018aa12;
    if (bVar29) {
      *plStack_58 = (long)&UNK_0018aa12;
      plStack_58 = plStack_58 + 1;
    }
    else {
      apuStack_e0[0] = &UNK_003cc9d0;
      plStack_b8 = plStack_58;
      uStack_50 = &plStack_58;
      ppuStack_48 = &puStack_c8;
      pplStack_40 = &plStack_c0;
      _ZZNSt3__16vectorIPKN6google8protobuf7MessageENS_9allocatorIS5_EEE12emplace_backIJS5_EEERS5_DpOT_ENKUlvE0_clEv
                (&uStack_50);
    }
    puStack_c8 = &UNK_001574e9;
    if (plStack_58 < plStack_b0) {
      *plStack_58 = (long)&UNK_001574e9;
      plStack_58 = plStack_58 + 1;
    }
    else {
      apuStack_e0[0] = &UNK_003cc9e8;
      plStack_b8 = plStack_58;
      uStack_50 = &plStack_58;
      ppuStack_48 = &puStack_c8;
      pplStack_40 = &plStack_c0;
      _ZZNSt3__16vectorIPKN6google8protobuf7MessageENS_9allocatorIS5_EEE12emplace_backIJS5_EEERS5_DpOT_ENKUlvE0_clEv
                (&uStack_50);
    }
    puStack_c8 = &UNK_0017b6d7;
    if (plStack_58 < plStack_b0) {
      *plStack_58 = (long)&UNK_0017b6d7;
      plStack_58 = plStack_58 + 1;
    }
    else {
      apuStack_e0[0] = &UNK_003cca00;
      plStack_b8 = plStack_58;
      uStack_50 = &plStack_58;
      ppuStack_48 = &puStack_c8;
      pplStack_40 = &plStack_c0;
      _ZZNSt3__16vectorIPKN6google8protobuf7MessageENS_9allocatorIS5_EEE12emplace_backIJS5_EEERS5_DpOT_ENKUlvE0_clEv
                (&uStack_50);
    }
    puStack_c8 = puStack_98;
    if ((uStack_a8 & 1) == 0) {
      puStack_c8 = (undefined *)((long)&uStack_a8 + 1);
    }
    if (plStack_58 < plStack_b0) {
      *plStack_58 = (long)puStack_c8;
      plStack_b8 = plStack_58 + 1;
      uStack_50 = &plStack_58;
      ppuStack_48 = &puStack_c8;
      pplStack_40 = &plStack_c0;
    }
    else {
      apuStack_e0[0] = &UNK_003cca18;
      plStack_b8 = plStack_58;
      uStack_50 = &plStack_58;
      ppuStack_48 = &puStack_c8;
      pplStack_40 = &plStack_c0;
      _ZZNSt3__16vectorIPKN6google8protobuf7MessageENS_9allocatorIS5_EEE12emplace_backIJS5_EEERS5_DpOT_ENKUlvE0_clEv
                (&uStack_50);
      plStack_b8 = plStack_58;
    }
    if (lStack_60 == 0) {
      apuStack_e0[0] = &UNK_003cc787;
      iVar9 = func_0x0099c220(&UNK_0018495c,0);
      if (iVar9 != 0) goto code_r0x003cc79d;
      apuStack_e0[0] = &UNK_003cc9b2;
      func_0x0099bd40(&UNK_0015777e,0x61,1,_stderr);
      pplVar26 = (long **)0xffffffff;
      unaff_R13 = (ulong)uStack_cc;
code_r0x003cc8ec:
      if (plStack_c0 != (long *)0x0) {
        plStack_b8 = plStack_c0;
        apuStack_e0[0] = &UNK_003cc90e;
        _ZdaPvSt11align_val_t(plStack_c0,(long)plStack_b0 - (long)plStack_c0);
      }
      if ((uStack_a8 & 1) != 0) {
        apuStack_e0[0] = &UNK_003cc92e;
        _ZdaPvSt11align_val_t(puStack_98,uStack_a8 & 0xfffffffffffffffe);
      }
      if ((uStack_88 & 1) != 0) {
        apuStack_e0[0] = &UNK_003cc945;
        _ZdaPvSt11align_val_t(lStack_78,uStack_88 & 0xfffffffffffffffe);
      }
      iVar9 = *piVar11;
      if ((int)unaff_R13 != -1) {
        apuStack_e0[0] = &UNK_003cc956;
        func_0x0099bd10(unaff_R13);
      }
      *piVar11 = iVar9;
      if (iVar28 != -1) {
        apuStack_e0[0] = &UNK_003cc967;
        func_0x0099bd10(iVar28);
      }
      goto code_r0x003cc967;
    }
    puStack_c8 = &UNK_00170361;
    if (plStack_b8 < plStack_b0) {
      *plStack_b8 = (long)&UNK_00170361;
      plStack_58 = plStack_b8 + 1;
    }
    else {
      apuStack_e0[0] = &UNK_003cca42;
      plStack_58 = plStack_b8;
      uStack_50 = &plStack_58;
      ppuStack_48 = &puStack_c8;
      pplStack_40 = &plStack_c0;
      _ZZNSt3__16vectorIPKN6google8protobuf7MessageENS_9allocatorIS5_EEE12emplace_backIJS5_EEERS5_DpOT_ENKUlvE0_clEv
                (&uStack_50);
    }
    ppuStack_48 = (undefined **)&lStack_60;
    if (plStack_58 < plStack_b0) {
      *plStack_58 = lStack_60;
      plStack_b8 = plStack_58 + 1;
    }
    else {
      apuStack_e0[0] = &UNK_003cca5a;
      plStack_b8 = plStack_58;
      uStack_50 = &plStack_58;
      pplStack_40 = &plStack_c0;
      _ZZNSt3__16vectorIPKN6google8protobuf7MessageENS_9allocatorIS5_EEE12emplace_backIJS5_EEERS5_DpOT_ENKUlvE0_clEv
                (&uStack_50);
      plStack_b8 = plStack_58;
    }
code_r0x003cc79d:
    puStack_c8 = (undefined *)0x0;
    pplVar26 = &plStack_58;
    plStack_58 = plStack_b8;
    uStack_50 = pplVar26;
    if (plStack_b8 < plStack_b0) {
      *plStack_b8 = 0;
      plStack_b8 = plStack_b8 + 1;
      ppuStack_48 = &puStack_c8;
      pplStack_40 = &plStack_c0;
    }
    else {
      apuStack_e0[0] = &UNK_003cca2d;
      ppuStack_48 = &puStack_c8;
      pplStack_40 = &plStack_c0;
      _ZZNSt3__16vectorIPKN6google8protobuf7MessageENS_9allocatorIS5_EEE12emplace_backIJS5_EEERS5_DpOT_ENKUlvE0_clEv
                (&uStack_50);
      plStack_b8 = plStack_58;
    }
    uVar10 = uStack_cc;
    unaff_R13 = (ulong)uStack_cc;
    apuStack_e0[0] = &UNK_003cc7e3;
    iVar9 = func_0x0099c240();
    if (iVar9 < 0) {
code_r0x003cc8e6:
      pplVar26 = (long **)0xffffffff;
      goto code_r0x003cc8ec;
    }
    if (iVar9 != 0) {
      uStack_50 = (long **)((ulong)uStack_50 & 0xffffffffff000000);
      iVar2 = *piVar11;
      if (uVar10 != 0xffffffff) {
        apuStack_e0[0] = &UNK_003cc80f;
        func_0x0099bd10(uVar10);
      }
      *piVar11 = iVar2;
      do {
        apuStack_e0[0] = &UNK_003cc830;
        lVar13 = func_0x0099be20((ulong)pplVar18 & 0xffffffff,&uStack_50,3);
        iVar2 = *piVar11;
        if (lVar13 != -1) break;
      } while (iVar2 == 4);
      if (iVar28 != -1) {
        apuStack_e0[0] = &UNK_003cc850;
        func_0x0099bd10((ulong)pplVar18 & 0xffffffff);
      }
      *piVar11 = iVar2;
      if ((int)lVar13 < 0) {
        apuStack_e0[0] = &UNK_003cc8d0;
        func_0x0099bd30(_stderr,&UNK_00173efa,iVar2);
      }
      else {
        if (((((int)lVar13 == 3) && ((char)uStack_50 == 'O')) && (uStack_50._1_1_ == 'K')) &&
           (uStack_50._2_1_ == '\n')) {
          pplVar26 = (long **)0x0;
          iVar28 = -1;
          unaff_R13 = 0xffffffff;
          goto code_r0x003cc8ec;
        }
        apuStack_e0[0] = &UNK_003cc8da;
        func_0x003cfc00(iVar9);
      }
      iVar28 = -1;
      unaff_R13 = 0xffffffff;
      goto code_r0x003cc8e6;
    }
  }
  else {
    apuStack_e0[0] = &UNK_003cc891;
    piVar11 = (int *)func_0x0099bce0();
    apuStack_e0[0] = &UNK_003cc8a7;
    func_0x0099bd30(uVar15,&UNK_00180361,*piVar11);
    iVar9 = *piVar11;
    pplVar26 = (long **)0xffffffff;
code_r0x003cc967:
    *piVar11 = iVar9;
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
      return pplVar26;
    }
    apuStack_e0[0] = &UNK_003cca6b;
    func_0x0099bd00();
  }
  apuStack_e0[0] = &UNK_003cca79;
  _ZN7android4base14unique_fd_implINS0_13DefaultCloserEE5resetEi(&iStack_64,0xffffffff);
  apuStack_e0[0] = &UNK_003cca8a;
  func_0x0099bf10(unaff_R13 & 0xffffffff,2,0);
  lVar13 = lStack_78;
  if ((uStack_88 & 1) == 0) {
    lVar13 = (long)&uStack_88 + 1;
  }
  apuStack_e0[0] = &UNK_003ccaa6;
  uVar10 = func_0x0099c250(lVar13,plStack_c0);
  uVar15 = _stderr;
  apuStack_e0[0] = &UNK_003ccaba;
  uVar14 = func_0x0099bd20(*piVar11);
  puVar21 = &UNK_00169580;
  apuStack_e0[0] = &UNK_003ccad1;
  func_0x0099bd30(uVar15,&UNK_00169580,(ulong)uVar10,uVar14);
  apuStack_e0[0] = &UNK_003ccadb;
  func_0x0099bfd0(0x7f);
  lStack_f8 = *(long *)(in_FS_OFFSET + 0x28);
  puStack_130 = &UNK_0099e900;
  puStack_138 = &UNK_003ccb17;
  ppuVar22 = &puStack_130;
  puStack_128 = puVar21;
  ppuStack_110 = &puStack_130;
  piStack_f0 = piVar11;
  uStack_e8 = (ulong)uVar10;
  apuStack_e0[0] = &stack0xfffffffffffffff8;
  uVar10 = _Z22handle_forward_requestPKcNSt3__18functionIFP10atransportPNS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEEEEi
                     ();
  ppuVar20 = ppuStack_110;
  if (ppuStack_110 == &puStack_130) {
    lVar13 = 0x20;
code_r0x003ccb33:
    puStack_138 = &UNK_003ccb39;
    (**(code **)(*ppuStack_110 + lVar13))();
  }
  else {
    lVar13 = 0x28;
    if (ppuStack_110 != (undefined **)0x0) goto code_r0x003ccb33;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_f8) {
    return (long **)(ulong)uVar10;
  }
  puStack_138 = &UNK_003ccb58;
  func_0x0099bd00();
  uStack_140 = uVar15;
  uVar19 = extraout_RDX & 0xffffffff;
  lStack_168 = *(long *)(in_FS_OFFSET + 0x28);
  pplStack_160 = (long **)(ulong)uVar10;
  pplStack_158 = pplVar26;
  uStack_150 = unaff_R13;
  ppuStack_148 = &puStack_130;
  puStack_138 = (undefined *)apuStack_e0;
  iVar9 = func_0x0099bdd0();
  if (iVar9 == 0) {
    auStack_188 = (undefined1  [8])0x0;
    uStack_180 = 0;
    ppuStack_178 = (undefined **)0x0;
    _Z16format_listenersv(auStack_188);
    _Z8SendOkayN7android4base11borrowed_fdE(extraout_RDX & 0xffffffff);
    uVar19 = (ulong)auStack_188 >> 1 & 0x7f;
    ppuVar22 = (undefined **)(auStack_188 + 1);
    if (((ulong)auStack_188 & 1) != 0) {
      uVar19 = uStack_180;
      ppuVar22 = ppuStack_178;
    }
    uVar16 = extraout_RDX & 0xffffffff;
    _Z18SendProtocolStringN7android4base11borrowed_fdENSt3__117basic_string_viewIcNS2_11char_traitsIcEEEE
              (uVar16,ppuVar22,uVar19);
    uVar23 = (undefined1)uVar16;
    goto code_r0x003ccc25;
  }
  iVar9 = func_0x0099bdd0(ppuVar20,&UNK_00186199);
  if (iVar9 == 0) {
    _Z20remove_all_listenersv();
    _Z8SendOkayN7android4base11borrowed_fdE(uVar19);
    _Z8SendOkayN7android4base11borrowed_fdE();
    uVar23 = (undefined1)uVar19;
    goto code_r0x003cccca;
  }
  iVar9 = func_0x0099bed0(ppuVar20,&UNK_0015ae2b,8);
  if (iVar9 != 0) {
    ppuVar24 = ppuVar20;
    iVar9 = func_0x0099bed0(ppuVar20,&UNK_0015f7ad,0xc);
    uVar23 = SUB81(ppuVar24,0);
    if (iVar9 == 0) goto code_r0x003ccc45;
    pplVar18 = (long **)0x0;
    goto code_r0x003ccccc;
  }
code_r0x003ccc45:
  auStack_188 = (undefined1  [8])0x0;
  uStack_180 = 0;
  ppuStack_178 = (undefined **)0x0;
  pbStack_1a8 = auStack_188;
  plVar12 = (long *)ppuVar22[4];
  uVar23 = 0;
  if (plVar12 == (long *)0x0) goto code_r0x003cd11f;
  lVar13 = (**(code **)(*plVar12 + 0x30))(plVar12,&pbStack_1a8);
  if (lVar13 == 0) {
    uVar19 = (ulong)auStack_188 >> 1 & 0x7f;
    ppuVar22 = (undefined **)(auStack_188 + 1);
    if (((ulong)auStack_188 & 1) != 0) {
      uVar19 = uStack_180;
      ppuVar22 = ppuStack_178;
    }
    uVar16 = extraout_RDX & 0xffffffff;
    _Z8SendFailN7android4base11borrowed_fdENSt3__117basic_string_viewIcNS2_11char_traitsIcEEEE
              (uVar16,ppuVar22,uVar19);
    uVar23 = (undefined1)uVar16;
    goto code_r0x003ccc25;
  }
  uVar15 = func_0x0099bcf0(ppuVar20);
  cVar7 = _ZN7android4base10StartsWithENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_
                    (ppuVar20,uVar15,&UNK_0015f7ad,0xc);
  if (cVar7 == '\0') {
    ppuVar22 = ppuVar20 + 1;
    uVar15 = func_0x0099bcf0(ppuVar22);
    cVar8 = _ZN7android4base10StartsWithENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_
                      (ppuVar22,uVar15,&UNK_001577e0,9);
    ppuVar20 = (undefined **)((long)ppuVar20 + 0x11);
    if (cVar8 == '\0') {
      ppuVar20 = ppuVar22;
    }
  }
  else {
    cVar8 = '\0';
    ppuVar20 = (undefined **)((long)ppuVar20 + 0xc);
  }
  pbStack_1a8 = (byte *)0x0;
  pbStack_1a0 = (byte *)0x0;
  lStack_198 = 0;
  ppuVar22 = ppuVar20;
  uVar16 = func_0x0099bcf0();
  uVar23 = SUB81(ppuVar22,0);
  if (0xfffffffffffffff6 < uVar16) goto code_r0x003cd124;
  if (uVar16 < 0x17) {
    uStack_1c8._0_4_ = CONCAT31(uStack_1c8._1_3_,(char)uVar16 * '\x02');
    lVar17 = (long)&uStack_1c8 + 1;
  }
  else {
    lVar27 = 0x1a;
    if ((uVar16 | 7) != 0x17) {
      lVar27 = (uVar16 | 7) + 1;
    }
    lVar17 = _Znwm(lVar27);
    uStack_1c8 = lVar27 + 1;
    uStack_1c0 = (undefined4)uVar16;
    uStack_1bc = (undefined4)(uVar16 >> 0x20);
    lStack_1b8 = lVar17;
  }
  func_0x0099bda0(lVar17,ppuVar20,uVar16);
  *(undefined1 *)(lVar17 + uVar16) = 0;
  bStack_1e0 = 2;
  uStack_1df = 0x3b;
  uStack_1de = 0;
  _ZN7android4base5SplitERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_
            (&pbStack_1a8,&uStack_1c8,&bStack_1e0);
  if ((bStack_1e0 & 1) != 0) {
    _ZdaPvSt11align_val_t
              (lStack_1d0,
               CONCAT44(uStack_1dc,
                        CONCAT13(uStack_1dd,CONCAT12(uStack_1de,CONCAT11(uStack_1df,bStack_1e0)))) &
               0xfffffffffffffffe);
  }
  if (((uint)uStack_1c8 & 1) != 0) {
    _ZdaPvSt11align_val_t
              (lStack_1b8,CONCAT44(uStack_1c8._4_4_,(uint)uStack_1c8) & 0xfffffffffffffffe);
  }
  if (cVar7 == '\0') {
    if ((long)pbStack_1a0 - (long)pbStack_1a8 == 0x30) {
      if ((*pbStack_1a8 & 1) == 0) {
        uVar16 = (ulong)(*pbStack_1a8 >> 1);
      }
      else {
        uVar16 = *(ulong *)(pbStack_1a8 + 8);
      }
      if (uVar16 != 0) {
        bVar1 = pbStack_1a8[0x18];
        if ((bVar1 & 1) == 0) {
          uVar16 = (ulong)(bVar1 >> 1);
        }
        else {
          uVar16 = *(ulong *)(pbStack_1a8 + 0x20);
        }
        if (uVar16 != 0) {
          if ((bVar1 & 1) == 0) {
            pbVar25 = pbStack_1a8 + 0x19;
          }
          else {
            pbVar25 = *(byte **)(pbStack_1a8 + 0x28);
          }
          if (*pbVar25 != 0x2a) {
            iStack_1e4 = 0;
            iVar9 = _Z16install_listenerRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPKcP10atransportiPiPS5_
                              (pbStack_1a8,pbVar25,lVar13,cVar8,&iStack_1e4,auStack_188);
            goto joined_r0x003cd021;
          }
        }
      }
    }
    puVar21 = &UNK_001705ac;
code_r0x003ccf41:
    _ZN7android4base12StringPrintfEPKcz(&uStack_1c8,puVar21,ppuVar20);
    goto code_r0x003ccf52;
  }
  if ((long)pbStack_1a0 - (long)pbStack_1a8 != 0x18) {
code_r0x003ccea2:
    puVar21 = &UNK_0015fb76;
    goto code_r0x003ccf41;
  }
  if ((*pbStack_1a8 & 1) == 0) {
    uVar16 = (ulong)(*pbStack_1a8 >> 1);
  }
  else {
    uVar16 = *(ulong *)(pbStack_1a8 + 8);
  }
  if (uVar16 == 0) goto code_r0x003ccea2;
  iStack_1e4 = 0;
  if ((*pbStack_1a8 & 1) == 0) {
    pbVar25 = pbStack_1a8 + 1;
  }
  else {
    pbVar25 = *(byte **)(pbStack_1a8 + 0x10);
  }
  iVar9 = _Z15remove_listenerPKcP10atransport(pbVar25,lVar13);
joined_r0x003cd021:
  if (iVar9 == 0) {
    _Z8SendOkayN7android4base11borrowed_fdE(extraout_RDX & 0xffffffff);
    uVar16 = uVar19;
    _Z8SendOkayN7android4base11borrowed_fdE();
    uVar23 = (undefined1)uVar16;
    if (iStack_1e4 != 0) {
      _ZN7android4base12StringPrintfEPKcz(&uStack_1c8,&UNK_0017ba3a);
      bVar29 = ((uint)uStack_1c8 & 1) != 0;
      lVar13 = (long)&uStack_1c8 + 1;
      if (bVar29) {
        lVar13 = lStack_1b8;
      }
      uVar16 = (ulong)((byte)uStack_1c8 >> 1);
      if (bVar29) {
        uVar16 = CONCAT44(uStack_1bc,uStack_1c0);
      }
      _Z18SendProtocolStringN7android4base11borrowed_fdENSt3__117basic_string_viewIcNS2_11char_traitsIcEEEE
                (uVar19,lVar13,uVar16);
      uVar23 = (undefined1)uVar19;
      if (((uint)uStack_1c8 & 1) == 0) goto code_r0x003ccf97;
      goto code_r0x003ccf83;
    }
    goto code_r0x003ccf97;
  }
  uStack_1c8._0_4_ = 0;
  uStack_1c8._4_4_ = 0;
  uStack_1c0 = 0;
  uStack_1bc = 0;
  lStack_1b8 = 0;
  switch(iVar9) {
  case -4:
    puVar21 = &UNK_00165ee4;
    goto code_r0x003cd0f5;
  case -3:
    _ZN7android4base12StringPrintfEPKcz(&bStack_1e0,&UNK_001895c5);
    goto code_r0x003cd0fc;
  case -2:
    ppuVar20 = ppuStack_178;
    if (((ulong)auStack_188 & 1) == 0) {
      ppuVar20 = (undefined **)(auStack_188 + 1);
    }
    puVar21 = &UNK_00181a7e;
code_r0x003cd0f5:
    _ZN7android4base12StringPrintfEPKcz(&bStack_1e0,puVar21,ppuVar20);
code_r0x003cd0fc:
    lStack_1b8 = lStack_1d0;
    uStack_1c8._0_4_ = CONCAT13(uStack_1dd,CONCAT12(uStack_1de,CONCAT11(uStack_1df,bStack_1e0)));
    uStack_1c8._4_4_ = uStack_1dc;
    uStack_1c0 = uStack_1d8;
    uStack_1bc = uStack_1d4;
    break;
  case -1:
    uStack_1c8._0_4_ = 0x746e691c;
    uStack_1c8._4_4_ = 0x616e7265;
    uStack_1c0 = 0x7265206c;
    uStack_1bc = 0x726f72;
  }
code_r0x003ccf52:
  bVar29 = ((uint)uStack_1c8 & 1) != 0;
  lVar13 = (long)&uStack_1c8 + 1;
  if (bVar29) {
    lVar13 = lStack_1b8;
  }
  uVar19 = (ulong)((byte)uStack_1c8 >> 1);
  if (bVar29) {
    uVar19 = CONCAT44(uStack_1bc,uStack_1c0);
  }
  uVar16 = extraout_RDX & 0xffffffff;
  _Z8SendFailN7android4base11borrowed_fdENSt3__117basic_string_viewIcNS2_11char_traitsIcEEEE
            (uVar16,lVar13,uVar19);
  uVar23 = (undefined1)uVar16;
  if (((uint)uStack_1c8 & 1) != 0) {
code_r0x003ccf83:
    lVar13 = lStack_1b8;
    _ZdaPvSt11align_val_t
              (lStack_1b8,CONCAT44(uStack_1c8._4_4_,(uint)uStack_1c8) & 0xfffffffffffffffe);
    uVar23 = (undefined1)lVar13;
  }
code_r0x003ccf97:
  pbVar6 = pbStack_1a8;
  pbVar25 = pbStack_1a8;
  pbVar5 = pbStack_1a0;
  if (pbStack_1a8 != (byte *)0x0) {
    for (; pbStack_1a8 = pbVar25, pbVar6 != pbVar5; pbVar5 = pbVar5 + -0x18) {
      if ((pbVar5[-0x18] & 1) != 0) {
        _ZdaPvSt11align_val_t
                  (*(undefined8 *)(pbVar5 + -8),*(ulong *)(pbVar5 + -0x18) & 0xfffffffffffffffe);
      }
      pbVar25 = pbStack_1a8;
    }
    pbStack_1a0 = pbVar6;
    _ZdaPvSt11align_val_t(pbVar25,lStack_198 - (long)pbVar25);
    uVar23 = SUB81(pbVar25,0);
  }
code_r0x003ccc25:
  if (((ulong)auStack_188 & 1) != 0) {
    ppuVar22 = ppuStack_178;
    _ZdaPvSt11align_val_t(ppuStack_178,(ulong)auStack_188 & 0xfffffffffffffffe);
    uVar23 = SUB81(ppuVar22,0);
  }
code_r0x003cccca:
  pplVar18 = (long **)0x1;
code_r0x003ccccc:
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_168) {
    return pplVar18;
  }
  func_0x0099bd00();
code_r0x003cd11f:
  func_0x00343f00();
code_r0x003cd124:
  pplVar18 = (long **)func_0x0032e8f0();
  uRam0000000000a005f8 = uVar23;
  return pplVar18;
}


