// Function: _ZZNSt3__16vectorIPKN6google8protobuf7MessageENS_9allocatorIS5_EEE12emplace_backIJS5_EEERS5_DpOT_ENKUlvE0_clEv
// Address: 0033c270
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZZNSt3__16vectorIPKN6google8protobuf7MessageENS_9allocatorIS5_EEE12emplace_backIJS5_EEERS5_DpOT_ENKUlvE0_clEv
               (undefined8 *param_1)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  code *pcVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  plVar2 = (long *)param_1[2];
  lVar3 = *plVar2;
  lVar11 = plVar2[1] - lVar3;
  uVar1 = (lVar11 >> 3) + 1;
  if (uVar1 >> 0x3d == 0) {
    uVar7 = plVar2[2] - lVar3;
    uVar8 = (long)uVar7 >> 2;
    if ((ulong)((long)uVar7 >> 2) <= uVar1) {
      uVar8 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar7) {
      uVar8 = 0x1fffffffffffffff;
    }
    if (uVar8 < 0x2000000000000000) {
      puVar4 = (undefined8 *)param_1[1];
      lVar6 = _Znwm(uVar8 * 8);
      *(undefined8 *)(lVar6 + lVar11) = *puVar4;
      lVar9 = lVar6 + lVar11 + 8;
      lVar10 = lVar6 + lVar11 + (lVar11 >> 3) * -8;
      func_0x0099bda0(lVar10,lVar3,lVar11);
      *plVar2 = lVar10;
      plVar2[1] = lVar9;
      plVar2[2] = lVar6 + uVar8 * 8;
      if (lVar3 != 0) {
        _ZdaPvSt11align_val_t(lVar3,uVar7);
      }
      *(long *)*param_1 = lVar9;
      return;
    }
  }
  else {
    func_0x00330ca0();
  }
  func_0x0032fc40();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


