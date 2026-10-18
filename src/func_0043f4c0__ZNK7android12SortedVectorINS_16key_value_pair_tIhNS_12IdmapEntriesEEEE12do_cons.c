// Function: _ZNK7android12SortedVectorINS_16key_value_pair_tIhNS_12IdmapEntriesEEEE12do_constructEPvm
// Address: 0043f4c0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZNK7android12SortedVectorINS_16key_value_pair_tIhNS_12IdmapEntriesEEEE12do_constructEPvm
               (undefined8 param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  if (param_3 != 0) {
    uVar1 = param_3;
    if ((param_3 & 7) != 0) {
      uVar1 = 0;
      do {
        *(undefined8 *)(param_2 + 8) = 0;
        param_2 = param_2 + 0x10;
        uVar1 = uVar1 + 1;
      } while ((param_3 & 7) != uVar1);
      uVar1 = param_3 - uVar1;
    }
    if (7 < param_3) {
      puVar2 = (undefined8 *)(param_2 + 0x78);
      do {
        puVar2[-0xe] = 0;
        puVar2[-0xc] = 0;
        puVar2[-10] = 0;
        puVar2[-8] = 0;
        puVar2[-6] = 0;
        puVar2[-4] = 0;
        puVar2[-2] = 0;
        *puVar2 = 0;
        puVar2 = puVar2 + 0x10;
        uVar1 = uVar1 - 8;
      } while (uVar1 != 0);
    }
  }
  return;
}


