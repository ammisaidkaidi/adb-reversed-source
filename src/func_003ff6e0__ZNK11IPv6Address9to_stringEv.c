// Function: _ZNK11IPv6Address9to_stringEv
// Address: 003ff6e0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 * _ZNK11IPv6Address9to_stringEv(undefined8 *param_1,long param_2)

{
  code *pcVar1;
  ulong uVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  long in_FS_OFFSET;
  undefined8 uStack_1f8;
  ulong uStack_1f0;
  long lStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined4 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 **ppuStack_1b8;
  undefined8 uStack_1b0;
  ulong *puStack_1a8;
  undefined8 uStack_1a0;
  undefined1 auStack_198 [8];
  char cStack_190;
  ulong auStack_188 [4];
  undefined8 *puStack_168;
  undefined8 uStack_160;
  ulong uStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
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
  undefined8 *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  puVar3 = (undefined1 *)_Znwm(0x28);
  *puVar3 = 0;
  *param_1 = 0x29;
  param_1[1] = 0;
  param_1[2] = puVar3;
  uVar7 = 0;
  while( true ) {
    auStack_188[2] = 6;
    auStack_188[0] =
         (ulong)(ushort)(*(ushort *)(param_2 + uVar7) << 8 | *(ushort *)(param_2 + uVar7) >> 8);
    auStack_188[1] = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_f0 = 0;
    uStack_e8 = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_160 = 0x100;
    uStack_158 = 0;
    puStack_150 = &UNK_00358010;
    uStack_148 = 0;
    puStack_1e0 = &UNK_00172407;
    puStack_1d8 = &UNK_0017240b;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    uStack_1c0 = 1;
    uStack_1b0 = 1;
    puStack_1a8 = auStack_188;
    uStack_1a0 = 6;
    ppuStack_1b8 = &puStack_168;
    auStack_198[0] = 0;
    cStack_190 = '\0';
    puStack_168 = &uStack_140;
    puStack_40 = &uStack_140;
    func_0x003580e0(&puStack_1e0,&ppuStack_1b8);
    if (cStack_190 == '\x01') {
      _ZNSt3__16localeD2Ev(auStack_198);
    }
    puVar5 = puStack_40;
    uVar2 = uStack_158;
    if (0xfffffffffffffff6 < uStack_158) {
      func_0x0032e8f0();
      goto code_r0x003ff9d6;
    }
    if (uStack_158 < 0x17) {
      uStack_1f8 = CONCAT71(uStack_1f8._1_7_,(char)uStack_158 * '\x02');
      lVar4 = (long)&uStack_1f8 + 1;
    }
    else {
      lVar6 = (uStack_158 | 7) + 1;
      if ((uStack_158 | 7) == 0x17) {
        lVar6 = 0x1a;
      }
      lVar4 = _Znwm(lVar6);
      uStack_1f8 = lVar6 + 1;
      uStack_1f0 = uVar2;
      lStack_1e8 = lVar4;
    }
    func_0x0099bd90(lVar4,puVar5,uVar2);
    *(undefined1 *)(lVar4 + uVar2) = 0;
    if (puVar5 != &uStack_140) {
      _ZdaPvSt11align_val_t(puVar5,uStack_160);
    }
    func_0x0032e820(param_1,&uStack_1f8);
    if ((uStack_1f8 & 1) != 0) {
      _ZdaPvSt11align_val_t(lStack_1e8,uStack_1f8 & 0xfffffffffffffffe);
    }
    if (0xd < uVar7) break;
    _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
              (param_1,&UNK_00173d53);
    uVar7 = uVar7 + 2;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return param_1;
  }
code_r0x003ff9d6:
  func_0x0099bd00();
  pcVar1 = (code *)swi(3);
  puVar5 = (undefined8 *)(*pcVar1)();
  return puVar5;
}


