// Function: _Z18adb_server_cleanupv
// Address: 003499e0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _Z18adb_server_cleanupv(void)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined1 auStack_30 [8];
  long lStack_28;
  
  _Z18close_smartsocketsv();
  _Z19kick_all_transportsv();
  lStack_28 = *(long *)(in_FS_OFFSET + 0x28);
  cVar2 = _Z17is_libusb_enabledv();
  if (cVar2 != '\0') {
    if ((((byte)adb_trace_mask & 0x20) != 0) && ((int)adb_trace_severity._20_4_ < 2)) {
      cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
      if (cVar2 != '\0') {
        puVar3 = (undefined4 *)func_0x0099bce0();
        uVar1 = *puVar3;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (auStack_30,&UNK_0016974f,0x2f2,1,0,0xffffffff);
        uVar4 = _ZN7android4base10LogMessage6streamEv(auStack_30);
        func_0x0032eb30(uVar4,&UNK_0017f017,0x14);
        _ZN7android4base10LogMessageD2Ev(auStack_30);
        *puVar3 = uVar1;
      }
    }
    _Z17close_usb_devicesb(0);
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_28) {
    return;
  }
  func_0x0099bd00();
  return;
}


