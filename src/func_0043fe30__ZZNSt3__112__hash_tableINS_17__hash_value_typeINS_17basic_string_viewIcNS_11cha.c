// Function: _ZZNSt3__112__hash_tableINS_17__hash_value_typeINS_17basic_string_viewIcNS_11char_traitsIcEEEEiEENS_22__unordered_map_hasherIS5_NS_4pairIKS5_iEENS_4hashIS5_EENS_8equal_toIS5_EEEENS_21__unordered_map_equalIS5_SA_SE_SC_EENS_9allocatorISA_EEE16__emplace_uniqueB8nn220000IJSA_EEENS8_INS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEEDpOT_ENKUlRS9_OSA_E_clESW_SX_
// Address: 0043fe30
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long * _ZZNSt3__112__hash_tableINS_17__hash_value_typeINS_17basic_string_viewIcNS_11char_traitsIcEEEEiEENS_22__unordered_map_hasherIS5_NS_4pairIKS5_iEENS_4hashIS5_EENS_8equal_toIS5_EEEENS_21__unordered_map_equalIS5_SA_SE_SC_EENS_9allocatorISA_EEE16__emplace_uniqueB8nn220000IJSA_EEENS8_INS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEEDpOT_ENKUlRS9_OSA_E_clESW_SX_
                 (long *param_1,undefined8 *param_2,long *param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  bool bVar12;
  float fVar13;
  
  param_1 = (long *)*param_1;
  uVar1 = *param_2;
  lVar2 = param_2[1];
  uVar6 = _ZNSt3__113__hash_memoryEPKvm();
  uVar11 = param_1[1];
  if (uVar11 == 0) {
    uVar8 = 0;
  }
  else {
    uVar10 = uVar11 - 1;
    if ((uVar11 & uVar10) == 0) {
      uVar8 = uVar10 & uVar6;
    }
    else {
      uVar8 = uVar6;
      if (uVar11 <= uVar6) {
        if ((uVar6 | uVar11) >> 0x20 == 0) {
          uVar8 = (uVar6 & 0xffffffff) % (uVar11 & 0xffffffff);
        }
        else {
          uVar8 = uVar6 % uVar11;
        }
      }
    }
    puVar3 = *(undefined8 **)(*param_1 + uVar8 * 8);
    if (puVar3 != (undefined8 *)0x0) {
      for (plVar7 = (long *)*puVar3; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
        uVar9 = plVar7[1];
        if (uVar9 == uVar6) {
          if ((plVar7[3] == lVar2) && (iVar5 = func_0x0099bf90(plVar7[2],uVar1,lVar2), iVar5 == 0))
          {
            return plVar7;
          }
        }
        else {
          if ((uVar11 & uVar10) == 0) {
            uVar9 = uVar9 & uVar10;
          }
          else if (uVar11 <= uVar9) {
            if ((uVar9 | uVar11) >> 0x20 == 0) {
              uVar9 = (uVar9 & 0xffffffff) % (uVar11 & 0xffffffff);
            }
            else {
              uVar9 = uVar9 % uVar11;
            }
          }
          if (uVar9 != uVar8) break;
        }
      }
    }
  }
  plVar7 = (long *)_Znwm(0x28);
  *plVar7 = 0;
  plVar7[1] = uVar6;
  plVar7[4] = param_3[2];
  lVar2 = param_3[1];
  plVar7[2] = *param_3;
  plVar7[3] = lVar2;
  if ((float)(param_1[3] + 1) <= (float)uVar11 * *(float *)(param_1 + 4)) goto code_r0x0044015d;
  uVar8 = 1;
  if (2 < uVar11) {
    uVar8 = (ulong)((uVar11 & uVar11 - 1) != 0);
  }
  uVar8 = uVar8 | uVar11 * 2;
  fVar13 = (float)func_0x009992a0((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  uVar10 = (long)(fVar13 - 9.223372e+18) & (long)fVar13 >> 0x3f | (long)fVar13;
  if (uVar10 < uVar8) {
    uVar10 = uVar8;
  }
  uVar8 = 2;
  if (uVar10 == 1) {
code_r0x00440052:
    uVar10 = uVar8;
    bVar12 = uVar10 < uVar11;
    if (uVar11 < uVar10) goto code_r0x00440057;
code_r0x00440070:
    if (bVar12) {
      fVar13 = (float)func_0x009992a0((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      uVar8 = (long)(fVar13 - 9.223372e+18) & (long)fVar13 >> 0x3f | (long)fVar13;
      if ((uVar11 < 3) || ((uVar11 - 1 & uVar11) != 0)) {
        uVar8 = _ZNSt3__112__next_primeEm(uVar8);
      }
      else if (1 < uVar8) {
        lVar2 = 0x3f;
        if (uVar8 - 1 != 0) {
          for (; uVar8 - 1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        uVar8 = 1L << (-((byte)lVar2 ^ 0x3f) & 0x3f);
      }
      if (uVar10 <= uVar8) {
        uVar10 = uVar8;
      }
      if (uVar10 < uVar11) goto code_r0x00440057;
    }
  }
  else {
    if ((uVar10 & uVar10 - 1) != 0) {
      uVar8 = _ZNSt3__112__next_primeEm();
      uVar11 = param_1[1];
      goto code_r0x00440052;
    }
    bVar12 = uVar10 < uVar11;
    if (uVar10 <= uVar11) goto code_r0x00440070;
code_r0x00440057:
    _ZNSt3__112__hash_tableIPKN4absl12lts_2026052613cord_internal7CordRepENS_4hashIS6_EENS_8equal_toIS6_EENS_9allocatorIS6_EEE11__do_rehashILb1EEEvm
              (param_1,uVar10);
  }
  uVar11 = param_1[1];
  if ((uVar11 & uVar11 - 1) == 0) {
    uVar8 = uVar11 - 1 & uVar6;
  }
  else {
    uVar8 = uVar6;
    if (uVar11 <= uVar6) {
      if ((uVar6 | uVar11) >> 0x20 == 0) {
        uVar8 = (uVar6 & 0xffffffff) % (uVar11 & 0xffffffff);
      }
      else {
        uVar8 = uVar6 % uVar11;
      }
    }
  }
code_r0x0044015d:
  lVar2 = *param_1;
  plVar4 = *(long **)(lVar2 + uVar8 * 8);
  if (plVar4 == (long *)0x0) {
    *plVar7 = param_1[2];
    param_1[2] = (long)plVar7;
    *(long **)(lVar2 + uVar8 * 8) = param_1 + 2;
    if (*plVar7 != 0) {
      uVar6 = *(ulong *)(*plVar7 + 8);
      if ((uVar11 & uVar11 - 1) == 0) {
        uVar6 = uVar6 & uVar11 - 1;
      }
      else if (uVar11 <= uVar6) {
        if ((uVar6 | uVar11) >> 0x20 == 0) {
          uVar6 = (uVar6 & 0xffffffff) % (uVar11 & 0xffffffff);
        }
        else {
          uVar6 = uVar6 % uVar11;
        }
      }
      *(long **)(*param_1 + uVar6 * 8) = plVar7;
    }
  }
  else {
    *plVar7 = *plVar4;
    *plVar4 = (long)plVar7;
  }
  param_1[3] = param_1[3] + 1;
  return plVar7;
}


