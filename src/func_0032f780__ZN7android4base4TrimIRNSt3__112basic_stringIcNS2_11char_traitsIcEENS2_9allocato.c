// Function: _ZN7android4base4TrimIRNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEEES8_OT_
// Address: 0032f780
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long * _ZN7android4base4TrimIRNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEEES8_OT_
                 (long *param_1,byte *param_2)

{
  code *pcVar1;
  long *plVar2;
  char *pcVar3;
  ulong uVar4;
  long lVar5;
  byte *pbVar6;
  byte *pbVar7;
  long lVar8;
  ulong uVar9;
  byte *pbVar10;
  bool bVar11;
  
  bVar11 = (*param_2 & 1) != 0;
  pbVar6 = param_2 + 1;
  if (bVar11) {
    pbVar6 = *(byte **)(param_2 + 0x10);
  }
  uVar4 = (ulong)(*param_2 >> 1);
  if (bVar11) {
    uVar4 = *(ulong *)(param_2 + 8);
  }
  if (uVar4 == 0) {
    uVar9 = 0;
    pbVar7 = pbVar6;
  }
  else {
    plVar2 = (long *)func_0x0099be00();
    pbVar7 = pbVar6 + uVar4;
    lVar5 = -uVar4;
    uVar9 = 0;
    pbVar10 = pbVar6;
    do {
      if ((*(byte *)(*plVar2 + 1 + (long)(char)*pbVar10 * 2) & 0x20) == 0) {
        plVar2 = (long *)func_0x0099be00();
        lVar8 = 0;
        goto code_r0x0032f810;
      }
      pbVar10 = pbVar10 + 1;
      lVar5 = lVar5 + 1;
    } while (lVar5 != 0);
  }
  goto code_r0x0032f83f;
  while (bVar11 = lVar5 + 1 != lVar8, lVar8 = lVar8 + -1, bVar11) {
code_r0x0032f810:
    pbVar7 = pbVar10;
    if ((*(byte *)(*plVar2 + 1 + (long)(char)pbVar6[lVar8 + (uVar4 - 1)] * 2) & 0x20) == 0) {
      uVar9 = lVar8 - lVar5;
      if (0xfffffffffffffff6 < uVar9) {
        func_0x0032e8f0();
        pcVar1 = (code *)swi(3);
        plVar2 = (long *)(*pcVar1)();
        return plVar2;
      }
      if (uVar9 < 0x17) goto code_r0x0032f83f;
      lVar5 = 0x1a;
      if ((uVar9 | 7) != 0x17) {
        lVar5 = (uVar9 | 7) + 1;
      }
      pcVar3 = (char *)_Znwm(lVar5);
      *param_1 = lVar5 + 1;
      param_1[1] = uVar9;
      param_1[2] = (long)pcVar3;
      goto code_r0x0032f84c;
    }
  }
  uVar9 = 0;
code_r0x0032f83f:
  *(char *)param_1 = (char)uVar9 * '\x02';
  pcVar3 = (char *)((long)param_1 + 1);
  pbVar10 = pbVar7;
code_r0x0032f84c:
  func_0x0099bd90(pcVar3,pbVar10,uVar9);
  pcVar3[uVar9] = '\0';
  return param_1;
}


