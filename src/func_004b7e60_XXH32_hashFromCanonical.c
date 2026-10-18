// Function: XXH32_hashFromCanonical
// Address: 004b7e60
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


uint XXH32_hashFromCanonical(uint *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1;
  return uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
}


