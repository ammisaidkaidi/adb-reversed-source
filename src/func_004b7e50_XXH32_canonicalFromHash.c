// Function: XXH32_canonicalFromHash
// Address: 004b7e50
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void XXH32_canonicalFromHash(uint *param_1,uint param_2)

{
  *param_1 = param_2 >> 0x18 | (param_2 & 0xff0000) >> 8 | (param_2 & 0xff00) << 8 | param_2 << 0x18
  ;
  return;
}


