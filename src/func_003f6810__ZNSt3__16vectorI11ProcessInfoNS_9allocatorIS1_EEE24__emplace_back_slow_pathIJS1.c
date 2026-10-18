// Function: _ZNSt3__16vectorI11ProcessInfoNS_9allocatorIS1_EEE24__emplace_back_slow_pathIJS1_EEEPS1_DpOT_
// Address: 003f6810
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long _ZNSt3__16vectorI11ProcessInfoNS_9allocatorIS1_EEE24__emplace_back_slow_pathIJS1_EEEPS1_DpOT_
               (long *param_1,undefined4 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  code *pcVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
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
      *(undefined4 *)(lVar9 + lVar12) = *param_2;
      *(undefined8 *)(lVar9 + 0x18 + lVar12) = *(undefined8 *)(param_2 + 6);
      uVar7 = *(undefined8 *)(param_2 + 4);
      puVar2 = (undefined8 *)(lVar9 + 8 + lVar12);
      *puVar2 = *(undefined8 *)(param_2 + 2);
      puVar2[1] = uVar7;
      *(undefined8 *)(param_2 + 2) = 0;
      *(undefined8 *)(param_2 + 4) = 0;
      *(undefined8 *)(param_2 + 6) = 0;
      lVar3 = lVar9 + 0x20 + lVar12;
      lVar13 = *param_1;
      lVar5 = param_1[1];
      lVar12 = (lVar13 - lVar5) + lVar9 + lVar12;
      if (lVar13 - lVar5 != 0) {
        lVar10 = 0;
        do {
          *(undefined4 *)(lVar12 + lVar10) = *(undefined4 *)(lVar13 + lVar10);
          puVar2 = (undefined8 *)(lVar13 + 8 + lVar10);
          uVar7 = puVar2[1];
          puVar4 = (undefined8 *)(lVar12 + 8 + lVar10);
          *puVar4 = *puVar2;
          puVar4[1] = uVar7;
          *(undefined8 *)(lVar12 + 0x18 + lVar10) = *(undefined8 *)(lVar13 + 0x18 + lVar10);
          puVar2 = (undefined8 *)(lVar13 + 8 + lVar10);
          *puVar2 = 0;
          puVar2[1] = 0;
          *(undefined8 *)(lVar13 + 0x18 + lVar10) = 0;
          lVar1 = lVar13 + lVar10;
          lVar10 = lVar10 + 0x20;
        } while (lVar1 + 0x20 != lVar5);
        do {
          if ((*(byte *)(lVar13 + 8) & 1) != 0) {
            _ZdaPvSt11align_val_t
                      (*(undefined8 *)(lVar13 + 0x18),*(ulong *)(lVar13 + 8) & 0xfffffffffffffffe);
          }
          lVar13 = lVar13 + 0x20;
        } while (lVar13 != lVar5);
        lVar13 = *param_1;
      }
      lVar5 = param_1[2];
      *param_1 = lVar12;
      param_1[1] = lVar3;
      param_1[2] = uVar14 * 0x20 + lVar9;
      if (lVar13 != 0) {
        _ZdaPvSt11align_val_t(lVar13,lVar5 - lVar13);
      }
      return lVar3;
    }
  }
  else {
    func_0x00330ca0();
  }
  func_0x0032fc40();
  pcVar6 = (code *)swi(3);
  lVar12 = (*pcVar6)();
  return lVar12;
}


