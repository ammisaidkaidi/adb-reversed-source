// Function: _ZNSt3__16vectorI5BlockNS_9allocatorIS1_EEE24__emplace_back_slow_pathIJS1_EEEPS1_DpOT_
// Address: 00347b30
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long _ZNSt3__16vectorI5BlockNS_9allocatorIS1_EEE24__emplace_back_slow_pathIJS1_EEEPS1_DpOT_
               (long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  
  lVar12 = param_1[1] - *param_1;
  uVar8 = (lVar12 >> 5) + 1;
  if (uVar8 >> 0x3b == 0) {
    uVar11 = param_1[2] - *param_1;
    uVar14 = (long)uVar11 >> 4;
    if (uVar14 <= uVar8) {
      uVar14 = uVar8;
    }
    if (0x7fffffffffffffdf < uVar11) {
      uVar14 = 0x7ffffffffffffff;
    }
    if (uVar14 < 0x800000000000000) {
      lVar9 = _Znwm(uVar14 * 0x20);
      *(undefined8 *)(lVar9 + lVar12) = *param_2;
      *param_2 = 0;
      uVar3 = param_2[1];
      uVar6 = param_2[2];
      param_2[1] = 0;
      param_2[2] = 0;
      puVar1 = (undefined8 *)(lVar9 + 8 + lVar12);
      *puVar1 = uVar3;
      puVar1[1] = uVar6;
      uVar3 = param_2[3];
      param_2[3] = 0;
      *(undefined8 *)(lVar9 + 0x18 + lVar12) = uVar3;
      lVar2 = lVar9 + 0x20 + lVar12;
      plVar13 = (long *)*param_1;
      plVar4 = (long *)param_1[1];
      lVar12 = ((long)plVar13 - (long)plVar4) + lVar9 + lVar12;
      if ((long)plVar13 - (long)plVar4 != 0) {
        lVar10 = 0;
        do {
          *(undefined8 *)(lVar12 + lVar10) = *(undefined8 *)((long)plVar13 + lVar10);
          uVar3 = *(undefined8 *)((long)plVar13 + lVar10 + 8);
          *(undefined8 *)((long)plVar13 + lVar10) = 0;
          ((undefined8 *)((long)plVar13 + lVar10))[1] = 0;
          *(undefined8 *)(lVar12 + 8 + lVar10) = uVar3;
          uVar3 = *(undefined8 *)((long)plVar13 + lVar10 + 0x10);
          *(undefined8 *)((long)plVar13 + lVar10 + 0x10) = 0;
          *(undefined8 *)(lVar12 + 0x10 + lVar10) = uVar3;
          uVar3 = *(undefined8 *)((long)plVar13 + lVar10 + 0x18);
          *(undefined8 *)((long)plVar13 + lVar10 + 0x18) = 0;
          *(undefined8 *)(lVar12 + 0x18 + lVar10) = uVar3;
          lVar7 = lVar10 + 0x20;
          lVar10 = lVar10 + 0x20;
        } while ((long *)((long)plVar13 + lVar7) != plVar4);
        do {
          lVar10 = *plVar13;
          *plVar13 = 0;
          if (lVar10 != 0) {
            _ZdaPvSt11align_val_t();
          }
          plVar13 = plVar13 + 4;
        } while (plVar13 != plVar4);
        plVar13 = (long *)*param_1;
      }
      lVar10 = param_1[2];
      *param_1 = lVar12;
      param_1[1] = lVar2;
      param_1[2] = uVar14 * 0x20 + lVar9;
      if (plVar13 != (long *)0x0) {
        _ZdaPvSt11align_val_t(plVar13,lVar10 - (long)plVar13);
      }
      return lVar2;
    }
  }
  else {
    func_0x00330ca0();
  }
  func_0x0032fc40();
  pcVar5 = (code *)swi(3);
  lVar12 = (*pcVar5)();
  return lVar12;
}


