// Function: _Z18init_usb_transportP10atransportP10usb_handle
// Address: 004133f0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long _Z18init_usb_transportP10atransportP10usb_handle(long param_1,long param_2)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  long *plVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  long in_FS_OFFSET;
  undefined1 auVar10 [12];
  long lStack_50;
  long *plStack_48;
  long *plStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  if ((((byte)adb_trace_mask & 8) != 0) && ((int)adb_trace_severity._12_4_ < 2)) {
    cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
    if (cVar3 != '\0') {
      puVar6 = (undefined4 *)func_0x0099bce0();
      uVar2 = *puVar6;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&plStack_40,&UNK_00181cdb,0xa5,1,0,0xffffffff);
      uVar7 = _ZN7android4base10LogMessage6streamEv(&plStack_40);
      func_0x0032eb30(uVar7,&UNK_0016b05d,0xe);
      _ZN7android4base10LogMessageD2Ev(&plStack_40);
      *puVar6 = uVar2;
    }
  }
  plVar4 = (long *)_Znwm(0x10);
  *plVar4 = 0x99f350;
  plVar4[1] = param_2;
  lVar5 = _Znwm(0xc0);
  plStack_40 = plVar4;
  _ZN25BlockingConnectionAdapterC1ENSt3__110unique_ptrI18BlockingConnectionNS0_14default_deleteIS2_EEEE
            (lVar5,&plStack_40);
  plVar4 = plStack_40;
  plStack_40 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  lStack_50 = lVar5;
  plStack_48 = (long *)_Znwm(0x20);
  plStack_48[1] = 0;
  plStack_48[2] = 0;
  *plStack_48 = 0x99f240;
  plStack_48[3] = lVar5;
  iVar8 = (int)&lStack_50;
  lVar5 = param_1;
  _ZN10atransport13SetConnectionENSt3__110shared_ptrI10ConnectionEE();
  plVar4 = plStack_48;
  iVar9 = (int)lVar5;
  if (plStack_48 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_48 + 1;
    lVar5 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar5 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      _ZNSt3__119__shared_weak_count14__release_weakEv();
      iVar9 = (int)plVar4;
    }
  }
  *(long *)(param_1 + 0x168) = param_2;
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return *(long *)(in_FS_OFFSET + 0x28);
  }
  auVar10 = func_0x0099bd00();
  if ((auVar10._8_4_ != 1) ||
     ((lVar5 = 1, iVar8 != 0x42 || iVar9 != 0xff && (iVar8 != 2 || iVar9 != 0xdc)))) {
    lVar5 = 0;
  }
  return lVar5;
}


