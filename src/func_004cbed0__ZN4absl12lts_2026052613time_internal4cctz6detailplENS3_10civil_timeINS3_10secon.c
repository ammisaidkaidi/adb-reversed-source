// Function: _ZN4absl12lts_2026052613time_internal4cctz6detailplENS3_10civil_timeINS3_10second_tagEEEl
// Address: 004cbed0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN4absl12lts_2026052613time_internal4cctz6detailplENS3_10civil_timeINS3_10second_tagEEEl
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  _ZN4absl12lts_2026052613time_internal4cctz6detail4impl5n_secEllllll
            (param_1,(long)(char)param_2,(long)(char)((ulong)param_2 >> 8),
             (long)(char)((ulong)param_2 >> 0x10),
             (long)(char)((ulong)param_2 >> 0x18) + param_3 / 0x3c,
             param_3 % 0x3c + (long)(char)((ulong)param_2 >> 0x20));
  return;
}


