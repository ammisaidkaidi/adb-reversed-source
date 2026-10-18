// Function: _Z14GetLogFilePathv
// Address: 003d5020
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long * _Z14GetLogFilePathv(long *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  long *plVar6;
  char *pcVar7;
  long lVar8;
  undefined *puVar9;
  
  lVar3 = func_0x0099be70(&UNK_001705ed);
  if (lVar3 == 0) {
    puVar5 = (undefined *)func_0x0099be70(&UNK_00170602);
    puVar9 = &UNK_0016136b;
    if (puVar5 != (undefined *)0x0) {
      puVar9 = puVar5;
    }
    uVar2 = func_0x0099c2e0();
    _ZN7android4base12StringPrintfEPKcz(param_1,&UNK_001755cc,puVar9,uVar2);
  }
  else {
    uVar4 = func_0x0099bcf0(lVar3);
    if (0xfffffffffffffff6 < uVar4) {
      func_0x0032e8f0();
      pcVar1 = (code *)swi(3);
      plVar6 = (long *)(*pcVar1)();
      return plVar6;
    }
    if (uVar4 < 0x17) {
      *(char *)param_1 = (char)uVar4 * '\x02';
      pcVar7 = (char *)((long)param_1 + 1);
    }
    else {
      lVar8 = 0x1a;
      if ((uVar4 | 7) != 0x17) {
        lVar8 = (uVar4 | 7) + 1;
      }
      pcVar7 = (char *)_Znwm(lVar8);
      *param_1 = lVar8 + 1;
      param_1[1] = uVar4;
      param_1[2] = (long)pcVar7;
    }
    func_0x0099bd90(pcVar7,lVar3,uVar4);
    pcVar7[uVar4] = '\0';
  }
  return param_1;
}


