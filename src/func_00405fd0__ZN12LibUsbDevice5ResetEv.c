// Function: _ZN12LibUsbDevice5ResetEv
// Address: 00405fd0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 * _ZN12LibUsbDevice5ResetEv(long param_1,long *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  char cVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long *unaff_RBX;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 unaff_R12;
  ulong unaff_R13;
  uint *unaff_R14;
  undefined8 *unaff_R15;
  long in_FS_OFFSET;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined2 uStack_90;
  long lStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  uint *puStack_60;
  undefined8 *puStack_58;
  undefined *puStack_50;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  
  puStack_38 = *(undefined8 **)(in_FS_OFFSET + 0x28);
  puVar11 = *(undefined8 **)(param_1 + 8);
  if (puVar11 != (undefined8 *)0x0) {
    puStack_50 = &UNK_00405ffc;
    uVar5 = libusb_reset_device();
    if (uVar5 != 0) {
      unaff_RBX = (long *)(ulong)uVar5;
      puVar11 = (undefined8 *)0x4;
      param_2 = (long *)0x0;
      puStack_50 = &UNK_0040600e;
      cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc();
      if (cVar3 != '\0') {
        puStack_50 = &UNK_00406039;
        unaff_R14 = (uint *)func_0x0099bce0();
        uVar1 = *unaff_R14;
        unaff_R13 = (ulong)uVar1;
        unaff_R15 = &uStack_40;
        puStack_50 = &UNK_00406065;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (unaff_R15,&UNK_00159712,0xa8,4,0,0xffffffff);
        puStack_50 = &UNK_0040606d;
        uVar8 = _ZN7android4base10LogMessage6streamEv(unaff_R15);
        puStack_50 = &UNK_00406081;
        unaff_R12 = func_0x0032eb30(uVar8,&UNK_00180452,0x1c);
        puStack_50 = &UNK_0040608b;
        unaff_RBX = (long *)libusb_error_name(uVar5);
        puStack_50 = &UNK_00406096;
        uVar8 = func_0x0099bcf0(unaff_RBX);
        puStack_50 = &UNK_004060a4;
        param_2 = unaff_RBX;
        func_0x0032eb30(unaff_R12,unaff_RBX,uVar8);
        puStack_50 = &UNK_004060ac;
        puVar11 = unaff_R15;
        _ZN7android4base10LogMessageD2Ev();
        *unaff_R14 = uVar1;
      }
    }
  }
  if (*(undefined8 **)(in_FS_OFFSET + 0x28) == puStack_38) {
    return *(undefined8 **)(in_FS_OFFSET + 0x28);
  }
  puStack_50 = &UNK_004060b9;
  func_0x0099bd00();
  lStack_80 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  puVar12 = (undefined8 *)*param_2;
  puVar9 = &uStack_a0;
  plStack_78 = unaff_RBX;
  uStack_70 = unaff_R12;
  uStack_68 = unaff_R13;
  puStack_60 = unaff_R14;
  puStack_58 = unaff_R15;
  puStack_50 = &stack0xfffffffffffffff8;
  iVar6 = libusb_get_device_descriptor();
  if (iVar6 == 0) {
    *(undefined2 *)(puVar11 + 2) = uStack_90;
    *(undefined4 *)puVar11 = (undefined4)uStack_a0;
    *(undefined4 *)((long)puVar11 + 4) = uStack_a0._4_4_;
    *(undefined4 *)(puVar11 + 1) = (undefined4)uStack_98;
    *(undefined4 *)((long)puVar11 + 0xc) = uStack_98._4_4_;
    uVar4 = 1;
  }
  else {
    puVar12 = (undefined8 *)0x3;
    puVar9 = (undefined8 *)0x0;
    cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc();
    if (cVar3 != '\0') {
      puVar7 = (undefined4 *)func_0x0099bce0();
      uVar2 = *puVar7;
      puVar12 = &uStack_a8;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (puVar12,&UNK_00159712,0xbe,3,0,0xffffffff);
      uVar8 = _ZN7android4base10LogMessage6streamEv(puVar12);
      uVar8 = func_0x0032eb30(uVar8,&UNK_00174095,0x2c);
      puVar9 = (undefined8 *)libusb_error_name(iVar6);
      uVar10 = func_0x0099bcf0(puVar9);
      func_0x0032eb30(uVar8,puVar9,uVar10);
      _ZN7android4base10LogMessageD2Ev();
      *puVar7 = uVar2;
    }
    *(undefined1 *)puVar11 = 0;
    uVar4 = 0;
  }
  *(undefined1 *)((long)puVar11 + 0x12) = uVar4;
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_80) {
    return puVar11;
  }
  func_0x0099bd00();
  if ((*(byte *)(puVar9 + 5) & 1) == 0) {
    puVar12[2] = puVar9[7];
    uVar8 = puVar9[6];
    *puVar12 = puVar9[5];
    puVar12[1] = uVar8;
    return puVar12;
  }
  func_0x00330340();
  return puVar12;
}


