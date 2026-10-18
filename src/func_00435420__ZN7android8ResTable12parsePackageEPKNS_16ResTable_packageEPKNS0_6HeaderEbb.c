// Function: _ZN7android8ResTable12parsePackageEPKNS_16ResTable_packageEPKNS0_6HeaderEbb
// Address: 00435420
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Type propagation algorithm not settling */

ulong _ZN7android8ResTable12parsePackageEPKNS_16ResTable_packageEPKNS0_6HeaderEbb
                (long param_1,ushort *param_2,long param_3,byte param_4,char param_5)

{
  uint uVar1;
  undefined8 uVar2;
  char *pcVar3;
  long lVar4;
  ushort uVar5;
  undefined4 uVar6;
  ulong uVar7;
  long lVar8;
  ushort *puVar9;
  sbyte sVar10;
  byte bVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  byte bVar15;
  undefined *puVar16;
  char cVar17;
  long *plVar18;
  long lVar19;
  ushort *puVar20;
  long in_FS_OFFSET;
  ushort *puStack_1c0;
  long lStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long lStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  long *plStack_188;
  long alStack_180 [7];
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined1 auStack_138 [8];
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
  uStack_130 = 0;
  uStack_128 = 0;
  alStack_180[6] = *(undefined8 *)(param_3 + 0x20);
  uStack_148 = 0;
  uStack_140 = 0;
  plVar18 = (long *)auStack_138;
  auStack_138 = (undefined1  [8])param_2;
  uVar7 = func_0x0042d730(plVar18,0x11c,&UNK_0017bd8b);
  if ((int)uVar7 != 0) {
    *(int *)(param_1 + 0x50) = (int)uVar7;
    goto code_r0x0043550a;
  }
  if (*(uint *)(param_2 + 0x86) < *(uint *)(param_2 + 2)) {
    if ((*(uint *)(param_2 + 0x86) & 3) == 0) {
      if (*(uint *)(param_2 + 2) <= *(uint *)(param_2 + 0x8a)) {
        puVar16 = &UNK_0018b15e;
        goto code_r0x004354f1;
      }
      if ((*(uint *)(param_2 + 0x8a) & 3) != 0) {
        puVar16 = &UNK_00161722;
        goto code_r0x004354d5;
      }
      uVar1 = *(uint *)(param_2 + 4);
      uVar14 = (ulong)uVar1;
      alStack_180[3] = 0;
      alStack_180[4] = 0;
      alStack_180[1] = 0;
      alStack_180[2] = 0;
      alStack_180[5] = 0;
      _ZN7android16SortedVectorImplC2Emj(alStack_180 + 1,0x10,0);
      alStack_180[1] = 0x99fa50;
      if (*(long *)(param_3 + 0x168) == 0) {
        if (0xff < uVar1) {
          __android_log_assert(0,&UNK_0015b3df,&UNK_001726dc);
          goto code_r0x0043562c;
        }
code_r0x00435634:
        if ((((int)uVar14 == 0) || (param_5 != '\0')) || (((int)uVar14 == 0x7f & param_4) != 0)) {
          uVar14 = (ulong)*(byte *)(param_1 + 0x1e8);
          *(byte *)(param_1 + 0x1e8) = *(byte *)(param_1 + 0x1e8) + 1;
          uVar6 = 1;
        }
        else {
          uVar6 = 0;
        }
        alStack_180[0] = 0;
        plVar18 = (long *)_Znwm(0x288);
        *plVar18 = param_1;
        plVar18[1] = param_3;
        plVar18[2] = (long)param_2;
        _ZN7android13ResStringPoolC1Ev();
        _ZN7android13ResStringPoolC1Ev(plVar18 + 0x29);
        plVar18[0x4f] = 0;
        *(undefined1 *)(plVar18 + 0x50) = 0;
        if (*(short *)(plVar18[2] + 2) == 0x120) {
          plVar18[0x4f] = (ulong)*(uint *)(plVar18[2] + 0x11c);
        }
        lStack_1a0 = (ulong)*(uint *)(param_2 + 0x86) + (long)param_2;
        uStack_198 = 0;
        uStack_190 = 0;
        plStack_188 = plVar18;
        uVar7 = _ZN7android13ResStringPool5setToENS_5incfs7map_ptrIvLb0EEEmb
                          (plVar18 + 3,*(long *)(param_3 + 0x20) - lStack_1a0,0);
        if ((int)uVar7 == 0) {
          lStack_1b8 = (ulong)*(uint *)(param_2 + 0x8a) + (long)param_2;
          uStack_1b0 = 0;
          uStack_1a8 = 0;
          uVar7 = _ZN7android13ResStringPool5setToENS_5incfs7map_ptrIvLb0EEEmb
                            (plStack_188 + 0x29,*(long *)(param_3 + 0x20) - lStack_1b8,0);
          if ((int)uVar7 == 0) {
            uVar7 = (ulong)*(byte *)(param_1 + 0xe8 + uVar14);
            if (uVar7 == 0) {
              uVar2 = *(undefined8 *)(param_1 + 0xd0);
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
              auStack_138 = (undefined1  [8])0x0;
              uStack_130 = 0;
              uVar5 = param_2[6];
              puVar13 = (undefined8 *)auStack_138;
              if (uVar5 != 0) {
                uVar7 = 0;
                do {
                  uVar12 = uVar7;
                  *(ushort *)((long)auStack_138 + uVar12) = uVar5;
                  uVar5 = *(ushort *)((long)param_2 + uVar12 + 0xe);
                  if (uVar5 == 0) break;
                  uVar7 = uVar12 + 2;
                } while (uVar12 < 0xfc);
                puVar13 = (undefined8 *)((long)auStack_138 + uVar12 + 2);
              }
              *(undefined2 *)puVar13 = 0;
              lVar8 = _Znwm(0x2a0);
              _ZN7android8String16C2EPKDs(&puStack_1c0,auStack_138);
              _ZN7android8ResTable12PackageGroupC2EPS0_RKNS_8String16Ejbbb
                        (lVar8,param_1,&puStack_1c0,uVar14,param_4,param_5,uVar6);
              alStack_180[0] = lVar8;
              _ZN7android8String16D2Ev(&puStack_1c0);
              plVar18 = plStack_188;
              if (alStack_180[0] == 0) {
                if (plStack_188 != (long *)0x0) {
                  _ZN7android13ResStringPoolD1Ev(plStack_188 + 0x29);
                  _ZN7android13ResStringPoolD1Ev(plVar18 + 3);
                  _ZdaPvSt11align_val_t(plVar18,0x288);
                }
                uVar7 = 0xfffffff4;
              }
              else {
                uVar7 = _ZN7android10VectorImpl3addEPKv(param_1 + 0xc0,alStack_180);
                if (-1 < (int)uVar7) {
                  *(char *)(param_1 + 0xe8 + uVar14) = (char)uVar2 + '\x01';
                  lVar8 = *(long *)(param_1 + 0xd0);
                  if (lVar8 != 0) {
                    lVar19 = 0;
                    do {
                      _ZN7android15DynamicRefTable10addMappingERKNS_8String16Eh
                                (*(long *)(*(long *)(param_1 + 200) + lVar19 * 8) + 0x148,
                                 alStack_180[0] + 8,*(undefined1 *)(alStack_180[0] + 0x10));
                      lVar19 = lVar19 + 1;
                    } while (lVar8 != lVar19);
                  }
                  goto code_r0x00435a41;
                }
              }
            }
            else {
              alStack_180[0] = *(long *)(*(long *)(param_1 + 200) + -8 + uVar7 * 8);
              if (alStack_180[0] == 0) {
                *(undefined4 *)(param_1 + 0x50) = 0x80000000;
                uVar7 = 0x80000000;
                goto code_r0x0043580c;
              }
code_r0x00435a41:
              uVar7 = _ZN7android10VectorImpl3addEPKv(alStack_180[0] + 0x18,&plStack_188);
              if (-1 < (int)uVar7) {
                uVar14 = (ulong)*(uint *)(param_2 + 2);
                uVar7 = 0;
                if ((long)(ulong)param_2[1] <= (long)(uVar14 - 8)) {
                  puVar20 = (ushort *)((ulong)param_2[1] + (long)param_2);
                  while( true ) {
                    uVar7 = 0;
                    uVar1 = *(uint *)(puVar20 + 2);
                    if ((ushort *)((long)param_2 + (uVar14 - uVar1)) < puVar20) break;
                    switch(*puVar20) {
                    case 0x201:
                      uStack_130 = 0;
                      uStack_128 = 0;
                      puStack_1c0 = puVar20;
                      auStack_138 = (undefined1  [8])puVar20;
                      uVar7 = func_0x0042d730(auStack_138,0x18,&UNK_00169917);
                      if ((int)uVar7 == 0) {
                        sVar10 = ((*(byte *)((long)puStack_1c0 + 9) & 2) == 0) + 1;
                        if ((*(byte *)((long)puStack_1c0 + 9) & 1) != 0) {
                          sVar10 = 2;
                        }
                        uVar7 = ((ulong)*(uint *)(puStack_1c0 + 6) << sVar10) +
                                (ulong)puStack_1c0[1];
                        if (*(uint *)(puStack_1c0 + 2) < uVar7) {
                          __android_log_print(5,&UNK_0015b3df,&UNK_00169925,uVar7);
                        }
                        else if (*(uint *)(puStack_1c0 + 6) == 0) {
                          if ((char)puStack_1c0[4] != '\0') goto code_r0x00435b10;
code_r0x004360d6:
                          __android_log_print(5,&UNK_0015b3df,&UNK_001869d4);
                        }
                        else if ((ulong)*(uint *)(puStack_1c0 + 2) - 8 <
                                 (ulong)*(uint *)(puStack_1c0 + 8)) {
                          __android_log_print(5,&UNK_0015b3df,&UNK_00183867);
                        }
                        else {
                          cVar17 = (char)puStack_1c0[4];
                          if (cVar17 == '\0') goto code_r0x004360d6;
                          auStack_138[0] = cVar17;
                          uStack_130 = 0;
                          lVar8 = _ZNK7android16SortedVectorImpl7indexOfEPKv
                                            (alStack_180 + 1,auStack_138);
                          if (lVar8 < 0) {
                            if (*(long *)(param_3 + 0x168) != 0) goto code_r0x00435b10;
                          }
                          else {
                            pcVar3 = *(char **)(alStack_180[2] + 8 + lVar8 * 0x10);
                            if (pcVar3 == (char *)0x0) {
                              cVar17 = '\0';
                            }
                            else {
                              cVar17 = *pcVar3;
                            }
                          }
                          lVar8 = _ZN7android15ByteBucketArrayINS_6VectorIPNS_8ResTable4TypeEEEE10editItemAtEm
                                            (alStack_180[0] + 0x40,cVar17 + -1);
                          if (*(long *)(lVar8 + 0x10) != 0) {
                            plVar18 = (long *)_ZN7android10VectorImpl16editItemLocationEm
                                                        (lVar8,*(long *)(lVar8 + 0x10) + -1);
                            if (*(long **)(*plVar18 + 8) == plStack_188) {
                              _ZN7android10VectorImpl3addEPKv(*plVar18 + 0x30,&puStack_1c0);
                              goto code_r0x00435b10;
                            }
                          }
                          __android_log_print(6,&UNK_0015b3df,&UNK_00157bb0,(char)puStack_1c0[4]);
                        }
                        uVar7 = 0x80000001;
                        *(undefined4 *)(param_1 + 0x50) = 0x80000001;
                      }
                      else {
                        *(int *)(param_1 + 0x50) = (int)uVar7;
                      }
                      goto code_r0x0043580c;
                    case 0x202:
                      uStack_130 = 0;
                      uStack_128 = 0;
                      auStack_138 = (undefined1  [8])puVar20;
                      uVar7 = func_0x0042d730(auStack_138,0x10,&UNK_001726f4);
                      if ((int)uVar7 != 0) goto code_r0x0043605a;
                      uVar7 = (ulong)*(uint *)(puVar20 + 6);
                      if ((uVar7 < 0x20000000) &&
                         ((ulong)puVar20[1] + uVar7 * 4 <= (ulong)*(uint *)(puVar20 + 2))) {
                        cVar17 = (char)puVar20[4];
                        if (cVar17 == '\0') {
                          __android_log_print(5,&UNK_0015b3df,&UNK_001869d4);
                          goto code_r0x004360c4;
                        }
                        if (uVar7 != 0) {
                          auStack_138[0] = cVar17;
                          uStack_130 = 0;
                          lVar8 = _ZNK7android16SortedVectorImpl7indexOfEPKv
                                            (alStack_180 + 1,auStack_138);
                          if (lVar8 < 0) {
                            if (*(long *)(param_3 + 0x168) != 0) goto code_r0x00435b10;
                          }
                          else {
                            pcVar3 = *(char **)(alStack_180[2] + 8 + lVar8 * 0x10);
                            if (pcVar3 == (char *)0x0) {
                              cVar17 = '\0';
                            }
                            else {
                              cVar17 = *pcVar3;
                            }
                          }
                          lVar19 = _ZN7android15ByteBucketArrayINS_6VectorIPNS_8ResTable4TypeEEEE10editItemAtEm
                                             (alStack_180[0] + 0x40,cVar17 + -1);
                          if (((*(long *)(lVar19 + 0x10) != 0) && (lVar8 < 0)) &&
                             (*(ulong *)(**(long **)(lVar19 + 8) + 0x10) != uVar7)) {
                            __android_log_print(5,&UNK_0015b3df,&UNK_0015cb67,uVar7);
                          }
                          puVar9 = (ushort *)_Znwm(0x58);
                          *(long *)puVar9 = param_3;
                          *(long **)(puVar9 + 4) = plStack_188;
                          *(ulong *)(puVar9 + 8) = uVar7;
                          puVar9[0xc] = 0;
                          puVar9[0xd] = 0;
                          puVar9[0xe] = 0;
                          puVar9[0xf] = 0;
                          puVar9[0x10] = 0;
                          puVar9[0x11] = 0;
                          puVar9[0x12] = 0;
                          puVar9[0x13] = 0;
                          puVar9[0x14] = 0;
                          puVar9[0x15] = 0;
                          puVar9[0x16] = 0;
                          puVar9[0x17] = 0;
                          _ZN7android10VectorImplC2Emj(puVar9 + 0x18,8,7);
                          puVar9[0x18] = 64000;
                          puVar9[0x19] = 0x99;
                          puVar9[0x1a] = 0;
                          puVar9[0x1b] = 0;
                          *(ushort **)(puVar9 + 0xc) = puVar20;
                          *(ulong *)(puVar9 + 0x10) = (ulong)puVar20[1] + (long)puVar20;
                          if (-1 < lVar8) {
                            *(long *)(puVar9 + 0x14) = *(long *)(alStack_180[2] + 8 + lVar8 * 0x10);
                          }
                          auStack_138 = (undefined1  [8])puVar9;
                          _ZN7android10VectorImpl3addEPKv(lVar19,auStack_138);
                          bVar11 = (byte)*(undefined4 *)(alStack_180[0] + 0xc0);
                          bVar15 = (byte)*(undefined4 *)(puVar20 + 4);
                          if ((byte)*(undefined4 *)(puVar20 + 4) < bVar11) {
                            bVar15 = bVar11;
                          }
                          *(byte *)(alStack_180[0] + 0xc0) = bVar15;
                        }
                        goto code_r0x00435b10;
                      }
                      __android_log_print(5,&UNK_0015b3df,&UNK_00188215);
code_r0x004360c4:
                      *(undefined4 *)(param_1 + 0x50) = 0x80000001;
                      uVar7 = 0x80000001;
                      goto code_r0x0043580c;
                    case 0x203:
                      if (*(long *)(alStack_180[0] + 0x268) == 0) {
                        uStack_130 = 0;
                        uStack_128 = 0;
                        auStack_138 = (undefined1  [8])puVar20;
                        uVar7 = func_0x0042d730(auStack_138,0xc,&UNK_00188256);
                        if (((int)uVar7 != 0) ||
                           (uVar7 = _ZN7android15DynamicRefTable4loadEPKNS_19ResTable_lib_headerE
                                              (alStack_180[0] + 0x148,puVar20), (int)uVar7 != 0))
                        goto code_r0x0043605a;
                        lVar8 = *(long *)(param_1 + 0xd0);
                        if (lVar8 != 0) {
                          lVar19 = 0;
                          do {
                            lVar4 = *(long *)(*(long *)(param_1 + 200) + lVar19 * 8);
                            _ZN7android15DynamicRefTable10addMappingERKNS_8String16Eh
                                      (alStack_180[0] + 0x148,lVar4 + 8,
                                       *(undefined1 *)(lVar4 + 0x10));
                            lVar19 = lVar19 + 1;
                          } while (lVar8 != lVar19);
                        }
                      }
                      else {
                        __android_log_print(5,&UNK_0015b3df,&UNK_00177478);
                      }
                      goto code_r0x00435b10;
                    case 0x204:
                      *(undefined1 *)(plStack_188 + 0x50) = 1;
                    }
                    uStack_130 = 0;
                    uStack_128 = 0;
                    auStack_138 = (undefined1  [8])puVar20;
                    uVar7 = func_0x0042d730(auStack_138,8,&UNK_0015feb3);
                    if ((int)uVar7 != 0) {
code_r0x0043605a:
                      *(int *)(param_1 + 0x50) = (int)uVar7;
                      break;
                    }
code_r0x00435b10:
                    puVar20 = (ushort *)((long)puVar20 + (ulong)uVar1);
                    uVar7 = 0;
                    if ((ushort *)((long)param_2 + (uVar14 - 8)) < puVar20) break;
                  }
                }
                goto code_r0x0043580c;
              }
            }
            *(int *)(param_1 + 0x50) = (int)uVar7;
            goto code_r0x0043580c;
          }
        }
        lVar8 = alStack_180[0];
        if (alStack_180[0] != 0) {
          _ZN7android8ResTable12PackageGroupD2Ev(alStack_180[0]);
          _ZdaPvSt11align_val_t(lVar8,0x2a0);
        }
        plVar18 = plStack_188;
        if (plStack_188 != (long *)0x0) {
          _ZN7android13ResStringPoolD1Ev(plStack_188 + 0x29);
          _ZN7android13ResStringPoolD1Ev(plVar18 + 3);
          _ZdaPvSt11align_val_t(plVar18,0x288);
        }
        *(int *)(param_1 + 0x50) = (int)uVar7;
      }
      else {
        auStack_138 = (undefined1  [8])((ulong)auStack_138 & 0xffffffffffffff00);
        uVar7 = _ZN7android10parseIdmapEPKvmPhPNS_11KeyedVectorIhNS_12IdmapEntriesEEE
                          (*(long *)(param_3 + 0x168),*(undefined8 *)(param_3 + 0x170),auStack_138,
                           alStack_180 + 1);
        if ((int)uVar7 == 0) {
code_r0x0043562c:
          uVar14 = (ulong)auStack_138 & 0xff;
          goto code_r0x00435634;
        }
        __android_log_print(5,&UNK_0015b3df,&UNK_0017bd9c);
        *(int *)(param_1 + 0x50) = (int)uVar7;
      }
code_r0x0043580c:
      alStack_180[1] = 0x99fa50;
      plVar18 = alStack_180 + 1;
      _ZN7android10VectorImpl13finish_vectorEv(plVar18);
      _ZN7android16SortedVectorImplD1Ev();
      goto code_r0x0043550a;
    }
    puVar16 = &UNK_00184dca;
code_r0x004354d5:
    plVar18 = (long *)0x5;
    __android_log_print(5,&UNK_0015b3df,puVar16);
  }
  else {
    puVar16 = &UNK_00184d8a;
code_r0x004354f1:
    plVar18 = (long *)0x5;
    __android_log_print(5,&UNK_0015b3df,puVar16);
  }
  *(undefined4 *)(param_1 + 0x50) = 0x80000001;
  uVar7 = 0x80000001;
code_r0x0043550a:
  if (*(long *)(in_FS_OFFSET + 0x28) != lStack_38) {
    func_0x0099bd00();
    return (ulong)*(uint *)(plVar18 + 10);
  }
  return uVar7;
}


