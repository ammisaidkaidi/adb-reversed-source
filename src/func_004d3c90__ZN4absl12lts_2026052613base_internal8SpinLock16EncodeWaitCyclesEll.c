// Function: _ZN4absl12lts_2026052613base_internal8SpinLock16EncodeWaitCyclesEll
// Address: 004d3c90
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


int _ZN4absl12lts_2026052613base_internal8SpinLock16EncodeWaitCyclesEll(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = param_2 - param_1 >> 7;
  iVar1 = 0x1fffffff;
  if (lVar2 < 0x1fffffff) {
    iVar1 = (int)lVar2;
  }
  iVar1 = iVar1 << 3;
  if (iVar1 != 0) {
    if (iVar1 == 8) {
      iVar1 = 0x10;
    }
    return iVar1;
  }
  return 8;
}


