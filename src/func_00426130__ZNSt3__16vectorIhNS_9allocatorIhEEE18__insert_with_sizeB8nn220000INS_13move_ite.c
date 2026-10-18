// Function: _ZNSt3__16vectorIhNS_9allocatorIhEEE18__insert_with_sizeB8nn220000INS_13move_iteratorINS_11__wrap_iterIPhEEEES9_EES8_NS6_IPKhEET_T0_l
// Address: 00426130
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined1 *
_ZNSt3__16vectorIhNS_9allocatorIhEEE18__insert_with_sizeB8nn220000INS_13move_iteratorINS_11__wrap_iterIPhEEEES9_EES8_NS6_IPKhEET_T0_l
          (long *param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4,ulong param_5)

{
  undefined4 *puVar1;
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
  undefined1 *puVar14;
  long lVar15;
  undefined1 *puVar16;
  long lVar17;
  ulong uVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  ulong uVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  uint uVar24;
  undefined1 *puVar25;
  ulong uVar26;
  undefined1 *puVar27;
  
  if ((long)param_5 < 1) {
    return param_2;
  }
  puVar19 = (undefined1 *)param_1[1];
  if (param_1[2] - (long)puVar19 < (long)param_5) {
    lVar17 = *param_1;
    puVar14 = puVar19 + (param_5 - lVar17);
    if ((long)puVar14 < 0) {
      func_0x00330ca0();
      pcVar3 = (code *)swi(3);
      puVar19 = (undefined1 *)(*pcVar3)();
      return puVar19;
    }
    uVar21 = param_1[2] - lVar17;
    if (puVar14 < (undefined1 *)(uVar21 * 2)) {
      puVar14 = (undefined1 *)(uVar21 * 2);
    }
    puVar16 = (undefined1 *)0x7fffffffffffffff;
    if (uVar21 < 0x3fffffffffffffff) {
      puVar16 = puVar14;
    }
    if (puVar16 == (undefined1 *)0x0) {
      lVar15 = 0;
    }
    else {
      lVar15 = _Znwm(puVar16);
    }
    puVar14 = (undefined1 *)(lVar15 + ((long)param_2 - lVar17));
    func_0x0099bda0(puVar14,param_3,param_5);
    func_0x0099bda0(puVar14 + param_5,param_2,(long)puVar19 - (long)param_2);
    param_1[1] = (long)param_2;
    func_0x0099bda0(lVar15,lVar17,(long)param_2 - lVar17);
    *param_1 = lVar15;
    param_1[1] = (long)(puVar14 + param_5 + ((long)puVar19 - (long)param_2));
    param_1[2] = (long)(puVar16 + lVar15);
    if (lVar17 == 0) {
      return puVar14;
    }
    _ZdaPvSt11align_val_t(lVar17,uVar21);
    return puVar14;
  }
  uVar21 = (long)puVar19 - (long)param_2;
  if ((long)param_5 <= (long)uVar21) {
    puVar16 = puVar19 + -param_5;
    puVar14 = puVar19;
    if (puVar16 < puVar19) {
      if (0x1f < param_5) {
        uVar26 = param_5 & 0x7fffffffffffffe0;
        puVar14 = puVar19 + uVar26;
        uVar21 = 0;
        do {
          puVar2 = (undefined4 *)(puVar16 + uVar21);
          uVar4 = puVar2[1];
          uVar5 = puVar2[2];
          uVar6 = puVar2[3];
          puVar1 = (undefined4 *)(puVar16 + uVar21 + 0x10);
          uVar7 = *puVar1;
          uVar8 = puVar1[1];
          uVar9 = puVar1[2];
          uVar10 = puVar1[3];
          puVar1 = (undefined4 *)(puVar19 + uVar21);
          *puVar1 = *puVar2;
          puVar1[1] = uVar4;
          puVar1[2] = uVar5;
          puVar1[3] = uVar6;
          puVar1 = (undefined4 *)(puVar19 + uVar21 + 0x10);
          *puVar1 = uVar7;
          puVar1[1] = uVar8;
          puVar1[2] = uVar9;
          puVar1[3] = uVar10;
          uVar21 = uVar21 + 0x20;
        } while (uVar26 != uVar21);
        puVar16 = puVar16 + uVar26;
        if (param_5 == uVar26) goto code_r0x004264d3;
      }
      uVar24 = (int)puVar19 - (int)puVar16 & 7;
      uVar21 = (ulong)uVar24;
      puVar20 = puVar16;
      if (uVar24 != 0) {
        do {
          *puVar14 = *puVar20;
          puVar20 = puVar20 + 1;
          puVar14 = puVar14 + 1;
          uVar21 = uVar21 - 1;
        } while (uVar21 != 0);
      }
      if ((ulong)((long)puVar16 - (long)puVar19) < 0xfffffffffffffff9) {
        do {
          *puVar14 = *puVar20;
          puVar14[1] = puVar20[1];
          puVar14[2] = puVar20[2];
          puVar14[3] = puVar20[3];
          puVar14[4] = puVar20[4];
          puVar14[5] = puVar20[5];
          puVar14[6] = puVar20[6];
          puVar14[7] = puVar20[7];
          puVar20 = puVar20 + 8;
          puVar14 = puVar14 + 8;
        } while (puVar20 != puVar19);
      }
    }
code_r0x004264d3:
    param_1[1] = (long)puVar14;
    func_0x0099bd90(param_2 + param_5);
    puVar19 = param_3;
    puVar14 = param_2;
    if (0x1f < (ulong)((long)param_2 - (long)param_3) && 3 < param_5) {
      if (param_5 < 0x20) {
        uVar21 = 0;
      }
      else {
        uVar21 = param_5 & 0x7fffffffffffffe0;
        uVar26 = 0;
        do {
          uVar11 = *(undefined8 *)((long)(param_3 + uVar26) + 8);
          uVar12 = *(undefined8 *)(param_3 + uVar26 + 0x10);
          uVar13 = *(undefined8 *)((long)(param_3 + uVar26 + 0x10) + 8);
          *(undefined8 *)(param_2 + uVar26) = *(undefined8 *)(param_3 + uVar26);
          *(undefined8 *)((long)(param_2 + uVar26) + 8) = uVar11;
          *(undefined8 *)(param_2 + uVar26 + 0x10) = uVar12;
          *(undefined8 *)((long)(param_2 + uVar26 + 0x10) + 8) = uVar13;
          uVar26 = uVar26 + 0x20;
        } while (uVar21 != uVar26);
        if (param_5 == uVar21) {
          return param_2;
        }
        if ((param_5 & 0x1c) == 0) {
          puVar14 = param_2 + uVar21;
          puVar19 = param_3 + uVar21;
          goto code_r0x00426589;
        }
      }
      uVar26 = param_5 & 0x7ffffffffffffffc;
      puVar14 = param_2 + uVar26;
      puVar19 = param_3 + uVar26;
      do {
        *(undefined4 *)(param_2 + uVar21) = *(undefined4 *)(param_3 + uVar21);
        uVar21 = uVar21 + 4;
      } while (uVar26 != uVar21);
      if (param_5 == uVar26) {
        return param_2;
      }
    }
code_r0x00426589:
    param_3 = param_3 + param_5;
    uVar24 = (int)param_3 - (int)puVar19 & 7;
    uVar21 = (ulong)uVar24;
    puVar16 = puVar19;
    if (uVar24 != 0) {
      do {
        *puVar14 = *puVar16;
        puVar16 = puVar16 + 1;
        puVar14 = puVar14 + 1;
        uVar21 = uVar21 - 1;
      } while (uVar21 != 0);
    }
    if (0xfffffffffffffff8 < (ulong)((long)puVar19 - (long)param_3)) {
      return param_2;
    }
    lVar17 = 0;
    do {
      puVar14[lVar17] = puVar16[lVar17];
      puVar14[lVar17 + 1] = puVar16[lVar17 + 1];
      puVar14[lVar17 + 2] = puVar16[lVar17 + 2];
      puVar14[lVar17 + 3] = puVar16[lVar17 + 3];
      puVar14[lVar17 + 4] = puVar16[lVar17 + 4];
      puVar14[lVar17 + 5] = puVar16[lVar17 + 5];
      puVar14[lVar17 + 6] = puVar16[lVar17 + 6];
      puVar14[lVar17 + 7] = puVar16[lVar17 + 7];
      lVar15 = lVar17 + 8;
      lVar17 = lVar17 + 8;
    } while (puVar16 + lVar15 != param_3);
    return param_2;
  }
  puVar14 = param_3 + uVar21;
  puVar16 = puVar19;
  if (puVar14 != param_4) {
    puVar22 = param_4 + (long)param_2 + (-(long)param_3 - (long)puVar19);
    puVar20 = puVar14;
    if (0x1f < (ulong)((long)param_2 - (long)param_3) && (undefined1 *)0x1f < puVar22) {
      puVar23 = (undefined1 *)((ulong)puVar22 & 0xffffffffffffffe0);
      puVar20 = puVar14 + (long)puVar23;
      puVar16 = puVar19 + (long)puVar23;
      puVar25 = (undefined1 *)0x0;
      do {
        puVar2 = (undefined4 *)(param_3 + (long)(puVar25 + uVar21));
        uVar4 = puVar2[1];
        uVar5 = puVar2[2];
        uVar6 = puVar2[3];
        puVar1 = (undefined4 *)(param_3 + (long)(puVar25 + uVar21 + 0x10));
        uVar7 = *puVar1;
        uVar8 = puVar1[1];
        uVar9 = puVar1[2];
        uVar10 = puVar1[3];
        puVar1 = (undefined4 *)(puVar19 + (long)puVar25);
        *puVar1 = *puVar2;
        puVar1[1] = uVar4;
        puVar1[2] = uVar5;
        puVar1[3] = uVar6;
        puVar1 = (undefined4 *)(puVar19 + (long)(puVar25 + 0x10));
        *puVar1 = uVar7;
        puVar1[1] = uVar8;
        puVar1[2] = uVar9;
        puVar1[3] = uVar10;
        puVar25 = puVar25 + 0x20;
      } while (puVar23 != puVar25);
      if (puVar22 == puVar23) goto code_r0x004263b9;
    }
    uVar24 = (int)param_4 - (int)puVar20 & 7;
    uVar26 = (ulong)uVar24;
    puVar22 = puVar20;
    if (uVar24 != 0) {
      do {
        *puVar16 = *puVar22;
        puVar22 = puVar22 + 1;
        puVar16 = puVar16 + 1;
        uVar26 = uVar26 - 1;
      } while (uVar26 != 0);
    }
    if ((ulong)((long)puVar20 - (long)param_4) < 0xfffffffffffffff9) {
      do {
        *puVar16 = *puVar22;
        puVar16[1] = puVar22[1];
        puVar16[2] = puVar22[2];
        puVar16[3] = puVar22[3];
        puVar16[4] = puVar22[4];
        puVar16[5] = puVar22[5];
        puVar16[6] = puVar22[6];
        puVar16[7] = puVar22[7];
        puVar22 = puVar22 + 8;
        puVar16 = puVar16 + 8;
      } while (puVar22 != param_4);
    }
  }
code_r0x004263b9:
  param_1[1] = (long)puVar16;
  if ((long)uVar21 < 1) {
    return param_2;
  }
  puVar20 = puVar16 + -param_5;
  if (puVar20 < puVar19) {
    puVar22 = puVar19 + (param_5 - (long)puVar16);
    if (0x1f < param_5 && (undefined1 *)0x1f < puVar22) {
      puVar25 = (undefined1 *)((ulong)puVar22 & 0xffffffffffffffe0);
      puVar20 = puVar20 + (long)puVar25;
      puVar23 = puVar16 + (long)puVar25;
      puVar27 = (undefined1 *)0x0;
      do {
        puVar2 = (undefined4 *)(puVar16 + (long)(puVar27 + -param_5));
        uVar4 = puVar2[1];
        uVar5 = puVar2[2];
        uVar6 = puVar2[3];
        puVar1 = (undefined4 *)(puVar16 + (long)(puVar27 + -param_5 + 0x10));
        uVar7 = *puVar1;
        uVar8 = puVar1[1];
        uVar9 = puVar1[2];
        uVar10 = puVar1[3];
        puVar1 = (undefined4 *)(puVar16 + (long)puVar27);
        *puVar1 = *puVar2;
        puVar1[1] = uVar4;
        puVar1[2] = uVar5;
        puVar1[3] = uVar6;
        puVar1 = (undefined4 *)(puVar16 + (long)(puVar27 + 0x10));
        *puVar1 = uVar7;
        puVar1[1] = uVar8;
        puVar1[2] = uVar9;
        puVar1[3] = uVar10;
        puVar27 = puVar27 + 0x20;
      } while (puVar25 != puVar27);
      puVar16 = puVar23;
      if (puVar22 == puVar25) goto code_r0x00426692;
    }
    do {
      *puVar16 = *puVar20;
      puVar20 = puVar20 + 1;
      puVar16 = puVar16 + 1;
    } while (puVar20 < puVar19);
  }
code_r0x00426692:
  param_1[1] = (long)puVar16;
  func_0x0099bd90(param_2 + param_5);
  puVar19 = param_2;
  if (0x1f < (ulong)((long)param_2 - (long)param_3) && 3 < uVar21) {
    if (uVar21 < 0x20) {
      uVar26 = 0;
    }
    else {
      uVar26 = uVar21 & 0x7fffffffffffffe0;
      uVar18 = 0;
      do {
        uVar11 = *(undefined8 *)((long)(param_3 + uVar18) + 8);
        uVar12 = *(undefined8 *)(param_3 + uVar18 + 0x10);
        uVar13 = *(undefined8 *)((long)(param_3 + uVar18 + 0x10) + 8);
        *(undefined8 *)(param_2 + uVar18) = *(undefined8 *)(param_3 + uVar18);
        *(undefined8 *)((long)(param_2 + uVar18) + 8) = uVar11;
        *(undefined8 *)(param_2 + uVar18 + 0x10) = uVar12;
        *(undefined8 *)((long)(param_2 + uVar18 + 0x10) + 8) = uVar13;
        uVar18 = uVar18 + 0x20;
      } while (uVar26 != uVar18);
      if (uVar21 == uVar26) {
        return param_2;
      }
      if ((uVar21 & 0x1c) == 0) {
        param_3 = param_3 + uVar26;
        puVar19 = param_2 + uVar26;
        goto code_r0x00426750;
      }
    }
    uVar18 = uVar21 & 0x7ffffffffffffffc;
    do {
      *(undefined4 *)(param_2 + uVar26) = *(undefined4 *)(param_3 + uVar26);
      uVar26 = uVar26 + 4;
    } while (uVar18 != uVar26);
    param_3 = param_3 + uVar18;
    puVar19 = param_2 + uVar18;
    if (uVar21 == uVar18) {
      return param_2;
    }
  }
code_r0x00426750:
  do {
    *puVar19 = *param_3;
    param_3 = param_3 + 1;
    puVar19 = puVar19 + 1;
  } while (param_3 != puVar14);
  return param_2;
}


