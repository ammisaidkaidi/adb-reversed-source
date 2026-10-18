// Function: _ZN3adb3tls27ParseEncodedKeyFromCAIssuerEP12X509_name_st
// Address: 004295f0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Possible PIC construction at 0x00429630: Changing call to branch */
/* WARNING: Possible PIC construction at 0x004296d2: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00429635) */
/* WARNING: Removing unreachable block (ram,0x00429652) */
/* WARNING: Removing unreachable block (ram,0x0042963b) */
/* WARNING: Removing unreachable block (ram,0x0042965b) */
/* WARNING: Removing unreachable block (ram,0x00429646) */
/* WARNING: Removing unreachable block (ram,0x00429669) */
/* WARNING: Removing unreachable block (ram,0x00429675) */
/* WARNING: Removing unreachable block (ram,0x0042966f) */
/* WARNING: Removing unreachable block (ram,0x00429679) */
/* WARNING: Removing unreachable block (ram,0x004296c7) */
/* WARNING: Removing unreachable block (ram,0x00429650) */
/* WARNING: Removing unreachable block (ram,0x00429688) */
/* WARNING: Removing unreachable block (ram,0x004296d7) */
/* WARNING: Removing unreachable block (ram,0x00429695) */
/* WARNING: Removing unreachable block (ram,0x004296dd) */
/* WARNING: Removing unreachable block (ram,0x004296a6) */
/* WARNING: Removing unreachable block (ram,0x00429742) */
/* WARNING: Removing unreachable block (ram,0x004296b9) */

ulong * _ZN3adb3tls27ParseEncodedKeyFromCAIssuerEP12X509_name_st(undefined8 param_1,ulong *param_2)

{
  uint *puVar1;
  ushort uVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined1 uVar5;
  char cVar6;
  int iVar7;
  ulong *puVar8;
  long *plVar9;
  ulong uVar10;
  undefined4 *puVar11;
  undefined8 uVar12;
  uint uVar13;
  long extraout_RDX;
  long extraout_RDX_00;
  ulong *puVar14;
  ulong uVar15;
  ulong *puVar16;
  undefined1 *puVar17;
  ulong *puVar18;
  long lVar19;
  ulong uVar20;
  ulong *puVar21;
  undefined1 *puVar22;
  ulong *unaff_R15;
  ulong *puVar23;
  long in_FS_OFFSET;
  undefined1 auStack_2a0 [8];
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_278;
  undefined8 uStack_270;
  ulong uStack_268;
  long lStack_258;
  ulong *puStack_250;
  ulong uStack_248;
  ulong uStack_240;
  undefined1 *puStack_238;
  ulong *puStack_230;
  undefined *puStack_228;
  ulong *puStack_218;
  ulong uStack_210;
  long lStack_208;
  undefined1 auStack_200 [8];
  undefined8 auStack_1f8 [2];
  ulong uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  ulong auStack_1d0 [10];
  ulong uStack_180;
  ulong auStack_178 [4];
  int aiStack_158 [30];
  long lStack_e0;
  ulong *puStack_d8;
  ulong *puStack_d0;
  ulong *puStack_c8;
  ulong *puStack_c0;
  ulong *puStack_b8;
  code *pcStack_b0;
  ulong *puStack_a8;
  undefined1 auStack_a0 [4];
  undefined4 uStack_9c;
  undefined8 uStack_98;
  ulong *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined1 *puStack_58;
  undefined *puStack_50;
  ulong auStack_48 [5];
  
  auStack_48[4] = *(undefined8 *)(in_FS_OFFSET + 0x28);
  if (param_2 == (ulong *)0x0) {
    unaff_R15 = auStack_48;
    puStack_50 = &UNK_00429705;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (unaff_R15,&UNK_0017d936,0x5a,6,0,0xffffffff);
    puStack_50 = &UNK_0042970d;
    uVar12 = _ZN7android4base10LogMessage6streamEv(unaff_R15);
    puStack_50 = &UNK_00429721;
    uVar12 = func_0x0032eb30(uVar12,&UNK_00163134,0x14);
    puStack_50 = &UNK_00429735;
    func_0x0032eb30(uVar12,&UNK_0015ae05,1);
    puStack_50 = &UNK_0042973d;
    _ZN7android4base10LogMessageD2Ev(unaff_R15);
  }
  auStack_48[2] = 0;
  auStack_48[3] = 0;
  auStack_48[0] = 0;
  auStack_48[1] = 0;
  puVar23 = auStack_48;
  puStack_50 = &UNK_00429635;
  puVar8 = (ulong *)0x11;
  lStack_88 = *(long *)(in_FS_OFFSET + 0x28);
  puVar16 = (ulong *)0x11;
  pcStack_b0 = (code *)&UNK_00429788;
  puVar14 = param_2;
  uStack_80 = param_1;
  puStack_58 = &stack0xfffffffffffffff8;
  iVar7 = X509_NAME_get_text_by_NID(param_2,0x11,0,0xffffffff);
  if (iVar7 < 1) {
    auStack_48[0] = auStack_48[0] & 0xffffffffffffff00;
    auStack_48[3] = auStack_48[3] & 0xffffffffffffff00;
    puVar21 = param_2;
code_r0x00429862:
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_88) {
      return puVar23;
    }
    pcStack_b0 = (code *)&UNK_004298eb;
    func_0x0099bd00();
    puStack_d0 = puVar8;
  }
  else {
    puVar21 = (ulong *)(ulong)(iVar7 + 1);
    pcStack_b0 = (code *)&UNK_0042979a;
    unaff_R15 = (ulong *)_Znwm(puVar21);
    pcStack_b0 = (code *)&UNK_004297aa;
    func_0x0099bdb0(unaff_R15,0,puVar21);
    pcStack_b0 = (code *)&UNK_004297bb;
    puVar16 = puVar8;
    iVar7 = X509_NAME_get_text_by_NID(param_2,0x11,unaff_R15,puVar21);
    puVar18 = puVar8;
    if (iVar7 == 0) {
      puVar18 = (ulong *)auStack_a0;
      pcStack_b0 = (code *)&UNK_004298a9;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (puVar18,&UNK_0017d936,0x3f,6,0,0xffffffff);
      pcStack_b0 = (code *)&UNK_004298b1;
      uVar12 = _ZN7android4base10LogMessage6streamEv(puVar18);
      pcStack_b0 = (code *)&UNK_004298c5;
      uVar12 = func_0x0032eb30(uVar12,&UNK_00188078,0x4a);
      puVar16 = (ulong *)&UNK_0015ae05;
      pcStack_b0 = (code *)&UNK_004298d9;
      func_0x0032eb30(uVar12,&UNK_0015ae05,1);
      pcStack_b0 = (code *)&UNK_004298e1;
      _ZN7android4base10LogMessageD2Ev(puVar18);
    }
    pcStack_b0 = (code *)&UNK_004297cb;
    puVar14 = unaff_R15;
    puVar8 = (ulong *)func_0x0099bcf0();
    puStack_d0 = puVar18;
    if (puVar8 < (ulong *)0xfffffffffffffff7) {
      if (puVar8 < (ulong *)0x17) {
        _auStack_a0 = CONCAT71(stack0xffffffffffffff61,(char)puVar8 * '\x02');
        param_2 = (ulong *)(auStack_a0 + 1);
      }
      else {
        lVar19 = 0x1a;
        if (((ulong)puVar8 | 7) != 0x17) {
          lVar19 = ((ulong)puVar8 | 7) + 1;
        }
        pcStack_b0 = (code *)&UNK_0042981a;
        puStack_a8 = puVar23;
        param_2 = (ulong *)_Znwm(lVar19);
        _auStack_a0 = lVar19 + 1;
        puVar23 = puStack_a8;
        uStack_98 = puVar8;
        puStack_90 = param_2;
      }
      pcStack_b0 = (code *)&UNK_0042983e;
      func_0x0099bda0(param_2,unaff_R15,puVar8);
      *(undefined1 *)((long)param_2 + (long)puVar8) = 0;
      *(undefined1 (*) [4])puVar23 = auStack_a0;
      *(undefined4 *)((long)puVar23 + 4) = uStack_9c;
      *(undefined4 *)(puVar23 + 1) = (undefined4)uStack_98;
      *(undefined4 *)((long)puVar23 + 0xc) = uStack_98._4_4_;
      puVar23[2] = (ulong)puStack_90;
      *(undefined1 *)(puVar23 + 3) = 1;
      pcStack_b0 = (code *)&UNK_00429862;
      puVar16 = puVar21;
      puVar14 = unaff_R15;
      _ZdaPvSt11align_val_t();
      goto code_r0x00429862;
    }
  }
  pcStack_b0 = 
  _ZN3adb3tls21SHA256BitsToHexStringENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEE;
  func_0x0032e8f0();
  lStack_e0 = *(long *)(in_FS_OFFSET + 0x28);
  puStack_d8 = puVar23;
  puStack_c8 = param_2;
  puStack_c0 = puVar21;
  puStack_b8 = unaff_R15;
  if (extraout_RDX != 0x20) {
    pcStack_b0 = (code *)&puStack_58;
    do {
      puStack_228 = &UNK_00429d92;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_1f8,&UNK_0017d936,0x69,6,0,0xffffffff);
      puStack_228 = &UNK_00429d9a;
      uVar12 = _ZN7android4base10LogMessage6streamEv(auStack_1f8);
      puStack_228 = &UNK_00429dae;
      uVar12 = func_0x0032eb30(uVar12,&UNK_00165d45,0xe);
      puStack_228 = &UNK_00429dc2;
      uVar12 = func_0x0032eb30(uVar12,&UNK_001725f3,0xd);
      puStack_228 = &UNK_00429dd2;
      uVar12 = func_0x0032eb30(uVar12,&UNK_0015ae05,1);
      puStack_228 = &UNK_00429de6;
      uVar12 = func_0x0032eb30(uVar12,&UNK_0015aef8,2);
      puStack_228 = &UNK_00429df6;
      uVar12 = func_0x0032eb30(uVar12,&UNK_0015ae05,1);
      puStack_228 = &UNK_00429e0a;
      uVar12 = func_0x0032eb30(uVar12,&UNK_00169811,0x17);
      puStack_228 = &UNK_00429e1e;
      uVar12 = func_0x0032eb30(uVar12,&UNK_00159818,0x10);
      puStack_228 = &UNK_00429e29;
      uVar12 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar12,extraout_RDX);
      puStack_228 = &UNK_00429e39;
      uVar12 = func_0x0032eb30(uVar12,&UNK_00164776,0x1a);
      puStack_228 = &UNK_00429e46;
      uVar12 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar12,0x20);
      puStack_228 = &UNK_00429e56;
      func_0x0032eb30(uVar12,&UNK_0017b788,2);
      puStack_228 = &UNK_00429e5e;
      _ZN7android4base10LogMessageD2Ev(auStack_1f8);
    } while( true );
  }
  uStack_180 = 0;
  aiStack_158[0x1a] = 0;
  aiStack_158[0x1b] = 0;
  aiStack_158[0x1c] = 0;
  aiStack_158[0x1d] = 0;
  aiStack_158[0x16] = 0;
  aiStack_158[0x17] = 0;
  aiStack_158[0x18] = 0;
  aiStack_158[0x19] = 0;
  aiStack_158[0x12] = 0;
  aiStack_158[0x13] = 0;
  aiStack_158[0x14] = 0;
  aiStack_158[0x15] = 0;
  aiStack_158[0xe] = 0;
  aiStack_158[0xf] = 0;
  aiStack_158[0x10] = 0;
  aiStack_158[0x11] = 0;
  aiStack_158[10] = 0;
  aiStack_158[0xb] = 0;
  aiStack_158[0xc] = 0;
  aiStack_158[0xd] = 0;
  aiStack_158[6] = 0;
  aiStack_158[7] = 0;
  aiStack_158[8] = 0;
  aiStack_158[9] = 0;
  aiStack_158[2] = 0;
  aiStack_158[3] = 0;
  aiStack_158[4] = 0;
  aiStack_158[5] = 0;
  auStack_178[3] = 0;
  aiStack_158[0] = 0;
  aiStack_158[1] = 0;
  auStack_178[1] = 0;
  auStack_178[2] = 0;
  auStack_1d0[8] = 0;
  auStack_1d0[9] = 0;
  auStack_1d0[6] = 0;
  auStack_1d0[7] = 0;
  auStack_1d0[4] = 0;
  auStack_1d0[5] = 0;
  auStack_1d0[2] = 0;
  auStack_1d0[3] = 0;
  auStack_1d0[0] = 0;
  auStack_1d0[1] = 0;
  uStack_1e0 = 0;
  uStack_1d8 = 0;
  uStack_210 = 0x9ba250;
  uStack_1e8 = 0x9ba228;
  lStack_208 = 0x9ba2c8;
  auStack_1f8[0] = 0x9ba340;
  auStack_178[0] = 0x9ba368;
  auStack_1f8[1] = 0;
  puStack_228 = &UNK_00429a07;
  puStack_218 = puVar14;
  pcStack_b0 = (code *)&puStack_58;
  _ZNSt3__18ios_base4initEPv(auStack_178,&uStack_1e0);
  aiStack_158[0x1a] = 0;
  aiStack_158[0x1b] = 0;
                    /* WARNING: Ignoring partial resolution of indirect */
  aiStack_158[0x1c] = 0xffffffff;
  puVar22 = _ZTTNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE;
  *(undefined8 *)((long)auStack_1f8 + *(long *)(lStack_208 + -0x18)) = 0x9ba318;
  auStack_1f8[0] = 0x9ba200;
  auStack_178[0] = uStack_210;
  uStack_1e8 = 0x9ba228;
  uStack_210 = 0x9b9bf8;
  uStack_1e0 = 0x9b9bf8;
  puStack_228 = &UNK_00429aa0;
  _ZNSt3__16localeC2Ev(&uStack_1d8);
  auStack_1d0[4] = 0;
  auStack_1d0[5] = 0;
  auStack_1d0[2] = 0;
  auStack_1d0[3] = 0;
  auStack_1d0[0] = 0;
  auStack_1d0[1] = 0;
  lStack_208 = 0x9b9f28;
  uStack_1e0 = 0x9b9f28;
  auStack_1d0[6] = 0;
  auStack_1d0[7] = 0;
  auStack_1d0[8] = 0;
  auStack_1d0[9] = 0;
  uStack_180 = CONCAT44(uStack_180._4_4_,0x18);
  puStack_228 = &UNK_00429af5;
  func_0x00348610(&uStack_1e0);
  puVar1 = (uint *)((long)&uStack_1e0 + *(long *)(uStack_1e8 - 0x18));
  *puVar1 = *puVar1 | 0x4000;
  lVar19 = *(long *)(uStack_1e8 - 0x18);
  if (*(int *)((long)aiStack_158 + lVar19) == -1) {
    puStack_228 = &UNK_00429b3d;
    _ZNKSt3__18ios_base6getlocEv(auStack_200,(long)&uStack_1e8 + lVar19);
    puStack_228 = &UNK_00429b4c;
    plVar9 = (long *)_ZNKSt3__16locale9use_facetERNS0_2idE(auStack_200,_ZNSt3__15ctypeIcE2idE);
    puStack_228 = &UNK_00429b5a;
    (**(code **)(*plVar9 + 0x38))(plVar9,0x20);
    puStack_228 = &UNK_00429b62;
    _ZNSt3__16localeD2Ev(auStack_200);
  }
  puVar23 = &uStack_1e8;
  puVar14 = auStack_1d0;
  *(undefined4 *)((long)aiStack_158 + lVar19) = 0x30;
  *(uint *)((long)&uStack_1e0 + *(long *)(uStack_1e8 - 0x18)) =
       *(uint *)((long)&uStack_1e0 + *(long *)(uStack_1e8 - 0x18)) & 0xffffffb5 | 8;
  lVar19 = 0;
  do {
    *(undefined8 *)((long)auStack_1d0 + *(long *)(uStack_1e8 - 0x18)) = 2;
    puVar17 = (undefined1 *)(ulong)*(byte *)((long)puVar16 + lVar19);
    puStack_228 = &UNK_00429bc5;
    puVar8 = puVar23;
    _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEt();
    lVar19 = lVar19 + 1;
  } while (lVar19 != 0x20);
  if ((uStack_180 & 0x10) == 0) {
    uVar15 = 0;
    uVar20 = 0;
    uVar10 = auStack_1d0[2];
    if ((uStack_180 & 8) != 0) goto code_r0x00429c12;
code_r0x00429c28:
    *(char *)puStack_218 = (char)uVar20 * '\x02';
    puVar23 = (ulong *)((long)puStack_218 + 1);
  }
  else {
    if (auStack_1d0[9] < auStack_1d0[4]) {
      auStack_1d0[9] = auStack_1d0[4];
    }
    puVar14 = auStack_1d0 + 3;
    uVar10 = auStack_1d0[9];
code_r0x00429c12:
    uVar15 = *puVar14;
    uVar20 = uVar10 - uVar15;
    if (0xfffffffffffffff6 < uVar20) goto code_r0x00429e68;
    if (uVar20 < 0x17) goto code_r0x00429c28;
    lVar19 = 0x1a;
    if ((uVar20 | 7) != 0x17) {
      lVar19 = (uVar20 | 7) + 1;
    }
    puStack_228 = &UNK_00429c61;
    puVar23 = (ulong *)_Znwm(lVar19);
    *puStack_218 = lVar19 + 1;
    puStack_218[1] = uVar20;
    puStack_218[2] = (ulong)puVar23;
  }
  puVar14 = puStack_218;
  puStack_228 = &UNK_00429c8a;
  func_0x0099bd90(puVar23,uVar15,uVar20);
  *(undefined1 *)((long)puVar23 + uVar20) = 0;
  auStack_1f8[0] = 0x9ba200;
  auStack_178[0] = 0x9ba250;
  uStack_1e8 = 0x9ba228;
  uStack_1e0 = lStack_208;
  if ((auStack_1d0[6] & 1) != 0) {
    puStack_228 = &UNK_00429ce2;
    _ZdaPvSt11align_val_t(auStack_1d0[8],auStack_1d0[6] & 0xfffffffffffffffe);
  }
  uStack_1e0 = uStack_210;
  puStack_228 = &UNK_00429cfc;
  _ZNSt3__16localeD2Ev(&uStack_1d8);
  puVar22 = (undefined1 *)0x9ba268;
  puStack_228 = &UNK_00429d0f;
  puVar17 = puVar22;
  _ZNSt3__18ios_base4InitD1Ev(auStack_1f8);
  puVar8 = auStack_178;
  puStack_228 = &UNK_00429d1b;
  _ZNSt3__19basic_iosIwNS_11char_traitsIwEEED1Ev();
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_e0) {
    return puVar14;
  }
  puStack_228 = &UNK_00429e68;
  func_0x0099bd00();
code_r0x00429e68:
  puStack_228 = &UNK_00429e6d;
  func_0x0032e8f0();
  lStack_258 = *(long *)(in_FS_OFFSET + 0x28);
  puStack_250 = puVar14;
  uStack_248 = uVar15;
  uStack_240 = uVar20;
  puStack_238 = puVar22;
  puStack_230 = puVar23;
  if (extraout_RDX_00 == 0x40) {
    uStack_278 = 0;
    uStack_270 = 0;
    uStack_268 = 0;
    lVar19 = 0;
    puStack_228 = (undefined *)&pcStack_b0;
    do {
      uStack_290 = 0;
      uStack_288 = 0;
      uVar2 = *(ushort *)(puVar17 + lVar19 * 2);
      uStack_298 = (ulong)CONCAT21(uVar2,4);
      if (((9 < (byte)((byte)uVar2 - 0x30)) &&
          ((uVar13 = (byte)uVar2 - 0x41, 0x25 < uVar13 ||
           ((0x3f0000003fU >> ((ulong)uVar13 & 0x3f) & 1) == 0)))) ||
         ((9 < (byte)((char)(uVar2 >> 8) - 0x30U) &&
          ((uVar13 = (uVar2 >> 8) - 0x41, 0x25 < uVar13 ||
           ((0x3f0000003fU >> ((ulong)uVar13 & 0x3f) & 1) == 0)))))) {
        cVar6 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4,0);
        if (cVar6 != '\0') {
          puVar11 = (undefined4 *)func_0x0099bce0();
          uVar3 = *puVar11;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (auStack_2a0,&UNK_0017d936,0x7f,4,0,0xffffffff);
          uVar12 = _ZN7android4base10LogMessage6streamEv(auStack_2a0);
          func_0x0032eb30(uVar12,&UNK_00159829,0x27);
          _ZN7android4base10LogMessageD2Ev(auStack_2a0);
          *puVar11 = uVar3;
        }
        *(undefined1 *)puVar8 = 0;
        *(undefined1 *)(puVar8 + 3) = 0;
        if ((uStack_298 & 1) != 0) {
          _ZdaPvSt11align_val_t(uStack_288,uStack_298 & 0xfffffffffffffffe);
        }
        if ((uStack_278 & 1) != 0) {
          _ZdaPvSt11align_val_t(uStack_268,uStack_278 & 0xfffffffffffffffe);
        }
        goto code_r0x00429ffe;
      }
      uVar5 = _ZNSt3__14stolERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPmi
                        (&uStack_298,0,0x10);
      if ((uStack_278 & 1) == 0) {
        uVar15 = 0x16;
        if ((byte)uStack_278 == 0x2c) {
code_r0x00429f84:
          _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__grow_byEmmmmmm
                    (&uStack_278,uVar15,1,uVar15,uVar15,0,0);
          uVar10 = uVar15;
          goto code_r0x00429fa9;
        }
        uVar10 = (ulong)((byte)uStack_278 >> 1);
        uStack_278 = CONCAT71(uStack_278._1_7_,(byte)uStack_278 + 2);
        uVar15 = (long)&uStack_278 + 1;
      }
      else {
        uVar15 = (uStack_278 & 0xfffffffffffffffe) - 1;
        uVar10 = uStack_270;
        if (uStack_270 == uVar15) goto code_r0x00429f84;
code_r0x00429fa9:
        uStack_270 = uVar10 + 1;
        uVar15 = uStack_268;
      }
      *(undefined1 *)(uVar15 + uVar10) = uVar5;
      *(undefined1 *)(uVar15 + 1 + uVar10) = 0;
      if ((uStack_298 & 1) != 0) {
        _ZdaPvSt11align_val_t(uStack_288);
      }
      lVar19 = lVar19 + 1;
    } while (lVar19 != 0x20);
    puVar8[2] = uStack_268;
    *(undefined4 *)puVar8 = (undefined4)uStack_278;
    *(undefined4 *)((long)puVar8 + 4) = uStack_278._4_4_;
    *(undefined4 *)(puVar8 + 1) = (undefined4)uStack_270;
    *(undefined4 *)((long)puVar8 + 0xc) = uStack_270._4_4_;
    *(undefined1 *)(puVar8 + 3) = 1;
  }
  else {
    *(undefined1 *)puVar8 = 0;
    *(undefined1 *)(puVar8 + 3) = 0;
    puStack_228 = (undefined *)&pcStack_b0;
  }
code_r0x00429ffe:
  if (*(long *)(in_FS_OFFSET + 0x28) != lStack_258) {
    func_0x0099bd00();
    pcVar4 = (code *)swi(3);
    puVar23 = (ulong *)(*pcVar4)();
    return puVar23;
  }
  return puVar8;
}


