// Function: LZ4_compressBound
// Address: 004929a0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


int LZ4_compressBound(uint param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 < 0x7e000001) {
    iVar1 = (uint)((ulong)param_1 * 0x8080808081 >> 0x27) + 0x10;
  }
  return iVar1;
}


