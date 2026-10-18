// Function: _ZN16LibUsbConnection10HandleStopERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
// Address: 00408df0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined4 *
_ZN16LibUsbConnection10HandleStopERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
          (uint *****param_1,uint *param_2)

{
  uint *****pppppuVar1;
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
  uint *puVar18;
  uint *puVar19;
  ulong unaff_R12;
  byte *pbVar20;
  uint *****unaff_R13;
  undefined1 *puVar21;
  uint *****unaff_R14;
  uint *unaff_R15;
  long in_FS_OFFSET;
  undefined8 uStack_220;
  byte bStack_218;
  undefined6 uStack_217;
  undefined1 uStack_211;
  undefined1 uStack_210;
  undefined6 uStack_20f;
  undefined1 uStack_209;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined4 *puStack_1f8;
  uint *puStack_1f0;
  byte *pbStack_1e8;
  byte *pbStack_1e0;
  uint *puStack_1d8;
  undefined4 *puStack_1d0;
  undefined *puStack_1c8;
  undefined4 uStack_1b4;
  byte abStack_1b0 [16];
  undefined8 uStack_1a0;
  undefined1 auStack_198 [8];
  undefined4 *puStack_190;
  uint ***pppuStack_188;
  byte *pbStack_180;
  byte *pbStack_178;
  uint *puStack_170;
  undefined4 *puStack_168;
  undefined *apuStack_160 [2];
  uint auStack_150 [2];
  long lStack_148;
  uint ***pppuStack_140;
  uint *puStack_138;
  undefined4 *puStack_130;
  undefined *puStack_128;
  uint **ppuStack_120;
  undefined4 *puStack_118;
  uint ****ppppuStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  uint ***pppuStack_f8;
  undefined4 *puStack_f0;
  uint ****ppppuStack_e8;
  uint ****ppppuStack_e0;
  undefined *puStack_d8;
  undefined4 *puStack_d0;
  undefined4 uStack_c4;
  byte abStack_c0 [16];
  undefined8 uStack_b0;
  undefined1 auStack_a8 [8];
  long lStack_a0;
  uint ****ppppuStack_98;
  ulong uStack_90;
  uint ****ppppuStack_88;
  uint ****ppppuStack_80;
  uint *puStack_78;
  undefined *puStack_70;
  uint ****ppppuStack_68;
  uint uStack_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  uint ****ppppuStack_50;
  uint ****ppppuStack_48;
  uint ****ppppuStack_40;
  undefined4 *puStack_38;
  
  puStack_38 = *(undefined4 **)(in_FS_OFFSET + 0x28);
  if (*(char *)(param_1 + 2) == '\x01') {
    pppppuVar16 = param_1;
    if ((((byte)adb_trace_mask & 0x20) != 0) && ((int)adb_trace_severity._20_4_ < 2)) {
      pppppuVar16 = (uint *****)0x1;
      puStack_70 = &UNK_00408e4d;
      cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc();
      unaff_R13 = param_1;
      unaff_R15 = param_2;
      if (cVar3 != '\0') {
        puStack_70 = &UNK_00408e5a;
        unaff_RBX = (uint *****)func_0x0099bce0();
        uVar4 = *(uint *)unaff_RBX;
        unaff_R12 = (ulong)uVar4;
        unaff_R14 = &ppppuStack_68;
        puStack_70 = &UNK_00408e86;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (unaff_R14,&UNK_0016b012,0x44,1,0,0xffffffff);
        puStack_70 = &UNK_00408e8e;
        uVar6 = _ZN7android4base10LogMessage6streamEv(unaff_R14);
        puStack_70 = &UNK_00408ea2;
        uVar6 = func_0x0032eb30(uVar6,&UNK_0018aeda,0x15);
        puStack_70 = &UNK_00408ead;
        uVar6 = func_0x0032e5a0(uVar6,param_2);
        puStack_70 = &UNK_00408ec1;
        uVar6 = func_0x0032eb30(uVar6,&UNK_0015b272,0x11);
        puStack_70 = &UNK_00408ed1;
        uVar6 = func_0x0032e5a0(uVar6,param_1[1] + 5);
        puStack_70 = &UNK_00408ee5;
        func_0x0032eb30(uVar6,&UNK_0017a287,0xc);
        puStack_70 = &UNK_00408eed;
        pppppuVar16 = unaff_R14;
        _ZN7android4base10LogMessageD2Ev();
        *(uint *)unaff_RBX = uVar4;
      }
    }
  }
  else {
    pppppuVar16 = param_1 + 0x17;
    ppppuStack_68 = (uint ****)param_1;
    if ((*param_2 & 1) == 0) {
      ppppuStack_50 = *(uint *****)(param_2 + 4);
      uStack_60 = *param_2;
      uStack_5c = param_2[1];
      uStack_58 = param_2[2];
      uStack_54 = param_2[3];
    }
    else {
      puStack_70 = &UNK_00408f29;
      func_0x00330340(&uStack_60,*(undefined8 *)(param_2 + 4),*(undefined8 *)(param_2 + 2));
      unaff_RBX = pppppuVar16;
    }
    if (*pppppuVar16 != (uint ****)0xffffffffffffffff) {
      ppppuStack_40 = (uint ****)&ppppuStack_68;
      ppppuStack_48 = (uint ****)&ppppuStack_40;
      puStack_70 = &UNK_00408f55;
      _ZNSt3__111__call_onceERVmPvPFvS2_E(pppppuVar16,&ppppuStack_48,&UNK_00409d20);
    }
    if ((uStack_60 & 1) != 0) {
      puStack_70 = &UNK_00408f6c;
      pppppuVar16 = (uint *****)ppppuStack_50;
      _ZdaPvSt11align_val_t();
    }
  }
  if (*(undefined4 **)(in_FS_OFFSET + 0x28) == puStack_38) {
    return *(undefined4 **)(in_FS_OFFSET + 0x28);
  }
  puStack_70 = &UNK_00408f8f;
  func_0x0099bd00();
  lStack_a0 = *(long *)(in_FS_OFFSET + 0x28);
  pbVar20 = (byte *)&adb_trace_mask;
  puVar21 = adb_trace_severity;
  ppppuStack_98 = (uint ****)unaff_RBX;
  uStack_90 = unaff_R12;
  ppppuStack_88 = (uint ****)unaff_R13;
  ppppuStack_80 = (uint ****)unaff_R14;
  puStack_78 = unaff_R15;
  puStack_70 = &stack0xfffffffffffffff8;
  if ((((byte)adb_trace_mask & 0x20) != 0) &&
     (puStack_70 = &stack0xfffffffffffffff8, (int)adb_trace_severity._20_4_ < 2)) {
    puStack_d8 = &UNK_00409066;
    puStack_70 = &stack0xfffffffffffffff8;
    cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1);
    if (cVar3 != '\0') {
      puStack_d8 = &UNK_00409073;
      puVar12 = (undefined4 *)func_0x0099bce0();
      puStack_d0 = (undefined4 *)CONCAT44(puStack_d0._4_4_,*puVar12);
      puStack_d8 = &UNK_004090a1;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (abStack_c0,&UNK_0016b012,0x4c,1,0,0xffffffff);
      puStack_d8 = &UNK_004090a9;
      uVar6 = _ZN7android4base10LogMessage6streamEv(abStack_c0);
      puStack_d8 = &UNK_004090bd;
      func_0x0032eb30(uVar6,&UNK_00167c65,0x19);
      puStack_d8 = &UNK_004090c5;
      _ZN7android4base10LogMessageD2Ev(abStack_c0);
      *puVar12 = puStack_d0._0_4_;
    }
  }
  pppppuVar1 = pppppuVar16 + 0xc;
  puStack_d8 = &UNK_00408fdd;
  _ZNSt3__15mutex4lockEv(pppppuVar1);
  if (((*(char *)((long)pppppuVar16 + 0x11) == '\x01') && (((byte)adb_trace_mask & 0x20) != 0)) &&
     ((int)adb_trace_severity._20_4_ < 2)) {
    puStack_d8 = &UNK_004090dc;
    cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1);
    if (cVar3 != '\0') {
      puStack_d8 = &UNK_004090e9;
      puStack_d0 = (undefined4 *)func_0x0099bce0();
      uStack_c4 = *puStack_d0;
      puStack_d8 = &UNK_00409118;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_a8,&UNK_0016b012,0x4f,1,0,0xffffffff);
      puStack_d8 = &UNK_00409120;
      uVar6 = _ZN7android4base10LogMessage6streamEv(auStack_a8);
      puStack_d8 = &UNK_00409134;
      uVar6 = func_0x0032eb30(uVar6,&UNK_001645c0,0x11);
      puStack_d8 = &UNK_00409143;
      _ZNK10Connection6SerialEv(abStack_c0,pppppuVar16);
      puStack_d8 = &UNK_0040914f;
      uVar6 = func_0x0032e5a0(uVar6,abStack_c0);
      puStack_d8 = &UNK_00409163;
      func_0x0032eb30(uVar6,&UNK_001867c9,0x12);
      if ((abStack_c0[0] & 1) != 0) {
        puStack_d8 = &UNK_0040917a;
        _ZdaPvSt11align_val_t(uStack_b0);
      }
      puStack_d8 = &UNK_00409183;
      _ZN7android4base10LogMessageD2Ev(auStack_a8);
      *puStack_d0 = uStack_c4;
    }
  }
  puStack_d8 = &UNK_00408ffe;
  uVar4 = _ZN12LibUsbDevice4OpenEv(pppppuVar16[3]);
  puVar12 = (undefined4 *)(ulong)uVar4;
  if ((char)uVar4 == '\0') {
    if ((((byte)adb_trace_mask & 0x20) != 0) && ((int)adb_trace_severity._20_4_ < 2)) {
      puStack_d8 = &UNK_0040919d;
      cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1);
      if (cVar3 != '\0') {
        puStack_d8 = &UNK_004091aa;
        puStack_d0 = (undefined4 *)func_0x0099bce0();
        uStack_c4 = *puStack_d0;
        puStack_d8 = &UNK_004091d9;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (auStack_a8,&UNK_0016b012,0x53,1,0,0xffffffff);
        puStack_d8 = &UNK_004091e1;
        uVar6 = _ZN7android4base10LogMessage6streamEv(auStack_a8);
        puStack_d8 = &UNK_004091f5;
        puVar21 = (undefined1 *)func_0x0032eb30(uVar6,&UNK_00172483,0x10);
        pbVar20 = abStack_c0;
        puStack_d8 = &UNK_00409207;
        _ZNK10Connection6SerialEv(pbVar20,pppppuVar16);
        puStack_d8 = &UNK_00409212;
        uVar6 = func_0x0032e5a0(puVar21,pbVar20);
        puStack_d8 = &UNK_00409226;
        func_0x0032eb30(uVar6,&UNK_001645d2,0x17);
        if ((abStack_c0[0] & 1) != 0) {
          puStack_d8 = &UNK_0040923d;
          _ZdaPvSt11align_val_t(uStack_b0);
        }
        puStack_d8 = &UNK_00409246;
        _ZN7android4base10LogMessageD2Ev(auStack_a8);
        *puStack_d0 = uStack_c4;
      }
    }
  }
  else {
    puStack_d8 = &UNK_0040900d;
    _ZN16LibUsbConnection15StartReadThreadEv(pppppuVar16);
    puStack_d8 = &UNK_00409015;
    _ZN16LibUsbConnection16StartWriteThreadEv(pppppuVar16);
    *(undefined1 *)((long)pppppuVar16 + 0x11) = 1;
  }
  puStack_d8 = &UNK_00409035;
  pppppuVar17 = pppppuVar1;
  _ZNSt3__115recursive_mutex6unlockEv();
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_a0) {
    return puVar12;
  }
  puStack_d8 = &UNK_00409259;
  func_0x0099bd00();
  puStack_f0 = *(undefined4 **)(in_FS_OFFSET + 0x28);
  puStack_100 = &UNK_00409285;
  ppppuStack_e8 = (uint ****)pppppuVar16;
  ppppuStack_e0 = (uint ****)pppppuVar1;
  puStack_d8 = (undefined *)&puStack_70;
  uVar6 = _Znwm(8);
  puStack_100 = &UNK_00409290;
  _ZNSt3__115__thread_structC2Ev(uVar6);
  puStack_100 = &UNK_0040929a;
  puVar7 = (undefined8 *)_Znwm(0x10);
  *puVar7 = uVar6;
  puVar7[1] = pppppuVar17;
  ppppuVar10 = &pppuStack_f8;
  puStack_100 = &UNK_004092b6;
  uVar4 = func_0x0099be80(ppppuVar10,0,&UNK_00409d60,puVar7);
  if (uVar4 == 0) {
    if (pppppuVar17[4] != (uint ****)0x0) goto code_r0x00409300;
    pppppuVar17[4] = (uint ****)pppuStack_f8;
    pppuStack_f8 = (uint ***)0x0;
    ppppuVar10 = &pppuStack_f8;
    puStack_100 = &UNK_004092da;
    _ZNSt3__16threadD2Ev();
    if (*(undefined4 **)(in_FS_OFFSET + 0x28) == puStack_f0) {
      return *(undefined4 **)(in_FS_OFFSET + 0x28);
    }
  }
  else {
    ppppuVar10 = (uint ****)(ulong)uVar4;
    puStack_100 = &UNK_00409300;
    _ZNSt3__120__throw_system_errorEiPKc();
code_r0x00409300:
    puStack_100 = &UNK_00409305;
    _ZSt9terminatev();
  }
  puStack_100 = &UNK_0040930a;
  func_0x0099bd00();
  puStack_118 = *(undefined4 **)(in_FS_OFFSET + 0x28);
  puStack_128 = &UNK_00409335;
  ppppuStack_110 = (uint ****)pppppuVar17;
  uStack_108 = uVar6;
  puStack_100 = (undefined *)&puStack_d8;
  puVar8 = (uint *)_Znwm(8);
  puStack_128 = &UNK_00409340;
  _ZNSt3__115__thread_structC2Ev(puVar8);
  puStack_128 = &UNK_0040934a;
  plVar9 = (long *)_Znwm(0x10);
  *plVar9 = (long)puVar8;
  plVar9[1] = (long)ppppuVar10;
  puStack_128 = &UNK_00409366;
  iVar5 = func_0x0099be80(&ppuStack_120,0,&UNK_0040a090,plVar9);
  if (iVar5 == 0) {
    if (ppppuVar10[5] == (uint ***)0x0) {
      ppppuVar10[5] = (uint ***)ppuStack_120;
      ppuStack_120 = (uint **)0x0;
      puStack_128 = &UNK_0040938a;
      _ZNSt3__16threadD2Ev(&ppuStack_120);
      if (*(undefined4 **)(in_FS_OFFSET + 0x28) == puStack_118) {
        return *(undefined4 **)(in_FS_OFFSET + 0x28);
      }
      goto code_r0x004093b5;
    }
  }
  else {
    puStack_128 = &UNK_004093b0;
    _ZNSt3__120__throw_system_errorEiPKc(iVar5);
  }
  puStack_128 = &UNK_004093b5;
  _ZSt9terminatev();
code_r0x004093b5:
  puStack_128 = &UNK_004093ba;
  func_0x0099bd00();
  lStack_148 = *(long *)(in_FS_OFFSET + 0x28);
  puVar18 = (uint *)0x3;
  apuStack_160[0] = &UNK_004093e6;
  pppuStack_140 = (uint ***)ppppuVar10;
  puStack_138 = puVar8;
  puStack_130 = puVar12;
  puStack_128 = (undefined *)&puStack_100;
  cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc();
  if (cVar3 != '\0') {
    apuStack_160[0] = &UNK_0040940b;
    ppppuVar10 = (uint ****)func_0x0099bce0();
    uVar4 = *(uint *)ppppuVar10;
    puVar12 = (undefined4 *)(ulong)uVar4;
    puVar8 = auStack_150;
    apuStack_160[0] = &UNK_00409437;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (puVar8,&UNK_0016b012,0x88,3,0,0xffffffff);
    apuStack_160[0] = &UNK_0040943f;
    uVar6 = _ZN7android4base10LogMessage6streamEv(puVar8);
    apuStack_160[0] = &UNK_00409453;
    func_0x0032eb30(uVar6,&UNK_001614cf,0x2f);
    apuStack_160[0] = &UNK_0040945b;
    puVar18 = puVar8;
    _ZN7android4base10LogMessageD2Ev();
    *(uint *)ppppuVar10 = uVar4;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_148) {
    return (undefined4 *)0x0;
  }
  apuStack_160[0] = &UNK_00409465;
  func_0x0099bd00();
  puStack_190 = *(undefined4 **)(in_FS_OFFSET + 0x28);
  puVar11 = puVar18 + 0x18;
  puStack_1c8 = &UNK_0040949d;
  pppuStack_188 = (uint ***)ppppuVar10;
  pbStack_180 = pbVar20;
  pbStack_178 = puVar21;
  puStack_170 = puVar8;
  puStack_168 = puVar12;
  apuStack_160[0] = (undefined *)&puStack_128;
  _ZNSt3__15mutex4lockEv(puVar11);
  if (*(char *)((long)puVar18 + 0x11) == '\0') {
    puStack_1c8 = &UNK_004094db;
    cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(2);
    if (cVar3 != '\0') {
      puStack_1c8 = &UNK_004095b8;
      puVar12 = (undefined4 *)func_0x0099bce0();
      uStack_1b4 = *puVar12;
      puStack_1c8 = &UNK_004095e6;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_198,&UNK_0016b012,0x90,2,0,0xffffffff);
      puStack_1c8 = &UNK_004095ee;
      uVar6 = _ZN7android4base10LogMessage6streamEv(auStack_198);
      puStack_1c8 = &UNK_00409602;
      pbVar20 = (byte *)func_0x0032eb30(uVar6,&UNK_001645c0,0x11);
      puVar21 = abStack_1b0;
      puStack_1c8 = &UNK_00409614;
      _ZNK10Connection6SerialEv(puVar21,puVar18);
      puStack_1c8 = &UNK_0040961f;
      uVar6 = func_0x0032e5a0(pbVar20,puVar21);
      puStack_1c8 = &UNK_00409633;
      func_0x0032eb30(uVar6,&UNK_00178bf3,0xe);
      if ((abStack_1b0[0] & 1) != 0) {
        puStack_1c8 = &UNK_0040964a;
        _ZdaPvSt11align_val_t(uStack_1a0);
      }
      puStack_1c8 = &UNK_00409653;
      _ZN7android4base10LogMessageD2Ev(auStack_198);
      *puVar12 = uStack_1b4;
    }
    puStack_1c8 = &UNK_004094eb;
    puVar8 = puVar11;
    _ZNSt3__115recursive_mutex6unlockEv();
  }
  else {
    puStack_1c8 = &UNK_004094ab;
    _ZNSt3__115recursive_mutex6unlockEv(puVar11);
    puStack_1c8 = &UNK_004094b7;
    cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(2);
    if (cVar3 != '\0') {
      puStack_1c8 = &UNK_00409512;
      puVar11 = (uint *)func_0x0099bce0();
      uVar4 = *puVar11;
      puVar21 = (undefined1 *)(ulong)uVar4;
      puStack_1c8 = &UNK_0040953e;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_198,&UNK_0016b012,0x95,2,0,0xffffffff);
      puStack_1c8 = &UNK_00409546;
      uVar6 = _ZN7android4base10LogMessage6streamEv(auStack_198);
      puStack_1c8 = &UNK_0040955a;
      puVar12 = (undefined4 *)func_0x0032eb30(uVar6,&UNK_001645c0,0x11);
      pbVar20 = abStack_1b0;
      puStack_1c8 = &UNK_0040956c;
      _ZNK10Connection6SerialEv(pbVar20,puVar18);
      puStack_1c8 = &UNK_00409577;
      uVar6 = func_0x0032e5a0(puVar12,pbVar20);
      puStack_1c8 = &UNK_0040958b;
      func_0x0032eb30(uVar6,&UNK_001696d0,8);
      if ((abStack_1b0[0] & 1) != 0) {
        puStack_1c8 = &UNK_004095a2;
        _ZdaPvSt11align_val_t(uStack_1a0);
      }
      puStack_1c8 = &UNK_004095ab;
      _ZN7android4base10LogMessageD2Ev(auStack_198);
      *puVar11 = uVar4;
    }
    puStack_1c8 = &UNK_004094c4;
    _ZN12LibUsbDevice5ResetEv(*(undefined8 *)(puVar18 + 6));
    puStack_1c8 = &UNK_004094cd;
    puVar8 = puVar18;
    (**(code **)(*(long *)puVar18 + 0x20))();
  }
  if (*(undefined4 **)(in_FS_OFFSET + 0x28) == puStack_190) {
    return *(undefined4 **)(in_FS_OFFSET + 0x28);
  }
  puStack_1c8 = &UNK_00409663;
  func_0x0099bd00();
  puStack_1f8 = *(undefined4 **)(in_FS_OFFSET + 0x28);
  puVar19 = puVar8 + 0x18;
  puStack_1f0 = puVar18;
  pbStack_1e8 = pbVar20;
  pbStack_1e0 = puVar21;
  puStack_1d8 = puVar11;
  puStack_1d0 = puVar12;
  puStack_1c8 = (undefined *)apuStack_160;
  _ZNSt3__15mutex4lockEv(puVar19);
  if (*(char *)((long)puVar8 + 0x11) == '\0') {
    pbVar20 = (byte *)0x0;
    cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(2);
    if (cVar3 != '\0') {
      puVar12 = (undefined4 *)func_0x0099bce0();
      uVar2 = *puVar12;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&uStack_200,&UNK_0016b012,0x9f,2,0,0xffffffff);
      uVar6 = _ZN7android4base10LogMessage6streamEv(&uStack_200);
      uVar6 = func_0x0032eb30(uVar6,&UNK_001645c0,0x11);
      _ZNK10Connection6SerialEv(&bStack_218,puVar8);
      uVar6 = func_0x0032e5a0(uVar6,&bStack_218);
      pbVar20 = &UNK_00181c96;
      func_0x0032eb30(uVar6,&UNK_00181c96,0x13);
      if ((bStack_218 & 1) != 0) {
        pbVar20 = (byte *)(CONCAT17(uStack_211,CONCAT61(uStack_217,bStack_218)) & 0xfffffffffffffffe
                          );
        _ZdaPvSt11align_val_t(uStack_208);
      }
      _ZN7android4base10LogMessageD2Ev(&uStack_200);
      *puVar12 = uVar2;
    }
    _ZNSt3__115recursive_mutex6unlockEv();
  }
  else {
    *(undefined1 *)((long)puVar8 + 0x11) = 0;
    _ZNSt3__115recursive_mutex6unlockEv(puVar19);
    cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(2,0);
    if (cVar3 != '\0') {
      puVar12 = (undefined4 *)func_0x0099bce0();
      uVar2 = *puVar12;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&uStack_200,&UNK_0016b012,0xa6,2,0,0xffffffff);
      uVar6 = _ZN7android4base10LogMessage6streamEv(&uStack_200);
      uVar6 = func_0x0032eb30(uVar6,&UNK_001645c0,0x11);
      _ZNK10Connection6SerialEv(&bStack_218,puVar8);
      uVar6 = func_0x0032e5a0(uVar6,&bStack_218);
      func_0x0032eb30(uVar6,&UNK_00183504,0xb);
      if ((bStack_218 & 1) != 0) {
        _ZdaPvSt11align_val_t
                  (uStack_208,
                   CONCAT17(uStack_211,CONCAT61(uStack_217,bStack_218)) & 0xfffffffffffffffe);
      }
      _ZN7android4base10LogMessageD2Ev(&uStack_200);
      *puVar12 = uVar2;
    }
    _ZN12LibUsbDevice5CloseEv(*(undefined8 *)(puVar8 + 6));
    _ZNSt3__118condition_variable10notify_oneEv(puVar8 + 0x22);
    _ZNSt3__15mutex4lockEv(puVar19);
    uStack_200 = *(undefined8 *)(puVar8 + 8);
    puVar8[8] = 0;
    puVar8[9] = 0;
    uStack_220 = *(undefined8 *)(puVar8 + 10);
    puVar8[10] = 0;
    puVar8[0xb] = 0;
    _ZNSt3__115recursive_mutex6unlockEv(puVar19);
    _ZNSt3__16thread4joinEv(&uStack_200);
    _ZNSt3__16thread4joinEv(&uStack_220);
    bStack_218 = 0x1c;
    uStack_217 = 0x7220706f7473;
    uStack_211 = 0x65;
    uStack_210 = 0x71;
    uStack_20f = 0x646574736575;
    uStack_209 = 0;
    pbVar20 = &bStack_218;
    _ZN16LibUsbConnection10HandleStopERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
              (puVar8);
    if ((bStack_218 & 1) != 0) {
      pbVar20 = (byte *)(CONCAT17(uStack_211,CONCAT61(uStack_217,bStack_218)) & 0xfffffffffffffffe);
      _ZdaPvSt11align_val_t(uStack_208);
    }
    _ZNSt3__15mutex4lockEv(puVar19);
    func_0x003f11f0(puVar8 + 0xc);
    _ZNSt3__115recursive_mutex6unlockEv(puVar19);
    _ZNSt3__16threadD2Ev(&uStack_220);
    puVar19 = (uint *)&uStack_200;
    _ZNSt3__16threadD2Ev();
  }
  if (*(undefined4 **)(in_FS_OFFSET + 0x28) == puStack_1f8) {
    return *(undefined4 **)(in_FS_OFFSET + 0x28);
  }
  func_0x0099bd00();
  _ZNSt3__15mutex4lockEv(puVar19 + 0x18);
  lVar13 = *(long *)(puVar19 + 0xe);
  uVar15 = 0;
  if (*(long *)(puVar19 + 0x10) != lVar13) {
    uVar15 = (*(long *)(puVar19 + 0x10) - lVar13) * 0x40 - 1;
  }
  uVar14 = *(long *)(puVar19 + 0x16) + *(long *)(puVar19 + 0x14);
  if (uVar15 == uVar14) {
    func_0x003f1340(puVar19 + 0xc);
    lVar13 = *(long *)(puVar19 + 0xe);
    uVar14 = *(long *)(puVar19 + 0x14) + *(long *)(puVar19 + 0x16);
  }
  lVar13 = *(long *)(lVar13 + (uVar14 >> 9) * 8);
  pbVar20[0] = 0;
  pbVar20[1] = 0;
  pbVar20[2] = 0;
  pbVar20[3] = 0;
  pbVar20[4] = 0;
  pbVar20[5] = 0;
  pbVar20[6] = 0;
  pbVar20[7] = 0;
  *(undefined8 *)(lVar13 + (ulong)((uint)uVar14 & 0x1ff) * 8) = *(undefined8 *)pbVar20;
  *(long *)(puVar19 + 0x16) = *(long *)(puVar19 + 0x16) + 1;
  _ZNSt3__115recursive_mutex6unlockEv(puVar19 + 0x18);
  _ZNSt3__118condition_variable10notify_oneEv(puVar19 + 0x22);
  return (undefined4 *)0x1;
}


