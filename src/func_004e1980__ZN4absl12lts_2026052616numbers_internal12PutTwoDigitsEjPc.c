// Function: _ZN4absl12lts_2026052616numbers_internal12PutTwoDigitsEjPc
// Address: 004e1980
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN4absl12lts_2026052616numbers_internal12PutTwoDigitsEjPc(uint param_1,short *param_2)

{
  *param_2 = (short)((ulong)param_1 * 0x67 >> 10) * -0x9ff + (short)param_1 * 0x100 + 0x3030;
  return;
}


