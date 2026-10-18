// Function: pairing_auth_server_new
// Address: 00427540
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Type propagation algorithm not settling */

long *******
pairing_auth_server_new
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
  undefined1 auStack_300 [8];
  long *******ppppppplStack_2f8;
  long *******ppppppplStack_2f0;
  long *******ppppppplStack_2e8;
  undefined *puStack_2e0;
  long *******ppppppplStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  long *******ppppppplStack_2b0;
  undefined *puStack_2a8;
  undefined *puStack_2a0;
  long lStack_298;
  long *******ppppppplStack_290;
  long *******ppppppplStack_288;
  long *******ppppppplStack_280;
  long *******ppppppplStack_278;
  long *******ppppppplStack_270;
  code *apcStack_268 [2];
  long ******pppppplStack_258;
  long lStack_250;
  long *******ppppppplStack_248;
  long *******ppppppplStack_240;
  long *******ppppppplStack_238;
  long *******ppppppplStack_230;
  long *******ppppppplStack_228;
  undefined *puStack_220;
  long *******ppppppplStack_218;
  long lStack_210;
  long *******ppppppplStack_208;
  long *******ppppppplStack_200;
  long lStack_1f8;
  long *******ppppppplStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  long lStack_1d8;
  long *******ppppppplStack_1d0;
  long *******ppppppplStack_1c8;
  undefined *puStack_1c0;
  long *******ppppppplStack_1b8;
  long *******ppppppplStack_1b0;
  undefined *apuStack_1a8 [2];
  long ******pppppplStack_198;
  long lStack_190;
  long *******ppppppplStack_188;
  long *******ppppppplStack_180;
  long *******ppppppplStack_178;
  undefined *apuStack_170 [2];
  long *******ppppppplStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  long lStack_148;
  long *******ppppppplStack_140;
  undefined *apuStack_118 [2];
  undefined1 auStack_108 [8];
  long *******ppppppplStack_100;
  long *******ppppppplStack_f8;
  long *******ppppppplStack_f0;
  long *******ppppppplStack_e8;
  undefined *puStack_e0;
  long ******pppppplStack_d8;
  long lStack_d0;
  long *******ppppppplStack_c8;
  long *******ppppppplStack_c0;
  undefined *puStack_b8;
  long ******pppppplStack_b0;
  long *******ppppppplStack_a8;
  long *******ppppppplStack_a0;
  long *******ppppppplStack_98;
  long lStack_90;
  long *******ppppppplStack_88;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  long *******ppppppplStack_50;
  long *******ppppppplStack_48;
  long *******ppppppplStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  ppppppplVar9 = param_2;
  ppppppplVar6 = param_1;
  if (param_1 == (long *******)0x0) {
    unaff_R15 = (long *******)&ppppppplStack_50;
    param_5 = (long *******)0x0;
    puStack_60 = &UNK_00427631;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (unaff_R15,&UNK_0015fda6,0xd2,6,0,0xffffffff);
    puStack_60 = &UNK_00427639;
    uVar8 = _ZN7android4base10LogMessage6streamEv(unaff_R15);
    puStack_60 = &UNK_0042764d;
    uVar8 = func_0x0032eb30(uVar8,&UNK_0016b15c,0x12);
    ppppppplVar9 = (long *******)&UNK_0015ae05;
    puStack_60 = &UNK_00427661;
    func_0x0032eb30(uVar8,&UNK_0015ae05,1);
    puStack_60 = &UNK_00427669;
    ppppppplVar6 = unaff_R15;
    _ZN7android4base10LogMessageD2Ev();
  }
  if (param_2 == (long *******)0x0) {
    do {
      puStack_60 = &UNK_004276c2;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&ppppppplStack_50,&UNK_0015fda6,0xd3,6,0,0xffffffff);
      puStack_60 = &UNK_004276ca;
      uVar8 = _ZN7android4base10LogMessage6streamEv(&ppppppplStack_50);
      puStack_60 = &UNK_004276de;
      uVar8 = func_0x0032eb30(uVar8,&UNK_00165d45,0xe);
      puStack_60 = &UNK_004276f2;
      uVar8 = func_0x0032eb30(uVar8,&UNK_001596b0,3);
      puStack_60 = &UNK_00427702;
      uVar8 = func_0x0032eb30(uVar8,&UNK_0015ae05,1);
      puStack_60 = &UNK_00427716;
      uVar8 = func_0x0032eb30(uVar8,&UNK_00163098,1);
      puStack_60 = &UNK_00427726;
      uVar8 = func_0x0032eb30(uVar8,&UNK_0015ae05,1);
      puStack_60 = &UNK_0042773a;
      uVar8 = func_0x0032eb30(uVar8,&UNK_0015980b,2);
      puStack_60 = &UNK_0042774a;
      uVar8 = func_0x0032eb30(uVar8,&UNK_00181bbd,6);
      puStack_60 = &UNK_00427754;
      uVar8 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar8,0);
      puStack_60 = &UNK_00427764;
      uVar8 = func_0x0032eb30(uVar8,&UNK_00189813,5);
      puStack_60 = &UNK_0042776e;
      uVar8 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj(uVar8,0);
      puStack_60 = &UNK_0042777e;
      func_0x0032eb30(uVar8,&UNK_0017b788,2);
      puStack_60 = &UNK_00427786;
      _ZN7android4base10LogMessageD2Ev(&ppppppplStack_50);
    } while( true );
  }
  if ((long)param_2 < 0) {
    puStack_60 = &UNK_004277f3;
    func_0x00330ca0();
  }
  else {
    puStack_60 = &UNK_00427584;
    ppppppplStack_50 = (long *******)_Znwm(param_2);
    unaff_R15 = (long *******)((long)ppppppplStack_50 + (long)param_2);
    puStack_60 = &UNK_0042759e;
    ppppppplStack_40 = unaff_R15;
    func_0x0099bda0(ppppppplStack_50,param_1,param_2);
    puStack_60 = &UNK_004275ac;
    ppppppplStack_48 = unaff_R15;
    param_2 = (long *******)_Znwm(0x30);
    ppppppplVar9 = (long *******)0x1;
    puStack_60 = &UNK_004275c0;
    _ZN14PairingAuthCtxC1ENS_4RoleERKNSt3__16vectorIhNS1_9allocatorIhEEEE
              (param_2,1,&ppppppplStack_50);
    if (*param_2 == param_2[1]) {
      param_5 = (long *******)0x0;
      puStack_60 = &UNK_004277b1;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_58,&UNK_0015fda6,0xd6,6,0,0xffffffff);
      puStack_60 = &UNK_004277b9;
      uVar8 = _ZN7android4base10LogMessage6streamEv(auStack_58);
      puStack_60 = &UNK_004277cd;
      uVar8 = func_0x0032eb30(uVar8,&UNK_001805c1,0x21);
      ppppppplVar9 = (long *******)&UNK_0015ae05;
      puStack_60 = &UNK_004277e1;
      func_0x0032eb30(uVar8,&UNK_0015ae05,1);
      puStack_60 = &UNK_004277e9;
      _ZN7android4base10LogMessageD2Ev(auStack_58);
    }
    ppppppplVar6 = ppppppplStack_50;
    if (ppppppplStack_50 != (long *******)0x0) {
      ppppppplStack_48 = ppppppplStack_50;
      ppppppplVar9 = (long *******)((long)ppppppplStack_40 - (long)ppppppplStack_50);
      puStack_60 = &UNK_004275e6;
      _ZdaPvSt11align_val_t();
    }
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
      return param_2;
    }
  }
  puStack_60 = &UNK_004277f8;
  func_0x0099bd00();
  lStack_90 = *(long *)(in_FS_OFFSET + 0x28);
  ppppppplVar10 = ppppppplVar9;
  ppppppplVar13 = ppppppplVar6;
  ppppppplStack_88 = param_2;
  puStack_60 = &stack0xfffffffffffffff8;
  if (ppppppplVar6 == (long *******)0x0) {
    unaff_R15 = (long *******)&ppppppplStack_a8;
    param_5 = (long *******)0x0;
    puStack_b8 = &UNK_004278ee;
    puStack_60 = &stack0xfffffffffffffff8;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (unaff_R15,&UNK_0015fda6,0xdb,6,0,0xffffffff);
    puStack_b8 = &UNK_004278f6;
    uVar8 = _ZN7android4base10LogMessage6streamEv(unaff_R15);
    puStack_b8 = &UNK_0042790a;
    uVar8 = func_0x0032eb30(uVar8,&UNK_0016b15c,0x12);
    ppppppplVar10 = (long *******)&UNK_0015ae05;
    puStack_b8 = &UNK_0042791e;
    func_0x0032eb30(uVar8,&UNK_0015ae05,1);
    puStack_b8 = &UNK_00427926;
    ppppppplVar13 = unaff_R15;
    _ZN7android4base10LogMessageD2Ev();
  }
  if (ppppppplVar9 == (long *******)0x0) {
    do {
      puStack_b8 = &UNK_00427972;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&ppppppplStack_a8,&UNK_0015fda6,0xdc,6,0,0xffffffff);
      puStack_b8 = &UNK_0042797a;
      uVar8 = _ZN7android4base10LogMessage6streamEv(&ppppppplStack_a8);
      puStack_b8 = &UNK_0042798e;
      uVar8 = func_0x0032eb30(uVar8,&UNK_00165d45,0xe);
      puStack_b8 = &UNK_004279a2;
      uVar8 = func_0x0032eb30(uVar8,&UNK_001596b0,3);
      puStack_b8 = &UNK_004279b2;
      uVar8 = func_0x0032eb30(uVar8,&UNK_0015ae05,1);
      puStack_b8 = &UNK_004279c6;
      uVar8 = func_0x0032eb30(uVar8,&UNK_00163098,1);
      puStack_b8 = &UNK_004279d6;
      uVar8 = func_0x0032eb30(uVar8,&UNK_0015ae05,1);
      puStack_b8 = &UNK_004279ea;
      uVar8 = func_0x0032eb30(uVar8,&UNK_0015980b,2);
      puStack_b8 = &UNK_004279fa;
      uVar8 = func_0x0032eb30(uVar8,&UNK_00181bbd,6);
      puStack_b8 = &UNK_00427a04;
      uVar8 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar8,0);
      puStack_b8 = &UNK_00427a14;
      uVar8 = func_0x0032eb30(uVar8,&UNK_00189813,5);
      puStack_b8 = &UNK_00427a1e;
      uVar8 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj(uVar8,0);
      puStack_b8 = &UNK_00427a2e;
      func_0x0032eb30(uVar8,&UNK_0017b788,2);
      puStack_b8 = &UNK_00427a36;
      _ZN7android4base10LogMessageD2Ev(&ppppppplStack_a8);
    } while( true );
  }
  if ((long)ppppppplVar9 < 0) {
    puStack_b8 = &UNK_00427aa3;
    func_0x00330ca0();
  }
  else {
    puStack_b8 = &UNK_00427844;
    ppppppplStack_a8 = (long *******)_Znwm(ppppppplVar9);
    unaff_R15 = (long *******)((long)ppppppplStack_a8 + (long)ppppppplVar9);
    puStack_b8 = &UNK_0042785e;
    ppppppplStack_98 = unaff_R15;
    func_0x0099bda0(ppppppplStack_a8,ppppppplVar6,ppppppplVar9);
    puStack_b8 = &UNK_0042786c;
    ppppppplStack_a0 = unaff_R15;
    ppppppplVar9 = (long *******)_Znwm(0x30);
    ppppppplVar10 = (long *******)0x0;
    puStack_b8 = &UNK_0042787d;
    _ZN14PairingAuthCtxC1ENS_4RoleERKNSt3__16vectorIhNS1_9allocatorIhEEEE
              (ppppppplVar9,0,&ppppppplStack_a8);
    if (*ppppppplVar9 == ppppppplVar9[1]) {
      ppppppplVar6 = &pppppplStack_b0;
      param_5 = (long *******)0x0;
      puStack_b8 = &UNK_00427a61;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (ppppppplVar6,&UNK_0015fda6,0xdf,6,0,0xffffffff);
      puStack_b8 = &UNK_00427a69;
      uVar8 = _ZN7android4base10LogMessage6streamEv(ppppppplVar6);
      puStack_b8 = &UNK_00427a7d;
      uVar8 = func_0x0032eb30(uVar8,&UNK_001805c1,0x21);
      ppppppplVar10 = (long *******)&UNK_0015ae05;
      puStack_b8 = &UNK_00427a91;
      func_0x0032eb30(uVar8,&UNK_0015ae05,1);
      puStack_b8 = &UNK_00427a99;
      _ZN7android4base10LogMessageD2Ev(ppppppplVar6);
    }
    ppppppplVar13 = ppppppplStack_a8;
    if (ppppppplStack_a8 != (long *******)0x0) {
      ppppppplStack_a0 = ppppppplStack_a8;
      ppppppplVar10 = (long *******)((long)ppppppplStack_98 - (long)ppppppplStack_a8);
      puStack_b8 = &UNK_004278a3;
      _ZdaPvSt11align_val_t();
    }
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_90) {
      return ppppppplVar9;
    }
  }
  puStack_b8 = &UNK_00427aa8;
  func_0x0099bd00();
  puStack_b8 = (undefined *)&puStack_60;
  ppppppplStack_c0 = ppppppplVar6;
  ppppppplStack_c8 = ppppppplVar9;
  lStack_d0 = *(long *)(in_FS_OFFSET + 0x28);
  if (ppppppplVar13 == (long *******)0x0) {
    ppppppplVar9 = &pppppplStack_d8;
    param_5 = (long *******)0x0;
    puStack_e0 = &UNK_00427b15;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (ppppppplVar9,&UNK_0015fda6,0xe4,6,0,0xffffffff);
    puStack_e0 = &UNK_00427b1d;
    uVar8 = _ZN7android4base10LogMessage6streamEv(ppppppplVar9);
    puStack_e0 = &UNK_00427b31;
    uVar8 = func_0x0032eb30(uVar8,&UNK_001725c2,0x11);
    ppppppplVar10 = (long *******)&UNK_0015ae05;
    puStack_e0 = &UNK_00427b45;
    func_0x0032eb30(uVar8,&UNK_0015ae05,1);
    puStack_e0 = &UNK_00427b4d;
    _ZN7android4base10LogMessageD2Ev(ppppppplVar9);
    ppppppplVar6 = (long *******)0x0;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_d0) {
    return (long *******)((long)ppppppplVar13[1] - (long)*ppppppplVar13);
  }
  puStack_e0 = &UNK_00427b5a;
  func_0x0099bd00();
  puStack_e0 = (undefined *)&puStack_b8;
  ppppppplStack_e8 = unaff_R15;
  ppppppplStack_f0 = ppppppplVar6;
  ppppppplStack_f8 = ppppppplVar9;
  ppppppplStack_100 = *(long ********)(in_FS_OFFSET + 0x28);
  if (ppppppplVar13 == (long *******)0x0) {
    param_5 = (long *******)0x0;
    apuStack_118[0] = &UNK_00427be4;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (auStack_108,&UNK_0015fda6,0xe9,6,0,0xffffffff);
    apuStack_118[0] = &UNK_00427bec;
    uVar8 = _ZN7android4base10LogMessage6streamEv(auStack_108);
    apuStack_118[0] = &UNK_00427c00;
    uVar8 = func_0x0032eb30(uVar8,&UNK_001725c2,0x11);
    apuStack_118[0] = &UNK_00427c14;
    func_0x0032eb30(uVar8,&UNK_0015ae05,1);
    apuStack_118[0] = &UNK_00427c1c;
    _ZN7android4base10LogMessageD2Ev(auStack_108);
  }
  if (ppppppplVar10 == (long *******)0x0) {
    param_5 = (long *******)0x0;
    apuStack_118[0] = &UNK_00427c51;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (auStack_108,&UNK_0015fda6,0xea,6,0,0xffffffff);
    apuStack_118[0] = &UNK_00427c59;
    uVar8 = _ZN7android4base10LogMessage6streamEv(auStack_108);
    apuStack_118[0] = &UNK_00427c6d;
    uVar8 = func_0x0032eb30(uVar8,&UNK_0018b070,0x15);
    apuStack_118[0] = &UNK_00427c81;
    func_0x0032eb30(uVar8,&UNK_0015ae05,1);
    apuStack_118[0] = &UNK_00427c89;
    _ZN7android4base10LogMessageD2Ev(auStack_108);
  }
  ppppppplVar9 = (long *******)*ppppppplVar13;
  apuStack_118[0] = &UNK_00427b9d;
  ppppppplVar6 = ppppppplVar10;
  func_0x0099bda0(ppppppplVar10,ppppppplVar9,(long)ppppppplVar13[1] - (long)ppppppplVar9);
  if (*(long ********)(in_FS_OFFSET + 0x28) == ppppppplStack_100) {
    return *(long ********)(in_FS_OFFSET + 0x28);
  }
  apuStack_118[0] = &UNK_00427c96;
  func_0x0099bd00();
  lStack_148 = *(long *)(in_FS_OFFSET + 0x28);
  ppppppplVar13 = ppppppplVar9;
  ppppppplVar11 = ppppppplVar6;
  ppppppplStack_140 = ppppppplVar10;
  apuStack_118[0] = (undefined *)&puStack_e0;
  if (ppppppplVar6 == (long *******)0x0) {
    unaff_R12 = (long *******)&ppppppplStack_160;
    param_5 = (long *******)0x0;
    apuStack_170[0] = &UNK_00427d76;
    apuStack_118[0] = (undefined *)&puStack_e0;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (unaff_R12,&UNK_0015fda6,0xf0,6,0,0xffffffff);
    apuStack_170[0] = &UNK_00427d7e;
    uVar8 = _ZN7android4base10LogMessage6streamEv(unaff_R12);
    apuStack_170[0] = &UNK_00427d92;
    uVar8 = func_0x0032eb30(uVar8,&UNK_001725c2,0x11);
    ppppppplVar13 = (long *******)&UNK_0015ae05;
    apuStack_170[0] = &UNK_00427da6;
    func_0x0032eb30(uVar8,&UNK_0015ae05,1);
    apuStack_170[0] = &UNK_00427dae;
    ppppppplVar11 = unaff_R12;
    _ZN7android4base10LogMessageD2Ev();
  }
  if (ppppppplVar9 == (long *******)0x0) {
    unaff_R12 = (long *******)&ppppppplStack_160;
    param_5 = (long *******)0x0;
    apuStack_170[0] = &UNK_00427ddd;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (unaff_R12,&UNK_0015fda6,0xf1,6,0,0xffffffff);
    apuStack_170[0] = &UNK_00427de5;
    uVar8 = _ZN7android4base10LogMessage6streamEv(unaff_R12);
    apuStack_170[0] = &UNK_00427df9;
    uVar8 = func_0x0032eb30(uVar8,&UNK_00181d17,0x17);
    ppppppplVar13 = (long *******)&UNK_0015ae05;
    apuStack_170[0] = &UNK_00427e0d;
    func_0x0032eb30(uVar8,&UNK_0015ae05,1);
    apuStack_170[0] = &UNK_00427e15;
    ppppppplVar11 = unaff_R12;
    _ZN7android4base10LogMessageD2Ev();
  }
  if (extraout_RDX == (long *******)0x0) {
    do {
      apuStack_170[0] = &UNK_00427e62;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&ppppppplStack_160,&UNK_0015fda6,0xf2,6,0,0xffffffff);
      apuStack_170[0] = &UNK_00427e6a;
      uVar8 = _ZN7android4base10LogMessage6streamEv(&ppppppplStack_160);
      apuStack_170[0] = &UNK_00427e7e;
      uVar8 = func_0x0032eb30(uVar8,&UNK_00165d45,0xe);
      apuStack_170[0] = &UNK_00427e92;
      uVar8 = func_0x0032eb30(uVar8,&UNK_00167dcd,7);
      apuStack_170[0] = &UNK_00427ea2;
      uVar8 = func_0x0032eb30(uVar8,&UNK_0015ae05,1);
      apuStack_170[0] = &UNK_00427eb6;
      uVar8 = func_0x0032eb30(uVar8,&UNK_00163098,1);
      apuStack_170[0] = &UNK_00427ec6;
      uVar8 = func_0x0032eb30(uVar8,&UNK_0015ae05,1);
      apuStack_170[0] = &UNK_00427eda;
      uVar8 = func_0x0032eb30(uVar8,&UNK_0015980b,2);
      apuStack_170[0] = &UNK_00427eea;
      uVar8 = func_0x0032eb30(uVar8,&UNK_00164750,10);
      apuStack_170[0] = &UNK_00427ef4;
      uVar8 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar8,0);
      apuStack_170[0] = &UNK_00427f04;
      uVar8 = func_0x0032eb30(uVar8,&UNK_00189813,5);
      apuStack_170[0] = &UNK_00427f0e;
      uVar8 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj(uVar8,0);
      apuStack_170[0] = &UNK_00427f1e;
      func_0x0032eb30(uVar8,&UNK_0017b788,2);
      apuStack_170[0] = &UNK_00427f26;
      _ZN7android4base10LogMessageD2Ev(&ppppppplStack_160);
    } while( true );
  }
  if ((long)extraout_RDX < 0) {
    apuStack_170[0] = &UNK_00427f30;
    func_0x00330ca0();
  }
  else {
    apuStack_170[0] = &UNK_00427cf0;
    unaff_R12 = (long *******)_Znwm(extraout_RDX);
    unaff_R13 = (undefined *)((long)unaff_R12 + (long)extraout_RDX);
    apuStack_170[0] = &UNK_00427d0d;
    ppppppplStack_160 = unaff_R12;
    puStack_150 = unaff_R13;
    func_0x0099bda0(unaff_R12,ppppppplVar9,extraout_RDX);
    apuStack_170[0] = &UNK_00427d1d;
    puStack_158 = unaff_R13;
    uVar4 = _ZN14PairingAuthCtx10InitCipherERKNSt3__16vectorIhNS0_9allocatorIhEEEE
                      (ppppppplVar6,&ppppppplStack_160);
    ppppppplVar6 = (long *******)(ulong)uVar4;
    apuStack_170[0] = &UNK_00427d2b;
    ppppppplVar13 = extraout_RDX;
    ppppppplVar11 = unaff_R12;
    _ZdaPvSt11align_val_t();
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_148) {
      return ppppppplVar6;
    }
  }
  apuStack_170[0] = &UNK_00427f35;
  func_0x0099bd00();
  lStack_190 = *(long *)(in_FS_OFFSET + 0x28);
  ppppppplVar10 = extraout_RDX;
  ppppppplStack_188 = extraout_RDX;
  ppppppplStack_180 = ppppppplVar6;
  ppppppplStack_178 = ppppppplVar9;
  apuStack_170[0] = (undefined *)apuStack_118;
  if (ppppppplVar11 == (long *******)0x0) {
    ppppppplVar10 = &pppppplStack_198;
    param_5 = (long *******)0x0;
    apuStack_1a8[0] = &UNK_00427fad;
    apuStack_170[0] = (undefined *)apuStack_118;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (ppppppplVar10,&UNK_0015fda6,0xf9,6,0,0xffffffff);
    apuStack_1a8[0] = &UNK_00427fb5;
    uVar8 = _ZN7android4base10LogMessage6streamEv(ppppppplVar10);
    apuStack_1a8[0] = &UNK_00427fc9;
    uVar8 = func_0x0032eb30(uVar8,&UNK_001725c2,0x11);
    apuStack_1a8[0] = &UNK_00427fdd;
    func_0x0032eb30(uVar8,&UNK_0015ae05,1);
    apuStack_1a8[0] = &UNK_00427fe5;
    _ZN7android4base10LogMessageD2Ev(ppppppplVar10);
    ppppppplVar6 = ppppppplVar11;
    ppppppplVar9 = ppppppplVar13;
  }
  apuStack_1a8[0] = &UNK_00427f64;
  ppppppplVar5 = (long *******)_ZN14PairingAuthCtx17SafeEncryptedSizeEm();
  lStack_210 = *(long *)(in_FS_OFFSET + 0x28);
  if (lStack_210 == lStack_190) {
    return ppppppplVar5;
  }
  apuStack_1a8[0] = &UNK_00427ff5;
  func_0x0099bd00();
  lStack_1d8 = *(long *)(in_FS_OFFSET + 0x28);
  ppppppplVar5 = ppppppplVar13;
  ppppppplVar12 = ppppppplVar11;
  ppppppplStack_1d0 = ppppppplVar10;
  ppppppplStack_1c8 = unaff_R12;
  puStack_1c0 = unaff_R13;
  ppppppplStack_1b8 = ppppppplVar6;
  ppppppplStack_1b0 = ppppppplVar9;
  apuStack_1a8[0] = (undefined *)apuStack_170;
  if (ppppppplVar11 == (long *******)0x0) {
    puStack_220 = &UNK_0042814b;
    apuStack_1a8[0] = (undefined *)apuStack_170;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (&ppppppplStack_1f0,&UNK_0015fda6,0xff,6,0,0xffffffff);
    puStack_220 = &UNK_00428153;
    uVar8 = _ZN7android4base10LogMessage6streamEv(&ppppppplStack_1f0);
    puStack_220 = &UNK_00428167;
    uVar8 = func_0x0032eb30(uVar8,&UNK_001725c2,0x11);
    ppppppplVar5 = (long *******)&UNK_0015ae05;
    puStack_220 = &UNK_0042817b;
    func_0x0032eb30(uVar8,&UNK_0015ae05,1);
    puStack_220 = &UNK_00428183;
    ppppppplVar12 = (long *******)&ppppppplStack_1f0;
    _ZN7android4base10LogMessageD2Ev();
    ppppppplVar6 = (long *******)&ppppppplStack_1f0;
    ppppppplVar10 = param_5;
  }
  if (ppppppplVar13 == (long *******)0x0) {
    ppppppplVar6 = (long *******)&ppppppplStack_1f0;
    puStack_220 = &UNK_004281bc;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (ppppppplVar6,&UNK_0015fda6,0x100,6,0,0xffffffff);
    puStack_220 = &UNK_004281c4;
    uVar8 = _ZN7android4base10LogMessage6streamEv(ppppppplVar6);
    puStack_220 = &UNK_004281d8;
    uVar8 = func_0x0032eb30(uVar8,&UNK_0017a3cb,0x13);
    ppppppplVar5 = (long *******)&UNK_0015ae05;
    puStack_220 = &UNK_004281ec;
    func_0x0032eb30(uVar8,&UNK_0015ae05,1);
    puStack_220 = &UNK_004281f4;
    ppppppplVar12 = ppppppplVar6;
    _ZN7android4base10LogMessageD2Ev();
    ppppppplVar10 = param_5;
  }
  if (lStack_210 == 0) {
    ppppppplVar6 = (long *******)&ppppppplStack_1f0;
    puStack_220 = &UNK_0042822d;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (ppppppplVar6,&UNK_0015fda6,0x101,6,0,0xffffffff);
    puStack_220 = &UNK_00428235;
    uVar8 = _ZN7android4base10LogMessage6streamEv(ppppppplVar6);
    puStack_220 = &UNK_00428249;
    uVar8 = func_0x0032eb30(uVar8,&UNK_0015ca76,0x14);
    ppppppplVar5 = (long *******)&UNK_0015ae05;
    puStack_220 = &UNK_0042825d;
    func_0x0032eb30(uVar8,&UNK_0015ae05,1);
    puStack_220 = &UNK_00428265;
    ppppppplVar12 = ppppppplVar6;
    _ZN7android4base10LogMessageD2Ev();
    ppppppplVar10 = param_5;
  }
  if (param_5 == (long *******)0x0) {
    ppppppplVar6 = (long *******)&ppppppplStack_1f0;
    puStack_220 = &UNK_0042829a;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (ppppppplVar6,&UNK_0015fda6,0x102,6,0,0xffffffff);
    puStack_220 = &UNK_004282a2;
    uVar8 = _ZN7android4base10LogMessage6streamEv(ppppppplVar6);
    puStack_220 = &UNK_004282b6;
    uVar8 = func_0x0032eb30(uVar8,&UNK_00184bd2,0x14);
    ppppppplVar5 = (long *******)&UNK_0015ae05;
    puStack_220 = &UNK_004282ca;
    func_0x0032eb30(uVar8,&UNK_0015ae05,1);
    puStack_220 = &UNK_004282d2;
    ppppppplVar12 = ppppppplVar6;
    _ZN7android4base10LogMessageD2Ev();
    ppppppplVar10 = param_5;
  }
  if (extraout_RDX_00 == (long *******)0x0) {
    do {
      puStack_220 = &UNK_00428322;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&ppppppplStack_1f0,&UNK_0015fda6,0x103,6,0,0xffffffff);
      puStack_220 = &UNK_0042832a;
      uVar8 = _ZN7android4base10LogMessage6streamEv(&ppppppplStack_1f0);
      puStack_220 = &UNK_0042833e;
      uVar8 = func_0x0032eb30(uVar8,&UNK_00165d45,0xe);
      puStack_220 = &UNK_00428352;
      uVar8 = func_0x0032eb30(uVar8,&UNK_001837b0,5);
      puStack_220 = &UNK_00428362;
      uVar8 = func_0x0032eb30(uVar8,&UNK_0015ae05,1);
      puStack_220 = &UNK_00428376;
      uVar8 = func_0x0032eb30(uVar8,&UNK_00163098,1);
      puStack_220 = &UNK_00428386;
      uVar8 = func_0x0032eb30(uVar8,&UNK_0015ae05,1);
      puStack_220 = &UNK_0042839a;
      uVar8 = func_0x0032eb30(uVar8,&UNK_0015980b,2);
      puStack_220 = &UNK_004283aa;
      uVar8 = func_0x0032eb30(uVar8,&UNK_0015fdd9,8);
      puStack_220 = &UNK_004283b4;
      uVar8 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar8,0);
      puStack_220 = &UNK_004283c4;
      uVar8 = func_0x0032eb30(uVar8,&UNK_00189813,5);
      puStack_220 = &UNK_004283ce;
      uVar8 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj(uVar8,0);
      puStack_220 = &UNK_004283de;
      func_0x0032eb30(uVar8,&UNK_0017b788,2);
      puStack_220 = &UNK_004283e6;
      _ZN7android4base10LogMessageD2Ev(&ppppppplStack_1f0);
    } while( true );
  }
  ppppppplStack_218 = param_5;
  if ((long)extraout_RDX_00 < 0) {
    puStack_220 = &UNK_004283f0;
    func_0x00330ca0();
    ppppppplVar9 = extraout_RDX_00;
  }
  else {
    puStack_220 = &UNK_0042806a;
    ppppppplVar6 = (long *******)_Znwm(extraout_RDX_00);
    puStack_220 = &UNK_00428089;
    ppppppplStack_1f0 = ppppppplVar6;
    puStack_1e0 = (undefined *)((long)extraout_RDX_00 + (long)ppppppplVar6);
    func_0x0099bda0(ppppppplVar6,ppppppplVar13);
    ppppppplStack_208 = (long *******)0x0;
    ppppppplStack_200 = (long *******)0x0;
    lStack_1f8 = 0;
    puStack_220 = &UNK_004280ac;
    puStack_1e8 = (undefined *)((long)extraout_RDX_00 + (long)ppppppplVar6);
    _ZN14PairingAuthCtx7EncryptERKNSt3__16vectorIhNS0_9allocatorIhEEEE
              (&ppppppplStack_208,ppppppplVar11,&ppppppplStack_1f0);
    ppppppplVar9 = ppppppplStack_200;
    ppppppplVar11 = ppppppplStack_208;
    if (ppppppplStack_208 == ppppppplStack_200) {
      if (ppppppplStack_208 != (long *******)0x0) goto code_r0x004280dc;
    }
    else {
      ppppppplVar13 = (long *******)((long)ppppppplStack_200 - (long)ppppppplStack_208);
      puStack_220 = &UNK_004280ce;
      func_0x0099bda0(lStack_210,ppppppplStack_208,ppppppplVar13);
      *ppppppplStack_218 = (long ******)ppppppplVar13;
code_r0x004280dc:
      puStack_220 = &UNK_004280eb;
      _ZdaPvSt11align_val_t(ppppppplVar11,lStack_1f8 - (long)ppppppplVar11);
    }
    ppppppplVar9 = (long *******)
                   CONCAT71((int7)((ulong)ppppppplVar9 >> 8),ppppppplVar11 != ppppppplVar9);
    puStack_220 = &UNK_004280fd;
    ppppppplVar5 = extraout_RDX_00;
    ppppppplVar12 = ppppppplVar6;
    _ZdaPvSt11align_val_t();
    ppppppplVar10 = extraout_RDX_00;
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_1d8) {
      return (long *******)((ulong)ppppppplVar9 & 0xffffffff);
    }
  }
  puStack_220 = &UNK_004283f5;
  func_0x0099bd00();
  lStack_250 = *(long *)(in_FS_OFFSET + 0x28);
  ppppppplStack_248 = ppppppplVar10;
  ppppppplStack_240 = ppppppplVar11;
  ppppppplStack_238 = ppppppplVar13;
  ppppppplStack_230 = ppppppplVar6;
  ppppppplStack_228 = ppppppplVar9;
  puStack_220 = (undefined *)apuStack_1a8;
  if (ppppppplVar12 == (long *******)0x0) {
    param_5 = (long *******)0x0;
    apcStack_268[0] = (code *)&UNK_00428491;
    puStack_220 = (undefined *)apuStack_1a8;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (&pppppplStack_258,&UNK_0015fda6,0x111,6,0,0xffffffff);
    apcStack_268[0] = (code *)&UNK_00428499;
    uVar8 = _ZN7android4base10LogMessage6streamEv(&pppppplStack_258);
    apcStack_268[0] = (code *)&UNK_004284ad;
    uVar8 = func_0x0032eb30(uVar8,&UNK_001725c2,0x11);
    apcStack_268[0] = (code *)&UNK_004284c1;
    func_0x0032eb30(uVar8,&UNK_0015ae05,1);
    apcStack_268[0] = (code *)&UNK_004284c9;
    _ZN7android4base10LogMessageD2Ev(&pppppplStack_258);
    ppppppplVar10 = &pppppplStack_258;
    ppppppplVar11 = extraout_RDX_01;
    ppppppplVar9 = ppppppplVar5;
    ppppppplVar6 = ppppppplVar12;
  }
  if (ppppppplVar5 == (long *******)0x0) {
    ppppppplVar10 = &pppppplStack_258;
    param_5 = (long *******)0x0;
    apcStack_268[0] = (code *)&UNK_00428507;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (ppppppplVar10,&UNK_0015fda6,0x112,6,0,0xffffffff);
    apcStack_268[0] = (code *)&UNK_0042850f;
    uVar8 = _ZN7android4base10LogMessage6streamEv(ppppppplVar10);
    apcStack_268[0] = (code *)&UNK_00428523;
    uVar8 = func_0x0032eb30(uVar8,&UNK_00167dd5,0x11);
    apcStack_268[0] = (code *)&UNK_00428537;
    func_0x0032eb30(uVar8,&UNK_0015ae05,1);
    apcStack_268[0] = (code *)&UNK_0042853f;
    _ZN7android4base10LogMessageD2Ev(ppppppplVar10);
    ppppppplVar6 = ppppppplVar12;
    ppppppplVar9 = extraout_RDX_01;
  }
  if (extraout_RDX_01 == (long *******)0x0) {
    do {
      apcStack_268[0] = (code *)&UNK_00428592;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&pppppplStack_258,&UNK_0015fda6,0x113,6,0,0xffffffff);
      apcStack_268[0] = (code *)&UNK_0042859a;
      uVar8 = _ZN7android4base10LogMessage6streamEv(&pppppplStack_258);
      apcStack_268[0] = (code *)&UNK_004285ae;
      uVar8 = func_0x0032eb30(uVar8,&UNK_00165d45,0xe);
      apcStack_268[0] = (code *)&UNK_004285c2;
      uVar8 = func_0x0032eb30(uVar8,&UNK_001596b0,3);
      apcStack_268[0] = (code *)&UNK_004285d2;
      uVar8 = func_0x0032eb30(uVar8,&UNK_0015ae05,1);
      apcStack_268[0] = (code *)&UNK_004285e6;
      uVar8 = func_0x0032eb30(uVar8,&UNK_00163098,1);
      apcStack_268[0] = (code *)&UNK_004285f6;
      uVar8 = func_0x0032eb30(uVar8,&UNK_0015ae05,1);
      apcStack_268[0] = (code *)&UNK_0042860a;
      uVar8 = func_0x0032eb30(uVar8,&UNK_0015980b,2);
      apcStack_268[0] = (code *)&UNK_0042861a;
      uVar8 = func_0x0032eb30(uVar8,&UNK_00181bbd,6);
      apcStack_268[0] = (code *)&UNK_00428624;
      uVar8 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar8,0);
      apcStack_268[0] = (code *)&UNK_00428634;
      uVar8 = func_0x0032eb30(uVar8,&UNK_00189813,5);
      apcStack_268[0] = (code *)&UNK_0042863e;
      uVar8 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj(uVar8,0);
      apcStack_268[0] = (code *)&UNK_0042864e;
      func_0x0032eb30(uVar8,&UNK_0017b788,2);
      apcStack_268[0] = (code *)&UNK_00428656;
      _ZN7android4base10LogMessageD2Ev(&pppppplStack_258);
    } while( true );
  }
  apcStack_268[0] = (code *)&UNK_0042843d;
  ppppppplVar5 = extraout_RDX_01;
  ppppppplVar7 = (long *******)_ZN14PairingAuthCtx17SafeDecryptedSizeEm();
  lStack_2d0 = *(long *)(in_FS_OFFSET + 0x28);
  if (lStack_2d0 == lStack_250) {
    return ppppppplVar7;
  }
  apcStack_268[0] = pairing_auth_decrypt;
  func_0x0099bd00();
  lStack_298 = *(long *)(in_FS_OFFSET + 0x28);
  ppppppplVar7 = ppppppplVar12;
  ppppppplStack_290 = ppppppplVar10;
  ppppppplStack_288 = ppppppplVar11;
  ppppppplStack_280 = ppppppplVar13;
  ppppppplStack_278 = ppppppplVar6;
  ppppppplStack_270 = ppppppplVar9;
  apcStack_268[0] = (code *)&puStack_220;
  if (ppppppplVar12 == (long *******)0x0) {
    puStack_2e0 = &UNK_004287ab;
    apcStack_268[0] = (code *)&puStack_220;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (&ppppppplStack_2b0,&UNK_0015fda6,0x11a,6,0,0xffffffff);
    puStack_2e0 = &UNK_004287b3;
    uVar8 = _ZN7android4base10LogMessage6streamEv(&ppppppplStack_2b0);
    puStack_2e0 = &UNK_004287c7;
    uVar8 = func_0x0032eb30(uVar8,&UNK_001725c2,0x11);
    puStack_2e0 = &UNK_004287db;
    func_0x0032eb30(uVar8,&UNK_0015ae05,1);
    puStack_2e0 = &UNK_004287e3;
    ppppppplVar7 = (long *******)&ppppppplStack_2b0;
    _ZN7android4base10LogMessageD2Ev();
    ppppppplVar6 = (long *******)&ppppppplStack_2b0;
    ppppppplVar10 = param_5;
  }
  if (ppppppplVar5 == (long *******)0x0) {
    ppppppplVar6 = (long *******)&ppppppplStack_2b0;
    puStack_2e0 = &UNK_0042881c;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (ppppppplVar6,&UNK_0015fda6,0x11b,6,0,0xffffffff);
    puStack_2e0 = &UNK_00428824;
    uVar8 = _ZN7android4base10LogMessage6streamEv(ppppppplVar6);
    puStack_2e0 = &UNK_00428838;
    uVar8 = func_0x0032eb30(uVar8,&UNK_0017a3cb,0x13);
    puStack_2e0 = &UNK_0042884c;
    func_0x0032eb30(uVar8,&UNK_0015ae05,1);
    puStack_2e0 = &UNK_00428854;
    ppppppplVar7 = ppppppplVar6;
    _ZN7android4base10LogMessageD2Ev();
    ppppppplVar10 = param_5;
  }
  if (lStack_2d0 == 0) {
    ppppppplVar6 = (long *******)&ppppppplStack_2b0;
    puStack_2e0 = &UNK_0042888d;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (ppppppplVar6,&UNK_0015fda6,0x11c,6,0,0xffffffff);
    puStack_2e0 = &UNK_00428895;
    uVar8 = _ZN7android4base10LogMessage6streamEv(ppppppplVar6);
    puStack_2e0 = &UNK_004288a9;
    uVar8 = func_0x0032eb30(uVar8,&UNK_0015ca76,0x14);
    puStack_2e0 = &UNK_004288bd;
    func_0x0032eb30(uVar8,&UNK_0015ae05,1);
    puStack_2e0 = &UNK_004288c5;
    ppppppplVar7 = ppppppplVar6;
    _ZN7android4base10LogMessageD2Ev();
    ppppppplVar10 = param_5;
  }
  if (param_5 == (long *******)0x0) {
    ppppppplVar6 = (long *******)&ppppppplStack_2b0;
    puStack_2e0 = &UNK_004288fa;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (ppppppplVar6,&UNK_0015fda6,0x11d,6,0,0xffffffff);
    puStack_2e0 = &UNK_00428902;
    uVar8 = _ZN7android4base10LogMessage6streamEv(ppppppplVar6);
    puStack_2e0 = &UNK_00428916;
    uVar8 = func_0x0032eb30(uVar8,&UNK_00184bd2,0x14);
    puStack_2e0 = &UNK_0042892a;
    func_0x0032eb30(uVar8,&UNK_0015ae05,1);
    puStack_2e0 = &UNK_00428932;
    ppppppplVar7 = ppppppplVar6;
    _ZN7android4base10LogMessageD2Ev();
    ppppppplVar10 = param_5;
  }
  if (extraout_RDX_02 == (long *******)0x0) {
    do {
      puStack_2e0 = &UNK_00428982;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&ppppppplStack_2b0,&UNK_0015fda6,0x11e,6,0,0xffffffff);
      puStack_2e0 = &UNK_0042898a;
      uVar8 = _ZN7android4base10LogMessage6streamEv(&ppppppplStack_2b0);
      puStack_2e0 = &UNK_0042899e;
      uVar8 = func_0x0032eb30(uVar8,&UNK_00165d45,0xe);
      puStack_2e0 = &UNK_004289b2;
      uVar8 = func_0x0032eb30(uVar8,&UNK_001837b0,5);
      puStack_2e0 = &UNK_004289c2;
      uVar8 = func_0x0032eb30(uVar8,&UNK_0015ae05,1);
      puStack_2e0 = &UNK_004289d6;
      uVar8 = func_0x0032eb30(uVar8,&UNK_00163098,1);
      puStack_2e0 = &UNK_004289e6;
      uVar8 = func_0x0032eb30(uVar8,&UNK_0015ae05,1);
      puStack_2e0 = &UNK_004289fa;
      uVar8 = func_0x0032eb30(uVar8,&UNK_0015980b,2);
      puStack_2e0 = &UNK_00428a0a;
      uVar8 = func_0x0032eb30(uVar8,&UNK_0015fdd9,8);
      puStack_2e0 = &UNK_00428a14;
      uVar8 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar8,0);
      puStack_2e0 = &UNK_00428a24;
      uVar8 = func_0x0032eb30(uVar8,&UNK_00189813,5);
      puStack_2e0 = &UNK_00428a2e;
      uVar8 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj(uVar8,0);
      puStack_2e0 = &UNK_00428a3e;
      func_0x0032eb30(uVar8,&UNK_0017b788,2);
      puStack_2e0 = &UNK_00428a46;
      _ZN7android4base10LogMessageD2Ev(&ppppppplStack_2b0);
    } while( true );
  }
  ppppppplStack_2d8 = param_5;
  if ((long)extraout_RDX_02 < 0) {
    puStack_2e0 = &UNK_00428a50;
    func_0x00330ca0();
    goto code_r0x00428a50;
  }
  puStack_2e0 = &UNK_004286ca;
  ppppppplVar6 = (long *******)_Znwm(extraout_RDX_02);
  puStack_2e0 = &UNK_004286e9;
  ppppppplStack_2b0 = ppppppplVar6;
  puStack_2a0 = (undefined *)((long)extraout_RDX_02 + (long)ppppppplVar6);
  func_0x0099bda0(ppppppplVar6,ppppppplVar5);
  lStack_2c8 = 0;
  lStack_2c0 = 0;
  lStack_2b8 = 0;
  puStack_2e0 = &UNK_0042870c;
  puStack_2a8 = (undefined *)((long)extraout_RDX_02 + (long)ppppppplVar6);
  _ZN14PairingAuthCtx7DecryptERKNSt3__16vectorIhNS0_9allocatorIhEEEE
            (&lStack_2c8,ppppppplVar12,&ppppppplStack_2b0);
  lVar3 = lStack_2c0;
  lVar2 = lStack_2c8;
  if (lStack_2c8 == lStack_2c0) {
    if (lStack_2c8 != 0) goto code_r0x0042873c;
  }
  else {
    pppppplVar14 = (long ******)(lStack_2c0 - lStack_2c8);
    puStack_2e0 = &UNK_0042872e;
    func_0x0099bda0(lStack_2d0,lStack_2c8,pppppplVar14);
    *ppppppplStack_2d8 = pppppplVar14;
code_r0x0042873c:
    puStack_2e0 = &UNK_0042874b;
    _ZdaPvSt11align_val_t(lVar2,lStack_2b8 - lVar2);
  }
  puStack_2e0 = &UNK_0042875d;
  ppppppplVar7 = ppppppplVar6;
  _ZdaPvSt11align_val_t(ppppppplVar6,extraout_RDX_02);
  ppppppplVar10 = extraout_RDX_02;
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_298) {
    return (long *******)(CONCAT71((int7)((ulong)lVar3 >> 8),lVar2 != lVar3) & 0xffffffff);
  }
code_r0x00428a50:
  puStack_2e0 = &UNK_00428a55;
  func_0x0099bd00();
  ppppppplStack_2f8 = *(long ********)(in_FS_OFFSET + 0x28);
  ppppppplStack_2f0 = ppppppplVar10;
  ppppppplStack_2e8 = ppppppplVar6;
  if (ppppppplVar7 == (long *******)0x0) {
    puStack_2e0 = (undefined *)apcStack_268;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (auStack_300,&UNK_0015fda6,300,6,0,0xffffffff);
    uVar8 = _ZN7android4base10LogMessage6streamEv(auStack_300);
    uVar8 = func_0x0032eb30(uVar8,&UNK_001725c2,0x11);
    func_0x0032eb30(uVar8,&UNK_0015ae05,1);
    _ZN7android4base10LogMessageD2Ev(auStack_300);
    if (*(long ********)(in_FS_OFFSET + 0x28) == ppppppplStack_2f8) {
      return *(long ********)(in_FS_OFFSET + 0x28);
    }
  }
  else {
    pppppplVar14 = ppppppplVar7[5];
    ppppppplVar7[5] = (long ******)0x0;
    puStack_2e0 = (undefined *)apcStack_268;
    if (pppppplVar14 != (long ******)0x0) {
      puStack_2e0 = (undefined *)apcStack_268;
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
    if (*(long ********)(in_FS_OFFSET + 0x28) == ppppppplStack_2f8) {
      ppppppplVar6 = (long *******)free(ppppppplVar7,0x30);
      return ppppppplVar6;
    }
  }
  func_0x0099bd00();
  pcVar1 = (code *)swi(3);
  ppppppplVar6 = (long *******)(*pcVar1)();
  return ppppppplVar6;
}


