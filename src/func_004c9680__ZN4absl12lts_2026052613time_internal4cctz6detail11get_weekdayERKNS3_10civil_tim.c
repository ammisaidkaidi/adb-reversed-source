// Function: _ZN4absl12lts_2026052613time_internal4cctz6detail11get_weekdayERKNS3_10civil_timeINS3_10second_tagEEE
// Address: 004c9680
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined4
_ZN4absl12lts_2026052613time_internal4cctz6detail11get_weekdayERKNS3_10civil_timeINS3_10second_tagEEE
          (long *param_1)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = *param_1 % 400 - (ulong)((long)(char)param_1[1] < 3);
  uVar1 = lVar2 + 0x960;
  return *(undefined4 *)
          (&UNK_001ff5a8 +
          ((long)(((lVar2 + (uVar1 >> 2) + 0x960 +
                   (long)*(char *)((long)param_1 + 9) +
                   (long)*(int *)(&UNK_001ff5d0 + (long)(char)param_1[1] * 4)) -
                  (ulong)(((uint)(uVar1 >> 2) & 0xffff) * 0x147b >> 0x11)) +
                 (ulong)(((uint)uVar1 >> 4 & 0xffff) * 0xa3e >> 0x10)) % 7) * 4);
}


