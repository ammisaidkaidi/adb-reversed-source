// Function: _ZZNSt3__112__hash_tableINS_17__hash_value_typeIiP10atransportEENS_22__unordered_map_hasherIiNS_4pairIKiS3_EENS_4hashIiEENS_8equal_toIiEEEENS_21__unordered_map_equalIiS8_SC_SA_EENS_9allocatorIS8_EEE16__emplace_uniqueB8nn220000IJRKNS_21piecewise_construct_tENS_5tupleIJRS7_EEENSN_IJEEEEEENS6_INS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEEbEEDpOT_ENKUlSO_SM_OSP_OSQ_E_clESO_SM_S11_S12_
// Address: 0040de50
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined1  [16]
_ZZNSt3__112__hash_tableINS_17__hash_value_typeIiP10atransportEENS_22__unordered_map_hasherIiNS_4pairIKiS3_EENS_4hashIiEENS_8equal_toIiEEEENS_21__unordered_map_equalIiS8_SC_SA_EENS_9allocatorIS8_EEE16__emplace_uniqueB8nn220000IJRKNS_21piecewise_construct_tENS_5tupleIJRS7_EEENSN_IJEEEEEENS6_INS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEEbEEDpOT_ENKUlSO_SM_OSP_OSQ_E_clESO_SM_S11_S12_
          (long *param_1,uint *param_2,undefined8 param_3,undefined8 *param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong *puVar4;
  undefined1 auVar5 [16];
  ulong uVar6;
  undefined8 extraout_RDX;
  ulong extraout_RDX_00;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong *puVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  param_1 = (long *)*param_1;
  uVar1 = *param_2;
  uVar10 = (ulong)(int)uVar1;
  uVar11 = param_1[1];
  if (uVar11 == 0) {
    uVar6 = 0;
  }
  else {
    uVar9 = uVar11 - 1;
    if ((uVar11 & uVar9) == 0) {
      uVar6 = uVar9 & uVar10;
    }
    else {
      uVar6 = uVar10;
      if (uVar11 <= uVar10) {
        if ((uVar10 | uVar11) >> 0x20 == 0) {
          uVar6 = (ulong)uVar1 % (uVar11 & 0xffffffff);
        }
        else {
          uVar6 = uVar10 % uVar11;
        }
      }
    }
    puVar2 = *(undefined8 **)(*param_1 + uVar6 * 8);
    if (puVar2 != (undefined8 *)0x0) {
      for (puVar12 = (ulong *)*puVar2; puVar12 != (ulong *)0x0; puVar12 = (ulong *)*puVar12) {
        uVar7 = puVar12[1];
        if (uVar7 == uVar10) {
          if ((uint)puVar12[2] == uVar1) {
            uVar8 = 0;
            goto code_r0x0040e1ac;
          }
        }
        else {
          if ((uVar11 & uVar9) == 0) {
            uVar7 = uVar7 & uVar9;
          }
          else if (uVar11 <= uVar7) {
            if ((uVar7 | uVar11) >> 0x20 != 0) {
              if (uVar7 % uVar11 == uVar6) goto code_r0x0040deda;
              break;
            }
            uVar7 = (uVar7 & 0xffffffff) % (uVar11 & 0xffffffff);
          }
          if (uVar7 != uVar6) break;
        }
code_r0x0040deda:
      }
    }
  }
  auVar14 = _Znwm(0x20);
  uVar9 = auVar14._8_8_;
  puVar12 = auVar14._0_8_;
  *puVar12 = 0;
  puVar12[1] = uVar10;
  *(undefined4 *)(puVar12 + 2) = *(undefined4 *)*param_4;
  puVar12[3] = 0;
  if ((float)(param_1[3] + 1) <= (float)uVar11 * *(float *)(param_1 + 4)) goto code_r0x0040e139;
  uVar6 = 1;
  if (2 < uVar11) {
    uVar6 = (ulong)((uVar11 & uVar11 - 1) != 0);
  }
  uVar6 = uVar6 | uVar11 * 2;
  fVar13 = (float)func_0x009992a0((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  uVar9 = (long)(fVar13 - 9.223372e+18) & (long)fVar13 >> 0x3f | (long)fVar13;
  if (uVar9 < uVar6) {
    uVar9 = uVar6;
  }
  auVar5._8_8_ = extraout_RDX;
  auVar5._0_8_ = uVar9;
  auVar14._8_8_ = extraout_RDX;
  auVar14._0_8_ = 2;
  if ((uVar9 != 1) && (auVar14 = auVar5, (uVar9 & uVar9 - 1) != 0)) {
    auVar14 = _ZNSt3__112__next_primeEm();
    uVar11 = param_1[1];
  }
  uVar9 = auVar14._8_8_;
  uVar6 = auVar14._0_8_;
  if (uVar11 < uVar6) {
code_r0x0040e038:
    _ZNSt3__112__hash_tableIPKN4absl12lts_2026052613cord_internal7CordRepENS_4hashIS6_EENS_8equal_toIS6_EENS_9allocatorIS6_EEE11__do_rehashILb1EEEvm
              (param_1,uVar6);
    uVar9 = extraout_RDX_00;
  }
  else if (uVar6 < uVar11) {
    fVar13 = (float)func_0x009992a0((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    uVar7 = (long)fVar13 >> 0x3f;
    uVar9 = (long)(fVar13 - 9.223372e+18) & uVar7 | (long)fVar13;
    auVar15._8_8_ = uVar7;
    auVar15._0_8_ = uVar9;
    if ((uVar11 < 3) || ((uVar11 - 1 & uVar11) != 0)) {
      auVar15 = _ZNSt3__112__next_primeEm(uVar9);
    }
    else if (1 < uVar9) {
      lVar3 = 0x3f;
      if (uVar9 - 1 != 0) {
        for (; uVar9 - 1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      auVar15._0_8_ = 1L << (-((byte)lVar3 ^ 0x3f) & 0x3f);
    }
    uVar9 = auVar15._8_8_;
    if (uVar6 <= auVar15._0_8_) {
      uVar6 = auVar15._0_8_;
    }
    if (uVar6 < uVar11) goto code_r0x0040e038;
  }
  uVar11 = param_1[1];
  if ((uVar11 & uVar11 - 1) == 0) {
    uVar6 = uVar11 - 1 & uVar10;
  }
  else {
    uVar6 = uVar10;
    if (uVar11 <= uVar10) {
      if ((uVar10 | uVar11) >> 0x20 == 0) {
        uVar9 = (ulong)uVar1 % (uVar11 & 0xffffffff);
        uVar6 = uVar9;
      }
      else {
        uVar9 = uVar10 % uVar11;
        uVar6 = uVar9;
      }
    }
  }
code_r0x0040e139:
  lVar3 = *param_1;
  puVar4 = *(ulong **)(lVar3 + uVar6 * 8);
  if (puVar4 == (ulong *)0x0) {
    uVar9 = param_1[2];
    *puVar12 = uVar9;
    param_1[2] = (long)puVar12;
    *(long **)(lVar3 + uVar6 * 8) = param_1 + 2;
    if (*puVar12 != 0) {
      uVar10 = *(ulong *)(*puVar12 + 8);
      if ((uVar11 & uVar11 - 1) == 0) {
        uVar10 = uVar10 & uVar11 - 1;
      }
      else if (uVar11 <= uVar10) {
        if ((uVar10 | uVar11) >> 0x20 == 0) {
          uVar10 = (uVar10 & 0xffffffff) % (uVar11 & 0xffffffff);
          uVar9 = uVar10;
        }
        else {
          uVar10 = uVar10 % uVar11;
          uVar9 = uVar10;
        }
      }
      *(ulong **)(*param_1 + uVar10 * 8) = puVar12;
    }
  }
  else {
    *puVar12 = *puVar4;
    *puVar4 = (ulong)puVar12;
  }
  param_1[3] = param_1[3] + 1;
  uVar8 = CONCAT71((int7)(uVar9 >> 8),1);
code_r0x0040e1ac:
  auVar16._8_8_ = uVar8;
  auVar16._0_8_ = puVar12;
  return auVar16;
}


