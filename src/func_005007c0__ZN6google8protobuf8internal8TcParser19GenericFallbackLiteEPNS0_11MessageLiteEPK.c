// Function: _ZN6google8protobuf8internal8TcParser19GenericFallbackLiteEPNS0_11MessageLiteEPKcPNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEm
// Address: 005007c0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Type propagation algorithm not settling */

ulong *******
_ZN6google8protobuf8internal8TcParser19GenericFallbackLiteEPNS0_11MessageLiteEPKcPNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEm
          (long param_1,ulong *******param_2,undefined8 ******param_3,uint param_4,
          undefined8 ******param_5,uint param_6)

{
  uint *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  undefined8 *puVar7;
  long *plVar8;
  ulong *******pppppppuVar9;
  long lVar10;
  ulong *******pppppppuVar11;
  uint uVar12;
  undefined8 ******ppppppuVar13;
  ulong ******ppppppuVar14;
  ulong uVar15;
  byte bVar16;
  uint uVar17;
  undefined8 extraout_RDX;
  char extraout_DL;
  uint extraout_EDX;
  uint uVar18;
  undefined *unaff_RBX;
  ulong uVar19;
  int iVar20;
  ulong *******pppppppuVar21;
  long *plVar22;
  long *plVar23;
  long *plVar24;
  ulong *******pppppppuVar25;
  undefined8 ******ppppppuVar26;
  ulong *******pppppppuVar27;
  byte *pbVar28;
  ushort *puVar29;
  ulong *******pppppppuVar30;
  int iVar31;
  ulong *******unaff_R14;
  ulong *******pppppppuVar32;
  ulong *******pppppppuVar33;
  long in_FS_OFFSET;
  bool bVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auStack_140 [8];
  long *plStack_138;
  long *plStack_130;
  undefined1 auStack_120 [8];
  long *plStack_118;
  long *plStack_110;
  ulong uStack_108;
  undefined8 uStack_100;
  long alStack_f8 [5];
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 *****pppppuStack_c0;
  undefined8 *****pppppuStack_b8;
  ulong uStack_b0;
  ulong *******pppppppuStack_a8;
  ulong *******pppppppuStack_a0;
  undefined *puStack_98;
  ulong *******pppppppuStack_90;
  ulong *******pppppppuStack_88;
  undefined8 uStack_80;
  ulong *******pppppppuStack_78;
  ulong *******pppppppuStack_70;
  undefined8 *******pppppppuStack_68;
  undefined8 uStack_60;
  undefined8 *******pppppppuStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 ******ppppppuStack_38;
  undefined *puStack_30;
  
  if (param_2 == (ulong *******)0x0) {
    return (ulong *******)
           _ZZN6google8protobuf8internal8TcParser19GenericFallbackImplINS0_11MessageLiteENSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEEEPKcPS4_SD_PNS1_12ParseContextENS1_11TcFieldDataEPKNS1_16TcParseTableBaseEmE4kOps
    ;
  }
  if ((ulong)*(ushort *)param_5 != 0) {
    puVar1 = (uint *)(param_1 + (ulong)*(ushort *)param_5);
    *puVar1 = *puVar1 | param_6;
  }
  if ((param_4 == 0) || ((param_4 & 7) == 4)) {
    *(uint *)(param_3 + 10) = param_4 - 1;
    return param_2;
  }
  if ((ulong)*(ushort *)((long)param_5 + 2) == 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      puStack_30 = &UNK_0050087c;
      _ZN6google8protobuf8internal16InternalMetadata27mutable_unknown_fields_slowINSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEEEPT_v
                (param_1 + 8);
    }
  }
  else {
    pppppppuStack_70 = (ulong *******)((ulong)*(ushort *)((long)param_5 + 2) + param_1);
    ppppppuVar13 = (undefined8 ******)*param_5[4];
    ppppppuVar26 = (undefined8 ******)(param_1 + 8);
    ppppppuStack_38 = *(undefined8 *******)(in_FS_OFFSET + 0x28);
    pppppppuVar32 = (ulong *******)(ulong)(param_4 >> 3);
    uStack_80 = &UNK_005223e0;
    pppppppuVar11 = (ulong *******)ppppppuVar13;
    param_5 = ppppppuVar26;
    puStack_30 = unaff_RBX;
    puVar7 = (undefined8 *)func_0x0051da00(ppppppuVar13,pppppppuVar32);
    if (puVar7 != (undefined8 *)0x0) {
      uVar12 = param_4 & 7;
      ppppppuVar13 = (undefined8 ******)(ulong)uVar12;
      pppppppuStack_68 = (undefined8 *******)*puVar7;
      pppppppuStack_58 = (undefined8 *******)puVar7[2];
      uStack_50 = puVar7[3];
      uStack_48 = puVar7[4];
      uStack_40 = puVar7[5];
      uStack_60._4_1_ = (byte)*(undefined4 *)((long)puVar7 + 0xc);
      uVar19 = (ulong)uStack_60._4_1_;
      uStack_60._5_1_ = (byte)((uint)*(undefined4 *)((long)puVar7 + 0xc) >> 8);
      bVar16 = *(uint *)(_ZN6google8protobuf8internal14WireFormatLite21kWireTypeForFieldTypeE +
                        uVar19 * 4) - 5 < 0xfffffffd & uVar12 == 2 & uStack_60._5_1_;
      uStack_60 = (uint *)puVar7[1];
      if ((bVar16 != 0) ||
         (*(uint *)(_ZN6google8protobuf8internal14WireFormatLite21kWireTypeForFieldTypeE +
                   uVar19 * 4) == uVar12)) {
        uStack_80 = &UNK_00522487;
        pppppppuVar21 = pppppppuVar32;
        pppppppuVar11 = pppppppuStack_70;
        param_5 = ppppppuVar26;
        pppppppuStack_78 = (ulong *******)param_3;
        pppppppuVar33 =
             (ulong *******)
             _ZN6google8protobuf8internal12ExtensionSet27ParseFieldWithExtensionInfoINSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEEEPKcibRKNS1_13ExtensionInfoEPNS1_16InternalMetadataESC_PNS1_12ParseContextE
                       (pppppppuStack_70,pppppppuVar32,bVar16,&pppppppuStack_68,ppppppuVar26,param_2
                       );
        ppppppuVar13 = *(undefined8 *******)(in_FS_OFFSET + 0x28);
        if (ppppppuVar13 == ppppppuStack_38) {
          return pppppppuVar33;
        }
        goto code_r0x005224b2;
      }
    }
    if (((ulong)*ppppppuVar26 & 1) == 0) {
      uStack_80 = &UNK_005224ad;
      pppppppuVar11 = (ulong *******)ppppppuVar26;
      pppppppuVar21 =
           (ulong *******)
           _ZN6google8protobuf8internal16InternalMetadata27mutable_unknown_fields_slowINSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEEEPT_v
                     ();
    }
    else {
      pppppppuVar21 = (ulong *******)(((ulong)*ppppppuVar26 & 0xfffffffffffffffe) + 8);
    }
    if (*(undefined8 *******)(in_FS_OFFSET + 0x28) != ppppppuStack_38) {
code_r0x005224b2:
      uStack_80 = &UNK_005224b7;
      func_0x0099bd00();
      uStack_b0 = *(long *)(in_FS_OFFSET + 0x28);
      auStack_140 = (undefined1  [8])0x0;
      plStack_138 = (long *)0x0;
      plStack_130 = (long *)0x0;
      iVar31 = 0;
      uVar12 = 0;
      pppppppuStack_a8 = param_2;
      pppppppuStack_a0 = (ulong *******)ppppppuVar26;
      puStack_98 = (undefined *)(ulong)param_4;
      pppppppuStack_90 = (ulong *******)param_3;
      pppppppuStack_88 = pppppppuVar32;
      uStack_80 = &stack0xfffffffffffffff8;
code_r0x00529373:
      do {
        uVar19 = (ulong)uVar12;
        do {
          while( true ) {
            if (*param_5 <= pppppppuVar21) {
              iVar20 = (int)pppppppuVar21 - *(int *)(param_5 + 1);
              if (*(int *)((long)param_5 + 0x1c) == iVar20) {
                pppppppuVar11 = (ulong *******)0x0;
                if (param_5[2] != (undefined8 *****)0x0) {
                  pppppppuVar11 = pppppppuVar21;
                }
                if (0 < iVar20) {
                  pppppppuVar21 = pppppppuVar11;
                }
                goto joined_r0x005299dc;
              }
              auVar35 = _ZN6google8protobuf8internal18EpsCopyInputStream12DoneFallbackILb1EEENSt3__14pairIPKcbEEii
                                  (param_5,iVar20,*(undefined4 *)((long)param_5 + 0x5c));
              pppppppuVar21 = auVar35._0_8_;
              if ((auVar35._8_8_ & 1) != 0) goto joined_r0x005299dc;
            }
            pppppppuVar32 = (ulong *******)((long)pppppppuVar21 + 1);
            bVar16 = *(byte *)pppppppuVar21;
            uVar15 = (ulong)bVar16;
            if (bVar16 == 0x10) break;
            if (bVar16 != 0x1a) {
              if ((char)bVar16 < '\0') {
                uVar12 = ((uint)bVar16 + (uint)*(byte *)pppppppuVar32 * 0x80) - 0x80;
                uVar15 = (ulong)uVar12;
                if (-1 < (char)*(byte *)pppppppuVar32) {
                  pppppppuVar32 = (ulong *******)((long)pppppppuVar21 + 2);
                  goto code_r0x005293d0;
                }
                auVar35 = _ZN6google8protobuf8internal15ReadTagFallbackEPKcj(pppppppuVar21,uVar12);
                pppppppuVar32 = auVar35._0_8_;
                if (auVar35._8_4_ != 0) goto code_r0x005293d8;
                uVar12 = 0;
              }
              else {
code_r0x005293d0:
                auVar35._8_8_ = uVar15;
                auVar35._0_8_ = pppppppuVar32;
                uVar12 = 0;
                if ((int)uVar15 != 0) {
code_r0x005293d8:
                  pppppppuVar32 = auVar35._0_8_;
                  uVar12 = auVar35._8_4_;
                  if ((uVar12 & 7) != 4) {
                    pppppppuVar21 =
                         (ulong *******)
                         _ZN6google8protobuf8internal12ExtensionSet10ParseFieldEmPKcPKNS0_11MessageLiteEPNS1_16InternalMetadataEPNS1_12ParseContextE
                                   (pppppppuVar11,auVar35._8_8_ & 0xffffffff,pppppppuVar32,
                                    extraout_RDX,ppppppuVar13,param_5);
                    goto joined_r0x0052940a;
                  }
                }
              }
              *(uint *)(param_5 + 10) = uVar12 - 1;
              pppppppuVar21 = pppppppuVar32;
              goto joined_r0x005299dc;
            }
            if (iVar31 == 1) {
              pppppppuVar21 =
                   (ulong *******)
                   _ZN6google8protobuf8internal12ExtensionSet10ParseFieldEmPKcPKNS0_11MessageLiteEPNS1_16InternalMetadataEPNS1_12ParseContextE
                             (pppppppuVar11,uVar19 * 8 + 2,pppppppuVar32,extraout_RDX,ppppppuVar13,
                              param_5);
              iVar31 = 3;
joined_r0x0052940a:
              if (pppppppuVar21 == (ulong *******)0x0) goto code_r0x005299bf;
            }
            else {
              auStack_120 = (undefined1  [8])0x0;
              plStack_118 = (long *)0x0;
              plStack_110 = (long *)0x0;
              uVar15 = (ulong)*(byte *)pppppppuVar32;
              if ((char)*(byte *)pppppppuVar32 < '\0') {
                auVar35 = _ZN6google8protobuf8internal16ReadSizeFallbackEPKcj(pppppppuVar32,uVar15);
                puVar29 = auVar35._0_8_;
                if (puVar29 != (ushort *)0x0) {
                  uVar15 = auVar35._8_8_ & 0xffffffff;
                  goto code_r0x005294fe;
                }
code_r0x005295eb:
                pppppppuVar21 = (ulong *******)0x0;
                bVar5 = false;
                bVar34 = false;
              }
              else {
                puVar29 = (ushort *)((long)pppppppuVar21 + 2);
code_r0x005294fe:
                cVar6 = _ZN6google8protobuf8internal18EpsCopyInputStream14CanReadFromPtrEiPKc
                                  (param_5,uVar15,puVar29);
                if (cVar6 == '\0') {
                  pppppppuVar21 =
                       (ulong *******)
                       _ZN6google8protobuf8internal18EpsCopyInputStream18ReadStringFallbackEPKciPNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE
                                 (param_5,puVar29,uVar15,auStack_120);
                  if (pppppppuVar21 == (ulong *******)0x0) goto code_r0x005295eb;
                }
                else {
                  lVar10 = (long)(int)uVar15;
                  _ZN4absl12lts_2026052616strings_internal25ResizeUninitializedTraitsINSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEvE6ResizeEPS9_m
                            (auStack_120,lVar10);
                  plVar8 = (long *)(auStack_120 + 1);
                  if (((ulong)auStack_120 & 1) != 0) {
                    plVar8 = plStack_110;
                  }
                  func_0x0099bda0(plVar8,puVar29,lVar10);
                  pppppppuVar21 = (ulong *******)((long)puVar29 + lVar10);
                }
                bVar5 = true;
                bVar34 = true;
                if (iVar31 == 0) {
                  if (((ulong)auStack_140 & 1) != 0) {
                    _ZdaPvSt11align_val_t(plStack_130,(ulong)auStack_140 & 0xfffffffffffffffe);
                  }
                  auStack_140 = auStack_120;
                  auStack_120 = (undefined1  [8])((ulong)auStack_120 & 0xffffffffffff0000);
                  iVar31 = 2;
                  plStack_138 = plStack_118;
                  plStack_130 = plStack_110;
                }
              }
              if (((ulong)auStack_120 & 1) != 0) {
                _ZdaPvSt11align_val_t(plStack_110,(ulong)auStack_120 & 0xfffffffffffffffe);
                bVar34 = bVar5;
              }
              if (!bVar34) goto code_r0x005299bf;
            }
          }
          uVar17 = (uint)(char)*(ushort *)pppppppuVar32;
          uVar18 = (*(ushort *)pppppppuVar32 & uVar17) + uVar17;
          uVar12 = uVar18 >> 1;
          if ((short)uVar18 < 0) {
            uVar17 = (uint)(char)*(ushort *)((long)pppppppuVar21 + 3);
            uVar18 = (*(ushort *)((long)pppppppuVar21 + 3) & uVar17) + uVar17;
            uVar12 = (uVar12 + uVar18 * 0x2000) - 0x4000;
            lVar10 = 2;
            if ((short)uVar18 < 0) {
              uVar17 = (uint)(char)*(ushort *)((long)pppppppuVar21 + 5);
              uVar18 = (*(ushort *)((long)pppppppuVar21 + 5) & uVar17) + uVar17;
              iVar20 = uVar12 + uVar18 * 0x8000000;
              uVar12 = iVar20 + 0xf0000000;
              lVar10 = 4;
              if ((short)uVar18 < 0) {
                uVar17 = (uint)(char)*(ushort *)((long)pppppppuVar21 + 7);
                uVar18 = (*(ushort *)((long)pppppppuVar21 + 7) & uVar17) + uVar17;
                if ((short)uVar18 < 0) {
                  uVar17 = (uint)(char)*(ushort *)((long)pppppppuVar21 + 9);
                  uVar18 = (*(ushort *)((long)pppppppuVar21 + 9) & uVar17) + uVar17;
                  if ((short)uVar18 < 0) goto code_r0x005299bf;
                  uVar12 = iVar20 + 0xf0000000;
                  lVar10 = 8;
                }
                else {
                  uVar12 = iVar20 + 0xf0000000;
                  lVar10 = 6;
                }
              }
            }
            pppppppuVar32 = (ulong *******)((long)pppppppuVar32 + lVar10);
            bVar34 = uVar18 < uVar17;
          }
          else {
            bVar34 = uVar18 < uVar17;
          }
          if (uVar12 == 0) goto code_r0x005299bf;
          pppppppuVar21 = (ulong *******)((long)pppppppuVar32 + (ulong)bVar34 + 1);
          if (iVar31 == 0) {
            iVar31 = 1;
            goto code_r0x00529373;
          }
        } while (iVar31 != 2);
        lVar10 = func_0x0051da00(extraout_RDX,uVar12);
        if (lVar10 == 0) {
code_r0x0052985f:
          plVar23 = plStack_130;
          plVar8 = plStack_138;
          if (((ulong)auStack_140 & 1) == 0) {
            plVar23 = (long *)(auStack_140 + 1);
            plVar8 = (long *)((ulong)auStack_140 >> 1 & 0x7f);
          }
          if (((ulong)*ppppppuVar13 & 1) == 0) {
            lVar10 = _ZN6google8protobuf8internal16InternalMetadata27mutable_unknown_fields_slowINSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEEEPT_v
                               (ppppppuVar13,plVar23);
          }
          else {
            lVar10 = ((ulong)*ppppppuVar13 & 0xfffffffffffffffe) + 8;
          }
          _ZN6google8protobuf8internal20WriteLengthDelimitedEjNSt3__117basic_string_viewIcNS2_11char_traitsIcEEEEPNS2_12basic_stringIcS5_NS2_9allocatorIcEEEE
                    (uVar12,plVar23,plVar8,lVar10);
          iVar31 = 3;
          goto code_r0x00529373;
        }
        uVar2 = *(undefined8 *)(lVar10 + 0x10);
        uVar3 = *(undefined8 *)(lVar10 + 0x20);
        if ((*(char *)(lVar10 + 0xd) == '\x01') &&
           (*(int *)(_ZN6google8protobuf8internal14WireFormatLite21kWireTypeForFieldTypeE +
                    (ulong)*(byte *)(lVar10 + 0xc) * 4) - 5U < 0xfffffffd)) {
code_r0x00529721:
          plVar8 = (long *)_ZN6google8protobuf8internal12ExtensionSet10AddMessageEihPKNS1_9ClassDataEPKNS0_15FieldDescriptorE
                                     (pppppppuVar11,uVar12,0xb,
                                      *(undefined8 *)(*(long *)(lVar10 + 0x18) + 0x20));
        }
        else {
          if (*(int *)(_ZN6google8protobuf8internal14WireFormatLite21kWireTypeForFieldTypeE +
                      (ulong)*(byte *)(lVar10 + 0xc) * 4) != 2) goto code_r0x0052985f;
          if (*(char *)(lVar10 + 0xd) == '\x01') goto code_r0x00529721;
          puVar7 = (undefined8 *)
                   _ZN6google8protobuf8internal12ExtensionSet6InsertEi(pppppppuVar11,uVar12);
          puVar7[2] = uVar3;
          if (extraout_DL == '\x01') {
            *(undefined2 *)(puVar7 + 1) = 0xb;
            *(byte *)((long)puVar7 + 10) = (*(byte *)((long)puVar7 + 10) & 0xfa) + 1;
            plVar8 = (long *)_ZNK6google8protobuf11MessageLite3NewEPNS0_5ArenaE
                                       (uVar2,*pppppppuVar11);
            *puVar7 = plVar8;
            *(byte *)((long)puVar7 + 10) = *(byte *)((long)puVar7 + 10) & 0xfd;
          }
          else {
            bVar16 = *(byte *)((long)puVar7 + 10);
            *(byte *)((long)puVar7 + 10) = bVar16 & 0xfd;
            plVar8 = (long *)*puVar7;
            if ((bVar16 & 4) != 0) {
              plVar8 = (long *)(**(code **)(*plVar8 + 0x28))(plVar8,uVar2,*pppppppuVar11);
            }
          }
        }
        alStack_f8[3] = 0;
        alStack_f8[4] = 0;
        alStack_f8[1] = 0;
        alStack_f8[2] = 0;
        uStack_100 = 0;
        alStack_f8[0] = 0;
        plStack_110 = (long *)0x0;
        uStack_108 = 0;
        auStack_120 = (undefined1  [8])0x0;
        plStack_118 = (long *)0x0;
        uStack_c8 = *(undefined4 *)(param_5 + 0xb);
        uStack_c4 = 0xffff8000;
        pppppuStack_c0 = param_5[0xc];
        pppppuStack_b8 = param_5[0xd];
        plVar22 = plStack_130;
        plVar23 = plStack_138;
        if (((ulong)auStack_140 & 1) == 0) {
          plVar22 = (long *)(auStack_140 + 1);
          plVar23 = (long *)((ulong)auStack_140 >> 1 & 0x7f);
        }
        uStack_d0 = 0;
        if (plVar23 < (long *)0x11) {
          if (plVar23 == (long *)0x0) {
            plVar24 = alStack_f8;
            plStack_110 = (long *)0x0;
            plStack_118 = plVar24;
          }
          else {
            func_0x0099c110(alStack_f8,plVar22,plVar23,0x48);
            plVar24 = alStack_f8;
            uStack_108 = uStack_108 & 0xffffffff;
            plStack_110 = (long *)0x0;
            plStack_118 = (long *)((long)plVar23 + (long)plVar24);
            if (alStack_f8[4] == 1) {
              alStack_f8[4] = (long)plVar22 - (long)plVar24;
            }
          }
        }
        else {
          uStack_108 = 0x1000000000;
          plStack_110 = alStack_f8;
          plVar24 = plVar22;
          plStack_118 = (long *)((undefined1 *)((long)plVar22 + (long)plVar23) + -0x10);
        }
        auStack_120 = (undefined1  [8])plStack_118;
        lVar10 = _ZN6google8protobuf11MessageLite14_InternalParseEPKcPNS0_8internal12ParseContextE
                           (plVar8,plVar24,auStack_120);
        if (lVar10 == 0) goto code_r0x005299bf;
        iVar31 = 3;
        if ((int)uStack_d0 != 0) {
code_r0x005299bf:
          pppppppuVar21 = (ulong *******)0x0;
joined_r0x005299dc:
          if (((ulong)auStack_140 & 1) != 0) {
            _ZdaPvSt11align_val_t(plStack_130,(ulong)auStack_140 & 0xfffffffffffffffe);
          }
          if (*(long *)(in_FS_OFFSET + 0x28) != uStack_b0) {
            func_0x0099bd00();
            pcVar4 = (code *)swi(3);
            pppppppuVar11 = (ulong *******)(*pcVar4)();
            return pppppppuVar11;
          }
          return pppppppuVar21;
        }
      } while( true );
    }
  }
  pppppppuVar32 = *(ulong ********)(in_FS_OFFSET + 0x28);
  pppppppuVar33 = (ulong *******)(ulong)param_4;
  pppppppuVar11 = (ulong *******)&stack0xffffffffffffffe8;
  pppppppuVar9 = (ulong *******)
                 _ZN6google8protobuf8internal11FieldParserINS1_28UnknownFieldLiteParserHelperEEEPKcmRT_S5_PNS1_12ParseContextE
                           (pppppppuVar33,pppppppuVar11,param_2,param_3);
  pppppppuVar21 = *(ulong ********)(in_FS_OFFSET + 0x28);
  if (pppppppuVar21 == pppppppuVar32) {
    return pppppppuVar9;
  }
  func_0x0099bd00();
  uVar19 = (ulong)extraout_EDX;
  uStack_50 = *(ulong *)(in_FS_OFFSET + 0x28);
  uStack_80 = (undefined1 *)CONCAT44(extraout_EDX,(undefined4)uStack_80);
  pppppppuVar30 = (ulong *******)(long)(int)extraout_EDX;
  pppppppuStack_68 = &pppppppuStack_78;
  uStack_60 = (uint *)((long)&uStack_80 + 4);
  pppppppuStack_58 = &pppppppuStack_70;
  pppppppuVar32 = (ulong *******)*pppppppuVar21;
  iVar31 = (int)pppppppuVar11;
  pppppppuVar27 = pppppppuVar33;
  pppppppuVar9 = pppppppuVar33;
  pppppppuStack_78 = pppppppuVar11;
  pppppppuStack_70 = pppppppuVar33;
  if (((ulong)pppppppuVar32 & 3) == 0) {
    if (extraout_EDX < 8) {
      pppppppuVar9 = (ulong *******)((long)pppppppuVar21 + 1);
      uVar12 = (*(int *)(pppppppuVar33 + 1) - iVar31) + 0x10;
      pppppppuStack_90 = pppppppuVar21;
      pppppppuStack_88 = pppppppuVar9;
      do {
        unaff_R14 = (ulong *******)(ulong)uVar12;
        pppppppuVar25 = pppppppuVar32;
        if (pppppppuVar33[2] == (ulong ******)0x0) {
code_r0x005596bf:
          ppppppuVar13 = (undefined8 ******)0x0;
          goto code_r0x005596c1;
        }
        puStack_98 = &UNK_0055926c;
        pppppppuVar27 = pppppppuVar9;
        func_0x0099bda0(pppppppuVar9,pppppppuVar11,(long)(int)uVar12);
        pppppppuVar9 = (ulong *******)((long)pppppppuVar9 + (long)(int)uVar12);
        pppppppuVar25 = pppppppuVar11;
        if (*(int *)((long)pppppppuVar33 + 0x1c) < 0x11) goto code_r0x005596bf;
        pppppppuVar25 = (ulong *******)0x0;
        puStack_98 = &UNK_00559289;
        pppppppuVar27 = pppppppuVar33;
        lVar10 = _ZN6google8protobuf8internal18EpsCopyInputStream10NextBufferILb1EEEPKcii
                           (pppppppuVar33,0,0xffffffff);
        ppppppuVar14 = pppppppuVar33[1];
        if (lVar10 == 0) {
          *(undefined4 *)(pppppppuVar33 + 10) = 1;
          *pppppppuVar33 = ppppppuVar14;
          goto code_r0x005596bf;
        }
        uVar18 = (int)uVar19 - uVar12;
        uVar19 = (ulong)uVar18;
        uVar12 = ((int)lVar10 - (int)ppppppuVar14) + *(int *)((long)pppppppuVar33 + 0x1c);
        *(uint *)((long)pppppppuVar33 + 0x1c) = uVar12;
        uVar12 = (int)uVar12 >> 0x1f & uVar12;
        pppppppuVar32 = (ulong *******)(ulong)uVar12;
        *pppppppuVar33 = (ulong ******)((long)(int)uVar12 + (long)ppppppuVar14);
        pppppppuVar11 = (ulong *******)(lVar10 + 0x10);
        uVar12 = ((int)ppppppuVar14 - (int)pppppppuVar11) + 0x10;
      } while (uVar12 < uVar18);
      pppppppuVar33 = (ulong *******)(long)(int)uVar18;
      puStack_98 = &UNK_005592d9;
      pppppppuVar25 = pppppppuVar11;
      pppppppuVar27 = pppppppuVar9;
      func_0x0099bda0(pppppppuVar9,pppppppuVar11,pppppppuVar33);
      pppppppuVar9 = (ulong *******)((long)pppppppuVar9 + (long)pppppppuVar33);
      ppppppuVar13 = (undefined8 ******)(uVar19 + (long)pppppppuVar11);
      unaff_R14 = pppppppuVar11;
code_r0x005596c1:
      *pppppppuStack_68 = ppppppuVar13;
      *pppppppuStack_90 =
           (ulong ******)
           (((ulong)*pppppppuStack_90 & 0xffffffffffffff00) +
           ((long)pppppppuVar9 - (long)pppppppuStack_88) * 4);
      goto code_r0x00559703;
    }
code_r0x00559304:
    if (extraout_EDX < 0xff) {
      puStack_98 = &UNK_0055931e;
      pppppppuStack_90 =
           (ulong *******)
           _ZN6google8protobuf8internal11MicroString16AllocateMicroRepEmPNS0_5ArenaE
                     (pppppppuVar21,pppppppuVar30,param_5);
      pppppppuVar33 = pppppppuStack_70;
      pppppppuVar32 = (ulong *******)((long)pppppppuStack_90 + 2);
      pppppppuVar11 = (ulong *******)*pppppppuStack_68;
      uVar19 = (ulong)*uStack_60;
      uVar12 = (*(int *)(pppppppuStack_70 + 1) - (int)pppppppuVar11) + 0x10;
      pppppppuStack_88 = pppppppuVar32;
      do {
        pppppppuVar25 = pppppppuVar30;
        if (pppppppuVar33[2] == (ulong ******)0x0) goto code_r0x00559661;
        puStack_98 = &UNK_0055936c;
        pppppppuVar21 = pppppppuVar32;
        func_0x0099bda0(pppppppuVar32,pppppppuVar11,(long)(int)uVar12);
        pppppppuVar32 = (ulong *******)((long)pppppppuVar32 + (long)(int)uVar12);
        pppppppuVar25 = pppppppuVar11;
        if (*(int *)((long)pppppppuVar33 + 0x1c) < 0x11) goto code_r0x00559661;
        pppppppuVar25 = (ulong *******)0x0;
        puStack_98 = &UNK_00559389;
        pppppppuVar21 = pppppppuVar33;
        lVar10 = _ZN6google8protobuf8internal18EpsCopyInputStream10NextBufferILb1EEEPKcii
                           (pppppppuVar33,0,0xffffffff);
        ppppppuVar14 = pppppppuVar33[1];
        if (lVar10 == 0) goto code_r0x00559656;
        uVar18 = (int)uVar19 - uVar12;
        uVar19 = (ulong)uVar18;
        uVar12 = ((int)lVar10 - (int)ppppppuVar14) + *(int *)((long)pppppppuVar33 + 0x1c);
        *(uint *)((long)pppppppuVar33 + 0x1c) = uVar12;
        uVar12 = (int)uVar12 >> 0x1f & uVar12;
        pppppppuVar30 = (ulong *******)(ulong)uVar12;
        *pppppppuVar33 = (ulong ******)((long)(int)uVar12 + (long)ppppppuVar14);
        pppppppuVar11 = (ulong *******)(lVar10 + 0x10);
        uVar12 = ((int)ppppppuVar14 - (int)pppppppuVar11) + 0x10;
      } while (uVar12 < uVar18);
code_r0x00559545:
      pppppppuVar33 = (ulong *******)(long)(int)uVar19;
      puStack_98 = &UNK_00559559;
      pppppppuVar25 = pppppppuVar11;
      pppppppuVar27 = pppppppuVar32;
      func_0x0099bda0(pppppppuVar32,pppppppuVar11,pppppppuVar33);
      iVar31 = (int)pppppppuVar32 + (int)uVar19;
      ppppppuVar13 = (undefined8 ******)(uVar19 + (long)pppppppuVar11);
      goto code_r0x00559663;
    }
    if (50000000 < extraout_EDX) {
      puStack_98 = &UNK_0055964d;
      pppppppuVar25 =
           (ulong *******)
           _ZN6google8protobuf8internal11MicroString17AllocateStringRepEPNS0_5ArenaE
                     (pppppppuVar21,param_5);
      pppppppuVar33 = pppppppuVar9;
code_r0x0055967e:
      pppppppuVar27 = (ulong *******)&pppppppuStack_58;
      puStack_98 = &UNK_00559683;
      func_0x00559b40();
      goto code_r0x00559703;
    }
    puStack_98 = &UNK_005593e1;
    pppppppuStack_90 =
         (ulong *******)
         _ZN6google8protobuf8internal11MicroString16AllocateOwnedRepEmPNS0_5ArenaE
                   (pppppppuVar21,pppppppuVar30,param_5);
    pppppppuVar33 = pppppppuStack_70;
    pppppppuVar32 = pppppppuStack_90 + 2;
    pppppppuVar11 = (ulong *******)*pppppppuStack_68;
    uVar19 = (ulong)*uStack_60;
    uVar12 = (*(int *)(pppppppuStack_70 + 1) - (int)pppppppuVar11) + 0x10;
    pppppppuVar27 = pppppppuVar21;
    pppppppuStack_88 = pppppppuVar32;
    do {
      pppppppuVar25 = pppppppuVar30;
      if (pppppppuVar33[2] == (ulong ******)0x0) goto code_r0x005596ee;
      puStack_98 = &UNK_0055942c;
      pppppppuVar27 = pppppppuVar32;
      func_0x0099bda0(pppppppuVar32,pppppppuVar11,(long)(int)uVar12);
      pppppppuVar32 = (ulong *******)((long)pppppppuVar32 + (long)(int)uVar12);
      pppppppuVar25 = pppppppuVar11;
      if (*(int *)((long)pppppppuVar33 + 0x1c) < 0x11) goto code_r0x005596ee;
      pppppppuVar25 = (ulong *******)0x0;
      puStack_98 = &UNK_00559449;
      pppppppuVar27 = pppppppuVar33;
      lVar10 = _ZN6google8protobuf8internal18EpsCopyInputStream10NextBufferILb1EEEPKcii
                         (pppppppuVar33,0,0xffffffff);
      ppppppuVar14 = pppppppuVar33[1];
      if (lVar10 == 0) goto code_r0x005596e3;
      uVar18 = (int)uVar19 - uVar12;
      uVar19 = (ulong)uVar18;
      uVar12 = ((int)lVar10 - (int)ppppppuVar14) + *(int *)((long)pppppppuVar33 + 0x1c);
      *(uint *)((long)pppppppuVar33 + 0x1c) = uVar12;
      uVar12 = (int)uVar12 >> 0x1f & uVar12;
      pppppppuVar30 = (ulong *******)(ulong)uVar12;
      *pppppppuVar33 = (ulong ******)((long)(int)uVar12 + (long)ppppppuVar14);
      pppppppuVar11 = (ulong *******)(lVar10 + 0x10);
      uVar12 = ((int)ppppppuVar14 - (int)pppppppuVar11) + 0x10;
    } while (uVar12 < uVar18);
  }
  else {
    pppppppuVar25 = pppppppuVar32;
    if (((ulong)pppppppuVar32 & 2) != 0) {
      if (*(byte *)((long)pppppppuVar32 + -1) < extraout_EDX) goto code_r0x005592f2;
      pppppppuVar25 = (ulong *******)((long)pppppppuVar32 + -2);
      uVar12 = (*(int *)(pppppppuVar33 + 1) - iVar31) + 0x10;
      pppppppuVar21 = pppppppuVar33;
      pppppppuStack_90 = pppppppuVar25;
      pppppppuStack_88 = pppppppuVar32;
      do {
        if (pppppppuVar33[2] == (ulong ******)0x0) goto code_r0x00559661;
        puStack_98 = &UNK_005594ec;
        pppppppuVar21 = pppppppuVar32;
        func_0x0099bda0(pppppppuVar32,pppppppuVar11,(long)(int)uVar12);
        pppppppuVar32 = (ulong *******)((long)pppppppuVar32 + (long)(int)uVar12);
        pppppppuVar25 = pppppppuVar11;
        if (*(int *)((long)pppppppuVar33 + 0x1c) < 0x11) goto code_r0x00559661;
        pppppppuVar25 = (ulong *******)0x0;
        puStack_98 = &UNK_00559509;
        pppppppuVar21 = pppppppuVar33;
        lVar10 = _ZN6google8protobuf8internal18EpsCopyInputStream10NextBufferILb1EEEPKcii
                           (pppppppuVar33,0,0xffffffff);
        ppppppuVar14 = pppppppuVar33[1];
        if (lVar10 == 0) goto code_r0x00559656;
        uVar18 = (int)uVar19 - uVar12;
        uVar19 = (ulong)uVar18;
        uVar12 = ((int)lVar10 - (int)ppppppuVar14) + *(int *)((long)pppppppuVar33 + 0x1c);
        *(uint *)((long)pppppppuVar33 + 0x1c) = uVar12;
        uVar12 = (int)uVar12 >> 0x1f & uVar12;
        pppppppuVar25 = (ulong *******)(ulong)uVar12;
        *pppppppuVar33 = (ulong ******)((long)(int)uVar12 + (long)ppppppuVar14);
        pppppppuVar11 = (ulong *******)(lVar10 + 0x10);
        uVar12 = ((int)ppppppuVar14 - (int)pppppppuVar11) + 0x10;
      } while (uVar12 < uVar18);
      goto code_r0x00559545;
    }
    if (((ulong)pppppppuVar32 & 1) == 0) {
code_r0x005592f2:
      if (param_5 == (undefined8 ******)0x0) {
        puStack_98 = &UNK_00559574;
        pppppppuVar27 = pppppppuVar21;
        _ZN6google8protobuf8internal11MicroString11DestroySlowEv();
        unaff_R14 = (ulong *******)0x0;
        pppppppuVar9 = pppppppuVar21;
        pppppppuVar33 = pppppppuStack_70;
      }
      pppppppuStack_70 = pppppppuVar33;
      if (extraout_EDX < 8) {
        *(byte *)pppppppuVar21 = 0;
        pppppppuVar11 = (ulong *******)((long)pppppppuVar21 + 1);
        pppppppuVar32 = (ulong *******)*pppppppuStack_68;
        uVar12 = *uStack_60;
        uVar18 = (*(int *)(pppppppuVar33 + 1) - (int)pppppppuVar32) + 0x10;
        pppppppuStack_90 = pppppppuVar21;
        pppppppuStack_88 = pppppppuVar11;
        do {
          unaff_R14 = (ulong *******)(ulong)uVar18;
          if (pppppppuVar33[2] == (ulong ******)0x0) {
code_r0x00559690:
            ppppppuVar13 = (undefined8 ******)0x0;
            goto code_r0x00559692;
          }
          puStack_98 = &UNK_005595cc;
          pppppppuVar27 = pppppppuVar11;
          func_0x0099bda0(pppppppuVar11,pppppppuVar32,(long)(int)uVar18);
          pppppppuVar11 = (ulong *******)((long)pppppppuVar11 + (long)(int)uVar18);
          pppppppuVar25 = pppppppuVar32;
          if (*(int *)((long)pppppppuVar33 + 0x1c) < 0x11) goto code_r0x00559690;
          pppppppuVar25 = (ulong *******)0x0;
          puStack_98 = &UNK_005595e9;
          pppppppuVar27 = pppppppuVar33;
          lVar10 = _ZN6google8protobuf8internal18EpsCopyInputStream10NextBufferILb1EEEPKcii
                             (pppppppuVar33,0,0xffffffff);
          ppppppuVar14 = pppppppuVar33[1];
          if (lVar10 == 0) {
            *(undefined4 *)(pppppppuVar33 + 10) = 1;
            *pppppppuVar33 = ppppppuVar14;
            goto code_r0x00559690;
          }
          uVar12 = uVar12 - uVar18;
          uVar18 = ((int)lVar10 - (int)ppppppuVar14) + *(int *)((long)pppppppuVar33 + 0x1c);
          *(uint *)((long)pppppppuVar33 + 0x1c) = uVar18;
          uVar18 = (int)uVar18 >> 0x1f & uVar18;
          pppppppuVar25 = (ulong *******)(ulong)uVar18;
          *pppppppuVar33 = (ulong ******)((long)(int)uVar18 + (long)ppppppuVar14);
          pppppppuVar32 = (ulong *******)(lVar10 + 0x10);
          uVar18 = ((int)ppppppuVar14 - (int)pppppppuVar32) + 0x10;
        } while (uVar18 < uVar12);
        pppppppuVar33 = (ulong *******)(long)(int)uVar12;
        puStack_98 = &UNK_0055963a;
        pppppppuVar25 = pppppppuVar32;
        pppppppuVar27 = pppppppuVar11;
        func_0x0099bda0(pppppppuVar11,pppppppuVar32,pppppppuVar33);
        pppppppuVar11 = (ulong *******)((long)pppppppuVar11 + (long)pppppppuVar33);
        ppppppuVar13 = (undefined8 ******)((ulong)uVar12 + (long)pppppppuVar32);
        unaff_R14 = pppppppuVar32;
code_r0x00559692:
        *pppppppuStack_68 = ppppppuVar13;
        uVar19 = (long)pppppppuVar11 - (long)pppppppuStack_88;
        *pppppppuStack_90 =
             (ulong ******)(((ulong)*pppppppuStack_90 & 0xffffffffffffff00) + uVar19 * 4);
        goto code_r0x00559703;
      }
      goto code_r0x00559304;
    }
    uVar12 = *(uint *)((long)pppppppuVar32 + 0xb);
    pppppppuVar27 = (ulong *******)(ulong)uVar12;
    pppppppuVar25 = (ulong *******)((long)pppppppuVar32 + -1);
    uVar18 = 3;
    if (uVar12 < 3) {
      uVar18 = uVar12;
    }
    if (uVar18 == 2) goto code_r0x0055967e;
    if ((uVar18 != 3) || (pppppppuVar27 < pppppppuVar30)) goto code_r0x005592f2;
    pppppppuVar32 = (ulong *******)((long)pppppppuVar32 + 0xf);
    uVar12 = (*(int *)(pppppppuVar33 + 1) - iVar31) + 0x10;
    pppppppuStack_90 = pppppppuVar25;
    pppppppuStack_88 = pppppppuVar32;
    do {
      if (pppppppuVar33[2] == (ulong ******)0x0) goto code_r0x005596ee;
      puStack_98 = &UNK_005591cc;
      pppppppuVar27 = pppppppuVar32;
      func_0x0099bda0(pppppppuVar32,pppppppuVar11,(long)(int)uVar12);
      pppppppuVar32 = (ulong *******)((long)pppppppuVar32 + (long)(int)uVar12);
      pppppppuVar25 = pppppppuVar11;
      if (*(int *)((long)pppppppuVar33 + 0x1c) < 0x11) goto code_r0x005596ee;
      pppppppuVar25 = (ulong *******)0x0;
      puStack_98 = &UNK_005591e9;
      pppppppuVar27 = pppppppuVar33;
      lVar10 = _ZN6google8protobuf8internal18EpsCopyInputStream10NextBufferILb1EEEPKcii
                         (pppppppuVar33,0,0xffffffff);
      ppppppuVar14 = pppppppuVar33[1];
      if (lVar10 == 0) goto code_r0x005596e3;
      uVar18 = (int)uVar19 - uVar12;
      uVar19 = (ulong)uVar18;
      uVar12 = ((int)lVar10 - (int)ppppppuVar14) + *(int *)((long)pppppppuVar33 + 0x1c);
      *(uint *)((long)pppppppuVar33 + 0x1c) = uVar12;
      uVar12 = (int)uVar12 >> 0x1f & uVar12;
      pppppppuVar25 = (ulong *******)(ulong)uVar12;
      *pppppppuVar33 = (ulong ******)((long)(int)uVar12 + (long)ppppppuVar14);
      pppppppuVar11 = (ulong *******)(lVar10 + 0x10);
      uVar12 = ((int)ppppppuVar14 - (int)pppppppuVar11) + 0x10;
    } while (uVar12 < uVar18);
  }
  pppppppuVar33 = (ulong *******)(long)(int)uVar19;
  puStack_98 = &UNK_00559499;
  pppppppuVar25 = pppppppuVar11;
  pppppppuVar27 = pppppppuVar32;
  func_0x0099bda0(pppppppuVar32,pppppppuVar11,pppppppuVar33);
  iVar31 = (int)pppppppuVar32 + (int)uVar19;
  ppppppuVar13 = (undefined8 ******)(uVar19 + (long)pppppppuVar11);
  goto code_r0x005596f0;
code_r0x00559656:
  *(undefined4 *)(pppppppuVar33 + 10) = 1;
  *pppppppuVar33 = ppppppuVar14;
code_r0x00559661:
  iVar31 = (int)pppppppuVar32;
  ppppppuVar13 = (undefined8 ******)0x0;
  pppppppuVar27 = pppppppuVar21;
code_r0x00559663:
  *pppppppuStack_68 = ppppppuVar13;
  unaff_R14 = (ulong *******)(ulong)(uint)(iVar31 - (int)pppppppuStack_88);
  *(byte *)pppppppuStack_90 = (byte)(iVar31 - (int)pppppppuStack_88);
  goto code_r0x00559703;
code_r0x005596e3:
  *(undefined4 *)(pppppppuVar33 + 10) = 1;
  *pppppppuVar33 = ppppppuVar14;
code_r0x005596ee:
  iVar31 = (int)pppppppuVar32;
  ppppppuVar13 = (undefined8 ******)0x0;
code_r0x005596f0:
  *pppppppuStack_68 = ppppppuVar13;
  unaff_R14 = (ulong *******)(ulong)(uint)(iVar31 - (int)pppppppuStack_88);
  *(int *)(pppppppuStack_90 + 1) = iVar31 - (int)pppppppuStack_88;
code_r0x00559703:
  uVar15 = *(ulong *)(in_FS_OFFSET + 0x28);
  if (uVar15 == uStack_50) {
    return pppppppuStack_78;
  }
  puStack_98 = &UNK_0055972a;
  auVar36 = func_0x0099bd00();
  uStack_b0 = uVar19;
  pppppppuStack_a8 = unaff_R14;
  pppppppuStack_a0 = pppppppuVar33;
  puStack_98 = &stack0xffffffffffffffe0;
  if (pppppppuVar25 <= pppppppuVar27) {
    return (ulong *******)0x0;
  }
  do {
    pppppuStack_b8 = auVar36._0_8_;
    bVar16 = *(byte *)pppppppuVar27;
    uVar12 = (uint)bVar16;
    if ((char)bVar16 < '\0') {
      uVar15 = 0;
      uVar12 = ((uint)bVar16 + (uint)*(byte *)((long)pppppppuVar27 + 1) * 0x80) - 0x80;
      pppppppuVar11 = (ulong *******)((long)pppppppuVar27 + 2);
      if ((char)*(byte *)((long)pppppppuVar27 + 1) < '\0') {
        uVar12 = (uVar12 + (uint)*(byte *)pppppppuVar11 * 0x4000) - 0x4000;
        lVar10 = 2;
        if ((char)*(byte *)pppppppuVar11 < '\0') {
          uVar12 = (uVar12 + (uint)*(byte *)((long)pppppppuVar27 + 3) * 0x200000) - 0x200000;
          lVar10 = 3;
          if ((char)*(byte *)((long)pppppppuVar27 + 3) < '\0') {
            if ((char)*(byte *)((long)pppppppuVar27 + 4) < '\0') {
code_r0x0055992c:
              uVar15 = 0;
code_r0x0055992e:
              return (ulong *******)(uVar15 & 0xffffffff);
            }
            uVar12 = uVar12 + (uint)*(byte *)((long)pppppppuVar27 + 4) * 0x10000000 + 0xf0000000;
            lVar10 = 4;
          }
        }
        uVar15 = 0;
        pppppppuVar11 = (ulong *******)((long)pppppppuVar27 + lVar10 + 1);
      }
    }
    else {
      pppppppuVar11 = (ulong *******)((long)pppppppuVar27 + 1);
    }
    if (pppppppuVar25 < pppppppuVar11) goto code_r0x0055992c;
    uVar15 = CONCAT71((int7)(uVar15 >> 8),1);
    if (uVar12 == 0) goto code_r0x0055992e;
    iVar31 = auVar36._8_4_;
    switch(uVar12 & 7) {
    case 0:
      uVar15 = 0;
      if ((char)*(byte *)pppppppuVar11 < '\0') {
        pppppuStack_c0 = (undefined8 *****)&UNK_00559866;
        pppppppuVar11 =
             (ulong *******)
             _ZN6google8protobuf8internal17VarintParseSlow64EPKcj
                       (pppppppuVar11,*(byte *)pppppppuVar11);
        auVar36._8_8_ = auVar36._8_8_ & 0xffffffff;
        auVar36._0_8_ = pppppuStack_b8;
        if (pppppppuVar11 == (ulong *******)0x0) goto code_r0x0055992c;
      }
      else {
        pppppppuVar11 = (ulong *******)((long)pppppppuVar11 + 1);
      }
      break;
    case 1:
      pppppppuVar11 = pppppppuVar11 + 1;
      break;
    case 2:
      bVar16 = *(byte *)pppppppuVar11;
      uVar12 = (uint)bVar16;
      pbVar28 = (byte *)((long)pppppppuVar11 + 1);
      if ((char)bVar16 < '\0') {
        uVar12 = ((uint)bVar16 + (uint)*pbVar28 * 0x80) - 0x80;
        lVar10 = 1;
        if ((char)*pbVar28 < '\0') {
          uVar12 = (uVar12 + (uint)*(byte *)((long)pppppppuVar11 + 2) * 0x4000) - 0x4000;
          lVar10 = 2;
          if ((char)*(byte *)((long)pppppppuVar11 + 2) < '\0') {
            uVar12 = (uVar12 + (uint)*(byte *)((long)pppppppuVar11 + 3) * 0x200000) - 0x200000;
            lVar10 = 3;
            if ((char)*(byte *)((long)pppppppuVar11 + 3) < '\0') {
              if ((*(byte *)((long)pppppppuVar11 + 4) < 8) &&
                 (uVar12 = uVar12 + (uint)*(byte *)((long)pppppppuVar11 + 4) * 0x10000000 +
                           0xf0000000, uVar12 < 0x7ffffff0)) {
                pbVar28 = (byte *)((long)pppppppuVar11 + 5);
                goto code_r0x00559827;
              }
              goto code_r0x0055992c;
            }
          }
        }
        pbVar28 = (byte *)((long)pppppppuVar11 + lVar10 + 1);
      }
code_r0x00559827:
      uVar15 = (long)pppppppuVar25 - (long)pbVar28;
      if ((long)uVar15 < (long)(int)uVar12) goto code_r0x0055992c;
      pppppppuVar11 = (ulong *******)(pbVar28 + (int)uVar12);
      break;
    case 3:
      auVar36._8_4_ = iVar31 + 1;
      auVar36._0_8_ = pppppuStack_b8;
      auVar36._12_4_ = 0;
      break;
    case 4:
      if (iVar31 < 1) goto code_r0x0055992e;
      auVar36._8_4_ = iVar31 + -1;
      auVar36._0_8_ = pppppuStack_b8;
      auVar36._12_4_ = 0;
      break;
    case 5:
      pppppppuVar11 = (ulong *******)((long)pppppppuVar11 + 4);
      break;
    default:
      goto code_r0x0055992c;
    }
    pppppppuVar27 = pppppppuVar11;
    if (pppppppuVar25 <= pppppppuVar11) goto code_r0x0055992c;
  } while( true );
}


