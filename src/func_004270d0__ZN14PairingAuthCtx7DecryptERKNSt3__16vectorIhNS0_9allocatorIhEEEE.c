// Function: _ZN14PairingAuthCtx7DecryptERKNSt3__16vectorIhNS0_9allocatorIhEEEE
// Address: 004270d0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Type propagation algorithm not settling */

uint *******
_ZN14PairingAuthCtx7DecryptERKNSt3__16vectorIhNS0_9allocatorIhEEEE
          (uint *******param_1,uint *******param_2,uint *******param_3,undefined8 param_4,
          uint *******param_5)

{
  code *pcVar1;
  long lVar2;
  char cVar3;
  uint uVar4;
  long lVar5;
  uint *******pppppppuVar6;
  uint *******pppppppuVar7;
  uint *******pppppppuVar8;
  uint *******pppppppuVar9;
  undefined8 uVar10;
  byte extraout_DL;
  uint *******extraout_RDX;
  uint *******extraout_RDX_00;
  uint *******extraout_RDX_01;
  uint *******extraout_RDX_02;
  uint *******unaff_RBX;
  uint *******pppppppuVar11;
  uint *******pppppppuVar13;
  uint *******pppppppuVar14;
  uint ******unaff_R13;
  uint *******pppppppuVar15;
  uint ******ppppppuVar16;
  uint *******unaff_R14;
  long in_FS_OFFSET;
  undefined1 auStack_3c8 [8];
  uint *******pppppppuStack_3c0;
  uint *******pppppppuStack_3b8;
  uint *******pppppppuStack_3b0;
  undefined *puStack_3a8;
  uint *******pppppppuStack_3a0;
  long lStack_398;
  long lStack_390;
  long lStack_388;
  long lStack_380;
  uint *******pppppppuStack_378;
  long lStack_370;
  long lStack_368;
  long lStack_360;
  uint *******pppppppuStack_358;
  uint *******pppppppuStack_350;
  uint *******pppppppuStack_348;
  uint *******pppppppuStack_340;
  uint *******pppppppuStack_338;
  code *apcStack_330 [2];
  uint ******ppppppuStack_320;
  long lStack_318;
  uint *******pppppppuStack_310;
  uint *******pppppppuStack_308;
  uint *******pppppppuStack_300;
  uint *******pppppppuStack_2f8;
  uint *******pppppppuStack_2f0;
  undefined *puStack_2e8;
  uint *******pppppppuStack_2e0;
  long lStack_2d8;
  uint *******pppppppuStack_2d0;
  uint *******pppppppuStack_2c8;
  long lStack_2c0;
  uint *******pppppppuStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  uint *******pppppppuStack_298;
  uint *******pppppppuStack_290;
  uint ******ppppppuStack_288;
  uint *******pppppppuStack_280;
  uint *******pppppppuStack_278;
  undefined *apuStack_270 [2];
  uint ******ppppppuStack_260;
  long lStack_258;
  uint *******pppppppuStack_250;
  uint *******pppppppuStack_248;
  uint *******pppppppuStack_240;
  undefined *apuStack_238 [2];
  uint *******pppppppuStack_228;
  uint ******ppppppuStack_220;
  uint ******ppppppuStack_218;
  long lStack_210;
  uint *******pppppppuStack_208;
  uint *******pppppppuStack_200;
  uint ******ppppppuStack_1f8;
  uint *******pppppppuStack_1f0;
  uint *******pppppppuStack_1e8;
  undefined *apuStack_1e0 [2];
  uint ******ppppppuStack_1d0;
  uint *******pppppppuStack_1c8;
  uint *******pppppppuStack_1c0;
  uint *******pppppppuStack_1b8;
  uint *******pppppppuStack_1b0;
  undefined *puStack_1a8;
  uint ******ppppppuStack_1a0;
  long lStack_198;
  uint *******pppppppuStack_190;
  uint *******pppppppuStack_188;
  undefined *puStack_180;
  uint ******ppppppuStack_178;
  uint *******pppppppuStack_170;
  uint *******pppppppuStack_168;
  uint *******pppppppuStack_160;
  long lStack_158;
  uint *******pppppppuStack_150;
  uint *******pppppppuStack_148;
  uint ******ppppppuStack_140;
  uint *******pppppppuStack_138;
  uint *******pppppppuStack_130;
  undefined *puStack_128;
  uint ******ppppppuStack_120;
  uint *******pppppppuStack_118;
  uint *******pppppppuStack_110;
  uint *******pppppppuStack_108;
  long lStack_100;
  uint *******pppppppuStack_f8;
  uint *******pppppppuStack_f0;
  uint ******ppppppuStack_e8;
  uint *******pppppppuStack_e0;
  uint *******pppppppuStack_d8;
  undefined *apuStack_d0 [2];
  uint ******ppppppuStack_c0;
  long lStack_b8;
  uint *******pppppppuStack_b0;
  uint *******pppppppuStack_a8;
  uint *******pppppppuStack_a0;
  undefined *apuStack_98 [2];
  uint ******ppppppuStack_88;
  long lStack_80;
  uint *******pppppppuStack_78;
  uint *******pppppppuStack_70;
  uint *******pppppppuStack_68;
  undefined *apuStack_60 [2];
  uint *******pppppppuStack_50;
  uint *******pppppppuStack_48;
  uint ******ppppppuStack_40;
  long lStack_38;
  uint ******ppppppuVar12;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  pppppppuStack_48 = param_1;
  if (param_2[5] == (uint ******)0x0) {
    unaff_RBX = &ppppppuStack_40;
    param_5 = (uint *******)0x0;
    apuStack_60[0] = &UNK_004272ab;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (unaff_RBX,&UNK_0015fda6,0xb7,6,0,0xffffffff);
    apuStack_60[0] = &UNK_004272b3;
    uVar10 = _ZN7android4base10LogMessage6streamEv(unaff_RBX);
    apuStack_60[0] = &UNK_004272c7;
    uVar10 = func_0x0032eb30(uVar10,&UNK_001630b2,0x15);
    apuStack_60[0] = &UNK_004272db;
    func_0x0032eb30(uVar10,&UNK_0015ae05,1);
    apuStack_60[0] = &UNK_004272e3;
    _ZN7android4base10LogMessageD2Ev(unaff_RBX);
  }
  ppppppuVar16 = *param_3;
  ppppppuVar12 = param_3[1];
  if (ppppppuVar16 == ppppppuVar12) {
    unaff_RBX = &ppppppuStack_40;
    param_5 = (uint *******)0x0;
    apuStack_60[0] = &UNK_0042730e;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (unaff_RBX,&UNK_0015fda6,0xb8,6,0,0xffffffff);
    apuStack_60[0] = &UNK_00427316;
    uVar10 = _ZN7android4base10LogMessage6streamEv(unaff_RBX);
    apuStack_60[0] = &UNK_0042732a;
    uVar10 = func_0x0032eb30(uVar10,&UNK_00189819,0x1b);
    apuStack_60[0] = &UNK_0042733e;
    func_0x0032eb30(uVar10,&UNK_0015ae05,1);
    apuStack_60[0] = &UNK_00427346;
    _ZN7android4base10LogMessageD2Ev(unaff_RBX);
    ppppppuVar16 = *param_3;
    ppppppuVar12 = param_3[1];
  }
  pppppppuVar11 = (uint *******)((long)ppppppuVar12 - (long)ppppppuVar16);
  pppppppuVar7 = (uint *******)param_2[5];
  apuStack_60[0] = &UNK_00427120;
  lVar5 = _ZN3adb7pairing9Aes128Gcm13DecryptedSizeEm();
  if (lVar5 == 0) {
    unaff_R13 = (uint ******)0x0;
    unaff_R14 = (uint *******)0x0;
code_r0x00427154:
    unaff_RBX = (uint *******)((long)unaff_R13 - (long)unaff_R14);
    pppppppuVar7 = (uint *******)param_2[5];
    pppppppuVar11 = (uint *******)*param_3;
    apuStack_60[0] = &UNK_00427174;
    param_5 = unaff_RBX;
    pppppppuVar6 = (uint *******)
                   _ZN3adb7pairing9Aes128Gcm7DecryptEPKhmPhm
                             (pppppppuVar7,pppppppuVar11,(long)param_3[1] - (long)pppppppuVar11,
                              unaff_R14);
    if ((extraout_DL & pppppppuVar6 != (uint *******)0x0) == 0) {
      pppppppuVar7 = (uint *******)0x4;
      pppppppuVar11 = (uint *******)0x0;
      apuStack_60[0] = &UNK_00427211;
      cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc();
      if (cVar3 != '\0') {
        apuStack_60[0] = &UNK_00427357;
        param_3 = (uint *******)func_0x0099bce0();
        uVar4 = *(uint *)param_3;
        unaff_R13 = (uint ******)(ulong)uVar4;
        pppppppuVar7 = &ppppppuStack_40;
        param_5 = (uint *******)0x0;
        apuStack_60[0] = &UNK_00427383;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (pppppppuVar7,&UNK_0015fda6,0xbf,4,0,0xffffffff);
        apuStack_60[0] = &UNK_0042738b;
        uVar10 = _ZN7android4base10LogMessage6streamEv(pppppppuVar7);
        pppppppuVar11 = (uint *******)&UNK_00189835;
        apuStack_60[0] = &UNK_0042739f;
        func_0x0032eb30(uVar10,&UNK_00189835,0x16);
        apuStack_60[0] = &UNK_004273a7;
        _ZN7android4base10LogMessageD2Ev();
        *(uint *)param_3 = uVar4;
      }
      param_2 = pppppppuStack_48;
      *pppppppuStack_48 = (uint ******)0x0;
      pppppppuStack_48[1] = (uint ******)0x0;
      pppppppuStack_48[2] = (uint ******)0x0;
      if (unaff_R14 != (uint *******)0x0) {
        apuStack_60[0] = &UNK_0042723e;
        pppppppuVar11 = unaff_RBX;
        pppppppuVar7 = unaff_R14;
        _ZdaPvSt11align_val_t();
      }
    }
    else {
      param_2 = (uint *******)((long)pppppppuVar6 - (long)unaff_RBX);
      if (pppppppuVar6 < unaff_RBX || param_2 == (uint *******)0x0) {
        pppppppuVar15 = (uint *******)((long)unaff_R14 + (long)pppppppuVar6);
        param_3 = unaff_R14;
        if (unaff_RBX <= pppppppuVar6) {
          pppppppuVar15 = (uint *******)unaff_R13;
        }
      }
      else {
        if ((long)pppppppuVar6 < 0) goto code_r0x004273b4;
        pppppppuVar7 = (uint *******)((long)unaff_RBX * 2);
        if ((uint *******)((long)unaff_RBX * 2) <= pppppppuVar6) {
          pppppppuVar7 = pppppppuVar6;
        }
        pppppppuVar11 = (uint *******)0x7fffffffffffffff;
        if (unaff_RBX < (uint *******)0x3fffffffffffffff) {
          pppppppuVar11 = pppppppuVar7;
        }
        apuStack_60[0] = &UNK_004271c9;
        pppppppuStack_50 = pppppppuVar6;
        param_3 = (uint *******)_Znwm(pppppppuVar11);
        unaff_R13 = (uint ******)((long)pppppppuVar11 + (long)param_3);
        pppppppuStack_50 = (uint *******)((long)pppppppuStack_50 + (long)param_3);
        apuStack_60[0] = &UNK_004271e1;
        func_0x0099bdb0((long)param_3 + (long)unaff_RBX,0,param_2);
        apuStack_60[0] = &UNK_004271ef;
        pppppppuVar11 = unaff_R14;
        pppppppuVar7 = param_3;
        func_0x0099bda0(param_3,unaff_R14,unaff_RBX);
        pppppppuVar15 = pppppppuStack_50;
        if (unaff_R14 != (uint *******)0x0) {
          apuStack_60[0] = &UNK_004271ff;
          pppppppuVar11 = unaff_RBX;
          pppppppuVar7 = unaff_R14;
          _ZdaPvSt11align_val_t();
          pppppppuVar15 = pppppppuStack_50;
        }
      }
      *pppppppuStack_48 = (uint ******)param_3;
      pppppppuStack_48[1] = (uint ******)pppppppuVar15;
      pppppppuStack_48[2] = unaff_R13;
      param_2 = pppppppuStack_48;
    }
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
      return param_2;
    }
    apuStack_60[0] = &UNK_004273b4;
    func_0x0099bd00();
  }
  else if (-1 < lVar5) {
    apuStack_60[0] = &UNK_00427136;
    unaff_R14 = (uint *******)_Znwm(lVar5);
    unaff_R13 = (uint ******)(lVar5 + (long)unaff_R14);
    apuStack_60[0] = &UNK_0042714c;
    func_0x0099bdb0(unaff_R14,0,lVar5);
    goto code_r0x00427154;
  }
code_r0x004273b4:
  apuStack_60[0] = &UNK_004273b9;
  func_0x00330ca0();
  apuStack_60[0] = &stack0xfffffffffffffff8;
  pppppppuStack_68 = param_3;
  pppppppuStack_70 = unaff_R14;
  pppppppuStack_78 = unaff_RBX;
  lStack_80 = *(long *)(in_FS_OFFSET + 0x28);
  pppppppuVar6 = (uint *******)pppppppuVar7[5];
  if (pppppppuVar6 == (uint *******)0x0) {
    unaff_RBX = &ppppppuStack_88;
    param_5 = (uint *******)0x0;
    apuStack_98[0] = &UNK_00427434;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (unaff_RBX,&UNK_0015fda6,200,6,0,0xffffffff);
    apuStack_98[0] = &UNK_0042743c;
    uVar10 = _ZN7android4base10LogMessage6streamEv(unaff_RBX);
    apuStack_98[0] = &UNK_00427450;
    uVar10 = func_0x0032eb30(uVar10,&UNK_001630b2,0x15);
    apuStack_98[0] = &UNK_00427464;
    func_0x0032eb30(uVar10,&UNK_0015ae05,1);
    apuStack_98[0] = &UNK_0042746c;
    _ZN7android4base10LogMessageD2Ev(unaff_RBX);
    pppppppuVar6 = (uint *******)pppppppuVar7[5];
    unaff_R14 = pppppppuVar7;
    param_3 = pppppppuVar11;
  }
  apuStack_98[0] = &UNK_004273eb;
  pppppppuVar7 = (uint *******)_ZN3adb7pairing9Aes128Gcm13EncryptedSizeEm();
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_80) {
    return pppppppuVar7;
  }
  apuStack_98[0] = &UNK_0042747d;
  func_0x0099bd00();
  lStack_b8 = *(long *)(in_FS_OFFSET + 0x28);
  pppppppuVar15 = (uint *******)pppppppuVar6[5];
  pppppppuVar7 = unaff_RBX;
  pppppppuStack_b0 = unaff_RBX;
  pppppppuStack_a8 = unaff_R14;
  pppppppuStack_a0 = param_3;
  apuStack_98[0] = (undefined *)apuStack_60;
  if (pppppppuVar15 == (uint *******)0x0) {
    pppppppuVar7 = &ppppppuStack_c0;
    param_5 = (uint *******)0x0;
    apuStack_d0[0] = &UNK_004274f4;
    apuStack_98[0] = (undefined *)apuStack_60;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (pppppppuVar7,&UNK_0015fda6,0xcd,6,0,0xffffffff);
    apuStack_d0[0] = &UNK_004274fc;
    uVar10 = _ZN7android4base10LogMessage6streamEv(pppppppuVar7);
    apuStack_d0[0] = &UNK_00427510;
    uVar10 = func_0x0032eb30(uVar10,&UNK_001630b2,0x15);
    apuStack_d0[0] = &UNK_00427524;
    func_0x0032eb30(uVar10,&UNK_0015ae05,1);
    apuStack_d0[0] = &UNK_0042752c;
    _ZN7android4base10LogMessageD2Ev(pppppppuVar7);
    pppppppuVar15 = (uint *******)pppppppuVar6[5];
    unaff_R14 = pppppppuVar6;
    param_3 = pppppppuVar11;
  }
  apuStack_d0[0] = &UNK_004274ab;
  pppppppuVar6 = (uint *******)_ZN3adb7pairing9Aes128Gcm13DecryptedSizeEm();
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_b8) {
    return pppppppuVar6;
  }
  apuStack_d0[0] = &UNK_0042753d;
  func_0x0099bd00();
  lStack_100 = *(long *)(in_FS_OFFSET + 0x28);
  pppppppuVar6 = pppppppuVar11;
  pppppppuVar8 = pppppppuVar15;
  pppppppuStack_f8 = pppppppuVar7;
  pppppppuStack_f0 = param_2;
  ppppppuStack_e8 = unaff_R13;
  pppppppuStack_e0 = unaff_R14;
  pppppppuStack_d8 = param_3;
  apuStack_d0[0] = (undefined *)apuStack_98;
  if (pppppppuVar15 == (uint *******)0x0) {
    param_5 = (uint *******)0x0;
    puStack_128 = &UNK_00427631;
    apuStack_d0[0] = (undefined *)apuStack_98;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (&pppppppuStack_118,&UNK_0015fda6,0xd2,6,0,0xffffffff);
    puStack_128 = &UNK_00427639;
    uVar10 = _ZN7android4base10LogMessage6streamEv(&pppppppuStack_118);
    puStack_128 = &UNK_0042764d;
    uVar10 = func_0x0032eb30(uVar10,&UNK_0016b15c,0x12);
    pppppppuVar6 = (uint *******)&UNK_0015ae05;
    puStack_128 = &UNK_00427661;
    func_0x0032eb30(uVar10,&UNK_0015ae05,1);
    puStack_128 = &UNK_00427669;
    pppppppuVar8 = (uint *******)&pppppppuStack_118;
    _ZN7android4base10LogMessageD2Ev();
    param_3 = (uint *******)&pppppppuStack_118;
  }
  if (pppppppuVar11 == (uint *******)0x0) {
    do {
      puStack_128 = &UNK_004276c2;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&pppppppuStack_118,&UNK_0015fda6,0xd3,6,0,0xffffffff);
      puStack_128 = &UNK_004276ca;
      uVar10 = _ZN7android4base10LogMessage6streamEv(&pppppppuStack_118);
      puStack_128 = &UNK_004276de;
      uVar10 = func_0x0032eb30(uVar10,&UNK_00165d45,0xe);
      puStack_128 = &UNK_004276f2;
      uVar10 = func_0x0032eb30(uVar10,&UNK_001596b0,3);
      puStack_128 = &UNK_00427702;
      uVar10 = func_0x0032eb30(uVar10,&UNK_0015ae05,1);
      puStack_128 = &UNK_00427716;
      uVar10 = func_0x0032eb30(uVar10,&UNK_00163098,1);
      puStack_128 = &UNK_00427726;
      uVar10 = func_0x0032eb30(uVar10,&UNK_0015ae05,1);
      puStack_128 = &UNK_0042773a;
      uVar10 = func_0x0032eb30(uVar10,&UNK_0015980b,2);
      puStack_128 = &UNK_0042774a;
      uVar10 = func_0x0032eb30(uVar10,&UNK_00181bbd,6);
      puStack_128 = &UNK_00427754;
      uVar10 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar10,0);
      puStack_128 = &UNK_00427764;
      uVar10 = func_0x0032eb30(uVar10,&UNK_00189813,5);
      puStack_128 = &UNK_0042776e;
      uVar10 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj(uVar10,0);
      puStack_128 = &UNK_0042777e;
      func_0x0032eb30(uVar10,&UNK_0017b788,2);
      puStack_128 = &UNK_00427786;
      _ZN7android4base10LogMessageD2Ev(&pppppppuStack_118);
    } while( true );
  }
  if ((long)pppppppuVar11 < 0) {
    puStack_128 = &UNK_004277f3;
    func_0x00330ca0();
  }
  else {
    puStack_128 = &UNK_00427584;
    pppppppuStack_118 = (uint *******)_Znwm(pppppppuVar11);
    param_3 = (uint *******)((long)pppppppuStack_118 + (long)pppppppuVar11);
    puStack_128 = &UNK_0042759e;
    pppppppuStack_108 = param_3;
    func_0x0099bda0(pppppppuStack_118,pppppppuVar15,pppppppuVar11);
    puStack_128 = &UNK_004275ac;
    pppppppuStack_110 = param_3;
    pppppppuVar11 = (uint *******)_Znwm(0x30);
    pppppppuVar6 = (uint *******)0x1;
    puStack_128 = &UNK_004275c0;
    _ZN14PairingAuthCtxC1ENS_4RoleERKNSt3__16vectorIhNS1_9allocatorIhEEEE
              (pppppppuVar11,1,&pppppppuStack_118);
    if (*pppppppuVar11 == pppppppuVar11[1]) {
      pppppppuVar15 = &ppppppuStack_120;
      param_5 = (uint *******)0x0;
      puStack_128 = &UNK_004277b1;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (pppppppuVar15,&UNK_0015fda6,0xd6,6,0,0xffffffff);
      puStack_128 = &UNK_004277b9;
      uVar10 = _ZN7android4base10LogMessage6streamEv(pppppppuVar15);
      puStack_128 = &UNK_004277cd;
      uVar10 = func_0x0032eb30(uVar10,&UNK_001805c1,0x21);
      pppppppuVar6 = (uint *******)&UNK_0015ae05;
      puStack_128 = &UNK_004277e1;
      func_0x0032eb30(uVar10,&UNK_0015ae05,1);
      puStack_128 = &UNK_004277e9;
      _ZN7android4base10LogMessageD2Ev(pppppppuVar15);
    }
    pppppppuVar8 = pppppppuStack_118;
    if (pppppppuStack_118 != (uint *******)0x0) {
      pppppppuStack_110 = pppppppuStack_118;
      pppppppuVar6 = (uint *******)((long)pppppppuStack_108 - (long)pppppppuStack_118);
      puStack_128 = &UNK_004275e6;
      _ZdaPvSt11align_val_t();
    }
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_100) {
      return pppppppuVar11;
    }
  }
  puStack_128 = &UNK_004277f8;
  func_0x0099bd00();
  lStack_158 = *(long *)(in_FS_OFFSET + 0x28);
  pppppppuVar7 = pppppppuVar6;
  pppppppuVar13 = pppppppuVar8;
  pppppppuStack_150 = pppppppuVar11;
  pppppppuStack_148 = param_2;
  ppppppuStack_140 = unaff_R13;
  pppppppuStack_138 = pppppppuVar15;
  pppppppuStack_130 = param_3;
  puStack_128 = (undefined *)apuStack_d0;
  if (pppppppuVar8 == (uint *******)0x0) {
    param_5 = (uint *******)0x0;
    puStack_180 = &UNK_004278ee;
    puStack_128 = (undefined *)apuStack_d0;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (&pppppppuStack_170,&UNK_0015fda6,0xdb,6,0,0xffffffff);
    puStack_180 = &UNK_004278f6;
    uVar10 = _ZN7android4base10LogMessage6streamEv(&pppppppuStack_170);
    puStack_180 = &UNK_0042790a;
    uVar10 = func_0x0032eb30(uVar10,&UNK_0016b15c,0x12);
    pppppppuVar7 = (uint *******)&UNK_0015ae05;
    puStack_180 = &UNK_0042791e;
    func_0x0032eb30(uVar10,&UNK_0015ae05,1);
    puStack_180 = &UNK_00427926;
    pppppppuVar13 = (uint *******)&pppppppuStack_170;
    _ZN7android4base10LogMessageD2Ev();
    param_3 = (uint *******)&pppppppuStack_170;
  }
  if (pppppppuVar6 == (uint *******)0x0) {
    do {
      puStack_180 = &UNK_00427972;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&pppppppuStack_170,&UNK_0015fda6,0xdc,6,0,0xffffffff);
      puStack_180 = &UNK_0042797a;
      uVar10 = _ZN7android4base10LogMessage6streamEv(&pppppppuStack_170);
      puStack_180 = &UNK_0042798e;
      uVar10 = func_0x0032eb30(uVar10,&UNK_00165d45,0xe);
      puStack_180 = &UNK_004279a2;
      uVar10 = func_0x0032eb30(uVar10,&UNK_001596b0,3);
      puStack_180 = &UNK_004279b2;
      uVar10 = func_0x0032eb30(uVar10,&UNK_0015ae05,1);
      puStack_180 = &UNK_004279c6;
      uVar10 = func_0x0032eb30(uVar10,&UNK_00163098,1);
      puStack_180 = &UNK_004279d6;
      uVar10 = func_0x0032eb30(uVar10,&UNK_0015ae05,1);
      puStack_180 = &UNK_004279ea;
      uVar10 = func_0x0032eb30(uVar10,&UNK_0015980b,2);
      puStack_180 = &UNK_004279fa;
      uVar10 = func_0x0032eb30(uVar10,&UNK_00181bbd,6);
      puStack_180 = &UNK_00427a04;
      uVar10 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar10,0);
      puStack_180 = &UNK_00427a14;
      uVar10 = func_0x0032eb30(uVar10,&UNK_00189813,5);
      puStack_180 = &UNK_00427a1e;
      uVar10 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj(uVar10,0);
      puStack_180 = &UNK_00427a2e;
      func_0x0032eb30(uVar10,&UNK_0017b788,2);
      puStack_180 = &UNK_00427a36;
      _ZN7android4base10LogMessageD2Ev(&pppppppuStack_170);
    } while( true );
  }
  if ((long)pppppppuVar6 < 0) {
    puStack_180 = &UNK_00427aa3;
    func_0x00330ca0();
  }
  else {
    puStack_180 = &UNK_00427844;
    pppppppuStack_170 = (uint *******)_Znwm(pppppppuVar6);
    param_3 = (uint *******)((long)pppppppuStack_170 + (long)pppppppuVar6);
    puStack_180 = &UNK_0042785e;
    pppppppuStack_160 = param_3;
    func_0x0099bda0(pppppppuStack_170,pppppppuVar8,pppppppuVar6);
    puStack_180 = &UNK_0042786c;
    pppppppuStack_168 = param_3;
    pppppppuVar6 = (uint *******)_Znwm(0x30);
    pppppppuVar7 = (uint *******)0x0;
    puStack_180 = &UNK_0042787d;
    _ZN14PairingAuthCtxC1ENS_4RoleERKNSt3__16vectorIhNS1_9allocatorIhEEEE
              (pppppppuVar6,0,&pppppppuStack_170);
    if (*pppppppuVar6 == pppppppuVar6[1]) {
      pppppppuVar8 = &ppppppuStack_178;
      param_5 = (uint *******)0x0;
      puStack_180 = &UNK_00427a61;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (pppppppuVar8,&UNK_0015fda6,0xdf,6,0,0xffffffff);
      puStack_180 = &UNK_00427a69;
      uVar10 = _ZN7android4base10LogMessage6streamEv(pppppppuVar8);
      puStack_180 = &UNK_00427a7d;
      uVar10 = func_0x0032eb30(uVar10,&UNK_001805c1,0x21);
      pppppppuVar7 = (uint *******)&UNK_0015ae05;
      puStack_180 = &UNK_00427a91;
      func_0x0032eb30(uVar10,&UNK_0015ae05,1);
      puStack_180 = &UNK_00427a99;
      _ZN7android4base10LogMessageD2Ev(pppppppuVar8);
    }
    pppppppuVar13 = pppppppuStack_170;
    if (pppppppuStack_170 != (uint *******)0x0) {
      pppppppuStack_168 = pppppppuStack_170;
      pppppppuVar7 = (uint *******)((long)pppppppuStack_160 - (long)pppppppuStack_170);
      puStack_180 = &UNK_004278a3;
      _ZdaPvSt11align_val_t();
    }
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_158) {
      return pppppppuVar6;
    }
  }
  puStack_180 = &UNK_00427aa8;
  func_0x0099bd00();
  puStack_180 = (undefined *)&puStack_128;
  pppppppuStack_188 = pppppppuVar8;
  pppppppuStack_190 = pppppppuVar6;
  lStack_198 = *(long *)(in_FS_OFFSET + 0x28);
  if (pppppppuVar13 == (uint *******)0x0) {
    pppppppuVar6 = &ppppppuStack_1a0;
    param_5 = (uint *******)0x0;
    puStack_1a8 = &UNK_00427b15;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (pppppppuVar6,&UNK_0015fda6,0xe4,6,0,0xffffffff);
    puStack_1a8 = &UNK_00427b1d;
    uVar10 = _ZN7android4base10LogMessage6streamEv(pppppppuVar6);
    puStack_1a8 = &UNK_00427b31;
    uVar10 = func_0x0032eb30(uVar10,&UNK_001725c2,0x11);
    pppppppuVar7 = (uint *******)&UNK_0015ae05;
    puStack_1a8 = &UNK_00427b45;
    func_0x0032eb30(uVar10,&UNK_0015ae05,1);
    puStack_1a8 = &UNK_00427b4d;
    _ZN7android4base10LogMessageD2Ev(pppppppuVar6);
    pppppppuVar8 = (uint *******)0x0;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_198) {
    return (uint *******)((long)pppppppuVar13[1] - (long)*pppppppuVar13);
  }
  puStack_1a8 = &UNK_00427b5a;
  func_0x0099bd00();
  puStack_1a8 = (undefined *)&puStack_180;
  pppppppuStack_1b0 = param_3;
  pppppppuStack_1b8 = pppppppuVar8;
  pppppppuStack_1c0 = pppppppuVar6;
  pppppppuStack_1c8 = *(uint ********)(in_FS_OFFSET + 0x28);
  if (pppppppuVar13 == (uint *******)0x0) {
    pppppppuVar8 = &ppppppuStack_1d0;
    param_5 = (uint *******)0x0;
    apuStack_1e0[0] = &UNK_00427be4;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (pppppppuVar8,&UNK_0015fda6,0xe9,6,0,0xffffffff);
    apuStack_1e0[0] = &UNK_00427bec;
    uVar10 = _ZN7android4base10LogMessage6streamEv(pppppppuVar8);
    apuStack_1e0[0] = &UNK_00427c00;
    uVar10 = func_0x0032eb30(uVar10,&UNK_001725c2,0x11);
    apuStack_1e0[0] = &UNK_00427c14;
    func_0x0032eb30(uVar10,&UNK_0015ae05,1);
    apuStack_1e0[0] = &UNK_00427c1c;
    _ZN7android4base10LogMessageD2Ev(pppppppuVar8);
    param_3 = pppppppuVar13;
  }
  if (pppppppuVar7 == (uint *******)0x0) {
    pppppppuVar8 = &ppppppuStack_1d0;
    param_5 = (uint *******)0x0;
    apuStack_1e0[0] = &UNK_00427c51;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (pppppppuVar8,&UNK_0015fda6,0xea,6,0,0xffffffff);
    apuStack_1e0[0] = &UNK_00427c59;
    uVar10 = _ZN7android4base10LogMessage6streamEv(pppppppuVar8);
    apuStack_1e0[0] = &UNK_00427c6d;
    uVar10 = func_0x0032eb30(uVar10,&UNK_0018b070,0x15);
    apuStack_1e0[0] = &UNK_00427c81;
    func_0x0032eb30(uVar10,&UNK_0015ae05,1);
    apuStack_1e0[0] = &UNK_00427c89;
    _ZN7android4base10LogMessageD2Ev(pppppppuVar8);
    param_3 = pppppppuVar13;
  }
  pppppppuVar6 = (uint *******)*pppppppuVar13;
  apuStack_1e0[0] = &UNK_00427b9d;
  pppppppuVar11 = pppppppuVar7;
  func_0x0099bda0(pppppppuVar7,pppppppuVar6,(long)pppppppuVar13[1] - (long)pppppppuVar6);
  if (*(uint ********)(in_FS_OFFSET + 0x28) == pppppppuStack_1c8) {
    return *(uint ********)(in_FS_OFFSET + 0x28);
  }
  apuStack_1e0[0] = &UNK_00427c96;
  func_0x0099bd00();
  lStack_210 = *(long *)(in_FS_OFFSET + 0x28);
  pppppppuVar15 = pppppppuVar6;
  pppppppuVar13 = pppppppuVar11;
  pppppppuStack_208 = pppppppuVar7;
  pppppppuStack_200 = param_2;
  ppppppuStack_1f8 = unaff_R13;
  pppppppuStack_1f0 = pppppppuVar8;
  pppppppuStack_1e8 = param_3;
  apuStack_1e0[0] = (undefined *)&puStack_1a8;
  if (pppppppuVar11 == (uint *******)0x0) {
    param_5 = (uint *******)0x0;
    apuStack_238[0] = &UNK_00427d76;
    apuStack_1e0[0] = (undefined *)&puStack_1a8;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (&pppppppuStack_228,&UNK_0015fda6,0xf0,6,0,0xffffffff);
    apuStack_238[0] = &UNK_00427d7e;
    uVar10 = _ZN7android4base10LogMessage6streamEv(&pppppppuStack_228);
    apuStack_238[0] = &UNK_00427d92;
    uVar10 = func_0x0032eb30(uVar10,&UNK_001725c2,0x11);
    pppppppuVar15 = (uint *******)&UNK_0015ae05;
    apuStack_238[0] = &UNK_00427da6;
    func_0x0032eb30(uVar10,&UNK_0015ae05,1);
    apuStack_238[0] = &UNK_00427dae;
    pppppppuVar13 = (uint *******)&pppppppuStack_228;
    _ZN7android4base10LogMessageD2Ev();
    param_2 = (uint *******)&pppppppuStack_228;
  }
  if (pppppppuVar6 == (uint *******)0x0) {
    param_2 = (uint *******)&pppppppuStack_228;
    param_5 = (uint *******)0x0;
    apuStack_238[0] = &UNK_00427ddd;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (param_2,&UNK_0015fda6,0xf1,6,0,0xffffffff);
    apuStack_238[0] = &UNK_00427de5;
    uVar10 = _ZN7android4base10LogMessage6streamEv(param_2);
    apuStack_238[0] = &UNK_00427df9;
    uVar10 = func_0x0032eb30(uVar10,&UNK_00181d17,0x17);
    pppppppuVar15 = (uint *******)&UNK_0015ae05;
    apuStack_238[0] = &UNK_00427e0d;
    func_0x0032eb30(uVar10,&UNK_0015ae05,1);
    apuStack_238[0] = &UNK_00427e15;
    pppppppuVar13 = param_2;
    _ZN7android4base10LogMessageD2Ev();
  }
  if (extraout_RDX == (uint *******)0x0) {
    do {
      apuStack_238[0] = &UNK_00427e62;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&pppppppuStack_228,&UNK_0015fda6,0xf2,6,0,0xffffffff);
      apuStack_238[0] = &UNK_00427e6a;
      uVar10 = _ZN7android4base10LogMessage6streamEv(&pppppppuStack_228);
      apuStack_238[0] = &UNK_00427e7e;
      uVar10 = func_0x0032eb30(uVar10,&UNK_00165d45,0xe);
      apuStack_238[0] = &UNK_00427e92;
      uVar10 = func_0x0032eb30(uVar10,&UNK_00167dcd,7);
      apuStack_238[0] = &UNK_00427ea2;
      uVar10 = func_0x0032eb30(uVar10,&UNK_0015ae05,1);
      apuStack_238[0] = &UNK_00427eb6;
      uVar10 = func_0x0032eb30(uVar10,&UNK_00163098,1);
      apuStack_238[0] = &UNK_00427ec6;
      uVar10 = func_0x0032eb30(uVar10,&UNK_0015ae05,1);
      apuStack_238[0] = &UNK_00427eda;
      uVar10 = func_0x0032eb30(uVar10,&UNK_0015980b,2);
      apuStack_238[0] = &UNK_00427eea;
      uVar10 = func_0x0032eb30(uVar10,&UNK_00164750,10);
      apuStack_238[0] = &UNK_00427ef4;
      uVar10 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar10,0);
      apuStack_238[0] = &UNK_00427f04;
      uVar10 = func_0x0032eb30(uVar10,&UNK_00189813,5);
      apuStack_238[0] = &UNK_00427f0e;
      uVar10 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj(uVar10,0);
      apuStack_238[0] = &UNK_00427f1e;
      func_0x0032eb30(uVar10,&UNK_0017b788,2);
      apuStack_238[0] = &UNK_00427f26;
      _ZN7android4base10LogMessageD2Ev(&pppppppuStack_228);
    } while( true );
  }
  if ((long)extraout_RDX < 0) {
    apuStack_238[0] = &UNK_00427f30;
    func_0x00330ca0();
  }
  else {
    apuStack_238[0] = &UNK_00427cf0;
    param_2 = (uint *******)_Znwm(extraout_RDX);
    unaff_R13 = (uint ******)((long)param_2 + (long)extraout_RDX);
    apuStack_238[0] = &UNK_00427d0d;
    pppppppuStack_228 = param_2;
    ppppppuStack_218 = unaff_R13;
    func_0x0099bda0(param_2,pppppppuVar6,extraout_RDX);
    apuStack_238[0] = &UNK_00427d1d;
    ppppppuStack_220 = unaff_R13;
    uVar4 = _ZN14PairingAuthCtx10InitCipherERKNSt3__16vectorIhNS0_9allocatorIhEEEE
                      (pppppppuVar11,&pppppppuStack_228);
    pppppppuVar11 = (uint *******)(ulong)uVar4;
    apuStack_238[0] = &UNK_00427d2b;
    pppppppuVar15 = extraout_RDX;
    pppppppuVar13 = param_2;
    _ZdaPvSt11align_val_t();
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_210) {
      return pppppppuVar11;
    }
  }
  apuStack_238[0] = &UNK_00427f35;
  func_0x0099bd00();
  lStack_258 = *(long *)(in_FS_OFFSET + 0x28);
  pppppppuVar7 = extraout_RDX;
  pppppppuStack_250 = extraout_RDX;
  pppppppuStack_248 = pppppppuVar11;
  pppppppuStack_240 = pppppppuVar6;
  apuStack_238[0] = (undefined *)apuStack_1e0;
  if (pppppppuVar13 == (uint *******)0x0) {
    pppppppuVar7 = &ppppppuStack_260;
    param_5 = (uint *******)0x0;
    apuStack_270[0] = &UNK_00427fad;
    apuStack_238[0] = (undefined *)apuStack_1e0;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (pppppppuVar7,&UNK_0015fda6,0xf9,6,0,0xffffffff);
    apuStack_270[0] = &UNK_00427fb5;
    uVar10 = _ZN7android4base10LogMessage6streamEv(pppppppuVar7);
    apuStack_270[0] = &UNK_00427fc9;
    uVar10 = func_0x0032eb30(uVar10,&UNK_001725c2,0x11);
    apuStack_270[0] = &UNK_00427fdd;
    func_0x0032eb30(uVar10,&UNK_0015ae05,1);
    apuStack_270[0] = &UNK_00427fe5;
    _ZN7android4base10LogMessageD2Ev(pppppppuVar7);
    pppppppuVar11 = pppppppuVar13;
    pppppppuVar6 = pppppppuVar15;
  }
  apuStack_270[0] = &UNK_00427f64;
  pppppppuVar8 = (uint *******)_ZN14PairingAuthCtx17SafeEncryptedSizeEm();
  lStack_2d8 = *(long *)(in_FS_OFFSET + 0x28);
  if (lStack_2d8 == lStack_258) {
    return pppppppuVar8;
  }
  apuStack_270[0] = &UNK_00427ff5;
  func_0x0099bd00();
  lStack_2a0 = *(long *)(in_FS_OFFSET + 0x28);
  pppppppuVar8 = pppppppuVar15;
  pppppppuVar14 = pppppppuVar13;
  pppppppuStack_298 = pppppppuVar7;
  pppppppuStack_290 = param_2;
  ppppppuStack_288 = unaff_R13;
  pppppppuStack_280 = pppppppuVar11;
  pppppppuStack_278 = pppppppuVar6;
  apuStack_270[0] = (undefined *)apuStack_238;
  if (pppppppuVar13 == (uint *******)0x0) {
    puStack_2e8 = &UNK_0042814b;
    apuStack_270[0] = (undefined *)apuStack_238;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (&pppppppuStack_2b8,&UNK_0015fda6,0xff,6,0,0xffffffff);
    puStack_2e8 = &UNK_00428153;
    uVar10 = _ZN7android4base10LogMessage6streamEv(&pppppppuStack_2b8);
    puStack_2e8 = &UNK_00428167;
    uVar10 = func_0x0032eb30(uVar10,&UNK_001725c2,0x11);
    pppppppuVar8 = (uint *******)&UNK_0015ae05;
    puStack_2e8 = &UNK_0042817b;
    func_0x0032eb30(uVar10,&UNK_0015ae05,1);
    puStack_2e8 = &UNK_00428183;
    pppppppuVar14 = (uint *******)&pppppppuStack_2b8;
    _ZN7android4base10LogMessageD2Ev();
    pppppppuVar11 = (uint *******)&pppppppuStack_2b8;
    pppppppuVar7 = param_5;
  }
  if (pppppppuVar15 == (uint *******)0x0) {
    pppppppuVar11 = (uint *******)&pppppppuStack_2b8;
    puStack_2e8 = &UNK_004281bc;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (pppppppuVar11,&UNK_0015fda6,0x100,6,0,0xffffffff);
    puStack_2e8 = &UNK_004281c4;
    uVar10 = _ZN7android4base10LogMessage6streamEv(pppppppuVar11);
    puStack_2e8 = &UNK_004281d8;
    uVar10 = func_0x0032eb30(uVar10,&UNK_0017a3cb,0x13);
    pppppppuVar8 = (uint *******)&UNK_0015ae05;
    puStack_2e8 = &UNK_004281ec;
    func_0x0032eb30(uVar10,&UNK_0015ae05,1);
    puStack_2e8 = &UNK_004281f4;
    pppppppuVar14 = pppppppuVar11;
    _ZN7android4base10LogMessageD2Ev();
    pppppppuVar7 = param_5;
  }
  if (lStack_2d8 == 0) {
    pppppppuVar11 = (uint *******)&pppppppuStack_2b8;
    puStack_2e8 = &UNK_0042822d;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (pppppppuVar11,&UNK_0015fda6,0x101,6,0,0xffffffff);
    puStack_2e8 = &UNK_00428235;
    uVar10 = _ZN7android4base10LogMessage6streamEv(pppppppuVar11);
    puStack_2e8 = &UNK_00428249;
    uVar10 = func_0x0032eb30(uVar10,&UNK_0015ca76,0x14);
    pppppppuVar8 = (uint *******)&UNK_0015ae05;
    puStack_2e8 = &UNK_0042825d;
    func_0x0032eb30(uVar10,&UNK_0015ae05,1);
    puStack_2e8 = &UNK_00428265;
    pppppppuVar14 = pppppppuVar11;
    _ZN7android4base10LogMessageD2Ev();
    pppppppuVar7 = param_5;
  }
  if (param_5 == (uint *******)0x0) {
    pppppppuVar11 = (uint *******)&pppppppuStack_2b8;
    puStack_2e8 = &UNK_0042829a;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (pppppppuVar11,&UNK_0015fda6,0x102,6,0,0xffffffff);
    puStack_2e8 = &UNK_004282a2;
    uVar10 = _ZN7android4base10LogMessage6streamEv(pppppppuVar11);
    puStack_2e8 = &UNK_004282b6;
    uVar10 = func_0x0032eb30(uVar10,&UNK_00184bd2,0x14);
    pppppppuVar8 = (uint *******)&UNK_0015ae05;
    puStack_2e8 = &UNK_004282ca;
    func_0x0032eb30(uVar10,&UNK_0015ae05,1);
    puStack_2e8 = &UNK_004282d2;
    pppppppuVar14 = pppppppuVar11;
    _ZN7android4base10LogMessageD2Ev();
    pppppppuVar7 = param_5;
  }
  if (extraout_RDX_00 == (uint *******)0x0) {
    do {
      puStack_2e8 = &UNK_00428322;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&pppppppuStack_2b8,&UNK_0015fda6,0x103,6,0,0xffffffff);
      puStack_2e8 = &UNK_0042832a;
      uVar10 = _ZN7android4base10LogMessage6streamEv(&pppppppuStack_2b8);
      puStack_2e8 = &UNK_0042833e;
      uVar10 = func_0x0032eb30(uVar10,&UNK_00165d45,0xe);
      puStack_2e8 = &UNK_00428352;
      uVar10 = func_0x0032eb30(uVar10,&UNK_001837b0,5);
      puStack_2e8 = &UNK_00428362;
      uVar10 = func_0x0032eb30(uVar10,&UNK_0015ae05,1);
      puStack_2e8 = &UNK_00428376;
      uVar10 = func_0x0032eb30(uVar10,&UNK_00163098,1);
      puStack_2e8 = &UNK_00428386;
      uVar10 = func_0x0032eb30(uVar10,&UNK_0015ae05,1);
      puStack_2e8 = &UNK_0042839a;
      uVar10 = func_0x0032eb30(uVar10,&UNK_0015980b,2);
      puStack_2e8 = &UNK_004283aa;
      uVar10 = func_0x0032eb30(uVar10,&UNK_0015fdd9,8);
      puStack_2e8 = &UNK_004283b4;
      uVar10 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar10,0);
      puStack_2e8 = &UNK_004283c4;
      uVar10 = func_0x0032eb30(uVar10,&UNK_00189813,5);
      puStack_2e8 = &UNK_004283ce;
      uVar10 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj(uVar10,0);
      puStack_2e8 = &UNK_004283de;
      func_0x0032eb30(uVar10,&UNK_0017b788,2);
      puStack_2e8 = &UNK_004283e6;
      _ZN7android4base10LogMessageD2Ev(&pppppppuStack_2b8);
    } while( true );
  }
  pppppppuStack_2e0 = param_5;
  if ((long)extraout_RDX_00 < 0) {
    puStack_2e8 = &UNK_004283f0;
    func_0x00330ca0();
    pppppppuVar6 = extraout_RDX_00;
  }
  else {
    puStack_2e8 = &UNK_0042806a;
    pppppppuVar11 = (uint *******)_Znwm(extraout_RDX_00);
    puStack_2e8 = &UNK_00428089;
    pppppppuStack_2b8 = pppppppuVar11;
    lStack_2a8 = (long)extraout_RDX_00 + (long)pppppppuVar11;
    func_0x0099bda0(pppppppuVar11,pppppppuVar15);
    pppppppuStack_2d0 = (uint *******)0x0;
    pppppppuStack_2c8 = (uint *******)0x0;
    lStack_2c0 = 0;
    puStack_2e8 = &UNK_004280ac;
    lStack_2b0 = (long)extraout_RDX_00 + (long)pppppppuVar11;
    _ZN14PairingAuthCtx7EncryptERKNSt3__16vectorIhNS0_9allocatorIhEEEE
              (&pppppppuStack_2d0,pppppppuVar13,&pppppppuStack_2b8);
    pppppppuVar7 = pppppppuStack_2c8;
    pppppppuVar13 = pppppppuStack_2d0;
    if (pppppppuStack_2d0 == pppppppuStack_2c8) {
      if (pppppppuStack_2d0 != (uint *******)0x0) goto code_r0x004280dc;
    }
    else {
      pppppppuVar15 = (uint *******)((long)pppppppuStack_2c8 - (long)pppppppuStack_2d0);
      puStack_2e8 = &UNK_004280ce;
      func_0x0099bda0(lStack_2d8,pppppppuStack_2d0,pppppppuVar15);
      *pppppppuStack_2e0 = (uint ******)pppppppuVar15;
code_r0x004280dc:
      puStack_2e8 = &UNK_004280eb;
      _ZdaPvSt11align_val_t(pppppppuVar13,lStack_2c0 - (long)pppppppuVar13);
    }
    pppppppuVar6 = (uint *******)
                   CONCAT71((int7)((ulong)pppppppuVar7 >> 8),pppppppuVar13 != pppppppuVar7);
    puStack_2e8 = &UNK_004280fd;
    pppppppuVar8 = extraout_RDX_00;
    pppppppuVar14 = pppppppuVar11;
    _ZdaPvSt11align_val_t();
    pppppppuVar7 = extraout_RDX_00;
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_2a0) {
      return (uint *******)((ulong)pppppppuVar6 & 0xffffffff);
    }
  }
  puStack_2e8 = &UNK_004283f5;
  func_0x0099bd00();
  lStack_318 = *(long *)(in_FS_OFFSET + 0x28);
  pppppppuStack_310 = pppppppuVar7;
  pppppppuStack_308 = pppppppuVar13;
  pppppppuStack_300 = pppppppuVar15;
  pppppppuStack_2f8 = pppppppuVar11;
  pppppppuStack_2f0 = pppppppuVar6;
  puStack_2e8 = (undefined *)apuStack_270;
  if (pppppppuVar14 == (uint *******)0x0) {
    param_5 = (uint *******)0x0;
    apcStack_330[0] = (code *)&UNK_00428491;
    puStack_2e8 = (undefined *)apuStack_270;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (&ppppppuStack_320,&UNK_0015fda6,0x111,6,0,0xffffffff);
    apcStack_330[0] = (code *)&UNK_00428499;
    uVar10 = _ZN7android4base10LogMessage6streamEv(&ppppppuStack_320);
    apcStack_330[0] = (code *)&UNK_004284ad;
    uVar10 = func_0x0032eb30(uVar10,&UNK_001725c2,0x11);
    apcStack_330[0] = (code *)&UNK_004284c1;
    func_0x0032eb30(uVar10,&UNK_0015ae05,1);
    apcStack_330[0] = (code *)&UNK_004284c9;
    _ZN7android4base10LogMessageD2Ev(&ppppppuStack_320);
    pppppppuVar7 = &ppppppuStack_320;
    pppppppuVar13 = extraout_RDX_01;
    pppppppuVar6 = pppppppuVar8;
    pppppppuVar11 = pppppppuVar14;
  }
  if (pppppppuVar8 == (uint *******)0x0) {
    pppppppuVar7 = &ppppppuStack_320;
    param_5 = (uint *******)0x0;
    apcStack_330[0] = (code *)&UNK_00428507;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (pppppppuVar7,&UNK_0015fda6,0x112,6,0,0xffffffff);
    apcStack_330[0] = (code *)&UNK_0042850f;
    uVar10 = _ZN7android4base10LogMessage6streamEv(pppppppuVar7);
    apcStack_330[0] = (code *)&UNK_00428523;
    uVar10 = func_0x0032eb30(uVar10,&UNK_00167dd5,0x11);
    apcStack_330[0] = (code *)&UNK_00428537;
    func_0x0032eb30(uVar10,&UNK_0015ae05,1);
    apcStack_330[0] = (code *)&UNK_0042853f;
    _ZN7android4base10LogMessageD2Ev(pppppppuVar7);
    pppppppuVar11 = pppppppuVar14;
    pppppppuVar6 = extraout_RDX_01;
  }
  if (extraout_RDX_01 == (uint *******)0x0) {
    do {
      apcStack_330[0] = (code *)&UNK_00428592;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&ppppppuStack_320,&UNK_0015fda6,0x113,6,0,0xffffffff);
      apcStack_330[0] = (code *)&UNK_0042859a;
      uVar10 = _ZN7android4base10LogMessage6streamEv(&ppppppuStack_320);
      apcStack_330[0] = (code *)&UNK_004285ae;
      uVar10 = func_0x0032eb30(uVar10,&UNK_00165d45,0xe);
      apcStack_330[0] = (code *)&UNK_004285c2;
      uVar10 = func_0x0032eb30(uVar10,&UNK_001596b0,3);
      apcStack_330[0] = (code *)&UNK_004285d2;
      uVar10 = func_0x0032eb30(uVar10,&UNK_0015ae05,1);
      apcStack_330[0] = (code *)&UNK_004285e6;
      uVar10 = func_0x0032eb30(uVar10,&UNK_00163098,1);
      apcStack_330[0] = (code *)&UNK_004285f6;
      uVar10 = func_0x0032eb30(uVar10,&UNK_0015ae05,1);
      apcStack_330[0] = (code *)&UNK_0042860a;
      uVar10 = func_0x0032eb30(uVar10,&UNK_0015980b,2);
      apcStack_330[0] = (code *)&UNK_0042861a;
      uVar10 = func_0x0032eb30(uVar10,&UNK_00181bbd,6);
      apcStack_330[0] = (code *)&UNK_00428624;
      uVar10 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar10,0);
      apcStack_330[0] = (code *)&UNK_00428634;
      uVar10 = func_0x0032eb30(uVar10,&UNK_00189813,5);
      apcStack_330[0] = (code *)&UNK_0042863e;
      uVar10 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj(uVar10,0);
      apcStack_330[0] = (code *)&UNK_0042864e;
      func_0x0032eb30(uVar10,&UNK_0017b788,2);
      apcStack_330[0] = (code *)&UNK_00428656;
      _ZN7android4base10LogMessageD2Ev(&ppppppuStack_320);
    } while( true );
  }
  apcStack_330[0] = (code *)&UNK_0042843d;
  pppppppuVar8 = extraout_RDX_01;
  pppppppuVar9 = (uint *******)_ZN14PairingAuthCtx17SafeDecryptedSizeEm();
  lStack_398 = *(long *)(in_FS_OFFSET + 0x28);
  if (lStack_398 == lStack_318) {
    return pppppppuVar9;
  }
  apcStack_330[0] = pairing_auth_decrypt;
  func_0x0099bd00();
  lStack_360 = *(long *)(in_FS_OFFSET + 0x28);
  pppppppuVar9 = pppppppuVar14;
  pppppppuStack_358 = pppppppuVar7;
  pppppppuStack_350 = pppppppuVar13;
  pppppppuStack_348 = pppppppuVar15;
  pppppppuStack_340 = pppppppuVar11;
  pppppppuStack_338 = pppppppuVar6;
  apcStack_330[0] = (code *)&puStack_2e8;
  if (pppppppuVar14 == (uint *******)0x0) {
    puStack_3a8 = &UNK_004287ab;
    apcStack_330[0] = (code *)&puStack_2e8;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (&pppppppuStack_378,&UNK_0015fda6,0x11a,6,0,0xffffffff);
    puStack_3a8 = &UNK_004287b3;
    uVar10 = _ZN7android4base10LogMessage6streamEv(&pppppppuStack_378);
    puStack_3a8 = &UNK_004287c7;
    uVar10 = func_0x0032eb30(uVar10,&UNK_001725c2,0x11);
    puStack_3a8 = &UNK_004287db;
    func_0x0032eb30(uVar10,&UNK_0015ae05,1);
    puStack_3a8 = &UNK_004287e3;
    pppppppuVar9 = (uint *******)&pppppppuStack_378;
    _ZN7android4base10LogMessageD2Ev();
    pppppppuVar11 = (uint *******)&pppppppuStack_378;
    pppppppuVar7 = param_5;
  }
  if (pppppppuVar8 == (uint *******)0x0) {
    pppppppuVar11 = (uint *******)&pppppppuStack_378;
    puStack_3a8 = &UNK_0042881c;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (pppppppuVar11,&UNK_0015fda6,0x11b,6,0,0xffffffff);
    puStack_3a8 = &UNK_00428824;
    uVar10 = _ZN7android4base10LogMessage6streamEv(pppppppuVar11);
    puStack_3a8 = &UNK_00428838;
    uVar10 = func_0x0032eb30(uVar10,&UNK_0017a3cb,0x13);
    puStack_3a8 = &UNK_0042884c;
    func_0x0032eb30(uVar10,&UNK_0015ae05,1);
    puStack_3a8 = &UNK_00428854;
    pppppppuVar9 = pppppppuVar11;
    _ZN7android4base10LogMessageD2Ev();
    pppppppuVar7 = param_5;
  }
  if (lStack_398 == 0) {
    pppppppuVar11 = (uint *******)&pppppppuStack_378;
    puStack_3a8 = &UNK_0042888d;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (pppppppuVar11,&UNK_0015fda6,0x11c,6,0,0xffffffff);
    puStack_3a8 = &UNK_00428895;
    uVar10 = _ZN7android4base10LogMessage6streamEv(pppppppuVar11);
    puStack_3a8 = &UNK_004288a9;
    uVar10 = func_0x0032eb30(uVar10,&UNK_0015ca76,0x14);
    puStack_3a8 = &UNK_004288bd;
    func_0x0032eb30(uVar10,&UNK_0015ae05,1);
    puStack_3a8 = &UNK_004288c5;
    pppppppuVar9 = pppppppuVar11;
    _ZN7android4base10LogMessageD2Ev();
    pppppppuVar7 = param_5;
  }
  if (param_5 == (uint *******)0x0) {
    pppppppuVar11 = (uint *******)&pppppppuStack_378;
    puStack_3a8 = &UNK_004288fa;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (pppppppuVar11,&UNK_0015fda6,0x11d,6,0,0xffffffff);
    puStack_3a8 = &UNK_00428902;
    uVar10 = _ZN7android4base10LogMessage6streamEv(pppppppuVar11);
    puStack_3a8 = &UNK_00428916;
    uVar10 = func_0x0032eb30(uVar10,&UNK_00184bd2,0x14);
    puStack_3a8 = &UNK_0042892a;
    func_0x0032eb30(uVar10,&UNK_0015ae05,1);
    puStack_3a8 = &UNK_00428932;
    pppppppuVar9 = pppppppuVar11;
    _ZN7android4base10LogMessageD2Ev();
    pppppppuVar7 = param_5;
  }
  if (extraout_RDX_02 == (uint *******)0x0) {
    do {
      puStack_3a8 = &UNK_00428982;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&pppppppuStack_378,&UNK_0015fda6,0x11e,6,0,0xffffffff);
      puStack_3a8 = &UNK_0042898a;
      uVar10 = _ZN7android4base10LogMessage6streamEv(&pppppppuStack_378);
      puStack_3a8 = &UNK_0042899e;
      uVar10 = func_0x0032eb30(uVar10,&UNK_00165d45,0xe);
      puStack_3a8 = &UNK_004289b2;
      uVar10 = func_0x0032eb30(uVar10,&UNK_001837b0,5);
      puStack_3a8 = &UNK_004289c2;
      uVar10 = func_0x0032eb30(uVar10,&UNK_0015ae05,1);
      puStack_3a8 = &UNK_004289d6;
      uVar10 = func_0x0032eb30(uVar10,&UNK_00163098,1);
      puStack_3a8 = &UNK_004289e6;
      uVar10 = func_0x0032eb30(uVar10,&UNK_0015ae05,1);
      puStack_3a8 = &UNK_004289fa;
      uVar10 = func_0x0032eb30(uVar10,&UNK_0015980b,2);
      puStack_3a8 = &UNK_00428a0a;
      uVar10 = func_0x0032eb30(uVar10,&UNK_0015fdd9,8);
      puStack_3a8 = &UNK_00428a14;
      uVar10 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar10,0);
      puStack_3a8 = &UNK_00428a24;
      uVar10 = func_0x0032eb30(uVar10,&UNK_00189813,5);
      puStack_3a8 = &UNK_00428a2e;
      uVar10 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj(uVar10,0);
      puStack_3a8 = &UNK_00428a3e;
      func_0x0032eb30(uVar10,&UNK_0017b788,2);
      puStack_3a8 = &UNK_00428a46;
      _ZN7android4base10LogMessageD2Ev(&pppppppuStack_378);
    } while( true );
  }
  pppppppuStack_3a0 = param_5;
  if ((long)extraout_RDX_02 < 0) {
    puStack_3a8 = &UNK_00428a50;
    func_0x00330ca0();
    goto code_r0x00428a50;
  }
  puStack_3a8 = &UNK_004286ca;
  pppppppuVar11 = (uint *******)_Znwm(extraout_RDX_02);
  puStack_3a8 = &UNK_004286e9;
  pppppppuStack_378 = pppppppuVar11;
  lStack_368 = (long)extraout_RDX_02 + (long)pppppppuVar11;
  func_0x0099bda0(pppppppuVar11,pppppppuVar8);
  lStack_390 = 0;
  lStack_388 = 0;
  lStack_380 = 0;
  puStack_3a8 = &UNK_0042870c;
  lStack_370 = (long)extraout_RDX_02 + (long)pppppppuVar11;
  _ZN14PairingAuthCtx7DecryptERKNSt3__16vectorIhNS0_9allocatorIhEEEE
            (&lStack_390,pppppppuVar14,&pppppppuStack_378);
  lVar2 = lStack_388;
  lVar5 = lStack_390;
  if (lStack_390 == lStack_388) {
    if (lStack_390 != 0) goto code_r0x0042873c;
  }
  else {
    ppppppuVar16 = (uint ******)(lStack_388 - lStack_390);
    puStack_3a8 = &UNK_0042872e;
    func_0x0099bda0(lStack_398,lStack_390,ppppppuVar16);
    *pppppppuStack_3a0 = ppppppuVar16;
code_r0x0042873c:
    puStack_3a8 = &UNK_0042874b;
    _ZdaPvSt11align_val_t(lVar5,lStack_380 - lVar5);
  }
  puStack_3a8 = &UNK_0042875d;
  pppppppuVar9 = pppppppuVar11;
  _ZdaPvSt11align_val_t(pppppppuVar11,extraout_RDX_02);
  pppppppuVar7 = extraout_RDX_02;
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_360) {
    return (uint *******)(CONCAT71((int7)((ulong)lVar2 >> 8),lVar5 != lVar2) & 0xffffffff);
  }
code_r0x00428a50:
  puStack_3a8 = &UNK_00428a55;
  func_0x0099bd00();
  pppppppuStack_3c0 = *(uint ********)(in_FS_OFFSET + 0x28);
  pppppppuStack_3b8 = pppppppuVar7;
  pppppppuStack_3b0 = pppppppuVar11;
  if (pppppppuVar9 == (uint *******)0x0) {
    puStack_3a8 = (undefined *)apcStack_330;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (auStack_3c8,&UNK_0015fda6,300,6,0,0xffffffff);
    uVar10 = _ZN7android4base10LogMessage6streamEv(auStack_3c8);
    uVar10 = func_0x0032eb30(uVar10,&UNK_001725c2,0x11);
    func_0x0032eb30(uVar10,&UNK_0015ae05,1);
    _ZN7android4base10LogMessageD2Ev(auStack_3c8);
    if (*(uint ********)(in_FS_OFFSET + 0x28) == pppppppuStack_3c0) {
      return *(uint ********)(in_FS_OFFSET + 0x28);
    }
  }
  else {
    ppppppuVar16 = pppppppuVar9[5];
    pppppppuVar9[5] = (uint ******)0x0;
    puStack_3a8 = (undefined *)apcStack_330;
    if (ppppppuVar16 != (uint ******)0x0) {
      puStack_3a8 = (undefined *)apcStack_330;
      EVP_AEAD_CTX_cleanup(ppppppuVar16);
      _ZdaPvSt11align_val_t(ppppppuVar16,0x250);
    }
    ppppppuVar16 = pppppppuVar9[4];
    pppppppuVar9[4] = (uint ******)0x0;
    if (ppppppuVar16 != (uint ******)0x0) {
      SPAKE2_CTX_free();
    }
    ppppppuVar16 = *pppppppuVar9;
    if (ppppppuVar16 != (uint ******)0x0) {
      pppppppuVar9[1] = ppppppuVar16;
      _ZdaPvSt11align_val_t(ppppppuVar16,(long)pppppppuVar9[2] - (long)ppppppuVar16);
    }
    if (*(uint ********)(in_FS_OFFSET + 0x28) == pppppppuStack_3c0) {
      pppppppuVar7 = (uint *******)free(pppppppuVar9,0x30);
      return pppppppuVar7;
    }
  }
  func_0x0099bd00();
  pcVar1 = (code *)swi(3);
  pppppppuVar7 = (uint *******)(*pcVar1)();
  return pppppppuVar7;
}


