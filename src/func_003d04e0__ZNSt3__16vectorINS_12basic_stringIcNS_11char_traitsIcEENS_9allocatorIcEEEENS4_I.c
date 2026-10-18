// Function: _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE24__emplace_back_slow_pathIJRKPKcEEEPS6_DpOT_
// Address: 003d04e0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long * _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE24__emplace_back_slow_pathIJRKPKcEEEPS6_DpOT_
                 (long *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  char *pcVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  
  lVar6 = param_1[1] - *param_1;
  uVar10 = (lVar6 >> 3) * -0x5555555555555555 + 1;
  if (uVar10 < 0xaaaaaaaaaaaaaab) {
    lVar9 = param_1[2] - *param_1 >> 3;
    uVar4 = lVar9 * 0x5555555555555556;
    if (uVar10 < uVar4) {
      uVar10 = uVar4;
    }
    if (0x555555555555554 < (ulong)(lVar9 * -0x5555555555555555)) {
      uVar10 = 0xaaaaaaaaaaaaaaa;
    }
    if (uVar10 == 0) {
      lVar9 = 0;
    }
    else {
      if (0xaaaaaaaaaaaaaaa < uVar10) goto code_r0x003d066e;
      lVar9 = _Znwm(uVar10 * 0x18);
    }
    uVar1 = *param_2;
    uVar4 = func_0x0099bcf0(uVar1);
    if (uVar4 < 0xfffffffffffffff7) {
      plVar7 = (long *)(lVar6 + lVar9);
      if (uVar4 < 0x17) {
        *(char *)plVar7 = (char)uVar4 * '\x02';
        pcVar5 = (char *)((long)plVar7 + 1);
      }
      else {
        lVar6 = 0x1a;
        if ((uVar4 | 7) != 0x17) {
          lVar6 = (uVar4 | 7) + 1;
        }
        pcVar5 = (char *)_Znwm(lVar6);
        *plVar7 = lVar6 + 1;
        plVar7[1] = uVar4;
        plVar7[2] = (long)pcVar5;
      }
      func_0x0099bd90(pcVar5,uVar1,uVar4);
      pcVar5[uVar4] = '\0';
      lVar6 = *param_1;
      lVar8 = (long)plVar7 - (param_1[1] - lVar6);
      func_0x0099bda0(lVar8,lVar6);
      lVar2 = param_1[2];
      *param_1 = lVar8;
      param_1[1] = (long)(plVar7 + 3);
      param_1[2] = uVar10 * 0x18 + lVar9;
      if (lVar6 != 0) {
        _ZdaPvSt11align_val_t(lVar6,lVar2 - lVar6);
      }
      return plVar7 + 3;
    }
  }
  else {
    func_0x00330ca0();
  }
  func_0x0032e8f0();
code_r0x003d066e:
  func_0x0032fc40();
  pcVar3 = (code *)swi(3);
  plVar7 = (long *)(*pcVar3)();
  return plVar7;
}


