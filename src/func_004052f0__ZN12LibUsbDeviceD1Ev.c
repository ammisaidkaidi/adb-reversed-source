// Function: _ZN12LibUsbDeviceD1Ev
// Address: 004052f0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN12LibUsbDeviceD1Ev(long *param_1)

{
  if (*(char *)((long)param_1 + 0x4e) == '\x01') {
    libusb_release_interface(param_1[1],(int)param_1[9]);
    LOCK();
    *(undefined1 *)((long)param_1 + 0x4e) = 0;
    UNLOCK();
  }
  if (param_1[1] != 0) {
    libusb_close();
    param_1[1] = 0;
  }
  if (*param_1 != 0) {
    libusb_unref_device();
    *param_1 = 0;
  }
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    _ZdaPvSt11align_val_t(param_1[7],param_1[5] & 0xfffffffffffffffe);
  }
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    return;
  }
  free(param_1[4],param_1[2] & 0xfffffffffffffffe);
  return;
}


