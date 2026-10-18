// Function: _ZN14SyncConnection12FinishLsImplILb1EEEbN7android4base11borrowed_fdERKNSt3__18functionIFvjmmPKcEEE
// Address: 00343af0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8
_ZN14SyncConnection12FinishLsImplILb1EEEbN7android4base11borrowed_fdERKNSt3__18functionIFvjmmPKcEEE
          (ulong param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  ulong uVar3;
  char cVar4;
  long lVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  ulong uStack_164;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined4 uStack_13c;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_168 = 0;
  uStack_164 = 0;
  uStack_178 = 0;
  uStack_170 = 0;
  uStack_16c = 0;
  uStack_188 = 0;
  uStack_180 = 0;
  uStack_198 = 0;
  uStack_190 = 0;
  uStack_1a8 = 0;
  uStack_1a0 = 0;
  cVar4 = _Z13ReadFdExactlyN7android4base11borrowed_fdEPvm(param_1,&uStack_1a8,0x4c);
  if (cVar4 != '\0') {
    while ((int)uStack_1a8 == 0x32544e44) {
      uStack_48 = 0;
      uStack_40 = 0;
      uStack_58 = 0;
      uStack_50 = 0;
      uStack_68 = 0;
      uStack_60 = 0;
      uStack_78 = 0;
      uStack_70 = 0;
      uStack_88 = 0;
      uStack_80 = 0;
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_a8 = 0;
      uStack_a0 = 0;
      uStack_b8 = 0;
      uStack_b0 = 0;
      uStack_c8 = 0;
      uStack_c0 = 0;
      uStack_d8 = 0;
      uStack_d0 = 0;
      uStack_e8 = 0;
      uStack_e0 = 0;
      uStack_f8 = 0;
      uStack_f0 = 0;
      uStack_108 = 0;
      uStack_100 = 0;
      uStack_118 = 0;
      uStack_110 = 0;
      uStack_128 = 0;
      uStack_120 = 0;
      uStack_138 = 0;
      uStack_130 = 0;
      uVar3 = uStack_164 >> 0x20;
      if ((0xff < uVar3) ||
         (cVar4 = _Z13ReadFdExactlyN7android4base11borrowed_fdEPvm
                            (param_1 & 0xffffffff,&uStack_138,uVar3), cVar4 == '\0'))
      goto code_r0x00343cd7;
      *(undefined1 *)((long)&uStack_138 + uVar3) = 0;
      lVar5 = func_0x0099c0c0(&uStack_138,0x2f);
      if (lVar5 != 0) goto code_r0x00343cd7;
      uStack_150 = CONCAT44(uStack_16c,uStack_170);
      uStack_13c = (undefined4)uStack_190;
      uStack_148 = uStack_180;
      plVar1 = *(long **)(param_2 + 0x20);
      puStack_158 = &uStack_138;
      if (plVar1 == (long *)0x0) {
        func_0x00343f00();
        goto code_r0x00343cff;
      }
      (**(code **)(*plVar1 + 0x30))(plVar1,&uStack_13c,&uStack_148,&uStack_150,&puStack_158);
      uStack_168 = 0;
      uStack_164 = 0;
      uStack_178 = 0;
      uStack_170 = 0;
      uStack_16c = 0;
      uStack_188 = 0;
      uStack_180 = 0;
      uStack_198 = 0;
      uStack_190 = 0;
      uStack_1a8 = 0;
      uStack_1a0 = 0;
      cVar4 = _Z13ReadFdExactlyN7android4base11borrowed_fdEPvm
                        (param_1 & 0xffffffff,&uStack_1a8,0x4c);
      if (cVar4 == '\0') goto code_r0x00343cd7;
    }
    if ((int)uStack_1a8 == 0x454e4f44) {
      uVar6 = 0x454e4f01;
      goto code_r0x00343cd9;
    }
  }
code_r0x00343cd7:
  uVar6 = 0;
code_r0x00343cd9:
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return uVar6;
  }
code_r0x00343cff:
  func_0x0099bd00();
  pcVar2 = (code *)swi(3);
  uVar6 = (*pcVar2)();
  return uVar6;
}


