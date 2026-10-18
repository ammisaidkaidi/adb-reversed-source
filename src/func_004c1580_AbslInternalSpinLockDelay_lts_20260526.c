// Function: AbslInternalSpinLockDelay_lts_20260526
// Address: 004c1580
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void AbslInternalSpinLockDelay_lts_20260526(undefined8 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)func_0x0099bce0();
  uVar1 = *puVar2;
  func_0x0099c620(0xca,param_1,0x80,param_2,0);
  *puVar2 = uVar1;
  return;
}


