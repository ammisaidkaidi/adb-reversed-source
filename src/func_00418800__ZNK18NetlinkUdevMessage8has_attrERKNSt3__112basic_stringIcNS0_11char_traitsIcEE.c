// Function: _ZNK18NetlinkUdevMessage8has_attrERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEENS0_17basic_string_viewIcS3_EE
// Address: 00418800
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


bool _ZNK18NetlinkUdevMessage8has_attrERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEENS0_17basic_string_viewIcS3_EE
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = _ZNKSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE11ServiceInfoEENS_22__unordered_map_hasherIS7_NS_4pairIKS7_S8_EENS_4hashIS7_EENS_8equal_toIS7_EEEENS_21__unordered_map_equalIS7_SD_SH_SF_EENS5_ISD_EEE4findIS7_EENS_21__hash_const_iteratorIPNS_11__hash_nodeIS9_PvEEEERKT_
                    ();
  if (lVar3 != 0) {
    bVar1 = *(byte *)(lVar3 + 0x28);
    if ((bVar1 & 1) == 0) {
      uVar4 = (ulong)(bVar1 >> 1);
    }
    else {
      uVar4 = *(ulong *)(lVar3 + 0x30);
    }
    if (param_4 == uVar4) {
      if ((bVar1 & 1) == 0) {
        lVar3 = lVar3 + 0x29;
      }
      else {
        lVar3 = *(long *)(lVar3 + 0x38);
      }
      iVar2 = func_0x0099bf90(param_3,lVar3,param_4);
      return iVar2 == 0;
    }
  }
  return false;
}


