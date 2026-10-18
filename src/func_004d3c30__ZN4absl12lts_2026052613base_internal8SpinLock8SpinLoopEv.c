// Function: _ZN4absl12lts_2026052613base_internal8SpinLock8SpinLoopEv
// Address: 004d3c30
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN4absl12lts_2026052613base_internal8SpinLock8SpinLoopEv(uint *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = _ZN4absl12lts_2026052613base_internal8SpinLock20adaptive_spin_count_E;
  if (_ZN4absl12lts_2026052613base_internal8SpinLock20adaptive_spin_count_E == 0) {
    iVar2 = _ZN4absl12lts_2026052613base_internal7NumCPUsEv();
    iVar3 = 1;
    if (1 < iVar2) {
      iVar3 = 1000;
    }
    LOCK();
    if (_ZN4absl12lts_2026052613base_internal8SpinLock20adaptive_spin_count_E != 0) {
      iVar3 = _ZN4absl12lts_2026052613base_internal8SpinLock20adaptive_spin_count_E;
    }
    _ZN4absl12lts_2026052613base_internal8SpinLock20adaptive_spin_count_E = iVar3;
    UNLOCK();
    iVar3 = _ZN4absl12lts_2026052613base_internal8SpinLock20adaptive_spin_count_E;
  }
  do {
    if ((*param_1 & 1) == 0) {
      return;
    }
    bVar1 = 1 < iVar3;
    iVar3 = iVar3 + -1;
  } while (bVar1);
  return;
}


