// Function: _ZN4absl12lts_2026052612FDivDurationENS0_8DurationES1_
// Address: 004cca10
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


double _ZN4absl12lts_2026052612FDivDurationENS0_8DurationES1_
                 (ulong param_1,uint param_2,ulong param_3,uint param_4)

{
  if ((param_2 != 0xffffffff) && (param_4 != 0 || param_3 != 0)) {
    if (param_4 != 0xffffffff) {
      return ((double)param_2 + (double)(long)param_1 * 4000000000.0) /
             ((double)param_4 + (double)(long)param_3 * 4000000000.0);
    }
    return 0.0;
  }
  return *(double *)(&UNK_00156d10 + ((long)(param_3 ^ param_1) >> 0x3f) * -8);
}


