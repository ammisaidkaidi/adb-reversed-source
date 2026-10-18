// Function: pairing_auth_msg_size
// Address: 00427ab0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Type propagation algorithm not settling */

long *******
pairing_auth_msg_size
          (long *param_1,long *******param_2,undefined8 param_3,undefined8 param_4,
          long *******param_5)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  long *******ppppppplVar5;
  long *******ppppppplVar6;
  long *******ppppppplVar7;
  undefined8 uVar8;
  long *******extraout_RDX;
  long *******extraout_RDX_00;
  long *******extraout_RDX_01;
  long *******extraout_RDX_02;
  undefined1 *unaff_RBX;
  long *******ppppppplVar9;
  long *******ppppppplVar10;
  long *******ppppppplVar11;
  long *******ppppppplVar12;
  long *******unaff_R12;
  undefined *unaff_R13;
  long *******ppppppplVar13;
  long ******pppppplVar14;
  undefined8 unaff_R14;
  long in_FS_OFFSET;
  undefined1 auStack_250 [8];
  long *******ppppppplStack_248;
  long *******ppppppplStack_240;
  long *******ppppppplStack_238;
  undefined *puStack_230;
  long *******ppppppplStack_228;
  long lStack_220;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  long *******ppppppplStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  long lStack_1e8;
  long *******ppppppplStack_1e0;
  long *******ppppppplStack_1d8;
  long *******ppppppplStack_1d0;
  long *******ppppppplStack_1c8;
  long *******ppppppplStack_1c0;
  code *apcStack_1b8 [2];
  long ******pppppplStack_1a8;
  long lStack_1a0;
  long *******ppppppplStack_198;
  long *******ppppppplStack_190;
  long *******ppppppplStack_188;
  long *******ppppppplStack_180;
  long *******ppppppplStack_178;
  undefined *puStack_170;
  long *******ppppppplStack_168;
  long lStack_160;
  long *******ppppppplStack_158;
  long *******ppppppplStack_150;
  long lStack_148;
  long *******ppppppplStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  long lStack_128;
  long *******ppppppplStack_120;
  long *******ppppppplStack_118;
  undefined *puStack_110;
  long *******ppppppplStack_108;
  long *******ppppppplStack_100;
  undefined *apuStack_f8 [2];
  long ******pppppplStack_e8;
  long lStack_e0;
  long *******ppppppplStack_d8;
  long *******ppppppplStack_d0;
  long *******ppppppplStack_c8;
  undefined *apuStack_c0 [2];
  long *******ppppppplStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  long *******ppppppplStack_90;
  undefined *apuStack_68 [2];
  undefined1 auStack_58 [8];
  long *******ppppppplStack_50;
  undefined1 *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_30;
  undefined1 auStack_28 [8];
  long lStack_20;
  
  lStack_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (long *)0x0) {
    unaff_RBX = auStack_28;
    param_5 = (long *******)0x0;
    puStack_30 = &UNK_00427b15;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (unaff_RBX,&UNK_0015fda6,0xe4,6,0,0xffffffff);
    puStack_30 = &UNK_00427b1d;
    uVar8 = _ZN7android4base10LogMessage6streamEv(unaff_RBX);
    puStack_30 = &UNK_00427b31;
    uVar8 = func_0x0032eb30(uVar8,&UNK_001725c2,0x11);
    param_2 = (long *******)&UNK_0015ae05;
    puStack_30 = &UNK_00427b45;
    func_0x0032eb30(uVar8,&UNK_0015ae05,1);
    puStack_30 = &UNK_00427b4d;
    _ZN7android4base10LogMessageD2Ev(unaff_RBX);
    unaff_R14 = 0;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_20) {
    return (long *******)(param_1[1] - *param_1);
  }
  puStack_30 = &UNK_00427b5a;
  func_0x0099bd00();
  ppppppplStack_50 = *(long ********)(in_FS_OFFSET + 0x28);
  puStack_48 = unaff_RBX;
  uStack_40 = unaff_R14;
  puStack_30 = &stack0xfffffffffffffff8;
  if (param_1 == (long *)0x0) {
    param_5 = (long *******)0x0;
    apuStack_68[0] = &UNK_00427be4;
    puStack_30 = &stack0xfffffffffffffff8;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (auStack_58,&UNK_0015fda6,0xe9,6,0,0xffffffff);
    apuStack_68[0] = &UNK_00427bec;
    uVar8 = _ZN7android4base10LogMessage6streamEv(auStack_58);
    apuStack_68[0] = &UNK_00427c00;
    uVar8 = func_0x0032eb30(uVar8,&UNK_001725c2,0x11);
    apuStack_68[0] = &UNK_00427c14;
    func_0x0032eb30(uVar8,&UNK_0015ae05,1);
    apuStack_68[0] = &UNK_00427c1c;
    _ZN7android4base10LogMessageD2Ev(auStack_58);
  }
  if (param_2 == (long *******)0x0) {
    param_5 = (long *******)0x0;
    apuStack_68[0] = &UNK_00427c51;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (auStack_58,&UNK_0015fda6,0xea,6,0,0xffffffff);
    apuStack_68[0] = &UNK_00427c59;
    uVar8 = _ZN7android4base10LogMessage6streamEv(auStack_58);
    apuStack_68[0] = &UNK_00427c6d;
    uVar8 = func_0x0032eb30(uVar8,&UNK_0018b070,0x15);
    apuStack_68[0] = &UNK_00427c81;
    func_0x0032eb30(uVar8,&UNK_0015ae05,1);
    apuStack_68[0] = &UNK_00427c89;
    _ZN7android4base10LogMessageD2Ev(auStack_58);
  }
  ppppppplVar10 = (long *******)*param_1;
  apuStack_68[0] = &UNK_00427b9d;
  ppppppplVar6 = param_2;
  func_0x0099bda0(param_2,ppppppplVar10,param_1[1] - (long)ppppppplVar10);
  if (*(long ********)(in_FS_OFFSET + 0x28) == ppppppplStack_50) {
    return *(long ********)(in_FS_OFFSET + 0x28);
  }
  apuStack_68[0] = &UNK_00427c96;
  func_0x0099bd00();
  lStack_98 = *(long *)(in_FS_OFFSET + 0x28);
  ppppppplVar13 = ppppppplVar10;
  ppppppplVar11 = ppppppplVar6;
  ppppppplStack_90 = param_2;
  apuStack_68[0] = (undefined *)&puStack_30;
  if (ppppppplVar6 == (long *******)0x0) {
    unaff_R12 = (long *******)&ppppppplStack_b0;
    param_5 = (long *******)0x0;
    apuStack_c0[0] = &UNK_00427d76;
    apuStack_68[0] = (undefined *)&puStack_30;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (unaff_R12,&UNK_0015fda6,0xf0,6,0,0xffffffff);
    apuStack_c0[0] = &UNK_00427d7e;
    uVar8 = _ZN7android4base10LogMessage6streamEv(unaff_R12);
    apuStack_c0[0] = &UNK_00427d92;
    uVar8 = func_0x0032eb30(uVar8,&UNK_001725c2,0x11);
    ppppppplVar13 = (long *******)&UNK_0015ae05;
    apuStack_c0[0] = &UNK_00427da6;
    func_0x0032eb30(uVar8,&UNK_0015ae05,1);
    apuStack_c0[0] = &UNK_00427dae;
    ppppppplVar11 = unaff_R12;
    _ZN7android4base10LogMessageD2Ev();
  }
  if (ppppppplVar10 == (long *******)0x0) {
    unaff_R12 = (long *******)&ppppppplStack_b0;
    param_5 = (long *******)0x0;
    apuStack_c0[0] = &UNK_00427ddd;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (unaff_R12,&UNK_0015fda6,0xf1,6,0,0xffffffff);
    apuStack_c0[0] = &UNK_00427de5;
    uVar8 = _ZN7android4base10LogMessage6streamEv(unaff_R12);
    apuStack_c0[0] = &UNK_00427df9;
    uVar8 = func_0x0032eb30(uVar8,&UNK_00181d17,0x17);
    ppppppplVar13 = (long *******)&UNK_0015ae05;
    apuStack_c0[0] = &UNK_00427e0d;
    func_0x0032eb30(uVar8,&UNK_0015ae05,1);
    apuStack_c0[0] = &UNK_00427e15;
    ppppppplVar11 = unaff_R12;
    _ZN7android4base10LogMessageD2Ev();
  }
  if (extraout_RDX == (long *******)0x0) {
    do {
      apuStack_c0[0] = &UNK_00427e62;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&ppppppplStack_b0,&UNK_0015fda6,0xf2,6,0,0xffffffff);
      apuStack_c0[0] = &UNK_00427e6a;
      uVar8 = _ZN7android4base10LogMessage6streamEv(&ppppppplStack_b0);
      apuStack_c0[0] = &UNK_00427e7e;
      uVar8 = func_0x0032eb30(uVar8,&UNK_00165d45,0xe);
      apuStack_c0[0] = &UNK_00427e92;
      uVar8 = func_0x0032eb30(uVar8,&UNK_00167dcd,7);
      apuStack_c0[0] = &UNK_00427ea2;
      uVar8 = func_0x0032eb30(uVar8,&UNK_0015ae05,1);
      apuStack_c0[0] = &UNK_00427eb6;
      uVar8 = func_0x0032eb30(uVar8,&UNK_00163098,1);
      apuStack_c0[0] = &UNK_00427ec6;
      uVar8 = func_0x0032eb30(uVar8,&UNK_0015ae05,1);
      apuStack_c0[0] = &UNK_00427eda;
      uVar8 = func_0x0032eb30(uVar8,&UNK_0015980b,2);
      apuStack_c0[0] = &UNK_00427eea;
      uVar8 = func_0x0032eb30(uVar8,&UNK_00164750,10);
      apuStack_c0[0] = &UNK_00427ef4;
      uVar8 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar8,0);
      apuStack_c0[0] = &UNK_00427f04;
      uVar8 = func_0x0032eb30(uVar8,&UNK_00189813,5);
      apuStack_c0[0] = &UNK_00427f0e;
      uVar8 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj(uVar8,0);
      apuStack_c0[0] = &UNK_00427f1e;
      func_0x0032eb30(uVar8,&UNK_0017b788,2);
      apuStack_c0[0] = &UNK_00427f26;
      _ZN7android4base10LogMessageD2Ev(&ppppppplStack_b0);
    } while( true );
  }
  if ((long)extraout_RDX < 0) {
    apuStack_c0[0] = &UNK_00427f30;
    func_0x00330ca0();
  }
  else {
    apuStack_c0[0] = &UNK_00427cf0;
    unaff_R12 = (long *******)_Znwm(extraout_RDX);
    unaff_R13 = (undefined *)((long)unaff_R12 + (long)extraout_RDX);
    apuStack_c0[0] = &UNK_00427d0d;
    ppppppplStack_b0 = unaff_R12;
    puStack_a0 = unaff_R13;
    func_0x0099bda0(unaff_R12,ppppppplVar10,extraout_RDX);
    apuStack_c0[0] = &UNK_00427d1d;
    puStack_a8 = unaff_R13;
    uVar4 = _ZN14PairingAuthCtx10InitCipherERKNSt3__16vectorIhNS0_9allocatorIhEEEE
                      (ppppppplVar6,&ppppppplStack_b0);
    ppppppplVar6 = (long *******)(ulong)uVar4;
    apuStack_c0[0] = &UNK_00427d2b;
    ppppppplVar13 = extraout_RDX;
    ppppppplVar11 = unaff_R12;
    _ZdaPvSt11align_val_t();
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_98) {
      return ppppppplVar6;
    }
  }
  apuStack_c0[0] = &UNK_00427f35;
  func_0x0099bd00();
  lStack_e0 = *(long *)(in_FS_OFFSET + 0x28);
  ppppppplVar9 = extraout_RDX;
  ppppppplStack_d8 = extraout_RDX;
  ppppppplStack_d0 = ppppppplVar6;
  ppppppplStack_c8 = ppppppplVar10;
  apuStack_c0[0] = (undefined *)apuStack_68;
  if (ppppppplVar11 == (long *******)0x0) {
    ppppppplVar9 = &pppppplStack_e8;
    param_5 = (long *******)0x0;
    apuStack_f8[0] = &UNK_00427fad;
    apuStack_c0[0] = (undefined *)apuStack_68;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (ppppppplVar9,&UNK_0015fda6,0xf9,6,0,0xffffffff);
    apuStack_f8[0] = &UNK_00427fb5;
    uVar8 = _ZN7android4base10LogMessage6streamEv(ppppppplVar9);
    apuStack_f8[0] = &UNK_00427fc9;
    uVar8 = func_0x0032eb30(uVar8,&UNK_001725c2,0x11);
    apuStack_f8[0] = &UNK_00427fdd;
    func_0x0032eb30(uVar8,&UNK_0015ae05,1);
    apuStack_f8[0] = &UNK_00427fe5;
    _ZN7android4base10LogMessageD2Ev(ppppppplVar9);
    ppppppplVar6 = ppppppplVar11;
    ppppppplVar10 = ppppppplVar13;
  }
  apuStack_f8[0] = &UNK_00427f64;
  ppppppplVar5 = (long *******)_ZN14PairingAuthCtx17SafeEncryptedSizeEm();
  lStack_160 = *(long *)(in_FS_OFFSET + 0x28);
  if (lStack_160 == lStack_e0) {
    return ppppppplVar5;
  }
  apuStack_f8[0] = &UNK_00427ff5;
  func_0x0099bd00();
  lStack_128 = *(long *)(in_FS_OFFSET + 0x28);
  ppppppplVar5 = ppppppplVar13;
  ppppppplVar12 = ppppppplVar11;
  ppppppplStack_120 = ppppppplVar9;
  ppppppplStack_118 = unaff_R12;
  puStack_110 = unaff_R13;
  ppppppplStack_108 = ppppppplVar6;
  ppppppplStack_100 = ppppppplVar10;
  apuStack_f8[0] = (undefined *)apuStack_c0;
  if (ppppppplVar11 == (long *******)0x0) {
    puStack_170 = &UNK_0042814b;
    apuStack_f8[0] = (undefined *)apuStack_c0;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (&ppppppplStack_140,&UNK_0015fda6,0xff,6,0,0xffffffff);
    puStack_170 = &UNK_00428153;
    uVar8 = _ZN7android4base10LogMessage6streamEv(&ppppppplStack_140);
    puStack_170 = &UNK_00428167;
    uVar8 = func_0x0032eb30(uVar8,&UNK_001725c2,0x11);
    ppppppplVar5 = (long *******)&UNK_0015ae05;
    puStack_170 = &UNK_0042817b;
    func_0x0032eb30(uVar8,&UNK_0015ae05,1);
    puStack_170 = &UNK_00428183;
    ppppppplVar12 = (long *******)&ppppppplStack_140;
    _ZN7android4base10LogMessageD2Ev();
    ppppppplVar6 = (long *******)&ppppppplStack_140;
    ppppppplVar9 = param_5;
  }
  if (ppppppplVar13 == (long *******)0x0) {
    ppppppplVar6 = (long *******)&ppppppplStack_140;
    puStack_170 = &UNK_004281bc;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (ppppppplVar6,&UNK_0015fda6,0x100,6,0,0xffffffff);
    puStack_170 = &UNK_004281c4;
    uVar8 = _ZN7android4base10LogMessage6streamEv(ppppppplVar6);
    puStack_170 = &UNK_004281d8;
    uVar8 = func_0x0032eb30(uVar8,&UNK_0017a3cb,0x13);
    ppppppplVar5 = (long *******)&UNK_0015ae05;
    puStack_170 = &UNK_004281ec;
    func_0x0032eb30(uVar8,&UNK_0015ae05,1);
    puStack_170 = &UNK_004281f4;
    ppppppplVar12 = ppppppplVar6;
    _ZN7android4base10LogMessageD2Ev();
    ppppppplVar9 = param_5;
  }
  if (lStack_160 == 0) {
    ppppppplVar6 = (long *******)&ppppppplStack_140;
    puStack_170 = &UNK_0042822d;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (ppppppplVar6,&UNK_0015fda6,0x101,6,0,0xffffffff);
    puStack_170 = &UNK_00428235;
    uVar8 = _ZN7android4base10LogMessage6streamEv(ppppppplVar6);
    puStack_170 = &UNK_00428249;
    uVar8 = func_0x0032eb30(uVar8,&UNK_0015ca76,0x14);
    ppppppplVar5 = (long *******)&UNK_0015ae05;
    puStack_170 = &UNK_0042825d;
    func_0x0032eb30(uVar8,&UNK_0015ae05,1);
    puStack_170 = &UNK_00428265;
    ppppppplVar12 = ppppppplVar6;
    _ZN7android4base10LogMessageD2Ev();
    ppppppplVar9 = param_5;
  }
  if (param_5 == (long *******)0x0) {
    ppppppplVar6 = (long *******)&ppppppplStack_140;
    puStack_170 = &UNK_0042829a;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (ppppppplVar6,&UNK_0015fda6,0x102,6,0,0xffffffff);
    puStack_170 = &UNK_004282a2;
    uVar8 = _ZN7android4base10LogMessage6streamEv(ppppppplVar6);
    puStack_170 = &UNK_004282b6;
    uVar8 = func_0x0032eb30(uVar8,&UNK_00184bd2,0x14);
    ppppppplVar5 = (long *******)&UNK_0015ae05;
    puStack_170 = &UNK_004282ca;
    func_0x0032eb30(uVar8,&UNK_0015ae05,1);
    puStack_170 = &UNK_004282d2;
    ppppppplVar12 = ppppppplVar6;
    _ZN7android4base10LogMessageD2Ev();
    ppppppplVar9 = param_5;
  }
  if (extraout_RDX_00 == (long *******)0x0) {
    do {
      puStack_170 = &UNK_00428322;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&ppppppplStack_140,&UNK_0015fda6,0x103,6,0,0xffffffff);
      puStack_170 = &UNK_0042832a;
      uVar8 = _ZN7android4base10LogMessage6streamEv(&ppppppplStack_140);
      puStack_170 = &UNK_0042833e;
      uVar8 = func_0x0032eb30(uVar8,&UNK_00165d45,0xe);
      puStack_170 = &UNK_00428352;
      uVar8 = func_0x0032eb30(uVar8,&UNK_001837b0,5);
      puStack_170 = &UNK_00428362;
      uVar8 = func_0x0032eb30(uVar8,&UNK_0015ae05,1);
      puStack_170 = &UNK_00428376;
      uVar8 = func_0x0032eb30(uVar8,&UNK_00163098,1);
      puStack_170 = &UNK_00428386;
      uVar8 = func_0x0032eb30(uVar8,&UNK_0015ae05,1);
      puStack_170 = &UNK_0042839a;
      uVar8 = func_0x0032eb30(uVar8,&UNK_0015980b,2);
      puStack_170 = &UNK_004283aa;
      uVar8 = func_0x0032eb30(uVar8,&UNK_0015fdd9,8);
      puStack_170 = &UNK_004283b4;
      uVar8 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar8,0);
      puStack_170 = &UNK_004283c4;
      uVar8 = func_0x0032eb30(uVar8,&UNK_00189813,5);
      puStack_170 = &UNK_004283ce;
      uVar8 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj(uVar8,0);
      puStack_170 = &UNK_004283de;
      func_0x0032eb30(uVar8,&UNK_0017b788,2);
      puStack_170 = &UNK_004283e6;
      _ZN7android4base10LogMessageD2Ev(&ppppppplStack_140);
    } while( true );
  }
  ppppppplStack_168 = param_5;
  if ((long)extraout_RDX_00 < 0) {
    puStack_170 = &UNK_004283f0;
    func_0x00330ca0();
    ppppppplVar10 = extraout_RDX_00;
  }
  else {
    puStack_170 = &UNK_0042806a;
    ppppppplVar6 = (long *******)_Znwm(extraout_RDX_00);
    puStack_170 = &UNK_00428089;
    ppppppplStack_140 = ppppppplVar6;
    puStack_130 = (undefined *)((long)extraout_RDX_00 + (long)ppppppplVar6);
    func_0x0099bda0(ppppppplVar6,ppppppplVar13);
    ppppppplStack_158 = (long *******)0x0;
    ppppppplStack_150 = (long *******)0x0;
    lStack_148 = 0;
    puStack_170 = &UNK_004280ac;
    puStack_138 = (undefined *)((long)extraout_RDX_00 + (long)ppppppplVar6);
    _ZN14PairingAuthCtx7EncryptERKNSt3__16vectorIhNS0_9allocatorIhEEEE
              (&ppppppplStack_158,ppppppplVar11,&ppppppplStack_140);
    ppppppplVar10 = ppppppplStack_150;
    ppppppplVar11 = ppppppplStack_158;
    if (ppppppplStack_158 == ppppppplStack_150) {
      if (ppppppplStack_158 != (long *******)0x0) goto code_r0x004280dc;
    }
    else {
      ppppppplVar13 = (long *******)((long)ppppppplStack_150 - (long)ppppppplStack_158);
      puStack_170 = &UNK_004280ce;
      func_0x0099bda0(lStack_160,ppppppplStack_158,ppppppplVar13);
      *ppppppplStack_168 = (long ******)ppppppplVar13;
code_r0x004280dc:
      puStack_170 = &UNK_004280eb;
      _ZdaPvSt11align_val_t(ppppppplVar11,lStack_148 - (long)ppppppplVar11);
    }
    ppppppplVar10 =
         (long *******)CONCAT71((int7)((ulong)ppppppplVar10 >> 8),ppppppplVar11 != ppppppplVar10);
    puStack_170 = &UNK_004280fd;
    ppppppplVar5 = extraout_RDX_00;
    ppppppplVar12 = ppppppplVar6;
    _ZdaPvSt11align_val_t();
    ppppppplVar9 = extraout_RDX_00;
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_128) {
      return (long *******)((ulong)ppppppplVar10 & 0xffffffff);
    }
  }
  puStack_170 = &UNK_004283f5;
  func_0x0099bd00();
  lStack_1a0 = *(long *)(in_FS_OFFSET + 0x28);
  ppppppplStack_198 = ppppppplVar9;
  ppppppplStack_190 = ppppppplVar11;
  ppppppplStack_188 = ppppppplVar13;
  ppppppplStack_180 = ppppppplVar6;
  ppppppplStack_178 = ppppppplVar10;
  puStack_170 = (undefined *)apuStack_f8;
  if (ppppppplVar12 == (long *******)0x0) {
    param_5 = (long *******)0x0;
    apcStack_1b8[0] = (code *)&UNK_00428491;
    puStack_170 = (undefined *)apuStack_f8;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (&pppppplStack_1a8,&UNK_0015fda6,0x111,6,0,0xffffffff);
    apcStack_1b8[0] = (code *)&UNK_00428499;
    uVar8 = _ZN7android4base10LogMessage6streamEv(&pppppplStack_1a8);
    apcStack_1b8[0] = (code *)&UNK_004284ad;
    uVar8 = func_0x0032eb30(uVar8,&UNK_001725c2,0x11);
    apcStack_1b8[0] = (code *)&UNK_004284c1;
    func_0x0032eb30(uVar8,&UNK_0015ae05,1);
    apcStack_1b8[0] = (code *)&UNK_004284c9;
    _ZN7android4base10LogMessageD2Ev(&pppppplStack_1a8);
    ppppppplVar9 = &pppppplStack_1a8;
    ppppppplVar11 = extraout_RDX_01;
    ppppppplVar10 = ppppppplVar5;
    ppppppplVar6 = ppppppplVar12;
  }
  if (ppppppplVar5 == (long *******)0x0) {
    ppppppplVar9 = &pppppplStack_1a8;
    param_5 = (long *******)0x0;
    apcStack_1b8[0] = (code *)&UNK_00428507;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (ppppppplVar9,&UNK_0015fda6,0x112,6,0,0xffffffff);
    apcStack_1b8[0] = (code *)&UNK_0042850f;
    uVar8 = _ZN7android4base10LogMessage6streamEv(ppppppplVar9);
    apcStack_1b8[0] = (code *)&UNK_00428523;
    uVar8 = func_0x0032eb30(uVar8,&UNK_00167dd5,0x11);
    apcStack_1b8[0] = (code *)&UNK_00428537;
    func_0x0032eb30(uVar8,&UNK_0015ae05,1);
    apcStack_1b8[0] = (code *)&UNK_0042853f;
    _ZN7android4base10LogMessageD2Ev(ppppppplVar9);
    ppppppplVar6 = ppppppplVar12;
    ppppppplVar10 = extraout_RDX_01;
  }
  if (extraout_RDX_01 == (long *******)0x0) {
    do {
      apcStack_1b8[0] = (code *)&UNK_00428592;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&pppppplStack_1a8,&UNK_0015fda6,0x113,6,0,0xffffffff);
      apcStack_1b8[0] = (code *)&UNK_0042859a;
      uVar8 = _ZN7android4base10LogMessage6streamEv(&pppppplStack_1a8);
      apcStack_1b8[0] = (code *)&UNK_004285ae;
      uVar8 = func_0x0032eb30(uVar8,&UNK_00165d45,0xe);
      apcStack_1b8[0] = (code *)&UNK_004285c2;
      uVar8 = func_0x0032eb30(uVar8,&UNK_001596b0,3);
      apcStack_1b8[0] = (code *)&UNK_004285d2;
      uVar8 = func_0x0032eb30(uVar8,&UNK_0015ae05,1);
      apcStack_1b8[0] = (code *)&UNK_004285e6;
      uVar8 = func_0x0032eb30(uVar8,&UNK_00163098,1);
      apcStack_1b8[0] = (code *)&UNK_004285f6;
      uVar8 = func_0x0032eb30(uVar8,&UNK_0015ae05,1);
      apcStack_1b8[0] = (code *)&UNK_0042860a;
      uVar8 = func_0x0032eb30(uVar8,&UNK_0015980b,2);
      apcStack_1b8[0] = (code *)&UNK_0042861a;
      uVar8 = func_0x0032eb30(uVar8,&UNK_00181bbd,6);
      apcStack_1b8[0] = (code *)&UNK_00428624;
      uVar8 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar8,0);
      apcStack_1b8[0] = (code *)&UNK_00428634;
      uVar8 = func_0x0032eb30(uVar8,&UNK_00189813,5);
      apcStack_1b8[0] = (code *)&UNK_0042863e;
      uVar8 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj(uVar8,0);
      apcStack_1b8[0] = (code *)&UNK_0042864e;
      func_0x0032eb30(uVar8,&UNK_0017b788,2);
      apcStack_1b8[0] = (code *)&UNK_00428656;
      _ZN7android4base10LogMessageD2Ev(&pppppplStack_1a8);
    } while( true );
  }
  apcStack_1b8[0] = (code *)&UNK_0042843d;
  ppppppplVar5 = extraout_RDX_01;
  ppppppplVar7 = (long *******)_ZN14PairingAuthCtx17SafeDecryptedSizeEm();
  lStack_220 = *(long *)(in_FS_OFFSET + 0x28);
  if (lStack_220 == lStack_1a0) {
    return ppppppplVar7;
  }
  apcStack_1b8[0] = pairing_auth_decrypt;
  func_0x0099bd00();
  lStack_1e8 = *(long *)(in_FS_OFFSET + 0x28);
  ppppppplVar7 = ppppppplVar12;
  ppppppplStack_1e0 = ppppppplVar9;
  ppppppplStack_1d8 = ppppppplVar11;
  ppppppplStack_1d0 = ppppppplVar13;
  ppppppplStack_1c8 = ppppppplVar6;
  ppppppplStack_1c0 = ppppppplVar10;
  apcStack_1b8[0] = (code *)&puStack_170;
  if (ppppppplVar12 == (long *******)0x0) {
    puStack_230 = &UNK_004287ab;
    apcStack_1b8[0] = (code *)&puStack_170;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (&ppppppplStack_200,&UNK_0015fda6,0x11a,6,0,0xffffffff);
    puStack_230 = &UNK_004287b3;
    uVar8 = _ZN7android4base10LogMessage6streamEv(&ppppppplStack_200);
    puStack_230 = &UNK_004287c7;
    uVar8 = func_0x0032eb30(uVar8,&UNK_001725c2,0x11);
    puStack_230 = &UNK_004287db;
    func_0x0032eb30(uVar8,&UNK_0015ae05,1);
    puStack_230 = &UNK_004287e3;
    ppppppplVar7 = (long *******)&ppppppplStack_200;
    _ZN7android4base10LogMessageD2Ev();
    ppppppplVar6 = (long *******)&ppppppplStack_200;
    ppppppplVar9 = param_5;
  }
  if (ppppppplVar5 == (long *******)0x0) {
    ppppppplVar6 = (long *******)&ppppppplStack_200;
    puStack_230 = &UNK_0042881c;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (ppppppplVar6,&UNK_0015fda6,0x11b,6,0,0xffffffff);
    puStack_230 = &UNK_00428824;
    uVar8 = _ZN7android4base10LogMessage6streamEv(ppppppplVar6);
    puStack_230 = &UNK_00428838;
    uVar8 = func_0x0032eb30(uVar8,&UNK_0017a3cb,0x13);
    puStack_230 = &UNK_0042884c;
    func_0x0032eb30(uVar8,&UNK_0015ae05,1);
    puStack_230 = &UNK_00428854;
    ppppppplVar7 = ppppppplVar6;
    _ZN7android4base10LogMessageD2Ev();
    ppppppplVar9 = param_5;
  }
  if (lStack_220 == 0) {
    ppppppplVar6 = (long *******)&ppppppplStack_200;
    puStack_230 = &UNK_0042888d;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (ppppppplVar6,&UNK_0015fda6,0x11c,6,0,0xffffffff);
    puStack_230 = &UNK_00428895;
    uVar8 = _ZN7android4base10LogMessage6streamEv(ppppppplVar6);
    puStack_230 = &UNK_004288a9;
    uVar8 = func_0x0032eb30(uVar8,&UNK_0015ca76,0x14);
    puStack_230 = &UNK_004288bd;
    func_0x0032eb30(uVar8,&UNK_0015ae05,1);
    puStack_230 = &UNK_004288c5;
    ppppppplVar7 = ppppppplVar6;
    _ZN7android4base10LogMessageD2Ev();
    ppppppplVar9 = param_5;
  }
  if (param_5 == (long *******)0x0) {
    ppppppplVar6 = (long *******)&ppppppplStack_200;
    puStack_230 = &UNK_004288fa;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (ppppppplVar6,&UNK_0015fda6,0x11d,6,0,0xffffffff);
    puStack_230 = &UNK_00428902;
    uVar8 = _ZN7android4base10LogMessage6streamEv(ppppppplVar6);
    puStack_230 = &UNK_00428916;
    uVar8 = func_0x0032eb30(uVar8,&UNK_00184bd2,0x14);
    puStack_230 = &UNK_0042892a;
    func_0x0032eb30(uVar8,&UNK_0015ae05,1);
    puStack_230 = &UNK_00428932;
    ppppppplVar7 = ppppppplVar6;
    _ZN7android4base10LogMessageD2Ev();
    ppppppplVar9 = param_5;
  }
  if (extraout_RDX_02 == (long *******)0x0) {
    do {
      puStack_230 = &UNK_00428982;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&ppppppplStack_200,&UNK_0015fda6,0x11e,6,0,0xffffffff);
      puStack_230 = &UNK_0042898a;
      uVar8 = _ZN7android4base10LogMessage6streamEv(&ppppppplStack_200);
      puStack_230 = &UNK_0042899e;
      uVar8 = func_0x0032eb30(uVar8,&UNK_00165d45,0xe);
      puStack_230 = &UNK_004289b2;
      uVar8 = func_0x0032eb30(uVar8,&UNK_001837b0,5);
      puStack_230 = &UNK_004289c2;
      uVar8 = func_0x0032eb30(uVar8,&UNK_0015ae05,1);
      puStack_230 = &UNK_004289d6;
      uVar8 = func_0x0032eb30(uVar8,&UNK_00163098,1);
      puStack_230 = &UNK_004289e6;
      uVar8 = func_0x0032eb30(uVar8,&UNK_0015ae05,1);
      puStack_230 = &UNK_004289fa;
      uVar8 = func_0x0032eb30(uVar8,&UNK_0015980b,2);
      puStack_230 = &UNK_00428a0a;
      uVar8 = func_0x0032eb30(uVar8,&UNK_0015fdd9,8);
      puStack_230 = &UNK_00428a14;
      uVar8 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar8,0);
      puStack_230 = &UNK_00428a24;
      uVar8 = func_0x0032eb30(uVar8,&UNK_00189813,5);
      puStack_230 = &UNK_00428a2e;
      uVar8 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj(uVar8,0);
      puStack_230 = &UNK_00428a3e;
      func_0x0032eb30(uVar8,&UNK_0017b788,2);
      puStack_230 = &UNK_00428a46;
      _ZN7android4base10LogMessageD2Ev(&ppppppplStack_200);
    } while( true );
  }
  ppppppplStack_228 = param_5;
  if ((long)extraout_RDX_02 < 0) {
    puStack_230 = &UNK_00428a50;
    func_0x00330ca0();
    goto code_r0x00428a50;
  }
  puStack_230 = &UNK_004286ca;
  ppppppplVar6 = (long *******)_Znwm(extraout_RDX_02);
  puStack_230 = &UNK_004286e9;
  ppppppplStack_200 = ppppppplVar6;
  puStack_1f0 = (undefined *)((long)extraout_RDX_02 + (long)ppppppplVar6);
  func_0x0099bda0(ppppppplVar6,ppppppplVar5);
  lStack_218 = 0;
  lStack_210 = 0;
  lStack_208 = 0;
  puStack_230 = &UNK_0042870c;
  puStack_1f8 = (undefined *)((long)extraout_RDX_02 + (long)ppppppplVar6);
  _ZN14PairingAuthCtx7DecryptERKNSt3__16vectorIhNS0_9allocatorIhEEEE
            (&lStack_218,ppppppplVar12,&ppppppplStack_200);
  lVar3 = lStack_210;
  lVar2 = lStack_218;
  if (lStack_218 == lStack_210) {
    if (lStack_218 != 0) goto code_r0x0042873c;
  }
  else {
    pppppplVar14 = (long ******)(lStack_210 - lStack_218);
    puStack_230 = &UNK_0042872e;
    func_0x0099bda0(lStack_220,lStack_218,pppppplVar14);
    *ppppppplStack_228 = pppppplVar14;
code_r0x0042873c:
    puStack_230 = &UNK_0042874b;
    _ZdaPvSt11align_val_t(lVar2,lStack_208 - lVar2);
  }
  puStack_230 = &UNK_0042875d;
  ppppppplVar7 = ppppppplVar6;
  _ZdaPvSt11align_val_t(ppppppplVar6,extraout_RDX_02);
  ppppppplVar9 = extraout_RDX_02;
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_1e8) {
    return (long *******)(CONCAT71((int7)((ulong)lVar3 >> 8),lVar2 != lVar3) & 0xffffffff);
  }
code_r0x00428a50:
  puStack_230 = &UNK_00428a55;
  func_0x0099bd00();
  ppppppplStack_248 = *(long ********)(in_FS_OFFSET + 0x28);
  ppppppplStack_240 = ppppppplVar9;
  ppppppplStack_238 = ppppppplVar6;
  if (ppppppplVar7 == (long *******)0x0) {
    puStack_230 = (undefined *)apcStack_1b8;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (auStack_250,&UNK_0015fda6,300,6,0,0xffffffff);
    uVar8 = _ZN7android4base10LogMessage6streamEv(auStack_250);
    uVar8 = func_0x0032eb30(uVar8,&UNK_001725c2,0x11);
    func_0x0032eb30(uVar8,&UNK_0015ae05,1);
    _ZN7android4base10LogMessageD2Ev(auStack_250);
    if (*(long ********)(in_FS_OFFSET + 0x28) == ppppppplStack_248) {
      return *(long ********)(in_FS_OFFSET + 0x28);
    }
  }
  else {
    pppppplVar14 = ppppppplVar7[5];
    ppppppplVar7[5] = (long ******)0x0;
    puStack_230 = (undefined *)apcStack_1b8;
    if (pppppplVar14 != (long ******)0x0) {
      puStack_230 = (undefined *)apcStack_1b8;
      EVP_AEAD_CTX_cleanup(pppppplVar14);
      _ZdaPvSt11align_val_t(pppppplVar14,0x250);
    }
    pppppplVar14 = ppppppplVar7[4];
    ppppppplVar7[4] = (long ******)0x0;
    if (pppppplVar14 != (long ******)0x0) {
      SPAKE2_CTX_free();
    }
    pppppplVar14 = *ppppppplVar7;
    if (pppppplVar14 != (long ******)0x0) {
      ppppppplVar7[1] = pppppplVar14;
      _ZdaPvSt11align_val_t(pppppplVar14,(long)ppppppplVar7[2] - (long)pppppplVar14);
    }
    if (*(long ********)(in_FS_OFFSET + 0x28) == ppppppplStack_248) {
      ppppppplVar6 = (long *******)free(ppppppplVar7,0x30);
      return ppppppplVar6;
    }
  }
  func_0x0099bd00();
  pcVar1 = (code *)swi(3);
  ppppppplVar6 = (long *******)(*pcVar1)();
  return ppppppplVar6;
}


