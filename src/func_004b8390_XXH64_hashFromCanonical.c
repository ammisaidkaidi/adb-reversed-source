// Function: XXH64_hashFromCanonical
// Address: 004b8390
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong XXH64_hashFromCanonical(ulong *param_1)

{
  ulong uVar1;
  
  uVar1 = *param_1;
  return uVar1 >> 0x38 | (uVar1 & 0xff000000000000) >> 0x28 | (uVar1 & 0xff0000000000) >> 0x18 |
         (uVar1 & 0xff00000000) >> 8 | (uVar1 & 0xff000000) << 8 | (uVar1 & 0xff0000) << 0x18 |
         (uVar1 & 0xff00) << 0x28 | uVar1 << 0x38;
}


