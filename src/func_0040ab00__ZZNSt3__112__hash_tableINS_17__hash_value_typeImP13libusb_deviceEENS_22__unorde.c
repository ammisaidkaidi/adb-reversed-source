// Function: _ZZNSt3__112__hash_tableINS_17__hash_value_typeImP13libusb_deviceEENS_22__unordered_map_hasherImNS_4pairIKmS3_EENS_4hashImEENS_8equal_toImEEEENS_21__unordered_map_equalImS8_SC_SA_EENS_9allocatorIS8_EEE16__emplace_uniqueB8nn220000IJRKNS_21piecewise_construct_tENS_5tupleIJRS7_EEENSN_IJEEEEEENS6_INS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEEbEEDpOT_ENKUlSO_SM_OSP_OSQ_E_clESO_SM_S11_S12_
// Address: 0040ab00
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined1  [16]
_ZZNSt3__112__hash_tableINS_17__hash_value_typeImP13libusb_deviceEENS_22__unordered_map_hasherImNS_4pairIKmS3_EENS_4hashImEENS_8equal_toImEEEENS_21__unordered_map_equalImS8_SC_SA_EENS_9allocatorIS8_EEE16__emplace_uniqueB8nn220000IJRKNS_21piecewise_construct_tENS_5tupleIJRS7_EEENSN_IJEEEEEENS6_INS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEEbEEDpOT_ENKUlSO_SM_OSP_OSQ_E_clESO_SM_S11_S12_
          (long *param_1,ulong *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  long lVar2;
  ulong *puVar3;
  undefined1 auVar4 [16];
  ulong uVar5;
  undefined8 extraout_RDX;
  ulong extraout_RDX_00;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *puVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  param_1 = (long *)*param_1;
  uVar7 = *param_2;
  uVar10 = param_1[1];
  if (uVar10 == 0) {
    uVar5 = 0;
  }
  else {
    uVar9 = uVar10 - 1;
    if ((uVar10 & uVar9) == 0) {
      uVar5 = uVar9 & uVar7;
    }
    else {
      uVar5 = uVar7;
      if (uVar10 <= uVar7) {
        if ((uVar7 | uVar10) >> 0x20 == 0) {
          uVar5 = (uVar7 & 0xffffffff) % (uVar10 & 0xffffffff);
        }
        else {
          uVar5 = uVar7 % uVar10;
        }
      }
    }
    puVar1 = *(undefined8 **)(*param_1 + uVar5 * 8);
    if (puVar1 != (undefined8 *)0x0) {
      for (puVar11 = (ulong *)*puVar1; puVar11 != (ulong *)0x0; puVar11 = (ulong *)*puVar11) {
        uVar6 = puVar11[1];
        if (uVar6 == uVar7) {
          if (puVar11[2] == uVar7) {
            uVar8 = 0;
            goto code_r0x0040ae5d;
          }
        }
        else {
          if ((uVar10 & uVar9) == 0) {
            uVar6 = uVar6 & uVar9;
          }
          else if (uVar10 <= uVar6) {
            if ((uVar6 | uVar10) >> 0x20 != 0) {
              if (uVar6 % uVar10 == uVar5) goto code_r0x0040ab8a;
              break;
            }
            uVar6 = (uVar6 & 0xffffffff) % (uVar10 & 0xffffffff);
          }
          if (uVar6 != uVar5) break;
        }
code_r0x0040ab8a:
      }
    }
  }
  auVar13 = _Znwm(0x20);
  uVar9 = auVar13._8_8_;
  puVar11 = auVar13._0_8_;
  *puVar11 = 0;
  puVar11[1] = uVar7;
  puVar11[2] = *(ulong *)*param_4;
  puVar11[3] = 0;
  if ((float)(param_1[3] + 1) <= (float)uVar10 * *(float *)(param_1 + 4)) goto code_r0x0040adea;
  uVar5 = 1;
  if (2 < uVar10) {
    uVar5 = (ulong)((uVar10 & uVar10 - 1) != 0);
  }
  uVar5 = uVar5 | uVar10 * 2;
  fVar12 = (float)func_0x009992a0((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  uVar9 = (long)(fVar12 - 9.223372e+18) & (long)fVar12 >> 0x3f | (long)fVar12;
  if (uVar9 < uVar5) {
    uVar9 = uVar5;
  }
  auVar4._8_8_ = extraout_RDX;
  auVar4._0_8_ = uVar9;
  auVar13._8_8_ = extraout_RDX;
  auVar13._0_8_ = 2;
  if ((uVar9 != 1) && (auVar13 = auVar4, (uVar9 & uVar9 - 1) != 0)) {
    auVar13 = _ZNSt3__112__next_primeEm();
    uVar10 = param_1[1];
  }
  uVar9 = auVar13._8_8_;
  uVar5 = auVar13._0_8_;
  if (uVar10 < uVar5) {
code_r0x0040ace9:
    _ZNSt3__112__hash_tableIPKN4absl12lts_2026052613cord_internal7CordRepENS_4hashIS6_EENS_8equal_toIS6_EENS_9allocatorIS6_EEE11__do_rehashILb1EEEvm
              (param_1,uVar5);
    uVar9 = extraout_RDX_00;
  }
  else if (uVar5 < uVar10) {
    fVar12 = (float)func_0x009992a0((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    uVar6 = (long)fVar12 >> 0x3f;
    uVar9 = (long)(fVar12 - 9.223372e+18) & uVar6 | (long)fVar12;
    auVar14._8_8_ = uVar6;
    auVar14._0_8_ = uVar9;
    if ((uVar10 < 3) || ((uVar10 - 1 & uVar10) != 0)) {
      auVar14 = _ZNSt3__112__next_primeEm(uVar9);
    }
    else if (1 < uVar9) {
      lVar2 = 0x3f;
      if (uVar9 - 1 != 0) {
        for (; uVar9 - 1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      auVar14._0_8_ = 1L << (-((byte)lVar2 ^ 0x3f) & 0x3f);
    }
    uVar9 = auVar14._8_8_;
    if (uVar5 <= auVar14._0_8_) {
      uVar5 = auVar14._0_8_;
    }
    if (uVar5 < uVar10) goto code_r0x0040ace9;
  }
  uVar10 = param_1[1];
  if ((uVar10 & uVar10 - 1) == 0) {
    uVar5 = uVar10 - 1 & uVar7;
  }
  else {
    uVar5 = uVar7;
    if (uVar10 <= uVar7) {
      if ((uVar7 | uVar10) >> 0x20 == 0) {
        uVar9 = (uVar7 & 0xffffffff) % (uVar10 & 0xffffffff);
        uVar5 = uVar9;
      }
      else {
        uVar9 = uVar7 % uVar10;
        uVar5 = uVar9;
      }
    }
  }
code_r0x0040adea:
  lVar2 = *param_1;
  puVar3 = *(ulong **)(lVar2 + uVar5 * 8);
  if (puVar3 == (ulong *)0x0) {
    uVar9 = param_1[2];
    *puVar11 = uVar9;
    param_1[2] = (long)puVar11;
    *(long **)(lVar2 + uVar5 * 8) = param_1 + 2;
    if (*puVar11 != 0) {
      uVar7 = *(ulong *)(*puVar11 + 8);
      if ((uVar10 & uVar10 - 1) == 0) {
        uVar7 = uVar7 & uVar10 - 1;
      }
      else if (uVar10 <= uVar7) {
        if ((uVar7 | uVar10) >> 0x20 == 0) {
          uVar7 = (uVar7 & 0xffffffff) % (uVar10 & 0xffffffff);
          uVar9 = uVar7;
        }
        else {
          uVar7 = uVar7 % uVar10;
          uVar9 = uVar7;
        }
      }
      *(ulong **)(*param_1 + uVar7 * 8) = puVar11;
    }
  }
  else {
    *puVar11 = *puVar3;
    *puVar3 = (ulong)puVar11;
  }
  param_1[3] = param_1[3] + 1;
  uVar8 = CONCAT71((int7)(uVar9 >> 8),1);
code_r0x0040ae5d:
  auVar15._8_8_ = uVar8;
  auVar15._0_8_ = puVar11;
  return auVar15;
}


