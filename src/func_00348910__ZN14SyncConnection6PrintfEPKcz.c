// Function: _ZN14SyncConnection6PrintfEPKcz
// Address: 00348910
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN14SyncConnection6PrintfEPKcz
               (undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
               undefined8 param_13,undefined8 param_14)

{
  code *pcVar1;
  char in_AL;
  long in_FS_OFFSET;
  undefined1 auStack_128 [16];
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined8 uStack_e8;
  undefined8 uStack_d8;
  undefined8 uStack_c8;
  undefined8 uStack_b8;
  undefined8 uStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_88;
  uint uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_38;
  undefined1 *puStack_30;
  undefined1 *puStack_28;
  long lStack_18;
  
  if (in_AL != '\0') {
    uStack_f8 = param_1;
    uStack_e8 = param_2;
    uStack_d8 = param_3;
    uStack_c8 = param_4;
    uStack_b8 = param_5;
    uStack_a8 = param_6;
    uStack_98 = param_7;
    uStack_88 = param_8;
  }
  lStack_18 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  puStack_28 = auStack_128;
  uStack_38 = 0x3000000010;
  puStack_30 = &stack0x00000008;
  uStack_118 = param_11;
  uStack_110 = param_12;
  uStack_108 = param_13;
  uStack_100 = param_14;
  _ZN7android4base13StringAppendVEPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPKcP13__va_list_tag
            (&uStack_58,param_10,&uStack_38);
  if ((uStack_58 & 1) == 0) {
    uStack_68 = uStack_48;
    uStack_78 = (uint)uStack_58;
    uStack_74 = uStack_58._4_4_;
    uStack_70 = (undefined4)uStack_50;
    uStack_6c = uStack_50._4_4_;
  }
  else {
    func_0x00330340(&uStack_78,uStack_48,uStack_50);
  }
  _ZN11LinePrinter5PrintENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEENS_8LineTypeE
            (param_9 + 0x110,&uStack_78,0);
  if ((uStack_78 & 1) != 0) {
    _ZdaPvSt11align_val_t(uStack_68,CONCAT44(uStack_74,uStack_78) & 0xfffffffffffffffe);
  }
  if ((uStack_58 & 1) != 0) {
    _ZdaPvSt11align_val_t(uStack_48,uStack_58 & 0xfffffffffffffffe);
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_18) {
    return;
  }
  func_0x0099bd00();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


