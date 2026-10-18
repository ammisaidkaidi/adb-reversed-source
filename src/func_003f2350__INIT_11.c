// Function: _INIT_11
// Address: 003f2350
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _INIT_11(void)

{
  undefined8 uVar1;
  
  uVar1 = _Znwm(0x28);
  _ZNSt3__115recursive_mutexC2Ev(uVar1);
  uRam0000000000a006c8 = uVar1;
  lRam0000000000a006d0 = _Znwm(0x18);
  *(long *)lRam0000000000a006d0 = lRam0000000000a006d0;
  *(long *)(lRam0000000000a006d0 + 8) = lRam0000000000a006d0;
  *(undefined8 *)(lRam0000000000a006d0 + 0x10) = 0;
  lRam0000000000a006d8 = _Znwm(0x18);
  *(long *)lRam0000000000a006d8 = lRam0000000000a006d8;
  *(long *)(lRam0000000000a006d8 + 8) = lRam0000000000a006d8;
  *(undefined8 *)(lRam0000000000a006d8 + 0x10) = 0;
  puRam0000000000a006e0 = (undefined8 *)_Znwm(0x80);
  puRam0000000000a006e0[4] = 0;
  puRam0000000000a006e0[5] = 0;
  *puRam0000000000a006e0 = 0;
  puRam0000000000a006e0[1] = 0;
  puRam0000000000a006e0[2] = 0;
  puRam0000000000a006e0[3] = 0;
  *(undefined1 *)(puRam0000000000a006e0 + 5) = 1;
  puRam0000000000a006e0[0xe] = 0;
  puRam0000000000a006e0[0xf] = 0;
  puRam0000000000a006e0[6] = 0;
  puRam0000000000a006e0[7] = 0;
  puRam0000000000a006e0[8] = 0;
  puRam0000000000a006e0[9] = 0;
  puRam0000000000a006e0[10] = 0;
  puRam0000000000a006e0[0xb] = 0;
  puRam0000000000a006e0[0xc] = 0;
  puRam0000000000a006e0[0xd] = puRam0000000000a006e0 + 0xe;
  return;
}


