// Function: _ZN4absl12lts_202605267ToTimeTENS0_4TimeE
// Address: 004c1cf0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long _ZN4absl12lts_202605267ToTimeTENS0_4TimeE(long param_1,int param_2)

{
  long lVar1;
  
  lVar1 = -0x8000000000000000;
  if (-1 < param_1) {
    lVar1 = 0x7fffffffffffffff;
  }
  if (param_2 != -1) {
    lVar1 = param_1;
  }
  return lVar1;
}


