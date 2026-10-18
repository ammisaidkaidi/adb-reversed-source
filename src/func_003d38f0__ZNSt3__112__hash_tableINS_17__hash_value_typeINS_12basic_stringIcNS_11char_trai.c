// Function: _ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPKN4absl12lts_2026052613time_internal4cctz9time_zone4ImplEEENS_22__unordered_map_hasherIS7_NS_4pairIKS7_SF_EENS_4hashIS7_EENS_8equal_toIS7_EEEENS_21__unordered_map_equalIS7_SK_SO_SM_EENS5_ISK_EEE4findIS7_EENS_15__hash_iteratorIPNS_11__hash_nodeISG_PvEEEERKT_
// Address: 003d38f0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 *
_ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPKN4absl12lts_2026052613time_internal4cctz9time_zone4ImplEEENS_22__unordered_map_hasherIS7_NS_4pairIKS7_SF_EENS_4hashIS7_EENS_8equal_toIS7_EEEENS_21__unordered_map_equalIS7_SK_SO_SM_EENS5_ISK_EEE4findIS7_EENS_15__hash_iteratorIPNS_11__hash_nodeISG_PvEEEERKT_
          (long *param_1,byte *param_2)

{
  byte bVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  byte *pbVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  bool bVar11;
  
  uVar2 = param_1[1];
  if ((uVar2 != 0) && (param_1[3] != 0)) {
    bVar11 = (*param_2 & 1) != 0;
    pbVar6 = param_2 + 1;
    if (bVar11) {
      pbVar6 = *(byte **)(param_2 + 0x10);
    }
    uVar10 = (ulong)(*param_2 >> 1);
    if (bVar11) {
      uVar10 = *(ulong *)(param_2 + 8);
    }
    uVar4 = _ZNSt3__113__hash_memoryEPKvm(pbVar6,uVar10);
    if ((uVar2 & uVar2 - 1) == 0) {
      uVar7 = uVar4 & uVar2 - 1;
    }
    else {
      uVar7 = uVar4;
      if (uVar2 <= uVar4) {
        if ((uVar4 | uVar2) >> 0x20 == 0) {
          uVar7 = (uVar4 & 0xffffffff) % (uVar2 & 0xffffffff);
        }
        else {
          uVar7 = uVar4 % uVar2;
        }
      }
    }
    puVar9 = *(undefined8 **)(*param_1 + uVar7 * 8);
    if (puVar9 != (undefined8 *)0x0) {
      for (puVar9 = (undefined8 *)*puVar9; puVar9 != (undefined8 *)0x0;
          puVar9 = (undefined8 *)*puVar9) {
        uVar5 = puVar9[1];
        if (uVar5 == uVar4) {
          bVar1 = *(byte *)(puVar9 + 2);
          if ((bVar1 & 1) == 0) {
            uVar5 = (ulong)(bVar1 >> 1);
          }
          else {
            uVar5 = puVar9[3];
          }
          if (uVar5 == uVar10) {
            if ((bVar1 & 1) == 0) {
              lVar8 = (long)puVar9 + 0x11;
            }
            else {
              lVar8 = puVar9[4];
            }
            iVar3 = func_0x0099bf90(lVar8,pbVar6,uVar10);
            if (iVar3 == 0) {
              return puVar9;
            }
          }
        }
        else {
          if ((uVar2 & uVar2 - 1) == 0) {
            uVar5 = uVar5 & uVar2 - 1;
          }
          else if (uVar2 <= uVar5) {
            if ((uVar5 | uVar2) >> 0x20 == 0) {
              uVar5 = (uVar5 & 0xffffffff) % (uVar2 & 0xffffffff);
            }
            else {
              uVar5 = uVar5 % uVar2;
            }
          }
          if (uVar5 != uVar7) {
            return (undefined8 *)0x0;
          }
        }
      }
    }
  }
  return (undefined8 *)0x0;
}


