// Function: pairing_auth_init_cipher
// Address: 00427ca0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Type propagation algorithm not settling */

long *******
pairing_auth_init_cipher
          (long *******param_1,long *******param_2,long *******param_3,undefined8 param_4,
          long *******param_5)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  long *******ppppppplVar5;
  long *******ppppppplVar6;
  undefined8 uVar7;
  long *******extraout_RDX;
  long *******extraout_RDX_00;
  long *******extraout_RDX_01;
  long *******ppppppplVar8;
  long *******ppppppplVar9;
  long *******unaff_R12;
  undefined *unaff_R13;
  long *******ppppppplVar10;
  long ******pppppplVar11;
  long *******ppppppplVar12;
  long in_FS_OFFSET;
  undefined1 auStack_1f0 [8];
  long *******ppppppplStack_1e8;
  long *******ppppppplStack_1e0;
  long *******ppppppplStack_1d8;
  undefined *puStack_1d0;
  long *******ppppppplStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long *******ppppppplStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  long lStack_188;
  long *******ppppppplStack_180;
  long *******ppppppplStack_178;
  long *******ppppppplStack_170;
  long *******ppppppplStack_168;
  long *******ppppppplStack_160;
  code *apcStack_158 [2];
  long ******pppppplStack_148;
  long lStack_140;
  long *******ppppppplStack_138;
  long *******ppppppplStack_130;
  long *******ppppppplStack_128;
  long *******ppppppplStack_120;
  long *******ppppppplStack_118;
  undefined *puStack_110;
  long *******ppppppplStack_108;
  long lStack_100;
  long *******ppppppplStack_f8;
  long *******ppppppplStack_f0;
  long lStack_e8;
  long *******ppppppplStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  long *******ppppppplStack_c0;
  long *******ppppppplStack_b8;
  undefined *puStack_b0;
  long *******ppppppplStack_a8;
  long *******ppppppplStack_a0;
  undefined *apuStack_98 [2];
  long ******pppppplStack_88;
  long lStack_80;
  long *******ppppppplStack_78;
  long *******ppppppplStack_70;
  long *******ppppppplStack_68;
  undefined *apuStack_60 [2];
  long *******ppppppplStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  ppppppplVar10 = param_2;
  ppppppplVar8 = param_1;
  if (param_1 == (long *******)0x0) {
    unaff_R12 = (long *******)&ppppppplStack_50;
    param_5 = (long *******)0x0;
    apuStack_60[0] = &UNK_00427d76;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (unaff_R12,&UNK_0015fda6,0xf0,6,0,0xffffffff);
    apuStack_60[0] = &UNK_00427d7e;
    uVar7 = _ZN7android4base10LogMessage6streamEv(unaff_R12);
    apuStack_60[0] = &UNK_00427d92;
    uVar7 = func_0x0032eb30(uVar7,&UNK_001725c2,0x11);
    ppppppplVar10 = (long *******)&UNK_0015ae05;
    apuStack_60[0] = &UNK_00427da6;
    func_0x0032eb30(uVar7,&UNK_0015ae05,1);
    apuStack_60[0] = &UNK_00427dae;
    ppppppplVar8 = unaff_R12;
    _ZN7android4base10LogMessageD2Ev();
  }
  if (param_2 == (long *******)0x0) {
    unaff_R12 = (long *******)&ppppppplStack_50;
    param_5 = (long *******)0x0;
    apuStack_60[0] = &UNK_00427ddd;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (unaff_R12,&UNK_0015fda6,0xf1,6,0,0xffffffff);
    apuStack_60[0] = &UNK_00427de5;
    uVar7 = _ZN7android4base10LogMessage6streamEv(unaff_R12);
    apuStack_60[0] = &UNK_00427df9;
    uVar7 = func_0x0032eb30(uVar7,&UNK_00181d17,0x17);
    ppppppplVar10 = (long *******)&UNK_0015ae05;
    apuStack_60[0] = &UNK_00427e0d;
    func_0x0032eb30(uVar7,&UNK_0015ae05,1);
    apuStack_60[0] = &UNK_00427e15;
    ppppppplVar8 = unaff_R12;
    _ZN7android4base10LogMessageD2Ev();
  }
  if (param_3 == (long *******)0x0) {
    do {
      apuStack_60[0] = &UNK_00427e62;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&ppppppplStack_50,&UNK_0015fda6,0xf2,6,0,0xffffffff);
      apuStack_60[0] = &UNK_00427e6a;
      uVar7 = _ZN7android4base10LogMessage6streamEv(&ppppppplStack_50);
      apuStack_60[0] = &UNK_00427e7e;
      uVar7 = func_0x0032eb30(uVar7,&UNK_00165d45,0xe);
      apuStack_60[0] = &UNK_00427e92;
      uVar7 = func_0x0032eb30(uVar7,&UNK_00167dcd,7);
      apuStack_60[0] = &UNK_00427ea2;
      uVar7 = func_0x0032eb30(uVar7,&UNK_0015ae05,1);
      apuStack_60[0] = &UNK_00427eb6;
      uVar7 = func_0x0032eb30(uVar7,&UNK_00163098,1);
      apuStack_60[0] = &UNK_00427ec6;
      uVar7 = func_0x0032eb30(uVar7,&UNK_0015ae05,1);
      apuStack_60[0] = &UNK_00427eda;
      uVar7 = func_0x0032eb30(uVar7,&UNK_0015980b,2);
      apuStack_60[0] = &UNK_00427eea;
      uVar7 = func_0x0032eb30(uVar7,&UNK_00164750,10);
      apuStack_60[0] = &UNK_00427ef4;
      uVar7 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar7,0);
      apuStack_60[0] = &UNK_00427f04;
      uVar7 = func_0x0032eb30(uVar7,&UNK_00189813,5);
      apuStack_60[0] = &UNK_00427f0e;
      uVar7 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj(uVar7,0);
      apuStack_60[0] = &UNK_00427f1e;
      func_0x0032eb30(uVar7,&UNK_0017b788,2);
      apuStack_60[0] = &UNK_00427f26;
      _ZN7android4base10LogMessageD2Ev(&ppppppplStack_50);
    } while( true );
  }
  if ((long)param_3 < 0) {
    apuStack_60[0] = &UNK_00427f30;
    func_0x00330ca0();
  }
  else {
    apuStack_60[0] = &UNK_00427cf0;
    unaff_R12 = (long *******)_Znwm(param_3);
    unaff_R13 = (undefined *)((long)unaff_R12 + (long)param_3);
    apuStack_60[0] = &UNK_00427d0d;
    ppppppplStack_50 = unaff_R12;
    puStack_40 = unaff_R13;
    func_0x0099bda0(unaff_R12,param_2,param_3);
    apuStack_60[0] = &UNK_00427d1d;
    puStack_48 = unaff_R13;
    uVar4 = _ZN14PairingAuthCtx10InitCipherERKNSt3__16vectorIhNS0_9allocatorIhEEEE
                      (param_1,&ppppppplStack_50);
    param_1 = (long *******)(ulong)uVar4;
    apuStack_60[0] = &UNK_00427d2b;
    ppppppplVar10 = param_3;
    ppppppplVar8 = unaff_R12;
    _ZdaPvSt11align_val_t();
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
      return param_1;
    }
  }
  apuStack_60[0] = &UNK_00427f35;
  func_0x0099bd00();
  lStack_80 = *(long *)(in_FS_OFFSET + 0x28);
  ppppppplStack_78 = param_3;
  ppppppplStack_70 = param_1;
  ppppppplStack_68 = param_2;
  apuStack_60[0] = &stack0xfffffffffffffff8;
  if (ppppppplVar8 == (long *******)0x0) {
    param_3 = &pppppplStack_88;
    param_5 = (long *******)0x0;
    apuStack_98[0] = &UNK_00427fad;
    apuStack_60[0] = &stack0xfffffffffffffff8;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (param_3,&UNK_0015fda6,0xf9,6,0,0xffffffff);
    apuStack_98[0] = &UNK_00427fb5;
    uVar7 = _ZN7android4base10LogMessage6streamEv(param_3);
    apuStack_98[0] = &UNK_00427fc9;
    uVar7 = func_0x0032eb30(uVar7,&UNK_001725c2,0x11);
    apuStack_98[0] = &UNK_00427fdd;
    func_0x0032eb30(uVar7,&UNK_0015ae05,1);
    apuStack_98[0] = &UNK_00427fe5;
    _ZN7android4base10LogMessageD2Ev(param_3);
    param_1 = ppppppplVar8;
    param_2 = ppppppplVar10;
  }
  apuStack_98[0] = &UNK_00427f64;
  ppppppplVar5 = (long *******)_ZN14PairingAuthCtx17SafeEncryptedSizeEm();
  lStack_100 = *(long *)(in_FS_OFFSET + 0x28);
  if (lStack_100 == lStack_80) {
    return ppppppplVar5;
  }
  apuStack_98[0] = &UNK_00427ff5;
  func_0x0099bd00();
  lStack_c8 = *(long *)(in_FS_OFFSET + 0x28);
  ppppppplVar5 = ppppppplVar10;
  ppppppplVar9 = ppppppplVar8;
  ppppppplStack_c0 = param_3;
  ppppppplStack_b8 = unaff_R12;
  puStack_b0 = unaff_R13;
  ppppppplStack_a8 = param_1;
  ppppppplStack_a0 = param_2;
  apuStack_98[0] = (undefined *)apuStack_60;
  if (ppppppplVar8 == (long *******)0x0) {
    puStack_110 = &UNK_0042814b;
    apuStack_98[0] = (undefined *)apuStack_60;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (&ppppppplStack_e0,&UNK_0015fda6,0xff,6,0,0xffffffff);
    puStack_110 = &UNK_00428153;
    uVar7 = _ZN7android4base10LogMessage6streamEv(&ppppppplStack_e0);
    puStack_110 = &UNK_00428167;
    uVar7 = func_0x0032eb30(uVar7,&UNK_001725c2,0x11);
    ppppppplVar5 = (long *******)&UNK_0015ae05;
    puStack_110 = &UNK_0042817b;
    func_0x0032eb30(uVar7,&UNK_0015ae05,1);
    puStack_110 = &UNK_00428183;
    ppppppplVar9 = (long *******)&ppppppplStack_e0;
    _ZN7android4base10LogMessageD2Ev();
    param_1 = (long *******)&ppppppplStack_e0;
    param_3 = param_5;
  }
  if (ppppppplVar10 == (long *******)0x0) {
    param_1 = (long *******)&ppppppplStack_e0;
    puStack_110 = &UNK_004281bc;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (param_1,&UNK_0015fda6,0x100,6,0,0xffffffff);
    puStack_110 = &UNK_004281c4;
    uVar7 = _ZN7android4base10LogMessage6streamEv(param_1);
    puStack_110 = &UNK_004281d8;
    uVar7 = func_0x0032eb30(uVar7,&UNK_0017a3cb,0x13);
    ppppppplVar5 = (long *******)&UNK_0015ae05;
    puStack_110 = &UNK_004281ec;
    func_0x0032eb30(uVar7,&UNK_0015ae05,1);
    puStack_110 = &UNK_004281f4;
    ppppppplVar9 = param_1;
    _ZN7android4base10LogMessageD2Ev();
    param_3 = param_5;
  }
  if (lStack_100 == 0) {
    param_1 = (long *******)&ppppppplStack_e0;
    puStack_110 = &UNK_0042822d;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (param_1,&UNK_0015fda6,0x101,6,0,0xffffffff);
    puStack_110 = &UNK_00428235;
    uVar7 = _ZN7android4base10LogMessage6streamEv(param_1);
    puStack_110 = &UNK_00428249;
    uVar7 = func_0x0032eb30(uVar7,&UNK_0015ca76,0x14);
    ppppppplVar5 = (long *******)&UNK_0015ae05;
    puStack_110 = &UNK_0042825d;
    func_0x0032eb30(uVar7,&UNK_0015ae05,1);
    puStack_110 = &UNK_00428265;
    ppppppplVar9 = param_1;
    _ZN7android4base10LogMessageD2Ev();
    param_3 = param_5;
  }
  if (param_5 == (long *******)0x0) {
    param_1 = (long *******)&ppppppplStack_e0;
    puStack_110 = &UNK_0042829a;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (param_1,&UNK_0015fda6,0x102,6,0,0xffffffff);
    puStack_110 = &UNK_004282a2;
    uVar7 = _ZN7android4base10LogMessage6streamEv(param_1);
    puStack_110 = &UNK_004282b6;
    uVar7 = func_0x0032eb30(uVar7,&UNK_00184bd2,0x14);
    ppppppplVar5 = (long *******)&UNK_0015ae05;
    puStack_110 = &UNK_004282ca;
    func_0x0032eb30(uVar7,&UNK_0015ae05,1);
    puStack_110 = &UNK_004282d2;
    ppppppplVar9 = param_1;
    _ZN7android4base10LogMessageD2Ev();
    param_3 = param_5;
  }
  if (extraout_RDX == (long *******)0x0) {
    do {
      puStack_110 = &UNK_00428322;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&ppppppplStack_e0,&UNK_0015fda6,0x103,6,0,0xffffffff);
      puStack_110 = &UNK_0042832a;
      uVar7 = _ZN7android4base10LogMessage6streamEv(&ppppppplStack_e0);
      puStack_110 = &UNK_0042833e;
      uVar7 = func_0x0032eb30(uVar7,&UNK_00165d45,0xe);
      puStack_110 = &UNK_00428352;
      uVar7 = func_0x0032eb30(uVar7,&UNK_001837b0,5);
      puStack_110 = &UNK_00428362;
      uVar7 = func_0x0032eb30(uVar7,&UNK_0015ae05,1);
      puStack_110 = &UNK_00428376;
      uVar7 = func_0x0032eb30(uVar7,&UNK_00163098,1);
      puStack_110 = &UNK_00428386;
      uVar7 = func_0x0032eb30(uVar7,&UNK_0015ae05,1);
      puStack_110 = &UNK_0042839a;
      uVar7 = func_0x0032eb30(uVar7,&UNK_0015980b,2);
      puStack_110 = &UNK_004283aa;
      uVar7 = func_0x0032eb30(uVar7,&UNK_0015fdd9,8);
      puStack_110 = &UNK_004283b4;
      uVar7 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar7,0);
      puStack_110 = &UNK_004283c4;
      uVar7 = func_0x0032eb30(uVar7,&UNK_00189813,5);
      puStack_110 = &UNK_004283ce;
      uVar7 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj(uVar7,0);
      puStack_110 = &UNK_004283de;
      func_0x0032eb30(uVar7,&UNK_0017b788,2);
      puStack_110 = &UNK_004283e6;
      _ZN7android4base10LogMessageD2Ev(&ppppppplStack_e0);
    } while( true );
  }
  ppppppplStack_108 = param_5;
  if ((long)extraout_RDX < 0) {
    puStack_110 = &UNK_004283f0;
    func_0x00330ca0();
    ppppppplVar12 = extraout_RDX;
  }
  else {
    puStack_110 = &UNK_0042806a;
    param_1 = (long *******)_Znwm(extraout_RDX);
    puStack_110 = &UNK_00428089;
    ppppppplStack_e0 = param_1;
    puStack_d0 = (undefined *)((long)extraout_RDX + (long)param_1);
    func_0x0099bda0(param_1,ppppppplVar10);
    ppppppplStack_f8 = (long *******)0x0;
    ppppppplStack_f0 = (long *******)0x0;
    lStack_e8 = 0;
    puStack_110 = &UNK_004280ac;
    puStack_d8 = (undefined *)((long)extraout_RDX + (long)param_1);
    _ZN14PairingAuthCtx7EncryptERKNSt3__16vectorIhNS0_9allocatorIhEEEE
              (&ppppppplStack_f8,ppppppplVar8,&ppppppplStack_e0);
    ppppppplVar5 = ppppppplStack_f0;
    ppppppplVar8 = ppppppplStack_f8;
    if (ppppppplStack_f8 == ppppppplStack_f0) {
      if (ppppppplStack_f8 != (long *******)0x0) goto code_r0x004280dc;
    }
    else {
      ppppppplVar10 = (long *******)((long)ppppppplStack_f0 - (long)ppppppplStack_f8);
      puStack_110 = &UNK_004280ce;
      func_0x0099bda0(lStack_100,ppppppplStack_f8,ppppppplVar10);
      *ppppppplStack_108 = (long ******)ppppppplVar10;
code_r0x004280dc:
      puStack_110 = &UNK_004280eb;
      _ZdaPvSt11align_val_t(ppppppplVar8,lStack_e8 - (long)ppppppplVar8);
    }
    ppppppplVar12 =
         (long *******)CONCAT71((int7)((ulong)ppppppplVar5 >> 8),ppppppplVar8 != ppppppplVar5);
    puStack_110 = &UNK_004280fd;
    ppppppplVar5 = extraout_RDX;
    ppppppplVar9 = param_1;
    _ZdaPvSt11align_val_t();
    param_3 = extraout_RDX;
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_c8) {
      return (long *******)((ulong)ppppppplVar12 & 0xffffffff);
    }
  }
  puStack_110 = &UNK_004283f5;
  func_0x0099bd00();
  lStack_140 = *(long *)(in_FS_OFFSET + 0x28);
  ppppppplStack_138 = param_3;
  ppppppplStack_130 = ppppppplVar8;
  ppppppplStack_128 = ppppppplVar10;
  ppppppplStack_120 = param_1;
  ppppppplStack_118 = ppppppplVar12;
  puStack_110 = (undefined *)apuStack_98;
  if (ppppppplVar9 == (long *******)0x0) {
    param_5 = (long *******)0x0;
    apcStack_158[0] = (code *)&UNK_00428491;
    puStack_110 = (undefined *)apuStack_98;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (&pppppplStack_148,&UNK_0015fda6,0x111,6,0,0xffffffff);
    apcStack_158[0] = (code *)&UNK_00428499;
    uVar7 = _ZN7android4base10LogMessage6streamEv(&pppppplStack_148);
    apcStack_158[0] = (code *)&UNK_004284ad;
    uVar7 = func_0x0032eb30(uVar7,&UNK_001725c2,0x11);
    apcStack_158[0] = (code *)&UNK_004284c1;
    func_0x0032eb30(uVar7,&UNK_0015ae05,1);
    apcStack_158[0] = (code *)&UNK_004284c9;
    _ZN7android4base10LogMessageD2Ev(&pppppplStack_148);
    param_3 = &pppppplStack_148;
    ppppppplVar8 = extraout_RDX_00;
    ppppppplVar12 = ppppppplVar5;
    param_1 = ppppppplVar9;
  }
  if (ppppppplVar5 == (long *******)0x0) {
    param_3 = &pppppplStack_148;
    param_5 = (long *******)0x0;
    apcStack_158[0] = (code *)&UNK_00428507;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (param_3,&UNK_0015fda6,0x112,6,0,0xffffffff);
    apcStack_158[0] = (code *)&UNK_0042850f;
    uVar7 = _ZN7android4base10LogMessage6streamEv(param_3);
    apcStack_158[0] = (code *)&UNK_00428523;
    uVar7 = func_0x0032eb30(uVar7,&UNK_00167dd5,0x11);
    apcStack_158[0] = (code *)&UNK_00428537;
    func_0x0032eb30(uVar7,&UNK_0015ae05,1);
    apcStack_158[0] = (code *)&UNK_0042853f;
    _ZN7android4base10LogMessageD2Ev(param_3);
    param_1 = ppppppplVar9;
    ppppppplVar12 = extraout_RDX_00;
  }
  if (extraout_RDX_00 == (long *******)0x0) {
    do {
      apcStack_158[0] = (code *)&UNK_00428592;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&pppppplStack_148,&UNK_0015fda6,0x113,6,0,0xffffffff);
      apcStack_158[0] = (code *)&UNK_0042859a;
      uVar7 = _ZN7android4base10LogMessage6streamEv(&pppppplStack_148);
      apcStack_158[0] = (code *)&UNK_004285ae;
      uVar7 = func_0x0032eb30(uVar7,&UNK_00165d45,0xe);
      apcStack_158[0] = (code *)&UNK_004285c2;
      uVar7 = func_0x0032eb30(uVar7,&UNK_001596b0,3);
      apcStack_158[0] = (code *)&UNK_004285d2;
      uVar7 = func_0x0032eb30(uVar7,&UNK_0015ae05,1);
      apcStack_158[0] = (code *)&UNK_004285e6;
      uVar7 = func_0x0032eb30(uVar7,&UNK_00163098,1);
      apcStack_158[0] = (code *)&UNK_004285f6;
      uVar7 = func_0x0032eb30(uVar7,&UNK_0015ae05,1);
      apcStack_158[0] = (code *)&UNK_0042860a;
      uVar7 = func_0x0032eb30(uVar7,&UNK_0015980b,2);
      apcStack_158[0] = (code *)&UNK_0042861a;
      uVar7 = func_0x0032eb30(uVar7,&UNK_00181bbd,6);
      apcStack_158[0] = (code *)&UNK_00428624;
      uVar7 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar7,0);
      apcStack_158[0] = (code *)&UNK_00428634;
      uVar7 = func_0x0032eb30(uVar7,&UNK_00189813,5);
      apcStack_158[0] = (code *)&UNK_0042863e;
      uVar7 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj(uVar7,0);
      apcStack_158[0] = (code *)&UNK_0042864e;
      func_0x0032eb30(uVar7,&UNK_0017b788,2);
      apcStack_158[0] = (code *)&UNK_00428656;
      _ZN7android4base10LogMessageD2Ev(&pppppplStack_148);
    } while( true );
  }
  apcStack_158[0] = (code *)&UNK_0042843d;
  ppppppplVar5 = extraout_RDX_00;
  ppppppplVar6 = (long *******)_ZN14PairingAuthCtx17SafeDecryptedSizeEm();
  lStack_1c0 = *(long *)(in_FS_OFFSET + 0x28);
  if (lStack_1c0 == lStack_140) {
    return ppppppplVar6;
  }
  apcStack_158[0] = pairing_auth_decrypt;
  func_0x0099bd00();
  lStack_188 = *(long *)(in_FS_OFFSET + 0x28);
  ppppppplVar6 = ppppppplVar9;
  ppppppplStack_180 = param_3;
  ppppppplStack_178 = ppppppplVar8;
  ppppppplStack_170 = ppppppplVar10;
  ppppppplStack_168 = param_1;
  ppppppplStack_160 = ppppppplVar12;
  apcStack_158[0] = (code *)&puStack_110;
  if (ppppppplVar9 == (long *******)0x0) {
    puStack_1d0 = &UNK_004287ab;
    apcStack_158[0] = (code *)&puStack_110;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (&ppppppplStack_1a0,&UNK_0015fda6,0x11a,6,0,0xffffffff);
    puStack_1d0 = &UNK_004287b3;
    uVar7 = _ZN7android4base10LogMessage6streamEv(&ppppppplStack_1a0);
    puStack_1d0 = &UNK_004287c7;
    uVar7 = func_0x0032eb30(uVar7,&UNK_001725c2,0x11);
    puStack_1d0 = &UNK_004287db;
    func_0x0032eb30(uVar7,&UNK_0015ae05,1);
    puStack_1d0 = &UNK_004287e3;
    ppppppplVar6 = (long *******)&ppppppplStack_1a0;
    _ZN7android4base10LogMessageD2Ev();
    param_1 = (long *******)&ppppppplStack_1a0;
    param_3 = param_5;
  }
  if (ppppppplVar5 == (long *******)0x0) {
    param_1 = (long *******)&ppppppplStack_1a0;
    puStack_1d0 = &UNK_0042881c;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (param_1,&UNK_0015fda6,0x11b,6,0,0xffffffff);
    puStack_1d0 = &UNK_00428824;
    uVar7 = _ZN7android4base10LogMessage6streamEv(param_1);
    puStack_1d0 = &UNK_00428838;
    uVar7 = func_0x0032eb30(uVar7,&UNK_0017a3cb,0x13);
    puStack_1d0 = &UNK_0042884c;
    func_0x0032eb30(uVar7,&UNK_0015ae05,1);
    puStack_1d0 = &UNK_00428854;
    ppppppplVar6 = param_1;
    _ZN7android4base10LogMessageD2Ev();
    param_3 = param_5;
  }
  if (lStack_1c0 == 0) {
    param_1 = (long *******)&ppppppplStack_1a0;
    puStack_1d0 = &UNK_0042888d;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (param_1,&UNK_0015fda6,0x11c,6,0,0xffffffff);
    puStack_1d0 = &UNK_00428895;
    uVar7 = _ZN7android4base10LogMessage6streamEv(param_1);
    puStack_1d0 = &UNK_004288a9;
    uVar7 = func_0x0032eb30(uVar7,&UNK_0015ca76,0x14);
    puStack_1d0 = &UNK_004288bd;
    func_0x0032eb30(uVar7,&UNK_0015ae05,1);
    puStack_1d0 = &UNK_004288c5;
    ppppppplVar6 = param_1;
    _ZN7android4base10LogMessageD2Ev();
    param_3 = param_5;
  }
  if (param_5 == (long *******)0x0) {
    param_1 = (long *******)&ppppppplStack_1a0;
    puStack_1d0 = &UNK_004288fa;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (param_1,&UNK_0015fda6,0x11d,6,0,0xffffffff);
    puStack_1d0 = &UNK_00428902;
    uVar7 = _ZN7android4base10LogMessage6streamEv(param_1);
    puStack_1d0 = &UNK_00428916;
    uVar7 = func_0x0032eb30(uVar7,&UNK_00184bd2,0x14);
    puStack_1d0 = &UNK_0042892a;
    func_0x0032eb30(uVar7,&UNK_0015ae05,1);
    puStack_1d0 = &UNK_00428932;
    ppppppplVar6 = param_1;
    _ZN7android4base10LogMessageD2Ev();
    param_3 = param_5;
  }
  if (extraout_RDX_01 == (long *******)0x0) {
    do {
      puStack_1d0 = &UNK_00428982;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&ppppppplStack_1a0,&UNK_0015fda6,0x11e,6,0,0xffffffff);
      puStack_1d0 = &UNK_0042898a;
      uVar7 = _ZN7android4base10LogMessage6streamEv(&ppppppplStack_1a0);
      puStack_1d0 = &UNK_0042899e;
      uVar7 = func_0x0032eb30(uVar7,&UNK_00165d45,0xe);
      puStack_1d0 = &UNK_004289b2;
      uVar7 = func_0x0032eb30(uVar7,&UNK_001837b0,5);
      puStack_1d0 = &UNK_004289c2;
      uVar7 = func_0x0032eb30(uVar7,&UNK_0015ae05,1);
      puStack_1d0 = &UNK_004289d6;
      uVar7 = func_0x0032eb30(uVar7,&UNK_00163098,1);
      puStack_1d0 = &UNK_004289e6;
      uVar7 = func_0x0032eb30(uVar7,&UNK_0015ae05,1);
      puStack_1d0 = &UNK_004289fa;
      uVar7 = func_0x0032eb30(uVar7,&UNK_0015980b,2);
      puStack_1d0 = &UNK_00428a0a;
      uVar7 = func_0x0032eb30(uVar7,&UNK_0015fdd9,8);
      puStack_1d0 = &UNK_00428a14;
      uVar7 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar7,0);
      puStack_1d0 = &UNK_00428a24;
      uVar7 = func_0x0032eb30(uVar7,&UNK_00189813,5);
      puStack_1d0 = &UNK_00428a2e;
      uVar7 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj(uVar7,0);
      puStack_1d0 = &UNK_00428a3e;
      func_0x0032eb30(uVar7,&UNK_0017b788,2);
      puStack_1d0 = &UNK_00428a46;
      _ZN7android4base10LogMessageD2Ev(&ppppppplStack_1a0);
    } while( true );
  }
  ppppppplStack_1c8 = param_5;
  if ((long)extraout_RDX_01 < 0) {
    puStack_1d0 = &UNK_00428a50;
    func_0x00330ca0();
    goto code_r0x00428a50;
  }
  puStack_1d0 = &UNK_004286ca;
  param_1 = (long *******)_Znwm(extraout_RDX_01);
  puStack_1d0 = &UNK_004286e9;
  ppppppplStack_1a0 = param_1;
  puStack_190 = (undefined *)((long)extraout_RDX_01 + (long)param_1);
  func_0x0099bda0(param_1,ppppppplVar5);
  lStack_1b8 = 0;
  lStack_1b0 = 0;
  lStack_1a8 = 0;
  puStack_1d0 = &UNK_0042870c;
  puStack_198 = (undefined *)((long)extraout_RDX_01 + (long)param_1);
  _ZN14PairingAuthCtx7DecryptERKNSt3__16vectorIhNS0_9allocatorIhEEEE
            (&lStack_1b8,ppppppplVar9,&ppppppplStack_1a0);
  lVar3 = lStack_1b0;
  lVar2 = lStack_1b8;
  if (lStack_1b8 == lStack_1b0) {
    if (lStack_1b8 != 0) goto code_r0x0042873c;
  }
  else {
    pppppplVar11 = (long ******)(lStack_1b0 - lStack_1b8);
    puStack_1d0 = &UNK_0042872e;
    func_0x0099bda0(lStack_1c0,lStack_1b8,pppppplVar11);
    *ppppppplStack_1c8 = pppppplVar11;
code_r0x0042873c:
    puStack_1d0 = &UNK_0042874b;
    _ZdaPvSt11align_val_t(lVar2,lStack_1a8 - lVar2);
  }
  puStack_1d0 = &UNK_0042875d;
  ppppppplVar6 = param_1;
  _ZdaPvSt11align_val_t(param_1,extraout_RDX_01);
  param_3 = extraout_RDX_01;
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_188) {
    return (long *******)(CONCAT71((int7)((ulong)lVar3 >> 8),lVar2 != lVar3) & 0xffffffff);
  }
code_r0x00428a50:
  puStack_1d0 = &UNK_00428a55;
  func_0x0099bd00();
  ppppppplStack_1e8 = *(long ********)(in_FS_OFFSET + 0x28);
  ppppppplStack_1e0 = param_3;
  ppppppplStack_1d8 = param_1;
  if (ppppppplVar6 == (long *******)0x0) {
    puStack_1d0 = (undefined *)apcStack_158;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (auStack_1f0,&UNK_0015fda6,300,6,0,0xffffffff);
    uVar7 = _ZN7android4base10LogMessage6streamEv(auStack_1f0);
    uVar7 = func_0x0032eb30(uVar7,&UNK_001725c2,0x11);
    func_0x0032eb30(uVar7,&UNK_0015ae05,1);
    _ZN7android4base10LogMessageD2Ev(auStack_1f0);
    if (*(long ********)(in_FS_OFFSET + 0x28) == ppppppplStack_1e8) {
      return *(long ********)(in_FS_OFFSET + 0x28);
    }
  }
  else {
    pppppplVar11 = ppppppplVar6[5];
    ppppppplVar6[5] = (long ******)0x0;
    puStack_1d0 = (undefined *)apcStack_158;
    if (pppppplVar11 != (long ******)0x0) {
      puStack_1d0 = (undefined *)apcStack_158;
      EVP_AEAD_CTX_cleanup(pppppplVar11);
      _ZdaPvSt11align_val_t(pppppplVar11,0x250);
    }
    pppppplVar11 = ppppppplVar6[4];
    ppppppplVar6[4] = (long ******)0x0;
    if (pppppplVar11 != (long ******)0x0) {
      SPAKE2_CTX_free();
    }
    pppppplVar11 = *ppppppplVar6;
    if (pppppplVar11 != (long ******)0x0) {
      ppppppplVar6[1] = pppppplVar11;
      _ZdaPvSt11align_val_t(pppppplVar11,(long)ppppppplVar6[2] - (long)pppppplVar11);
    }
    if (*(long ********)(in_FS_OFFSET + 0x28) == ppppppplStack_1e8) {
      ppppppplVar10 = (long *******)free(ppppppplVar6,0x30);
      return ppppppplVar10;
    }
  }
  func_0x0099bd00();
  pcVar1 = (code *)swi(3);
  ppppppplVar10 = (long *******)(*pcVar1)();
  return ppppppplVar10;
}


