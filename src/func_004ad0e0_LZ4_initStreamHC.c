// Function: LZ4_initStreamHC
// Address: 004ad0e0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong LZ4_initStreamHC(ulong param_1,ulong param_2)

{
  if ((param_1 & 7) == 0 && (0x40037 < param_2 && param_1 != 0)) {
    func_0x0099bdb0(param_1,0,0x40030);
    *(undefined2 *)(param_1 + 0x40024) = 9;
  }
  else {
    param_1 = 0;
  }
  return param_1;
}


