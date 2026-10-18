// Function: _Z11dump_headerPK8amessage
// Address: 003d4350
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Removing unreachable block (ram,0x007dfa2f) */

byte * _Z11dump_headerPK8amessage
                 (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 byte *param_9,uint *param_10)

{
  uint uVar1;
  code *pcVar2;
  char cVar3;
  ulong uVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  byte *pbVar7;
  undefined *puVar8;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined *puVar15;
  long lVar16;
  long in_FS_OFFSET;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  undefined8 extraout_XMM1_Qa;
  undefined1 auStack_2a0 [16];
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 *puStack_280;
  ulong uStack_278;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined8 uStack_260;
  undefined8 uStack_250;
  undefined8 uStack_240;
  undefined8 uStack_230;
  undefined8 uStack_220;
  undefined8 uStack_210;
  undefined8 uStack_200;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
  undefined1 *puStack_1e0;
  byte *pbStack_1d8;
  undefined *puStack_1d0;
  undefined1 auStack_1c8 [8];
  undefined1 auStack_1c0 [8];
  byte *pbStack_1b8;
  undefined8 uStack_1b0;
  undefined8 *puStack_1a8;
  ulong uStack_1a0;
  undefined8 uStack_118;
  byte **ppbStack_110;
  undefined1 *puStack_108;
  undefined *puStack_100;
  byte *pbStack_f8;
  byte *pbStack_f0;
  undefined *apuStack_e8 [2];
  byte *pbStack_d8;
  undefined8 uStack_d0;
  byte bStack_c8;
  undefined7 uStack_c7;
  byte *pbStack_b8;
  long lStack_b0;
  byte *pbStack_a8;
  byte *pbStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 *puStack_88;
  undefined *apuStack_80 [2];
  uint uStack_6c;
  undefined8 uStack_68;
  undefined4 uStack_60;
  byte abStack_58 [16];
  ulong uStack_48;
  undefined1 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = *param_10;
  uStack_6c = param_10[3];
  uStack_40 = 0;
  uStack_48 = 0;
  abStack_58[8] = 0;
  abStack_58[9] = 0;
  abStack_58[10] = 0;
  abStack_58[0xb] = 0;
  abStack_58[0] = 0;
  abStack_58[1] = 0;
  abStack_58[2] = 0;
  abStack_58[3] = 0;
  abStack_58[4] = 0;
  abStack_58[5] = 0;
  abStack_58[6] = 0;
  abStack_58[7] = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  if ((0xffffffa0 < (uVar1 & 0xff) - 0x7f) &&
     (uStack_48 = (ulong)(byte)uVar1, 0xffffffa0 < (uVar1 >> 8 & 0xff) - 0x7f)) {
    uStack_48 = (ulong)(ushort)uVar1;
    if (0xffffffa0 < (uVar1 >> 0x10 & 0xff) - 0x7f) {
      uStack_48 = (ulong)(uint3)uVar1;
      if (0xffffffa0 < (uVar1 >> 0x18) - 0x7f) {
        uStack_48 = (ulong)uVar1;
        goto code_r0x003d4402;
      }
    }
  }
  apuStack_80[0] = &UNK_003d4402;
  func_0x0099c030(&uStack_48,9,&UNK_00178984);
code_r0x003d4402:
  puVar15 = &UNK_00184990;
  puVar8 = &UNK_00184990;
  if (param_10[1] < 0x100) {
    puVar8 = &UNK_0017ba3a;
  }
  apuStack_80[0] = &UNK_003d4434;
  func_0x0099c030(abStack_58,0xc,puVar8);
  if (param_10[2] < 0x100) {
    puVar15 = &UNK_0017ba3a;
  }
  apuStack_80[0] = &UNK_003d4458;
  func_0x0099c030(&uStack_68,0xc,puVar15);
  pbVar9 = &UNK_001695a4;
  uVar14 = (ulong)uStack_6c;
  apuStack_80[0] = &UNK_003d4477;
  pbVar7 = abStack_58;
  pbVar11 = param_9;
  puVar13 = &uStack_68;
  _ZN7android4base12StringPrintfEPKcz(param_9,&UNK_001695a4,&uStack_48);
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return param_9;
  }
  apuStack_80[0] = &UNK_003d44a9;
  func_0x0099bd00();
  puStack_90 = &UNK_0017ba3a;
  lStack_b0 = *(long *)(in_FS_OFFSET + 0x28);
  pbVar11[0] = 0;
  pbVar11[1] = 0;
  pbVar11[2] = 0;
  pbVar11[3] = 0;
  pbVar11[4] = 0;
  pbVar11[5] = 0;
  pbVar11[6] = 0;
  pbVar11[7] = 0;
  pbVar11[8] = 0;
  pbVar11[9] = 0;
  pbVar11[10] = 0;
  pbVar11[0xb] = 0;
  pbVar11[0xc] = 0;
  pbVar11[0xd] = 0;
  pbVar11[0xe] = 0;
  pbVar11[0xf] = 0;
  pbVar11[0x10] = 0;
  pbVar11[0x11] = 0;
  pbVar11[0x12] = 0;
  pbVar11[0x13] = 0;
  pbVar11[0x14] = 0;
  pbVar11[0x15] = 0;
  pbVar11[0x16] = 0;
  pbVar11[0x17] = 0;
  apuStack_e8[0] = &UNK_003d44f0;
  pbVar10 = pbVar9;
  pbVar12 = pbVar9;
  pbStack_a8 = param_9;
  pbStack_a0 = abStack_58;
  puStack_98 = puVar15;
  puStack_88 = &uStack_68;
  apuStack_80[0] = &stack0xfffffffffffffff8;
  uVar4 = func_0x0099bcf0();
  if (uVar4 < 0xfffffffffffffff7) {
    pbStack_d8 = pbVar7;
    uStack_d0 = extraout_RDX;
    if (uVar4 < 0x17) {
      *pbVar11 = (char)uVar4 * '\x02';
      pbVar7 = pbVar11 + 1;
    }
    else {
      lVar16 = 0x1a;
      if ((uVar4 | 7) != 0x17) {
        lVar16 = (uVar4 | 7) + 1;
      }
      apuStack_e8[0] = &UNK_003d453a;
      pbVar7 = (byte *)_Znwm(lVar16);
      *(long *)pbVar11 = lVar16 + 1;
      *(ulong *)(pbVar11 + 8) = uVar4;
      *(byte **)(pbVar11 + 0x10) = pbVar7;
    }
    apuStack_e8[0] = &UNK_003d4559;
    func_0x0099bda0(pbVar7,pbVar9,uVar4);
    pbVar7[uVar4] = 0;
    apuStack_e8[0] = &UNK_003d4570;
    _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
              (pbVar11,&UNK_00186281);
    apuStack_e8[0] = &UNK_003d457c;
    _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc(pbVar11,uStack_d0);
    apuStack_e8[0] = &UNK_003d4587;
    _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
              (pbVar11,&UNK_00186281);
    pbVar9 = pbStack_d8;
    pbVar7 = &bStack_c8;
    apuStack_e8[0] = &UNK_003d459a;
    _Z11dump_headerPK8amessage(pbVar7,pbStack_d8);
    apuStack_e8[0] = &UNK_003d45a5;
    func_0x0032e820(pbVar11,pbVar7);
    if ((bStack_c8 & 1) != 0) {
      apuStack_e8[0] = &UNK_003d45bc;
      _ZdaPvSt11align_val_t(pbStack_b8,CONCAT71(uStack_c7,bStack_c8) & 0xfffffffffffffffe);
    }
    apuStack_e8[0] = &UNK_003d45cc;
    _Z8dump_hexPKvm(pbVar7,*(undefined8 *)(pbVar9 + 0x18),*(undefined8 *)(pbVar9 + 0x28));
    apuStack_e8[0] = &UNK_003d45d7;
    pbVar10 = pbVar7;
    pbVar12 = pbVar11;
    func_0x0032e820();
    if ((bStack_c8 & 1) != 0) {
      pbVar10 = (byte *)(CONCAT71(uStack_c7,bStack_c8) & 0xfffffffffffffffe);
      apuStack_e8[0] = &UNK_003d45ee;
      _ZdaPvSt11align_val_t();
      pbVar12 = pbStack_b8;
    }
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_b0) {
      return pbVar11;
    }
  }
  else {
    apuStack_e8[0] = &UNK_003d4614;
    func_0x0032e8f0();
  }
  apuStack_e8[0] = &UNK_003d4619;
  func_0x0099bd00();
  puStack_100 = &UNK_003d4632;
  pbStack_f8 = pbVar11;
  pbStack_f0 = pbVar7;
  apuStack_e8[0] = (undefined *)apuStack_80;
  puVar5 = (undefined4 *)func_0x0099bce0();
  puStack_100 = &UNK_003d4639;
  uVar6 = func_0x0099bd20(*puVar5);
  pbStack_f0 = pbStack_f8;
  pbStack_f8 = *(byte **)(in_FS_OFFSET + 0x28);
  puStack_108 = auStack_1c8;
  uStack_118 = 0x3000000010;
  ppbStack_110 = &pbStack_d8;
  pbVar12[0] = 0;
  pbVar12[1] = 0;
  pbVar12[2] = 0;
  pbVar12[3] = 0;
  pbVar12[4] = 0;
  pbVar12[5] = 0;
  pbVar12[6] = 0;
  pbVar12[7] = 0;
  pbVar12[8] = 0;
  pbVar12[9] = 0;
  pbVar12[10] = 0;
  pbVar12[0xb] = 0;
  pbVar12[0xc] = 0;
  pbVar12[0xd] = 0;
  pbVar12[0xe] = 0;
  pbVar12[0xf] = 0;
  pbVar12[0x10] = 0;
  pbVar12[0x11] = 0;
  pbVar12[0x12] = 0;
  pbVar12[0x13] = 0;
  pbVar12[0x14] = 0;
  pbVar12[0x15] = 0;
  pbVar12[0x16] = 0;
  pbVar12[0x17] = 0;
  puStack_1d0 = &UNK_007dfaa1;
  pbStack_1b8 = pbVar10;
  uStack_1b0 = uVar6;
  puStack_1a8 = puVar13;
  uStack_1a0 = uVar14;
  _ZN7android4base13StringAppendVEPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPKcP13__va_list_tag
            (pbVar12,&UNK_00157828,&uStack_118);
  if ((byte *)*(long *)(in_FS_OFFSET + 0x28) == pbStack_f8) {
    return pbVar12;
  }
  puStack_1d0 = &UNK_007dfac2;
  cVar3 = func_0x0099bd00();
  if (cVar3 != '\0') {
    uStack_270 = extraout_XMM0_Da;
    uStack_26c = extraout_XMM0_Db;
    uStack_260 = extraout_XMM1_Qa;
    uStack_250 = param_3;
    uStack_240 = param_4;
    uStack_230 = param_5;
    uStack_220 = param_6;
    uStack_210 = param_7;
    uStack_200 = param_8;
  }
  pbStack_1d8 = *(byte **)(in_FS_OFFSET + 0x28);
  puStack_1e0 = auStack_2a0;
  uStack_1f0 = 0x3000000010;
  puStack_1e8 = auStack_1c0;
  uStack_290 = extraout_RDX_00;
  uStack_288 = uVar6;
  puStack_280 = puVar13;
  uStack_278 = uVar14;
  puStack_1d0 = (undefined *)apuStack_e8;
  _ZN7android4base13StringAppendVEPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPKcP13__va_list_tag
            ();
  if (*(byte **)(in_FS_OFFSET + 0x28) != pbStack_1d8) {
    func_0x0099bd00();
    pcVar2 = (code *)swi(3);
    pbVar7 = (byte *)(*pcVar2)();
    return pbVar7;
  }
  return *(byte **)(in_FS_OFFSET + 0x28);
}


