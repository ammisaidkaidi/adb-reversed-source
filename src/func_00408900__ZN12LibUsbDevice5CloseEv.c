// Function: _ZN12LibUsbDevice5CloseEv
// Address: 00408900
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 _ZN12LibUsbDevice5CloseEv(long param_1)

{
  if (*(char *)(param_1 + 0x4e) == '\x01') {
    libusb_release_interface(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x48));
    LOCK();
    *(undefined1 *)(param_1 + 0x4e) = 0;
    UNLOCK();
  }
  if (*(long *)(param_1 + 8) != 0) {
    libusb_close();
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return 1;
}


