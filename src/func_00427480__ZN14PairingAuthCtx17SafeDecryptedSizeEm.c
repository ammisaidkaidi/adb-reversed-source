// Function: _ZN14PairingAuthCtx17SafeDecryptedSizeEm
// Address: 00427480
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Type propagation algorithm not settling */

long *******
_ZN14PairingAuthCtx17SafeDecryptedSizeEm
          (long param_1,long *******param_2,undefined8 param_3,undefined8 param_4,
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
  long *******unaff_R15;
  long in_FS_OFFSET;
  undefined1 auStack_338 [8];
  long *******ppppppplStack_330;
  long *******ppppppplStack_328;
  long *******ppppppplStack_320;
  undefined *puStack_318;
  long *******ppppppplStack_310;
  long lStack_308;
  long lStack_300;
  long lStack_2f8;
  long lStack_2f0;
  long *******ppppppplStack_2e8;
  undefined *puStack_2e0;
  undefined *puStack_2d8;
  long lStack_2d0;
  long *******ppppppplStack_2c8;
  long *******ppppppplStack_2c0;
  long *******ppppppplStack_2b8;
  long *******ppppppplStack_2b0;
  long *******ppppppplStack_2a8;
  code *apcStack_2a0 [2];
  long ******pppppplStack_290;
  long lStack_288;
  long *******ppppppplStack_280;
  long *******ppppppplStack_278;
  long *******ppppppplStack_270;
  long *******ppppppplStack_268;
  long *******ppppppplStack_260;
  undefined *puStack_258;
  long *******ppppppplStack_250;
  long lStack_248;
  long *******ppppppplStack_240;
  long *******ppppppplStack_238;
  long lStack_230;
  long *******ppppppplStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  long lStack_210;
  long *******ppppppplStack_208;
  long *******ppppppplStack_200;
  undefined *puStack_1f8;
  long *******ppppppplStack_1f0;
  long *******ppppppplStack_1e8;
  undefined *apuStack_1e0 [2];
  long ******pppppplStack_1d0;
  long lStack_1c8;
  long *******ppppppplStack_1c0;
  long *******ppppppplStack_1b8;
  long *******ppppppplStack_1b0;
  undefined *apuStack_1a8 [2];
  long *******ppppppplStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  long lStack_180;
  long *******ppppppplStack_178;
  undefined *apuStack_150 [2];
  undefined1 auStack_140 [8];
  long *******ppppppplStack_138;
  long *******ppppppplStack_130;
  long *******ppppppplStack_128;
  long *******ppppppplStack_120;
  undefined *puStack_118;
  long ******pppppplStack_110;
  long lStack_108;
  long *******ppppppplStack_100;
  long *******ppppppplStack_f8;
  undefined *puStack_f0;
  long ******pppppplStack_e8;
  long *******ppppppplStack_e0;
  long *******ppppppplStack_d8;
  long *******ppppppplStack_d0;
  long lStack_c8;
  long *******ppppppplStack_c0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  long *******ppppppplStack_88;
  long *******ppppppplStack_80;
  long *******ppppppplStack_78;
  long lStack_70;
  undefined1 *puStack_68;
  undefined *apuStack_40 [2];
  undefined1 auStack_30 [8];
  long lStack_28;
  
  lStack_28 = *(long *)(in_FS_OFFSET + 0x28);
  ppppppplVar10 = *(long ********)(param_1 + 0x28);
  if (ppppppplVar10 == (long *******)0x0) {
    unaff_RBX = auStack_30;
    param_5 = (long *******)0x0;
    apuStack_40[0] = &UNK_004274f4;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (unaff_RBX,&UNK_0015fda6,0xcd,6,0,0xffffffff);
    apuStack_40[0] = &UNK_004274fc;
    uVar8 = _ZN7android4base10LogMessage6streamEv(unaff_RBX);
    apuStack_40[0] = &UNK_00427510;
    uVar8 = func_0x0032eb30(uVar8,&UNK_001630b2,0x15);
    apuStack_40[0] = &UNK_00427524;
    func_0x0032eb30(uVar8,&UNK_0015ae05,1);
    apuStack_40[0] = &UNK_0042752c;
    _ZN7android4base10LogMessageD2Ev(unaff_RBX);
    ppppppplVar10 = *(long ********)(param_1 + 0x28);
    unaff_R15 = param_2;
  }
  apuStack_40[0] = &UNK_004274ab;
  ppppppplVar5 = (long *******)_ZN3adb7pairing9Aes128Gcm13DecryptedSizeEm();
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_28) {
    return ppppppplVar5;
  }
  apuStack_40[0] = &UNK_0042753d;
  func_0x0099bd00();
  lStack_70 = *(long *)(in_FS_OFFSET + 0x28);
  ppppppplVar9 = param_2;
  ppppppplVar5 = ppppppplVar10;
  puStack_68 = unaff_RBX;
  apuStack_40[0] = &stack0xfffffffffffffff8;
  if (ppppppplVar10 == (long *******)0x0) {
    unaff_R15 = (long *******)&ppppppplStack_88;
    param_5 = (long *******)0x0;
    puStack_98 = &UNK_00427631;
    apuStack_40[0] = &stack0xfffffffffffffff8;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (unaff_R15,&UNK_0015fda6,0xd2,6,0,0xffffffff);
    puStack_98 = &UNK_00427639;
    uVar8 = _ZN7android4base10LogMessage6streamEv(unaff_R15);
    puStack_98 = &UNK_0042764d;
    uVar8 = func_0x0032eb30(uVar8,&UNK_0016b15c,0x12);
    ppppppplVar9 = (long *******)&UNK_0015ae05;
    puStack_98 = &UNK_00427661;
    func_0x0032eb30(uVar8,&UNK_0015ae05,1);
    puStack_98 = &UNK_00427669;
    ppppppplVar5 = unaff_R15;
    _ZN7android4base10LogMessageD2Ev();
  }
  if (param_2 == (long *******)0x0) {
    do {
      puStack_98 = &UNK_004276c2;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&ppppppplStack_88,&UNK_0015fda6,0xd3,6,0,0xffffffff);
      puStack_98 = &UNK_004276ca;
      uVar8 = _ZN7android4base10LogMessage6streamEv(&ppppppplStack_88);
      puStack_98 = &UNK_004276de;
      uVar8 = func_0x0032eb30(uVar8,&UNK_00165d45,0xe);
      puStack_98 = &UNK_004276f2;
      uVar8 = func_0x0032eb30(uVar8,&UNK_001596b0,3);
      puStack_98 = &UNK_00427702;
      uVar8 = func_0x0032eb30(uVar8,&UNK_0015ae05,1);
      puStack_98 = &UNK_00427716;
      uVar8 = func_0x0032eb30(uVar8,&UNK_00163098,1);
      puStack_98 = &UNK_00427726;
      uVar8 = func_0x0032eb30(uVar8,&UNK_0015ae05,1);
      puStack_98 = &UNK_0042773a;
      uVar8 = func_0x0032eb30(uVar8,&UNK_0015980b,2);
      puStack_98 = &UNK_0042774a;
      uVar8 = func_0x0032eb30(uVar8,&UNK_00181bbd,6);
      puStack_98 = &UNK_00427754;
      uVar8 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar8,0);
      puStack_98 = &UNK_00427764;
      uVar8 = func_0x0032eb30(uVar8,&UNK_00189813,5);
      puStack_98 = &UNK_0042776e;
      uVar8 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj(uVar8,0);
      puStack_98 = &UNK_0042777e;
      func_0x0032eb30(uVar8,&UNK_0017b788,2);
      puStack_98 = &UNK_00427786;
      _ZN7android4base10LogMessageD2Ev(&ppppppplStack_88);
    } while( true );
  }
  if ((long)param_2 < 0) {
    puStack_98 = &UNK_004277f3;
    func_0x00330ca0();
  }
  else {
    puStack_98 = &UNK_00427584;
    ppppppplStack_88 = (long *******)_Znwm(param_2);
    unaff_R15 = (long *******)((long)ppppppplStack_88 + (long)param_2);
    puStack_98 = &UNK_0042759e;
    ppppppplStack_78 = unaff_R15;
    func_0x0099bda0(ppppppplStack_88,ppppppplVar10,param_2);
    puStack_98 = &UNK_004275ac;
    ppppppplStack_80 = unaff_R15;
    param_2 = (long *******)_Znwm(0x30);
    ppppppplVar9 = (long *******)0x1;
    puStack_98 = &UNK_004275c0;
    _ZN14PairingAuthCtxC1ENS_4RoleERKNSt3__16vectorIhNS1_9allocatorIhEEEE
              (param_2,1,&ppppppplStack_88);
    if (*param_2 == param_2[1]) {
      param_5 = (long *******)0x0;
      puStack_98 = &UNK_004277b1;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_90,&UNK_0015fda6,0xd6,6,0,0xffffffff);
      puStack_98 = &UNK_004277b9;
      uVar8 = _ZN7android4base10LogMessage6streamEv(auStack_90);
      puStack_98 = &UNK_004277cd;
      uVar8 = func_0x0032eb30(uVar8,&UNK_001805c1,0x21);
      ppppppplVar9 = (long *******)&UNK_0015ae05;
      puStack_98 = &UNK_004277e1;
      func_0x0032eb30(uVar8,&UNK_0015ae05,1);
      puStack_98 = &UNK_004277e9;
      _ZN7android4base10LogMessageD2Ev(auStack_90);
    }
    ppppppplVar5 = ppppppplStack_88;
    if (ppppppplStack_88 != (long *******)0x0) {
      ppppppplStack_80 = ppppppplStack_88;
      ppppppplVar9 = (long *******)((long)ppppppplStack_78 - (long)ppppppplStack_88);
      puStack_98 = &UNK_004275e6;
      _ZdaPvSt11align_val_t();
    }
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_70) {
      return param_2;
    }
  }
  puStack_98 = &UNK_004277f8;
  func_0x0099bd00();
  lStack_c8 = *(long *)(in_FS_OFFSET + 0x28);
  ppppppplVar10 = ppppppplVar9;
  ppppppplVar13 = ppppppplVar5;
  ppppppplStack_c0 = param_2;
  puStack_98 = (undefined *)apuStack_40;
  if (ppppppplVar5 == (long *******)0x0) {
    unaff_R15 = (long *******)&ppppppplStack_e0;
    param_5 = (long *******)0x0;
    puStack_f0 = &UNK_004278ee;
    puStack_98 = (undefined *)apuStack_40;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (unaff_R15,&UNK_0015fda6,0xdb,6,0,0xffffffff);
    puStack_f0 = &UNK_004278f6;
    uVar8 = _ZN7android4base10LogMessage6streamEv(unaff_R15);
    puStack_f0 = &UNK_0042790a;
    uVar8 = func_0x0032eb30(uVar8,&UNK_0016b15c,0x12);
    ppppppplVar10 = (long *******)&UNK_0015ae05;
    puStack_f0 = &UNK_0042791e;
    func_0x0032eb30(uVar8,&UNK_0015ae05,1);
    puStack_f0 = &UNK_00427926;
    ppppppplVar13 = unaff_R15;
    _ZN7android4base10LogMessageD2Ev();
  }
  if (ppppppplVar9 == (long *******)0x0) {
    do {
      puStack_f0 = &UNK_00427972;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&ppppppplStack_e0,&UNK_0015fda6,0xdc,6,0,0xffffffff);
      puStack_f0 = &UNK_0042797a;
      uVar8 = _ZN7android4base10LogMessage6streamEv(&ppppppplStack_e0);
      puStack_f0 = &UNK_0042798e;
      uVar8 = func_0x0032eb30(uVar8,&UNK_00165d45,0xe);
      puStack_f0 = &UNK_004279a2;
      uVar8 = func_0x0032eb30(uVar8,&UNK_001596b0,3);
      puStack_f0 = &UNK_004279b2;
      uVar8 = func_0x0032eb30(uVar8,&UNK_0015ae05,1);
      puStack_f0 = &UNK_004279c6;
      uVar8 = func_0x0032eb30(uVar8,&UNK_00163098,1);
      puStack_f0 = &UNK_004279d6;
      uVar8 = func_0x0032eb30(uVar8,&UNK_0015ae05,1);
      puStack_f0 = &UNK_004279ea;
      uVar8 = func_0x0032eb30(uVar8,&UNK_0015980b,2);
      puStack_f0 = &UNK_004279fa;
      uVar8 = func_0x0032eb30(uVar8,&UNK_00181bbd,6);
      puStack_f0 = &UNK_00427a04;
      uVar8 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar8,0);
      puStack_f0 = &UNK_00427a14;
      uVar8 = func_0x0032eb30(uVar8,&UNK_00189813,5);
      puStack_f0 = &UNK_00427a1e;
      uVar8 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj(uVar8,0);
      puStack_f0 = &UNK_00427a2e;
      func_0x0032eb30(uVar8,&UNK_0017b788,2);
      puStack_f0 = &UNK_00427a36;
      _ZN7android4base10LogMessageD2Ev(&ppppppplStack_e0);
    } while( true );
  }
  if ((long)ppppppplVar9 < 0) {
    puStack_f0 = &UNK_00427aa3;
    func_0x00330ca0();
  }
  else {
    puStack_f0 = &UNK_00427844;
    ppppppplStack_e0 = (long *******)_Znwm(ppppppplVar9);
    unaff_R15 = (long *******)((long)ppppppplStack_e0 + (long)ppppppplVar9);
    puStack_f0 = &UNK_0042785e;
    ppppppplStack_d0 = unaff_R15;
    func_0x0099bda0(ppppppplStack_e0,ppppppplVar5,ppppppplVar9);
    puStack_f0 = &UNK_0042786c;
    ppppppplStack_d8 = unaff_R15;
    ppppppplVar9 = (long *******)_Znwm(0x30);
    ppppppplVar10 = (long *******)0x0;
    puStack_f0 = &UNK_0042787d;
    _ZN14PairingAuthCtxC1ENS_4RoleERKNSt3__16vectorIhNS1_9allocatorIhEEEE
              (ppppppplVar9,0,&ppppppplStack_e0);
    if (*ppppppplVar9 == ppppppplVar9[1]) {
      ppppppplVar5 = &pppppplStack_e8;
      param_5 = (long *******)0x0;
      puStack_f0 = &UNK_00427a61;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (ppppppplVar5,&UNK_0015fda6,0xdf,6,0,0xffffffff);
      puStack_f0 = &UNK_00427a69;
      uVar8 = _ZN7android4base10LogMessage6streamEv(ppppppplVar5);
      puStack_f0 = &UNK_00427a7d;
      uVar8 = func_0x0032eb30(uVar8,&UNK_001805c1,0x21);
      ppppppplVar10 = (long *******)&UNK_0015ae05;
      puStack_f0 = &UNK_00427a91;
      func_0x0032eb30(uVar8,&UNK_0015ae05,1);
      puStack_f0 = &UNK_00427a99;
      _ZN7android4base10LogMessageD2Ev(ppppppplVar5);
    }
    ppppppplVar13 = ppppppplStack_e0;
    if (ppppppplStack_e0 != (long *******)0x0) {
      ppppppplStack_d8 = ppppppplStack_e0;
      ppppppplVar10 = (long *******)((long)ppppppplStack_d0 - (long)ppppppplStack_e0);
      puStack_f0 = &UNK_004278a3;
      _ZdaPvSt11align_val_t();
    }
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_c8) {
      return ppppppplVar9;
    }
  }
  puStack_f0 = &UNK_00427aa8;
  func_0x0099bd00();
  puStack_f0 = (undefined *)&puStack_98;
  ppppppplStack_f8 = ppppppplVar5;
  ppppppplStack_100 = ppppppplVar9;
  lStack_108 = *(long *)(in_FS_OFFSET + 0x28);
  if (ppppppplVar13 == (long *******)0x0) {
    ppppppplVar9 = &pppppplStack_110;
    param_5 = (long *******)0x0;
    puStack_118 = &UNK_00427b15;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (ppppppplVar9,&UNK_0015fda6,0xe4,6,0,0xffffffff);
    puStack_118 = &UNK_00427b1d;
    uVar8 = _ZN7android4base10LogMessage6streamEv(ppppppplVar9);
    puStack_118 = &UNK_00427b31;
    uVar8 = func_0x0032eb30(uVar8,&UNK_001725c2,0x11);
    ppppppplVar10 = (long *******)&UNK_0015ae05;
    puStack_118 = &UNK_00427b45;
    func_0x0032eb30(uVar8,&UNK_0015ae05,1);
    puStack_118 = &UNK_00427b4d;
    _ZN7android4base10LogMessageD2Ev(ppppppplVar9);
    ppppppplVar5 = (long *******)0x0;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_108) {
    return (long *******)((long)ppppppplVar13[1] - (long)*ppppppplVar13);
  }
  puStack_118 = &UNK_00427b5a;
  func_0x0099bd00();
  puStack_118 = (undefined *)&puStack_f0;
  ppppppplStack_120 = unaff_R15;
  ppppppplStack_128 = ppppppplVar5;
  ppppppplStack_130 = ppppppplVar9;
  ppppppplStack_138 = *(long ********)(in_FS_OFFSET + 0x28);
  if (ppppppplVar13 == (long *******)0x0) {
    param_5 = (long *******)0x0;
    apuStack_150[0] = &UNK_00427be4;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (auStack_140,&UNK_0015fda6,0xe9,6,0,0xffffffff);
    apuStack_150[0] = &UNK_00427bec;
    uVar8 = _ZN7android4base10LogMessage6streamEv(auStack_140);
    apuStack_150[0] = &UNK_00427c00;
    uVar8 = func_0x0032eb30(uVar8,&UNK_001725c2,0x11);
    apuStack_150[0] = &UNK_00427c14;
    func_0x0032eb30(uVar8,&UNK_0015ae05,1);
    apuStack_150[0] = &UNK_00427c1c;
    _ZN7android4base10LogMessageD2Ev(auStack_140);
  }
  if (ppppppplVar10 == (long *******)0x0) {
    param_5 = (long *******)0x0;
    apuStack_150[0] = &UNK_00427c51;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (auStack_140,&UNK_0015fda6,0xea,6,0,0xffffffff);
    apuStack_150[0] = &UNK_00427c59;
    uVar8 = _ZN7android4base10LogMessage6streamEv(auStack_140);
    apuStack_150[0] = &UNK_00427c6d;
    uVar8 = func_0x0032eb30(uVar8,&UNK_0018b070,0x15);
    apuStack_150[0] = &UNK_00427c81;
    func_0x0032eb30(uVar8,&UNK_0015ae05,1);
    apuStack_150[0] = &UNK_00427c89;
    _ZN7android4base10LogMessageD2Ev(auStack_140);
  }
  ppppppplVar9 = (long *******)*ppppppplVar13;
  apuStack_150[0] = &UNK_00427b9d;
  ppppppplVar5 = ppppppplVar10;
  func_0x0099bda0(ppppppplVar10,ppppppplVar9,(long)ppppppplVar13[1] - (long)ppppppplVar9);
  if (*(long ********)(in_FS_OFFSET + 0x28) == ppppppplStack_138) {
    return *(long ********)(in_FS_OFFSET + 0x28);
  }
  apuStack_150[0] = &UNK_00427c96;
  func_0x0099bd00();
  lStack_180 = *(long *)(in_FS_OFFSET + 0x28);
  ppppppplVar13 = ppppppplVar9;
  ppppppplVar11 = ppppppplVar5;
  ppppppplStack_178 = ppppppplVar10;
  apuStack_150[0] = (undefined *)&puStack_118;
  if (ppppppplVar5 == (long *******)0x0) {
    unaff_R12 = (long *******)&ppppppplStack_198;
    param_5 = (long *******)0x0;
    apuStack_1a8[0] = &UNK_00427d76;
    apuStack_150[0] = (undefined *)&puStack_118;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (unaff_R12,&UNK_0015fda6,0xf0,6,0,0xffffffff);
    apuStack_1a8[0] = &UNK_00427d7e;
    uVar8 = _ZN7android4base10LogMessage6streamEv(unaff_R12);
    apuStack_1a8[0] = &UNK_00427d92;
    uVar8 = func_0x0032eb30(uVar8,&UNK_001725c2,0x11);
    ppppppplVar13 = (long *******)&UNK_0015ae05;
    apuStack_1a8[0] = &UNK_00427da6;
    func_0x0032eb30(uVar8,&UNK_0015ae05,1);
    apuStack_1a8[0] = &UNK_00427dae;
    ppppppplVar11 = unaff_R12;
    _ZN7android4base10LogMessageD2Ev();
  }
  if (ppppppplVar9 == (long *******)0x0) {
    unaff_R12 = (long *******)&ppppppplStack_198;
    param_5 = (long *******)0x0;
    apuStack_1a8[0] = &UNK_00427ddd;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (unaff_R12,&UNK_0015fda6,0xf1,6,0,0xffffffff);
    apuStack_1a8[0] = &UNK_00427de5;
    uVar8 = _ZN7android4base10LogMessage6streamEv(unaff_R12);
    apuStack_1a8[0] = &UNK_00427df9;
    uVar8 = func_0x0032eb30(uVar8,&UNK_00181d17,0x17);
    ppppppplVar13 = (long *******)&UNK_0015ae05;
    apuStack_1a8[0] = &UNK_00427e0d;
    func_0x0032eb30(uVar8,&UNK_0015ae05,1);
    apuStack_1a8[0] = &UNK_00427e15;
    ppppppplVar11 = unaff_R12;
    _ZN7android4base10LogMessageD2Ev();
  }
  if (extraout_RDX == (long *******)0x0) {
    do {
      apuStack_1a8[0] = &UNK_00427e62;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&ppppppplStack_198,&UNK_0015fda6,0xf2,6,0,0xffffffff);
      apuStack_1a8[0] = &UNK_00427e6a;
      uVar8 = _ZN7android4base10LogMessage6streamEv(&ppppppplStack_198);
      apuStack_1a8[0] = &UNK_00427e7e;
      uVar8 = func_0x0032eb30(uVar8,&UNK_00165d45,0xe);
      apuStack_1a8[0] = &UNK_00427e92;
      uVar8 = func_0x0032eb30(uVar8,&UNK_00167dcd,7);
      apuStack_1a8[0] = &UNK_00427ea2;
      uVar8 = func_0x0032eb30(uVar8,&UNK_0015ae05,1);
      apuStack_1a8[0] = &UNK_00427eb6;
      uVar8 = func_0x0032eb30(uVar8,&UNK_00163098,1);
      apuStack_1a8[0] = &UNK_00427ec6;
      uVar8 = func_0x0032eb30(uVar8,&UNK_0015ae05,1);
      apuStack_1a8[0] = &UNK_00427eda;
      uVar8 = func_0x0032eb30(uVar8,&UNK_0015980b,2);
      apuStack_1a8[0] = &UNK_00427eea;
      uVar8 = func_0x0032eb30(uVar8,&UNK_00164750,10);
      apuStack_1a8[0] = &UNK_00427ef4;
      uVar8 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar8,0);
      apuStack_1a8[0] = &UNK_00427f04;
      uVar8 = func_0x0032eb30(uVar8,&UNK_00189813,5);
      apuStack_1a8[0] = &UNK_00427f0e;
      uVar8 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj(uVar8,0);
      apuStack_1a8[0] = &UNK_00427f1e;
      func_0x0032eb30(uVar8,&UNK_0017b788,2);
      apuStack_1a8[0] = &UNK_00427f26;
      _ZN7android4base10LogMessageD2Ev(&ppppppplStack_198);
    } while( true );
  }
  if ((long)extraout_RDX < 0) {
    apuStack_1a8[0] = &UNK_00427f30;
    func_0x00330ca0();
  }
  else {
    apuStack_1a8[0] = &UNK_00427cf0;
    unaff_R12 = (long *******)_Znwm(extraout_RDX);
    unaff_R13 = (undefined *)((long)unaff_R12 + (long)extraout_RDX);
    apuStack_1a8[0] = &UNK_00427d0d;
    ppppppplStack_198 = unaff_R12;
    puStack_188 = unaff_R13;
    func_0x0099bda0(unaff_R12,ppppppplVar9,extraout_RDX);
    apuStack_1a8[0] = &UNK_00427d1d;
    puStack_190 = unaff_R13;
    uVar4 = _ZN14PairingAuthCtx10InitCipherERKNSt3__16vectorIhNS0_9allocatorIhEEEE
                      (ppppppplVar5,&ppppppplStack_198);
    ppppppplVar5 = (long *******)(ulong)uVar4;
    apuStack_1a8[0] = &UNK_00427d2b;
    ppppppplVar13 = extraout_RDX;
    ppppppplVar11 = unaff_R12;
    _ZdaPvSt11align_val_t();
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_180) {
      return ppppppplVar5;
    }
  }
  apuStack_1a8[0] = &UNK_00427f35;
  func_0x0099bd00();
  lStack_1c8 = *(long *)(in_FS_OFFSET + 0x28);
  ppppppplVar10 = extraout_RDX;
  ppppppplStack_1c0 = extraout_RDX;
  ppppppplStack_1b8 = ppppppplVar5;
  ppppppplStack_1b0 = ppppppplVar9;
  apuStack_1a8[0] = (undefined *)apuStack_150;
  if (ppppppplVar11 == (long *******)0x0) {
    ppppppplVar10 = &pppppplStack_1d0;
    param_5 = (long *******)0x0;
    apuStack_1e0[0] = &UNK_00427fad;
    apuStack_1a8[0] = (undefined *)apuStack_150;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (ppppppplVar10,&UNK_0015fda6,0xf9,6,0,0xffffffff);
    apuStack_1e0[0] = &UNK_00427fb5;
    uVar8 = _ZN7android4base10LogMessage6streamEv(ppppppplVar10);
    apuStack_1e0[0] = &UNK_00427fc9;
    uVar8 = func_0x0032eb30(uVar8,&UNK_001725c2,0x11);
    apuStack_1e0[0] = &UNK_00427fdd;
    func_0x0032eb30(uVar8,&UNK_0015ae05,1);
    apuStack_1e0[0] = &UNK_00427fe5;
    _ZN7android4base10LogMessageD2Ev(ppppppplVar10);
    ppppppplVar5 = ppppppplVar11;
    ppppppplVar9 = ppppppplVar13;
  }
  apuStack_1e0[0] = &UNK_00427f64;
  ppppppplVar6 = (long *******)_ZN14PairingAuthCtx17SafeEncryptedSizeEm();
  lStack_248 = *(long *)(in_FS_OFFSET + 0x28);
  if (lStack_248 == lStack_1c8) {
    return ppppppplVar6;
  }
  apuStack_1e0[0] = &UNK_00427ff5;
  func_0x0099bd00();
  lStack_210 = *(long *)(in_FS_OFFSET + 0x28);
  ppppppplVar6 = ppppppplVar13;
  ppppppplVar12 = ppppppplVar11;
  ppppppplStack_208 = ppppppplVar10;
  ppppppplStack_200 = unaff_R12;
  puStack_1f8 = unaff_R13;
  ppppppplStack_1f0 = ppppppplVar5;
  ppppppplStack_1e8 = ppppppplVar9;
  apuStack_1e0[0] = (undefined *)apuStack_1a8;
  if (ppppppplVar11 == (long *******)0x0) {
    puStack_258 = &UNK_0042814b;
    apuStack_1e0[0] = (undefined *)apuStack_1a8;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (&ppppppplStack_228,&UNK_0015fda6,0xff,6,0,0xffffffff);
    puStack_258 = &UNK_00428153;
    uVar8 = _ZN7android4base10LogMessage6streamEv(&ppppppplStack_228);
    puStack_258 = &UNK_00428167;
    uVar8 = func_0x0032eb30(uVar8,&UNK_001725c2,0x11);
    ppppppplVar6 = (long *******)&UNK_0015ae05;
    puStack_258 = &UNK_0042817b;
    func_0x0032eb30(uVar8,&UNK_0015ae05,1);
    puStack_258 = &UNK_00428183;
    ppppppplVar12 = (long *******)&ppppppplStack_228;
    _ZN7android4base10LogMessageD2Ev();
    ppppppplVar5 = (long *******)&ppppppplStack_228;
    ppppppplVar10 = param_5;
  }
  if (ppppppplVar13 == (long *******)0x0) {
    ppppppplVar5 = (long *******)&ppppppplStack_228;
    puStack_258 = &UNK_004281bc;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (ppppppplVar5,&UNK_0015fda6,0x100,6,0,0xffffffff);
    puStack_258 = &UNK_004281c4;
    uVar8 = _ZN7android4base10LogMessage6streamEv(ppppppplVar5);
    puStack_258 = &UNK_004281d8;
    uVar8 = func_0x0032eb30(uVar8,&UNK_0017a3cb,0x13);
    ppppppplVar6 = (long *******)&UNK_0015ae05;
    puStack_258 = &UNK_004281ec;
    func_0x0032eb30(uVar8,&UNK_0015ae05,1);
    puStack_258 = &UNK_004281f4;
    ppppppplVar12 = ppppppplVar5;
    _ZN7android4base10LogMessageD2Ev();
    ppppppplVar10 = param_5;
  }
  if (lStack_248 == 0) {
    ppppppplVar5 = (long *******)&ppppppplStack_228;
    puStack_258 = &UNK_0042822d;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (ppppppplVar5,&UNK_0015fda6,0x101,6,0,0xffffffff);
    puStack_258 = &UNK_00428235;
    uVar8 = _ZN7android4base10LogMessage6streamEv(ppppppplVar5);
    puStack_258 = &UNK_00428249;
    uVar8 = func_0x0032eb30(uVar8,&UNK_0015ca76,0x14);
    ppppppplVar6 = (long *******)&UNK_0015ae05;
    puStack_258 = &UNK_0042825d;
    func_0x0032eb30(uVar8,&UNK_0015ae05,1);
    puStack_258 = &UNK_00428265;
    ppppppplVar12 = ppppppplVar5;
    _ZN7android4base10LogMessageD2Ev();
    ppppppplVar10 = param_5;
  }
  if (param_5 == (long *******)0x0) {
    ppppppplVar5 = (long *******)&ppppppplStack_228;
    puStack_258 = &UNK_0042829a;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (ppppppplVar5,&UNK_0015fda6,0x102,6,0,0xffffffff);
    puStack_258 = &UNK_004282a2;
    uVar8 = _ZN7android4base10LogMessage6streamEv(ppppppplVar5);
    puStack_258 = &UNK_004282b6;
    uVar8 = func_0x0032eb30(uVar8,&UNK_00184bd2,0x14);
    ppppppplVar6 = (long *******)&UNK_0015ae05;
    puStack_258 = &UNK_004282ca;
    func_0x0032eb30(uVar8,&UNK_0015ae05,1);
    puStack_258 = &UNK_004282d2;
    ppppppplVar12 = ppppppplVar5;
    _ZN7android4base10LogMessageD2Ev();
    ppppppplVar10 = param_5;
  }
  if (extraout_RDX_00 == (long *******)0x0) {
    do {
      puStack_258 = &UNK_00428322;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&ppppppplStack_228,&UNK_0015fda6,0x103,6,0,0xffffffff);
      puStack_258 = &UNK_0042832a;
      uVar8 = _ZN7android4base10LogMessage6streamEv(&ppppppplStack_228);
      puStack_258 = &UNK_0042833e;
      uVar8 = func_0x0032eb30(uVar8,&UNK_00165d45,0xe);
      puStack_258 = &UNK_00428352;
      uVar8 = func_0x0032eb30(uVar8,&UNK_001837b0,5);
      puStack_258 = &UNK_00428362;
      uVar8 = func_0x0032eb30(uVar8,&UNK_0015ae05,1);
      puStack_258 = &UNK_00428376;
      uVar8 = func_0x0032eb30(uVar8,&UNK_00163098,1);
      puStack_258 = &UNK_00428386;
      uVar8 = func_0x0032eb30(uVar8,&UNK_0015ae05,1);
      puStack_258 = &UNK_0042839a;
      uVar8 = func_0x0032eb30(uVar8,&UNK_0015980b,2);
      puStack_258 = &UNK_004283aa;
      uVar8 = func_0x0032eb30(uVar8,&UNK_0015fdd9,8);
      puStack_258 = &UNK_004283b4;
      uVar8 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar8,0);
      puStack_258 = &UNK_004283c4;
      uVar8 = func_0x0032eb30(uVar8,&UNK_00189813,5);
      puStack_258 = &UNK_004283ce;
      uVar8 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj(uVar8,0);
      puStack_258 = &UNK_004283de;
      func_0x0032eb30(uVar8,&UNK_0017b788,2);
      puStack_258 = &UNK_004283e6;
      _ZN7android4base10LogMessageD2Ev(&ppppppplStack_228);
    } while( true );
  }
  ppppppplStack_250 = param_5;
  if ((long)extraout_RDX_00 < 0) {
    puStack_258 = &UNK_004283f0;
    func_0x00330ca0();
    ppppppplVar9 = extraout_RDX_00;
  }
  else {
    puStack_258 = &UNK_0042806a;
    ppppppplVar5 = (long *******)_Znwm(extraout_RDX_00);
    puStack_258 = &UNK_00428089;
    ppppppplStack_228 = ppppppplVar5;
    puStack_218 = (undefined *)((long)extraout_RDX_00 + (long)ppppppplVar5);
    func_0x0099bda0(ppppppplVar5,ppppppplVar13);
    ppppppplStack_240 = (long *******)0x0;
    ppppppplStack_238 = (long *******)0x0;
    lStack_230 = 0;
    puStack_258 = &UNK_004280ac;
    puStack_220 = (undefined *)((long)extraout_RDX_00 + (long)ppppppplVar5);
    _ZN14PairingAuthCtx7EncryptERKNSt3__16vectorIhNS0_9allocatorIhEEEE
              (&ppppppplStack_240,ppppppplVar11,&ppppppplStack_228);
    ppppppplVar10 = ppppppplStack_238;
    ppppppplVar11 = ppppppplStack_240;
    if (ppppppplStack_240 == ppppppplStack_238) {
      if (ppppppplStack_240 != (long *******)0x0) goto code_r0x004280dc;
    }
    else {
      ppppppplVar13 = (long *******)((long)ppppppplStack_238 - (long)ppppppplStack_240);
      puStack_258 = &UNK_004280ce;
      func_0x0099bda0(lStack_248,ppppppplStack_240,ppppppplVar13);
      *ppppppplStack_250 = (long ******)ppppppplVar13;
code_r0x004280dc:
      puStack_258 = &UNK_004280eb;
      _ZdaPvSt11align_val_t(ppppppplVar11,lStack_230 - (long)ppppppplVar11);
    }
    ppppppplVar9 = (long *******)
                   CONCAT71((int7)((ulong)ppppppplVar10 >> 8),ppppppplVar11 != ppppppplVar10);
    puStack_258 = &UNK_004280fd;
    ppppppplVar6 = extraout_RDX_00;
    ppppppplVar12 = ppppppplVar5;
    _ZdaPvSt11align_val_t();
    ppppppplVar10 = extraout_RDX_00;
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_210) {
      return (long *******)((ulong)ppppppplVar9 & 0xffffffff);
    }
  }
  puStack_258 = &UNK_004283f5;
  func_0x0099bd00();
  lStack_288 = *(long *)(in_FS_OFFSET + 0x28);
  ppppppplStack_280 = ppppppplVar10;
  ppppppplStack_278 = ppppppplVar11;
  ppppppplStack_270 = ppppppplVar13;
  ppppppplStack_268 = ppppppplVar5;
  ppppppplStack_260 = ppppppplVar9;
  puStack_258 = (undefined *)apuStack_1e0;
  if (ppppppplVar12 == (long *******)0x0) {
    param_5 = (long *******)0x0;
    apcStack_2a0[0] = (code *)&UNK_00428491;
    puStack_258 = (undefined *)apuStack_1e0;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (&pppppplStack_290,&UNK_0015fda6,0x111,6,0,0xffffffff);
    apcStack_2a0[0] = (code *)&UNK_00428499;
    uVar8 = _ZN7android4base10LogMessage6streamEv(&pppppplStack_290);
    apcStack_2a0[0] = (code *)&UNK_004284ad;
    uVar8 = func_0x0032eb30(uVar8,&UNK_001725c2,0x11);
    apcStack_2a0[0] = (code *)&UNK_004284c1;
    func_0x0032eb30(uVar8,&UNK_0015ae05,1);
    apcStack_2a0[0] = (code *)&UNK_004284c9;
    _ZN7android4base10LogMessageD2Ev(&pppppplStack_290);
    ppppppplVar10 = &pppppplStack_290;
    ppppppplVar11 = extraout_RDX_01;
    ppppppplVar9 = ppppppplVar6;
    ppppppplVar5 = ppppppplVar12;
  }
  if (ppppppplVar6 == (long *******)0x0) {
    ppppppplVar10 = &pppppplStack_290;
    param_5 = (long *******)0x0;
    apcStack_2a0[0] = (code *)&UNK_00428507;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (ppppppplVar10,&UNK_0015fda6,0x112,6,0,0xffffffff);
    apcStack_2a0[0] = (code *)&UNK_0042850f;
    uVar8 = _ZN7android4base10LogMessage6streamEv(ppppppplVar10);
    apcStack_2a0[0] = (code *)&UNK_00428523;
    uVar8 = func_0x0032eb30(uVar8,&UNK_00167dd5,0x11);
    apcStack_2a0[0] = (code *)&UNK_00428537;
    func_0x0032eb30(uVar8,&UNK_0015ae05,1);
    apcStack_2a0[0] = (code *)&UNK_0042853f;
    _ZN7android4base10LogMessageD2Ev(ppppppplVar10);
    ppppppplVar5 = ppppppplVar12;
    ppppppplVar9 = extraout_RDX_01;
  }
  if (extraout_RDX_01 == (long *******)0x0) {
    do {
      apcStack_2a0[0] = (code *)&UNK_00428592;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&pppppplStack_290,&UNK_0015fda6,0x113,6,0,0xffffffff);
      apcStack_2a0[0] = (code *)&UNK_0042859a;
      uVar8 = _ZN7android4base10LogMessage6streamEv(&pppppplStack_290);
      apcStack_2a0[0] = (code *)&UNK_004285ae;
      uVar8 = func_0x0032eb30(uVar8,&UNK_00165d45,0xe);
      apcStack_2a0[0] = (code *)&UNK_004285c2;
      uVar8 = func_0x0032eb30(uVar8,&UNK_001596b0,3);
      apcStack_2a0[0] = (code *)&UNK_004285d2;
      uVar8 = func_0x0032eb30(uVar8,&UNK_0015ae05,1);
      apcStack_2a0[0] = (code *)&UNK_004285e6;
      uVar8 = func_0x0032eb30(uVar8,&UNK_00163098,1);
      apcStack_2a0[0] = (code *)&UNK_004285f6;
      uVar8 = func_0x0032eb30(uVar8,&UNK_0015ae05,1);
      apcStack_2a0[0] = (code *)&UNK_0042860a;
      uVar8 = func_0x0032eb30(uVar8,&UNK_0015980b,2);
      apcStack_2a0[0] = (code *)&UNK_0042861a;
      uVar8 = func_0x0032eb30(uVar8,&UNK_00181bbd,6);
      apcStack_2a0[0] = (code *)&UNK_00428624;
      uVar8 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar8,0);
      apcStack_2a0[0] = (code *)&UNK_00428634;
      uVar8 = func_0x0032eb30(uVar8,&UNK_00189813,5);
      apcStack_2a0[0] = (code *)&UNK_0042863e;
      uVar8 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj(uVar8,0);
      apcStack_2a0[0] = (code *)&UNK_0042864e;
      func_0x0032eb30(uVar8,&UNK_0017b788,2);
      apcStack_2a0[0] = (code *)&UNK_00428656;
      _ZN7android4base10LogMessageD2Ev(&pppppplStack_290);
    } while( true );
  }
  apcStack_2a0[0] = (code *)&UNK_0042843d;
  ppppppplVar6 = extraout_RDX_01;
  ppppppplVar7 = (long *******)_ZN14PairingAuthCtx17SafeDecryptedSizeEm();
  lStack_308 = *(long *)(in_FS_OFFSET + 0x28);
  if (lStack_308 == lStack_288) {
    return ppppppplVar7;
  }
  apcStack_2a0[0] = pairing_auth_decrypt;
  func_0x0099bd00();
  lStack_2d0 = *(long *)(in_FS_OFFSET + 0x28);
  ppppppplVar7 = ppppppplVar12;
  ppppppplStack_2c8 = ppppppplVar10;
  ppppppplStack_2c0 = ppppppplVar11;
  ppppppplStack_2b8 = ppppppplVar13;
  ppppppplStack_2b0 = ppppppplVar5;
  ppppppplStack_2a8 = ppppppplVar9;
  apcStack_2a0[0] = (code *)&puStack_258;
  if (ppppppplVar12 == (long *******)0x0) {
    puStack_318 = &UNK_004287ab;
    apcStack_2a0[0] = (code *)&puStack_258;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (&ppppppplStack_2e8,&UNK_0015fda6,0x11a,6,0,0xffffffff);
    puStack_318 = &UNK_004287b3;
    uVar8 = _ZN7android4base10LogMessage6streamEv(&ppppppplStack_2e8);
    puStack_318 = &UNK_004287c7;
    uVar8 = func_0x0032eb30(uVar8,&UNK_001725c2,0x11);
    puStack_318 = &UNK_004287db;
    func_0x0032eb30(uVar8,&UNK_0015ae05,1);
    puStack_318 = &UNK_004287e3;
    ppppppplVar7 = (long *******)&ppppppplStack_2e8;
    _ZN7android4base10LogMessageD2Ev();
    ppppppplVar5 = (long *******)&ppppppplStack_2e8;
    ppppppplVar10 = param_5;
  }
  if (ppppppplVar6 == (long *******)0x0) {
    ppppppplVar5 = (long *******)&ppppppplStack_2e8;
    puStack_318 = &UNK_0042881c;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (ppppppplVar5,&UNK_0015fda6,0x11b,6,0,0xffffffff);
    puStack_318 = &UNK_00428824;
    uVar8 = _ZN7android4base10LogMessage6streamEv(ppppppplVar5);
    puStack_318 = &UNK_00428838;
    uVar8 = func_0x0032eb30(uVar8,&UNK_0017a3cb,0x13);
    puStack_318 = &UNK_0042884c;
    func_0x0032eb30(uVar8,&UNK_0015ae05,1);
    puStack_318 = &UNK_00428854;
    ppppppplVar7 = ppppppplVar5;
    _ZN7android4base10LogMessageD2Ev();
    ppppppplVar10 = param_5;
  }
  if (lStack_308 == 0) {
    ppppppplVar5 = (long *******)&ppppppplStack_2e8;
    puStack_318 = &UNK_0042888d;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (ppppppplVar5,&UNK_0015fda6,0x11c,6,0,0xffffffff);
    puStack_318 = &UNK_00428895;
    uVar8 = _ZN7android4base10LogMessage6streamEv(ppppppplVar5);
    puStack_318 = &UNK_004288a9;
    uVar8 = func_0x0032eb30(uVar8,&UNK_0015ca76,0x14);
    puStack_318 = &UNK_004288bd;
    func_0x0032eb30(uVar8,&UNK_0015ae05,1);
    puStack_318 = &UNK_004288c5;
    ppppppplVar7 = ppppppplVar5;
    _ZN7android4base10LogMessageD2Ev();
    ppppppplVar10 = param_5;
  }
  if (param_5 == (long *******)0x0) {
    ppppppplVar5 = (long *******)&ppppppplStack_2e8;
    puStack_318 = &UNK_004288fa;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (ppppppplVar5,&UNK_0015fda6,0x11d,6,0,0xffffffff);
    puStack_318 = &UNK_00428902;
    uVar8 = _ZN7android4base10LogMessage6streamEv(ppppppplVar5);
    puStack_318 = &UNK_00428916;
    uVar8 = func_0x0032eb30(uVar8,&UNK_00184bd2,0x14);
    puStack_318 = &UNK_0042892a;
    func_0x0032eb30(uVar8,&UNK_0015ae05,1);
    puStack_318 = &UNK_00428932;
    ppppppplVar7 = ppppppplVar5;
    _ZN7android4base10LogMessageD2Ev();
    ppppppplVar10 = param_5;
  }
  if (extraout_RDX_02 == (long *******)0x0) {
    do {
      puStack_318 = &UNK_00428982;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&ppppppplStack_2e8,&UNK_0015fda6,0x11e,6,0,0xffffffff);
      puStack_318 = &UNK_0042898a;
      uVar8 = _ZN7android4base10LogMessage6streamEv(&ppppppplStack_2e8);
      puStack_318 = &UNK_0042899e;
      uVar8 = func_0x0032eb30(uVar8,&UNK_00165d45,0xe);
      puStack_318 = &UNK_004289b2;
      uVar8 = func_0x0032eb30(uVar8,&UNK_001837b0,5);
      puStack_318 = &UNK_004289c2;
      uVar8 = func_0x0032eb30(uVar8,&UNK_0015ae05,1);
      puStack_318 = &UNK_004289d6;
      uVar8 = func_0x0032eb30(uVar8,&UNK_00163098,1);
      puStack_318 = &UNK_004289e6;
      uVar8 = func_0x0032eb30(uVar8,&UNK_0015ae05,1);
      puStack_318 = &UNK_004289fa;
      uVar8 = func_0x0032eb30(uVar8,&UNK_0015980b,2);
      puStack_318 = &UNK_00428a0a;
      uVar8 = func_0x0032eb30(uVar8,&UNK_0015fdd9,8);
      puStack_318 = &UNK_00428a14;
      uVar8 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar8,0);
      puStack_318 = &UNK_00428a24;
      uVar8 = func_0x0032eb30(uVar8,&UNK_00189813,5);
      puStack_318 = &UNK_00428a2e;
      uVar8 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj(uVar8,0);
      puStack_318 = &UNK_00428a3e;
      func_0x0032eb30(uVar8,&UNK_0017b788,2);
      puStack_318 = &UNK_00428a46;
      _ZN7android4base10LogMessageD2Ev(&ppppppplStack_2e8);
    } while( true );
  }
  ppppppplStack_310 = param_5;
  if ((long)extraout_RDX_02 < 0) {
    puStack_318 = &UNK_00428a50;
    func_0x00330ca0();
    goto code_r0x00428a50;
  }
  puStack_318 = &UNK_004286ca;
  ppppppplVar5 = (long *******)_Znwm(extraout_RDX_02);
  puStack_318 = &UNK_004286e9;
  ppppppplStack_2e8 = ppppppplVar5;
  puStack_2d8 = (undefined *)((long)extraout_RDX_02 + (long)ppppppplVar5);
  func_0x0099bda0(ppppppplVar5,ppppppplVar6);
  lStack_300 = 0;
  lStack_2f8 = 0;
  lStack_2f0 = 0;
  puStack_318 = &UNK_0042870c;
  puStack_2e0 = (undefined *)((long)extraout_RDX_02 + (long)ppppppplVar5);
  _ZN14PairingAuthCtx7DecryptERKNSt3__16vectorIhNS0_9allocatorIhEEEE
            (&lStack_300,ppppppplVar12,&ppppppplStack_2e8);
  lVar3 = lStack_2f8;
  lVar2 = lStack_300;
  if (lStack_300 == lStack_2f8) {
    if (lStack_300 != 0) goto code_r0x0042873c;
  }
  else {
    pppppplVar14 = (long ******)(lStack_2f8 - lStack_300);
    puStack_318 = &UNK_0042872e;
    func_0x0099bda0(lStack_308,lStack_300,pppppplVar14);
    *ppppppplStack_310 = pppppplVar14;
code_r0x0042873c:
    puStack_318 = &UNK_0042874b;
    _ZdaPvSt11align_val_t(lVar2,lStack_2f0 - lVar2);
  }
  puStack_318 = &UNK_0042875d;
  ppppppplVar7 = ppppppplVar5;
  _ZdaPvSt11align_val_t(ppppppplVar5,extraout_RDX_02);
  ppppppplVar10 = extraout_RDX_02;
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_2d0) {
    return (long *******)(CONCAT71((int7)((ulong)lVar3 >> 8),lVar2 != lVar3) & 0xffffffff);
  }
code_r0x00428a50:
  puStack_318 = &UNK_00428a55;
  func_0x0099bd00();
  ppppppplStack_330 = *(long ********)(in_FS_OFFSET + 0x28);
  ppppppplStack_328 = ppppppplVar10;
  ppppppplStack_320 = ppppppplVar5;
  if (ppppppplVar7 == (long *******)0x0) {
    puStack_318 = (undefined *)apcStack_2a0;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (auStack_338,&UNK_0015fda6,300,6,0,0xffffffff);
    uVar8 = _ZN7android4base10LogMessage6streamEv(auStack_338);
    uVar8 = func_0x0032eb30(uVar8,&UNK_001725c2,0x11);
    func_0x0032eb30(uVar8,&UNK_0015ae05,1);
    _ZN7android4base10LogMessageD2Ev(auStack_338);
    if (*(long ********)(in_FS_OFFSET + 0x28) == ppppppplStack_330) {
      return *(long ********)(in_FS_OFFSET + 0x28);
    }
  }
  else {
    pppppplVar14 = ppppppplVar7[5];
    ppppppplVar7[5] = (long ******)0x0;
    puStack_318 = (undefined *)apcStack_2a0;
    if (pppppplVar14 != (long ******)0x0) {
      puStack_318 = (undefined *)apcStack_2a0;
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
    if (*(long ********)(in_FS_OFFSET + 0x28) == ppppppplStack_330) {
      ppppppplVar10 = (long *******)free(ppppppplVar7,0x30);
      return ppppppplVar10;
    }
  }
  func_0x0099bd00();
  pcVar1 = (code *)swi(3);
  ppppppplVar10 = (long *******)(*pcVar1)();
  return ppppppplVar10;
}


