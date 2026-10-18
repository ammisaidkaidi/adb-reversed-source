// Function: LZ4_create
// Address: 004a4ff0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void LZ4_create(void)

{
  ulong uVar1;
  
  uVar1 = func_0x0099c1e0(0x4020);
  if ((uVar1 & 7) == 0 && uVar1 != 0) {
    memset(uVar1,0,0x4020);
    return;
  }
  return;
}


