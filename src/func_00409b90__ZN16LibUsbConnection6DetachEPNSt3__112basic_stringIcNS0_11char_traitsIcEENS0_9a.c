// Function: _ZN16LibUsbConnection6DetachEPNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
// Address: 00409b90
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _ZN16LibUsbConnection6DetachEPNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                (long *param_1)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  long lStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  if ((((byte)adb_trace_mask & 0x20) != 0) && ((int)adb_trace_severity._20_4_ < 2)) {
    cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
    if (cVar2 != '\0') {
      puVar3 = (undefined4 *)func_0x0099bce0();
      uVar1 = *puVar3;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&lStack_40,&UNK_0016b012,0xe2,1,0,0xffffffff);
      uVar4 = _ZN7android4base10LogMessage6streamEv(&lStack_40);
      func_0x0032eb30(uVar4,&UNK_00189748,0x18);
      _ZN7android4base10LogMessageD2Ev(&lStack_40);
      *puVar3 = uVar1;
    }
  }
  if ((char)param_1[2] == '\x01') {
    if ((((byte)adb_trace_mask & 0x20) != 0) && ((int)adb_trace_severity._20_4_ < 2)) {
      param_1 = (long *)0x1;
      cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
      if (cVar2 != '\0') {
        puVar3 = (undefined4 *)func_0x0099bce0();
        uVar1 = *puVar3;
        param_1 = &lStack_40;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (param_1,&UNK_0016b012,0xe4,1,0,0xffffffff);
        uVar4 = _ZN7android4base10LogMessage6streamEv(param_1);
        func_0x0032eb30(uVar4,&UNK_00162f83,0x10);
        _ZN7android4base10LogMessageD2Ev();
        *puVar3 = uVar1;
      }
    }
  }
  else {
    LOCK();
    *(undefined1 *)(param_1 + 2) = 1;
    UNLOCK();
    (**(code **)(*param_1 + 0x20))();
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return CONCAT71((int7)((ulong)*(long *)(in_FS_OFFSET + 0x28) >> 8),1);
  }
  func_0x0099bd00();
  return (ulong)*(byte *)(param_1 + 2);
}


