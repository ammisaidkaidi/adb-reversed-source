// Function: _Z39find_emulator_transport_by_console_porti
// Address: 0040c180
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Removing unreachable block (ram,0x007dfa2f) */

undefined8 *
_Z39find_emulator_transport_by_console_porti
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
          undefined4 param_9)

{
  code *pcVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 extraout_RDX;
  undefined8 *unaff_RBX;
  undefined *puVar6;
  undefined8 in_R8;
  undefined8 in_R9;
  long in_FS_OFFSET;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  undefined8 extraout_XMM1_Qa;
  undefined1 auStack_1f8 [16];
  undefined8 uStack_1e8;
  long lStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined8 uStack_1b8;
  undefined8 uStack_1a8;
  undefined8 uStack_198;
  undefined8 uStack_188;
  undefined8 uStack_178;
  undefined8 uStack_168;
  undefined8 uStack_158;
  undefined8 uStack_148;
  undefined1 *puStack_140;
  undefined1 *puStack_138;
  undefined8 *puStack_130;
  undefined *puStack_128;
  undefined1 auStack_120 [8];
  undefined1 auStack_118 [8];
  ulong uStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_70;
  byte *pbStack_68;
  undefined1 *puStack_60;
  long lStack_50;
  undefined8 *puStack_48;
  undefined *apuStack_40 [2];
  byte bStack_30;
  undefined8 uStack_2f;
  undefined8 *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)(in_FS_OFFSET + 0x28);
  puVar6 = &UNK_001862a3;
  apuStack_40[0] = &UNK_0040c1aa;
  _ZN7android4base12StringPrintfEPKcz(&bStack_30,&UNK_001862a3,param_9);
  puVar4 = puStack_20;
  if ((bStack_30 & 1) == 0) {
    puVar4 = &uStack_2f;
  }
  apuStack_40[0] = &UNK_0040c1bf;
  puVar3 = (undefined8 *)_Z14find_transportPKc();
  if ((bStack_30 & 1) != 0) {
    puVar6 = (undefined *)(CONCAT71((undefined7)uStack_2f,bStack_30) & 0xfffffffffffffffe);
    apuStack_40[0] = &UNK_0040c1d9;
    _ZdaPvSt11align_val_t();
    unaff_RBX = puVar3;
    puVar4 = puStack_20;
  }
  lVar5 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar5 == lStack_18) {
    return puVar3;
  }
  apuStack_40[0] = &UNK_0040c1f7;
  func_0x0099bd00();
  uStack_110 = (ulong)puVar6 & 0xffffffff;
  lStack_50 = *(long *)(in_FS_OFFSET + 0x28);
  puStack_60 = auStack_120;
  uStack_70 = 0x3000000010;
  pbStack_68 = &bStack_30;
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  puStack_128 = &UNK_007dfaa1;
  lStack_108 = lVar5;
  uStack_100 = in_R8;
  uStack_f8 = in_R9;
  puStack_48 = unaff_RBX;
  apuStack_40[0] = &stack0xfffffffffffffff8;
  _ZN7android4base13StringAppendVEPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPKcP13__va_list_tag
            ();
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_50) {
    return puVar4;
  }
  puStack_128 = &UNK_007dfac2;
  cVar2 = func_0x0099bd00();
  if (cVar2 != '\0') {
    uStack_1c8 = extraout_XMM0_Da;
    uStack_1c4 = extraout_XMM0_Db;
    uStack_1b8 = extraout_XMM1_Qa;
    uStack_1a8 = param_3;
    uStack_198 = param_4;
    uStack_188 = param_5;
    uStack_178 = param_6;
    uStack_168 = param_7;
    uStack_158 = param_8;
  }
  puStack_130 = *(undefined8 **)(in_FS_OFFSET + 0x28);
  puStack_138 = auStack_1f8;
  uStack_148 = 0x3000000010;
  puStack_140 = auStack_118;
  uStack_1e8 = extraout_RDX;
  lStack_1e0 = lVar5;
  uStack_1d8 = in_R8;
  uStack_1d0 = in_R9;
  puStack_128 = (undefined *)apuStack_40;
  _ZN7android4base13StringAppendVEPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPKcP13__va_list_tag
            ();
  if (*(undefined8 **)(in_FS_OFFSET + 0x28) == puStack_130) {
    return *(undefined8 **)(in_FS_OFFSET + 0x28);
  }
  func_0x0099bd00();
  pcVar1 = (code *)swi(3);
  puVar4 = (undefined8 *)(*pcVar1)();
  return puVar4;
}


