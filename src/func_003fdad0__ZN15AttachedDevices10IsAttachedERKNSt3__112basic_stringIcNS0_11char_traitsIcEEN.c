// Function: _ZN15AttachedDevices10IsAttachedERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
// Address: 003fdad0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _ZN15AttachedDevices10IsAttachedERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                (long param_1,undefined8 param_2)

{
  long lVar1;
  
  _ZNSt3__15mutex4lockEv();
  lVar1 = _ZNKSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE11ServiceInfoEENS_22__unordered_map_hasherIS7_NS_4pairIKS7_S8_EENS_4hashIS7_EENS_8equal_toIS7_EEEENS_21__unordered_map_equalIS7_SD_SH_SF_EENS5_ISD_EEE4findIS7_EENS_21__hash_const_iteratorIPNS_11__hash_nodeIS9_PvEEEERKT_
                    (param_1 + 0x28,param_2);
  _ZNSt3__115recursive_mutex6unlockEv(param_1);
  return CONCAT71((int7)((ulong)param_2 >> 8),lVar1 != 0) & 0xffffffff;
}


