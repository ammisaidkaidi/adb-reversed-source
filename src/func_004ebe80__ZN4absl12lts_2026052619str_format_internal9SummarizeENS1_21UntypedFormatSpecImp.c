// Function: _ZN4absl12lts_2026052619str_format_internal9SummarizeENS1_21UntypedFormatSpecImplENS0_4SpanIKNS1_13FormatArgImplEEE
// Address: 004ebe80
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Type propagation algorithm not settling */

long * _ZN4absl12lts_2026052619str_format_internal9SummarizeENS1_21UntypedFormatSpecImplENS0_4SpanIKNS1_13FormatArgImplEEE
                 (long *param_1,uint *param_2,long param_3,uint *param_4,uint *param_5,
                 undefined8 param_6)

{
  uint *puVar1;
  char cVar2;
  uint *puVar3;
  long lVar4;
  undefined8 uVar5;
  uint *puVar6;
  byte *extraout_RDX;
  uint *puVar7;
  code *pcVar8;
  byte *pbVar9;
  long *plVar10;
  long *plVar11;
  uint *puVar12;
  long *plVar13;
  code *pcVar14;
  ulong uVar15;
  long lVar16;
  uint *puVar17;
  uint *puVar18;
  byte *pbVar19;
  long in_FS_OFFSET;
  long **pplStack_948;
  uint *puStack_940;
  undefined8 uStack_938;
  int aiStack_930 [3];
  undefined1 uStack_924;
  undefined1 uStack_923;
  char cStack_922;
  undefined1 uStack_921;
  int iStack_914;
  long *plStack_910;
  code *pcStack_908;
  code *pcStack_900;
  code *pcStack_8f8;
  undefined1 auStack_8f0 [1024];
  long lStack_4f0;
  long *plStack_4e8;
  uint *puStack_4e0;
  uint *puStack_4d8;
  uint *puStack_4d0;
  uint *puStack_4c8;
  undefined *puStack_4c0;
  uint *puStack_4b8;
  long *plStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  long *plStack_498;
  long **pplStack_490;
  uint *puStack_488;
  uint *puStack_480;
  uint auStack_478 [3];
  undefined1 uStack_46c;
  undefined1 uStack_46b;
  byte bStack_46a;
  undefined1 uStack_469;
  uint uStack_45c;
  long *plStack_458;
  code *pcStack_450;
  byte *pbStack_448;
  uint *puStack_440;
  undefined1 auStack_438 [1024];
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_4a8 = 0;
  uStack_4a0 = 0;
  plStack_498 = (long *)0x0;
  puVar17 = (uint *)auStack_438;
  puStack_4c0 = &UNK_004ebedf;
  puVar6 = param_4;
  puVar12 = param_5;
  plStack_4b0 = param_1;
  func_0x0099bdb0(puVar17,0,0x400);
  plStack_458 = &uStack_4a8;
  pcStack_450 = 
  _ZN4absl12lts_2026052619str_format_internal17FormatRawSinkImpl5FlushINSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEEEvPvNS4_17basic_string_viewIcS7_EE
  ;
  pbStack_448 = (byte *)0x0;
  pplStack_490 = &plStack_458;
  puVar3 = param_5;
  puStack_488 = param_4;
  puStack_480 = param_5;
  puStack_440 = puVar17;
  if (param_3 == -1) {
    puVar17 = *(uint **)(param_2 + 4);
    puStack_4b8 = *(uint **)(param_2 + 6);
    if (puVar17 != puStack_4b8) {
      puVar3 = *(uint **)(param_2 + 2);
      pbVar19 = (byte *)0x0;
      param_4 = puVar3;
      do {
        param_4 = (uint *)((long)param_4 + (long)pbVar19);
        pbVar19 = (byte *)((long)puVar3 + (*(long *)(puVar17 + 2) - (long)param_4));
        if ((byte)*puVar17 == 1) {
          puStack_4c0 = &UNK_004ec190;
          cVar2 = func_0x004eca80(&pplStack_490,puVar17 + 4);
          if (cVar2 == '\0') goto code_r0x004ec23a;
        }
        else if (pbVar19 != (byte *)0x0) {
          pbStack_448 = pbStack_448 + (long)pbVar19;
          if (pbVar19 < (byte *)((long)&lStack_38 - (long)puStack_440)) {
            puStack_4c0 = &UNK_004ec1e9;
            func_0x0099bda0(puStack_440,param_4,pbVar19);
            puStack_440 = (uint *)((long)puStack_440 + (long)pbVar19);
          }
          else {
            puStack_4c0 = &UNK_004ec209;
            (*pcStack_450)(plStack_458,auStack_438,(long)puStack_440 - (long)auStack_438);
            puStack_440 = (uint *)auStack_438;
            puStack_4c0 = &UNK_004ec22a;
            (*pcStack_450)(plStack_458,param_4,pbVar19);
          }
        }
        puVar17 = puVar17 + 8;
      } while (puVar17 != puStack_4b8);
    }
    if ((byte)*param_2 != 1) goto code_r0x004ec2ee;
code_r0x004ec23a:
    plVar10 = plStack_4b0;
    *(undefined2 *)plStack_4b0 = 0;
    pcVar8 = (code *)auStack_438;
    puStack_4c0 = &UNK_004ec264;
    plVar11 = plStack_458;
    (*pcStack_450)(plStack_458,pcVar8,(long)puStack_440 - (long)pcVar8);
    plStack_4e8 = plVar10;
    if ((uStack_4a8 & 1) != 0) {
      pcVar8 = (code *)(uStack_4a8 & 0xfffffffffffffffe);
      puStack_4c0 = &UNK_004ec288;
      plVar11 = plStack_498;
      _ZdaPvSt11align_val_t();
    }
  }
  else {
    uStack_45c = 0;
    if (param_3 != 0) {
      puVar7 = (uint *)((long)param_2 + param_3);
      do {
        param_4 = (uint *)((long)puVar7 - (long)param_2);
        puStack_4c0 = &UNK_004ebf86;
        puVar3 = (uint *)func_0x0099c070(param_2,0x25,param_4);
        if (puVar3 == (uint *)0x0) {
          pbStack_448 = pbStack_448 + (long)param_4;
          puVar17 = (uint *)((long)&lStack_38 - (long)puStack_440);
          puVar3 = param_5;
          if (param_4 < puVar17) {
            puStack_4c0 = &UNK_004ec2b1;
            func_0x0099bda0(puStack_440,param_2,param_4);
            puStack_440 = (uint *)((long)puStack_440 + (long)param_4);
          }
          else {
            puStack_4c0 = &UNK_004ec2d4;
            (*pcStack_450)(plStack_458,auStack_438,(long)puStack_440 - (long)auStack_438);
            puStack_4c0 = &UNK_004ec2ee;
            puStack_440 = (uint *)auStack_438;
            (*pcStack_450)(plStack_458,param_2,param_4);
          }
          break;
        }
        param_4 = (uint *)((long)puVar3 - (long)param_2);
        if (param_4 != (uint *)0x0) {
          pbStack_448 = pbStack_448 + (long)param_4;
          if (param_4 < (uint *)((long)&lStack_38 - (long)puStack_440)) {
            puStack_4c0 = &UNK_004ebfc1;
            func_0x0099bda0(puStack_440,param_2,param_4);
            puStack_440 = (uint *)((long)puStack_440 + (long)param_4);
          }
          else {
            puStack_4c0 = &UNK_004ebfea;
            (*pcStack_450)(plStack_458,auStack_438,(long)puStack_440 - (long)auStack_438);
            puStack_4c0 = &UNK_004ec008;
            puStack_440 = (uint *)auStack_438;
            (*pcStack_450)(plStack_458,param_2,param_4);
          }
        }
        puVar17 = (uint *)&lStack_38;
        puVar18 = (uint *)((long)puVar3 + 1);
        if (puVar7 <= puVar18) goto code_r0x004ec23a;
        puVar6 = (uint *)(ulong)*(byte *)puVar18;
        puVar1 = puVar6 + 0x811fc;
        if ((char)(byte)*puVar1 < '\0') {
          if (*(byte *)puVar18 == 0x25) {
            pbStack_448 = pbStack_448 + 1;
            if ((ulong)((long)puVar17 - (long)puStack_440) < 2) {
              puStack_4c0 = &UNK_004ec0bd;
              (*pcStack_450)(plStack_458,auStack_438,(long)puStack_440 - (long)auStack_438);
              puStack_4c0 = &UNK_004ec0e1;
              puStack_440 = (uint *)auStack_438;
              (*pcStack_450)(plStack_458,&UNK_0015cc01,1);
            }
            else {
              *(byte *)puStack_440 = 0x25;
              puStack_440 = (uint *)((long)puStack_440 + 1);
            }
            goto code_r0x004ebf60;
          }
          auStack_478[0] = 0;
          uStack_46c = 0;
          uStack_469 = 0;
          auStack_478[1] = 0xffffffff;
          auStack_478[2] = 0xffffffff;
          uStack_46b = 9;
          bStack_46a = 0x13;
          puVar3 = auStack_478;
          puVar6 = &uStack_45c;
          puStack_4c0 = &UNK_004ec11d;
          puVar18 = (uint *)_ZN4absl12lts_2026052619str_format_internal32ConsumeUnboundConversionNoInlineEPKcS3_PNS1_17UnboundConversionEPi
                                      (puVar18,puVar7,puVar3);
          if (puVar18 == (uint *)0x0) goto code_r0x004ec23a;
          puStack_4c0 = &UNK_004ec138;
          cVar2 = func_0x004eca80(&pplStack_490,puVar3);
          param_2 = puVar18;
          if (cVar2 == '\0') goto code_r0x004ec23a;
        }
        else {
          puVar6 = (uint *)(ulong)uStack_45c;
          if ((int)uStack_45c < 0) goto code_r0x004ec23a;
          uStack_46c = 0;
          uStack_46b = 9;
          uStack_469 = 0;
          auStack_478[1] = 0xffffffff;
          auStack_478[2] = 0xffffffff;
          auStack_478[0] = uStack_45c + 1;
          puVar6 = (uint *)(ulong)auStack_478[0];
          puStack_4c0 = &UNK_004ec071;
          bStack_46a = (byte)*puVar1;
          uStack_45c = auStack_478[0];
          cVar2 = func_0x004eca80(&pplStack_490,auStack_478);
          if (cVar2 == '\0') goto code_r0x004ec23a;
code_r0x004ebf60:
          puVar18 = (uint *)((long)puVar3 + 2);
          puVar3 = puVar18;
        }
        puVar17 = (uint *)&lStack_38;
        param_2 = puVar18;
        param_5 = puVar3;
      } while (puVar18 != puVar7);
    }
code_r0x004ec2ee:
    pcVar8 = (code *)auStack_438;
    puStack_4c0 = &UNK_004ec30c;
    plVar11 = plStack_458;
    (*pcStack_450)(plStack_458,pcVar8,(long)puStack_440 - (long)pcVar8);
    plStack_4b0[2] = (long)plStack_498;
    *(undefined4 *)plStack_4b0 = (undefined4)uStack_4a8;
    *(undefined4 *)((long)plStack_4b0 + 4) = uStack_4a8._4_4_;
    *(undefined4 *)(plStack_4b0 + 1) = (undefined4)uStack_4a0;
    *(undefined4 *)((long)plStack_4b0 + 0xc) = uStack_4a0._4_4_;
    plStack_4e8 = plStack_4b0;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return plStack_4e8;
  }
  puStack_4c0 = &UNK_004ec351;
  func_0x0099bd00();
  lStack_4f0 = *(long *)(in_FS_OFFSET + 0x28);
  puStack_4e0 = param_4;
  puStack_4d8 = param_2;
  puStack_4d0 = puVar17;
  puStack_4c8 = puVar3;
  puStack_4c0 = &stack0xfffffffffffffff8;
  func_0x0099bdb0(auStack_8f0,0,0x400);
  pcStack_900 = (code *)0x0;
  puStack_940 = puVar12;
  uStack_938 = param_6;
  plStack_910 = plVar11;
  pcStack_908 = pcVar8;
  pcStack_8f8 = (code *)auStack_8f0;
  if (puVar6 == (uint *)0xffffffffffffffff) {
    pplStack_948 = &plStack_910;
    pcVar8 = *(code **)(extraout_RDX + 0x10);
    pcVar14 = *(code **)(extraout_RDX + 0x18);
    if (pcVar8 != pcVar14) {
      lVar4 = *(long *)(extraout_RDX + 8);
      uVar15 = 0;
      lVar16 = lVar4;
      do {
        lVar16 = lVar16 + uVar15;
        uVar15 = (*(long *)(pcVar8 + 8) + lVar4) - lVar16;
        if (*pcVar8 == (code)0x1) {
          cVar2 = func_0x004ed100(&pplStack_948,pcVar8 + 0x10);
          if (cVar2 == '\0') goto code_r0x004ec640;
        }
        else if (uVar15 != 0) {
          pcStack_900 = pcStack_900 + uVar15;
          if (uVar15 < (ulong)((long)&lStack_4f0 - (long)pcStack_8f8)) {
            func_0x0099bda0(pcStack_8f8,lVar16,uVar15);
            pcStack_8f8 = pcStack_8f8 + uVar15;
          }
          else {
            (*pcStack_908)(plStack_910,auStack_8f0,(long)pcStack_8f8 - (long)auStack_8f0);
            pcStack_8f8 = (code *)auStack_8f0;
            (*pcStack_908)(plStack_910,lVar16,uVar15);
          }
        }
        pcVar8 = pcVar8 + 0x20;
      } while (pcVar8 != pcVar14);
    }
    uVar15 = (ulong)(*extraout_RDX ^ 1);
  }
  else {
    pplStack_948 = &plStack_910;
    iStack_914 = 0;
    uVar15 = CONCAT71((int7)((ulong)plVar11 >> 8),1);
    if (puVar6 != (uint *)0x0) {
      pbVar9 = (byte *)((long)puVar6 + (long)extraout_RDX);
      pbVar19 = extraout_RDX;
      do {
        pcVar14 = (code *)(pbVar9 + -(long)pbVar19);
        lVar4 = func_0x0099c070(pbVar19,0x25,pcVar14);
        if (lVar4 == 0) {
          pcStack_900 = pcStack_900 + (long)pcVar14;
          pcVar8 = (code *)((long)&lStack_4f0 - (long)pcStack_8f8);
          uVar15 = CONCAT71((int7)((ulong)pbVar19 >> 8),1);
          if (pcVar14 < pcVar8) {
            func_0x0099bda0(pcStack_8f8,pbVar19,pcVar14);
            pcStack_8f8 = pcStack_8f8 + (long)pcVar14;
          }
          else {
            pcVar8 = (code *)auStack_8f0;
            (*pcStack_908)(plStack_910,pcVar8,(long)pcStack_8f8 - (long)pcVar8);
            pcStack_8f8 = pcVar8;
            (*pcStack_908)(plStack_910,pbVar19,pcVar14);
          }
          goto code_r0x004ec7c3;
        }
        uVar15 = lVar4 - (long)pbVar19;
        if (uVar15 != 0) {
          pcStack_900 = pcStack_900 + uVar15;
          if (uVar15 < (ulong)((long)&lStack_4f0 - (long)pcStack_8f8)) {
            func_0x0099bda0(pcStack_8f8,pbVar19,uVar15);
            pcStack_8f8 = pcStack_8f8 + uVar15;
          }
          else {
            (*pcStack_908)(plStack_910,auStack_8f0,(long)pcStack_8f8 - (long)auStack_8f0);
            pcStack_8f8 = (code *)auStack_8f0;
            (*pcStack_908)(plStack_910,pbVar19,uVar15);
          }
        }
        pcVar8 = (code *)&lStack_4f0;
        pbVar19 = (byte *)(lVar4 + 1);
        if (pbVar9 <= pbVar19) goto code_r0x004ec640;
        if ((char)_ZN4absl12lts_2026052619str_format_internal13ConvTagHolder5valueE[*pbVar19] < '\0'
           ) {
          if (*pbVar19 == 0x25) {
            pcStack_900 = pcStack_900 + 1;
            if ((ulong)((long)pcVar8 - (long)pcStack_8f8) < 2) {
              (*pcStack_908)(plStack_910,auStack_8f0,(long)pcStack_8f8 - (long)auStack_8f0);
              pcStack_8f8 = (code *)auStack_8f0;
              (*pcStack_908)(plStack_910,&UNK_0015cc01,1);
            }
            else {
              *pcStack_8f8 = (code)0x25;
              pcStack_8f8 = pcStack_8f8 + 1;
            }
            pbVar19 = (byte *)(lVar4 + 2);
          }
          else {
            aiStack_930[0] = 0;
            uStack_924 = 0;
            uStack_921 = 0;
            aiStack_930[1] = 0xffffffff;
            aiStack_930[2] = 0xffffffff;
            uStack_923 = 9;
            cStack_922 = '\x13';
            pbVar19 = (byte *)_ZN4absl12lts_2026052619str_format_internal32ConsumeUnboundConversionNoInlineEPKcS3_PNS1_17UnboundConversionEPi
                                        (pbVar19,pbVar9,aiStack_930,&iStack_914);
            if ((pbVar19 == (byte *)0x0) ||
               (cVar2 = func_0x004ed100(&pplStack_948,aiStack_930), cVar2 == '\0'))
            goto code_r0x004ec640;
          }
        }
        else {
          if (iStack_914 < 0) goto code_r0x004ec640;
          uStack_924 = 0;
          uStack_923 = 9;
          uStack_921 = 0;
          aiStack_930[1] = 0xffffffff;
          aiStack_930[2] = 0xffffffff;
          aiStack_930[0] = iStack_914 + 1;
          cStack_922 = _ZN4absl12lts_2026052619str_format_internal13ConvTagHolder5valueE[*pbVar19];
          iStack_914 = aiStack_930[0];
          cVar2 = func_0x004ed100(&pplStack_948,aiStack_930);
          if (cVar2 == '\0') goto code_r0x004ec640;
          pbVar19 = (byte *)(lVar4 + 2);
        }
        pcVar8 = (code *)&lStack_4f0;
      } while (pbVar19 != pbVar9);
      uVar15 = CONCAT71((int7)((ulong)pbVar19 >> 8),1);
    }
  }
code_r0x004ec7c3:
  plVar10 = (long *)auStack_8f0;
  plVar11 = plStack_910;
  (*pcStack_908)(plStack_910,plVar10,(long)pcStack_8f8 - (long)plVar10);
  if (*(long *)(in_FS_OFFSET + 0x28) != lStack_4f0) {
    uVar5 = func_0x0099bd00();
    if ((plVar11[1] & 1U) == 0) {
      plVar13 = plVar11 + 2;
    }
    else {
      plVar13 = (long *)plVar11[2];
    }
    cVar2 = _ZN4absl12lts_2026052619str_format_internal13FormatUntypedENS1_17FormatRawSinkImplENS1_21UntypedFormatSpecImplENS0_4SpanIKNS1_13FormatArgImplEEE
                      (plVar10,
                       _ZN4absl12lts_2026052619str_format_internal17FormatRawSinkImpl5FlushINSt3__113basic_ostreamIcNS4_11char_traitsIcEEEEEEvPvNS4_17basic_string_viewIcS7_EE
                       ,*(undefined8 *)*plVar11,((undefined8 *)*plVar11)[1],plVar13,
                       (ulong)plVar11[1] >> 1,uVar5,pcVar8,&puStack_4c0);
    if (cVar2 == '\0') {
      _ZNSt3__18ios_base5clearEj
                ((long)plVar10 + *(long *)(*plVar10 + -0x18),
                 *(uint *)((long)plVar10 + *(long *)(*plVar10 + -0x18) + 0x20) | 4);
    }
    return plVar10;
  }
  return (long *)(uVar15 & 0xffffffff);
code_r0x004ec640:
  uVar15 = 0;
  goto code_r0x004ec7c3;
}


