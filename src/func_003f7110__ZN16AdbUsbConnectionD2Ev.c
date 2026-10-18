// Function: _ZN16AdbUsbConnectionD2Ev
// Address: 003f7110
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN16AdbUsbConnectionD2Ev(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = 0x99efd8;
  plVar1 = (long *)param_1[1];
  param_1[1] = 0;
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003f713a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))();
    return;
  }
  return;
}


