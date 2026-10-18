// Function: _ZN3adb3tls21SHA256BitsToHexStringENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEE
// Address: 004298f0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long * _ZN3adb3tls21SHA256BitsToHexStringENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEE
                 (long *param_1,long param_2,long param_3)

{
  uint *puVar1;
  ushort uVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined1 uVar5;
  char cVar6;
  long *plVar7;
  ulong uVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  uint uVar11;
  long lVar12;
  long extraout_RDX;
  long *plVar13;
  undefined1 *puVar14;
  long *plVar15;
  long lVar16;
  ulong uVar17;
  undefined1 *puVar18;
  long in_FS_OFFSET;
  undefined1 auStack_1f8 [8];
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  long lStack_1b0;
  long *plStack_1a8;
  long lStack_1a0;
  ulong uStack_198;
  undefined1 *puStack_190;
  long *plStack_188;
  undefined *puStack_180;
  long *plStack_170;
  long lStack_168;
  long lStack_160;
  undefined1 auStack_158 [8];
  undefined8 auStack_150 [2];
  long lStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long alStack_128 [10];
  ulong uStack_d8;
  long alStack_d0 [4];
  int aiStack_b0 [30];
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 != 0x20) {
    do {
      puStack_180 = &UNK_00429d92;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_150,&UNK_0017d936,0x69,6,0,0xffffffff);
      puStack_180 = &UNK_00429d9a;
      uVar10 = _ZN7android4base10LogMessage6streamEv(auStack_150);
      puStack_180 = &UNK_00429dae;
      uVar10 = func_0x0032eb30(uVar10,&UNK_00165d45,0xe);
      puStack_180 = &UNK_00429dc2;
      uVar10 = func_0x0032eb30(uVar10,&UNK_001725f3,0xd);
      puStack_180 = &UNK_00429dd2;
      uVar10 = func_0x0032eb30(uVar10,&UNK_0015ae05,1);
      puStack_180 = &UNK_00429de6;
      uVar10 = func_0x0032eb30(uVar10,&UNK_0015aef8,2);
      puStack_180 = &UNK_00429df6;
      uVar10 = func_0x0032eb30(uVar10,&UNK_0015ae05,1);
      puStack_180 = &UNK_00429e0a;
      uVar10 = func_0x0032eb30(uVar10,&UNK_00169811,0x17);
      puStack_180 = &UNK_00429e1e;
      uVar10 = func_0x0032eb30(uVar10,&UNK_00159818,0x10);
      puStack_180 = &UNK_00429e29;
      uVar10 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar10,param_3);
      puStack_180 = &UNK_00429e39;
      uVar10 = func_0x0032eb30(uVar10,&UNK_00164776,0x1a);
      puStack_180 = &UNK_00429e46;
      uVar10 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar10,0x20);
      puStack_180 = &UNK_00429e56;
      func_0x0032eb30(uVar10,&UNK_0017b788,2);
      puStack_180 = &UNK_00429e5e;
      _ZN7android4base10LogMessageD2Ev(auStack_150);
    } while( true );
  }
  uStack_d8 = 0;
  aiStack_b0[0x1a] = 0;
  aiStack_b0[0x1b] = 0;
  aiStack_b0[0x1c] = 0;
  aiStack_b0[0x1d] = 0;
  aiStack_b0[0x16] = 0;
  aiStack_b0[0x17] = 0;
  aiStack_b0[0x18] = 0;
  aiStack_b0[0x19] = 0;
  aiStack_b0[0x12] = 0;
  aiStack_b0[0x13] = 0;
  aiStack_b0[0x14] = 0;
  aiStack_b0[0x15] = 0;
  aiStack_b0[0xe] = 0;
  aiStack_b0[0xf] = 0;
  aiStack_b0[0x10] = 0;
  aiStack_b0[0x11] = 0;
  aiStack_b0[10] = 0;
  aiStack_b0[0xb] = 0;
  aiStack_b0[0xc] = 0;
  aiStack_b0[0xd] = 0;
  aiStack_b0[6] = 0;
  aiStack_b0[7] = 0;
  aiStack_b0[8] = 0;
  aiStack_b0[9] = 0;
  aiStack_b0[2] = 0;
  aiStack_b0[3] = 0;
  aiStack_b0[4] = 0;
  aiStack_b0[5] = 0;
  alStack_d0[3] = 0;
  aiStack_b0[0] = 0;
  aiStack_b0[1] = 0;
  alStack_d0[1] = 0;
  alStack_d0[2] = 0;
  alStack_128[8] = 0;
  alStack_128[9] = 0;
  alStack_128[6] = 0;
  alStack_128[7] = 0;
  alStack_128[4] = 0;
  alStack_128[5] = 0;
  alStack_128[2] = 0;
  alStack_128[3] = 0;
  alStack_128[0] = 0;
  alStack_128[1] = 0;
  uStack_138 = 0;
  uStack_130 = 0;
  lStack_168 = 0x9ba250;
  lStack_140 = 0x9ba228;
  lStack_160 = 0x9ba2c8;
  auStack_150[0] = 0x9ba340;
  alStack_d0[0] = 0x9ba368;
  auStack_150[1] = 0;
  puStack_180 = &UNK_00429a07;
  plStack_170 = param_1;
  _ZNSt3__18ios_base4initEPv(alStack_d0,&uStack_138);
  aiStack_b0[0x1a] = 0;
  aiStack_b0[0x1b] = 0;
                    /* WARNING: Ignoring partial resolution of indirect */
  aiStack_b0[0x1c] = 0xffffffff;
  puVar18 = _ZTTNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE;
  *(undefined8 *)((long)auStack_150 + *(long *)(lStack_160 + -0x18)) = 0x9ba318;
  auStack_150[0] = 0x9ba200;
  alStack_d0[0] = lStack_168;
  lStack_140 = 0x9ba228;
  lStack_168 = 0x9b9bf8;
  uStack_138 = 0x9b9bf8;
  puStack_180 = &UNK_00429aa0;
  _ZNSt3__16localeC2Ev(&uStack_130);
  alStack_128[4] = 0;
  alStack_128[5] = 0;
  alStack_128[2] = 0;
  alStack_128[3] = 0;
  alStack_128[0] = 0;
  alStack_128[1] = 0;
  lStack_160 = 0x9b9f28;
  uStack_138 = 0x9b9f28;
  alStack_128[6] = 0;
  alStack_128[7] = 0;
  alStack_128[8] = 0;
  alStack_128[9] = 0;
  uStack_d8 = CONCAT44(uStack_d8._4_4_,0x18);
  puStack_180 = &UNK_00429af5;
  func_0x00348610(&uStack_138);
  puVar1 = (uint *)((long)&uStack_138 + *(long *)(lStack_140 + -0x18));
  *puVar1 = *puVar1 | 0x4000;
  lVar16 = *(long *)(lStack_140 + -0x18);
  if (*(int *)((long)aiStack_b0 + lVar16) == -1) {
    puStack_180 = &UNK_00429b3d;
    _ZNKSt3__18ios_base6getlocEv(auStack_158,(long)&lStack_140 + lVar16);
    puStack_180 = &UNK_00429b4c;
    plVar7 = (long *)_ZNKSt3__16locale9use_facetERNS0_2idE(auStack_158,_ZNSt3__15ctypeIcE2idE);
    puStack_180 = &UNK_00429b5a;
    (**(code **)(*plVar7 + 0x38))(plVar7,0x20);
    puStack_180 = &UNK_00429b62;
    _ZNSt3__16localeD2Ev(auStack_158);
  }
  plVar7 = &lStack_140;
  plVar13 = alStack_128;
  *(undefined4 *)((long)aiStack_b0 + lVar16) = 0x30;
  *(uint *)((long)&uStack_138 + *(long *)(lStack_140 + -0x18)) =
       *(uint *)((long)&uStack_138 + *(long *)(lStack_140 + -0x18)) & 0xffffffb5 | 8;
  lVar16 = 0;
  do {
    *(undefined8 *)((long)alStack_128 + *(long *)(lStack_140 + -0x18)) = 2;
    puVar14 = (undefined1 *)(ulong)*(byte *)(param_2 + lVar16);
    puStack_180 = &UNK_00429bc5;
    plVar15 = plVar7;
    _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEt();
    lVar16 = lVar16 + 1;
  } while (lVar16 != 0x20);
  if ((uStack_d8 & 0x10) == 0) {
    lVar16 = 0;
    uVar17 = 0;
    uVar8 = alStack_128[2];
    if ((uStack_d8 & 8) != 0) goto code_r0x00429c12;
code_r0x00429c28:
    *(char *)plStack_170 = (char)uVar17 * '\x02';
    plVar7 = (long *)((long)plStack_170 + 1);
  }
  else {
    if ((ulong)alStack_128[9] < (ulong)alStack_128[4]) {
      alStack_128[9] = alStack_128[4];
    }
    plVar13 = alStack_128 + 3;
    uVar8 = alStack_128[9];
code_r0x00429c12:
    lVar16 = *plVar13;
    uVar17 = uVar8 - lVar16;
    if (0xfffffffffffffff6 < uVar17) goto code_r0x00429e68;
    if (uVar17 < 0x17) goto code_r0x00429c28;
    lVar12 = 0x1a;
    if ((uVar17 | 7) != 0x17) {
      lVar12 = (uVar17 | 7) + 1;
    }
    puStack_180 = &UNK_00429c61;
    plVar7 = (long *)_Znwm(lVar12);
    *plStack_170 = lVar12 + 1;
    plStack_170[1] = uVar17;
    plStack_170[2] = (long)plVar7;
  }
  plVar13 = plStack_170;
  puStack_180 = &UNK_00429c8a;
  func_0x0099bd90(plVar7,lVar16,uVar17);
  *(undefined1 *)((long)plVar7 + uVar17) = 0;
  auStack_150[0] = 0x9ba200;
  alStack_d0[0] = 0x9ba250;
  lStack_140 = 0x9ba228;
  uStack_138 = lStack_160;
  if ((alStack_128[6] & 1U) != 0) {
    puStack_180 = &UNK_00429ce2;
    _ZdaPvSt11align_val_t(alStack_128[8],alStack_128[6] & 0xfffffffffffffffe);
  }
  uStack_138 = lStack_168;
  puStack_180 = &UNK_00429cfc;
  _ZNSt3__16localeD2Ev(&uStack_130);
  puVar18 = (undefined1 *)0x9ba268;
  puStack_180 = &UNK_00429d0f;
  puVar14 = puVar18;
  _ZNSt3__18ios_base4InitD1Ev(auStack_150);
  plVar15 = alStack_d0;
  puStack_180 = &UNK_00429d1b;
  _ZNSt3__19basic_iosIwNS_11char_traitsIwEEED1Ev();
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return plVar13;
  }
  puStack_180 = &UNK_00429e68;
  func_0x0099bd00();
code_r0x00429e68:
  puStack_180 = &UNK_00429e6d;
  func_0x0032e8f0();
  lStack_1b0 = *(long *)(in_FS_OFFSET + 0x28);
  plStack_1a8 = plVar13;
  lStack_1a0 = lVar16;
  uStack_198 = uVar17;
  puStack_190 = puVar18;
  plStack_188 = plVar7;
  if (extraout_RDX == 0x40) {
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    lStack_1c0 = 0;
    lVar16 = 0;
    puStack_180 = &stack0xfffffffffffffff8;
    do {
      uStack_1e8 = 0;
      uStack_1e0 = 0;
      uVar2 = *(ushort *)(puVar14 + lVar16 * 2);
      uStack_1f0 = (ulong)CONCAT21(uVar2,4);
      if (((9 < (byte)((byte)uVar2 - 0x30)) &&
          ((uVar11 = (byte)uVar2 - 0x41, 0x25 < uVar11 ||
           ((0x3f0000003fU >> ((ulong)uVar11 & 0x3f) & 1) == 0)))) ||
         ((9 < (byte)((char)(uVar2 >> 8) - 0x30U) &&
          ((uVar11 = (uVar2 >> 8) - 0x41, 0x25 < uVar11 ||
           ((0x3f0000003fU >> ((ulong)uVar11 & 0x3f) & 1) == 0)))))) {
        cVar6 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4,0);
        if (cVar6 != '\0') {
          puVar9 = (undefined4 *)func_0x0099bce0();
          uVar3 = *puVar9;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (auStack_1f8,&UNK_0017d936,0x7f,4,0,0xffffffff);
          uVar10 = _ZN7android4base10LogMessage6streamEv(auStack_1f8);
          func_0x0032eb30(uVar10,&UNK_00159829,0x27);
          _ZN7android4base10LogMessageD2Ev(auStack_1f8);
          *puVar9 = uVar3;
        }
        *(undefined1 *)plVar15 = 0;
        *(undefined1 *)(plVar15 + 3) = 0;
        if ((uStack_1f0 & 1) != 0) {
          _ZdaPvSt11align_val_t(uStack_1e0,uStack_1f0 & 0xfffffffffffffffe);
        }
        if ((uStack_1d0 & 1) != 0) {
          _ZdaPvSt11align_val_t(lStack_1c0,uStack_1d0 & 0xfffffffffffffffe);
        }
        goto code_r0x00429ffe;
      }
      uVar5 = _ZNSt3__14stolERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPmi
                        (&uStack_1f0,0,0x10);
      if ((uStack_1d0 & 1) == 0) {
        uVar17 = 0x16;
        if ((byte)uStack_1d0 == 0x2c) {
code_r0x00429f84:
          _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__grow_byEmmmmmm
                    (&uStack_1d0,uVar17,1,uVar17,uVar17,0,0);
          uVar8 = uVar17;
          goto code_r0x00429fa9;
        }
        uVar8 = (ulong)((byte)uStack_1d0 >> 1);
        uStack_1d0 = CONCAT71(uStack_1d0._1_7_,(byte)uStack_1d0 + 2);
        lVar12 = (long)&uStack_1d0 + 1;
      }
      else {
        uVar17 = (uStack_1d0 & 0xfffffffffffffffe) - 1;
        uVar8 = uStack_1c8;
        if (uStack_1c8 == uVar17) goto code_r0x00429f84;
code_r0x00429fa9:
        uStack_1c8 = uVar8 + 1;
        lVar12 = lStack_1c0;
      }
      *(undefined1 *)(lVar12 + uVar8) = uVar5;
      *(undefined1 *)(lVar12 + 1 + uVar8) = 0;
      if ((uStack_1f0 & 1) != 0) {
        _ZdaPvSt11align_val_t(uStack_1e0);
      }
      lVar16 = lVar16 + 1;
    } while (lVar16 != 0x20);
    plVar15[2] = lStack_1c0;
    *(undefined4 *)plVar15 = (undefined4)uStack_1d0;
    *(undefined4 *)((long)plVar15 + 4) = uStack_1d0._4_4_;
    *(undefined4 *)(plVar15 + 1) = (undefined4)uStack_1c8;
    *(undefined4 *)((long)plVar15 + 0xc) = uStack_1c8._4_4_;
    *(undefined1 *)(plVar15 + 3) = 1;
  }
  else {
    *(undefined1 *)plVar15 = 0;
    *(undefined1 *)(plVar15 + 3) = 0;
    puStack_180 = &stack0xfffffffffffffff8;
  }
code_r0x00429ffe:
  if (*(long *)(in_FS_OFFSET + 0x28) != lStack_1b0) {
    func_0x0099bd00();
    pcVar4 = (code *)swi(3);
    plVar7 = (long *)(*pcVar4)();
    return plVar7;
  }
  return plVar15;
}


