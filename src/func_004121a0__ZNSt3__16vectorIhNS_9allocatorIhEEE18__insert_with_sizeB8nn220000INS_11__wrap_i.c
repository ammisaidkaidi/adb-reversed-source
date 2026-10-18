// Function: _ZNSt3__16vectorIhNS_9allocatorIhEEE18__insert_with_sizeB8nn220000INS_11__wrap_iterIPcEES7_EENS5_IPhEENS5_IPKhEET_T0_l
// Address: 004121a0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long * _ZNSt3__16vectorIhNS_9allocatorIhEEE18__insert_with_sizeB8nn220000INS_11__wrap_iterIPcEES7_EENS5_IPhEENS5_IPKhEET_T0_l
                 (long *param_1,long *param_2,undefined1 *param_3,undefined1 *param_4,ulong param_5)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 *puVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  undefined1 *puVar23;
  long *plVar24;
  long lVar25;
  uint uVar26;
  undefined1 *puVar27;
  ulong uVar28;
  ulong uVar29;
  undefined1 *puVar30;
  undefined1 *puVar31;
  undefined1 *puVar32;
  long *plVar33;
  long lVar34;
  
  if ((long)param_5 < 1) {
    return param_2;
  }
  puVar4 = (undefined1 *)param_1[1];
  if ((long)param_5 <= param_1[2] - (long)puVar4) {
    uVar22 = (long)puVar4 - (long)param_2;
    if ((long)param_5 <= (long)uVar22) {
      puVar18 = (undefined1 *)((long)param_2 + param_5);
      puVar23 = puVar4 + -param_5;
      puVar30 = puVar4;
      if (puVar23 < puVar4) {
        if (0x1f < param_5) {
          uVar22 = param_5 & 0x7fffffffffffffe0;
          puVar30 = puVar4 + uVar22;
          uVar28 = 0;
          do {
            puVar3 = (undefined4 *)(puVar23 + uVar28);
            uVar8 = puVar3[1];
            uVar9 = puVar3[2];
            uVar10 = puVar3[3];
            puVar1 = (undefined4 *)(puVar23 + uVar28 + 0x10);
            uVar11 = *puVar1;
            uVar12 = puVar1[1];
            uVar13 = puVar1[2];
            uVar14 = puVar1[3];
            puVar1 = (undefined4 *)(puVar4 + uVar28);
            *puVar1 = *puVar3;
            puVar1[1] = uVar8;
            puVar1[2] = uVar9;
            puVar1[3] = uVar10;
            puVar1 = (undefined4 *)(puVar4 + uVar28 + 0x10);
            *puVar1 = uVar11;
            puVar1[1] = uVar12;
            puVar1[2] = uVar13;
            puVar1[3] = uVar14;
            uVar28 = uVar28 + 0x20;
          } while (uVar22 != uVar28);
          puVar23 = puVar23 + uVar22;
          if (param_5 == uVar22) goto code_r0x00412523;
        }
        uVar26 = (int)puVar4 - (int)puVar23 & 7;
        uVar22 = (ulong)uVar26;
        puVar27 = puVar23;
        if (uVar26 != 0) {
          do {
            *puVar30 = *puVar27;
            puVar27 = puVar27 + 1;
            puVar30 = puVar30 + 1;
            uVar22 = uVar22 - 1;
          } while (uVar22 != 0);
        }
        if ((ulong)((long)puVar23 - (long)puVar4) < 0xfffffffffffffff9) {
          do {
            *puVar30 = *puVar27;
            puVar30[1] = puVar27[1];
            puVar30[2] = puVar27[2];
            puVar30[3] = puVar27[3];
            puVar30[4] = puVar27[4];
            puVar30[5] = puVar27[5];
            puVar30[6] = puVar27[6];
            puVar30[7] = puVar27[7];
            puVar27 = puVar27 + 8;
            puVar30 = puVar30 + 8;
          } while (puVar27 != puVar4);
        }
      }
code_r0x00412523:
      param_1[1] = (long)puVar30;
      func_0x0099bd90(puVar18);
      plVar33 = param_2;
      if (0x1f < (ulong)((long)param_2 - (long)param_3) && 3 < param_5) {
        if (param_5 < 0x20) {
          uVar22 = 0;
        }
        else {
          uVar22 = param_5 & 0x7fffffffffffffe0;
          uVar28 = 0;
          do {
            uVar15 = *(undefined8 *)((long)(param_3 + uVar28) + 8);
            uVar16 = *(undefined8 *)(param_3 + uVar28 + 0x10);
            uVar17 = *(undefined8 *)((long)(param_3 + uVar28 + 0x10) + 8);
            *(undefined8 *)((long)param_2 + uVar28) = *(undefined8 *)(param_3 + uVar28);
            ((undefined8 *)((long)param_2 + uVar28))[1] = uVar15;
            puVar2 = (undefined8 *)((long)param_2 + uVar28 + 0x10);
            *puVar2 = uVar16;
            puVar2[1] = uVar17;
            uVar28 = uVar28 + 0x20;
          } while (uVar22 != uVar28);
          if (param_5 == uVar22) {
            return param_2;
          }
          if ((param_5 & 0x1c) == 0) {
            param_3 = param_3 + uVar22;
            plVar33 = (long *)((long)param_2 + uVar22);
            goto code_r0x004125db;
          }
        }
        uVar28 = param_5 & 0x7ffffffffffffffc;
        do {
          *(undefined4 *)((long)param_2 + uVar22) = *(undefined4 *)(param_3 + uVar22);
          uVar22 = uVar22 + 4;
        } while (uVar28 != uVar22);
        param_3 = param_3 + uVar28;
        plVar33 = (long *)((long)param_2 + uVar28);
        if (param_5 == uVar28) {
          return param_2;
        }
      }
code_r0x004125db:
      uVar26 = (int)puVar18 - (int)plVar33 & 7;
      uVar22 = (ulong)uVar26;
      plVar24 = plVar33;
      if (uVar26 != 0) {
        do {
          *(undefined1 *)plVar24 = *param_3;
          plVar24 = (long *)((long)plVar24 + 1);
          param_3 = param_3 + 1;
          uVar22 = uVar22 - 1;
        } while (uVar22 != 0);
      }
      if (0xfffffffffffffff8 < (ulong)((long)plVar33 - (long)puVar18)) {
        return param_2;
      }
      lVar21 = 0;
      do {
        *(undefined1 *)((long)plVar24 + lVar21) = param_3[lVar21];
        *(undefined1 *)((long)plVar24 + lVar21 + 1) = param_3[lVar21 + 1];
        *(undefined1 *)((long)plVar24 + lVar21 + 2) = param_3[lVar21 + 2];
        *(undefined1 *)((long)plVar24 + lVar21 + 3) = param_3[lVar21 + 3];
        *(undefined1 *)((long)plVar24 + lVar21 + 4) = param_3[lVar21 + 4];
        *(undefined1 *)((long)plVar24 + lVar21 + 5) = param_3[lVar21 + 5];
        *(undefined1 *)((long)plVar24 + lVar21 + 6) = param_3[lVar21 + 6];
        *(undefined1 *)((long)plVar24 + lVar21 + 7) = param_3[lVar21 + 7];
        lVar19 = lVar21 + 8;
        lVar21 = lVar21 + 8;
      } while ((undefined1 *)((long)plVar24 + lVar19) != puVar18);
      return param_2;
    }
    puVar18 = param_3 + uVar22;
    puVar30 = puVar4;
    if (puVar18 != param_4) {
      puVar23 = param_4 + (long)param_2 + (-(long)param_3 - (long)puVar4);
      if (0x1f < (ulong)((long)param_2 - (long)param_3) && (undefined1 *)0x1f < puVar23) {
        puVar27 = (undefined1 *)((ulong)puVar23 & 0xffffffffffffffe0);
        puVar18 = puVar18 + (long)puVar27;
        puVar30 = (undefined1 *)0x0;
        do {
          puVar3 = (undefined4 *)(param_3 + (long)(puVar30 + uVar22));
          uVar8 = puVar3[1];
          uVar9 = puVar3[2];
          uVar10 = puVar3[3];
          puVar1 = (undefined4 *)(param_3 + (long)(puVar30 + uVar22 + 0x10));
          uVar11 = *puVar1;
          uVar12 = puVar1[1];
          uVar13 = puVar1[2];
          uVar14 = puVar1[3];
          puVar1 = (undefined4 *)(puVar4 + (long)puVar30);
          *puVar1 = *puVar3;
          puVar1[1] = uVar8;
          puVar1[2] = uVar9;
          puVar1[3] = uVar10;
          puVar1 = (undefined4 *)(puVar4 + (long)(puVar30 + 0x10));
          *puVar1 = uVar11;
          puVar1[1] = uVar12;
          puVar1[2] = uVar13;
          puVar1[3] = uVar14;
          puVar30 = puVar30 + 0x20;
        } while (puVar27 != puVar30);
        puVar30 = puVar4 + (long)puVar27;
        if (puVar23 == puVar27) goto code_r0x00412413;
      }
      uVar26 = (int)param_4 - (int)puVar18 & 7;
      uVar28 = (ulong)uVar26;
      puVar23 = puVar18;
      if (uVar26 != 0) {
        do {
          *puVar30 = *puVar23;
          puVar23 = puVar23 + 1;
          puVar30 = puVar30 + 1;
          uVar28 = uVar28 - 1;
        } while (uVar28 != 0);
      }
      if ((ulong)((long)puVar18 - (long)param_4) < 0xfffffffffffffff9) {
        do {
          *puVar30 = *puVar23;
          puVar30[1] = puVar23[1];
          puVar30[2] = puVar23[2];
          puVar30[3] = puVar23[3];
          puVar30[4] = puVar23[4];
          puVar30[5] = puVar23[5];
          puVar30[6] = puVar23[6];
          puVar30[7] = puVar23[7];
          puVar23 = puVar23 + 8;
          puVar30 = puVar30 + 8;
        } while (puVar23 != param_4);
      }
    }
code_r0x00412413:
    param_1[1] = (long)puVar30;
    if ((long)uVar22 < 1) {
      return param_2;
    }
    puVar18 = puVar30 + -param_5;
    if (puVar18 < puVar4) {
      puVar23 = puVar4 + (param_5 - (long)puVar30);
      if (0x1f < param_5 && (undefined1 *)0x1f < puVar23) {
        puVar31 = (undefined1 *)((ulong)puVar23 & 0xffffffffffffffe0);
        puVar18 = puVar18 + (long)puVar31;
        puVar27 = puVar30 + (long)puVar31;
        puVar32 = (undefined1 *)0x0;
        do {
          puVar3 = (undefined4 *)(puVar30 + (long)(puVar32 + -param_5));
          uVar8 = puVar3[1];
          uVar9 = puVar3[2];
          uVar10 = puVar3[3];
          puVar1 = (undefined4 *)(puVar30 + (long)(puVar32 + -param_5 + 0x10));
          uVar11 = *puVar1;
          uVar12 = puVar1[1];
          uVar13 = puVar1[2];
          uVar14 = puVar1[3];
          puVar1 = (undefined4 *)(puVar30 + (long)puVar32);
          *puVar1 = *puVar3;
          puVar1[1] = uVar8;
          puVar1[2] = uVar9;
          puVar1[3] = uVar10;
          puVar1 = (undefined4 *)(puVar30 + (long)(puVar32 + 0x10));
          *puVar1 = uVar11;
          puVar1[1] = uVar12;
          puVar1[2] = uVar13;
          puVar1[3] = uVar14;
          puVar32 = puVar32 + 0x20;
        } while (puVar31 != puVar32);
        puVar30 = puVar27;
        if (puVar23 == puVar31) goto code_r0x004126e1;
      }
      do {
        *puVar30 = *puVar18;
        puVar18 = puVar18 + 1;
        puVar30 = puVar30 + 1;
      } while (puVar18 < puVar4);
    }
code_r0x004126e1:
    param_1[1] = (long)puVar30;
    func_0x0099bd90((undefined1 *)((long)param_2 + param_5));
    plVar33 = param_2;
    if (0x1f < (ulong)((long)param_2 - (long)param_3) && 3 < uVar22) {
      if (uVar22 < 0x20) {
        uVar29 = 0;
      }
      else {
        uVar29 = uVar22 & 0x7fffffffffffffe0;
        uVar28 = 0;
        do {
          uVar15 = *(undefined8 *)((long)(param_3 + uVar28) + 8);
          uVar16 = *(undefined8 *)(param_3 + uVar28 + 0x10);
          uVar17 = *(undefined8 *)((long)(param_3 + uVar28 + 0x10) + 8);
          *(undefined8 *)((long)param_2 + uVar28) = *(undefined8 *)(param_3 + uVar28);
          ((undefined8 *)((long)param_2 + uVar28))[1] = uVar15;
          puVar2 = (undefined8 *)((long)param_2 + uVar28 + 0x10);
          *puVar2 = uVar16;
          puVar2[1] = uVar17;
          uVar28 = uVar28 + 0x20;
        } while (uVar29 != uVar28);
        if (uVar22 == uVar29) {
          return param_2;
        }
        if ((uVar22 & 0x1c) == 0) {
          param_3 = param_3 + uVar29;
          plVar33 = (long *)((long)param_2 + uVar29);
          goto code_r0x0041279b;
        }
      }
      uVar28 = uVar22 & 0x7ffffffffffffffc;
      do {
        *(undefined4 *)((long)param_2 + uVar29) = *(undefined4 *)(param_3 + uVar29);
        uVar29 = uVar29 + 4;
      } while (uVar28 != uVar29);
      param_3 = param_3 + uVar28;
      plVar33 = (long *)((long)param_2 + uVar28);
      if (uVar22 == uVar28) {
        return param_2;
      }
    }
code_r0x0041279b:
    uVar26 = (int)puVar4 - (int)plVar33 & 7;
    uVar28 = (ulong)uVar26;
    plVar24 = plVar33;
    if (uVar26 != 0) {
      do {
        *(undefined1 *)plVar24 = *param_3;
        plVar24 = (long *)((long)plVar24 + 1);
        param_3 = param_3 + 1;
        uVar28 = uVar28 - 1;
      } while (uVar28 != 0);
    }
    if ((ulong)((long)plVar33 - (long)puVar4) < 0xfffffffffffffff9) {
      lVar21 = 0;
      do {
        *(undefined1 *)((long)plVar24 + lVar21) = param_3[lVar21];
        *(undefined1 *)((long)plVar24 + lVar21 + 1) = param_3[lVar21 + 1];
        *(undefined1 *)((long)plVar24 + lVar21 + 2) = param_3[lVar21 + 2];
        *(undefined1 *)((long)plVar24 + lVar21 + 3) = param_3[lVar21 + 3];
        *(undefined1 *)((long)plVar24 + lVar21 + 4) = param_3[lVar21 + 4];
        *(undefined1 *)((long)plVar24 + lVar21 + 5) = param_3[lVar21 + 5];
        *(undefined1 *)((long)plVar24 + lVar21 + 6) = param_3[lVar21 + 6];
        *(undefined1 *)((long)plVar24 + lVar21 + 7) = param_3[lVar21 + 7];
        lVar19 = lVar21 + 8;
        lVar21 = lVar21 + 8;
      } while ((undefined1 *)((long)plVar24 + lVar19) != (undefined1 *)((long)param_2 + uVar22));
    }
    return param_2;
  }
  lVar21 = *param_1;
  puVar18 = puVar4 + (param_5 - lVar21);
  if (-1 < (long)puVar18) {
    uVar22 = param_1[2] - lVar21;
    if (puVar18 < (undefined1 *)(uVar22 * 2)) {
      puVar18 = (undefined1 *)(uVar22 * 2);
    }
    puVar30 = (undefined1 *)0x7fffffffffffffff;
    if (uVar22 < 0x3fffffffffffffff) {
      puVar30 = puVar18;
    }
    if (puVar30 == (undefined1 *)0x0) {
      lVar19 = 0;
    }
    else {
      lVar19 = _Znwm(puVar30);
    }
    plVar33 = (long *)(((long)param_2 - lVar21) + lVar19);
    func_0x0099bda0(plVar33,param_3,param_5);
    func_0x0099bda0(param_5 + (long)plVar33,param_2,(long)puVar4 - (long)param_2);
    param_1[1] = (long)param_2;
    func_0x0099bda0(lVar19,lVar21,(long)param_2 - lVar21);
    *param_1 = lVar19;
    param_1[1] = param_5 + (long)plVar33 + ((long)puVar4 - (long)param_2);
    param_1[2] = (long)(puVar30 + lVar19);
    if (lVar21 == 0) {
      return plVar33;
    }
    _ZdaPvSt11align_val_t(lVar21,uVar22);
    return plVar33;
  }
  func_0x00330ca0();
  lVar21 = *param_1;
  lVar19 = param_1[1] - lVar21;
  uVar22 = (lVar19 >> 3) * -0x5555555555555555 + 1;
  if (uVar22 < 0xaaaaaaaaaaaaaab) {
    lVar5 = param_1[2];
    lVar25 = lVar5 - lVar21 >> 3;
    uVar28 = lVar25 * 0x5555555555555556;
    if (uVar22 < uVar28) {
      uVar22 = uVar28;
    }
    if (0x555555555555554 < (ulong)(lVar25 * -0x5555555555555555)) {
      uVar22 = 0xaaaaaaaaaaaaaaa;
    }
    if (uVar22 == 0) {
      lVar25 = 0;
    }
    else {
      if (0xaaaaaaaaaaaaaaa < uVar22) goto code_r0x004129bc;
      lVar25 = _Znwm(uVar22 * 0x18);
    }
    plVar33 = (long *)(lVar25 + lVar19);
    *(undefined8 *)(lVar25 + lVar19) = 0;
    ((undefined8 *)(lVar25 + lVar19))[1] = 0;
    *(undefined8 *)(lVar25 + 0x10 + lVar19) = 0;
    lVar6 = *param_2;
    lVar34 = param_2[1] - lVar6;
    if (lVar34 != 0) {
      if (lVar34 < 0) goto code_r0x004129c1;
      lVar20 = _Znwm(lVar34);
      *plVar33 = lVar20;
      plVar33[2] = lVar20 + lVar34;
      func_0x0099bda0(lVar20,lVar6,lVar34);
      plVar33[1] = lVar20 + lVar34;
    }
    func_0x0099bda0((long)plVar33 - lVar19,lVar21,lVar19);
    *param_1 = (long)plVar33 - lVar19;
    param_1[1] = (long)(plVar33 + 3);
    param_1[2] = lVar25 + uVar22 * 0x18;
    if (lVar21 != 0) {
      _ZdaPvSt11align_val_t(lVar21,lVar5 - lVar21);
    }
    return plVar33 + 3;
  }
  func_0x00330ca0();
code_r0x004129bc:
  func_0x0032fc40();
code_r0x004129c1:
  func_0x00330ca0();
  pcVar7 = (code *)swi(3);
  plVar33 = (long *)(*pcVar7)();
  return plVar33;
}


