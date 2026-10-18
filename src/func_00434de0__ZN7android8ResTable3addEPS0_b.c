// Function: _ZN7android8ResTable3addEPS0_b
// Address: 00434de0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Type propagation algorithm not settling */

ulong _ZN7android8ResTable3addEPS0_b
                (undefined1 *param_1,long param_2,undefined4 param_3,undefined8 param_4,
                undefined8 param_5)

{
  char *pcVar1;
  long lVar2;
  short sVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 **ppuVar9;
  sbyte sVar10;
  byte bVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  byte bVar15;
  undefined8 *extraout_RDX;
  undefined *puVar16;
  char cVar17;
  long lVar18;
  undefined1 *puVar19;
  uint uVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  undefined8 **ppuVar23;
  long *plVar24;
  uint uVar25;
  undefined1 *unaff_R12;
  ulong uVar26;
  undefined1 *puVar27;
  undefined1 uVar28;
  long unaff_R13;
  undefined1 *unaff_R14;
  long lVar29;
  undefined1 *puVar30;
  undefined1 *puVar31;
  undefined8 **ppuVar32;
  long in_FS_OFFSET;
  undefined8 **ppuStack_2e8;
  long lStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  long lStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 *puStack_2b0;
  long alStack_2a8 [7];
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined1 auStack_260 [8];
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_160;
  undefined1 *puStack_158;
  ulong uStack_150;
  undefined8 *puStack_148;
  undefined8 *puStack_140;
  undefined1 *puStack_138;
  undefined *puStack_130;
  undefined8 *puStack_120;
  long lStack_118;
  undefined1 *puStack_110;
  undefined1 *puStack_108;
  long lStack_100;
  undefined1 *puStack_f8;
  undefined1 *puStack_f0;
  undefined *puStack_e8;
  long lStack_e0;
  undefined1 *puStack_d8;
  undefined1 *puStack_d0;
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [8];
  undefined1 uStack_b8;
  long lStack_b0;
  undefined1 *puStack_a8;
  undefined1 *puStack_a0;
  long lStack_98;
  undefined1 *puStack_90;
  undefined1 *puStack_88;
  code *pcStack_80;
  ulong uStack_78;
  long lStack_70;
  undefined1 *puStack_68;
  undefined8 uStack_60;
  undefined4 uStack_54;
  undefined1 *puStack_50;
  undefined1 uStack_41;
  undefined8 *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  uStack_54 = param_3;
  puStack_50 = param_1;
  if (*(long *)(param_2 + 0xa8) != 0) {
    unaff_R12 = param_1 + 0x98;
    lVar18 = 0;
    unaff_R14 = (undefined1 *)0x0;
    do {
      pcStack_80 = (code *)&UNK_00434e42;
      _ZN7android10VectorImpl3addEPKv(unaff_R12,*(long *)(param_2 + 0xa0) + lVar18);
      unaff_R14 = unaff_R14 + 1;
      lVar18 = lVar18 + 8;
    } while (unaff_R14 < *(undefined1 **)(param_2 + 0xa8));
  }
  if (*(long *)(param_2 + 0xd0) != 0) {
    puStack_68 = puStack_50 + 0xc0;
    uVar26 = 0;
    uStack_60 = 0x99fa00;
    lStack_70 = param_2;
    do {
      lVar18 = *(long *)(*(long *)(lStack_70 + 200) + uVar26 * 8);
      pcStack_80 = (code *)&UNK_00434f02;
      uStack_78 = uVar26;
      puVar5 = (undefined8 *)_Znwm(0x2a0);
      uVar28 = 1;
      if ((char)uStack_54 == '\0') {
        uVar28 = *(undefined1 *)(lVar18 + 0x298);
      }
      uVar25 = *(uint *)(lVar18 + 0x10);
      uStack_41 = *(undefined1 *)(lVar18 + 0x299);
      *puVar5 = puStack_50;
      pcStack_80 = (code *)&UNK_00434f3b;
      _ZN7android8String16C2ERKS0_(puVar5 + 1,lVar18 + 8);
      *(uint *)(puVar5 + 2) = uVar25;
      pcStack_80 = (code *)&UNK_00434f54;
      _ZN7android10VectorImplC2Emj(puVar5 + 3,8,7);
      puVar5[3] = uStack_60;
      puVar5[0x19] = 0;
      puVar5[0x1a] = 0;
      puVar5[0x1b] = 0;
      puVar5[0x1c] = 0;
      puVar5[0x1d] = 0;
      puVar5[0x1e] = 0;
      puVar5[0x1f] = 0;
      puVar5[0x20] = 0;
      puVar5[0x21] = 0;
      puVar5[0x22] = 0;
      puVar5[0x23] = 0;
      puVar5[0x24] = 0;
      puVar5[0x25] = 0;
      puVar5[0x26] = 0;
      puVar5[0x27] = 0;
      puVar5[0x28] = 0;
      puVar5[8] = 0;
      puVar5[9] = 0;
      puVar5[10] = 0;
      puVar5[0xb] = 0;
      puVar5[0xc] = 0;
      puVar5[0xd] = 0;
      puVar5[0xe] = 0;
      puVar5[0xf] = 0;
      puVar5[0x10] = 0;
      puVar5[0x11] = 0;
      puVar5[0x12] = 0;
      puVar5[0x13] = 0;
      puVar5[0x14] = 0;
      puVar5[0x15] = 0;
      puVar5[0x16] = 0;
      puVar5[0x17] = 0;
      *(undefined1 *)(puVar5 + 0x18) = 0;
      pcStack_80 = (code *)&UNK_00435002;
      _ZN7android15DynamicRefTableC2Ehb(puVar5 + 0x29,uVar25 & 0xff,0);
      *(undefined1 *)(puVar5 + 0x53) = uVar28;
      *(undefined1 *)((long)puVar5 + 0x299) = uStack_41;
      puStack_40 = puVar5;
      if (*(long *)(lVar18 + 0x28) != 0) {
        lVar29 = 0;
        uVar26 = 0;
        do {
          pcStack_80 = (code *)&UNK_00435044;
          _ZN7android10VectorImpl3addEPKv(puStack_40 + 3,*(long *)(lVar18 + 0x20) + lVar29);
          uVar26 = uVar26 + 1;
          lVar29 = lVar29 + 8;
        } while (uVar26 < *(ulong *)(lVar18 + 0x28));
      }
      uVar26 = 0;
      do {
        unaff_R14 = (undefined1 *)(uVar26 >> 4);
        lVar29 = *(long *)(lVar18 + 0x40 + (long)unaff_R14 * 8);
        uVar13 = (ulong)((uint)uVar26 & 0xf);
        unaff_R13 = uVar13 * 5;
        lVar2 = _ZN7android15ByteBucketArrayINS_6VectorIPNS_8ResTable4TypeEEEE8default_E._16_8_;
        if (lVar29 != 0) {
          lVar2 = *(long *)(lVar29 + uVar13 * 0x28 + 0x10);
        }
        if (lVar2 != 0) {
          pcStack_80 = (code *)&UNK_004350cb;
          uVar7 = _ZN7android15ByteBucketArrayINS_6VectorIPNS_8ResTable4TypeEEEE10editItemAtEm
                            (puStack_40 + 8,uVar26);
          lVar29 = *(long *)(lVar18 + 0x40 + (long)unaff_R14 * 8);
          if (lVar29 == 0) {
            puVar21 = _ZN7android15ByteBucketArrayINS_6VectorIPNS_8ResTable4TypeEEEE8default_E;
          }
          else {
            puVar21 = (undefined1 *)(lVar29 + uVar13 * 0x28);
          }
          pcStack_80 = (code *)&UNK_0043506b;
          _ZN7android10VectorImpl12appendVectorERKS0_(uVar7,puVar21);
        }
        uVar26 = uVar26 + 1;
      } while (uVar26 != 0x100);
      pcStack_80 = (code *)&UNK_00434ea8;
      _ZN7android15DynamicRefTable11addMappingsERKS0_(puStack_40 + 0x29,lVar18 + 0x148);
      bVar15 = (byte)*(undefined4 *)(lVar18 + 0xc0);
      if (bVar15 < (byte)*(undefined4 *)(puStack_40 + 0x18)) {
        bVar15 = (byte)*(undefined4 *)(puStack_40 + 0x18);
      }
      *(byte *)(puStack_40 + 0x18) = bVar15;
      pcStack_80 = (code *)&UNK_00434ed1;
      _ZN7android10VectorImpl3addEPKv(puStack_68,&puStack_40);
      uVar26 = uStack_78 + 1;
      unaff_R12 = (undefined1 *)0x100;
      param_2 = lStack_70;
    } while (uVar26 < *(ulong *)(lStack_70 + 0xd0));
  }
  puVar19 = puStack_50;
  puVar21 = puStack_50 + 0xe8;
  puVar31 = (undefined1 *)(param_2 + 0xe8);
  pcStack_80 = (code *)&UNK_004350fa;
  puVar22 = puVar31;
  func_0x0099bda0(puVar21,puVar31,0x100);
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return (ulong)*(uint *)(puVar19 + 0x50);
  }
  pcStack_80 = _ZN7android15DynamicRefTable11addMappingsERKS0_;
  func_0x0099bd00();
  uVar25 = (uint)param_5;
  puStack_a8 = puVar19;
  lStack_b0 = *(long *)(in_FS_OFFSET + 0x28);
  uVar26 = 0x80000000;
  puVar27 = unaff_R12;
  puVar30 = unaff_R14;
  puStack_a0 = unaff_R12;
  lStack_98 = unaff_R13;
  puStack_90 = unaff_R14;
  puStack_88 = puVar31;
  pcStack_80 = (code *)&stack0xfffffffffffffff8;
  if (puVar21[0x108] == puVar22[0x108]) {
    puVar27 = *(undefined1 **)(puVar22 + 0x120);
    puStack_d0 = puVar21;
    pcStack_80 = (code *)&stack0xfffffffffffffff8;
    if (puVar27 != (undefined1 *)0x0) {
      puVar31 = puVar21 + 0x110;
      puVar30 = auStack_c0;
      lVar18 = 0;
      puStack_d8 = puVar22;
      pcStack_80 = (code *)&stack0xfffffffffffffff8;
      do {
        puStack_e8 = &UNK_00435205;
        _ZN7android8String16C2ERKS0_(puVar30,*(long *)(puVar22 + 0x118) + lVar18);
        puStack_e8 = &UNK_00435210;
        lVar29 = _ZNK7android16SortedVectorImpl7indexOfEPKv(puVar31,puVar30);
        puStack_e8 = &UNK_0043521b;
        puVar21 = puVar30;
        _ZN7android8String16D2Ev();
        puVar22 = puStack_d8;
        uVar25 = (uint)param_5;
        if (lVar29 < 0) {
          puStack_e8 = &UNK_004351a7;
          _ZN7android8String16C2ERKS0_(auStack_c8,*(long *)(puStack_d8 + 0x118) + lVar18);
          lStack_e0 = *(long *)(puVar22 + 0x118);
          puStack_e8 = &UNK_004351be;
          _ZN7android8String16C2ERKS0_(puVar30,auStack_c8);
          uStack_b8 = *(undefined1 *)(lStack_e0 + 8 + lVar18);
          puStack_e8 = &UNK_004351d6;
          _ZN7android16SortedVectorImpl3addEPKv(puVar31,puVar30);
          puStack_e8 = &UNK_004351de;
          _ZN7android8String16D2Ev(puVar30);
          puStack_e8 = &UNK_004351e7;
          _ZN7android8String16D2Ev(auStack_c8);
          puVar19 = puVar22;
        }
        else {
          puVar19 = (undefined1 *)(lVar29 * 0x10);
          unaff_R13 = lVar18;
          if (*(char *)(*(long *)(puStack_d8 + 0x118) + 8 + lVar18) !=
              puVar19[*(long *)(puStack_d0 + 0x118) + 8]) goto code_r0x004352a6;
        }
        uVar25 = (uint)param_5;
        unaff_R13 = lVar18 + 0x10;
        puVar27 = puVar27 + -1;
        lVar18 = unaff_R13;
      } while (puVar27 != (undefined1 *)0x0);
    }
    lVar18 = 0;
    do {
      cVar17 = puVar22[lVar18 + 8];
      puVar21 = puStack_d0;
      if (puStack_d0[lVar18 + 8] != cVar17) {
        if (puStack_d0[lVar18 + 8] == '\0') {
          puStack_d0[lVar18 + 8] = cVar17;
        }
        else if (cVar17 != '\0') goto code_r0x004352a6;
      }
      cVar17 = puVar22[lVar18 + 9];
      if (puStack_d0[lVar18 + 9] != cVar17) {
        if (puStack_d0[lVar18 + 9] == '\0') {
          puStack_d0[lVar18 + 9] = cVar17;
        }
        else if (cVar17 != '\0') goto code_r0x004352a6;
      }
      lVar18 = lVar18 + 2;
    } while (lVar18 != 0x100);
    uVar26 = 0;
  }
code_r0x004352af:
  uVar20 = (uint)puVar22;
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_b0) {
    return uVar26;
  }
  puStack_e8 = &UNK_004352d2;
  func_0x0099bd00();
  lStack_118 = *(long *)(in_FS_OFFSET + 0x28);
  puStack_130 = &UNK_0043530e;
  puStack_110 = puVar19;
  puStack_108 = puVar27;
  lStack_100 = unaff_R13;
  puStack_f8 = puVar30;
  puStack_f0 = puVar31;
  puStack_e8 = (undefined *)&pcStack_80;
  puVar6 = (undefined8 *)_Znwm(0x178);
  *puVar6 = puVar21;
  puVar5 = puVar6 + 7;
  puVar6[1] = 0;
  puVar6[2] = 0;
  puStack_130 = &UNK_00435327;
  _ZN7android13ResStringPoolC1Ev(puVar5);
  puVar6[0x2d] = 0;
  puVar6[0x2e] = 0;
  puStack_120 = puVar6;
  puVar6[5] = *(undefined8 *)(puVar21 + 0xa8);
  *(uint *)(puVar6 + 6) = uVar20;
  puStack_130 = &UNK_00435354;
  _ZN7android13ResStringPool6uninitEv(puVar5);
  puStack_130 = &UNK_00435363;
  uVar7 = func_0x0099c4d0(1,0x1c);
  puVar6[9] = uVar7;
  puVar6[0xd] = 0;
  *(undefined4 *)(puVar6 + 0x1d) = 0;
  puVar6[0x13] = 0;
  puVar6[0x14] = 0;
  puVar6[0x15] = 0;
  puVar6[0x16] = 0;
  puVar6[0x17] = 0;
  puVar6[0x18] = 0;
  puVar6[0x19] = 0;
  puVar6[0x1a] = 0;
  puVar6[0x1b] = 0;
  puVar6[0x1e] = 0;
  puVar6[0x1f] = 0;
  *(undefined8 *)((long)puVar6 + 0xfc) = 0;
  *(undefined8 *)((long)puVar6 + 0x104) = 0;
  puVar6[10] = uVar7;
  puVar6[0xb] = 0;
  puVar6[0xc] = 0;
  puStack_130 = &UNK_004353d0;
  puVar8 = (undefined8 *)func_0x0099c4d0(1,0xc);
  puVar6[1] = puVar8;
  uVar12 = 0xc0002;
  *puVar8 = 0xc000c0002;
  puVar6[2] = puVar8;
  ppuVar23 = &puStack_120;
  puStack_130 = &UNK_004353f1;
  puVar31 = puVar21 + 0x98;
  _ZN7android10VectorImpl3addEPKv();
  *(undefined4 *)(puVar21 + 0x50) = 0;
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_118) {
    return 0;
  }
  puStack_130 = &UNK_0043541d;
  func_0x0099bd00();
  lStack_160 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_258 = 0;
  uStack_250 = 0;
  alStack_2a8[6] = extraout_RDX[4];
  uStack_270 = 0;
  uStack_268 = 0;
  plVar24 = (long *)auStack_260;
  auStack_260 = (undefined1  [8])ppuVar23;
  puStack_158 = puVar21;
  uStack_150 = (ulong)uVar20;
  puStack_148 = puVar5;
  puStack_140 = puVar6;
  puStack_138 = puVar21 + 0x98;
  puStack_130 = (undefined *)&puStack_e8;
  uVar26 = func_0x0042d730(plVar24,0x11c,&UNK_0017bd8b);
  if ((int)uVar26 != 0) {
    *(int *)(puVar31 + 0x50) = (int)uVar26;
    goto code_r0x0043550a;
  }
  if (*(uint *)((long)ppuVar23 + 0x10c) < *(uint *)((long)ppuVar23 + 4)) {
    if ((*(uint *)((long)ppuVar23 + 0x10c) & 3) == 0) {
      if (*(uint *)((long)ppuVar23 + 4) <= *(uint *)((long)ppuVar23 + 0x114)) {
        puVar16 = &UNK_0018b15e;
        goto code_r0x004354f1;
      }
      if ((*(uint *)((long)ppuVar23 + 0x114) & 3) != 0) {
        puVar16 = &UNK_00161722;
        goto code_r0x004354d5;
      }
      uVar20 = *(uint *)(ppuVar23 + 1);
      uVar13 = (ulong)uVar20;
      alStack_2a8[3] = 0;
      alStack_2a8[4] = 0;
      alStack_2a8[1] = 0;
      alStack_2a8[2] = 0;
      alStack_2a8[5] = 0;
      _ZN7android16SortedVectorImplC2Emj(alStack_2a8 + 1,0x10,0);
      alStack_2a8[1] = 0x99fa50;
      if (extraout_RDX[0x2d] == 0) {
        if (0xff < uVar20) {
          __android_log_assert(0,&UNK_0015b3df,&UNK_001726dc);
          goto code_r0x0043562c;
        }
code_r0x00435634:
        if ((((int)uVar13 == 0) || ((char)uVar25 != '\0')) ||
           (((int)uVar13 == 0x7f & (byte)uVar12) != 0)) {
          uVar13 = (ulong)(byte)puVar31[0x1e8];
          puVar31[0x1e8] = puVar31[0x1e8] + 1;
          uVar4 = 1;
        }
        else {
          uVar4 = 0;
        }
        alStack_2a8[0] = 0;
        puVar5 = (undefined8 *)_Znwm(0x288);
        *puVar5 = puVar31;
        puVar5[1] = extraout_RDX;
        puVar5[2] = ppuVar23;
        _ZN7android13ResStringPoolC1Ev();
        _ZN7android13ResStringPoolC1Ev(puVar5 + 0x29);
        puVar5[0x4f] = 0;
        *(undefined1 *)(puVar5 + 0x50) = 0;
        if (*(short *)(puVar5[2] + 2) == 0x120) {
          puVar5[0x4f] = (ulong)*(uint *)(puVar5[2] + 0x11c);
        }
        lStack_2c8 = (ulong)*(uint *)((long)ppuVar23 + 0x10c) + (long)ppuVar23;
        uStack_2c0 = 0;
        uStack_2b8 = 0;
        puStack_2b0 = puVar5;
        uVar26 = _ZN7android13ResStringPool5setToENS_5incfs7map_ptrIvLb0EEEmb
                           (puVar5 + 3,extraout_RDX[4] - lStack_2c8,0);
        if ((int)uVar26 == 0) {
          lStack_2e0 = (ulong)*(uint *)((long)ppuVar23 + 0x114) + (long)ppuVar23;
          uStack_2d8 = 0;
          uStack_2d0 = 0;
          uVar26 = _ZN7android13ResStringPool5setToENS_5incfs7map_ptrIvLb0EEEmb
                             (puStack_2b0 + 0x29,extraout_RDX[4] - lStack_2e0,0);
          if ((int)uVar26 == 0) {
            if ((ulong)(byte)puVar31[uVar13 + 0xe8] == 0) {
              uVar7 = *(undefined8 *)(puVar31 + 0xd0);
              uStack_170 = 0;
              uStack_168 = 0;
              uStack_180 = 0;
              uStack_178 = 0;
              uStack_190 = 0;
              uStack_188 = 0;
              uStack_1a0 = 0;
              uStack_198 = 0;
              uStack_1b0 = 0;
              uStack_1a8 = 0;
              uStack_1c0 = 0;
              uStack_1b8 = 0;
              uStack_1d0 = 0;
              uStack_1c8 = 0;
              uStack_1e0 = 0;
              uStack_1d8 = 0;
              uStack_1f0 = 0;
              uStack_1e8 = 0;
              uStack_200 = 0;
              uStack_1f8 = 0;
              uStack_210 = 0;
              uStack_208 = 0;
              uStack_220 = 0;
              uStack_218 = 0;
              uStack_230 = 0;
              uStack_228 = 0;
              uStack_240 = 0;
              uStack_238 = 0;
              uStack_250 = 0;
              uStack_248 = 0;
              auStack_260 = (undefined1  [8])0x0;
              uStack_258 = 0;
              sVar3 = *(short *)((long)ppuVar23 + 0xc);
              puVar5 = (undefined8 *)auStack_260;
              if (sVar3 != 0) {
                uVar26 = 0;
                do {
                  uVar14 = uVar26;
                  *(short *)((long)auStack_260 + uVar14) = sVar3;
                  sVar3 = *(short *)((long)ppuVar23 + uVar14 + 0xe);
                  if (sVar3 == 0) break;
                  uVar26 = uVar14 + 2;
                } while (uVar14 < 0xfc);
                puVar5 = (undefined8 *)((long)auStack_260 + uVar14 + 2);
              }
              *(undefined2 *)puVar5 = 0;
              lVar18 = _Znwm(0x2a0);
              _ZN7android8String16C2EPKDs(&ppuStack_2e8,auStack_260);
              _ZN7android8ResTable12PackageGroupC2EPS0_RKNS_8String16Ejbbb
                        (lVar18,puVar31,&ppuStack_2e8,uVar13,uVar12 & 0xff,uVar25 & 0xff,uVar4);
              alStack_2a8[0] = lVar18;
              _ZN7android8String16D2Ev(&ppuStack_2e8);
              puVar5 = puStack_2b0;
              if (alStack_2a8[0] == 0) {
                if (puStack_2b0 != (undefined8 *)0x0) {
                  _ZN7android13ResStringPoolD1Ev(puStack_2b0 + 0x29);
                  _ZN7android13ResStringPoolD1Ev(puVar5 + 3);
                  _ZdaPvSt11align_val_t(puVar5,0x288);
                }
                uVar26 = 0xfffffff4;
              }
              else {
                uVar26 = _ZN7android10VectorImpl3addEPKv(puVar31 + 0xc0,alStack_2a8);
                if (-1 < (int)uVar26) {
                  puVar31[uVar13 + 0xe8] = (char)uVar7 + '\x01';
                  lVar18 = *(long *)(puVar31 + 0xd0);
                  if (lVar18 != 0) {
                    lVar29 = 0;
                    do {
                      _ZN7android15DynamicRefTable10addMappingERKNS_8String16Eh
                                (*(long *)(*(long *)(puVar31 + 200) + lVar29 * 8) + 0x148,
                                 alStack_2a8[0] + 8,*(undefined1 *)(alStack_2a8[0] + 0x10));
                      lVar29 = lVar29 + 1;
                    } while (lVar18 != lVar29);
                  }
                  goto code_r0x00435a41;
                }
              }
            }
            else {
              alStack_2a8[0] =
                   *(long *)(*(long *)(puVar31 + 200) + -8 + (ulong)(byte)puVar31[uVar13 + 0xe8] * 8
                            );
              if (alStack_2a8[0] == 0) {
                *(undefined4 *)(puVar31 + 0x50) = 0x80000000;
                uVar26 = 0x80000000;
                goto code_r0x0043580c;
              }
code_r0x00435a41:
              uVar26 = _ZN7android10VectorImpl3addEPKv(alStack_2a8[0] + 0x18,&puStack_2b0);
              if (-1 < (int)uVar26) {
                uVar13 = (ulong)*(uint *)((long)ppuVar23 + 4);
                uVar26 = 0;
                if ((long)(ulong)*(ushort *)((long)ppuVar23 + 2) <= (long)(uVar13 - 8)) {
                  ppuVar32 = (undefined8 **)
                             ((ulong)*(ushort *)((long)ppuVar23 + 2) + (long)ppuVar23);
                  while( true ) {
                    uVar26 = 0;
                    uVar25 = *(uint *)((long)ppuVar32 + 4);
                    if ((undefined8 **)((long)ppuVar23 + (uVar13 - uVar25)) < ppuVar32) break;
                    switch(*(undefined2 *)ppuVar32) {
                    case 0x201:
                      uStack_258 = 0;
                      uStack_250 = 0;
                      ppuStack_2e8 = ppuVar32;
                      auStack_260 = (undefined1  [8])ppuVar32;
                      uVar26 = func_0x0042d730(auStack_260,0x18,&UNK_00169917);
                      if ((int)uVar26 == 0) {
                        sVar10 = ((*(byte *)((long)ppuStack_2e8 + 9) & 2) == 0) + 1;
                        if ((*(byte *)((long)ppuStack_2e8 + 9) & 1) != 0) {
                          sVar10 = 2;
                        }
                        uVar26 = ((ulong)*(uint *)((long)ppuStack_2e8 + 0xc) << sVar10) +
                                 (ulong)*(ushort *)((long)ppuStack_2e8 + 2);
                        if (*(uint *)((long)ppuStack_2e8 + 4) < uVar26) {
                          __android_log_print(5,&UNK_0015b3df,&UNK_00169925,uVar26);
                        }
                        else if (*(uint *)((long)ppuStack_2e8 + 0xc) == 0) {
                          if (*(char *)(ppuStack_2e8 + 1) != '\0') goto code_r0x00435b10;
code_r0x004360d6:
                          __android_log_print(5,&UNK_0015b3df,&UNK_001869d4);
                        }
                        else if ((ulong)*(uint *)((long)ppuStack_2e8 + 4) - 8 <
                                 (ulong)*(uint *)(ppuStack_2e8 + 2)) {
                          __android_log_print(5,&UNK_0015b3df,&UNK_00183867);
                        }
                        else {
                          cVar17 = *(char *)(ppuStack_2e8 + 1);
                          if (cVar17 == '\0') goto code_r0x004360d6;
                          auStack_260[0] = cVar17;
                          uStack_258 = 0;
                          lVar18 = _ZNK7android16SortedVectorImpl7indexOfEPKv
                                             (alStack_2a8 + 1,auStack_260);
                          if (lVar18 < 0) {
                            if (extraout_RDX[0x2d] != 0) goto code_r0x00435b10;
                          }
                          else {
                            pcVar1 = *(char **)(alStack_2a8[2] + 8 + lVar18 * 0x10);
                            if (pcVar1 == (char *)0x0) {
                              cVar17 = '\0';
                            }
                            else {
                              cVar17 = *pcVar1;
                            }
                          }
                          lVar18 = _ZN7android15ByteBucketArrayINS_6VectorIPNS_8ResTable4TypeEEEE10editItemAtEm
                                             (alStack_2a8[0] + 0x40,cVar17 + -1);
                          if (*(long *)(lVar18 + 0x10) != 0) {
                            plVar24 = (long *)_ZN7android10VectorImpl16editItemLocationEm
                                                        (lVar18,*(long *)(lVar18 + 0x10) + -1);
                            if (*(undefined8 **)(*plVar24 + 8) == puStack_2b0) {
                              _ZN7android10VectorImpl3addEPKv(*plVar24 + 0x30,&ppuStack_2e8);
                              goto code_r0x00435b10;
                            }
                          }
                          __android_log_print(6,&UNK_0015b3df,&UNK_00157bb0,
                                              *(undefined1 *)(ppuStack_2e8 + 1));
                        }
                        uVar26 = 0x80000001;
                        *(undefined4 *)(puVar31 + 0x50) = 0x80000001;
                      }
                      else {
                        *(int *)(puVar31 + 0x50) = (int)uVar26;
                      }
                      goto code_r0x0043580c;
                    case 0x202:
                      uStack_258 = 0;
                      uStack_250 = 0;
                      auStack_260 = (undefined1  [8])ppuVar32;
                      uVar26 = func_0x0042d730(auStack_260,0x10,&UNK_001726f4);
                      if ((int)uVar26 != 0) goto code_r0x0043605a;
                      puVar5 = (undefined8 *)(ulong)*(uint *)((long)ppuVar32 + 0xc);
                      if ((puVar5 < (undefined8 *)0x20000000) &&
                         ((ulong)*(ushort *)((long)ppuVar32 + 2) + (long)puVar5 * 4 <=
                          (ulong)*(uint *)((long)ppuVar32 + 4))) {
                        cVar17 = *(char *)(ppuVar32 + 1);
                        if (cVar17 == '\0') {
                          __android_log_print(5,&UNK_0015b3df,&UNK_001869d4);
                          goto code_r0x004360c4;
                        }
                        if (puVar5 != (undefined8 *)0x0) {
                          auStack_260[0] = cVar17;
                          uStack_258 = 0;
                          lVar18 = _ZNK7android16SortedVectorImpl7indexOfEPKv
                                             (alStack_2a8 + 1,auStack_260);
                          if (lVar18 < 0) {
                            if (extraout_RDX[0x2d] != 0) goto code_r0x00435b10;
                          }
                          else {
                            pcVar1 = *(char **)(alStack_2a8[2] + 8 + lVar18 * 0x10);
                            if (pcVar1 == (char *)0x0) {
                              cVar17 = '\0';
                            }
                            else {
                              cVar17 = *pcVar1;
                            }
                          }
                          lVar29 = _ZN7android15ByteBucketArrayINS_6VectorIPNS_8ResTable4TypeEEEE10editItemAtEm
                                             (alStack_2a8[0] + 0x40,cVar17 + -1);
                          if (((*(long *)(lVar29 + 0x10) != 0) && (lVar18 < 0)) &&
                             (*(undefined8 **)(**(long **)(lVar29 + 8) + 0x10) != puVar5)) {
                            __android_log_print(5,&UNK_0015b3df,&UNK_0015cb67,puVar5);
                          }
                          ppuVar9 = (undefined8 **)_Znwm(0x58);
                          *ppuVar9 = extraout_RDX;
                          ppuVar9[1] = puStack_2b0;
                          ppuVar9[2] = puVar5;
                          ppuVar9[3] = (undefined8 *)0x0;
                          ppuVar9[4] = (undefined8 *)0x0;
                          ppuVar9[5] = (undefined8 *)0x0;
                          _ZN7android10VectorImplC2Emj(ppuVar9 + 6,8,7);
                          ppuVar9[6] = (undefined8 *)0x99fa00;
                          ppuVar9[3] = ppuVar32;
                          ppuVar9[4] = (undefined8 *)
                                       ((ulong)*(ushort *)((long)ppuVar32 + 2) + (long)ppuVar32);
                          if (-1 < lVar18) {
                            ppuVar9[5] = *(undefined8 **)(alStack_2a8[2] + 8 + lVar18 * 0x10);
                          }
                          auStack_260 = (undefined1  [8])ppuVar9;
                          _ZN7android10VectorImpl3addEPKv(lVar29,auStack_260);
                          bVar11 = (byte)*(undefined4 *)(alStack_2a8[0] + 0xc0);
                          bVar15 = (byte)*(undefined4 *)(ppuVar32 + 1);
                          if ((byte)*(undefined4 *)(ppuVar32 + 1) < bVar11) {
                            bVar15 = bVar11;
                          }
                          *(byte *)(alStack_2a8[0] + 0xc0) = bVar15;
                        }
                        goto code_r0x00435b10;
                      }
                      __android_log_print(5,&UNK_0015b3df,&UNK_00188215);
code_r0x004360c4:
                      *(undefined4 *)(puVar31 + 0x50) = 0x80000001;
                      uVar26 = 0x80000001;
                      goto code_r0x0043580c;
                    case 0x203:
                      if (*(long *)(alStack_2a8[0] + 0x268) == 0) {
                        uStack_258 = 0;
                        uStack_250 = 0;
                        auStack_260 = (undefined1  [8])ppuVar32;
                        uVar26 = func_0x0042d730(auStack_260,0xc,&UNK_00188256);
                        if (((int)uVar26 != 0) ||
                           (uVar26 = _ZN7android15DynamicRefTable4loadEPKNS_19ResTable_lib_headerE
                                               (alStack_2a8[0] + 0x148,ppuVar32), (int)uVar26 != 0))
                        goto code_r0x0043605a;
                        lVar18 = *(long *)(puVar31 + 0xd0);
                        if (lVar18 != 0) {
                          lVar29 = 0;
                          do {
                            lVar2 = *(long *)(*(long *)(puVar31 + 200) + lVar29 * 8);
                            _ZN7android15DynamicRefTable10addMappingERKNS_8String16Eh
                                      (alStack_2a8[0] + 0x148,lVar2 + 8,
                                       *(undefined1 *)(lVar2 + 0x10));
                            lVar29 = lVar29 + 1;
                          } while (lVar18 != lVar29);
                        }
                      }
                      else {
                        __android_log_print(5,&UNK_0015b3df,&UNK_00177478);
                      }
                      goto code_r0x00435b10;
                    case 0x204:
                      *(undefined1 *)(puStack_2b0 + 0x50) = 1;
                    }
                    uStack_258 = 0;
                    uStack_250 = 0;
                    auStack_260 = (undefined1  [8])ppuVar32;
                    uVar26 = func_0x0042d730(auStack_260,8,&UNK_0015feb3);
                    if ((int)uVar26 != 0) {
code_r0x0043605a:
                      *(int *)(puVar31 + 0x50) = (int)uVar26;
                      break;
                    }
code_r0x00435b10:
                    ppuVar32 = (undefined8 **)((long)ppuVar32 + (ulong)uVar25);
                    uVar26 = 0;
                    if ((undefined8 **)((long)ppuVar23 + (uVar13 - 8)) < ppuVar32) break;
                  }
                }
                goto code_r0x0043580c;
              }
            }
            *(int *)(puVar31 + 0x50) = (int)uVar26;
            goto code_r0x0043580c;
          }
        }
        lVar18 = alStack_2a8[0];
        if (alStack_2a8[0] != 0) {
          _ZN7android8ResTable12PackageGroupD2Ev(alStack_2a8[0]);
          _ZdaPvSt11align_val_t(lVar18,0x2a0);
        }
        puVar5 = puStack_2b0;
        if (puStack_2b0 != (undefined8 *)0x0) {
          _ZN7android13ResStringPoolD1Ev(puStack_2b0 + 0x29);
          _ZN7android13ResStringPoolD1Ev(puVar5 + 3);
          _ZdaPvSt11align_val_t(puVar5,0x288);
        }
        *(int *)(puVar31 + 0x50) = (int)uVar26;
      }
      else {
        auStack_260 = (undefined1  [8])((ulong)auStack_260 & 0xffffffffffffff00);
        uVar26 = _ZN7android10parseIdmapEPKvmPhPNS_11KeyedVectorIhNS_12IdmapEntriesEEE
                           (extraout_RDX[0x2d],extraout_RDX[0x2e],auStack_260,alStack_2a8 + 1);
        if ((int)uVar26 == 0) {
code_r0x0043562c:
          uVar13 = (ulong)auStack_260 & 0xff;
          goto code_r0x00435634;
        }
        __android_log_print(5,&UNK_0015b3df,&UNK_0017bd9c);
        *(int *)(puVar31 + 0x50) = (int)uVar26;
      }
code_r0x0043580c:
      alStack_2a8[1] = 0x99fa50;
      plVar24 = alStack_2a8 + 1;
      _ZN7android10VectorImpl13finish_vectorEv(plVar24);
      _ZN7android16SortedVectorImplD1Ev();
      goto code_r0x0043550a;
    }
    puVar16 = &UNK_00184dca;
code_r0x004354d5:
    plVar24 = (long *)0x5;
    __android_log_print(5,&UNK_0015b3df,puVar16);
  }
  else {
    puVar16 = &UNK_00184d8a;
code_r0x004354f1:
    plVar24 = (long *)0x5;
    __android_log_print(5,&UNK_0015b3df,puVar16);
  }
  *(undefined4 *)(puVar31 + 0x50) = 0x80000001;
  uVar26 = 0x80000001;
code_r0x0043550a:
  if (*(long *)(in_FS_OFFSET + 0x28) != lStack_160) {
    func_0x0099bd00();
    return (ulong)*(uint *)(plVar24 + 10);
  }
  return uVar26;
code_r0x004352a6:
  uVar26 = 0x80000000;
  goto code_r0x004352af;
}


