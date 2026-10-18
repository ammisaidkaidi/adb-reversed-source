// Function: _ZN14SyncConnection7WarningEPKcz
// Address: 00343150
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN14SyncConnection7WarningEPKcz
               (undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
               undefined8 param_13,undefined8 param_14)

{
  code *pcVar1;
  char in_AL;
  long in_FS_OFFSET;
  undefined1 auStack_118 [16];
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined8 uStack_d8;
  undefined8 uStack_c8;
  undefined8 uStack_b8;
  undefined8 uStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_88;
  undefined8 uStack_78;
  uint uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  uint uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 *puStack_30;
  undefined1 *puStack_28;
  long lStack_18;
  
  if (in_AL != '\0') {
    uStack_e8 = param_1;
    uStack_d8 = param_2;
    uStack_c8 = param_3;
    uStack_b8 = param_4;
    uStack_a8 = param_5;
    uStack_98 = param_6;
    uStack_88 = param_7;
    uStack_78 = param_8;
  }
  lStack_18 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_40 = 0;
  uStack_50 = 0x6264611c;
  uStack_4c = 0x6177203a;
  uStack_48 = 0x6e696e72;
  uStack_44 = 0x203a67;
  puStack_28 = auStack_118;
  uStack_38 = 0x3000000010;
  puStack_30 = &stack0x00000008;
  uStack_108 = param_11;
  uStack_100 = param_12;
  uStack_f8 = param_13;
  uStack_f0 = param_14;
  _ZN7android4base13StringAppendVEPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPKcP13__va_list_tag
            (&uStack_50,param_10,&uStack_38);
  if ((uStack_50 & 1) == 0) {
    uStack_58 = uStack_40;
    uStack_68 = uStack_50;
    uStack_64 = uStack_4c;
    uStack_60 = uStack_48;
    uStack_5c = uStack_44;
  }
  else {
    func_0x00330340(&uStack_68,uStack_40,CONCAT44(uStack_44,uStack_48));
  }
  _ZN11LinePrinter5PrintENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEENS_8LineTypeE
            (param_9 + 0x110,&uStack_68,1);
  if ((uStack_68 & 1) != 0) {
    _ZdaPvSt11align_val_t(uStack_58,CONCAT44(uStack_64,uStack_68) & 0xfffffffffffffffe);
  }
  if ((uStack_50 & 1) != 0) {
    _ZdaPvSt11align_val_t(uStack_40,CONCAT44(uStack_4c,uStack_50) & 0xfffffffffffffffe);
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_18) {
    return;
  }
  func_0x0099bd00();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


