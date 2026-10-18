// Function: LZ4_compress_destSize_extState
// Address: 00496a90
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong LZ4_compress_destSize_extState(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = func_0x00496ad0();
  if ((param_1 & 7) == 0 && param_1 != 0) {
    uVar1 = uVar1 & 0xffffffff;
    func_0x0099bdb0(param_1,0,0x4020);
  }
  return uVar1;
}


