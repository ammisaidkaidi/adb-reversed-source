// Function: _ZN25BlockingConnectionAdapter5ResetEv
// Address: 003e4560
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long _ZN25BlockingConnectionAdapter5ResetEv(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long in_FS_OFFSET;
  undefined4 uStack_5c;
  byte bStack_58;
  undefined7 uStack_57;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  lVar5 = param_1 + 0x60;
  _ZNSt3__15mutex4lockEv(lVar5);
  if (*(char *)(param_1 + 0x10) == '\0') {
    if ((((byte)adb_trace_mask & 1) != 0) && ((int)adb_trace_severity._0_4_ < 2)) {
      param_2 = (undefined8 *)0x0;
      cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1);
      if (cVar2 != '\0') {
        puVar3 = (undefined4 *)func_0x0099bce0();
        uStack_5c = *puVar3;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (auStack_40,&UNK_0017a1e0,0x185,1,0,0xffffffff);
        uVar4 = _ZN7android4base10LogMessage6streamEv(auStack_40);
        uVar4 = func_0x0032eb30(uVar4,&UNK_0016ebd7,0x1a);
        _ZNK10Connection6SerialEv(&bStack_58,param_1);
        uVar4 = func_0x0032e5a0(uVar4,&bStack_58);
        param_2 = (undefined8 *)&UNK_00165fda;
        uVar7 = 0xe;
code_r0x003e4754:
        func_0x0032eb30(uVar4,param_2,uVar7);
        if ((bStack_58 & 1) != 0) {
          param_2 = (undefined8 *)(CONCAT71(uStack_57,bStack_58) & 0xfffffffffffffffe);
          _ZdaPvSt11align_val_t(uStack_48);
        }
        _ZN7android4base10LogMessageD2Ev(auStack_40);
        *puVar3 = uStack_5c;
      }
    }
  }
  else {
    if (*(char *)(param_1 + 0x11) != '\x01') {
      _ZNSt3__115recursive_mutex6unlockEv(lVar5);
      if ((((byte)adb_trace_mask & 1) != 0) && ((int)adb_trace_severity._0_4_ < 2)) {
        param_2 = (undefined8 *)0x0;
        cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1);
        if (cVar2 != '\0') {
          puVar3 = (undefined4 *)func_0x0099bce0();
          uVar1 = *puVar3;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (auStack_40,&UNK_0017a1e0,399,1,0,0xffffffff);
          uVar4 = _ZN7android4base10LogMessage6streamEv(auStack_40);
          uVar4 = func_0x0032eb30(uVar4,&UNK_0016ebd7,0x1a);
          _ZNK10Connection6SerialEv(&bStack_58,param_1);
          uVar4 = func_0x0032e5a0(uVar4,&bStack_58);
          param_2 = (undefined8 *)&UNK_00181b8e;
          func_0x0032eb30(uVar4,&UNK_00181b8e,0xc);
          if ((bStack_58 & 1) != 0) {
            param_2 = (undefined8 *)(CONCAT71(uStack_57,bStack_58) & 0xfffffffffffffffe);
            _ZdaPvSt11align_val_t(uStack_48);
          }
          _ZN7android4base10LogMessageD2Ev(auStack_40);
          *puVar3 = uVar1;
        }
      }
      (**(code **)(**(long **)(param_1 + 0x18) + 0x30))();
      _ZN25BlockingConnectionAdapter4StopEv();
      goto code_r0x003e46aa;
    }
    if ((((byte)adb_trace_mask & 1) != 0) && ((int)adb_trace_severity._0_4_ < 2)) {
      param_2 = (undefined8 *)0x0;
      cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1);
      if (cVar2 != '\0') {
        puVar3 = (undefined4 *)func_0x0099bce0();
        uStack_5c = *puVar3;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (auStack_40,&UNK_0017a1e0,0x18a,1,0,0xffffffff);
        uVar4 = _ZN7android4base10LogMessage6streamEv(auStack_40);
        uVar4 = func_0x0032eb30(uVar4,&UNK_0016ebd7,0x1a);
        _ZNK10Connection6SerialEv(&bStack_58,param_1);
        uVar4 = func_0x0032e5a0(uVar4,&bStack_58);
        param_2 = (undefined8 *)&UNK_00170679;
        uVar7 = 0x12;
        goto code_r0x003e4754;
      }
    }
  }
  _ZNSt3__115recursive_mutex6unlockEv();
  param_1 = lVar5;
code_r0x003e46aa:
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return *(long *)(in_FS_OFFSET + 0x28);
  }
  func_0x0099bd00();
  _ZNSt3__15mutex4lockEv(param_1 + 0x60);
  lVar5 = *(long *)(param_1 + 0x38);
  uVar8 = 0;
  if (*(long *)(param_1 + 0x40) != lVar5) {
    uVar8 = (*(long *)(param_1 + 0x40) - lVar5) * 0x40 - 1;
  }
  uVar6 = *(long *)(param_1 + 0x58) + *(long *)(param_1 + 0x50);
  if (uVar8 == uVar6) {
    func_0x003f1340(param_1 + 0x30);
    lVar5 = *(long *)(param_1 + 0x38);
    uVar6 = *(long *)(param_1 + 0x50) + *(long *)(param_1 + 0x58);
  }
  lVar5 = *(long *)(lVar5 + (uVar6 >> 9) * 8);
  uVar4 = *param_2;
  *param_2 = 0;
  *(undefined8 *)(lVar5 + (ulong)((uint)uVar6 & 0x1ff) * 8) = uVar4;
  *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x58) + 1;
  _ZNSt3__115recursive_mutex6unlockEv(param_1 + 0x60);
  _ZNSt3__118condition_variable10notify_oneEv(param_1 + 0x88);
  return 1;
}


