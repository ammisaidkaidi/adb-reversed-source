// Function: _ZN18KnownWifiHostsFile11IsKnownHostERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
// Address: 003fc5c0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Type propagation algorithm not settling */

ulong _ZN18KnownWifiHostsFile11IsKnownHostERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                (byte *param_1,byte *param_2)

{
  undefined1 *puVar1;
  byte bVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long *plVar8;
  char cVar9;
  char cVar10;
  int iVar11;
  undefined7 **ppuVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  ulong uVar15;
  ulong *extraout_RDX;
  ulong uVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  long lVar19;
  undefined1 *puVar20;
  ulong uVar21;
  undefined *puVar22;
  byte *pbVar23;
  ulong unaff_R12;
  byte *pbVar24;
  long unaff_R13;
  ulong uVar25;
  ulong *puVar26;
  long lVar27;
  long in_FS_OFFSET;
  bool bVar28;
  byte bStack_4488;
  undefined7 uStack_4487;
  undefined8 uStack_4478;
  byte bStack_4470;
  undefined7 uStack_446f;
  ulong uStack_4468;
  undefined7 *puStack_4460;
  long *plStack_4458;
  long lStack_4450;
  long lStack_4448;
  long lStack_4440;
  long lStack_4430;
  long lStack_4428;
  long lStack_4420;
  long lStack_4410;
  long lStack_4408;
  long lStack_4400;
  undefined8 uStack_43f0;
  ulong uStack_43e8;
  long lStack_43e0;
  undefined8 uStack_43d0;
  ulong uStack_43c8;
  long lStack_43c0;
  undefined8 uStack_43b0;
  ulong uStack_43a8;
  long lStack_43a0;
  long lStack_4390;
  long lStack_4388;
  undefined *puStack_4380;
  undefined *puStack_4378;
  ulong uStack_4370;
  undefined8 uStack_4368;
  undefined8 uStack_4360;
  ulong *puStack_4350;
  undefined8 uStack_4348;
  undefined8 uStack_4340;
  undefined8 uStack_4338;
  undefined8 uStack_4330;
  undefined8 uStack_4328;
  undefined8 uStack_4320;
  undefined8 uStack_4318;
  undefined8 uStack_4310;
  undefined8 uStack_4308;
  undefined8 uStack_4300;
  undefined8 uStack_42f8;
  undefined8 uStack_42f0;
  undefined8 uStack_42e8;
  undefined8 uStack_42e0;
  undefined8 uStack_42d8;
  undefined8 uStack_42d0;
  ulong uStack_42c8;
  undefined8 uStack_42c0;
  undefined8 uStack_42b8;
  undefined8 uStack_42b0;
  undefined8 uStack_42a8;
  undefined8 uStack_42a0;
  undefined8 uStack_4298;
  undefined1 auStack_4290 [8];
  undefined4 *puStack_4288;
  undefined7 **ppuStack_4280;
  undefined8 uStack_4278;
  undefined1 auStack_4270 [8];
  char cStack_4268;
  ulong uStack_4260;
  undefined8 uStack_4258;
  undefined8 uStack_4250;
  undefined1 auStack_4238 [48];
  char cStack_4208;
  char cStack_4207;
  char cStack_4206;
  undefined1 auStack_4205 [8197];
  undefined8 uStack_2200;
  ulong uStack_21f8;
  long lStack_21f0;
  undefined7 *puStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined4 *puStack_1c0;
  undefined *puStack_1b8;
  undefined1 auStack_1b0 [6];
  undefined1 auStack_1aa [2];
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  long lStack_88;
  ulong *puStack_80;
  long lStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  puStack_70 = &UNK_003fc5fc;
  _ZN18KnownWifiHostsFile4LoadEv(&uStack_68);
  puVar26 = (ulong *)(uStack_50 + 7);
  if ((uStack_50 & 1) == 0) {
    puVar26 = &uStack_50;
  }
  lVar27 = 0;
  if ((long)(int)uStack_48 != 0) {
    if ((*param_2 & 1) == 0) {
      unaff_R12 = (ulong)(*param_2 >> 1);
      param_2 = param_2 + 1;
    }
    else {
      unaff_R12 = *(ulong *)(param_2 + 8);
      param_2 = *(byte **)(param_2 + 0x10);
    }
    lVar27 = (long)(int)uStack_48 * 8;
    unaff_R13 = 0;
    do {
      param_1 = (byte *)(*(ulong *)(*(long *)((long)puVar26 + unaff_R13) + 0x18) &
                        0xfffffffffffffffc);
      bVar2 = *param_1;
      if ((bVar2 & 1) == 0) {
        uVar15 = (ulong)(bVar2 >> 1);
      }
      else {
        uVar15 = *(ulong *)(param_1 + 8);
      }
      if (uVar15 <= unaff_R12) {
        if ((bVar2 & 1) == 0) {
          param_1 = param_1 + 1;
        }
        else {
          param_1 = *(byte **)(param_1 + 0x10);
        }
        puStack_70 = &UNK_003fc64c;
        iVar11 = func_0x0099bf90(param_2);
        if (iVar11 == 0) {
          uVar15 = CONCAT71((int7)((ulong)param_2 >> 8),1);
          goto code_r0x003fc698;
        }
      }
      unaff_R13 = unaff_R13 + 8;
    } while (lVar27 != unaff_R13);
  }
  uVar15 = 0;
code_r0x003fc698:
  pbVar23 = (byte *)&uStack_68;
  puStack_70 = &UNK_003fc6a1;
  _ZN3adb5proto13AdbKnownHostsD2Ev();
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return uVar15 & 0xffffffff;
  }
  puStack_70 = &UNK_003fc6c6;
  func_0x0099bd00();
  uStack_a0 = *(ulong *)(in_FS_OFFSET + 0x28);
  uStack_42a0 = 0;
  uStack_4298 = 0;
  uStack_42b0 = 0;
  uStack_42a8 = 0;
  uStack_42c0 = 0;
  uStack_42b8 = 0;
  uStack_42d0 = 0;
  uStack_42c8 = 0;
  uStack_42e0 = 0;
  uStack_42d8 = 0;
  uStack_42f0 = 0;
  uStack_42e8 = 0;
  uStack_4300 = 0;
  uStack_42f8 = 0;
  uStack_4310 = 0;
  uStack_4308 = 0;
  uStack_4320 = 0;
  uStack_4318 = 0;
  uStack_4330 = 0;
  uStack_4328 = 0;
  uStack_4340 = 0;
  uStack_4338 = 0;
  uStack_98 = uVar15;
  uStack_90 = unaff_R12;
  lStack_88 = unaff_R13;
  puStack_80 = puVar26;
  lStack_78 = lVar27;
  puStack_70 = &stack0xfffffffffffffff8;
  _Z29mdns_get_pairing_service_infoRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE
            (&uStack_4340,pbVar23);
  if ((char)uStack_4298 == '\0') {
    uStack_4260 = 0;
    uStack_4258 = 0;
    uStack_4250 = 0;
    uStack_2200 = 0;
    uStack_21f8 = 0;
    lStack_21f0 = 0;
    auStack_4290._0_4_ = 0xffffffff;
    cVar9 = _ZN7android4base15ParseNetAddressERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPS7_PiSA_SA_
                      (pbVar23,&uStack_4260,auStack_4290,0,&uStack_2200);
    lVar27 = lStack_21f0;
    uVar15 = uStack_2200;
    if (cVar9 == '\0') {
      uVar16 = uStack_21f8;
      if ((uStack_2200 & 1) == 0) {
        uVar16 = uStack_2200 >> 1 & 0x7f;
      }
      uStack_1d0 = (undefined8 *)0x0;
      uStack_1c8 = 0;
      puStack_1c0 = (undefined4 *)0x0;
      uVar21 = uVar16 + 0x25;
      if (0xfffffffffffffff6 < uVar21) goto code_r0x003fd6dd;
      if (uVar21 < 0x17) {
        uVar25 = 0;
        uStack_1d0 = (undefined8 *)(ulong)(byte)((char)uVar21 * '\x02');
      }
      else {
        lVar19 = 0x1a;
        if ((uVar21 | 7) != 0x17) {
          lVar19 = (uVar21 | 7) + 1;
        }
        puStack_1c0 = (undefined4 *)_Znwm(lVar19);
        uStack_1d0 = (undefined8 *)(lVar19 + 1);
        uVar25 = (ulong)uStack_1d0 & 0xffffffff;
        uStack_1c8 = uVar21;
      }
      if ((uVar15 & 1) == 0) {
        lVar27 = (long)&uStack_2200 + 1;
      }
      puVar1 = (undefined1 *)((long)puStack_1c0 + 0x25);
      bVar28 = (uVar25 & 1) != 0;
      puVar18 = (undefined4 *)((long)&uStack_1d0 + 1);
      if (bVar28) {
        puVar18 = puStack_1c0;
      }
      *(undefined8 *)(puVar18 + 4) = 0x2073736572646461;
      *(undefined8 *)(puVar18 + 6) = 0x7269617020726f66;
      *puVar18 = 0x6c696146;
      puVar18[1] = 0x74206465;
      puVar18[2] = 0x6170206f;
      puVar18[3] = 0x20657372;
      *(undefined8 *)((long)puVar18 + 0x1d) = 0x203a676e69726961;
      puVar20 = auStack_1b0 + 6;
      if (bVar28) {
        puVar20 = puVar1;
      }
      func_0x0099bd90(puVar20,lVar27,uVar16);
      puVar20[uVar16] = 0;
      if ((*extraout_RDX & 1) != 0) {
        _ZdaPvSt11align_val_t(extraout_RDX[2],*extraout_RDX & 0xfffffffffffffffe);
      }
      extraout_RDX[2] = (ulong)puStack_1c0;
      *(undefined4 *)extraout_RDX = (undefined4)uStack_1d0;
      *(undefined4 *)((long)extraout_RDX + 4) = uStack_1d0._4_4_;
      *(undefined4 *)(extraout_RDX + 1) = (undefined4)uStack_1c8;
      *(undefined4 *)((long)extraout_RDX + 0xc) = uStack_1c8._4_4_;
    }
    else {
      if (0xffff0000 < auStack_4290._0_4_ - 0x10000) {
        if ((uStack_2200 & 1) != 0) {
          _ZdaPvSt11align_val_t(lStack_21f0,uStack_2200 & 0xfffffffffffffffe);
        }
        if ((uStack_4260 & 1) != 0) {
          _ZdaPvSt11align_val_t(uStack_4250,uStack_4260 & 0xfffffffffffffffe);
        }
        goto code_r0x003fc766;
      }
      bVar2 = *pbVar23;
      if ((bVar2 & 1) == 0) {
        uVar15 = (ulong)(bVar2 >> 1);
      }
      else {
        uVar15 = *(ulong *)(pbVar23 + 8);
      }
      pbVar24 = *(byte **)(pbVar23 + 0x10);
      uStack_1d0 = (undefined8 *)0x0;
      uStack_1c8 = 0;
      puStack_1c0 = (undefined4 *)0x0;
      uVar16 = uVar15 + 0x24;
      if (0xfffffffffffffff6 < uVar16) goto code_r0x003fd6dd;
      if (uVar16 < 0x17) {
        uVar21 = 0;
        uStack_1d0 = (undefined8 *)(ulong)(byte)((char)uVar16 * '\x02');
      }
      else {
        lVar27 = 0x1a;
        if ((uVar16 | 7) != 0x17) {
          lVar27 = (uVar16 | 7) + 1;
        }
        puStack_1c0 = (undefined4 *)_Znwm(lVar27);
        uStack_1d0 = (undefined8 *)(lVar27 + 1);
        uVar21 = (ulong)uStack_1d0 & 0xffffffff;
        uStack_1c8 = uVar16;
      }
      if ((bVar2 & 1) == 0) {
        pbVar24 = pbVar23 + 1;
      }
      puVar18 = puStack_1c0 + 9;
      bVar28 = (uVar21 & 1) != 0;
      puVar17 = (undefined4 *)((long)&uStack_1d0 + 1);
      if (bVar28) {
        puVar17 = puStack_1c0;
      }
      *(undefined8 *)(puVar17 + 4) = 0x697372617020656c;
      *(undefined8 *)(puVar17 + 6) = 0x657264646120676e;
      *puVar17 = 0x61766e49;
      puVar17[1] = 0x2064696c;
      puVar17[2] = 0x74726f70;
      puVar17[3] = 0x69687720;
      puVar17[8] = 0x5b207373;
      puVar17 = (undefined4 *)(auStack_1b0 + 5);
      if (bVar28) {
        puVar17 = puVar18;
      }
      func_0x0099bd90(puVar17,pbVar24,uVar15);
      *(undefined1 *)((long)puVar17 + uVar15) = 0;
      puVar13 = (undefined8 *)
                _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                          (&uStack_1d0,&UNK_00178ae2);
      uVar4 = *(undefined4 *)puVar13;
      uVar5 = *(undefined4 *)((long)puVar13 + 4);
      uVar6 = *(undefined4 *)(puVar13 + 1);
      uVar7 = *(undefined4 *)((long)puVar13 + 0xc);
      uVar15 = puVar13[2];
      *puVar13 = 0;
      puVar13[1] = 0;
      puVar13[2] = 0;
      if ((*extraout_RDX & 1) != 0) {
        _ZdaPvSt11align_val_t(extraout_RDX[2],*extraout_RDX & 0xfffffffffffffffe);
      }
      *(undefined4 *)extraout_RDX = uVar4;
      *(undefined4 *)((long)extraout_RDX + 4) = uVar5;
      *(undefined4 *)(extraout_RDX + 1) = uVar6;
      *(undefined4 *)((long)extraout_RDX + 0xc) = uVar7;
      extraout_RDX[2] = uVar15;
      if (((ulong)uStack_1d0 & 1) != 0) {
        _ZdaPvSt11align_val_t(puStack_1c0,(ulong)uStack_1d0 & 0xfffffffffffffffe);
      }
    }
    if ((uStack_2200 & 1) != 0) {
      _ZdaPvSt11align_val_t(lStack_21f0,uStack_2200 & 0xfffffffffffffffe);
    }
    if ((uStack_4260 & 1) != 0) {
      _ZdaPvSt11align_val_t(uStack_4250,uStack_4260 & 0xfffffffffffffffe);
    }
code_r0x003fd499:
    if ((char)uStack_4298 == '\x01') {
      _ZN11ServiceInfoD2Ev(&uStack_4340);
    }
    if (*(ulong *)(in_FS_OFFSET + 0x28) == uStack_a0) {
      return *(ulong *)(in_FS_OFFSET + 0x28);
    }
    func_0x0099bd00();
  }
  else {
code_r0x003fc766:
    lStack_4388 = 0;
    _Z25adb_auth_get_user_privkeyv(&lStack_4388);
    lStack_4390 = 0;
    _ZN3adb6crypto23GenerateX509CertificateEP11evp_pkey_st(&lStack_4390,lStack_4388);
    if (lStack_4390 == 0) {
      func_0x0032ea60(extraout_RDX,&UNK_00178afd);
code_r0x003fd461:
      lVar27 = lStack_4390;
      lStack_4390 = 0;
      if (lVar27 != 0) {
        X509_free();
      }
      lVar27 = lStack_4388;
      lStack_4388 = 0;
      if (lVar27 != 0) {
        EVP_PKEY_free();
      }
      goto code_r0x003fd499;
    }
    uStack_43b0 = 0;
    uStack_43a8 = 0;
    lStack_43a0 = 0;
    _ZN3adb6crypto15X509ToPEMStringEP7x509_st(&uStack_43b0);
    uStack_43d0 = 0;
    uStack_43c8 = 0;
    lStack_43c0 = 0;
    _ZN3adb6crypto3Key11ToPEMStringEP11evp_pkey_st(&uStack_43d0,lStack_4388);
    func_0x0099bdb0(&uStack_2200,0,0x2000);
    uStack_43f0 = 0;
    uStack_43e8 = 0;
    lStack_43e0 = 0;
    _Z20adb_auth_get_userkeyv(&uStack_43f0);
    uVar16 = uStack_43f0 >> 1 & 0x7f;
    uVar15 = uStack_43e8;
    if ((uStack_43f0 & 1) == 0) {
      uVar15 = uVar16;
    }
    if (0x1ffe < uVar15) {
      do {
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (&uStack_4260,&UNK_001896a0,0xd2,6,0,0xffffffff);
        uVar14 = _ZN7android4base10LogMessage6streamEv(&uStack_4260);
        uVar14 = func_0x0032eb30(uVar14,&UNK_00165d45,0xe);
        uVar14 = func_0x0032eb30(uVar14,&UNK_001596f8,0x11);
        uVar14 = func_0x0032eb30(uVar14,&UNK_0015ae05,1);
        uVar14 = func_0x0032eb30(uVar14,&UNK_00184995,2);
        uVar14 = func_0x0032eb30(uVar14,&UNK_0015ae05,1);
        uVar14 = func_0x0032eb30(uVar14,&UNK_0018ae80,0x1c);
        uVar14 = func_0x0032eb30(uVar14,&UNK_00177244,0x14);
        uVar14 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar14,uVar15);
        uVar14 = func_0x0032eb30(uVar14,&UNK_001835a3,0x1f);
        uVar14 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar14,0x1ffe);
        func_0x0032eb30(uVar14,&UNK_0017b788,2);
        _ZN7android4base10LogMessageD2Ev(&uStack_4260);
      } while( true );
    }
    uVar15 = uStack_43e8;
    lVar27 = lStack_43e0;
    if ((uStack_43f0 & 1) == 0) {
      uVar15 = uVar16;
      lVar27 = (long)&uStack_43f0 + 1;
    }
    func_0x0099c110((long)&uStack_2200 + 1,lVar27,uVar15,0x1fff);
    bVar28 = (*param_1 & 1) != 0;
    pbVar24 = param_1 + 1;
    if (bVar28) {
      pbVar24 = *(byte **)(param_1 + 0x10);
    }
    uVar15 = (ulong)(*param_1 >> 1);
    if (bVar28) {
      uVar15 = *(ulong *)(param_1 + 8);
    }
    lStack_4410 = 0;
    lStack_4408 = 0;
    lStack_4400 = 0;
    if (uVar15 == 0) {
code_r0x003fc9af:
      uVar15 = uStack_43b0 >> 1 & 0x7f;
      lVar27 = (long)&uStack_43b0 + 1;
      if ((uStack_43b0 & 1) != 0) {
        uVar15 = uStack_43a8;
        lVar27 = lStack_43a0;
      }
      lStack_4430 = 0;
      lStack_4428 = 0;
      lStack_4420 = 0;
      if (uVar15 != 0) {
        if ((long)uVar15 < 0) goto code_r0x003fd6d8;
        lStack_4430 = _Znwm(uVar15);
        lVar19 = lStack_4430 + uVar15;
        lStack_4420 = lVar19;
        func_0x0099bda0(lStack_4430,lVar27,uVar15);
        lStack_4428 = lVar19;
      }
      uVar15 = uStack_43d0 >> 1 & 0x7f;
      lVar27 = (long)&uStack_43d0 + 1;
      if ((uStack_43d0 & 1) != 0) {
        uVar15 = uStack_43c8;
        lVar27 = lStack_43c0;
      }
      lStack_4450 = 0;
      lStack_4448 = 0;
      lStack_4440 = 0;
      if (uVar15 != 0) {
        if ((long)uVar15 < 0) goto code_r0x003fd6d8;
        lStack_4450 = _Znwm(uVar15);
        lVar19 = lStack_4450 + uVar15;
        lStack_4440 = lVar19;
        func_0x0099bda0(lStack_4450,lVar27,uVar15);
        lStack_4448 = lVar19;
      }
      plStack_4458 = (long *)0x0;
      _ZN7adbwifi7pairing13PairingClient6CreateERKNSt3__16vectorIhNS2_9allocatorIhEEEERK8PeerInfoS8_S8_
                (&plStack_4458,&lStack_4410,&uStack_2200,&lStack_4430,&lStack_4450);
      if (plStack_4458 == (long *)0x0) {
        func_0x0032ea60(extraout_RDX,&UNK_00186750);
      }
      else {
        func_0x0099bdb0(&uStack_4260,0,0x2060);
        uStack_4348 = 1;
        puStack_4350 = &uStack_4260;
        _ZNSt3__15mutex4lockEv(&uStack_4260);
        plVar8 = plStack_4458;
        cVar9 = (char)uStack_4298;
        if ((char)uStack_4298 == '\x01') {
          _ZNK11ServiceInfo17v4_address_stringEv(&bStack_4470,&uStack_4340);
          puStack_200 = &uStack_446f;
          uStack_1f8 = (ulong)(bStack_4470 >> 1);
          if ((bStack_4470 & 1) != 0) {
            uStack_1f8 = uStack_4468;
            puStack_200 = puStack_4460;
          }
          uStack_1f0 = uStack_42c8 & 0xffff;
          uStack_1e0 = 0xcd;
          uStack_1e8 = 0;
          uStack_1d0 = &uStack_1a8;
          uStack_b8 = 0;
          uStack_b0 = 0;
          uStack_c8 = 0;
          uStack_c0 = 0;
          uStack_d8 = 0;
          uStack_d0 = 0;
          uStack_e8 = 0;
          uStack_e0 = 0;
          uStack_f8 = 0;
          uStack_f0 = 0;
          uStack_108 = 0;
          uStack_100 = 0;
          uStack_118 = 0;
          uStack_110 = 0;
          uStack_128 = 0;
          uStack_120 = 0;
          uStack_138 = 0;
          uStack_130 = 0;
          uStack_148 = 0;
          uStack_140 = 0;
          uStack_158 = 0;
          uStack_150 = 0;
          uStack_168 = 0;
          uStack_160 = 0;
          uStack_178 = 0;
          uStack_170 = 0;
          uStack_188 = 0;
          uStack_180 = 0;
          uStack_198 = 0;
          uStack_190 = 0;
          uStack_1a8 = 0;
          uStack_1a0 = 0;
          uStack_1c8 = 0x100;
          puStack_1c0 = (undefined4 *)0x0;
          puStack_1b8 = &UNK_00358010;
          _auStack_1b0 = 0;
          puStack_4380 = &UNK_0015c911;
          puStack_4378 = &UNK_0015c916;
          uStack_4370 = uStack_4370 & 0xffffffff00000000;
          uStack_4368 = 0;
          uStack_4360 = 2;
          puStack_4288 = (undefined4 *)0x2;
          ppuStack_4280 = &puStack_200;
          uStack_4278 = 0xcd;
          auStack_4290 = (undefined1  [8])&uStack_1d0;
          auStack_4270[0] = 0;
          cStack_4268 = '\0';
          puStack_a8 = uStack_1d0;
          func_0x003580e0(&puStack_4380,auStack_4290);
          if (cStack_4268 == '\x01') {
            _ZNSt3__16localeD2Ev(auStack_4270);
          }
          puVar13 = puStack_a8;
          puVar18 = puStack_1c0;
          if ((undefined4 *)0xfffffffffffffff6 < puStack_1c0) goto code_r0x003fd6dd;
          if (puStack_1c0 < (undefined4 *)0x17) {
            auStack_4290[0] = (char)puStack_1c0 * '\x02';
            ppuVar12 = (undefined7 **)(auStack_4290 + 1);
          }
          else {
            lVar27 = 0x1a;
            if (((ulong)puStack_1c0 | 7) != 0x17) {
              lVar27 = ((ulong)puStack_1c0 | 7) + 1;
            }
            ppuVar12 = (undefined7 **)_Znwm(lVar27);
            auStack_4290 = (undefined1  [8])(lVar27 + 1);
            puStack_4288 = puVar18;
            ppuStack_4280 = ppuVar12;
          }
          func_0x0099bd90(ppuVar12,puVar13,puVar18);
          *(undefined1 *)((long)ppuVar12 + (long)puVar18) = 0;
          if (puVar13 != &uStack_1a8) {
            _ZdaPvSt11align_val_t(puVar13,uStack_1c8);
          }
        }
        else if ((*pbVar23 & 1) == 0) {
          ppuStack_4280 = *(undefined7 ***)(pbVar23 + 0x10);
          auStack_4290 = *(undefined1 (*) [8])pbVar23;
          puStack_4288 = *(undefined4 **)(pbVar23 + 8);
        }
        else {
          func_0x00330340(auStack_4290,*(undefined8 *)(pbVar23 + 0x10),*(undefined8 *)(pbVar23 + 8))
          ;
        }
        puVar18 = (undefined4 *)((ulong)auStack_4290 >> 1 & 0x7f);
        ppuVar12 = (undefined7 **)(auStack_4290 + 1);
        if (((ulong)auStack_4290 & 1) != 0) {
          puVar18 = puStack_4288;
          ppuVar12 = ppuStack_4280;
        }
        cVar10 = (**(code **)(*plVar8 + 0x10))
                           (plVar8,ppuVar12,puVar18,_ZN19PairingResultWaiter8OnResultEPK8PeerInfoPv,
                            &uStack_4260);
        if (((ulong)auStack_4290 & 1) != 0) {
          _ZdaPvSt11align_val_t(ppuStack_4280,(ulong)auStack_4290 & 0xfffffffffffffffe);
        }
        if ((cVar9 != '\0') && ((bStack_4470 & 1) != 0)) {
          _ZdaPvSt11align_val_t(puStack_4460,CONCAT71(uStack_446f,bStack_4470) & 0xfffffffffffffffe)
          ;
        }
        if (cVar10 == '\0') {
          puVar22 = &UNK_0016ed21;
code_r0x003fd37b:
          func_0x0032ea60(extraout_RDX,puVar22);
code_r0x003fd383:
        }
        else {
          if (cStack_4207 == '\0') {
            do {
              _ZNSt3__118condition_variable4waitERNS_11unique_lockINS_5mutexEEE
                        (auStack_4238,&puStack_4350);
            } while (cStack_4207 != '\x01');
          }
          if (cStack_4208 == '\0') {
            puVar22 = &UNK_00181c4a;
            goto code_r0x003fd37b;
          }
          if (cStack_4206 == '\x01') {
            uStack_1d0 = (undefined8 *)0x0;
            uStack_1c8 = 0;
            puStack_1c0 = (undefined4 *)0x0;
            _ZN4absl12lts_2026052612NoDestructorINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEEC2IJRA28_KcETnNS2_9enable_ifIXntsr3std7is_sameIFvDpRu7__decayIT_EEFvRS9_EEE5valueEiE4typeELi0EEEDpOSF_
                      (&uStack_1d0,auStack_4205);
            _ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                      (&bStack_4488,&UNK_0017d722,pbVar23);
            puVar13 = (undefined8 *)
                      _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                                (&bStack_4488,&UNK_00178b2b);
            uStack_4370 = puVar13[2];
            puStack_4380 = (undefined *)*puVar13;
            puStack_4378 = (undefined *)puVar13[1];
            *puVar13 = 0;
            puVar13[1] = 0;
            puVar13[2] = 0;
            puVar13 = (undefined8 *)func_0x0032e820(&puStack_4380,&uStack_1d0);
            uStack_1f0 = puVar13[2];
            puStack_200 = (undefined7 *)*puVar13;
            uStack_1f8 = puVar13[1];
            *puVar13 = 0;
            puVar13[1] = 0;
            puVar13[2] = 0;
            puVar13 = (undefined8 *)
                      _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                                (&puStack_200,&UNK_00178ae2);
            ppuStack_4280 = (undefined7 **)puVar13[2];
            auStack_4290 = (undefined1  [8])*puVar13;
            puStack_4288 = (undefined4 *)puVar13[1];
            *puVar13 = 0;
            puVar13[1] = 0;
            puVar13[2] = 0;
            func_0x00353730(extraout_RDX,auStack_4290);
            if (((ulong)auStack_4290 & 1) != 0) {
              _ZdaPvSt11align_val_t(ppuStack_4280,(ulong)auStack_4290 & 0xfffffffffffffffe);
            }
            if (((ulong)puStack_200 & 1) != 0) {
              _ZdaPvSt11align_val_t(uStack_1f0,(ulong)puStack_200 & 0xfffffffffffffffe);
            }
            if (((ulong)puStack_4380 & 1) != 0) {
              _ZdaPvSt11align_val_t(uStack_4370,(ulong)puStack_4380 & 0xfffffffffffffffe);
            }
            if ((bStack_4488 & 1) != 0) {
              _ZdaPvSt11align_val_t
                        (uStack_4478,CONCAT71(uStack_4487,bStack_4488) & 0xfffffffffffffffe);
            }
            _ZN18KnownWifiHostsFile12AddKnownHostERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                      (known_wifi_hosts_file,&uStack_1d0);
            _Z34adb_secure_connect_by_service_nameRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE
                      (&uStack_1d0);
            if (((ulong)uStack_1d0 & 1) != 0) {
              _ZdaPvSt11align_val_t(puStack_1c0,(ulong)uStack_1d0 & 0xfffffffffffffffe);
              goto joined_r0x003fd545;
            }
            goto code_r0x003fd383;
          }
          func_0x0032ea60(extraout_RDX,&UNK_001660a3);
          func_0x003fd7e0(extraout_RDX,(int)cStack_4206);
        }
joined_r0x003fd545:
        if ((char)uStack_4348 == '\x01') {
          _ZNSt3__115recursive_mutex6unlockEv(puStack_4350);
        }
        _ZNSt3__118condition_variableD2Ev(auStack_4238);
      }
      plVar8 = plStack_4458;
      plStack_4458 = (long *)0x0;
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 8))();
      }
      if (lStack_4450 != 0) {
        lStack_4448 = lStack_4450;
        _ZdaPvSt11align_val_t(lStack_4450,lStack_4440 - lStack_4450);
      }
      if (lStack_4430 != 0) {
        lStack_4428 = lStack_4430;
        _ZdaPvSt11align_val_t(lStack_4430,lStack_4420 - lStack_4430);
      }
      if (lStack_4410 != 0) {
        lStack_4408 = lStack_4410;
        _ZdaPvSt11align_val_t(lStack_4410,lStack_4400 - lStack_4410);
      }
      if ((uStack_43f0 & 1) != 0) {
        _ZdaPvSt11align_val_t(lStack_43e0,uStack_43f0 & 0xfffffffffffffffe);
      }
      if ((uStack_43d0 & 1) != 0) {
        _ZdaPvSt11align_val_t(lStack_43c0,uStack_43d0 & 0xfffffffffffffffe);
      }
      if ((uStack_43b0 & 1) != 0) {
        _ZdaPvSt11align_val_t(lStack_43a0,uStack_43b0 & 0xfffffffffffffffe);
      }
      goto code_r0x003fd461;
    }
    if (-1 < (long)uVar15) {
      lStack_4410 = _Znwm(uVar15);
      lVar27 = lStack_4410 + uVar15;
      lStack_4400 = lVar27;
      func_0x0099bda0(lStack_4410,pbVar24,uVar15);
      lStack_4408 = lVar27;
      goto code_r0x003fc9af;
    }
  }
code_r0x003fd6d8:
  func_0x00330ca0();
code_r0x003fd6dd:
  func_0x0032e8f0();
  pcVar3 = (code *)swi(3);
  uVar15 = (*pcVar3)();
  return uVar15;
}


