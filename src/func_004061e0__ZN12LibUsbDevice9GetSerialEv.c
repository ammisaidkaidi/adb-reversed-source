// Function: _ZN12LibUsbDevice9GetSerialEv
// Address: 004061e0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 * _ZN12LibUsbDevice9GetSerialEv(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_2 + 0x28) & 1) == 0) {
    param_1[2] = *(undefined8 *)(param_2 + 0x38);
    uVar1 = *(undefined8 *)(param_2 + 0x30);
    *param_1 = *(undefined8 *)(param_2 + 0x28);
    param_1[1] = uVar1;
    return param_1;
  }
  func_0x00330340(param_1,*(undefined8 *)(param_2 + 0x38),*(undefined8 *)(param_2 + 0x30));
  return param_1;
}


