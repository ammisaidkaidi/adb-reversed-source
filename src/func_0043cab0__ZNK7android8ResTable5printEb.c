// Function: _ZNK7android8ResTable5printEb
// Address: 0043cab0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Type propagation algorithm not settling */

void _ZNK7android8ResTable5printEb(long param_1,char param_2)

{
  undefined1 uVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  char cVar12;
  byte bVar13;
  int iVar14;
  undefined8 uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  uint uVar19;
  uint uVar20;
  undefined1 *puVar21;
  long lVar22;
  ulong uVar23;
  short sVar24;
  uint uVar25;
  ulong uVar26;
  long lVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  undefined1 *puVar32;
  undefined *puVar33;
  long lVar34;
  ulong uVar35;
  ulong uVar36;
  ulong uVar37;
  long lVar38;
  undefined8 *puVar39;
  long in_FS_OFFSET;
  ulong uStack_1d0;
  int iStack_1ac;
  undefined1 auStack_1a8 [8];
  uint uStack_1a0;
  undefined4 uStack_19c;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long lStack_168;
  undefined8 uStack_160;
  uint uStack_154;
  undefined8 uStack_150;
  ulong uStack_148;
  undefined *puStack_140;
  undefined1 auStack_138 [8];
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
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
  iVar3 = *(int *)(param_1 + 0x50);
  if (iVar3 != 0) {
    uVar15 = func_0x0099bd20(iVar3);
    func_0x0099be10(&UNK_001699b9,iVar3,uVar15);
  }
  uVar7 = *(ulong *)(param_1 + 0xd0);
  func_0x0099be10(&UNK_0017bdae,uVar7 & 0xffffffff);
  if (uVar7 != 0) {
    uVar36 = 0;
    do {
      lVar8 = *(long *)(*(long *)(param_1 + 200) + uVar36 * 8);
      uVar4 = *(undefined4 *)(lVar8 + 0x10);
      uVar5 = *(undefined4 *)(lVar8 + 0x28);
      _ZN7android7String8C2ERKNS_8String16E(auStack_138,lVar8 + 8);
      func_0x0099be10(&UNK_00178da2,uVar36 & 0xffffffff,uVar4,uVar5);
      _ZN7android7String8D2Ev(auStack_138);
      uVar28 = *(ulong *)(lVar8 + 0x268);
      if (uVar28 != 0) {
        func_0x0099be10(&UNK_001662aa,uVar28 & 0xffffffff);
        lVar38 = 0;
        do {
          uVar1 = *(undefined1 *)(*(long *)(lVar8 + 0x260) + 8 + lVar38);
          _ZN7android7String8C2ERKNS_8String16E(auStack_138,*(long *)(lVar8 + 0x260) + lVar38);
          func_0x0099be10(&UNK_001648ac,uVar1,auStack_138);
          _ZN7android7String8D2Ev(auStack_138);
          lVar38 = lVar38 + 0x10;
          uVar28 = uVar28 - 1;
        } while (uVar28 != 0);
        func_0x0099c040(10);
      }
      lVar38 = lVar8 + 0x148;
      uVar28 = 0;
      uVar16 = 0;
      do {
        lVar9 = *(long *)(lVar8 + 0x40 + (uVar16 >> 4) * 8);
        uVar29 = (ulong)((uint)uVar16 & 0xe);
        puVar32 = (undefined1 *)(lVar9 + uVar29 * 0x28);
        if (lVar9 == 0) {
          puVar32 = _ZN7android15ByteBucketArrayINS_6VectorIPNS_8ResTable4TypeEEEE8default_E;
        }
        puVar21 = (undefined1 *)(lVar9 + 0x28 + uVar29 * 0x28);
        if (lVar9 == 0) {
          puVar21 = _ZN7android15ByteBucketArrayINS_6VectorIPNS_8ResTable4TypeEEEE8default_E;
        }
        if (uVar28 <= *(ulong *)(puVar32 + 0x10)) {
          uVar28 = *(ulong *)(puVar32 + 0x10);
        }
        if (uVar28 <= *(ulong *)(puVar21 + 0x10)) {
          uVar28 = *(ulong *)(puVar21 + 0x10);
        }
        uVar16 = uVar16 + 2;
      } while (uVar16 != 0x100);
      if (uVar28 != 0) {
        iStack_1ac = *(int *)(lVar8 + 0x10);
        uStack_1d0 = 0;
        do {
          uVar16 = *(ulong *)(lVar8 + 0x28);
          if (uVar16 != 0) {
            uVar29 = 0;
            do {
              lVar9 = *(long *)(*(long *)(lVar8 + 0x20) + uVar29 * 8);
              iStack_1ac = *(int *)(*(long *)(lVar9 + 0x10) + 8);
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
              lStack_108 = 0;
              uStack_100 = 0;
              uStack_118 = 0;
              uStack_110 = 0;
              uStack_128 = 0;
              lStack_120 = 0;
              puVar39 = (undefined8 *)auStack_138;
              auStack_138 = (undefined1  [8])0x0;
              uStack_130 = 0;
              lVar10 = *(long *)(lVar9 + 0x10);
              sVar24 = *(short *)(lVar10 + 0xc);
              if (sVar24 != 0) {
                uVar30 = 0;
                do {
                  uVar37 = uVar30;
                  *(short *)((long)auStack_138 + uVar37) = sVar24;
                  sVar24 = *(short *)(lVar10 + 0xe + uVar37);
                  if (sVar24 == 0) break;
                  uVar30 = uVar37 + 2;
                } while (uVar37 < 0xfc);
                puVar39 = (undefined8 *)((long)auStack_138 + uVar37 + 2);
              }
              *(undefined2 *)puVar39 = 0;
              uVar4 = *(undefined4 *)(*(long *)(lVar9 + 0x10) + 8);
              _ZN7android7String8C2EPKDs(&uStack_198,auStack_138);
              func_0x0099be10(&UNK_00184e0f,uVar29 & 0xffffffff,uVar4,uStack_198);
              _ZN7android7String8D2Ev(&uStack_198);
              uVar29 = uVar29 + 1;
            } while (uVar29 != uVar16);
          }
          uVar16 = 0;
          do {
            lVar9 = *(long *)(lVar8 + 0x40 + (uVar16 >> 4) * 8);
            uVar19 = (uint)uVar16;
            if (lVar9 == 0) {
              puVar32 = _ZN7android15ByteBucketArrayINS_6VectorIPNS_8ResTable4TypeEEEE8default_E;
            }
            else {
              puVar32 = (undefined1 *)(lVar9 + (ulong)(uVar19 & 0xf) * 0x28);
            }
            if (uStack_1d0 < *(ulong *)(puVar32 + 0x10)) {
              lVar9 = *(long *)(*(long *)(puVar32 + 8) + uStack_1d0 * 8);
              lVar10 = *(long *)(lVar9 + 0x40);
              func_0x0099be10(&UNK_0016b215);
              if ((*(long *)(lVar9 + 0x20) != 0) && (*(long *)(lVar9 + 0x10) != 0)) {
                uVar29 = 0;
                do {
                  uStack_1a0 = iStack_1ac << 0x18 | uVar19 * 0x10000 + 0x10000 & 0xff0000 |
                               (uint)uVar29 & 0xffff;
                  if (iStack_1ac == 0) {
                    _ZNK7android15DynamicRefTable16lookupResourceIdEPj(lVar38,&uStack_1a0);
                  }
                  uVar6 = uStack_1a0;
                  lStack_108 = 0;
                  uStack_100 = 0;
                  uStack_118 = 0;
                  uStack_110 = 0;
                  uStack_128 = 0;
                  lStack_120 = 0;
                  auStack_138 = (undefined1  [8])0x0;
                  uStack_130 = 0;
                  cVar12 = _ZNK7android8ResTable15getResourceNameEjbPNS0_13resource_nameE
                                     (param_1,uStack_1a0,1);
                  if (cVar12 == '\0') {
                    func_0x0099be10(&UNK_0018b1d3);
                  }
                  else {
                    uStack_198 = 0;
                    _ZN7android7String8C2Ev(&uStack_198);
                    puStack_140 = (undefined *)0x0;
                    _ZN7android7String8C2Ev(&puStack_140);
                    if (lStack_120 == 0) {
                      _ZN7android7String8C2EPKDsm(&uStack_148,uStack_128,uStack_118);
                    }
                    else {
                      _ZN7android7String8C2EPKcm(&uStack_148,lStack_120,uStack_118);
                    }
                    _ZN7android7String85setToERKS0_(&uStack_198,&uStack_148);
                    _ZN7android7String8D2Ev(&uStack_148);
                    if (lStack_108 == 0) {
                      _ZN7android7String8C2EPKDsm(&uStack_148,uStack_110,uStack_100);
                    }
                    else {
                      _ZN7android7String8C2EPKcm(&uStack_148,lStack_108,uStack_100);
                    }
                    _ZN7android7String85setToERKS0_(&puStack_140,&uStack_148);
                    _ZN7android7String8D2Ev(&uStack_148);
                    _ZN7android8String16C2EPKDsm(&uStack_150,auStack_138,uStack_130);
                    _ZN7android7String8C2ERKNS_8String16E(&uStack_148,&uStack_150);
                    func_0x0099be10(&UNK_0016b23f,uVar6,uStack_148,uStack_198,puStack_140,
                                    *(undefined4 *)(*(long *)(lVar9 + 0x20) + uVar29 * 4));
                    _ZN7android7String8D2Ev(&uStack_148);
                    _ZN7android8String16D2Ev(&uStack_150);
                    _ZN7android7String8D2Ev(&puStack_140);
                    _ZN7android7String8D2Ev(&uStack_198);
                  }
                  uVar29 = uVar29 + 1;
                } while (uVar29 < *(ulong *)(lVar9 + 0x10));
              }
              if (lVar10 != 0) {
                lVar22 = 0;
                do {
                  uVar29 = *(ulong *)(*(long *)(lVar9 + 0x38) + lVar22 * 8);
                  if ((uVar29 & 3) == 0) {
                    lStack_108 = 0;
                    uStack_100 = 0;
                    uStack_118 = 0;
                    uStack_110 = 0;
                    uStack_128 = 0;
                    lStack_120 = 0;
                    auStack_138 = (undefined1  [8])0x0;
                    uStack_130 = 0;
                    uVar30 = (ulong)*(uint *)(uVar29 + 0x14);
                    if (uVar30 < 0x40) {
                      func_0x0099c110(auStack_138,uVar29 + 0x14,uVar30,0x40);
                      func_0x0099bdb0((long)auStack_138 + uVar30,0,0x40 - uVar30);
                    }
                    else {
                      uStack_130 = *(undefined8 *)(uVar29 + 0x1c);
                      uStack_128 = *(undefined8 *)(uVar29 + 0x24);
                      lStack_120 = *(long *)(uVar29 + 0x2c);
                      uStack_118 = *(undefined8 *)(uVar29 + 0x34);
                      uStack_110 = *(undefined8 *)(uVar29 + 0x3c);
                      lStack_108 = *(long *)(uVar29 + 0x44);
                      uStack_100 = *(undefined8 *)(uVar29 + 0x4c);
                      auStack_138 = (undefined1  [8])((ulong)*(uint *)(uVar29 + 0x18) << 0x20);
                    }
                    auStack_138._0_4_ = 0x40;
                    puStack_140 = (undefined *)0x0;
                    _ZNK7android15ResTable_config8toStringEv(&puStack_140,auStack_138);
                    lVar17 = _ZNK7android7String86lengthEv(&puStack_140);
                    puVar33 = &UNK_0015b562;
                    if (lVar17 != 0) {
                      puVar33 = puStack_140;
                    }
                    func_0x0099be10(&UNK_001599d0,puVar33);
                    if (*(char *)(uVar29 + 9) != '\0') {
                      func_0x0099be10(&UNK_00178dd6);
                      bVar13 = *(byte *)(uVar29 + 9);
                      if ((bVar13 & 1) != 0) {
                        func_0x0099be10(&UNK_0018067f);
                        bVar13 = *(byte *)(uVar29 + 9);
                      }
                      if ((bVar13 & 2) != 0) {
                        func_0x0099be10(&UNK_0017bdc3);
                      }
                    }
                    func_0x0099bee0(&UNK_00173d53);
                    uVar30 = (ulong)*(uint *)(uVar29 + 0x10);
                    if ((*(uint *)(uVar29 + 0x10) & 3) == 0) {
                      uVar37 = (ulong)*(uint *)(uVar29 + 4);
                      if ((*(uint *)(uVar29 + 4) & 3) != 0) {
                        puVar33 = &UNK_0015cbab;
                        goto code_r0x0043d2e8;
                      }
                      uVar6 = *(uint *)(uVar29 + 0xc);
                      if ((ulong)uVar6 != 0) {
                        lVar17 = *(ushort *)(uVar29 + 2) + uVar29;
                        lVar18 = uVar30 + uVar29;
                        uVar26 = 0;
                        do {
                          if ((*(byte *)(uVar29 + 9) & 1) == 0) {
                            uVar35 = uVar26;
                            if ((*(byte *)(uVar29 + 9) & 2) == 0) {
                              uVar20 = *(uint *)(lVar17 + uVar26 * 4);
                              if (uVar20 != 0xffffffff) goto code_r0x0043d3e0;
                            }
                            else {
                              uVar2 = *(ushort *)(lVar17 + uVar26 * 2);
                              if (uVar2 != 0xffff) {
                                uVar20 = (uint)uVar2 << 2;
                                goto code_r0x0043d3e0;
                              }
                            }
                          }
                          else {
                            uVar35 = (ulong)*(ushort *)(lVar17 + uVar26 * 4);
                            uVar20 = (uint)*(ushort *)(lVar17 + 2 + uVar26 * 4) << 2;
code_r0x0043d3e0:
                            uStack_154 = (uint)uVar35 & 0xffff |
                                         uVar19 * 0x10000 + 0x10000 & 0xff0000 | iStack_1ac << 0x18;
                            if (iStack_1ac == 0) {
                              _ZNK7android15DynamicRefTable16lookupResourceIdEPj(lVar38,&uStack_154)
                              ;
                            }
                            uVar25 = uStack_154;
                            lStack_168 = 0;
                            uStack_160 = 0;
                            uStack_178 = 0;
                            uStack_170 = 0;
                            uStack_188 = 0;
                            lStack_180 = 0;
                            uStack_198 = 0;
                            uStack_190 = 0;
                            cVar12 = _ZNK7android8ResTable15getResourceNameEjbPNS0_13resource_nameE
                                               (param_1,uStack_154,1,&uStack_198);
                            if (cVar12 == '\0') {
                              func_0x0099be10(&UNK_0016b2ad,uVar25);
                            }
                            else {
                              uStack_148 = 0;
                              _ZN7android7String8C2Ev(&uStack_148);
                              uStack_150 = 0;
                              _ZN7android7String8C2Ev(&uStack_150);
                              if (lStack_180 == 0) {
                                _ZN7android7String8C2EPKDsm(&uStack_1a0,uStack_188,uStack_178);
                              }
                              else {
                                _ZN7android7String8C2EPKcm(&uStack_1a0,lStack_180,uStack_178);
                              }
                              _ZN7android7String85setToERKS0_(&uStack_148,&uStack_1a0);
                              _ZN7android7String8D2Ev(&uStack_1a0);
                              if (lStack_168 == 0) {
                                _ZN7android7String8C2EPKDsm(&uStack_1a0,uStack_170,uStack_160);
                              }
                              else {
                                _ZN7android7String8C2EPKcm(&uStack_1a0,lStack_168,uStack_160);
                              }
                              _ZN7android7String85setToERKS0_(&uStack_150,&uStack_1a0);
                              _ZN7android7String8D2Ev(&uStack_1a0);
                              _ZN7android8String16C2EPKDsm(auStack_1a8,uStack_198,uStack_190);
                              _ZN7android7String8C2ERKNS_8String16E(&uStack_1a0,auStack_1a8);
                              func_0x0099be10(&UNK_0015cbde,uVar25,CONCAT44(uStack_19c,uStack_1a0),
                                              uStack_148,uStack_150);
                              _ZN7android7String8D2Ev(&uStack_1a0);
                              _ZN7android8String16D2Ev(auStack_1a8);
                              _ZN7android7String8D2Ev(&uStack_150);
                              _ZN7android7String8D2Ev(&uStack_148);
                            }
                            if ((uVar20 & 3) == 0) {
                              uVar35 = (ulong)uVar20;
                              if (uVar37 < uVar35 + 8) {
                                func_0x0099be10(&UNK_0018999c,uVar30,uVar20,uVar37);
                              }
                              else {
                                uVar2 = *(ushort *)(lVar18 + 2 + uVar35);
                                uVar23 = (ulong)*(ushort *)(lVar18 + uVar35);
                                uVar31 = 8;
                                if ((uVar2 & 8) == 0) {
                                  uVar31 = (ulong)*(ushort *)(lVar18 + uVar35);
                                }
                                if ((uVar31 & 3) == 0) {
                                  if (uVar37 < uVar31 + uVar35) {
                                    func_0x0099be10(&UNK_00186a02,uVar30,uVar20,uVar31,uVar37);
                                  }
                                  else {
                                    lVar34 = uVar35 + lVar18;
                                    uStack_148 = 0;
                                    if ((uVar2 & 9) == 1) {
                                      func_0x0099be10(&UNK_00181e14);
                                      bVar13 = *(byte *)(lVar34 + 2);
                                    }
                                    else {
                                      if ((uVar2 & 8) == 0) {
                                        bVar13 = *(byte *)(lVar34 + 3 + uVar23);
                                        uVar35 = (ulong)CONCAT12(*(undefined1 *)
                                                                  (lVar34 + 2 + uVar23),
                                                                 *(undefined2 *)(lVar34 + uVar23));
                                        lVar27 = lVar34 + uVar23;
                                      }
                                      else {
                                        bVar13 = (byte)(uVar2 >> 8);
                                        uVar35 = 8;
                                        lVar27 = lVar34;
                                      }
                                      uStack_148 = (ulong)bVar13 << 0x18 |
                                                   (ulong)*(uint *)(lVar27 + 4) << 0x20 | uVar35;
                                      func_0x0099be10(&UNK_0017f144,bVar13,*(uint *)(lVar27 + 4),
                                                      uVar35 & 0xffff,uVar35 >> 0x10);
                                      bVar13 = *(byte *)(lVar34 + 2);
                                    }
                                    if ((bVar13 & 2) != 0) {
                                      func_0x0099be10(&UNK_0015e4d2);
                                    }
                                    func_0x0099c040(10);
                                    if (param_2 != '\0') {
                                      if ((uVar2 & 9) == 1) {
                                        uVar20 = *(uint *)(lVar34 + 8);
                                        iVar3 = *(int *)(lVar34 + 0xc);
                                        uStack_150 = CONCAT44(uStack_150._4_4_,uVar20);
                                        uVar25 = uVar20;
                                        if (uVar20 < 0x1000000) {
                                          iVar14 = 
                                                  _ZNK7android15DynamicRefTable16lookupResourceIdEPj
                                                            (lVar38,&uStack_150,uVar20);
                                          uVar25 = 0;
                                          if (iVar14 == 0) {
                                            uVar25 = (uint)uStack_150;
                                          }
                                        }
                                        func_0x0099be10(&UNK_001631d1,uVar20,uVar25,iVar3);
                                        if ((0 < iVar3) && (uVar31 < uVar37 - 0xc)) {
                                          iVar14 = 1;
                                          do {
                                            func_0x0099be10(&UNK_0017bdcf,iVar14 + -1,
                                                            *(undefined4 *)(lVar34 + uVar31));
                                            uStack_148 = *(ulong *)(lVar34 + 4 + uVar31);
                                            _ZNK7android8ResTable11print_valueEPKNS0_7PackageERKNS_9Res_valueE
                                                      ();
                                            if (iVar3 <= iVar14) break;
                                            uVar31 = uVar31 + *(ushort *)(lVar34 + 4 + uVar31) + 4;
                                            iVar14 = iVar14 + 1;
                                          } while (uVar31 < uVar37 - 0xc);
                                        }
                                      }
                                      else {
                                        func_0x0099be10(&UNK_001742ab);
                                        _ZNK7android8ResTable11print_valueEPKNS0_7PackageERKNS_9Res_valueE
                                                  ();
                                      }
                                    }
                                  }
                                }
                                else {
                                  func_0x0099be10(&UNK_001648be);
                                }
                              }
                            }
                            else {
                              func_0x0099be10(&UNK_00178de4);
                            }
                          }
                          uVar26 = uVar26 + 1;
                        } while (uVar26 != uVar6);
                      }
                    }
                    else {
                      puVar33 = &UNK_0016b272;
code_r0x0043d2e8:
                      func_0x0099be10(puVar33);
                    }
                    _ZN7android7String8D2Ev(&puStack_140);
                  }
                  else {
                    func_0x0099be10(&UNK_00172706);
                  }
                  lVar22 = lVar22 + 1;
                } while (lVar22 != lVar10);
              }
            }
            uVar16 = uVar16 + 1;
          } while (uVar16 != 0x100);
          uStack_1d0 = uStack_1d0 + 1;
        } while (uStack_1d0 != uVar28);
      }
      uVar36 = uVar36 + 1;
    } while (uVar36 != uVar7);
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return;
  }
  func_0x0099bd00();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


