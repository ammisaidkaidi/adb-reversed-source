// Function: _ZNK7android8ResTable15getResourceNameEjbPNS0_13resource_nameE
// Address: 00436160
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long * _ZNK7android8ResTable15getResourceNameEjbPNS0_13resource_nameE
                 (long *param_1,long *param_2,char param_3,long *param_4,long *param_5,
                 undefined8 *param_6)

{
  long *plVar1;
  uint uVar2;
  short *psVar3;
  long lVar4;
  long lVar5;
  bool bVar6;
  char cVar7;
  ushort uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  undefined1 *puVar13;
  ushort *puVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  uint extraout_EDX;
  uint uVar18;
  undefined *puVar19;
  long *unaff_RBX;
  undefined1 *puVar20;
  ulong uVar21;
  long *plVar22;
  ulong uVar23;
  long lVar24;
  ulong uVar25;
  uint uVar26;
  ushort *puVar27;
  long lVar28;
  long *plVar29;
  long in_FS_OFFSET;
  long lStack_200;
  long lStack_1c8;
  long *plStack_1a8;
  uint uStack_190;
  uint uStack_18c;
  uint uStack_188;
  byte bStack_181;
  long lStack_180;
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
  long lStack_100;
  long *plStack_f8;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  int iStack_b0;
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
  long *plStack_48;
  ulong uStack_40;
  long *plStack_38;
  ulong uStack_30;
  ulong uStack_28;
  
  uStack_28 = *(ulong *)(in_FS_OFFSET + 0x28);
  if ((int)param_1[10] == 0) {
    param_5 = (long *)(ulong)*(byte *)((long)param_1 + ((ulong)param_2 >> 0x18 & 0xff) + 0xe8);
    if (param_5 == (long *)0x0) {
      if ((uint)param_2 < 0x1000000) {
        puVar19 = &UNK_0017d9aa;
        goto code_r0x0043629d;
      }
      goto code_r0x004362ae;
    }
    uVar16 = (ulong)param_2 >> 0x10;
    if (((ulong)param_2 & 0xff0000) == 0) {
      puVar19 = &UNK_001741ff;
code_r0x0043629d:
      param_1 = (long *)0x5;
      uVar16 = (ulong)param_2 & 0xffffffff;
      param_2 = (long *)&UNK_0015b3df;
      __android_log_print(5,&UNK_0015b3df,puVar19,uVar16);
      goto code_r0x004362ae;
    }
    param_6 = (undefined8 *)param_1[0x19];
    unaff_RBX = (long *)param_6[(long)((long)param_5 + -1)];
    if (unaff_RBX == (long *)0x0) {
      puVar19 = &UNK_00181d43;
      goto code_r0x0043629d;
    }
    uVar15 = (ulong)param_2 & 0xffff;
    plStack_38 = (long *)0x0;
    uStack_30 = 0;
    plStack_48 = (long *)0x0;
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
    param_6 = &uStack_a8;
    param_5 = (long *)0x0;
    param_2 = unaff_RBX;
    iVar9 = _ZNK7android8ResTable8getEntryEPKNS0_12PackageGroupEiiPKNS_15ResTable_configEPNS0_5EntryE
                      (param_1,unaff_RBX,((uint)uVar16 & 0xff) - 1,uVar15);
    plVar29 = (long *)0x0;
    plStack_1a8 = param_1;
    if (iVar9 == 0) {
      plVar29 = unaff_RBX + 1;
      unaff_RBX = unaff_RBX + 1;
      *param_4 = *plVar29;
      param_1 = unaff_RBX;
      lVar12 = _ZNK7android8String164sizeEv();
      param_4[1] = lVar12;
      if (param_3 == '\0') {
        param_4[3] = 0;
        param_4[6] = 0;
code_r0x00436345:
        param_2 = plStack_48;
        if (plStack_48 != (long *)0x0) {
          param_1 = &lStack_c8;
          (**(code **)(*plStack_48 + 0x10))(param_1,plStack_48,uStack_40 & 0xffffffff);
          if (iStack_b0 == 0) {
            param_4[4] = lStack_b8;
            param_4[2] = lStack_c0;
            if (lStack_c0 == 0) goto code_r0x004362ae;
            lVar12 = param_4[6];
            goto code_r0x00436397;
          }
        }
        param_4[2] = 0;
        goto code_r0x004362ae;
      }
      if (plStack_48 == (long *)0x0) {
code_r0x0043625d:
        lVar12 = 0;
      }
      else {
        param_1 = &lStack_c8;
        (**(code **)(*plStack_48 + 0x18))(param_1,plStack_48,uStack_40 & 0xffffffff);
        if (iStack_b0 != 0) goto code_r0x0043625d;
        param_4[4] = lStack_b8;
        lVar12 = lStack_c0;
      }
      param_4[3] = lVar12;
      param_2 = plStack_38;
      if (plStack_38 == (long *)0x0) {
code_r0x0043631e:
        lVar12 = 0;
      }
      else {
        param_1 = &lStack_c8;
        (**(code **)(*plStack_38 + 0x18))(param_1,plStack_38,uStack_30 & 0xffffffff);
        if (iStack_b0 != 0) goto code_r0x0043631e;
        param_4[7] = lStack_b8;
        lVar12 = lStack_c0;
      }
      param_4[6] = lVar12;
      if (param_4[3] == 0) goto code_r0x00436345;
code_r0x00436397:
      if (lVar12 == 0) {
        param_2 = plStack_38;
        if (plStack_38 != (long *)0x0) {
          param_1 = &lStack_c8;
          (**(code **)(*plStack_38 + 0x10))(param_1,plStack_38,uStack_30 & 0xffffffff);
          if (iStack_b0 == 0) {
            param_4[7] = lStack_b8;
            param_4[5] = lStack_c0;
            if (lStack_c0 == 0) goto code_r0x004362ae;
            goto code_r0x0043639c;
          }
        }
        param_4[5] = 0;
        goto code_r0x004362ae;
      }
code_r0x0043639c:
      plVar29 = (long *)0x1;
      plStack_1a8 = param_1;
    }
  }
  else {
code_r0x004362ae:
    plVar29 = (long *)0x0;
    plStack_1a8 = param_1;
  }
  uVar16 = *(ulong *)(in_FS_OFFSET + 0x28);
  if (uVar16 == uStack_28) {
    return plVar29;
  }
  func_0x0099bd00();
  lStack_100 = *(long *)(in_FS_OFFSET + 0x28);
  if ((extraout_EDX < 0x100) && (param_2[((ulong)(long)(int)extraout_EDX >> 4) + 8] != 0)) {
    puVar20 = (undefined1 *)
              (param_2[((ulong)(long)(int)extraout_EDX >> 4) + 8] +
              (ulong)(extraout_EDX & 0xf) * 0x28);
    lVar12 = *(long *)(puVar20 + 0x10);
  }
  else {
    puVar20 = _ZN7android15ByteBucketArrayINS_6VectorIPNS_8ResTable4TypeEEEE8default_E;
    lVar12 = _ZN7android15ByteBucketArrayINS_6VectorIPNS_8ResTable4TypeEEEE8default_E._16_8_;
  }
  plStack_f8 = unaff_RBX;
  if (lVar12 != 0) {
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_140 = 0;
    uStack_138 = 0;
    uVar15 = *(ulong *)(puVar20 + 0x10);
    uStack_188 = 0xffffffb5;
    plVar29 = param_2;
    if (uVar15 == 0) goto code_r0x00436b4e;
    bStack_181 = (byte)extraout_EDX;
    uVar26 = (uint)uVar16;
    puVar19 = (undefined *)((long)plStack_1a8 + 0x54);
    plVar22 = plStack_1a8 + 5;
    iVar9 = -1;
    lStack_1c8 = 0;
    lStack_200 = 0;
    uStack_18c = 0;
    uVar17 = 0;
    plStack_1a8 = plVar22;
    do {
      lVar12 = *(long *)(*(long *)(puVar20 + 8) + uVar17 * 8);
      psVar3 = *(short **)(lVar12 + 0x28);
      if ((psVar3 == (short *)0x0) || (*psVar3 == 0)) {
        bVar6 = false;
        uStack_190 = extraout_EDX;
        uVar18 = uVar26;
code_r0x004365e4:
        uVar21 = (ulong)(int)uVar18;
        if (uVar21 < *(ulong *)(lVar12 + 0x10)) {
          if (*(long *)(lVar12 + 0x20) == 0) {
            uStack_18c = 0xffffffff;
          }
          else {
            uStack_18c = uStack_18c | *(uint *)(*(long *)(lVar12 + 0x20) + uVar21 * 4);
          }
          lVar24 = lVar12 + 0x30;
          if (param_5 == (long *)0x0) {
            plStack_1a8 = (long *)0x0;
          }
          else {
            plVar29 = param_5;
            iVar10 = func_0x0099bf90(puVar19,param_5,0x40);
            if (iVar10 == 0) {
              func_0x0099c500(plVar22);
              if ((extraout_EDX < 0x100) &&
                 (param_2[((ulong)(long)(int)extraout_EDX >> 4) + 0x19] != 0)) {
                puVar13 = (undefined1 *)
                          (param_2[((ulong)(long)(int)extraout_EDX >> 4) + 0x19] +
                          (ulong)((extraout_EDX & 0xf) * 0x30));
                if (*(ulong *)(puVar13 + 0x18) <= uVar17) goto code_r0x0043673e;
code_r0x004366fc:
                lVar4 = *(long *)(*(long *)(puVar13 + 0x10) + uVar17 * 0x10);
                if (lVar4 == 0) goto code_r0x0043673e;
                plStack_1a8 = *(long **)(*(long *)(puVar13 + 0x10) + uVar17 * 0x10 + 8);
                lVar24 = lVar4;
                if (plStack_1a8 == (long *)0x0) {
                  plStack_1a8 = (long *)0x0;
                }
                else {
                  LOCK();
                  plStack_1a8[1] = plStack_1a8[1] + 1;
                  UNLOCK();
                }
              }
              else {
                puVar13 = _ZN7android15ByteBucketArrayINS_8ResTable14TypeCacheEntryEE8default_E;
                if (uVar17 < (ulong)_ZN7android15ByteBucketArrayINS_8ResTable14TypeCacheEntryEE8default_E
                                    ._24_8_) goto code_r0x004366fc;
code_r0x0043673e:
                plStack_1a8 = (long *)0x0;
              }
              func_0x0099c510(plVar22);
            }
            else {
              plStack_1a8 = (long *)0x0;
            }
          }
          lVar4 = *(long *)(lVar24 + 0x10);
          if (lVar4 != 0) {
            lVar28 = 0;
            iVar10 = iVar9;
            do {
              lVar5 = *(long *)(*(long *)(lVar24 + 8) + lVar28 * 8);
              if (lVar5 != 0) {
                uStack_150 = 0;
                uStack_148 = 0;
                uStack_160 = 0;
                uStack_158 = 0;
                uStack_170 = 0;
                uStack_168 = 0;
                lStack_180 = 0;
                uStack_178 = 0;
                plVar29 = (long *)(lVar5 + 0x14);
                uVar25 = (ulong)*(uint *)(lVar5 + 0x14);
                if (uVar25 < 0x40) {
                  func_0x0099c110(&lStack_180,plVar29,uVar25,0x40);
                  plVar29 = (long *)0x0;
                  func_0x0099bdb0((long)&lStack_180 + uVar25,0,0x40 - uVar25);
                }
                else {
                  uStack_178 = *(undefined8 *)(lVar5 + 0x1c);
                  uStack_170 = *(undefined8 *)(lVar5 + 0x24);
                  uStack_168 = *(undefined8 *)(lVar5 + 0x2c);
                  uStack_160 = *(undefined8 *)(lVar5 + 0x34);
                  uStack_158 = *(undefined8 *)(lVar5 + 0x3c);
                  uStack_150 = *(undefined8 *)(lVar5 + 0x44);
                  uStack_148 = *(undefined8 *)(lVar5 + 0x4c);
                  lStack_180 = (ulong)*(uint *)(lVar5 + 0x18) << 0x20;
                }
                lStack_180 = CONCAT44(lStack_180._4_4_,0x40);
                if ((param_5 == (long *)0x0) ||
                   (plVar29 = param_5,
                   cVar7 = _ZNK7android15ResTable_config5matchERKS0_(&lStack_180), cVar7 != '\0')) {
                  puVar14 = (ushort *)((ulong)*(ushort *)(lVar5 + 2) + lVar5);
                  uVar2 = *(uint *)(lVar5 + 0xc);
                  puVar27 = puVar14;
                  uVar25 = (ulong)uVar2;
                  if ((*(byte *)(lVar5 + 9) & 1) == 0) {
                    if (uVar18 < uVar2) {
                      if ((*(byte *)(lVar5 + 9) & 2) == 0) {
                        iVar9 = *(int *)(puVar14 + uVar21 * 2);
                        if (iVar9 != -1) {
joined_r0x00436907:
                          if (lStack_1c8 != 0) {
                            plVar29 = &uStack_140;
                            cVar7 = _ZNK7android15ResTable_config12isBetterThanERKS0_PS1_
                                              (&lStack_180,plVar29,param_5);
                            if (cVar7 == '\0') {
                              if (bVar6) {
                                plVar29 = &uStack_140;
                                iVar11 = _ZNK7android15ResTable_config7compareERKS0_(&lStack_180);
                                if (iVar11 == 0) goto code_r0x0043692e;
                              }
                              goto code_r0x00436790;
                            }
                          }
code_r0x0043692e:
                          uStack_130 = uStack_170;
                          uStack_128 = uStack_168;
                          uStack_120 = uStack_160;
                          uStack_118 = uStack_158;
                          uStack_110 = uStack_150;
                          uStack_108 = uStack_148;
                          uStack_140 = lStack_180;
                          uStack_138 = uStack_178;
                          lStack_200 = *(long *)(lVar12 + 8);
                          bStack_181 = (byte)uStack_190;
                          lStack_1c8 = lVar5;
                          iVar10 = iVar9;
                          if (param_5 == (long *)0x0) break;
                        }
                      }
                      else if (puVar14[uVar21] != 0xffff) {
                        iVar9 = (uint)puVar14[uVar21] << 2;
                        goto joined_r0x00436907;
                      }
                    }
                  }
                  else {
                    while (uVar25 != 0) {
                      uVar23 = uVar25 >> 1;
                      if (puVar27[uVar23 * 2] < (ushort)uVar18) {
                        puVar27 = puVar27 + uVar23 * 2 + 2;
                        uVar23 = ~uVar23 + uVar25;
                      }
                      plVar29 = (long *)0x0;
                      uVar25 = uVar23;
                    }
                    if ((puVar27 != puVar14 + (ulong)uVar2 * 2) && (uVar18 == *puVar27)) {
                      iVar9 = (uint)puVar27[1] << 2;
                      goto joined_r0x00436907;
                    }
                  }
                }
              }
code_r0x00436790:
              lVar28 = lVar28 + 1;
              iVar9 = iVar10;
            } while (lVar28 != lVar4);
          }
          if (plStack_1a8 != (long *)0x0) {
            LOCK();
            plVar1 = plStack_1a8 + 1;
            lVar12 = *plVar1;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (lVar12 == 0) {
              (**(code **)(*plStack_1a8 + 0x10))();
              _ZNSt3__119__shared_weak_count14__release_weakEv();
            }
          }
        }
        else {
          plStack_1a8 = (long *)0x5;
          plVar29 = (long *)&UNK_0015b3df;
          __android_log_print(5,&UNK_0015b3df,&UNK_00159945,
                              (int)param_2[2] * 0x1000000 +
                              (uVar26 & 0xffff | extraout_EDX * 0x10000 + 0x10000 & 0xff0000),
                              uVar16 & 0xffffffff);
        }
      }
      else if ((((ushort)psVar3[3] <= (ushort)(uVar16 & 0xffffffff)) &&
               (uVar18 = uVar26 - (ushort)psVar3[3], (ushort)uVar18 < (ushort)psVar3[2])) &&
              (*(uint *)(psVar3 + (ulong)(uVar18 & 0xffff) * 2 + 4) != 0xffffffff)) {
        uStack_190 = (ushort)psVar3[1] - 1;
        bVar6 = true;
        uVar18 = *(uint *)(psVar3 + (ulong)(uVar18 & 0xffff) * 2 + 4) & 0xffff;
        goto code_r0x004365e4;
      }
      uVar17 = uVar17 + 1;
    } while (uVar17 != uVar15);
    if (lStack_1c8 == 0) goto code_r0x00436b4e;
    uVar26 = iVar9 + *(int *)(lStack_1c8 + 0x10);
    uVar16 = (ulong)uVar26;
    if ((ulong)*(uint *)(lStack_1c8 + 4) - 8 < uVar16) {
      param_2 = (long *)&UNK_0015b3df;
      plStack_1a8 = (long *)0x5;
      __android_log_print(5,&UNK_0015b3df,&UNK_00157b7a,uVar16);
    }
    else if ((uVar26 & 3) == 0) {
      uVar8 = 8;
      if ((*(byte *)(lStack_1c8 + 2 + uVar16) & 8) == 0) {
        uVar8 = *(ushort *)(lStack_1c8 + uVar16);
      }
      if (7 < uVar8) {
        uStack_188 = 0;
        if (param_6 != (undefined8 *)0x0) {
          puVar27 = (ushort *)(uVar16 + lStack_1c8);
          param_6[8] = puVar27;
          *(undefined4 *)param_6 = (undefined4)uStack_140;
          *(undefined4 *)((long)param_6 + 4) = uStack_140._4_4_;
          *(undefined4 *)(param_6 + 1) = (undefined4)uStack_138;
          *(undefined4 *)((long)param_6 + 0xc) = uStack_138._4_4_;
          *(undefined4 *)(param_6 + 2) = (undefined4)uStack_130;
          *(undefined4 *)((long)param_6 + 0x14) = uStack_130._4_4_;
          *(undefined4 *)(param_6 + 3) = (undefined4)uStack_128;
          *(undefined4 *)((long)param_6 + 0x1c) = uStack_128._4_4_;
          *(undefined4 *)(param_6 + 4) = (undefined4)uStack_120;
          *(undefined4 *)((long)param_6 + 0x24) = uStack_120._4_4_;
          *(undefined4 *)(param_6 + 5) = (undefined4)uStack_118;
          *(undefined4 *)((long)param_6 + 0x2c) = uStack_118._4_4_;
          *(undefined4 *)(param_6 + 6) = (undefined4)uStack_110;
          *(undefined4 *)((long)param_6 + 0x34) = uStack_110._4_4_;
          *(undefined4 *)(param_6 + 7) = (undefined4)uStack_108;
          *(undefined4 *)((long)param_6 + 0x3c) = uStack_108._4_4_;
          param_6[9] = lStack_1c8;
          *(uint *)(param_6 + 10) = uStack_18c;
          param_6[0xb] = lStack_200;
          _ZN7android13StringPoolRefC2EPKNS_13ResStringPoolEj
                    (&lStack_180,lStack_200 + 0x18,(uint)bStack_181 - *(int *)(lStack_200 + 0x278));
          *(undefined4 *)(param_6 + 0xd) = (undefined4)uStack_178;
          param_6[0xc] = lStack_180;
          plVar29 = (long *)(lStack_200 + 0x148);
          if ((puVar27[1] & 8) == 0) {
            uVar26 = *(uint *)(puVar27 + 2);
          }
          else {
            uVar26 = (uint)*puVar27;
          }
          plStack_1a8 = &lStack_180;
          _ZN7android13StringPoolRefC2EPKNS_13ResStringPoolEj(plStack_1a8,plVar29,uVar26);
          *(undefined4 *)(param_6 + 0xf) = (undefined4)uStack_178;
          param_6[0xe] = lStack_180;
        }
        goto code_r0x00436b4e;
      }
      param_2 = (long *)&UNK_0015b3df;
      plStack_1a8 = (long *)0x5;
      __android_log_print(5,&UNK_0015b3df,&UNK_00184d63,uVar8);
    }
    else {
      param_2 = (long *)&UNK_0015b3df;
      plStack_1a8 = (long *)0x5;
      __android_log_print(5,&UNK_0015b3df,&UNK_00177443,uVar16);
    }
  }
  uStack_188 = 0x80000001;
  plVar29 = param_2;
code_r0x00436b4e:
  if (*(long *)(in_FS_OFFSET + 0x28) != lStack_100) {
    func_0x0099bd00();
    plVar22 = (long *)*plVar29;
    if (plVar22 == (long *)0x0) {
      *(undefined4 *)((long)plStack_1a8 + 0xc) = 0;
      *(undefined4 *)(plStack_1a8 + 3) = 1;
    }
    else {
      (**(code **)(*plVar22 + 0x18))(plStack_1a8,plVar22,(int)plVar29[1]);
    }
    return plStack_1a8;
  }
  return (long *)(ulong)uStack_188;
}


