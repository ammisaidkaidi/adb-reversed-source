// Function: _ZN4absl12lts_2026052616strings_internal11BigUnsignedILi84EE10MultiplyByEiPKj
// Address: 004eb0a0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN4absl12lts_2026052616strings_internal11BigUnsignedILi84EE10MultiplyByEiPKj
               (int *param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  bool bVar5;
  uint uVar4;
  
  iVar1 = *param_1;
  uVar2 = iVar1 + param_2;
  if (1 < (int)uVar2) {
    uVar4 = 0x55;
    if (uVar2 < 0x55) {
      uVar4 = uVar2;
    }
    iVar3 = uVar4 - 2;
    do {
      _ZN4absl12lts_2026052616strings_internal11BigUnsignedILi84EE12MultiplyStepEiPKjii
                (param_1,iVar1,param_3,param_2,iVar3);
      bVar5 = iVar3 != 0;
      iVar3 = iVar3 + -1;
    } while (bVar5);
  }
  return;
}


