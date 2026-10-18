// Function: _ZN16AdbUsbConnectionD0Ev
// Address: 003f7140
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN16AdbUsbConnectionD0Ev(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = 0x99efd8;
  plVar1 = (long *)param_1[1];
  param_1[1] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1);
  }
  free(param_1,0x10);
  return;
}


