// Function: _ZZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_22__unordered_map_hasherIS7_NS_4pairIKS7_S7_EENS_4hashIS7_EENS_8equal_toIS7_EEEENS_21__unordered_map_equalIS7_SC_SG_SE_EENS5_ISC_EEE16__emplace_uniqueB8nn220000IJRKNS_21piecewise_construct_tENS_5tupleIJRSB_EEENSQ_IJEEEEEENSA_INS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEEDpOT_ENKUlSR_SP_OSS_OST_E_clESR_SP_S14_S15_
// Address: 003f1700
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long * _ZZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_22__unordered_map_hasherIS7_NS_4pairIKS7_S7_EENS_4hashIS7_EENS_8equal_toIS7_EEEENS_21__unordered_map_equalIS7_SC_SG_SE_EENS5_ISC_EEE16__emplace_uniqueB8nn220000IJRKNS_21piecewise_construct_tENS_5tupleIJRSB_EEENSQ_IJEEEEEENSA_INS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEEDpOT_ENKUlSR_SP_OSS_OST_E_clESR_SP_S14_S15_
                 (long *param_1,byte *param_2,undefined8 param_3,undefined8 *param_4)

{
  ulong uVar1;
  byte bVar2;
  undefined8 *puVar3;
  long *plVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  byte *pbVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  bool bVar14;
  float fVar15;
  
  bVar14 = (*param_2 & 1) != 0;
  pbVar8 = param_2 + 1;
  if (bVar14) {
    pbVar8 = *(byte **)(param_2 + 0x10);
  }
  param_1 = (long *)*param_1;
  uVar11 = (ulong)(*param_2 >> 1);
  if (bVar14) {
    uVar11 = *(ulong *)(param_2 + 8);
  }
  uVar6 = _ZNSt3__113__hash_memoryEPKvm(pbVar8,uVar11);
  uVar13 = param_1[1];
  if (uVar13 == 0) {
    uVar9 = 0;
  }
  else {
    uVar1 = uVar13 - 1;
    if ((uVar13 & uVar1) == 0) {
      uVar9 = uVar1 & uVar6;
    }
    else {
      uVar9 = uVar6;
      if (uVar13 <= uVar6) {
        if ((uVar6 | uVar13) >> 0x20 == 0) {
          uVar9 = (uVar6 & 0xffffffff) % (uVar13 & 0xffffffff);
        }
        else {
          uVar9 = uVar6 % uVar13;
        }
      }
    }
    puVar3 = *(undefined8 **)(*param_1 + uVar9 * 8);
    if (puVar3 != (undefined8 *)0x0) {
      for (plVar7 = (long *)*puVar3; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
        uVar10 = plVar7[1];
        if (uVar10 == uVar6) {
          bVar2 = *(byte *)(plVar7 + 2);
          if ((bVar2 & 1) == 0) {
            uVar10 = (ulong)(bVar2 >> 1);
          }
          else {
            uVar10 = plVar7[3];
          }
          if (uVar10 == uVar11) {
            if ((bVar2 & 1) == 0) {
              lVar12 = (long)plVar7 + 0x11;
            }
            else {
              lVar12 = plVar7[4];
            }
            iVar5 = func_0x0099bf90(lVar12,pbVar8,uVar11);
            if (iVar5 == 0) {
              return plVar7;
            }
          }
        }
        else {
          if ((uVar13 & uVar1) == 0) {
            uVar10 = uVar10 & uVar1;
          }
          else if (uVar13 <= uVar10) {
            if ((uVar10 | uVar13) >> 0x20 == 0) {
              uVar10 = (uVar10 & 0xffffffff) % (uVar13 & 0xffffffff);
            }
            else {
              uVar10 = uVar10 % uVar13;
            }
          }
          if (uVar10 != uVar9) break;
        }
      }
    }
  }
  plVar7 = (long *)_Znwm(0x40);
  *plVar7 = 0;
  plVar7[1] = uVar6;
  pbVar8 = (byte *)*param_4;
  if ((*pbVar8 & 1) == 0) {
    plVar7[4] = *(long *)(pbVar8 + 0x10);
    lVar12 = *(long *)(pbVar8 + 8);
    plVar7[2] = *(long *)pbVar8;
    plVar7[3] = lVar12;
  }
  else {
    func_0x00330340(plVar7 + 2,*(undefined8 *)(pbVar8 + 0x10),*(undefined8 *)(pbVar8 + 8));
  }
  plVar7[5] = 0;
  plVar7[6] = 0;
  plVar7[7] = 0;
  if ((float)(param_1[3] + 1) <= (float)uVar13 * *(float *)(param_1 + 4)) goto code_r0x003f1a96;
  uVar11 = 1;
  if (2 < uVar13) {
    uVar11 = (ulong)((uVar13 & uVar13 - 1) != 0);
  }
  uVar11 = uVar11 | uVar13 * 2;
  fVar15 = (float)func_0x009992a0((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  uVar13 = (long)(fVar15 - 9.223372e+18) & (long)fVar15 >> 0x3f | (long)fVar15;
  if (uVar13 < uVar11) {
    uVar13 = uVar11;
  }
  uVar11 = 2;
  if ((uVar13 != 1) && (uVar11 = uVar13, (uVar13 & uVar13 - 1) != 0)) {
    uVar11 = _ZNSt3__112__next_primeEm();
  }
  uVar13 = param_1[1];
  if (uVar13 < uVar11) {
code_r0x003f1998:
    _ZNSt3__112__hash_tableIPKN4absl12lts_2026052613cord_internal7CordRepENS_4hashIS6_EENS_8equal_toIS6_EENS_9allocatorIS6_EEE11__do_rehashILb1EEEvm
              (param_1,uVar11);
  }
  else if (uVar11 < uVar13) {
    fVar15 = (float)func_0x009992a0((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    uVar9 = (long)(fVar15 - 9.223372e+18) & (long)fVar15 >> 0x3f | (long)fVar15;
    if ((uVar13 < 3) || ((uVar13 - 1 & uVar13) != 0)) {
      uVar9 = _ZNSt3__112__next_primeEm(uVar9);
    }
    else if (1 < uVar9) {
      lVar12 = 0x3f;
      if (uVar9 - 1 != 0) {
        for (; uVar9 - 1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      uVar9 = 1L << (-((byte)lVar12 ^ 0x3f) & 0x3f);
    }
    if (uVar11 <= uVar9) {
      uVar11 = uVar9;
    }
    if (uVar11 < uVar13) goto code_r0x003f1998;
  }
  uVar13 = param_1[1];
  if ((uVar13 & uVar13 - 1) == 0) {
    uVar9 = uVar13 - 1 & uVar6;
  }
  else {
    uVar9 = uVar6;
    if (uVar13 <= uVar6) {
      if ((uVar6 | uVar13) >> 0x20 == 0) {
        uVar9 = (uVar6 & 0xffffffff) % (uVar13 & 0xffffffff);
      }
      else {
        uVar9 = uVar6 % uVar13;
      }
    }
  }
code_r0x003f1a96:
  lVar12 = *param_1;
  plVar4 = *(long **)(lVar12 + uVar9 * 8);
  if (plVar4 == (long *)0x0) {
    *plVar7 = param_1[2];
    param_1[2] = (long)plVar7;
    *(long **)(lVar12 + uVar9 * 8) = param_1 + 2;
    if (*plVar7 != 0) {
      uVar11 = *(ulong *)(*plVar7 + 8);
      if ((uVar13 & uVar13 - 1) == 0) {
        uVar11 = uVar11 & uVar13 - 1;
      }
      else if (uVar13 <= uVar11) {
        if ((uVar11 | uVar13) >> 0x20 == 0) {
          uVar11 = (uVar11 & 0xffffffff) % (uVar13 & 0xffffffff);
        }
        else {
          uVar11 = uVar11 % uVar13;
        }
      }
      *(long **)(*param_1 + uVar11 * 8) = plVar7;
    }
  }
  else {
    *plVar7 = *plVar4;
    *plVar4 = (long)plVar7;
  }
  param_1[3] = param_1[3] + 1;
  return plVar7;
}


