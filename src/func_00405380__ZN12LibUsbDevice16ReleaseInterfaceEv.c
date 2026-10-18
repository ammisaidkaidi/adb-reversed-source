// Function: _ZN12LibUsbDevice16ReleaseInterfaceEv
// Address: 00405380
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


char _ZN12LibUsbDevice16ReleaseInterfaceEv(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x4e);
  if (cVar1 == '\x01') {
    libusb_release_interface(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x48));
    LOCK();
    cVar1 = *(char *)(param_1 + 0x4e);
    *(char *)(param_1 + 0x4e) = '\0';
    UNLOCK();
  }
  return cVar1;
}


