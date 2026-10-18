// Function: _ZN16LibUsbConnectionD1Ev
// Address: 00408b30
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN16LibUsbConnectionD1Ev(long *param_1)

{
  undefined4 uVar1;
  long lVar2;
  char cVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long in_FS_OFFSET;
  byte bStack_58;
  undefined7 uStack_57;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  *param_1 = 0x99f178;
  if (((((byte)adb_trace_mask & 0x20) != 0) && ((int)adb_trace_severity._20_4_ < 2)) &&
     (cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0), cVar3 != '\0')) {
    puVar4 = (undefined4 *)func_0x0099bce0();
    uVar1 = *puVar4;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (auStack_40,&UNK_0016b012,0x27,1,0,0xffffffff);
    uVar5 = _ZN7android4base10LogMessage6streamEv(auStack_40);
    uVar5 = func_0x0032eb30(uVar5,&UNK_001645c0,0x11);
    _ZNK10Connection6SerialEv(&bStack_58,param_1);
    uVar5 = func_0x0032e5a0(uVar5,&bStack_58);
    func_0x0032eb30(uVar5,&UNK_0017edf4,0xe);
    if ((bStack_58 & 1) != 0) {
      _ZdaPvSt11align_val_t(uStack_48,CONCAT71(uStack_57,bStack_58) & 0xfffffffffffffffe);
    }
    _ZN7android4base10LogMessageD2Ev(auStack_40);
    *puVar4 = uVar1;
  }
  (**(code **)(*param_1 + 0x20))(param_1);
  _ZNSt3__118condition_variableD2Ev(param_1 + 0x11);
  func_0x003f11f0(param_1 + 6);
  puVar9 = (undefined8 *)param_1[7];
  puVar8 = (undefined8 *)param_1[8];
  if (puVar9 != puVar8) {
    do {
      _ZdaPvSt11align_val_t(*puVar9,0x1000);
      puVar9 = puVar9 + 1;
    } while (puVar9 != puVar8);
    puVar9 = (undefined8 *)param_1[7];
    puVar8 = (undefined8 *)param_1[8];
  }
  param_1[8] = (long)puVar8 - ((long)puVar8 - (long)puVar9 & 0xfffffffffffffff8U);
  lVar2 = param_1[6];
  if (lVar2 != 0) {
    _ZdaPvSt11align_val_t(lVar2,param_1[9] - lVar2);
  }
  _ZNSt3__16threadD2Ev(param_1 + 5);
  plVar6 = param_1 + 4;
  _ZNSt3__16threadD2Ev(plVar6);
  plVar7 = (long *)param_1[3];
  param_1[3] = 0;
  if (plVar7 != (long *)0x0) {
    _ZN12LibUsbDeviceD1Ev(plVar7);
    _ZdaPvSt11align_val_t(plVar7,0x70);
    plVar6 = plVar7;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) != lStack_38) {
    func_0x0099bd00();
    _ZN16LibUsbConnectionD1Ev();
    free(plVar6,0xc0);
    return;
  }
  return;
}


