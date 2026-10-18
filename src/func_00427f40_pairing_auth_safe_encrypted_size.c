// Function: pairing_auth_safe_encrypted_size
// Address: 00427f40
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Type propagation algorithm not settling */

ulong pairing_auth_safe_encrypted_size
                (long *******param_1,long *******param_2,undefined8 param_3,undefined8 param_4,
                long *******param_5)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *******extraout_RDX;
  long *******extraout_RDX_00;
  long *******extraout_RDX_01;
  long *******unaff_RBX;
  long *******ppppppplVar6;
  long *******ppppppplVar7;
  long *******ppppppplVar8;
  long ******pppppplVar9;
  long *******unaff_R14;
  long *******ppppppplVar10;
  long in_FS_OFFSET;
  undefined1 auStack_198 [8];
  ulong uStack_190;
  long *******ppppppplStack_188;
  long *******ppppppplStack_180;
  undefined *puStack_178;
  long *******ppppppplStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long *******ppppppplStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  long lStack_130;
  long *******ppppppplStack_128;
  long *******ppppppplStack_120;
  long *******ppppppplStack_118;
  long *******ppppppplStack_110;
  long *******ppppppplStack_108;
  code *apcStack_100 [2];
  long ******pppppplStack_f0;
  long lStack_e8;
  long *******ppppppplStack_e0;
  long *******ppppppplStack_d8;
  long *******ppppppplStack_d0;
  long *******ppppppplStack_c8;
  long *******ppppppplStack_c0;
  undefined *puStack_b8;
  long *******ppppppplStack_b0;
  long lStack_a8;
  long *******ppppppplStack_a0;
  long *******ppppppplStack_98;
  long lStack_90;
  long *******ppppppplStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  long *******ppppppplStack_68;
  undefined *apuStack_40 [2];
  long ******pppppplStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (long *******)0x0) {
    unaff_RBX = &pppppplStack_30;
    param_5 = (long *******)0x0;
    apuStack_40[0] = &UNK_00427fad;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (unaff_RBX,&UNK_0015fda6,0xf9,6,0,0xffffffff);
    apuStack_40[0] = &UNK_00427fb5;
    uVar5 = _ZN7android4base10LogMessage6streamEv(unaff_RBX);
    apuStack_40[0] = &UNK_00427fc9;
    uVar5 = func_0x0032eb30(uVar5,&UNK_001725c2,0x11);
    apuStack_40[0] = &UNK_00427fdd;
    func_0x0032eb30(uVar5,&UNK_0015ae05,1);
    apuStack_40[0] = &UNK_00427fe5;
    _ZN7android4base10LogMessageD2Ev(unaff_RBX);
    unaff_R14 = param_1;
  }
  apuStack_40[0] = &UNK_00427f64;
  uVar4 = _ZN14PairingAuthCtx17SafeEncryptedSizeEm();
  lStack_a8 = *(long *)(in_FS_OFFSET + 0x28);
  if (lStack_a8 == lStack_28) {
    return uVar4;
  }
  apuStack_40[0] = &UNK_00427ff5;
  func_0x0099bd00();
  lStack_70 = *(long *)(in_FS_OFFSET + 0x28);
  ppppppplVar6 = param_2;
  ppppppplVar7 = param_1;
  ppppppplStack_68 = unaff_RBX;
  apuStack_40[0] = &stack0xfffffffffffffff8;
  if (param_1 == (long *******)0x0) {
    unaff_R14 = (long *******)&ppppppplStack_88;
    puStack_b8 = &UNK_0042814b;
    apuStack_40[0] = &stack0xfffffffffffffff8;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (unaff_R14,&UNK_0015fda6,0xff,6,0,0xffffffff);
    puStack_b8 = &UNK_00428153;
    uVar5 = _ZN7android4base10LogMessage6streamEv(unaff_R14);
    puStack_b8 = &UNK_00428167;
    uVar5 = func_0x0032eb30(uVar5,&UNK_001725c2,0x11);
    ppppppplVar6 = (long *******)&UNK_0015ae05;
    puStack_b8 = &UNK_0042817b;
    func_0x0032eb30(uVar5,&UNK_0015ae05,1);
    puStack_b8 = &UNK_00428183;
    ppppppplVar7 = unaff_R14;
    _ZN7android4base10LogMessageD2Ev();
    unaff_RBX = param_5;
  }
  if (param_2 == (long *******)0x0) {
    unaff_R14 = (long *******)&ppppppplStack_88;
    puStack_b8 = &UNK_004281bc;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (unaff_R14,&UNK_0015fda6,0x100,6,0,0xffffffff);
    puStack_b8 = &UNK_004281c4;
    uVar5 = _ZN7android4base10LogMessage6streamEv(unaff_R14);
    puStack_b8 = &UNK_004281d8;
    uVar5 = func_0x0032eb30(uVar5,&UNK_0017a3cb,0x13);
    ppppppplVar6 = (long *******)&UNK_0015ae05;
    puStack_b8 = &UNK_004281ec;
    func_0x0032eb30(uVar5,&UNK_0015ae05,1);
    puStack_b8 = &UNK_004281f4;
    ppppppplVar7 = unaff_R14;
    _ZN7android4base10LogMessageD2Ev();
    unaff_RBX = param_5;
  }
  if (lStack_a8 == 0) {
    unaff_R14 = (long *******)&ppppppplStack_88;
    puStack_b8 = &UNK_0042822d;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (unaff_R14,&UNK_0015fda6,0x101,6,0,0xffffffff);
    puStack_b8 = &UNK_00428235;
    uVar5 = _ZN7android4base10LogMessage6streamEv(unaff_R14);
    puStack_b8 = &UNK_00428249;
    uVar5 = func_0x0032eb30(uVar5,&UNK_0015ca76,0x14);
    ppppppplVar6 = (long *******)&UNK_0015ae05;
    puStack_b8 = &UNK_0042825d;
    func_0x0032eb30(uVar5,&UNK_0015ae05,1);
    puStack_b8 = &UNK_00428265;
    ppppppplVar7 = unaff_R14;
    _ZN7android4base10LogMessageD2Ev();
    unaff_RBX = param_5;
  }
  if (param_5 == (long *******)0x0) {
    unaff_R14 = (long *******)&ppppppplStack_88;
    puStack_b8 = &UNK_0042829a;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (unaff_R14,&UNK_0015fda6,0x102,6,0,0xffffffff);
    puStack_b8 = &UNK_004282a2;
    uVar5 = _ZN7android4base10LogMessage6streamEv(unaff_R14);
    puStack_b8 = &UNK_004282b6;
    uVar5 = func_0x0032eb30(uVar5,&UNK_00184bd2,0x14);
    ppppppplVar6 = (long *******)&UNK_0015ae05;
    puStack_b8 = &UNK_004282ca;
    func_0x0032eb30(uVar5,&UNK_0015ae05,1);
    puStack_b8 = &UNK_004282d2;
    ppppppplVar7 = unaff_R14;
    _ZN7android4base10LogMessageD2Ev();
    unaff_RBX = param_5;
  }
  if (extraout_RDX == (long *******)0x0) {
    do {
      puStack_b8 = &UNK_00428322;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&ppppppplStack_88,&UNK_0015fda6,0x103,6,0,0xffffffff);
      puStack_b8 = &UNK_0042832a;
      uVar5 = _ZN7android4base10LogMessage6streamEv(&ppppppplStack_88);
      puStack_b8 = &UNK_0042833e;
      uVar5 = func_0x0032eb30(uVar5,&UNK_00165d45,0xe);
      puStack_b8 = &UNK_00428352;
      uVar5 = func_0x0032eb30(uVar5,&UNK_001837b0,5);
      puStack_b8 = &UNK_00428362;
      uVar5 = func_0x0032eb30(uVar5,&UNK_0015ae05,1);
      puStack_b8 = &UNK_00428376;
      uVar5 = func_0x0032eb30(uVar5,&UNK_00163098,1);
      puStack_b8 = &UNK_00428386;
      uVar5 = func_0x0032eb30(uVar5,&UNK_0015ae05,1);
      puStack_b8 = &UNK_0042839a;
      uVar5 = func_0x0032eb30(uVar5,&UNK_0015980b,2);
      puStack_b8 = &UNK_004283aa;
      uVar5 = func_0x0032eb30(uVar5,&UNK_0015fdd9,8);
      puStack_b8 = &UNK_004283b4;
      uVar5 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar5,0);
      puStack_b8 = &UNK_004283c4;
      uVar5 = func_0x0032eb30(uVar5,&UNK_00189813,5);
      puStack_b8 = &UNK_004283ce;
      uVar5 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj(uVar5,0);
      puStack_b8 = &UNK_004283de;
      func_0x0032eb30(uVar5,&UNK_0017b788,2);
      puStack_b8 = &UNK_004283e6;
      _ZN7android4base10LogMessageD2Ev(&ppppppplStack_88);
    } while( true );
  }
  ppppppplStack_b0 = param_5;
  if ((long)extraout_RDX < 0) {
    puStack_b8 = &UNK_004283f0;
    func_0x00330ca0();
    ppppppplVar10 = extraout_RDX;
  }
  else {
    puStack_b8 = &UNK_0042806a;
    unaff_R14 = (long *******)_Znwm(extraout_RDX);
    puStack_b8 = &UNK_00428089;
    ppppppplStack_88 = unaff_R14;
    puStack_78 = (undefined *)((long)extraout_RDX + (long)unaff_R14);
    func_0x0099bda0(unaff_R14,param_2);
    ppppppplStack_a0 = (long *******)0x0;
    ppppppplStack_98 = (long *******)0x0;
    lStack_90 = 0;
    puStack_b8 = &UNK_004280ac;
    puStack_80 = (undefined *)((long)extraout_RDX + (long)unaff_R14);
    _ZN14PairingAuthCtx7EncryptERKNSt3__16vectorIhNS0_9allocatorIhEEEE
              (&ppppppplStack_a0,param_1,&ppppppplStack_88);
    ppppppplVar6 = ppppppplStack_98;
    param_1 = ppppppplStack_a0;
    if (ppppppplStack_a0 == ppppppplStack_98) {
      if (ppppppplStack_a0 != (long *******)0x0) goto code_r0x004280dc;
    }
    else {
      param_2 = (long *******)((long)ppppppplStack_98 - (long)ppppppplStack_a0);
      puStack_b8 = &UNK_004280ce;
      func_0x0099bda0(lStack_a8,ppppppplStack_a0,param_2);
      *ppppppplStack_b0 = (long ******)param_2;
code_r0x004280dc:
      puStack_b8 = &UNK_004280eb;
      _ZdaPvSt11align_val_t(param_1,lStack_90 - (long)param_1);
    }
    ppppppplVar10 = (long *******)CONCAT71((int7)((ulong)ppppppplVar6 >> 8),param_1 != ppppppplVar6)
    ;
    puStack_b8 = &UNK_004280fd;
    ppppppplVar6 = extraout_RDX;
    ppppppplVar7 = unaff_R14;
    _ZdaPvSt11align_val_t();
    unaff_RBX = extraout_RDX;
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_70) {
      return (ulong)ppppppplVar10 & 0xffffffff;
    }
  }
  puStack_b8 = &UNK_004283f5;
  func_0x0099bd00();
  lStack_e8 = *(long *)(in_FS_OFFSET + 0x28);
  ppppppplStack_e0 = unaff_RBX;
  ppppppplStack_d8 = param_1;
  ppppppplStack_d0 = param_2;
  ppppppplStack_c8 = unaff_R14;
  ppppppplStack_c0 = ppppppplVar10;
  puStack_b8 = (undefined *)apuStack_40;
  if (ppppppplVar7 == (long *******)0x0) {
    param_5 = (long *******)0x0;
    apcStack_100[0] = (code *)&UNK_00428491;
    puStack_b8 = (undefined *)apuStack_40;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (&pppppplStack_f0,&UNK_0015fda6,0x111,6,0,0xffffffff);
    apcStack_100[0] = (code *)&UNK_00428499;
    uVar5 = _ZN7android4base10LogMessage6streamEv(&pppppplStack_f0);
    apcStack_100[0] = (code *)&UNK_004284ad;
    uVar5 = func_0x0032eb30(uVar5,&UNK_001725c2,0x11);
    apcStack_100[0] = (code *)&UNK_004284c1;
    func_0x0032eb30(uVar5,&UNK_0015ae05,1);
    apcStack_100[0] = (code *)&UNK_004284c9;
    _ZN7android4base10LogMessageD2Ev(&pppppplStack_f0);
    unaff_RBX = &pppppplStack_f0;
    param_1 = extraout_RDX_00;
    ppppppplVar10 = ppppppplVar6;
    unaff_R14 = ppppppplVar7;
  }
  if (ppppppplVar6 == (long *******)0x0) {
    unaff_RBX = &pppppplStack_f0;
    param_5 = (long *******)0x0;
    apcStack_100[0] = (code *)&UNK_00428507;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (unaff_RBX,&UNK_0015fda6,0x112,6,0,0xffffffff);
    apcStack_100[0] = (code *)&UNK_0042850f;
    uVar5 = _ZN7android4base10LogMessage6streamEv(unaff_RBX);
    apcStack_100[0] = (code *)&UNK_00428523;
    uVar5 = func_0x0032eb30(uVar5,&UNK_00167dd5,0x11);
    apcStack_100[0] = (code *)&UNK_00428537;
    func_0x0032eb30(uVar5,&UNK_0015ae05,1);
    apcStack_100[0] = (code *)&UNK_0042853f;
    _ZN7android4base10LogMessageD2Ev(unaff_RBX);
    unaff_R14 = ppppppplVar7;
    ppppppplVar10 = extraout_RDX_00;
  }
  if (extraout_RDX_00 == (long *******)0x0) {
    do {
      apcStack_100[0] = (code *)&UNK_00428592;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&pppppplStack_f0,&UNK_0015fda6,0x113,6,0,0xffffffff);
      apcStack_100[0] = (code *)&UNK_0042859a;
      uVar5 = _ZN7android4base10LogMessage6streamEv(&pppppplStack_f0);
      apcStack_100[0] = (code *)&UNK_004285ae;
      uVar5 = func_0x0032eb30(uVar5,&UNK_00165d45,0xe);
      apcStack_100[0] = (code *)&UNK_004285c2;
      uVar5 = func_0x0032eb30(uVar5,&UNK_001596b0,3);
      apcStack_100[0] = (code *)&UNK_004285d2;
      uVar5 = func_0x0032eb30(uVar5,&UNK_0015ae05,1);
      apcStack_100[0] = (code *)&UNK_004285e6;
      uVar5 = func_0x0032eb30(uVar5,&UNK_00163098,1);
      apcStack_100[0] = (code *)&UNK_004285f6;
      uVar5 = func_0x0032eb30(uVar5,&UNK_0015ae05,1);
      apcStack_100[0] = (code *)&UNK_0042860a;
      uVar5 = func_0x0032eb30(uVar5,&UNK_0015980b,2);
      apcStack_100[0] = (code *)&UNK_0042861a;
      uVar5 = func_0x0032eb30(uVar5,&UNK_00181bbd,6);
      apcStack_100[0] = (code *)&UNK_00428624;
      uVar5 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar5,0);
      apcStack_100[0] = (code *)&UNK_00428634;
      uVar5 = func_0x0032eb30(uVar5,&UNK_00189813,5);
      apcStack_100[0] = (code *)&UNK_0042863e;
      uVar5 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj(uVar5,0);
      apcStack_100[0] = (code *)&UNK_0042864e;
      func_0x0032eb30(uVar5,&UNK_0017b788,2);
      apcStack_100[0] = (code *)&UNK_00428656;
      _ZN7android4base10LogMessageD2Ev(&pppppplStack_f0);
    } while( true );
  }
  apcStack_100[0] = (code *)&UNK_0042843d;
  ppppppplVar6 = extraout_RDX_00;
  uVar4 = _ZN14PairingAuthCtx17SafeDecryptedSizeEm();
  lStack_168 = *(long *)(in_FS_OFFSET + 0x28);
  if (lStack_168 == lStack_e8) {
    return uVar4;
  }
  apcStack_100[0] = pairing_auth_decrypt;
  func_0x0099bd00();
  lStack_130 = *(long *)(in_FS_OFFSET + 0x28);
  ppppppplVar8 = ppppppplVar7;
  ppppppplStack_128 = unaff_RBX;
  ppppppplStack_120 = param_1;
  ppppppplStack_118 = param_2;
  ppppppplStack_110 = unaff_R14;
  ppppppplStack_108 = ppppppplVar10;
  apcStack_100[0] = (code *)&puStack_b8;
  if (ppppppplVar7 == (long *******)0x0) {
    puStack_178 = &UNK_004287ab;
    apcStack_100[0] = (code *)&puStack_b8;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (&ppppppplStack_148,&UNK_0015fda6,0x11a,6,0,0xffffffff);
    puStack_178 = &UNK_004287b3;
    uVar5 = _ZN7android4base10LogMessage6streamEv(&ppppppplStack_148);
    puStack_178 = &UNK_004287c7;
    uVar5 = func_0x0032eb30(uVar5,&UNK_001725c2,0x11);
    puStack_178 = &UNK_004287db;
    func_0x0032eb30(uVar5,&UNK_0015ae05,1);
    puStack_178 = &UNK_004287e3;
    ppppppplVar8 = (long *******)&ppppppplStack_148;
    _ZN7android4base10LogMessageD2Ev();
    unaff_R14 = (long *******)&ppppppplStack_148;
    unaff_RBX = param_5;
  }
  if (ppppppplVar6 == (long *******)0x0) {
    unaff_R14 = (long *******)&ppppppplStack_148;
    puStack_178 = &UNK_0042881c;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (unaff_R14,&UNK_0015fda6,0x11b,6,0,0xffffffff);
    puStack_178 = &UNK_00428824;
    uVar5 = _ZN7android4base10LogMessage6streamEv(unaff_R14);
    puStack_178 = &UNK_00428838;
    uVar5 = func_0x0032eb30(uVar5,&UNK_0017a3cb,0x13);
    puStack_178 = &UNK_0042884c;
    func_0x0032eb30(uVar5,&UNK_0015ae05,1);
    puStack_178 = &UNK_00428854;
    ppppppplVar8 = unaff_R14;
    _ZN7android4base10LogMessageD2Ev();
    unaff_RBX = param_5;
  }
  if (lStack_168 == 0) {
    unaff_R14 = (long *******)&ppppppplStack_148;
    puStack_178 = &UNK_0042888d;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (unaff_R14,&UNK_0015fda6,0x11c,6,0,0xffffffff);
    puStack_178 = &UNK_00428895;
    uVar5 = _ZN7android4base10LogMessage6streamEv(unaff_R14);
    puStack_178 = &UNK_004288a9;
    uVar5 = func_0x0032eb30(uVar5,&UNK_0015ca76,0x14);
    puStack_178 = &UNK_004288bd;
    func_0x0032eb30(uVar5,&UNK_0015ae05,1);
    puStack_178 = &UNK_004288c5;
    ppppppplVar8 = unaff_R14;
    _ZN7android4base10LogMessageD2Ev();
    unaff_RBX = param_5;
  }
  if (param_5 == (long *******)0x0) {
    unaff_R14 = (long *******)&ppppppplStack_148;
    puStack_178 = &UNK_004288fa;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (unaff_R14,&UNK_0015fda6,0x11d,6,0,0xffffffff);
    puStack_178 = &UNK_00428902;
    uVar5 = _ZN7android4base10LogMessage6streamEv(unaff_R14);
    puStack_178 = &UNK_00428916;
    uVar5 = func_0x0032eb30(uVar5,&UNK_00184bd2,0x14);
    puStack_178 = &UNK_0042892a;
    func_0x0032eb30(uVar5,&UNK_0015ae05,1);
    puStack_178 = &UNK_00428932;
    ppppppplVar8 = unaff_R14;
    _ZN7android4base10LogMessageD2Ev();
    unaff_RBX = param_5;
  }
  if (extraout_RDX_01 == (long *******)0x0) {
    do {
      puStack_178 = &UNK_00428982;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&ppppppplStack_148,&UNK_0015fda6,0x11e,6,0,0xffffffff);
      puStack_178 = &UNK_0042898a;
      uVar5 = _ZN7android4base10LogMessage6streamEv(&ppppppplStack_148);
      puStack_178 = &UNK_0042899e;
      uVar5 = func_0x0032eb30(uVar5,&UNK_00165d45,0xe);
      puStack_178 = &UNK_004289b2;
      uVar5 = func_0x0032eb30(uVar5,&UNK_001837b0,5);
      puStack_178 = &UNK_004289c2;
      uVar5 = func_0x0032eb30(uVar5,&UNK_0015ae05,1);
      puStack_178 = &UNK_004289d6;
      uVar5 = func_0x0032eb30(uVar5,&UNK_00163098,1);
      puStack_178 = &UNK_004289e6;
      uVar5 = func_0x0032eb30(uVar5,&UNK_0015ae05,1);
      puStack_178 = &UNK_004289fa;
      uVar5 = func_0x0032eb30(uVar5,&UNK_0015980b,2);
      puStack_178 = &UNK_00428a0a;
      uVar5 = func_0x0032eb30(uVar5,&UNK_0015fdd9,8);
      puStack_178 = &UNK_00428a14;
      uVar5 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar5,0);
      puStack_178 = &UNK_00428a24;
      uVar5 = func_0x0032eb30(uVar5,&UNK_00189813,5);
      puStack_178 = &UNK_00428a2e;
      uVar5 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj(uVar5,0);
      puStack_178 = &UNK_00428a3e;
      func_0x0032eb30(uVar5,&UNK_0017b788,2);
      puStack_178 = &UNK_00428a46;
      _ZN7android4base10LogMessageD2Ev(&ppppppplStack_148);
    } while( true );
  }
  ppppppplStack_170 = param_5;
  if ((long)extraout_RDX_01 < 0) {
    puStack_178 = &UNK_00428a50;
    func_0x00330ca0();
    goto code_r0x00428a50;
  }
  puStack_178 = &UNK_004286ca;
  unaff_R14 = (long *******)_Znwm(extraout_RDX_01);
  puStack_178 = &UNK_004286e9;
  ppppppplStack_148 = unaff_R14;
  puStack_138 = (undefined *)((long)extraout_RDX_01 + (long)unaff_R14);
  func_0x0099bda0(unaff_R14,ppppppplVar6);
  lStack_160 = 0;
  lStack_158 = 0;
  lStack_150 = 0;
  puStack_178 = &UNK_0042870c;
  puStack_140 = (undefined *)((long)extraout_RDX_01 + (long)unaff_R14);
  _ZN14PairingAuthCtx7DecryptERKNSt3__16vectorIhNS0_9allocatorIhEEEE
            (&lStack_160,ppppppplVar7,&ppppppplStack_148);
  lVar3 = lStack_158;
  lVar2 = lStack_160;
  if (lStack_160 == lStack_158) {
    if (lStack_160 != 0) goto code_r0x0042873c;
  }
  else {
    pppppplVar9 = (long ******)(lStack_158 - lStack_160);
    puStack_178 = &UNK_0042872e;
    func_0x0099bda0(lStack_168,lStack_160,pppppplVar9);
    *ppppppplStack_170 = pppppplVar9;
code_r0x0042873c:
    puStack_178 = &UNK_0042874b;
    _ZdaPvSt11align_val_t(lVar2,lStack_150 - lVar2);
  }
  puStack_178 = &UNK_0042875d;
  ppppppplVar8 = unaff_R14;
  _ZdaPvSt11align_val_t(unaff_R14,extraout_RDX_01);
  unaff_RBX = extraout_RDX_01;
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_130) {
    return CONCAT71((int7)((ulong)lVar3 >> 8),lVar2 != lVar3) & 0xffffffff;
  }
code_r0x00428a50:
  puStack_178 = &UNK_00428a55;
  func_0x0099bd00();
  uStack_190 = *(ulong *)(in_FS_OFFSET + 0x28);
  ppppppplStack_188 = unaff_RBX;
  ppppppplStack_180 = unaff_R14;
  if (ppppppplVar8 == (long *******)0x0) {
    puStack_178 = (undefined *)apcStack_100;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (auStack_198,&UNK_0015fda6,300,6,0,0xffffffff);
    uVar5 = _ZN7android4base10LogMessage6streamEv(auStack_198);
    uVar5 = func_0x0032eb30(uVar5,&UNK_001725c2,0x11);
    func_0x0032eb30(uVar5,&UNK_0015ae05,1);
    _ZN7android4base10LogMessageD2Ev(auStack_198);
    if (*(ulong *)(in_FS_OFFSET + 0x28) == uStack_190) {
      return *(ulong *)(in_FS_OFFSET + 0x28);
    }
  }
  else {
    pppppplVar9 = ppppppplVar8[5];
    ppppppplVar8[5] = (long ******)0x0;
    puStack_178 = (undefined *)apcStack_100;
    if (pppppplVar9 != (long ******)0x0) {
      puStack_178 = (undefined *)apcStack_100;
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
    if (*(ulong *)(in_FS_OFFSET + 0x28) == uStack_190) {
      uVar4 = free(ppppppplVar8,0x30);
      return uVar4;
    }
  }
  func_0x0099bd00();
  pcVar1 = (code *)swi(3);
  uVar4 = (*pcVar1)();
  return uVar4;
}


