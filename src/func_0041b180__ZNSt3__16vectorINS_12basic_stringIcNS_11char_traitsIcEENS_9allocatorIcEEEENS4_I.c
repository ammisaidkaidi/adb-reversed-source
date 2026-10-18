// Function: _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE24__emplace_back_slow_pathIJRNS_17basic_string_viewIcS3_EEEEEPS6_DpOT_
// Address: 0041b180
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long * _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE24__emplace_back_slow_pathIJRNS_17basic_string_viewIcS3_EEEEEPS6_DpOT_
                 (long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  char *pcVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  
  lVar8 = param_1[1] - *param_1;
  uVar7 = (lVar8 >> 3) * -0x5555555555555555 + 1;
  if (uVar7 < 0xaaaaaaaaaaaaaab) {
    lVar6 = param_1[2] - *param_1 >> 3;
    uVar1 = lVar6 * 0x5555555555555556;
    if (uVar7 < uVar1) {
      uVar7 = uVar1;
    }
    if (0x555555555555554 < (ulong)(lVar6 * -0x5555555555555555)) {
      uVar7 = 0xaaaaaaaaaaaaaaa;
    }
    if (uVar7 == 0) {
      lVar6 = 0;
    }
    else {
      if (0xaaaaaaaaaaaaaaa < uVar7) goto code_r0x0041b2f5;
      lVar6 = _Znwm(uVar7 * 0x18);
    }
    uVar1 = param_2[1];
    if (uVar1 < 0xfffffffffffffff7) {
      plVar9 = (long *)(lVar8 + lVar6);
      uVar2 = *param_2;
      if (uVar1 < 0x17) {
        *(char *)plVar9 = (char)uVar1 * '\x02';
        pcVar5 = (char *)((long)plVar9 + 1);
      }
      else {
        lVar8 = 0x1a;
        if ((uVar1 | 7) != 0x17) {
          lVar8 = (uVar1 | 7) + 1;
        }
        pcVar5 = (char *)_Znwm(lVar8,uVar2);
        *plVar9 = lVar8 + 1;
        plVar9[1] = uVar1;
        plVar9[2] = (long)pcVar5;
      }
      func_0x0099bd90(pcVar5,uVar2,uVar1);
      pcVar5[uVar1] = '\0';
      lVar8 = *param_1;
      lVar10 = (long)plVar9 - (param_1[1] - lVar8);
      func_0x0099bda0(lVar10,lVar8);
      lVar3 = param_1[2];
      *param_1 = lVar10;
      param_1[1] = (long)(plVar9 + 3);
      param_1[2] = lVar6 + uVar7 * 0x18;
      if (lVar8 != 0) {
        _ZdaPvSt11align_val_t(lVar8,lVar3 - lVar8);
      }
      return plVar9 + 3;
    }
  }
  else {
    func_0x00330ca0();
  }
  func_0x0032e8f0();
code_r0x0041b2f5:
  func_0x0032fc40();
  pcVar4 = (code *)swi(3);
  plVar9 = (long *)(*pcVar4)();
  return plVar9;
}


