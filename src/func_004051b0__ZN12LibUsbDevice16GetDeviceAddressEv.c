// Function: _ZN12LibUsbDevice16GetDeviceAddressEv
// Address: 004051b0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 * _ZN12LibUsbDevice16GetDeviceAddressEv(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  byte bStack_58;
  undefined7 uStack_57;
  undefined8 *puStack_48;
  undefined1 uStack_40;
  undefined2 uStack_3f;
  undefined4 uStack_3d;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_40 = 0;
  uStack_3f = 0;
  uStack_3d = 0;
  puVar4 = (undefined8 *)*param_2;
  uVar2 = libusb_get_port_numbers(puVar4,&uStack_40,7);
  if ((int)uVar2 < 0) {
    *(undefined2 *)param_1 = 0;
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    uVar1 = libusb_get_bus_number(*param_2);
    puVar4 = param_1;
    _ZN7android4base12StringPrintfEPKcz(param_1,&UNK_0017a259,uVar1,uStack_40);
    if (1 < uVar2) {
      uVar5 = 1;
      do {
        _ZN7android4base12StringPrintfEPKcz(&bStack_58,&UNK_00175686,(&uStack_40)[uVar5]);
        puVar4 = param_1;
        func_0x0032e820(param_1,&bStack_58);
        if ((bStack_58 & 1) != 0) {
          puVar4 = puStack_48;
          _ZdaPvSt11align_val_t(puStack_48,CONCAT71(uStack_57,bStack_58) & 0xfffffffffffffffe);
        }
        uVar5 = uVar5 + 1;
      } while (uVar2 != uVar5);
    }
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return param_1;
  }
  func_0x0099bd00();
  uVar1 = _ZN12LibUsbDevice16OpenDeviceHandleEv();
  *(undefined1 *)(puVar4 + 0xc) = uVar1;
  puVar3 = (undefined8 *)_ZN12LibUsbDevice17GenerateSessionIdEP13libusb_device(*puVar4);
  puVar4[0xd] = puVar3;
  return puVar3;
}


