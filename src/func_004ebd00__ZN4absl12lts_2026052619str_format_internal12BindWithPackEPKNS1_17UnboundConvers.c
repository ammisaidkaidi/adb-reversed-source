// Function: _ZN4absl12lts_2026052619str_format_internal12BindWithPackEPKNS1_17UnboundConversionENS0_4SpanIKNS1_13FormatArgImplEEEPNS1_15BoundConversionE
// Address: 004ebd00
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Type propagation algorithm not settling */

uint * _ZN4absl12lts_2026052619str_format_internal12BindWithPackEPKNS1_17UnboundConversionENS0_4SpanIKNS1_13FormatArgImplEEEPNS1_15BoundConversionE
                 (uint *param_1,uint *param_2,uint *param_3,byte *param_4,uint *param_5,
                 uint *param_6)

{
  uint *puVar1;
  char cVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  long lVar6;
  undefined8 uVar7;
  uint *puVar8;
  long extraout_RDX;
  byte *extraout_RDX_00;
  uint *puVar9;
  uint *puVar10;
  code *pcVar11;
  byte *pbVar12;
  long *plVar13;
  uint *puVar14;
  long *plVar15;
  uint *unaff_R12;
  uint *puVar16;
  code *pcVar17;
  ulong uVar18;
  long lVar19;
  byte *unaff_R13;
  byte bVar20;
  uint *unaff_R14;
  uint *unaff_R15;
  uint *puVar21;
  byte *pbVar22;
  long in_FS_OFFSET;
  long **pplStack_990;
  uint *puStack_988;
  uint *puStack_980;
  int aiStack_978 [3];
  undefined1 uStack_96c;
  undefined1 uStack_96b;
  char cStack_96a;
  undefined1 uStack_969;
  int iStack_95c;
  long *plStack_958;
  code *pcStack_950;
  code *pcStack_948;
  code *pcStack_940;
  undefined1 auStack_938 [1024];
  long lStack_538;
  uint *puStack_530;
  uint *puStack_528;
  uint *puStack_520;
  uint *puStack_518;
  uint *puStack_510;
  undefined *puStack_508;
  uint *puStack_500;
  uint *puStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  long *plStack_4e0;
  long **pplStack_4d8;
  uint *puStack_4d0;
  uint *puStack_4c8;
  uint auStack_4c0 [3];
  undefined1 uStack_4b4;
  undefined1 uStack_4b3;
  byte bStack_4b2;
  undefined1 uStack_4b1;
  uint uStack_4a4;
  long *plStack_4a0;
  code *pcStack_498;
  byte *pbStack_490;
  uint *puStack_488;
  undefined1 auStack_480 [1024];
  long lStack_80;
  uint *puStack_78;
  uint *puStack_70;
  byte *pbStack_68;
  uint *puStack_60;
  uint *puStack_58;
  undefined *apuStack_50 [2];
  uint uStack_40;
  uint uStack_3c;
  uint *puStack_38;
  
  puStack_38 = *(uint **)(in_FS_OFFSET + 0x28);
  puVar9 = (uint *)((long)(int)*param_1 + -1);
  puVar10 = param_2;
  puVar5 = param_1;
  if (param_3 <= puVar9) goto code_r0x004ebe0c;
  if ((byte)param_1[3] == 0) {
    param_4[1] = 0;
    param_4[4] = 0xff;
    param_4[5] = 0xff;
    param_4[6] = 0xff;
    param_4[7] = 0xff;
    param_4[8] = 0xff;
    param_4[9] = 0xff;
    param_4[10] = 0xff;
    param_4[0xb] = 0xff;
code_r0x004ebe1c:
    puVar10 = param_2 + (long)puVar9 * 4;
    *param_4 = *(byte *)((long)param_1 + 0xe);
    *(uint **)(param_4 + 0x10) = puVar10;
    puVar4 = (uint *)0x1;
    puVar9 = (uint *)((long)puVar9 * 0x10);
    puVar5 = param_1;
  }
  else {
    uStack_3c = param_1[1];
    if ((int)uStack_3c < -1) {
      puVar4 = (uint *)(ulong)~uStack_3c;
      param_6 = puVar4;
      if (puVar4 <= param_3) {
        param_6 = (uint *)((long)puVar4 * 0x10);
        puVar5 = *(uint **)(param_2 + -4 + (long)puVar4 * 4);
        param_5 = &uStack_3c;
        puVar10 = (uint *)0x90013;
        apuStack_50[0] = &UNK_004ebd7c;
        cVar2 = (**(code **)(param_2 + -2 + (long)puVar4 * 4))(puVar5,0x90013,0,param_5);
        unaff_R12 = param_3;
        unaff_R13 = param_4;
        unaff_R14 = param_2;
        unaff_R15 = param_1;
        if (cVar2 != '\0') {
          if (-1 < (int)uStack_3c) goto code_r0x004ebd9d;
          uVar3 = 0x80000001;
          if (0x80000001 < uStack_3c) {
            uVar3 = uStack_3c;
          }
          uStack_3c = -uVar3;
          unaff_R14 = (uint *)CONCAT71((int7)((ulong)param_2 >> 8),1);
          goto code_r0x004ebda0;
        }
      }
    }
    else {
code_r0x004ebd9d:
      unaff_R14 = (uint *)0x0;
code_r0x004ebda0:
      param_6 = (uint *)(ulong)uStack_3c;
      uStack_40 = param_1[2];
      if (-2 < (int)uStack_40) {
code_r0x004ebdf3:
        *(int *)(param_4 + 4) = (int)param_6;
        *(uint *)(param_4 + 8) = uStack_40;
        bVar20 = (byte)unaff_R14 | (byte)param_1[3];
        unaff_R14 = (uint *)CONCAT71((int7)((ulong)unaff_R14 >> 8),bVar20);
        param_4[1] = bVar20;
        param_4[2] = *(byte *)((long)param_1 + 0xd);
        goto code_r0x004ebe1c;
      }
      puVar4 = (uint *)(ulong)~uStack_40;
      puVar10 = param_2;
      puVar5 = param_1;
      if (puVar4 <= param_3) {
        puVar5 = *(uint **)(param_2 + (long)puVar4 * 4 + -4);
        param_5 = &uStack_40;
        puVar10 = (uint *)0x90013;
        apuStack_50[0] = &UNK_004ebdde;
        cVar2 = (**(code **)(param_2 + (long)puVar4 * 4 + -2))(puVar5,0x90013,0,param_5);
        unaff_R12 = param_1;
        unaff_R13 = param_4;
        unaff_R15 = param_2;
        if (cVar2 != '\0') {
          param_6 = (uint *)(ulong)uStack_3c;
          goto code_r0x004ebdf3;
        }
      }
    }
code_r0x004ebe0c:
    puVar4 = (uint *)0x0;
  }
  puVar16 = *(uint **)(in_FS_OFFSET + 0x28);
  if (puVar16 == puStack_38) {
    return puVar4;
  }
  apuStack_50[0] = &UNK_004ebe72;
  func_0x0099bd00();
  lStack_80 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_4f0 = 0;
  uStack_4e8 = 0;
  plStack_4e0 = (long *)0x0;
  puVar4 = (uint *)auStack_480;
  puStack_508 = &UNK_004ebedf;
  puVar8 = puVar16;
  puVar14 = param_5;
  puStack_4f8 = puVar5;
  puStack_78 = puVar9;
  puStack_70 = unaff_R12;
  pbStack_68 = unaff_R13;
  puStack_60 = unaff_R14;
  puStack_58 = unaff_R15;
  apuStack_50[0] = &stack0xfffffffffffffff8;
  func_0x0099bdb0(puVar4,0,0x400);
  plStack_4a0 = &uStack_4f0;
  pcStack_498 = 
  _ZN4absl12lts_2026052619str_format_internal17FormatRawSinkImpl5FlushINSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEEEvPvNS4_17basic_string_viewIcS7_EE
  ;
  pbStack_490 = (byte *)0x0;
  pplStack_4d8 = &plStack_4a0;
  puVar5 = param_5;
  puStack_4d0 = puVar16;
  puStack_4c8 = param_5;
  puStack_488 = puVar4;
  if (extraout_RDX == -1) {
    puVar4 = *(uint **)(puVar10 + 4);
    puStack_500 = *(uint **)(puVar10 + 6);
    if (puVar4 != puStack_500) {
      puVar5 = *(uint **)(puVar10 + 2);
      pbVar22 = (byte *)0x0;
      puVar16 = puVar5;
      do {
        puVar16 = (uint *)((long)puVar16 + (long)pbVar22);
        pbVar22 = (byte *)((long)puVar5 + (*(long *)(puVar4 + 2) - (long)puVar16));
        if ((byte)*puVar4 == 1) {
          puStack_508 = &UNK_004ec190;
          cVar2 = func_0x004eca80(&pplStack_4d8,puVar4 + 4);
          if (cVar2 == '\0') goto code_r0x004ec23a;
        }
        else if (pbVar22 != (byte *)0x0) {
          pbStack_490 = pbStack_490 + (long)pbVar22;
          if (pbVar22 < (byte *)((long)&lStack_80 - (long)puStack_488)) {
            puStack_508 = &UNK_004ec1e9;
            func_0x0099bda0(puStack_488,puVar16,pbVar22);
            puStack_488 = (uint *)((long)puStack_488 + (long)pbVar22);
          }
          else {
            puStack_508 = &UNK_004ec209;
            (*pcStack_498)(plStack_4a0,auStack_480,(long)puStack_488 - (long)auStack_480);
            puStack_488 = (uint *)auStack_480;
            puStack_508 = &UNK_004ec22a;
            (*pcStack_498)(plStack_4a0,puVar16,pbVar22);
          }
        }
        puVar4 = puVar4 + 8;
      } while (puVar4 != puStack_500);
    }
    if ((byte)*puVar10 != 1) goto code_r0x004ec2ee;
code_r0x004ec23a:
    puVar9 = puStack_4f8;
    *(undefined2 *)puStack_4f8 = 0;
    pcVar11 = (code *)auStack_480;
    puStack_508 = &UNK_004ec264;
    plVar13 = plStack_4a0;
    (*pcStack_498)(plStack_4a0,pcVar11,(long)puStack_488 - (long)pcVar11);
    puStack_530 = puVar9;
    if ((uStack_4f0 & 1) != 0) {
      pcVar11 = (code *)(uStack_4f0 & 0xfffffffffffffffe);
      puStack_508 = &UNK_004ec288;
      plVar13 = plStack_4e0;
      _ZdaPvSt11align_val_t();
    }
  }
  else {
    uStack_4a4 = 0;
    if (extraout_RDX != 0) {
      puVar9 = (uint *)((long)puVar10 + extraout_RDX);
      do {
        puVar16 = (uint *)((long)puVar9 - (long)puVar10);
        puStack_508 = &UNK_004ebf86;
        puVar5 = (uint *)func_0x0099c070(puVar10,0x25,puVar16);
        if (puVar5 == (uint *)0x0) {
          pbStack_490 = pbStack_490 + (long)puVar16;
          puVar4 = (uint *)((long)&lStack_80 - (long)puStack_488);
          puVar5 = param_5;
          if (puVar16 < puVar4) {
            puStack_508 = &UNK_004ec2b1;
            func_0x0099bda0(puStack_488,puVar10,puVar16);
            puStack_488 = (uint *)((long)puStack_488 + (long)puVar16);
          }
          else {
            puStack_508 = &UNK_004ec2d4;
            (*pcStack_498)(plStack_4a0,auStack_480,(long)puStack_488 - (long)auStack_480);
            puStack_508 = &UNK_004ec2ee;
            puStack_488 = (uint *)auStack_480;
            (*pcStack_498)(plStack_4a0,puVar10,puVar16);
          }
          break;
        }
        puVar16 = (uint *)((long)puVar5 - (long)puVar10);
        if (puVar16 != (uint *)0x0) {
          pbStack_490 = pbStack_490 + (long)puVar16;
          if (puVar16 < (uint *)((long)&lStack_80 - (long)puStack_488)) {
            puStack_508 = &UNK_004ebfc1;
            func_0x0099bda0(puStack_488,puVar10,puVar16);
            puStack_488 = (uint *)((long)puStack_488 + (long)puVar16);
          }
          else {
            puStack_508 = &UNK_004ebfea;
            (*pcStack_498)(plStack_4a0,auStack_480,(long)puStack_488 - (long)auStack_480);
            puStack_508 = &UNK_004ec008;
            puStack_488 = (uint *)auStack_480;
            (*pcStack_498)(plStack_4a0,puVar10,puVar16);
          }
        }
        puVar4 = (uint *)&lStack_80;
        puVar21 = (uint *)((long)puVar5 + 1);
        if (puVar9 <= puVar21) goto code_r0x004ec23a;
        puVar8 = (uint *)(ulong)*(byte *)puVar21;
        puVar1 = puVar8 + 0x811fc;
        if ((char)(byte)*puVar1 < '\0') {
          if (*(byte *)puVar21 == 0x25) {
            pbStack_490 = pbStack_490 + 1;
            if ((ulong)((long)puVar4 - (long)puStack_488) < 2) {
              puStack_508 = &UNK_004ec0bd;
              (*pcStack_498)(plStack_4a0,auStack_480,(long)puStack_488 - (long)auStack_480);
              puStack_508 = &UNK_004ec0e1;
              puStack_488 = (uint *)auStack_480;
              (*pcStack_498)(plStack_4a0,&UNK_0015cc01,1);
            }
            else {
              *(byte *)puStack_488 = 0x25;
              puStack_488 = (uint *)((long)puStack_488 + 1);
            }
            goto code_r0x004ebf60;
          }
          auStack_4c0[0] = 0;
          uStack_4b4 = 0;
          uStack_4b1 = 0;
          auStack_4c0[1] = 0xffffffff;
          auStack_4c0[2] = 0xffffffff;
          uStack_4b3 = 9;
          bStack_4b2 = 0x13;
          puVar5 = auStack_4c0;
          puVar8 = &uStack_4a4;
          puStack_508 = &UNK_004ec11d;
          puVar21 = (uint *)_ZN4absl12lts_2026052619str_format_internal32ConsumeUnboundConversionNoInlineEPKcS3_PNS1_17UnboundConversionEPi
                                      (puVar21,puVar9,puVar5);
          if (puVar21 == (uint *)0x0) goto code_r0x004ec23a;
          puStack_508 = &UNK_004ec138;
          cVar2 = func_0x004eca80(&pplStack_4d8,puVar5);
          puVar10 = puVar21;
          if (cVar2 == '\0') goto code_r0x004ec23a;
        }
        else {
          puVar8 = (uint *)(ulong)uStack_4a4;
          if ((int)uStack_4a4 < 0) goto code_r0x004ec23a;
          uStack_4b4 = 0;
          uStack_4b3 = 9;
          uStack_4b1 = 0;
          auStack_4c0[1] = 0xffffffff;
          auStack_4c0[2] = 0xffffffff;
          auStack_4c0[0] = uStack_4a4 + 1;
          puVar8 = (uint *)(ulong)auStack_4c0[0];
          puStack_508 = &UNK_004ec071;
          bStack_4b2 = (byte)*puVar1;
          uStack_4a4 = auStack_4c0[0];
          cVar2 = func_0x004eca80(&pplStack_4d8,auStack_4c0);
          if (cVar2 == '\0') goto code_r0x004ec23a;
code_r0x004ebf60:
          puVar21 = (uint *)((long)puVar5 + 2);
          puVar5 = puVar21;
        }
        puVar4 = (uint *)&lStack_80;
        puVar10 = puVar21;
        param_5 = puVar5;
      } while (puVar21 != puVar9);
    }
code_r0x004ec2ee:
    pcVar11 = (code *)auStack_480;
    puStack_508 = &UNK_004ec30c;
    plVar13 = plStack_4a0;
    (*pcStack_498)(plStack_4a0,pcVar11,(long)puStack_488 - (long)pcVar11);
    *(long **)(puStack_4f8 + 4) = plStack_4e0;
    *puStack_4f8 = (uint)uStack_4f0;
    puStack_4f8[1] = uStack_4f0._4_4_;
    puStack_4f8[2] = (uint)uStack_4e8;
    puStack_4f8[3] = uStack_4e8._4_4_;
    puStack_530 = puStack_4f8;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_80) {
    return puStack_530;
  }
  puStack_508 = &UNK_004ec351;
  func_0x0099bd00();
  lStack_538 = *(long *)(in_FS_OFFSET + 0x28);
  puStack_528 = puVar16;
  puStack_520 = puVar10;
  puStack_518 = puVar4;
  puStack_510 = puVar5;
  puStack_508 = (undefined *)apuStack_50;
  func_0x0099bdb0(auStack_938,0,0x400);
  pcStack_948 = (code *)0x0;
  puStack_988 = puVar14;
  puStack_980 = param_6;
  plStack_958 = plVar13;
  pcStack_950 = pcVar11;
  pcStack_940 = (code *)auStack_938;
  if (puVar8 == (uint *)0xffffffffffffffff) {
    pplStack_990 = &plStack_958;
    pcVar11 = *(code **)(extraout_RDX_00 + 0x10);
    pcVar17 = *(code **)(extraout_RDX_00 + 0x18);
    if (pcVar11 != pcVar17) {
      lVar6 = *(long *)(extraout_RDX_00 + 8);
      uVar18 = 0;
      lVar19 = lVar6;
      do {
        lVar19 = lVar19 + uVar18;
        uVar18 = (*(long *)(pcVar11 + 8) + lVar6) - lVar19;
        if (*pcVar11 == (code)0x1) {
          cVar2 = func_0x004ed100(&pplStack_990,pcVar11 + 0x10);
          if (cVar2 == '\0') goto code_r0x004ec640;
        }
        else if (uVar18 != 0) {
          pcStack_948 = pcStack_948 + uVar18;
          if (uVar18 < (ulong)((long)&lStack_538 - (long)pcStack_940)) {
            func_0x0099bda0(pcStack_940,lVar19,uVar18);
            pcStack_940 = pcStack_940 + uVar18;
          }
          else {
            (*pcStack_950)(plStack_958,auStack_938,(long)pcStack_940 - (long)auStack_938);
            pcStack_940 = (code *)auStack_938;
            (*pcStack_950)(plStack_958,lVar19,uVar18);
          }
        }
        pcVar11 = pcVar11 + 0x20;
      } while (pcVar11 != pcVar17);
    }
    uVar18 = (ulong)(*extraout_RDX_00 ^ 1);
  }
  else {
    pplStack_990 = &plStack_958;
    iStack_95c = 0;
    uVar18 = CONCAT71((int7)((ulong)plVar13 >> 8),1);
    if (puVar8 != (uint *)0x0) {
      pbVar12 = (byte *)((long)puVar8 + (long)extraout_RDX_00);
      pbVar22 = extraout_RDX_00;
      do {
        pcVar17 = (code *)(pbVar12 + -(long)pbVar22);
        lVar6 = func_0x0099c070(pbVar22,0x25,pcVar17);
        if (lVar6 == 0) {
          pcStack_948 = pcStack_948 + (long)pcVar17;
          pcVar11 = (code *)((long)&lStack_538 - (long)pcStack_940);
          uVar18 = CONCAT71((int7)((ulong)pbVar22 >> 8),1);
          if (pcVar17 < pcVar11) {
            func_0x0099bda0(pcStack_940,pbVar22,pcVar17);
            pcStack_940 = pcStack_940 + (long)pcVar17;
          }
          else {
            pcVar11 = (code *)auStack_938;
            (*pcStack_950)(plStack_958,pcVar11,(long)pcStack_940 - (long)pcVar11);
            pcStack_940 = pcVar11;
            (*pcStack_950)(plStack_958,pbVar22,pcVar17);
          }
          goto code_r0x004ec7c3;
        }
        uVar18 = lVar6 - (long)pbVar22;
        if (uVar18 != 0) {
          pcStack_948 = pcStack_948 + uVar18;
          if (uVar18 < (ulong)((long)&lStack_538 - (long)pcStack_940)) {
            func_0x0099bda0(pcStack_940,pbVar22,uVar18);
            pcStack_940 = pcStack_940 + uVar18;
          }
          else {
            (*pcStack_950)(plStack_958,auStack_938,(long)pcStack_940 - (long)auStack_938);
            pcStack_940 = (code *)auStack_938;
            (*pcStack_950)(plStack_958,pbVar22,uVar18);
          }
        }
        pcVar11 = (code *)&lStack_538;
        pbVar22 = (byte *)(lVar6 + 1);
        if (pbVar12 <= pbVar22) goto code_r0x004ec640;
        if ((char)_ZN4absl12lts_2026052619str_format_internal13ConvTagHolder5valueE[*pbVar22] < '\0'
           ) {
          if (*pbVar22 == 0x25) {
            pcStack_948 = pcStack_948 + 1;
            if ((ulong)((long)pcVar11 - (long)pcStack_940) < 2) {
              (*pcStack_950)(plStack_958,auStack_938,(long)pcStack_940 - (long)auStack_938);
              pcStack_940 = (code *)auStack_938;
              (*pcStack_950)(plStack_958,&UNK_0015cc01,1);
            }
            else {
              *pcStack_940 = (code)0x25;
              pcStack_940 = pcStack_940 + 1;
            }
            pbVar22 = (byte *)(lVar6 + 2);
          }
          else {
            aiStack_978[0] = 0;
            uStack_96c = 0;
            uStack_969 = 0;
            aiStack_978[1] = 0xffffffff;
            aiStack_978[2] = 0xffffffff;
            uStack_96b = 9;
            cStack_96a = '\x13';
            pbVar22 = (byte *)_ZN4absl12lts_2026052619str_format_internal32ConsumeUnboundConversionNoInlineEPKcS3_PNS1_17UnboundConversionEPi
                                        (pbVar22,pbVar12,aiStack_978,&iStack_95c);
            if ((pbVar22 == (byte *)0x0) ||
               (cVar2 = func_0x004ed100(&pplStack_990,aiStack_978), cVar2 == '\0'))
            goto code_r0x004ec640;
          }
        }
        else {
          if (iStack_95c < 0) goto code_r0x004ec640;
          uStack_96c = 0;
          uStack_96b = 9;
          uStack_969 = 0;
          aiStack_978[1] = 0xffffffff;
          aiStack_978[2] = 0xffffffff;
          aiStack_978[0] = iStack_95c + 1;
          cStack_96a = _ZN4absl12lts_2026052619str_format_internal13ConvTagHolder5valueE[*pbVar22];
          iStack_95c = aiStack_978[0];
          cVar2 = func_0x004ed100(&pplStack_990,aiStack_978);
          if (cVar2 == '\0') goto code_r0x004ec640;
          pbVar22 = (byte *)(lVar6 + 2);
        }
        pcVar11 = (code *)&lStack_538;
      } while (pbVar22 != pbVar12);
      uVar18 = CONCAT71((int7)((ulong)pbVar22 >> 8),1);
    }
  }
code_r0x004ec7c3:
  puVar5 = (uint *)auStack_938;
  plVar13 = plStack_958;
  (*pcStack_950)(plStack_958,puVar5,(long)pcStack_940 - (long)puVar5);
  if (*(long *)(in_FS_OFFSET + 0x28) != lStack_538) {
    uVar7 = func_0x0099bd00();
    if ((plVar13[1] & 1U) == 0) {
      plVar15 = plVar13 + 2;
    }
    else {
      plVar15 = (long *)plVar13[2];
    }
    cVar2 = _ZN4absl12lts_2026052619str_format_internal13FormatUntypedENS1_17FormatRawSinkImplENS1_21UntypedFormatSpecImplENS0_4SpanIKNS1_13FormatArgImplEEE
                      (puVar5,
                       _ZN4absl12lts_2026052619str_format_internal17FormatRawSinkImpl5FlushINSt3__113basic_ostreamIcNS4_11char_traitsIcEEEEEEvPvNS4_17basic_string_viewIcS7_EE
                       ,*(undefined8 *)*plVar13,((undefined8 *)*plVar13)[1],plVar15,
                       (ulong)plVar13[1] >> 1,uVar7,pcVar11,&puStack_508);
    if (cVar2 == '\0') {
      _ZNSt3__18ios_base5clearEj
                ((long)puVar5 + *(long *)(*(long *)puVar5 + -0x18),
                 *(uint *)((long)puVar5 + *(long *)(*(long *)puVar5 + -0x18) + 0x20) | 4);
    }
    return puVar5;
  }
  return (uint *)(uVar18 & 0xffffffff);
code_r0x004ec640:
  uVar18 = 0;
  goto code_r0x004ec7c3;
}


