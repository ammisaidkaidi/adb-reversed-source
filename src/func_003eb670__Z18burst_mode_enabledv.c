// Function: _Z18burst_mode_enabledv
// Address: 003eb670
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined1 _Z18burst_mode_enabledv(void)

{
  int iVar1;
  
  if (cRam0000000000a00700 == '\0') {
    iVar1 = __cxa_guard_acquire(0xa00700);
    if (iVar1 != 0) {
      pcRam0000000000a006f8 = (char *)func_0x0099be70(&UNK_00174044);
      __cxa_guard_release(0xa00700);
    }
  }
  if (cRam0000000000a00710 == '\0') {
    iVar1 = __cxa_guard_acquire(0xa00710);
    if (iVar1 != 0) {
      if ((pcRam0000000000a006f8 == (char *)0x0) || (*pcRam0000000000a006f8 != '1')) {
        uRam0000000000a00708 = false;
      }
      else {
        uRam0000000000a00708 = pcRam0000000000a006f8[1] == '\0';
      }
      __cxa_guard_release(0xa00710);
    }
  }
  return uRam0000000000a00708;
}


