// Function: _ZN4absl12lts_2026052612log_internal19CheckstrcmptrueImplEPKcS3_S3_
// Address: 004fc8e0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


byte * _ZN4absl12lts_2026052612log_internal19CheckstrcmptrueImplEPKcS3_S3_
                 (byte *param_1,byte *param_2,long param_3)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  long extraout_RDX;
  long extraout_RDX_00;
  long extraout_RDX_01;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  long unaff_R12;
  long lVar9;
  undefined8 unaff_R13;
  byte *unaff_R14;
  byte *unaff_R15;
  long in_FS_OFFSET;
  undefined8 uStack_298;
  long lStack_290;
  undefined8 uStack_288;
  undefined *puStack_280;
  undefined8 uStack_278;
  byte *pbStack_270;
  undefined8 uStack_268;
  undefined *puStack_260;
  undefined8 uStack_258;
  byte *pbStack_250;
  undefined8 uStack_248;
  undefined *puStack_240;
  undefined8 uStack_238;
  long lStack_230;
  byte *pbStack_228;
  long lStack_220;
  undefined8 uStack_218;
  byte *pbStack_210;
  byte *pbStack_208;
  undefined *puStack_200;
  undefined8 uStack_1f0;
  long lStack_1e8;
  undefined8 uStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  byte *pbStack_1c8;
  undefined8 uStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  byte *pbStack_1a8;
  undefined8 uStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  long lStack_188;
  byte *pbStack_180;
  long lStack_178;
  undefined8 uStack_170;
  byte *pbStack_168;
  byte *pbStack_160;
  undefined *apuStack_158 [2];
  undefined8 uStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  byte *pbStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  byte *pbStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  byte *pbStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  byte *pbStack_c0;
  byte *pbStack_b8;
  undefined *apuStack_b0 [2];
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  byte *pbStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  byte *pbStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  pbVar4 = param_2;
  pbVar6 = param_1;
  if (param_1 == param_2) {
code_r0x004fc96b:
    pbVar2 = (byte *)0x0;
  }
  else {
    unaff_R12 = param_3;
    unaff_R14 = param_2;
    unaff_R15 = param_1;
    if (param_2 != (byte *)0x0 && param_1 != (byte *)0x0) {
      apuStack_b0[0] = &UNK_004fc927;
      iVar1 = func_0x0099bdd0();
      if (iVar1 == 0) goto code_r0x004fc96b;
    }
    apuStack_b0[0] = &UNK_004fc935;
    pbVar2 = (byte *)_Znwm(0x18);
    if (param_3 == 0) {
      uStack_a0 = 0;
      if (param_1 == (byte *)0x0) goto code_r0x004fc982;
code_r0x004fc951:
      apuStack_b0[0] = &UNK_004fc959;
      unaff_R13 = func_0x0099bcf0(param_1);
      if (param_2 != (byte *)0x0) goto code_r0x004fc961;
code_r0x004fc98a:
      uStack_50 = 0;
    }
    else {
      apuStack_b0[0] = &UNK_004fc945;
      uStack_a0 = func_0x0099bcf0(param_3);
      if (param_1 != (byte *)0x0) goto code_r0x004fc951;
code_r0x004fc982:
      unaff_R13 = 0;
      if (param_2 == (byte *)0x0) goto code_r0x004fc98a;
code_r0x004fc961:
      apuStack_b0[0] = &UNK_004fc969;
      uStack_50 = func_0x0099bcf0(param_2);
    }
    uStack_90 = uStack_a0;
    puStack_88 = &UNK_0016ebd4;
    uStack_80 = 2;
    puStack_68 = &UNK_001632e9;
    uStack_60 = 5;
    puStack_48 = &UNK_001692c7;
    uStack_40 = 1;
    pbVar4 = (byte *)&lStack_98;
    apuStack_b0[0] = &UNK_004fc9fe;
    lStack_98 = param_3;
    pbStack_78 = param_1;
    uStack_70 = unaff_R13;
    pbStack_58 = param_2;
    _ZN4absl12lts_2026052616strings_internal9CatPiecesESt16initializer_listINSt3__117basic_string_viewIcNS3_11char_traitsIcEEEEE
              (pbVar2,pbVar4,6);
    apuStack_b0[0] = &UNK_004fca06;
    pbVar6 = pbVar2;
    _ZN4absl12lts_2026052612DoIgnoreLeakEPKv();
    if ((*pbVar2 & 1) == 0) {
      pbVar2 = pbVar2 + 1;
    }
    else {
      pbVar2 = *(byte **)(pbVar2 + 0x10);
    }
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return pbVar2;
  }
  apuStack_b0[0] = &UNK_004fca3a;
  func_0x0099bd00();
  lStack_e0 = *(long *)(in_FS_OFFSET + 0x28);
  pbStack_d8 = pbVar2;
  lStack_d0 = unaff_R12;
  uStack_c8 = unaff_R13;
  pbStack_c0 = unaff_R14;
  pbStack_b8 = unaff_R15;
  apuStack_b0[0] = &stack0xfffffffffffffff8;
  if (pbVar6 == pbVar4) {
code_r0x004fca92:
    apuStack_158[0] = &UNK_004fca9c;
    pbVar3 = (byte *)_Znwm(0x18);
    if (extraout_RDX == 0) {
      uStack_148 = 0;
      if (pbVar6 == (byte *)0x0) goto code_r0x004fcae2;
code_r0x004fcab8:
      apuStack_158[0] = &UNK_004fcac0;
      unaff_R13 = func_0x0099bcf0(pbVar6);
      if (pbVar4 != (byte *)0x0) goto code_r0x004fcac8;
code_r0x004fcaea:
      uStack_f8 = 0;
    }
    else {
      apuStack_158[0] = &UNK_004fcaac;
      uStack_148 = func_0x0099bcf0(extraout_RDX);
      if (pbVar6 != (byte *)0x0) goto code_r0x004fcab8;
code_r0x004fcae2:
      unaff_R13 = 0;
      if (pbVar4 == (byte *)0x0) goto code_r0x004fcaea;
code_r0x004fcac8:
      apuStack_158[0] = &UNK_004fcad0;
      uStack_f8 = func_0x0099bcf0(pbVar4);
    }
    uStack_138 = uStack_148;
    puStack_130 = &UNK_0016ebd4;
    uStack_128 = 2;
    puStack_110 = &UNK_001632e9;
    uStack_108 = 5;
    puStack_f0 = &UNK_001692c7;
    uStack_e8 = 1;
    pbVar2 = (byte *)&lStack_140;
    apuStack_158[0] = &UNK_004fcb5e;
    lStack_140 = extraout_RDX;
    pbStack_120 = pbVar6;
    uStack_118 = unaff_R13;
    pbStack_100 = pbVar4;
    _ZN4absl12lts_2026052616strings_internal9CatPiecesESt16initializer_listINSt3__117basic_string_viewIcNS3_11char_traitsIcEEEEE
              (pbVar3,pbVar2,6);
    apuStack_158[0] = &UNK_004fcb66;
    pbVar7 = pbVar3;
    _ZN4absl12lts_2026052612DoIgnoreLeakEPKv();
    if ((*pbVar3 & 1) == 0) {
      pbVar3 = pbVar3 + 1;
    }
    else {
      pbVar3 = *(byte **)(pbVar3 + 0x10);
    }
  }
  else {
    pbVar2 = pbVar4;
    pbVar7 = pbVar6;
    apuStack_b0[0] = &stack0xfffffffffffffff8;
    if (pbVar4 != (byte *)0x0 && pbVar6 != (byte *)0x0) {
      apuStack_158[0] = &UNK_004fca87;
      apuStack_b0[0] = &stack0xfffffffffffffff8;
      iVar1 = func_0x0099bdd0();
      if (iVar1 == 0) goto code_r0x004fca92;
    }
    pbVar3 = (byte *)0x0;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_e0) {
    return pbVar3;
  }
  apuStack_158[0] = &UNK_004fcb9a;
  func_0x0099bd00();
  lStack_188 = *(long *)(in_FS_OFFSET + 0x28);
  pbVar5 = pbVar2;
  pbVar8 = pbVar7;
  lVar9 = extraout_RDX;
  pbStack_180 = pbVar3;
  lStack_178 = extraout_RDX;
  uStack_170 = unaff_R13;
  pbStack_168 = pbVar4;
  pbStack_160 = pbVar6;
  apuStack_158[0] = (undefined *)apuStack_b0;
  if (pbVar7 == pbVar2) {
code_r0x004fcc2b:
    pbVar3 = (byte *)0x0;
  }
  else {
    apuStack_158[0] = (undefined *)apuStack_b0;
    lVar9 = extraout_RDX_00;
    if (pbVar2 != (byte *)0x0 && pbVar7 != (byte *)0x0) {
      puStack_200 = &UNK_004fcbe7;
      apuStack_158[0] = (undefined *)apuStack_b0;
      iVar1 = func_0x0099c820();
      pbVar4 = pbVar2;
      pbVar6 = pbVar7;
      if (iVar1 == 0) goto code_r0x004fcc2b;
    }
    puStack_200 = &UNK_004fcbf5;
    pbVar3 = (byte *)_Znwm(0x18);
    if (extraout_RDX_00 == 0) {
      uStack_1f0 = 0;
      if (pbVar7 == (byte *)0x0) goto code_r0x004fcc42;
code_r0x004fcc11:
      puStack_200 = &UNK_004fcc19;
      unaff_R13 = func_0x0099bcf0(pbVar7);
      if (pbVar2 != (byte *)0x0) goto code_r0x004fcc21;
code_r0x004fcc4a:
      uStack_1a0 = 0;
    }
    else {
      puStack_200 = &UNK_004fcc05;
      uStack_1f0 = func_0x0099bcf0(extraout_RDX_00);
      if (pbVar7 != (byte *)0x0) goto code_r0x004fcc11;
code_r0x004fcc42:
      unaff_R13 = 0;
      if (pbVar2 == (byte *)0x0) goto code_r0x004fcc4a;
code_r0x004fcc21:
      puStack_200 = &UNK_004fcc29;
      uStack_1a0 = func_0x0099bcf0(pbVar2);
    }
    uStack_1e0 = uStack_1f0;
    puStack_1d8 = &UNK_0016ebd4;
    uStack_1d0 = 2;
    puStack_1b8 = &UNK_001632e9;
    uStack_1b0 = 5;
    puStack_198 = &UNK_001692c7;
    uStack_190 = 1;
    pbVar5 = (byte *)&lStack_1e8;
    puStack_200 = &UNK_004fccbe;
    lStack_1e8 = extraout_RDX_00;
    pbStack_1c8 = pbVar7;
    uStack_1c0 = unaff_R13;
    pbStack_1a8 = pbVar2;
    _ZN4absl12lts_2026052616strings_internal9CatPiecesESt16initializer_listINSt3__117basic_string_viewIcNS3_11char_traitsIcEEEEE
              (pbVar3,pbVar5,6);
    puStack_200 = &UNK_004fccc6;
    pbVar8 = pbVar3;
    _ZN4absl12lts_2026052612DoIgnoreLeakEPKv();
    if ((*pbVar3 & 1) == 0) {
      pbVar3 = pbVar3 + 1;
      pbVar4 = pbVar2;
      pbVar6 = pbVar7;
    }
    else {
      pbVar3 = *(byte **)(pbVar3 + 0x10);
      pbVar4 = pbVar2;
      pbVar6 = pbVar7;
    }
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_188) {
    return pbVar3;
  }
  puStack_200 = &UNK_004fccfa;
  func_0x0099bd00();
  lStack_230 = *(long *)(in_FS_OFFSET + 0x28);
  pbStack_228 = pbVar3;
  lStack_220 = lVar9;
  uStack_218 = unaff_R13;
  pbStack_210 = pbVar4;
  pbStack_208 = pbVar6;
  puStack_200 = (undefined *)apuStack_158;
  if (pbVar8 != pbVar5) {
    pbVar4 = pbVar5;
    pbVar6 = pbVar8;
    puStack_200 = (undefined *)apuStack_158;
    if (pbVar5 != (byte *)0x0 && pbVar8 != (byte *)0x0) {
      puStack_200 = (undefined *)apuStack_158;
      iVar1 = func_0x0099c820();
      if (iVar1 == 0) goto code_r0x004fcd52;
    }
    pbVar2 = (byte *)0x0;
    goto code_r0x004fce34;
  }
code_r0x004fcd52:
  pbVar2 = (byte *)_Znwm(0x18);
  if (extraout_RDX_01 == 0) {
    uStack_298 = 0;
    if (pbVar8 == (byte *)0x0) goto code_r0x004fcda2;
code_r0x004fcd78:
    uStack_268 = func_0x0099bcf0(pbVar8);
    if (pbVar5 != (byte *)0x0) goto code_r0x004fcd88;
code_r0x004fcdaa:
    uStack_248 = 0;
  }
  else {
    uStack_298 = func_0x0099bcf0(extraout_RDX_01);
    if (pbVar8 != (byte *)0x0) goto code_r0x004fcd78;
code_r0x004fcda2:
    uStack_268 = 0;
    if (pbVar5 == (byte *)0x0) goto code_r0x004fcdaa;
code_r0x004fcd88:
    uStack_248 = func_0x0099bcf0(pbVar5);
  }
  uStack_288 = uStack_298;
  puStack_280 = &UNK_0016ebd4;
  uStack_278 = 2;
  puStack_260 = &UNK_001632e9;
  uStack_258 = 5;
  puStack_240 = &UNK_001692c7;
  uStack_238 = 1;
  pbVar4 = (byte *)&lStack_290;
  lStack_290 = extraout_RDX_01;
  pbStack_270 = pbVar8;
  pbStack_250 = pbVar5;
  _ZN4absl12lts_2026052616strings_internal9CatPiecesESt16initializer_listINSt3__117basic_string_viewIcNS3_11char_traitsIcEEEEE
            (pbVar2,pbVar4,6);
  pbVar6 = pbVar2;
  _ZN4absl12lts_2026052612DoIgnoreLeakEPKv();
  if ((*pbVar2 & 1) == 0) {
    pbVar2 = pbVar2 + 1;
  }
  else {
    pbVar2 = *(byte **)(pbVar2 + 0x10);
  }
code_r0x004fce34:
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_230) {
    return pbVar2;
  }
  pbVar2 = (byte *)func_0x0099bd00();
  *(byte **)pbVar6 = pbVar4;
  return pbVar2;
}


