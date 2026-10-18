// Function: _ZN16LibUsbConnection5ResetEv
// Address: 00409470
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long _ZN16LibUsbConnection5ResetEv(uint *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  char cVar3;
  uint *puVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  byte *pbVar9;
  ulong uVar10;
  uint *puVar11;
  uint *puVar12;
  byte *unaff_R12;
  byte *unaff_R13;
  undefined4 *unaff_R15;
  long in_FS_OFFSET;
  undefined8 uStack_c8;
  byte bStack_c0;
  undefined6 uStack_bf;
  undefined1 uStack_b9;
  undefined1 uStack_b8;
  undefined6 uStack_b7;
  undefined1 uStack_b1;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  uint *puStack_98;
  byte *pbStack_90;
  byte *pbStack_88;
  uint *puStack_80;
  undefined4 *puStack_78;
  undefined *puStack_70;
  undefined4 uStack_5c;
  byte abStack_58 [16];
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  puVar4 = param_1 + 0x18;
  puStack_70 = &UNK_0040949d;
  _ZNSt3__15mutex4lockEv(puVar4);
  if (*(char *)((long)param_1 + 0x11) == '\0') {
    puStack_70 = &UNK_004094db;
    cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(2);
    if (cVar3 != '\0') {
      puStack_70 = &UNK_004095b8;
      unaff_R15 = (undefined4 *)func_0x0099bce0();
      uStack_5c = *unaff_R15;
      puStack_70 = &UNK_004095e6;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_40,&UNK_0016b012,0x90,2,0,0xffffffff);
      puStack_70 = &UNK_004095ee;
      uVar6 = _ZN7android4base10LogMessage6streamEv(auStack_40);
      puStack_70 = &UNK_00409602;
      unaff_R12 = (byte *)func_0x0032eb30(uVar6,&UNK_001645c0,0x11);
      unaff_R13 = abStack_58;
      puStack_70 = &UNK_00409614;
      _ZNK10Connection6SerialEv(unaff_R13,param_1);
      puStack_70 = &UNK_0040961f;
      uVar6 = func_0x0032e5a0(unaff_R12,unaff_R13);
      puStack_70 = &UNK_00409633;
      func_0x0032eb30(uVar6,&UNK_00178bf3,0xe);
      if ((abStack_58[0] & 1) != 0) {
        puStack_70 = &UNK_0040964a;
        _ZdaPvSt11align_val_t(uStack_48);
      }
      puStack_70 = &UNK_00409653;
      _ZN7android4base10LogMessageD2Ev(auStack_40);
      *unaff_R15 = uStack_5c;
    }
    puStack_70 = &UNK_004094eb;
    puVar11 = puVar4;
    _ZNSt3__115recursive_mutex6unlockEv();
  }
  else {
    puStack_70 = &UNK_004094ab;
    _ZNSt3__115recursive_mutex6unlockEv(puVar4);
    puStack_70 = &UNK_004094b7;
    cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(2);
    if (cVar3 != '\0') {
      puStack_70 = &UNK_00409512;
      puVar4 = (uint *)func_0x0099bce0();
      uVar1 = *puVar4;
      unaff_R13 = (byte *)(ulong)uVar1;
      puStack_70 = &UNK_0040953e;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_40,&UNK_0016b012,0x95,2,0,0xffffffff);
      puStack_70 = &UNK_00409546;
      uVar6 = _ZN7android4base10LogMessage6streamEv(auStack_40);
      puStack_70 = &UNK_0040955a;
      unaff_R15 = (undefined4 *)func_0x0032eb30(uVar6,&UNK_001645c0,0x11);
      unaff_R12 = abStack_58;
      puStack_70 = &UNK_0040956c;
      _ZNK10Connection6SerialEv(unaff_R12,param_1);
      puStack_70 = &UNK_00409577;
      uVar6 = func_0x0032e5a0(unaff_R15,unaff_R12);
      puStack_70 = &UNK_0040958b;
      func_0x0032eb30(uVar6,&UNK_001696d0,8);
      if ((abStack_58[0] & 1) != 0) {
        puStack_70 = &UNK_004095a2;
        _ZdaPvSt11align_val_t(uStack_48);
      }
      puStack_70 = &UNK_004095ab;
      _ZN7android4base10LogMessageD2Ev(auStack_40);
      *puVar4 = uVar1;
    }
    puStack_70 = &UNK_004094c4;
    _ZN12LibUsbDevice5ResetEv(*(undefined8 *)(param_1 + 6));
    puStack_70 = &UNK_004094cd;
    puVar11 = param_1;
    (**(code **)(*(long *)param_1 + 0x20))();
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return *(long *)(in_FS_OFFSET + 0x28);
  }
  puStack_70 = &UNK_00409663;
  func_0x0099bd00();
  lStack_a0 = *(long *)(in_FS_OFFSET + 0x28);
  puVar12 = puVar11 + 0x18;
  puStack_98 = param_1;
  pbStack_90 = unaff_R12;
  pbStack_88 = unaff_R13;
  puStack_80 = puVar4;
  puStack_78 = unaff_R15;
  puStack_70 = &stack0xfffffffffffffff8;
  _ZNSt3__15mutex4lockEv(puVar12);
  if (*(char *)((long)puVar11 + 0x11) == '\0') {
    pbVar9 = (byte *)0x0;
    cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(2);
    if (cVar3 != '\0') {
      puVar5 = (undefined4 *)func_0x0099bce0();
      uVar2 = *puVar5;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&uStack_a8,&UNK_0016b012,0x9f,2,0,0xffffffff);
      uVar6 = _ZN7android4base10LogMessage6streamEv(&uStack_a8);
      uVar6 = func_0x0032eb30(uVar6,&UNK_001645c0,0x11);
      _ZNK10Connection6SerialEv(&bStack_c0,puVar11);
      uVar6 = func_0x0032e5a0(uVar6,&bStack_c0);
      pbVar9 = &UNK_00181c96;
      func_0x0032eb30(uVar6,&UNK_00181c96,0x13);
      if ((bStack_c0 & 1) != 0) {
        pbVar9 = (byte *)(CONCAT17(uStack_b9,CONCAT61(uStack_bf,bStack_c0)) & 0xfffffffffffffffe);
        _ZdaPvSt11align_val_t(uStack_b0);
      }
      _ZN7android4base10LogMessageD2Ev(&uStack_a8);
      *puVar5 = uVar2;
    }
    _ZNSt3__115recursive_mutex6unlockEv();
  }
  else {
    *(undefined1 *)((long)puVar11 + 0x11) = 0;
    _ZNSt3__115recursive_mutex6unlockEv(puVar12);
    cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(2,0);
    if (cVar3 != '\0') {
      puVar5 = (undefined4 *)func_0x0099bce0();
      uVar2 = *puVar5;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&uStack_a8,&UNK_0016b012,0xa6,2,0,0xffffffff);
      uVar6 = _ZN7android4base10LogMessage6streamEv(&uStack_a8);
      uVar6 = func_0x0032eb30(uVar6,&UNK_001645c0,0x11);
      _ZNK10Connection6SerialEv(&bStack_c0,puVar11);
      uVar6 = func_0x0032e5a0(uVar6,&bStack_c0);
      func_0x0032eb30(uVar6,&UNK_00183504,0xb);
      if ((bStack_c0 & 1) != 0) {
        _ZdaPvSt11align_val_t
                  (uStack_b0,CONCAT17(uStack_b9,CONCAT61(uStack_bf,bStack_c0)) & 0xfffffffffffffffe)
        ;
      }
      _ZN7android4base10LogMessageD2Ev(&uStack_a8);
      *puVar5 = uVar2;
    }
    _ZN12LibUsbDevice5CloseEv(*(undefined8 *)(puVar11 + 6));
    _ZNSt3__118condition_variable10notify_oneEv(puVar11 + 0x22);
    _ZNSt3__15mutex4lockEv(puVar12);
    uStack_a8 = *(undefined8 *)(puVar11 + 8);
    puVar11[8] = 0;
    puVar11[9] = 0;
    uStack_c8 = *(undefined8 *)(puVar11 + 10);
    puVar11[10] = 0;
    puVar11[0xb] = 0;
    _ZNSt3__115recursive_mutex6unlockEv(puVar12);
    _ZNSt3__16thread4joinEv(&uStack_a8);
    _ZNSt3__16thread4joinEv(&uStack_c8);
    bStack_c0 = 0x1c;
    uStack_bf = 0x7220706f7473;
    uStack_b9 = 0x65;
    uStack_b8 = 0x71;
    uStack_b7 = 0x646574736575;
    uStack_b1 = 0;
    pbVar9 = &bStack_c0;
    _ZN16LibUsbConnection10HandleStopERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
              (puVar11);
    if ((bStack_c0 & 1) != 0) {
      pbVar9 = (byte *)(CONCAT17(uStack_b9,CONCAT61(uStack_bf,bStack_c0)) & 0xfffffffffffffffe);
      _ZdaPvSt11align_val_t(uStack_b0);
    }
    _ZNSt3__15mutex4lockEv(puVar12);
    func_0x003f11f0(puVar11 + 0xc);
    _ZNSt3__115recursive_mutex6unlockEv(puVar12);
    _ZNSt3__16threadD2Ev(&uStack_c8);
    puVar12 = (uint *)&uStack_a8;
    _ZNSt3__16threadD2Ev();
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_a0) {
    return *(long *)(in_FS_OFFSET + 0x28);
  }
  func_0x0099bd00();
  _ZNSt3__15mutex4lockEv(puVar12 + 0x18);
  lVar7 = *(long *)(puVar12 + 0xe);
  uVar10 = 0;
  if (*(long *)(puVar12 + 0x10) != lVar7) {
    uVar10 = (*(long *)(puVar12 + 0x10) - lVar7) * 0x40 - 1;
  }
  uVar8 = *(long *)(puVar12 + 0x16) + *(long *)(puVar12 + 0x14);
  if (uVar10 == uVar8) {
    func_0x003f1340(puVar12 + 0xc);
    lVar7 = *(long *)(puVar12 + 0xe);
    uVar8 = *(long *)(puVar12 + 0x14) + *(long *)(puVar12 + 0x16);
  }
  lVar7 = *(long *)(lVar7 + (uVar8 >> 9) * 8);
  pbVar9[0] = 0;
  pbVar9[1] = 0;
  pbVar9[2] = 0;
  pbVar9[3] = 0;
  pbVar9[4] = 0;
  pbVar9[5] = 0;
  pbVar9[6] = 0;
  pbVar9[7] = 0;
  *(undefined8 *)(lVar7 + (ulong)((uint)uVar8 & 0x1ff) * 8) = *(undefined8 *)pbVar9;
  *(long *)(puVar12 + 0x16) = *(long *)(puVar12 + 0x16) + 1;
  _ZNSt3__115recursive_mutex6unlockEv(puVar12 + 0x18);
  _ZNSt3__118condition_variable10notify_oneEv(puVar12 + 0x22);
  return 1;
}


