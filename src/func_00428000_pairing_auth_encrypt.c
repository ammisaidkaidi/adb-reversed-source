// Function: pairing_auth_encrypt
// Address: 00428000
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Type propagation algorithm not settling */

ulong pairing_auth_encrypt
                (long *******param_1,long *******param_2,long *******param_3,long param_4,
                long *******param_5)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *******extraout_RDX;
  long *******extraout_RDX_00;
  long *******unaff_RBX;
  long *******ppppppplVar6;
  long *******ppppppplVar7;
  long *******ppppppplVar8;
  long ******pppppplVar9;
  long *******unaff_R14;
  long in_FS_OFFSET;
  undefined1 auStack_160 [8];
  ulong uStack_158;
  long *******ppppppplStack_150;
  long *******ppppppplStack_148;
  undefined *puStack_140;
  long *******ppppppplStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long *******ppppppplStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  long lStack_f8;
  long *******ppppppplStack_f0;
  long *******ppppppplStack_e8;
  long *******ppppppplStack_e0;
  long *******ppppppplStack_d8;
  long *******ppppppplStack_d0;
  code *apcStack_c8 [2];
  long ******pppppplStack_b8;
  long lStack_b0;
  long *******ppppppplStack_a8;
  long *******ppppppplStack_a0;
  long *******ppppppplStack_98;
  long *******ppppppplStack_90;
  long *******ppppppplStack_88;
  undefined *puStack_80;
  long *******ppppppplStack_78;
  long lStack_70;
  long *******ppppppplStack_68;
  long *******ppppppplStack_60;
  long lStack_58;
  long *******ppppppplStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  ppppppplVar6 = param_2;
  ppppppplVar7 = param_1;
  lStack_70 = param_4;
  if (param_1 == (long *******)0x0) {
    unaff_R14 = (long *******)&ppppppplStack_50;
    puStack_80 = &UNK_0042814b;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (unaff_R14,&UNK_0015fda6,0xff,6,0,0xffffffff);
    puStack_80 = &UNK_00428153;
    uVar5 = _ZN7android4base10LogMessage6streamEv(unaff_R14);
    puStack_80 = &UNK_00428167;
    uVar5 = func_0x0032eb30(uVar5,&UNK_001725c2,0x11);
    ppppppplVar6 = (long *******)&UNK_0015ae05;
    puStack_80 = &UNK_0042817b;
    func_0x0032eb30(uVar5,&UNK_0015ae05,1);
    puStack_80 = &UNK_00428183;
    ppppppplVar7 = unaff_R14;
    _ZN7android4base10LogMessageD2Ev();
    unaff_RBX = param_5;
  }
  if (param_2 == (long *******)0x0) {
    unaff_R14 = (long *******)&ppppppplStack_50;
    puStack_80 = &UNK_004281bc;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (unaff_R14,&UNK_0015fda6,0x100,6,0,0xffffffff);
    puStack_80 = &UNK_004281c4;
    uVar5 = _ZN7android4base10LogMessage6streamEv(unaff_R14);
    puStack_80 = &UNK_004281d8;
    uVar5 = func_0x0032eb30(uVar5,&UNK_0017a3cb,0x13);
    ppppppplVar6 = (long *******)&UNK_0015ae05;
    puStack_80 = &UNK_004281ec;
    func_0x0032eb30(uVar5,&UNK_0015ae05,1);
    puStack_80 = &UNK_004281f4;
    ppppppplVar7 = unaff_R14;
    _ZN7android4base10LogMessageD2Ev();
    unaff_RBX = param_5;
  }
  if (lStack_70 == 0) {
    unaff_R14 = (long *******)&ppppppplStack_50;
    puStack_80 = &UNK_0042822d;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (unaff_R14,&UNK_0015fda6,0x101,6,0,0xffffffff);
    puStack_80 = &UNK_00428235;
    uVar5 = _ZN7android4base10LogMessage6streamEv(unaff_R14);
    puStack_80 = &UNK_00428249;
    uVar5 = func_0x0032eb30(uVar5,&UNK_0015ca76,0x14);
    ppppppplVar6 = (long *******)&UNK_0015ae05;
    puStack_80 = &UNK_0042825d;
    func_0x0032eb30(uVar5,&UNK_0015ae05,1);
    puStack_80 = &UNK_00428265;
    ppppppplVar7 = unaff_R14;
    _ZN7android4base10LogMessageD2Ev();
    unaff_RBX = param_5;
  }
  if (param_5 == (long *******)0x0) {
    unaff_R14 = (long *******)&ppppppplStack_50;
    puStack_80 = &UNK_0042829a;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (unaff_R14,&UNK_0015fda6,0x102,6,0,0xffffffff);
    puStack_80 = &UNK_004282a2;
    uVar5 = _ZN7android4base10LogMessage6streamEv(unaff_R14);
    puStack_80 = &UNK_004282b6;
    uVar5 = func_0x0032eb30(uVar5,&UNK_00184bd2,0x14);
    ppppppplVar6 = (long *******)&UNK_0015ae05;
    puStack_80 = &UNK_004282ca;
    func_0x0032eb30(uVar5,&UNK_0015ae05,1);
    puStack_80 = &UNK_004282d2;
    ppppppplVar7 = unaff_R14;
    _ZN7android4base10LogMessageD2Ev();
    unaff_RBX = param_5;
  }
  if (param_3 == (long *******)0x0) {
    do {
      puStack_80 = &UNK_00428322;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&ppppppplStack_50,&UNK_0015fda6,0x103,6,0,0xffffffff);
      puStack_80 = &UNK_0042832a;
      uVar5 = _ZN7android4base10LogMessage6streamEv(&ppppppplStack_50);
      puStack_80 = &UNK_0042833e;
      uVar5 = func_0x0032eb30(uVar5,&UNK_00165d45,0xe);
      puStack_80 = &UNK_00428352;
      uVar5 = func_0x0032eb30(uVar5,&UNK_001837b0,5);
      puStack_80 = &UNK_00428362;
      uVar5 = func_0x0032eb30(uVar5,&UNK_0015ae05,1);
      puStack_80 = &UNK_00428376;
      uVar5 = func_0x0032eb30(uVar5,&UNK_00163098,1);
      puStack_80 = &UNK_00428386;
      uVar5 = func_0x0032eb30(uVar5,&UNK_0015ae05,1);
      puStack_80 = &UNK_0042839a;
      uVar5 = func_0x0032eb30(uVar5,&UNK_0015980b,2);
      puStack_80 = &UNK_004283aa;
      uVar5 = func_0x0032eb30(uVar5,&UNK_0015fdd9,8);
      puStack_80 = &UNK_004283b4;
      uVar5 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar5,0);
      puStack_80 = &UNK_004283c4;
      uVar5 = func_0x0032eb30(uVar5,&UNK_00189813,5);
      puStack_80 = &UNK_004283ce;
      uVar5 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj(uVar5,0);
      puStack_80 = &UNK_004283de;
      func_0x0032eb30(uVar5,&UNK_0017b788,2);
      puStack_80 = &UNK_004283e6;
      _ZN7android4base10LogMessageD2Ev(&ppppppplStack_50);
    } while( true );
  }
  ppppppplStack_78 = param_5;
  if ((long)param_3 < 0) {
    puStack_80 = &UNK_004283f0;
    func_0x00330ca0();
  }
  else {
    puStack_80 = &UNK_0042806a;
    unaff_R14 = (long *******)_Znwm(param_3);
    puStack_80 = &UNK_00428089;
    ppppppplStack_50 = unaff_R14;
    puStack_40 = (undefined *)((long)param_3 + (long)unaff_R14);
    func_0x0099bda0(unaff_R14,param_2);
    ppppppplStack_68 = (long *******)0x0;
    ppppppplStack_60 = (long *******)0x0;
    lStack_58 = 0;
    puStack_80 = &UNK_004280ac;
    puStack_48 = (undefined *)((long)param_3 + (long)unaff_R14);
    _ZN14PairingAuthCtx7EncryptERKNSt3__16vectorIhNS0_9allocatorIhEEEE
              (&ppppppplStack_68,param_1,&ppppppplStack_50);
    ppppppplVar6 = ppppppplStack_60;
    param_1 = ppppppplStack_68;
    if (ppppppplStack_68 == ppppppplStack_60) {
      if (ppppppplStack_68 != (long *******)0x0) goto code_r0x004280dc;
    }
    else {
      param_2 = (long *******)((long)ppppppplStack_60 - (long)ppppppplStack_68);
      puStack_80 = &UNK_004280ce;
      func_0x0099bda0(lStack_70,ppppppplStack_68,param_2);
      *ppppppplStack_78 = (long ******)param_2;
code_r0x004280dc:
      puStack_80 = &UNK_004280eb;
      _ZdaPvSt11align_val_t(param_1,lStack_58 - (long)param_1);
    }
    ppppppplVar8 = (long *******)CONCAT71((int7)((ulong)ppppppplVar6 >> 8),param_1 != ppppppplVar6);
    puStack_80 = &UNK_004280fd;
    ppppppplVar6 = param_3;
    ppppppplVar7 = unaff_R14;
    _ZdaPvSt11align_val_t();
    unaff_RBX = param_3;
    param_3 = ppppppplVar8;
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
      return (ulong)ppppppplVar8 & 0xffffffff;
    }
  }
  puStack_80 = &UNK_004283f5;
  func_0x0099bd00();
  lStack_b0 = *(long *)(in_FS_OFFSET + 0x28);
  ppppppplStack_a8 = unaff_RBX;
  ppppppplStack_a0 = param_1;
  ppppppplStack_98 = param_2;
  ppppppplStack_90 = unaff_R14;
  ppppppplStack_88 = param_3;
  puStack_80 = &stack0xfffffffffffffff8;
  if (ppppppplVar7 == (long *******)0x0) {
    param_5 = (long *******)0x0;
    apcStack_c8[0] = (code *)&UNK_00428491;
    puStack_80 = &stack0xfffffffffffffff8;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (&pppppplStack_b8,&UNK_0015fda6,0x111,6,0,0xffffffff);
    apcStack_c8[0] = (code *)&UNK_00428499;
    uVar5 = _ZN7android4base10LogMessage6streamEv(&pppppplStack_b8);
    apcStack_c8[0] = (code *)&UNK_004284ad;
    uVar5 = func_0x0032eb30(uVar5,&UNK_001725c2,0x11);
    apcStack_c8[0] = (code *)&UNK_004284c1;
    func_0x0032eb30(uVar5,&UNK_0015ae05,1);
    apcStack_c8[0] = (code *)&UNK_004284c9;
    _ZN7android4base10LogMessageD2Ev(&pppppplStack_b8);
    unaff_RBX = &pppppplStack_b8;
    param_1 = extraout_RDX;
    param_3 = ppppppplVar6;
    unaff_R14 = ppppppplVar7;
  }
  if (ppppppplVar6 == (long *******)0x0) {
    unaff_RBX = &pppppplStack_b8;
    param_5 = (long *******)0x0;
    apcStack_c8[0] = (code *)&UNK_00428507;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (unaff_RBX,&UNK_0015fda6,0x112,6,0,0xffffffff);
    apcStack_c8[0] = (code *)&UNK_0042850f;
    uVar5 = _ZN7android4base10LogMessage6streamEv(unaff_RBX);
    apcStack_c8[0] = (code *)&UNK_00428523;
    uVar5 = func_0x0032eb30(uVar5,&UNK_00167dd5,0x11);
    apcStack_c8[0] = (code *)&UNK_00428537;
    func_0x0032eb30(uVar5,&UNK_0015ae05,1);
    apcStack_c8[0] = (code *)&UNK_0042853f;
    _ZN7android4base10LogMessageD2Ev(unaff_RBX);
    unaff_R14 = ppppppplVar7;
    param_3 = extraout_RDX;
  }
  if (extraout_RDX == (long *******)0x0) {
    do {
      apcStack_c8[0] = (code *)&UNK_00428592;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&pppppplStack_b8,&UNK_0015fda6,0x113,6,0,0xffffffff);
      apcStack_c8[0] = (code *)&UNK_0042859a;
      uVar5 = _ZN7android4base10LogMessage6streamEv(&pppppplStack_b8);
      apcStack_c8[0] = (code *)&UNK_004285ae;
      uVar5 = func_0x0032eb30(uVar5,&UNK_00165d45,0xe);
      apcStack_c8[0] = (code *)&UNK_004285c2;
      uVar5 = func_0x0032eb30(uVar5,&UNK_001596b0,3);
      apcStack_c8[0] = (code *)&UNK_004285d2;
      uVar5 = func_0x0032eb30(uVar5,&UNK_0015ae05,1);
      apcStack_c8[0] = (code *)&UNK_004285e6;
      uVar5 = func_0x0032eb30(uVar5,&UNK_00163098,1);
      apcStack_c8[0] = (code *)&UNK_004285f6;
      uVar5 = func_0x0032eb30(uVar5,&UNK_0015ae05,1);
      apcStack_c8[0] = (code *)&UNK_0042860a;
      uVar5 = func_0x0032eb30(uVar5,&UNK_0015980b,2);
      apcStack_c8[0] = (code *)&UNK_0042861a;
      uVar5 = func_0x0032eb30(uVar5,&UNK_00181bbd,6);
      apcStack_c8[0] = (code *)&UNK_00428624;
      uVar5 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar5,0);
      apcStack_c8[0] = (code *)&UNK_00428634;
      uVar5 = func_0x0032eb30(uVar5,&UNK_00189813,5);
      apcStack_c8[0] = (code *)&UNK_0042863e;
      uVar5 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj(uVar5,0);
      apcStack_c8[0] = (code *)&UNK_0042864e;
      func_0x0032eb30(uVar5,&UNK_0017b788,2);
      apcStack_c8[0] = (code *)&UNK_00428656;
      _ZN7android4base10LogMessageD2Ev(&pppppplStack_b8);
    } while( true );
  }
  apcStack_c8[0] = (code *)&UNK_0042843d;
  ppppppplVar6 = extraout_RDX;
  uVar4 = _ZN14PairingAuthCtx17SafeDecryptedSizeEm();
  lStack_130 = *(long *)(in_FS_OFFSET + 0x28);
  if (lStack_130 == lStack_b0) {
    return uVar4;
  }
  apcStack_c8[0] = pairing_auth_decrypt;
  func_0x0099bd00();
  lStack_f8 = *(long *)(in_FS_OFFSET + 0x28);
  ppppppplVar8 = ppppppplVar7;
  ppppppplStack_f0 = unaff_RBX;
  ppppppplStack_e8 = param_1;
  ppppppplStack_e0 = param_2;
  ppppppplStack_d8 = unaff_R14;
  ppppppplStack_d0 = param_3;
  apcStack_c8[0] = (code *)&puStack_80;
  if (ppppppplVar7 == (long *******)0x0) {
    puStack_140 = &UNK_004287ab;
    apcStack_c8[0] = (code *)&puStack_80;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (&ppppppplStack_110,&UNK_0015fda6,0x11a,6,0,0xffffffff);
    puStack_140 = &UNK_004287b3;
    uVar5 = _ZN7android4base10LogMessage6streamEv(&ppppppplStack_110);
    puStack_140 = &UNK_004287c7;
    uVar5 = func_0x0032eb30(uVar5,&UNK_001725c2,0x11);
    puStack_140 = &UNK_004287db;
    func_0x0032eb30(uVar5,&UNK_0015ae05,1);
    puStack_140 = &UNK_004287e3;
    ppppppplVar8 = (long *******)&ppppppplStack_110;
    _ZN7android4base10LogMessageD2Ev();
    unaff_R14 = (long *******)&ppppppplStack_110;
    unaff_RBX = param_5;
  }
  if (ppppppplVar6 == (long *******)0x0) {
    unaff_R14 = (long *******)&ppppppplStack_110;
    puStack_140 = &UNK_0042881c;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (unaff_R14,&UNK_0015fda6,0x11b,6,0,0xffffffff);
    puStack_140 = &UNK_00428824;
    uVar5 = _ZN7android4base10LogMessage6streamEv(unaff_R14);
    puStack_140 = &UNK_00428838;
    uVar5 = func_0x0032eb30(uVar5,&UNK_0017a3cb,0x13);
    puStack_140 = &UNK_0042884c;
    func_0x0032eb30(uVar5,&UNK_0015ae05,1);
    puStack_140 = &UNK_00428854;
    ppppppplVar8 = unaff_R14;
    _ZN7android4base10LogMessageD2Ev();
    unaff_RBX = param_5;
  }
  if (lStack_130 == 0) {
    unaff_R14 = (long *******)&ppppppplStack_110;
    puStack_140 = &UNK_0042888d;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (unaff_R14,&UNK_0015fda6,0x11c,6,0,0xffffffff);
    puStack_140 = &UNK_00428895;
    uVar5 = _ZN7android4base10LogMessage6streamEv(unaff_R14);
    puStack_140 = &UNK_004288a9;
    uVar5 = func_0x0032eb30(uVar5,&UNK_0015ca76,0x14);
    puStack_140 = &UNK_004288bd;
    func_0x0032eb30(uVar5,&UNK_0015ae05,1);
    puStack_140 = &UNK_004288c5;
    ppppppplVar8 = unaff_R14;
    _ZN7android4base10LogMessageD2Ev();
    unaff_RBX = param_5;
  }
  if (param_5 == (long *******)0x0) {
    unaff_R14 = (long *******)&ppppppplStack_110;
    puStack_140 = &UNK_004288fa;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (unaff_R14,&UNK_0015fda6,0x11d,6,0,0xffffffff);
    puStack_140 = &UNK_00428902;
    uVar5 = _ZN7android4base10LogMessage6streamEv(unaff_R14);
    puStack_140 = &UNK_00428916;
    uVar5 = func_0x0032eb30(uVar5,&UNK_00184bd2,0x14);
    puStack_140 = &UNK_0042892a;
    func_0x0032eb30(uVar5,&UNK_0015ae05,1);
    puStack_140 = &UNK_00428932;
    ppppppplVar8 = unaff_R14;
    _ZN7android4base10LogMessageD2Ev();
    unaff_RBX = param_5;
  }
  if (extraout_RDX_00 == (long *******)0x0) {
    do {
      puStack_140 = &UNK_00428982;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&ppppppplStack_110,&UNK_0015fda6,0x11e,6,0,0xffffffff);
      puStack_140 = &UNK_0042898a;
      uVar5 = _ZN7android4base10LogMessage6streamEv(&ppppppplStack_110);
      puStack_140 = &UNK_0042899e;
      uVar5 = func_0x0032eb30(uVar5,&UNK_00165d45,0xe);
      puStack_140 = &UNK_004289b2;
      uVar5 = func_0x0032eb30(uVar5,&UNK_001837b0,5);
      puStack_140 = &UNK_004289c2;
      uVar5 = func_0x0032eb30(uVar5,&UNK_0015ae05,1);
      puStack_140 = &UNK_004289d6;
      uVar5 = func_0x0032eb30(uVar5,&UNK_00163098,1);
      puStack_140 = &UNK_004289e6;
      uVar5 = func_0x0032eb30(uVar5,&UNK_0015ae05,1);
      puStack_140 = &UNK_004289fa;
      uVar5 = func_0x0032eb30(uVar5,&UNK_0015980b,2);
      puStack_140 = &UNK_00428a0a;
      uVar5 = func_0x0032eb30(uVar5,&UNK_0015fdd9,8);
      puStack_140 = &UNK_00428a14;
      uVar5 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar5,0);
      puStack_140 = &UNK_00428a24;
      uVar5 = func_0x0032eb30(uVar5,&UNK_00189813,5);
      puStack_140 = &UNK_00428a2e;
      uVar5 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj(uVar5,0);
      puStack_140 = &UNK_00428a3e;
      func_0x0032eb30(uVar5,&UNK_0017b788,2);
      puStack_140 = &UNK_00428a46;
      _ZN7android4base10LogMessageD2Ev(&ppppppplStack_110);
    } while( true );
  }
  ppppppplStack_138 = param_5;
  if ((long)extraout_RDX_00 < 0) {
    puStack_140 = &UNK_00428a50;
    func_0x00330ca0();
    goto code_r0x00428a50;
  }
  puStack_140 = &UNK_004286ca;
  unaff_R14 = (long *******)_Znwm(extraout_RDX_00);
  puStack_140 = &UNK_004286e9;
  ppppppplStack_110 = unaff_R14;
  puStack_100 = (undefined *)((long)extraout_RDX_00 + (long)unaff_R14);
  func_0x0099bda0(unaff_R14,ppppppplVar6);
  lStack_128 = 0;
  lStack_120 = 0;
  lStack_118 = 0;
  puStack_140 = &UNK_0042870c;
  puStack_108 = (undefined *)((long)extraout_RDX_00 + (long)unaff_R14);
  _ZN14PairingAuthCtx7DecryptERKNSt3__16vectorIhNS0_9allocatorIhEEEE
            (&lStack_128,ppppppplVar7,&ppppppplStack_110);
  lVar3 = lStack_120;
  lVar2 = lStack_128;
  if (lStack_128 == lStack_120) {
    if (lStack_128 != 0) goto code_r0x0042873c;
  }
  else {
    pppppplVar9 = (long ******)(lStack_120 - lStack_128);
    puStack_140 = &UNK_0042872e;
    func_0x0099bda0(lStack_130,lStack_128,pppppplVar9);
    *ppppppplStack_138 = pppppplVar9;
code_r0x0042873c:
    puStack_140 = &UNK_0042874b;
    _ZdaPvSt11align_val_t(lVar2,lStack_118 - lVar2);
  }
  puStack_140 = &UNK_0042875d;
  ppppppplVar8 = unaff_R14;
  _ZdaPvSt11align_val_t(unaff_R14,extraout_RDX_00);
  unaff_RBX = extraout_RDX_00;
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_f8) {
    return CONCAT71((int7)((ulong)lVar3 >> 8),lVar2 != lVar3) & 0xffffffff;
  }
code_r0x00428a50:
  puStack_140 = &UNK_00428a55;
  func_0x0099bd00();
  uStack_158 = *(ulong *)(in_FS_OFFSET + 0x28);
  ppppppplStack_150 = unaff_RBX;
  ppppppplStack_148 = unaff_R14;
  if (ppppppplVar8 == (long *******)0x0) {
    puStack_140 = (undefined *)apcStack_c8;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (auStack_160,&UNK_0015fda6,300,6,0,0xffffffff);
    uVar5 = _ZN7android4base10LogMessage6streamEv(auStack_160);
    uVar5 = func_0x0032eb30(uVar5,&UNK_001725c2,0x11);
    func_0x0032eb30(uVar5,&UNK_0015ae05,1);
    _ZN7android4base10LogMessageD2Ev(auStack_160);
    if (*(ulong *)(in_FS_OFFSET + 0x28) == uStack_158) {
      return *(ulong *)(in_FS_OFFSET + 0x28);
    }
  }
  else {
    pppppplVar9 = ppppppplVar8[5];
    ppppppplVar8[5] = (long ******)0x0;
    puStack_140 = (undefined *)apcStack_c8;
    if (pppppplVar9 != (long ******)0x0) {
      puStack_140 = (undefined *)apcStack_c8;
      EVP_AEAD_CTX_cleanup(pppppplVar9);
      _ZdaPvSt11align_val_t(pppppplVar9,0x250);
    }
    pppppplVar9 = ppppppplVar8[4];
    ppppppplVar8[4] = (long ******)0x0;
    if (pppppplVar9 != (long ******)0x0) {
      SPAKE2_CTX_free();
    }
    pppppplVar9 = *ppppppplVar8;
    if (pppppplVar9 != (long ******)0x0) {
      ppppppplVar8[1] = pppppplVar9;
      _ZdaPvSt11align_val_t(pppppplVar9,(long)ppppppplVar8[2] - (long)pppppplVar9);
    }
    if (*(ulong *)(in_FS_OFFSET + 0x28) == uStack_158) {
      uVar4 = free(ppppppplVar8,0x30);
      return uVar4;
    }
  }
  func_0x0099bd00();
  pcVar1 = (code *)swi(3);
  uVar4 = (*pcVar1)();
  return uVar4;
}


