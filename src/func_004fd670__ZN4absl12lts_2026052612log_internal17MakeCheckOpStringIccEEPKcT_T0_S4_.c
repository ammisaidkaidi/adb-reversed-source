// Function: _ZN4absl12lts_2026052612log_internal17MakeCheckOpStringIccEEPKcT_T0_S4_
// Address: 004fd670
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


byte * _ZN4absl12lts_2026052612log_internal17MakeCheckOpStringIccEEPKcT_T0_S4_
                 (char param_1,char param_2,undefined8 param_3)

{
  byte bVar1;
  code *pcVar2;
  undefined8 uVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  uint uVar6;
  byte *pbVar7;
  ulong uVar8;
  byte *pbVar9;
  long in_FS_OFFSET;
  bool bVar10;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined1 auStack_3b8 [56];
  byte bStack_380;
  undefined7 uStack_37f;
  undefined8 uStack_370;
  undefined8 auStack_358 [19];
  long lStack_2c0;
  byte *pbStack_2b8;
  ulong uStack_2b0;
  undefined8 uStack_2a8;
  byte *pbStack_2a0;
  code *pcStack_298;
  char cStack_281;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined1 auStack_270 [56];
  byte bStack_238;
  undefined7 uStack_237;
  undefined8 uStack_228;
  byte abStack_210 [152];
  long lStack_178;
  byte *pbStack_170;
  ulong uStack_168;
  undefined8 uStack_160;
  byte *pbStack_158;
  code *apcStack_150 [2];
  char cStack_139;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 auStack_128 [56];
  byte bStack_f0;
  undefined7 uStack_ef;
  undefined8 uStack_e0;
  undefined8 auStack_c8 [19];
  long lStack_30;
  
  lStack_30 = *(long *)(in_FS_OFFSET + 0x28);
  apcStack_150[0] = (code *)&UNK_004fd6ad;
  func_0x0099bdb0(&uStack_138,0,0x108);
  apcStack_150[0] = (code *)&UNK_004fd6b8;
  _ZN4absl12lts_2026052612log_internal21CheckOpMessageBuilderC2EPKc(&uStack_138,param_3);
  if ((byte)(param_1 - 0x20U) < 0x5f) {
    apcStack_150[0] = (code *)&UNK_004fd6db;
    uVar3 = func_0x0032eb30(&uStack_138,&UNK_00162c6d,1);
    apcStack_150[0] = (code *)&UNK_004fd6f6;
    cStack_139 = param_1;
    uVar3 = func_0x0032eb30(uVar3,&cStack_139,1);
    apcStack_150[0] = (code *)&UNK_004fd706;
    func_0x0032eb30(uVar3,&UNK_00162c6d,1);
  }
  else {
    apcStack_150[0] = (code *)&UNK_004fd724;
    uVar3 = func_0x0032eb30(&uStack_138,&UNK_001664ea,0xb);
    apcStack_150[0] = (code *)&UNK_004fd72f;
    _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(uVar3,(int)param_1);
  }
  apcStack_150[0] = (code *)&UNK_004fd747;
  func_0x0032eb30(&uStack_138,&UNK_001632e9,5);
  if ((byte)(param_2 - 0x20U) < 0x5f) {
    apcStack_150[0] = (code *)&UNK_004fd769;
    uVar3 = func_0x0032eb30(&uStack_138,&UNK_00162c6d,1);
    apcStack_150[0] = (code *)&UNK_004fd783;
    cStack_139 = param_2;
    uVar3 = func_0x0032eb30(uVar3,&cStack_139,1);
    apcStack_150[0] = (code *)&UNK_004fd793;
    func_0x0032eb30(uVar3,&UNK_00162c6d,1);
  }
  else {
    apcStack_150[0] = (code *)&UNK_004fd7b0;
    uVar3 = func_0x0032eb30(&uStack_138,&UNK_001664ea,0xb);
    apcStack_150[0] = (code *)&UNK_004fd7ba;
    _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(uVar3,(int)param_2);
  }
  apcStack_150[0] = (code *)&UNK_004fd7d2;
  func_0x0032eb30(&uStack_138,&UNK_001692c7,1);
  apcStack_150[0] = (code *)&UNK_004fd7dc;
  pbVar4 = (byte *)_Znwm(0x18);
  apcStack_150[0] = (code *)&UNK_004fd7ee;
  func_0x004fe4f0(pbVar4,&uStack_130);
  apcStack_150[0] = (code *)&UNK_004fd7f6;
  _ZN4absl12lts_2026052612DoIgnoreLeakEPKv(pbVar4);
  bVar1 = *pbVar4;
  pbVar5 = *(byte **)(pbVar4 + 0x10);
  uStack_138 = 0x9ba3f8;
  auStack_c8[0] = 0x9ba420;
  uStack_130 = 0x9b9f28;
  if ((bStack_f0 & 1) != 0) {
    apcStack_150[0] = (code *)&UNK_004fd851;
    _ZdaPvSt11align_val_t(uStack_e0,CONCAT71(uStack_ef,bStack_f0) & 0xfffffffffffffffe);
  }
  if ((bVar1 & 1) == 0) {
    pbVar5 = pbVar4 + 1;
  }
  uStack_130 = 0x9b9bf8;
  apcStack_150[0] = (code *)&UNK_004fd87a;
  _ZNSt3__16localeD2Ev(auStack_128);
  uVar8 = 0x9ba438;
  apcStack_150[0] = (code *)&UNK_004fd88d;
  _ZNSt3__18ios_base4InitD1Ev(&uStack_138);
  uVar6 = (uint)auStack_c8;
  apcStack_150[0] = (code *)&UNK_004fd899;
  _ZNSt3__19basic_iosIwNS_11char_traitsIwEEED1Ev();
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_30) {
    return pbVar5;
  }
  apcStack_150[0] = _ZN4absl12lts_2026052612log_internal17MakeCheckOpStringIhhEEPKcT_T0_S4_;
  func_0x0099bd00();
  uStack_160 = 0x9ba438;
  lStack_178 = *(long *)(in_FS_OFFSET + 0x28);
  pcStack_298 = (code *)&UNK_004fd8fd;
  pbStack_170 = pbVar5;
  uStack_168 = (ulong)bVar1;
  pbStack_158 = pbVar4 + 1;
  apcStack_150[0] = (code *)&stack0xfffffffffffffff8;
  func_0x0099bdb0(&uStack_280,0,0x108);
  pcStack_298 = (code *)&UNK_004fd908;
  _ZN4absl12lts_2026052612log_internal21CheckOpMessageBuilderC2EPKc(&uStack_280,extraout_RDX);
  if ((byte)((char)uVar6 - 0x20U) < 0x5f) {
    pcStack_298 = (code *)&UNK_004fd92b;
    uVar3 = func_0x0032eb30(&uStack_280,&UNK_00162c6d,1);
    pcStack_298 = (code *)&UNK_004fd946;
    cStack_281 = (char)uVar6;
    uVar3 = func_0x0032eb30(uVar3,&cStack_281,1);
    pcStack_298 = (code *)&UNK_004fd956;
    func_0x0032eb30(uVar3,&UNK_00162c6d,1);
  }
  else {
    pcStack_298 = (code *)&UNK_004fd974;
    uVar3 = func_0x0032eb30(&uStack_280,&UNK_0017db6a,0x14);
    pcStack_298 = (code *)&UNK_004fd97f;
    _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(uVar3,uVar6 & 0xff);
  }
  pcStack_298 = (code *)&UNK_004fd997;
  func_0x0032eb30(&uStack_280,&UNK_001632e9,5);
  if ((byte)((char)uVar8 - 0x20U) < 0x5f) {
    pcStack_298 = (code *)&UNK_004fd9b9;
    uVar3 = func_0x0032eb30(&uStack_280,&UNK_00162c6d,1);
    pcStack_298 = (code *)&UNK_004fd9d3;
    cStack_281 = (char)uVar8;
    uVar3 = func_0x0032eb30(uVar3,&cStack_281,1);
    pcStack_298 = (code *)&UNK_004fd9e3;
    func_0x0032eb30(uVar3,&UNK_00162c6d,1);
  }
  else {
    pcStack_298 = (code *)&UNK_004fda00;
    uVar3 = func_0x0032eb30(&uStack_280,&UNK_0017db6a,0x14);
    pcStack_298 = (code *)&UNK_004fda0a;
    _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(uVar3,uVar8 & 0xff);
  }
  pcStack_298 = (code *)&UNK_004fda22;
  func_0x0032eb30(&uStack_280,&UNK_001692c7,1);
  pcStack_298 = (code *)&UNK_004fda2c;
  pbVar4 = (byte *)_Znwm(0x18);
  pcStack_298 = (code *)&UNK_004fda3e;
  func_0x004fe4f0(pbVar4,&uStack_278);
  pcStack_298 = (code *)&UNK_004fda46;
  _ZN4absl12lts_2026052612DoIgnoreLeakEPKv(pbVar4);
  bVar1 = *pbVar4;
  pbVar5 = *(byte **)(pbVar4 + 0x10);
  uStack_280 = 0x9ba3f8;
  abStack_210[0] = 0x20;
  abStack_210[1] = 0xa4;
  abStack_210[2] = 0x9b;
  abStack_210[3] = 0;
  abStack_210[4] = 0;
  abStack_210[5] = 0;
  abStack_210[6] = 0;
  abStack_210[7] = 0;
  uStack_278 = 0x9b9f28;
  if ((bStack_238 & 1) != 0) {
    pcStack_298 = (code *)&UNK_004fdaa1;
    _ZdaPvSt11align_val_t(uStack_228,CONCAT71(uStack_237,bStack_238) & 0xfffffffffffffffe);
  }
  if ((bVar1 & 1) == 0) {
    pbVar5 = pbVar4 + 1;
  }
  uStack_278 = 0x9b9bf8;
  pcStack_298 = (code *)&UNK_004fdaca;
  _ZNSt3__16localeD2Ev(auStack_270);
  pbVar9 = _ZTTNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE + 8;
  pcStack_298 = (code *)&UNK_004fdadd;
  _ZNSt3__18ios_base4InitD1Ev(&uStack_280);
  pbVar7 = abStack_210;
  pcStack_298 = (code *)&UNK_004fdae9;
  _ZNSt3__19basic_iosIwNS_11char_traitsIwEEED1Ev();
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_178) {
    return pbVar5;
  }
  pcStack_298 = 
  _ZN4absl12lts_2026052612log_internal17MakeCheckOpStringIRKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEESB_EEPKcT_T0_SD_
  ;
  func_0x0099bd00();
  uStack_2a8 = 0x9ba438;
  lStack_2c0 = *(long *)(in_FS_OFFSET + 0x28);
  pbStack_2b8 = pbVar5;
  uStack_2b0 = (ulong)bVar1;
  pbStack_2a0 = pbVar4 + 1;
  pcStack_298 = (code *)apcStack_150;
  func_0x0099bdb0(&uStack_3c8,0,0x108);
  _ZN4absl12lts_2026052612log_internal21CheckOpMessageBuilderC2EPKc(&uStack_3c8,extraout_RDX_00);
  bVar10 = (*pbVar7 & 1) != 0;
  pbVar5 = pbVar7 + 1;
  if (bVar10) {
    pbVar5 = *(byte **)(pbVar7 + 0x10);
  }
  uVar8 = (ulong)(*pbVar7 >> 1);
  if (bVar10) {
    uVar8 = *(ulong *)(pbVar7 + 8);
  }
  func_0x0032eb30(&uStack_3c8,pbVar5,uVar8);
  func_0x0032eb30(&uStack_3c8,&UNK_001632e9,5);
  bVar10 = (*pbVar9 & 1) != 0;
  pbVar5 = pbVar9 + 1;
  if (bVar10) {
    pbVar5 = *(byte **)(pbVar9 + 0x10);
  }
  uVar8 = (ulong)(*pbVar9 >> 1);
  if (bVar10) {
    uVar8 = *(ulong *)(pbVar9 + 8);
  }
  func_0x0032eb30(&uStack_3c8,pbVar5,uVar8);
  func_0x0032eb30(&uStack_3c8,&UNK_001692c7,1);
  pbVar4 = (byte *)_Znwm(0x18);
  func_0x004fe4f0(pbVar4,&uStack_3c0);
  _ZN4absl12lts_2026052612DoIgnoreLeakEPKv(pbVar4);
  bVar1 = *pbVar4;
  pbVar5 = *(byte **)(pbVar4 + 0x10);
  uStack_3c8 = 0x9ba3f8;
  auStack_358[0] = 0x9ba420;
  uStack_3c0 = 0x9b9f28;
  if ((bStack_380 & 1) != 0) {
    _ZdaPvSt11align_val_t(uStack_370,CONCAT71(uStack_37f,bStack_380) & 0xfffffffffffffffe);
  }
  if ((bVar1 & 1) == 0) {
    pbVar5 = pbVar4 + 1;
  }
  uStack_3c0 = 0x9b9bf8;
  _ZNSt3__16localeD2Ev(auStack_3b8);
  _ZNSt3__18ios_base4InitD1Ev(&uStack_3c8,0x9ba438);
  _ZNSt3__19basic_iosIwNS_11char_traitsIwEEED1Ev(auStack_358);
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_2c0) {
    return pbVar5;
  }
  func_0x0099bd00();
  pcVar2 = (code *)swi(3);
  pbVar5 = (byte *)(*pcVar2)();
  return pbVar5;
}


