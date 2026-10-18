// Function: _ZN15AttachedDevices14RegisterAttachERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
// Address: 003fd9c0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _ZN15AttachedDevices14RegisterAttachERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                (long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long in_FS_OFFSET;
  long alStack_68 [2];
  char cStack_58;
  ulong uStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_28;
  ulong uStack_20;
  
  uStack_20 = *(ulong *)(in_FS_OFFSET + 0x28);
  _ZNSt3__15mutex4lockEv();
  lStack_28 = param_1 + 0x28;
  lVar3 = param_2;
  _ZZNSt3__112__hash_tableINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4hashIS6_EENS_8equal_toIS6_EENS4_IS6_EEE16__emplace_uniqueB8nn220000IJRKS6_EEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEEDpOT_ENKUlSF_SF_E_clESF_SF_
            (&lStack_28,param_2,param_2);
  lVar4 = param_1;
  _ZNSt3__115recursive_mutex6unlockEv();
  if (*(ulong *)(in_FS_OFFSET + 0x28) == uStack_20) {
    return *(ulong *)(in_FS_OFFSET + 0x28);
  }
  func_0x0099bd00();
  uStack_50 = *(ulong *)(in_FS_OFFSET + 0x28);
  lStack_48 = param_2;
  lStack_40 = param_1;
  _ZNSt3__15mutex4lockEv();
  lVar2 = lVar4 + 0x28;
  lVar1 = _ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPKN4absl12lts_2026052613time_internal4cctz9time_zone4ImplEEENS_22__unordered_map_hasherIS7_NS_4pairIKS7_SF_EENS_4hashIS7_EENS_8equal_toIS7_EEEENS_21__unordered_map_equalIS7_SK_SO_SM_EENS5_ISK_EEE4findIS7_EENS_15__hash_iteratorIPNS_11__hash_nodeISG_PvEEEERKT_
                    (lVar2,lVar3);
  if (lVar1 != 0) {
    func_0x003f1bd0(alStack_68,lVar2,lVar1);
    lVar1 = alStack_68[0];
    alStack_68[0] = 0;
    lVar3 = lVar2;
    if (lVar1 != 0) {
      if ((cStack_58 == '\x01') && ((*(byte *)(lVar1 + 0x10) & 1) != 0)) {
        _ZdaPvSt11align_val_t
                  (*(undefined8 *)(lVar1 + 0x20),*(ulong *)(lVar1 + 0x10) & 0xfffffffffffffffe);
      }
      lVar3 = 0x28;
      _ZdaPvSt11align_val_t(lVar1,0x28);
    }
  }
  _ZNSt3__115recursive_mutex6unlockEv(lVar4);
  if (*(ulong *)(in_FS_OFFSET + 0x28) == uStack_50) {
    return *(ulong *)(in_FS_OFFSET + 0x28);
  }
  func_0x0099bd00();
  _ZNSt3__15mutex4lockEv();
  lVar2 = _ZNKSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE11ServiceInfoEENS_22__unordered_map_hasherIS7_NS_4pairIKS7_S8_EENS_4hashIS7_EENS_8equal_toIS7_EEEENS_21__unordered_map_equalIS7_SD_SH_SF_EENS5_ISD_EEE4findIS7_EENS_21__hash_const_iteratorIPNS_11__hash_nodeIS9_PvEEEERKT_
                    (lVar4 + 0x28,lVar3);
  _ZNSt3__115recursive_mutex6unlockEv(lVar4);
  return CONCAT71((int7)((ulong)lVar3 >> 8),lVar2 != 0) & 0xffffffff;
}


