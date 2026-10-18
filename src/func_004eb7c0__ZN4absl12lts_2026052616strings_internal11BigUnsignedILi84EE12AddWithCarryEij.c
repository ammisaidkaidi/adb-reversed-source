// Function: _ZN4absl12lts_2026052616strings_internal11BigUnsignedILi84EE12AddWithCarryEij
// Address: 004eb7c0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN4absl12lts_2026052616strings_internal11BigUnsignedILi84EE12AddWithCarryEij
               (int *param_1,int param_2,uint param_3)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  if (param_3 != 0) {
    if (param_2 < 0x54) {
      do {
        puVar1 = (uint *)(param_1 + (long)param_2 + 1);
        bVar4 = CARRY4(*puVar1,param_3);
        *puVar1 = *puVar1 + param_3;
        param_2 = param_2 + (uint)bVar4;
        if (0x53 < param_2) break;
        param_3 = (uint)bVar4;
      } while (bVar4);
    }
    iVar3 = param_2 + 1;
    if (param_2 + 1 <= *param_1) {
      iVar3 = *param_1;
    }
    iVar2 = 0x54;
    if (iVar3 < 0x54) {
      iVar2 = iVar3;
    }
    *param_1 = iVar2;
  }
  return;
}


