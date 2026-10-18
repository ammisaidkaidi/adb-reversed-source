// Function: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_8String16EhEEE10do_destroyEPvm
// Address: 0043fa20
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZNK7android12SortedVectorINS_16key_value_pair_tINS_8String16EhEEE10do_destroyEPvm
               (undefined8 param_1,long param_2,long param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    _ZN7android8String16D2Ev(param_2);
    param_2 = param_2 + 0x10;
  }
  return;
}


