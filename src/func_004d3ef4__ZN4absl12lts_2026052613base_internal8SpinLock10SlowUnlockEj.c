// Function: _ZN4absl12lts_2026052613base_internal8SpinLock10SlowUnlockEj
// Address: 004d3ef4
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN4absl12lts_2026052613base_internal8SpinLock10SlowUnlockEj(undefined8 param_1,uint param_2)

{
  AbslInternalSpinLockWake_lts_20260526(param_1,0);
  if ((param_2 & 0xfffffff8) == 8) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004d3f2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000009fb840)(param_1,(ulong)(param_2 & 0xfffffff8) << 4);
  return;
}


