// Function: _Z23getEmulatorSerialStringi
// Address: 0040c200
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Removing unreachable block (ram,0x007dfa2f) */

undefined8 *
_Z23getEmulatorSerialStringi
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
          undefined8 *param_9,ulong param_10,undefined8 param_11,undefined8 param_12,
          undefined8 param_13,undefined8 param_14)

{
  code *pcVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 extraout_RDX;
  long in_FS_OFFSET;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  undefined8 extraout_XMM1_Qa;
  undefined1 auStack_1c0 [16];
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 uStack_180;
  undefined8 uStack_170;
  undefined8 uStack_160;
  undefined8 uStack_150;
  undefined8 uStack_140;
  undefined8 uStack_130;
  undefined8 uStack_120;
  undefined8 uStack_110;
  undefined1 *puStack_108;
  undefined1 *puStack_100;
  undefined8 *puStack_f8;
  undefined *puStack_f0;
  undefined1 auStack_e8 [8];
  undefined1 auStack_e0 [8];
  ulong uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_38;
  undefined1 *puStack_30;
  undefined1 *puStack_28;
  long lStack_18;
  
  uStack_d8 = param_10 & 0xffffffff;
  lStack_18 = *(long *)(in_FS_OFFSET + 0x28);
  puStack_28 = auStack_e8;
  uStack_38 = 0x3000000010;
  puStack_30 = &stack0x00000008;
  *param_9 = 0;
  param_9[1] = 0;
  param_9[2] = 0;
  puStack_f0 = &UNK_007dfaa1;
  uStack_d0 = param_12;
  uStack_c8 = param_13;
  uStack_c0 = param_14;
  _ZN7android4base13StringAppendVEPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPKcP13__va_list_tag
            (param_9,&UNK_001862a3,&uStack_38);
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_18) {
    return param_9;
  }
  puStack_f0 = &UNK_007dfac2;
  cVar2 = func_0x0099bd00();
  if (cVar2 != '\0') {
    uStack_190 = extraout_XMM0_Da;
    uStack_18c = extraout_XMM0_Db;
    uStack_180 = extraout_XMM1_Qa;
    uStack_170 = param_3;
    uStack_160 = param_4;
    uStack_150 = param_5;
    uStack_140 = param_6;
    uStack_130 = param_7;
    uStack_120 = param_8;
  }
  puStack_f8 = *(undefined8 **)(in_FS_OFFSET + 0x28);
  puStack_100 = auStack_1c0;
  uStack_110 = 0x3000000010;
  puStack_108 = auStack_e0;
  uStack_1b0 = extraout_RDX;
  uStack_1a8 = param_12;
  uStack_1a0 = param_13;
  uStack_198 = param_14;
  puStack_f0 = &stack0xfffffffffffffff8;
  _ZN7android4base13StringAppendVEPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPKcP13__va_list_tag
            ();
  if (*(undefined8 **)(in_FS_OFFSET + 0x28) != puStack_f8) {
    func_0x0099bd00();
    pcVar1 = (code *)swi(3);
    puVar3 = (undefined8 *)(*pcVar1)();
    return puVar3;
  }
  return *(undefined8 **)(in_FS_OFFSET + 0x28);
}


