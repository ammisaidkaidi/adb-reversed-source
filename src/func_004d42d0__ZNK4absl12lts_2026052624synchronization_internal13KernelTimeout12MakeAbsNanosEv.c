// Function: _ZNK4absl12lts_2026052624synchronization_internal13KernelTimeout12MakeAbsNanosEv
// Address: 004d42d0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long _ZNK4absl12lts_2026052624synchronization_internal13KernelTimeout12MakeAbsNanosEv
               (ulong *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  uVar1 = *param_1;
  lVar4 = 0x7fffffffffffffff;
  if (uVar1 != 0xffffffffffffffff) {
    uVar5 = uVar1 >> 1;
    if ((uVar1 & 1) == 0) {
      lVar4 = uVar5 + (uVar5 == 0);
    }
    else {
      lVar2 = _ZNSt3__16chrono12steady_clock3nowEv();
      lVar2 = uVar5 - lVar2;
      lVar6 = 0;
      if (0 < lVar2) {
        lVar6 = lVar2;
      }
      lVar3 = _ZN4absl12lts_2026052619GetCurrentTimeNanosEv();
      if (lVar2 <= 0x7fffffffffffffff - lVar3) {
        lVar4 = lVar6 + lVar3;
      }
    }
  }
  return lVar4;
}


