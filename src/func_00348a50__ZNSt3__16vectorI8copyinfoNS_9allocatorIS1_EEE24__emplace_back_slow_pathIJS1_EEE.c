// Function: _ZNSt3__16vectorI8copyinfoNS_9allocatorIS1_EEE24__emplace_back_slow_pathIJS1_EEEPS1_DpOT_
// Address: 00348a50
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long _ZNSt3__16vectorI8copyinfoNS_9allocatorIS1_EEE24__emplace_back_slow_pathIJS1_EEEPS1_DpOT_
               (long *param_1,undefined8 *param_2)

{
  byte *pbVar1;
  undefined8 *puVar2;
  ulong *puVar3;
  code *pcVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong *puVar15;
  
  lVar14 = param_1[1] - *param_1;
  uVar10 = (lVar14 >> 4) * -0x3333333333333333 + 1;
  if (uVar10 < 0x333333333333334) {
    lVar13 = param_1[2] - *param_1 >> 4;
    uVar5 = lVar13 * -0x6666666666666666;
    if (uVar10 < uVar5) {
      uVar10 = uVar5;
    }
    if (0x199999999999998 < (ulong)(lVar13 * -0x3333333333333333)) {
      uVar10 = 0x333333333333333;
    }
    if (uVar10 < 0x333333333333334) {
      lVar11 = _Znwm(uVar10 * 0x50);
      *(undefined8 *)(lVar11 + 0x10 + lVar14) = param_2[2];
      uVar6 = param_2[1];
      *(undefined8 *)(lVar11 + lVar14) = *param_2;
      ((undefined8 *)(lVar11 + lVar14))[1] = uVar6;
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      *(undefined8 *)(lVar11 + 0x28 + lVar14) = param_2[5];
      uVar6 = param_2[4];
      puVar2 = (undefined8 *)(lVar11 + 0x18 + lVar14);
      *puVar2 = param_2[3];
      puVar2[1] = uVar6;
      param_2[3] = 0;
      param_2[4] = 0;
      param_2[5] = 0;
      uVar6 = param_2[6];
      uVar7 = param_2[7];
      uVar8 = *(undefined8 *)((long)param_2 + 0x41);
      puVar2 = (undefined8 *)(lVar11 + 0x39 + lVar14);
      *puVar2 = *(undefined8 *)((long)param_2 + 0x39);
      puVar2[1] = uVar8;
      puVar2 = (undefined8 *)(lVar11 + 0x30 + lVar14);
      *puVar2 = uVar6;
      puVar2[1] = uVar7;
      lVar13 = lVar11 + 0x50 + lVar14;
      puVar15 = (ulong *)*param_1;
      puVar3 = (ulong *)param_1[1];
      lVar14 = ((long)puVar15 - (long)puVar3) + lVar11 + lVar14;
      if ((long)puVar15 - (long)puVar3 != 0) {
        lVar12 = 0;
        do {
          *(undefined8 *)(lVar14 + 0x10 + lVar12) = *(undefined8 *)((long)puVar15 + lVar12 + 0x10);
          uVar6 = *(undefined8 *)((byte *)((long)puVar15 + lVar12) + 8);
          *(undefined8 *)(lVar14 + lVar12) = *(undefined8 *)((long)puVar15 + lVar12);
          ((undefined8 *)(lVar14 + lVar12))[1] = uVar6;
          pbVar1 = (byte *)((long)puVar15 + lVar12);
          pbVar1[0] = 0;
          pbVar1[1] = 0;
          pbVar1[2] = 0;
          pbVar1[3] = 0;
          pbVar1[4] = 0;
          pbVar1[5] = 0;
          pbVar1[6] = 0;
          pbVar1[7] = 0;
          pbVar1[8] = 0;
          pbVar1[9] = 0;
          pbVar1[10] = 0;
          pbVar1[0xb] = 0;
          pbVar1[0xc] = 0;
          pbVar1[0xd] = 0;
          pbVar1[0xe] = 0;
          pbVar1[0xf] = 0;
          pbVar1 = (byte *)((long)puVar15 + lVar12 + 0x10);
          pbVar1[0] = 0;
          pbVar1[1] = 0;
          pbVar1[2] = 0;
          pbVar1[3] = 0;
          pbVar1[4] = 0;
          pbVar1[5] = 0;
          pbVar1[6] = 0;
          pbVar1[7] = 0;
          *(undefined8 *)(lVar14 + 0x28 + lVar12) = *(undefined8 *)((long)puVar15 + lVar12 + 0x28);
          pbVar1 = (byte *)((long)puVar15 + lVar12 + 0x18);
          uVar6 = *(undefined8 *)(pbVar1 + 8);
          puVar2 = (undefined8 *)(lVar14 + 0x18 + lVar12);
          *puVar2 = *(undefined8 *)pbVar1;
          puVar2[1] = uVar6;
          pbVar1 = (byte *)((long)puVar15 + lVar12 + 0x18);
          pbVar1[0] = 0;
          pbVar1[1] = 0;
          pbVar1[2] = 0;
          pbVar1[3] = 0;
          pbVar1[4] = 0;
          pbVar1[5] = 0;
          pbVar1[6] = 0;
          pbVar1[7] = 0;
          pbVar1[8] = 0;
          pbVar1[9] = 0;
          pbVar1[10] = 0;
          pbVar1[0xb] = 0;
          pbVar1[0xc] = 0;
          pbVar1[0xd] = 0;
          pbVar1[0xe] = 0;
          pbVar1[0xf] = 0;
          pbVar1 = (byte *)((long)puVar15 + lVar12 + 0x28);
          pbVar1[0] = 0;
          pbVar1[1] = 0;
          pbVar1[2] = 0;
          pbVar1[3] = 0;
          pbVar1[4] = 0;
          pbVar1[5] = 0;
          pbVar1[6] = 0;
          pbVar1[7] = 0;
          pbVar1 = (byte *)((long)puVar15 + lVar12 + 0x30);
          uVar6 = *(undefined8 *)pbVar1;
          uVar7 = *(undefined8 *)(pbVar1 + 8);
          pbVar1 = (byte *)((long)puVar15 + lVar12 + 0x39);
          uVar8 = *(undefined8 *)(pbVar1 + 8);
          puVar2 = (undefined8 *)(lVar14 + 0x39 + lVar12);
          *puVar2 = *(undefined8 *)pbVar1;
          puVar2[1] = uVar8;
          puVar2 = (undefined8 *)(lVar14 + 0x30 + lVar12);
          *puVar2 = uVar6;
          puVar2[1] = uVar7;
          lVar9 = lVar12 + 0x50;
          lVar12 = lVar12 + 0x50;
        } while ((ulong *)((long)puVar15 + lVar9) != puVar3);
        do {
          if ((puVar15[3] & 1) != 0) {
            _ZdaPvSt11align_val_t(puVar15[5],puVar15[3] & 0xfffffffffffffffe);
          }
          if ((*puVar15 & 1) != 0) {
            _ZdaPvSt11align_val_t(puVar15[2],*puVar15 & 0xfffffffffffffffe);
          }
          puVar15 = puVar15 + 10;
        } while (puVar15 != puVar3);
        puVar15 = (ulong *)*param_1;
      }
      lVar12 = param_1[2];
      *param_1 = lVar14;
      param_1[1] = lVar13;
      param_1[2] = uVar10 * 0x50 + lVar11;
      if (puVar15 != (ulong *)0x0) {
        _ZdaPvSt11align_val_t(puVar15,lVar12 - (long)puVar15);
      }
      return lVar13;
    }
  }
  else {
    func_0x00330ca0();
  }
  func_0x0032fc40();
  pcVar4 = (code *)swi(3);
  lVar14 = (*pcVar4)();
  return lVar14;
}


