// Function: _ZN4absl12lts_2026052613time_internal4cctz6detailmiENS3_10civil_timeINS3_10second_tagEEES6_
// Address: 004c95f0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long _ZN4absl12lts_2026052613time_internal4cctz6detailmiENS3_10civil_timeINS3_10second_tagEEES6_
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = _ZN4absl12lts_2026052613time_internal4cctz6detail4impl14day_differenceElaalaa
                    (param_1,(int)(char)param_2,(int)(char)((ulong)param_2 >> 8),param_3,
                     (int)(char)param_4,(int)(char)((ulong)param_4 >> 8));
  return ((((long)(char)((ulong)param_2 >> 0x10) - (long)(char)((ulong)param_4 >> 0x10)) +
          lVar1 * 0x18) * 0x3c +
         ((long)(char)((ulong)param_2 >> 0x18) - (long)(char)((ulong)param_4 >> 0x18))) * 0x3c +
         ((long)(char)((ulong)param_2 >> 0x20) - (long)(char)((ulong)param_4 >> 0x20));
}


