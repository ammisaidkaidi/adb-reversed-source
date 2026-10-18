// Function: _ZN4absl12lts_2026052610FromChronoERKNSt3__16chrono10time_pointINS2_12system_clockENS2_8durationIxNS1_5ratioILl1ELl1000000EEEEEEE
// Address: 004c1e90
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined1  [16]
_ZN4absl12lts_2026052610FromChronoERKNSt3__16chrono10time_pointINS2_12system_clockENS2_8durationIxNS1_5ratioILl1ELl1000000EEEEEEE
          (long *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  
  lVar1 = _ZNSt3__16chrono12system_clock11from_time_tEl(0);
  lVar2 = (*param_1 - lVar1) % 1000000;
  uVar4 = lVar2 * 4000;
  auVar5._0_8_ = ((long)uVar4 >> 0x3f) + (*param_1 - lVar1) / 1000000;
  uVar3 = (ulong)((int)uVar4 + 4000000000);
  if (-1 < lVar2) {
    uVar3 = uVar4 & 0xffffffff;
  }
  auVar5._8_8_ = uVar3;
  return auVar5;
}


