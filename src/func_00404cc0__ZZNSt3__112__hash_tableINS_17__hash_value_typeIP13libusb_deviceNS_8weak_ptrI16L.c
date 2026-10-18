// Function: _ZZNSt3__112__hash_tableINS_17__hash_value_typeIP13libusb_deviceNS_8weak_ptrI16LibUsbConnectionEEEENS_22__unordered_map_hasherIS3_NS_4pairIKS3_S6_EENS_4hashIS3_EENS_8equal_toIS3_EEEENS_21__unordered_map_equalIS3_SB_SF_SD_EENS_9allocatorISB_EEE16__emplace_uniqueB8nn220000IJS3_RNS_10shared_ptrIS5_EEEEENS9_INS_15__hash_iteratorIPNS_11__hash_nodeIS7_PvEEEEbEEDpOT_ENKUlRSA_OS3_SP_E_clES10_S11_SP_
// Address: 00404cc0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long * _ZZNSt3__112__hash_tableINS_17__hash_value_typeIP13libusb_deviceNS_8weak_ptrI16LibUsbConnectionEEEENS_22__unordered_map_hasherIS3_NS_4pairIKS3_S6_EENS_4hashIS3_EENS_8equal_toIS3_EEEENS_21__unordered_map_equalIS3_SB_SF_SD_EENS_9allocatorISB_EEE16__emplace_uniqueB8nn220000IJS3_RNS_10shared_ptrIS5_EEEEENS9_INS_15__hash_iteratorIPNS_11__hash_nodeIS7_PvEEEEbEEDpOT_ENKUlRSA_OS3_SP_E_clES10_S11_SP_
                 (long *param_1,long *param_2,long *param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long in_FS_OFFSET;
  float fVar12;
  long lStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  param_1 = (long *)*param_1;
  lVar2 = *param_2;
  lStack_40 = lVar2;
  uVar6 = _ZNSt3__113__hash_memoryEPKvm(&lStack_40,8);
  uVar11 = param_1[1];
  if (uVar11 == 0) {
    uVar10 = 0;
  }
  else {
    uVar9 = uVar11 - 1;
    if ((uVar11 & uVar9) == 0) {
      uVar10 = uVar9 & uVar6;
    }
    else {
      uVar10 = uVar6;
      if (uVar11 <= uVar6) {
        if ((uVar6 | uVar11) >> 0x20 == 0) {
          uVar10 = (uVar6 & 0xffffffff) % (uVar11 & 0xffffffff);
        }
        else {
          uVar10 = uVar6 % uVar11;
        }
      }
    }
    puVar3 = *(undefined8 **)(*param_1 + uVar10 * 8);
    if (puVar3 != (undefined8 *)0x0) {
      for (plVar8 = (long *)*puVar3; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
        uVar7 = plVar8[1];
        if (uVar7 == uVar6) {
          if (plVar8[2] == lVar2) goto code_r0x00405060;
        }
        else {
          if ((uVar11 & uVar9) == 0) {
            uVar7 = uVar7 & uVar9;
          }
          else if (uVar11 <= uVar7) {
            if ((uVar7 | uVar11) >> 0x20 != 0) {
              if (uVar7 % uVar11 == uVar10) goto code_r0x00404d7a;
              break;
            }
            uVar7 = (uVar7 & 0xffffffff) % (uVar11 & 0xffffffff);
          }
          if (uVar7 != uVar10) break;
        }
code_r0x00404d7a:
      }
    }
  }
  plVar8 = (long *)_Znwm(0x28);
  *plVar8 = 0;
  plVar8[1] = uVar6;
  plVar8[2] = *param_3;
  lVar2 = param_4[1];
  lVar5 = param_4[1];
  plVar8[3] = *param_4;
  plVar8[4] = lVar5;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + 0x10);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  if ((float)(param_1[3] + 1) <= (float)uVar11 * *(float *)(param_1 + 4)) goto code_r0x00404fed;
  uVar10 = 1;
  if (2 < uVar11) {
    uVar10 = (ulong)((uVar11 & uVar11 - 1) != 0);
  }
  uVar10 = uVar10 | uVar11 * 2;
  fVar12 = (float)func_0x009992a0((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  uVar11 = (long)(fVar12 - 9.223372e+18) & (long)fVar12 >> 0x3f | (long)fVar12;
  if (uVar11 < uVar10) {
    uVar11 = uVar10;
  }
  uVar10 = 2;
  if ((uVar11 != 1) && (uVar10 = uVar11, (uVar11 & uVar11 - 1) != 0)) {
    uVar10 = _ZNSt3__112__next_primeEm();
  }
  uVar11 = param_1[1];
  if (uVar11 < uVar10) {
code_r0x00404eeb:
    _ZNSt3__112__hash_tableIPKN4absl12lts_2026052613cord_internal7CordRepENS_4hashIS6_EENS_8equal_toIS6_EENS_9allocatorIS6_EEE11__do_rehashILb1EEEvm
              (param_1,uVar10);
  }
  else if (uVar10 < uVar11) {
    fVar12 = (float)func_0x009992a0((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    uVar9 = (long)(fVar12 - 9.223372e+18) & (long)fVar12 >> 0x3f | (long)fVar12;
    if ((uVar11 < 3) || ((uVar11 - 1 & uVar11) != 0)) {
      uVar9 = _ZNSt3__112__next_primeEm(uVar9);
    }
    else if (1 < uVar9) {
      lVar2 = 0x3f;
      if (uVar9 - 1 != 0) {
        for (; uVar9 - 1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      uVar9 = 1L << (-((byte)lVar2 ^ 0x3f) & 0x3f);
    }
    if (uVar10 <= uVar9) {
      uVar10 = uVar9;
    }
    if (uVar10 < uVar11) goto code_r0x00404eeb;
  }
  uVar11 = param_1[1];
  if ((uVar11 & uVar11 - 1) == 0) {
    uVar10 = uVar11 - 1 & uVar6;
  }
  else {
    uVar10 = uVar6;
    if (uVar11 <= uVar6) {
      if ((uVar6 | uVar11) >> 0x20 == 0) {
        uVar10 = (uVar6 & 0xffffffff) % (uVar11 & 0xffffffff);
      }
      else {
        uVar10 = uVar6 % uVar11;
      }
    }
  }
code_r0x00404fed:
  lVar2 = *param_1;
  plVar1 = *(long **)(lVar2 + uVar10 * 8);
  if (plVar1 == (long *)0x0) {
    *plVar8 = param_1[2];
    param_1[2] = (long)plVar8;
    *(long **)(lVar2 + uVar10 * 8) = param_1 + 2;
    if (*plVar8 != 0) {
      uVar6 = *(ulong *)(*plVar8 + 8);
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
      *(long **)(*param_1 + uVar6 * 8) = plVar8;
    }
  }
  else {
    *plVar8 = *plVar1;
    *plVar1 = (long)plVar8;
  }
  param_1[3] = param_1[3] + 1;
code_r0x00405060:
  if (*(long *)(in_FS_OFFSET + 0x28) != lStack_38) {
    func_0x0099bd00();
    pcVar4 = (code *)swi(3);
    plVar8 = (long *)(*pcVar4)();
    return plVar8;
  }
  return plVar8;
}


