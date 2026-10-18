// Function: _ZN13UsbConnectionD1Ev
// Address: 004129d0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 _ZN13UsbConnectionD1Ev(undefined8 *param_1)

{
  undefined4 uVar1;
  ulong *puVar2;
  char cVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long in_FS_OFFSET;
  byte bStack_60;
  undefined7 uStack_5f;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  ulong *puStack_40;
  long lStack_38;
  
  *param_1 = 0x99f350;
  lVar6 = lRam0000000000a008a0;
  puStack_40 = (ulong *)param_1[1];
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  _ZNSt3__15mutex4lockEv(lRam0000000000a008a0);
  func_0x003f0c30(uRam0000000000a008a8,&puStack_40);
  if ((((byte)adb_trace_mask & 0x20) != 0) && ((int)adb_trace_severity._20_4_ < 2)) {
    cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
    if (cVar3 != '\0') {
      puVar4 = (undefined4 *)func_0x0099bce0();
      uVar1 = *puVar4;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_48,&UNK_0016974f,0x215,1,0,0xffffffff);
      uVar5 = _ZN7android4base10LogMessage6streamEv(auStack_48);
      _ZN7android4base12StringPrintfEPKcz(&bStack_60,&UNK_0015c986,puStack_40,(int)puStack_40[3]);
      func_0x0032e5a0(uVar5,&bStack_60);
      if ((bStack_60 & 1) != 0) {
        _ZdaPvSt11align_val_t(uStack_50,CONCAT71(uStack_5f,bStack_60) & 0xfffffffffffffffe);
      }
      _ZN7android4base10LogMessageD2Ev(auStack_48);
      *puVar4 = uVar1;
    }
  }
  puVar2 = puStack_40;
  if (puStack_40 != (ulong *)0x0) {
    if ((int)puStack_40[3] != -1) {
      func_0x0099bd10();
    }
    _ZNSt3__118condition_variableD2Ev(puVar2 + 0x15);
    if ((*puVar2 & 1) != 0) {
      _ZdaPvSt11align_val_t(puVar2[2],*puVar2 & 0xfffffffffffffffe);
    }
    _ZdaPvSt11align_val_t(puVar2,0x110);
  }
  _ZNSt3__115recursive_mutex6unlockEv();
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return 0;
  }
  func_0x0099bd00();
  return *(undefined8 *)(lVar6 + 0x20);
}


