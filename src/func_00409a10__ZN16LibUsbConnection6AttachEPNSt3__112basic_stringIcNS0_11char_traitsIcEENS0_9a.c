// Function: _ZN16LibUsbConnection6AttachEPNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
// Address: 00409a10
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8
_ZN16LibUsbConnection6AttachEPNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
          (long *param_1)

{
  undefined4 uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  undefined1 auStack_40 [8];
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  if ((((byte)adb_trace_mask & 0x20) != 0) && ((int)adb_trace_severity._20_4_ < 2)) {
    cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
    if (cVar2 != '\0') {
      puVar4 = (undefined4 *)func_0x0099bce0();
      uVar1 = *puVar4;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_40,&UNK_0016b012,0xd6,1,0,0xffffffff);
      uVar3 = _ZN7android4base10LogMessage6streamEv(auStack_40);
      func_0x0032eb30(uVar3,&UNK_001835ff,0x18);
      _ZN7android4base10LogMessageD2Ev(auStack_40);
      *puVar4 = uVar1;
    }
  }
  if ((char)param_1[2] == '\0') {
    uVar3 = 1;
    if ((((byte)adb_trace_mask & 0x20) != 0) && ((int)adb_trace_severity._20_4_ < 2)) {
      cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
      if (cVar2 != '\0') goto code_r0x00409b2b;
      uVar3 = 1;
    }
  }
  else {
    LOCK();
    *(undefined1 *)(param_1 + 2) = 0;
    UNLOCK();
    uVar3 = (**(code **)(*param_1 + 0x18))();
  }
  while (*(long *)(in_FS_OFFSET + 0x28) != lStack_38) {
    func_0x0099bd00();
code_r0x00409b2b:
    puVar4 = (undefined4 *)func_0x0099bce0();
    uVar1 = *puVar4;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (auStack_40,&UNK_0016b012,0xd9,1,0,0xffffffff);
    uVar3 = _ZN7android4base10LogMessage6streamEv(auStack_40);
    func_0x0032eb30(uVar3,&UNK_001756c0,0x10);
    _ZN7android4base10LogMessageD2Ev(auStack_40);
    *puVar4 = uVar1;
    uVar3 = 1;
  }
  return uVar3;
}


