// Function: _ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE11ServiceInfoEENS_22__unordered_map_hasherIS7_NS_4pairIKS7_S8_EENS_4hashIS7_EENS_8equal_toIS7_EEEENS_21__unordered_map_equalIS7_SD_SH_SF_EENS5_ISD_EEE14__erase_uniqueIS7_EEmRKT_
// Address: 00402f60
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8
_ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE11ServiceInfoEENS_22__unordered_map_hasherIS7_NS_4pairIKS7_S8_EENS_4hashIS7_EENS_8equal_toIS7_EEEENS_21__unordered_map_equalIS7_SD_SH_SF_EENS5_ISD_EEE14__erase_uniqueIS7_EEmRKT_
          (undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  long alStack_30 [2];
  char cStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = _ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPKN4absl12lts_2026052613time_internal4cctz9time_zone4ImplEEENS_22__unordered_map_hasherIS7_NS_4pairIKS7_SF_EENS_4hashIS7_EENS_8equal_toIS7_EEEENS_21__unordered_map_equalIS7_SK_SO_SM_EENS5_ISK_EEE4findIS7_EENS_15__hash_iteratorIPNS_11__hash_nodeISG_PvEEEERKT_
                    ();
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    func_0x003f1bd0(alStack_30,param_1,lVar2);
    lVar2 = alStack_30[0];
    alStack_30[0] = 0;
    if (lVar2 != 0) {
      if (cStack_20 == '\x01') {
        _ZN11ServiceInfoD2Ev(lVar2 + 0x28);
        if ((*(byte *)(lVar2 + 0x10) & 1) != 0) {
          _ZdaPvSt11align_val_t
                    (*(undefined8 *)(lVar2 + 0x20),*(ulong *)(lVar2 + 0x10) & 0xfffffffffffffffe);
        }
      }
      _ZdaPvSt11align_val_t(lVar2,0xd0);
    }
    uVar3 = 1;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_18) {
    return uVar3;
  }
  func_0x0099bd00();
  pcVar1 = (code *)swi(3);
  uVar3 = (*pcVar1)();
  return uVar3;
}


