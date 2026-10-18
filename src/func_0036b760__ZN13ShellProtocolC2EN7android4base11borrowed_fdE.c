// Function: _ZN13ShellProtocolC2EN7android4base11borrowed_fdE
// Address: 0036b760
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN13ShellProtocolC2EN7android4base11borrowed_fdE(undefined8 *param_1,undefined4 param_2)

{
  *param_1 = 0x99e570;
  *(undefined4 *)(param_1 + 1) = param_2;
  param_1[0x20002] = 0;
  param_1[0x20003] = 0;
  param_1[0x20004] = (long)param_1 + 0x10000c;
  *(undefined1 *)((long)param_1 + 0xc) = 0xff;
  return;
}


