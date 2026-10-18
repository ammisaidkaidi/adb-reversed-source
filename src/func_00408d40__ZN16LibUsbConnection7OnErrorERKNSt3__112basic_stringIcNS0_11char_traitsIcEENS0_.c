// Function: _ZN16LibUsbConnection7OnErrorERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
// Address: 00408d40
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined4 *
_ZN16LibUsbConnection7OnErrorERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
          (long param_1,long ***param_2)

{
  long ***ppplVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  uint *puVar8;
  long *plVar9;
  uint ****ppppuVar10;
  uint *puVar11;
  undefined4 *puVar12;
  long lVar13;
  ulong uVar14;
  uint *****unaff_RBX;
  ulong uVar15;
  uint *****pppppuVar16;
  uint *****pppppuVar17;
  uint *****pppppuVar18;
  uint *puVar19;
  uint *puVar20;
  ulong unaff_R12;
  byte *pbVar21;
  uint *****unaff_R13;
  undefined1 *puVar22;
  uint *****unaff_R14;
  long ***unaff_R15;
  long in_FS_OFFSET;
  undefined8 uStack_268;
  byte bStack_260;
  undefined6 uStack_25f;
  undefined1 uStack_259;
  undefined1 uStack_258;
  undefined6 uStack_257;
  undefined1 uStack_251;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined4 *puStack_240;
  uint *puStack_238;
  byte *pbStack_230;
  byte *pbStack_228;
  uint *puStack_220;
  undefined4 *puStack_218;
  undefined *puStack_210;
  undefined4 uStack_1fc;
  byte abStack_1f8 [16];
  undefined8 uStack_1e8;
  undefined1 auStack_1e0 [8];
  undefined4 *puStack_1d8;
  uint ***pppuStack_1d0;
  byte *pbStack_1c8;
  byte *pbStack_1c0;
  uint *puStack_1b8;
  undefined4 *puStack_1b0;
  undefined *apuStack_1a8 [2];
  uint auStack_198 [2];
  long lStack_190;
  uint ***pppuStack_188;
  uint *puStack_180;
  undefined4 *puStack_178;
  undefined *puStack_170;
  uint **ppuStack_168;
  undefined4 *puStack_160;
  uint ****ppppuStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  uint ***pppuStack_140;
  undefined4 *puStack_138;
  uint ****ppppuStack_130;
  uint ****ppppuStack_128;
  undefined *puStack_120;
  undefined4 *puStack_118;
  undefined4 uStack_10c;
  byte abStack_108 [16];
  undefined8 uStack_f8;
  undefined1 auStack_f0 [8];
  long lStack_e8;
  uint ****ppppuStack_e0;
  ulong uStack_d8;
  uint ****ppppuStack_d0;
  uint ****ppppuStack_c8;
  long ***ppplStack_c0;
  undefined *puStack_b8;
  uint ****ppppuStack_b0;
  uint uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  uint ****ppppuStack_98;
  uint ****ppppuStack_90;
  uint ****ppppuStack_88;
  undefined4 *puStack_80;
  uint ****ppppuStack_78;
  undefined *puStack_50;
  long lStack_48;
  uint uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  uint ****ppppuStack_30;
  long **pplStack_28;
  long *plStack_20;
  undefined4 *puStack_18;
  
  puStack_18 = *(undefined4 **)(in_FS_OFFSET + 0x28);
  pppppuVar16 = (uint *****)(param_1 + 0xb8);
  lStack_48 = param_1;
  if (((ulong)*param_2 & 1) == 0) {
    ppppuStack_30 = (uint ****)param_2[2];
    uStack_40 = *(uint *)param_2;
    uStack_3c = *(undefined4 *)((long)param_2 + 4);
    uStack_38 = *(undefined4 *)(param_2 + 1);
    uStack_34 = *(undefined4 *)((long)param_2 + 0xc);
  }
  else {
    ppplVar1 = param_2 + 1;
    param_2 = (long ***)param_2[2];
    puStack_50 = &UNK_00408d8d;
    func_0x00330340(&uStack_40,param_2,*ppplVar1);
    unaff_RBX = pppppuVar16;
  }
  if (*pppppuVar16 != (uint ****)0xffffffffffffffff) {
    plStack_20 = &lStack_48;
    pplStack_28 = &plStack_20;
    param_2 = &pplStack_28;
    puStack_50 = &UNK_00408db9;
    _ZNSt3__111__call_onceERVmPvPFvS2_E(pppppuVar16,param_2,&UNK_00409d20);
  }
  if ((uStack_40 & 1) != 0) {
    param_2 = (long ***)(CONCAT44(uStack_3c,uStack_40) & 0xfffffffffffffffe);
    puStack_50 = &UNK_00408dd0;
    pppppuVar16 = (uint *****)ppppuStack_30;
    _ZdaPvSt11align_val_t();
  }
  if (*(undefined4 **)(in_FS_OFFSET + 0x28) == puStack_18) {
    return *(undefined4 **)(in_FS_OFFSET + 0x28);
  }
  puStack_50 = &UNK_00408deb;
  func_0x0099bd00();
  puStack_50 = &stack0xfffffffffffffff8;
  ppppuStack_78 = (uint ****)unaff_RBX;
  puStack_80 = *(undefined4 **)(in_FS_OFFSET + 0x28);
  if (*(char *)(pppppuVar16 + 2) == '\x01') {
    pppppuVar17 = pppppuVar16;
    if ((((byte)adb_trace_mask & 0x20) != 0) && ((int)adb_trace_severity._20_4_ < 2)) {
      pppppuVar17 = (uint *****)0x1;
      puStack_b8 = &UNK_00408e4d;
      cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc();
      unaff_R13 = pppppuVar16;
      unaff_R15 = param_2;
      if (cVar3 != '\0') {
        puStack_b8 = &UNK_00408e5a;
        unaff_RBX = (uint *****)func_0x0099bce0();
        uVar4 = *(uint *)unaff_RBX;
        unaff_R12 = (ulong)uVar4;
        unaff_R14 = &ppppuStack_b0;
        puStack_b8 = &UNK_00408e86;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (unaff_R14,&UNK_0016b012,0x44,1,0,0xffffffff);
        puStack_b8 = &UNK_00408e8e;
        uVar6 = _ZN7android4base10LogMessage6streamEv(unaff_R14);
        puStack_b8 = &UNK_00408ea2;
        uVar6 = func_0x0032eb30(uVar6,&UNK_0018aeda,0x15);
        puStack_b8 = &UNK_00408ead;
        uVar6 = func_0x0032e5a0(uVar6,param_2);
        puStack_b8 = &UNK_00408ec1;
        uVar6 = func_0x0032eb30(uVar6,&UNK_0015b272,0x11);
        puStack_b8 = &UNK_00408ed1;
        uVar6 = func_0x0032e5a0(uVar6,pppppuVar16[1] + 5);
        puStack_b8 = &UNK_00408ee5;
        func_0x0032eb30(uVar6,&UNK_0017a287,0xc);
        puStack_b8 = &UNK_00408eed;
        pppppuVar17 = unaff_R14;
        _ZN7android4base10LogMessageD2Ev();
        *(uint *)unaff_RBX = uVar4;
      }
    }
  }
  else {
    ppppuStack_b0 = (uint ****)pppppuVar16;
    pppppuVar17 = pppppuVar16 + 0x17;
    if (((ulong)*param_2 & 1) == 0) {
      ppppuStack_98 = (uint ****)param_2[2];
      uStack_a8 = *(uint *)param_2;
      uStack_a4 = *(undefined4 *)((long)param_2 + 4);
      uStack_a0 = *(undefined4 *)(param_2 + 1);
      uStack_9c = *(undefined4 *)((long)param_2 + 0xc);
    }
    else {
      puStack_b8 = &UNK_00408f29;
      func_0x00330340(&uStack_a8,param_2[2],param_2[1]);
      unaff_RBX = pppppuVar17;
    }
    if (*pppppuVar17 != (uint ****)0xffffffffffffffff) {
      ppppuStack_88 = (uint ****)&ppppuStack_b0;
      ppppuStack_90 = (uint ****)&ppppuStack_88;
      puStack_b8 = &UNK_00408f55;
      _ZNSt3__111__call_onceERVmPvPFvS2_E(pppppuVar17,&ppppuStack_90,&UNK_00409d20);
    }
    if ((uStack_a8 & 1) != 0) {
      puStack_b8 = &UNK_00408f6c;
      pppppuVar17 = (uint *****)ppppuStack_98;
      _ZdaPvSt11align_val_t();
    }
  }
  if (*(undefined4 **)(in_FS_OFFSET + 0x28) == puStack_80) {
    return *(undefined4 **)(in_FS_OFFSET + 0x28);
  }
  puStack_b8 = &UNK_00408f8f;
  func_0x0099bd00();
  lStack_e8 = *(long *)(in_FS_OFFSET + 0x28);
  pbVar21 = (byte *)&adb_trace_mask;
  puVar22 = adb_trace_severity;
  ppppuStack_e0 = (uint ****)unaff_RBX;
  uStack_d8 = unaff_R12;
  ppppuStack_d0 = (uint ****)unaff_R13;
  ppppuStack_c8 = (uint ****)unaff_R14;
  ppplStack_c0 = unaff_R15;
  puStack_b8 = (undefined *)&puStack_50;
  if ((((byte)adb_trace_mask & 0x20) != 0) &&
     (puStack_b8 = (undefined *)&puStack_50, (int)adb_trace_severity._20_4_ < 2)) {
    puStack_120 = &UNK_00409066;
    puStack_b8 = (undefined *)&puStack_50;
    cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1);
    if (cVar3 != '\0') {
      puStack_120 = &UNK_00409073;
      puVar12 = (undefined4 *)func_0x0099bce0();
      puStack_118 = (undefined4 *)CONCAT44(puStack_118._4_4_,*puVar12);
      puStack_120 = &UNK_004090a1;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (abStack_108,&UNK_0016b012,0x4c,1,0,0xffffffff);
      puStack_120 = &UNK_004090a9;
      uVar6 = _ZN7android4base10LogMessage6streamEv(abStack_108);
      puStack_120 = &UNK_004090bd;
      func_0x0032eb30(uVar6,&UNK_00167c65,0x19);
      puStack_120 = &UNK_004090c5;
      _ZN7android4base10LogMessageD2Ev(abStack_108);
      *puVar12 = puStack_118._0_4_;
    }
  }
  pppppuVar16 = pppppuVar17 + 0xc;
  puStack_120 = &UNK_00408fdd;
  _ZNSt3__15mutex4lockEv(pppppuVar16);
  if (((*(char *)((long)pppppuVar17 + 0x11) == '\x01') && (((byte)adb_trace_mask & 0x20) != 0)) &&
     ((int)adb_trace_severity._20_4_ < 2)) {
    puStack_120 = &UNK_004090dc;
    cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1);
    if (cVar3 != '\0') {
      puStack_120 = &UNK_004090e9;
      puStack_118 = (undefined4 *)func_0x0099bce0();
      uStack_10c = *puStack_118;
      puStack_120 = &UNK_00409118;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_f0,&UNK_0016b012,0x4f,1,0,0xffffffff);
      puStack_120 = &UNK_00409120;
      uVar6 = _ZN7android4base10LogMessage6streamEv(auStack_f0);
      puStack_120 = &UNK_00409134;
      uVar6 = func_0x0032eb30(uVar6,&UNK_001645c0,0x11);
      puStack_120 = &UNK_00409143;
      _ZNK10Connection6SerialEv(abStack_108,pppppuVar17);
      puStack_120 = &UNK_0040914f;
      uVar6 = func_0x0032e5a0(uVar6,abStack_108);
      puStack_120 = &UNK_00409163;
      func_0x0032eb30(uVar6,&UNK_001867c9,0x12);
      if ((abStack_108[0] & 1) != 0) {
        puStack_120 = &UNK_0040917a;
        _ZdaPvSt11align_val_t(uStack_f8);
      }
      puStack_120 = &UNK_00409183;
      _ZN7android4base10LogMessageD2Ev(auStack_f0);
      *puStack_118 = uStack_10c;
    }
  }
  puStack_120 = &UNK_00408ffe;
  uVar4 = _ZN12LibUsbDevice4OpenEv(pppppuVar17[3]);
  puVar12 = (undefined4 *)(ulong)uVar4;
  if ((char)uVar4 == '\0') {
    if ((((byte)adb_trace_mask & 0x20) != 0) && ((int)adb_trace_severity._20_4_ < 2)) {
      puStack_120 = &UNK_0040919d;
      cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1);
      if (cVar3 != '\0') {
        puStack_120 = &UNK_004091aa;
        puStack_118 = (undefined4 *)func_0x0099bce0();
        uStack_10c = *puStack_118;
        puStack_120 = &UNK_004091d9;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (auStack_f0,&UNK_0016b012,0x53,1,0,0xffffffff);
        puStack_120 = &UNK_004091e1;
        uVar6 = _ZN7android4base10LogMessage6streamEv(auStack_f0);
        puStack_120 = &UNK_004091f5;
        puVar22 = (undefined1 *)func_0x0032eb30(uVar6,&UNK_00172483,0x10);
        pbVar21 = abStack_108;
        puStack_120 = &UNK_00409207;
        _ZNK10Connection6SerialEv(pbVar21,pppppuVar17);
        puStack_120 = &UNK_00409212;
        uVar6 = func_0x0032e5a0(puVar22,pbVar21);
        puStack_120 = &UNK_00409226;
        func_0x0032eb30(uVar6,&UNK_001645d2,0x17);
        if ((abStack_108[0] & 1) != 0) {
          puStack_120 = &UNK_0040923d;
          _ZdaPvSt11align_val_t(uStack_f8);
        }
        puStack_120 = &UNK_00409246;
        _ZN7android4base10LogMessageD2Ev(auStack_f0);
        *puStack_118 = uStack_10c;
      }
    }
  }
  else {
    puStack_120 = &UNK_0040900d;
    _ZN16LibUsbConnection15StartReadThreadEv(pppppuVar17);
    puStack_120 = &UNK_00409015;
    _ZN16LibUsbConnection16StartWriteThreadEv(pppppuVar17);
    *(undefined1 *)((long)pppppuVar17 + 0x11) = 1;
  }
  puStack_120 = &UNK_00409035;
  pppppuVar18 = pppppuVar16;
  _ZNSt3__115recursive_mutex6unlockEv();
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_e8) {
    return puVar12;
  }
  puStack_120 = &UNK_00409259;
  func_0x0099bd00();
  puStack_138 = *(undefined4 **)(in_FS_OFFSET + 0x28);
  puStack_148 = &UNK_00409285;
  ppppuStack_130 = (uint ****)pppppuVar17;
  ppppuStack_128 = (uint ****)pppppuVar16;
  puStack_120 = (undefined *)&puStack_b8;
  uVar6 = _Znwm(8);
  puStack_148 = &UNK_00409290;
  _ZNSt3__115__thread_structC2Ev(uVar6);
  puStack_148 = &UNK_0040929a;
  puVar7 = (undefined8 *)_Znwm(0x10);
  *puVar7 = uVar6;
  puVar7[1] = pppppuVar18;
  ppppuVar10 = &pppuStack_140;
  puStack_148 = &UNK_004092b6;
  uVar4 = func_0x0099be80(ppppuVar10,0,&UNK_00409d60,puVar7);
  if (uVar4 == 0) {
    if (pppppuVar18[4] != (uint ****)0x0) goto code_r0x00409300;
    pppppuVar18[4] = (uint ****)pppuStack_140;
    pppuStack_140 = (uint ***)0x0;
    ppppuVar10 = &pppuStack_140;
    puStack_148 = &UNK_004092da;
    _ZNSt3__16threadD2Ev();
    if (*(undefined4 **)(in_FS_OFFSET + 0x28) == puStack_138) {
      return *(undefined4 **)(in_FS_OFFSET + 0x28);
    }
  }
  else {
    ppppuVar10 = (uint ****)(ulong)uVar4;
    puStack_148 = &UNK_00409300;
    _ZNSt3__120__throw_system_errorEiPKc();
code_r0x00409300:
    puStack_148 = &UNK_00409305;
    _ZSt9terminatev();
  }
  puStack_148 = &UNK_0040930a;
  func_0x0099bd00();
  puStack_160 = *(undefined4 **)(in_FS_OFFSET + 0x28);
  puStack_170 = &UNK_00409335;
  ppppuStack_158 = (uint ****)pppppuVar18;
  uStack_150 = uVar6;
  puStack_148 = (undefined *)&puStack_120;
  puVar8 = (uint *)_Znwm(8);
  puStack_170 = &UNK_00409340;
  _ZNSt3__115__thread_structC2Ev(puVar8);
  puStack_170 = &UNK_0040934a;
  plVar9 = (long *)_Znwm(0x10);
  *plVar9 = (long)puVar8;
  plVar9[1] = (long)ppppuVar10;
  puStack_170 = &UNK_00409366;
  iVar5 = func_0x0099be80(&ppuStack_168,0,&UNK_0040a090,plVar9);
  if (iVar5 == 0) {
    if (ppppuVar10[5] == (uint ***)0x0) {
      ppppuVar10[5] = (uint ***)ppuStack_168;
      ppuStack_168 = (uint **)0x0;
      puStack_170 = &UNK_0040938a;
      _ZNSt3__16threadD2Ev(&ppuStack_168);
      if (*(undefined4 **)(in_FS_OFFSET + 0x28) == puStack_160) {
        return *(undefined4 **)(in_FS_OFFSET + 0x28);
      }
      goto code_r0x004093b5;
    }
  }
  else {
    puStack_170 = &UNK_004093b0;
    _ZNSt3__120__throw_system_errorEiPKc(iVar5);
  }
  puStack_170 = &UNK_004093b5;
  _ZSt9terminatev();
code_r0x004093b5:
  puStack_170 = &UNK_004093ba;
  func_0x0099bd00();
  lStack_190 = *(long *)(in_FS_OFFSET + 0x28);
  puVar19 = (uint *)0x3;
  apuStack_1a8[0] = &UNK_004093e6;
  pppuStack_188 = (uint ***)ppppuVar10;
  puStack_180 = puVar8;
  puStack_178 = puVar12;
  puStack_170 = (undefined *)&puStack_148;
  cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc();
  if (cVar3 != '\0') {
    apuStack_1a8[0] = &UNK_0040940b;
    ppppuVar10 = (uint ****)func_0x0099bce0();
    uVar4 = *(uint *)ppppuVar10;
    puVar12 = (undefined4 *)(ulong)uVar4;
    puVar8 = auStack_198;
    apuStack_1a8[0] = &UNK_00409437;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (puVar8,&UNK_0016b012,0x88,3,0,0xffffffff);
    apuStack_1a8[0] = &UNK_0040943f;
    uVar6 = _ZN7android4base10LogMessage6streamEv(puVar8);
    apuStack_1a8[0] = &UNK_00409453;
    func_0x0032eb30(uVar6,&UNK_001614cf,0x2f);
    apuStack_1a8[0] = &UNK_0040945b;
    puVar19 = puVar8;
    _ZN7android4base10LogMessageD2Ev();
    *(uint *)ppppuVar10 = uVar4;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_190) {
    return (undefined4 *)0x0;
  }
  apuStack_1a8[0] = &UNK_00409465;
  func_0x0099bd00();
  puStack_1d8 = *(undefined4 **)(in_FS_OFFSET + 0x28);
  puVar11 = puVar19 + 0x18;
  puStack_210 = &UNK_0040949d;
  pppuStack_1d0 = (uint ***)ppppuVar10;
  pbStack_1c8 = pbVar21;
  pbStack_1c0 = puVar22;
  puStack_1b8 = puVar8;
  puStack_1b0 = puVar12;
  apuStack_1a8[0] = (undefined *)&puStack_170;
  _ZNSt3__15mutex4lockEv(puVar11);
  if (*(char *)((long)puVar19 + 0x11) == '\0') {
    puStack_210 = &UNK_004094db;
    cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(2);
    if (cVar3 != '\0') {
      puStack_210 = &UNK_004095b8;
      puVar12 = (undefined4 *)func_0x0099bce0();
      uStack_1fc = *puVar12;
      puStack_210 = &UNK_004095e6;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_1e0,&UNK_0016b012,0x90,2,0,0xffffffff);
      puStack_210 = &UNK_004095ee;
      uVar6 = _ZN7android4base10LogMessage6streamEv(auStack_1e0);
      puStack_210 = &UNK_00409602;
      pbVar21 = (byte *)func_0x0032eb30(uVar6,&UNK_001645c0,0x11);
      puVar22 = abStack_1f8;
      puStack_210 = &UNK_00409614;
      _ZNK10Connection6SerialEv(puVar22,puVar19);
      puStack_210 = &UNK_0040961f;
      uVar6 = func_0x0032e5a0(pbVar21,puVar22);
      puStack_210 = &UNK_00409633;
      func_0x0032eb30(uVar6,&UNK_00178bf3,0xe);
      if ((abStack_1f8[0] & 1) != 0) {
        puStack_210 = &UNK_0040964a;
        _ZdaPvSt11align_val_t(uStack_1e8);
      }
      puStack_210 = &UNK_00409653;
      _ZN7android4base10LogMessageD2Ev(auStack_1e0);
      *puVar12 = uStack_1fc;
    }
    puStack_210 = &UNK_004094eb;
    puVar8 = puVar11;
    _ZNSt3__115recursive_mutex6unlockEv();
  }
  else {
    puStack_210 = &UNK_004094ab;
    _ZNSt3__115recursive_mutex6unlockEv(puVar11);
    puStack_210 = &UNK_004094b7;
    cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(2);
    if (cVar3 != '\0') {
      puStack_210 = &UNK_00409512;
      puVar11 = (uint *)func_0x0099bce0();
      uVar4 = *puVar11;
      puVar22 = (undefined1 *)(ulong)uVar4;
      puStack_210 = &UNK_0040953e;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_1e0,&UNK_0016b012,0x95,2,0,0xffffffff);
      puStack_210 = &UNK_00409546;
      uVar6 = _ZN7android4base10LogMessage6streamEv(auStack_1e0);
      puStack_210 = &UNK_0040955a;
      puVar12 = (undefined4 *)func_0x0032eb30(uVar6,&UNK_001645c0,0x11);
      pbVar21 = abStack_1f8;
      puStack_210 = &UNK_0040956c;
      _ZNK10Connection6SerialEv(pbVar21,puVar19);
      puStack_210 = &UNK_00409577;
      uVar6 = func_0x0032e5a0(puVar12,pbVar21);
      puStack_210 = &UNK_0040958b;
      func_0x0032eb30(uVar6,&UNK_001696d0,8);
      if ((abStack_1f8[0] & 1) != 0) {
        puStack_210 = &UNK_004095a2;
        _ZdaPvSt11align_val_t(uStack_1e8);
      }
      puStack_210 = &UNK_004095ab;
      _ZN7android4base10LogMessageD2Ev(auStack_1e0);
      *puVar11 = uVar4;
    }
    puStack_210 = &UNK_004094c4;
    _ZN12LibUsbDevice5ResetEv(*(undefined8 *)(puVar19 + 6));
    puStack_210 = &UNK_004094cd;
    puVar8 = puVar19;
    (**(code **)(*(long *)puVar19 + 0x20))();
  }
  if (*(undefined4 **)(in_FS_OFFSET + 0x28) == puStack_1d8) {
    return *(undefined4 **)(in_FS_OFFSET + 0x28);
  }
  puStack_210 = &UNK_00409663;
  func_0x0099bd00();
  puStack_240 = *(undefined4 **)(in_FS_OFFSET + 0x28);
  puVar20 = puVar8 + 0x18;
  puStack_238 = puVar19;
  pbStack_230 = pbVar21;
  pbStack_228 = puVar22;
  puStack_220 = puVar11;
  puStack_218 = puVar12;
  puStack_210 = (undefined *)apuStack_1a8;
  _ZNSt3__15mutex4lockEv(puVar20);
  if (*(char *)((long)puVar8 + 0x11) == '\0') {
    pbVar21 = (byte *)0x0;
    cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(2);
    if (cVar3 != '\0') {
      puVar12 = (undefined4 *)func_0x0099bce0();
      uVar2 = *puVar12;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&uStack_248,&UNK_0016b012,0x9f,2,0,0xffffffff);
      uVar6 = _ZN7android4base10LogMessage6streamEv(&uStack_248);
      uVar6 = func_0x0032eb30(uVar6,&UNK_001645c0,0x11);
      _ZNK10Connection6SerialEv(&bStack_260,puVar8);
      uVar6 = func_0x0032e5a0(uVar6,&bStack_260);
      pbVar21 = &UNK_00181c96;
      func_0x0032eb30(uVar6,&UNK_00181c96,0x13);
      if ((bStack_260 & 1) != 0) {
        pbVar21 = (byte *)(CONCAT17(uStack_259,CONCAT61(uStack_25f,bStack_260)) & 0xfffffffffffffffe
                          );
        _ZdaPvSt11align_val_t(uStack_250);
      }
      _ZN7android4base10LogMessageD2Ev(&uStack_248);
      *puVar12 = uVar2;
    }
    _ZNSt3__115recursive_mutex6unlockEv();
  }
  else {
    *(undefined1 *)((long)puVar8 + 0x11) = 0;
    _ZNSt3__115recursive_mutex6unlockEv(puVar20);
    cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(2,0);
    if (cVar3 != '\0') {
      puVar12 = (undefined4 *)func_0x0099bce0();
      uVar2 = *puVar12;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&uStack_248,&UNK_0016b012,0xa6,2,0,0xffffffff);
      uVar6 = _ZN7android4base10LogMessage6streamEv(&uStack_248);
      uVar6 = func_0x0032eb30(uVar6,&UNK_001645c0,0x11);
      _ZNK10Connection6SerialEv(&bStack_260,puVar8);
      uVar6 = func_0x0032e5a0(uVar6,&bStack_260);
      func_0x0032eb30(uVar6,&UNK_00183504,0xb);
      if ((bStack_260 & 1) != 0) {
        _ZdaPvSt11align_val_t
                  (uStack_250,
                   CONCAT17(uStack_259,CONCAT61(uStack_25f,bStack_260)) & 0xfffffffffffffffe);
      }
      _ZN7android4base10LogMessageD2Ev(&uStack_248);
      *puVar12 = uVar2;
    }
    _ZN12LibUsbDevice5CloseEv(*(undefined8 *)(puVar8 + 6));
    _ZNSt3__118condition_variable10notify_oneEv(puVar8 + 0x22);
    _ZNSt3__15mutex4lockEv(puVar20);
    uStack_248 = *(undefined8 *)(puVar8 + 8);
    puVar8[8] = 0;
    puVar8[9] = 0;
    uStack_268 = *(undefined8 *)(puVar8 + 10);
    puVar8[10] = 0;
    puVar8[0xb] = 0;
    _ZNSt3__115recursive_mutex6unlockEv(puVar20);
    _ZNSt3__16thread4joinEv(&uStack_248);
    _ZNSt3__16thread4joinEv(&uStack_268);
    bStack_260 = 0x1c;
    uStack_25f = 0x7220706f7473;
    uStack_259 = 0x65;
    uStack_258 = 0x71;
    uStack_257 = 0x646574736575;
    uStack_251 = 0;
    pbVar21 = &bStack_260;
    _ZN16LibUsbConnection10HandleStopERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
              (puVar8);
    if ((bStack_260 & 1) != 0) {
      pbVar21 = (byte *)(CONCAT17(uStack_259,CONCAT61(uStack_25f,bStack_260)) & 0xfffffffffffffffe);
      _ZdaPvSt11align_val_t(uStack_250);
    }
    _ZNSt3__15mutex4lockEv(puVar20);
    func_0x003f11f0(puVar8 + 0xc);
    _ZNSt3__115recursive_mutex6unlockEv(puVar20);
    _ZNSt3__16threadD2Ev(&uStack_268);
    puVar20 = (uint *)&uStack_248;
    _ZNSt3__16threadD2Ev();
  }
  if (*(undefined4 **)(in_FS_OFFSET + 0x28) == puStack_240) {
    return *(undefined4 **)(in_FS_OFFSET + 0x28);
  }
  func_0x0099bd00();
  _ZNSt3__15mutex4lockEv(puVar20 + 0x18);
  lVar13 = *(long *)(puVar20 + 0xe);
  uVar15 = 0;
  if (*(long *)(puVar20 + 0x10) != lVar13) {
    uVar15 = (*(long *)(puVar20 + 0x10) - lVar13) * 0x40 - 1;
  }
  uVar14 = *(long *)(puVar20 + 0x16) + *(long *)(puVar20 + 0x14);
  if (uVar15 == uVar14) {
    func_0x003f1340(puVar20 + 0xc);
    lVar13 = *(long *)(puVar20 + 0xe);
    uVar14 = *(long *)(puVar20 + 0x14) + *(long *)(puVar20 + 0x16);
  }
  lVar13 = *(long *)(lVar13 + (uVar14 >> 9) * 8);
  pbVar21[0] = 0;
  pbVar21[1] = 0;
  pbVar21[2] = 0;
  pbVar21[3] = 0;
  pbVar21[4] = 0;
  pbVar21[5] = 0;
  pbVar21[6] = 0;
  pbVar21[7] = 0;
  *(undefined8 *)(lVar13 + (ulong)((uint)uVar14 & 0x1ff) * 8) = *(undefined8 *)pbVar21;
  *(long *)(puVar20 + 0x16) = *(long *)(puVar20 + 0x16) + 1;
  _ZNSt3__115recursive_mutex6unlockEv(puVar20 + 0x18);
  _ZNSt3__118condition_variable10notify_oneEv(puVar20 + 0x22);
  return (undefined4 *)0x1;
}


