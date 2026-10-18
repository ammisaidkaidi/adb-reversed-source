// Function: _ZN15fdevent_context6CreateEN7android4base14unique_fd_implINS1_13DefaultCloserEEENSt3__17variantIJPFvijPvEPFvP7fdeventjS7_EEEES7_
// Address: 003d5220
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long * _ZN15fdevent_context6CreateEN7android4base14unique_fd_implINS1_13DefaultCloserEEENSt3__17variantIJPFvijPvEPFvP7fdeventjS7_EEEES7_
                 (long *param_1,uint *param_2,undefined8 param_3,undefined4 param_4,
                 undefined8 param_5)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint *puVar4;
  char cVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined1 uVar11;
  long lVar12;
  ulong extraout_RDX;
  ulong extraout_RDX_00;
  ulong extraout_RDX_01;
  long extraout_RDX_02;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  ulong uVar16;
  long *plVar17;
  long *plVar18;
  long in_FS_OFFSET;
  bool bVar19;
  undefined1 auVar20 [16];
  undefined1 auStack_1a8 [8];
  long *plStack_1a0;
  long *plStack_198;
  ulong uStack_190;
  long *plStack_188;
  long *plStack_180;
  undefined *puStack_178;
  long lStack_170;
  long *plStack_168;
  long *plStack_160;
  ulong uStack_158;
  long *plStack_150;
  long *plStack_148;
  undefined *apuStack_140 [2];
  undefined4 auStack_130 [2];
  long lStack_128;
  long *plStack_120;
  long *plStack_118;
  uint *puStack_110;
  long *plStack_108;
  long *plStack_100;
  undefined *apuStack_f8 [2];
  undefined1 auStack_e8 [8];
  long *plStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  uint *puStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  undefined *apuStack_b0 [2];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_8c;
  uint *puStack_88;
  uint uStack_7c;
  long lStack_78;
  int iStack_70;
  undefined2 uStack_6c;
  undefined1 uStack_68;
  undefined1 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  apuStack_b0[0] = &UNK_003d5256;
  uStack_a0 = param_3;
  _ZNK15fdevent_context17CheckLooperThreadEv();
  uStack_7c = *param_2;
  if ((int)uStack_7c < 0) {
    do {
      apuStack_b0[0] = &UNK_003d5472;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&lStack_78,&UNK_00167a35,0x40,6,0,0xffffffff);
      apuStack_b0[0] = &UNK_003d547a;
      uVar9 = _ZN7android4base10LogMessage6streamEv(&lStack_78);
      apuStack_b0[0] = &UNK_003d548e;
      uVar9 = func_0x0032eb30(uVar9,&UNK_00165d45,0xe);
      apuStack_b0[0] = &UNK_003d54a2;
      uVar9 = func_0x0032eb30(uVar9,&UNK_00183254,8);
      apuStack_b0[0] = &UNK_003d54b2;
      uVar9 = func_0x0032eb30(uVar9,&UNK_0015ae05,1);
      apuStack_b0[0] = &UNK_003d54c6;
      uVar9 = func_0x0032eb30(uVar9,&UNK_00181913,2);
      apuStack_b0[0] = &UNK_003d54d6;
      uVar9 = func_0x0032eb30(uVar9,&UNK_0015ae05,1);
      apuStack_b0[0] = &UNK_003d54ea;
      uVar9 = func_0x0032eb30(uVar9,&UNK_0017eb28,1);
      apuStack_b0[0] = &UNK_003d54fe;
      uVar9 = func_0x0032eb30(uVar9,&UNK_00162e22,0xb);
      apuStack_b0[0] = &UNK_003d5509;
      uVar9 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(uVar9,uStack_7c);
      apuStack_b0[0] = &UNK_003d5519;
      uVar9 = func_0x0032eb30(uVar9,&UNK_0015c7f9,4);
      apuStack_b0[0] = &UNK_003d5523;
      uVar9 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(uVar9,0);
      apuStack_b0[0] = &UNK_003d5533;
      func_0x0032eb30(uVar9,&UNK_0017b788,2);
      apuStack_b0[0] = &UNK_003d553b;
      _ZN7android4base10LogMessageD2Ev(&lStack_78);
    } while( true );
  }
  lStack_78 = 0;
  iStack_70 = -1;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  apuStack_b0[0] = &UNK_003d52bc;
  uStack_98 = param_5;
  uStack_8c = param_4;
  auVar20 = func_0x003d69e0(param_1 + 4,param_1 + 4,&uStack_7c,&lStack_78);
  lVar8 = auVar20._0_8_;
  apuStack_b0[0] = &UNK_003d52c7;
  puStack_88 = (uint *)func_0x0099bce0();
  uVar1 = *puStack_88;
  if (iStack_70 != -1) {
    apuStack_b0[0] = &UNK_003d52db;
    func_0x0099bd10();
  }
  *puStack_88 = uVar1;
  if ((auVar20._8_8_ & 1) == 0) {
    apuStack_b0[0] = &UNK_003d5566;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (&lStack_78,&UNK_00167a35,0x45,6,0,0xffffffff);
    apuStack_b0[0] = &UNK_003d556e;
    uVar9 = _ZN7android4base10LogMessage6streamEv(&lStack_78);
    apuStack_b0[0] = &UNK_003d5582;
    uVar9 = func_0x0032eb30(uVar9,&UNK_0016aefe,0x16);
    apuStack_b0[0] = &UNK_003d5596;
    func_0x0032eb30(uVar9,&UNK_0015ae05,1);
    apuStack_b0[0] = &UNK_003d559e;
    _ZN7android4base10LogMessageD2Ev(&lStack_78);
  }
  lVar3 = param_1[7];
  lVar12 = lVar3 + 1;
  param_1[7] = lVar12;
  *(long *)(lVar8 + 0x28) = lVar3;
  *(undefined2 *)(lVar8 + 0x34) = 0;
  uVar1 = *param_2;
  plVar10 = (long *)(ulong)uVar1;
  *param_2 = 0xffffffff;
  uVar2 = *puStack_88;
  if (*(int *)(lVar8 + 0x30) != -1) {
    apuStack_b0[0] = &UNK_003d5320;
    func_0x0099bd10();
  }
  uVar11 = (undefined1)lVar12;
  *(uint *)(lVar8 + 0x30) = uVar1;
  *puStack_88 = uVar2;
  *(undefined8 *)(lVar8 + 0x50) = uStack_a0;
  *(undefined4 *)(lVar8 + 0x58) = uStack_8c;
  *(undefined8 *)(lVar8 + 0x60) = uStack_98;
  apuStack_b0[0] = &UNK_003d5356;
  cVar5 = _Z19set_file_block_modeN7android4base11borrowed_fdEb(*(undefined4 *)(lVar8 + 0x30),0);
  if (cVar5 == '\0') {
    apuStack_b0[0] = &UNK_003d5366;
    cVar5 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4,0);
    puVar4 = puStack_88;
    if (cVar5 != '\0') {
      uVar1 = *puStack_88;
      param_2 = (uint *)(ulong)uVar1;
      plVar10 = &lStack_78;
      uVar11 = 4;
      apuStack_b0[0] = &UNK_003d55d4;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (plVar10,&UNK_00167a35,0x51,4,0,0xffffffff);
      apuStack_b0[0] = &UNK_003d55dc;
      uVar9 = _ZN7android4base10LogMessage6streamEv(plVar10);
      apuStack_b0[0] = &UNK_003d55f0;
      uVar9 = func_0x0032eb30(uVar9,&UNK_0017ba53,0x27);
      apuStack_b0[0] = &UNK_003d55fc;
      _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(uVar9,*(undefined4 *)(lVar8 + 0x30));
      apuStack_b0[0] = &UNK_003d5604;
      _ZN7android4base10LogMessageD2Ev(plVar10);
      *puVar4 = uVar1;
    }
  }
  plVar17 = (long *)(lVar8 + 0x28);
  plVar13 = (long *)param_1[0x14];
  if ((long *)param_1[0x14] == (long *)0x0) {
    plVar18 = param_1 + 0x14;
    plVar10 = plVar18;
  }
  else {
    do {
      while (plVar18 = plVar13, plVar17 < (long *)plVar18[4]) {
        plVar13 = (long *)*plVar18;
        plVar10 = plVar18;
        if ((long *)*plVar18 == (long *)0x0) goto code_r0x003d53b6;
      }
      if (plVar17 <= (long *)plVar18[4]) goto code_r0x003d5402;
      plVar13 = (long *)plVar18[1];
    } while ((long *)plVar18[1] != (long *)0x0);
    plVar10 = plVar18 + 1;
  }
code_r0x003d53b6:
  apuStack_b0[0] = &UNK_003d53c0;
  puVar6 = (undefined8 *)_Znwm(0x28);
  puVar6[4] = plVar17;
  *puVar6 = 0;
  puVar6[1] = 0;
  puVar6[2] = plVar18;
  *plVar10 = (long)puVar6;
  lVar8 = *(long *)param_1[0x13];
  if (lVar8 != 0) {
    param_1[0x13] = lVar8;
    puVar6 = (undefined8 *)*plVar10;
  }
  apuStack_b0[0] = &UNK_003d53fb;
  func_0x003d6af0(param_1[0x14],puVar6);
  uVar11 = (undefined1)lVar8;
  param_1[0x15] = param_1[0x15] + 1;
code_r0x003d5402:
  apuStack_b0[0] = &UNK_003d540e;
  plVar13 = plVar17;
  plVar14 = param_1;
  (**(code **)(*param_1 + 0x10))();
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return plVar17;
  }
  apuStack_b0[0] = &UNK_003d5611;
  func_0x0099bd00();
  plStack_e0 = *(long **)(in_FS_OFFSET + 0x28);
  plVar15 = plVar14;
  plStack_d8 = param_1;
  plStack_d0 = plVar10;
  puStack_c8 = param_2;
  plStack_c0 = plVar17;
  plStack_b8 = plVar18;
  apuStack_b0[0] = &stack0xfffffffffffffff8;
  if ((char)plVar14[2] == '\x01') {
    apuStack_f8[0] = &UNK_003d564c;
    apuStack_b0[0] = &stack0xfffffffffffffff8;
    plVar7 = (long *)_ZN7android4base11GetThreadIdEv();
    plVar17 = (long *)plVar14[1];
    if (plVar17 != plVar7) {
      do {
        apuStack_f8[0] = &UNK_003d56b2;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (auStack_e8,&UNK_00167a35,0xb7,6,0,0xffffffff);
        apuStack_f8[0] = &UNK_003d56ba;
        uVar9 = _ZN7android4base10LogMessage6streamEv(auStack_e8);
        apuStack_f8[0] = &UNK_003d56ce;
        uVar9 = func_0x0032eb30(uVar9,&UNK_00165d45,0xe);
        apuStack_f8[0] = &UNK_003d56e2;
        uVar9 = func_0x0032eb30(uVar9,&UNK_0018ad38,0x12);
        apuStack_f8[0] = &UNK_003d56f2;
        uVar9 = func_0x0032eb30(uVar9,&UNK_0015ae05,1);
        apuStack_f8[0] = &UNK_003d5706;
        uVar9 = func_0x0032eb30(uVar9,&UNK_0015aef8,2);
        apuStack_f8[0] = &UNK_003d5716;
        uVar9 = func_0x0032eb30(uVar9,&UNK_0015ae05,1);
        apuStack_f8[0] = &UNK_003d572a;
        uVar9 = func_0x0032eb30(uVar9,&UNK_00183451,0x1c);
        apuStack_f8[0] = &UNK_003d573e;
        uVar9 = func_0x0032eb30(uVar9,&UNK_0015b0d7,0x15);
        apuStack_f8[0] = &UNK_003d5749;
        uVar9 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar9,plVar17);
        apuStack_f8[0] = &UNK_003d575d;
        uVar9 = func_0x0032eb30(uVar9,&UNK_00165f20,0x1f);
        apuStack_f8[0] = &UNK_003d5768;
        uVar9 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar9,plVar7);
        apuStack_f8[0] = &UNK_003d5778;
        func_0x0032eb30(uVar9,&UNK_0017b788,2);
        apuStack_f8[0] = &UNK_003d5780;
        _ZN7android4base10LogMessageD2Ev(auStack_e8);
      } while( true );
    }
  }
  if (*(long **)(in_FS_OFFSET + 0x28) == plStack_e0) {
    return *(long **)(in_FS_OFFSET + 0x28);
  }
  apuStack_f8[0] = &UNK_003d578a;
  func_0x0099bd00();
  lStack_128 = *(long *)(in_FS_OFFSET + 0x28);
  apuStack_140[0] = &UNK_003d57bf;
  plVar14 = plVar13;
  plVar7 = plVar13;
  plStack_120 = param_1;
  plStack_118 = plVar10;
  puStack_110 = param_2;
  plStack_108 = plVar17;
  plStack_100 = plVar18;
  apuStack_f8[0] = (undefined *)apuStack_b0;
  _ZNK15fdevent_context17CheckLooperThreadEv();
  if (extraout_RDX == 0) {
    *(undefined4 *)plVar15 = 0xffffffff;
code_r0x003d5845:
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_128) {
      return plVar15;
    }
    apuStack_140[0] = &UNK_003d5af8;
    func_0x0099bd00();
    plStack_168 = *(long **)(in_FS_OFFSET + 0x28);
    uVar16 = extraout_RDX;
    plStack_160 = param_1;
    uStack_158 = extraout_RDX;
    plStack_150 = plVar15;
    plStack_148 = plVar13;
    apuStack_140[0] = (undefined *)apuStack_f8;
    if ((extraout_RDX_00 & 8) != 0) {
      param_1 = &lStack_170;
      uVar16 = extraout_RDX_00 & 0xffffffff;
      uVar11 = 6;
      puStack_178 = &UNK_003d5b7f;
      apuStack_140[0] = (undefined *)apuStack_f8;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (param_1,&UNK_00167a35,0x6d,6,0,0xffffffff);
      puStack_178 = &UNK_003d5b87;
      uVar9 = _ZN7android4base10LogMessage6streamEv(param_1);
      puStack_178 = &UNK_003d5b9b;
      uVar9 = func_0x0032eb30(uVar9,&UNK_0017ba7b,0x25);
      puStack_178 = &UNK_003d5baf;
      func_0x0032eb30(uVar9,&UNK_0015ae05,1);
      puStack_178 = &UNK_003d5bb7;
      _ZN7android4base10LogMessageD2Ev(param_1);
      plVar15 = plVar7;
      plVar13 = plVar14;
    }
    puStack_178 = &UNK_003d5b2d;
    (**(code **)(*plVar7 + 0x20))();
    if (*(long **)(in_FS_OFFSET + 0x28) != plStack_168) {
      puStack_178 = &UNK_003d5bca;
      func_0x0099bd00();
      plStack_1a0 = *(long **)(in_FS_OFFSET + 0x28);
      plStack_198 = param_1;
      uStack_190 = uVar16;
      plStack_188 = plVar15;
      plStack_180 = plVar13;
      puStack_178 = (undefined *)apuStack_140;
      if ((extraout_RDX_01 & 8) != 0) {
        uVar11 = 6;
        puStack_178 = (undefined *)apuStack_140;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (auStack_1a8,&UNK_00167a35,0x72,6,0,0xffffffff);
        uVar9 = _ZN7android4base10LogMessage6streamEv(auStack_1a8);
        uVar9 = func_0x0032eb30(uVar9,&UNK_0017ba7b,0x25);
        func_0x0032eb30(uVar9,&UNK_0015ae05,1);
        _ZN7android4base10LogMessageD2Ev(auStack_1a8);
      }
      (**(code **)(*plVar7 + 0x20))();
      if (*(long **)(in_FS_OFFSET + 0x28) != plStack_1a0) {
        func_0x0099bd00();
        _ZNK15fdevent_context17CheckLooperThreadEv();
        plVar14[2] = extraout_RDX_02;
        *(undefined1 *)(plVar14 + 3) = uVar11;
        plVar10 = (long *)_ZNSt3__16chrono12steady_clock3nowEv();
        plVar14[4] = (long)plVar10;
        return plVar10;
      }
      return *(long **)(in_FS_OFFSET + 0x28);
    }
    return *(long **)(in_FS_OFFSET + 0x28);
  }
  apuStack_140[0] = &UNK_003d57d0;
  (**(code **)(*plVar13 + 0x18))(plVar13,extraout_RDX);
  auStack_130[0] = *(undefined4 *)(extraout_RDX + 8);
  *(undefined4 *)(extraout_RDX + 8) = 0xffffffff;
  *(undefined4 *)plVar15 = auStack_130[0];
  apuStack_140[0] = &UNK_003d57f1;
  lVar8 = _ZNSt3__16__treeINS_12__value_typeIi7fdeventEENS_19__map_value_compareIiNS_4pairIKiS2_EENS_4lessIiEEEENS_9allocatorIS7_EEE14__erase_uniqueIiEEmRKT_
                    (plVar13 + 4,auStack_130);
  if (lVar8 != 1) {
    do {
      apuStack_140[0] = &UNK_003d5a22;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_130,&UNK_00167a35,0x65,6,0,0xffffffff);
      apuStack_140[0] = &UNK_003d5a2a;
      uVar9 = _ZN7android4base10LogMessage6streamEv(auStack_130);
      apuStack_140[0] = &UNK_003d5a3e;
      uVar9 = func_0x0032eb30(uVar9,&UNK_00165d45,0xe);
      apuStack_140[0] = &UNK_003d5a52;
      uVar9 = func_0x0032eb30(uVar9,&UNK_00177111,3);
      apuStack_140[0] = &UNK_003d5a62;
      uVar9 = func_0x0032eb30(uVar9,&UNK_0015ae05,1);
      apuStack_140[0] = &UNK_003d5a76;
      uVar9 = func_0x0032eb30(uVar9,&UNK_0015aef8,2);
      apuStack_140[0] = &UNK_003d5a86;
      uVar9 = func_0x0032eb30(uVar9,&UNK_0015ae05,1);
      apuStack_140[0] = &UNK_003d5a9a;
      uVar9 = func_0x0032eb30(uVar9,&UNK_001722e6,6);
      apuStack_140[0] = &UNK_003d5aae;
      uVar9 = func_0x0032eb30(uVar9,&UNK_0018ad31,6);
      apuStack_140[0] = &UNK_003d5abb;
      uVar9 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar9,1);
      apuStack_140[0] = &UNK_003d5acb;
      uVar9 = func_0x0032eb30(uVar9,&UNK_00177115,9);
      apuStack_140[0] = &UNK_003d5ad6;
      uVar9 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar9,lVar8);
      apuStack_140[0] = &UNK_003d5ae6;
      func_0x0032eb30(uVar9,&UNK_0017b788,2);
      apuStack_140[0] = &UNK_003d5aee;
      _ZN7android4base10LogMessageD2Ev(auStack_130);
    } while( true );
  }
  plVar10 = (long *)plVar13[0x14];
  if (plVar10 != (long *)0x0) {
    param_1 = plVar10;
    do {
      while (extraout_RDX < (ulong)param_1[4]) {
        param_1 = (long *)*param_1;
        if (param_1 == (long *)0x0) goto code_r0x003d5890;
      }
      if (extraout_RDX <= (ulong)param_1[4]) {
        if (param_1 != plVar13 + 0x14) {
          plVar17 = param_1;
          plVar18 = (long *)param_1[1];
          if ((long *)param_1[1] == (long *)0x0) {
            do {
              plVar14 = (long *)plVar17[2];
              bVar19 = plVar17 != (long *)*plVar14;
              plVar17 = plVar14;
            } while (bVar19);
          }
          else {
            do {
              plVar14 = plVar18;
              plVar18 = (long *)*plVar14;
            } while ((long *)*plVar14 != (long *)0x0);
            plVar17 = (long *)0x0;
          }
          uVar11 = SUB81(plVar17,0);
          if ((long *)plVar13[0x13] == param_1) {
            plVar13[0x13] = (long)plVar14;
          }
          plVar13[0x15] = plVar13[0x15] + -1;
          apuStack_140[0] = &UNK_003d59cb;
          func_0x003d6d50(plVar10,param_1);
          plVar14 = (long *)0x28;
          apuStack_140[0] = &UNK_003d59d8;
          plVar7 = param_1;
          _ZdaPvSt11align_val_t();
          goto code_r0x003d5845;
        }
        break;
      }
      param_1 = (long *)param_1[1];
    } while (param_1 != (long *)0x0);
  }
code_r0x003d5890:
  do {
    apuStack_140[0] = &UNK_003d58b6;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (auStack_130,&UNK_00167a35,0x67,6,0,0xffffffff);
    apuStack_140[0] = &UNK_003d58be;
    uVar9 = _ZN7android4base10LogMessage6streamEv(auStack_130);
    apuStack_140[0] = &UNK_003d58d2;
    uVar9 = func_0x0032eb30(uVar9,&UNK_00165d45,0xe);
    apuStack_140[0] = &UNK_003d58e6;
    uVar9 = func_0x0032eb30(uVar9,&UNK_00177111,3);
    apuStack_140[0] = &UNK_003d58fd;
    uVar9 = func_0x0032eb30(uVar9,&UNK_0015ae05,1);
    apuStack_140[0] = &UNK_003d5911;
    uVar9 = func_0x0032eb30(uVar9,&UNK_0015aef8,2);
    apuStack_140[0] = &UNK_003d5921;
    uVar9 = func_0x0032eb30(uVar9,&UNK_0015ae05,1);
    apuStack_140[0] = &UNK_003d5935;
    uVar9 = func_0x0032eb30(uVar9,&UNK_001722e6,6);
    apuStack_140[0] = &UNK_003d5949;
    uVar9 = func_0x0032eb30(uVar9,&UNK_0018ad31,6);
    apuStack_140[0] = &UNK_003d5956;
    uVar9 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar9,1);
    apuStack_140[0] = &UNK_003d596a;
    uVar9 = func_0x0032eb30(uVar9,&UNK_00177115,9);
    apuStack_140[0] = &UNK_003d5974;
    uVar9 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar9,0);
    apuStack_140[0] = &UNK_003d5988;
    func_0x0032eb30(uVar9,&UNK_0017b788,2);
    apuStack_140[0] = &UNK_003d5990;
    _ZN7android4base10LogMessageD2Ev(auStack_130);
  } while( true );
}


