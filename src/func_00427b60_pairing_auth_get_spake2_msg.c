// Function: pairing_auth_get_spake2_msg
// Address: 00427b60
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Type propagation algorithm not settling */

long *******
pairing_auth_get_spake2_msg
          (undefined8 *param_1,long *******param_2,undefined8 param_3,undefined8 param_4,
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
  long in_FS_OFFSET;
  undefined1 auStack_228 [8];
  long *******ppppppplStack_220;
  long *******ppppppplStack_218;
  long *******ppppppplStack_210;
  undefined *puStack_208;
  long *******ppppppplStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long *******ppppppplStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  long lStack_1c0;
  long *******ppppppplStack_1b8;
  long *******ppppppplStack_1b0;
  long *******ppppppplStack_1a8;
  long *******ppppppplStack_1a0;
  long *******ppppppplStack_198;
  code *apcStack_190 [2];
  long ******pppppplStack_180;
  long lStack_178;
  long *******ppppppplStack_170;
  long *******ppppppplStack_168;
  long *******ppppppplStack_160;
  long *******ppppppplStack_158;
  long *******ppppppplStack_150;
  undefined *puStack_148;
  long *******ppppppplStack_140;
  long lStack_138;
  long *******ppppppplStack_130;
  long *******ppppppplStack_128;
  long lStack_120;
  long *******ppppppplStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  long lStack_100;
  long *******ppppppplStack_f8;
  long *******ppppppplStack_f0;
  undefined *puStack_e8;
  long *******ppppppplStack_e0;
  long *******ppppppplStack_d8;
  undefined *apuStack_d0 [2];
  long ******pppppplStack_c0;
  long lStack_b8;
  long *******ppppppplStack_b0;
  long *******ppppppplStack_a8;
  long *******ppppppplStack_a0;
  undefined *apuStack_98 [2];
  long *******ppppppplStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  long *******ppppppplStack_68;
  undefined *apuStack_40 [2];
  undefined1 auStack_30 [8];
  long *******ppppppplStack_28;
  
  ppppppplStack_28 = *(long ********)(in_FS_OFFSET + 0x28);
  if (param_1 == (undefined8 *)0x0) {
    param_5 = (long *******)0x0;
    apuStack_40[0] = &UNK_00427be4;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (auStack_30,&UNK_0015fda6,0xe9,6,0,0xffffffff);
    apuStack_40[0] = &UNK_00427bec;
    uVar8 = _ZN7android4base10LogMessage6streamEv(auStack_30);
    apuStack_40[0] = &UNK_00427c00;
    uVar8 = func_0x0032eb30(uVar8,&UNK_001725c2,0x11);
    apuStack_40[0] = &UNK_00427c14;
    func_0x0032eb30(uVar8,&UNK_0015ae05,1);
    apuStack_40[0] = &UNK_00427c1c;
    _ZN7android4base10LogMessageD2Ev(auStack_30);
  }
  if (param_2 == (long *******)0x0) {
    param_5 = (long *******)0x0;
    apuStack_40[0] = &UNK_00427c51;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (auStack_30,&UNK_0015fda6,0xea,6,0,0xffffffff);
    apuStack_40[0] = &UNK_00427c59;
    uVar8 = _ZN7android4base10LogMessage6streamEv(auStack_30);
    apuStack_40[0] = &UNK_00427c6d;
    uVar8 = func_0x0032eb30(uVar8,&UNK_0018b070,0x15);
    apuStack_40[0] = &UNK_00427c81;
    func_0x0032eb30(uVar8,&UNK_0015ae05,1);
    apuStack_40[0] = &UNK_00427c89;
    _ZN7android4base10LogMessageD2Ev(auStack_30);
  }
  ppppppplVar10 = (long *******)*param_1;
  apuStack_40[0] = &UNK_00427b9d;
  ppppppplVar6 = param_2;
  func_0x0099bda0(param_2,ppppppplVar10,param_1[1] - (long)ppppppplVar10);
  if (*(long ********)(in_FS_OFFSET + 0x28) == ppppppplStack_28) {
    return *(long ********)(in_FS_OFFSET + 0x28);
  }
  apuStack_40[0] = &UNK_00427c96;
  func_0x0099bd00();
  lStack_70 = *(long *)(in_FS_OFFSET + 0x28);
  ppppppplVar13 = ppppppplVar10;
  ppppppplVar11 = ppppppplVar6;
  ppppppplStack_68 = param_2;
  apuStack_40[0] = &stack0xfffffffffffffff8;
  if (ppppppplVar6 == (long *******)0x0) {
    unaff_R12 = (long *******)&ppppppplStack_88;
    param_5 = (long *******)0x0;
    apuStack_98[0] = &UNK_00427d76;
    apuStack_40[0] = &stack0xfffffffffffffff8;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (unaff_R12,&UNK_0015fda6,0xf0,6,0,0xffffffff);
    apuStack_98[0] = &UNK_00427d7e;
    uVar8 = _ZN7android4base10LogMessage6streamEv(unaff_R12);
    apuStack_98[0] = &UNK_00427d92;
    uVar8 = func_0x0032eb30(uVar8,&UNK_001725c2,0x11);
    ppppppplVar13 = (long *******)&UNK_0015ae05;
    apuStack_98[0] = &UNK_00427da6;
    func_0x0032eb30(uVar8,&UNK_0015ae05,1);
    apuStack_98[0] = &UNK_00427dae;
    ppppppplVar11 = unaff_R12;
    _ZN7android4base10LogMessageD2Ev();
  }
  if (ppppppplVar10 == (long *******)0x0) {
    unaff_R12 = (long *******)&ppppppplStack_88;
    param_5 = (long *******)0x0;
    apuStack_98[0] = &UNK_00427ddd;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (unaff_R12,&UNK_0015fda6,0xf1,6,0,0xffffffff);
    apuStack_98[0] = &UNK_00427de5;
    uVar8 = _ZN7android4base10LogMessage6streamEv(unaff_R12);
    apuStack_98[0] = &UNK_00427df9;
    uVar8 = func_0x0032eb30(uVar8,&UNK_00181d17,0x17);
    ppppppplVar13 = (long *******)&UNK_0015ae05;
    apuStack_98[0] = &UNK_00427e0d;
    func_0x0032eb30(uVar8,&UNK_0015ae05,1);
    apuStack_98[0] = &UNK_00427e15;
    ppppppplVar11 = unaff_R12;
    _ZN7android4base10LogMessageD2Ev();
  }
  if (extraout_RDX == (long *******)0x0) {
    do {
      apuStack_98[0] = &UNK_00427e62;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&ppppppplStack_88,&UNK_0015fda6,0xf2,6,0,0xffffffff);
      apuStack_98[0] = &UNK_00427e6a;
      uVar8 = _ZN7android4base10LogMessage6streamEv(&ppppppplStack_88);
      apuStack_98[0] = &UNK_00427e7e;
      uVar8 = func_0x0032eb30(uVar8,&UNK_00165d45,0xe);
      apuStack_98[0] = &UNK_00427e92;
      uVar8 = func_0x0032eb30(uVar8,&UNK_00167dcd,7);
      apuStack_98[0] = &UNK_00427ea2;
      uVar8 = func_0x0032eb30(uVar8,&UNK_0015ae05,1);
      apuStack_98[0] = &UNK_00427eb6;
      uVar8 = func_0x0032eb30(uVar8,&UNK_00163098,1);
      apuStack_98[0] = &UNK_00427ec6;
      uVar8 = func_0x0032eb30(uVar8,&UNK_0015ae05,1);
      apuStack_98[0] = &UNK_00427eda;
      uVar8 = func_0x0032eb30(uVar8,&UNK_0015980b,2);
      apuStack_98[0] = &UNK_00427eea;
      uVar8 = func_0x0032eb30(uVar8,&UNK_00164750,10);
      apuStack_98[0] = &UNK_00427ef4;
      uVar8 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar8,0);
      apuStack_98[0] = &UNK_00427f04;
      uVar8 = func_0x0032eb30(uVar8,&UNK_00189813,5);
      apuStack_98[0] = &UNK_00427f0e;
      uVar8 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj(uVar8,0);
      apuStack_98[0] = &UNK_00427f1e;
      func_0x0032eb30(uVar8,&UNK_0017b788,2);
      apuStack_98[0] = &UNK_00427f26;
      _ZN7android4base10LogMessageD2Ev(&ppppppplStack_88);
    } while( true );
  }
  if ((long)extraout_RDX < 0) {
    apuStack_98[0] = &UNK_00427f30;
    func_0x00330ca0();
  }
  else {
    apuStack_98[0] = &UNK_00427cf0;
    unaff_R12 = (long *******)_Znwm(extraout_RDX);
    unaff_R13 = (undefined *)((long)unaff_R12 + (long)extraout_RDX);
    apuStack_98[0] = &UNK_00427d0d;
    ppppppplStack_88 = unaff_R12;
    puStack_78 = unaff_R13;
    func_0x0099bda0(unaff_R12,ppppppplVar10,extraout_RDX);
    apuStack_98[0] = &UNK_00427d1d;
    puStack_80 = unaff_R13;
    uVar4 = _ZN14PairingAuthCtx10InitCipherERKNSt3__16vectorIhNS0_9allocatorIhEEEE
                      (ppppppplVar6,&ppppppplStack_88);
    ppppppplVar6 = (long *******)(ulong)uVar4;
    apuStack_98[0] = &UNK_00427d2b;
    ppppppplVar13 = extraout_RDX;
    ppppppplVar11 = unaff_R12;
    _ZdaPvSt11align_val_t();
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_70) {
      return ppppppplVar6;
    }
  }
  apuStack_98[0] = &UNK_00427f35;
  func_0x0099bd00();
  lStack_b8 = *(long *)(in_FS_OFFSET + 0x28);
  ppppppplVar9 = extraout_RDX;
  ppppppplStack_b0 = extraout_RDX;
  ppppppplStack_a8 = ppppppplVar6;
  ppppppplStack_a0 = ppppppplVar10;
  apuStack_98[0] = (undefined *)apuStack_40;
  if (ppppppplVar11 == (long *******)0x0) {
    ppppppplVar9 = &pppppplStack_c0;
    param_5 = (long *******)0x0;
    apuStack_d0[0] = &UNK_00427fad;
    apuStack_98[0] = (undefined *)apuStack_40;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (ppppppplVar9,&UNK_0015fda6,0xf9,6,0,0xffffffff);
    apuStack_d0[0] = &UNK_00427fb5;
    uVar8 = _ZN7android4base10LogMessage6streamEv(ppppppplVar9);
    apuStack_d0[0] = &UNK_00427fc9;
    uVar8 = func_0x0032eb30(uVar8,&UNK_001725c2,0x11);
    apuStack_d0[0] = &UNK_00427fdd;
    func_0x0032eb30(uVar8,&UNK_0015ae05,1);
    apuStack_d0[0] = &UNK_00427fe5;
    _ZN7android4base10LogMessageD2Ev(ppppppplVar9);
    ppppppplVar6 = ppppppplVar11;
    ppppppplVar10 = ppppppplVar13;
  }
  apuStack_d0[0] = &UNK_00427f64;
  ppppppplVar5 = (long *******)_ZN14PairingAuthCtx17SafeEncryptedSizeEm();
  lStack_138 = *(long *)(in_FS_OFFSET + 0x28);
  if (lStack_138 == lStack_b8) {
    return ppppppplVar5;
  }
  apuStack_d0[0] = &UNK_00427ff5;
  func_0x0099bd00();
  lStack_100 = *(long *)(in_FS_OFFSET + 0x28);
  ppppppplVar5 = ppppppplVar13;
  ppppppplVar12 = ppppppplVar11;
  ppppppplStack_f8 = ppppppplVar9;
  ppppppplStack_f0 = unaff_R12;
  puStack_e8 = unaff_R13;
  ppppppplStack_e0 = ppppppplVar6;
  ppppppplStack_d8 = ppppppplVar10;
  apuStack_d0[0] = (undefined *)apuStack_98;
  if (ppppppplVar11 == (long *******)0x0) {
    puStack_148 = &UNK_0042814b;
    apuStack_d0[0] = (undefined *)apuStack_98;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (&ppppppplStack_118,&UNK_0015fda6,0xff,6,0,0xffffffff);
    puStack_148 = &UNK_00428153;
    uVar8 = _ZN7android4base10LogMessage6streamEv(&ppppppplStack_118);
    puStack_148 = &UNK_00428167;
    uVar8 = func_0x0032eb30(uVar8,&UNK_001725c2,0x11);
    ppppppplVar5 = (long *******)&UNK_0015ae05;
    puStack_148 = &UNK_0042817b;
    func_0x0032eb30(uVar8,&UNK_0015ae05,1);
    puStack_148 = &UNK_00428183;
    ppppppplVar12 = (long *******)&ppppppplStack_118;
    _ZN7android4base10LogMessageD2Ev();
    ppppppplVar6 = (long *******)&ppppppplStack_118;
    ppppppplVar9 = param_5;
  }
  if (ppppppplVar13 == (long *******)0x0) {
    ppppppplVar6 = (long *******)&ppppppplStack_118;
    puStack_148 = &UNK_004281bc;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (ppppppplVar6,&UNK_0015fda6,0x100,6,0,0xffffffff);
    puStack_148 = &UNK_004281c4;
    uVar8 = _ZN7android4base10LogMessage6streamEv(ppppppplVar6);
    puStack_148 = &UNK_004281d8;
    uVar8 = func_0x0032eb30(uVar8,&UNK_0017a3cb,0x13);
    ppppppplVar5 = (long *******)&UNK_0015ae05;
    puStack_148 = &UNK_004281ec;
    func_0x0032eb30(uVar8,&UNK_0015ae05,1);
    puStack_148 = &UNK_004281f4;
    ppppppplVar12 = ppppppplVar6;
    _ZN7android4base10LogMessageD2Ev();
    ppppppplVar9 = param_5;
  }
  if (lStack_138 == 0) {
    ppppppplVar6 = (long *******)&ppppppplStack_118;
    puStack_148 = &UNK_0042822d;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (ppppppplVar6,&UNK_0015fda6,0x101,6,0,0xffffffff);
    puStack_148 = &UNK_00428235;
    uVar8 = _ZN7android4base10LogMessage6streamEv(ppppppplVar6);
    puStack_148 = &UNK_00428249;
    uVar8 = func_0x0032eb30(uVar8,&UNK_0015ca76,0x14);
    ppppppplVar5 = (long *******)&UNK_0015ae05;
    puStack_148 = &UNK_0042825d;
    func_0x0032eb30(uVar8,&UNK_0015ae05,1);
    puStack_148 = &UNK_00428265;
    ppppppplVar12 = ppppppplVar6;
    _ZN7android4base10LogMessageD2Ev();
    ppppppplVar9 = param_5;
  }
  if (param_5 == (long *******)0x0) {
    ppppppplVar6 = (long *******)&ppppppplStack_118;
    puStack_148 = &UNK_0042829a;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (ppppppplVar6,&UNK_0015fda6,0x102,6,0,0xffffffff);
    puStack_148 = &UNK_004282a2;
    uVar8 = _ZN7android4base10LogMessage6streamEv(ppppppplVar6);
    puStack_148 = &UNK_004282b6;
    uVar8 = func_0x0032eb30(uVar8,&UNK_00184bd2,0x14);
    ppppppplVar5 = (long *******)&UNK_0015ae05;
    puStack_148 = &UNK_004282ca;
    func_0x0032eb30(uVar8,&UNK_0015ae05,1);
    puStack_148 = &UNK_004282d2;
    ppppppplVar12 = ppppppplVar6;
    _ZN7android4base10LogMessageD2Ev();
    ppppppplVar9 = param_5;
  }
  if (extraout_RDX_00 == (long *******)0x0) {
    do {
      puStack_148 = &UNK_00428322;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&ppppppplStack_118,&UNK_0015fda6,0x103,6,0,0xffffffff);
      puStack_148 = &UNK_0042832a;
      uVar8 = _ZN7android4base10LogMessage6streamEv(&ppppppplStack_118);
      puStack_148 = &UNK_0042833e;
      uVar8 = func_0x0032eb30(uVar8,&UNK_00165d45,0xe);
      puStack_148 = &UNK_00428352;
      uVar8 = func_0x0032eb30(uVar8,&UNK_001837b0,5);
      puStack_148 = &UNK_00428362;
      uVar8 = func_0x0032eb30(uVar8,&UNK_0015ae05,1);
      puStack_148 = &UNK_00428376;
      uVar8 = func_0x0032eb30(uVar8,&UNK_00163098,1);
      puStack_148 = &UNK_00428386;
      uVar8 = func_0x0032eb30(uVar8,&UNK_0015ae05,1);
      puStack_148 = &UNK_0042839a;
      uVar8 = func_0x0032eb30(uVar8,&UNK_0015980b,2);
      puStack_148 = &UNK_004283aa;
      uVar8 = func_0x0032eb30(uVar8,&UNK_0015fdd9,8);
      puStack_148 = &UNK_004283b4;
      uVar8 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar8,0);
      puStack_148 = &UNK_004283c4;
      uVar8 = func_0x0032eb30(uVar8,&UNK_00189813,5);
      puStack_148 = &UNK_004283ce;
      uVar8 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj(uVar8,0);
      puStack_148 = &UNK_004283de;
      func_0x0032eb30(uVar8,&UNK_0017b788,2);
      puStack_148 = &UNK_004283e6;
      _ZN7android4base10LogMessageD2Ev(&ppppppplStack_118);
    } while( true );
  }
  ppppppplStack_140 = param_5;
  if ((long)extraout_RDX_00 < 0) {
    puStack_148 = &UNK_004283f0;
    func_0x00330ca0();
    ppppppplVar10 = extraout_RDX_00;
  }
  else {
    puStack_148 = &UNK_0042806a;
    ppppppplVar6 = (long *******)_Znwm(extraout_RDX_00);
    puStack_148 = &UNK_00428089;
    ppppppplStack_118 = ppppppplVar6;
    puStack_108 = (undefined *)((long)extraout_RDX_00 + (long)ppppppplVar6);
    func_0x0099bda0(ppppppplVar6,ppppppplVar13);
    ppppppplStack_130 = (long *******)0x0;
    ppppppplStack_128 = (long *******)0x0;
    lStack_120 = 0;
    puStack_148 = &UNK_004280ac;
    puStack_110 = (undefined *)((long)extraout_RDX_00 + (long)ppppppplVar6);
    _ZN14PairingAuthCtx7EncryptERKNSt3__16vectorIhNS0_9allocatorIhEEEE
              (&ppppppplStack_130,ppppppplVar11,&ppppppplStack_118);
    ppppppplVar10 = ppppppplStack_128;
    ppppppplVar11 = ppppppplStack_130;
    if (ppppppplStack_130 == ppppppplStack_128) {
      if (ppppppplStack_130 != (long *******)0x0) goto code_r0x004280dc;
    }
    else {
      ppppppplVar13 = (long *******)((long)ppppppplStack_128 - (long)ppppppplStack_130);
      puStack_148 = &UNK_004280ce;
      func_0x0099bda0(lStack_138,ppppppplStack_130,ppppppplVar13);
      *ppppppplStack_140 = (long ******)ppppppplVar13;
code_r0x004280dc:
      puStack_148 = &UNK_004280eb;
      _ZdaPvSt11align_val_t(ppppppplVar11,lStack_120 - (long)ppppppplVar11);
    }
    ppppppplVar10 =
         (long *******)CONCAT71((int7)((ulong)ppppppplVar10 >> 8),ppppppplVar11 != ppppppplVar10);
    puStack_148 = &UNK_004280fd;
    ppppppplVar5 = extraout_RDX_00;
    ppppppplVar12 = ppppppplVar6;
    _ZdaPvSt11align_val_t();
    ppppppplVar9 = extraout_RDX_00;
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_100) {
      return (long *******)((ulong)ppppppplVar10 & 0xffffffff);
    }
  }
  puStack_148 = &UNK_004283f5;
  func_0x0099bd00();
  lStack_178 = *(long *)(in_FS_OFFSET + 0x28);
  ppppppplStack_170 = ppppppplVar9;
  ppppppplStack_168 = ppppppplVar11;
  ppppppplStack_160 = ppppppplVar13;
  ppppppplStack_158 = ppppppplVar6;
  ppppppplStack_150 = ppppppplVar10;
  puStack_148 = (undefined *)apuStack_d0;
  if (ppppppplVar12 == (long *******)0x0) {
    param_5 = (long *******)0x0;
    apcStack_190[0] = (code *)&UNK_00428491;
    puStack_148 = (undefined *)apuStack_d0;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (&pppppplStack_180,&UNK_0015fda6,0x111,6,0,0xffffffff);
    apcStack_190[0] = (code *)&UNK_00428499;
    uVar8 = _ZN7android4base10LogMessage6streamEv(&pppppplStack_180);
    apcStack_190[0] = (code *)&UNK_004284ad;
    uVar8 = func_0x0032eb30(uVar8,&UNK_001725c2,0x11);
    apcStack_190[0] = (code *)&UNK_004284c1;
    func_0x0032eb30(uVar8,&UNK_0015ae05,1);
    apcStack_190[0] = (code *)&UNK_004284c9;
    _ZN7android4base10LogMessageD2Ev(&pppppplStack_180);
    ppppppplVar9 = &pppppplStack_180;
    ppppppplVar11 = extraout_RDX_01;
    ppppppplVar10 = ppppppplVar5;
    ppppppplVar6 = ppppppplVar12;
  }
  if (ppppppplVar5 == (long *******)0x0) {
    ppppppplVar9 = &pppppplStack_180;
    param_5 = (long *******)0x0;
    apcStack_190[0] = (code *)&UNK_00428507;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (ppppppplVar9,&UNK_0015fda6,0x112,6,0,0xffffffff);
    apcStack_190[0] = (code *)&UNK_0042850f;
    uVar8 = _ZN7android4base10LogMessage6streamEv(ppppppplVar9);
    apcStack_190[0] = (code *)&UNK_00428523;
    uVar8 = func_0x0032eb30(uVar8,&UNK_00167dd5,0x11);
    apcStack_190[0] = (code *)&UNK_00428537;
    func_0x0032eb30(uVar8,&UNK_0015ae05,1);
    apcStack_190[0] = (code *)&UNK_0042853f;
    _ZN7android4base10LogMessageD2Ev(ppppppplVar9);
    ppppppplVar6 = ppppppplVar12;
    ppppppplVar10 = extraout_RDX_01;
  }
  if (extraout_RDX_01 == (long *******)0x0) {
    do {
      apcStack_190[0] = (code *)&UNK_00428592;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&pppppplStack_180,&UNK_0015fda6,0x113,6,0,0xffffffff);
      apcStack_190[0] = (code *)&UNK_0042859a;
      uVar8 = _ZN7android4base10LogMessage6streamEv(&pppppplStack_180);
      apcStack_190[0] = (code *)&UNK_004285ae;
      uVar8 = func_0x0032eb30(uVar8,&UNK_00165d45,0xe);
      apcStack_190[0] = (code *)&UNK_004285c2;
      uVar8 = func_0x0032eb30(uVar8,&UNK_001596b0,3);
      apcStack_190[0] = (code *)&UNK_004285d2;
      uVar8 = func_0x0032eb30(uVar8,&UNK_0015ae05,1);
      apcStack_190[0] = (code *)&UNK_004285e6;
      uVar8 = func_0x0032eb30(uVar8,&UNK_00163098,1);
      apcStack_190[0] = (code *)&UNK_004285f6;
      uVar8 = func_0x0032eb30(uVar8,&UNK_0015ae05,1);
      apcStack_190[0] = (code *)&UNK_0042860a;
      uVar8 = func_0x0032eb30(uVar8,&UNK_0015980b,2);
      apcStack_190[0] = (code *)&UNK_0042861a;
      uVar8 = func_0x0032eb30(uVar8,&UNK_00181bbd,6);
      apcStack_190[0] = (code *)&UNK_00428624;
      uVar8 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar8,0);
      apcStack_190[0] = (code *)&UNK_00428634;
      uVar8 = func_0x0032eb30(uVar8,&UNK_00189813,5);
      apcStack_190[0] = (code *)&UNK_0042863e;
      uVar8 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj(uVar8,0);
      apcStack_190[0] = (code *)&UNK_0042864e;
      func_0x0032eb30(uVar8,&UNK_0017b788,2);
      apcStack_190[0] = (code *)&UNK_00428656;
      _ZN7android4base10LogMessageD2Ev(&pppppplStack_180);
    } while( true );
  }
  apcStack_190[0] = (code *)&UNK_0042843d;
  ppppppplVar5 = extraout_RDX_01;
  ppppppplVar7 = (long *******)_ZN14PairingAuthCtx17SafeDecryptedSizeEm();
  lStack_1f8 = *(long *)(in_FS_OFFSET + 0x28);
  if (lStack_1f8 == lStack_178) {
    return ppppppplVar7;
  }
  apcStack_190[0] = pairing_auth_decrypt;
  func_0x0099bd00();
  lStack_1c0 = *(long *)(in_FS_OFFSET + 0x28);
  ppppppplVar7 = ppppppplVar12;
  ppppppplStack_1b8 = ppppppplVar9;
  ppppppplStack_1b0 = ppppppplVar11;
  ppppppplStack_1a8 = ppppppplVar13;
  ppppppplStack_1a0 = ppppppplVar6;
  ppppppplStack_198 = ppppppplVar10;
  apcStack_190[0] = (code *)&puStack_148;
  if (ppppppplVar12 == (long *******)0x0) {
    puStack_208 = &UNK_004287ab;
    apcStack_190[0] = (code *)&puStack_148;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (&ppppppplStack_1d8,&UNK_0015fda6,0x11a,6,0,0xffffffff);
    puStack_208 = &UNK_004287b3;
    uVar8 = _ZN7android4base10LogMessage6streamEv(&ppppppplStack_1d8);
    puStack_208 = &UNK_004287c7;
    uVar8 = func_0x0032eb30(uVar8,&UNK_001725c2,0x11);
    puStack_208 = &UNK_004287db;
    func_0x0032eb30(uVar8,&UNK_0015ae05,1);
    puStack_208 = &UNK_004287e3;
    ppppppplVar7 = (long *******)&ppppppplStack_1d8;
    _ZN7android4base10LogMessageD2Ev();
    ppppppplVar6 = (long *******)&ppppppplStack_1d8;
    ppppppplVar9 = param_5;
  }
  if (ppppppplVar5 == (long *******)0x0) {
    ppppppplVar6 = (long *******)&ppppppplStack_1d8;
    puStack_208 = &UNK_0042881c;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (ppppppplVar6,&UNK_0015fda6,0x11b,6,0,0xffffffff);
    puStack_208 = &UNK_00428824;
    uVar8 = _ZN7android4base10LogMessage6streamEv(ppppppplVar6);
    puStack_208 = &UNK_00428838;
    uVar8 = func_0x0032eb30(uVar8,&UNK_0017a3cb,0x13);
    puStack_208 = &UNK_0042884c;
    func_0x0032eb30(uVar8,&UNK_0015ae05,1);
    puStack_208 = &UNK_00428854;
    ppppppplVar7 = ppppppplVar6;
    _ZN7android4base10LogMessageD2Ev();
    ppppppplVar9 = param_5;
  }
  if (lStack_1f8 == 0) {
    ppppppplVar6 = (long *******)&ppppppplStack_1d8;
    puStack_208 = &UNK_0042888d;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (ppppppplVar6,&UNK_0015fda6,0x11c,6,0,0xffffffff);
    puStack_208 = &UNK_00428895;
    uVar8 = _ZN7android4base10LogMessage6streamEv(ppppppplVar6);
    puStack_208 = &UNK_004288a9;
    uVar8 = func_0x0032eb30(uVar8,&UNK_0015ca76,0x14);
    puStack_208 = &UNK_004288bd;
    func_0x0032eb30(uVar8,&UNK_0015ae05,1);
    puStack_208 = &UNK_004288c5;
    ppppppplVar7 = ppppppplVar6;
    _ZN7android4base10LogMessageD2Ev();
    ppppppplVar9 = param_5;
  }
  if (param_5 == (long *******)0x0) {
    ppppppplVar6 = (long *******)&ppppppplStack_1d8;
    puStack_208 = &UNK_004288fa;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (ppppppplVar6,&UNK_0015fda6,0x11d,6,0,0xffffffff);
    puStack_208 = &UNK_00428902;
    uVar8 = _ZN7android4base10LogMessage6streamEv(ppppppplVar6);
    puStack_208 = &UNK_00428916;
    uVar8 = func_0x0032eb30(uVar8,&UNK_00184bd2,0x14);
    puStack_208 = &UNK_0042892a;
    func_0x0032eb30(uVar8,&UNK_0015ae05,1);
    puStack_208 = &UNK_00428932;
    ppppppplVar7 = ppppppplVar6;
    _ZN7android4base10LogMessageD2Ev();
    ppppppplVar9 = param_5;
  }
  if (extraout_RDX_02 == (long *******)0x0) {
    do {
      puStack_208 = &UNK_00428982;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&ppppppplStack_1d8,&UNK_0015fda6,0x11e,6,0,0xffffffff);
      puStack_208 = &UNK_0042898a;
      uVar8 = _ZN7android4base10LogMessage6streamEv(&ppppppplStack_1d8);
      puStack_208 = &UNK_0042899e;
      uVar8 = func_0x0032eb30(uVar8,&UNK_00165d45,0xe);
      puStack_208 = &UNK_004289b2;
      uVar8 = func_0x0032eb30(uVar8,&UNK_001837b0,5);
      puStack_208 = &UNK_004289c2;
      uVar8 = func_0x0032eb30(uVar8,&UNK_0015ae05,1);
      puStack_208 = &UNK_004289d6;
      uVar8 = func_0x0032eb30(uVar8,&UNK_00163098,1);
      puStack_208 = &UNK_004289e6;
      uVar8 = func_0x0032eb30(uVar8,&UNK_0015ae05,1);
      puStack_208 = &UNK_004289fa;
      uVar8 = func_0x0032eb30(uVar8,&UNK_0015980b,2);
      puStack_208 = &UNK_00428a0a;
      uVar8 = func_0x0032eb30(uVar8,&UNK_0015fdd9,8);
      puStack_208 = &UNK_00428a14;
      uVar8 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar8,0);
      puStack_208 = &UNK_00428a24;
      uVar8 = func_0x0032eb30(uVar8,&UNK_00189813,5);
      puStack_208 = &UNK_00428a2e;
      uVar8 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj(uVar8,0);
      puStack_208 = &UNK_00428a3e;
      func_0x0032eb30(uVar8,&UNK_0017b788,2);
      puStack_208 = &UNK_00428a46;
      _ZN7android4base10LogMessageD2Ev(&ppppppplStack_1d8);
    } while( true );
  }
  ppppppplStack_200 = param_5;
  if ((long)extraout_RDX_02 < 0) {
    puStack_208 = &UNK_00428a50;
    func_0x00330ca0();
    goto code_r0x00428a50;
  }
  puStack_208 = &UNK_004286ca;
  ppppppplVar6 = (long *******)_Znwm(extraout_RDX_02);
  puStack_208 = &UNK_004286e9;
  ppppppplStack_1d8 = ppppppplVar6;
  puStack_1c8 = (undefined *)((long)extraout_RDX_02 + (long)ppppppplVar6);
  func_0x0099bda0(ppppppplVar6,ppppppplVar5);
  lStack_1f0 = 0;
  lStack_1e8 = 0;
  lStack_1e0 = 0;
  puStack_208 = &UNK_0042870c;
  puStack_1d0 = (undefined *)((long)extraout_RDX_02 + (long)ppppppplVar6);
  _ZN14PairingAuthCtx7DecryptERKNSt3__16vectorIhNS0_9allocatorIhEEEE
            (&lStack_1f0,ppppppplVar12,&ppppppplStack_1d8);
  lVar3 = lStack_1e8;
  lVar2 = lStack_1f0;
  if (lStack_1f0 == lStack_1e8) {
    if (lStack_1f0 != 0) goto code_r0x0042873c;
  }
  else {
    pppppplVar14 = (long ******)(lStack_1e8 - lStack_1f0);
    puStack_208 = &UNK_0042872e;
    func_0x0099bda0(lStack_1f8,lStack_1f0,pppppplVar14);
    *ppppppplStack_200 = pppppplVar14;
code_r0x0042873c:
    puStack_208 = &UNK_0042874b;
    _ZdaPvSt11align_val_t(lVar2,lStack_1e0 - lVar2);
  }
  puStack_208 = &UNK_0042875d;
  ppppppplVar7 = ppppppplVar6;
  _ZdaPvSt11align_val_t(ppppppplVar6,extraout_RDX_02);
  ppppppplVar9 = extraout_RDX_02;
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_1c0) {
    return (long *******)(CONCAT71((int7)((ulong)lVar3 >> 8),lVar2 != lVar3) & 0xffffffff);
  }
code_r0x00428a50:
  puStack_208 = &UNK_00428a55;
  func_0x0099bd00();
  ppppppplStack_220 = *(long ********)(in_FS_OFFSET + 0x28);
  ppppppplStack_218 = ppppppplVar9;
  ppppppplStack_210 = ppppppplVar6;
  if (ppppppplVar7 == (long *******)0x0) {
    puStack_208 = (undefined *)apcStack_190;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (auStack_228,&UNK_0015fda6,300,6,0,0xffffffff);
    uVar8 = _ZN7android4base10LogMessage6streamEv(auStack_228);
    uVar8 = func_0x0032eb30(uVar8,&UNK_001725c2,0x11);
    func_0x0032eb30(uVar8,&UNK_0015ae05,1);
    _ZN7android4base10LogMessageD2Ev(auStack_228);
    if (*(long ********)(in_FS_OFFSET + 0x28) == ppppppplStack_220) {
      return *(long ********)(in_FS_OFFSET + 0x28);
    }
  }
  else {
    pppppplVar14 = ppppppplVar7[5];
    ppppppplVar7[5] = (long ******)0x0;
    puStack_208 = (undefined *)apcStack_190;
    if (pppppplVar14 != (long ******)0x0) {
      puStack_208 = (undefined *)apcStack_190;
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
    if (*(long ********)(in_FS_OFFSET + 0x28) == ppppppplStack_220) {
      ppppppplVar6 = (long *******)free(ppppppplVar7,0x30);
      return ppppppplVar6;
    }
  }
  func_0x0099bd00();
  pcVar1 = (code *)swi(3);
  ppppppplVar6 = (long *******)(*pcVar1)();
  return ppppppplVar6;
}


