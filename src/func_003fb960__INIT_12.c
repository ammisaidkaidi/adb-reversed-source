// Function: _INIT_12
// Address: 003fb960
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _INIT_12(void)

{
  puRam0000000000a00738 = (undefined8 *)_Znwm(0x28);
  *puRam0000000000a00738 = 0;
  puRam0000000000a00738[1] = 0;
  puRam0000000000a00738[2] = 0;
  puRam0000000000a00738[3] = 0;
  puRam0000000000a00738[4] = 0;
  plRam0000000000a00740 = (long *)_Znwm(0x18);
  plRam0000000000a00740[1] = 0;
  plRam0000000000a00740[2] = 0;
  *plRam0000000000a00740 = (long)(plRam0000000000a00740 + 1);
  plRam0000000000a00748 = (long *)_Znwm(0x18);
  plRam0000000000a00748[1] = 0;
  plRam0000000000a00748[2] = 0;
  *plRam0000000000a00748 = (long)(plRam0000000000a00748 + 1);
  return;
}


