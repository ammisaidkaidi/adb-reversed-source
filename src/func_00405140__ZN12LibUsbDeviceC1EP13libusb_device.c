// Function: _ZN12LibUsbDeviceC1EP13libusb_device
// Address: 00405140
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN12LibUsbDeviceC1EP13libusb_device(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  
  *param_1 = param_2;
  param_1[1] = 0;
  _ZN12LibUsbDevice16GetDeviceAddressEv(param_1 + 2,param_1);
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined8 *)((long)param_1 + 0x47) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  libusb_ref_device(param_2);
  uVar2 = _ZN12LibUsbDevice16OpenDeviceHandleEv(param_1);
  *(undefined1 *)(param_1 + 0xc) = uVar2;
  uVar1 = _ZN12LibUsbDevice17GenerateSessionIdEP13libusb_device(*param_1);
  param_1[0xd] = uVar1;
  return;
}


