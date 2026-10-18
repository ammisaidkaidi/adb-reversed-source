// Function: _INIT_7
// Address: 003d2580
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _INIT_7(void)

{
  puRam0000000000a00618 = (undefined8 *)_Znwm(0x28);
  *puRam0000000000a00618 = 0;
  puRam0000000000a00618[1] = 0;
  puRam0000000000a00618[2] = 0;
  puRam0000000000a00618[3] = 0;
  puRam0000000000a00618[4] = 0;
  lRam0000000000a00620 = _Znwm(0x18);
  *(long *)lRam0000000000a00620 = lRam0000000000a00620;
  *(long *)(lRam0000000000a00620 + 8) = lRam0000000000a00620;
  *(undefined8 *)(lRam0000000000a00620 + 0x10) = 0;
  return;
}


