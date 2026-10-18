// Function: _ZN14SyncConnection12FinishLsImplILb0EEEbN7android4base11borrowed_fdERKNSt3__18functionIFvjmmPKcEEE
// Address: 00343d10
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8
_ZN14SyncConnection12FinishLsImplILb0EEEbN7android4base11borrowed_fdERKNSt3__18functionIFvjmmPKcEEE
          (ulong param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  char cVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long in_FS_OFFSET;
  undefined8 uStack_178;
  ulong uStack_170;
  uint uStack_168;
  undefined8 *puStack_158;
  ulong uStack_150;
  ulong uStack_148;
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
  uStack_178 = 0;
  uStack_170 = 0;
  uStack_168 = 0;
  cVar3 = _Z13ReadFdExactlyN7android4base11borrowed_fdEPvm(param_1,&uStack_178,0x14);
  if (cVar3 != '\0') {
    while ((int)uStack_178 == 0x544e4544) {
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
      uVar6 = (ulong)uStack_168;
      if ((0xff < uVar6) ||
         (cVar3 = _Z13ReadFdExactlyN7android4base11borrowed_fdEPvm
                            (param_1 & 0xffffffff,&uStack_138,uVar6), cVar3 == '\0'))
      goto code_r0x00343ecf;
      *(undefined1 *)((long)&uStack_138 + uVar6) = 0;
      lVar4 = func_0x0099c0c0(&uStack_138,0x2f);
      if (lVar4 != 0) goto code_r0x00343ecf;
      uStack_148 = uStack_170 & 0xffffffff;
      uStack_150 = uStack_170 >> 0x20;
      uStack_13c = uStack_178._4_4_;
      plVar1 = *(long **)(param_2 + 0x20);
      puStack_158 = &uStack_138;
      if (plVar1 == (long *)0x0) {
        func_0x00343f00();
        goto code_r0x00343ef7;
      }
      (**(code **)(*plVar1 + 0x30))(plVar1,&uStack_13c,&uStack_148,&uStack_150,&puStack_158);
      uStack_178 = 0;
      uStack_170 = 0;
      uStack_168 = 0;
      cVar3 = _Z13ReadFdExactlyN7android4base11borrowed_fdEPvm
                        (param_1 & 0xffffffff,&uStack_178,0x14);
      if (cVar3 == '\0') goto code_r0x00343ecf;
    }
    if ((int)uStack_178 == 0x454e4f44) {
      uVar5 = 0x454e4f01;
      goto code_r0x00343ed1;
    }
  }
code_r0x00343ecf:
  uVar5 = 0;
code_r0x00343ed1:
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return uVar5;
  }
code_r0x00343ef7:
  func_0x0099bd00();
  pcVar2 = (code *)swi(3);
  uVar5 = (*pcVar2)();
  return uVar5;
}


