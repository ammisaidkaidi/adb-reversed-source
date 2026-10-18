// Function: _ZN25BlockingConnectionAdapter4StopEv
// Address: 003e3e10
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN25BlockingConnectionAdapter4StopEv(long param_1)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long in_FS_OFFSET;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long *aplStack_58 [2];
  undefined8 uStack_48;
  undefined8 **ppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  puVar7 = (undefined8 *)(param_1 + 0x60);
  _ZNSt3__15mutex4lockEv(puVar7);
  if (*(char *)(param_1 + 0x10) == '\0') {
    if ((((byte)adb_trace_mask & 1) != 0) && ((int)adb_trace_severity._0_4_ < 2)) {
      cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
      if (cVar2 != '\0') {
        puVar3 = (undefined4 *)func_0x0099bce0();
        uVar1 = *puVar3;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (&ppuStack_40,&UNK_0017a1e0,0x198,1,0,0xffffffff);
        uVar4 = _ZN7android4base10LogMessage6streamEv(&ppuStack_40);
        uVar4 = func_0x0032eb30(uVar4,&UNK_0016ebd7,0x1a);
        _ZNK10Connection6SerialEv(aplStack_58,param_1);
        uVar4 = func_0x0032e5a0(uVar4,aplStack_58);
        puVar6 = &UNK_00165fda;
        uVar5 = 0xe;
code_r0x003e40ba:
        func_0x0032eb30(uVar4,puVar6,uVar5);
        if (((ulong)aplStack_58[0] & 1) != 0) {
          _ZdaPvSt11align_val_t(uStack_48,(ulong)aplStack_58[0] & 0xfffffffffffffffe);
        }
        _ZN7android4base10LogMessageD2Ev(&ppuStack_40);
        *puVar3 = uVar1;
      }
    }
  }
  else {
    if (*(char *)(param_1 + 0x11) != '\x01') {
      *(undefined1 *)(param_1 + 0x11) = 1;
      _ZNSt3__115recursive_mutex6unlockEv(puVar7);
      if ((((byte)adb_trace_mask & 1) != 0) && ((int)adb_trace_severity._0_4_ < 2)) {
        cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
        if (cVar2 != '\0') {
          puVar3 = (undefined4 *)func_0x0099bce0();
          uVar1 = *puVar3;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (&ppuStack_40,&UNK_0017a1e0,0x1a4,1,0,0xffffffff);
          uVar4 = _ZN7android4base10LogMessage6streamEv(&ppuStack_40);
          uVar4 = func_0x0032eb30(uVar4,&UNK_0016ebd7,0x1a);
          _ZNK10Connection6SerialEv(aplStack_58,param_1);
          uVar4 = func_0x0032e5a0(uVar4,aplStack_58);
          func_0x0032eb30(uVar4,&UNK_00183504,0xb);
          if (((ulong)aplStack_58[0] & 1) != 0) {
            _ZdaPvSt11align_val_t(uStack_48,(ulong)aplStack_58[0] & 0xfffffffffffffffe);
          }
          _ZN7android4base10LogMessageD2Ev(&ppuStack_40);
          *puVar3 = uVar1;
        }
      }
      (**(code **)(**(long **)(param_1 + 0x18) + 0x28))();
      _ZNSt3__118condition_variable10notify_oneEv(param_1 + 0x88);
      _ZNSt3__15mutex4lockEv(puVar7);
      uStack_60 = *(undefined8 *)(param_1 + 0x20);
      *(undefined8 *)(param_1 + 0x20) = 0;
      uStack_68 = *(undefined8 *)(param_1 + 0x28);
      *(undefined8 *)(param_1 + 0x28) = 0;
      _ZNSt3__115recursive_mutex6unlockEv(puVar7);
      _ZNSt3__16thread4joinEv(&uStack_60);
      _ZNSt3__16thread4joinEv(&uStack_68);
      if ((((byte)adb_trace_mask & 1) != 0) && ((int)adb_trace_severity._0_4_ < 2)) {
        cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
        if (cVar2 != '\0') {
          puVar3 = (undefined4 *)func_0x0099bce0();
          uVar1 = *puVar3;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (&ppuStack_40,&UNK_0017a1e0,0x1b6,1,0,0xffffffff);
          uVar4 = _ZN7android4base10LogMessage6streamEv(&ppuStack_40);
          uVar4 = func_0x0032eb30(uVar4,&UNK_0016ebd7,0x1a);
          _ZNK10Connection6SerialEv(aplStack_58,param_1);
          uVar4 = func_0x0032e5a0(uVar4,aplStack_58);
          func_0x0032eb30(uVar4,&UNK_0017bb54,10);
          if (((ulong)aplStack_58[0] & 1) != 0) {
            _ZdaPvSt11align_val_t(uStack_48,(ulong)aplStack_58[0] & 0xfffffffffffffffe);
          }
          _ZN7android4base10LogMessageD2Ev(&ppuStack_40);
          *puVar3 = uVar1;
        }
      }
      lStack_70 = param_1;
      if (*(long *)(param_1 + 0xb8) != -1) {
        aplStack_58[0] = &lStack_70;
        ppuStack_40 = aplStack_58;
        _ZNSt3__111__call_onceERVmPvPFvS2_E(param_1 + 0xb8,&ppuStack_40,&UNK_003ef330);
      }
      _ZNSt3__16threadD2Ev(&uStack_68);
      puVar7 = &uStack_60;
      _ZNSt3__16threadD2Ev(puVar7);
      goto code_r0x003e400c;
    }
    if ((((byte)adb_trace_mask & 1) != 0) && ((int)adb_trace_severity._0_4_ < 2)) {
      cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
      if (cVar2 != '\0') {
        puVar3 = (undefined4 *)func_0x0099bce0();
        uVar1 = *puVar3;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (&ppuStack_40,&UNK_0017a1e0,0x19d,1,0,0xffffffff);
        uVar4 = _ZN7android4base10LogMessage6streamEv(&ppuStack_40);
        uVar4 = func_0x0032eb30(uVar4,&UNK_0016ebd7,0x1a);
        _ZNK10Connection6SerialEv(aplStack_58,param_1);
        uVar4 = func_0x0032e5a0(uVar4,aplStack_58);
        puVar6 = &UNK_00170679;
        uVar5 = 0x12;
        goto code_r0x003e40ba;
      }
    }
  }
  _ZNSt3__115recursive_mutex6unlockEv(puVar7);
code_r0x003e400c:
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return;
  }
  func_0x0099bd00();
  _ZN25BlockingConnectionAdapterD1Ev();
  free(puVar7,0xc0);
  return;
}


