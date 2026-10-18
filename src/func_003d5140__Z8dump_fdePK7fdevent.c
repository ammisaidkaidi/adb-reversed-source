// Function: _Z8dump_fdePK7fdevent
// Address: 003d5140
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long * _Z8dump_fdePK7fdevent(long *param_1,undefined8 *param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint *puVar5;
  char cVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined1 uVar12;
  undefined4 uVar13;
  long lVar14;
  undefined8 extraout_RDX;
  ulong extraout_RDX_00;
  ulong extraout_RDX_01;
  ulong extraout_RDX_02;
  long extraout_RDX_03;
  long *plVar15;
  uint *puVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  ulong uVar20;
  long *plVar21;
  long *plVar22;
  long in_FS_OFFSET;
  bool bVar23;
  undefined1 auVar24 [16];
  undefined1 auStack_1e0 [8];
  long *plStack_1d8;
  long *plStack_1d0;
  ulong uStack_1c8;
  long *plStack_1c0;
  long *plStack_1b8;
  undefined *puStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  long *plStack_198;
  ulong uStack_190;
  long *plStack_188;
  long *plStack_180;
  undefined *apuStack_178 [2];
  undefined4 auStack_168 [2];
  long lStack_160;
  long *plStack_158;
  long *plStack_150;
  uint *puStack_148;
  long *plStack_140;
  long *plStack_138;
  undefined *apuStack_130 [2];
  undefined1 auStack_120 [8];
  long *plStack_118;
  long *plStack_110;
  long *plStack_108;
  uint *puStack_100;
  long *plStack_f8;
  long *plStack_f0;
  undefined *apuStack_e8 [2];
  undefined8 uStack_d8;
  long *plStack_d0;
  undefined4 uStack_c4;
  uint *puStack_c0;
  uint uStack_b4;
  long lStack_b0;
  int iStack_a8;
  undefined2 uStack_a4;
  undefined1 uStack_a0;
  undefined1 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long *plStack_68;
  code *pcStack_40;
  undefined1 auStack_38 [8];
  undefined8 uStack_30;
  long *plStack_28;
  long lStack_20;
  
  lStack_20 = *(long *)(in_FS_OFFSET + 0x28);
  auStack_38 = (undefined1  [8])0x0;
  uStack_30 = 0;
  plStack_28 = (long *)0x0;
  uVar1 = *(ushort *)((long)param_2 + 0xc);
  if ((uVar1 & 1) != 0) {
    pcStack_40 = (code *)&UNK_003d51b0;
    _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
              (auStack_38,&UNK_00167a33);
    uVar1 = *(ushort *)((long)param_2 + 0xc);
  }
  if ((uVar1 & 2) != 0) {
    pcStack_40 = (code *)&UNK_003d51c9;
    _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
              (auStack_38,&UNK_0017a171);
    uVar1 = *(ushort *)((long)param_2 + 0xc);
  }
  if ((uVar1 & 4) != 0) {
    pcStack_40 = (code *)&UNK_003d518d;
    _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
              (auStack_38,&UNK_001722e4);
  }
  uVar13 = *(undefined4 *)(param_2 + 1);
  plVar11 = plStack_28;
  if (((ulong)auStack_38 & 1) == 0) {
    plVar11 = (long *)(auStack_38 + 1);
  }
  puVar16 = (uint *)&UNK_00186583;
  pcStack_40 = (code *)&UNK_003d51e9;
  plVar15 = param_1;
  _ZN7android4base12StringPrintfEPKcz(param_1,&UNK_00186583,*param_2);
  if (((ulong)auStack_38 & 1) != 0) {
    puVar16 = (uint *)((ulong)auStack_38 & 0xfffffffffffffffe);
    pcStack_40 = (code *)&UNK_003d5200;
    plVar15 = plStack_28;
    _ZdaPvSt11align_val_t();
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_20) {
    return param_1;
  }
  pcStack_40 = 
  _ZN15fdevent_context6CreateEN7android4base14unique_fd_implINS1_13DefaultCloserEEENSt3__17variantIJPFvijPvEPFvP7fdeventjS7_EEEES7_
  ;
  func_0x0099bd00();
  lStack_70 = *(long *)(in_FS_OFFSET + 0x28);
  apuStack_e8[0] = &UNK_003d5256;
  uStack_d8 = extraout_RDX;
  plStack_68 = param_1;
  pcStack_40 = (code *)&stack0xfffffffffffffff8;
  _ZNK15fdevent_context17CheckLooperThreadEv();
  uStack_b4 = *puVar16;
  if ((int)uStack_b4 < 0) {
    do {
      apuStack_e8[0] = &UNK_003d5472;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&lStack_b0,&UNK_00167a35,0x40,6,0,0xffffffff);
      apuStack_e8[0] = &UNK_003d547a;
      uVar10 = _ZN7android4base10LogMessage6streamEv(&lStack_b0);
      apuStack_e8[0] = &UNK_003d548e;
      uVar10 = func_0x0032eb30(uVar10,&UNK_00165d45,0xe);
      apuStack_e8[0] = &UNK_003d54a2;
      uVar10 = func_0x0032eb30(uVar10,&UNK_00183254,8);
      apuStack_e8[0] = &UNK_003d54b2;
      uVar10 = func_0x0032eb30(uVar10,&UNK_0015ae05,1);
      apuStack_e8[0] = &UNK_003d54c6;
      uVar10 = func_0x0032eb30(uVar10,&UNK_00181913,2);
      apuStack_e8[0] = &UNK_003d54d6;
      uVar10 = func_0x0032eb30(uVar10,&UNK_0015ae05,1);
      apuStack_e8[0] = &UNK_003d54ea;
      uVar10 = func_0x0032eb30(uVar10,&UNK_0017eb28,1);
      apuStack_e8[0] = &UNK_003d54fe;
      uVar10 = func_0x0032eb30(uVar10,&UNK_00162e22,0xb);
      apuStack_e8[0] = &UNK_003d5509;
      uVar10 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(uVar10,uStack_b4);
      apuStack_e8[0] = &UNK_003d5519;
      uVar10 = func_0x0032eb30(uVar10,&UNK_0015c7f9,4);
      apuStack_e8[0] = &UNK_003d5523;
      uVar10 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(uVar10,0);
      apuStack_e8[0] = &UNK_003d5533;
      func_0x0032eb30(uVar10,&UNK_0017b788,2);
      apuStack_e8[0] = &UNK_003d553b;
      _ZN7android4base10LogMessageD2Ev(&lStack_b0);
    } while( true );
  }
  lStack_b0 = 0;
  iStack_a8 = -1;
  uStack_a4 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_78 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  apuStack_e8[0] = &UNK_003d52bc;
  plStack_d0 = plVar11;
  uStack_c4 = uVar13;
  auVar24 = func_0x003d69e0(plVar15 + 4,plVar15 + 4,&uStack_b4,&lStack_b0);
  lVar9 = auVar24._0_8_;
  apuStack_e8[0] = &UNK_003d52c7;
  puStack_c0 = (uint *)func_0x0099bce0();
  uVar2 = *puStack_c0;
  if (iStack_a8 != -1) {
    apuStack_e8[0] = &UNK_003d52db;
    func_0x0099bd10();
  }
  *puStack_c0 = uVar2;
  if ((auVar24._8_8_ & 1) == 0) {
    apuStack_e8[0] = &UNK_003d5566;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (&lStack_b0,&UNK_00167a35,0x45,6,0,0xffffffff);
    apuStack_e8[0] = &UNK_003d556e;
    uVar10 = _ZN7android4base10LogMessage6streamEv(&lStack_b0);
    apuStack_e8[0] = &UNK_003d5582;
    uVar10 = func_0x0032eb30(uVar10,&UNK_0016aefe,0x16);
    apuStack_e8[0] = &UNK_003d5596;
    func_0x0032eb30(uVar10,&UNK_0015ae05,1);
    apuStack_e8[0] = &UNK_003d559e;
    _ZN7android4base10LogMessageD2Ev(&lStack_b0);
  }
  lVar4 = plVar15[7];
  lVar14 = lVar4 + 1;
  plVar15[7] = lVar14;
  *(long *)(lVar9 + 0x28) = lVar4;
  *(undefined2 *)(lVar9 + 0x34) = 0;
  uVar2 = *puVar16;
  plVar11 = (long *)(ulong)uVar2;
  *puVar16 = 0xffffffff;
  uVar3 = *puStack_c0;
  if (*(int *)(lVar9 + 0x30) != -1) {
    apuStack_e8[0] = &UNK_003d5320;
    func_0x0099bd10();
  }
  uVar12 = (undefined1)lVar14;
  *(uint *)(lVar9 + 0x30) = uVar2;
  *puStack_c0 = uVar3;
  *(undefined8 *)(lVar9 + 0x50) = uStack_d8;
  *(undefined4 *)(lVar9 + 0x58) = uStack_c4;
  *(long **)(lVar9 + 0x60) = plStack_d0;
  apuStack_e8[0] = &UNK_003d5356;
  cVar6 = _Z19set_file_block_modeN7android4base11borrowed_fdEb(*(undefined4 *)(lVar9 + 0x30),0);
  if (cVar6 == '\0') {
    apuStack_e8[0] = &UNK_003d5366;
    cVar6 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4,0);
    puVar5 = puStack_c0;
    if (cVar6 != '\0') {
      uVar2 = *puStack_c0;
      puVar16 = (uint *)(ulong)uVar2;
      plVar11 = &lStack_b0;
      uVar12 = 4;
      apuStack_e8[0] = &UNK_003d55d4;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (plVar11,&UNK_00167a35,0x51,4,0,0xffffffff);
      apuStack_e8[0] = &UNK_003d55dc;
      uVar10 = _ZN7android4base10LogMessage6streamEv(plVar11);
      apuStack_e8[0] = &UNK_003d55f0;
      uVar10 = func_0x0032eb30(uVar10,&UNK_0017ba53,0x27);
      apuStack_e8[0] = &UNK_003d55fc;
      _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(uVar10,*(undefined4 *)(lVar9 + 0x30));
      apuStack_e8[0] = &UNK_003d5604;
      _ZN7android4base10LogMessageD2Ev(plVar11);
      *puVar5 = uVar2;
    }
  }
  plVar21 = (long *)(lVar9 + 0x28);
  plVar17 = (long *)plVar15[0x14];
  if ((long *)plVar15[0x14] == (long *)0x0) {
    plVar22 = plVar15 + 0x14;
    plVar11 = plVar22;
  }
  else {
    do {
      while (plVar22 = plVar17, (long *)plVar22[4] <= plVar21) {
        if (plVar21 <= (long *)plVar22[4]) goto code_r0x003d5402;
        plVar17 = (long *)plVar22[1];
        if ((long *)plVar22[1] == (long *)0x0) {
          plVar11 = plVar22 + 1;
          goto code_r0x003d53b6;
        }
      }
      plVar17 = (long *)*plVar22;
      plVar11 = plVar22;
    } while ((long *)*plVar22 != (long *)0x0);
  }
code_r0x003d53b6:
  apuStack_e8[0] = &UNK_003d53c0;
  puVar7 = (undefined8 *)_Znwm(0x28);
  puVar7[4] = plVar21;
  *puVar7 = 0;
  puVar7[1] = 0;
  puVar7[2] = plVar22;
  *plVar11 = (long)puVar7;
  lVar9 = *(long *)plVar15[0x13];
  if (lVar9 != 0) {
    plVar15[0x13] = lVar9;
    puVar7 = (undefined8 *)*plVar11;
  }
  apuStack_e8[0] = &UNK_003d53fb;
  func_0x003d6af0(plVar15[0x14],puVar7);
  uVar12 = (undefined1)lVar9;
  plVar15[0x15] = plVar15[0x15] + 1;
code_r0x003d5402:
  apuStack_e8[0] = &UNK_003d540e;
  plVar17 = plVar21;
  plVar18 = plVar15;
  (**(code **)(*plVar15 + 0x10))();
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_70) {
    return plVar21;
  }
  apuStack_e8[0] = &UNK_003d5611;
  func_0x0099bd00();
  plStack_118 = *(long **)(in_FS_OFFSET + 0x28);
  plVar19 = plVar18;
  plStack_110 = plVar15;
  plStack_108 = plVar11;
  puStack_100 = puVar16;
  plStack_f8 = plVar21;
  plStack_f0 = plVar22;
  apuStack_e8[0] = (undefined *)&pcStack_40;
  if ((char)plVar18[2] == '\x01') {
    apuStack_130[0] = &UNK_003d564c;
    apuStack_e8[0] = (undefined *)&pcStack_40;
    plVar8 = (long *)_ZN7android4base11GetThreadIdEv();
    plVar21 = (long *)plVar18[1];
    if (plVar21 != plVar8) {
      do {
        apuStack_130[0] = &UNK_003d56b2;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (auStack_120,&UNK_00167a35,0xb7,6,0,0xffffffff);
        apuStack_130[0] = &UNK_003d56ba;
        uVar10 = _ZN7android4base10LogMessage6streamEv(auStack_120);
        apuStack_130[0] = &UNK_003d56ce;
        uVar10 = func_0x0032eb30(uVar10,&UNK_00165d45,0xe);
        apuStack_130[0] = &UNK_003d56e2;
        uVar10 = func_0x0032eb30(uVar10,&UNK_0018ad38,0x12);
        apuStack_130[0] = &UNK_003d56f2;
        uVar10 = func_0x0032eb30(uVar10,&UNK_0015ae05,1);
        apuStack_130[0] = &UNK_003d5706;
        uVar10 = func_0x0032eb30(uVar10,&UNK_0015aef8,2);
        apuStack_130[0] = &UNK_003d5716;
        uVar10 = func_0x0032eb30(uVar10,&UNK_0015ae05,1);
        apuStack_130[0] = &UNK_003d572a;
        uVar10 = func_0x0032eb30(uVar10,&UNK_00183451,0x1c);
        apuStack_130[0] = &UNK_003d573e;
        uVar10 = func_0x0032eb30(uVar10,&UNK_0015b0d7,0x15);
        apuStack_130[0] = &UNK_003d5749;
        uVar10 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar10,plVar21);
        apuStack_130[0] = &UNK_003d575d;
        uVar10 = func_0x0032eb30(uVar10,&UNK_00165f20,0x1f);
        apuStack_130[0] = &UNK_003d5768;
        uVar10 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar10,plVar8);
        apuStack_130[0] = &UNK_003d5778;
        func_0x0032eb30(uVar10,&UNK_0017b788,2);
        apuStack_130[0] = &UNK_003d5780;
        _ZN7android4base10LogMessageD2Ev(auStack_120);
      } while( true );
    }
  }
  if (*(long **)(in_FS_OFFSET + 0x28) == plStack_118) {
    return *(long **)(in_FS_OFFSET + 0x28);
  }
  apuStack_130[0] = &UNK_003d578a;
  func_0x0099bd00();
  lStack_160 = *(long *)(in_FS_OFFSET + 0x28);
  apuStack_178[0] = &UNK_003d57bf;
  plVar18 = plVar17;
  plVar8 = plVar17;
  plStack_158 = plVar15;
  plStack_150 = plVar11;
  puStack_148 = puVar16;
  plStack_140 = plVar21;
  plStack_138 = plVar22;
  apuStack_130[0] = (undefined *)apuStack_e8;
  _ZNK15fdevent_context17CheckLooperThreadEv();
  if (extraout_RDX_00 == 0) {
    *(undefined4 *)plVar19 = 0xffffffff;
code_r0x003d5845:
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_160) {
      return plVar19;
    }
    apuStack_178[0] = &UNK_003d5af8;
    func_0x0099bd00();
    plStack_1a0 = *(long **)(in_FS_OFFSET + 0x28);
    uVar20 = extraout_RDX_00;
    plStack_198 = plVar15;
    uStack_190 = extraout_RDX_00;
    plStack_188 = plVar19;
    plStack_180 = plVar17;
    apuStack_178[0] = (undefined *)apuStack_130;
    if ((extraout_RDX_01 & 8) != 0) {
      plVar15 = &lStack_1a8;
      uVar20 = extraout_RDX_01 & 0xffffffff;
      uVar12 = 6;
      puStack_1b0 = &UNK_003d5b7f;
      apuStack_178[0] = (undefined *)apuStack_130;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (plVar15,&UNK_00167a35,0x6d,6,0,0xffffffff);
      puStack_1b0 = &UNK_003d5b87;
      uVar10 = _ZN7android4base10LogMessage6streamEv(plVar15);
      puStack_1b0 = &UNK_003d5b9b;
      uVar10 = func_0x0032eb30(uVar10,&UNK_0017ba7b,0x25);
      puStack_1b0 = &UNK_003d5baf;
      func_0x0032eb30(uVar10,&UNK_0015ae05,1);
      puStack_1b0 = &UNK_003d5bb7;
      _ZN7android4base10LogMessageD2Ev(plVar15);
      plVar19 = plVar8;
      plVar17 = plVar18;
    }
    puStack_1b0 = &UNK_003d5b2d;
    (**(code **)(*plVar8 + 0x20))();
    if (*(long **)(in_FS_OFFSET + 0x28) == plStack_1a0) {
      return *(long **)(in_FS_OFFSET + 0x28);
    }
    puStack_1b0 = &UNK_003d5bca;
    func_0x0099bd00();
    plStack_1d8 = *(long **)(in_FS_OFFSET + 0x28);
    plStack_1d0 = plVar15;
    uStack_1c8 = uVar20;
    plStack_1c0 = plVar19;
    plStack_1b8 = plVar17;
    puStack_1b0 = (undefined *)apuStack_178;
    if ((extraout_RDX_02 & 8) != 0) {
      uVar12 = 6;
      puStack_1b0 = (undefined *)apuStack_178;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_1e0,&UNK_00167a35,0x72,6,0,0xffffffff);
      uVar10 = _ZN7android4base10LogMessage6streamEv(auStack_1e0);
      uVar10 = func_0x0032eb30(uVar10,&UNK_0017ba7b,0x25);
      func_0x0032eb30(uVar10,&UNK_0015ae05,1);
      _ZN7android4base10LogMessageD2Ev(auStack_1e0);
    }
    (**(code **)(*plVar8 + 0x20))();
    if (*(long **)(in_FS_OFFSET + 0x28) == plStack_1d8) {
      return *(long **)(in_FS_OFFSET + 0x28);
    }
    func_0x0099bd00();
    _ZNK15fdevent_context17CheckLooperThreadEv();
    plVar18[2] = extraout_RDX_03;
    *(undefined1 *)(plVar18 + 3) = uVar12;
    plVar11 = (long *)_ZNSt3__16chrono12steady_clock3nowEv();
    plVar18[4] = (long)plVar11;
    return plVar11;
  }
  apuStack_178[0] = &UNK_003d57d0;
  (**(code **)(*plVar17 + 0x18))(plVar17,extraout_RDX_00);
  auStack_168[0] = *(undefined4 *)(extraout_RDX_00 + 8);
  *(undefined4 *)(extraout_RDX_00 + 8) = 0xffffffff;
  *(undefined4 *)plVar19 = auStack_168[0];
  apuStack_178[0] = &UNK_003d57f1;
  lVar9 = _ZNSt3__16__treeINS_12__value_typeIi7fdeventEENS_19__map_value_compareIiNS_4pairIKiS2_EENS_4lessIiEEEENS_9allocatorIS7_EEE14__erase_uniqueIiEEmRKT_
                    (plVar17 + 4,auStack_168);
  if (lVar9 != 1) {
    do {
      apuStack_178[0] = &UNK_003d5a22;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_168,&UNK_00167a35,0x65,6,0,0xffffffff);
      apuStack_178[0] = &UNK_003d5a2a;
      uVar10 = _ZN7android4base10LogMessage6streamEv(auStack_168);
      apuStack_178[0] = &UNK_003d5a3e;
      uVar10 = func_0x0032eb30(uVar10,&UNK_00165d45,0xe);
      apuStack_178[0] = &UNK_003d5a52;
      uVar10 = func_0x0032eb30(uVar10,&UNK_00177111,3);
      apuStack_178[0] = &UNK_003d5a62;
      uVar10 = func_0x0032eb30(uVar10,&UNK_0015ae05,1);
      apuStack_178[0] = &UNK_003d5a76;
      uVar10 = func_0x0032eb30(uVar10,&UNK_0015aef8,2);
      apuStack_178[0] = &UNK_003d5a86;
      uVar10 = func_0x0032eb30(uVar10,&UNK_0015ae05,1);
      apuStack_178[0] = &UNK_003d5a9a;
      uVar10 = func_0x0032eb30(uVar10,&UNK_001722e6,6);
      apuStack_178[0] = &UNK_003d5aae;
      uVar10 = func_0x0032eb30(uVar10,&UNK_0018ad31,6);
      apuStack_178[0] = &UNK_003d5abb;
      uVar10 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar10,1);
      apuStack_178[0] = &UNK_003d5acb;
      uVar10 = func_0x0032eb30(uVar10,&UNK_00177115,9);
      apuStack_178[0] = &UNK_003d5ad6;
      uVar10 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar10,lVar9);
      apuStack_178[0] = &UNK_003d5ae6;
      func_0x0032eb30(uVar10,&UNK_0017b788,2);
      apuStack_178[0] = &UNK_003d5aee;
      _ZN7android4base10LogMessageD2Ev(auStack_168);
    } while( true );
  }
  plVar11 = (long *)plVar17[0x14];
  if (plVar11 != (long *)0x0) {
    plVar15 = plVar11;
    do {
      while ((ulong)plVar15[4] <= extraout_RDX_00) {
        if (extraout_RDX_00 <= (ulong)plVar15[4]) {
          if (plVar15 != plVar17 + 0x14) {
            plVar21 = plVar15;
            plVar22 = (long *)plVar15[1];
            if ((long *)plVar15[1] == (long *)0x0) {
              do {
                plVar18 = (long *)plVar21[2];
                bVar23 = plVar21 != (long *)*plVar18;
                plVar21 = plVar18;
              } while (bVar23);
            }
            else {
              do {
                plVar18 = plVar22;
                plVar22 = (long *)*plVar18;
              } while ((long *)*plVar18 != (long *)0x0);
              plVar21 = (long *)0x0;
            }
            uVar12 = SUB81(plVar21,0);
            if ((long *)plVar17[0x13] == plVar15) {
              plVar17[0x13] = (long)plVar18;
            }
            plVar17[0x15] = plVar17[0x15] + -1;
            apuStack_178[0] = &UNK_003d59cb;
            func_0x003d6d50(plVar11,plVar15);
            plVar18 = (long *)0x28;
            apuStack_178[0] = &UNK_003d59d8;
            plVar8 = plVar15;
            _ZdaPvSt11align_val_t();
            goto code_r0x003d5845;
          }
          goto code_r0x003d5890;
        }
        plVar15 = (long *)plVar15[1];
        if (plVar15 == (long *)0x0) goto code_r0x003d5890;
      }
      plVar15 = (long *)*plVar15;
    } while (plVar15 != (long *)0x0);
  }
code_r0x003d5890:
  do {
    apuStack_178[0] = &UNK_003d58b6;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (auStack_168,&UNK_00167a35,0x67,6,0,0xffffffff);
    apuStack_178[0] = &UNK_003d58be;
    uVar10 = _ZN7android4base10LogMessage6streamEv(auStack_168);
    apuStack_178[0] = &UNK_003d58d2;
    uVar10 = func_0x0032eb30(uVar10,&UNK_00165d45,0xe);
    apuStack_178[0] = &UNK_003d58e6;
    uVar10 = func_0x0032eb30(uVar10,&UNK_00177111,3);
    apuStack_178[0] = &UNK_003d58fd;
    uVar10 = func_0x0032eb30(uVar10,&UNK_0015ae05,1);
    apuStack_178[0] = &UNK_003d5911;
    uVar10 = func_0x0032eb30(uVar10,&UNK_0015aef8,2);
    apuStack_178[0] = &UNK_003d5921;
    uVar10 = func_0x0032eb30(uVar10,&UNK_0015ae05,1);
    apuStack_178[0] = &UNK_003d5935;
    uVar10 = func_0x0032eb30(uVar10,&UNK_001722e6,6);
    apuStack_178[0] = &UNK_003d5949;
    uVar10 = func_0x0032eb30(uVar10,&UNK_0018ad31,6);
    apuStack_178[0] = &UNK_003d5956;
    uVar10 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar10,1);
    apuStack_178[0] = &UNK_003d596a;
    uVar10 = func_0x0032eb30(uVar10,&UNK_00177115,9);
    apuStack_178[0] = &UNK_003d5974;
    uVar10 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar10,0);
    apuStack_178[0] = &UNK_003d5988;
    func_0x0032eb30(uVar10,&UNK_0017b788,2);
    apuStack_178[0] = &UNK_003d5990;
    _ZN7android4base10LogMessageD2Ev(auStack_168);
  } while( true );
}


