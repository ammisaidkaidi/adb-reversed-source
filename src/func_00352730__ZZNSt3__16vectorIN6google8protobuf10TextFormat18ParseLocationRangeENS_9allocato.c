// Function: _ZZNSt3__16vectorIN6google8protobuf10TextFormat18ParseLocationRangeENS_9allocatorIS4_EEE12emplace_backIJRKS4_EEERS4_DpOT_ENKUlvE0_clEv
// Address: 00352730
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZZNSt3__16vectorIN6google8protobuf10TextFormat18ParseLocationRangeENS_9allocatorIS4_EEE12emplace_backIJRKS4_EEERS4_DpOT_ENKUlvE0_clEv
               (undefined8 *param_1)

{
  undefined4 *puVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined4 *puVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  
  plVar3 = (long *)param_1[2];
  lVar4 = *plVar3;
  lVar15 = plVar3[1] - lVar4;
  uVar2 = (lVar15 >> 4) + 1;
  if (uVar2 >> 0x3c == 0) {
    uVar13 = plVar3[2] - lVar4;
    uVar14 = (long)uVar13 >> 3;
    if ((ulong)((long)uVar13 >> 3) <= uVar2) {
      uVar14 = uVar2;
    }
    if (0x7fffffffffffffef < uVar13) {
      uVar14 = 0xfffffffffffffff;
    }
    if (uVar14 < 0x1000000000000000) {
      puVar5 = (undefined4 *)param_1[1];
      lVar10 = _Znwm(uVar14 * 0x10);
      uVar7 = puVar5[1];
      uVar8 = puVar5[2];
      uVar9 = puVar5[3];
      puVar1 = (undefined4 *)(lVar10 + lVar15);
      *puVar1 = *puVar5;
      puVar1[1] = uVar7;
      puVar1[2] = uVar8;
      puVar1[3] = uVar9;
      lVar11 = lVar10 + lVar15 + 0x10;
      lVar12 = lVar10 + lVar15 + (lVar15 >> 4) * -0x10;
      func_0x0099bda0(lVar12,lVar4,lVar15);
      *plVar3 = lVar12;
      plVar3[1] = lVar11;
      plVar3[2] = uVar14 * 0x10 + lVar10;
      if (lVar4 != 0) {
        _ZdaPvSt11align_val_t(lVar4,uVar13);
      }
      *(long *)*param_1 = lVar11;
      return;
    }
  }
  else {
    func_0x00330ca0();
  }
  func_0x0032fc40();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


