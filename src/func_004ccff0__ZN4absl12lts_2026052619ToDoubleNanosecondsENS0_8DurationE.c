// Function: _ZN4absl12lts_2026052619ToDoubleNanosecondsENS0_8DurationE
// Address: 004ccff0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


double _ZN4absl12lts_2026052619ToDoubleNanosecondsENS0_8DurationE(long param_1,uint param_2)

{
  if (param_2 != 0xffffffff) {
    return ((double)param_2 + (double)param_1 * 4000000000.0) * 0.25;
  }
  return *(double *)(&UNK_00156d10 + (param_1 >> 0x3f) * -8);
}


