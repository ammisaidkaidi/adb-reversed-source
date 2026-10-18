// Function: _ZZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE12emplace_backIJS6_EEERS6_DpOT_ENKUlvE0_clEv
// Address: 0033ac80
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE12emplace_backIJS6_EEERS6_DpOT_ENKUlvE0_clEv
               (undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  code *pcVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  plVar1 = (long *)param_1[2];
  lVar11 = plVar1[1] - *plVar1;
  uVar6 = (lVar11 >> 3) * -0x5555555555555555 + 1;
  if (uVar6 < 0xaaaaaaaaaaaaaab) {
    lVar9 = plVar1[2] - *plVar1 >> 3;
    uVar4 = lVar9 * 0x5555555555555556;
    if (uVar6 < uVar4) {
      uVar6 = uVar4;
    }
    if (0x555555555555554 < (ulong)(lVar9 * -0x5555555555555555)) {
      uVar6 = 0xaaaaaaaaaaaaaaa;
    }
    if (uVar6 < 0xaaaaaaaaaaaaaab) {
      puVar2 = (undefined8 *)param_1[1];
      lVar7 = _Znwm(uVar6 * 0x18);
      *(undefined8 *)(lVar7 + 0x10 + lVar11) = puVar2[2];
      uVar5 = puVar2[1];
      *(undefined8 *)(lVar7 + lVar11) = *puVar2;
      ((undefined8 *)(lVar7 + lVar11))[1] = uVar5;
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      lVar8 = lVar7 + lVar11 + 0x18;
      lVar9 = *plVar1;
      lVar10 = (lVar7 + lVar11) - (plVar1[1] - lVar9);
      func_0x0099bda0(lVar10,lVar9);
      lVar11 = plVar1[2];
      *plVar1 = lVar10;
      plVar1[1] = lVar8;
      plVar1[2] = uVar6 * 0x18 + lVar7;
      if (lVar9 != 0) {
        _ZdaPvSt11align_val_t(lVar9,lVar11 - lVar9);
      }
      *(long *)*param_1 = lVar8;
      return;
    }
  }
  else {
    func_0x00330ca0();
  }
  func_0x0032fc40();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


