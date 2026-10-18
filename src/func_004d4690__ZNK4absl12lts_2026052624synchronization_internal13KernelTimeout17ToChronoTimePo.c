// Function: _ZNK4absl12lts_2026052624synchronization_internal13KernelTimeout17ToChronoTimePointEv
// Address: 004d4690
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long _ZNK4absl12lts_2026052624synchronization_internal13KernelTimeout17ToChronoTimePointEv
               (ulong *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  lVar2 = 0x7fffffffffffffff;
  uVar1 = *param_1;
  if (uVar1 != 0xffffffffffffffff) {
    uVar4 = uVar1 >> 1;
    if ((uVar1 & 1) == 0) {
      lVar5 = uVar4 + (uVar4 == 0);
    }
    else {
      lVar2 = _ZNSt3__16chrono12steady_clock3nowEv();
      lVar2 = uVar4 - lVar2;
      lVar5 = 0;
      if (0 < lVar2) {
        lVar5 = lVar2;
      }
      lVar3 = _ZN4absl12lts_2026052619GetCurrentTimeNanosEv();
      lVar5 = lVar5 + lVar3;
      if (0x7fffffffffffffff - lVar3 < lVar2) {
        lVar5 = 0x7fffffffffffffff;
      }
    }
    lVar2 = _ZNSt3__16chrono12system_clock11from_time_tEl(0);
    lVar2 = lVar2 + lVar5 / 1000;
  }
  return lVar2;
}


