// Function: _ZN7android8ResTable8addEmptyEi
// Address: 004352e0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Type propagation algorithm not settling */

ulong _ZN7android8ResTable8addEmptyEi
                (long param_1,uint param_2,undefined8 param_3,undefined8 param_4,uint param_5)

{
  uint uVar1;
  undefined8 uVar2;
  char *pcVar3;
  long lVar4;
  short sVar5;
  undefined4 uVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  long **pplVar13;
  sbyte sVar14;
  byte bVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  byte bVar19;
  long *extraout_RDX;
  undefined *puVar20;
  char cVar21;
  long **pplVar22;
  long *plVar23;
  long lVar24;
  long **pplVar25;
  long in_FS_OFFSET;
  long **pplStack_208;
  long lStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  long *plStack_1d0;
  long alStack_1c8 [7];
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined1 auStack_180 [8];
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
  long lStack_80;
  long lStack_78;
  ulong uStack_70;
  long *plStack_68;
  long *plStack_60;
  long lStack_58;
  undefined *puStack_50;
  long *plStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  puStack_50 = &UNK_0043530e;
  plVar7 = (long *)_Znwm(0x178);
  *plVar7 = param_1;
  plVar11 = plVar7 + 7;
  plVar7[1] = 0;
  plVar7[2] = 0;
  puStack_50 = &UNK_00435327;
  _ZN7android13ResStringPoolC1Ev(plVar11);
  plVar7[0x2d] = 0;
  plVar7[0x2e] = 0;
  plVar7[5] = *(long *)(param_1 + 0xa8);
  *(uint *)(plVar7 + 6) = param_2;
  puStack_50 = &UNK_00435354;
  plStack_40 = plVar7;
  _ZN7android13ResStringPool6uninitEv(plVar11);
  puStack_50 = &UNK_00435363;
  lVar8 = func_0x0099c4d0(1,0x1c);
  plVar7[9] = lVar8;
  plVar7[0xd] = 0;
  *(undefined4 *)(plVar7 + 0x1d) = 0;
  plVar7[0x13] = 0;
  plVar7[0x14] = 0;
  plVar7[0x15] = 0;
  plVar7[0x16] = 0;
  plVar7[0x17] = 0;
  plVar7[0x18] = 0;
  plVar7[0x19] = 0;
  plVar7[0x1a] = 0;
  plVar7[0x1b] = 0;
  plVar7[0x1e] = 0;
  plVar7[0x1f] = 0;
  *(undefined8 *)((long)plVar7 + 0xfc) = 0;
  *(undefined8 *)((long)plVar7 + 0x104) = 0;
  plVar7[10] = lVar8;
  plVar7[0xb] = 0;
  plVar7[0xc] = 0;
  puStack_50 = &UNK_004353d0;
  puVar9 = (undefined8 *)func_0x0099c4d0(1,0xc);
  plVar7[1] = (long)puVar9;
  uVar16 = 0xc0002;
  *puVar9 = 0xc000c0002;
  plVar7[2] = (long)puVar9;
  pplVar22 = &plStack_40;
  puStack_50 = &UNK_004353f1;
  lVar8 = param_1 + 0x98;
  _ZN7android10VectorImpl3addEPKv();
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return 0;
  }
  puStack_50 = &UNK_0043541d;
  func_0x0099bd00();
  lStack_80 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_178 = 0;
  uStack_170 = 0;
  alStack_1c8[6] = extraout_RDX[4];
  uStack_190 = 0;
  uStack_188 = 0;
  plVar23 = (long *)auStack_180;
  auStack_180 = (undefined1  [8])pplVar22;
  lStack_78 = param_1;
  uStack_70 = (ulong)param_2;
  plStack_68 = plVar11;
  plStack_60 = plVar7;
  lStack_58 = param_1 + 0x98;
  puStack_50 = &stack0xfffffffffffffff8;
  uVar10 = func_0x0042d730(plVar23,0x11c,&UNK_0017bd8b);
  if ((int)uVar10 != 0) {
    *(int *)(lVar8 + 0x50) = (int)uVar10;
    goto code_r0x0043550a;
  }
  if (*(uint *)((long)pplVar22 + 0x10c) < *(uint *)((long)pplVar22 + 4)) {
    if ((*(uint *)((long)pplVar22 + 0x10c) & 3) == 0) {
      if (*(uint *)((long)pplVar22 + 4) <= *(uint *)((long)pplVar22 + 0x114)) {
        puVar20 = &UNK_0018b15e;
        goto code_r0x004354f1;
      }
      if ((*(uint *)((long)pplVar22 + 0x114) & 3) != 0) {
        puVar20 = &UNK_00161722;
        goto code_r0x004354d5;
      }
      uVar1 = *(uint *)(pplVar22 + 1);
      uVar18 = (ulong)uVar1;
      alStack_1c8[3] = 0;
      alStack_1c8[4] = 0;
      alStack_1c8[1] = 0;
      alStack_1c8[2] = 0;
      alStack_1c8[5] = 0;
      _ZN7android16SortedVectorImplC2Emj(alStack_1c8 + 1,0x10,0);
      alStack_1c8[1] = 0x99fa50;
      if (extraout_RDX[0x2d] == 0) {
        if (0xff < uVar1) {
          __android_log_assert(0,&UNK_0015b3df,&UNK_001726dc);
          goto code_r0x0043562c;
        }
code_r0x00435634:
        if ((((int)uVar18 == 0) || ((char)param_5 != '\0')) ||
           (((int)uVar18 == 0x7f & (byte)uVar16) != 0)) {
          uVar18 = (ulong)*(byte *)(lVar8 + 0x1e8);
          *(byte *)(lVar8 + 0x1e8) = *(byte *)(lVar8 + 0x1e8) + 1;
          uVar6 = 1;
        }
        else {
          uVar6 = 0;
        }
        alStack_1c8[0] = 0;
        plVar11 = (long *)_Znwm(0x288);
        *plVar11 = lVar8;
        plVar11[1] = (long)extraout_RDX;
        plVar11[2] = (long)pplVar22;
        _ZN7android13ResStringPoolC1Ev();
        _ZN7android13ResStringPoolC1Ev(plVar11 + 0x29);
        plVar11[0x4f] = 0;
        *(undefined1 *)(plVar11 + 0x50) = 0;
        if (*(short *)(plVar11[2] + 2) == 0x120) {
          plVar11[0x4f] = (ulong)*(uint *)(plVar11[2] + 0x11c);
        }
        lStack_1e8 = (ulong)*(uint *)((long)pplVar22 + 0x10c) + (long)pplVar22;
        uStack_1e0 = 0;
        uStack_1d8 = 0;
        plStack_1d0 = plVar11;
        uVar10 = _ZN7android13ResStringPool5setToENS_5incfs7map_ptrIvLb0EEEmb
                           (plVar11 + 3,extraout_RDX[4] - lStack_1e8,0);
        if ((int)uVar10 == 0) {
          lStack_200 = (ulong)*(uint *)((long)pplVar22 + 0x114) + (long)pplVar22;
          uStack_1f8 = 0;
          uStack_1f0 = 0;
          uVar10 = _ZN7android13ResStringPool5setToENS_5incfs7map_ptrIvLb0EEEmb
                             (plStack_1d0 + 0x29,extraout_RDX[4] - lStack_200,0);
          if ((int)uVar10 == 0) {
            uVar10 = (ulong)*(byte *)(lVar8 + 0xe8 + uVar18);
            if (uVar10 == 0) {
              uVar2 = *(undefined8 *)(lVar8 + 0xd0);
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
              uStack_150 = 0;
              uStack_148 = 0;
              uStack_160 = 0;
              uStack_158 = 0;
              uStack_170 = 0;
              uStack_168 = 0;
              auStack_180 = (undefined1  [8])0x0;
              uStack_178 = 0;
              sVar5 = *(short *)((long)pplVar22 + 0xc);
              puVar9 = (undefined8 *)auStack_180;
              if (sVar5 != 0) {
                uVar10 = 0;
                do {
                  uVar17 = uVar10;
                  *(short *)((long)auStack_180 + uVar17) = sVar5;
                  sVar5 = *(short *)((long)pplVar22 + uVar17 + 0xe);
                  if (sVar5 == 0) break;
                  uVar10 = uVar17 + 2;
                } while (uVar17 < 0xfc);
                puVar9 = (undefined8 *)((long)auStack_180 + uVar17 + 2);
              }
              *(undefined2 *)puVar9 = 0;
              lVar12 = _Znwm(0x2a0);
              _ZN7android8String16C2EPKDs(&pplStack_208,auStack_180);
              _ZN7android8ResTable12PackageGroupC2EPS0_RKNS_8String16Ejbbb
                        (lVar12,lVar8,&pplStack_208,uVar18,uVar16 & 0xff,param_5 & 0xff,uVar6);
              alStack_1c8[0] = lVar12;
              _ZN7android8String16D2Ev(&pplStack_208);
              plVar11 = plStack_1d0;
              if (alStack_1c8[0] == 0) {
                if (plStack_1d0 != (long *)0x0) {
                  _ZN7android13ResStringPoolD1Ev(plStack_1d0 + 0x29);
                  _ZN7android13ResStringPoolD1Ev(plVar11 + 3);
                  _ZdaPvSt11align_val_t(plVar11,0x288);
                }
                uVar10 = 0xfffffff4;
              }
              else {
                uVar10 = _ZN7android10VectorImpl3addEPKv(lVar8 + 0xc0,alStack_1c8);
                if (-1 < (int)uVar10) {
                  *(char *)(lVar8 + 0xe8 + uVar18) = (char)uVar2 + '\x01';
                  lVar12 = *(long *)(lVar8 + 0xd0);
                  if (lVar12 != 0) {
                    lVar24 = 0;
                    do {
                      _ZN7android15DynamicRefTable10addMappingERKNS_8String16Eh
                                (*(long *)(*(long *)(lVar8 + 200) + lVar24 * 8) + 0x148,
                                 alStack_1c8[0] + 8,*(undefined1 *)(alStack_1c8[0] + 0x10));
                      lVar24 = lVar24 + 1;
                    } while (lVar12 != lVar24);
                  }
                  goto code_r0x00435a41;
                }
              }
            }
            else {
              alStack_1c8[0] = *(long *)(*(long *)(lVar8 + 200) + -8 + uVar10 * 8);
              if (alStack_1c8[0] == 0) {
                *(undefined4 *)(lVar8 + 0x50) = 0x80000000;
                uVar10 = 0x80000000;
                goto code_r0x0043580c;
              }
code_r0x00435a41:
              uVar10 = _ZN7android10VectorImpl3addEPKv(alStack_1c8[0] + 0x18,&plStack_1d0);
              if (-1 < (int)uVar10) {
                uVar18 = (ulong)*(uint *)((long)pplVar22 + 4);
                uVar10 = 0;
                if ((long)(ulong)*(ushort *)((long)pplVar22 + 2) <= (long)(uVar18 - 8)) {
                  pplVar25 = (long **)((ulong)*(ushort *)((long)pplVar22 + 2) + (long)pplVar22);
                  while( true ) {
                    uVar10 = 0;
                    uVar16 = *(uint *)((long)pplVar25 + 4);
                    if ((long **)((long)pplVar22 + (uVar18 - uVar16)) < pplVar25) break;
                    switch(*(undefined2 *)pplVar25) {
                    case 0x201:
                      uStack_178 = 0;
                      uStack_170 = 0;
                      pplStack_208 = pplVar25;
                      auStack_180 = (undefined1  [8])pplVar25;
                      uVar10 = func_0x0042d730(auStack_180,0x18,&UNK_00169917);
                      if ((int)uVar10 == 0) {
                        sVar14 = ((*(byte *)((long)pplStack_208 + 9) & 2) == 0) + 1;
                        if ((*(byte *)((long)pplStack_208 + 9) & 1) != 0) {
                          sVar14 = 2;
                        }
                        uVar10 = ((ulong)*(uint *)((long)pplStack_208 + 0xc) << sVar14) +
                                 (ulong)*(ushort *)((long)pplStack_208 + 2);
                        if (*(uint *)((long)pplStack_208 + 4) < uVar10) {
                          __android_log_print(5,&UNK_0015b3df,&UNK_00169925,uVar10);
                        }
                        else if (*(uint *)((long)pplStack_208 + 0xc) == 0) {
                          if (*(char *)(pplStack_208 + 1) != '\0') goto code_r0x00435b10;
code_r0x004360d6:
                          __android_log_print(5,&UNK_0015b3df,&UNK_001869d4);
                        }
                        else if ((ulong)*(uint *)((long)pplStack_208 + 4) - 8 <
                                 (ulong)*(uint *)(pplStack_208 + 2)) {
                          __android_log_print(5,&UNK_0015b3df,&UNK_00183867);
                        }
                        else {
                          cVar21 = *(char *)(pplStack_208 + 1);
                          if (cVar21 == '\0') goto code_r0x004360d6;
                          auStack_180[0] = cVar21;
                          uStack_178 = 0;
                          lVar12 = _ZNK7android16SortedVectorImpl7indexOfEPKv
                                             (alStack_1c8 + 1,auStack_180);
                          if (lVar12 < 0) {
                            if (extraout_RDX[0x2d] != 0) goto code_r0x00435b10;
                          }
                          else {
                            pcVar3 = *(char **)(alStack_1c8[2] + 8 + lVar12 * 0x10);
                            if (pcVar3 == (char *)0x0) {
                              cVar21 = '\0';
                            }
                            else {
                              cVar21 = *pcVar3;
                            }
                          }
                          lVar12 = _ZN7android15ByteBucketArrayINS_6VectorIPNS_8ResTable4TypeEEEE10editItemAtEm
                                             (alStack_1c8[0] + 0x40,cVar21 + -1);
                          if (*(long *)(lVar12 + 0x10) != 0) {
                            plVar11 = (long *)_ZN7android10VectorImpl16editItemLocationEm
                                                        (lVar12,*(long *)(lVar12 + 0x10) + -1);
                            if (*(long **)(*plVar11 + 8) == plStack_1d0) {
                              _ZN7android10VectorImpl3addEPKv(*plVar11 + 0x30,&pplStack_208);
                              goto code_r0x00435b10;
                            }
                          }
                          __android_log_print(6,&UNK_0015b3df,&UNK_00157bb0,
                                              *(undefined1 *)(pplStack_208 + 1));
                        }
                        uVar10 = 0x80000001;
                        *(undefined4 *)(lVar8 + 0x50) = 0x80000001;
                      }
                      else {
                        *(int *)(lVar8 + 0x50) = (int)uVar10;
                      }
                      goto code_r0x0043580c;
                    case 0x202:
                      uStack_178 = 0;
                      uStack_170 = 0;
                      auStack_180 = (undefined1  [8])pplVar25;
                      uVar10 = func_0x0042d730(auStack_180,0x10,&UNK_001726f4);
                      if ((int)uVar10 != 0) goto code_r0x0043605a;
                      plVar11 = (long *)(ulong)*(uint *)((long)pplVar25 + 0xc);
                      if ((plVar11 < (long *)0x20000000) &&
                         ((ulong)*(ushort *)((long)pplVar25 + 2) + (long)plVar11 * 4 <=
                          (ulong)*(uint *)((long)pplVar25 + 4))) {
                        cVar21 = *(char *)(pplVar25 + 1);
                        if (cVar21 == '\0') {
                          __android_log_print(5,&UNK_0015b3df,&UNK_001869d4);
                          goto code_r0x004360c4;
                        }
                        if (plVar11 != (long *)0x0) {
                          auStack_180[0] = cVar21;
                          uStack_178 = 0;
                          lVar12 = _ZNK7android16SortedVectorImpl7indexOfEPKv
                                             (alStack_1c8 + 1,auStack_180);
                          if (lVar12 < 0) {
                            if (extraout_RDX[0x2d] != 0) goto code_r0x00435b10;
                          }
                          else {
                            pcVar3 = *(char **)(alStack_1c8[2] + 8 + lVar12 * 0x10);
                            if (pcVar3 == (char *)0x0) {
                              cVar21 = '\0';
                            }
                            else {
                              cVar21 = *pcVar3;
                            }
                          }
                          lVar24 = _ZN7android15ByteBucketArrayINS_6VectorIPNS_8ResTable4TypeEEEE10editItemAtEm
                                             (alStack_1c8[0] + 0x40,cVar21 + -1);
                          if (((*(long *)(lVar24 + 0x10) != 0) && (lVar12 < 0)) &&
                             (*(long **)(**(long **)(lVar24 + 8) + 0x10) != plVar11)) {
                            __android_log_print(5,&UNK_0015b3df,&UNK_0015cb67,plVar11);
                          }
                          pplVar13 = (long **)_Znwm(0x58);
                          *pplVar13 = extraout_RDX;
                          pplVar13[1] = plStack_1d0;
                          pplVar13[2] = plVar11;
                          pplVar13[3] = (long *)0x0;
                          pplVar13[4] = (long *)0x0;
                          pplVar13[5] = (long *)0x0;
                          _ZN7android10VectorImplC2Emj(pplVar13 + 6,8,7);
                          pplVar13[6] = (long *)0x99fa00;
                          pplVar13[3] = (long *)pplVar25;
                          pplVar13[4] = (long *)((ulong)*(ushort *)((long)pplVar25 + 2) +
                                                (long)pplVar25);
                          if (-1 < lVar12) {
                            pplVar13[5] = *(long **)(alStack_1c8[2] + 8 + lVar12 * 0x10);
                          }
                          auStack_180 = (undefined1  [8])pplVar13;
                          _ZN7android10VectorImpl3addEPKv(lVar24,auStack_180);
                          bVar15 = (byte)*(undefined4 *)(alStack_1c8[0] + 0xc0);
                          bVar19 = (byte)*(undefined4 *)(pplVar25 + 1);
                          if ((byte)*(undefined4 *)(pplVar25 + 1) < bVar15) {
                            bVar19 = bVar15;
                          }
                          *(byte *)(alStack_1c8[0] + 0xc0) = bVar19;
                        }
                        goto code_r0x00435b10;
                      }
                      __android_log_print(5,&UNK_0015b3df,&UNK_00188215);
code_r0x004360c4:
                      *(undefined4 *)(lVar8 + 0x50) = 0x80000001;
                      uVar10 = 0x80000001;
                      goto code_r0x0043580c;
                    case 0x203:
                      if (*(long *)(alStack_1c8[0] + 0x268) == 0) {
                        uStack_178 = 0;
                        uStack_170 = 0;
                        auStack_180 = (undefined1  [8])pplVar25;
                        uVar10 = func_0x0042d730(auStack_180,0xc,&UNK_00188256);
                        if (((int)uVar10 != 0) ||
                           (uVar10 = _ZN7android15DynamicRefTable4loadEPKNS_19ResTable_lib_headerE
                                               (alStack_1c8[0] + 0x148,pplVar25), (int)uVar10 != 0))
                        goto code_r0x0043605a;
                        lVar12 = *(long *)(lVar8 + 0xd0);
                        if (lVar12 != 0) {
                          lVar24 = 0;
                          do {
                            lVar4 = *(long *)(*(long *)(lVar8 + 200) + lVar24 * 8);
                            _ZN7android15DynamicRefTable10addMappingERKNS_8String16Eh
                                      (alStack_1c8[0] + 0x148,lVar4 + 8,
                                       *(undefined1 *)(lVar4 + 0x10));
                            lVar24 = lVar24 + 1;
                          } while (lVar12 != lVar24);
                        }
                      }
                      else {
                        __android_log_print(5,&UNK_0015b3df,&UNK_00177478);
                      }
                      goto code_r0x00435b10;
                    case 0x204:
                      *(undefined1 *)(plStack_1d0 + 0x50) = 1;
                    }
                    uStack_178 = 0;
                    uStack_170 = 0;
                    auStack_180 = (undefined1  [8])pplVar25;
                    uVar10 = func_0x0042d730(auStack_180,8,&UNK_0015feb3);
                    if ((int)uVar10 != 0) {
code_r0x0043605a:
                      *(int *)(lVar8 + 0x50) = (int)uVar10;
                      break;
                    }
code_r0x00435b10:
                    pplVar25 = (long **)((long)pplVar25 + (ulong)uVar16);
                    uVar10 = 0;
                    if ((long **)((long)pplVar22 + (uVar18 - 8)) < pplVar25) break;
                  }
                }
                goto code_r0x0043580c;
              }
            }
            *(int *)(lVar8 + 0x50) = (int)uVar10;
            goto code_r0x0043580c;
          }
        }
        lVar12 = alStack_1c8[0];
        if (alStack_1c8[0] != 0) {
          _ZN7android8ResTable12PackageGroupD2Ev(alStack_1c8[0]);
          _ZdaPvSt11align_val_t(lVar12,0x2a0);
        }
        plVar11 = plStack_1d0;
        if (plStack_1d0 != (long *)0x0) {
          _ZN7android13ResStringPoolD1Ev(plStack_1d0 + 0x29);
          _ZN7android13ResStringPoolD1Ev(plVar11 + 3);
          _ZdaPvSt11align_val_t(plVar11,0x288);
        }
        *(int *)(lVar8 + 0x50) = (int)uVar10;
      }
      else {
        auStack_180 = (undefined1  [8])((ulong)auStack_180 & 0xffffffffffffff00);
        uVar10 = _ZN7android10parseIdmapEPKvmPhPNS_11KeyedVectorIhNS_12IdmapEntriesEEE
                           (extraout_RDX[0x2d],extraout_RDX[0x2e],auStack_180,alStack_1c8 + 1);
        if ((int)uVar10 == 0) {
code_r0x0043562c:
          uVar18 = (ulong)auStack_180 & 0xff;
          goto code_r0x00435634;
        }
        __android_log_print(5,&UNK_0015b3df,&UNK_0017bd9c);
        *(int *)(lVar8 + 0x50) = (int)uVar10;
      }
code_r0x0043580c:
      alStack_1c8[1] = 0x99fa50;
      plVar23 = alStack_1c8 + 1;
      _ZN7android10VectorImpl13finish_vectorEv(plVar23);
      _ZN7android16SortedVectorImplD1Ev();
      goto code_r0x0043550a;
    }
    puVar20 = &UNK_00184dca;
code_r0x004354d5:
    plVar23 = (long *)0x5;
    __android_log_print(5,&UNK_0015b3df,puVar20);
  }
  else {
    puVar20 = &UNK_00184d8a;
code_r0x004354f1:
    plVar23 = (long *)0x5;
    __android_log_print(5,&UNK_0015b3df,puVar20);
  }
  *(undefined4 *)(lVar8 + 0x50) = 0x80000001;
  uVar10 = 0x80000001;
code_r0x0043550a:
  if (*(long *)(in_FS_OFFSET + 0x28) != lStack_80) {
    func_0x0099bd00();
    return (ulong)*(uint *)(plVar23 + 10);
  }
  return uVar10;
}


