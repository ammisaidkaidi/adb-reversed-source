// Function: _ZN14PairingAuthCtx17SafeEncryptedSizeEm
// Address: 004273c0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Type propagation algorithm not settling */

long *******
_ZN14PairingAuthCtx17SafeEncryptedSizeEm
          (long param_1,long *******param_2,undefined8 param_3,undefined8 param_4,
          long *******param_5)

{
  code *pcVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long *******ppppppplVar5;
  long *******ppppppplVar6;
  long *******ppppppplVar7;
  long *******ppppppplVar8;
  undefined8 uVar9;
  long *******extraout_RDX;
  long *******extraout_RDX_00;
  long *******extraout_RDX_01;
  long *******extraout_RDX_02;
  undefined1 *unaff_RBX;
  undefined1 *puVar10;
  long *******ppppppplVar11;
  long *******ppppppplVar12;
  long *******ppppppplVar13;
  long *******unaff_R12;
  undefined *unaff_R13;
  long *******ppppppplVar14;
  long ******pppppplVar15;
  long unaff_R14;
  long *******unaff_R15;
  long in_FS_OFFSET;
  undefined1 auStack_370 [8];
  long *******ppppppplStack_368;
  long *******ppppppplStack_360;
  long *******ppppppplStack_358;
  undefined *puStack_350;
  long *******ppppppplStack_348;
  long lStack_340;
  long lStack_338;
  long lStack_330;
  long lStack_328;
  long *******ppppppplStack_320;
  undefined *puStack_318;
  undefined *puStack_310;
  long lStack_308;
  long *******ppppppplStack_300;
  long *******ppppppplStack_2f8;
  long *******ppppppplStack_2f0;
  long *******ppppppplStack_2e8;
  long *******ppppppplStack_2e0;
  code *apcStack_2d8 [2];
  long ******pppppplStack_2c8;
  long lStack_2c0;
  long *******ppppppplStack_2b8;
  long *******ppppppplStack_2b0;
  long *******ppppppplStack_2a8;
  long *******ppppppplStack_2a0;
  long *******ppppppplStack_298;
  undefined *puStack_290;
  long *******ppppppplStack_288;
  long lStack_280;
  long *******ppppppplStack_278;
  long *******ppppppplStack_270;
  long lStack_268;
  long *******ppppppplStack_260;
  undefined *puStack_258;
  undefined *puStack_250;
  long lStack_248;
  long *******ppppppplStack_240;
  long *******ppppppplStack_238;
  undefined *puStack_230;
  long *******ppppppplStack_228;
  long *******ppppppplStack_220;
  undefined *apuStack_218 [2];
  long ******pppppplStack_208;
  long lStack_200;
  long *******ppppppplStack_1f8;
  long *******ppppppplStack_1f0;
  long *******ppppppplStack_1e8;
  undefined *apuStack_1e0 [2];
  long *******ppppppplStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  long lStack_1b8;
  long *******ppppppplStack_1b0;
  undefined *apuStack_188 [2];
  undefined1 auStack_178 [8];
  long *******ppppppplStack_170;
  long *******ppppppplStack_168;
  long *******ppppppplStack_160;
  long *******ppppppplStack_158;
  undefined *puStack_150;
  long ******pppppplStack_148;
  long lStack_140;
  long *******ppppppplStack_138;
  long *******ppppppplStack_130;
  undefined *puStack_128;
  long ******pppppplStack_120;
  long *******ppppppplStack_118;
  long *******ppppppplStack_110;
  long *******ppppppplStack_108;
  long lStack_100;
  long *******ppppppplStack_f8;
  undefined *puStack_d0;
  undefined1 auStack_c8 [8];
  long *******ppppppplStack_c0;
  long *******ppppppplStack_b8;
  long *******ppppppplStack_b0;
  long lStack_a8;
  undefined1 *puStack_a0;
  undefined *apuStack_78 [2];
  undefined1 auStack_68 [8];
  long lStack_60;
  undefined1 *puStack_58;
  long lStack_50;
  long *******ppppppplStack_48;
  undefined *apuStack_40 [2];
  undefined1 auStack_30 [8];
  long lStack_28;
  
  lStack_28 = *(long *)(in_FS_OFFSET + 0x28);
  lVar4 = *(long *)(param_1 + 0x28);
  if (lVar4 == 0) {
    unaff_RBX = auStack_30;
    param_5 = (long *******)0x0;
    apuStack_40[0] = &UNK_00427434;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (unaff_RBX,&UNK_0015fda6,200,6,0,0xffffffff);
    apuStack_40[0] = &UNK_0042743c;
    uVar9 = _ZN7android4base10LogMessage6streamEv(unaff_RBX);
    apuStack_40[0] = &UNK_00427450;
    uVar9 = func_0x0032eb30(uVar9,&UNK_001630b2,0x15);
    apuStack_40[0] = &UNK_00427464;
    func_0x0032eb30(uVar9,&UNK_0015ae05,1);
    apuStack_40[0] = &UNK_0042746c;
    _ZN7android4base10LogMessageD2Ev(unaff_RBX);
    lVar4 = *(long *)(param_1 + 0x28);
    unaff_R14 = param_1;
    unaff_R15 = param_2;
  }
  apuStack_40[0] = &UNK_004273eb;
  ppppppplVar5 = (long *******)_ZN3adb7pairing9Aes128Gcm13EncryptedSizeEm();
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_28) {
    return ppppppplVar5;
  }
  apuStack_40[0] = &UNK_0042747d;
  func_0x0099bd00();
  lStack_60 = *(long *)(in_FS_OFFSET + 0x28);
  ppppppplVar5 = *(long ********)(lVar4 + 0x28);
  puVar10 = unaff_RBX;
  puStack_58 = unaff_RBX;
  lStack_50 = unaff_R14;
  ppppppplStack_48 = unaff_R15;
  apuStack_40[0] = &stack0xfffffffffffffff8;
  if (ppppppplVar5 == (long *******)0x0) {
    puVar10 = auStack_68;
    param_5 = (long *******)0x0;
    apuStack_78[0] = &UNK_004274f4;
    apuStack_40[0] = &stack0xfffffffffffffff8;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (puVar10,&UNK_0015fda6,0xcd,6,0,0xffffffff);
    apuStack_78[0] = &UNK_004274fc;
    uVar9 = _ZN7android4base10LogMessage6streamEv(puVar10);
    apuStack_78[0] = &UNK_00427510;
    uVar9 = func_0x0032eb30(uVar9,&UNK_001630b2,0x15);
    apuStack_78[0] = &UNK_00427524;
    func_0x0032eb30(uVar9,&UNK_0015ae05,1);
    apuStack_78[0] = &UNK_0042752c;
    _ZN7android4base10LogMessageD2Ev(puVar10);
    ppppppplVar5 = *(long ********)(lVar4 + 0x28);
    unaff_R15 = param_2;
  }
  apuStack_78[0] = &UNK_004274ab;
  ppppppplVar6 = (long *******)_ZN3adb7pairing9Aes128Gcm13DecryptedSizeEm();
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_60) {
    return ppppppplVar6;
  }
  apuStack_78[0] = &UNK_0042753d;
  func_0x0099bd00();
  lStack_a8 = *(long *)(in_FS_OFFSET + 0x28);
  ppppppplVar11 = param_2;
  ppppppplVar6 = ppppppplVar5;
  puStack_a0 = puVar10;
  apuStack_78[0] = (undefined *)apuStack_40;
  if (ppppppplVar5 == (long *******)0x0) {
    unaff_R15 = (long *******)&ppppppplStack_c0;
    param_5 = (long *******)0x0;
    puStack_d0 = &UNK_00427631;
    apuStack_78[0] = (undefined *)apuStack_40;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (unaff_R15,&UNK_0015fda6,0xd2,6,0,0xffffffff);
    puStack_d0 = &UNK_00427639;
    uVar9 = _ZN7android4base10LogMessage6streamEv(unaff_R15);
    puStack_d0 = &UNK_0042764d;
    uVar9 = func_0x0032eb30(uVar9,&UNK_0016b15c,0x12);
    ppppppplVar11 = (long *******)&UNK_0015ae05;
    puStack_d0 = &UNK_00427661;
    func_0x0032eb30(uVar9,&UNK_0015ae05,1);
    puStack_d0 = &UNK_00427669;
    ppppppplVar6 = unaff_R15;
    _ZN7android4base10LogMessageD2Ev();
  }
  if (param_2 == (long *******)0x0) {
    do {
      puStack_d0 = &UNK_004276c2;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&ppppppplStack_c0,&UNK_0015fda6,0xd3,6,0,0xffffffff);
      puStack_d0 = &UNK_004276ca;
      uVar9 = _ZN7android4base10LogMessage6streamEv(&ppppppplStack_c0);
      puStack_d0 = &UNK_004276de;
      uVar9 = func_0x0032eb30(uVar9,&UNK_00165d45,0xe);
      puStack_d0 = &UNK_004276f2;
      uVar9 = func_0x0032eb30(uVar9,&UNK_001596b0,3);
      puStack_d0 = &UNK_00427702;
      uVar9 = func_0x0032eb30(uVar9,&UNK_0015ae05,1);
      puStack_d0 = &UNK_00427716;
      uVar9 = func_0x0032eb30(uVar9,&UNK_00163098,1);
      puStack_d0 = &UNK_00427726;
      uVar9 = func_0x0032eb30(uVar9,&UNK_0015ae05,1);
      puStack_d0 = &UNK_0042773a;
      uVar9 = func_0x0032eb30(uVar9,&UNK_0015980b,2);
      puStack_d0 = &UNK_0042774a;
      uVar9 = func_0x0032eb30(uVar9,&UNK_00181bbd,6);
      puStack_d0 = &UNK_00427754;
      uVar9 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar9,0);
      puStack_d0 = &UNK_00427764;
      uVar9 = func_0x0032eb30(uVar9,&UNK_00189813,5);
      puStack_d0 = &UNK_0042776e;
      uVar9 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj(uVar9,0);
      puStack_d0 = &UNK_0042777e;
      func_0x0032eb30(uVar9,&UNK_0017b788,2);
      puStack_d0 = &UNK_00427786;
      _ZN7android4base10LogMessageD2Ev(&ppppppplStack_c0);
    } while( true );
  }
  if ((long)param_2 < 0) {
    puStack_d0 = &UNK_004277f3;
    func_0x00330ca0();
  }
  else {
    puStack_d0 = &UNK_00427584;
    ppppppplStack_c0 = (long *******)_Znwm(param_2);
    unaff_R15 = (long *******)((long)ppppppplStack_c0 + (long)param_2);
    puStack_d0 = &UNK_0042759e;
    ppppppplStack_b0 = unaff_R15;
    func_0x0099bda0(ppppppplStack_c0,ppppppplVar5,param_2);
    puStack_d0 = &UNK_004275ac;
    ppppppplStack_b8 = unaff_R15;
    param_2 = (long *******)_Znwm(0x30);
    ppppppplVar11 = (long *******)0x1;
    puStack_d0 = &UNK_004275c0;
    _ZN14PairingAuthCtxC1ENS_4RoleERKNSt3__16vectorIhNS1_9allocatorIhEEEE
              (param_2,1,&ppppppplStack_c0);
    if (*param_2 == param_2[1]) {
      param_5 = (long *******)0x0;
      puStack_d0 = &UNK_004277b1;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_c8,&UNK_0015fda6,0xd6,6,0,0xffffffff);
      puStack_d0 = &UNK_004277b9;
      uVar9 = _ZN7android4base10LogMessage6streamEv(auStack_c8);
      puStack_d0 = &UNK_004277cd;
      uVar9 = func_0x0032eb30(uVar9,&UNK_001805c1,0x21);
      ppppppplVar11 = (long *******)&UNK_0015ae05;
      puStack_d0 = &UNK_004277e1;
      func_0x0032eb30(uVar9,&UNK_0015ae05,1);
      puStack_d0 = &UNK_004277e9;
      _ZN7android4base10LogMessageD2Ev(auStack_c8);
    }
    ppppppplVar6 = ppppppplStack_c0;
    if (ppppppplStack_c0 != (long *******)0x0) {
      ppppppplStack_b8 = ppppppplStack_c0;
      ppppppplVar11 = (long *******)((long)ppppppplStack_b0 - (long)ppppppplStack_c0);
      puStack_d0 = &UNK_004275e6;
      _ZdaPvSt11align_val_t();
    }
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_a8) {
      return param_2;
    }
  }
  puStack_d0 = &UNK_004277f8;
  func_0x0099bd00();
  lStack_100 = *(long *)(in_FS_OFFSET + 0x28);
  ppppppplVar5 = ppppppplVar11;
  ppppppplVar14 = ppppppplVar6;
  ppppppplStack_f8 = param_2;
  puStack_d0 = (undefined *)apuStack_78;
  if (ppppppplVar6 == (long *******)0x0) {
    unaff_R15 = (long *******)&ppppppplStack_118;
    param_5 = (long *******)0x0;
    puStack_128 = &UNK_004278ee;
    puStack_d0 = (undefined *)apuStack_78;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (unaff_R15,&UNK_0015fda6,0xdb,6,0,0xffffffff);
    puStack_128 = &UNK_004278f6;
    uVar9 = _ZN7android4base10LogMessage6streamEv(unaff_R15);
    puStack_128 = &UNK_0042790a;
    uVar9 = func_0x0032eb30(uVar9,&UNK_0016b15c,0x12);
    ppppppplVar5 = (long *******)&UNK_0015ae05;
    puStack_128 = &UNK_0042791e;
    func_0x0032eb30(uVar9,&UNK_0015ae05,1);
    puStack_128 = &UNK_00427926;
    ppppppplVar14 = unaff_R15;
    _ZN7android4base10LogMessageD2Ev();
  }
  if (ppppppplVar11 == (long *******)0x0) {
    do {
      puStack_128 = &UNK_00427972;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&ppppppplStack_118,&UNK_0015fda6,0xdc,6,0,0xffffffff);
      puStack_128 = &UNK_0042797a;
      uVar9 = _ZN7android4base10LogMessage6streamEv(&ppppppplStack_118);
      puStack_128 = &UNK_0042798e;
      uVar9 = func_0x0032eb30(uVar9,&UNK_00165d45,0xe);
      puStack_128 = &UNK_004279a2;
      uVar9 = func_0x0032eb30(uVar9,&UNK_001596b0,3);
      puStack_128 = &UNK_004279b2;
      uVar9 = func_0x0032eb30(uVar9,&UNK_0015ae05,1);
      puStack_128 = &UNK_004279c6;
      uVar9 = func_0x0032eb30(uVar9,&UNK_00163098,1);
      puStack_128 = &UNK_004279d6;
      uVar9 = func_0x0032eb30(uVar9,&UNK_0015ae05,1);
      puStack_128 = &UNK_004279ea;
      uVar9 = func_0x0032eb30(uVar9,&UNK_0015980b,2);
      puStack_128 = &UNK_004279fa;
      uVar9 = func_0x0032eb30(uVar9,&UNK_00181bbd,6);
      puStack_128 = &UNK_00427a04;
      uVar9 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar9,0);
      puStack_128 = &UNK_00427a14;
      uVar9 = func_0x0032eb30(uVar9,&UNK_00189813,5);
      puStack_128 = &UNK_00427a1e;
      uVar9 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj(uVar9,0);
      puStack_128 = &UNK_00427a2e;
      func_0x0032eb30(uVar9,&UNK_0017b788,2);
      puStack_128 = &UNK_00427a36;
      _ZN7android4base10LogMessageD2Ev(&ppppppplStack_118);
    } while( true );
  }
  if ((long)ppppppplVar11 < 0) {
    puStack_128 = &UNK_00427aa3;
    func_0x00330ca0();
  }
  else {
    puStack_128 = &UNK_00427844;
    ppppppplStack_118 = (long *******)_Znwm(ppppppplVar11);
    unaff_R15 = (long *******)((long)ppppppplStack_118 + (long)ppppppplVar11);
    puStack_128 = &UNK_0042785e;
    ppppppplStack_108 = unaff_R15;
    func_0x0099bda0(ppppppplStack_118,ppppppplVar6,ppppppplVar11);
    puStack_128 = &UNK_0042786c;
    ppppppplStack_110 = unaff_R15;
    ppppppplVar11 = (long *******)_Znwm(0x30);
    ppppppplVar5 = (long *******)0x0;
    puStack_128 = &UNK_0042787d;
    _ZN14PairingAuthCtxC1ENS_4RoleERKNSt3__16vectorIhNS1_9allocatorIhEEEE
              (ppppppplVar11,0,&ppppppplStack_118);
    if (*ppppppplVar11 == ppppppplVar11[1]) {
      ppppppplVar6 = &pppppplStack_120;
      param_5 = (long *******)0x0;
      puStack_128 = &UNK_00427a61;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (ppppppplVar6,&UNK_0015fda6,0xdf,6,0,0xffffffff);
      puStack_128 = &UNK_00427a69;
      uVar9 = _ZN7android4base10LogMessage6streamEv(ppppppplVar6);
      puStack_128 = &UNK_00427a7d;
      uVar9 = func_0x0032eb30(uVar9,&UNK_001805c1,0x21);
      ppppppplVar5 = (long *******)&UNK_0015ae05;
      puStack_128 = &UNK_00427a91;
      func_0x0032eb30(uVar9,&UNK_0015ae05,1);
      puStack_128 = &UNK_00427a99;
      _ZN7android4base10LogMessageD2Ev(ppppppplVar6);
    }
    ppppppplVar14 = ppppppplStack_118;
    if (ppppppplStack_118 != (long *******)0x0) {
      ppppppplStack_110 = ppppppplStack_118;
      ppppppplVar5 = (long *******)((long)ppppppplStack_108 - (long)ppppppplStack_118);
      puStack_128 = &UNK_004278a3;
      _ZdaPvSt11align_val_t();
    }
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_100) {
      return ppppppplVar11;
    }
  }
  puStack_128 = &UNK_00427aa8;
  func_0x0099bd00();
  puStack_128 = (undefined *)&puStack_d0;
  ppppppplStack_130 = ppppppplVar6;
  ppppppplStack_138 = ppppppplVar11;
  lStack_140 = *(long *)(in_FS_OFFSET + 0x28);
  if (ppppppplVar14 == (long *******)0x0) {
    ppppppplVar11 = &pppppplStack_148;
    param_5 = (long *******)0x0;
    puStack_150 = &UNK_00427b15;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (ppppppplVar11,&UNK_0015fda6,0xe4,6,0,0xffffffff);
    puStack_150 = &UNK_00427b1d;
    uVar9 = _ZN7android4base10LogMessage6streamEv(ppppppplVar11);
    puStack_150 = &UNK_00427b31;
    uVar9 = func_0x0032eb30(uVar9,&UNK_001725c2,0x11);
    ppppppplVar5 = (long *******)&UNK_0015ae05;
    puStack_150 = &UNK_00427b45;
    func_0x0032eb30(uVar9,&UNK_0015ae05,1);
    puStack_150 = &UNK_00427b4d;
    _ZN7android4base10LogMessageD2Ev(ppppppplVar11);
    ppppppplVar6 = (long *******)0x0;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_140) {
    return (long *******)((long)ppppppplVar14[1] - (long)*ppppppplVar14);
  }
  puStack_150 = &UNK_00427b5a;
  func_0x0099bd00();
  puStack_150 = (undefined *)&puStack_128;
  ppppppplStack_158 = unaff_R15;
  ppppppplStack_160 = ppppppplVar6;
  ppppppplStack_168 = ppppppplVar11;
  ppppppplStack_170 = *(long ********)(in_FS_OFFSET + 0x28);
  if (ppppppplVar14 == (long *******)0x0) {
    param_5 = (long *******)0x0;
    apuStack_188[0] = &UNK_00427be4;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (auStack_178,&UNK_0015fda6,0xe9,6,0,0xffffffff);
    apuStack_188[0] = &UNK_00427bec;
    uVar9 = _ZN7android4base10LogMessage6streamEv(auStack_178);
    apuStack_188[0] = &UNK_00427c00;
    uVar9 = func_0x0032eb30(uVar9,&UNK_001725c2,0x11);
    apuStack_188[0] = &UNK_00427c14;
    func_0x0032eb30(uVar9,&UNK_0015ae05,1);
    apuStack_188[0] = &UNK_00427c1c;
    _ZN7android4base10LogMessageD2Ev(auStack_178);
  }
  if (ppppppplVar5 == (long *******)0x0) {
    param_5 = (long *******)0x0;
    apuStack_188[0] = &UNK_00427c51;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (auStack_178,&UNK_0015fda6,0xea,6,0,0xffffffff);
    apuStack_188[0] = &UNK_00427c59;
    uVar9 = _ZN7android4base10LogMessage6streamEv(auStack_178);
    apuStack_188[0] = &UNK_00427c6d;
    uVar9 = func_0x0032eb30(uVar9,&UNK_0018b070,0x15);
    apuStack_188[0] = &UNK_00427c81;
    func_0x0032eb30(uVar9,&UNK_0015ae05,1);
    apuStack_188[0] = &UNK_00427c89;
    _ZN7android4base10LogMessageD2Ev(auStack_178);
  }
  ppppppplVar11 = (long *******)*ppppppplVar14;
  apuStack_188[0] = &UNK_00427b9d;
  ppppppplVar6 = ppppppplVar5;
  func_0x0099bda0(ppppppplVar5,ppppppplVar11,(long)ppppppplVar14[1] - (long)ppppppplVar11);
  if (*(long ********)(in_FS_OFFSET + 0x28) == ppppppplStack_170) {
    return *(long ********)(in_FS_OFFSET + 0x28);
  }
  apuStack_188[0] = &UNK_00427c96;
  func_0x0099bd00();
  lStack_1b8 = *(long *)(in_FS_OFFSET + 0x28);
  ppppppplVar14 = ppppppplVar11;
  ppppppplVar12 = ppppppplVar6;
  ppppppplStack_1b0 = ppppppplVar5;
  apuStack_188[0] = (undefined *)&puStack_150;
  if (ppppppplVar6 == (long *******)0x0) {
    unaff_R12 = (long *******)&ppppppplStack_1d0;
    param_5 = (long *******)0x0;
    apuStack_1e0[0] = &UNK_00427d76;
    apuStack_188[0] = (undefined *)&puStack_150;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (unaff_R12,&UNK_0015fda6,0xf0,6,0,0xffffffff);
    apuStack_1e0[0] = &UNK_00427d7e;
    uVar9 = _ZN7android4base10LogMessage6streamEv(unaff_R12);
    apuStack_1e0[0] = &UNK_00427d92;
    uVar9 = func_0x0032eb30(uVar9,&UNK_001725c2,0x11);
    ppppppplVar14 = (long *******)&UNK_0015ae05;
    apuStack_1e0[0] = &UNK_00427da6;
    func_0x0032eb30(uVar9,&UNK_0015ae05,1);
    apuStack_1e0[0] = &UNK_00427dae;
    ppppppplVar12 = unaff_R12;
    _ZN7android4base10LogMessageD2Ev();
  }
  if (ppppppplVar11 == (long *******)0x0) {
    unaff_R12 = (long *******)&ppppppplStack_1d0;
    param_5 = (long *******)0x0;
    apuStack_1e0[0] = &UNK_00427ddd;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (unaff_R12,&UNK_0015fda6,0xf1,6,0,0xffffffff);
    apuStack_1e0[0] = &UNK_00427de5;
    uVar9 = _ZN7android4base10LogMessage6streamEv(unaff_R12);
    apuStack_1e0[0] = &UNK_00427df9;
    uVar9 = func_0x0032eb30(uVar9,&UNK_00181d17,0x17);
    ppppppplVar14 = (long *******)&UNK_0015ae05;
    apuStack_1e0[0] = &UNK_00427e0d;
    func_0x0032eb30(uVar9,&UNK_0015ae05,1);
    apuStack_1e0[0] = &UNK_00427e15;
    ppppppplVar12 = unaff_R12;
    _ZN7android4base10LogMessageD2Ev();
  }
  if (extraout_RDX == (long *******)0x0) {
    do {
      apuStack_1e0[0] = &UNK_00427e62;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&ppppppplStack_1d0,&UNK_0015fda6,0xf2,6,0,0xffffffff);
      apuStack_1e0[0] = &UNK_00427e6a;
      uVar9 = _ZN7android4base10LogMessage6streamEv(&ppppppplStack_1d0);
      apuStack_1e0[0] = &UNK_00427e7e;
      uVar9 = func_0x0032eb30(uVar9,&UNK_00165d45,0xe);
      apuStack_1e0[0] = &UNK_00427e92;
      uVar9 = func_0x0032eb30(uVar9,&UNK_00167dcd,7);
      apuStack_1e0[0] = &UNK_00427ea2;
      uVar9 = func_0x0032eb30(uVar9,&UNK_0015ae05,1);
      apuStack_1e0[0] = &UNK_00427eb6;
      uVar9 = func_0x0032eb30(uVar9,&UNK_00163098,1);
      apuStack_1e0[0] = &UNK_00427ec6;
      uVar9 = func_0x0032eb30(uVar9,&UNK_0015ae05,1);
      apuStack_1e0[0] = &UNK_00427eda;
      uVar9 = func_0x0032eb30(uVar9,&UNK_0015980b,2);
      apuStack_1e0[0] = &UNK_00427eea;
      uVar9 = func_0x0032eb30(uVar9,&UNK_00164750,10);
      apuStack_1e0[0] = &UNK_00427ef4;
      uVar9 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar9,0);
      apuStack_1e0[0] = &UNK_00427f04;
      uVar9 = func_0x0032eb30(uVar9,&UNK_00189813,5);
      apuStack_1e0[0] = &UNK_00427f0e;
      uVar9 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj(uVar9,0);
      apuStack_1e0[0] = &UNK_00427f1e;
      func_0x0032eb30(uVar9,&UNK_0017b788,2);
      apuStack_1e0[0] = &UNK_00427f26;
      _ZN7android4base10LogMessageD2Ev(&ppppppplStack_1d0);
    } while( true );
  }
  if ((long)extraout_RDX < 0) {
    apuStack_1e0[0] = &UNK_00427f30;
    func_0x00330ca0();
  }
  else {
    apuStack_1e0[0] = &UNK_00427cf0;
    unaff_R12 = (long *******)_Znwm(extraout_RDX);
    unaff_R13 = (undefined *)((long)unaff_R12 + (long)extraout_RDX);
    apuStack_1e0[0] = &UNK_00427d0d;
    ppppppplStack_1d0 = unaff_R12;
    puStack_1c0 = unaff_R13;
    func_0x0099bda0(unaff_R12,ppppppplVar11,extraout_RDX);
    apuStack_1e0[0] = &UNK_00427d1d;
    puStack_1c8 = unaff_R13;
    uVar3 = _ZN14PairingAuthCtx10InitCipherERKNSt3__16vectorIhNS0_9allocatorIhEEEE
                      (ppppppplVar6,&ppppppplStack_1d0);
    ppppppplVar6 = (long *******)(ulong)uVar3;
    apuStack_1e0[0] = &UNK_00427d2b;
    ppppppplVar14 = extraout_RDX;
    ppppppplVar12 = unaff_R12;
    _ZdaPvSt11align_val_t();
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_1b8) {
      return ppppppplVar6;
    }
  }
  apuStack_1e0[0] = &UNK_00427f35;
  func_0x0099bd00();
  lStack_200 = *(long *)(in_FS_OFFSET + 0x28);
  ppppppplVar5 = extraout_RDX;
  ppppppplStack_1f8 = extraout_RDX;
  ppppppplStack_1f0 = ppppppplVar6;
  ppppppplStack_1e8 = ppppppplVar11;
  apuStack_1e0[0] = (undefined *)apuStack_188;
  if (ppppppplVar12 == (long *******)0x0) {
    ppppppplVar5 = &pppppplStack_208;
    param_5 = (long *******)0x0;
    apuStack_218[0] = &UNK_00427fad;
    apuStack_1e0[0] = (undefined *)apuStack_188;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (ppppppplVar5,&UNK_0015fda6,0xf9,6,0,0xffffffff);
    apuStack_218[0] = &UNK_00427fb5;
    uVar9 = _ZN7android4base10LogMessage6streamEv(ppppppplVar5);
    apuStack_218[0] = &UNK_00427fc9;
    uVar9 = func_0x0032eb30(uVar9,&UNK_001725c2,0x11);
    apuStack_218[0] = &UNK_00427fdd;
    func_0x0032eb30(uVar9,&UNK_0015ae05,1);
    apuStack_218[0] = &UNK_00427fe5;
    _ZN7android4base10LogMessageD2Ev(ppppppplVar5);
    ppppppplVar6 = ppppppplVar12;
    ppppppplVar11 = ppppppplVar14;
  }
  apuStack_218[0] = &UNK_00427f64;
  ppppppplVar7 = (long *******)_ZN14PairingAuthCtx17SafeEncryptedSizeEm();
  lStack_280 = *(long *)(in_FS_OFFSET + 0x28);
  if (lStack_280 == lStack_200) {
    return ppppppplVar7;
  }
  apuStack_218[0] = &UNK_00427ff5;
  func_0x0099bd00();
  lStack_248 = *(long *)(in_FS_OFFSET + 0x28);
  ppppppplVar7 = ppppppplVar14;
  ppppppplVar13 = ppppppplVar12;
  ppppppplStack_240 = ppppppplVar5;
  ppppppplStack_238 = unaff_R12;
  puStack_230 = unaff_R13;
  ppppppplStack_228 = ppppppplVar6;
  ppppppplStack_220 = ppppppplVar11;
  apuStack_218[0] = (undefined *)apuStack_1e0;
  if (ppppppplVar12 == (long *******)0x0) {
    puStack_290 = &UNK_0042814b;
    apuStack_218[0] = (undefined *)apuStack_1e0;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (&ppppppplStack_260,&UNK_0015fda6,0xff,6,0,0xffffffff);
    puStack_290 = &UNK_00428153;
    uVar9 = _ZN7android4base10LogMessage6streamEv(&ppppppplStack_260);
    puStack_290 = &UNK_00428167;
    uVar9 = func_0x0032eb30(uVar9,&UNK_001725c2,0x11);
    ppppppplVar7 = (long *******)&UNK_0015ae05;
    puStack_290 = &UNK_0042817b;
    func_0x0032eb30(uVar9,&UNK_0015ae05,1);
    puStack_290 = &UNK_00428183;
    ppppppplVar13 = (long *******)&ppppppplStack_260;
    _ZN7android4base10LogMessageD2Ev();
    ppppppplVar6 = (long *******)&ppppppplStack_260;
    ppppppplVar5 = param_5;
  }
  if (ppppppplVar14 == (long *******)0x0) {
    ppppppplVar6 = (long *******)&ppppppplStack_260;
    puStack_290 = &UNK_004281bc;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (ppppppplVar6,&UNK_0015fda6,0x100,6,0,0xffffffff);
    puStack_290 = &UNK_004281c4;
    uVar9 = _ZN7android4base10LogMessage6streamEv(ppppppplVar6);
    puStack_290 = &UNK_004281d8;
    uVar9 = func_0x0032eb30(uVar9,&UNK_0017a3cb,0x13);
    ppppppplVar7 = (long *******)&UNK_0015ae05;
    puStack_290 = &UNK_004281ec;
    func_0x0032eb30(uVar9,&UNK_0015ae05,1);
    puStack_290 = &UNK_004281f4;
    ppppppplVar13 = ppppppplVar6;
    _ZN7android4base10LogMessageD2Ev();
    ppppppplVar5 = param_5;
  }
  if (lStack_280 == 0) {
    ppppppplVar6 = (long *******)&ppppppplStack_260;
    puStack_290 = &UNK_0042822d;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (ppppppplVar6,&UNK_0015fda6,0x101,6,0,0xffffffff);
    puStack_290 = &UNK_00428235;
    uVar9 = _ZN7android4base10LogMessage6streamEv(ppppppplVar6);
    puStack_290 = &UNK_00428249;
    uVar9 = func_0x0032eb30(uVar9,&UNK_0015ca76,0x14);
    ppppppplVar7 = (long *******)&UNK_0015ae05;
    puStack_290 = &UNK_0042825d;
    func_0x0032eb30(uVar9,&UNK_0015ae05,1);
    puStack_290 = &UNK_00428265;
    ppppppplVar13 = ppppppplVar6;
    _ZN7android4base10LogMessageD2Ev();
    ppppppplVar5 = param_5;
  }
  if (param_5 == (long *******)0x0) {
    ppppppplVar6 = (long *******)&ppppppplStack_260;
    puStack_290 = &UNK_0042829a;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (ppppppplVar6,&UNK_0015fda6,0x102,6,0,0xffffffff);
    puStack_290 = &UNK_004282a2;
    uVar9 = _ZN7android4base10LogMessage6streamEv(ppppppplVar6);
    puStack_290 = &UNK_004282b6;
    uVar9 = func_0x0032eb30(uVar9,&UNK_00184bd2,0x14);
    ppppppplVar7 = (long *******)&UNK_0015ae05;
    puStack_290 = &UNK_004282ca;
    func_0x0032eb30(uVar9,&UNK_0015ae05,1);
    puStack_290 = &UNK_004282d2;
    ppppppplVar13 = ppppppplVar6;
    _ZN7android4base10LogMessageD2Ev();
    ppppppplVar5 = param_5;
  }
  if (extraout_RDX_00 == (long *******)0x0) {
    do {
      puStack_290 = &UNK_00428322;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&ppppppplStack_260,&UNK_0015fda6,0x103,6,0,0xffffffff);
      puStack_290 = &UNK_0042832a;
      uVar9 = _ZN7android4base10LogMessage6streamEv(&ppppppplStack_260);
      puStack_290 = &UNK_0042833e;
      uVar9 = func_0x0032eb30(uVar9,&UNK_00165d45,0xe);
      puStack_290 = &UNK_00428352;
      uVar9 = func_0x0032eb30(uVar9,&UNK_001837b0,5);
      puStack_290 = &UNK_00428362;
      uVar9 = func_0x0032eb30(uVar9,&UNK_0015ae05,1);
      puStack_290 = &UNK_00428376;
      uVar9 = func_0x0032eb30(uVar9,&UNK_00163098,1);
      puStack_290 = &UNK_00428386;
      uVar9 = func_0x0032eb30(uVar9,&UNK_0015ae05,1);
      puStack_290 = &UNK_0042839a;
      uVar9 = func_0x0032eb30(uVar9,&UNK_0015980b,2);
      puStack_290 = &UNK_004283aa;
      uVar9 = func_0x0032eb30(uVar9,&UNK_0015fdd9,8);
      puStack_290 = &UNK_004283b4;
      uVar9 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar9,0);
      puStack_290 = &UNK_004283c4;
      uVar9 = func_0x0032eb30(uVar9,&UNK_00189813,5);
      puStack_290 = &UNK_004283ce;
      uVar9 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj(uVar9,0);
      puStack_290 = &UNK_004283de;
      func_0x0032eb30(uVar9,&UNK_0017b788,2);
      puStack_290 = &UNK_004283e6;
      _ZN7android4base10LogMessageD2Ev(&ppppppplStack_260);
    } while( true );
  }
  ppppppplStack_288 = param_5;
  if ((long)extraout_RDX_00 < 0) {
    puStack_290 = &UNK_004283f0;
    func_0x00330ca0();
    ppppppplVar11 = extraout_RDX_00;
  }
  else {
    puStack_290 = &UNK_0042806a;
    ppppppplVar6 = (long *******)_Znwm(extraout_RDX_00);
    puStack_290 = &UNK_00428089;
    ppppppplStack_260 = ppppppplVar6;
    puStack_250 = (undefined *)((long)extraout_RDX_00 + (long)ppppppplVar6);
    func_0x0099bda0(ppppppplVar6,ppppppplVar14);
    ppppppplStack_278 = (long *******)0x0;
    ppppppplStack_270 = (long *******)0x0;
    lStack_268 = 0;
    puStack_290 = &UNK_004280ac;
    puStack_258 = (undefined *)((long)extraout_RDX_00 + (long)ppppppplVar6);
    _ZN14PairingAuthCtx7EncryptERKNSt3__16vectorIhNS0_9allocatorIhEEEE
              (&ppppppplStack_278,ppppppplVar12,&ppppppplStack_260);
    ppppppplVar5 = ppppppplStack_270;
    ppppppplVar12 = ppppppplStack_278;
    if (ppppppplStack_278 == ppppppplStack_270) {
      if (ppppppplStack_278 != (long *******)0x0) goto code_r0x004280dc;
    }
    else {
      ppppppplVar14 = (long *******)((long)ppppppplStack_270 - (long)ppppppplStack_278);
      puStack_290 = &UNK_004280ce;
      func_0x0099bda0(lStack_280,ppppppplStack_278,ppppppplVar14);
      *ppppppplStack_288 = (long ******)ppppppplVar14;
code_r0x004280dc:
      puStack_290 = &UNK_004280eb;
      _ZdaPvSt11align_val_t(ppppppplVar12,lStack_268 - (long)ppppppplVar12);
    }
    ppppppplVar11 =
         (long *******)CONCAT71((int7)((ulong)ppppppplVar5 >> 8),ppppppplVar12 != ppppppplVar5);
    puStack_290 = &UNK_004280fd;
    ppppppplVar7 = extraout_RDX_00;
    ppppppplVar13 = ppppppplVar6;
    _ZdaPvSt11align_val_t();
    ppppppplVar5 = extraout_RDX_00;
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_248) {
      return (long *******)((ulong)ppppppplVar11 & 0xffffffff);
    }
  }
  puStack_290 = &UNK_004283f5;
  func_0x0099bd00();
  lStack_2c0 = *(long *)(in_FS_OFFSET + 0x28);
  ppppppplStack_2b8 = ppppppplVar5;
  ppppppplStack_2b0 = ppppppplVar12;
  ppppppplStack_2a8 = ppppppplVar14;
  ppppppplStack_2a0 = ppppppplVar6;
  ppppppplStack_298 = ppppppplVar11;
  puStack_290 = (undefined *)apuStack_218;
  if (ppppppplVar13 == (long *******)0x0) {
    param_5 = (long *******)0x0;
    apcStack_2d8[0] = (code *)&UNK_00428491;
    puStack_290 = (undefined *)apuStack_218;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (&pppppplStack_2c8,&UNK_0015fda6,0x111,6,0,0xffffffff);
    apcStack_2d8[0] = (code *)&UNK_00428499;
    uVar9 = _ZN7android4base10LogMessage6streamEv(&pppppplStack_2c8);
    apcStack_2d8[0] = (code *)&UNK_004284ad;
    uVar9 = func_0x0032eb30(uVar9,&UNK_001725c2,0x11);
    apcStack_2d8[0] = (code *)&UNK_004284c1;
    func_0x0032eb30(uVar9,&UNK_0015ae05,1);
    apcStack_2d8[0] = (code *)&UNK_004284c9;
    _ZN7android4base10LogMessageD2Ev(&pppppplStack_2c8);
    ppppppplVar5 = &pppppplStack_2c8;
    ppppppplVar12 = extraout_RDX_01;
    ppppppplVar11 = ppppppplVar7;
    ppppppplVar6 = ppppppplVar13;
  }
  if (ppppppplVar7 == (long *******)0x0) {
    ppppppplVar5 = &pppppplStack_2c8;
    param_5 = (long *******)0x0;
    apcStack_2d8[0] = (code *)&UNK_00428507;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (ppppppplVar5,&UNK_0015fda6,0x112,6,0,0xffffffff);
    apcStack_2d8[0] = (code *)&UNK_0042850f;
    uVar9 = _ZN7android4base10LogMessage6streamEv(ppppppplVar5);
    apcStack_2d8[0] = (code *)&UNK_00428523;
    uVar9 = func_0x0032eb30(uVar9,&UNK_00167dd5,0x11);
    apcStack_2d8[0] = (code *)&UNK_00428537;
    func_0x0032eb30(uVar9,&UNK_0015ae05,1);
    apcStack_2d8[0] = (code *)&UNK_0042853f;
    _ZN7android4base10LogMessageD2Ev(ppppppplVar5);
    ppppppplVar6 = ppppppplVar13;
    ppppppplVar11 = extraout_RDX_01;
  }
  if (extraout_RDX_01 == (long *******)0x0) {
    do {
      apcStack_2d8[0] = (code *)&UNK_00428592;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&pppppplStack_2c8,&UNK_0015fda6,0x113,6,0,0xffffffff);
      apcStack_2d8[0] = (code *)&UNK_0042859a;
      uVar9 = _ZN7android4base10LogMessage6streamEv(&pppppplStack_2c8);
      apcStack_2d8[0] = (code *)&UNK_004285ae;
      uVar9 = func_0x0032eb30(uVar9,&UNK_00165d45,0xe);
      apcStack_2d8[0] = (code *)&UNK_004285c2;
      uVar9 = func_0x0032eb30(uVar9,&UNK_001596b0,3);
      apcStack_2d8[0] = (code *)&UNK_004285d2;
      uVar9 = func_0x0032eb30(uVar9,&UNK_0015ae05,1);
      apcStack_2d8[0] = (code *)&UNK_004285e6;
      uVar9 = func_0x0032eb30(uVar9,&UNK_00163098,1);
      apcStack_2d8[0] = (code *)&UNK_004285f6;
      uVar9 = func_0x0032eb30(uVar9,&UNK_0015ae05,1);
      apcStack_2d8[0] = (code *)&UNK_0042860a;
      uVar9 = func_0x0032eb30(uVar9,&UNK_0015980b,2);
      apcStack_2d8[0] = (code *)&UNK_0042861a;
      uVar9 = func_0x0032eb30(uVar9,&UNK_00181bbd,6);
      apcStack_2d8[0] = (code *)&UNK_00428624;
      uVar9 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar9,0);
      apcStack_2d8[0] = (code *)&UNK_00428634;
      uVar9 = func_0x0032eb30(uVar9,&UNK_00189813,5);
      apcStack_2d8[0] = (code *)&UNK_0042863e;
      uVar9 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj(uVar9,0);
      apcStack_2d8[0] = (code *)&UNK_0042864e;
      func_0x0032eb30(uVar9,&UNK_0017b788,2);
      apcStack_2d8[0] = (code *)&UNK_00428656;
      _ZN7android4base10LogMessageD2Ev(&pppppplStack_2c8);
    } while( true );
  }
  apcStack_2d8[0] = (code *)&UNK_0042843d;
  ppppppplVar7 = extraout_RDX_01;
  ppppppplVar8 = (long *******)_ZN14PairingAuthCtx17SafeDecryptedSizeEm();
  lStack_340 = *(long *)(in_FS_OFFSET + 0x28);
  if (lStack_340 == lStack_2c0) {
    return ppppppplVar8;
  }
  apcStack_2d8[0] = pairing_auth_decrypt;
  func_0x0099bd00();
  lStack_308 = *(long *)(in_FS_OFFSET + 0x28);
  ppppppplVar8 = ppppppplVar13;
  ppppppplStack_300 = ppppppplVar5;
  ppppppplStack_2f8 = ppppppplVar12;
  ppppppplStack_2f0 = ppppppplVar14;
  ppppppplStack_2e8 = ppppppplVar6;
  ppppppplStack_2e0 = ppppppplVar11;
  apcStack_2d8[0] = (code *)&puStack_290;
  if (ppppppplVar13 == (long *******)0x0) {
    puStack_350 = &UNK_004287ab;
    apcStack_2d8[0] = (code *)&puStack_290;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (&ppppppplStack_320,&UNK_0015fda6,0x11a,6,0,0xffffffff);
    puStack_350 = &UNK_004287b3;
    uVar9 = _ZN7android4base10LogMessage6streamEv(&ppppppplStack_320);
    puStack_350 = &UNK_004287c7;
    uVar9 = func_0x0032eb30(uVar9,&UNK_001725c2,0x11);
    puStack_350 = &UNK_004287db;
    func_0x0032eb30(uVar9,&UNK_0015ae05,1);
    puStack_350 = &UNK_004287e3;
    ppppppplVar8 = (long *******)&ppppppplStack_320;
    _ZN7android4base10LogMessageD2Ev();
    ppppppplVar6 = (long *******)&ppppppplStack_320;
    ppppppplVar5 = param_5;
  }
  if (ppppppplVar7 == (long *******)0x0) {
    ppppppplVar6 = (long *******)&ppppppplStack_320;
    puStack_350 = &UNK_0042881c;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (ppppppplVar6,&UNK_0015fda6,0x11b,6,0,0xffffffff);
    puStack_350 = &UNK_00428824;
    uVar9 = _ZN7android4base10LogMessage6streamEv(ppppppplVar6);
    puStack_350 = &UNK_00428838;
    uVar9 = func_0x0032eb30(uVar9,&UNK_0017a3cb,0x13);
    puStack_350 = &UNK_0042884c;
    func_0x0032eb30(uVar9,&UNK_0015ae05,1);
    puStack_350 = &UNK_00428854;
    ppppppplVar8 = ppppppplVar6;
    _ZN7android4base10LogMessageD2Ev();
    ppppppplVar5 = param_5;
  }
  if (lStack_340 == 0) {
    ppppppplVar6 = (long *******)&ppppppplStack_320;
    puStack_350 = &UNK_0042888d;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (ppppppplVar6,&UNK_0015fda6,0x11c,6,0,0xffffffff);
    puStack_350 = &UNK_00428895;
    uVar9 = _ZN7android4base10LogMessage6streamEv(ppppppplVar6);
    puStack_350 = &UNK_004288a9;
    uVar9 = func_0x0032eb30(uVar9,&UNK_0015ca76,0x14);
    puStack_350 = &UNK_004288bd;
    func_0x0032eb30(uVar9,&UNK_0015ae05,1);
    puStack_350 = &UNK_004288c5;
    ppppppplVar8 = ppppppplVar6;
    _ZN7android4base10LogMessageD2Ev();
    ppppppplVar5 = param_5;
  }
  if (param_5 == (long *******)0x0) {
    ppppppplVar6 = (long *******)&ppppppplStack_320;
    puStack_350 = &UNK_004288fa;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (ppppppplVar6,&UNK_0015fda6,0x11d,6,0,0xffffffff);
    puStack_350 = &UNK_00428902;
    uVar9 = _ZN7android4base10LogMessage6streamEv(ppppppplVar6);
    puStack_350 = &UNK_00428916;
    uVar9 = func_0x0032eb30(uVar9,&UNK_00184bd2,0x14);
    puStack_350 = &UNK_0042892a;
    func_0x0032eb30(uVar9,&UNK_0015ae05,1);
    puStack_350 = &UNK_00428932;
    ppppppplVar8 = ppppppplVar6;
    _ZN7android4base10LogMessageD2Ev();
    ppppppplVar5 = param_5;
  }
  if (extraout_RDX_02 == (long *******)0x0) {
    do {
      puStack_350 = &UNK_00428982;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&ppppppplStack_320,&UNK_0015fda6,0x11e,6,0,0xffffffff);
      puStack_350 = &UNK_0042898a;
      uVar9 = _ZN7android4base10LogMessage6streamEv(&ppppppplStack_320);
      puStack_350 = &UNK_0042899e;
      uVar9 = func_0x0032eb30(uVar9,&UNK_00165d45,0xe);
      puStack_350 = &UNK_004289b2;
      uVar9 = func_0x0032eb30(uVar9,&UNK_001837b0,5);
      puStack_350 = &UNK_004289c2;
      uVar9 = func_0x0032eb30(uVar9,&UNK_0015ae05,1);
      puStack_350 = &UNK_004289d6;
      uVar9 = func_0x0032eb30(uVar9,&UNK_00163098,1);
      puStack_350 = &UNK_004289e6;
      uVar9 = func_0x0032eb30(uVar9,&UNK_0015ae05,1);
      puStack_350 = &UNK_004289fa;
      uVar9 = func_0x0032eb30(uVar9,&UNK_0015980b,2);
      puStack_350 = &UNK_00428a0a;
      uVar9 = func_0x0032eb30(uVar9,&UNK_0015fdd9,8);
      puStack_350 = &UNK_00428a14;
      uVar9 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar9,0);
      puStack_350 = &UNK_00428a24;
      uVar9 = func_0x0032eb30(uVar9,&UNK_00189813,5);
      puStack_350 = &UNK_00428a2e;
      uVar9 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj(uVar9,0);
      puStack_350 = &UNK_00428a3e;
      func_0x0032eb30(uVar9,&UNK_0017b788,2);
      puStack_350 = &UNK_00428a46;
      _ZN7android4base10LogMessageD2Ev(&ppppppplStack_320);
    } while( true );
  }
  ppppppplStack_348 = param_5;
  if ((long)extraout_RDX_02 < 0) {
    puStack_350 = &UNK_00428a50;
    func_0x00330ca0();
    goto code_r0x00428a50;
  }
  puStack_350 = &UNK_004286ca;
  ppppppplVar6 = (long *******)_Znwm(extraout_RDX_02);
  puStack_350 = &UNK_004286e9;
  ppppppplStack_320 = ppppppplVar6;
  puStack_310 = (undefined *)((long)extraout_RDX_02 + (long)ppppppplVar6);
  func_0x0099bda0(ppppppplVar6,ppppppplVar7);
  lStack_338 = 0;
  lStack_330 = 0;
  lStack_328 = 0;
  puStack_350 = &UNK_0042870c;
  puStack_318 = (undefined *)((long)extraout_RDX_02 + (long)ppppppplVar6);
  _ZN14PairingAuthCtx7DecryptERKNSt3__16vectorIhNS0_9allocatorIhEEEE
            (&lStack_338,ppppppplVar13,&ppppppplStack_320);
  lVar2 = lStack_330;
  lVar4 = lStack_338;
  if (lStack_338 == lStack_330) {
    if (lStack_338 != 0) goto code_r0x0042873c;
  }
  else {
    pppppplVar15 = (long ******)(lStack_330 - lStack_338);
    puStack_350 = &UNK_0042872e;
    func_0x0099bda0(lStack_340,lStack_338,pppppplVar15);
    *ppppppplStack_348 = pppppplVar15;
code_r0x0042873c:
    puStack_350 = &UNK_0042874b;
    _ZdaPvSt11align_val_t(lVar4,lStack_328 - lVar4);
  }
  puStack_350 = &UNK_0042875d;
  ppppppplVar8 = ppppppplVar6;
  _ZdaPvSt11align_val_t(ppppppplVar6,extraout_RDX_02);
  ppppppplVar5 = extraout_RDX_02;
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_308) {
    return (long *******)(CONCAT71((int7)((ulong)lVar2 >> 8),lVar4 != lVar2) & 0xffffffff);
  }
code_r0x00428a50:
  puStack_350 = &UNK_00428a55;
  func_0x0099bd00();
  ppppppplStack_368 = *(long ********)(in_FS_OFFSET + 0x28);
  ppppppplStack_360 = ppppppplVar5;
  ppppppplStack_358 = ppppppplVar6;
  if (ppppppplVar8 == (long *******)0x0) {
    puStack_350 = (undefined *)apcStack_2d8;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (auStack_370,&UNK_0015fda6,300,6,0,0xffffffff);
    uVar9 = _ZN7android4base10LogMessage6streamEv(auStack_370);
    uVar9 = func_0x0032eb30(uVar9,&UNK_001725c2,0x11);
    func_0x0032eb30(uVar9,&UNK_0015ae05,1);
    _ZN7android4base10LogMessageD2Ev(auStack_370);
    if (*(long ********)(in_FS_OFFSET + 0x28) == ppppppplStack_368) {
      return *(long ********)(in_FS_OFFSET + 0x28);
    }
  }
  else {
    pppppplVar15 = ppppppplVar8[5];
    ppppppplVar8[5] = (long ******)0x0;
    puStack_350 = (undefined *)apcStack_2d8;
    if (pppppplVar15 != (long ******)0x0) {
      puStack_350 = (undefined *)apcStack_2d8;
      EVP_AEAD_CTX_cleanup(pppppplVar15);
      _ZdaPvSt11align_val_t(pppppplVar15,0x250);
    }
    pppppplVar15 = ppppppplVar8[4];
    ppppppplVar8[4] = (long ******)0x0;
    if (pppppplVar15 != (long ******)0x0) {
      SPAKE2_CTX_free();
    }
    pppppplVar15 = *ppppppplVar8;
    if (pppppplVar15 != (long ******)0x0) {
      ppppppplVar8[1] = pppppplVar15;
      _ZdaPvSt11align_val_t(pppppplVar15,(long)ppppppplVar8[2] - (long)pppppplVar15);
    }
    if (*(long ********)(in_FS_OFFSET + 0x28) == ppppppplStack_368) {
      ppppppplVar5 = (long *******)free(ppppppplVar8,0x30);
      return ppppppplVar5;
    }
  }
  func_0x0099bd00();
  pcVar1 = (code *)swi(3);
  ppppppplVar5 = (long *******)(*pcVar1)();
  return ppppppplVar5;
}


