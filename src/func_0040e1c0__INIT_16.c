// Function: _INIT_16
// Address: 0040e1c0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _INIT_16(void)

{
  puRam0000000000a00850 = (undefined8 *)_Znwm(0x28);
  *puRam0000000000a00850 = 0;
  puRam0000000000a00850[1] = 0;
  puRam0000000000a00850[2] = 0;
  puRam0000000000a00850[3] = 0;
  puRam0000000000a00850[4] = 0;
  uRam0000000000a00868 = 0;
  uRam0000000000a00870 = 0;
  uRam0000000000a00858 = 0;
  uRam0000000000a00860 = 0;
  uRam0000000000a00878 = 0x3f800000;
  puRam0000000000a00880 = (undefined8 *)_Znwm(0x18);
  *puRam0000000000a00880 = 0;
  puRam0000000000a00880[1] = 0;
  puRam0000000000a00880[2] = 0;
  retry_ports_lock = (undefined8 *)_Znwm(0x28);
  *retry_ports_lock = 0;
  retry_ports_lock[1] = 0;
  retry_ports_lock[2] = 0;
  retry_ports_lock[3] = 0;
  retry_ports_lock[4] = 0;
  retry_ports_cond = (undefined8 *)_Znwm(0x30);
  *retry_ports_cond = 0;
  retry_ports_cond[1] = 0;
  retry_ports_cond[2] = 0;
  retry_ports_cond[3] = 0;
  retry_ports_cond[4] = 0;
  retry_ports_cond[5] = 0;
  return;
}


