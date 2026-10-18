// Function: _ZN12LibUsbDevice17CloseDeviceHandleEv
// Address: 004053b0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN12LibUsbDevice17CloseDeviceHandleEv(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    libusb_close();
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return;
}


