// Function: _ZN7android15DynamicRefTable11addMappingsERKS0_
// Address: 00435120
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Type propagation algorithm not settling */

ulong _ZN7android15DynamicRefTable11addMappingsERKS0_
                (undefined1 *param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5)

{
  uint uVar1;
  char *pcVar2;
  long lVar3;
  short sVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 **ppuVar12;
  sbyte sVar13;
  byte bVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  byte bVar18;
  undefined8 *extraout_RDX;
  undefined *puVar19;
  char cVar20;
  ulong unaff_RBX;
  undefined8 **ppuVar21;
  undefined1 *puVar22;
  long *plVar23;
  uint uVar24;
  long unaff_R12;
  long unaff_R13;
  undefined1 *unaff_R14;
  undefined1 *unaff_R15;
  long lVar25;
  undefined8 **ppuVar26;
  long in_FS_OFFSET;
  undefined8 **ppuStack_270;
  long lStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  long lStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 *puStack_238;
  long alStack_230 [7];
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 auStack_1e8 [8];
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
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
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
  long lStack_e8;
  undefined1 *puStack_e0;
  ulong uStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined1 *puStack_c0;
  undefined *puStack_b8;
  undefined8 *puStack_a8;
  long lStack_a0;
  ulong uStack_98;
  long lStack_90;
  long lStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  ulong uStack_60;
  undefined1 *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  long lStack_38;
  
  uVar24 = (uint)param_5;
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = 0x80000000;
  if (param_1[0x108] == *(char *)(param_2 + 0x108)) {
    unaff_R12 = *(long *)(param_2 + 0x120);
    puStack_58 = param_1;
    if (unaff_R12 != 0) {
      unaff_R15 = param_1 + 0x110;
      unaff_R13 = 0;
      unaff_R14 = auStack_48;
      uStack_60 = param_2;
      do {
        puStack_70 = &UNK_00435205;
        _ZN7android8String16C2ERKS0_(unaff_R14,*(long *)(param_2 + 0x118) + unaff_R13);
        puStack_70 = &UNK_00435210;
        lVar7 = _ZNK7android16SortedVectorImpl7indexOfEPKv(unaff_R15,unaff_R14);
        puStack_70 = &UNK_0043521b;
        param_1 = unaff_R14;
        _ZN7android8String16D2Ev();
        param_2 = uStack_60;
        uVar24 = (uint)param_5;
        if (lVar7 < 0) {
          puStack_70 = &UNK_004351a7;
          _ZN7android8String16C2ERKS0_(auStack_50,*(long *)(uStack_60 + 0x118) + unaff_R13);
          lStack_68 = *(long *)(param_2 + 0x118);
          puStack_70 = &UNK_004351be;
          _ZN7android8String16C2ERKS0_(unaff_R14,auStack_50);
          uStack_40 = *(undefined1 *)(lStack_68 + 8 + unaff_R13);
          puStack_70 = &UNK_004351d6;
          _ZN7android16SortedVectorImpl3addEPKv(unaff_R15,unaff_R14);
          puStack_70 = &UNK_004351de;
          _ZN7android8String16D2Ev(unaff_R14);
          puStack_70 = &UNK_004351e7;
          _ZN7android8String16D2Ev(auStack_50);
          unaff_RBX = param_2;
        }
        else {
          unaff_RBX = lVar7 * 0x10;
          if (*(char *)(*(long *)(uStack_60 + 0x118) + 8 + unaff_R13) !=
              *(char *)(*(long *)(puStack_58 + 0x118) + 8 + unaff_RBX)) goto code_r0x004352a6;
        }
        uVar24 = (uint)param_5;
        unaff_R13 = unaff_R13 + 0x10;
        unaff_R12 = unaff_R12 + -1;
      } while (unaff_R12 != 0);
    }
    lVar7 = 0;
    do {
      cVar20 = *(char *)(param_2 + 8 + lVar7);
      param_1 = puStack_58;
      if (puStack_58[lVar7 + 8] != cVar20) {
        if (puStack_58[lVar7 + 8] == '\0') {
          puStack_58[lVar7 + 8] = cVar20;
        }
        else if (cVar20 != '\0') goto code_r0x004352a6;
      }
      cVar20 = *(char *)(param_2 + 9 + lVar7);
      if (puStack_58[lVar7 + 9] != cVar20) {
        if (puStack_58[lVar7 + 9] == '\0') {
          puStack_58[lVar7 + 9] = cVar20;
        }
        else if (cVar20 != '\0') goto code_r0x004352a6;
      }
      lVar7 = lVar7 + 2;
    } while (lVar7 != 0x100);
    uVar6 = 0;
  }
code_r0x004352af:
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return uVar6;
  }
  puStack_70 = &UNK_004352d2;
  func_0x0099bd00();
  lStack_a0 = *(long *)(in_FS_OFFSET + 0x28);
  puStack_b8 = &UNK_0043530e;
  uStack_98 = unaff_RBX;
  lStack_90 = unaff_R12;
  lStack_88 = unaff_R13;
  puStack_80 = unaff_R14;
  puStack_78 = unaff_R15;
  puStack_70 = &stack0xfffffffffffffff8;
  puVar8 = (undefined8 *)_Znwm(0x178);
  *puVar8 = param_1;
  puVar11 = puVar8 + 7;
  puVar8[1] = 0;
  puVar8[2] = 0;
  puStack_b8 = &UNK_00435327;
  _ZN7android13ResStringPoolC1Ev(puVar11);
  puVar8[0x2d] = 0;
  puVar8[0x2e] = 0;
  puStack_a8 = puVar8;
  puVar8[5] = *(undefined8 *)(param_1 + 0xa8);
  *(int *)(puVar8 + 6) = (int)param_2;
  puStack_b8 = &UNK_00435354;
  _ZN7android13ResStringPool6uninitEv(puVar11);
  puStack_b8 = &UNK_00435363;
  uVar9 = func_0x0099c4d0(1,0x1c);
  puVar8[9] = uVar9;
  puVar8[0xd] = 0;
  *(undefined4 *)(puVar8 + 0x1d) = 0;
  puVar8[0x13] = 0;
  puVar8[0x14] = 0;
  puVar8[0x15] = 0;
  puVar8[0x16] = 0;
  puVar8[0x17] = 0;
  puVar8[0x18] = 0;
  puVar8[0x19] = 0;
  puVar8[0x1a] = 0;
  puVar8[0x1b] = 0;
  puVar8[0x1e] = 0;
  puVar8[0x1f] = 0;
  *(undefined8 *)((long)puVar8 + 0xfc) = 0;
  *(undefined8 *)((long)puVar8 + 0x104) = 0;
  puVar8[10] = uVar9;
  puVar8[0xb] = 0;
  puVar8[0xc] = 0;
  puStack_b8 = &UNK_004353d0;
  puVar10 = (undefined8 *)func_0x0099c4d0(1,0xc);
  puVar8[1] = puVar10;
  uVar15 = 0xc0002;
  *puVar10 = 0xc000c0002;
  puVar8[2] = puVar10;
  ppuVar21 = &puStack_a8;
  puStack_b8 = &UNK_004353f1;
  puVar22 = param_1 + 0x98;
  _ZN7android10VectorImpl3addEPKv();
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_a0) {
    return 0;
  }
  puStack_b8 = &UNK_0043541d;
  func_0x0099bd00();
  lStack_e8 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_1e0 = 0;
  uStack_1d8 = 0;
  alStack_230[6] = extraout_RDX[4];
  uStack_1f8 = 0;
  uStack_1f0 = 0;
  plVar23 = (long *)auStack_1e8;
  auStack_1e8 = (undefined1  [8])ppuVar21;
  puStack_e0 = param_1;
  uStack_d8 = param_2 & 0xffffffff;
  puStack_d0 = puVar11;
  puStack_c8 = puVar8;
  puStack_c0 = param_1 + 0x98;
  puStack_b8 = (undefined *)&puStack_70;
  uVar6 = func_0x0042d730(plVar23,0x11c,&UNK_0017bd8b);
  if ((int)uVar6 != 0) {
    *(int *)(puVar22 + 0x50) = (int)uVar6;
    goto code_r0x0043550a;
  }
  if (*(uint *)((long)ppuVar21 + 0x10c) < *(uint *)((long)ppuVar21 + 4)) {
    if ((*(uint *)((long)ppuVar21 + 0x10c) & 3) == 0) {
      if (*(uint *)((long)ppuVar21 + 4) <= *(uint *)((long)ppuVar21 + 0x114)) {
        puVar19 = &UNK_0018b15e;
        goto code_r0x004354f1;
      }
      if ((*(uint *)((long)ppuVar21 + 0x114) & 3) != 0) {
        puVar19 = &UNK_00161722;
        goto code_r0x004354d5;
      }
      uVar1 = *(uint *)(ppuVar21 + 1);
      uVar17 = (ulong)uVar1;
      alStack_230[3] = 0;
      alStack_230[4] = 0;
      alStack_230[1] = 0;
      alStack_230[2] = 0;
      alStack_230[5] = 0;
      _ZN7android16SortedVectorImplC2Emj(alStack_230 + 1,0x10,0);
      alStack_230[1] = 0x99fa50;
      if (extraout_RDX[0x2d] == 0) {
        if (0xff < uVar1) {
          __android_log_assert(0,&UNK_0015b3df,&UNK_001726dc);
          goto code_r0x0043562c;
        }
code_r0x00435634:
        if ((((int)uVar17 == 0) || ((char)uVar24 != '\0')) ||
           (((int)uVar17 == 0x7f & (byte)uVar15) != 0)) {
          uVar17 = (ulong)(byte)puVar22[0x1e8];
          puVar22[0x1e8] = puVar22[0x1e8] + 1;
          uVar5 = 1;
        }
        else {
          uVar5 = 0;
        }
        alStack_230[0] = 0;
        puVar11 = (undefined8 *)_Znwm(0x288);
        *puVar11 = puVar22;
        puVar11[1] = extraout_RDX;
        puVar11[2] = ppuVar21;
        _ZN7android13ResStringPoolC1Ev();
        _ZN7android13ResStringPoolC1Ev(puVar11 + 0x29);
        puVar11[0x4f] = 0;
        *(undefined1 *)(puVar11 + 0x50) = 0;
        if (*(short *)(puVar11[2] + 2) == 0x120) {
          puVar11[0x4f] = (ulong)*(uint *)(puVar11[2] + 0x11c);
        }
        lStack_250 = (ulong)*(uint *)((long)ppuVar21 + 0x10c) + (long)ppuVar21;
        uStack_248 = 0;
        uStack_240 = 0;
        puStack_238 = puVar11;
        uVar6 = _ZN7android13ResStringPool5setToENS_5incfs7map_ptrIvLb0EEEmb
                          (puVar11 + 3,extraout_RDX[4] - lStack_250,0);
        if ((int)uVar6 == 0) {
          lStack_268 = (ulong)*(uint *)((long)ppuVar21 + 0x114) + (long)ppuVar21;
          uStack_260 = 0;
          uStack_258 = 0;
          uVar6 = _ZN7android13ResStringPool5setToENS_5incfs7map_ptrIvLb0EEEmb
                            (puStack_238 + 0x29,extraout_RDX[4] - lStack_268,0);
          if ((int)uVar6 == 0) {
            if ((ulong)(byte)puVar22[uVar17 + 0xe8] == 0) {
              uVar9 = *(undefined8 *)(puVar22 + 0xd0);
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
              uStack_148 = 0;
              uStack_140 = 0;
              uStack_158 = 0;
              uStack_150 = 0;
              uStack_168 = 0;
              uStack_160 = 0;
              uStack_178 = 0;
              uStack_170 = 0;
              uStack_188 = 0;
              uStack_180 = 0;
              uStack_198 = 0;
              uStack_190 = 0;
              uStack_1a8 = 0;
              uStack_1a0 = 0;
              uStack_1b8 = 0;
              uStack_1b0 = 0;
              uStack_1c8 = 0;
              uStack_1c0 = 0;
              uStack_1d8 = 0;
              uStack_1d0 = 0;
              auStack_1e8 = (undefined1  [8])0x0;
              uStack_1e0 = 0;
              sVar4 = *(short *)((long)ppuVar21 + 0xc);
              puVar11 = (undefined8 *)auStack_1e8;
              if (sVar4 != 0) {
                uVar6 = 0;
                do {
                  uVar16 = uVar6;
                  *(short *)((long)auStack_1e8 + uVar16) = sVar4;
                  sVar4 = *(short *)((long)ppuVar21 + uVar16 + 0xe);
                  if (sVar4 == 0) break;
                  uVar6 = uVar16 + 2;
                } while (uVar16 < 0xfc);
                puVar11 = (undefined8 *)((long)auStack_1e8 + uVar16 + 2);
              }
              *(undefined2 *)puVar11 = 0;
              lVar7 = _Znwm(0x2a0);
              _ZN7android8String16C2EPKDs(&ppuStack_270,auStack_1e8);
              _ZN7android8ResTable12PackageGroupC2EPS0_RKNS_8String16Ejbbb
                        (lVar7,puVar22,&ppuStack_270,uVar17,uVar15 & 0xff,uVar24 & 0xff,uVar5);
              alStack_230[0] = lVar7;
              _ZN7android8String16D2Ev(&ppuStack_270);
              puVar11 = puStack_238;
              if (alStack_230[0] == 0) {
                if (puStack_238 != (undefined8 *)0x0) {
                  _ZN7android13ResStringPoolD1Ev(puStack_238 + 0x29);
                  _ZN7android13ResStringPoolD1Ev(puVar11 + 3);
                  _ZdaPvSt11align_val_t(puVar11,0x288);
                }
                uVar6 = 0xfffffff4;
              }
              else {
                uVar6 = _ZN7android10VectorImpl3addEPKv(puVar22 + 0xc0,alStack_230);
                if (-1 < (int)uVar6) {
                  puVar22[uVar17 + 0xe8] = (char)uVar9 + '\x01';
                  lVar7 = *(long *)(puVar22 + 0xd0);
                  if (lVar7 != 0) {
                    lVar25 = 0;
                    do {
                      _ZN7android15DynamicRefTable10addMappingERKNS_8String16Eh
                                (*(long *)(*(long *)(puVar22 + 200) + lVar25 * 8) + 0x148,
                                 alStack_230[0] + 8,*(undefined1 *)(alStack_230[0] + 0x10));
                      lVar25 = lVar25 + 1;
                    } while (lVar7 != lVar25);
                  }
                  goto code_r0x00435a41;
                }
              }
            }
            else {
              alStack_230[0] =
                   *(long *)(*(long *)(puVar22 + 200) + -8 + (ulong)(byte)puVar22[uVar17 + 0xe8] * 8
                            );
              if (alStack_230[0] == 0) {
                *(undefined4 *)(puVar22 + 0x50) = 0x80000000;
                uVar6 = 0x80000000;
                goto code_r0x0043580c;
              }
code_r0x00435a41:
              uVar6 = _ZN7android10VectorImpl3addEPKv(alStack_230[0] + 0x18,&puStack_238);
              if (-1 < (int)uVar6) {
                uVar17 = (ulong)*(uint *)((long)ppuVar21 + 4);
                uVar6 = 0;
                if ((long)(ulong)*(ushort *)((long)ppuVar21 + 2) <= (long)(uVar17 - 8)) {
                  ppuVar26 = (undefined8 **)
                             ((ulong)*(ushort *)((long)ppuVar21 + 2) + (long)ppuVar21);
                  while( true ) {
                    uVar6 = 0;
                    uVar24 = *(uint *)((long)ppuVar26 + 4);
                    if ((undefined8 **)((long)ppuVar21 + (uVar17 - uVar24)) < ppuVar26) break;
                    switch(*(undefined2 *)ppuVar26) {
                    case 0x201:
                      uStack_1e0 = 0;
                      uStack_1d8 = 0;
                      ppuStack_270 = ppuVar26;
                      auStack_1e8 = (undefined1  [8])ppuVar26;
                      uVar6 = func_0x0042d730(auStack_1e8,0x18,&UNK_00169917);
                      if ((int)uVar6 == 0) {
                        sVar13 = ((*(byte *)((long)ppuStack_270 + 9) & 2) == 0) + 1;
                        if ((*(byte *)((long)ppuStack_270 + 9) & 1) != 0) {
                          sVar13 = 2;
                        }
                        uVar6 = ((ulong)*(uint *)((long)ppuStack_270 + 0xc) << sVar13) +
                                (ulong)*(ushort *)((long)ppuStack_270 + 2);
                        if (*(uint *)((long)ppuStack_270 + 4) < uVar6) {
                          __android_log_print(5,&UNK_0015b3df,&UNK_00169925,uVar6);
                        }
                        else if (*(uint *)((long)ppuStack_270 + 0xc) == 0) {
                          if (*(char *)(ppuStack_270 + 1) != '\0') goto code_r0x00435b10;
code_r0x004360d6:
                          __android_log_print(5,&UNK_0015b3df,&UNK_001869d4);
                        }
                        else if ((ulong)*(uint *)((long)ppuStack_270 + 4) - 8 <
                                 (ulong)*(uint *)(ppuStack_270 + 2)) {
                          __android_log_print(5,&UNK_0015b3df,&UNK_00183867);
                        }
                        else {
                          cVar20 = *(char *)(ppuStack_270 + 1);
                          if (cVar20 == '\0') goto code_r0x004360d6;
                          auStack_1e8[0] = cVar20;
                          uStack_1e0 = 0;
                          lVar7 = _ZNK7android16SortedVectorImpl7indexOfEPKv
                                            (alStack_230 + 1,auStack_1e8);
                          if (lVar7 < 0) {
                            if (extraout_RDX[0x2d] != 0) goto code_r0x00435b10;
                          }
                          else {
                            pcVar2 = *(char **)(alStack_230[2] + 8 + lVar7 * 0x10);
                            if (pcVar2 == (char *)0x0) {
                              cVar20 = '\0';
                            }
                            else {
                              cVar20 = *pcVar2;
                            }
                          }
                          lVar7 = _ZN7android15ByteBucketArrayINS_6VectorIPNS_8ResTable4TypeEEEE10editItemAtEm
                                            (alStack_230[0] + 0x40,cVar20 + -1);
                          if (*(long *)(lVar7 + 0x10) != 0) {
                            plVar23 = (long *)_ZN7android10VectorImpl16editItemLocationEm
                                                        (lVar7,*(long *)(lVar7 + 0x10) + -1);
                            if (*(undefined8 **)(*plVar23 + 8) == puStack_238) {
                              _ZN7android10VectorImpl3addEPKv(*plVar23 + 0x30,&ppuStack_270);
                              goto code_r0x00435b10;
                            }
                          }
                          __android_log_print(6,&UNK_0015b3df,&UNK_00157bb0,
                                              *(undefined1 *)(ppuStack_270 + 1));
                        }
                        uVar6 = 0x80000001;
                        *(undefined4 *)(puVar22 + 0x50) = 0x80000001;
                      }
                      else {
                        *(int *)(puVar22 + 0x50) = (int)uVar6;
                      }
                      goto code_r0x0043580c;
                    case 0x202:
                      uStack_1e0 = 0;
                      uStack_1d8 = 0;
                      auStack_1e8 = (undefined1  [8])ppuVar26;
                      uVar6 = func_0x0042d730(auStack_1e8,0x10,&UNK_001726f4);
                      if ((int)uVar6 != 0) goto code_r0x0043605a;
                      puVar11 = (undefined8 *)(ulong)*(uint *)((long)ppuVar26 + 0xc);
                      if ((puVar11 < (undefined8 *)0x20000000) &&
                         ((ulong)*(ushort *)((long)ppuVar26 + 2) + (long)puVar11 * 4 <=
                          (ulong)*(uint *)((long)ppuVar26 + 4))) {
                        cVar20 = *(char *)(ppuVar26 + 1);
                        if (cVar20 == '\0') {
                          __android_log_print(5,&UNK_0015b3df,&UNK_001869d4);
                          goto code_r0x004360c4;
                        }
                        if (puVar11 != (undefined8 *)0x0) {
                          auStack_1e8[0] = cVar20;
                          uStack_1e0 = 0;
                          lVar7 = _ZNK7android16SortedVectorImpl7indexOfEPKv
                                            (alStack_230 + 1,auStack_1e8);
                          if (lVar7 < 0) {
                            if (extraout_RDX[0x2d] != 0) goto code_r0x00435b10;
                          }
                          else {
                            pcVar2 = *(char **)(alStack_230[2] + 8 + lVar7 * 0x10);
                            if (pcVar2 == (char *)0x0) {
                              cVar20 = '\0';
                            }
                            else {
                              cVar20 = *pcVar2;
                            }
                          }
                          lVar25 = _ZN7android15ByteBucketArrayINS_6VectorIPNS_8ResTable4TypeEEEE10editItemAtEm
                                             (alStack_230[0] + 0x40,cVar20 + -1);
                          if (((*(long *)(lVar25 + 0x10) != 0) && (lVar7 < 0)) &&
                             (*(undefined8 **)(**(long **)(lVar25 + 8) + 0x10) != puVar11)) {
                            __android_log_print(5,&UNK_0015b3df,&UNK_0015cb67,puVar11);
                          }
                          ppuVar12 = (undefined8 **)_Znwm(0x58);
                          *ppuVar12 = extraout_RDX;
                          ppuVar12[1] = puStack_238;
                          ppuVar12[2] = puVar11;
                          ppuVar12[3] = (undefined8 *)0x0;
                          ppuVar12[4] = (undefined8 *)0x0;
                          ppuVar12[5] = (undefined8 *)0x0;
                          _ZN7android10VectorImplC2Emj(ppuVar12 + 6,8,7);
                          ppuVar12[6] = (undefined8 *)0x99fa00;
                          ppuVar12[3] = ppuVar26;
                          ppuVar12[4] = (undefined8 *)
                                        ((ulong)*(ushort *)((long)ppuVar26 + 2) + (long)ppuVar26);
                          if (-1 < lVar7) {
                            ppuVar12[5] = *(undefined8 **)(alStack_230[2] + 8 + lVar7 * 0x10);
                          }
                          auStack_1e8 = (undefined1  [8])ppuVar12;
                          _ZN7android10VectorImpl3addEPKv(lVar25,auStack_1e8);
                          bVar14 = (byte)*(undefined4 *)(alStack_230[0] + 0xc0);
                          bVar18 = (byte)*(undefined4 *)(ppuVar26 + 1);
                          if ((byte)*(undefined4 *)(ppuVar26 + 1) < bVar14) {
                            bVar18 = bVar14;
                          }
                          *(byte *)(alStack_230[0] + 0xc0) = bVar18;
                        }
                        goto code_r0x00435b10;
                      }
                      __android_log_print(5,&UNK_0015b3df,&UNK_00188215);
code_r0x004360c4:
                      *(undefined4 *)(puVar22 + 0x50) = 0x80000001;
                      uVar6 = 0x80000001;
                      goto code_r0x0043580c;
                    case 0x203:
                      if (*(long *)(alStack_230[0] + 0x268) == 0) {
                        uStack_1e0 = 0;
                        uStack_1d8 = 0;
                        auStack_1e8 = (undefined1  [8])ppuVar26;
                        uVar6 = func_0x0042d730(auStack_1e8,0xc,&UNK_00188256);
                        if (((int)uVar6 != 0) ||
                           (uVar6 = _ZN7android15DynamicRefTable4loadEPKNS_19ResTable_lib_headerE
                                              (alStack_230[0] + 0x148,ppuVar26), (int)uVar6 != 0))
                        goto code_r0x0043605a;
                        lVar7 = *(long *)(puVar22 + 0xd0);
                        if (lVar7 != 0) {
                          lVar25 = 0;
                          do {
                            lVar3 = *(long *)(*(long *)(puVar22 + 200) + lVar25 * 8);
                            _ZN7android15DynamicRefTable10addMappingERKNS_8String16Eh
                                      (alStack_230[0] + 0x148,lVar3 + 8,
                                       *(undefined1 *)(lVar3 + 0x10));
                            lVar25 = lVar25 + 1;
                          } while (lVar7 != lVar25);
                        }
                      }
                      else {
                        __android_log_print(5,&UNK_0015b3df,&UNK_00177478);
                      }
                      goto code_r0x00435b10;
                    case 0x204:
                      *(undefined1 *)(puStack_238 + 0x50) = 1;
                    }
                    uStack_1e0 = 0;
                    uStack_1d8 = 0;
                    auStack_1e8 = (undefined1  [8])ppuVar26;
                    uVar6 = func_0x0042d730(auStack_1e8,8,&UNK_0015feb3);
                    if ((int)uVar6 != 0) {
code_r0x0043605a:
                      *(int *)(puVar22 + 0x50) = (int)uVar6;
                      break;
                    }
code_r0x00435b10:
                    ppuVar26 = (undefined8 **)((long)ppuVar26 + (ulong)uVar24);
                    uVar6 = 0;
                    if ((undefined8 **)((long)ppuVar21 + (uVar17 - 8)) < ppuVar26) break;
                  }
                }
                goto code_r0x0043580c;
              }
            }
            *(int *)(puVar22 + 0x50) = (int)uVar6;
            goto code_r0x0043580c;
          }
        }
        lVar7 = alStack_230[0];
        if (alStack_230[0] != 0) {
          _ZN7android8ResTable12PackageGroupD2Ev(alStack_230[0]);
          _ZdaPvSt11align_val_t(lVar7,0x2a0);
        }
        puVar11 = puStack_238;
        if (puStack_238 != (undefined8 *)0x0) {
          _ZN7android13ResStringPoolD1Ev(puStack_238 + 0x29);
          _ZN7android13ResStringPoolD1Ev(puVar11 + 3);
          _ZdaPvSt11align_val_t(puVar11,0x288);
        }
        *(int *)(puVar22 + 0x50) = (int)uVar6;
      }
      else {
        auStack_1e8 = (undefined1  [8])((ulong)auStack_1e8 & 0xffffffffffffff00);
        uVar6 = _ZN7android10parseIdmapEPKvmPhPNS_11KeyedVectorIhNS_12IdmapEntriesEEE
                          (extraout_RDX[0x2d],extraout_RDX[0x2e],auStack_1e8,alStack_230 + 1);
        if ((int)uVar6 == 0) {
code_r0x0043562c:
          uVar17 = (ulong)auStack_1e8 & 0xff;
          goto code_r0x00435634;
        }
        __android_log_print(5,&UNK_0015b3df,&UNK_0017bd9c);
        *(int *)(puVar22 + 0x50) = (int)uVar6;
      }
code_r0x0043580c:
      alStack_230[1] = 0x99fa50;
      plVar23 = alStack_230 + 1;
      _ZN7android10VectorImpl13finish_vectorEv(plVar23);
      _ZN7android16SortedVectorImplD1Ev();
      goto code_r0x0043550a;
    }
    puVar19 = &UNK_00184dca;
code_r0x004354d5:
    plVar23 = (long *)0x5;
    __android_log_print(5,&UNK_0015b3df,puVar19);
  }
  else {
    puVar19 = &UNK_00184d8a;
code_r0x004354f1:
    plVar23 = (long *)0x5;
    __android_log_print(5,&UNK_0015b3df,puVar19);
  }
  *(undefined4 *)(puVar22 + 0x50) = 0x80000001;
  uVar6 = 0x80000001;
code_r0x0043550a:
  if (*(long *)(in_FS_OFFSET + 0x28) != lStack_e8) {
    func_0x0099bd00();
    return (ulong)*(uint *)(plVar23 + 10);
  }
  return uVar6;
code_r0x004352a6:
  uVar6 = 0x80000000;
  goto code_r0x004352af;
}


