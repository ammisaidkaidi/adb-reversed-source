// Function: _ZNK7android12SortedVectorINS_16key_value_pair_tIhNS_12IdmapEntriesEEEE15do_move_forwardEPvPKvm
// Address: 0043f670
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZNK7android12SortedVectorINS_16key_value_pair_tIhNS_12IdmapEntriesEEEE15do_move_forwardEPvPKvm
               (undefined8 param_1,long param_2,long param_3,ulong param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  
  if (param_4 != 0) {
    param_3 = param_3 + param_4 * 0x10;
    param_2 = param_2 + param_4 * 0x10;
    uVar5 = param_4;
    if ((param_4 & 3) != 0) {
      uVar5 = 0;
      do {
        puVar1 = (undefined8 *)(param_3 + -0x10);
        uVar3 = *(undefined8 *)(param_3 + -8);
        param_3 = param_3 + -0x10;
        *(undefined8 *)(param_2 + -0x10) = *puVar1;
        *(undefined8 *)(param_2 + -8) = uVar3;
        param_2 = param_2 + -0x10;
        uVar5 = uVar5 + 1;
      } while ((param_4 & 3) != uVar5);
      uVar5 = param_4 - uVar5;
    }
    if (3 < param_4) {
      lVar4 = -0x10;
      do {
        uVar3 = ((undefined8 *)(param_3 + lVar4))[1];
        *(undefined8 *)(param_2 + lVar4) = *(undefined8 *)(param_3 + lVar4);
        ((undefined8 *)(param_2 + lVar4))[1] = uVar3;
        puVar1 = (undefined8 *)(param_3 + -0x10 + lVar4);
        uVar3 = puVar1[1];
        puVar2 = (undefined8 *)(param_2 + -0x10 + lVar4);
        *puVar2 = *puVar1;
        puVar2[1] = uVar3;
        puVar1 = (undefined8 *)(param_3 + -0x20 + lVar4);
        uVar3 = puVar1[1];
        puVar2 = (undefined8 *)(param_2 + -0x20 + lVar4);
        *puVar2 = *puVar1;
        puVar2[1] = uVar3;
        puVar1 = (undefined8 *)(param_3 + -0x30 + lVar4);
        uVar3 = puVar1[1];
        puVar2 = (undefined8 *)(param_2 + -0x30 + lVar4);
        *puVar2 = *puVar1;
        puVar2[1] = uVar3;
        lVar4 = lVar4 + -0x40;
        uVar5 = uVar5 - 4;
      } while (uVar5 != 0);
    }
  }
  return;
}


