// Function: _ZNSt3__112__hash_tableINS_17__hash_value_typeINS_17basic_string_viewIcNS_11char_traitsIcEEEEiEENS_22__unordered_map_hasherIS5_NS_4pairIKS5_iEENS_4hashIS5_EENS_8equal_toIS5_EEEENS_21__unordered_map_equalIS5_SA_SE_SC_EENS_9allocatorISA_EEE4findIS5_EENS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEERKT_
// Address: 0043fd00
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 *
_ZNSt3__112__hash_tableINS_17__hash_value_typeINS_17basic_string_viewIcNS_11char_traitsIcEEEEiEENS_22__unordered_map_hasherIS5_NS_4pairIKS5_iEENS_4hashIS5_EENS_8equal_toIS5_EEEENS_21__unordered_map_equalIS5_SA_SE_SC_EENS_9allocatorISA_EEE4findIS5_EENS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEERKT_
          (long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  
  uVar2 = param_1[1];
  if ((uVar2 != 0) && (param_1[3] != 0)) {
    uVar3 = *param_2;
    lVar4 = param_2[1];
    uVar6 = _ZNSt3__113__hash_memoryEPKvm();
    uVar1 = uVar2 - 1;
    if ((uVar2 & uVar1) == 0) {
      uVar9 = uVar6 & uVar1;
    }
    else {
      uVar9 = uVar6;
      if (uVar2 <= uVar6) {
        if ((uVar6 | uVar2) >> 0x20 == 0) {
          uVar9 = (uVar6 & 0xffffffff) % (uVar2 & 0xffffffff);
        }
        else {
          uVar9 = uVar6 % uVar2;
        }
      }
    }
    puVar8 = *(undefined8 **)(*param_1 + uVar9 * 8);
    if (puVar8 != (undefined8 *)0x0) {
      for (puVar8 = (undefined8 *)*puVar8; puVar8 != (undefined8 *)0x0;
          puVar8 = (undefined8 *)*puVar8) {
        uVar7 = puVar8[1];
        if (uVar7 == uVar6) {
          if ((puVar8[3] == lVar4) && (iVar5 = func_0x0099bf90(puVar8[2],uVar3,lVar4), iVar5 == 0))
          {
            return puVar8;
          }
        }
        else {
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
          if (uVar7 != uVar9) {
            return (undefined8 *)0x0;
          }
        }
      }
    }
  }
  return (undefined8 *)0x0;
}


