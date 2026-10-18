// Function: _ZNK11incremental21ISSignedDatabaseEntry9serializeEv
// Address: 00363130
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long * _ZNK11incremental21ISSignedDatabaseEntry9serializeEv(long *param_1,long param_2)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 *puVar3;
  char *pcVar4;
  long *plVar5;
  long lVar6;
  long in_FS_OFFSET;
  bool bVar7;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined4 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 **ppuStack_1f8;
  undefined8 uStack_1f0;
  long *plStack_1e8;
  undefined *puStack_1e0;
  undefined1 auStack_1d8 [8];
  char cStack_1d0;
  long lStack_1c8;
  ulong uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  ulong uStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  ulong uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
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
  bVar7 = (*(byte *)(param_2 + 8) & 1) != 0;
  lStack_1c8 = param_2 + 9;
  if (bVar7) {
    lStack_1c8 = *(long *)(param_2 + 0x18);
  }
  uStack_1c0 = (ulong)(*(byte *)(param_2 + 8) >> 1);
  if (bVar7) {
    uStack_1c0 = *(ulong *)(param_2 + 0x10);
  }
  uStack_1b8 = *(undefined8 *)(param_2 + 0x20);
  uStack_1b0 = 0;
  uStack_1a8 = (ulong)*(uint *)(param_2 + 0x28);
  uStack_1a0 = 0;
  bVar7 = (*(byte *)(param_2 + 0x30) & 1) != 0;
  lStack_198 = param_2 + 0x31;
  if (bVar7) {
    lStack_198 = *(long *)(param_2 + 0x40);
  }
  uStack_190 = (ulong)(*(byte *)(param_2 + 0x30) >> 1);
  if (bVar7) {
    uStack_190 = *(ulong *)(param_2 + 0x38);
  }
  puStack_178 = &UNK_00368ced;
  uStack_180 = 0;
  uStack_188 = 1;
  puStack_168 = &uStack_140;
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
  puStack_220 = &UNK_00175549;
  puStack_218 = &UNK_00175557;
  uStack_210 = 0;
  uStack_208 = 0;
  uStack_200 = 5;
  uStack_1f0 = 5;
  plStack_1e8 = &lStack_1c8;
  puStack_1e0 = &UNK_00368ced;
  ppuStack_1f8 = &puStack_168;
  auStack_1d8[0] = 0;
  cStack_1d0 = '\0';
  puStack_40 = puStack_168;
  func_0x003580e0(&puStack_220,&ppuStack_1f8);
  if (cStack_1d0 == '\x01') {
    _ZNSt3__16localeD2Ev(auStack_1d8);
  }
  puVar3 = puStack_40;
  uVar2 = uStack_158;
  if (uStack_158 < 0xfffffffffffffff7) {
    if (uStack_158 < 0x17) {
      *(char *)param_1 = (char)uStack_158 * '\x02';
      pcVar4 = (char *)((long)param_1 + 1);
    }
    else {
      lVar6 = 0x1a;
      if ((uStack_158 | 7) != 0x17) {
        lVar6 = (uStack_158 | 7) + 1;
      }
      pcVar4 = (char *)_Znwm(lVar6);
      *param_1 = lVar6 + 1;
      param_1[1] = uVar2;
      param_1[2] = (long)pcVar4;
    }
    func_0x0099bd90(pcVar4,puVar3,uVar2);
    pcVar4[uVar2] = '\0';
    if (puVar3 != &uStack_140) {
      _ZdaPvSt11align_val_t(puVar3,uStack_160);
    }
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
      return param_1;
    }
  }
  else {
    func_0x0032e8f0();
  }
  func_0x0099bd00();
  pcVar1 = (code *)swi(3);
  plVar5 = (long *)(*pcVar1)();
  return plVar5;
}


