// Function: XXH64_canonicalFromHash
// Address: 004b8380
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void XXH64_canonicalFromHash(ulong *param_1,ulong param_2)

{
  *param_1 = param_2 >> 0x38 | (param_2 & 0xff000000000000) >> 0x28 |
             (param_2 & 0xff0000000000) >> 0x18 | (param_2 & 0xff00000000) >> 8 |
             (param_2 & 0xff000000) << 8 | (param_2 & 0xff0000) << 0x18 | (param_2 & 0xff00) << 0x28
             | param_2 << 0x38;
  return;
}


