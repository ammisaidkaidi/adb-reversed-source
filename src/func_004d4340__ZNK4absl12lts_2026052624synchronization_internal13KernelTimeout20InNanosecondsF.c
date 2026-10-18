// Function: _ZNK4absl12lts_2026052624synchronization_internal13KernelTimeout20InNanosecondsFromNowEv
// Address: 004d4340
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long _ZNK4absl12lts_2026052624synchronization_internal13KernelTimeout20InNanosecondsFromNowEv
               (ulong *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *param_1;
  if (uVar1 == 0xffffffffffffffff) {
    lVar3 = 0x7fffffffffffffff;
  }
  else {
    if ((uVar1 & 1) == 0) {
      lVar2 = _ZN4absl12lts_2026052619GetCurrentTimeNanosEv();
    }
    else {
      lVar2 = _ZNSt3__16chrono12steady_clock3nowEv();
    }
    lVar2 = (uVar1 >> 1) - lVar2;
    lVar3 = 0;
    if (0 < lVar2) {
      lVar3 = lVar2;
    }
  }
  return lVar3;
}


