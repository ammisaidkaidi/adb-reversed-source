// Function: _ZN12LibUsbDevice11CloseDeviceEv
// Address: 004053e0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN12LibUsbDevice11CloseDeviceEv(long *param_1)

{
  if (*param_1 != 0) {
    libusb_unref_device();
    *param_1 = 0;
  }
  return;
}


