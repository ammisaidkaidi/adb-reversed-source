// Function: _ZNK18NetlinkUdevMessage4attrERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
// Address: 004187a0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 *
_ZNK18NetlinkUdevMessage4attrERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = _ZNKSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE11ServiceInfoEENS_22__unordered_map_hasherIS7_NS_4pairIKS7_S8_EENS_4hashIS7_EENS_8equal_toIS7_EEEENS_21__unordered_map_equalIS7_SD_SH_SF_EENS5_ISD_EEE4findIS7_EENS_21__hash_const_iteratorIPNS_11__hash_nodeIS9_PvEEEERKT_
                    (param_2,param_3);
  if (lVar2 == 0) {
    *(undefined2 *)param_1 = 0;
  }
  else if ((*(byte *)(lVar2 + 0x28) & 1) == 0) {
    param_1[2] = *(undefined8 *)(lVar2 + 0x38);
    uVar1 = *(undefined8 *)(lVar2 + 0x30);
    *param_1 = *(undefined8 *)(lVar2 + 0x28);
    param_1[1] = uVar1;
  }
  else {
    func_0x00330340(param_1,*(undefined8 *)(lVar2 + 0x38),*(undefined8 *)(lVar2 + 0x30));
  }
  return param_1;
}


