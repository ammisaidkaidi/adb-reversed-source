// Function: _ZN4absl12lts_2026052612log_internal17MakeCheckOpStringIddEEPKcT_T0_S4_
// Address: 004fd4e0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


byte * _ZN4absl12lts_2026052612log_internal17MakeCheckOpStringIddEEPKcT_T0_S4_
                 (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  code *pcVar2;
  byte *pbVar3;
  byte *pbVar4;
  long in_FS_OFFSET;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 auStack_128 [56];
  byte bStack_f0;
  undefined7 uStack_ef;
  undefined8 uStack_e0;
  undefined8 auStack_c8 [19];
  long lStack_30;
  
  lStack_30 = *(long *)(in_FS_OFFSET + 0x28);
  func_0x0099bdb0(&uStack_138,0,0x108);
  _ZN4absl12lts_2026052612log_internal21CheckOpMessageBuilderC2EPKc(&uStack_138,param_3);
  _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEd(param_1,&uStack_138);
  func_0x0032eb30(&uStack_138,&UNK_001632e9,5);
  _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEd(param_2,&uStack_138);
  func_0x0032eb30(&uStack_138,&UNK_001692c7,1);
  pbVar3 = (byte *)_Znwm(0x18);
  func_0x004fe4f0(pbVar3,&uStack_130);
  _ZN4absl12lts_2026052612DoIgnoreLeakEPKv(pbVar3);
  bVar1 = *pbVar3;
  pbVar4 = *(byte **)(pbVar3 + 0x10);
  uStack_138 = 0x9ba3f8;
  auStack_c8[0] = 0x9ba420;
  uStack_130 = 0x9b9f28;
  if ((bStack_f0 & 1) != 0) {
    _ZdaPvSt11align_val_t(uStack_e0,CONCAT71(uStack_ef,bStack_f0) & 0xfffffffffffffffe);
  }
  if ((bVar1 & 1) == 0) {
    pbVar4 = pbVar3 + 1;
  }
  uStack_130 = 0x9b9bf8;
  _ZNSt3__16localeD2Ev(auStack_128);
  _ZNSt3__18ios_base4InitD1Ev(&uStack_138,0x9ba438);
  _ZNSt3__19basic_iosIwNS_11char_traitsIwEEED1Ev(auStack_c8);
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_30) {
    return pbVar4;
  }
  func_0x0099bd00();
  pcVar2 = (code *)swi(3);
  pbVar4 = (byte *)(*pcVar2)();
  return pbVar4;
}


