// Function: _ZN4absl12lts_2026052616strings_internal11BigUnsignedILi84EEC1Em
// Address: 004ea450
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN4absl12lts_2026052616strings_internal11BigUnsignedILi84EEC1Em(uint *param_1,ulong param_2)

{
  uint uVar1;
  
  uVar1 = 2;
  if (param_2 >> 0x20 == 0) {
    uVar1 = (uint)(param_2 != 0);
  }
  *param_1 = uVar1;
  func_0x0099bdb0(param_1 + 3,0,0x148);
  *(ulong *)(param_1 + 1) = param_2;
  return;
}


