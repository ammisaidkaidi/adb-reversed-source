// Function: _Z30adb_get_server_executable_pathv
// Address: 0032cec0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined4 * _Z30adb_get_server_executable_pathv(undefined4 *param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  char cVar7;
  undefined1 ***pppuVar8;
  ulong *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  ulong *puVar12;
  uint *puVar13;
  ulong uVar14;
  ulong *extraout_RDX;
  ulong uVar15;
  byte *pbVar16;
  ulong *puVar17;
  ulong *puVar18;
  byte bVar19;
  undefined *puVar20;
  undefined4 *puVar21;
  ulong uVar22;
  undefined4 uVar23;
  long in_FS_OFFSET;
  bool bVar24;
  ulong *puStack_1c0;
  ulong *puStack_1b0;
  ulong uStack_1a8;
  uint uStack_19c;
  ulong uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined1 auStack_178 [8];
  uint uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  ulong uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  long lStack_138;
  ulong *puStack_130;
  undefined1 uStack_f1;
  undefined1 **ppuStack_f0;
  undefined1 *puStack_e8;
  ulong *puStack_e0;
  undefined4 *puStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  byte bStack_c0;
  undefined7 uStack_bf;
  ulong *puStack_b0;
  undefined1 auStack_a8 [5];
  undefined2 uStack_a3;
  undefined1 uStack_a1;
  ulong uStack_a0;
  ulong *puStack_98;
  byte bStack_88;
  undefined4 uStack_87;
  undefined2 uStack_83;
  undefined1 uStack_81;
  ulong uStack_80;
  ulong *puStack_78;
  ulong uStack_68;
  ulong uStack_60;
  ulong *puStack_58;
  ulong uStack_48;
  undefined8 uStack_40;
  ulong *puStack_38;
  undefined4 uStack_24;
  long lStack_20;
  
  puVar9 = puRam0000000000a00520;
  lStack_20 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_24 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  puStack_38 = (ulong *)0x0;
  puStack_d0 = &UNK_0032cf03;
  pppuVar8 = (undefined1 ***)func_0x0099bcf0(puRam0000000000a00520);
  bVar19 = 0;
  puStack_d0 = &UNK_0032cf1b;
  cVar7 = _Z21parse_tcp_socket_specNSt3__117basic_string_viewIcNS_11char_traitsIcEEEEPNS_12basic_stringIcS2_NS_9allocatorIcEEEEPiS8_S8_
                    (puVar9,pppuVar8,0,&uStack_24,0,&uStack_48);
  if (cVar7 == '\0') {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 6) = 0;
    puVar18 = puStack_38;
    goto joined_r0x0032cf63;
  }
  puStack_d0 = &UNK_0032cf2b;
  _Z24adb_get_android_dir_pathv(auStack_a8);
  if ((_auStack_a8 & 1) == 0) {
    uVar22 = 0x16;
    if (auStack_a8[0] == 0x2c) {
code_r0x0032cf88:
      uStack_c8 = 0;
      puStack_d0 = &UNK_0032cfad;
      uVar14 = uVar22;
      _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__grow_byEmmmmmm
                (auStack_a8,uVar22,1,uVar22,uVar22,0);
      bVar19 = (byte)uVar14;
      uVar14 = uVar22;
      goto code_r0x0032cfb0;
    }
    uVar14 = (ulong)(auStack_a8[0] >> 1);
    _auStack_a8 = CONCAT71(stack0xffffffffffffff59,auStack_a8[0] + 2);
    puVar9 = (ulong *)(auStack_a8 + 1);
  }
  else {
    uVar22 = (_auStack_a8 & 0xfffffffffffffffe) - 1;
    uVar14 = uStack_a0;
    if (uStack_a0 == uVar22) goto code_r0x0032cf88;
code_r0x0032cfb0:
    uStack_a0 = uVar14 + 1;
    puVar9 = puStack_98;
  }
  ((byte *)((long)puVar9 + uVar14))[0] = 0x2f;
  ((byte *)((long)puVar9 + uVar14))[1] = 0;
  puStack_78 = puStack_98;
  bStack_88 = auStack_a8[0];
  uStack_87 = auStack_a8._1_4_;
  uStack_83 = uStack_a3;
  uStack_81 = uStack_a1;
  uStack_80 = uStack_a0;
  _auStack_a8 = 0;
  uStack_a0 = 0;
  puStack_98 = (ulong *)0x0;
  puStack_d0 = &UNK_0032d02b;
  puVar9 = (ulong *)_ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                              (&bStack_88,&UNK_00165bd4);
  puStack_58 = (ulong *)puVar9[2];
  uStack_68 = *puVar9;
  uStack_60 = puVar9[1];
  *puVar9 = 0;
  puVar9[1] = 0;
  puVar9[2] = 0;
  pppuVar8 = (undefined1 ***)&bStack_c0;
  puStack_d0 = &UNK_0032d05a;
  _ZNSt3__19to_stringEi(pppuVar8,uStack_24);
  puVar9 = &uStack_68;
  puStack_d0 = &UNK_0032d066;
  puVar10 = (undefined8 *)func_0x0032e820();
  uVar11 = puVar10[2];
  uVar23 = *(undefined4 *)puVar10;
  uVar3 = *(undefined4 *)((long)puVar10 + 4);
  uVar4 = *(undefined4 *)(puVar10 + 1);
  uVar5 = *(undefined4 *)((long)puVar10 + 0xc);
  *puVar10 = 0;
  puVar10[1] = 0;
  puVar10[2] = 0;
  *param_1 = uVar23;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  *(undefined8 *)(param_1 + 4) = uVar11;
  *(undefined1 *)(param_1 + 6) = 1;
  puVar18 = puStack_58;
  if ((bStack_c0 & 1) != 0) {
    pppuVar8 = (undefined1 ***)(CONCAT71(uStack_bf,bStack_c0) & 0xfffffffffffffffe);
    puStack_d0 = &UNK_0032d0f8;
    _ZdaPvSt11align_val_t();
    puVar9 = puStack_b0;
    puVar18 = puStack_58;
  }
  puVar12 = puStack_78;
  puStack_58 = puVar18;
  if ((uStack_68 & 1) != 0) {
    pppuVar8 = (undefined1 ***)(uStack_68 & 0xfffffffffffffffe);
    puStack_d0 = &UNK_0032d10f;
    _ZdaPvSt11align_val_t();
    puVar9 = puVar18;
    puVar12 = puStack_78;
  }
  puVar17 = puStack_98;
  puStack_78 = puVar12;
  if ((bStack_88 & 1) != 0) {
    pppuVar8 = (undefined1 ***)
               (CONCAT17(uStack_81,CONCAT25(uStack_83,CONCAT41(uStack_87,bStack_88))) &
               0xfffffffffffffffe);
    puStack_d0 = &UNK_0032d126;
    _ZdaPvSt11align_val_t();
    puVar9 = puVar12;
    puVar17 = puStack_98;
  }
  puStack_98 = puVar17;
  puVar18 = puStack_38;
  if ((_auStack_a8 & 1) != 0) {
    pppuVar8 = (undefined1 ***)(_auStack_a8 & 0xfffffffffffffffe);
    puStack_d0 = &UNK_0032d14a;
    _ZdaPvSt11align_val_t();
    puVar9 = puVar17;
    puVar18 = puStack_38;
  }
joined_r0x0032cf63:
  puStack_38 = puVar18;
  if ((uStack_48 & 1) != 0) {
    pppuVar8 = (undefined1 ***)(uStack_48 & 0xfffffffffffffffe);
    puStack_d0 = &UNK_0032d0bf;
    _ZdaPvSt11align_val_t();
    puVar9 = puVar18;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_20) {
    return param_1;
  }
  puStack_d0 = &UNK_0032d15e;
  func_0x0099bd00();
  puStack_e0 = *(ulong **)(in_FS_OFFSET + 0x28);
  puVar18 = puVar9;
  puStack_d8 = param_1;
  puStack_d0 = &stack0xfffffffffffffff8;
  if (lRam0000000000a00530 != -1) {
    puStack_e8 = &uStack_f1;
    ppuStack_f0 = &puStack_e8;
    puVar18 = (ulong *)0xa00530;
    pppuVar8 = &ppuStack_f0;
    puStack_d0 = &stack0xfffffffffffffff8;
    _ZNSt3__111__call_onceERVmPvPFvS2_E(0xa00530,pppuVar8,&UNK_0032e030);
  }
  if (puVar9 != puRam0000000000a00540) {
    bVar1 = (byte)*puRam0000000000a00540;
    if ((*puVar9 & 1) == 0) {
      if ((bVar1 & 1) == 0) {
        puVar9[2] = puRam0000000000a00540[2];
        uVar2 = *(uint *)((long)puRam0000000000a00540 + 4);
        uVar14 = puRam0000000000a00540[1];
        uVar6 = *(uint *)((long)puRam0000000000a00540 + 0xc);
        *(uint *)puVar9 = (uint)*puRam0000000000a00540;
        *(uint *)((long)puVar9 + 4) = uVar2;
        *(uint *)(puVar9 + 1) = (uint)uVar14;
        *(uint *)((long)puVar9 + 0xc) = uVar6;
      }
      else {
        pppuVar8 = (undefined1 ***)puRam0000000000a00540[2];
        puVar18 = puVar9;
        func_0x0032e990(puVar9,pppuVar8,puRam0000000000a00540[1]);
      }
    }
    else {
      bVar24 = (bVar1 & 1) != 0;
      pppuVar8 = (undefined1 ***)((long)puRam0000000000a00540 + 1);
      if (bVar24) {
        pppuVar8 = (undefined1 ***)puRam0000000000a00540[2];
      }
      uVar14 = (ulong)(bVar1 >> 1);
      if (bVar24) {
        uVar14 = puRam0000000000a00540[1];
      }
      puVar18 = puVar9;
      func_0x0032e920(puVar9,pppuVar8,uVar14);
    }
  }
  puVar12 = *(ulong **)(in_FS_OFFSET + 0x28);
  if (puVar12 == puStack_e0) {
    return (undefined4 *)(ulong)bRam0000000000a00538;
  }
  func_0x0099bd00();
  lStack_138 = *(long *)(in_FS_OFFSET + 0x28);
  puStack_130 = puVar9;
  cVar7 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
  if (cVar7 != '\0') {
    puVar13 = (uint *)func_0x0099bce0();
    uVar2 = *puVar13;
    uStack_1a8 = (ulong)uVar2;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (&uStack_158,&UNK_00183124,0x9d,1,0,0xffffffff);
    uVar11 = _ZN7android4base10LogMessage6streamEv(&uStack_158);
    uVar11 = func_0x0032eb30(uVar11,&UNK_001752ec,0xe);
    func_0x0032eb30(uVar11,puVar18,pppuVar8);
    _ZN7android4base10LogMessageD2Ev(&uStack_158);
    *puVar13 = uVar2;
    puStack_1b0 = extraout_RDX;
  }
  puVar9 = puRam0000000000a00520;
  if ((byte *)0xffffffffffefffff < (byte *)((long)pppuVar8 - 0x100001U)) {
    uStack_198 = 0;
    uStack_190 = 0;
    uStack_188 = 0;
    uStack_19c = 0xffffffff;
    uVar11 = func_0x0099bcf0(puRam0000000000a00520);
    cVar7 = _Z19socket_spec_connectPN7android4base14unique_fd_implINS0_13DefaultCloserEEENSt3__117basic_string_viewIcNS5_11char_traitsIcEEEEPiPNS5_12basic_stringIcS8_NS5_9allocatorIcEEEESF_
                      (&uStack_19c,puVar9,uVar11,0,0,&uStack_198);
    uVar2 = uStack_19c;
    uVar14 = uRam0000000000a00518;
    if (cVar7 == '\0') {
      _ZN7android4base12StringPrintfEPKcz(&uStack_158,&UNK_00187a70,puRam0000000000a00520);
      if ((*puVar12 & 1) != 0) {
        _ZdaPvSt11align_val_t(puVar12[2],*puVar12 & 0xfffffffffffffffe);
      }
      puVar12[2] = uStack_148;
      *(undefined4 *)puVar12 = (undefined4)uStack_158;
      *(undefined4 *)((long)puVar12 + 4) = uStack_158._4_4_;
      *(undefined4 *)(puVar12 + 1) = (undefined4)uStack_150;
      *(undefined4 *)((long)puVar12 + 0xc) = uStack_150._4_4_;
      puVar21 = (undefined4 *)0xfffffffe;
      puStack_1b0 = extraout_RDX;
      goto code_r0x0032d684;
    }
    if (((undefined1 ***)0x3 < pppuVar8) &&
       (puStack_1b0 = extraout_RDX, (~bVar19 & (uint)*puVar18 == 0x74736f68) != 0))
    goto code_r0x0032d5e3;
    uStack_140 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    uStack_1a8 = uRam0000000000a00518;
    puStack_1c0 = puVar18;
    if (uRam0000000000a00518 == 0) {
      if (puRam0000000000a00510 == (undefined *)0x0) {
        switch(uRam00000000009c55c0) {
        case 0:
          puVar20 = &UNK_0015adb1;
          break;
        case 1:
          puVar20 = &UNK_0015f761;
          break;
        case 2:
          puVar20 = &UNK_00165c24;
          break;
        case 3:
          bVar24 = true;
          uVar14 = 0;
          puVar9 = (ulong *)0x0;
          puStack_1b0 = extraout_RDX;
          goto code_r0x0032d599;
        default:
          puVar20 = &UNK_00176d58;
        }
        _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                  (&uStack_158,&UNK_001752fb);
      }
      else {
        _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                  (&uStack_158,&UNK_00162ab6);
        puVar20 = puRam0000000000a00510;
      }
      _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                (&uStack_158,puVar20);
    }
    else {
      _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                (&uStack_158,&UNK_0015ad9e);
      _ZNSt3__19to_stringEy(&uStack_170,uRam0000000000a00518);
      func_0x0032e820(&uStack_158,&uStack_170);
      if ((uStack_170 & 1) != 0) {
        _ZdaPvSt11align_val_t(uStack_160,CONCAT44(uStack_16c,uStack_170) & 0xfffffffffffffffe);
      }
      uStack_140 = uRam0000000000a00518;
    }
    uVar15 = uStack_158 >> 1 & 0x7f;
    uVar22 = (long)&uStack_158 + 1;
    if ((uStack_158 & 1) != 0) {
      uVar15 = uStack_150;
      uVar22 = uStack_148;
    }
    cVar7 = _Z18SendProtocolStringN7android4base11borrowed_fdENSt3__117basic_string_viewIcNS2_11char_traitsIcEEEE
                      (uVar2,uVar22,uVar15);
    if (cVar7 == '\0') {
      _Z10perror_strPKc(&uStack_170,&UNK_0017ea4d);
      if ((*puVar12 & 1) != 0) {
        _ZdaPvSt11align_val_t(puVar12[2],*puVar12 & 0xfffffffffffffffe);
      }
      puVar12[2] = uStack_160;
      *(uint *)puVar12 = uStack_170;
      *(undefined4 *)((long)puVar12 + 4) = uStack_16c;
      *(undefined4 *)(puVar12 + 1) = uStack_168;
      *(undefined4 *)((long)puVar12 + 0xc) = uStack_164;
      puStack_1b0 = extraout_RDX;
      goto code_r0x0032d591;
    }
    cVar7 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
    if (cVar7 != '\0') {
      puVar21 = (undefined4 *)func_0x0099bce0();
      uVar23 = *puVar21;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&uStack_170,&UNK_00183124,0x74,1,0,0xffffffff);
      uVar11 = _ZN7android4base10LogMessage6streamEv(&uStack_170);
      uVar11 = func_0x0032eb30(uVar11,&UNK_0015c4d6,0x1e);
      func_0x0032e5a0(uVar11,&uStack_158);
      _ZN7android4base10LogMessageD2Ev(&uStack_170);
      *puVar21 = uVar23;
    }
    cVar7 = _Z10adb_statusN7android4base11borrowed_fdEPNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE
                      (uVar2,puVar12);
    if (cVar7 == '\0') {
      uVar14 = 0;
      bVar24 = false;
      if (((byte)adb_trace_mask & 1) == 0) {
        puVar9 = (ulong *)0x0;
        puStack_1b0 = extraout_RDX;
        goto code_r0x0032d599;
      }
      puVar9 = (ulong *)0x0;
      uVar14 = 0;
      puStack_1b0 = extraout_RDX;
      if (1 < (int)adb_trace_severity._0_4_) goto code_r0x0032d599;
      cVar7 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
      uVar14 = 0;
      puVar9 = (ulong *)0x0;
      bVar24 = false;
      if (cVar7 == '\0') goto code_r0x0032d599;
      puVar9 = (ulong *)func_0x0099bce0();
      uStack_1a8 = (ulong)(uint)*puVar9;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_178,&UNK_00183124,0x77,1,0,0xffffffff);
      puVar21 = (undefined4 *)_ZN7android4base10LogMessage6streamEv(auStack_178);
      if ((*puVar12 & 1) == 0) goto code_r0x0032d9c9;
      pbVar16 = (byte *)puVar12[2];
      goto code_r0x0032d9cd;
    }
    if ((uVar14 == 0) &&
       (cVar7 = _Z13ReadFdExactlyN7android4base11borrowed_fdEPvm(uVar2,&uStack_140,8), cVar7 == '\0'
       )) {
      func_0x0032ea60(puVar12,&UNK_0016ac30);
      puStack_1b0 = extraout_RDX;
      goto code_r0x0032d591;
    }
    if (((((byte)adb_trace_mask & 1) != 0) && ((int)adb_trace_severity._0_4_ < 2)) &&
       (cVar7 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0), cVar7 != '\0')) {
      puVar21 = (undefined4 *)func_0x0099bce0();
      uVar23 = *puVar21;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&uStack_170,&UNK_00183124,0x82,1,0,0xffffffff);
      uVar11 = _ZN7android4base10LogMessage6streamEv(&uStack_170);
      func_0x0032eb30(uVar11,&UNK_00172014,0x18);
      _ZN7android4base10LogMessageD2Ev(&uStack_170);
      *puVar21 = uVar23;
    }
    puVar9 = (ulong *)(uStack_140 & 0xffffffffffffff00);
    bVar24 = true;
    uVar14 = uStack_140 & 0xff;
    puStack_1b0 = extraout_RDX;
    goto code_r0x0032d599;
  }
  _ZN7android4base12StringPrintfEPKcz(&uStack_158,&UNK_00173b35,pppuVar8);
  if ((*puVar12 & 1) != 0) {
    _ZdaPvSt11align_val_t(puVar12[2],*puVar12 & 0xfffffffffffffffe);
  }
  puVar12[2] = uStack_148;
  *(undefined4 *)puVar12 = (undefined4)uStack_158;
  *(undefined4 *)((long)puVar12 + 4) = uStack_158._4_4_;
  *(undefined4 *)(puVar12 + 1) = (undefined4)uStack_150;
  *(undefined4 *)((long)puVar12 + 0xc) = uStack_150._4_4_;
  puVar21 = (undefined4 *)0xffffffff;
  puVar9 = extraout_RDX;
  do {
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_138) {
      return puVar21;
    }
    func_0x0099bd00();
code_r0x0032d9c9:
    pbVar16 = (byte *)((long)puVar12 + 1);
code_r0x0032d9cd:
    _ZN7android4base12StringPrintfEPKcz(&uStack_170,&UNK_0018611c,pbVar16);
    func_0x0032e5a0(puVar21,&uStack_170);
    if ((uStack_170 & 1) != 0) {
      _ZdaPvSt11align_val_t(uStack_160,CONCAT44(uStack_16c,uStack_170) & 0xfffffffffffffffe);
    }
    _ZN7android4base10LogMessageD2Ev(auStack_178);
    *(uint *)puVar9 = (uint)uStack_1a8;
code_r0x0032d591:
    puVar9 = (ulong *)0x0;
    bVar24 = false;
    uVar14 = 0;
code_r0x0032d599:
    if ((uStack_158 & 1) != 0) {
      _ZdaPvSt11align_val_t(uStack_148,uStack_158 & 0xfffffffffffffffe);
    }
    puVar21 = (undefined4 *)0xffffffff;
    if (bVar24) {
      puVar18 = puStack_1c0;
      if (puStack_1b0 != (ulong *)0x0) {
        puVar9 = (ulong *)((ulong)puVar9 | uVar14);
        *puStack_1b0 = (ulong)puVar9;
      }
code_r0x0032d5e3:
      cVar7 = _Z18SendProtocolStringN7android4base11borrowed_fdENSt3__117basic_string_viewIcNS2_11char_traitsIcEEEE
                        (uStack_19c,puVar18,pppuVar8);
      if (cVar7 == '\0') {
        _Z10perror_strPKc(&uStack_158,&UNK_0017ea4d);
        if ((*puVar12 & 1) != 0) {
          _ZdaPvSt11align_val_t(puVar12[2],*puVar12 & 0xfffffffffffffffe);
        }
        puVar12[2] = uStack_148;
        *(undefined4 *)puVar12 = (undefined4)uStack_158;
        *(undefined4 *)((long)puVar12 + 4) = uStack_158._4_4_;
        *(undefined4 *)(puVar12 + 1) = (undefined4)uStack_150;
        *(undefined4 *)((long)puVar12 + 0xc) = uStack_150._4_4_;
        puVar21 = (undefined4 *)0xffffffff;
        goto code_r0x0032d684;
      }
      cVar7 = _Z10adb_statusN7android4base11borrowed_fdEPNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE
                        (uStack_19c,puVar12);
      puVar21 = (undefined4 *)0xffffffff;
      if (cVar7 == '\0') goto code_r0x0032d684;
      if (((((byte)adb_trace_mask & 1) != 0) && ((int)adb_trace_severity._0_4_ < 2)) &&
         (cVar7 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0), cVar7 != '\0')) {
        puVar13 = (uint *)func_0x0099bce0();
        uVar2 = *puVar13;
        puVar9 = (ulong *)(ulong)uVar2;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (&uStack_170,&UNK_00183124,0xbf,1,0,0xffffffff);
        pppuVar8 = (undefined1 ***)_ZN7android4base10LogMessage6streamEv(&uStack_170);
        _ZN7android4base12StringPrintfEPKcz(&uStack_158,&UNK_00183167,uStack_19c);
        func_0x0032e5a0(pppuVar8,&uStack_158);
        if ((uStack_158 & 1) != 0) {
          _ZdaPvSt11align_val_t(uStack_148,uStack_158 & 0xfffffffffffffffe);
        }
        _ZN7android4base10LogMessageD2Ev(&uStack_170);
        *puVar13 = uVar2;
      }
      puVar21 = (undefined4 *)(ulong)uStack_19c;
      uStack_19c = 0xffffffff;
      puVar12 = (ulong *)func_0x0099bce0();
      uVar23 = (undefined4)*puVar12;
    }
    else {
code_r0x0032d684:
      uVar2 = uStack_19c;
      pppuVar8 = (undefined1 ***)(ulong)uStack_19c;
      puVar12 = (ulong *)func_0x0099bce0();
      uVar23 = (undefined4)*puVar12;
      if (uVar2 != 0xffffffff) {
        func_0x0099bd10(uVar2);
      }
    }
    *(undefined4 *)puVar12 = uVar23;
    if ((uStack_198 & 1) != 0) {
      _ZdaPvSt11align_val_t(uStack_188,uStack_198 & 0xfffffffffffffffe);
    }
  } while( true );
}


