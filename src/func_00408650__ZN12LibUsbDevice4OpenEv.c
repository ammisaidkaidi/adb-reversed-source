// Function: _ZN12LibUsbDevice4OpenEv
// Address: 00408650
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 _ZN12LibUsbDevice4OpenEv(uint *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  char cVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  bool bVar6;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  undefined8 uStack_48;
  undefined1 auStack_38 [8];
  long lStack_30;
  
  lStack_30 = *(long *)(in_FS_OFFSET + 0x28);
  cVar3 = _ZN12LibUsbDevice16OpenDeviceHandleEv();
  if (cVar3 == '\0') {
    uVar5 = 0;
    if (((byte)adb_trace_mask & 0x20) == 0) goto code_r0x0040875f;
    uVar5 = 0;
    if (1 < (int)adb_trace_severity._20_4_) goto code_r0x0040875f;
    cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
    uVar5 = 0;
    if (cVar3 == '\0') goto code_r0x0040875f;
    param_1 = (uint *)func_0x0099bce0();
    uVar1 = *param_1;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (&uStack_58,&UNK_00159712,0x1ec,1,0,0xffffffff);
    uVar5 = _ZN7android4base10LogMessage6streamEv(&uStack_58);
    func_0x0032eb30(uVar5,&UNK_001867a4,0x24);
    _ZN7android4base10LogMessageD2Ev(&uStack_58);
    uVar5 = 0;
    *param_1 = uVar1;
    goto code_r0x0040875f;
  }
  cVar3 = _ZN12LibUsbDevice14ClaimInterfaceEv(param_1);
  bVar6 = ((byte)adb_trace_mask & 0x20) == 0;
  if (cVar3 != '\0') {
    uVar5 = 1;
    if (1 < (int)adb_trace_severity._20_4_ || bVar6) goto code_r0x0040875f;
    cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
    if (cVar3 != '\0') goto code_r0x0040880a;
    while( true ) {
      uVar5 = 1;
code_r0x0040875f:
      if (*(long *)(in_FS_OFFSET + 0x28) == lStack_30) break;
      func_0x0099bd00();
code_r0x0040880a:
      puVar4 = (undefined4 *)func_0x0099bce0();
      uVar2 = *puVar4;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_38,&UNK_00159712,0x1f5,1,0,0xffffffff);
      uVar5 = _ZN7android4base10LogMessage6streamEv(auStack_38);
      uVar5 = func_0x0032eb30(uVar5,&UNK_0017726d,0x10);
      if ((param_1[10] & 1) == 0) {
        uStack_48 = *(undefined8 *)(param_1 + 0xe);
        uStack_58 = param_1[10];
        uStack_54 = param_1[0xb];
        uStack_50 = param_1[0xc];
        uStack_4c = param_1[0xd];
        param_1 = param_1 + 10;
      }
      else {
        func_0x00330340(&uStack_58,*(undefined8 *)(param_1 + 0xe),*(undefined8 *)(param_1 + 0xc));
      }
      func_0x0032e5a0(uVar5,&uStack_58);
      if ((uStack_58 & 1) != 0) {
        _ZdaPvSt11align_val_t(uStack_48,CONCAT44(uStack_54,uStack_58) & 0xfffffffffffffffe);
      }
      _ZN7android4base10LogMessageD2Ev(auStack_38);
      *puVar4 = uVar2;
    }
    return uVar5;
  }
  if (1 >= (int)adb_trace_severity._20_4_ && !bVar6) {
    cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
    uVar5 = 0;
    if (cVar3 == '\0') goto code_r0x0040875f;
    puVar4 = (undefined4 *)func_0x0099bce0();
    uVar2 = *puVar4;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (auStack_38,&UNK_00159712,0x1f1,1,0,0xffffffff);
    uVar5 = _ZN7android4base10LogMessage6streamEv(auStack_38);
    uVar5 = func_0x0032eb30(uVar5,&UNK_0015b257,0x1a);
    if ((param_1[10] & 1) == 0) {
      uStack_48 = *(undefined8 *)(param_1 + 0xe);
      uStack_58 = param_1[10];
      uStack_54 = param_1[0xb];
      uStack_50 = param_1[0xc];
      uStack_4c = param_1[0xd];
      param_1 = param_1 + 10;
    }
    else {
      func_0x00330340(&uStack_58,*(undefined8 *)(param_1 + 0xe),*(undefined8 *)(param_1 + 0xc));
    }
    func_0x0032e5a0(uVar5,&uStack_58);
    if ((uStack_58 & 1) != 0) {
      _ZdaPvSt11align_val_t(uStack_48,CONCAT44(uStack_54,uStack_58) & 0xfffffffffffffffe);
    }
    _ZN7android4base10LogMessageD2Ev(auStack_38);
    *puVar4 = uVar2;
  }
  uVar5 = 0;
  goto code_r0x0040875f;
}


