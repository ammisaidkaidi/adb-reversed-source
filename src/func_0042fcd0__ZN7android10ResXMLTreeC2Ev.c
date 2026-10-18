// Function: _ZN7android10ResXMLTreeC2Ev
// Address: 0042fcd0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN7android10ResXMLTreeC2Ev(long *param_1)

{
  *param_1 = (long)param_1;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffed;
  _ZN7android13ResStringPoolC1Ev(param_1 + 0x10);
  param_1[2] = 0;
  *(uint *)(param_1 + 1) = -(uint)(*(int *)(*param_1 + 0x60) != 0);
  return;
}


