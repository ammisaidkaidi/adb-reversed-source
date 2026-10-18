// Function: _ZNSt3__16vectorIPKN6google8protobuf15FieldDescriptorENS_9allocatorIS5_EEE18__insert_with_sizeB8nn220000INS_11__wrap_iterIPS5_EESC_EESC_NSA_IPKS5_EET_T0_l
// Address: 0040d4e0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 *
_ZNSt3__16vectorIPKN6google8protobuf15FieldDescriptorENS_9allocatorIS5_EEE18__insert_with_sizeB8nn220000INS_11__wrap_iterIPS5_EESC_EESC_NSA_IPKS5_EET_T0_l
          (long *param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4,ulong param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  long lVar21;
  undefined8 *puVar22;
  ulong uVar23;
  ulong uVar24;
  
  if ((long)param_5 < 1) {
    return param_2;
  }
  lVar21 = *param_1;
  puVar19 = (undefined8 *)param_1[1];
  if ((long)param_5 <= param_1[2] - (long)puVar19 >> 3) {
    lVar21 = (long)puVar19 - (long)param_2;
    if (lVar21 >> 3 < (long)param_5) {
      lVar17 = param_4 - ((long)param_3 + lVar21);
      func_0x0099bd90(puVar19,(long)param_3 + lVar21,lVar17);
      puVar22 = (undefined8 *)(lVar17 + (long)puVar19);
      param_1[1] = (long)puVar22;
      if (lVar21 >> 3 < 1) {
        return param_2;
      }
      puVar18 = puVar22 + -param_5;
      if (puVar18 < puVar19) {
        puVar20 = (undefined8 *)((long)param_2 + (param_4 - (long)(param_3 + param_5)) + 8);
        if (puVar20 < puVar19) {
          puVar20 = puVar19;
        }
        uVar16 = (~param_4 + (long)puVar20 + (long)param_3 + param_5 * 8) - (long)param_2;
        if ((0x37 < uVar16) && ((param_5 & 0x1ffffffffffffffc) != 0)) {
          uVar23 = (uVar16 >> 3) + 1;
          uVar24 = uVar23 & 0xfffffffffffffffc;
          puVar18 = puVar18 + uVar24;
          puVar22 = puVar22 + uVar24;
          lVar17 = (param_4 + 0x10) - (long)param_3;
          lVar15 = param_5 * -8 + ((param_4 + 0x10) - (long)param_3);
          uVar16 = 0;
          do {
            puVar1 = (undefined4 *)((long)param_2 + uVar16 * 8 + lVar15 + -0x10);
            uVar5 = puVar1[1];
            uVar6 = puVar1[2];
            uVar7 = puVar1[3];
            puVar20 = (undefined8 *)((long)param_2 + uVar16 * 8 + lVar15);
            uVar12 = *puVar20;
            uVar13 = puVar20[1];
            puVar2 = (undefined4 *)((long)param_2 + uVar16 * 8 + lVar17 + -0x10);
            *puVar2 = *puVar1;
            puVar2[1] = uVar5;
            puVar2[2] = uVar6;
            puVar2[3] = uVar7;
            puVar20 = (undefined8 *)((long)param_2 + uVar16 * 8 + lVar17);
            *puVar20 = uVar12;
            puVar20[1] = uVar13;
            uVar16 = uVar16 + 4;
          } while (uVar24 != uVar16);
          if (uVar23 == uVar24) goto code_r0x0040d973;
        }
        do {
          *puVar22 = *puVar18;
          puVar18 = puVar18 + 1;
          puVar22 = puVar22 + 1;
        } while (puVar18 < puVar19);
      }
code_r0x0040d973:
      param_1[1] = (long)puVar22;
      func_0x0099bd90(param_2 + param_5,param_2);
      puVar19 = param_2;
      if (0x1f < (ulong)((long)param_2 - (long)param_3) && 0x37 < lVar21 - 8U) {
        uVar16 = (lVar21 - 8U >> 3) + 1;
        uVar24 = uVar16 & 0xfffffffffffffffc;
        uVar23 = 0;
        do {
          uVar12 = (param_3 + uVar23)[1];
          uVar13 = param_3[uVar23 + 2];
          uVar14 = (param_3 + uVar23 + 2)[1];
          param_2[uVar23] = param_3[uVar23];
          (param_2 + uVar23)[1] = uVar12;
          param_2[uVar23 + 2] = uVar13;
          (param_2 + uVar23 + 2)[1] = uVar14;
          uVar23 = uVar23 + 4;
        } while (uVar24 != uVar23);
        puVar19 = param_2 + uVar24;
        param_3 = param_3 + uVar24;
        if (uVar16 == uVar24) {
          return param_2;
        }
      }
      do {
        *puVar19 = *param_3;
        puVar19 = puVar19 + 1;
        param_3 = param_3 + 1;
      } while (puVar19 != (undefined8 *)((long)param_2 + lVar21));
      return param_2;
    }
    puVar22 = puVar19 + -param_5;
    puVar18 = puVar19;
    if (puVar22 < puVar19) {
      puVar20 = puVar19 + (1 - param_5);
      if (puVar19 + (1 - param_5) < puVar19) {
        puVar20 = puVar19;
      }
      uVar16 = (long)puVar20 + ~(ulong)puVar19 + param_5 * 8;
      if ((0x37 < uVar16) && ((param_5 & 0x1ffffffffffffffc) != 0)) {
        uVar16 = (uVar16 >> 3) + 1;
        uVar24 = uVar16 & 0xfffffffffffffffc;
        puVar22 = puVar22 + uVar24;
        puVar18 = puVar19 + uVar24;
        uVar23 = 0;
        do {
          puVar3 = puVar19 + (uVar23 - param_5);
          uVar5 = *(undefined4 *)((long)puVar3 + 4);
          uVar6 = *(undefined4 *)(puVar3 + 1);
          uVar7 = *(undefined4 *)((long)puVar3 + 0xc);
          puVar20 = puVar19 + ((uVar23 + 2) - param_5);
          uVar8 = *(undefined4 *)puVar20;
          uVar9 = *(undefined4 *)((long)puVar20 + 4);
          uVar10 = *(undefined4 *)(puVar20 + 1);
          uVar11 = *(undefined4 *)((long)puVar20 + 0xc);
          puVar20 = puVar19 + uVar23;
          *(undefined4 *)puVar20 = *(undefined4 *)puVar3;
          *(undefined4 *)((long)puVar20 + 4) = uVar5;
          *(undefined4 *)(puVar20 + 1) = uVar6;
          *(undefined4 *)((long)puVar20 + 0xc) = uVar7;
          puVar20 = puVar19 + uVar23 + 2;
          *(undefined4 *)puVar20 = uVar8;
          *(undefined4 *)((long)puVar20 + 4) = uVar9;
          *(undefined4 *)(puVar20 + 1) = uVar10;
          *(undefined4 *)((long)puVar20 + 0xc) = uVar11;
          uVar23 = uVar23 + 4;
        } while (uVar24 != uVar23);
        if (uVar16 == uVar24) goto code_r0x0040d893;
      }
      do {
        *puVar18 = *puVar22;
        puVar22 = puVar22 + 1;
        puVar18 = puVar18 + 1;
      } while (puVar22 < puVar19);
    }
code_r0x0040d893:
    param_1[1] = (long)puVar18;
    func_0x0099bd90();
    uVar16 = param_5 * 8 - 8;
    puVar19 = param_2;
    if (0x1f < (ulong)((long)param_2 - (long)param_3) && 0x37 < uVar16) {
      uVar16 = (uVar16 >> 3) + 1;
      uVar24 = uVar16 & 0xfffffffffffffffc;
      uVar23 = 0;
      do {
        uVar12 = (param_3 + uVar23)[1];
        uVar13 = param_3[uVar23 + 2];
        uVar14 = (param_3 + uVar23 + 2)[1];
        param_2[uVar23] = param_3[uVar23];
        (param_2 + uVar23)[1] = uVar12;
        param_2[uVar23 + 2] = uVar13;
        (param_2 + uVar23 + 2)[1] = uVar14;
        uVar23 = uVar23 + 4;
      } while (uVar24 != uVar23);
      puVar19 = param_2 + uVar24;
      param_3 = param_3 + uVar24;
      if (uVar16 == uVar24) {
        return param_2;
      }
    }
    do {
      *puVar19 = *param_3;
      puVar19 = puVar19 + 1;
      param_3 = param_3 + 1;
    } while (puVar19 != param_2 + param_5);
    return param_2;
  }
  uVar16 = ((long)puVar19 - lVar21 >> 3) + param_5;
  if (uVar16 >> 0x3d == 0) {
    uVar23 = param_1[2] - lVar21;
    uVar24 = (long)uVar23 >> 2;
    if ((ulong)((long)uVar23 >> 2) <= uVar16) {
      uVar24 = uVar16;
    }
    if (0x7ffffffffffffff7 < uVar23) {
      uVar24 = 0x1fffffffffffffff;
    }
    if (uVar24 == 0) {
      lVar17 = 0;
    }
    else {
      if (0x1fffffffffffffff < uVar24) goto code_r0x0040da20;
      lVar17 = _Znwm(uVar24 * 8);
    }
    puVar22 = (undefined8 *)(lVar17 + ((long)param_2 - lVar21));
    func_0x0099bda0(puVar22,param_3,param_5 * 8);
    func_0x0099bda0(puVar22 + param_5,param_2,(long)puVar19 - (long)param_2);
    param_1[1] = (long)param_2;
    func_0x0099bda0(lVar17,lVar21,(long)param_2 - lVar21);
    *param_1 = lVar17;
    param_1[1] = ((long)puVar19 - (long)param_2) + (long)(puVar22 + param_5);
    param_1[2] = lVar17 + uVar24 * 8;
    if (lVar21 == 0) {
      return puVar22;
    }
    _ZdaPvSt11align_val_t(lVar21,uVar23);
    return puVar22;
  }
  func_0x00330ca0();
code_r0x0040da20:
  func_0x0032fc40();
  pcVar4 = (code *)swi(3);
  puVar19 = (undefined8 *)(*pcVar4)();
  return puVar19;
}


