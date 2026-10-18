// Function: _ZN7android14Res_png_9patch11deserializeEPv
// Address: 0042cc10
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined1 * _ZN7android14Res_png_9patch11deserializeEPv(undefined1 *param_1)

{
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0x20;
  *(uint *)(param_1 + 8) = (uint)(byte)param_1[1] * 4 + 0x20;
  *(uint *)(param_1 + 0x1c) = ((uint)(byte)param_1[2] + (uint)(byte)param_1[1]) * 4 + 0x20;
  return param_1;
}


