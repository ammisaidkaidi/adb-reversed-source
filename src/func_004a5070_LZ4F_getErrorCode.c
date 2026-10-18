// Function: LZ4F_getErrorCode
// Address: 004a5070
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


int LZ4F_getErrorCode(ulong param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (0xffffffffffffffe8 < param_1) {
    iVar1 = -(int)param_1;
  }
  return iVar1;
}


