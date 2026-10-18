// Function: _ZN4absl12lts_2026052618debugging_internal22GetSectionHeaderByNameEiPKcmP10Elf64_Shdr
// Address: 004ef080
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _ZN4absl12lts_2026052618debugging_internal22GetSectionHeaderByNameEiPKcmP10Elf64_Shdr
                (uint param_1,undefined8 param_2,ulong param_3,uint *param_4)

{
  ushort uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong *puVar5;
  byte bVar6;
  uint uVar7;
  long in_FS_OFFSET;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  ulong uStack_150;
  undefined8 *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
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
  undefined4 uStack_88;
  ulong auStack_78 [9];
  
  auStack_78[8] = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 < 0x41) {
    auStack_78[6] = 0;
    auStack_78[7] = 0;
    auStack_78[4] = 0;
    auStack_78[5] = 0;
    auStack_78[2] = 0;
    auStack_78[3] = 0;
    auStack_78[0] = 0;
    auStack_78[1] = 0;
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
    uStack_88 = 0;
    uStack_150 = (ulong)param_1;
    puStack_148 = &uStack_e8;
    uStack_140 = 100;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_108 = 0;
    lStack_100 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uVar4 = 0;
    puVar5 = &uStack_150;
    lVar3 = func_0x004eef80(puVar5,&uStack_128,0x40,0);
    if (lVar3 == 0x40) {
      if (uStack_f0._2_2_ == 0x40) {
        uStack_168 = 0;
        uStack_160 = 0;
        uStack_178 = 0;
        uStack_170 = 0;
        uStack_188 = 0;
        lStack_180 = 0;
        uStack_198 = 0;
        uStack_190 = 0;
        puVar5 = &uStack_150;
        lVar3 = func_0x004eef80(puVar5,&uStack_198,0x40,(uStack_f0 >> 0x30) * 0x40 + lStack_100);
        if ((lVar3 == 0x40) && (uVar7 = 0, uStack_f0._4_2_ != 0)) {
          do {
            puVar5 = &uStack_150;
            lVar3 = func_0x004eef80(&uStack_150,param_4,0x40,
                                    (ulong)(uStack_f0._2_2_ * uVar7) + lStack_100);
            bVar6 = 1;
            if (lVar3 != 0x40) {
code_r0x004ef2d7:
              uVar1 = 0;
              goto code_r0x004ef2de;
            }
            puVar5 = &uStack_150;
            uVar4 = func_0x004eef80(&uStack_150,auStack_78,param_3,(ulong)*param_4 + lStack_180);
            if ((long)uVar4 < 0) goto code_r0x004ef2d7;
            if (uVar4 == param_3) {
              puVar5 = auStack_78;
              iVar2 = func_0x0099bf90(puVar5,param_2,param_3);
              if (iVar2 == 0) {
                bVar6 = 1;
                uVar1 = 1;
                goto code_r0x004ef2de;
              }
            }
            uVar7 = uVar7 + 1;
          } while (uVar7 < uStack_f0._4_2_);
          bVar6 = 0;
          uVar1 = uStack_f0._4_2_;
code_r0x004ef2de:
          uVar4 = (ulong)(bVar6 & (byte)uVar1);
          goto code_r0x004ef2b3;
        }
      }
      uVar4 = 0;
    }
  }
  else {
    uVar4 = 0;
    puVar5 = (ulong *)0x1;
    _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
              (1,&UNK_0018840c,0x297,&UNK_0015cd02,param_2,param_3);
  }
code_r0x004ef2b3:
  if (*(long *)(in_FS_OFFSET + 0x28) == auStack_78[8]) {
    return uVar4;
  }
  func_0x0099bd00();
  uVar4 = (ulong)puRam0000000000a030b0;
  LOCK();
  puRam0000000000a030b0 = puVar5;
  UNLOCK();
  return uVar4;
}


