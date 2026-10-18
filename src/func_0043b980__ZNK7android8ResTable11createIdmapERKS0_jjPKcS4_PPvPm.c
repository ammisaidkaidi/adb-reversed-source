// Function: _ZNK7android8ResTable11createIdmapERKS0_jjPKcS4_PPvPm
// Address: 0043b980
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _ZNK7android8ResTable11createIdmapERKS0_jjPKcS4_PPvPm
                (long param_1,undefined *param_2,undefined4 param_3,undefined **param_4,
                uint *param_5,uint ******param_6,undefined8 *param_7,uint ******param_8)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint *****pppppuVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  char cVar8;
  short sVar9;
  int iVar10;
  short *psVar11;
  undefined8 *puVar12;
  undefined1 *puVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  undefined1 uVar18;
  undefined4 uVar19;
  undefined **ppuVar20;
  ulong uVar21;
  undefined *puVar22;
  uint *puVar23;
  undefined4 *extraout_RDX;
  undefined *puVar24;
  uint ******unaff_RBX;
  uint ******ppppppuVar25;
  uint *puVar26;
  undefined8 uVar27;
  uint ******ppppppuVar28;
  undefined **ppuVar29;
  uint uVar30;
  ulong uVar31;
  undefined **ppuVar32;
  long in_FS_OFFSET;
  bool bVar33;
  undefined1 auVar34 [16];
  undefined8 *puStack_220;
  undefined **ppuStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 *puStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined8 *puStack_188;
  undefined8 uStack_180;
  uint *puStack_178;
  undefined8 *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 *puStack_150;
  uint *****pppppuStack_148;
  undefined **ppuStack_140;
  short asStack_138 [128];
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  auVar34._0_4_ = -(uint)((int)((ulong)param_5 >> 0x20) == 0 && (int)param_5 == 0);
  auVar34._4_4_ = -(uint)((int)param_6 == 0 && (int)((ulong)param_6 >> 0x20) == 0);
  auVar34._8_4_ = -(uint)(param_7._4_4_ == 0 && (int)param_7 == 0);
  auVar34._12_4_ =
       -(uint)((int)param_8 == 0 && SUB124(SUB1612((undefined1  [16])0x0,4),8) == param_8._4_4_);
  iVar10 = movmskps((int)lStack_38,auVar34);
  puVar26 = param_5;
  ppppppuVar28 = param_6;
  if (iVar10 == 0) {
    uVar19 = SUB84(param_4,0);
    puVar24 = param_2;
    uVar31 = func_0x0099bcf0(param_5);
    unaff_RBX = param_6;
    if (0xff < uVar31) {
      puVar22 = &UNK_0015e492;
      goto code_r0x0043bb7f;
    }
    ppppppuVar25 = param_6;
    uVar31 = func_0x0099bcf0();
    if (0xff < uVar31) {
      puVar22 = &UNK_0016486b;
      goto code_r0x0043bb7f;
    }
    if ((*(long *)(param_1 + 0xd0) == 0) || (*(long *)(**(long **)(param_1 + 200) + 0x28) == 0)) {
      puVar22 = &UNK_0015fecc;
      goto code_r0x0043bb7f;
    }
    if ((*(long *)(param_2 + 0xd0) == 0) || (*(long *)(**(long **)(param_2 + 200) + 0x28) == 0)) {
      puVar22 = &UNK_00175965;
      goto code_r0x0043bb7f;
    }
    lVar2 = **(long **)(**(long **)(param_2 + 200) + 0x20);
    uVar31 = 0x80000000;
    if (*(char *)(lVar2 + 0x280) == '\0') {
      lVar2 = *(long *)(lVar2 + 0x10);
      asStack_138[0x78] = 0;
      asStack_138[0x79] = 0;
      asStack_138[0x7a] = 0;
      asStack_138[0x7b] = 0;
      asStack_138[0x7c] = 0;
      asStack_138[0x7d] = 0;
      asStack_138[0x7e] = 0;
      asStack_138[0x7f] = 0;
      asStack_138[0x70] = 0;
      asStack_138[0x71] = 0;
      asStack_138[0x72] = 0;
      asStack_138[0x73] = 0;
      asStack_138[0x74] = 0;
      asStack_138[0x75] = 0;
      asStack_138[0x76] = 0;
      asStack_138[0x77] = 0;
      asStack_138[0x68] = 0;
      asStack_138[0x69] = 0;
      asStack_138[0x6a] = 0;
      asStack_138[0x6b] = 0;
      asStack_138[0x6c] = 0;
      asStack_138[0x6d] = 0;
      asStack_138[0x6e] = 0;
      asStack_138[0x6f] = 0;
      asStack_138[0x60] = 0;
      asStack_138[0x61] = 0;
      asStack_138[0x62] = 0;
      asStack_138[99] = 0;
      asStack_138[100] = 0;
      asStack_138[0x65] = 0;
      asStack_138[0x66] = 0;
      asStack_138[0x67] = 0;
      asStack_138[0x58] = 0;
      asStack_138[0x59] = 0;
      asStack_138[0x5a] = 0;
      asStack_138[0x5b] = 0;
      asStack_138[0x5c] = 0;
      asStack_138[0x5d] = 0;
      asStack_138[0x5e] = 0;
      asStack_138[0x5f] = 0;
      asStack_138[0x50] = 0;
      asStack_138[0x51] = 0;
      asStack_138[0x52] = 0;
      asStack_138[0x53] = 0;
      asStack_138[0x54] = 0;
      asStack_138[0x55] = 0;
      asStack_138[0x56] = 0;
      asStack_138[0x57] = 0;
      asStack_138[0x48] = 0;
      asStack_138[0x49] = 0;
      asStack_138[0x4a] = 0;
      asStack_138[0x4b] = 0;
      asStack_138[0x4c] = 0;
      asStack_138[0x4d] = 0;
      asStack_138[0x4e] = 0;
      asStack_138[0x4f] = 0;
      asStack_138[0x40] = 0;
      asStack_138[0x41] = 0;
      asStack_138[0x42] = 0;
      asStack_138[0x43] = 0;
      asStack_138[0x44] = 0;
      asStack_138[0x45] = 0;
      asStack_138[0x46] = 0;
      asStack_138[0x47] = 0;
      asStack_138[0x38] = 0;
      asStack_138[0x39] = 0;
      asStack_138[0x3a] = 0;
      asStack_138[0x3b] = 0;
      asStack_138[0x3c] = 0;
      asStack_138[0x3d] = 0;
      asStack_138[0x3e] = 0;
      asStack_138[0x3f] = 0;
      asStack_138[0x30] = 0;
      asStack_138[0x31] = 0;
      asStack_138[0x32] = 0;
      asStack_138[0x33] = 0;
      asStack_138[0x34] = 0;
      asStack_138[0x35] = 0;
      asStack_138[0x36] = 0;
      asStack_138[0x37] = 0;
      asStack_138[0x28] = 0;
      asStack_138[0x29] = 0;
      asStack_138[0x2a] = 0;
      asStack_138[0x2b] = 0;
      asStack_138[0x2c] = 0;
      asStack_138[0x2d] = 0;
      asStack_138[0x2e] = 0;
      asStack_138[0x2f] = 0;
      asStack_138[0x20] = 0;
      asStack_138[0x21] = 0;
      asStack_138[0x22] = 0;
      asStack_138[0x23] = 0;
      asStack_138[0x24] = 0;
      asStack_138[0x25] = 0;
      asStack_138[0x26] = 0;
      asStack_138[0x27] = 0;
      asStack_138[0x18] = 0;
      asStack_138[0x19] = 0;
      asStack_138[0x1a] = 0;
      asStack_138[0x1b] = 0;
      asStack_138[0x1c] = 0;
      asStack_138[0x1d] = 0;
      asStack_138[0x1e] = 0;
      asStack_138[0x1f] = 0;
      asStack_138[0x10] = 0;
      asStack_138[0x11] = 0;
      asStack_138[0x12] = 0;
      asStack_138[0x13] = 0;
      asStack_138[0x14] = 0;
      asStack_138[0x15] = 0;
      asStack_138[0x16] = 0;
      asStack_138[0x17] = 0;
      asStack_138[8] = 0;
      asStack_138[9] = 0;
      asStack_138[10] = 0;
      asStack_138[0xb] = 0;
      asStack_138[0xc] = 0;
      asStack_138[0xd] = 0;
      asStack_138[0xe] = 0;
      asStack_138[0xf] = 0;
      asStack_138[0] = 0;
      asStack_138[1] = 0;
      asStack_138[2] = 0;
      asStack_138[3] = 0;
      asStack_138[4] = 0;
      asStack_138[5] = 0;
      asStack_138[6] = 0;
      asStack_138[7] = 0;
      sVar9 = *(short *)(lVar2 + 0xc);
      if (sVar9 == 0) {
        psVar11 = asStack_138;
      }
      else {
        uVar31 = 0;
        do {
          uVar15 = uVar31;
          *(short *)((long)asStack_138 + uVar15) = sVar9;
          sVar9 = *(short *)(lVar2 + 0xe + uVar15);
          if (sVar9 == 0) break;
          uVar31 = uVar15 + 2;
        } while (uVar15 < 0xfc);
        psVar11 = (short *)((long)asStack_138 + uVar15 + 2);
      }
      *psVar11 = 0;
      pppppuStack_148 = (uint *****)0x0;
      _ZN7android8String16C2EPKDs(&pppppuStack_148,asStack_138);
      lVar3 = **(long **)(param_1 + 200);
      puVar12 = (undefined8 *)_Znwm(0x18);
      *puVar12 = 0;
      puVar12[1] = 0;
      puVar12[2] = 0;
      *puVar12 = puVar12 + 1;
      ppuVar20 = (undefined **)0x0;
      puStack_150 = puVar12;
      do {
        lVar4 = *(long *)(lVar3 + 0x40 + ((ulong)ppuVar20 >> 4) * 8);
        if (lVar4 == 0) {
          puVar13 = _ZN7android15ByteBucketArrayINS_6VectorIPNS_8ResTable4TypeEEEE8default_E;
          lVar4 = _ZN7android15ByteBucketArrayINS_6VectorIPNS_8ResTable4TypeEEEE8default_E._16_8_;
        }
        else {
          puVar13 = (undefined1 *)(lVar4 + (ulong)((uint)ppuVar20 & 0xf) * 0x28);
          lVar4 = *(long *)(puVar13 + 0x10);
        }
        if ((lVar4 != 0) && (lVar4 = **(long **)(puVar13 + 8), *(long *)(lVar4 + 0x10) != 0)) {
          unaff_RBX = (uint ******)0x0;
          do {
            uVar30 = (uint)unaff_RBX & 0xffff | (uint)ppuVar20 * 0x10000 + 0x10000 & 0xff0000 |
                     *(int *)(lVar3 + 0x10) << 0x18;
            uStack_168 = 0;
            uStack_160 = 0;
            puStack_178 = (uint *)0x0;
            puStack_170 = (undefined8 *)0x0;
            puStack_188 = (undefined8 *)0x0;
            uStack_180 = 0;
            puStack_198 = (undefined *)0x0;
            uStack_190 = 0;
            cVar8 = _ZNK7android8ResTable15getResourceNameEjbPNS0_13resource_nameE
                              (param_1,uVar30,0,&puStack_198);
            ppppppuVar25 = (uint ******)pppppuStack_148;
            uVar27 = uStack_160;
            puVar7 = puStack_170;
            puVar23 = puStack_178;
            puVar6 = puStack_188;
            if (cVar8 != '\0') {
              ppuStack_1b8 = (undefined **)((ulong)ppuStack_1b8 & 0xffffffff00000000);
              puStack_220 = puStack_188;
              uVar14 = _ZNK7android8String164sizeEv(&pppppuStack_148);
              iVar10 = _ZNK7android8ResTable17identifierForNameEPKDsmS2_mS2_mPj
                                 (param_2,puVar7,uVar27,puVar6,puVar23,ppppppuVar25,uVar14,
                                  &ppuStack_1b8);
              puVar26 = puVar23;
              ppppppuVar28 = ppppppuVar25;
              if (iVar10 != 0) {
                _ZN7android16IdmapTypeMapping3addEjj(puVar12,iVar10,uVar30);
                puVar26 = puVar23;
                ppppppuVar28 = ppppppuVar25;
              }
            }
            unaff_RBX = (uint ******)((long)unaff_RBX + 1);
          } while (unaff_RBX < *(uint *******)(lVar4 + 0x10));
        }
        ppuVar20 = (undefined **)((long)ppuVar20 + 1);
      } while (ppuVar20 != (undefined **)0x100);
      if (puVar12[2] == 0) {
        puVar24 = &UNK_0015b3df;
        __android_log_print(6,&UNK_0015b3df,&UNK_0017098c);
        uVar31 = 0x80000000;
      }
      else {
        puStack_178 = (uint *)0x0;
        puStack_170 = (undefined8 *)0x0;
        puStack_188 = (undefined8 *)0x0;
        uStack_180 = 0;
        puStack_198 = (undefined *)0x0;
        uStack_190 = 0;
        uStack_168 = 0;
        puStack_150 = (undefined8 *)0x0;
        puStack_1a0 = puVar12;
        _ZN7android22IdmapMatchingResourcesC2ENSt3__110unique_ptrINS_16IdmapTypeMappingENS1_14default_deleteIS3_EEEE
                  (&puStack_198,&puStack_1a0);
        func_0x0043eee0(&puStack_1a0);
        *param_8 = (uint *****)0x214;
        ppuStack_1b8 = (undefined **)0x0;
        puStack_1b0 = (undefined *)0x0;
        uStack_1a8 = 0;
        puVar24 = puStack_198;
        func_0x0043ef50(&ppuStack_1b8);
        ppuVar16 = ppuStack_1b8;
        pppppuVar5 = *param_8;
        param_4 = ppuStack_1b8;
joined_r0x0043be83:
        if (param_4 != &puStack_1b0) {
          *param_8 = pppppuVar5 + 1;
          if (puStack_170 != (undefined8 *)0x0) {
            bVar1 = *(byte *)(param_4 + 4);
            puVar24 = (undefined *)(ulong)bVar1;
            puVar12 = puStack_170;
            do {
              if (bVar1 < *(byte *)(puVar12 + 4)) {
                puVar12 = (undefined8 *)*puVar12;
              }
              else {
                if (bVar1 == *(byte *)(puVar12 + 4)) goto code_r0x0043bee2;
                puVar12 = (undefined8 *)puVar12[1];
              }
              if (puVar12 == (undefined8 *)0x0) break;
            } while( true );
          }
          goto code_r0x0043c2bd;
        }
        puVar12 = (undefined8 *)func_0x0099c1e0();
        *param_7 = puVar12;
        if (puVar12 == (undefined8 *)0x0) {
          uVar31 = 0xfffffff4;
          ppuVar20 = (undefined **)0x0;
        }
        else {
          *puVar12 = 0xb504d4449;
          *(undefined4 *)(puVar12 + 1) = param_3;
          ppppppuVar25 = (uint ******)(puVar12 + 2);
          *(undefined4 *)((long)puVar12 + 0xc) = uVar19;
          uVar15 = func_0x0099bcf0(param_5);
          uVar31 = 0;
          do {
            uVar21 = uVar31;
            if (uVar21 < uVar15) {
              uVar18 = *(undefined1 *)((long)param_5 + uVar21);
            }
            else {
              uVar18 = 0;
            }
            *(undefined1 *)((long)ppppppuVar25 + uVar21) = uVar18;
            if (uVar21 + 1 < uVar15) {
              uVar18 = *(undefined1 *)((long)param_5 + uVar21 + 1);
            }
            else {
              uVar18 = 0;
            }
            *(undefined1 *)((long)puVar12 + uVar21 + 0x11) = uVar18;
            if (uVar21 + 2 < uVar15) {
              uVar18 = *(undefined1 *)((long)param_5 + uVar21 + 2);
            }
            else {
              uVar18 = 0;
            }
            *(undefined1 *)((long)puVar12 + uVar21 + 0x12) = uVar18;
            if (uVar21 + 3 < uVar15) {
              uVar18 = *(undefined1 *)((long)param_5 + uVar21 + 3);
            }
            else {
              uVar18 = 0;
            }
            *(undefined1 *)((long)puVar12 + uVar21 + 0x13) = uVar18;
            uVar31 = uVar21 + 4;
          } while (uVar21 + 4 != 0x100);
          uVar31 = func_0x0099bcf0();
          uVar15 = 0;
          do {
            if (uVar15 < uVar31) {
              uVar18 = *(undefined *)((long)param_6 + uVar15);
            }
            else {
              uVar18 = 0;
            }
            puVar24 = (undefined *)((long)ppppppuVar25 + uVar15);
            puVar24[uVar21 + 4] = uVar18;
            if (uVar15 + 1 < uVar31) {
              uVar18 = *(undefined *)((long)param_6 + uVar15 + 1);
            }
            else {
              uVar18 = 0;
            }
            puVar24[uVar21 + 5] = uVar18;
            if (uVar15 + 2 < uVar31) {
              uVar18 = *(undefined *)((long)param_6 + uVar15 + 2);
            }
            else {
              uVar18 = 0;
            }
            puVar24[uVar21 + 6] = uVar18;
            if (uVar15 + 3 < uVar31) {
              uVar18 = *(undefined *)((long)param_6 + uVar15 + 3);
            }
            else {
              uVar18 = 0;
            }
            puVar24[uVar21 + 7] = uVar18;
            uVar15 = uVar15 + 4;
          } while (uVar15 != 0x100);
          uVar31 = 0;
          *(undefined4 *)(puVar12 + 0x42) = 0;
          *(undefined2 *)((long)puVar12 + 0x214) = *(undefined2 *)(lVar2 + 8);
          *(undefined2 *)((long)puVar12 + 0x216) = (undefined2)uStack_1a8;
          ppuVar20 = (undefined **)0x100;
          param_8 = ppppppuVar25;
          if (ppuVar16 != &puStack_1b0) {
            puVar23 = (uint *)(puVar12 + 0x43);
            param_4 = (undefined **)0x100;
code_r0x0043c0e2:
            param_8 = ppppppuVar25;
            if (puStack_170 != (undefined8 *)0x0) {
              bVar1 = *(byte *)(ppuVar16 + 4);
              param_4 = (undefined **)(ulong)bVar1;
              puVar12 = puStack_170;
              do {
                if (bVar1 < *(byte *)(puVar12 + 4)) {
                  puVar12 = (undefined8 *)*puVar12;
                }
                else {
                  if (bVar1 == *(byte *)(puVar12 + 4)) goto code_r0x0043c119;
                  puVar12 = (undefined8 *)puVar12[1];
                }
                if (puVar12 == (undefined8 *)0x0) break;
              } while( true );
            }
code_r0x0043c2bd:
            ppppppuVar25 = (uint ******)&UNK_00159a03;
            func_0x0032fc70();
            goto code_r0x0043c2c9;
          }
        }
code_r0x0043c27a:
        ppuStack_140 = &puStack_1b0;
        puVar24 = puStack_1b0;
        func_0x0043f8a0(&ppuStack_140);
        _ZN7android22IdmapMatchingResourcesD2Ev(&puStack_198);
        unaff_RBX = param_8;
      }
      func_0x0043eee0(&puStack_150);
      ppppppuVar25 = &pppppuStack_148;
      _ZN7android8String16D2Ev();
      param_4 = ppuVar20;
    }
  }
  else {
    puVar22 = &UNK_0015e471;
code_r0x0043bb7f:
    puVar24 = &UNK_0015b3df;
    ppppppuVar25 = (uint ******)0x6;
    __android_log_print(6,&UNK_0015b3df,puVar22);
    uVar31 = 0x80000000;
  }
  param_8 = unaff_RBX;
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return uVar31;
  }
code_r0x0043c2c9:
  func_0x0099bd00();
  if (((ulong)ppppppuVar25 & 3) == 0) {
    if (puVar24 < (undefined *)0x210) {
      uVar31 = 0;
      __android_log_print(5,&UNK_0015b3df,&UNK_001599e0,puVar24);
    }
    else {
      uVar30 = *(uint *)ppppppuVar25;
      if (uVar30 == 0x504d4449) {
        uVar30 = *(uint *)((long)ppppppuVar25 + 4);
        if (uVar30 == 0xb) {
          if (extraout_RDX != (undefined4 *)0x0) {
            *extraout_RDX = 0xb;
          }
          if (param_4 != (undefined **)0x0) {
            *(uint *)param_4 = *(uint *)(ppppppuVar25 + 1);
          }
          if (puVar26 != (uint *)0x0) {
            *puVar26 = *(uint *)((long)ppppppuVar25 + 0xc);
          }
          if (ppppppuVar28 != (uint ******)0x0) {
            _ZN7android7String85setToEPKc(ppppppuVar28,ppppppuVar25 + 2);
            param_8 = ppppppuVar25;
          }
          uVar31 = CONCAT71((int7)((ulong)param_8 >> 8),1);
          if (puStack_220 != (undefined8 *)0x0) {
            _ZN7android7String85setToEPKc(puStack_220,ppppppuVar25 + 0x22);
          }
          goto code_r0x0043c3d8;
        }
        puVar24 = &UNK_00186a3d;
        uVar27 = 0xb;
      }
      else {
        puVar24 = &UNK_0016b2cf;
        uVar27 = 0x504d4449;
      }
      uVar31 = 0;
      __android_log_print(5,&UNK_0015b3df,puVar24,uVar30,uVar27);
    }
  }
  else {
    uVar31 = 0;
    __android_log_print(6,&UNK_0015b3df,&UNK_00157bc8);
  }
code_r0x0043c3d8:
  return uVar31 & 0xffffffff;
code_r0x0043bee2:
  pppppuVar5 = (uint *****)((long)(pppppuVar5 + 1) + puVar12[5] * 4);
  *param_8 = pppppuVar5;
  ppuVar20 = param_4;
  ppuVar17 = (undefined **)param_4[1];
  if ((undefined **)param_4[1] == (undefined **)0x0) {
    do {
      param_4 = (undefined **)ppuVar20[2];
      bVar33 = ppuVar20 != (undefined **)*param_4;
      ppuVar20 = param_4;
    } while (bVar33);
  }
  else {
    do {
      param_4 = ppuVar17;
      ppuVar17 = (undefined **)*param_4;
    } while ((undefined **)*param_4 != (undefined **)0x0);
  }
  puVar24 = (undefined *)0x0;
  goto joined_r0x0043be83;
code_r0x0043c119:
  ppuVar20 = (undefined **)puVar12[5];
  ppuVar17 = (undefined **)ppuVar16[5];
  *(ushort *)puVar23 = (ushort)*(byte *)((long)ppuVar17 + 0x1e);
  *(ushort *)((long)puVar23 + 2) = (ushort)*(byte *)((long)ppuVar17 + 0x22);
  *(ushort *)(puVar23 + 1) = (ushort)ppuVar20;
  *(ushort *)((long)puVar23 + 6) = *(ushort *)((long)ppuVar17 + 0x1c);
  param_4 = ppuVar20;
  param_8 = (uint ******)(puVar23 + 2);
  if (ppuVar17 != ppuVar16 + 6) {
code_r0x0043c185:
    if (puStack_188 != (undefined8 *)0x0) {
      uVar30 = *(uint *)((long)ppuVar17 + 0x1c);
      param_4 = (undefined **)(ulong)uVar30;
      puVar12 = puStack_188;
      do {
        if (uVar30 < *(uint *)(puVar12 + 4)) {
          puVar12 = (undefined8 *)*puVar12;
        }
        else {
          if (uVar30 == *(uint *)(puVar12 + 4)) goto code_r0x0043c1c0;
          puVar12 = (undefined8 *)puVar12[1];
        }
        if (puVar12 == (undefined8 *)0x0) break;
      } while( true );
    }
    goto code_r0x0043c2bd;
  }
code_r0x0043c221:
  ppuVar17 = (undefined **)ppuVar16[1];
  ppuVar29 = ppuVar16;
  if ((undefined **)ppuVar16[1] == (undefined **)0x0) {
    do {
      ppuVar16 = (undefined **)ppuVar29[2];
      bVar33 = ppuVar29 != (undefined **)*ppuVar16;
      ppuVar29 = ppuVar16;
    } while (bVar33);
  }
  else {
    do {
      ppuVar16 = ppuVar17;
      ppuVar17 = (undefined **)*ppuVar16;
    } while ((undefined **)*ppuVar16 != (undefined **)0x0);
  }
  puVar23 = (uint *)((long)(puVar23 + 2) + (long)ppuVar20 * 4);
  param_4 = ppuVar20;
  param_8 = ppppppuVar25;
  if (ppuVar16 != &puStack_1b0) goto code_r0x0043c0e2;
  goto code_r0x0043c27a;
code_r0x0043c1c0:
  lVar2 = puVar12[5];
  if (lVar2 != 0) {
    puVar24 = (undefined *)0xff;
    func_0x0099bdb0(param_8,0xff,lVar2 * 4);
    param_8 = (uint ******)((long)param_8 + lVar2 * 4);
  }
  *(uint *)param_8 = (uint)*(ushort *)(ppuVar17 + 4);
  ppuVar29 = (undefined **)ppuVar17[1];
  ppuVar32 = ppuVar17;
  if ((undefined **)ppuVar17[1] == (undefined **)0x0) {
    do {
      ppuVar17 = (undefined **)ppuVar32[2];
      bVar33 = ppuVar32 != (undefined **)*ppuVar17;
      ppuVar32 = ppuVar17;
    } while (bVar33);
  }
  else {
    do {
      ppuVar17 = ppuVar29;
      ppuVar29 = (undefined **)*ppuVar17;
    } while ((undefined **)*ppuVar17 != (undefined **)0x0);
  }
  ppppppuVar25 = (uint ******)((long)param_8 + 4);
  param_4 = ppuVar16 + 6;
  param_8 = ppppppuVar25;
  if (ppuVar17 == ppuVar16 + 6) goto code_r0x0043c221;
  goto code_r0x0043c185;
}


