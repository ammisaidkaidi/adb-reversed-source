// Function: _ZNK7android12SortedVectorINS_16key_value_pair_tIhNS_12IdmapEntriesEEEE10do_compareEPKvS6_
// Address: 0043f720
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


int _ZNK7android12SortedVectorINS_16key_value_pair_tIhNS_12IdmapEntriesEEEE10do_compareEPKvS6_
              (undefined8 param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = *param_2;
  bVar2 = *param_3;
  return (int)(char)((bVar1 >= bVar2 && bVar1 != bVar2) - (bVar1 < bVar2));
}


