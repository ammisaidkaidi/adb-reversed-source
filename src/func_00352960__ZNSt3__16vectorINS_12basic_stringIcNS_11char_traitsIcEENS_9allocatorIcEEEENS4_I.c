// Function: _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE24__emplace_back_slow_pathIJRA7_KcEEEPS6_DpOT_
// Address: 00352960
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long * _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE24__emplace_back_slow_pathIJRA7_KcEEEPS6_DpOT_
                 (long *param_1,undefined8 param_2)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  char *pcVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  
  lVar6 = param_1[1] - *param_1;
  uVar9 = (lVar6 >> 3) * -0x5555555555555555 + 1;
  if (uVar9 < 0xaaaaaaaaaaaaaab) {
    lVar5 = param_1[2] - *param_1 >> 3;
    uVar3 = lVar5 * 0x5555555555555556;
    if (uVar9 < uVar3) {
      uVar9 = uVar3;
    }
    if (0x555555555555554 < (ulong)(lVar5 * -0x5555555555555555)) {
      uVar9 = 0xaaaaaaaaaaaaaaa;
    }
    if (uVar9 == 0) {
      lVar5 = 0;
    }
    else {
      if (0xaaaaaaaaaaaaaaa < uVar9) goto code_r0x00352ae4;
      lVar5 = _Znwm(uVar9 * 0x18);
    }
    uVar3 = func_0x0099bcf0(param_2);
    if (uVar3 < 0xfffffffffffffff7) {
      plVar7 = (long *)(lVar6 + lVar5);
      if (uVar3 < 0x17) {
        *(char *)plVar7 = (char)uVar3 * '\x02';
        pcVar4 = (char *)((long)plVar7 + 1);
      }
      else {
        lVar6 = 0x1a;
        if ((uVar3 | 7) != 0x17) {
          lVar6 = (uVar3 | 7) + 1;
        }
        pcVar4 = (char *)_Znwm(lVar6);
        *plVar7 = lVar6 + 1;
        plVar7[1] = uVar3;
        plVar7[2] = (long)pcVar4;
      }
      func_0x0099bd90(pcVar4,param_2,uVar3);
      pcVar4[uVar3] = '\0';
      lVar6 = *param_1;
      lVar8 = (long)plVar7 - (param_1[1] - lVar6);
      func_0x0099bda0(lVar8,lVar6);
      lVar1 = param_1[2];
      *param_1 = lVar8;
      param_1[1] = (long)(plVar7 + 3);
      param_1[2] = uVar9 * 0x18 + lVar5;
      if (lVar6 != 0) {
        _ZdaPvSt11align_val_t(lVar6,lVar1 - lVar6);
      }
      return plVar7 + 3;
    }
  }
  else {
    func_0x00330ca0();
  }
  func_0x0032e8f0();
code_r0x00352ae4:
  func_0x0032fc40();
  pcVar2 = (code *)swi(3);
  plVar7 = (long *)(*pcVar2)();
  return plVar7;
}


