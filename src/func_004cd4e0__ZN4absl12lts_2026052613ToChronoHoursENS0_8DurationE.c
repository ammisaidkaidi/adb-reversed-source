// Function: _ZN4absl12lts_2026052613ToChronoHoursENS0_8DurationE
// Address: 004cd4e0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long _ZN4absl12lts_2026052613ToChronoHoursENS0_8DurationE(long param_1,int param_2)

{
  long lVar1;
  
  if (param_2 != -1) {
    return (long)((ulong)(param_2 != 0 && param_1 < 0) + param_1) / 0xe10;
  }
  lVar1 = -0x8000000000000000;
  if (-1 < param_1) {
    lVar1 = 0x7fffffffffffffff;
  }
  return lVar1;
}


