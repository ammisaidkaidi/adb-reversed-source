// Function: _ZN4absl12lts_2026052612log_internal17MakeCheckOpStringIhhEEPKcT_T0_S4_
// Address: 004fd8c0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


byte * _ZN4absl12lts_2026052612log_internal17MakeCheckOpStringIhhEEPKcT_T0_S4_
                 (char param_1,char param_2,undefined8 param_3)

{
  byte bVar1;
  code *pcVar2;
  undefined8 uVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined8 extraout_RDX;
  ulong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  long in_FS_OFFSET;
  bool bVar9;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined1 auStack_270 [56];
  byte bStack_238;
  undefined7 uStack_237;
  undefined8 uStack_228;
  undefined8 auStack_210 [19];
  long lStack_178;
  byte *pbStack_170;
  ulong uStack_168;
  undefined8 uStack_160;
  byte *pbStack_158;
  code *pcStack_150;
  char cStack_139;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 auStack_128 [56];
  byte bStack_f0;
  undefined7 uStack_ef;
  undefined8 uStack_e0;
  byte abStack_c8 [152];
  long lStack_30;
  
  lStack_30 = *(long *)(in_FS_OFFSET + 0x28);
  pcStack_150 = (code *)&UNK_004fd8fd;
  func_0x0099bdb0(&uStack_138,0,0x108);
  pcStack_150 = (code *)&UNK_004fd908;
  _ZN4absl12lts_2026052612log_internal21CheckOpMessageBuilderC2EPKc(&uStack_138,param_3);
  if ((byte)(param_1 - 0x20U) < 0x5f) {
    pcStack_150 = (code *)&UNK_004fd92b;
    uVar3 = func_0x0032eb30(&uStack_138,&UNK_00162c6d,1);
    pcStack_150 = (code *)&UNK_004fd946;
    cStack_139 = param_1;
    uVar3 = func_0x0032eb30(uVar3,&cStack_139,1);
    pcStack_150 = (code *)&UNK_004fd956;
    func_0x0032eb30(uVar3,&UNK_00162c6d,1);
  }
  else {
    pcStack_150 = (code *)&UNK_004fd974;
    uVar3 = func_0x0032eb30(&uStack_138,&UNK_0017db6a,0x14);
    pcStack_150 = (code *)&UNK_004fd97f;
    _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(uVar3,param_1);
  }
  pcStack_150 = (code *)&UNK_004fd997;
  func_0x0032eb30(&uStack_138,&UNK_001632e9,5);
  if ((byte)(param_2 - 0x20U) < 0x5f) {
    pcStack_150 = (code *)&UNK_004fd9b9;
    uVar3 = func_0x0032eb30(&uStack_138,&UNK_00162c6d,1);
    pcStack_150 = (code *)&UNK_004fd9d3;
    cStack_139 = param_2;
    uVar3 = func_0x0032eb30(uVar3,&cStack_139,1);
    pcStack_150 = (code *)&UNK_004fd9e3;
    func_0x0032eb30(uVar3,&UNK_00162c6d,1);
  }
  else {
    pcStack_150 = (code *)&UNK_004fda00;
    uVar3 = func_0x0032eb30(&uStack_138,&UNK_0017db6a,0x14);
    pcStack_150 = (code *)&UNK_004fda0a;
    _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(uVar3,param_2);
  }
  pcStack_150 = (code *)&UNK_004fda22;
  func_0x0032eb30(&uStack_138,&UNK_001692c7,1);
  pcStack_150 = (code *)&UNK_004fda2c;
  pbVar4 = (byte *)_Znwm(0x18);
  pcStack_150 = (code *)&UNK_004fda3e;
  func_0x004fe4f0(pbVar4,&uStack_130);
  pcStack_150 = (code *)&UNK_004fda46;
  _ZN4absl12lts_2026052612DoIgnoreLeakEPKv(pbVar4);
  bVar1 = *pbVar4;
  pbVar5 = *(byte **)(pbVar4 + 0x10);
  uStack_138 = 0x9ba3f8;
  abStack_c8[0] = 0x20;
  abStack_c8[1] = 0xa4;
  abStack_c8[2] = 0x9b;
  abStack_c8[3] = 0;
  abStack_c8[4] = 0;
  abStack_c8[5] = 0;
  abStack_c8[6] = 0;
  abStack_c8[7] = 0;
  uStack_130 = 0x9b9f28;
  if ((bStack_f0 & 1) != 0) {
    pcStack_150 = (code *)&UNK_004fdaa1;
    _ZdaPvSt11align_val_t(uStack_e0,CONCAT71(uStack_ef,bStack_f0) & 0xfffffffffffffffe);
  }
  if ((bVar1 & 1) == 0) {
    pbVar5 = pbVar4 + 1;
  }
  uStack_130 = 0x9b9bf8;
  pcStack_150 = (code *)&UNK_004fdaca;
  _ZNSt3__16localeD2Ev(auStack_128);
  pbVar8 = _ZTTNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE + 8;
  pcStack_150 = (code *)&UNK_004fdadd;
  _ZNSt3__18ios_base4InitD1Ev(&uStack_138);
  pbVar7 = abStack_c8;
  pcStack_150 = (code *)&UNK_004fdae9;
  _ZNSt3__19basic_iosIwNS_11char_traitsIwEEED1Ev();
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_30) {
    return pbVar5;
  }
  pcStack_150 = 
  _ZN4absl12lts_2026052612log_internal17MakeCheckOpStringIRKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEESB_EEPKcT_T0_SD_
  ;
  func_0x0099bd00();
  uStack_160 = 0x9ba438;
  lStack_178 = *(long *)(in_FS_OFFSET + 0x28);
  pbStack_170 = pbVar5;
  uStack_168 = (ulong)bVar1;
  pbStack_158 = pbVar4 + 1;
  pcStack_150 = (code *)&stack0xfffffffffffffff8;
  func_0x0099bdb0(&uStack_280,0,0x108);
  _ZN4absl12lts_2026052612log_internal21CheckOpMessageBuilderC2EPKc(&uStack_280,extraout_RDX);
  bVar9 = (*pbVar7 & 1) != 0;
  pbVar5 = pbVar7 + 1;
  if (bVar9) {
    pbVar5 = *(byte **)(pbVar7 + 0x10);
  }
  uVar6 = (ulong)(*pbVar7 >> 1);
  if (bVar9) {
    uVar6 = *(ulong *)(pbVar7 + 8);
  }
  func_0x0032eb30(&uStack_280,pbVar5,uVar6);
  func_0x0032eb30(&uStack_280,&UNK_001632e9,5);
  bVar9 = (*pbVar8 & 1) != 0;
  pbVar5 = pbVar8 + 1;
  if (bVar9) {
    pbVar5 = *(byte **)(pbVar8 + 0x10);
  }
  uVar6 = (ulong)(*pbVar8 >> 1);
  if (bVar9) {
    uVar6 = *(ulong *)(pbVar8 + 8);
  }
  func_0x0032eb30(&uStack_280,pbVar5,uVar6);
  func_0x0032eb30(&uStack_280,&UNK_001692c7,1);
  pbVar4 = (byte *)_Znwm(0x18);
  func_0x004fe4f0(pbVar4,&uStack_278);
  _ZN4absl12lts_2026052612DoIgnoreLeakEPKv(pbVar4);
  bVar1 = *pbVar4;
  pbVar5 = *(byte **)(pbVar4 + 0x10);
  uStack_280 = 0x9ba3f8;
  auStack_210[0] = 0x9ba420;
  uStack_278 = 0x9b9f28;
  if ((bStack_238 & 1) != 0) {
    _ZdaPvSt11align_val_t(uStack_228,CONCAT71(uStack_237,bStack_238) & 0xfffffffffffffffe);
  }
  if ((bVar1 & 1) == 0) {
    pbVar5 = pbVar4 + 1;
  }
  uStack_278 = 0x9b9bf8;
  _ZNSt3__16localeD2Ev(auStack_270);
  _ZNSt3__18ios_base4InitD1Ev(&uStack_280,0x9ba438);
  _ZNSt3__19basic_iosIwNS_11char_traitsIwEEED1Ev(auStack_210);
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_178) {
    return pbVar5;
  }
  func_0x0099bd00();
  pcVar2 = (code *)swi(3);
  pbVar5 = (byte *)(*pcVar2)();
  return pbVar5;
}


