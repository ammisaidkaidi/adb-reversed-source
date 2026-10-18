// Function: _ZN12LibUsbDevice19GetDeviceDescriptorEv
// Address: 004060c0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 * _ZN12LibUsbDevice19GetDeviceDescriptorEv(undefined8 *param_1,long *param_2)

{
  undefined4 uVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long in_FS_OFFSET;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined2 uStack_48;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  puVar9 = (undefined8 *)*param_2;
  puVar7 = &uStack_58;
  iVar4 = libusb_get_device_descriptor();
  if (iVar4 == 0) {
    *(undefined2 *)(param_1 + 2) = uStack_48;
    *(undefined4 *)param_1 = (undefined4)uStack_58;
    *(undefined4 *)((long)param_1 + 4) = uStack_58._4_4_;
    *(undefined4 *)(param_1 + 1) = (undefined4)uStack_50;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_50._4_4_;
    uVar3 = 1;
  }
  else {
    puVar9 = (undefined8 *)0x3;
    puVar7 = (undefined8 *)0x0;
    cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc();
    if (cVar2 != '\0') {
      puVar5 = (undefined4 *)func_0x0099bce0();
      uVar1 = *puVar5;
      puVar9 = &uStack_60;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (puVar9,&UNK_00159712,0xbe,3,0,0xffffffff);
      uVar6 = _ZN7android4base10LogMessage6streamEv(puVar9);
      uVar6 = func_0x0032eb30(uVar6,&UNK_00174095,0x2c);
      puVar7 = (undefined8 *)libusb_error_name(iVar4);
      uVar8 = func_0x0099bcf0(puVar7);
      func_0x0032eb30(uVar6,puVar7,uVar8);
      _ZN7android4base10LogMessageD2Ev();
      *puVar5 = uVar1;
    }
    *(undefined1 *)param_1 = 0;
    uVar3 = 0;
  }
  *(undefined1 *)((long)param_1 + 0x12) = uVar3;
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return param_1;
  }
  func_0x0099bd00();
  if ((*(byte *)(puVar7 + 5) & 1) == 0) {
    puVar9[2] = puVar7[7];
    uVar6 = puVar7[6];
    *puVar9 = puVar7[5];
    puVar9[1] = uVar6;
    return puVar9;
  }
  func_0x00330340();
  return puVar9;
}


