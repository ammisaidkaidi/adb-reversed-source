// Function: _ZN4absl12lts_2026052616strings_internal11BigUnsignedILi4EEC1Em
// Address: 004e8e50
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN4absl12lts_2026052616strings_internal11BigUnsignedILi4EEC1Em(uint *param_1,ulong param_2)

{
  uint uVar1;
  
  uVar1 = 2;
  if (param_2 >> 0x20 == 0) {
    uVar1 = (uint)(param_2 != 0);
  }
  *param_1 = uVar1;
  *(ulong *)(param_1 + 1) = param_2;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}


