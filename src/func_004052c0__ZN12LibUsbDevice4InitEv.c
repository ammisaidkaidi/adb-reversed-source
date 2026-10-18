// Function: _ZN12LibUsbDevice4InitEv
// Address: 004052c0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN12LibUsbDevice4InitEv(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 uVar2;
  
  uVar2 = _ZN12LibUsbDevice16OpenDeviceHandleEv();
  *(undefined1 *)(param_1 + 0xc) = uVar2;
  uVar1 = _ZN12LibUsbDevice17GenerateSessionIdEP13libusb_device(*param_1);
  param_1[0xd] = uVar1;
  return;
}


