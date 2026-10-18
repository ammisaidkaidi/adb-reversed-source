// Function: _ZN4absl12lts_2026052613time_internal4cctz12TimeZoneInfo17ResetToBuiltinUTCERKNSt3__16chrono8durationIlNS4_5ratioILl1ELl1EEEEE
// Address: 004c5760
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Possible PIC construction at 0x004c5ebd: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x004c5ec2) */
/* WARNING: Removing unreachable block (ram,0x004c5eca) */

undefined8
_ZN4absl12lts_2026052613time_internal4cctz12TimeZoneInfo17ResetToBuiltinUTCERKNSt3__16chrono8durationIlNS4_5ratioILl1ELl1EEEEE
          (long param_1,undefined4 *param_2)

{
  uint *puVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  ulong *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  byte bVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  char *pcVar15;
  byte *pbVar16;
  ulong **ppuVar17;
  ulong *puVar18;
  ulong *puVar19;
  ulong *puVar20;
  ulong *puVar21;
  long lVar22;
  ulong *puVar23;
  ulong *puVar24;
  ulong *puVar25;
  byte *pbVar26;
  long in_FS_OFFSET;
  undefined1 auVar27 [16];
  undefined *puStack_178;
  ulong *puStack_170;
  long lStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong *puStack_150;
  ulong *puStack_148;
  long lStack_140;
  ulong uStack_130;
  ulong *puStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong *puStack_110;
  ulong *puStack_108;
  uint uStack_100;
  uint uStack_fc;
  uint uStack_f8;
  uint uStack_f4;
  undefined8 uStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  char cStack_c8;
  byte bStack_c7;
  byte bStack_c6;
  byte bStack_c5;
  char cStack_c4;
  byte bStack_c3;
  byte bStack_c2;
  byte bStack_c1;
  char cStack_c0;
  byte bStack_bf;
  byte bStack_be;
  byte bStack_bd;
  undefined8 uStack_bc;
  long lStack_b0;
  byte *pbStack_a8;
  ulong *puStack_a0;
  ulong *puStack_98;
  ulong *puStack_90;
  ulong *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  long lStack_68;
  undefined4 *puStack_60;
  long lStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  puVar24 = *(ulong **)(param_1 + 0x20);
  puVar7 = *(ulong **)(param_1 + 0x28);
  lVar12 = (long)puVar7 - (long)puVar24 >> 4;
  lStack_58 = param_1;
  if (puVar7 == puVar24) {
    puStack_80 = &UNK_004c57d2;
    func_0x004ca310(param_1 + 0x20,lVar12 * 0x5555555555555555 + 1);
    puVar7 = *(ulong **)(lStack_58 + 0x28);
  }
  else if (1 < (ulong)(lVar12 * -0x5555555555555555)) {
    puVar7 = puVar24 + 6;
    *(ulong **)(param_1 + 0x28) = puVar7;
  }
  *(undefined4 *)(puVar7 + -6) = *param_2;
  *(undefined2 *)(puVar7 + -1) = 0;
  lVar12 = *(long *)(lStack_58 + 8);
  *(long *)(lStack_58 + 0x10) = lVar12;
  lVar22 = *(long *)(lStack_58 + 0x18) - lVar12;
  puStack_60 = param_2;
  if ((ulong)((lVar22 >> 4) * -0x5555555555555555) < 0xc) {
    puStack_80 = &UNK_004c5815;
    lVar5 = _Znwm(0x240);
    *(long *)(lStack_58 + 8) = lVar5;
    *(long *)(lStack_58 + 0x10) = lVar5;
    *(long *)(lStack_58 + 0x18) = lVar5 + 0x240;
    if (lVar12 != 0) {
      puStack_80 = &UNK_004c583c;
      _ZdaPvSt11align_val_t(lVar12,lVar22);
    }
  }
  lStack_68 = lStack_58 + 8;
  pbVar16 = (byte *)0xffffffffff;
  lVar12 = 0;
  do {
    lVar22 = *(long *)(&UNK_001ff4f0 + lVar12);
    puStack_80 = &UNK_004c587b;
    plVar6 = (long *)_ZNSt3__16vectorIN4absl12lts_2026052613time_internal4cctz10TransitionENS_9allocatorIS5_EEE7emplaceIJEEENS_11__wrap_iterIPS5_EENSA_IPKS5_EEDpOT_
                               (lStack_68,*(undefined8 *)(lStack_58 + 0x10));
    *plVar6 = lVar22;
    *(undefined1 *)(plVar6 + 1) = 0;
    puStack_80 = &UNK_004c58ca;
    auVar27 = _ZN4absl12lts_2026052613time_internal4cctz6detail4impl5n_secEllllll
                        (0x7b2,1,1,0,lVar22 / 0x3c,lVar22 % 0x3c);
    puStack_80 = &UNK_004c5931;
    auVar27 = _ZN4absl12lts_2026052613time_internal4cctz6detail4impl5n_secEllllll
                        (auVar27._0_8_,(long)auVar27[8],(long)auVar27[9],(long)auVar27[10],
                         (long)auVar27[0xb] + (long)((int)puVar7[-6] / 0x3c),
                         (long)((int)puVar7[-6] % 0x3c) + (long)auVar27[0xc]);
    plVar6[2] = auVar27._0_8_;
    plVar6[3] = auVar27._8_8_ & 0xffffffffff;
    puStack_80 = &UNK_004c5976;
    auVar27 = _ZN4absl12lts_2026052613time_internal4cctz6detail4impl5n_secEllllll
                        (auVar27._0_8_,(long)auVar27[8],(long)auVar27[9],(long)auVar27[10],
                         (long)auVar27[0xb],(long)auVar27[0xc] + -1);
    plVar6[4] = auVar27._0_8_;
    plVar6[5] = auVar27._8_8_ & 0xffffffffff;
    lVar12 = lVar12 + 8;
  } while (lVar12 != 0x60);
  *(undefined1 *)(lStack_58 + 0x38) = 0;
  puStack_80 = &UNK_004c59a6;
  _ZN4absl12lts_2026052613time_internal4cctz17FixedOffsetToAbbrERKNSt3__16chrono8durationIlNS3_5ratioILl1ELl1EEEEE
            (&uStack_50,puStack_60);
  lVar12 = lStack_58;
  pcVar15 = (char *)(lStack_58 + 0x40);
  if ((*(byte *)(lStack_58 + 0x40) & 1) != 0) {
    puStack_80 = &UNK_004c59c9;
    _ZdaPvSt11align_val_t
              (*(undefined8 *)(lStack_58 + 0x50),*(ulong *)(lStack_58 + 0x40) & 0xfffffffffffffffe);
  }
  *(undefined8 *)(lVar12 + 0x50) = uStack_40;
  *(undefined4 *)pcVar15 = uStack_50;
  *(undefined4 *)(lVar12 + 0x44) = uStack_4c;
  *(undefined4 *)(lVar12 + 0x48) = uStack_48;
  *(undefined4 *)(lVar12 + 0x4c) = uStack_44;
  uVar8 = *(ulong *)(lStack_58 + 0x40);
  uVar13 = 0x16;
  if ((*(byte *)(lStack_58 + 0x40) & 1) != 0) {
    uVar13 = (uVar8 & 0xfffffffffffffffe) - 1;
  }
  bVar11 = (byte)uVar8;
  if ((uVar8 & 1) == 0) {
    uVar8 = (ulong)((uint)uVar8 >> 1 & 0x7f);
  }
  else {
    uVar8 = *(ulong *)(lStack_58 + 0x48);
  }
  if (uVar13 == uVar8) {
    uStack_78 = 0;
    puStack_80 = &UNK_004c5a3a;
    _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__grow_byEmmmmmm
              (pcVar15,uVar13,1,uVar13,uVar13,0);
    *(ulong *)(lStack_58 + 0x48) = uVar13;
    bVar11 = *(byte *)(lStack_58 + 0x40);
  }
  if ((bVar11 & 1) == 0) {
    lVar12 = lStack_58 + 0x41;
  }
  else {
    lVar12 = *(long *)(lStack_58 + 0x50);
  }
  *(undefined1 *)(lVar12 + uVar8) = 0;
  lVar22 = uVar8 + 1;
  if ((*(byte *)(lStack_58 + 0x40) & 1) == 0) {
    *pcVar15 = (char)lVar22 * '\x02';
  }
  else {
    *(long *)(lStack_58 + 0x48) = lVar22;
  }
  *(undefined1 *)(lVar12 + lVar22) = 0;
  if ((*(byte *)(lStack_58 + 0x70) & 1) == 0) {
    *(undefined2 *)(lStack_58 + 0x70) = 0;
  }
  else {
    **(undefined1 **)(lStack_58 + 0x80) = 0;
    *(undefined8 *)(lStack_58 + 0x78) = 0;
  }
  *(undefined1 *)(lStack_58 + 0x88) = 0;
  puStack_80 = &UNK_004c5ac4;
  auVar27 = _ZN4absl12lts_2026052613time_internal4cctz6detail4impl5n_secEllllll
                      (0x7b2,1,1,0,0x222222222222222,7);
  puStack_80 = &UNK_004c5b2b;
  auVar27 = _ZN4absl12lts_2026052613time_internal4cctz6detail4impl5n_secEllllll
                      (auVar27._0_8_,(long)auVar27[8],(long)auVar27[9],(long)auVar27[10],
                       (long)auVar27[0xb] + (long)((int)puVar7[-6] / 0x3c),
                       (long)((int)puVar7[-6] % 0x3c) + (long)auVar27[0xc]);
  puVar7[-5] = auVar27._0_8_;
  puVar7[-4] = auVar27._8_8_ & 0xffffffffff;
  puStack_80 = &UNK_004c5b5d;
  auVar27 = _ZN4absl12lts_2026052613time_internal4cctz6detail4impl5n_secEllllll
                      (0x7b2,1,1,0,0xfdddddddddddddde,0xfffffffffffffff8);
  puVar20 = auVar27._0_8_;
  puVar18 = (ulong *)(long)auVar27[8];
  puStack_80 = &UNK_004c5bc4;
  auVar27 = _ZN4absl12lts_2026052613time_internal4cctz6detail4impl5n_secEllllll
                      (puVar20,puVar18,(long)auVar27[9],(long)auVar27[10],
                       (long)auVar27[0xb] + (long)((int)puVar7[-6] / 0x3c),
                       (long)((int)puVar7[-6] % 0x3c) + (long)auVar27[0xc]);
  puVar7[-3] = auVar27._0_8_;
  puVar7[-2] = auVar27._8_8_ & 0xffffffffff;
  puVar24 = *(ulong **)(lStack_58 + 8);
  puVar25 = (ulong *)(*(long *)(lStack_58 + 0x18) - (long)puVar24);
  puVar23 = (ulong *)((long)*(ulong **)(lStack_58 + 0x10) - (long)puVar24);
  if (puVar23 < puVar25) {
    if (*(ulong **)(lStack_58 + 0x10) == puVar24) {
      puVar7 = (ulong *)0x0;
code_r0x004c5c26:
      pbVar16 = (byte *)((long)puVar23 + (long)puVar7);
      puStack_80 = &UNK_004c5c38;
      puVar18 = puVar24;
      puVar20 = puVar7;
      func_0x0099bda0(puVar7,puVar24,puVar23);
      *(ulong **)(lStack_58 + 8) = puVar7;
      *(byte **)(lStack_58 + 0x10) = pbVar16;
      *(byte **)(lStack_58 + 0x18) = pbVar16;
      if (puVar24 != (ulong *)0x0) {
        puStack_80 = &UNK_004c5c58;
        puVar18 = puVar25;
        puVar20 = puVar24;
        _ZdaPvSt11align_val_t();
      }
      goto code_r0x004c5c58;
    }
    if ((ulong)(((long)puVar23 >> 4) * -0x5555555555555555) < 0x555555555555556) {
      puStack_80 = &UNK_004c5c1e;
      puVar7 = (ulong *)_Znwm(puVar23);
      goto code_r0x004c5c26;
    }
  }
  else {
code_r0x004c5c58:
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
      return 1;
    }
    puStack_80 = &UNK_004c5c7d;
    func_0x0099bd00();
  }
  puStack_80 = &UNK_004c5c82;
  func_0x0032fc40();
  ppuVar17 = &puStack_170;
  lStack_b0 = *(long *)(in_FS_OFFSET + 0x28);
  cStack_c0 = '\0';
  bStack_bf = 0;
  bStack_be = 0;
  bStack_bd = 0;
  uStack_bc = 0;
  uStack_d0 = 0;
  cStack_c8 = '\0';
  bStack_c7 = 0;
  bStack_c6 = 0;
  bStack_c5 = 0;
  cStack_c4 = '\0';
  bStack_c3 = 0;
  bStack_c2 = 0;
  bStack_c1 = 0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  puVar19 = &uStack_e0;
  puStack_178 = &UNK_004c5cd8;
  puVar21 = puVar18;
  pbStack_a8 = pbVar16;
  puStack_a0 = puVar23;
  puStack_98 = puVar7;
  puStack_90 = puVar25;
  puStack_88 = puVar24;
  puStack_80 = &stack0xfffffffffffffff8;
  lVar12 = (**(code **)(*puVar18 + 0x10))(puVar18,puVar19,0x2c);
  if (((lVar12 == 0x2c) && ((int)uStack_e0 == 0x66695a54)) && (-1 < (long)cStack_c0)) {
    uVar8 = (ulong)bStack_bd |
            (ulong)bStack_be << 8 | (ulong)bStack_bf << 0x10 | (long)cStack_c0 << 0x18;
    uStack_130 = uVar8;
    if ((long)(char)uStack_bc < 0) goto code_r0x004c5ce7;
    puVar24 = (ulong *)(uStack_bc >> 0x18 & 0xff |
                       (uStack_bc >> 0x10 & 0xff) << 8 |
                       (uStack_bc >> 8 & 0xff) << 0x10 | (long)(char)uStack_bc << 0x18);
    puStack_128 = puVar24;
    if ((long)uStack_bc._4_1_ < 0) goto code_r0x004c5ce7;
    puVar19 = (ulong *)((uStack_bc >> 0x30 & 0xff) << 8 |
                       (uStack_bc >> 0x28 & 0xff) << 0x10 | (long)uStack_bc._4_1_ << 0x18);
    uStack_120 = uStack_bc >> 0x38 | (ulong)puVar19;
    if ((long)cStack_c4 < 0) goto code_r0x004c5ce7;
    puVar21 = (ulong *)((ulong)bStack_c2 << 8 | (ulong)bStack_c3 << 0x10 | (long)cStack_c4 << 0x18);
    uStack_118 = (ulong)bStack_c1 | (ulong)puVar21;
    puVar19 = (ulong *)(long)cStack_c8;
    if ((long)puVar19 < 0) goto code_r0x004c5ce7;
    puVar19 = (ulong *)((ulong)bStack_c5 |
                       (ulong)bStack_c6 << 8 | (ulong)bStack_c7 << 0x10 | (long)puVar19 << 0x18);
    puVar21 = (ulong *)(long)uStack_d0._4_1_;
    puStack_110 = puVar19;
    if ((long)puVar21 < 0) goto code_r0x004c5ce7;
    puVar21 = (ulong *)(uStack_d0 >> 0x38 |
                       (uStack_d0 >> 0x30 & 0xff) << 8 |
                       (uStack_d0 >> 0x28 & 0xff) << 0x10 | (long)puVar21 << 0x18);
    puStack_108 = puVar21;
    if (uStack_e0._4_1_ != '\0') {
      puVar19 = (ulong *)((byte *)((long)puVar19 + (long)puVar21) +
                         uVar8 * 5 + (long)puVar24 * 6 + uStack_120 + uStack_118 * 8);
      puStack_178 = &UNK_004c5e75;
      puVar21 = puVar18;
      iVar3 = (**(code **)(*puVar18 + 0x18))();
      if (iVar3 == 0) {
        puVar19 = &uStack_e0;
        puStack_178 = &UNK_004c5e8f;
        lVar12 = (**(code **)(*puVar18 + 0x10))(puVar18,puVar19,0x2c);
        puVar21 = puVar18;
        if (lVar12 == 0x2c) {
          uVar9 = 0;
          if (((int)uStack_e0 == 0x66695a54) && (uStack_e0._4_1_ != '\0')) {
            puVar21 = &uStack_130;
            puVar19 = &uStack_e0;
            ppuVar17 = (ulong **)&puStack_178;
            goto code_r0x004c65c0;
          }
          goto code_r0x004c5ce9;
        }
      }
      goto code_r0x004c5ce7;
    }
    uVar9 = 0;
    if ((puVar24 != (ulong *)0x0) && (uVar9 = 0, uStack_118 == 0)) {
      if (((puVar19 != (ulong *)0x0) && (puVar19 != puVar24)) ||
         ((uStack_158 = uStack_158 & 0xffffffffffffff00, puVar21 != (ulong *)0x0 &&
          (puVar21 != puVar24)))) goto code_r0x004c5ce7;
      lStack_168 = 4;
      pbVar26 = (byte *)((long)puVar21 + uStack_120 + uVar8 * 5) +
                (long)((long)puVar19 + (long)puVar24 * 6);
      puStack_150 = (ulong *)0x0;
      puStack_148 = (ulong *)0x0;
      lStack_140 = 0;
      puStack_178 = &UNK_004c5f82;
      uStack_160 = uStack_120;
      func_0x004c9bd0(&puStack_150,pbVar26);
      puStack_178 = &UNK_004c5f95;
      puVar19 = puStack_150;
      pbVar16 = (byte *)(**(code **)(*puVar18 + 0x10))(puVar18,puStack_150,pbVar26);
      puVar7 = puStack_150;
      if (pbVar16 == pbVar26) {
        puStack_178 = &UNK_004c5fb5;
        func_0x004c9530(puVar20 + 1,uVar8 + 2);
        puStack_170 = puVar20 + 1;
        puStack_178 = &UNK_004c5fcc;
        func_0x004c9c30(puVar20 + 1,uVar8);
        if (uVar8 == 0) {
          bVar11 = 0;
        }
        else {
          bVar11 = (byte)*puVar7;
          if ((char)uStack_158 == '\0') {
            uVar14 = (ulong)((uint)*(byte *)((long)puVar7 + 2) << 8 |
                            (uint)*(byte *)((long)puVar7 + 1) << 0x10 | (uint)bVar11 << 0x18) |
                     (ulong)*(byte *)((long)puVar7 + 3);
            uVar13 = uVar14 | 0xffffffff00000000;
            if (-1 < (char)bVar11) {
              uVar13 = uVar14;
            }
          }
          else {
            uVar13 = (ulong)*(byte *)((long)puVar7 + 7) |
                     ((ulong)(ushort)(*(ushort *)((long)puVar7 + 5) << 8 |
                                     *(ushort *)((long)puVar7 + 5) >> 8) |
                     CONCAT44((uint)*(byte *)((long)puVar7 + 2) |
                              (uint)*(byte *)((long)puVar7 + 1) << 8 | (uint)bVar11 << 0x10,
                              (uint)*(byte *)((long)puVar7 + 4) << 0x10 |
                              (uint)*(byte *)((long)puVar7 + 3) << 0x18)) << 8;
          }
          puVar23 = puVar20 + 1;
          *(ulong *)*puVar23 = uVar13;
          puVar7 = (ulong *)((long)puVar7 + lStack_168);
          if (uVar8 != 1) {
            lVar12 = uVar8 - 1;
            lVar22 = 0x30;
            do {
              bVar11 = (byte)*puVar7;
              if ((char)uStack_158 == '\0') {
                uVar14 = (ulong)((uint)*(byte *)((long)puVar7 + 2) << 8 |
                                (uint)*(byte *)((long)puVar7 + 1) << 0x10 | (uint)bVar11 << 0x18) |
                         (ulong)*(byte *)((long)puVar7 + 3);
                uVar13 = uVar14 | 0xffffffff00000000;
                if (-1 < (char)bVar11) {
                  uVar13 = uVar14;
                }
              }
              else {
                uVar13 = (ulong)*(byte *)((long)puVar7 + 7) |
                         ((ulong)(ushort)(*(ushort *)((long)puVar7 + 5) << 8 |
                                         *(ushort *)((long)puVar7 + 5) >> 8) |
                         CONCAT44((uint)*(byte *)((long)puVar7 + 2) |
                                  (uint)*(byte *)((long)puVar7 + 1) << 8 | (uint)bVar11 << 0x10,
                                  (uint)*(byte *)((long)puVar7 + 4) << 0x10 |
                                  (uint)*(byte *)((long)puVar7 + 3) << 0x18)) << 8;
              }
              *(ulong *)(*puVar23 + lVar22) = uVar13;
              puVar19 = (ulong *)*puVar23;
              if (*(long *)((long)puVar19 + lVar22) <= *(long *)((long)puVar19 + lVar22 + -0x30))
              goto code_r0x004c6514;
              puVar7 = (ulong *)((long)puVar7 + lStack_168);
              lVar22 = lVar22 + 0x30;
              lVar12 = lVar12 + -1;
            } while (lVar12 != 0);
          }
          uVar13 = *puVar23;
          lVar12 = 8;
          bVar11 = 0;
          uVar14 = uVar8;
          do {
            *(byte *)(uVar13 + lVar12) = (byte)*puVar7;
            uVar13 = *puVar23;
            puVar19 = (ulong *)(ulong)*(byte *)(uVar13 + lVar12);
            if (puVar24 <= puVar19) goto code_r0x004c6514;
            puVar7 = (ulong *)((long)puVar7 + 1);
            bVar11 = bVar11 | *(byte *)(uVar13 + lVar12) == 0;
            lVar12 = lVar12 + 0x30;
            uVar14 = uVar14 - 1;
          } while (uVar14 != 0);
        }
        puStack_178 = &UNK_004c619e;
        uStack_158 = uVar8;
        func_0x004c9530(puVar20 + 4,(byte *)((long)puVar24 + 2));
        puStack_178 = &UNK_004c61aa;
        func_0x004c9760(puVar20 + 4,puVar24);
        uVar13 = uStack_160;
        puVar23 = puVar20 + 4;
        uVar8 = puVar20[4];
        lVar12 = 0;
        puVar19 = puVar24;
        do {
          uVar4 = *(uint *)((long)puVar7 + lVar12);
          *(uint *)(uVar8 + lVar12 * 8) =
               uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
          if (*(int *)(*puVar23 + lVar12 * 8) - 0x15180U < 0xfffd5d01) goto code_r0x004c6514;
          *(bool *)(*puVar23 + 0x28 + lVar12 * 8) = *(byte *)((long)puVar7 + lVar12 + 4) != 0;
          *(byte *)(*puVar23 + 0x29 + lVar12 * 8) = *(byte *)((long)puVar7 + lVar12 + 5);
          uVar8 = *puVar23;
          if (uStack_160 <= *(byte *)(uVar8 + 0x29 + lVar12 * 8)) goto code_r0x004c6514;
          lVar12 = lVar12 + 6;
          puVar19 = (ulong *)((long)puVar19 + -1);
        } while (puVar19 != (ulong *)0x0);
        *(byte *)(puVar20 + 7) = 0;
        if (!(bool)(~bVar11 & 1 | uStack_158 == 0)) {
          if ((*(char *)(uVar8 + 0x28) == '\x01') &&
             (bVar11 = *(byte *)(puVar20[1] + 8), bVar11 != 0)) {
            pcVar15 = (char *)((uint)bVar11 * 0x30 + uVar8 + 0x28);
            do {
              if (*pcVar15 != '\x01') goto code_r0x004c6267;
              bVar11 = bVar11 - 1;
              pcVar15 = pcVar15 + -0x30;
            } while (bVar11 != 0);
          }
          bVar11 = 0;
code_r0x004c6267:
          do {
            if (puVar24 == (ulong *)(ulong)bVar11) break;
            if (*(char *)(uVar8 + 0x28 + (long)(ulong)bVar11 * 0x30) != '\x01') {
              *(byte *)(puVar20 + 7) = bVar11;
              break;
            }
            bVar11 = bVar11 + 1;
          } while( true );
        }
        puStack_178 = &UNK_004c629d;
        _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm
                  (puVar20 + 8,uStack_160 + 10);
        puStack_178 = &UNK_004c62ab;
        func_0x0032ea90(puVar20 + 8,(byte *)((long)puVar7 + lVar12),uVar13);
        if ((puVar20[0xe] & 1) == 0) {
          *(undefined2 *)(puVar20 + 0xe) = 0;
        }
        else {
          *(undefined1 *)puVar20[0x10] = 0;
          puVar20[0xf] = 0;
        }
        if (uStack_e0._4_1_ != '\0') {
          uStack_100 = uStack_100 & 0xffffff00;
          puVar19 = (ulong *)&uStack_100;
          puStack_178 = &UNK_004c62eb;
          lVar12 = (**(code **)(*puVar18 + 0x10))(puVar18,puVar19,1);
          if (lVar12 == 1) {
            uVar9 = 0;
            if ((char)uStack_100 != '\n') goto code_r0x004c6516;
            uStack_100 = uStack_100 & 0xffffff00;
            puStack_178 = &UNK_004c6321;
            puVar19 = (ulong *)&uStack_100;
            lVar12 = (**(code **)(*puVar18 + 0x10))(puVar18,&uStack_100,1);
            uVar4 = 0xffffffff;
            if (lVar12 == 1) {
              uVar4 = uStack_100 & 0xff;
            }
            while (uVar4 != 0xffffffff) {
              if (uVar4 == 10) goto code_r0x004c6382;
              puStack_178 = &UNK_004c6359;
              _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                        (puVar20 + 0xe,(int)(char)uVar4);
              uStack_100 = uStack_100 & 0xffffff00;
              puStack_178 = &UNK_004c636e;
              puVar19 = (ulong *)&uStack_100;
              lVar12 = (**(code **)(*puVar18 + 0x10))(puVar18,&uStack_100,1);
              if (lVar12 != 1) break;
              uVar4 = uStack_100 & 0xff;
            }
          }
          goto code_r0x004c6514;
        }
code_r0x004c6382:
        if (((byte)puVar20[0xb] & 1) == 0) {
          uVar8 = (ulong)(byte)((byte)puVar20[0xb] >> 1);
        }
        else {
          uVar8 = puVar20[0xc];
        }
        if (uVar8 == 0) {
          puStack_178 = &UNK_004c63ab;
          (**(code **)(*puVar18 + 0x20))(&uStack_100,puVar18);
          puStack_178 = &UNK_004c63b6;
          func_0x00353730(puVar20 + 0xb,&uStack_100);
          if ((uStack_100 & 1) != 0) {
            puStack_178 = &UNK_004c63cd;
            _ZdaPvSt11align_val_t(uStack_f0,CONCAT44(uStack_fc,uStack_100) & 0xfffffffffffffffe);
          }
        }
        puVar19 = (ulong *)puVar20[1];
        if ((puVar19 == (ulong *)puVar20[2]) || (-1 < (long)*puVar19)) {
          puStack_178 = &UNK_004c63e6;
          puVar10 = (undefined8 *)
                    _ZNSt3__16vectorIN4absl12lts_2026052613time_internal4cctz10TransitionENS_9allocatorIS5_EEE7emplaceIJEEENS_11__wrap_iterIPS5_EENSA_IPKS5_EEDpOT_
                              (puVar20 + 1);
          *puVar10 = 0xf800000000000000;
          *(byte *)(puVar10 + 1) = (byte)puVar20[7];
        }
        puStack_178 = &UNK_004c6402;
        cVar2 = _ZN4absl12lts_2026052613time_internal4cctz12TimeZoneInfo17ExtendTransitionsEv
                          (puVar20);
        if (cVar2 == '\0') goto code_r0x004c6514;
        puVar19 = (ulong *)puVar20[2];
        if ((long)puVar19[-6] < 0) {
          uVar8 = puVar19[-5];
          puStack_178 = &UNK_004c6423;
          puVar10 = (undefined8 *)
                    _ZNSt3__16vectorIN4absl12lts_2026052613time_internal4cctz10TransitionENS_9allocatorIS5_EEE7emplaceIJEEENS_11__wrap_iterIPS5_EENSA_IPKS5_EEDpOT_
                              (puVar20 + 1);
          *puVar10 = 0x7fffffff;
          *(byte *)(puVar10 + 1) = (byte)uVar8;
          puVar19 = (ulong *)puVar20[2];
        }
        puVar24 = (ulong *)puVar20[1];
        if (puVar19 != puVar24) {
          lVar22 = (ulong)((uint)(byte)puVar20[7] * 0x30) + puVar20[4];
          lVar5 = 0;
          lVar12 = 0;
          do {
            puStack_178 = &UNK_004c649a;
            _ZNK4absl12lts_2026052613time_internal4cctz12TimeZoneInfo9LocalTimeElRKNS2_14TransitionTypeE
                      (&uStack_100,puVar20,*(undefined8 *)((long)puVar24 + lVar5),lVar22);
            puStack_178 = &UNK_004c64ac;
            auVar27 = _ZN4absl12lts_2026052613time_internal4cctz6detailmiENS3_10civil_timeINS3_10second_tagEEEl
                                (CONCAT44(uStack_fc,uStack_100),CONCAT44(uStack_f4,uStack_f8),1);
            *(long *)((long)puVar24 + lVar5 + 0x20) = auVar27._0_8_;
            *(long *)((long)puVar24 + lVar5 + 0x28) = auVar27._8_8_;
            lVar22 = (ulong)((uint)*(byte *)((long)puVar24 + lVar5 + 8) * 0x30) + puVar20[4];
            puStack_178 = &UNK_004c64db;
            puVar19 = puVar20;
            _ZNK4absl12lts_2026052613time_internal4cctz12TimeZoneInfo9LocalTimeElRKNS2_14TransitionTypeE
                      (&uStack_100,puVar20,*(undefined8 *)((long)puVar24 + lVar5),lVar22);
            puVar1 = (uint *)((long)puVar24 + lVar5 + 0x10);
            *puVar1 = uStack_100;
            puVar1[1] = uStack_fc;
            puVar1[2] = uStack_f8;
            puVar1[3] = uStack_f4;
            if (lVar12 != 0) {
              puVar19 = (ulong *)(puVar20[1] + lVar5 + -0x30);
              puStack_178 = &UNK_004c650c;
              cVar2 = _ZNK4absl12lts_2026052613time_internal4cctz10Transition11ByCivilTimeclERKS3_S6_
                                (&uStack_100,puVar19,(byte *)((long)puVar24 + lVar5));
              if (cVar2 == '\0') goto code_r0x004c6514;
            }
            lVar12 = lVar12 + 1;
            puVar24 = (ulong *)puVar20[1];
            lVar5 = lVar5 + 0x30;
          } while (lVar12 != ((long)(puVar20[2] - (long)puVar24) >> 4) * -0x5555555555555555);
        }
        uVar8 = puVar20[4];
        uVar13 = puVar20[5];
        if (uVar8 != uVar13) {
          do {
            puStack_178 = &UNK_004c657c;
            _ZNK4absl12lts_2026052613time_internal4cctz12TimeZoneInfo9LocalTimeElRKNS2_14TransitionTypeE
                      (&uStack_100,puVar20,0x7fffffffffffffff,uVar8);
            *(uint *)(uVar8 + 8) = uStack_100;
            *(uint *)(uVar8 + 0xc) = uStack_fc;
            *(uint *)(uVar8 + 0x10) = uStack_f8;
            *(uint *)(uVar8 + 0x14) = uStack_f4;
            puStack_178 = &UNK_004c6596;
            puVar19 = puVar20;
            _ZNK4absl12lts_2026052613time_internal4cctz12TimeZoneInfo9LocalTimeElRKNS2_14TransitionTypeE
                      (&uStack_100,puVar20,0x8000000000000000,uVar8);
            *(uint *)(uVar8 + 0x18) = uStack_100;
            *(uint *)(uVar8 + 0x1c) = uStack_fc;
            *(uint *)(uVar8 + 0x20) = uStack_f8;
            *(uint *)(uVar8 + 0x24) = uStack_f4;
            uVar8 = uVar8 + 0x30;
          } while (uVar8 != uVar13);
        }
        puStack_178 = &UNK_004c65b4;
        func_0x004c9b10(puStack_170);
        uVar9 = 1;
      }
      else {
code_r0x004c6514:
        uVar9 = 0;
      }
code_r0x004c6516:
      puVar21 = puStack_150;
      if (puStack_150 != (ulong *)0x0) {
        puStack_148 = puStack_150;
        puVar19 = (ulong *)(lStack_140 - (long)puStack_150);
        puStack_178 = &UNK_004c653e;
        _ZdaPvSt11align_val_t();
      }
    }
  }
  else {
code_r0x004c5ce7:
    uVar9 = 0;
  }
code_r0x004c5ce9:
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_b0) {
    return uVar9;
  }
  puStack_178 = &UNK_004c65c0;
  func_0x0099bd00();
code_r0x004c65c0:
  *(undefined ***)((long)ppuVar17 + -8) = &puStack_80;
  if (-1 < (long)(char)(byte)puVar19[4]) {
    *puVar21 = (ulong)*(byte *)((long)puVar19 + 0x23) |
               (ulong)*(byte *)((long)puVar19 + 0x22) << 8 |
               (ulong)*(byte *)((long)puVar19 + 0x21) << 0x10 | (long)(char)(byte)puVar19[4] << 0x18
    ;
    if (-1 < (long)(char)*(byte *)((long)puVar19 + 0x24)) {
      puVar21[1] = (ulong)*(byte *)((long)puVar19 + 0x27) |
                   (ulong)*(byte *)((long)puVar19 + 0x26) << 8 |
                   (ulong)*(byte *)((long)puVar19 + 0x25) << 0x10 |
                   (long)(char)*(byte *)((long)puVar19 + 0x24) << 0x18;
      if (-1 < (long)(char)(byte)puVar19[5]) {
        puVar21[2] = (ulong)*(byte *)((long)puVar19 + 0x2b) |
                     (ulong)*(byte *)((long)puVar19 + 0x2a) << 8 |
                     (ulong)*(byte *)((long)puVar19 + 0x29) << 0x10 |
                     (long)(char)(byte)puVar19[5] << 0x18;
        if (-1 < (long)(char)*(byte *)((long)puVar19 + 0x1c)) {
          puVar21[3] = (ulong)*(byte *)((long)puVar19 + 0x1f) |
                       (ulong)*(byte *)((long)puVar19 + 0x1e) << 8 |
                       (ulong)*(byte *)((long)puVar19 + 0x1d) << 0x10 |
                       (long)(char)*(byte *)((long)puVar19 + 0x1c) << 0x18;
          if (-1 < (long)(char)(byte)puVar19[3]) {
            puVar21[4] = (ulong)*(byte *)((long)puVar19 + 0x1b) |
                         (ulong)*(byte *)((long)puVar19 + 0x1a) << 8 |
                         (ulong)*(byte *)((long)puVar19 + 0x19) << 0x10 |
                         (long)(char)(byte)puVar19[3] << 0x18;
            if (-1 < (long)(char)*(byte *)((long)puVar19 + 0x14)) {
              puVar21[5] = (ulong)*(byte *)((long)puVar19 + 0x17) |
                           (ulong)*(byte *)((long)puVar19 + 0x16) << 8 |
                           (ulong)*(byte *)((long)puVar19 + 0x15) << 0x10 |
                           (long)(char)*(byte *)((long)puVar19 + 0x14) << 0x18;
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}


