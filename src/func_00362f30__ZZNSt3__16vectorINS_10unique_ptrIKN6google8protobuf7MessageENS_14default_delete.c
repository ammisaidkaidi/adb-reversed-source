// Function: _ZZNSt3__16vectorINS_10unique_ptrIKN6google8protobuf7MessageENS_14default_deleteIS5_EEEENS_9allocatorIS8_EEE12emplace_backIJS8_EEERS8_DpOT_ENKUlvE0_clEv
// Address: 00362f30
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZZNSt3__16vectorINS_10unique_ptrIKN6google8protobuf7MessageENS_14default_deleteIS5_EEEENS_9allocatorIS8_EEE12emplace_backIJS8_EEERS8_DpOT_ENKUlvE0_clEv
               (undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  plVar1 = (long *)param_1[2];
  lVar11 = plVar1[1] - *plVar1;
  uVar6 = (lVar11 >> 3) + 1;
  if (uVar6 >> 0x3d == 0) {
    uVar8 = plVar1[2] - *plVar1;
    uVar9 = (long)uVar8 >> 2;
    if (uVar9 <= uVar6) {
      uVar9 = uVar6;
    }
    if (0x7ffffffffffffff7 < uVar8) {
      uVar9 = 0x1fffffffffffffff;
    }
    if (uVar9 < 0x2000000000000000) {
      puVar2 = (undefined8 *)param_1[1];
      lVar7 = _Znwm(uVar9 * 8);
      uVar3 = *puVar2;
      *puVar2 = 0;
      *(undefined8 *)(lVar7 + lVar11) = uVar3;
      lVar10 = lVar7 + lVar11 + 8;
      lVar4 = *plVar1;
      lVar12 = (lVar7 + lVar11) - (plVar1[1] - lVar4);
      func_0x0099bda0(lVar12,lVar4);
      lVar11 = plVar1[2];
      *plVar1 = lVar12;
      plVar1[1] = lVar10;
      plVar1[2] = lVar7 + uVar9 * 8;
      if (lVar4 != 0) {
        _ZdaPvSt11align_val_t(lVar4,lVar11 - lVar4);
      }
      *(long *)*param_1 = lVar10;
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


