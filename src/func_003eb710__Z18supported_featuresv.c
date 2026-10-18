// Function: _Z18supported_featuresv
// Address: 003eb710
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 _Z18supported_featuresv(void)

{
  int iVar1;
  
  if (cRam0000000000a00730 != '\0') {
    return 0xa00718;
  }
  iVar1 = __cxa_guard_acquire(0xa00730);
  if (iVar1 != 0) {
    func_0x003eb760();
    __cxa_guard_release(0xa00730);
  }
  return 0xa00718;
}


