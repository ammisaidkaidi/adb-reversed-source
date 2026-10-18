// Function: _ZN4absl12lts_2026052613base_internal30CurrentThreadIdentityIfPresentEv
// Address: 004c1560
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 _ZN4absl12lts_2026052613base_internal30CurrentThreadIdentityIfPresentEv(void)

{
  undefined8 uVar1;
  
  if (cRam0000000000a009cc == '\x01') {
    uVar1 = pthread_getspecific(uRam0000000000a009c4);
    return uVar1;
  }
  return 0;
}


