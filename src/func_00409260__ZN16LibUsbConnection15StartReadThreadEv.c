// Function: _ZN16LibUsbConnection15StartReadThreadEv
// Address: 00409260
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long _ZN16LibUsbConnection15StartReadThreadEv(long param_1)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  uint *puVar7;
  uint *puVar8;
  undefined4 *puVar9;
  long lVar10;
  ulong uVar11;
  byte *pbVar12;
  ulong uVar13;
  uint *puVar14;
  uint *puVar15;
  byte *unaff_R12;
  byte *unaff_R13;
  undefined4 *unaff_R15;
  long in_FS_OFFSET;
  undefined8 uStack_150;
  byte bStack_148;
  undefined6 uStack_147;
  undefined1 uStack_141;
  undefined1 uStack_140;
  undefined6 uStack_13f;
  undefined1 uStack_139;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  uint *puStack_120;
  byte *pbStack_118;
  byte *pbStack_110;
  uint *puStack_108;
  undefined4 *puStack_100;
  undefined *puStack_f8;
  undefined4 uStack_e4;
  byte abStack_e0 [16];
  undefined8 uStack_d0;
  undefined1 auStack_c8 [8];
  long lStack_c0;
  uint *puStack_b8;
  undefined *apuStack_90 [2];
  uint auStack_80 [2];
  long lStack_78;
  uint *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_58;
  undefined8 uStack_50;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  long lStack_20;
  
  lStack_20 = *(long *)(in_FS_OFFSET + 0x28);
  puStack_30 = &UNK_00409285;
  uVar5 = _Znwm(8);
  puStack_30 = &UNK_00409290;
  _ZNSt3__115__thread_structC2Ev(uVar5);
  puStack_30 = &UNK_0040929a;
  puVar6 = (undefined8 *)_Znwm(0x10);
  *puVar6 = uVar5;
  puVar6[1] = param_1;
  puVar7 = (uint *)&uStack_28;
  puStack_30 = &UNK_004092b6;
  uVar3 = func_0x0099be80(puVar7,0,&UNK_00409d60,puVar6);
  if (uVar3 == 0) {
    if (*(long *)(param_1 + 0x20) != 0) goto code_r0x00409300;
    *(undefined8 *)(param_1 + 0x20) = uStack_28;
    uStack_28 = 0;
    puVar7 = (uint *)&uStack_28;
    puStack_30 = &UNK_004092da;
    _ZNSt3__16threadD2Ev();
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_20) {
      return *(long *)(in_FS_OFFSET + 0x28);
    }
  }
  else {
    puVar7 = (uint *)(ulong)uVar3;
    puStack_30 = &UNK_00409300;
    _ZNSt3__120__throw_system_errorEiPKc();
code_r0x00409300:
    puStack_30 = &UNK_00409305;
    _ZSt9terminatev();
  }
  puStack_30 = &UNK_0040930a;
  func_0x0099bd00();
  lStack_48 = *(long *)(in_FS_OFFSET + 0x28);
  puStack_58 = &UNK_00409335;
  lStack_40 = param_1;
  uStack_38 = uVar5;
  puStack_30 = &stack0xfffffffffffffff8;
  uVar5 = _Znwm(8);
  puStack_58 = &UNK_00409340;
  _ZNSt3__115__thread_structC2Ev(uVar5);
  puStack_58 = &UNK_0040934a;
  puVar6 = (undefined8 *)_Znwm(0x10);
  *puVar6 = uVar5;
  puVar6[1] = puVar7;
  puStack_58 = &UNK_00409366;
  iVar4 = func_0x0099be80(&uStack_50,0,&UNK_0040a090,puVar6);
  if (iVar4 == 0) {
    if (*(long *)(puVar7 + 10) == 0) {
      *(undefined8 *)(puVar7 + 10) = uStack_50;
      uStack_50 = 0;
      puStack_58 = &UNK_0040938a;
      _ZNSt3__16threadD2Ev(&uStack_50);
      if (*(long *)(in_FS_OFFSET + 0x28) == lStack_48) {
        return *(long *)(in_FS_OFFSET + 0x28);
      }
      goto code_r0x004093b5;
    }
  }
  else {
    puStack_58 = &UNK_004093b0;
    _ZNSt3__120__throw_system_errorEiPKc(iVar4);
  }
  puStack_58 = &UNK_004093b5;
  _ZSt9terminatev();
code_r0x004093b5:
  puStack_58 = &UNK_004093ba;
  func_0x0099bd00();
  lStack_78 = *(long *)(in_FS_OFFSET + 0x28);
  puVar14 = (uint *)0x3;
  apuStack_90[0] = &UNK_004093e6;
  puStack_70 = puVar7;
  uStack_68 = uVar5;
  puStack_58 = (undefined *)&puStack_30;
  cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc();
  if (cVar2 != '\0') {
    apuStack_90[0] = &UNK_0040940b;
    puVar7 = (uint *)func_0x0099bce0();
    uVar3 = *puVar7;
    unaff_R15 = (undefined4 *)(ulong)uVar3;
    puVar14 = auStack_80;
    apuStack_90[0] = &UNK_00409437;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (puVar14,&UNK_0016b012,0x88,3,0,0xffffffff);
    apuStack_90[0] = &UNK_0040943f;
    uVar5 = _ZN7android4base10LogMessage6streamEv(puVar14);
    apuStack_90[0] = &UNK_00409453;
    func_0x0032eb30(uVar5,&UNK_001614cf,0x2f);
    apuStack_90[0] = &UNK_0040945b;
    _ZN7android4base10LogMessageD2Ev();
    *puVar7 = uVar3;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_78) {
    return 0;
  }
  apuStack_90[0] = &UNK_00409465;
  func_0x0099bd00();
  lStack_c0 = *(long *)(in_FS_OFFSET + 0x28);
  puVar8 = puVar14 + 0x18;
  puStack_f8 = &UNK_0040949d;
  puStack_b8 = puVar7;
  apuStack_90[0] = (undefined *)&puStack_58;
  _ZNSt3__15mutex4lockEv(puVar8);
  if (*(char *)((long)puVar14 + 0x11) == '\0') {
    puStack_f8 = &UNK_004094db;
    cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(2);
    if (cVar2 != '\0') {
      puStack_f8 = &UNK_004095b8;
      unaff_R15 = (undefined4 *)func_0x0099bce0();
      uStack_e4 = *unaff_R15;
      puStack_f8 = &UNK_004095e6;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_c8,&UNK_0016b012,0x90,2,0,0xffffffff);
      puStack_f8 = &UNK_004095ee;
      uVar5 = _ZN7android4base10LogMessage6streamEv(auStack_c8);
      puStack_f8 = &UNK_00409602;
      unaff_R12 = (byte *)func_0x0032eb30(uVar5,&UNK_001645c0,0x11);
      unaff_R13 = abStack_e0;
      puStack_f8 = &UNK_00409614;
      _ZNK10Connection6SerialEv(unaff_R13,puVar14);
      puStack_f8 = &UNK_0040961f;
      uVar5 = func_0x0032e5a0(unaff_R12,unaff_R13);
      puStack_f8 = &UNK_00409633;
      func_0x0032eb30(uVar5,&UNK_00178bf3,0xe);
      if ((abStack_e0[0] & 1) != 0) {
        puStack_f8 = &UNK_0040964a;
        _ZdaPvSt11align_val_t(uStack_d0);
      }
      puStack_f8 = &UNK_00409653;
      _ZN7android4base10LogMessageD2Ev(auStack_c8);
      *unaff_R15 = uStack_e4;
    }
    puStack_f8 = &UNK_004094eb;
    puVar7 = puVar8;
    _ZNSt3__115recursive_mutex6unlockEv();
  }
  else {
    puStack_f8 = &UNK_004094ab;
    _ZNSt3__115recursive_mutex6unlockEv(puVar8);
    puStack_f8 = &UNK_004094b7;
    cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(2);
    if (cVar2 != '\0') {
      puStack_f8 = &UNK_00409512;
      puVar8 = (uint *)func_0x0099bce0();
      uVar3 = *puVar8;
      unaff_R13 = (byte *)(ulong)uVar3;
      puStack_f8 = &UNK_0040953e;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_c8,&UNK_0016b012,0x95,2,0,0xffffffff);
      puStack_f8 = &UNK_00409546;
      uVar5 = _ZN7android4base10LogMessage6streamEv(auStack_c8);
      puStack_f8 = &UNK_0040955a;
      unaff_R15 = (undefined4 *)func_0x0032eb30(uVar5,&UNK_001645c0,0x11);
      unaff_R12 = abStack_e0;
      puStack_f8 = &UNK_0040956c;
      _ZNK10Connection6SerialEv(unaff_R12,puVar14);
      puStack_f8 = &UNK_00409577;
      uVar5 = func_0x0032e5a0(unaff_R15,unaff_R12);
      puStack_f8 = &UNK_0040958b;
      func_0x0032eb30(uVar5,&UNK_001696d0,8);
      if ((abStack_e0[0] & 1) != 0) {
        puStack_f8 = &UNK_004095a2;
        _ZdaPvSt11align_val_t(uStack_d0);
      }
      puStack_f8 = &UNK_004095ab;
      _ZN7android4base10LogMessageD2Ev(auStack_c8);
      *puVar8 = uVar3;
    }
    puStack_f8 = &UNK_004094c4;
    _ZN12LibUsbDevice5ResetEv(*(undefined8 *)(puVar14 + 6));
    puStack_f8 = &UNK_004094cd;
    puVar7 = puVar14;
    (**(code **)(*(long *)puVar14 + 0x20))();
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_c0) {
    return *(long *)(in_FS_OFFSET + 0x28);
  }
  puStack_f8 = &UNK_00409663;
  func_0x0099bd00();
  lStack_128 = *(long *)(in_FS_OFFSET + 0x28);
  puVar15 = puVar7 + 0x18;
  puStack_120 = puVar14;
  pbStack_118 = unaff_R12;
  pbStack_110 = unaff_R13;
  puStack_108 = puVar8;
  puStack_100 = unaff_R15;
  puStack_f8 = (undefined *)apuStack_90;
  _ZNSt3__15mutex4lockEv(puVar15);
  if (*(char *)((long)puVar7 + 0x11) == '\0') {
    pbVar12 = (byte *)0x0;
    cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(2);
    if (cVar2 != '\0') {
      puVar9 = (undefined4 *)func_0x0099bce0();
      uVar1 = *puVar9;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&uStack_130,&UNK_0016b012,0x9f,2,0,0xffffffff);
      uVar5 = _ZN7android4base10LogMessage6streamEv(&uStack_130);
      uVar5 = func_0x0032eb30(uVar5,&UNK_001645c0,0x11);
      _ZNK10Connection6SerialEv(&bStack_148,puVar7);
      uVar5 = func_0x0032e5a0(uVar5,&bStack_148);
      pbVar12 = &UNK_00181c96;
      func_0x0032eb30(uVar5,&UNK_00181c96,0x13);
      if ((bStack_148 & 1) != 0) {
        pbVar12 = (byte *)(CONCAT17(uStack_141,CONCAT61(uStack_147,bStack_148)) & 0xfffffffffffffffe
                          );
        _ZdaPvSt11align_val_t(uStack_138);
      }
      _ZN7android4base10LogMessageD2Ev(&uStack_130);
      *puVar9 = uVar1;
    }
    _ZNSt3__115recursive_mutex6unlockEv();
  }
  else {
    *(undefined1 *)((long)puVar7 + 0x11) = 0;
    _ZNSt3__115recursive_mutex6unlockEv(puVar15);
    cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(2,0);
    if (cVar2 != '\0') {
      puVar9 = (undefined4 *)func_0x0099bce0();
      uVar1 = *puVar9;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&uStack_130,&UNK_0016b012,0xa6,2,0,0xffffffff);
      uVar5 = _ZN7android4base10LogMessage6streamEv(&uStack_130);
      uVar5 = func_0x0032eb30(uVar5,&UNK_001645c0,0x11);
      _ZNK10Connection6SerialEv(&bStack_148,puVar7);
      uVar5 = func_0x0032e5a0(uVar5,&bStack_148);
      func_0x0032eb30(uVar5,&UNK_00183504,0xb);
      if ((bStack_148 & 1) != 0) {
        _ZdaPvSt11align_val_t
                  (uStack_138,
                   CONCAT17(uStack_141,CONCAT61(uStack_147,bStack_148)) & 0xfffffffffffffffe);
      }
      _ZN7android4base10LogMessageD2Ev(&uStack_130);
      *puVar9 = uVar1;
    }
    _ZN12LibUsbDevice5CloseEv(*(undefined8 *)(puVar7 + 6));
    _ZNSt3__118condition_variable10notify_oneEv(puVar7 + 0x22);
    _ZNSt3__15mutex4lockEv(puVar15);
    uStack_130 = *(undefined8 *)(puVar7 + 8);
    puVar7[8] = 0;
    puVar7[9] = 0;
    uStack_150 = *(undefined8 *)(puVar7 + 10);
    puVar7[10] = 0;
    puVar7[0xb] = 0;
    _ZNSt3__115recursive_mutex6unlockEv(puVar15);
    _ZNSt3__16thread4joinEv(&uStack_130);
    _ZNSt3__16thread4joinEv(&uStack_150);
    bStack_148 = 0x1c;
    uStack_147 = 0x7220706f7473;
    uStack_141 = 0x65;
    uStack_140 = 0x71;
    uStack_13f = 0x646574736575;
    uStack_139 = 0;
    pbVar12 = &bStack_148;
    _ZN16LibUsbConnection10HandleStopERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
              (puVar7);
    if ((bStack_148 & 1) != 0) {
      pbVar12 = (byte *)(CONCAT17(uStack_141,CONCAT61(uStack_147,bStack_148)) & 0xfffffffffffffffe);
      _ZdaPvSt11align_val_t(uStack_138);
    }
    _ZNSt3__15mutex4lockEv(puVar15);
    func_0x003f11f0(puVar7 + 0xc);
    _ZNSt3__115recursive_mutex6unlockEv(puVar15);
    _ZNSt3__16threadD2Ev(&uStack_150);
    puVar15 = (uint *)&uStack_130;
    _ZNSt3__16threadD2Ev();
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_128) {
    return *(long *)(in_FS_OFFSET + 0x28);
  }
  func_0x0099bd00();
  _ZNSt3__15mutex4lockEv(puVar15 + 0x18);
  lVar10 = *(long *)(puVar15 + 0xe);
  uVar13 = 0;
  if (*(long *)(puVar15 + 0x10) != lVar10) {
    uVar13 = (*(long *)(puVar15 + 0x10) - lVar10) * 0x40 - 1;
  }
  uVar11 = *(long *)(puVar15 + 0x16) + *(long *)(puVar15 + 0x14);
  if (uVar13 == uVar11) {
    func_0x003f1340(puVar15 + 0xc);
    lVar10 = *(long *)(puVar15 + 0xe);
    uVar11 = *(long *)(puVar15 + 0x14) + *(long *)(puVar15 + 0x16);
  }
  lVar10 = *(long *)(lVar10 + (uVar11 >> 9) * 8);
  pbVar12[0] = 0;
  pbVar12[1] = 0;
  pbVar12[2] = 0;
  pbVar12[3] = 0;
  pbVar12[4] = 0;
  pbVar12[5] = 0;
  pbVar12[6] = 0;
  pbVar12[7] = 0;
  *(undefined8 *)(lVar10 + (ulong)((uint)uVar11 & 0x1ff) * 8) = *(undefined8 *)pbVar12;
  *(long *)(puVar15 + 0x16) = *(long *)(puVar15 + 0x16) + 1;
  _ZNSt3__115recursive_mutex6unlockEv(puVar15 + 0x18);
  _ZNSt3__118condition_variable10notify_oneEv(puVar15 + 0x22);
  return 1;
}


