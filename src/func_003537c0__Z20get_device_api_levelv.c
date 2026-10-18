// Function: _Z20get_device_api_levelv
// Address: 003537c0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined4 _Z20get_device_api_levelv(void)

{
  int iVar1;
  
  if (cRam0000000000a005e8 != '\0') {
    return uRam0000000000a005e0;
  }
  iVar1 = __cxa_guard_acquire(0xa005e8);
  if (iVar1 != 0) {
    uRam0000000000a005e0 = func_0x00353810();
    __cxa_guard_release(0xa005e8);
  }
  return uRam0000000000a005e0;
}


