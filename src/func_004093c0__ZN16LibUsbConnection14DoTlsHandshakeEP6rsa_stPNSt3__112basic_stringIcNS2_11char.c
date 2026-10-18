// Function: _ZN16LibUsbConnection14DoTlsHandshakeEP6rsa_stPNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE
// Address: 004093c0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long _ZN16LibUsbConnection14DoTlsHandshakeEP6rsa_stPNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE
               (void)

{
  uint uVar1;
  undefined4 uVar2;
  char cVar3;
  uint *puVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  uint *unaff_RBX;
  byte *pbVar9;
  ulong uVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  byte *unaff_R12;
  byte *unaff_R13;
  undefined4 *unaff_R15;
  long in_FS_OFFSET;
  undefined8 uStack_100;
  byte bStack_f8;
  undefined6 uStack_f7;
  undefined1 uStack_f1;
  undefined1 uStack_f0;
  undefined6 uStack_ef;
  undefined1 uStack_e9;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  uint *puStack_d0;
  byte *pbStack_c8;
  byte *pbStack_c0;
  uint *puStack_b8;
  undefined4 *puStack_b0;
  undefined *puStack_a8;
  undefined4 uStack_94;
  byte abStack_90 [16];
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  long lStack_70;
  uint *puStack_68;
  undefined *apuStack_40 [2];
  uint auStack_30 [2];
  long lStack_28;
  
  lStack_28 = *(long *)(in_FS_OFFSET + 0x28);
  puVar11 = (uint *)0x3;
  apuStack_40[0] = &UNK_004093e6;
  cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc();
  if (cVar3 != '\0') {
    apuStack_40[0] = &UNK_0040940b;
    unaff_RBX = (uint *)func_0x0099bce0();
    uVar1 = *unaff_RBX;
    unaff_R15 = (undefined4 *)(ulong)uVar1;
    puVar11 = auStack_30;
    apuStack_40[0] = &UNK_00409437;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (puVar11,&UNK_0016b012,0x88,3,0,0xffffffff);
    apuStack_40[0] = &UNK_0040943f;
    uVar6 = _ZN7android4base10LogMessage6streamEv(puVar11);
    apuStack_40[0] = &UNK_00409453;
    func_0x0032eb30(uVar6,&UNK_001614cf,0x2f);
    apuStack_40[0] = &UNK_0040945b;
    _ZN7android4base10LogMessageD2Ev();
    *unaff_RBX = uVar1;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_28) {
    return 0;
  }
  apuStack_40[0] = &UNK_00409465;
  func_0x0099bd00();
  lStack_70 = *(long *)(in_FS_OFFSET + 0x28);
  puVar4 = puVar11 + 0x18;
  puStack_a8 = &UNK_0040949d;
  puStack_68 = unaff_RBX;
  apuStack_40[0] = &stack0xfffffffffffffff8;
  _ZNSt3__15mutex4lockEv(puVar4);
  if (*(char *)((long)puVar11 + 0x11) == '\0') {
    puStack_a8 = &UNK_004094db;
    cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(2);
    if (cVar3 != '\0') {
      puStack_a8 = &UNK_004095b8;
      unaff_R15 = (undefined4 *)func_0x0099bce0();
      uStack_94 = *unaff_R15;
      puStack_a8 = &UNK_004095e6;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_78,&UNK_0016b012,0x90,2,0,0xffffffff);
      puStack_a8 = &UNK_004095ee;
      uVar6 = _ZN7android4base10LogMessage6streamEv(auStack_78);
      puStack_a8 = &UNK_00409602;
      unaff_R12 = (byte *)func_0x0032eb30(uVar6,&UNK_001645c0,0x11);
      unaff_R13 = abStack_90;
      puStack_a8 = &UNK_00409614;
      _ZNK10Connection6SerialEv(unaff_R13,puVar11);
      puStack_a8 = &UNK_0040961f;
      uVar6 = func_0x0032e5a0(unaff_R12,unaff_R13);
      puStack_a8 = &UNK_00409633;
      func_0x0032eb30(uVar6,&UNK_00178bf3,0xe);
      if ((abStack_90[0] & 1) != 0) {
        puStack_a8 = &UNK_0040964a;
        _ZdaPvSt11align_val_t(uStack_80);
      }
      puStack_a8 = &UNK_00409653;
      _ZN7android4base10LogMessageD2Ev(auStack_78);
      *unaff_R15 = uStack_94;
    }
    puStack_a8 = &UNK_004094eb;
    puVar12 = puVar4;
    _ZNSt3__115recursive_mutex6unlockEv();
  }
  else {
    puStack_a8 = &UNK_004094ab;
    _ZNSt3__115recursive_mutex6unlockEv(puVar4);
    puStack_a8 = &UNK_004094b7;
    cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(2);
    if (cVar3 != '\0') {
      puStack_a8 = &UNK_00409512;
      puVar4 = (uint *)func_0x0099bce0();
      uVar1 = *puVar4;
      unaff_R13 = (byte *)(ulong)uVar1;
      puStack_a8 = &UNK_0040953e;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_78,&UNK_0016b012,0x95,2,0,0xffffffff);
      puStack_a8 = &UNK_00409546;
      uVar6 = _ZN7android4base10LogMessage6streamEv(auStack_78);
      puStack_a8 = &UNK_0040955a;
      unaff_R15 = (undefined4 *)func_0x0032eb30(uVar6,&UNK_001645c0,0x11);
      unaff_R12 = abStack_90;
      puStack_a8 = &UNK_0040956c;
      _ZNK10Connection6SerialEv(unaff_R12,puVar11);
      puStack_a8 = &UNK_00409577;
      uVar6 = func_0x0032e5a0(unaff_R15,unaff_R12);
      puStack_a8 = &UNK_0040958b;
      func_0x0032eb30(uVar6,&UNK_001696d0,8);
      if ((abStack_90[0] & 1) != 0) {
        puStack_a8 = &UNK_004095a2;
        _ZdaPvSt11align_val_t(uStack_80);
      }
      puStack_a8 = &UNK_004095ab;
      _ZN7android4base10LogMessageD2Ev(auStack_78);
      *puVar4 = uVar1;
    }
    puStack_a8 = &UNK_004094c4;
    _ZN12LibUsbDevice5ResetEv(*(undefined8 *)(puVar11 + 6));
    puStack_a8 = &UNK_004094cd;
    puVar12 = puVar11;
    (**(code **)(*(long *)puVar11 + 0x20))();
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_70) {
    return *(long *)(in_FS_OFFSET + 0x28);
  }
  puStack_a8 = &UNK_00409663;
  func_0x0099bd00();
  lStack_d8 = *(long *)(in_FS_OFFSET + 0x28);
  puVar13 = puVar12 + 0x18;
  puStack_d0 = puVar11;
  pbStack_c8 = unaff_R12;
  pbStack_c0 = unaff_R13;
  puStack_b8 = puVar4;
  puStack_b0 = unaff_R15;
  puStack_a8 = (undefined *)apuStack_40;
  _ZNSt3__15mutex4lockEv(puVar13);
  if (*(char *)((long)puVar12 + 0x11) == '\0') {
    pbVar9 = (byte *)0x0;
    cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(2);
    if (cVar3 != '\0') {
      puVar5 = (undefined4 *)func_0x0099bce0();
      uVar2 = *puVar5;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&uStack_e0,&UNK_0016b012,0x9f,2,0,0xffffffff);
      uVar6 = _ZN7android4base10LogMessage6streamEv(&uStack_e0);
      uVar6 = func_0x0032eb30(uVar6,&UNK_001645c0,0x11);
      _ZNK10Connection6SerialEv(&bStack_f8,puVar12);
      uVar6 = func_0x0032e5a0(uVar6,&bStack_f8);
      pbVar9 = &UNK_00181c96;
      func_0x0032eb30(uVar6,&UNK_00181c96,0x13);
      if ((bStack_f8 & 1) != 0) {
        pbVar9 = (byte *)(CONCAT17(uStack_f1,CONCAT61(uStack_f7,bStack_f8)) & 0xfffffffffffffffe);
        _ZdaPvSt11align_val_t(uStack_e8);
      }
      _ZN7android4base10LogMessageD2Ev(&uStack_e0);
      *puVar5 = uVar2;
    }
    _ZNSt3__115recursive_mutex6unlockEv();
  }
  else {
    *(undefined1 *)((long)puVar12 + 0x11) = 0;
    _ZNSt3__115recursive_mutex6unlockEv(puVar13);
    cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(2,0);
    if (cVar3 != '\0') {
      puVar5 = (undefined4 *)func_0x0099bce0();
      uVar2 = *puVar5;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&uStack_e0,&UNK_0016b012,0xa6,2,0,0xffffffff);
      uVar6 = _ZN7android4base10LogMessage6streamEv(&uStack_e0);
      uVar6 = func_0x0032eb30(uVar6,&UNK_001645c0,0x11);
      _ZNK10Connection6SerialEv(&bStack_f8,puVar12);
      uVar6 = func_0x0032e5a0(uVar6,&bStack_f8);
      func_0x0032eb30(uVar6,&UNK_00183504,0xb);
      if ((bStack_f8 & 1) != 0) {
        _ZdaPvSt11align_val_t
                  (uStack_e8,CONCAT17(uStack_f1,CONCAT61(uStack_f7,bStack_f8)) & 0xfffffffffffffffe)
        ;
      }
      _ZN7android4base10LogMessageD2Ev(&uStack_e0);
      *puVar5 = uVar2;
    }
    _ZN12LibUsbDevice5CloseEv(*(undefined8 *)(puVar12 + 6));
    _ZNSt3__118condition_variable10notify_oneEv(puVar12 + 0x22);
    _ZNSt3__15mutex4lockEv(puVar13);
    uStack_e0 = *(undefined8 *)(puVar12 + 8);
    puVar12[8] = 0;
    puVar12[9] = 0;
    uStack_100 = *(undefined8 *)(puVar12 + 10);
    puVar12[10] = 0;
    puVar12[0xb] = 0;
    _ZNSt3__115recursive_mutex6unlockEv(puVar13);
    _ZNSt3__16thread4joinEv(&uStack_e0);
    _ZNSt3__16thread4joinEv(&uStack_100);
    bStack_f8 = 0x1c;
    uStack_f7 = 0x7220706f7473;
    uStack_f1 = 0x65;
    uStack_f0 = 0x71;
    uStack_ef = 0x646574736575;
    uStack_e9 = 0;
    pbVar9 = &bStack_f8;
    _ZN16LibUsbConnection10HandleStopERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
              (puVar12);
    if ((bStack_f8 & 1) != 0) {
      pbVar9 = (byte *)(CONCAT17(uStack_f1,CONCAT61(uStack_f7,bStack_f8)) & 0xfffffffffffffffe);
      _ZdaPvSt11align_val_t(uStack_e8);
    }
    _ZNSt3__15mutex4lockEv(puVar13);
    func_0x003f11f0(puVar12 + 0xc);
    _ZNSt3__115recursive_mutex6unlockEv(puVar13);
    _ZNSt3__16threadD2Ev(&uStack_100);
    puVar13 = (uint *)&uStack_e0;
    _ZNSt3__16threadD2Ev();
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_d8) {
    return *(long *)(in_FS_OFFSET + 0x28);
  }
  func_0x0099bd00();
  _ZNSt3__15mutex4lockEv(puVar13 + 0x18);
  lVar7 = *(long *)(puVar13 + 0xe);
  uVar10 = 0;
  if (*(long *)(puVar13 + 0x10) != lVar7) {
    uVar10 = (*(long *)(puVar13 + 0x10) - lVar7) * 0x40 - 1;
  }
  uVar8 = *(long *)(puVar13 + 0x16) + *(long *)(puVar13 + 0x14);
  if (uVar10 == uVar8) {
    func_0x003f1340(puVar13 + 0xc);
    lVar7 = *(long *)(puVar13 + 0xe);
    uVar8 = *(long *)(puVar13 + 0x14) + *(long *)(puVar13 + 0x16);
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
  *(long *)(puVar13 + 0x16) = *(long *)(puVar13 + 0x16) + 1;
  _ZNSt3__115recursive_mutex6unlockEv(puVar13 + 0x18);
  _ZNSt3__118condition_variable10notify_oneEv(puVar13 + 0x22);
  return 1;
}


