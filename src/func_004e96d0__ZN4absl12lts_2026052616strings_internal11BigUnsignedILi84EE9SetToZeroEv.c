// Function: _ZN4absl12lts_2026052616strings_internal11BigUnsignedILi84EE9SetToZeroEv
// Address: 004e96d0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN4absl12lts_2026052616strings_internal11BigUnsignedILi84EE9SetToZeroEv(int *param_1)

{
  if (0 < (long)*param_1) {
    func_0x0099bdb0(param_1 + 1,0,(long)*param_1 << 2);
  }
  *param_1 = 0;
  return;
}


