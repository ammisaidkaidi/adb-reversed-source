// Function: _ZNK7android8ResTable17getConfigurationsEPNS_6VectorINS_15ResTable_configEEEbbb
// Address: 0043a850
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Type propagation algorithm not settling */

void _ZNK7android8ResTable17getConfigurationsEPNS_6VectorINS_15ResTable_configEEEbbb
               (long param_1,long param_2,undefined4 param_3,undefined *param_4,undefined4 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined1 uVar11;
  undefined *puVar12;
  char extraout_DL;
  undefined4 extraout_EDX;
  ulong uVar13;
  undefined *puVar14;
  long lVar15;
  ulong uVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  ulong *unaff_R12;
  ulong *puVar22;
  ulong uVar24;
  undefined **unaff_R13;
  long lVar25;
  ulong unaff_R14;
  long lVar26;
  undefined8 *puVar27;
  undefined **unaff_R15;
  long in_FS_OFFSET;
  long lStack_200;
  long alStack_1f8 [7];
  long lStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  uint uStack_170;
  undefined4 uStack_16c;
  long lStack_160;
  undefined *puStack_158;
  ulong *puStack_150;
  undefined **ppuStack_148;
  ulong uStack_140;
  undefined **ppuStack_138;
  undefined *puStack_130;
  undefined *puStack_120;
  undefined **ppuStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined1 *puStack_f8;
  ulong uStack_f0;
  undefined *puStack_e8;
  long lStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  long lStack_b0;
  undefined *puStack_a8;
  undefined1 uStack_99;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  uint uStack_48;
  undefined4 uStack_44;
  long lStack_38;
  ulong *puVar23;
  
  uStack_b8 = SUB84(param_4,0);
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  puVar14 = *(undefined **)(param_1 + 0xd0);
  puStack_a8 = (undefined *)0x0;
  ppuVar17 = (undefined **)&UNK_0017f16a;
  puStack_130 = &UNK_0043a8b7;
  lStack_e0 = param_1;
  lStack_d0 = param_2;
  uStack_bc = param_3;
  uStack_b4 = param_5;
  _ZN7android8String16C2EPKc(&puStack_a8);
  puStack_d8 = puVar14;
  if (puVar14 != (undefined *)0x0) {
    param_4 = (undefined *)0x0;
    puVar12 = puVar14;
    do {
      puVar14 = puStack_a8;
      lStack_b0 = *(long *)(*(long *)(lStack_e0 + 200) + (long)param_4 * 8);
      puStack_e8 = param_4;
      if ((char)uStack_b8 == '\0') {
code_r0x0043a973:
        puVar14 = puVar12;
        if (((char)uStack_b4 != '\0') || (*(char *)(lStack_b0 + 0x298) == '\0')) {
          uVar13 = 0;
          do {
            lVar15 = *(long *)(lStack_b0 + 0x40 + (uVar13 >> 4) * 8);
            if (lVar15 == 0) {
              puVar7 = _ZN7android15ByteBucketArrayINS_6VectorIPNS_8ResTable4TypeEEEE8default_E;
            }
            else {
              puVar7 = (undefined1 *)(lVar15 + (ulong)((uint)uVar13 & 0xf) * 0x28);
            }
            puVar12 = *(undefined **)(puVar7 + 0x10);
            puStack_100 = puVar12;
            uStack_f0 = uVar13;
            if (puVar12 != (undefined *)0x0) {
              puVar14 = (undefined *)0x0;
              puStack_f8 = puVar7;
              do {
                unaff_R15 = &puStack_98;
                lStack_c8 = *(long *)(*(long *)(puStack_f8 + 8) + (long)puVar14 * 8);
                ppuVar17 = (undefined **)(*(long *)(lStack_c8 + 8) + 0x18);
                uStack_58 = 0;
                uStack_50._0_4_ = 0;
                uStack_50._4_4_ = 0;
                uStack_48 = 0;
                uStack_44 = 0;
                puStack_130 = &UNK_0043aa7b;
                ppuVar18 = unaff_R15;
                _ZNK7android13ResStringPool15string8ObjectAtEm
                          (unaff_R15,ppuVar17,(ulong)*(byte *)(*(long *)(lStack_c8 + 0x18) + 8) - 1)
                ;
                uVar11 = SUB81(puVar12,0);
                puStack_108 = puVar14;
                if ((uint)uStack_90 == 0) {
                  puStack_130 = &UNK_0043aacc;
                  ppuVar17 = unaff_R15;
                  _ZN7android7String8C2ERKS0_(&uStack_50);
                  uStack_48 = 0;
                  uVar5 = (uint)uStack_90;
                  if ((uint)uStack_90 != 0xffffffff) goto code_r0x0043aae2;
                }
                else {
                  if ((uint)uStack_90 != 1) {
                    puStack_130 = &UNK_0043ad1d;
                    func_0x0043f2f0();
                    goto code_r0x0043ad1d;
                  }
                  uStack_50._0_4_ = puStack_98._0_4_;
                  uStack_50._4_4_ = 1;
                  uStack_48 = 1;
                  uVar5 = 1;
code_r0x0043aae2:
                  puVar12 = &UNK_0099f9d0;
                  puStack_130 = &UNK_0043aaf8;
                  (**(code **)(&UNK_0099f9d0 + (ulong)uVar5 * 8))(&uStack_99);
                  ppuVar17 = unaff_R15;
                }
                uVar5 = uStack_48;
                if ((uStack_48 == 0 & (byte)uStack_bc) == 1) {
                  unaff_R14 = 0;
                  ppuVar17 = (undefined **)&UNK_00178e26;
                  if ((undefined *)CONCAT44(uStack_50._4_4_,(undefined4)uStack_50) != &UNK_00178e26)
                  {
                    puStack_130 = &UNK_0043ab26;
                    iVar4 = func_0x0099bdd0();
                    if (iVar4 != 0) goto code_r0x0043ab2e;
                  }
code_r0x0043aa10:
                  ppuVar17 = (undefined **)&uStack_50;
                  puVar12 = &UNK_0099f9e0;
                  puStack_130 = &UNK_0043aa24;
                  (**(code **)(&UNK_0099f9e0 + unaff_R14 * 8))(&puStack_98);
                }
                else {
code_r0x0043ab2e:
                  puStack_110 = *(undefined **)(lStack_c8 + 0x40);
                  if (puStack_110 != (undefined *)0x0) {
                    puVar12 = (undefined *)0x0;
                    do {
                      lVar15 = *(long *)(*(long *)(lStack_c8 + 0x38) + (long)puVar12 * 8);
                      uStack_68 = 0;
                      uStack_60 = 0;
                      uStack_78 = 0;
                      uStack_70 = 0;
                      uStack_88 = 0;
                      uStack_80 = 0;
                      puStack_98 = (undefined *)0x0;
                      uStack_90 = 0;
                      uVar13 = (ulong)*(uint *)(lVar15 + 0x14);
                      puStack_120 = puVar12;
                      if (uVar13 < 0x40) {
                        puStack_130 = &UNK_0043aca8;
                        func_0x0099c110(&puStack_98,lVar15 + 0x14,uVar13,0x40);
                        puStack_130 = &UNK_0043acc2;
                        func_0x0099bdb0((long)&puStack_98 + uVar13,0,0x40 - uVar13);
                      }
                      else {
                        uStack_90 = *(undefined8 *)(lVar15 + 0x1c);
                        uStack_88 = *(undefined8 *)(lVar15 + 0x24);
                        uStack_80 = *(undefined8 *)(lVar15 + 0x2c);
                        uStack_78 = *(undefined8 *)(lVar15 + 0x34);
                        uStack_70 = *(undefined8 *)(lVar15 + 0x3c);
                        uStack_68 = *(undefined8 *)(lVar15 + 0x44);
                        uStack_60 = *(undefined8 *)(lVar15 + 0x4c);
                        puStack_98 = (undefined *)((ulong)*(uint *)(lVar15 + 0x18) << 0x20);
                      }
                      lVar15 = lStack_d0;
                      puStack_98 = (undefined *)CONCAT44(puStack_98._4_4_,0x40);
                      puStack_130 = &UNK_0043ac01;
                      unaff_R13 = (undefined **)_ZN7android10VectorImpl13editArrayImplEv(lStack_d0);
                      puStack_130 = &UNK_0043ac0c;
                      lVar8 = _ZN7android10VectorImpl13editArrayImplEv(lVar15);
                      ppuVar17 = (undefined **)(*(long *)(lVar15 + 0x10) * 0x40 + lVar8);
                      lVar15 = (long)ppuVar17 - (long)unaff_R13;
                      ppuStack_118 = unaff_R13;
                      if (lVar15 != 0) {
                        puVar23 = (ulong *)(lVar15 >> 6);
                        do {
                          puVar22 = (ulong *)((ulong)puVar23 >> 1);
                          puStack_130 = &UNK_0043ac52;
                          iVar4 = _ZNK7android15ResTable_config7compareERKS0_
                                            (unaff_R13 + (long)puVar22 * 8,&puStack_98);
                          unaff_R12 = puVar22;
                          if (iVar4 < 0) {
                            unaff_R12 = (ulong *)(~(ulong)puVar22 + (long)puVar23);
                            unaff_R13 = unaff_R13 + (long)puVar22 * 8 + 8;
                          }
                          puVar23 = unaff_R12;
                        } while (unaff_R12 != (ulong *)0x0);
                      }
                      ppuVar18 = &puStack_98;
                      if (unaff_R13 == ppuVar17) {
code_r0x0043ab50:
                        unaff_R13 = (undefined **)((long)unaff_R13 - (long)ppuStack_118 >> 6);
                        puStack_130 = &UNK_0043ab72;
                        _ZN7android10VectorImpl8insertAtEPKvmm(lStack_d0,ppuVar18,unaff_R13,1);
                        ppuVar17 = ppuVar18;
                      }
                      else {
                        puStack_130 = &UNK_0043ac8b;
                        ppuVar17 = ppuVar18;
                        iVar4 = _ZNK7android15ResTable_config7compareERKS0_(unaff_R13);
                        if (iVar4 != 0) goto code_r0x0043ab50;
                      }
                      puVar12 = puStack_120 + 1;
                      uVar5 = uStack_48;
                    } while (puVar12 != puStack_110);
                  }
                  unaff_R14 = (ulong)uVar5;
                  if (uVar5 != 0xffffffff) goto code_r0x0043aa10;
                }
                puVar14 = puStack_108 + 1;
              } while (puVar14 != puStack_100);
            }
            uVar13 = uStack_f0 + 1;
          } while (uVar13 != 0x100);
        }
      }
      else if (puStack_a8 != *(undefined **)(lStack_b0 + 8)) {
        unaff_R12 = (ulong *)(lStack_b0 + 8);
        puStack_130 = &UNK_0043a94b;
        unaff_R13 = (undefined **)_ZNK7android8String164sizeEv(&puStack_a8);
        unaff_R14 = *unaff_R12;
        puStack_130 = &UNK_0043a95a;
        uVar6 = _ZNK7android8String164sizeEv(unaff_R12);
        puStack_130 = &UNK_0043a96b;
        ppuVar17 = unaff_R13;
        iVar4 = strzcmp16(puVar14,unaff_R13,unaff_R14,uVar6);
        puVar12 = puVar14;
        if (iVar4 != 0) goto code_r0x0043a973;
      }
      unaff_R15 = &puStack_98;
      param_4 = puStack_e8 + 1;
      puVar12 = puVar14;
    } while (param_4 != puStack_d8);
  }
  uVar11 = SUB81(param_4,0);
  ppuVar18 = &puStack_a8;
  puStack_130 = &UNK_0043acf7;
  _ZN7android8String16D2Ev();
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return;
  }
code_r0x0043ad1d:
  puStack_130 = &UNK_0043ad22;
  func_0x0099bd00();
  lStack_160 = *(long *)(in_FS_OFFSET + 0x28);
  alStack_1f8[3] = 0;
  alStack_1f8[4] = 0;
  alStack_1f8[1] = 0;
  alStack_1f8[2] = 0;
  alStack_1f8[5] = 0;
  puVar12 = ppuVar18[0x1a];
  lStack_200 = 0;
  plVar19 = (long *)&UNK_0017f16a;
  puStack_158 = puVar14;
  puStack_150 = unaff_R12;
  ppuStack_148 = unaff_R13;
  uStack_140 = unaff_R14;
  ppuStack_138 = unaff_R15;
  puStack_130 = &stack0xfffffffffffffff8;
  _ZN7android8String16C2EPKc(&lStack_200);
  if (puVar12 != (undefined *)0x0) {
    puVar14 = (undefined *)0x0;
    do {
      lVar15 = *(long *)(ppuVar18[0x19] + (long)puVar14 * 8);
      if ((extraout_DL != '\0') || (*(char *)(lVar15 + 0x298) == '\0')) {
        uVar13 = 0;
        do {
          lVar8 = *(long *)(lVar15 + 0x40 + (uVar13 >> 4) * 8);
          if (lVar8 == 0) {
            puVar7 = _ZN7android15ByteBucketArrayINS_6VectorIPNS_8ResTable4TypeEEEE8default_E;
          }
          else {
            puVar7 = (undefined1 *)(lVar8 + (ulong)((uint)uVar13 & 0xf) * 0x28);
          }
          lVar8 = *(long *)(puVar7 + 0x10);
          if (lVar8 != 0) {
            lVar26 = 0;
            do {
              plVar20 = &lStack_1c0;
              lVar2 = *(long *)(*(long *)(puVar7 + 8) + lVar26 * 8);
              plVar19 = (long *)(*(long *)(lVar2 + 8) + 0x18);
              uStack_180 = 0;
              uStack_178._0_4_ = 0;
              uStack_178._4_4_ = 0;
              uStack_170 = 0;
              uStack_16c = 0;
              plVar21 = plVar20;
              _ZNK7android13ResStringPool15string8ObjectAtEm
                        (plVar20,plVar19,(ulong)*(byte *)(*(long *)(lVar2 + 0x18) + 8) - 1);
              if ((uint)uStack_1b8 == 0) {
                plVar19 = plVar20;
                _ZN7android7String8C2ERKS0_(&uStack_178);
                uStack_170 = 0;
                uVar5 = (uint)uStack_1b8;
                if ((uint)uStack_1b8 != 0xffffffff) goto code_r0x0043af4e;
              }
              else {
                if ((uint)uStack_1b8 != 1) {
                  func_0x0043f2f0();
                  goto code_r0x0043b18c;
                }
                uStack_178._0_4_ = (undefined4)lStack_1c0;
                uStack_178._4_4_ = 1;
                uStack_170 = 1;
                uVar5 = 1;
code_r0x0043af4e:
                (**(code **)(&UNK_0099f9d0 + (ulong)uVar5 * 8))(alStack_1f8);
                plVar19 = plVar20;
              }
              lVar3 = *(long *)(lVar2 + 0x40);
              if (lVar3 != 0) {
                lVar25 = 0;
                do {
                  lVar10 = *(long *)(*(long *)(lVar2 + 0x38) + lVar25 * 8);
                  uStack_190 = 0;
                  uStack_188 = 0;
                  uStack_1a0 = 0;
                  uStack_198 = 0;
                  uStack_1b0 = 0;
                  uStack_1a8 = 0;
                  lStack_1c0 = 0;
                  uStack_1b8 = 0;
                  uVar16 = (ulong)*(uint *)(lVar10 + 0x14);
                  if (uVar16 < 0x40) {
                    func_0x0099c110(&lStack_1c0,lVar10 + 0x14,uVar16,0x40);
                    func_0x0099bdb0((long)&lStack_1c0 + uVar16,0,0x40 - uVar16);
                  }
                  else {
                    uStack_1b8 = *(undefined8 *)(lVar10 + 0x1c);
                    uStack_1b0 = *(undefined8 *)(lVar10 + 0x24);
                    uStack_1a8 = *(undefined8 *)(lVar10 + 0x2c);
                    uStack_1a0 = *(undefined8 *)(lVar10 + 0x34);
                    uStack_198 = *(undefined8 *)(lVar10 + 0x3c);
                    uStack_190 = *(undefined8 *)(lVar10 + 0x44);
                    uStack_188 = *(undefined8 *)(lVar10 + 0x4c);
                    lStack_1c0 = (ulong)*(uint *)(lVar10 + 0x18) << 0x20;
                  }
                  lStack_1c0 = CONCAT44(lStack_1c0._4_4_,0x40);
                  _ZNK7android15ResTable_config14getBcp47LocaleEPcb
                            (&lStack_1c0,alStack_1f8 + 1,uVar11);
                  puVar9 = (undefined8 *)_ZN7android10VectorImpl13editArrayImplEv(ppuVar17);
                  lVar10 = _ZN7android10VectorImpl13editArrayImplEv(ppuVar17);
                  puVar1 = (undefined8 *)(lVar10 + (long)ppuVar17[2] * 8);
                  lVar10 = (long)puVar1 - (long)puVar9;
                  puVar27 = puVar9;
                  if (lVar10 != 0) {
                    uVar16 = lVar10 >> 3;
                    do {
                      uVar24 = uVar16 >> 1;
                      iVar4 = func_0x0099bdd0(puVar27[uVar24],alStack_1f8 + 1);
                      if (iVar4 < 0) {
                        puVar27 = puVar27 + uVar24 + 1;
                        uVar24 = ~uVar24 + uVar16;
                      }
                      uVar16 = uVar24;
                    } while (uVar24 != 0);
                  }
                  if (puVar27 == puVar1) {
code_r0x0043af90:
                    _ZN7android7String8C2EPKc(alStack_1f8,alStack_1f8 + 1);
                    plVar19 = alStack_1f8;
                    _ZN7android10VectorImpl8insertAtEPKvmm
                              (ppuVar17,alStack_1f8,(long)puVar27 - (long)puVar9 >> 3,1);
                    _ZN7android7String8D2Ev(alStack_1f8);
                  }
                  else {
                    plVar19 = alStack_1f8 + 1;
                    iVar4 = func_0x0099bdd0(*puVar27);
                    if (iVar4 != 0) goto code_r0x0043af90;
                  }
                  lVar25 = lVar25 + 1;
                } while (lVar25 != lVar3);
              }
              if ((ulong)uStack_170 != 0xffffffff) {
                plVar19 = &uStack_178;
                (**(code **)(&UNK_0099f9e0 + (ulong)uStack_170 * 8))();
              }
              lVar26 = lVar26 + 1;
            } while (lVar26 != lVar8);
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 != 0x100);
      }
      puVar14 = puVar14 + 1;
    } while (puVar14 != puVar12);
  }
  plVar21 = &lStack_200;
  _ZN7android8String16D2Ev();
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_160) {
    return;
  }
code_r0x0043b18c:
  func_0x0099bd00();
  *plVar21 = (long)plVar19;
  *(undefined4 *)(plVar21 + 1) = extraout_EDX;
  return;
}


