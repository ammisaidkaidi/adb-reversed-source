// Function: _ZNSt3__16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEE24__emplace_back_slow_pathIJRS3_EEEPS3_DpOT_
// Address: 00412860
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long * _ZNSt3__16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEE24__emplace_back_slow_pathIJRS3_EEEPS3_DpOT_
                 (long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  
  lVar1 = *param_1;
  lVar9 = param_1[1] - lVar1;
  uVar11 = (lVar9 >> 3) * -0x5555555555555555 + 1;
  if (uVar11 < 0xaaaaaaaaaaaaaab) {
    lVar2 = param_1[2];
    lVar8 = lVar2 - lVar1 >> 3;
    uVar5 = lVar8 * 0x5555555555555556;
    if (uVar11 < uVar5) {
      uVar11 = uVar5;
    }
    if (0x555555555555554 < (ulong)(lVar8 * -0x5555555555555555)) {
      uVar11 = 0xaaaaaaaaaaaaaaa;
    }
    if (uVar11 == 0) {
      lVar8 = 0;
    }
    else {
      if (0xaaaaaaaaaaaaaaa < uVar11) goto code_r0x004129bc;
      lVar8 = _Znwm(uVar11 * 0x18);
    }
    plVar7 = (long *)(lVar8 + lVar9);
    *(undefined8 *)(lVar8 + lVar9) = 0;
    ((undefined8 *)(lVar8 + lVar9))[1] = 0;
    *(undefined8 *)(lVar8 + 0x10 + lVar9) = 0;
    lVar3 = *param_2;
    lVar10 = param_2[1] - lVar3;
    if (lVar10 != 0) {
      if (lVar10 < 0) goto code_r0x004129c1;
      lVar6 = _Znwm(lVar10);
      *plVar7 = lVar6;
      plVar7[2] = lVar6 + lVar10;
      func_0x0099bda0(lVar6,lVar3,lVar10);
      plVar7[1] = lVar6 + lVar10;
    }
    func_0x0099bda0((long)plVar7 - lVar9,lVar1,lVar9);
    *param_1 = (long)plVar7 - lVar9;
    param_1[1] = (long)(plVar7 + 3);
    param_1[2] = lVar8 + uVar11 * 0x18;
    if (lVar1 != 0) {
      _ZdaPvSt11align_val_t(lVar1,lVar2 - lVar1);
    }
    return plVar7 + 3;
  }
  func_0x00330ca0();
code_r0x004129bc:
  func_0x0032fc40();
code_r0x004129c1:
  func_0x00330ca0();
  pcVar4 = (code *)swi(3);
  plVar7 = (long *)(*pcVar4)();
  return plVar7;
}


