// Function: _ZN15AttachedDevices14RegisterDetachERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
// Address: 003fda20
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _ZN15AttachedDevices14RegisterDetachERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                (long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long in_FS_OFFSET;
  long alStack_40 [2];
  char cStack_30;
  ulong uStack_28;
  
  uStack_28 = *(ulong *)(in_FS_OFFSET + 0x28);
  _ZNSt3__15mutex4lockEv();
  lVar2 = param_1 + 0x28;
  lVar1 = _ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPKN4absl12lts_2026052613time_internal4cctz9time_zone4ImplEEENS_22__unordered_map_hasherIS7_NS_4pairIKS7_SF_EENS_4hashIS7_EENS_8equal_toIS7_EEEENS_21__unordered_map_equalIS7_SK_SO_SM_EENS5_ISK_EEE4findIS7_EENS_15__hash_iteratorIPNS_11__hash_nodeISG_PvEEEERKT_
                    (lVar2,param_2);
  if (lVar1 != 0) {
    func_0x003f1bd0(alStack_40,lVar2,lVar1);
    lVar1 = alStack_40[0];
    alStack_40[0] = 0;
    param_2 = lVar2;
    if (lVar1 != 0) {
      if ((cStack_30 == '\x01') && ((*(byte *)(lVar1 + 0x10) & 1) != 0)) {
        _ZdaPvSt11align_val_t
                  (*(undefined8 *)(lVar1 + 0x20),*(ulong *)(lVar1 + 0x10) & 0xfffffffffffffffe);
      }
      param_2 = 0x28;
      _ZdaPvSt11align_val_t(lVar1,0x28);
    }
  }
  _ZNSt3__115recursive_mutex6unlockEv(param_1);
  if (*(ulong *)(in_FS_OFFSET + 0x28) == uStack_28) {
    return *(ulong *)(in_FS_OFFSET + 0x28);
  }
  func_0x0099bd00();
  _ZNSt3__15mutex4lockEv();
  lVar2 = _ZNKSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE11ServiceInfoEENS_22__unordered_map_hasherIS7_NS_4pairIKS7_S8_EENS_4hashIS7_EENS_8equal_toIS7_EEEENS_21__unordered_map_equalIS7_SD_SH_SF_EENS5_ISD_EEE4findIS7_EENS_21__hash_const_iteratorIPNS_11__hash_nodeIS9_PvEEEERKT_
                    (param_1 + 0x28,param_2);
  _ZNSt3__115recursive_mutex6unlockEv(param_1);
  return CONCAT71((int7)((ulong)param_2 >> 8),lVar2 != 0) & 0xffffffff;
}


