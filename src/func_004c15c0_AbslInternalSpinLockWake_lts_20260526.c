// Function: AbslInternalSpinLockWake_lts_20260526
// Address: 004c15c0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void AbslInternalSpinLockWake_lts_20260526(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  if (param_2 != 0) {
    uVar1 = 0x7fffffff;
  }
  syscall(0xca,param_1,0x81,uVar1,0);
  return;
}


