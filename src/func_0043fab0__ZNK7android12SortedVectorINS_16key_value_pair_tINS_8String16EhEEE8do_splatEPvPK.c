// Function: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_8String16EhEEE8do_splatEPvPKvm
// Address: 0043fab0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZNK7android12SortedVectorINS_16key_value_pair_tINS_8String16EhEEE8do_splatEPvPKvm
               (undefined8 param_1,long param_2,long param_3,long param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    _ZN7android8String16C2ERKS0_(param_2,param_3);
    *(undefined1 *)(param_2 + 8) = *(undefined1 *)(param_3 + 8);
    param_2 = param_2 + 0x10;
  }
  return;
}


