// Function: _ZNK4absl12lts_2026052624synchronization_internal13KernelTimeout21InMillisecondsFromNowEv
// Address: 004d4620
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _ZNK4absl12lts_2026052624synchronization_internal13KernelTimeout21InMillisecondsFromNowEv
                (ulong *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  uVar1 = *param_1;
  uVar4 = 0xffffffffffffffff;
  if (uVar1 != 0xffffffffffffffff) {
    if ((uVar1 & 1) == 0) {
      lVar2 = _ZN4absl12lts_2026052619GetCurrentTimeNanosEv();
    }
    else {
      lVar2 = _ZNSt3__16chrono12steady_clock3nowEv();
    }
    lVar2 = (uVar1 >> 1) - lVar2;
    if (lVar2 < 0x7ffffffffff0bdc0) {
      lVar3 = 0;
      if (0 < lVar2) {
        lVar3 = lVar2;
      }
      uVar4 = (lVar3 + 999999U) / 1000000;
    }
  }
  return uVar4;
}


