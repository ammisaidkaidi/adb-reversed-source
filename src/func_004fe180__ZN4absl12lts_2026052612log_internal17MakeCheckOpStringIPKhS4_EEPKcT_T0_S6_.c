// Function: _ZN4absl12lts_2026052612log_internal17MakeCheckOpStringIPKhS4_EEPKcT_T0_S6_
// Address: 004fe180
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


byte * _ZN4absl12lts_2026052612log_internal17MakeCheckOpStringIPKhS4_EEPKcT_T0_S6_
                 (undefined7 *param_1,undefined7 *param_2,undefined8 param_3)

{
  byte bVar1;
  code *pcVar2;
  undefined8 uVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined8 extraout_RDX;
  undefined8 *puVar6;
  long lVar7;
  long in_FS_OFFSET;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined1 auStack_260 [56];
  byte bStack_228;
  undefined7 uStack_227;
  undefined8 uStack_218;
  undefined8 auStack_200 [19];
  long lStack_168;
  byte *pbStack_160;
  ulong uStack_158;
  undefined8 uStack_150;
  byte *pbStack_148;
  code *pcStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 auStack_128 [56];
  byte bStack_f0;
  undefined7 uStack_ef;
  undefined8 uStack_e0;
  undefined8 auStack_c8 [19];
  long lStack_30;
  
  lStack_30 = *(long *)(in_FS_OFFSET + 0x28);
  pcStack_140 = (code *)&UNK_004fe1be;
  func_0x0099bdb0(&uStack_138,0,0x108);
  pcStack_140 = (code *)&UNK_004fe1c9;
  _ZN4absl12lts_2026052612log_internal21CheckOpMessageBuilderC2EPKc(&uStack_138,param_3);
  if (param_1 == (undefined7 *)0x0) {
    param_1 = &_ZN4absl12lts_2026052612log_internal17kUnsignedCharNullE;
  }
  pcStack_140 = (code *)&UNK_004fe1df;
  uVar3 = func_0x0099bcf0(param_1);
  pcStack_140 = (code *)&UNK_004fe1ed;
  func_0x0032eb30(&uStack_138,param_1,uVar3);
  pcStack_140 = (code *)&UNK_004fe201;
  func_0x0032eb30(&uStack_138,&UNK_001632e9,5);
  if (param_2 == (undefined7 *)0x0) {
    param_2 = &_ZN4absl12lts_2026052612log_internal17kUnsignedCharNullE;
  }
  pcStack_140 = (code *)&UNK_004fe210;
  uVar3 = func_0x0099bcf0(param_2);
  pcStack_140 = (code *)&UNK_004fe21e;
  func_0x0032eb30(&uStack_138,param_2,uVar3);
  pcStack_140 = (code *)&UNK_004fe232;
  func_0x0032eb30(&uStack_138,&UNK_001692c7,1);
  pcStack_140 = (code *)&UNK_004fe23c;
  pbVar4 = (byte *)_Znwm(0x18);
  pcStack_140 = (code *)&UNK_004fe24e;
  func_0x004fe4f0(pbVar4,&uStack_130);
  pcStack_140 = (code *)&UNK_004fe256;
  _ZN4absl12lts_2026052612DoIgnoreLeakEPKv(pbVar4);
  bVar1 = *pbVar4;
  pbVar5 = *(byte **)(pbVar4 + 0x10);
  uStack_138 = 0x9ba3f8;
  auStack_c8[0] = 0x9ba420;
  uStack_130 = 0x9b9f28;
  if ((bStack_f0 & 1) != 0) {
    pcStack_140 = (code *)&UNK_004fe2b1;
    _ZdaPvSt11align_val_t(uStack_e0,CONCAT71(uStack_ef,bStack_f0) & 0xfffffffffffffffe);
  }
  if ((bVar1 & 1) == 0) {
    pbVar5 = pbVar4 + 1;
  }
  uStack_130 = 0x9b9bf8;
  pcStack_140 = (code *)&UNK_004fe2da;
  _ZNSt3__16localeD2Ev(auStack_128);
  lVar7 = 0x9ba438;
  pcStack_140 = (code *)&UNK_004fe2ed;
  _ZNSt3__18ios_base4InitD1Ev(&uStack_138);
  puVar6 = auStack_c8;
  pcStack_140 = (code *)&UNK_004fe2f9;
  _ZNSt3__19basic_iosIwNS_11char_traitsIwEEED1Ev();
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_30) {
    return pbVar5;
  }
  pcStack_140 = _ZN4absl12lts_2026052612log_internal17MakeCheckOpStringIPKvS4_EEPKcT_T0_S6_;
  func_0x0099bd00();
  uStack_150 = 0x9ba438;
  lStack_168 = *(long *)(in_FS_OFFSET + 0x28);
  pbStack_160 = pbVar5;
  uStack_158 = (ulong)bVar1;
  pbStack_148 = pbVar4 + 1;
  pcStack_140 = (code *)&stack0xfffffffffffffff8;
  func_0x0099bdb0(&uStack_270,0,0x108);
  _ZN4absl12lts_2026052612log_internal21CheckOpMessageBuilderC2EPKc(&uStack_270,extraout_RDX);
  if (puVar6 == (undefined8 *)0x0) {
    func_0x0032eb30(&uStack_270,&UNK_0018b202,6);
  }
  else {
    _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEPKv(&uStack_270,puVar6);
  }
  func_0x0032eb30(&uStack_270,&UNK_001632e9,5);
  if (lVar7 == 0) {
    func_0x0032eb30(&uStack_270,&UNK_0018b202,6);
  }
  else {
    _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEPKv(&uStack_270,lVar7);
  }
  func_0x0032eb30(&uStack_270,&UNK_001692c7,1);
  pbVar4 = (byte *)_Znwm(0x18);
  func_0x004fe4f0(pbVar4,&uStack_268);
  _ZN4absl12lts_2026052612DoIgnoreLeakEPKv(pbVar4);
  bVar1 = *pbVar4;
  pbVar5 = *(byte **)(pbVar4 + 0x10);
  uStack_270 = 0x9ba3f8;
  auStack_200[0] = 0x9ba420;
  uStack_268 = 0x9b9f28;
  if ((bStack_228 & 1) != 0) {
    _ZdaPvSt11align_val_t(uStack_218,CONCAT71(uStack_227,bStack_228) & 0xfffffffffffffffe);
  }
  if ((bVar1 & 1) == 0) {
    pbVar5 = pbVar4 + 1;
  }
  uStack_268 = 0x9b9bf8;
  _ZNSt3__16localeD2Ev(auStack_260);
  _ZNSt3__18ios_base4InitD1Ev(&uStack_270,0x9ba438);
  _ZNSt3__19basic_iosIwNS_11char_traitsIwEEED1Ev(auStack_200);
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_168) {
    return pbVar5;
  }
  func_0x0099bd00();
  pcVar2 = (code *)swi(3);
  pbVar5 = (byte *)(*pcVar2)();
  return pbVar5;
}


