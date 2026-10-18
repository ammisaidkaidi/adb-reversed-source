// Function: _ZN25BlockingConnectionAdapterD1Ev
// Address: 003e3c40
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN25BlockingConnectionAdapterD1Ev(undefined8 *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  char cVar4;
  uint *puVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long *plVar10;
  long *plVar11;
  byte *unaff_R12;
  ulong unaff_R13;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *puVar14;
  long in_FS_OFFSET;
  long *plStack_c8;
  long lStack_c0;
  long lStack_b8;
  long **applStack_b0 [2];
  undefined8 uStack_a0;
  long ***ppplStack_98;
  long lStack_90;
  undefined8 *puStack_88;
  byte *pbStack_80;
  ulong uStack_78;
  long lStack_70;
  undefined8 *puStack_68;
  undefined *puStack_60;
  byte bStack_58;
  undefined7 uStack_57;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  *param_1 = 0x99ec70;
  if ((((byte)adb_trace_mask & 1) != 0) && ((int)adb_trace_severity._0_4_ < 2)) {
    puStack_60 = &UNK_003e3d5b;
    cVar4 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
    if (cVar4 != '\0') {
      puStack_60 = &UNK_003e3d68;
      puVar5 = (uint *)func_0x0099bce0();
      uVar1 = *puVar5;
      unaff_R13 = (ulong)uVar1;
      puStack_60 = &UNK_003e3d94;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_40,&UNK_0017a1e0,0x132,1,0,0xffffffff);
      puStack_60 = &UNK_003e3d9c;
      uVar7 = _ZN7android4base10LogMessage6streamEv(auStack_40);
      puStack_60 = &UNK_003e3db0;
      uVar7 = func_0x0032eb30(uVar7,&UNK_0016ebd7,0x1a);
      unaff_R12 = &bStack_58;
      puStack_60 = &UNK_003e3dc2;
      _ZNK10Connection6SerialEv(unaff_R12,param_1);
      puStack_60 = &UNK_003e3dcd;
      uVar7 = func_0x0032e5a0(uVar7,unaff_R12);
      puStack_60 = &UNK_003e3de1;
      func_0x0032eb30(uVar7,&UNK_0017edf4,0xe);
      if ((bStack_58 & 1) != 0) {
        puStack_60 = &UNK_003e3df8;
        _ZdaPvSt11align_val_t(uStack_48,CONCAT71(uStack_57,bStack_58) & 0xfffffffffffffffe);
      }
      puStack_60 = &UNK_003e3e01;
      _ZN7android4base10LogMessageD2Ev(auStack_40);
      *puVar5 = uVar1;
    }
  }
  puStack_60 = &UNK_003e3c93;
  _ZN25BlockingConnectionAdapter4StopEv(param_1);
  puStack_60 = &UNK_003e3c9f;
  _ZNSt3__118condition_variableD2Ev(param_1 + 0x11);
  puStack_60 = &UNK_003e3ca8;
  func_0x003f11f0(param_1 + 6);
  puVar14 = (undefined8 *)param_1[7];
  puVar12 = (undefined8 *)param_1[8];
  if (puVar14 != puVar12) {
    do {
      puStack_60 = &UNK_003e3ccd;
      _ZdaPvSt11align_val_t(*puVar14,0x1000);
      puVar14 = puVar14 + 1;
    } while (puVar14 != puVar12);
    puVar14 = (undefined8 *)param_1[7];
    puVar12 = (undefined8 *)param_1[8];
  }
  lVar13 = (long)puVar12 - ((long)puVar12 - (long)puVar14 & 0xfffffffffffffff8U);
  param_1[8] = lVar13;
  lVar3 = param_1[6];
  if (lVar3 != 0) {
    puStack_60 = &UNK_003e3d04;
    _ZdaPvSt11align_val_t(lVar3,param_1[9] - lVar3);
  }
  puStack_60 = &UNK_003e3d0d;
  _ZNSt3__16threadD2Ev(param_1 + 5);
  puStack_60 = &UNK_003e3d16;
  _ZNSt3__16threadD2Ev(param_1 + 4);
  plVar10 = (long *)param_1[3];
  param_1[3] = 0;
  if (plVar10 != (long *)0x0) {
    puStack_60 = &UNK_003e3d2d;
    (**(code **)(*plVar10 + 8))();
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return;
  }
  puStack_60 = &UNK_003e3e0e;
  func_0x0099bd00();
  lStack_90 = *(long *)(in_FS_OFFSET + 0x28);
  plVar11 = plVar10 + 0xc;
  puStack_88 = param_1;
  pbStack_80 = unaff_R12;
  uStack_78 = unaff_R13;
  lStack_70 = lVar13;
  puStack_68 = puVar14;
  puStack_60 = &stack0xfffffffffffffff8;
  _ZNSt3__15mutex4lockEv(plVar11);
  if ((char)plVar10[2] == '\0') {
    if (((((byte)adb_trace_mask & 1) != 0) && ((int)adb_trace_severity._0_4_ < 2)) &&
       (cVar4 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0), cVar4 != '\0')) {
      puVar6 = (undefined4 *)func_0x0099bce0();
      uVar2 = *puVar6;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&ppplStack_98,&UNK_0017a1e0,0x198,1,0,0xffffffff);
      uVar7 = _ZN7android4base10LogMessage6streamEv(&ppplStack_98);
      uVar7 = func_0x0032eb30(uVar7,&UNK_0016ebd7,0x1a);
      _ZNK10Connection6SerialEv(applStack_b0,plVar10);
      uVar7 = func_0x0032e5a0(uVar7,applStack_b0);
      puVar9 = &UNK_00165fda;
      uVar8 = 0xe;
code_r0x003e40ba:
      func_0x0032eb30(uVar7,puVar9,uVar8);
      if (((ulong)applStack_b0[0] & 1) != 0) {
        _ZdaPvSt11align_val_t(uStack_a0,(ulong)applStack_b0[0] & 0xfffffffffffffffe);
      }
      _ZN7android4base10LogMessageD2Ev(&ppplStack_98);
      *puVar6 = uVar2;
    }
  }
  else {
    if (*(char *)((long)plVar10 + 0x11) != '\x01') {
      *(undefined1 *)((long)plVar10 + 0x11) = 1;
      _ZNSt3__115recursive_mutex6unlockEv(plVar11);
      if (((((byte)adb_trace_mask & 1) != 0) && ((int)adb_trace_severity._0_4_ < 2)) &&
         (cVar4 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0), cVar4 != '\0')) {
        puVar6 = (undefined4 *)func_0x0099bce0();
        uVar2 = *puVar6;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (&ppplStack_98,&UNK_0017a1e0,0x1a4,1,0,0xffffffff);
        uVar7 = _ZN7android4base10LogMessage6streamEv(&ppplStack_98);
        uVar7 = func_0x0032eb30(uVar7,&UNK_0016ebd7,0x1a);
        _ZNK10Connection6SerialEv(applStack_b0,plVar10);
        uVar7 = func_0x0032e5a0(uVar7,applStack_b0);
        func_0x0032eb30(uVar7,&UNK_00183504,0xb);
        if (((ulong)applStack_b0[0] & 1) != 0) {
          _ZdaPvSt11align_val_t(uStack_a0,(ulong)applStack_b0[0] & 0xfffffffffffffffe);
        }
        _ZN7android4base10LogMessageD2Ev(&ppplStack_98);
        *puVar6 = uVar2;
      }
      (**(code **)(*(long *)plVar10[3] + 0x28))();
      _ZNSt3__118condition_variable10notify_oneEv(plVar10 + 0x11);
      _ZNSt3__15mutex4lockEv(plVar11);
      lStack_b8 = plVar10[4];
      plVar10[4] = 0;
      lStack_c0 = plVar10[5];
      plVar10[5] = 0;
      _ZNSt3__115recursive_mutex6unlockEv(plVar11);
      _ZNSt3__16thread4joinEv(&lStack_b8);
      _ZNSt3__16thread4joinEv(&lStack_c0);
      if (((((byte)adb_trace_mask & 1) != 0) && ((int)adb_trace_severity._0_4_ < 2)) &&
         (cVar4 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0), cVar4 != '\0')) {
        puVar6 = (undefined4 *)func_0x0099bce0();
        uVar2 = *puVar6;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (&ppplStack_98,&UNK_0017a1e0,0x1b6,1,0,0xffffffff);
        uVar7 = _ZN7android4base10LogMessage6streamEv(&ppplStack_98);
        uVar7 = func_0x0032eb30(uVar7,&UNK_0016ebd7,0x1a);
        _ZNK10Connection6SerialEv(applStack_b0,plVar10);
        uVar7 = func_0x0032e5a0(uVar7,applStack_b0);
        func_0x0032eb30(uVar7,&UNK_0017bb54,10);
        if (((ulong)applStack_b0[0] & 1) != 0) {
          _ZdaPvSt11align_val_t(uStack_a0,(ulong)applStack_b0[0] & 0xfffffffffffffffe);
        }
        _ZN7android4base10LogMessageD2Ev(&ppplStack_98);
        *puVar6 = uVar2;
      }
      plStack_c8 = plVar10;
      if (plVar10[0x17] != -1) {
        applStack_b0[0] = &plStack_c8;
        ppplStack_98 = applStack_b0;
        _ZNSt3__111__call_onceERVmPvPFvS2_E(plVar10 + 0x17,&ppplStack_98,&UNK_003ef330);
      }
      _ZNSt3__16threadD2Ev(&lStack_c0);
      plVar11 = &lStack_b8;
      _ZNSt3__16threadD2Ev(plVar11);
      goto code_r0x003e400c;
    }
    if (((((byte)adb_trace_mask & 1) != 0) && ((int)adb_trace_severity._0_4_ < 2)) &&
       (cVar4 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0), cVar4 != '\0')) {
      puVar6 = (undefined4 *)func_0x0099bce0();
      uVar2 = *puVar6;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&ppplStack_98,&UNK_0017a1e0,0x19d,1,0,0xffffffff);
      uVar7 = _ZN7android4base10LogMessage6streamEv(&ppplStack_98);
      uVar7 = func_0x0032eb30(uVar7,&UNK_0016ebd7,0x1a);
      _ZNK10Connection6SerialEv(applStack_b0,plVar10);
      uVar7 = func_0x0032e5a0(uVar7,applStack_b0);
      puVar9 = &UNK_00170679;
      uVar8 = 0x12;
      goto code_r0x003e40ba;
    }
  }
  _ZNSt3__115recursive_mutex6unlockEv(plVar11);
code_r0x003e400c:
  if (*(long *)(in_FS_OFFSET + 0x28) != lStack_90) {
    func_0x0099bd00();
    _ZN25BlockingConnectionAdapterD1Ev();
    free(plVar11,0xc0);
    return;
  }
  return;
}


