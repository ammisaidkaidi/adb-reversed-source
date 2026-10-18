// Function: LZ4_createStream
// Address: 00497a40
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void LZ4_createStream(void)

{
  ulong uVar1;
  
  uVar1 = func_0x0099c1e0(0x4020);
  if ((uVar1 & 7) == 0 && uVar1 != 0) {
    memset(uVar1,0,0x4020);
    return;
  }
  return;
}


