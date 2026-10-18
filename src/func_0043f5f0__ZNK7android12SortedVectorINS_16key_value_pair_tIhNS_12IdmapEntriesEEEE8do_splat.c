// Function: _ZNK7android12SortedVectorINS_16key_value_pair_tIhNS_12IdmapEntriesEEEE8do_splatEPvPKvm
// Address: 0043f5f0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZNK7android12SortedVectorINS_16key_value_pair_tIhNS_12IdmapEntriesEEEE8do_splatEPvPKvm
               (undefined8 param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  
  if (param_4 != 0) {
    uVar2 = param_4;
    if ((param_4 & 3) != 0) {
      uVar2 = 0;
      do {
        uVar1 = param_3[1];
        *param_2 = *param_3;
        param_2[1] = uVar1;
        param_2 = param_2 + 2;
        uVar2 = uVar2 + 1;
      } while ((param_4 & 3) != uVar2);
      uVar2 = param_4 - uVar2;
    }
    if (3 < param_4) {
      do {
        uVar1 = param_3[1];
        *param_2 = *param_3;
        param_2[1] = uVar1;
        uVar1 = param_3[1];
        param_2[2] = *param_3;
        param_2[3] = uVar1;
        uVar1 = param_3[1];
        param_2[4] = *param_3;
        param_2[5] = uVar1;
        uVar1 = param_3[1];
        param_2[6] = *param_3;
        param_2[7] = uVar1;
        param_2 = param_2 + 8;
        uVar2 = uVar2 - 4;
      } while (uVar2 != 0);
    }
  }
  return;
}


