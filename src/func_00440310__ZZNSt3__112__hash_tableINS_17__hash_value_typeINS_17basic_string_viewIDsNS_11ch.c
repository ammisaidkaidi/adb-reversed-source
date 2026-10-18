// Function: _ZZNSt3__112__hash_tableINS_17__hash_value_typeINS_17basic_string_viewIDsNS_11char_traitsIDsEEEEiEENS_22__unordered_map_hasherIS5_NS_4pairIKS5_iEENS_4hashIS5_EENS_8equal_toIS5_EEEENS_21__unordered_map_equalIS5_SA_SE_SC_EENS_9allocatorISA_EEE16__emplace_uniqueB8nn220000IJSA_EEENS8_INS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEEDpOT_ENKUlRS9_OSA_E_clESW_SX_
// Address: 00440310
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long * _ZZNSt3__112__hash_tableINS_17__hash_value_typeINS_17basic_string_viewIDsNS_11char_traitsIDsEEEEiEENS_22__unordered_map_hasherIS5_NS_4pairIKS5_iEENS_4hashIS5_EENS_8equal_toIS5_EEEENS_21__unordered_map_equalIS5_SA_SE_SC_EENS_9allocatorISA_EEE16__emplace_uniqueB8nn220000IJSA_EEENS8_INS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEEDpOT_ENKUlRS9_OSA_E_clESW_SX_
                 (long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  float fVar12;
  
  param_1 = (long *)*param_1;
  lVar1 = *param_2;
  lVar2 = param_2[1];
  uVar5 = _ZNSt3__113__hash_memoryEPKvm(lVar1,lVar2 * 2);
  uVar11 = param_1[1];
  if (uVar11 == 0) {
    uVar7 = 0;
  }
  else {
    uVar10 = uVar11 - 1;
    if ((uVar11 & uVar10) == 0) {
      uVar7 = uVar10 & uVar5;
    }
    else {
      uVar7 = uVar5;
      if (uVar11 <= uVar5) {
        if ((uVar5 | uVar11) >> 0x20 == 0) {
          uVar7 = (uVar5 & 0xffffffff) % (uVar11 & 0xffffffff);
        }
        else {
          uVar7 = uVar5 % uVar11;
        }
      }
    }
    puVar3 = *(undefined8 **)(*param_1 + uVar7 * 8);
    if (puVar3 != (undefined8 *)0x0) {
      for (plVar6 = (long *)*puVar3; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
        uVar9 = plVar6[1];
        if (uVar9 == uVar5) {
          if (plVar6[3] == lVar2) {
            if (lVar2 == 0) {
              return plVar6;
            }
            lVar8 = 0;
            while (*(short *)(lVar1 + lVar8 * 2) == *(short *)(plVar6[2] + lVar8 * 2)) {
              lVar8 = lVar8 + 1;
              if (lVar2 == lVar8) {
                return plVar6;
              }
            }
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
          if (uVar9 != uVar7) break;
        }
      }
    }
  }
  plVar6 = (long *)_Znwm(0x28);
  *plVar6 = 0;
  plVar6[1] = uVar5;
  plVar6[4] = param_3[2];
  lVar1 = param_3[1];
  plVar6[2] = *param_3;
  plVar6[3] = lVar1;
  if ((float)(param_1[3] + 1) <= (float)uVar11 * *(float *)(param_1 + 4)) goto code_r0x0044064b;
  uVar7 = 1;
  if (2 < uVar11) {
    uVar7 = (ulong)((uVar11 & uVar11 - 1) != 0);
  }
  uVar7 = uVar7 | uVar11 * 2;
  fVar12 = (float)func_0x009992a0((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  uVar10 = (long)(fVar12 - 9.223372e+18) & (long)fVar12 >> 0x3f | (long)fVar12;
  if (uVar10 < uVar7) {
    uVar10 = uVar7;
  }
  uVar7 = 2;
  if ((uVar10 != 1) && (uVar7 = uVar10, (uVar10 & uVar10 - 1) != 0)) {
    uVar7 = _ZNSt3__112__next_primeEm();
    uVar11 = param_1[1];
  }
  if (uVar11 < uVar7) {
code_r0x00440552:
    _ZNSt3__112__hash_tableIPKN4absl12lts_2026052613cord_internal7CordRepENS_4hashIS6_EENS_8equal_toIS6_EENS_9allocatorIS6_EEE11__do_rehashILb1EEEvm
              (param_1,uVar7);
  }
  else if (uVar7 < uVar11) {
    fVar12 = (float)func_0x009992a0((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    uVar10 = (long)(fVar12 - 9.223372e+18) & (long)fVar12 >> 0x3f | (long)fVar12;
    if ((uVar11 < 3) || ((uVar11 - 1 & uVar11) != 0)) {
      uVar10 = _ZNSt3__112__next_primeEm(uVar10);
    }
    else if (1 < uVar10) {
      lVar1 = 0x3f;
      if (uVar10 - 1 != 0) {
        for (; uVar10 - 1 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      uVar10 = 1L << (-((byte)lVar1 ^ 0x3f) & 0x3f);
    }
    if (uVar7 <= uVar10) {
      uVar7 = uVar10;
    }
    if (uVar7 < uVar11) goto code_r0x00440552;
  }
  uVar11 = param_1[1];
  if ((uVar11 & uVar11 - 1) == 0) {
    uVar7 = uVar11 - 1 & uVar5;
  }
  else {
    uVar7 = uVar5;
    if (uVar11 <= uVar5) {
      if ((uVar5 | uVar11) >> 0x20 == 0) {
        uVar7 = (uVar5 & 0xffffffff) % (uVar11 & 0xffffffff);
      }
      else {
        uVar7 = uVar5 % uVar11;
      }
    }
  }
code_r0x0044064b:
  lVar1 = *param_1;
  plVar4 = *(long **)(lVar1 + uVar7 * 8);
  if (plVar4 == (long *)0x0) {
    *plVar6 = param_1[2];
    param_1[2] = (long)plVar6;
    *(long **)(lVar1 + uVar7 * 8) = param_1 + 2;
    if (*plVar6 != 0) {
      uVar5 = *(ulong *)(*plVar6 + 8);
      if ((uVar11 & uVar11 - 1) == 0) {
        uVar5 = uVar5 & uVar11 - 1;
      }
      else if (uVar11 <= uVar5) {
        if ((uVar5 | uVar11) >> 0x20 == 0) {
          uVar5 = (uVar5 & 0xffffffff) % (uVar11 & 0xffffffff);
        }
        else {
          uVar5 = uVar5 % uVar11;
        }
      }
      *(long **)(*param_1 + uVar5 * 8) = plVar6;
    }
  }
  else {
    *plVar6 = *plVar4;
    *plVar4 = (long)plVar6;
  }
  param_1[3] = param_1[3] + 1;
  return plVar6;
}


