// Function: _ZN16LibUsbConnection16StartWriteThreadEv
// Address: 00409310
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long _ZN16LibUsbConnection16StartWriteThreadEv(uint *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  uint *puVar7;
  undefined4 *puVar8;
  long lVar9;
  ulong uVar10;
  byte *pbVar11;
  ulong uVar12;
  uint *puVar13;
  uint *puVar14;
  uint *puVar15;
  byte *unaff_R12;
  byte *unaff_R13;
  undefined4 *unaff_R15;
  long in_FS_OFFSET;
  undefined8 uStack_128;
  byte bStack_120;
  undefined6 uStack_11f;
  undefined1 uStack_119;
  undefined1 uStack_118;
  undefined6 uStack_117;
  undefined1 uStack_111;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  uint *puStack_f8;
  byte *pbStack_f0;
  byte *pbStack_e8;
  uint *puStack_e0;
  undefined4 *puStack_d8;
  undefined *puStack_d0;
  undefined4 uStack_bc;
  byte abStack_b8 [16];
  undefined8 uStack_a8;
  undefined1 auStack_a0 [8];
  long lStack_98;
  uint *puStack_90;
  undefined *apuStack_68 [2];
  uint auStack_58 [2];
  long lStack_50;
  uint *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_30;
  undefined8 uStack_28;
  long lStack_20;
  
  lStack_20 = *(long *)(in_FS_OFFSET + 0x28);
  puStack_30 = &UNK_00409335;
  uVar5 = _Znwm(8);
  puStack_30 = &UNK_00409340;
  _ZNSt3__115__thread_structC2Ev(uVar5);
  puStack_30 = &UNK_0040934a;
  puVar6 = (undefined8 *)_Znwm(0x10);
  *puVar6 = uVar5;
  puVar6[1] = param_1;
  puStack_30 = &UNK_00409366;
  iVar4 = func_0x0099be80(&uStack_28,0,&UNK_0040a090,puVar6);
  if (iVar4 == 0) {
    if (*(long *)(param_1 + 10) == 0) {
      *(undefined8 *)(param_1 + 10) = uStack_28;
      uStack_28 = 0;
      puStack_30 = &UNK_0040938a;
      _ZNSt3__16threadD2Ev(&uStack_28);
      if (*(long *)(in_FS_OFFSET + 0x28) == lStack_20) {
        return *(long *)(in_FS_OFFSET + 0x28);
      }
      goto code_r0x004093b5;
    }
  }
  else {
    puStack_30 = &UNK_004093b0;
    _ZNSt3__120__throw_system_errorEiPKc(iVar4);
  }
  puStack_30 = &UNK_004093b5;
  _ZSt9terminatev();
code_r0x004093b5:
  puStack_30 = &UNK_004093ba;
  func_0x0099bd00();
  lStack_50 = *(long *)(in_FS_OFFSET + 0x28);
  puVar13 = (uint *)0x3;
  apuStack_68[0] = &UNK_004093e6;
  puStack_48 = param_1;
  uStack_40 = uVar5;
  puStack_30 = &stack0xfffffffffffffff8;
  cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc();
  if (cVar3 != '\0') {
    apuStack_68[0] = &UNK_0040940b;
    param_1 = (uint *)func_0x0099bce0();
    uVar1 = *param_1;
    unaff_R15 = (undefined4 *)(ulong)uVar1;
    puVar13 = auStack_58;
    apuStack_68[0] = &UNK_00409437;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (puVar13,&UNK_0016b012,0x88,3,0,0xffffffff);
    apuStack_68[0] = &UNK_0040943f;
    uVar5 = _ZN7android4base10LogMessage6streamEv(puVar13);
    apuStack_68[0] = &UNK_00409453;
    func_0x0032eb30(uVar5,&UNK_001614cf,0x2f);
    apuStack_68[0] = &UNK_0040945b;
    _ZN7android4base10LogMessageD2Ev();
    *param_1 = uVar1;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_50) {
    return 0;
  }
  apuStack_68[0] = &UNK_00409465;
  func_0x0099bd00();
  lStack_98 = *(long *)(in_FS_OFFSET + 0x28);
  puVar7 = puVar13 + 0x18;
  puStack_d0 = &UNK_0040949d;
  puStack_90 = param_1;
  apuStack_68[0] = (undefined *)&puStack_30;
  _ZNSt3__15mutex4lockEv(puVar7);
  if (*(char *)((long)puVar13 + 0x11) == '\0') {
    puStack_d0 = &UNK_004094db;
    cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(2);
    if (cVar3 != '\0') {
      puStack_d0 = &UNK_004095b8;
      unaff_R15 = (undefined4 *)func_0x0099bce0();
      uStack_bc = *unaff_R15;
      puStack_d0 = &UNK_004095e6;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_a0,&UNK_0016b012,0x90,2,0,0xffffffff);
      puStack_d0 = &UNK_004095ee;
      uVar5 = _ZN7android4base10LogMessage6streamEv(auStack_a0);
      puStack_d0 = &UNK_00409602;
      unaff_R12 = (byte *)func_0x0032eb30(uVar5,&UNK_001645c0,0x11);
      unaff_R13 = abStack_b8;
      puStack_d0 = &UNK_00409614;
      _ZNK10Connection6SerialEv(unaff_R13,puVar13);
      puStack_d0 = &UNK_0040961f;
      uVar5 = func_0x0032e5a0(unaff_R12,unaff_R13);
      puStack_d0 = &UNK_00409633;
      func_0x0032eb30(uVar5,&UNK_00178bf3,0xe);
      if ((abStack_b8[0] & 1) != 0) {
        puStack_d0 = &UNK_0040964a;
        _ZdaPvSt11align_val_t(uStack_a8);
      }
      puStack_d0 = &UNK_00409653;
      _ZN7android4base10LogMessageD2Ev(auStack_a0);
      *unaff_R15 = uStack_bc;
    }
    puStack_d0 = &UNK_004094eb;
    puVar14 = puVar7;
    _ZNSt3__115recursive_mutex6unlockEv();
  }
  else {
    puStack_d0 = &UNK_004094ab;
    _ZNSt3__115recursive_mutex6unlockEv(puVar7);
    puStack_d0 = &UNK_004094b7;
    cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(2);
    if (cVar3 != '\0') {
      puStack_d0 = &UNK_00409512;
      puVar7 = (uint *)func_0x0099bce0();
      uVar1 = *puVar7;
      unaff_R13 = (byte *)(ulong)uVar1;
      puStack_d0 = &UNK_0040953e;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_a0,&UNK_0016b012,0x95,2,0,0xffffffff);
      puStack_d0 = &UNK_00409546;
      uVar5 = _ZN7android4base10LogMessage6streamEv(auStack_a0);
      puStack_d0 = &UNK_0040955a;
      unaff_R15 = (undefined4 *)func_0x0032eb30(uVar5,&UNK_001645c0,0x11);
      unaff_R12 = abStack_b8;
      puStack_d0 = &UNK_0040956c;
      _ZNK10Connection6SerialEv(unaff_R12,puVar13);
      puStack_d0 = &UNK_00409577;
      uVar5 = func_0x0032e5a0(unaff_R15,unaff_R12);
      puStack_d0 = &UNK_0040958b;
      func_0x0032eb30(uVar5,&UNK_001696d0,8);
      if ((abStack_b8[0] & 1) != 0) {
        puStack_d0 = &UNK_004095a2;
        _ZdaPvSt11align_val_t(uStack_a8);
      }
      puStack_d0 = &UNK_004095ab;
      _ZN7android4base10LogMessageD2Ev(auStack_a0);
      *puVar7 = uVar1;
    }
    puStack_d0 = &UNK_004094c4;
    _ZN12LibUsbDevice5ResetEv(*(undefined8 *)(puVar13 + 6));
    puStack_d0 = &UNK_004094cd;
    puVar14 = puVar13;
    (**(code **)(*(long *)puVar13 + 0x20))();
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_98) {
    return *(long *)(in_FS_OFFSET + 0x28);
  }
  puStack_d0 = &UNK_00409663;
  func_0x0099bd00();
  lStack_100 = *(long *)(in_FS_OFFSET + 0x28);
  puVar15 = puVar14 + 0x18;
  puStack_f8 = puVar13;
  pbStack_f0 = unaff_R12;
  pbStack_e8 = unaff_R13;
  puStack_e0 = puVar7;
  puStack_d8 = unaff_R15;
  puStack_d0 = (undefined *)apuStack_68;
  _ZNSt3__15mutex4lockEv(puVar15);
  if (*(char *)((long)puVar14 + 0x11) == '\0') {
    pbVar11 = (byte *)0x0;
    cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(2);
    if (cVar3 != '\0') {
      puVar8 = (undefined4 *)func_0x0099bce0();
      uVar2 = *puVar8;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&uStack_108,&UNK_0016b012,0x9f,2,0,0xffffffff);
      uVar5 = _ZN7android4base10LogMessage6streamEv(&uStack_108);
      uVar5 = func_0x0032eb30(uVar5,&UNK_001645c0,0x11);
      _ZNK10Connection6SerialEv(&bStack_120,puVar14);
      uVar5 = func_0x0032e5a0(uVar5,&bStack_120);
      pbVar11 = &UNK_00181c96;
      func_0x0032eb30(uVar5,&UNK_00181c96,0x13);
      if ((bStack_120 & 1) != 0) {
        pbVar11 = (byte *)(CONCAT17(uStack_119,CONCAT61(uStack_11f,bStack_120)) & 0xfffffffffffffffe
                          );
        _ZdaPvSt11align_val_t(uStack_110);
      }
      _ZN7android4base10LogMessageD2Ev(&uStack_108);
      *puVar8 = uVar2;
    }
    _ZNSt3__115recursive_mutex6unlockEv();
  }
  else {
    *(undefined1 *)((long)puVar14 + 0x11) = 0;
    _ZNSt3__115recursive_mutex6unlockEv(puVar15);
    cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(2,0);
    if (cVar3 != '\0') {
      puVar8 = (undefined4 *)func_0x0099bce0();
      uVar2 = *puVar8;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&uStack_108,&UNK_0016b012,0xa6,2,0,0xffffffff);
      uVar5 = _ZN7android4base10LogMessage6streamEv(&uStack_108);
      uVar5 = func_0x0032eb30(uVar5,&UNK_001645c0,0x11);
      _ZNK10Connection6SerialEv(&bStack_120,puVar14);
      uVar5 = func_0x0032e5a0(uVar5,&bStack_120);
      func_0x0032eb30(uVar5,&UNK_00183504,0xb);
      if ((bStack_120 & 1) != 0) {
        _ZdaPvSt11align_val_t
                  (uStack_110,
                   CONCAT17(uStack_119,CONCAT61(uStack_11f,bStack_120)) & 0xfffffffffffffffe);
      }
      _ZN7android4base10LogMessageD2Ev(&uStack_108);
      *puVar8 = uVar2;
    }
    _ZN12LibUsbDevice5CloseEv(*(undefined8 *)(puVar14 + 6));
    _ZNSt3__118condition_variable10notify_oneEv(puVar14 + 0x22);
    _ZNSt3__15mutex4lockEv(puVar15);
    uStack_108 = *(undefined8 *)(puVar14 + 8);
    puVar14[8] = 0;
    puVar14[9] = 0;
    uStack_128 = *(undefined8 *)(puVar14 + 10);
    puVar14[10] = 0;
    puVar14[0xb] = 0;
    _ZNSt3__115recursive_mutex6unlockEv(puVar15);
    _ZNSt3__16thread4joinEv(&uStack_108);
    _ZNSt3__16thread4joinEv(&uStack_128);
    bStack_120 = 0x1c;
    uStack_11f = 0x7220706f7473;
    uStack_119 = 0x65;
    uStack_118 = 0x71;
    uStack_117 = 0x646574736575;
    uStack_111 = 0;
    pbVar11 = &bStack_120;
    _ZN16LibUsbConnection10HandleStopERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
              (puVar14);
    if ((bStack_120 & 1) != 0) {
      pbVar11 = (byte *)(CONCAT17(uStack_119,CONCAT61(uStack_11f,bStack_120)) & 0xfffffffffffffffe);
      _ZdaPvSt11align_val_t(uStack_110);
    }
    _ZNSt3__15mutex4lockEv(puVar15);
    func_0x003f11f0(puVar14 + 0xc);
    _ZNSt3__115recursive_mutex6unlockEv(puVar15);
    _ZNSt3__16threadD2Ev(&uStack_128);
    puVar15 = (uint *)&uStack_108;
    _ZNSt3__16threadD2Ev();
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_100) {
    return *(long *)(in_FS_OFFSET + 0x28);
  }
  func_0x0099bd00();
  _ZNSt3__15mutex4lockEv(puVar15 + 0x18);
  lVar9 = *(long *)(puVar15 + 0xe);
  uVar12 = 0;
  if (*(long *)(puVar15 + 0x10) != lVar9) {
    uVar12 = (*(long *)(puVar15 + 0x10) - lVar9) * 0x40 - 1;
  }
  uVar10 = *(long *)(puVar15 + 0x16) + *(long *)(puVar15 + 0x14);
  if (uVar12 == uVar10) {
    func_0x003f1340(puVar15 + 0xc);
    lVar9 = *(long *)(puVar15 + 0xe);
    uVar10 = *(long *)(puVar15 + 0x14) + *(long *)(puVar15 + 0x16);
  }
  lVar9 = *(long *)(lVar9 + (uVar10 >> 9) * 8);
  pbVar11[0] = 0;
  pbVar11[1] = 0;
  pbVar11[2] = 0;
  pbVar11[3] = 0;
  pbVar11[4] = 0;
  pbVar11[5] = 0;
  pbVar11[6] = 0;
  pbVar11[7] = 0;
  *(undefined8 *)(lVar9 + (ulong)((uint)uVar10 & 0x1ff) * 8) = *(undefined8 *)pbVar11;
  *(long *)(puVar15 + 0x16) = *(long *)(puVar15 + 0x16) + 1;
  _ZNSt3__115recursive_mutex6unlockEv(puVar15 + 0x18);
  _ZNSt3__118condition_variable10notify_oneEv(puVar15 + 0x22);
  return 1;
}


