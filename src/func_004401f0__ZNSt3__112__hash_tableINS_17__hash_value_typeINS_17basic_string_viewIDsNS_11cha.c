// Function: _ZNSt3__112__hash_tableINS_17__hash_value_typeINS_17basic_string_viewIDsNS_11char_traitsIDsEEEEiEENS_22__unordered_map_hasherIS5_NS_4pairIKS5_iEENS_4hashIS5_EENS_8equal_toIS5_EEEENS_21__unordered_map_equalIS5_SA_SE_SC_EENS_9allocatorISA_EEE4findIS5_EENS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEERKT_
// Address: 004401f0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long _ZNSt3__112__hash_tableINS_17__hash_value_typeINS_17basic_string_viewIDsNS_11char_traitsIDsEEEEiEENS_22__unordered_map_hasherIS5_NS_4pairIKS5_iEENS_4hashIS5_EENS_8equal_toIS5_EEEENS_21__unordered_map_equalIS5_SA_SE_SC_EENS_9allocatorISA_EEE4findIS5_EENS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEERKT_
               (long *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  uVar2 = param_1[1];
  if ((uVar2 != 0) && (param_1[3] != 0)) {
    lVar3 = *param_2;
    lVar4 = param_2[1];
    uVar5 = _ZNSt3__113__hash_memoryEPKvm(lVar3,lVar4 * 2);
    uVar1 = uVar2 - 1;
    if ((uVar2 & uVar1) == 0) {
      uVar8 = uVar5 & uVar1;
    }
    else {
      uVar8 = uVar5;
      if (uVar2 <= uVar5) {
        if ((uVar5 | uVar2) >> 0x20 == 0) {
          uVar8 = (uVar5 & 0xffffffff) % (uVar2 & 0xffffffff);
        }
        else {
          uVar8 = uVar5 % uVar2;
        }
      }
    }
    plVar6 = *(long **)(*param_1 + uVar8 * 8);
    if (plVar6 != (long *)0x0) {
      do {
        while( true ) {
          plVar6 = (long *)*plVar6;
          if (plVar6 == (long *)0x0) {
            return 0;
          }
          uVar7 = plVar6[1];
          if (uVar7 != uVar5) break;
          if (plVar6[3] == lVar4) {
            if (lVar4 == 0) {
              return (long)plVar6;
            }
            lVar9 = 0;
            while (*(short *)(lVar3 + lVar9 * 2) == *(short *)(plVar6[2] + lVar9 * 2)) {
              lVar9 = lVar9 + 1;
              if (lVar4 == lVar9) {
                return (long)plVar6;
              }
            }
          }
        }
        if ((uVar2 & uVar1) == 0) {
          uVar7 = uVar7 & uVar1;
        }
        else if (uVar2 <= uVar7) {
          if ((uVar7 | uVar2) >> 0x20 == 0) {
            uVar7 = (uVar7 & 0xffffffff) % (uVar2 & 0xffffffff);
          }
          else {
            uVar7 = uVar7 % uVar2;
          }
        }
      } while (uVar7 == uVar8);
    }
  }
  return 0;
}


