// Function: _ZZNSt3__16vectorIcNS_9allocatorIcEEE12emplace_backIJRKcEEERcDpOT_ENKUlvE0_clEv
// Address: 0033be50
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZZNSt3__16vectorIcNS_9allocatorIcEEE12emplace_backIJRKcEEERcDpOT_ENKUlvE0_clEv
               (undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  undefined1 *puVar3;
  code *pcVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  
  plVar1 = (long *)param_1[2];
  lVar2 = *plVar1;
  lVar9 = plVar1[1] - lVar2;
  uVar5 = lVar9 + 1;
  if (-1 < (long)uVar5) {
    uVar8 = plVar1[2] - lVar2;
    if (uVar5 < uVar8 * 2) {
      uVar5 = uVar8 * 2;
    }
    puVar3 = (undefined1 *)param_1[1];
    uVar10 = 0x7fffffffffffffff;
    if (uVar8 < 0x3fffffffffffffff) {
      uVar10 = uVar5;
    }
    if (uVar10 == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = _Znwm(uVar10);
    }
    *(undefined1 *)(lVar6 + lVar9) = *puVar3;
    lVar7 = lVar6 + lVar9 + 1;
    func_0x0099bda0(lVar6,lVar2,lVar9);
    *plVar1 = lVar6;
    plVar1[1] = lVar7;
    plVar1[2] = uVar10 + lVar6;
    if (lVar2 != 0) {
      _ZdaPvSt11align_val_t(lVar2,uVar8);
    }
    *(long *)*param_1 = lVar7;
    return;
  }
  func_0x00330ca0();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


