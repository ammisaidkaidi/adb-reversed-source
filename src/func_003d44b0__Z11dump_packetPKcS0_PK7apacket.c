// Function: _Z11dump_packetPKcS0_PK7apacket
// Address: 003d44b0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Removing unreachable block (ram,0x007dfa2f) */

byte * _Z11dump_packetPKcS0_PK7apacket
                 (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 byte *param_9,byte *param_10,undefined8 param_11,byte *param_12,undefined8 param_13
                 ,undefined8 param_14)

{
  code *pcVar1;
  char cVar2;
  ulong uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined8 extraout_RDX;
  byte *pbVar6;
  byte *pbVar7;
  long lVar8;
  long in_FS_OFFSET;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  undefined8 extraout_XMM1_Qa;
  undefined1 auStack_228 [16];
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined8 uStack_1e8;
  undefined8 uStack_1d8;
  undefined8 uStack_1c8;
  undefined8 uStack_1b8;
  undefined8 uStack_1a8;
  undefined8 uStack_198;
  undefined8 uStack_188;
  undefined8 uStack_178;
  undefined1 *puStack_170;
  undefined1 *puStack_168;
  byte *pbStack_160;
  undefined *puStack_158;
  undefined1 auStack_150 [8];
  undefined1 auStack_148 [8];
  byte *pbStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_a0;
  byte **ppbStack_98;
  undefined1 *puStack_90;
  undefined *puStack_88;
  byte *pbStack_80;
  byte *pbStack_78;
  undefined *apuStack_70 [2];
  byte *pbStack_60;
  undefined8 uStack_58;
  byte bStack_50;
  undefined7 uStack_4f;
  byte *pbStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  param_9[0] = 0;
  param_9[1] = 0;
  param_9[2] = 0;
  param_9[3] = 0;
  param_9[4] = 0;
  param_9[5] = 0;
  param_9[6] = 0;
  param_9[7] = 0;
  param_9[8] = 0;
  param_9[9] = 0;
  param_9[10] = 0;
  param_9[0xb] = 0;
  param_9[0xc] = 0;
  param_9[0xd] = 0;
  param_9[0xe] = 0;
  param_9[0xf] = 0;
  param_9[0x10] = 0;
  param_9[0x11] = 0;
  param_9[0x12] = 0;
  param_9[0x13] = 0;
  param_9[0x14] = 0;
  param_9[0x15] = 0;
  param_9[0x16] = 0;
  param_9[0x17] = 0;
  apuStack_70[0] = &UNK_003d44f0;
  pbVar6 = param_10;
  pbVar7 = param_10;
  uVar3 = func_0x0099bcf0();
  if (uVar3 < 0xfffffffffffffff7) {
    pbStack_60 = param_12;
    uStack_58 = param_11;
    if (uVar3 < 0x17) {
      *param_9 = (char)uVar3 * '\x02';
      pbVar6 = param_9 + 1;
    }
    else {
      lVar8 = 0x1a;
      if ((uVar3 | 7) != 0x17) {
        lVar8 = (uVar3 | 7) + 1;
      }
      apuStack_70[0] = &UNK_003d453a;
      pbVar6 = (byte *)_Znwm(lVar8);
      *(long *)param_9 = lVar8 + 1;
      *(ulong *)(param_9 + 8) = uVar3;
      *(byte **)(param_9 + 0x10) = pbVar6;
    }
    apuStack_70[0] = &UNK_003d4559;
    func_0x0099bda0(pbVar6,param_10,uVar3);
    pbVar6[uVar3] = 0;
    apuStack_70[0] = &UNK_003d4570;
    _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
              (param_9,&UNK_00186281);
    apuStack_70[0] = &UNK_003d457c;
    _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc(param_9,uStack_58);
    apuStack_70[0] = &UNK_003d4587;
    _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
              (param_9,&UNK_00186281);
    pbVar6 = pbStack_60;
    param_12 = &bStack_50;
    apuStack_70[0] = &UNK_003d459a;
    _Z11dump_headerPK8amessage(param_12,pbStack_60);
    apuStack_70[0] = &UNK_003d45a5;
    func_0x0032e820(param_9,param_12);
    if ((bStack_50 & 1) != 0) {
      apuStack_70[0] = &UNK_003d45bc;
      _ZdaPvSt11align_val_t(pbStack_40,CONCAT71(uStack_4f,bStack_50) & 0xfffffffffffffffe);
    }
    apuStack_70[0] = &UNK_003d45cc;
    _Z8dump_hexPKvm(param_12,*(undefined8 *)(pbVar6 + 0x18),*(undefined8 *)(pbVar6 + 0x28));
    apuStack_70[0] = &UNK_003d45d7;
    pbVar6 = param_12;
    pbVar7 = param_9;
    func_0x0032e820();
    if ((bStack_50 & 1) != 0) {
      pbVar6 = (byte *)(CONCAT71(uStack_4f,bStack_50) & 0xfffffffffffffffe);
      apuStack_70[0] = &UNK_003d45ee;
      _ZdaPvSt11align_val_t();
      pbVar7 = pbStack_40;
    }
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
      return param_9;
    }
  }
  else {
    apuStack_70[0] = &UNK_003d4614;
    func_0x0032e8f0();
  }
  apuStack_70[0] = &UNK_003d4619;
  func_0x0099bd00();
  puStack_88 = &UNK_003d4632;
  pbStack_80 = param_9;
  pbStack_78 = param_12;
  apuStack_70[0] = &stack0xfffffffffffffff8;
  puVar4 = (undefined4 *)func_0x0099bce0();
  puStack_88 = &UNK_003d4639;
  uVar5 = func_0x0099bd20(*puVar4);
  pbStack_78 = pbStack_80;
  pbStack_80 = *(byte **)(in_FS_OFFSET + 0x28);
  puStack_90 = auStack_150;
  uStack_a0 = 0x3000000010;
  ppbStack_98 = &pbStack_60;
  pbVar7[0] = 0;
  pbVar7[1] = 0;
  pbVar7[2] = 0;
  pbVar7[3] = 0;
  pbVar7[4] = 0;
  pbVar7[5] = 0;
  pbVar7[6] = 0;
  pbVar7[7] = 0;
  pbVar7[8] = 0;
  pbVar7[9] = 0;
  pbVar7[10] = 0;
  pbVar7[0xb] = 0;
  pbVar7[0xc] = 0;
  pbVar7[0xd] = 0;
  pbVar7[0xe] = 0;
  pbVar7[0xf] = 0;
  pbVar7[0x10] = 0;
  pbVar7[0x11] = 0;
  pbVar7[0x12] = 0;
  pbVar7[0x13] = 0;
  pbVar7[0x14] = 0;
  pbVar7[0x15] = 0;
  pbVar7[0x16] = 0;
  pbVar7[0x17] = 0;
  puStack_158 = &UNK_007dfaa1;
  pbStack_140 = pbVar6;
  uStack_138 = uVar5;
  uStack_130 = param_13;
  uStack_128 = param_14;
  _ZN7android4base13StringAppendVEPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPKcP13__va_list_tag
            (pbVar7,&UNK_00157828,&uStack_a0);
  if ((byte *)*(long *)(in_FS_OFFSET + 0x28) == pbStack_80) {
    return pbVar7;
  }
  puStack_158 = &UNK_007dfac2;
  cVar2 = func_0x0099bd00();
  if (cVar2 != '\0') {
    uStack_1f8 = extraout_XMM0_Da;
    uStack_1f4 = extraout_XMM0_Db;
    uStack_1e8 = extraout_XMM1_Qa;
    uStack_1d8 = param_3;
    uStack_1c8 = param_4;
    uStack_1b8 = param_5;
    uStack_1a8 = param_6;
    uStack_198 = param_7;
    uStack_188 = param_8;
  }
  pbStack_160 = *(byte **)(in_FS_OFFSET + 0x28);
  puStack_168 = auStack_228;
  uStack_178 = 0x3000000010;
  puStack_170 = auStack_148;
  uStack_218 = extraout_RDX;
  uStack_210 = uVar5;
  uStack_208 = param_13;
  uStack_200 = param_14;
  puStack_158 = (undefined *)apuStack_70;
  _ZN7android4base13StringAppendVEPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPKcP13__va_list_tag
            ();
  if (*(byte **)(in_FS_OFFSET + 0x28) != pbStack_160) {
    func_0x0099bd00();
    pcVar1 = (code *)swi(3);
    pbVar6 = (byte *)(*pcVar1)();
    return pbVar6;
  }
  return *(byte **)(in_FS_OFFSET + 0x28);
}


