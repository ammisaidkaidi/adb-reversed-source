// Function: _INIT_8
// Address: 003dc6f0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _INIT_8(void)

{
  undefined8 uVar1;
  
  uVar1 = _Znwm(0x28);
  _ZNSt3__115recursive_mutexC2Ev(uVar1);
  uRam0000000000a00690 = uVar1;
  puRam0000000000a00698 = (undefined8 *)_Znwm(0x18);
  *puRam0000000000a00698 = 0;
  puRam0000000000a00698[1] = 0;
  puRam0000000000a00698[2] = 0;
  puRam0000000000a006a0 = (undefined8 *)_Znwm(0x18);
  *puRam0000000000a006a0 = 0;
  puRam0000000000a006a0[1] = 0;
  puRam0000000000a006a0[2] = 0;
  return;
}


