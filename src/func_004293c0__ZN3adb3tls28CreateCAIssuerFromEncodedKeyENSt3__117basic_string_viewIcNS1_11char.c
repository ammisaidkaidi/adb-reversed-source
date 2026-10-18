// Function: _ZN3adb3tls28CreateCAIssuerFromEncodedKeyENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEE
// Address: 004293c0
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

ulong * _ZN3adb3tls28CreateCAIssuerFromEncodedKeyENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEE
                  (ulong *param_1,undefined7 *param_2,ulong *param_3)

{
  uint *puVar1;
  ushort uVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined1 uVar5;
  char cVar6;
  int iVar7;
  undefined7 *puVar8;
  ulong *puVar9;
  long *plVar10;
  ulong uVar11;
  undefined4 *puVar12;
  undefined8 uVar13;
  uint uVar14;
  long extraout_RDX;
  long extraout_RDX_00;
  ulong *puVar15;
  ulong uVar16;
  ulong *puVar17;
  ulong *puVar18;
  undefined1 *puVar19;
  undefined7 *puVar20;
  undefined7 *puVar21;
  ulong *puVar22;
  ulong *puVar23;
  long lVar24;
  undefined7 *puVar25;
  ulong uVar26;
  ulong *puVar27;
  undefined1 *puVar28;
  long in_FS_OFFSET;
  undefined1 auStack_308 [8];
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  ulong uStack_2d0;
  long lStack_2c0;
  ulong *puStack_2b8;
  ulong uStack_2b0;
  ulong uStack_2a8;
  undefined1 *puStack_2a0;
  ulong *puStack_298;
  undefined *puStack_290;
  ulong *puStack_280;
  ulong uStack_278;
  long lStack_270;
  undefined1 auStack_268 [8];
  undefined8 auStack_260 [2];
  ulong uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  ulong auStack_238 [10];
  ulong uStack_1e8;
  ulong auStack_1e0 [4];
  int aiStack_1c0 [30];
  long lStack_148;
  ulong *puStack_140;
  ulong *puStack_138;
  ulong *puStack_130;
  ulong *puStack_128;
  ulong *puStack_120;
  code *pcStack_118;
  ulong *puStack_110;
  undefined1 auStack_108 [4];
  undefined4 uStack_104;
  undefined8 uStack_100;
  ulong *puStack_f8;
  long lStack_f0;
  undefined7 *puStack_e8;
  undefined7 *puStack_e0;
  undefined7 *puStack_d8;
  ulong *puStack_d0;
  ulong *puStack_c8;
  undefined1 *puStack_c0;
  undefined *puStack_b8;
  ulong auStack_b0 [5];
  ulong *puStack_88;
  undefined7 *puStack_80;
  ulong *puStack_78;
  undefined *puStack_70;
  undefined4 uStack_68;
  undefined7 uStack_58;
  byte bStack_50;
  undefined7 uStack_4f;
  undefined1 uStack_48;
  undefined7 uStack_47;
  undefined7 *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 == (ulong *)0x0) {
    puStack_70 = &UNK_004294d7;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (&bStack_50,&UNK_0017d936,0x4a,6,0,0xffffffff);
    puStack_70 = &UNK_004294df;
    uVar13 = _ZN7android4base10LogMessage6streamEv(&bStack_50);
    puStack_70 = &UNK_004294f3;
    uVar13 = func_0x0032eb30(uVar13,&UNK_00161626,0x1a);
    puStack_70 = &UNK_00429507;
    func_0x0032eb30(uVar13,&UNK_0015ae05,1);
    puStack_70 = &UNK_0042950f;
    _ZN7android4base10LogMessageD2Ev(&bStack_50);
  }
  uStack_47 = 0;
  puStack_40 = (undefined7 *)0x0;
  bStack_50 = 0x10;
  puVar25 = &uStack_4f;
  uStack_4f = 0x2d79654b626441;
  uStack_48 = 0x30;
  puStack_70 = &UNK_00429412;
  puVar8 = (undefined7 *)X509_NAME_new();
  *param_1 = (ulong)puVar8;
  uStack_68 = 0;
  puStack_70 = &UNK_00429440;
  iVar7 = X509_NAME_add_entry_by_NID(puVar8,0x11,0x1001,puVar25,8,0xffffffff);
  if (iVar7 == 0) {
    puVar25 = &uStack_58;
    puStack_70 = &UNK_0042953a;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (puVar25,&UNK_0017d936,0x50,6,0,0xffffffff);
    puStack_70 = &UNK_00429542;
    uVar13 = _ZN7android4base10LogMessage6streamEv(puVar25);
    puStack_70 = &UNK_00429556;
    uVar13 = func_0x0032eb30(uVar13,&UNK_00167e50,0xad);
    puStack_70 = &UNK_0042956a;
    func_0x0032eb30(uVar13,&UNK_0015ae05,1);
    puStack_70 = &UNK_00429572;
    _ZN7android4base10LogMessageD2Ev(puVar25);
  }
  uStack_68 = 0;
  puVar17 = (ulong *)0xd;
  puStack_70 = &UNK_0042946d;
  puVar20 = puVar8;
  iVar7 = X509_NAME_add_entry_by_NID(puVar8,0xd,0x1001,param_2,(long)(int)param_3,0xffffffff);
  puVar21 = puStack_40;
  if (iVar7 == 0) {
    param_2 = &uStack_58;
    puStack_70 = &UNK_0042959d;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (param_2,&UNK_0017d936,0x54,6,0,0xffffffff);
    puStack_70 = &UNK_004295a5;
    uVar13 = _ZN7android4base10LogMessage6streamEv(param_2);
    puStack_70 = &UNK_004295b9;
    uVar13 = func_0x0032eb30(uVar13,&UNK_0015e22d,0x9a);
    puVar17 = (ulong *)&UNK_0015ae05;
    puStack_70 = &UNK_004295cd;
    func_0x0032eb30(uVar13,&UNK_0015ae05,1);
    puStack_70 = &UNK_004295d5;
    puVar20 = param_2;
    _ZN7android4base10LogMessageD2Ev();
    puVar21 = puStack_40;
  }
  puStack_40 = puVar21;
  if ((bStack_50 & 1) != 0) {
    puVar17 = (ulong *)(CONCAT71(uStack_4f,bStack_50) & 0xfffffffffffffffe);
    puStack_70 = &UNK_0042948c;
    _ZdaPvSt11align_val_t();
    puVar20 = puVar21;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return param_1;
  }
  puStack_70 = &UNK_004295e9;
  func_0x0099bd00();
  puStack_c0 = (undefined1 *)&puStack_70;
  auStack_b0[4] = *(undefined8 *)(in_FS_OFFSET + 0x28);
  puStack_88 = param_1;
  puStack_80 = param_2;
  puStack_78 = param_3;
  puStack_70 = &stack0xfffffffffffffff8;
  if (puVar17 == (ulong *)0x0) {
    param_3 = auStack_b0;
    puStack_b8 = &UNK_00429705;
    puStack_70 = &stack0xfffffffffffffff8;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (param_3,&UNK_0017d936,0x5a,6,0,0xffffffff);
    puStack_b8 = &UNK_0042970d;
    uVar13 = _ZN7android4base10LogMessage6streamEv(param_3);
    puStack_b8 = &UNK_00429721;
    uVar13 = func_0x0032eb30(uVar13,&UNK_00163134,0x14);
    puStack_b8 = &UNK_00429735;
    func_0x0032eb30(uVar13,&UNK_0015ae05,1);
    puStack_b8 = &UNK_0042973d;
    _ZN7android4base10LogMessageD2Ev(param_3);
  }
  auStack_b0[2] = 0;
  auStack_b0[3] = 0;
  auStack_b0[0] = 0;
  auStack_b0[1] = 0;
  puVar15 = auStack_b0;
  puStack_b8 = &UNK_00429635;
  puVar9 = (ulong *)0x11;
  lStack_f0 = *(long *)(in_FS_OFFSET + 0x28);
  puVar18 = (ulong *)0x11;
  pcStack_118 = (code *)&UNK_00429788;
  puVar22 = puVar17;
  puStack_e8 = puVar20;
  puStack_e0 = puVar8;
  puStack_d8 = puVar25;
  puStack_d0 = puVar17;
  puStack_c8 = param_3;
  iVar7 = X509_NAME_get_text_by_NID(puVar17,0x11,0,0xffffffff);
  if (iVar7 < 1) {
    auStack_b0[0] = auStack_b0[0] & 0xffffffffffffff00;
    auStack_b0[3] = auStack_b0[3] & 0xffffffffffffff00;
    puVar27 = puVar17;
code_r0x00429862:
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_f0) {
      return puVar15;
    }
    pcStack_118 = (code *)&UNK_004298eb;
    func_0x0099bd00();
    puStack_138 = puVar9;
  }
  else {
    puVar27 = (ulong *)(ulong)(iVar7 + 1);
    pcStack_118 = (code *)&UNK_0042979a;
    param_3 = (ulong *)_Znwm(puVar27);
    pcStack_118 = (code *)&UNK_004297aa;
    func_0x0099bdb0(param_3,0,puVar27);
    pcStack_118 = (code *)&UNK_004297bb;
    puVar18 = puVar9;
    iVar7 = X509_NAME_get_text_by_NID(puVar17,0x11,param_3,puVar27);
    puVar23 = puVar9;
    if (iVar7 == 0) {
      puVar23 = (ulong *)auStack_108;
      pcStack_118 = (code *)&UNK_004298a9;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (puVar23,&UNK_0017d936,0x3f,6,0,0xffffffff);
      pcStack_118 = (code *)&UNK_004298b1;
      uVar13 = _ZN7android4base10LogMessage6streamEv(puVar23);
      pcStack_118 = (code *)&UNK_004298c5;
      uVar13 = func_0x0032eb30(uVar13,&UNK_00188078,0x4a);
      puVar18 = (ulong *)&UNK_0015ae05;
      pcStack_118 = (code *)&UNK_004298d9;
      func_0x0032eb30(uVar13,&UNK_0015ae05,1);
      pcStack_118 = (code *)&UNK_004298e1;
      _ZN7android4base10LogMessageD2Ev(puVar23);
    }
    pcStack_118 = (code *)&UNK_004297cb;
    puVar22 = param_3;
    puVar9 = (ulong *)func_0x0099bcf0();
    puStack_138 = puVar23;
    if (puVar9 < (ulong *)0xfffffffffffffff7) {
      if (puVar9 < (ulong *)0x17) {
        _auStack_108 = CONCAT71(stack0xfffffffffffffef9,(char)puVar9 * '\x02');
        puVar17 = (ulong *)(auStack_108 + 1);
      }
      else {
        lVar24 = 0x1a;
        if (((ulong)puVar9 | 7) != 0x17) {
          lVar24 = ((ulong)puVar9 | 7) + 1;
        }
        pcStack_118 = (code *)&UNK_0042981a;
        puStack_110 = puVar15;
        puVar17 = (ulong *)_Znwm(lVar24);
        _auStack_108 = lVar24 + 1;
        puVar15 = puStack_110;
        uStack_100 = puVar9;
        puStack_f8 = puVar17;
      }
      pcStack_118 = (code *)&UNK_0042983e;
      func_0x0099bda0(puVar17,param_3,puVar9);
      *(undefined1 *)((long)puVar17 + (long)puVar9) = 0;
      *(undefined1 (*) [4])puVar15 = auStack_108;
      *(undefined4 *)((long)puVar15 + 4) = uStack_104;
      *(undefined4 *)(puVar15 + 1) = (undefined4)uStack_100;
      *(undefined4 *)((long)puVar15 + 0xc) = uStack_100._4_4_;
      puVar15[2] = (ulong)puStack_f8;
      *(undefined1 *)(puVar15 + 3) = 1;
      pcStack_118 = (code *)&UNK_00429862;
      puVar18 = puVar27;
      puVar22 = param_3;
      _ZdaPvSt11align_val_t();
      goto code_r0x00429862;
    }
  }
  pcStack_118 = 
  _ZN3adb3tls21SHA256BitsToHexStringENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEE;
  func_0x0032e8f0();
  lStack_148 = *(long *)(in_FS_OFFSET + 0x28);
  puStack_140 = puVar15;
  puStack_130 = puVar17;
  puStack_128 = puVar27;
  puStack_120 = param_3;
  if (extraout_RDX != 0x20) {
    pcStack_118 = (code *)&puStack_c0;
    do {
      puStack_290 = &UNK_00429d92;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_260,&UNK_0017d936,0x69,6,0,0xffffffff);
      puStack_290 = &UNK_00429d9a;
      uVar13 = _ZN7android4base10LogMessage6streamEv(auStack_260);
      puStack_290 = &UNK_00429dae;
      uVar13 = func_0x0032eb30(uVar13,&UNK_00165d45,0xe);
      puStack_290 = &UNK_00429dc2;
      uVar13 = func_0x0032eb30(uVar13,&UNK_001725f3,0xd);
      puStack_290 = &UNK_00429dd2;
      uVar13 = func_0x0032eb30(uVar13,&UNK_0015ae05,1);
      puStack_290 = &UNK_00429de6;
      uVar13 = func_0x0032eb30(uVar13,&UNK_0015aef8,2);
      puStack_290 = &UNK_00429df6;
      uVar13 = func_0x0032eb30(uVar13,&UNK_0015ae05,1);
      puStack_290 = &UNK_00429e0a;
      uVar13 = func_0x0032eb30(uVar13,&UNK_00169811,0x17);
      puStack_290 = &UNK_00429e1e;
      uVar13 = func_0x0032eb30(uVar13,&UNK_00159818,0x10);
      puStack_290 = &UNK_00429e29;
      uVar13 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar13,extraout_RDX);
      puStack_290 = &UNK_00429e39;
      uVar13 = func_0x0032eb30(uVar13,&UNK_00164776,0x1a);
      puStack_290 = &UNK_00429e46;
      uVar13 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar13,0x20);
      puStack_290 = &UNK_00429e56;
      func_0x0032eb30(uVar13,&UNK_0017b788,2);
      puStack_290 = &UNK_00429e5e;
      _ZN7android4base10LogMessageD2Ev(auStack_260);
    } while( true );
  }
  uStack_1e8 = 0;
  aiStack_1c0[0x1a] = 0;
  aiStack_1c0[0x1b] = 0;
  aiStack_1c0[0x1c] = 0;
  aiStack_1c0[0x1d] = 0;
  aiStack_1c0[0x16] = 0;
  aiStack_1c0[0x17] = 0;
  aiStack_1c0[0x18] = 0;
  aiStack_1c0[0x19] = 0;
  aiStack_1c0[0x12] = 0;
  aiStack_1c0[0x13] = 0;
  aiStack_1c0[0x14] = 0;
  aiStack_1c0[0x15] = 0;
  aiStack_1c0[0xe] = 0;
  aiStack_1c0[0xf] = 0;
  aiStack_1c0[0x10] = 0;
  aiStack_1c0[0x11] = 0;
  aiStack_1c0[10] = 0;
  aiStack_1c0[0xb] = 0;
  aiStack_1c0[0xc] = 0;
  aiStack_1c0[0xd] = 0;
  aiStack_1c0[6] = 0;
  aiStack_1c0[7] = 0;
  aiStack_1c0[8] = 0;
  aiStack_1c0[9] = 0;
  aiStack_1c0[2] = 0;
  aiStack_1c0[3] = 0;
  aiStack_1c0[4] = 0;
  aiStack_1c0[5] = 0;
  auStack_1e0[3] = 0;
  aiStack_1c0[0] = 0;
  aiStack_1c0[1] = 0;
  auStack_1e0[1] = 0;
  auStack_1e0[2] = 0;
  auStack_238[8] = 0;
  auStack_238[9] = 0;
  auStack_238[6] = 0;
  auStack_238[7] = 0;
  auStack_238[4] = 0;
  auStack_238[5] = 0;
  auStack_238[2] = 0;
  auStack_238[3] = 0;
  auStack_238[0] = 0;
  auStack_238[1] = 0;
  uStack_248 = 0;
  uStack_240 = 0;
  uStack_278 = 0x9ba250;
  uStack_250 = 0x9ba228;
  lStack_270 = 0x9ba2c8;
  auStack_260[0] = 0x9ba340;
  auStack_1e0[0] = 0x9ba368;
  auStack_260[1] = 0;
  puStack_290 = &UNK_00429a07;
  puStack_280 = puVar22;
  pcStack_118 = (code *)&puStack_c0;
  _ZNSt3__18ios_base4initEPv(auStack_1e0,&uStack_248);
  aiStack_1c0[0x1a] = 0;
  aiStack_1c0[0x1b] = 0;
                    /* WARNING: Ignoring partial resolution of indirect */
  aiStack_1c0[0x1c] = 0xffffffff;
  puVar28 = _ZTTNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE;
  *(undefined8 *)((long)auStack_260 + *(long *)(lStack_270 + -0x18)) = 0x9ba318;
  auStack_260[0] = 0x9ba200;
  auStack_1e0[0] = uStack_278;
  uStack_250 = 0x9ba228;
  uStack_278 = 0x9b9bf8;
  uStack_248 = 0x9b9bf8;
  puStack_290 = &UNK_00429aa0;
  _ZNSt3__16localeC2Ev(&uStack_240);
  auStack_238[4] = 0;
  auStack_238[5] = 0;
  auStack_238[2] = 0;
  auStack_238[3] = 0;
  auStack_238[0] = 0;
  auStack_238[1] = 0;
  lStack_270 = 0x9b9f28;
  uStack_248 = 0x9b9f28;
  auStack_238[6] = 0;
  auStack_238[7] = 0;
  auStack_238[8] = 0;
  auStack_238[9] = 0;
  uStack_1e8 = CONCAT44(uStack_1e8._4_4_,0x18);
  puStack_290 = &UNK_00429af5;
  func_0x00348610(&uStack_248);
  puVar1 = (uint *)((long)&uStack_248 + *(long *)(uStack_250 - 0x18));
  *puVar1 = *puVar1 | 0x4000;
  lVar24 = *(long *)(uStack_250 - 0x18);
  if (*(int *)((long)aiStack_1c0 + lVar24) == -1) {
    puStack_290 = &UNK_00429b3d;
    _ZNKSt3__18ios_base6getlocEv(auStack_268,(long)&uStack_250 + lVar24);
    puStack_290 = &UNK_00429b4c;
    plVar10 = (long *)_ZNKSt3__16locale9use_facetERNS0_2idE(auStack_268,_ZNSt3__15ctypeIcE2idE);
    puStack_290 = &UNK_00429b5a;
    (**(code **)(*plVar10 + 0x38))(plVar10,0x20);
    puStack_290 = &UNK_00429b62;
    _ZNSt3__16localeD2Ev(auStack_268);
  }
  puVar17 = &uStack_250;
  puVar15 = auStack_238;
  *(undefined4 *)((long)aiStack_1c0 + lVar24) = 0x30;
  *(uint *)((long)&uStack_248 + *(long *)(uStack_250 - 0x18)) =
       *(uint *)((long)&uStack_248 + *(long *)(uStack_250 - 0x18)) & 0xffffffb5 | 8;
  lVar24 = 0;
  do {
    *(undefined8 *)((long)auStack_238 + *(long *)(uStack_250 - 0x18)) = 2;
    puVar19 = (undefined1 *)(ulong)*(byte *)((long)puVar18 + lVar24);
    puStack_290 = &UNK_00429bc5;
    puVar22 = puVar17;
    _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEt();
    lVar24 = lVar24 + 1;
  } while (lVar24 != 0x20);
  if ((uStack_1e8 & 0x10) == 0) {
    uVar16 = 0;
    uVar26 = 0;
    uVar11 = auStack_238[2];
    if ((uStack_1e8 & 8) != 0) goto code_r0x00429c12;
code_r0x00429c28:
    *(char *)puStack_280 = (char)uVar26 * '\x02';
    puVar17 = (ulong *)((long)puStack_280 + 1);
  }
  else {
    if (auStack_238[9] < auStack_238[4]) {
      auStack_238[9] = auStack_238[4];
    }
    puVar15 = auStack_238 + 3;
    uVar11 = auStack_238[9];
code_r0x00429c12:
    uVar16 = *puVar15;
    uVar26 = uVar11 - uVar16;
    if (0xfffffffffffffff6 < uVar26) goto code_r0x00429e68;
    if (uVar26 < 0x17) goto code_r0x00429c28;
    lVar24 = 0x1a;
    if ((uVar26 | 7) != 0x17) {
      lVar24 = (uVar26 | 7) + 1;
    }
    puStack_290 = &UNK_00429c61;
    puVar17 = (ulong *)_Znwm(lVar24);
    *puStack_280 = lVar24 + 1;
    puStack_280[1] = uVar26;
    puStack_280[2] = (ulong)puVar17;
  }
  puVar15 = puStack_280;
  puStack_290 = &UNK_00429c8a;
  func_0x0099bd90(puVar17,uVar16,uVar26);
  *(undefined1 *)((long)puVar17 + uVar26) = 0;
  auStack_260[0] = 0x9ba200;
  auStack_1e0[0] = 0x9ba250;
  uStack_250 = 0x9ba228;
  uStack_248 = lStack_270;
  if ((auStack_238[6] & 1) != 0) {
    puStack_290 = &UNK_00429ce2;
    _ZdaPvSt11align_val_t(auStack_238[8],auStack_238[6] & 0xfffffffffffffffe);
  }
  uStack_248 = uStack_278;
  puStack_290 = &UNK_00429cfc;
  _ZNSt3__16localeD2Ev(&uStack_240);
  puVar28 = (undefined1 *)0x9ba268;
  puStack_290 = &UNK_00429d0f;
  puVar19 = puVar28;
  _ZNSt3__18ios_base4InitD1Ev(auStack_260);
  puVar22 = auStack_1e0;
  puStack_290 = &UNK_00429d1b;
  _ZNSt3__19basic_iosIwNS_11char_traitsIwEEED1Ev();
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_148) {
    return puVar15;
  }
  puStack_290 = &UNK_00429e68;
  func_0x0099bd00();
code_r0x00429e68:
  puStack_290 = &UNK_00429e6d;
  func_0x0032e8f0();
  lStack_2c0 = *(long *)(in_FS_OFFSET + 0x28);
  puStack_2b8 = puVar15;
  uStack_2b0 = uVar16;
  uStack_2a8 = uVar26;
  puStack_2a0 = puVar28;
  puStack_298 = puVar17;
  if (extraout_RDX_00 == 0x40) {
    uStack_2e0 = 0;
    uStack_2d8 = 0;
    uStack_2d0 = 0;
    lVar24 = 0;
    puStack_290 = (undefined *)&pcStack_118;
    do {
      uStack_2f8 = 0;
      uStack_2f0 = 0;
      uVar2 = *(ushort *)(puVar19 + lVar24 * 2);
      uStack_300 = (ulong)CONCAT21(uVar2,4);
      if (((9 < (byte)((byte)uVar2 - 0x30)) &&
          ((uVar14 = (byte)uVar2 - 0x41, 0x25 < uVar14 ||
           ((0x3f0000003fU >> ((ulong)uVar14 & 0x3f) & 1) == 0)))) ||
         ((9 < (byte)((char)(uVar2 >> 8) - 0x30U) &&
          ((uVar14 = (uVar2 >> 8) - 0x41, 0x25 < uVar14 ||
           ((0x3f0000003fU >> ((ulong)uVar14 & 0x3f) & 1) == 0)))))) {
        cVar6 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4,0);
        if (cVar6 != '\0') {
          puVar12 = (undefined4 *)func_0x0099bce0();
          uVar3 = *puVar12;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (auStack_308,&UNK_0017d936,0x7f,4,0,0xffffffff);
          uVar13 = _ZN7android4base10LogMessage6streamEv(auStack_308);
          func_0x0032eb30(uVar13,&UNK_00159829,0x27);
          _ZN7android4base10LogMessageD2Ev(auStack_308);
          *puVar12 = uVar3;
        }
        *(undefined1 *)puVar22 = 0;
        *(undefined1 *)(puVar22 + 3) = 0;
        if ((uStack_300 & 1) != 0) {
          _ZdaPvSt11align_val_t(uStack_2f0,uStack_300 & 0xfffffffffffffffe);
        }
        if ((uStack_2e0 & 1) != 0) {
          _ZdaPvSt11align_val_t(uStack_2d0,uStack_2e0 & 0xfffffffffffffffe);
        }
        goto code_r0x00429ffe;
      }
      uVar5 = _ZNSt3__14stolERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPmi
                        (&uStack_300,0,0x10);
      if ((uStack_2e0 & 1) == 0) {
        uVar16 = 0x16;
        if ((byte)uStack_2e0 == 0x2c) {
code_r0x00429f84:
          _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__grow_byEmmmmmm
                    (&uStack_2e0,uVar16,1,uVar16,uVar16,0,0);
          uVar11 = uVar16;
          goto code_r0x00429fa9;
        }
        uVar11 = (ulong)((byte)uStack_2e0 >> 1);
        uStack_2e0 = CONCAT71(uStack_2e0._1_7_,(byte)uStack_2e0 + 2);
        uVar16 = (long)&uStack_2e0 + 1;
      }
      else {
        uVar16 = (uStack_2e0 & 0xfffffffffffffffe) - 1;
        uVar11 = uStack_2d8;
        if (uStack_2d8 == uVar16) goto code_r0x00429f84;
code_r0x00429fa9:
        uStack_2d8 = uVar11 + 1;
        uVar16 = uStack_2d0;
      }
      *(undefined1 *)(uVar16 + uVar11) = uVar5;
      *(undefined1 *)(uVar16 + 1 + uVar11) = 0;
      if ((uStack_300 & 1) != 0) {
        _ZdaPvSt11align_val_t(uStack_2f0);
      }
      lVar24 = lVar24 + 1;
    } while (lVar24 != 0x20);
    puVar22[2] = uStack_2d0;
    *(undefined4 *)puVar22 = (undefined4)uStack_2e0;
    *(undefined4 *)((long)puVar22 + 4) = uStack_2e0._4_4_;
    *(undefined4 *)(puVar22 + 1) = (undefined4)uStack_2d8;
    *(undefined4 *)((long)puVar22 + 0xc) = uStack_2d8._4_4_;
    *(undefined1 *)(puVar22 + 3) = 1;
  }
  else {
    *(undefined1 *)puVar22 = 0;
    *(undefined1 *)(puVar22 + 3) = 0;
    puStack_290 = (undefined *)&pcStack_118;
  }
code_r0x00429ffe:
  if (*(long *)(in_FS_OFFSET + 0x28) != lStack_2c0) {
    func_0x0099bd00();
    pcVar4 = (code *)swi(3);
    puVar17 = (ulong *)(*pcVar4)();
    return puVar17;
  }
  return puVar22;
}


