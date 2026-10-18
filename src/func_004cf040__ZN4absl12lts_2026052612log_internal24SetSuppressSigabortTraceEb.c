// Function: _ZN4absl12lts_2026052612log_internal24SetSuppressSigabortTraceEb
// Address: 004cf040
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


uint _ZN4absl12lts_2026052612log_internal24SetSuppressSigabortTraceEb(undefined4 param_1)

{
  undefined1 uVar1;
  
  uVar1 = uRam0000000000a00a90;
  LOCK();
  uRam0000000000a00a90 = (char)param_1;
  UNLOCK();
  return CONCAT31((int3)((uint)param_1 >> 8),uVar1) & 0xffffff01;
}


