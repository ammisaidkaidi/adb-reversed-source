// Function: _ZN16LibUsbConnection5StartEv
// Address: 00408f90
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined4 * _ZN16LibUsbConnection5StartEv(long param_1)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  uint *puVar7;
  long *plVar8;
  uint *puVar9;
  uint *puVar10;
  undefined4 *puVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  uint *puVar16;
  byte *pbVar17;
  undefined1 *puVar18;
  long in_FS_OFFSET;
  undefined8 uStack_1b8;
  byte bStack_1b0;
  undefined6 uStack_1af;
  undefined1 uStack_1a9;
  undefined1 uStack_1a8;
  undefined6 uStack_1a7;
  undefined1 uStack_1a1;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined4 *puStack_190;
  uint *puStack_188;
  byte *pbStack_180;
  byte *pbStack_178;
  uint *puStack_170;
  undefined4 *puStack_168;
  undefined *puStack_160;
  undefined4 uStack_14c;
  byte abStack_148 [16];
  undefined8 uStack_138;
  undefined1 auStack_130 [8];
  undefined4 *puStack_128;
  uint *puStack_120;
  byte *pbStack_118;
  byte *pbStack_110;
  uint *puStack_108;
  undefined4 *puStack_100;
  undefined *apuStack_f8 [2];
  uint auStack_e8 [2];
  long lStack_e0;
  uint *puStack_d8;
  uint *puStack_d0;
  undefined4 *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined4 *puStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined4 *puStack_88;
  long lStack_80;
  long lStack_78;
  undefined *puStack_70;
  undefined4 *puStack_68;
  undefined4 uStack_5c;
  byte abStack_58 [16];
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  pbVar17 = (byte *)&adb_trace_mask;
  puVar18 = adb_trace_severity;
  if ((((byte)adb_trace_mask & 0x20) != 0) && ((int)adb_trace_severity._20_4_ < 2)) {
    puStack_70 = &UNK_00409066;
    cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1);
    if (cVar2 != '\0') {
      puStack_70 = &UNK_00409073;
      puVar11 = (undefined4 *)func_0x0099bce0();
      puStack_68 = (undefined4 *)CONCAT44(puStack_68._4_4_,*puVar11);
      puStack_70 = &UNK_004090a1;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (abStack_58,&UNK_0016b012,0x4c,1,0,0xffffffff);
      puStack_70 = &UNK_004090a9;
      uVar5 = _ZN7android4base10LogMessage6streamEv(abStack_58);
      puStack_70 = &UNK_004090bd;
      func_0x0032eb30(uVar5,&UNK_00167c65,0x19);
      puStack_70 = &UNK_004090c5;
      _ZN7android4base10LogMessageD2Ev(abStack_58);
      *puVar11 = puStack_68._0_4_;
    }
  }
  lVar12 = param_1 + 0x60;
  puStack_70 = &UNK_00408fdd;
  _ZNSt3__15mutex4lockEv(lVar12);
  if (((*(char *)(param_1 + 0x11) == '\x01') && (((byte)adb_trace_mask & 0x20) != 0)) &&
     ((int)adb_trace_severity._20_4_ < 2)) {
    puStack_70 = &UNK_004090dc;
    cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1);
    if (cVar2 != '\0') {
      puStack_70 = &UNK_004090e9;
      puStack_68 = (undefined4 *)func_0x0099bce0();
      uStack_5c = *puStack_68;
      puStack_70 = &UNK_00409118;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_40,&UNK_0016b012,0x4f,1,0,0xffffffff);
      puStack_70 = &UNK_00409120;
      uVar5 = _ZN7android4base10LogMessage6streamEv(auStack_40);
      puStack_70 = &UNK_00409134;
      uVar5 = func_0x0032eb30(uVar5,&UNK_001645c0,0x11);
      puStack_70 = &UNK_00409143;
      _ZNK10Connection6SerialEv(abStack_58,param_1);
      puStack_70 = &UNK_0040914f;
      uVar5 = func_0x0032e5a0(uVar5,abStack_58);
      puStack_70 = &UNK_00409163;
      func_0x0032eb30(uVar5,&UNK_001867c9,0x12);
      if ((abStack_58[0] & 1) != 0) {
        puStack_70 = &UNK_0040917a;
        _ZdaPvSt11align_val_t(uStack_48);
      }
      puStack_70 = &UNK_00409183;
      _ZN7android4base10LogMessageD2Ev(auStack_40);
      *puStack_68 = uStack_5c;
    }
  }
  puStack_70 = &UNK_00408ffe;
  uVar3 = _ZN12LibUsbDevice4OpenEv(*(undefined8 *)(param_1 + 0x18));
  puVar11 = (undefined4 *)(ulong)uVar3;
  if ((char)uVar3 == '\0') {
    if ((((byte)adb_trace_mask & 0x20) != 0) && ((int)adb_trace_severity._20_4_ < 2)) {
      puStack_70 = &UNK_0040919d;
      cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1);
      if (cVar2 != '\0') {
        puStack_70 = &UNK_004091aa;
        puStack_68 = (undefined4 *)func_0x0099bce0();
        uStack_5c = *puStack_68;
        puStack_70 = &UNK_004091d9;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (auStack_40,&UNK_0016b012,0x53,1,0,0xffffffff);
        puStack_70 = &UNK_004091e1;
        uVar5 = _ZN7android4base10LogMessage6streamEv(auStack_40);
        puStack_70 = &UNK_004091f5;
        puVar18 = (undefined1 *)func_0x0032eb30(uVar5,&UNK_00172483,0x10);
        pbVar17 = abStack_58;
        puStack_70 = &UNK_00409207;
        _ZNK10Connection6SerialEv(pbVar17,param_1);
        puStack_70 = &UNK_00409212;
        uVar5 = func_0x0032e5a0(puVar18,pbVar17);
        puStack_70 = &UNK_00409226;
        func_0x0032eb30(uVar5,&UNK_001645d2,0x17);
        if ((abStack_58[0] & 1) != 0) {
          puStack_70 = &UNK_0040923d;
          _ZdaPvSt11align_val_t(uStack_48);
        }
        puStack_70 = &UNK_00409246;
        _ZN7android4base10LogMessageD2Ev(auStack_40);
        *puStack_68 = uStack_5c;
      }
    }
  }
  else {
    puStack_70 = &UNK_0040900d;
    _ZN16LibUsbConnection15StartReadThreadEv(param_1);
    puStack_70 = &UNK_00409015;
    _ZN16LibUsbConnection16StartWriteThreadEv(param_1);
    *(undefined1 *)(param_1 + 0x11) = 1;
  }
  puStack_70 = &UNK_00409035;
  lVar15 = lVar12;
  _ZNSt3__115recursive_mutex6unlockEv();
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return puVar11;
  }
  puStack_70 = &UNK_00409259;
  func_0x0099bd00();
  puStack_88 = *(undefined4 **)(in_FS_OFFSET + 0x28);
  puStack_98 = &UNK_00409285;
  lStack_80 = param_1;
  lStack_78 = lVar12;
  puStack_70 = &stack0xfffffffffffffff8;
  uVar5 = _Znwm(8);
  puStack_98 = &UNK_00409290;
  _ZNSt3__115__thread_structC2Ev(uVar5);
  puStack_98 = &UNK_0040929a;
  puVar6 = (undefined8 *)_Znwm(0x10);
  *puVar6 = uVar5;
  puVar6[1] = lVar15;
  puVar9 = (uint *)&uStack_90;
  puStack_98 = &UNK_004092b6;
  uVar3 = func_0x0099be80(puVar9,0,&UNK_00409d60,puVar6);
  if (uVar3 == 0) {
    if (*(long *)(lVar15 + 0x20) != 0) goto code_r0x00409300;
    *(undefined8 *)(lVar15 + 0x20) = uStack_90;
    uStack_90 = 0;
    puVar9 = (uint *)&uStack_90;
    puStack_98 = &UNK_004092da;
    _ZNSt3__16threadD2Ev();
    if (*(undefined4 **)(in_FS_OFFSET + 0x28) == puStack_88) {
      return *(undefined4 **)(in_FS_OFFSET + 0x28);
    }
  }
  else {
    puVar9 = (uint *)(ulong)uVar3;
    puStack_98 = &UNK_00409300;
    _ZNSt3__120__throw_system_errorEiPKc();
code_r0x00409300:
    puStack_98 = &UNK_00409305;
    _ZSt9terminatev();
  }
  puStack_98 = &UNK_0040930a;
  func_0x0099bd00();
  puStack_b0 = *(undefined4 **)(in_FS_OFFSET + 0x28);
  puStack_c0 = &UNK_00409335;
  lStack_a8 = lVar15;
  uStack_a0 = uVar5;
  puStack_98 = (undefined *)&puStack_70;
  puVar7 = (uint *)_Znwm(8);
  puStack_c0 = &UNK_00409340;
  _ZNSt3__115__thread_structC2Ev(puVar7);
  puStack_c0 = &UNK_0040934a;
  plVar8 = (long *)_Znwm(0x10);
  *plVar8 = (long)puVar7;
  plVar8[1] = (long)puVar9;
  puStack_c0 = &UNK_00409366;
  iVar4 = func_0x0099be80(&uStack_b8,0,&UNK_0040a090,plVar8);
  if (iVar4 == 0) {
    if (*(long *)(puVar9 + 10) == 0) {
      *(undefined8 *)(puVar9 + 10) = uStack_b8;
      uStack_b8 = 0;
      puStack_c0 = &UNK_0040938a;
      _ZNSt3__16threadD2Ev(&uStack_b8);
      if (*(undefined4 **)(in_FS_OFFSET + 0x28) == puStack_b0) {
        return *(undefined4 **)(in_FS_OFFSET + 0x28);
      }
      goto code_r0x004093b5;
    }
  }
  else {
    puStack_c0 = &UNK_004093b0;
    _ZNSt3__120__throw_system_errorEiPKc(iVar4);
  }
  puStack_c0 = &UNK_004093b5;
  _ZSt9terminatev();
code_r0x004093b5:
  puStack_c0 = &UNK_004093ba;
  func_0x0099bd00();
  lStack_e0 = *(long *)(in_FS_OFFSET + 0x28);
  puVar16 = (uint *)0x3;
  apuStack_f8[0] = &UNK_004093e6;
  puStack_d8 = puVar9;
  puStack_d0 = puVar7;
  puStack_c8 = puVar11;
  puStack_c0 = (undefined *)&puStack_98;
  cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc();
  if (cVar2 != '\0') {
    apuStack_f8[0] = &UNK_0040940b;
    puVar9 = (uint *)func_0x0099bce0();
    uVar3 = *puVar9;
    puVar11 = (undefined4 *)(ulong)uVar3;
    puVar7 = auStack_e8;
    apuStack_f8[0] = &UNK_00409437;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (puVar7,&UNK_0016b012,0x88,3,0,0xffffffff);
    apuStack_f8[0] = &UNK_0040943f;
    uVar5 = _ZN7android4base10LogMessage6streamEv(puVar7);
    apuStack_f8[0] = &UNK_00409453;
    func_0x0032eb30(uVar5,&UNK_001614cf,0x2f);
    apuStack_f8[0] = &UNK_0040945b;
    puVar16 = puVar7;
    _ZN7android4base10LogMessageD2Ev();
    *puVar9 = uVar3;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_e0) {
    return (undefined4 *)0x0;
  }
  apuStack_f8[0] = &UNK_00409465;
  func_0x0099bd00();
  puStack_128 = *(undefined4 **)(in_FS_OFFSET + 0x28);
  puVar10 = puVar16 + 0x18;
  puStack_160 = &UNK_0040949d;
  puStack_120 = puVar9;
  pbStack_118 = pbVar17;
  pbStack_110 = puVar18;
  puStack_108 = puVar7;
  puStack_100 = puVar11;
  apuStack_f8[0] = (undefined *)&puStack_c0;
  _ZNSt3__15mutex4lockEv(puVar10);
  if (*(char *)((long)puVar16 + 0x11) == '\0') {
    puStack_160 = &UNK_004094db;
    cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(2);
    if (cVar2 != '\0') {
      puStack_160 = &UNK_004095b8;
      puVar11 = (undefined4 *)func_0x0099bce0();
      uStack_14c = *puVar11;
      puStack_160 = &UNK_004095e6;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_130,&UNK_0016b012,0x90,2,0,0xffffffff);
      puStack_160 = &UNK_004095ee;
      uVar5 = _ZN7android4base10LogMessage6streamEv(auStack_130);
      puStack_160 = &UNK_00409602;
      pbVar17 = (byte *)func_0x0032eb30(uVar5,&UNK_001645c0,0x11);
      puVar18 = abStack_148;
      puStack_160 = &UNK_00409614;
      _ZNK10Connection6SerialEv(puVar18,puVar16);
      puStack_160 = &UNK_0040961f;
      uVar5 = func_0x0032e5a0(pbVar17,puVar18);
      puStack_160 = &UNK_00409633;
      func_0x0032eb30(uVar5,&UNK_00178bf3,0xe);
      if ((abStack_148[0] & 1) != 0) {
        puStack_160 = &UNK_0040964a;
        _ZdaPvSt11align_val_t(uStack_138);
      }
      puStack_160 = &UNK_00409653;
      _ZN7android4base10LogMessageD2Ev(auStack_130);
      *puVar11 = uStack_14c;
    }
    puStack_160 = &UNK_004094eb;
    puVar9 = puVar10;
    _ZNSt3__115recursive_mutex6unlockEv();
  }
  else {
    puStack_160 = &UNK_004094ab;
    _ZNSt3__115recursive_mutex6unlockEv(puVar10);
    puStack_160 = &UNK_004094b7;
    cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(2);
    if (cVar2 != '\0') {
      puStack_160 = &UNK_00409512;
      puVar10 = (uint *)func_0x0099bce0();
      uVar3 = *puVar10;
      puVar18 = (undefined1 *)(ulong)uVar3;
      puStack_160 = &UNK_0040953e;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_130,&UNK_0016b012,0x95,2,0,0xffffffff);
      puStack_160 = &UNK_00409546;
      uVar5 = _ZN7android4base10LogMessage6streamEv(auStack_130);
      puStack_160 = &UNK_0040955a;
      puVar11 = (undefined4 *)func_0x0032eb30(uVar5,&UNK_001645c0,0x11);
      pbVar17 = abStack_148;
      puStack_160 = &UNK_0040956c;
      _ZNK10Connection6SerialEv(pbVar17,puVar16);
      puStack_160 = &UNK_00409577;
      uVar5 = func_0x0032e5a0(puVar11,pbVar17);
      puStack_160 = &UNK_0040958b;
      func_0x0032eb30(uVar5,&UNK_001696d0,8);
      if ((abStack_148[0] & 1) != 0) {
        puStack_160 = &UNK_004095a2;
        _ZdaPvSt11align_val_t(uStack_138);
      }
      puStack_160 = &UNK_004095ab;
      _ZN7android4base10LogMessageD2Ev(auStack_130);
      *puVar10 = uVar3;
    }
    puStack_160 = &UNK_004094c4;
    _ZN12LibUsbDevice5ResetEv(*(undefined8 *)(puVar16 + 6));
    puStack_160 = &UNK_004094cd;
    puVar9 = puVar16;
    (**(code **)(*(long *)puVar16 + 0x20))();
  }
  if (*(undefined4 **)(in_FS_OFFSET + 0x28) == puStack_128) {
    return *(undefined4 **)(in_FS_OFFSET + 0x28);
  }
  puStack_160 = &UNK_00409663;
  func_0x0099bd00();
  puStack_190 = *(undefined4 **)(in_FS_OFFSET + 0x28);
  puVar7 = puVar9 + 0x18;
  puStack_188 = puVar16;
  pbStack_180 = pbVar17;
  pbStack_178 = puVar18;
  puStack_170 = puVar10;
  puStack_168 = puVar11;
  puStack_160 = (undefined *)apuStack_f8;
  _ZNSt3__15mutex4lockEv(puVar7);
  if (*(char *)((long)puVar9 + 0x11) == '\0') {
    pbVar17 = (byte *)0x0;
    cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(2);
    if (cVar2 != '\0') {
      puVar11 = (undefined4 *)func_0x0099bce0();
      uVar1 = *puVar11;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&uStack_198,&UNK_0016b012,0x9f,2,0,0xffffffff);
      uVar5 = _ZN7android4base10LogMessage6streamEv(&uStack_198);
      uVar5 = func_0x0032eb30(uVar5,&UNK_001645c0,0x11);
      _ZNK10Connection6SerialEv(&bStack_1b0,puVar9);
      uVar5 = func_0x0032e5a0(uVar5,&bStack_1b0);
      pbVar17 = &UNK_00181c96;
      func_0x0032eb30(uVar5,&UNK_00181c96,0x13);
      if ((bStack_1b0 & 1) != 0) {
        pbVar17 = (byte *)(CONCAT17(uStack_1a9,CONCAT61(uStack_1af,bStack_1b0)) & 0xfffffffffffffffe
                          );
        _ZdaPvSt11align_val_t(uStack_1a0);
      }
      _ZN7android4base10LogMessageD2Ev(&uStack_198);
      *puVar11 = uVar1;
    }
    _ZNSt3__115recursive_mutex6unlockEv();
  }
  else {
    *(undefined1 *)((long)puVar9 + 0x11) = 0;
    _ZNSt3__115recursive_mutex6unlockEv(puVar7);
    cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(2,0);
    if (cVar2 != '\0') {
      puVar11 = (undefined4 *)func_0x0099bce0();
      uVar1 = *puVar11;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&uStack_198,&UNK_0016b012,0xa6,2,0,0xffffffff);
      uVar5 = _ZN7android4base10LogMessage6streamEv(&uStack_198);
      uVar5 = func_0x0032eb30(uVar5,&UNK_001645c0,0x11);
      _ZNK10Connection6SerialEv(&bStack_1b0,puVar9);
      uVar5 = func_0x0032e5a0(uVar5,&bStack_1b0);
      func_0x0032eb30(uVar5,&UNK_00183504,0xb);
      if ((bStack_1b0 & 1) != 0) {
        _ZdaPvSt11align_val_t
                  (uStack_1a0,
                   CONCAT17(uStack_1a9,CONCAT61(uStack_1af,bStack_1b0)) & 0xfffffffffffffffe);
      }
      _ZN7android4base10LogMessageD2Ev(&uStack_198);
      *puVar11 = uVar1;
    }
    _ZN12LibUsbDevice5CloseEv(*(undefined8 *)(puVar9 + 6));
    _ZNSt3__118condition_variable10notify_oneEv(puVar9 + 0x22);
    _ZNSt3__15mutex4lockEv(puVar7);
    uStack_198 = *(undefined8 *)(puVar9 + 8);
    puVar9[8] = 0;
    puVar9[9] = 0;
    uStack_1b8 = *(undefined8 *)(puVar9 + 10);
    puVar9[10] = 0;
    puVar9[0xb] = 0;
    _ZNSt3__115recursive_mutex6unlockEv(puVar7);
    _ZNSt3__16thread4joinEv(&uStack_198);
    _ZNSt3__16thread4joinEv(&uStack_1b8);
    bStack_1b0 = 0x1c;
    uStack_1af = 0x7220706f7473;
    uStack_1a9 = 0x65;
    uStack_1a8 = 0x71;
    uStack_1a7 = 0x646574736575;
    uStack_1a1 = 0;
    pbVar17 = &bStack_1b0;
    _ZN16LibUsbConnection10HandleStopERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
              (puVar9);
    if ((bStack_1b0 & 1) != 0) {
      pbVar17 = (byte *)(CONCAT17(uStack_1a9,CONCAT61(uStack_1af,bStack_1b0)) & 0xfffffffffffffffe);
      _ZdaPvSt11align_val_t(uStack_1a0);
    }
    _ZNSt3__15mutex4lockEv(puVar7);
    func_0x003f11f0(puVar9 + 0xc);
    _ZNSt3__115recursive_mutex6unlockEv(puVar7);
    _ZNSt3__16threadD2Ev(&uStack_1b8);
    puVar7 = (uint *)&uStack_198;
    _ZNSt3__16threadD2Ev();
  }
  if (*(undefined4 **)(in_FS_OFFSET + 0x28) == puStack_190) {
    return *(undefined4 **)(in_FS_OFFSET + 0x28);
  }
  func_0x0099bd00();
  _ZNSt3__15mutex4lockEv(puVar7 + 0x18);
  lVar12 = *(long *)(puVar7 + 0xe);
  uVar14 = 0;
  if (*(long *)(puVar7 + 0x10) != lVar12) {
    uVar14 = (*(long *)(puVar7 + 0x10) - lVar12) * 0x40 - 1;
  }
  uVar13 = *(long *)(puVar7 + 0x16) + *(long *)(puVar7 + 0x14);
  if (uVar14 == uVar13) {
    func_0x003f1340(puVar7 + 0xc);
    lVar12 = *(long *)(puVar7 + 0xe);
    uVar13 = *(long *)(puVar7 + 0x14) + *(long *)(puVar7 + 0x16);
  }
  lVar12 = *(long *)(lVar12 + (uVar13 >> 9) * 8);
  pbVar17[0] = 0;
  pbVar17[1] = 0;
  pbVar17[2] = 0;
  pbVar17[3] = 0;
  pbVar17[4] = 0;
  pbVar17[5] = 0;
  pbVar17[6] = 0;
  pbVar17[7] = 0;
  *(undefined8 *)(lVar12 + (ulong)((uint)uVar13 & 0x1ff) * 8) = *(undefined8 *)pbVar17;
  *(long *)(puVar7 + 0x16) = *(long *)(puVar7 + 0x16) + 1;
  _ZNSt3__115recursive_mutex6unlockEv(puVar7 + 0x18);
  _ZNSt3__118condition_variable10notify_oneEv(puVar7 + 0x22);
  return (undefined4 *)0x1;
}


