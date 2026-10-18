// Function: _ZNSt3__16vectorIiNS_9allocatorIiEEE18__insert_with_sizeB8nn220000INS_11__wrap_iterIPiEES7_EES7_NS5_IPKiEET_T0_l
// Address: 0036aec0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined4 *
_ZNSt3__16vectorIiNS_9allocatorIiEEE18__insert_with_sizeB8nn220000INS_11__wrap_iterIPiEES7_EES7_NS5_IPKiEET_T0_l
          (long *param_1,undefined4 *param_2,undefined4 *param_3,ulong param_4,ulong param_5)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  long lVar20;
  undefined4 *puVar21;
  ulong uVar22;
  ulong uVar23;
  
  if ((long)param_5 < 1) {
    return param_2;
  }
  lVar20 = *param_1;
  puVar18 = (undefined4 *)param_1[1];
  if ((long)param_5 <= param_1[2] - (long)puVar18 >> 2) {
    lVar20 = (long)puVar18 - (long)param_2;
    if (lVar20 >> 2 < (long)param_5) {
      lVar16 = param_4 - ((long)param_3 + lVar20);
      func_0x0099bd90(puVar18,(long)param_3 + lVar20,lVar16);
      puVar21 = (undefined4 *)(lVar16 + (long)puVar18);
      param_1[1] = (long)puVar21;
      if (lVar20 >> 2 < 1) {
        return param_2;
      }
      puVar17 = puVar21 + -param_5;
      if (puVar17 < puVar18) {
        puVar19 = (undefined4 *)((long)param_2 + (param_4 - (long)(param_3 + param_5)) + 4);
        if (puVar19 < puVar18) {
          puVar19 = puVar18;
        }
        uVar15 = (~param_4 + (long)puVar19 + (long)param_3 + param_5 * 4) - (long)param_2;
        if ((0x1b < uVar15) && ((param_5 & 0x3ffffffffffffff8) != 0)) {
          uVar22 = (uVar15 >> 2) + 1;
          uVar23 = uVar22 & 0xfffffffffffffff8;
          puVar17 = puVar17 + uVar23;
          puVar21 = puVar21 + uVar23;
          lVar16 = (param_4 + 0x10) - (long)param_3;
          lVar14 = param_5 * -4 + ((param_4 + 0x10) - (long)param_3);
          uVar15 = 0;
          do {
            puVar19 = (undefined4 *)((long)param_2 + uVar15 * 4 + lVar14 + -0x10);
            uVar4 = puVar19[1];
            uVar5 = puVar19[2];
            uVar6 = puVar19[3];
            puVar1 = (undefined8 *)((long)param_2 + uVar15 * 4 + lVar14);
            uVar11 = *puVar1;
            uVar12 = puVar1[1];
            puVar2 = (undefined4 *)((long)param_2 + uVar15 * 4 + lVar16 + -0x10);
            *puVar2 = *puVar19;
            puVar2[1] = uVar4;
            puVar2[2] = uVar5;
            puVar2[3] = uVar6;
            puVar1 = (undefined8 *)((long)param_2 + uVar15 * 4 + lVar16);
            *puVar1 = uVar11;
            puVar1[1] = uVar12;
            uVar15 = uVar15 + 8;
          } while (uVar23 != uVar15);
          if (uVar22 == uVar23) goto code_r0x0036b341;
        }
        do {
          *puVar21 = *puVar17;
          puVar17 = puVar17 + 1;
          puVar21 = puVar21 + 1;
        } while (puVar17 < puVar18);
      }
code_r0x0036b341:
      param_1[1] = (long)puVar21;
      func_0x0099bd90(param_2 + param_5,param_2);
      puVar18 = param_2;
      if (0x1f < (ulong)((long)param_2 - (long)param_3) && 0x1b < lVar20 - 4U) {
        uVar15 = (lVar20 - 4U >> 2) + 1;
        uVar23 = uVar15 & 0xfffffffffffffff8;
        uVar22 = 0;
        do {
          uVar11 = *(undefined8 *)((long)(param_3 + uVar22) + 8);
          uVar12 = *(undefined8 *)(param_3 + uVar22 + 4);
          uVar13 = *(undefined8 *)((long)(param_3 + uVar22 + 4) + 8);
          *(undefined8 *)(param_2 + uVar22) = *(undefined8 *)(param_3 + uVar22);
          *(undefined8 *)((long)(param_2 + uVar22) + 8) = uVar11;
          *(undefined8 *)(param_2 + uVar22 + 4) = uVar12;
          *(undefined8 *)((long)(param_2 + uVar22 + 4) + 8) = uVar13;
          uVar22 = uVar22 + 8;
        } while (uVar23 != uVar22);
        puVar18 = param_2 + uVar23;
        param_3 = param_3 + uVar23;
        if (uVar15 == uVar23) {
          return param_2;
        }
      }
      do {
        *puVar18 = *param_3;
        puVar18 = puVar18 + 1;
        param_3 = param_3 + 1;
      } while (puVar18 != (undefined4 *)((long)param_2 + lVar20));
      return param_2;
    }
    puVar21 = puVar18 + -param_5;
    puVar17 = puVar18;
    if (puVar21 < puVar18) {
      puVar19 = puVar18 + (1 - param_5);
      if (puVar18 + (1 - param_5) < puVar18) {
        puVar19 = puVar18;
      }
      uVar15 = (long)puVar19 + ~(ulong)puVar18 + param_5 * 4;
      if ((0x1b < uVar15) && ((param_5 & 0x3ffffffffffffff8) != 0)) {
        uVar15 = (uVar15 >> 2) + 1;
        uVar23 = uVar15 & 0xfffffffffffffff8;
        puVar21 = puVar21 + uVar23;
        puVar17 = puVar18 + uVar23;
        uVar22 = 0;
        do {
          puVar2 = puVar18 + (uVar22 - param_5);
          uVar4 = puVar2[1];
          uVar5 = puVar2[2];
          uVar6 = puVar2[3];
          puVar19 = puVar18 + ((uVar22 + 4) - param_5);
          uVar7 = *puVar19;
          uVar8 = puVar19[1];
          uVar9 = puVar19[2];
          uVar10 = puVar19[3];
          puVar19 = puVar18 + uVar22;
          *puVar19 = *puVar2;
          puVar19[1] = uVar4;
          puVar19[2] = uVar5;
          puVar19[3] = uVar6;
          puVar19 = puVar18 + uVar22 + 4;
          *puVar19 = uVar7;
          puVar19[1] = uVar8;
          puVar19[2] = uVar9;
          puVar19[3] = uVar10;
          uVar22 = uVar22 + 8;
        } while (uVar23 != uVar22);
        if (uVar15 == uVar23) goto code_r0x0036b271;
      }
      do {
        *puVar17 = *puVar21;
        puVar21 = puVar21 + 1;
        puVar17 = puVar17 + 1;
      } while (puVar21 < puVar18);
    }
code_r0x0036b271:
    param_1[1] = (long)puVar17;
    func_0x0099bd90();
    uVar15 = param_5 * 4 - 4;
    puVar18 = param_2;
    if (0x1f < (ulong)((long)param_2 - (long)param_3) && 0x1b < uVar15) {
      uVar15 = (uVar15 >> 2) + 1;
      uVar23 = uVar15 & 0xfffffffffffffff8;
      uVar22 = 0;
      do {
        uVar11 = *(undefined8 *)((long)(param_3 + uVar22) + 8);
        uVar12 = *(undefined8 *)(param_3 + uVar22 + 4);
        uVar13 = *(undefined8 *)((long)(param_3 + uVar22 + 4) + 8);
        *(undefined8 *)(param_2 + uVar22) = *(undefined8 *)(param_3 + uVar22);
        *(undefined8 *)((long)(param_2 + uVar22) + 8) = uVar11;
        *(undefined8 *)(param_2 + uVar22 + 4) = uVar12;
        *(undefined8 *)((long)(param_2 + uVar22 + 4) + 8) = uVar13;
        uVar22 = uVar22 + 8;
      } while (uVar23 != uVar22);
      puVar18 = param_2 + uVar23;
      param_3 = param_3 + uVar23;
      if (uVar15 == uVar23) {
        return param_2;
      }
    }
    do {
      *puVar18 = *param_3;
      puVar18 = puVar18 + 1;
      param_3 = param_3 + 1;
    } while (puVar18 != param_2 + param_5);
    return param_2;
  }
  uVar15 = ((long)puVar18 - lVar20 >> 2) + param_5;
  if (uVar15 >> 0x3e == 0) {
    uVar22 = param_1[2] - lVar20;
    uVar23 = (long)uVar22 >> 1;
    if ((ulong)((long)uVar22 >> 1) <= uVar15) {
      uVar23 = uVar15;
    }
    if (0x7ffffffffffffffb < uVar22) {
      uVar23 = 0x3fffffffffffffff;
    }
    if (uVar23 == 0) {
      lVar16 = 0;
    }
    else {
      if (0x3fffffffffffffff < uVar23) goto code_r0x0036b3ee;
      lVar16 = _Znwm(uVar23 * 4);
    }
    puVar21 = (undefined4 *)(lVar16 + ((long)param_2 - lVar20));
    func_0x0099bda0(puVar21,param_3,param_5 * 4);
    func_0x0099bda0(puVar21 + param_5,param_2,(long)puVar18 - (long)param_2);
    param_1[1] = (long)param_2;
    func_0x0099bda0(lVar16,lVar20,(long)param_2 - lVar20);
    *param_1 = lVar16;
    param_1[1] = ((long)puVar18 - (long)param_2) + (long)(puVar21 + param_5);
    param_1[2] = lVar16 + uVar23 * 4;
    if (lVar20 == 0) {
      return puVar21;
    }
    _ZdaPvSt11align_val_t(lVar20,uVar22);
    return puVar21;
  }
  func_0x00330ca0();
code_r0x0036b3ee:
  func_0x0032fc40();
  pcVar3 = (code *)swi(3);
  puVar18 = (undefined4 *)(*pcVar3)();
  return puVar18;
}


