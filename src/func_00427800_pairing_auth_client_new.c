// Function: pairing_auth_client_new
// Address: 00427800
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Type propagation algorithm not settling */

long *******
pairing_auth_client_new
          (long *******param_1,long *******param_2,undefined8 param_3,undefined8 param_4,
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
  long *******ppppppplVar9;
  long *******ppppppplVar10;
  long *******ppppppplVar11;
  long *******ppppppplVar12;
  long *******unaff_R12;
  undefined *unaff_R13;
  long *******ppppppplVar13;
  long ******pppppplVar14;
  long *******unaff_R15;
  long in_FS_OFFSET;
  undefined1 auStack_2a8 [8];
  long *******ppppppplStack_2a0;
  long *******ppppppplStack_298;
  long *******ppppppplStack_290;
  undefined *puStack_288;
  long *******ppppppplStack_280;
  long lStack_278;
  long lStack_270;
  long lStack_268;
  long lStack_260;
  long *******ppppppplStack_258;
  undefined *puStack_250;
  undefined *puStack_248;
  long lStack_240;
  long *******ppppppplStack_238;
  long *******ppppppplStack_230;
  long *******ppppppplStack_228;
  long *******ppppppplStack_220;
  long *******ppppppplStack_218;
  code *apcStack_210 [2];
  long ******pppppplStack_200;
  long lStack_1f8;
  long *******ppppppplStack_1f0;
  long *******ppppppplStack_1e8;
  long *******ppppppplStack_1e0;
  long *******ppppppplStack_1d8;
  long *******ppppppplStack_1d0;
  undefined *puStack_1c8;
  long *******ppppppplStack_1c0;
  long lStack_1b8;
  long *******ppppppplStack_1b0;
  long *******ppppppplStack_1a8;
  long lStack_1a0;
  long *******ppppppplStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  long lStack_180;
  long *******ppppppplStack_178;
  long *******ppppppplStack_170;
  undefined *puStack_168;
  long *******ppppppplStack_160;
  long *******ppppppplStack_158;
  undefined *apuStack_150 [2];
  long ******pppppplStack_140;
  long lStack_138;
  long *******ppppppplStack_130;
  long *******ppppppplStack_128;
  long *******ppppppplStack_120;
  undefined *apuStack_118 [2];
  long *******ppppppplStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  long lStack_f0;
  long *******ppppppplStack_e8;
  undefined *apuStack_c0 [2];
  undefined1 auStack_b0 [8];
  long *******ppppppplStack_a8;
  long *******ppppppplStack_a0;
  long *******ppppppplStack_98;
  long *******ppppppplStack_90;
  undefined *puStack_88;
  long ******pppppplStack_80;
  long lStack_78;
  long *******ppppppplStack_70;
  long *******ppppppplStack_68;
  undefined *puStack_60;
  long ******pppppplStack_58;
  long *******ppppppplStack_50;
  long *******ppppppplStack_48;
  long *******ppppppplStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  ppppppplVar9 = param_2;
  ppppppplVar13 = param_1;
  if (param_1 == (long *******)0x0) {
    unaff_R15 = (long *******)&ppppppplStack_50;
    param_5 = (long *******)0x0;
    puStack_60 = &UNK_004278ee;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (unaff_R15,&UNK_0015fda6,0xdb,6,0,0xffffffff);
    puStack_60 = &UNK_004278f6;
    uVar8 = _ZN7android4base10LogMessage6streamEv(unaff_R15);
    puStack_60 = &UNK_0042790a;
    uVar8 = func_0x0032eb30(uVar8,&UNK_0016b15c,0x12);
    ppppppplVar9 = (long *******)&UNK_0015ae05;
    puStack_60 = &UNK_0042791e;
    func_0x0032eb30(uVar8,&UNK_0015ae05,1);
    puStack_60 = &UNK_00427926;
    ppppppplVar13 = unaff_R15;
    _ZN7android4base10LogMessageD2Ev();
  }
  if (param_2 == (long *******)0x0) {
    do {
      puStack_60 = &UNK_00427972;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&ppppppplStack_50,&UNK_0015fda6,0xdc,6,0,0xffffffff);
      puStack_60 = &UNK_0042797a;
      uVar8 = _ZN7android4base10LogMessage6streamEv(&ppppppplStack_50);
      puStack_60 = &UNK_0042798e;
      uVar8 = func_0x0032eb30(uVar8,&UNK_00165d45,0xe);
      puStack_60 = &UNK_004279a2;
      uVar8 = func_0x0032eb30(uVar8,&UNK_001596b0,3);
      puStack_60 = &UNK_004279b2;
      uVar8 = func_0x0032eb30(uVar8,&UNK_0015ae05,1);
      puStack_60 = &UNK_004279c6;
      uVar8 = func_0x0032eb30(uVar8,&UNK_00163098,1);
      puStack_60 = &UNK_004279d6;
      uVar8 = func_0x0032eb30(uVar8,&UNK_0015ae05,1);
      puStack_60 = &UNK_004279ea;
      uVar8 = func_0x0032eb30(uVar8,&UNK_0015980b,2);
      puStack_60 = &UNK_004279fa;
      uVar8 = func_0x0032eb30(uVar8,&UNK_00181bbd,6);
      puStack_60 = &UNK_00427a04;
      uVar8 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar8,0);
      puStack_60 = &UNK_00427a14;
      uVar8 = func_0x0032eb30(uVar8,&UNK_00189813,5);
      puStack_60 = &UNK_00427a1e;
      uVar8 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj(uVar8,0);
      puStack_60 = &UNK_00427a2e;
      func_0x0032eb30(uVar8,&UNK_0017b788,2);
      puStack_60 = &UNK_00427a36;
      _ZN7android4base10LogMessageD2Ev(&ppppppplStack_50);
    } while( true );
  }
  if ((long)param_2 < 0) {
    puStack_60 = &UNK_00427aa3;
    func_0x00330ca0();
  }
  else {
    puStack_60 = &UNK_00427844;
    ppppppplStack_50 = (long *******)_Znwm(param_2);
    unaff_R15 = (long *******)((long)ppppppplStack_50 + (long)param_2);
    puStack_60 = &UNK_0042785e;
    ppppppplStack_40 = unaff_R15;
    func_0x0099bda0(ppppppplStack_50,param_1,param_2);
    puStack_60 = &UNK_0042786c;
    ppppppplStack_48 = unaff_R15;
    param_2 = (long *******)_Znwm(0x30);
    ppppppplVar9 = (long *******)0x0;
    puStack_60 = &UNK_0042787d;
    _ZN14PairingAuthCtxC1ENS_4RoleERKNSt3__16vectorIhNS1_9allocatorIhEEEE
              (param_2,0,&ppppppplStack_50);
    if (*param_2 == param_2[1]) {
      param_1 = &pppppplStack_58;
      param_5 = (long *******)0x0;
      puStack_60 = &UNK_00427a61;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (param_1,&UNK_0015fda6,0xdf,6,0,0xffffffff);
      puStack_60 = &UNK_00427a69;
      uVar8 = _ZN7android4base10LogMessage6streamEv(param_1);
      puStack_60 = &UNK_00427a7d;
      uVar8 = func_0x0032eb30(uVar8,&UNK_001805c1,0x21);
      ppppppplVar9 = (long *******)&UNK_0015ae05;
      puStack_60 = &UNK_00427a91;
      func_0x0032eb30(uVar8,&UNK_0015ae05,1);
      puStack_60 = &UNK_00427a99;
      _ZN7android4base10LogMessageD2Ev(param_1);
    }
    ppppppplVar13 = ppppppplStack_50;
    if (ppppppplStack_50 != (long *******)0x0) {
      ppppppplStack_48 = ppppppplStack_50;
      ppppppplVar9 = (long *******)((long)ppppppplStack_40 - (long)ppppppplStack_50);
      puStack_60 = &UNK_004278a3;
      _ZdaPvSt11align_val_t();
    }
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
      return param_2;
    }
  }
  puStack_60 = &UNK_00427aa8;
  func_0x0099bd00();
  puStack_60 = &stack0xfffffffffffffff8;
  ppppppplStack_68 = param_1;
  ppppppplStack_70 = param_2;
  lStack_78 = *(long *)(in_FS_OFFSET + 0x28);
  if (ppppppplVar13 == (long *******)0x0) {
    param_2 = &pppppplStack_80;
    param_5 = (long *******)0x0;
    puStack_88 = &UNK_00427b15;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (param_2,&UNK_0015fda6,0xe4,6,0,0xffffffff);
    puStack_88 = &UNK_00427b1d;
    uVar8 = _ZN7android4base10LogMessage6streamEv(param_2);
    puStack_88 = &UNK_00427b31;
    uVar8 = func_0x0032eb30(uVar8,&UNK_001725c2,0x11);
    ppppppplVar9 = (long *******)&UNK_0015ae05;
    puStack_88 = &UNK_00427b45;
    func_0x0032eb30(uVar8,&UNK_0015ae05,1);
    puStack_88 = &UNK_00427b4d;
    _ZN7android4base10LogMessageD2Ev(param_2);
    param_1 = (long *******)0x0;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_78) {
    return (long *******)((long)ppppppplVar13[1] - (long)*ppppppplVar13);
  }
  puStack_88 = &UNK_00427b5a;
  func_0x0099bd00();
  puStack_88 = (undefined *)&puStack_60;
  ppppppplStack_90 = unaff_R15;
  ppppppplStack_98 = param_1;
  ppppppplStack_a0 = param_2;
  ppppppplStack_a8 = *(long ********)(in_FS_OFFSET + 0x28);
  if (ppppppplVar13 == (long *******)0x0) {
    param_5 = (long *******)0x0;
    apuStack_c0[0] = &UNK_00427be4;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (auStack_b0,&UNK_0015fda6,0xe9,6,0,0xffffffff);
    apuStack_c0[0] = &UNK_00427bec;
    uVar8 = _ZN7android4base10LogMessage6streamEv(auStack_b0);
    apuStack_c0[0] = &UNK_00427c00;
    uVar8 = func_0x0032eb30(uVar8,&UNK_001725c2,0x11);
    apuStack_c0[0] = &UNK_00427c14;
    func_0x0032eb30(uVar8,&UNK_0015ae05,1);
    apuStack_c0[0] = &UNK_00427c1c;
    _ZN7android4base10LogMessageD2Ev(auStack_b0);
  }
  if (ppppppplVar9 == (long *******)0x0) {
    param_5 = (long *******)0x0;
    apuStack_c0[0] = &UNK_00427c51;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (auStack_b0,&UNK_0015fda6,0xea,6,0,0xffffffff);
    apuStack_c0[0] = &UNK_00427c59;
    uVar8 = _ZN7android4base10LogMessage6streamEv(auStack_b0);
    apuStack_c0[0] = &UNK_00427c6d;
    uVar8 = func_0x0032eb30(uVar8,&UNK_0018b070,0x15);
    apuStack_c0[0] = &UNK_00427c81;
    func_0x0032eb30(uVar8,&UNK_0015ae05,1);
    apuStack_c0[0] = &UNK_00427c89;
    _ZN7android4base10LogMessageD2Ev(auStack_b0);
  }
  ppppppplVar10 = (long *******)*ppppppplVar13;
  apuStack_c0[0] = &UNK_00427b9d;
  ppppppplVar6 = ppppppplVar9;
  func_0x0099bda0(ppppppplVar9,ppppppplVar10,(long)ppppppplVar13[1] - (long)ppppppplVar10);
  if (*(long ********)(in_FS_OFFSET + 0x28) == ppppppplStack_a8) {
    return *(long ********)(in_FS_OFFSET + 0x28);
  }
  apuStack_c0[0] = &UNK_00427c96;
  func_0x0099bd00();
  lStack_f0 = *(long *)(in_FS_OFFSET + 0x28);
  ppppppplVar13 = ppppppplVar10;
  ppppppplVar11 = ppppppplVar6;
  ppppppplStack_e8 = ppppppplVar9;
  apuStack_c0[0] = (undefined *)&puStack_88;
  if (ppppppplVar6 == (long *******)0x0) {
    unaff_R12 = (long *******)&ppppppplStack_108;
    param_5 = (long *******)0x0;
    apuStack_118[0] = &UNK_00427d76;
    apuStack_c0[0] = (undefined *)&puStack_88;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (unaff_R12,&UNK_0015fda6,0xf0,6,0,0xffffffff);
    apuStack_118[0] = &UNK_00427d7e;
    uVar8 = _ZN7android4base10LogMessage6streamEv(unaff_R12);
    apuStack_118[0] = &UNK_00427d92;
    uVar8 = func_0x0032eb30(uVar8,&UNK_001725c2,0x11);
    ppppppplVar13 = (long *******)&UNK_0015ae05;
    apuStack_118[0] = &UNK_00427da6;
    func_0x0032eb30(uVar8,&UNK_0015ae05,1);
    apuStack_118[0] = &UNK_00427dae;
    ppppppplVar11 = unaff_R12;
    _ZN7android4base10LogMessageD2Ev();
  }
  if (ppppppplVar10 == (long *******)0x0) {
    unaff_R12 = (long *******)&ppppppplStack_108;
    param_5 = (long *******)0x0;
    apuStack_118[0] = &UNK_00427ddd;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (unaff_R12,&UNK_0015fda6,0xf1,6,0,0xffffffff);
    apuStack_118[0] = &UNK_00427de5;
    uVar8 = _ZN7android4base10LogMessage6streamEv(unaff_R12);
    apuStack_118[0] = &UNK_00427df9;
    uVar8 = func_0x0032eb30(uVar8,&UNK_00181d17,0x17);
    ppppppplVar13 = (long *******)&UNK_0015ae05;
    apuStack_118[0] = &UNK_00427e0d;
    func_0x0032eb30(uVar8,&UNK_0015ae05,1);
    apuStack_118[0] = &UNK_00427e15;
    ppppppplVar11 = unaff_R12;
    _ZN7android4base10LogMessageD2Ev();
  }
  if (extraout_RDX == (long *******)0x0) {
    do {
      apuStack_118[0] = &UNK_00427e62;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&ppppppplStack_108,&UNK_0015fda6,0xf2,6,0,0xffffffff);
      apuStack_118[0] = &UNK_00427e6a;
      uVar8 = _ZN7android4base10LogMessage6streamEv(&ppppppplStack_108);
      apuStack_118[0] = &UNK_00427e7e;
      uVar8 = func_0x0032eb30(uVar8,&UNK_00165d45,0xe);
      apuStack_118[0] = &UNK_00427e92;
      uVar8 = func_0x0032eb30(uVar8,&UNK_00167dcd,7);
      apuStack_118[0] = &UNK_00427ea2;
      uVar8 = func_0x0032eb30(uVar8,&UNK_0015ae05,1);
      apuStack_118[0] = &UNK_00427eb6;
      uVar8 = func_0x0032eb30(uVar8,&UNK_00163098,1);
      apuStack_118[0] = &UNK_00427ec6;
      uVar8 = func_0x0032eb30(uVar8,&UNK_0015ae05,1);
      apuStack_118[0] = &UNK_00427eda;
      uVar8 = func_0x0032eb30(uVar8,&UNK_0015980b,2);
      apuStack_118[0] = &UNK_00427eea;
      uVar8 = func_0x0032eb30(uVar8,&UNK_00164750,10);
      apuStack_118[0] = &UNK_00427ef4;
      uVar8 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar8,0);
      apuStack_118[0] = &UNK_00427f04;
      uVar8 = func_0x0032eb30(uVar8,&UNK_00189813,5);
      apuStack_118[0] = &UNK_00427f0e;
      uVar8 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj(uVar8,0);
      apuStack_118[0] = &UNK_00427f1e;
      func_0x0032eb30(uVar8,&UNK_0017b788,2);
      apuStack_118[0] = &UNK_00427f26;
      _ZN7android4base10LogMessageD2Ev(&ppppppplStack_108);
    } while( true );
  }
  if ((long)extraout_RDX < 0) {
    apuStack_118[0] = &UNK_00427f30;
    func_0x00330ca0();
  }
  else {
    apuStack_118[0] = &UNK_00427cf0;
    unaff_R12 = (long *******)_Znwm(extraout_RDX);
    unaff_R13 = (undefined *)((long)unaff_R12 + (long)extraout_RDX);
    apuStack_118[0] = &UNK_00427d0d;
    ppppppplStack_108 = unaff_R12;
    puStack_f8 = unaff_R13;
    func_0x0099bda0(unaff_R12,ppppppplVar10,extraout_RDX);
    apuStack_118[0] = &UNK_00427d1d;
    puStack_100 = unaff_R13;
    uVar4 = _ZN14PairingAuthCtx10InitCipherERKNSt3__16vectorIhNS0_9allocatorIhEEEE
                      (ppppppplVar6,&ppppppplStack_108);
    ppppppplVar6 = (long *******)(ulong)uVar4;
    apuStack_118[0] = &UNK_00427d2b;
    ppppppplVar13 = extraout_RDX;
    ppppppplVar11 = unaff_R12;
    _ZdaPvSt11align_val_t();
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_f0) {
      return ppppppplVar6;
    }
  }
  apuStack_118[0] = &UNK_00427f35;
  func_0x0099bd00();
  lStack_138 = *(long *)(in_FS_OFFSET + 0x28);
  ppppppplVar9 = extraout_RDX;
  ppppppplStack_130 = extraout_RDX;
  ppppppplStack_128 = ppppppplVar6;
  ppppppplStack_120 = ppppppplVar10;
  apuStack_118[0] = (undefined *)apuStack_c0;
  if (ppppppplVar11 == (long *******)0x0) {
    ppppppplVar9 = &pppppplStack_140;
    param_5 = (long *******)0x0;
    apuStack_150[0] = &UNK_00427fad;
    apuStack_118[0] = (undefined *)apuStack_c0;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (ppppppplVar9,&UNK_0015fda6,0xf9,6,0,0xffffffff);
    apuStack_150[0] = &UNK_00427fb5;
    uVar8 = _ZN7android4base10LogMessage6streamEv(ppppppplVar9);
    apuStack_150[0] = &UNK_00427fc9;
    uVar8 = func_0x0032eb30(uVar8,&UNK_001725c2,0x11);
    apuStack_150[0] = &UNK_00427fdd;
    func_0x0032eb30(uVar8,&UNK_0015ae05,1);
    apuStack_150[0] = &UNK_00427fe5;
    _ZN7android4base10LogMessageD2Ev(ppppppplVar9);
    ppppppplVar6 = ppppppplVar11;
    ppppppplVar10 = ppppppplVar13;
  }
  apuStack_150[0] = &UNK_00427f64;
  ppppppplVar5 = (long *******)_ZN14PairingAuthCtx17SafeEncryptedSizeEm();
  lStack_1b8 = *(long *)(in_FS_OFFSET + 0x28);
  if (lStack_1b8 == lStack_138) {
    return ppppppplVar5;
  }
  apuStack_150[0] = &UNK_00427ff5;
  func_0x0099bd00();
  lStack_180 = *(long *)(in_FS_OFFSET + 0x28);
  ppppppplVar5 = ppppppplVar13;
  ppppppplVar12 = ppppppplVar11;
  ppppppplStack_178 = ppppppplVar9;
  ppppppplStack_170 = unaff_R12;
  puStack_168 = unaff_R13;
  ppppppplStack_160 = ppppppplVar6;
  ppppppplStack_158 = ppppppplVar10;
  apuStack_150[0] = (undefined *)apuStack_118;
  if (ppppppplVar11 == (long *******)0x0) {
    puStack_1c8 = &UNK_0042814b;
    apuStack_150[0] = (undefined *)apuStack_118;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (&ppppppplStack_198,&UNK_0015fda6,0xff,6,0,0xffffffff);
    puStack_1c8 = &UNK_00428153;
    uVar8 = _ZN7android4base10LogMessage6streamEv(&ppppppplStack_198);
    puStack_1c8 = &UNK_00428167;
    uVar8 = func_0x0032eb30(uVar8,&UNK_001725c2,0x11);
    ppppppplVar5 = (long *******)&UNK_0015ae05;
    puStack_1c8 = &UNK_0042817b;
    func_0x0032eb30(uVar8,&UNK_0015ae05,1);
    puStack_1c8 = &UNK_00428183;
    ppppppplVar12 = (long *******)&ppppppplStack_198;
    _ZN7android4base10LogMessageD2Ev();
    ppppppplVar6 = (long *******)&ppppppplStack_198;
    ppppppplVar9 = param_5;
  }
  if (ppppppplVar13 == (long *******)0x0) {
    ppppppplVar6 = (long *******)&ppppppplStack_198;
    puStack_1c8 = &UNK_004281bc;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (ppppppplVar6,&UNK_0015fda6,0x100,6,0,0xffffffff);
    puStack_1c8 = &UNK_004281c4;
    uVar8 = _ZN7android4base10LogMessage6streamEv(ppppppplVar6);
    puStack_1c8 = &UNK_004281d8;
    uVar8 = func_0x0032eb30(uVar8,&UNK_0017a3cb,0x13);
    ppppppplVar5 = (long *******)&UNK_0015ae05;
    puStack_1c8 = &UNK_004281ec;
    func_0x0032eb30(uVar8,&UNK_0015ae05,1);
    puStack_1c8 = &UNK_004281f4;
    ppppppplVar12 = ppppppplVar6;
    _ZN7android4base10LogMessageD2Ev();
    ppppppplVar9 = param_5;
  }
  if (lStack_1b8 == 0) {
    ppppppplVar6 = (long *******)&ppppppplStack_198;
    puStack_1c8 = &UNK_0042822d;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (ppppppplVar6,&UNK_0015fda6,0x101,6,0,0xffffffff);
    puStack_1c8 = &UNK_00428235;
    uVar8 = _ZN7android4base10LogMessage6streamEv(ppppppplVar6);
    puStack_1c8 = &UNK_00428249;
    uVar8 = func_0x0032eb30(uVar8,&UNK_0015ca76,0x14);
    ppppppplVar5 = (long *******)&UNK_0015ae05;
    puStack_1c8 = &UNK_0042825d;
    func_0x0032eb30(uVar8,&UNK_0015ae05,1);
    puStack_1c8 = &UNK_00428265;
    ppppppplVar12 = ppppppplVar6;
    _ZN7android4base10LogMessageD2Ev();
    ppppppplVar9 = param_5;
  }
  if (param_5 == (long *******)0x0) {
    ppppppplVar6 = (long *******)&ppppppplStack_198;
    puStack_1c8 = &UNK_0042829a;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (ppppppplVar6,&UNK_0015fda6,0x102,6,0,0xffffffff);
    puStack_1c8 = &UNK_004282a2;
    uVar8 = _ZN7android4base10LogMessage6streamEv(ppppppplVar6);
    puStack_1c8 = &UNK_004282b6;
    uVar8 = func_0x0032eb30(uVar8,&UNK_00184bd2,0x14);
    ppppppplVar5 = (long *******)&UNK_0015ae05;
    puStack_1c8 = &UNK_004282ca;
    func_0x0032eb30(uVar8,&UNK_0015ae05,1);
    puStack_1c8 = &UNK_004282d2;
    ppppppplVar12 = ppppppplVar6;
    _ZN7android4base10LogMessageD2Ev();
    ppppppplVar9 = param_5;
  }
  if (extraout_RDX_00 == (long *******)0x0) {
    do {
      puStack_1c8 = &UNK_00428322;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&ppppppplStack_198,&UNK_0015fda6,0x103,6,0,0xffffffff);
      puStack_1c8 = &UNK_0042832a;
      uVar8 = _ZN7android4base10LogMessage6streamEv(&ppppppplStack_198);
      puStack_1c8 = &UNK_0042833e;
      uVar8 = func_0x0032eb30(uVar8,&UNK_00165d45,0xe);
      puStack_1c8 = &UNK_00428352;
      uVar8 = func_0x0032eb30(uVar8,&UNK_001837b0,5);
      puStack_1c8 = &UNK_00428362;
      uVar8 = func_0x0032eb30(uVar8,&UNK_0015ae05,1);
      puStack_1c8 = &UNK_00428376;
      uVar8 = func_0x0032eb30(uVar8,&UNK_00163098,1);
      puStack_1c8 = &UNK_00428386;
      uVar8 = func_0x0032eb30(uVar8,&UNK_0015ae05,1);
      puStack_1c8 = &UNK_0042839a;
      uVar8 = func_0x0032eb30(uVar8,&UNK_0015980b,2);
      puStack_1c8 = &UNK_004283aa;
      uVar8 = func_0x0032eb30(uVar8,&UNK_0015fdd9,8);
      puStack_1c8 = &UNK_004283b4;
      uVar8 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar8,0);
      puStack_1c8 = &UNK_004283c4;
      uVar8 = func_0x0032eb30(uVar8,&UNK_00189813,5);
      puStack_1c8 = &UNK_004283ce;
      uVar8 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj(uVar8,0);
      puStack_1c8 = &UNK_004283de;
      func_0x0032eb30(uVar8,&UNK_0017b788,2);
      puStack_1c8 = &UNK_004283e6;
      _ZN7android4base10LogMessageD2Ev(&ppppppplStack_198);
    } while( true );
  }
  ppppppplStack_1c0 = param_5;
  if ((long)extraout_RDX_00 < 0) {
    puStack_1c8 = &UNK_004283f0;
    func_0x00330ca0();
    ppppppplVar10 = extraout_RDX_00;
  }
  else {
    puStack_1c8 = &UNK_0042806a;
    ppppppplVar6 = (long *******)_Znwm(extraout_RDX_00);
    puStack_1c8 = &UNK_00428089;
    ppppppplStack_198 = ppppppplVar6;
    puStack_188 = (undefined *)((long)extraout_RDX_00 + (long)ppppppplVar6);
    func_0x0099bda0(ppppppplVar6,ppppppplVar13);
    ppppppplStack_1b0 = (long *******)0x0;
    ppppppplStack_1a8 = (long *******)0x0;
    lStack_1a0 = 0;
    puStack_1c8 = &UNK_004280ac;
    puStack_190 = (undefined *)((long)extraout_RDX_00 + (long)ppppppplVar6);
    _ZN14PairingAuthCtx7EncryptERKNSt3__16vectorIhNS0_9allocatorIhEEEE
              (&ppppppplStack_1b0,ppppppplVar11,&ppppppplStack_198);
    ppppppplVar9 = ppppppplStack_1a8;
    ppppppplVar11 = ppppppplStack_1b0;
    if (ppppppplStack_1b0 == ppppppplStack_1a8) {
      if (ppppppplStack_1b0 != (long *******)0x0) goto code_r0x004280dc;
    }
    else {
      ppppppplVar13 = (long *******)((long)ppppppplStack_1a8 - (long)ppppppplStack_1b0);
      puStack_1c8 = &UNK_004280ce;
      func_0x0099bda0(lStack_1b8,ppppppplStack_1b0,ppppppplVar13);
      *ppppppplStack_1c0 = (long ******)ppppppplVar13;
code_r0x004280dc:
      puStack_1c8 = &UNK_004280eb;
      _ZdaPvSt11align_val_t(ppppppplVar11,lStack_1a0 - (long)ppppppplVar11);
    }
    ppppppplVar10 =
         (long *******)CONCAT71((int7)((ulong)ppppppplVar9 >> 8),ppppppplVar11 != ppppppplVar9);
    puStack_1c8 = &UNK_004280fd;
    ppppppplVar5 = extraout_RDX_00;
    ppppppplVar12 = ppppppplVar6;
    _ZdaPvSt11align_val_t();
    ppppppplVar9 = extraout_RDX_00;
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_180) {
      return (long *******)((ulong)ppppppplVar10 & 0xffffffff);
    }
  }
  puStack_1c8 = &UNK_004283f5;
  func_0x0099bd00();
  lStack_1f8 = *(long *)(in_FS_OFFSET + 0x28);
  ppppppplStack_1f0 = ppppppplVar9;
  ppppppplStack_1e8 = ppppppplVar11;
  ppppppplStack_1e0 = ppppppplVar13;
  ppppppplStack_1d8 = ppppppplVar6;
  ppppppplStack_1d0 = ppppppplVar10;
  puStack_1c8 = (undefined *)apuStack_150;
  if (ppppppplVar12 == (long *******)0x0) {
    param_5 = (long *******)0x0;
    apcStack_210[0] = (code *)&UNK_00428491;
    puStack_1c8 = (undefined *)apuStack_150;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (&pppppplStack_200,&UNK_0015fda6,0x111,6,0,0xffffffff);
    apcStack_210[0] = (code *)&UNK_00428499;
    uVar8 = _ZN7android4base10LogMessage6streamEv(&pppppplStack_200);
    apcStack_210[0] = (code *)&UNK_004284ad;
    uVar8 = func_0x0032eb30(uVar8,&UNK_001725c2,0x11);
    apcStack_210[0] = (code *)&UNK_004284c1;
    func_0x0032eb30(uVar8,&UNK_0015ae05,1);
    apcStack_210[0] = (code *)&UNK_004284c9;
    _ZN7android4base10LogMessageD2Ev(&pppppplStack_200);
    ppppppplVar9 = &pppppplStack_200;
    ppppppplVar11 = extraout_RDX_01;
    ppppppplVar10 = ppppppplVar5;
    ppppppplVar6 = ppppppplVar12;
  }
  if (ppppppplVar5 == (long *******)0x0) {
    ppppppplVar9 = &pppppplStack_200;
    param_5 = (long *******)0x0;
    apcStack_210[0] = (code *)&UNK_00428507;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (ppppppplVar9,&UNK_0015fda6,0x112,6,0,0xffffffff);
    apcStack_210[0] = (code *)&UNK_0042850f;
    uVar8 = _ZN7android4base10LogMessage6streamEv(ppppppplVar9);
    apcStack_210[0] = (code *)&UNK_00428523;
    uVar8 = func_0x0032eb30(uVar8,&UNK_00167dd5,0x11);
    apcStack_210[0] = (code *)&UNK_00428537;
    func_0x0032eb30(uVar8,&UNK_0015ae05,1);
    apcStack_210[0] = (code *)&UNK_0042853f;
    _ZN7android4base10LogMessageD2Ev(ppppppplVar9);
    ppppppplVar6 = ppppppplVar12;
    ppppppplVar10 = extraout_RDX_01;
  }
  if (extraout_RDX_01 == (long *******)0x0) {
    do {
      apcStack_210[0] = (code *)&UNK_00428592;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&pppppplStack_200,&UNK_0015fda6,0x113,6,0,0xffffffff);
      apcStack_210[0] = (code *)&UNK_0042859a;
      uVar8 = _ZN7android4base10LogMessage6streamEv(&pppppplStack_200);
      apcStack_210[0] = (code *)&UNK_004285ae;
      uVar8 = func_0x0032eb30(uVar8,&UNK_00165d45,0xe);
      apcStack_210[0] = (code *)&UNK_004285c2;
      uVar8 = func_0x0032eb30(uVar8,&UNK_001596b0,3);
      apcStack_210[0] = (code *)&UNK_004285d2;
      uVar8 = func_0x0032eb30(uVar8,&UNK_0015ae05,1);
      apcStack_210[0] = (code *)&UNK_004285e6;
      uVar8 = func_0x0032eb30(uVar8,&UNK_00163098,1);
      apcStack_210[0] = (code *)&UNK_004285f6;
      uVar8 = func_0x0032eb30(uVar8,&UNK_0015ae05,1);
      apcStack_210[0] = (code *)&UNK_0042860a;
      uVar8 = func_0x0032eb30(uVar8,&UNK_0015980b,2);
      apcStack_210[0] = (code *)&UNK_0042861a;
      uVar8 = func_0x0032eb30(uVar8,&UNK_00181bbd,6);
      apcStack_210[0] = (code *)&UNK_00428624;
      uVar8 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar8,0);
      apcStack_210[0] = (code *)&UNK_00428634;
      uVar8 = func_0x0032eb30(uVar8,&UNK_00189813,5);
      apcStack_210[0] = (code *)&UNK_0042863e;
      uVar8 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj(uVar8,0);
      apcStack_210[0] = (code *)&UNK_0042864e;
      func_0x0032eb30(uVar8,&UNK_0017b788,2);
      apcStack_210[0] = (code *)&UNK_00428656;
      _ZN7android4base10LogMessageD2Ev(&pppppplStack_200);
    } while( true );
  }
  apcStack_210[0] = (code *)&UNK_0042843d;
  ppppppplVar5 = extraout_RDX_01;
  ppppppplVar7 = (long *******)_ZN14PairingAuthCtx17SafeDecryptedSizeEm();
  lStack_278 = *(long *)(in_FS_OFFSET + 0x28);
  if (lStack_278 == lStack_1f8) {
    return ppppppplVar7;
  }
  apcStack_210[0] = pairing_auth_decrypt;
  func_0x0099bd00();
  lStack_240 = *(long *)(in_FS_OFFSET + 0x28);
  ppppppplVar7 = ppppppplVar12;
  ppppppplStack_238 = ppppppplVar9;
  ppppppplStack_230 = ppppppplVar11;
  ppppppplStack_228 = ppppppplVar13;
  ppppppplStack_220 = ppppppplVar6;
  ppppppplStack_218 = ppppppplVar10;
  apcStack_210[0] = (code *)&puStack_1c8;
  if (ppppppplVar12 == (long *******)0x0) {
    puStack_288 = &UNK_004287ab;
    apcStack_210[0] = (code *)&puStack_1c8;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (&ppppppplStack_258,&UNK_0015fda6,0x11a,6,0,0xffffffff);
    puStack_288 = &UNK_004287b3;
    uVar8 = _ZN7android4base10LogMessage6streamEv(&ppppppplStack_258);
    puStack_288 = &UNK_004287c7;
    uVar8 = func_0x0032eb30(uVar8,&UNK_001725c2,0x11);
    puStack_288 = &UNK_004287db;
    func_0x0032eb30(uVar8,&UNK_0015ae05,1);
    puStack_288 = &UNK_004287e3;
    ppppppplVar7 = (long *******)&ppppppplStack_258;
    _ZN7android4base10LogMessageD2Ev();
    ppppppplVar6 = (long *******)&ppppppplStack_258;
    ppppppplVar9 = param_5;
  }
  if (ppppppplVar5 == (long *******)0x0) {
    ppppppplVar6 = (long *******)&ppppppplStack_258;
    puStack_288 = &UNK_0042881c;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (ppppppplVar6,&UNK_0015fda6,0x11b,6,0,0xffffffff);
    puStack_288 = &UNK_00428824;
    uVar8 = _ZN7android4base10LogMessage6streamEv(ppppppplVar6);
    puStack_288 = &UNK_00428838;
    uVar8 = func_0x0032eb30(uVar8,&UNK_0017a3cb,0x13);
    puStack_288 = &UNK_0042884c;
    func_0x0032eb30(uVar8,&UNK_0015ae05,1);
    puStack_288 = &UNK_00428854;
    ppppppplVar7 = ppppppplVar6;
    _ZN7android4base10LogMessageD2Ev();
    ppppppplVar9 = param_5;
  }
  if (lStack_278 == 0) {
    ppppppplVar6 = (long *******)&ppppppplStack_258;
    puStack_288 = &UNK_0042888d;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (ppppppplVar6,&UNK_0015fda6,0x11c,6,0,0xffffffff);
    puStack_288 = &UNK_00428895;
    uVar8 = _ZN7android4base10LogMessage6streamEv(ppppppplVar6);
    puStack_288 = &UNK_004288a9;
    uVar8 = func_0x0032eb30(uVar8,&UNK_0015ca76,0x14);
    puStack_288 = &UNK_004288bd;
    func_0x0032eb30(uVar8,&UNK_0015ae05,1);
    puStack_288 = &UNK_004288c5;
    ppppppplVar7 = ppppppplVar6;
    _ZN7android4base10LogMessageD2Ev();
    ppppppplVar9 = param_5;
  }
  if (param_5 == (long *******)0x0) {
    ppppppplVar6 = (long *******)&ppppppplStack_258;
    puStack_288 = &UNK_004288fa;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (ppppppplVar6,&UNK_0015fda6,0x11d,6,0,0xffffffff);
    puStack_288 = &UNK_00428902;
    uVar8 = _ZN7android4base10LogMessage6streamEv(ppppppplVar6);
    puStack_288 = &UNK_00428916;
    uVar8 = func_0x0032eb30(uVar8,&UNK_00184bd2,0x14);
    puStack_288 = &UNK_0042892a;
    func_0x0032eb30(uVar8,&UNK_0015ae05,1);
    puStack_288 = &UNK_00428932;
    ppppppplVar7 = ppppppplVar6;
    _ZN7android4base10LogMessageD2Ev();
    ppppppplVar9 = param_5;
  }
  if (extraout_RDX_02 == (long *******)0x0) {
    do {
      puStack_288 = &UNK_00428982;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&ppppppplStack_258,&UNK_0015fda6,0x11e,6,0,0xffffffff);
      puStack_288 = &UNK_0042898a;
      uVar8 = _ZN7android4base10LogMessage6streamEv(&ppppppplStack_258);
      puStack_288 = &UNK_0042899e;
      uVar8 = func_0x0032eb30(uVar8,&UNK_00165d45,0xe);
      puStack_288 = &UNK_004289b2;
      uVar8 = func_0x0032eb30(uVar8,&UNK_001837b0,5);
      puStack_288 = &UNK_004289c2;
      uVar8 = func_0x0032eb30(uVar8,&UNK_0015ae05,1);
      puStack_288 = &UNK_004289d6;
      uVar8 = func_0x0032eb30(uVar8,&UNK_00163098,1);
      puStack_288 = &UNK_004289e6;
      uVar8 = func_0x0032eb30(uVar8,&UNK_0015ae05,1);
      puStack_288 = &UNK_004289fa;
      uVar8 = func_0x0032eb30(uVar8,&UNK_0015980b,2);
      puStack_288 = &UNK_00428a0a;
      uVar8 = func_0x0032eb30(uVar8,&UNK_0015fdd9,8);
      puStack_288 = &UNK_00428a14;
      uVar8 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar8,0);
      puStack_288 = &UNK_00428a24;
      uVar8 = func_0x0032eb30(uVar8,&UNK_00189813,5);
      puStack_288 = &UNK_00428a2e;
      uVar8 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj(uVar8,0);
      puStack_288 = &UNK_00428a3e;
      func_0x0032eb30(uVar8,&UNK_0017b788,2);
      puStack_288 = &UNK_00428a46;
      _ZN7android4base10LogMessageD2Ev(&ppppppplStack_258);
    } while( true );
  }
  ppppppplStack_280 = param_5;
  if ((long)extraout_RDX_02 < 0) {
    puStack_288 = &UNK_00428a50;
    func_0x00330ca0();
    goto code_r0x00428a50;
  }
  puStack_288 = &UNK_004286ca;
  ppppppplVar6 = (long *******)_Znwm(extraout_RDX_02);
  puStack_288 = &UNK_004286e9;
  ppppppplStack_258 = ppppppplVar6;
  puStack_248 = (undefined *)((long)extraout_RDX_02 + (long)ppppppplVar6);
  func_0x0099bda0(ppppppplVar6,ppppppplVar5);
  lStack_270 = 0;
  lStack_268 = 0;
  lStack_260 = 0;
  puStack_288 = &UNK_0042870c;
  puStack_250 = (undefined *)((long)extraout_RDX_02 + (long)ppppppplVar6);
  _ZN14PairingAuthCtx7DecryptERKNSt3__16vectorIhNS0_9allocatorIhEEEE
            (&lStack_270,ppppppplVar12,&ppppppplStack_258);
  lVar3 = lStack_268;
  lVar2 = lStack_270;
  if (lStack_270 == lStack_268) {
    if (lStack_270 != 0) goto code_r0x0042873c;
  }
  else {
    pppppplVar14 = (long ******)(lStack_268 - lStack_270);
    puStack_288 = &UNK_0042872e;
    func_0x0099bda0(lStack_278,lStack_270,pppppplVar14);
    *ppppppplStack_280 = pppppplVar14;
code_r0x0042873c:
    puStack_288 = &UNK_0042874b;
    _ZdaPvSt11align_val_t(lVar2,lStack_260 - lVar2);
  }
  puStack_288 = &UNK_0042875d;
  ppppppplVar7 = ppppppplVar6;
  _ZdaPvSt11align_val_t(ppppppplVar6,extraout_RDX_02);
  ppppppplVar9 = extraout_RDX_02;
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_240) {
    return (long *******)(CONCAT71((int7)((ulong)lVar3 >> 8),lVar2 != lVar3) & 0xffffffff);
  }
code_r0x00428a50:
  puStack_288 = &UNK_00428a55;
  func_0x0099bd00();
  ppppppplStack_2a0 = *(long ********)(in_FS_OFFSET + 0x28);
  ppppppplStack_298 = ppppppplVar9;
  ppppppplStack_290 = ppppppplVar6;
  if (ppppppplVar7 == (long *******)0x0) {
    puStack_288 = (undefined *)apcStack_210;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (auStack_2a8,&UNK_0015fda6,300,6,0,0xffffffff);
    uVar8 = _ZN7android4base10LogMessage6streamEv(auStack_2a8);
    uVar8 = func_0x0032eb30(uVar8,&UNK_001725c2,0x11);
    func_0x0032eb30(uVar8,&UNK_0015ae05,1);
    _ZN7android4base10LogMessageD2Ev(auStack_2a8);
    if (*(long ********)(in_FS_OFFSET + 0x28) == ppppppplStack_2a0) {
      return *(long ********)(in_FS_OFFSET + 0x28);
    }
  }
  else {
    pppppplVar14 = ppppppplVar7[5];
    ppppppplVar7[5] = (long ******)0x0;
    puStack_288 = (undefined *)apcStack_210;
    if (pppppplVar14 != (long ******)0x0) {
      puStack_288 = (undefined *)apcStack_210;
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
    if (*(long ********)(in_FS_OFFSET + 0x28) == ppppppplStack_2a0) {
      ppppppplVar9 = (long *******)free(ppppppplVar7,0x30);
      return ppppppplVar9;
    }
  }
  func_0x0099bd00();
  pcVar1 = (code *)swi(3);
  ppppppplVar9 = (long *******)(*pcVar1)();
  return ppppppplVar9;
}


