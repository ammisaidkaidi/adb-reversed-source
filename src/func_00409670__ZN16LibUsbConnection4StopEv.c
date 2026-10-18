// Function: _ZN16LibUsbConnection4StopEv
// Address: 00409670
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long _ZN16LibUsbConnection4StopEv(long param_1)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  byte *pbVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long in_FS_OFFSET;
  undefined8 uStack_60;
  byte bStack_58;
  undefined6 uStack_57;
  undefined1 uStack_51;
  undefined1 uStack_50;
  undefined6 uStack_4f;
  undefined1 uStack_49;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  puVar9 = (undefined8 *)(param_1 + 0x60);
  _ZNSt3__15mutex4lockEv(puVar9);
  if (*(char *)(param_1 + 0x11) == '\0') {
    pbVar7 = (byte *)0x0;
    cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(2);
    if (cVar2 != '\0') {
      puVar3 = (undefined4 *)func_0x0099bce0();
      uVar1 = *puVar3;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&uStack_40,&UNK_0016b012,0x9f,2,0,0xffffffff);
      uVar4 = _ZN7android4base10LogMessage6streamEv(&uStack_40);
      uVar4 = func_0x0032eb30(uVar4,&UNK_001645c0,0x11);
      _ZNK10Connection6SerialEv(&bStack_58,param_1);
      uVar4 = func_0x0032e5a0(uVar4,&bStack_58);
      pbVar7 = &UNK_00181c96;
      func_0x0032eb30(uVar4,&UNK_00181c96,0x13);
      if ((bStack_58 & 1) != 0) {
        pbVar7 = (byte *)(CONCAT17(uStack_51,CONCAT61(uStack_57,bStack_58)) & 0xfffffffffffffffe);
        _ZdaPvSt11align_val_t(uStack_48);
      }
      _ZN7android4base10LogMessageD2Ev(&uStack_40);
      *puVar3 = uVar1;
    }
    _ZNSt3__115recursive_mutex6unlockEv();
  }
  else {
    *(undefined1 *)(param_1 + 0x11) = 0;
    _ZNSt3__115recursive_mutex6unlockEv(puVar9);
    cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(2,0);
    if (cVar2 != '\0') {
      puVar3 = (undefined4 *)func_0x0099bce0();
      uVar1 = *puVar3;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&uStack_40,&UNK_0016b012,0xa6,2,0,0xffffffff);
      uVar4 = _ZN7android4base10LogMessage6streamEv(&uStack_40);
      uVar4 = func_0x0032eb30(uVar4,&UNK_001645c0,0x11);
      _ZNK10Connection6SerialEv(&bStack_58,param_1);
      uVar4 = func_0x0032e5a0(uVar4,&bStack_58);
      func_0x0032eb30(uVar4,&UNK_00183504,0xb);
      if ((bStack_58 & 1) != 0) {
        _ZdaPvSt11align_val_t
                  (uStack_48,CONCAT17(uStack_51,CONCAT61(uStack_57,bStack_58)) & 0xfffffffffffffffe)
        ;
      }
      _ZN7android4base10LogMessageD2Ev(&uStack_40);
      *puVar3 = uVar1;
    }
    _ZN12LibUsbDevice5CloseEv(*(undefined8 *)(param_1 + 0x18));
    _ZNSt3__118condition_variable10notify_oneEv(param_1 + 0x88);
    _ZNSt3__15mutex4lockEv(puVar9);
    uStack_40 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = 0;
    uStack_60 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = 0;
    _ZNSt3__115recursive_mutex6unlockEv(puVar9);
    _ZNSt3__16thread4joinEv(&uStack_40);
    _ZNSt3__16thread4joinEv(&uStack_60);
    bStack_58 = 0x1c;
    uStack_57 = 0x7220706f7473;
    uStack_51 = 0x65;
    uStack_50 = 0x71;
    uStack_4f = 0x646574736575;
    uStack_49 = 0;
    pbVar7 = &bStack_58;
    _ZN16LibUsbConnection10HandleStopERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
              (param_1);
    if ((bStack_58 & 1) != 0) {
      pbVar7 = (byte *)(CONCAT17(uStack_51,CONCAT61(uStack_57,bStack_58)) & 0xfffffffffffffffe);
      _ZdaPvSt11align_val_t(uStack_48);
    }
    _ZNSt3__15mutex4lockEv(puVar9);
    func_0x003f11f0(param_1 + 0x30);
    _ZNSt3__115recursive_mutex6unlockEv(puVar9);
    _ZNSt3__16threadD2Ev(&uStack_60);
    puVar9 = &uStack_40;
    _ZNSt3__16threadD2Ev();
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return *(long *)(in_FS_OFFSET + 0x28);
  }
  func_0x0099bd00();
  _ZNSt3__15mutex4lockEv(puVar9 + 0xc);
  lVar5 = puVar9[7];
  uVar8 = 0;
  if (puVar9[8] != lVar5) {
    uVar8 = (puVar9[8] - lVar5) * 0x40 - 1;
  }
  uVar6 = puVar9[0xb] + puVar9[10];
  if (uVar8 == uVar6) {
    func_0x003f1340(puVar9 + 6);
    lVar5 = puVar9[7];
    uVar6 = puVar9[10] + puVar9[0xb];
  }
  lVar5 = *(long *)(lVar5 + (uVar6 >> 9) * 8);
  pbVar7[0] = 0;
  pbVar7[1] = 0;
  pbVar7[2] = 0;
  pbVar7[3] = 0;
  pbVar7[4] = 0;
  pbVar7[5] = 0;
  pbVar7[6] = 0;
  pbVar7[7] = 0;
  *(undefined8 *)(lVar5 + (ulong)((uint)uVar6 & 0x1ff) * 8) = *(undefined8 *)pbVar7;
  puVar9[0xb] = puVar9[0xb] + 1;
  _ZNSt3__115recursive_mutex6unlockEv(puVar9 + 0xc);
  _ZNSt3__118condition_variable10notify_oneEv(puVar9 + 0x11);
  return 1;
}


