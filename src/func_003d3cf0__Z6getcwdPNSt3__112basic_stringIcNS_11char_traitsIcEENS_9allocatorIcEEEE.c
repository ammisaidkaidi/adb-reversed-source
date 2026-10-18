// Function: _Z6getcwdPNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE
// Address: 003d3cf0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _Z6getcwdPNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = func_0x0099c2b0(0,0);
  if (lVar1 != 0) {
    func_0x0032ea60(param_1,lVar1);
  }
  func_0x0099c1f0(lVar1);
  return CONCAT71((int7)((ulong)param_1 >> 8),lVar1 != 0) & 0xffffffff;
}


