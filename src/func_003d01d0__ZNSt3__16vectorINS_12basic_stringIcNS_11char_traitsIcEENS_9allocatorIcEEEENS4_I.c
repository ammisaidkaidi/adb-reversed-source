// Function: _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE12emplace_backIJRKPKcEEERS6_DpOT_
// Address: 003d01d0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long * _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE12emplace_backIJRKPKcEEERS6_DpOT_
                 (long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  ulong uVar3;
  char *pcVar4;
  long *plVar5;
  long lVar6;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 < *(long **)(param_1 + 0x10)) {
    uVar1 = *param_2;
    uVar3 = func_0x0099bcf0(uVar1);
    if (0xfffffffffffffff6 < uVar3) {
      func_0x0032e8f0();
      pcVar2 = (code *)swi(3);
      plVar5 = (long *)(*pcVar2)();
      return plVar5;
    }
    if (uVar3 < 0x17) {
      *(char *)plVar5 = (char)uVar3 * '\x02';
      pcVar4 = (char *)((long)plVar5 + 1);
    }
    else {
      lVar6 = 0x1a;
      if ((uVar3 | 7) != 0x17) {
        lVar6 = (uVar3 | 7) + 1;
      }
      pcVar4 = (char *)_Znwm(lVar6);
      *plVar5 = lVar6 + 1;
      plVar5[1] = uVar3;
      plVar5[2] = (long)pcVar4;
    }
    func_0x0099bd90(pcVar4,uVar1,uVar3);
    pcVar4[uVar3] = '\0';
    plVar5 = plVar5 + 3;
  }
  else {
    plVar5 = (long *)_ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE24__emplace_back_slow_pathIJRKPKcEEEPS6_DpOT_
                               (param_1);
  }
  *(long **)(param_1 + 8) = plVar5;
  return plVar5 + -3;
}


