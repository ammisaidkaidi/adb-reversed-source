// Function: _ZNK7android6VectorIPNS_8ResTable12PackageGroupEE8do_splatEPvPKvm
// Address: 0043f3b0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZNK7android6VectorIPNS_8ResTable12PackageGroupEE8do_splatEPvPKvm
               (undefined8 param_1,long param_2,undefined4 *param_3,ulong param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulong uVar4;
  ulong uVar5;
  bool bVar6;
  
  if (param_4 != 0) {
    uVar2 = *param_3;
    uVar3 = param_3[1];
    if (3 < param_4) {
      uVar4 = param_4 & 0xfffffffffffffffc;
      uVar5 = 0;
      do {
        puVar1 = (undefined4 *)(param_2 + uVar5 * 8);
        *puVar1 = uVar2;
        puVar1[1] = uVar3;
        puVar1[2] = uVar2;
        puVar1[3] = uVar3;
        puVar1 = (undefined4 *)(param_2 + 0x10 + uVar5 * 8);
        *puVar1 = uVar2;
        puVar1[1] = uVar3;
        puVar1[2] = uVar2;
        puVar1[3] = uVar3;
        uVar5 = uVar5 + 4;
      } while (uVar4 != uVar5);
      bVar6 = param_4 == uVar4;
      param_4 = (ulong)((uint)param_4 & 3);
      param_2 = param_2 + uVar4 * 8;
      if (bVar6) {
        return;
      }
    }
    uVar4 = 0;
    do {
      puVar1 = (undefined4 *)(param_2 + uVar4 * 8);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      uVar4 = uVar4 + 1;
    } while (param_4 != uVar4);
  }
  return;
}


