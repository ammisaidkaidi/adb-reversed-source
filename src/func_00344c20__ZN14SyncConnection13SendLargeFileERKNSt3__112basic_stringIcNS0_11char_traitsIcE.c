// Function: _ZN14SyncConnection13SendLargeFileERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEjS8_S8_j15CompressionTypeb
// Address: 00344c20
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Removing unreachable block (ram,0x0034559e) */
/* WARNING: Removing unreachable block (ram,0x00346771) */
/* WARNING: Type propagation algorithm not settling */

ulong _ZN14SyncConnection13SendLargeFileERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEjS8_S8_j15CompressionTypeb
                (long param_1,byte *param_2,undefined4 param_3,byte *param_4,byte *param_5,
                undefined4 param_6,int param_7,char param_8)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  int iVar18;
  byte *pbVar19;
  undefined *puVar20;
  uint uVar21;
  byte *pbVar22;
  long in_FS_OFFSET;
  bool bVar23;
  long lStack_10270;
  byte *pbStack_10258;
  undefined8 uStack_10238;
  undefined8 uStack_10230;
  undefined8 uStack_10228;
  undefined8 uStack_10218;
  undefined8 uStack_10210;
  undefined8 uStack_10208;
  long lStack_101f8;
  undefined8 uStack_101f0;
  long lStack_101e8;
  undefined8 uStack_101e0;
  long lStack_101d8;
  undefined *puStack_101d0;
  long lStack_101c8;
  byte *pbStack_101c0;
  undefined8 uStack_101b8;
  long lStack_101b0;
  long lStack_101a8;
  byte *pbStack_101a0;
  undefined8 uStack_10198;
  byte *pbStack_10190;
  long lStack_10188;
  byte *pbStack_10180;
  undefined8 uStack_10178;
  undefined8 uStack_10170;
  undefined8 uStack_10168;
  undefined8 uStack_10160;
  undefined8 uStack_10158;
  undefined8 uStack_10150;
  undefined8 uStack_10148;
  undefined8 uStack_10140;
  undefined8 uStack_10138;
  undefined8 uStack_10130;
  byte *pbStack_10128;
  undefined8 uStack_10120;
  undefined4 uStack_10118;
  undefined4 uStack_10114;
  undefined4 uStack_10110;
  undefined4 uStack_1010c;
  undefined4 uStack_10108;
  undefined4 uStack_10104;
  undefined4 uStack_10100;
  undefined4 uStack_100fc;
  undefined4 uStack_100f8;
  undefined4 uStack_100f4;
  undefined4 uStack_100f0;
  undefined4 uStack_100ec;
  undefined4 uStack_100e8;
  undefined4 uStack_100e4;
  undefined4 uStack_100e0;
  undefined4 uStack_100dc;
  uint uStack_100d8;
  undefined4 uStack_100d4;
  undefined4 uStack_100d0;
  int iStack_100cc;
  undefined1 auStack_100c8 [65536];
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
  if ((param_8 == '\0') || (*(char *)(param_1 + 0x6e) != '\0')) {
    if (*(char *)(param_1 + 0x6a) == '\0') {
      if (*(long *)(in_FS_OFFSET + 0x28) != lStack_38) goto code_r0x0034569f;
      lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
      uStack_10138 = 0;
      uStack_10130 = 0;
      pbStack_10128 = (byte *)0x0;
      if ((*param_2 & 1) == 0) {
        param_2 = param_2 + 1;
      }
      else {
        param_2 = *(byte **)(param_2 + 0x10);
      }
      puStack_101d0 = &UNK_00346241;
      pbStack_10180 = param_4;
      _ZN7android4base12StringPrintfEPKcz(&uStack_10138,&UNK_0017216b,param_2,param_3);
      puStack_101d0 = &UNK_00346251;
      cVar4 = _ZN14SyncConnection11SendRequestEiRKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                        (param_1,0x444e4553,&uStack_10138);
      if (cVar4 == '\0') {
        pbVar22 = pbStack_10128;
        if ((uStack_10138 & 1) == 0) {
          pbVar22 = (byte *)((long)&uStack_10138 + 1);
        }
        puStack_101d0 = &UNK_00346345;
        puVar9 = (undefined4 *)func_0x0099bce0();
        puStack_101d0 = &UNK_0034634c;
        uVar8 = func_0x0099bd20(*puVar9);
        puVar20 = &UNK_0017b81a;
      }
      else {
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
        pbVar22 = pbStack_10180 + 1;
        pbVar19 = pbVar22;
        if ((*pbStack_10180 & 1) != 0) {
          pbVar19 = *(byte **)(pbStack_10180 + 0x10);
        }
        puStack_101d0 = &UNK_003462bb;
        iVar5 = func_0x0099bf30(1,pbVar19,&uStack_c8);
        if (iVar5 != -1) {
          uStack_10198 = CONCAT44(param_6,(undefined4)uStack_10198);
          pbVar19 = pbVar22;
          if ((*pbStack_10180 & 1) != 0) {
            pbVar19 = *(byte **)(pbStack_10180 + 0x10);
          }
          uStack_101b8 = uStack_98;
          pbStack_101c0 = pbVar22;
          pbStack_10190 = param_5;
          do {
            puStack_101d0 = &UNK_0034630f;
            iVar5 = func_0x0099bf40(pbVar19,0x80000);
            if (iVar5 != -1) {
              if (-1 < iVar5) {
                puStack_101d0 = &UNK_003463f4;
                uVar21 = func_0x0099bf10(iVar5,1);
                if ((uVar21 & 0x80000001) == 0) {
                  puStack_101d0 = &UNK_0034640f;
                  func_0x0099bf10(iVar5,2,uVar21 | 1);
                }
                puStack_101d0 = &UNK_00346414;
                piVar7 = (int *)func_0x0099bce0();
                pbVar22 = (byte *)0x0;
                puStack_101d0 = &UNK_0034642d;
                func_0x0099bdb0(&iStack_100cc,0,0x10004);
                uStack_100d0 = 0x41544144;
                lStack_101b0 = param_1 + 0xc0;
                lStack_101a8 = param_1 + 0x110;
                lStack_10188 = param_1;
                goto code_r0x00346461;
              }
              puStack_101d0 = &UNK_00346520;
              piVar7 = (int *)func_0x0099bce0();
              break;
            }
            puStack_101d0 = &UNK_0034631d;
            piVar7 = (int *)func_0x0099bce0();
          } while (*piVar7 == 4);
          pbVar22 = pbStack_10180 + 1;
          if ((*pbStack_10180 & 1) != 0) {
            pbVar22 = *(byte **)(pbStack_10180 + 0x10);
          }
          puStack_101d0 = &UNK_00346545;
          uVar8 = func_0x0099bd20(*piVar7);
          uVar14 = 0;
          puStack_101d0 = &UNK_0034655f;
          _ZN14SyncConnection5ErrorEPKcz(param_1,&UNK_001611d0,pbVar22,uVar8);
          iVar6 = *piVar7;
          goto code_r0x00346629;
        }
        if ((*pbStack_10180 & 1) != 0) {
          pbVar22 = *(byte **)(pbStack_10180 + 0x10);
        }
        puStack_101d0 = &UNK_00346371;
        puVar9 = (undefined4 *)func_0x0099bce0();
        puStack_101d0 = &UNK_00346378;
        uVar8 = func_0x0099bd20(*puVar9);
        puVar20 = &UNK_0015f955;
      }
      uVar14 = 0;
      puStack_101d0 = &UNK_00346392;
      _ZN14SyncConnection5ErrorEPKcz(param_1,puVar20,pbVar22,uVar8);
      goto joined_r0x00346634;
    }
    if (((param_7 == 1) && (param_7 = 4, *(char *)(param_1 + 0x6d) == '\0')) &&
       (param_7 = 3, *(char *)(param_1 + 0x6c) == '\0')) {
      param_7 = (uint)*(byte *)(param_1 + 0x6b) * 2;
    }
    pbStack_10258 = param_2 + 1;
    bVar23 = (*param_2 & 1) == 0;
    pbVar22 = *(byte **)(param_2 + 0x10);
    if (bVar23) {
      pbVar22 = pbStack_10258;
    }
    uVar14 = (ulong)(*param_2 >> 1);
    if (!bVar23) {
      uVar14 = *(ulong *)(param_2 + 8);
    }
    cVar4 = _ZN14SyncConnection9SendSend2ENSt3__117basic_string_viewIcNS0_11char_traitsIcEEEEj15CompressionTypeb
                      (param_1,pbVar22,uVar14,param_3,param_7,param_8);
    if (cVar4 == '\0') {
      if ((*param_2 & 1) != 0) {
        pbStack_10258 = *(byte **)(param_2 + 0x10);
      }
      puVar9 = (undefined4 *)func_0x0099bce0();
      uVar8 = func_0x0099bd20(*puVar9);
      puVar20 = &UNK_0015c621;
    }
    else {
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
      pbStack_10258 = param_4 + 1;
      pbVar22 = pbStack_10258;
      if ((*param_4 & 1) != 0) {
        pbVar22 = *(byte **)(param_4 + 0x10);
      }
      iVar5 = func_0x0099bf30(1,pbVar22,&uStack_c8);
      uVar8 = uStack_98;
      if (iVar5 != -1) {
        pbVar22 = param_4 + 1;
        if ((*param_4 & 1) != 0) {
          pbVar22 = *(byte **)(param_4 + 0x10);
        }
        do {
          iVar5 = func_0x0099bf40(pbVar22,0x80000);
          if (iVar5 != -1) {
            if (iVar5 < 0) {
              piVar7 = (int *)func_0x0099bce0();
              iVar5 = *piVar7;
              bVar1 = *param_4;
              goto joined_r0x00344fa8;
            }
            uVar21 = func_0x0099bf10(iVar5,1);
            if ((uVar21 & 0x80000001) == 0) {
              func_0x0099bf10(iVar5,2,uVar21 | 1);
            }
            piVar7 = (int *)func_0x0099bce0();
            puVar10 = (undefined8 *)0x0;
            func_0x0099bdb0(&iStack_100cc,0,0x10004);
            uStack_100d0 = 0x41544144;
            uStack_100e8 = 0;
            uStack_100e4 = 0;
            uStack_100e0 = 0;
            uStack_100dc = 0;
            uStack_100f8 = 0;
            uStack_100f4 = 0;
            uStack_100f0 = 0;
            uStack_100ec = 0;
            uStack_10108 = 0;
            uStack_10104 = 0;
            uStack_10100 = 0;
            uStack_100fc = 0;
            uStack_10118 = 0;
            uStack_10114 = 0;
            uStack_10110 = 0;
            uStack_1010c = 0;
            pbStack_10128 = (byte *)0x0;
            uStack_10120 = 0;
            uStack_10138 = 0;
            uStack_10130 = 0;
            uStack_10148 = 0;
            uStack_10140 = 0;
            uStack_10158 = 0;
            uStack_10150 = 0;
            uStack_10168 = 0;
            uStack_10160 = 0;
            uStack_100d8 = 0;
            uStack_100d4 = 0;
            switch(param_7) {
            case 0:
              uStack_10160 = 0x10000;
              uStack_10158 = 0;
              uStack_10150 = 0;
              uStack_10148 = 0;
              uStack_10140 = 0;
              uStack_10138 = 0;
              uStack_10130 = 0;
              pbStack_10128 = (byte *)0x0;
              uStack_10168 = 0x99e348;
              uStack_100d8 = 1;
              puVar10 = &uStack_10168;
              break;
            case 1:
              puVar10 = (undefined8 *)0x0;
              cVar4 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(6,0);
              if (cVar4 != '\0') {
                iVar6 = *piVar7;
                puVar10 = (undefined8 *)0x0;
                _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                          (&uStack_101b8,&UNK_00189432,0x2a9,6,0,0xffffffff);
                uVar12 = _ZN7android4base10LogMessage6streamEv(&uStack_101b8);
                func_0x0032eb30(uVar12,&UNK_001611f0,0x1f);
                _ZN7android4base10LogMessageD2Ev(&uStack_101b8);
                *piVar7 = iVar6;
              }
              break;
            case 2:
              uStack_101b8 = CONCAT44(uStack_101b8._4_4_,0x10000);
              puVar10 = (undefined8 *)
                        _ZNSt3__17variantIJNS_9monostateE11NullEncoder13BrotliEncoder10LZ4Encoder11ZstdEncoderEE7emplaceB8nn220000IS3_JiELm2ETnNS_9enable_ifIX18is_constructible_vIT_DpT0_EEiE4typeELi0EEERS9_DpOSA_
                                  (&uStack_10168,&uStack_101b8);
              break;
            case 3:
              uStack_101b8 = CONCAT44(uStack_101b8._4_4_,0x10000);
              puVar10 = (undefined8 *)
                        _ZNSt3__17variantIJNS_9monostateE11NullEncoder13BrotliEncoder10LZ4Encoder11ZstdEncoderEE7emplaceB8nn220000IS4_JiELm3ETnNS_9enable_ifIX18is_constructible_vIT_DpT0_EEiE4typeELi0EEERS9_DpOSA_
                                  (&uStack_10168,&uStack_101b8);
              break;
            case 4:
              uStack_101b8 = CONCAT44(uStack_101b8._4_4_,0x10000);
              puVar10 = (undefined8 *)
                        _ZNSt3__17variantIJNS_9monostateE11NullEncoder13BrotliEncoder10LZ4Encoder11ZstdEncoderEE7emplaceB8nn220000IS5_JiELm4ETnNS_9enable_ifIX18is_constructible_vIT_DpT0_EEiE4typeELi0EEERS9_DpOSA_
                                  (&uStack_10168,&uStack_101b8);
            }
            bVar23 = true;
            lStack_10270 = 0;
            goto code_r0x0034507f;
          }
          piVar7 = (int *)func_0x0099bce0();
          iVar5 = *piVar7;
        } while (iVar5 == 4);
        bVar1 = *param_4;
joined_r0x00344fa8:
        if ((bVar1 & 1) != 0) {
          pbStack_10258 = *(byte **)(param_4 + 0x10);
        }
        uVar8 = func_0x0099bd20(iVar5);
        uVar21 = 0;
        _ZN14SyncConnection5ErrorEPKcz(param_1,&UNK_001611d0,pbStack_10258,uVar8);
        iVar6 = *piVar7;
        goto code_r0x00345613;
      }
      if ((*param_4 & 1) != 0) {
        pbStack_10258 = *(byte **)(param_4 + 0x10);
      }
      puVar9 = (undefined4 *)func_0x0099bce0();
      uVar8 = func_0x0099bd20(*puVar9);
      puVar20 = &UNK_0015f955;
    }
    uVar21 = 0;
    _ZN14SyncConnection5ErrorEPKcz(param_1,puVar20,pbStack_10258,uVar8);
  }
  else {
    uVar21 = 0;
    _ZN14SyncConnection5ErrorEPKcz(param_1,&UNK_00167873);
  }
  goto code_r0x00345617;
code_r0x00346461:
  uVar8 = *(undefined8 *)(param_1 + 8);
  while( true ) {
    puStack_101d0 = &UNK_0034647e;
    lVar15 = func_0x0099be20(iVar5,auStack_100c8,uVar8);
    param_1 = lStack_10188;
    if (lVar15 != -1) break;
    iVar6 = *piVar7;
    if (iVar6 != 4) goto code_r0x003465dc;
  }
  iVar6 = (int)lVar15;
  if (iVar6 == 0) {
    uStack_100e4 = 0;
    uStack_100e0 = 0;
    uStack_100dc = 0;
    uStack_100d8 = 0;
    uStack_100f4 = 0;
    uStack_100f0 = 0;
    uStack_100ec = 0;
    uStack_100e8 = 0;
    uStack_10104 = 0;
    uStack_10100 = 0;
    uStack_100fc = 0;
    uStack_100f8 = 0;
    uStack_10114 = 0;
    uStack_10110 = 0;
    uStack_1010c = 0;
    uStack_10108 = 0;
    uStack_100d4 = 0;
    uStack_10120 = CONCAT44(0x454e4f44,(undefined4)uStack_10120);
    uStack_10118 = uStack_10198._4_4_;
    if ((*pbStack_10180 & 1) == 0) {
      uStack_10148 = *(undefined8 *)(pbStack_10180 + 0x10);
      uStack_10158 = *(undefined8 *)pbStack_10180;
      uStack_10150 = *(undefined8 *)(pbStack_10180 + 8);
    }
    else {
      puStack_101d0 = &UNK_0034665a;
      func_0x00330340(&uStack_10158,*(undefined8 *)(pbStack_10180 + 0x10),
                      *(undefined8 *)(pbStack_10180 + 8));
    }
    lVar15 = lStack_10188;
    if ((*pbStack_10190 & 1) == 0) {
      uStack_10168 = *(undefined8 *)(pbStack_10190 + 0x10);
      uStack_10178 = *(undefined8 *)pbStack_10190;
      uStack_10170 = *(ulong *)(pbStack_10190 + 8);
    }
    else {
      puStack_101d0 = &UNK_00346698;
      func_0x00330340(&uStack_10178,*(undefined8 *)(pbStack_10190 + 0x10),
                      *(undefined8 *)(pbStack_10190 + 8));
    }
    lVar17 = *(long *)(lVar15 + 0x18);
    uVar14 = 0;
    if (*(long *)(lVar15 + 0x20) != lVar17) {
      uVar14 = (*(long *)(lVar15 + 0x20) - lVar17 >> 3) * 0x55 - 1;
    }
    *(long *)(lVar15 + 200) = *(long *)(lVar15 + 200) + 1;
    *(long *)(lVar15 + 0x78) = *(long *)(lVar15 + 0x78) + 1;
    uVar16 = *(long *)(lVar15 + 0x38) + *(long *)(lVar15 + 0x30);
    if (uVar14 == uVar16) {
      puStack_101d0 = &UNK_003466db;
      func_0x00345950(lVar15 + 0x10);
      lVar17 = *(long *)(lVar15 + 0x18);
      uVar16 = *(long *)(lVar15 + 0x30) + *(long *)(lVar15 + 0x38);
    }
    lVar17 = *(long *)(lVar17 + (uVar16 / 0x55) * 8);
    lVar11 = (uVar16 % 0x55) * 0x30;
    *(undefined8 *)(lVar17 + 0x10 + lVar11) = uStack_10148;
    *(undefined8 *)(lVar17 + lVar11) = uStack_10158;
    ((undefined8 *)(lVar17 + lVar11))[1] = uStack_10150;
    *(undefined8 *)(lVar17 + 0x28 + lVar11) = uStack_10168;
    puVar9 = (undefined4 *)(lVar17 + 0x18 + lVar11);
    *puVar9 = (undefined4)uStack_10178;
    puVar9[1] = uStack_10178._4_4_;
    puVar9[2] = (undefined4)uStack_10170;
    puVar9[3] = uStack_10170._4_4_;
    *(long *)(lVar15 + 0x38) = *(long *)(lVar15 + 0x38) + 1;
    uStack_10148 = 0;
    uStack_10150 = 0;
    uStack_10158 = 0;
    uStack_10168 = 0;
    uStack_10170 = 0;
    uStack_10178 = 0;
    puStack_101d0 = &UNK_003467ab;
    uVar21 = _ZN14SyncConnection10WriteOrDieERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEES8_PKvm
                       (lVar15,pbStack_10180,pbStack_10190,(long)&uStack_10120 + 4,8);
    uVar14 = (ulong)uVar21;
    goto code_r0x0034661d;
  }
  if (iVar6 == -1) goto code_r0x003465d8;
  pbStack_101a0 = (byte *)(long)iVar6;
  puStack_101d0 = &UNK_003464da;
  iStack_100cc = iVar6;
  _ZN14SyncConnection10WriteOrDieERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEES8_PKvm
            (lStack_10188,pbStack_10180,pbStack_10190,&uStack_100d0,pbStack_101a0 + 8);
  *(long *)(param_1 + 0xd8) = (long)(pbStack_101a0 + *(long *)(param_1 + 0xd8));
  *(long *)(param_1 + 0x88) = (long)(pbStack_101a0 + *(long *)(param_1 + 0x88));
  pbVar22 = pbVar22 + (long)pbStack_101a0;
  puStack_101d0 = &UNK_00346516;
  _ZN14TransferLedger14ReportProgressER11LinePrinterRKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEmm
            (lStack_101b0,lStack_101a8,pbStack_10190,pbVar22,uStack_101b8);
  goto code_r0x00346461;
code_r0x0034507f:
  if (bVar23) {
    lStack_101a8 = 0;
    pbStack_101a0 = (byte *)0x0;
    uStack_101b8 = 0;
    lStack_101b0 = 0;
    _ZN5Block8allocateEm(&uStack_101b8,0x10000);
    lVar17 = lStack_101a8;
    lVar15 = uStack_101b8;
code_r0x003450c0:
    lVar11 = func_0x0099be20(iVar5,lVar15,lVar17);
    if (lVar11 == -1) goto code_r0x003450d4;
    uVar21 = (uint)lVar11;
    if (-1 < (int)uVar21) {
      if (uVar21 == 0) {
        _ZN7Encoder6FinishEv(puVar10);
      }
      else {
        uVar14 = (ulong)(uVar21 & 0x7fffffff);
        _ZN5Block6resizeEm(&uStack_101b8,uVar14);
        pbVar22 = pbStack_101a0;
        lVar11 = lStack_101a8;
        lVar17 = lStack_101b0;
        lVar15 = uStack_101b8;
        lStack_101d8 = uStack_101b8;
        uStack_101b8 = 0;
        lStack_101b0 = 0;
        lStack_101a8 = 0;
        puStack_101d0 = (undefined *)lVar17;
        lStack_101c8 = lVar11;
        pbStack_101a0 = (byte *)0x0;
        pbStack_101c0 = pbVar22;
        if (lVar11 != 0) {
          puVar10[3] = puVar10[3] + lVar11;
          plVar13 = (long *)puVar10[7];
          if (plVar13 < (long *)puVar10[8]) {
            *plVar13 = lVar15;
            lStack_101d8 = 0;
            puStack_101d0 = (undefined *)0x0;
            plVar13[1] = lVar17;
            lStack_101c8 = 0;
            plVar13[2] = lVar11;
            pbStack_101c0 = (byte *)0x0;
            plVar13[3] = (long)pbVar22;
            plVar13 = plVar13 + 4;
          }
          else {
            plVar13 = (long *)_ZNSt3__16vectorI5BlockNS_9allocatorIS1_EEE24__emplace_back_slow_pathIJS1_EEEPS1_DpOT_
                                        (puVar10 + 6,&lStack_101d8);
          }
          puVar10[7] = plVar13;
          lVar15 = lStack_101d8;
        }
        lStack_101d8 = 0;
        if (lVar15 != 0) {
          _ZdaPvSt11align_val_t();
        }
        *(long *)(param_1 + 0xd8) = *(long *)(param_1 + 0xd8) + uVar14;
        *(long *)(param_1 + 0x88) = *(long *)(param_1 + 0x88) + uVar14;
        lStack_10270 = lStack_10270 + uVar14;
        _ZN14TransferLedger14ReportProgressER11LinePrinterRKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEmm
                  (param_1 + 0xc0,param_1 + 0x110,param_5,lStack_10270,uVar8);
      }
      bVar23 = true;
      do {
        lStack_101e8 = 0;
        uStack_101e0 = 0;
        lStack_101f8 = 0;
        uStack_101f0 = 0;
        iVar6 = (**(code **)*puVar10)(puVar10,&lStack_101f8);
        lVar15 = lStack_101e8;
        if (iVar6 == 0) {
          pbVar22 = pbStack_10258;
          if ((*param_4 & 1) != 0) {
            pbVar22 = *(byte **)(param_4 + 0x10);
          }
          bVar3 = false;
          _ZN14SyncConnection5ErrorEPKcz(param_1,&UNK_0017eb51,pbVar22);
          iVar18 = 1;
        }
        else {
          if (lStack_101e8 != 0) {
            iStack_100cc = (int)lStack_101e8;
            func_0x0099c110(auStack_100c8,lStack_101f8,lStack_101e8,0x10000);
            _ZN14SyncConnection10WriteOrDieERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEES8_PKvm
                      (param_1,param_4,param_5,&uStack_100d0,lVar15 + 8);
          }
          iVar18 = 6;
          if (iVar6 == 1) {
            bVar3 = false;
            bVar23 = false;
          }
          else if (iVar6 == 3) {
            iVar18 = 5;
            bVar3 = false;
          }
          else if (iVar6 == 2) {
            bVar3 = false;
          }
          else {
            iVar18 = 0;
            bVar3 = true;
          }
        }
        lVar15 = lStack_101f8;
        lStack_101f8 = 0;
        if (lVar15 != 0) {
          _ZdaPvSt11align_val_t();
        }
      } while ((iVar18 == 0) || (iVar18 == 5));
      if (iVar18 == 6) {
        bVar3 = true;
      }
      goto code_r0x0034521b;
    }
    iVar6 = *piVar7;
    goto code_r0x003451d2;
  }
  pbStack_10180 = (byte *)0x0;
  uStack_10178 = 0;
  pbStack_10190 = (byte *)0x0;
  lStack_10188 = 0;
  pbStack_101a0 = (byte *)0x0;
  uStack_10198 = 0;
  lStack_101b0 = 0;
  lStack_101a8 = 0;
  uStack_10170 = uStack_10170 & 0xffffffff00000000;
  uStack_101b8 = CONCAT44(param_6,0x454e4f44);
  if ((*param_4 & 1) == 0) {
    uStack_10208 = *(undefined8 *)(param_4 + 0x10);
    uStack_10218 = *(undefined8 *)param_4;
    uStack_10210 = *(undefined8 *)(param_4 + 8);
  }
  else {
    func_0x00330340(&uStack_10218,*(undefined8 *)(param_4 + 0x10),*(undefined8 *)(param_4 + 8));
  }
  if ((*param_5 & 1) == 0) {
    uStack_10228 = *(undefined8 *)(param_5 + 0x10);
    uStack_10238 = *(undefined8 *)param_5;
    uStack_10230 = *(undefined8 *)(param_5 + 8);
  }
  else {
    func_0x00330340(&uStack_10238,*(undefined8 *)(param_5 + 0x10),*(undefined8 *)(param_5 + 8));
  }
  lVar15 = *(long *)(param_1 + 0x18);
  uVar14 = 0;
  if (*(long *)(param_1 + 0x20) != lVar15) {
    uVar14 = (*(long *)(param_1 + 0x20) - lVar15 >> 3) * 0x55 - 1;
  }
  *(long *)(param_1 + 200) = *(long *)(param_1 + 200) + 1;
  *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0x78) + 1;
  uVar16 = *(long *)(param_1 + 0x38) + *(long *)(param_1 + 0x30);
  if (uVar14 == uVar16) {
    func_0x00345950(param_1 + 0x10);
    lVar15 = *(long *)(param_1 + 0x18);
    uVar16 = *(long *)(param_1 + 0x30) + *(long *)(param_1 + 0x38);
  }
  lVar15 = *(long *)(lVar15 + (uVar16 / 0x55) * 8);
  lVar17 = (uVar16 % 0x55) * 0x30;
  *(undefined8 *)(lVar15 + 0x10 + lVar17) = uStack_10208;
  *(undefined8 *)(lVar15 + lVar17) = uStack_10218;
  ((undefined8 *)(lVar15 + lVar17))[1] = uStack_10210;
  *(undefined8 *)(lVar15 + 0x28 + lVar17) = uStack_10228;
  puVar9 = (undefined4 *)(lVar15 + 0x18 + lVar17);
  *puVar9 = (undefined4)uStack_10238;
  puVar9[1] = uStack_10238._4_4_;
  puVar9[2] = (undefined4)uStack_10230;
  puVar9[3] = uStack_10230._4_4_;
  *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 1;
  uStack_10208 = 0;
  uStack_10210 = 0;
  uStack_10218 = 0;
  uStack_10228 = 0;
  uStack_10230 = 0;
  uStack_10238 = 0;
  uVar21 = _ZN14SyncConnection10WriteOrDieERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEES8_PKvm
                     (param_1,param_4,param_5,&uStack_101b8,8);
  goto code_r0x003455df;
code_r0x003450d4:
  iVar6 = *piVar7;
  if (iVar6 != 4) goto code_r0x003451d2;
  goto code_r0x003450c0;
code_r0x003451d2:
  pbVar22 = pbStack_10258;
  if ((*param_4 & 1) != 0) {
    pbVar22 = *(byte **)(param_4 + 0x10);
  }
  uVar12 = func_0x0099bd20(iVar6);
  bVar3 = false;
  _ZN14SyncConnection5ErrorEPKcz(param_1,&UNK_00169426,pbVar22,uVar12);
  bVar23 = true;
code_r0x0034521b:
  lVar15 = uStack_101b8;
  uStack_101b8 = 0;
  if (lVar15 != 0) {
    _ZdaPvSt11align_val_t();
  }
  if (!bVar3) goto code_r0x0034546b;
  goto code_r0x0034507f;
code_r0x003465d8:
  iVar6 = *piVar7;
code_r0x003465dc:
  pbVar22 = pbStack_101c0;
  if ((*pbStack_10180 & 1) != 0) {
    pbVar22 = *(byte **)(pbStack_10180 + 0x10);
  }
  puStack_101d0 = &UNK_003465ff;
  uVar8 = func_0x0099bd20(iVar6);
  uVar14 = 0;
  puStack_101d0 = &UNK_0034661d;
  _ZN14SyncConnection5ErrorEPKcz(lStack_10188,&UNK_00169426,pbVar22,uVar8);
code_r0x0034661d:
  iVar6 = *piVar7;
  puStack_101d0 = &UNK_00346629;
  func_0x0099bd10(iVar5);
code_r0x00346629:
  *piVar7 = iVar6;
joined_r0x00346634:
  if ((uStack_10138 & 1) != 0) {
    puStack_101d0 = &UNK_003463b2;
    _ZdaPvSt11align_val_t(pbStack_10128,uStack_10138 & 0xfffffffffffffffe);
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return uVar14;
  }
  puStack_101d0 = &UNK_003467b8;
  func_0x0099bd00();
  pcVar2 = (code *)swi(3);
  uVar14 = (*pcVar2)();
  return uVar14;
code_r0x0034546b:
  uVar21 = 0;
code_r0x003455df:
  if ((ulong)uStack_100d8 != 0xffffffff) {
    (**(code **)(&UNK_0099e240 + (ulong)uStack_100d8 * 8))(&uStack_101b8,&uStack_10168);
  }
  iVar6 = *piVar7;
  func_0x0099bd10(iVar5);
code_r0x00345613:
  *piVar7 = iVar6;
code_r0x00345617:
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return (ulong)uVar21;
  }
code_r0x0034569f:
  func_0x0099bd00();
  pcVar2 = (code *)swi(3);
  uVar14 = (*pcVar2)();
  return uVar14;
}


