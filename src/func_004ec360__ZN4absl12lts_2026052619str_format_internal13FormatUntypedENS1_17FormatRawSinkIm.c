// Function: _ZN4absl12lts_2026052619str_format_internal13FormatUntypedENS1_17FormatRawSinkImplENS1_21UntypedFormatSpecImplENS0_4SpanIKNS1_13FormatArgImplEEE
// Address: 004ec360
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Type propagation algorithm not settling */

long * _ZN4absl12lts_2026052619str_format_internal13FormatUntypedENS1_17FormatRawSinkImplENS1_21UntypedFormatSpecImplENS0_4SpanIKNS1_13FormatArgImplEEE
                 (long *param_1,code *param_2,byte *param_3,long param_4,undefined8 param_5,
                 undefined8 param_6)

{
  byte *pbVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  byte *pbVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  code *pcVar9;
  ulong uVar10;
  long lVar11;
  long in_FS_OFFSET;
  long **pplStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  int aiStack_478 [3];
  undefined1 uStack_46c;
  undefined1 uStack_46b;
  char cStack_46a;
  undefined1 uStack_469;
  int iStack_45c;
  long *plStack_458;
  code *pcStack_450;
  code *pcStack_448;
  code *pcStack_440;
  undefined1 auStack_438 [1024];
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  func_0x0099bdb0(auStack_438,0,0x400);
  pcStack_448 = (code *)0x0;
  uStack_488 = param_5;
  uStack_480 = param_6;
  plStack_458 = param_1;
  pcStack_450 = param_2;
  pcStack_440 = (code *)auStack_438;
  if (param_4 == -1) {
    pplStack_490 = &plStack_458;
    param_2 = *(code **)(param_3 + 0x10);
    pcVar9 = *(code **)(param_3 + 0x18);
    if (param_2 != pcVar9) {
      lVar3 = *(long *)(param_3 + 8);
      uVar10 = 0;
      lVar11 = lVar3;
      do {
        lVar11 = lVar11 + uVar10;
        uVar10 = (*(long *)(param_2 + 8) + lVar3) - lVar11;
        if (*param_2 == (code)0x1) {
          cVar2 = func_0x004ed100(&pplStack_490,param_2 + 0x10);
          if (cVar2 == '\0') goto code_r0x004ec640;
        }
        else if (uVar10 != 0) {
          pcStack_448 = pcStack_448 + uVar10;
          if (uVar10 < (ulong)((long)&lStack_38 - (long)pcStack_440)) {
            func_0x0099bda0(pcStack_440,lVar11,uVar10);
            pcStack_440 = pcStack_440 + uVar10;
          }
          else {
            (*pcStack_450)(plStack_458,auStack_438,(long)pcStack_440 - (long)auStack_438);
            pcStack_440 = (code *)auStack_438;
            (*pcStack_450)(plStack_458,lVar11,uVar10);
          }
        }
        param_2 = param_2 + 0x20;
      } while (param_2 != pcVar9);
    }
    uVar10 = (ulong)(*param_3 ^ 1);
  }
  else {
    pplStack_490 = &plStack_458;
    iStack_45c = 0;
    uVar10 = CONCAT71((int7)((ulong)param_1 >> 8),1);
    if (param_4 != 0) {
      pbVar5 = param_3 + param_4;
      do {
        pcVar9 = (code *)(pbVar5 + -(long)param_3);
        lVar3 = func_0x0099c070(param_3,0x25,pcVar9);
        if (lVar3 == 0) {
          pcStack_448 = pcStack_448 + (long)pcVar9;
          param_2 = (code *)((long)&lStack_38 - (long)pcStack_440);
          uVar10 = CONCAT71((int7)((ulong)param_3 >> 8),1);
          if (pcVar9 < param_2) {
            func_0x0099bda0(pcStack_440,param_3,pcVar9);
            pcStack_440 = pcStack_440 + (long)pcVar9;
          }
          else {
            param_2 = (code *)auStack_438;
            (*pcStack_450)(plStack_458,param_2,(long)pcStack_440 - (long)param_2);
            pcStack_440 = param_2;
            (*pcStack_450)(plStack_458,param_3,pcVar9);
          }
          goto code_r0x004ec7c3;
        }
        uVar10 = lVar3 - (long)param_3;
        if (uVar10 != 0) {
          pcStack_448 = pcStack_448 + uVar10;
          if (uVar10 < (ulong)((long)&lStack_38 - (long)pcStack_440)) {
            func_0x0099bda0(pcStack_440,param_3,uVar10);
            pcStack_440 = pcStack_440 + uVar10;
          }
          else {
            (*pcStack_450)(plStack_458,auStack_438,(long)pcStack_440 - (long)auStack_438);
            pcStack_440 = (code *)auStack_438;
            (*pcStack_450)(plStack_458,param_3,uVar10);
          }
        }
        param_2 = (code *)&lStack_38;
        pbVar1 = (byte *)(lVar3 + 1);
        if (pbVar5 <= pbVar1) goto code_r0x004ec640;
        if ((char)_ZN4absl12lts_2026052619str_format_internal13ConvTagHolder5valueE[*pbVar1] < '\0')
        {
          if (*pbVar1 == 0x25) {
            pcStack_448 = pcStack_448 + 1;
            if ((ulong)((long)param_2 - (long)pcStack_440) < 2) {
              (*pcStack_450)(plStack_458,auStack_438,(long)pcStack_440 - (long)auStack_438);
              pcStack_440 = (code *)auStack_438;
              (*pcStack_450)(plStack_458,&UNK_0015cc01,1);
            }
            else {
              *pcStack_440 = (code)0x25;
              pcStack_440 = pcStack_440 + 1;
            }
            param_3 = (byte *)(lVar3 + 2);
          }
          else {
            aiStack_478[0] = 0;
            uStack_46c = 0;
            uStack_469 = 0;
            aiStack_478[1] = 0xffffffff;
            aiStack_478[2] = 0xffffffff;
            uStack_46b = 9;
            cStack_46a = '\x13';
            param_3 = (byte *)_ZN4absl12lts_2026052619str_format_internal32ConsumeUnboundConversionNoInlineEPKcS3_PNS1_17UnboundConversionEPi
                                        (pbVar1,pbVar5,aiStack_478,&iStack_45c);
            if (param_3 == (byte *)0x0) goto code_r0x004ec640;
            cVar2 = func_0x004ed100(&pplStack_490,aiStack_478);
            if (cVar2 == '\0') goto code_r0x004ec640;
          }
        }
        else {
          if (iStack_45c < 0) goto code_r0x004ec640;
          uStack_46c = 0;
          uStack_46b = 9;
          uStack_469 = 0;
          aiStack_478[1] = 0xffffffff;
          aiStack_478[2] = 0xffffffff;
          aiStack_478[0] = iStack_45c + 1;
          cStack_46a = _ZN4absl12lts_2026052619str_format_internal13ConvTagHolder5valueE[*pbVar1];
          iStack_45c = aiStack_478[0];
          cVar2 = func_0x004ed100(&pplStack_490,aiStack_478);
          if (cVar2 == '\0') goto code_r0x004ec640;
          param_3 = (byte *)(lVar3 + 2);
        }
        param_2 = (code *)&lStack_38;
      } while (param_3 != pbVar5);
      uVar10 = CONCAT71((int7)((ulong)param_3 >> 8),1);
    }
  }
code_r0x004ec7c3:
  plVar6 = (long *)auStack_438;
  plVar7 = plStack_458;
  (*pcStack_450)(plStack_458,plVar6,(long)pcStack_440 - (long)plVar6);
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return (long *)(uVar10 & 0xffffffff);
  }
  uVar4 = func_0x0099bd00();
  if ((plVar7[1] & 1U) == 0) {
    plVar8 = plVar7 + 2;
  }
  else {
    plVar8 = (long *)plVar7[2];
  }
  cVar2 = _ZN4absl12lts_2026052619str_format_internal13FormatUntypedENS1_17FormatRawSinkImplENS1_21UntypedFormatSpecImplENS0_4SpanIKNS1_13FormatArgImplEEE
                    (plVar6,
                     _ZN4absl12lts_2026052619str_format_internal17FormatRawSinkImpl5FlushINSt3__113basic_ostreamIcNS4_11char_traitsIcEEEEEEvPvNS4_17basic_string_viewIcS7_EE
                     ,*(undefined8 *)*plVar7,((undefined8 *)*plVar7)[1],plVar8,(ulong)plVar7[1] >> 1
                     ,uVar4,param_2,&stack0xfffffffffffffff8);
  if (cVar2 == '\0') {
    _ZNSt3__18ios_base5clearEj
              ((long)plVar6 + *(long *)(*plVar6 + -0x18),
               *(uint *)((long)plVar6 + *(long *)(*plVar6 + -0x18) + 0x20) | 4);
  }
  return plVar6;
code_r0x004ec640:
  uVar10 = 0;
  goto code_r0x004ec7c3;
}


