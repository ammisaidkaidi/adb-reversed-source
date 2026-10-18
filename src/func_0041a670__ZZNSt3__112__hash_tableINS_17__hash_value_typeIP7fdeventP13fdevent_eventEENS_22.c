// Function: _ZZNSt3__112__hash_tableINS_17__hash_value_typeIP7fdeventP13fdevent_eventEENS_22__unordered_map_hasherIS3_NS_4pairIKS3_S5_EENS_4hashIS3_EENS_8equal_toIS3_EEEENS_21__unordered_map_equalIS3_SA_SE_SC_EENS_9allocatorISA_EEE16__emplace_uniqueB8nn220000IJRKNS_21piecewise_construct_tENS_5tupleIJRS9_EEENSP_IJEEEEEENS8_INS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEEDpOT_ENKUlSQ_SO_OSR_OSS_E_clESQ_SO_S13_S14_
// Address: 0041a670
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long * _ZZNSt3__112__hash_tableINS_17__hash_value_typeIP7fdeventP13fdevent_eventEENS_22__unordered_map_hasherIS3_NS_4pairIKS3_S5_EENS_4hashIS3_EENS_8equal_toIS3_EEEENS_21__unordered_map_equalIS3_SA_SE_SC_EENS_9allocatorISA_EEE16__emplace_uniqueB8nn220000IJRKNS_21piecewise_construct_tENS_5tupleIJRS9_EEENSP_IJEEEEEENS8_INS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEEDpOT_ENKUlSQ_SO_OSR_OSS_E_clESQ_SO_S13_S14_
                 (long *param_1,long *param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long in_FS_OFFSET;
  bool bVar11;
  float fVar12;
  long lStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  param_1 = (long *)*param_1;
  lVar1 = *param_2;
  lStack_40 = lVar1;
  uVar5 = _ZNSt3__113__hash_memoryEPKvm(&lStack_40,8);
  uVar10 = param_1[1];
  if (uVar10 == 0) {
    uVar8 = 0;
  }
  else {
    uVar9 = uVar10 - 1;
    if ((uVar10 & uVar9) == 0) {
      uVar8 = uVar9 & uVar5;
    }
    else {
      uVar8 = uVar5;
      if (uVar10 <= uVar5) {
        if ((uVar5 | uVar10) >> 0x20 == 0) {
          uVar8 = (uVar5 & 0xffffffff) % (uVar10 & 0xffffffff);
        }
        else {
          uVar8 = uVar5 % uVar10;
        }
      }
    }
    puVar2 = *(undefined8 **)(*param_1 + uVar8 * 8);
    if (puVar2 != (undefined8 *)0x0) {
      for (plVar7 = (long *)*puVar2; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
        uVar6 = plVar7[1];
        if (uVar6 == uVar5) {
          if (plVar7[2] == lVar1) goto code_r0x0041aa03;
        }
        else {
          if ((uVar10 & uVar9) == 0) {
            uVar6 = uVar6 & uVar9;
          }
          else if (uVar10 <= uVar6) {
            if ((uVar6 | uVar10) >> 0x20 != 0) {
              if (uVar6 % uVar10 == uVar8) goto code_r0x0041a72a;
              break;
            }
            uVar6 = (uVar6 & 0xffffffff) % (uVar10 & 0xffffffff);
          }
          if (uVar6 != uVar8) break;
        }
code_r0x0041a72a:
      }
    }
  }
  plVar7 = (long *)_Znwm(0x20);
  *plVar7 = 0;
  plVar7[1] = uVar5;
  plVar7[2] = *(long *)*param_4;
  plVar7[3] = 0;
  if ((float)(param_1[3] + 1) <= (float)uVar10 * *(float *)(param_1 + 4)) goto code_r0x0041a990;
  uVar8 = 1;
  if (2 < uVar10) {
    uVar8 = (ulong)((uVar10 & uVar10 - 1) != 0);
  }
  uVar8 = uVar8 | uVar10 * 2;
  fVar12 = (float)func_0x009992a0((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  uVar9 = (long)(fVar12 - 9.223372e+18) & (long)fVar12 >> 0x3f | (long)fVar12;
  if (uVar9 < uVar8) {
    uVar9 = uVar8;
  }
  uVar8 = 2;
  if (uVar9 == 1) {
    bVar11 = 2 < uVar10;
    uVar9 = uVar8;
    if (1 < uVar10) goto code_r0x0041a8a0;
code_r0x0041a945:
    _ZNSt3__112__hash_tableIPKN4absl12lts_2026052613cord_internal7CordRepENS_4hashIS6_EENS_8equal_toIS6_EENS_9allocatorIS6_EEE11__do_rehashILb1EEEvm
              (param_1,uVar8);
  }
  else {
    if ((uVar9 & uVar9 - 1) == 0) {
      bVar11 = uVar9 < uVar10;
      uVar8 = uVar9;
      if (uVar9 <= uVar10) goto code_r0x0041a8a0;
      goto code_r0x0041a945;
    }
    uVar8 = _ZNSt3__112__next_primeEm();
    uVar10 = param_1[1];
    bVar11 = uVar8 < uVar10;
    uVar9 = uVar8;
    if (uVar10 < uVar8) goto code_r0x0041a945;
code_r0x0041a8a0:
    if (bVar11) {
      fVar12 = (float)func_0x009992a0((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      uVar8 = (long)(fVar12 - 9.223372e+18) & (long)fVar12 >> 0x3f | (long)fVar12;
      if ((uVar10 < 3) || ((uVar10 - 1 & uVar10) != 0)) {
        uVar8 = _ZNSt3__112__next_primeEm(uVar8);
      }
      else if (1 < uVar8) {
        lVar1 = 0x3f;
        if (uVar8 - 1 != 0) {
          for (; uVar8 - 1 >> lVar1 == 0; lVar1 = lVar1 + -1) {
          }
        }
        uVar8 = 1L << (-((byte)lVar1 ^ 0x3f) & 0x3f);
      }
      if (uVar9 <= uVar8) {
        uVar9 = uVar8;
      }
      uVar8 = uVar9;
      if (uVar9 < uVar10) goto code_r0x0041a945;
    }
  }
  uVar10 = param_1[1];
  if ((uVar10 & uVar10 - 1) == 0) {
    uVar8 = uVar10 - 1 & uVar5;
  }
  else {
    uVar8 = uVar5;
    if (uVar10 <= uVar5) {
      if ((uVar5 | uVar10) >> 0x20 == 0) {
        uVar8 = (uVar5 & 0xffffffff) % (uVar10 & 0xffffffff);
      }
      else {
        uVar8 = uVar5 % uVar10;
      }
    }
  }
code_r0x0041a990:
  lVar1 = *param_1;
  plVar3 = *(long **)(lVar1 + uVar8 * 8);
  if (plVar3 == (long *)0x0) {
    *plVar7 = param_1[2];
    param_1[2] = (long)plVar7;
    *(long **)(lVar1 + uVar8 * 8) = param_1 + 2;
    if (*plVar7 != 0) {
      uVar5 = *(ulong *)(*plVar7 + 8);
      if ((uVar10 & uVar10 - 1) == 0) {
        uVar5 = uVar5 & uVar10 - 1;
      }
      else if (uVar10 <= uVar5) {
        if ((uVar5 | uVar10) >> 0x20 == 0) {
          uVar5 = (uVar5 & 0xffffffff) % (uVar10 & 0xffffffff);
        }
        else {
          uVar5 = uVar5 % uVar10;
        }
      }
      *(long **)(*param_1 + uVar5 * 8) = plVar7;
    }
  }
  else {
    *plVar7 = *plVar3;
    *plVar3 = (long)plVar7;
  }
  param_1[3] = param_1[3] + 1;
code_r0x0041aa03:
  if (*(long *)(in_FS_OFFSET + 0x28) != lStack_38) {
    func_0x0099bd00();
    pcVar4 = (code *)swi(3);
    plVar7 = (long *)(*pcVar4)();
    return plVar7;
  }
  return plVar7;
}


