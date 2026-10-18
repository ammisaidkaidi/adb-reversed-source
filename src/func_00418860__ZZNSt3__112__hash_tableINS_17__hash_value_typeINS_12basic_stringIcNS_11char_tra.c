// Function: _ZZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_22__unordered_map_hasherIS7_NS_4pairIKS7_S7_EENS_4hashIS7_EENS_8equal_toIS7_EEEENS_21__unordered_map_equalIS7_SC_SG_SE_EENS5_ISC_EEE16__emplace_uniqueB8nn220000IJRKNS_21piecewise_construct_tENS_5tupleIJOS7_EEENSQ_IJEEEEEENSA_INS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEEDpOT_ENKUlRSB_SP_OSS_OST_E_clES14_SP_S15_S16_
// Address: 00418860
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long * _ZZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_22__unordered_map_hasherIS7_NS_4pairIKS7_S7_EENS_4hashIS7_EENS_8equal_toIS7_EEEENS_21__unordered_map_equalIS7_SC_SG_SE_EENS5_ISC_EEE16__emplace_uniqueB8nn220000IJRKNS_21piecewise_construct_tENS_5tupleIJOS7_EEENSQ_IJEEEEEENSA_INS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEEDpOT_ENKUlRSB_SP_OSS_OST_E_clES14_SP_S15_S16_
                 (long *param_1,byte *param_2,undefined8 param_3,undefined8 *param_4)

{
  ulong uVar1;
  byte bVar2;
  undefined8 *puVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  byte *pbVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  bool bVar14;
  float fVar15;
  
  bVar14 = (*param_2 & 1) != 0;
  pbVar7 = param_2 + 1;
  if (bVar14) {
    pbVar7 = *(byte **)(param_2 + 0x10);
  }
  param_1 = (long *)*param_1;
  uVar10 = (ulong)(*param_2 >> 1);
  if (bVar14) {
    uVar10 = *(ulong *)(param_2 + 8);
  }
  uVar5 = _ZNSt3__113__hash_memoryEPKvm(pbVar7,uVar10);
  uVar12 = param_1[1];
  if (uVar12 == 0) {
    uVar8 = 0;
  }
  else {
    uVar1 = uVar12 - 1;
    if ((uVar12 & uVar1) == 0) {
      uVar8 = uVar1 & uVar5;
    }
    else {
      uVar8 = uVar5;
      if (uVar12 <= uVar5) {
        if ((uVar5 | uVar12) >> 0x20 == 0) {
          uVar8 = (uVar5 & 0xffffffff) % (uVar12 & 0xffffffff);
        }
        else {
          uVar8 = uVar5 % uVar12;
        }
      }
    }
    puVar3 = *(undefined8 **)(*param_1 + uVar8 * 8);
    if (puVar3 != (undefined8 *)0x0) {
      for (plVar13 = (long *)*puVar3; plVar13 != (long *)0x0; plVar13 = (long *)*plVar13) {
        uVar9 = plVar13[1];
        if (uVar9 == uVar5) {
          bVar2 = *(byte *)(plVar13 + 2);
          if ((bVar2 & 1) == 0) {
            uVar9 = (ulong)(bVar2 >> 1);
          }
          else {
            uVar9 = plVar13[3];
          }
          if (uVar9 == uVar10) {
            if ((bVar2 & 1) == 0) {
              lVar11 = (long)plVar13 + 0x11;
            }
            else {
              lVar11 = plVar13[4];
            }
            iVar4 = func_0x0099bf90(lVar11,pbVar7,uVar10);
            if (iVar4 == 0) {
              return plVar13;
            }
          }
        }
        else {
          if ((uVar12 & uVar1) == 0) {
            uVar9 = uVar9 & uVar1;
          }
          else if (uVar12 <= uVar9) {
            if ((uVar9 | uVar12) >> 0x20 == 0) {
              uVar9 = (uVar9 & 0xffffffff) % (uVar12 & 0xffffffff);
            }
            else {
              uVar9 = uVar9 % uVar12;
            }
          }
          if (uVar9 != uVar8) break;
        }
      }
    }
  }
  plVar6 = (long *)_Znwm(0x40);
  *plVar6 = 0;
  plVar6[1] = uVar5;
  plVar13 = (long *)*param_4;
  plVar6[4] = plVar13[2];
  lVar11 = plVar13[1];
  plVar6[2] = *plVar13;
  plVar6[3] = lVar11;
  *plVar13 = 0;
  plVar13[1] = 0;
  plVar13[2] = 0;
  plVar6[5] = 0;
  plVar6[6] = 0;
  plVar6[7] = 0;
  if ((float)(param_1[3] + 1) <= (float)uVar12 * *(float *)(param_1 + 4)) goto code_r0x00418bc8;
  uVar10 = 1;
  if (2 < uVar12) {
    uVar10 = (ulong)((uVar12 & uVar12 - 1) != 0);
  }
  uVar10 = uVar10 | uVar12 * 2;
  fVar15 = (float)func_0x009992a0((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  uVar12 = (long)(fVar15 - 9.223372e+18) & (long)fVar15 >> 0x3f | (long)fVar15;
  if (uVar12 < uVar10) {
    uVar12 = uVar10;
  }
  uVar10 = 2;
  if ((uVar12 != 1) && (uVar10 = uVar12, (uVar12 & uVar12 - 1) != 0)) {
    uVar10 = _ZNSt3__112__next_primeEm();
  }
  uVar12 = param_1[1];
  if (uVar12 < uVar10) {
code_r0x00418aca:
    _ZNSt3__112__hash_tableIPKN4absl12lts_2026052613cord_internal7CordRepENS_4hashIS6_EENS_8equal_toIS6_EENS_9allocatorIS6_EEE11__do_rehashILb1EEEvm
              (param_1,uVar10);
  }
  else if (uVar10 < uVar12) {
    fVar15 = (float)func_0x009992a0((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    uVar8 = (long)(fVar15 - 9.223372e+18) & (long)fVar15 >> 0x3f | (long)fVar15;
    if ((uVar12 < 3) || ((uVar12 - 1 & uVar12) != 0)) {
      uVar8 = _ZNSt3__112__next_primeEm(uVar8);
    }
    else if (1 < uVar8) {
      lVar11 = 0x3f;
      if (uVar8 - 1 != 0) {
        for (; uVar8 - 1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      uVar8 = 1L << (-((byte)lVar11 ^ 0x3f) & 0x3f);
    }
    if (uVar10 <= uVar8) {
      uVar10 = uVar8;
    }
    if (uVar10 < uVar12) goto code_r0x00418aca;
  }
  uVar12 = param_1[1];
  if ((uVar12 & uVar12 - 1) == 0) {
    uVar8 = uVar12 - 1 & uVar5;
  }
  else {
    uVar8 = uVar5;
    if (uVar12 <= uVar5) {
      if ((uVar5 | uVar12) >> 0x20 == 0) {
        uVar8 = (uVar5 & 0xffffffff) % (uVar12 & 0xffffffff);
      }
      else {
        uVar8 = uVar5 % uVar12;
      }
    }
  }
code_r0x00418bc8:
  lVar11 = *param_1;
  plVar13 = *(long **)(lVar11 + uVar8 * 8);
  if (plVar13 == (long *)0x0) {
    *plVar6 = param_1[2];
    param_1[2] = (long)plVar6;
    *(long **)(lVar11 + uVar8 * 8) = param_1 + 2;
    if (*plVar6 != 0) {
      uVar10 = *(ulong *)(*plVar6 + 8);
      if ((uVar12 & uVar12 - 1) == 0) {
        uVar10 = uVar10 & uVar12 - 1;
      }
      else if (uVar12 <= uVar10) {
        if ((uVar10 | uVar12) >> 0x20 == 0) {
          uVar10 = (uVar10 & 0xffffffff) % (uVar12 & 0xffffffff);
        }
        else {
          uVar10 = uVar10 % uVar12;
        }
      }
      *(long **)(*param_1 + uVar10 * 8) = plVar6;
    }
  }
  else {
    *plVar6 = *plVar13;
    *plVar13 = (long)plVar6;
  }
  param_1[3] = param_1[3] + 1;
  return plVar6;
}


