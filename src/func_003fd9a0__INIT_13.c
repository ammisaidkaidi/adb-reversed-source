// Function: _INIT_13
// Address: 003fd9a0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Type propagation algorithm not settling */

ulong _INIT_13(void)

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
  undefined8 *puVar12;
  undefined7 **ppuVar13;
  undefined8 uVar14;
  ulong uVar15;
  ulong *extraout_RDX;
  undefined4 *puVar16;
  undefined4 *puVar17;
  long lVar18;
  undefined1 *puVar19;
  ulong uVar20;
  byte *pbVar21;
  byte *pbVar22;
  undefined *puVar23;
  byte *pbVar24;
  ulong unaff_R12;
  ulong uVar25;
  long unaff_R13;
  ulong uVar26;
  ulong *puVar27;
  long lVar28;
  long in_FS_OFFSET;
  bool bVar29;
  byte bStack_44f0;
  undefined7 uStack_44ef;
  undefined8 uStack_44e0;
  byte bStack_44d8;
  undefined7 uStack_44d7;
  ulong uStack_44d0;
  undefined7 *puStack_44c8;
  long *plStack_44c0;
  long lStack_44b8;
  long lStack_44b0;
  long lStack_44a8;
  long lStack_4498;
  long lStack_4490;
  long lStack_4488;
  long lStack_4478;
  long lStack_4470;
  long lStack_4468;
  undefined8 uStack_4458;
  ulong uStack_4450;
  long lStack_4448;
  undefined8 uStack_4438;
  ulong uStack_4430;
  long lStack_4428;
  undefined8 uStack_4418;
  ulong uStack_4410;
  long lStack_4408;
  long lStack_43f8;
  long lStack_43f0;
  undefined *puStack_43e8;
  undefined *puStack_43e0;
  ulong uStack_43d8;
  undefined8 uStack_43d0;
  undefined8 uStack_43c8;
  ulong *puStack_43b8;
  undefined8 uStack_43b0;
  undefined8 uStack_43a8;
  undefined8 uStack_43a0;
  undefined8 uStack_4398;
  undefined8 uStack_4390;
  undefined8 uStack_4388;
  undefined8 uStack_4380;
  undefined8 uStack_4378;
  undefined8 uStack_4370;
  undefined8 uStack_4368;
  undefined8 uStack_4360;
  undefined8 uStack_4358;
  undefined8 uStack_4350;
  undefined8 uStack_4348;
  undefined8 uStack_4340;
  undefined8 uStack_4338;
  ulong uStack_4330;
  undefined8 uStack_4328;
  undefined8 uStack_4320;
  undefined8 uStack_4318;
  undefined8 uStack_4310;
  undefined8 uStack_4308;
  undefined8 uStack_4300;
  undefined1 auStack_42f8 [8];
  undefined4 *puStack_42f0;
  undefined7 **ppuStack_42e8;
  undefined8 uStack_42e0;
  undefined1 auStack_42d8 [8];
  char cStack_42d0;
  ulong uStack_42c8;
  undefined8 uStack_42c0;
  undefined8 uStack_42b8;
  undefined1 auStack_42a0 [48];
  char cStack_4270;
  char cStack_426f;
  char cStack_426e;
  undefined1 auStack_426d [8197];
  undefined8 uStack_2268;
  ulong uStack_2260;
  long lStack_2258;
  undefined7 *puStack_268;
  ulong uStack_260;
  ulong uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined4 *puStack_228;
  undefined *puStack_220;
  undefined1 auStack_218 [6];
  undefined1 auStack_212 [2];
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
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
  undefined8 *puStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  long lStack_f0;
  ulong *puStack_e8;
  long lStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined1 *puStack_98;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_58;
  ulong uStack_50;
  byte *pbStack_48;
  byte bStack_38;
  undefined4 uStack_37;
  undefined2 uStack_33;
  undefined1 uStack_31;
  ulong uStack_30;
  byte *pbStack_28;
  ulong uStack_20;
  
  uStack_20 = *(ulong *)(in_FS_OFFSET + 0x28);
  puStack_70 = &UNK_003fc494;
  _Z24adb_get_android_dir_pathv(&uStack_58);
  if ((uStack_58 & 1) == 0) {
    uVar26 = 0x16;
    if ((byte)uStack_58 == 0x2c) {
code_r0x003fc4cc:
      uStack_68 = 0;
      puStack_70 = &UNK_003fc4ee;
      _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__grow_byEmmmmmm
                (&uStack_58,uVar26,1,uVar26,uVar26,0);
      uVar15 = uVar26;
      goto code_r0x003fc4f1;
    }
    uVar15 = (ulong)((byte)uStack_58 >> 1);
    uStack_58 = CONCAT71(uStack_58._1_7_,(byte)uStack_58 + 2);
    pbVar22 = (byte *)((long)&uStack_58 + 1);
  }
  else {
    uVar26 = (uStack_58 & 0xfffffffffffffffe) - 1;
    uVar15 = uStack_50;
    if (uStack_50 == uVar26) goto code_r0x003fc4cc;
code_r0x003fc4f1:
    uStack_50 = uVar15 + 1;
    pbVar22 = pbStack_48;
  }
  (pbVar22 + uVar15)[0] = 0x2f;
  (pbVar22 + uVar15)[1] = 0;
  pbStack_28 = pbStack_48;
  bStack_38 = (byte)uStack_58;
  uStack_37 = uStack_58._1_4_;
  uStack_33 = uStack_58._5_2_;
  uStack_31 = uStack_58._7_1_;
  uStack_30 = uStack_50;
  uStack_58 = 0;
  uStack_50 = 0;
  pbStack_48 = (byte *)0x0;
  pbVar21 = &UNK_001579bb;
  pbVar22 = &bStack_38;
  puStack_70 = &UNK_003fc54e;
  puVar12 = (undefined8 *)
            _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc();
  known_wifi_hosts_file._16_8_ = puVar12[2];
  known_wifi_hosts_file._0_8_ = *puVar12;
  known_wifi_hosts_file._8_8_ = puVar12[1];
  *puVar12 = 0;
  puVar12[1] = 0;
  puVar12[2] = 0;
  if ((bStack_38 & 1) != 0) {
    pbVar21 = (byte *)(CONCAT17(uStack_31,CONCAT25(uStack_33,CONCAT41(uStack_37,bStack_38))) &
                      0xfffffffffffffffe);
    puStack_70 = &UNK_003fc581;
    pbVar22 = pbStack_28;
    _ZdaPvSt11align_val_t();
  }
  if ((uStack_58 & 1) != 0) {
    pbVar21 = (byte *)(uStack_58 & 0xfffffffffffffffe);
    puStack_70 = &UNK_003fc598;
    pbVar22 = pbStack_48;
    _ZdaPvSt11align_val_t();
  }
  if (*(ulong *)(in_FS_OFFSET + 0x28) == uStack_20) {
    return *(ulong *)(in_FS_OFFSET + 0x28);
  }
  puStack_70 = &UNK_003fc5b5;
  func_0x0099bd00();
  puStack_98 = known_wifi_hosts_file;
  lStack_a0 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  puStack_d8 = &UNK_003fc5fc;
  puStack_70 = &stack0xfffffffffffffff8;
  _ZN18KnownWifiHostsFile4LoadEv(&uStack_d0);
  puVar27 = (ulong *)(uStack_b8 + 7);
  if ((uStack_b8 & 1) == 0) {
    puVar27 = &uStack_b8;
  }
  lVar28 = 0;
  if ((long)(int)uStack_b0 != 0) {
    if ((*pbVar21 & 1) == 0) {
      unaff_R12 = (ulong)(*pbVar21 >> 1);
      pbVar21 = pbVar21 + 1;
    }
    else {
      unaff_R12 = *(ulong *)(pbVar21 + 8);
      pbVar21 = *(byte **)(pbVar21 + 0x10);
    }
    lVar28 = (long)(int)uStack_b0 * 8;
    unaff_R13 = 0;
    do {
      pbVar22 = (byte *)(*(ulong *)(*(long *)((long)puVar27 + unaff_R13) + 0x18) &
                        0xfffffffffffffffc);
      bVar2 = *pbVar22;
      if ((bVar2 & 1) == 0) {
        uVar15 = (ulong)(bVar2 >> 1);
      }
      else {
        uVar15 = *(ulong *)(pbVar22 + 8);
      }
      if (uVar15 <= unaff_R12) {
        if ((bVar2 & 1) == 0) {
          pbVar22 = pbVar22 + 1;
        }
        else {
          pbVar22 = *(byte **)(pbVar22 + 0x10);
        }
        puStack_d8 = &UNK_003fc64c;
        iVar11 = func_0x0099bf90(pbVar21);
        if (iVar11 == 0) {
          uVar15 = CONCAT71((int7)((ulong)pbVar21 >> 8),1);
          goto code_r0x003fc698;
        }
      }
      unaff_R13 = unaff_R13 + 8;
    } while (lVar28 != unaff_R13);
  }
  uVar15 = 0;
code_r0x003fc698:
  pbVar21 = (byte *)&uStack_d0;
  puStack_d8 = &UNK_003fc6a1;
  _ZN3adb5proto13AdbKnownHostsD2Ev();
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_a0) {
    return uVar15 & 0xffffffff;
  }
  puStack_d8 = &UNK_003fc6c6;
  func_0x0099bd00();
  uStack_108 = *(ulong *)(in_FS_OFFSET + 0x28);
  uStack_4308 = 0;
  uStack_4300 = 0;
  uStack_4318 = 0;
  uStack_4310 = 0;
  uStack_4328 = 0;
  uStack_4320 = 0;
  uStack_4338 = 0;
  uStack_4330 = 0;
  uStack_4348 = 0;
  uStack_4340 = 0;
  uStack_4358 = 0;
  uStack_4350 = 0;
  uStack_4368 = 0;
  uStack_4360 = 0;
  uStack_4378 = 0;
  uStack_4370 = 0;
  uStack_4388 = 0;
  uStack_4380 = 0;
  uStack_4398 = 0;
  uStack_4390 = 0;
  uStack_43a8 = 0;
  uStack_43a0 = 0;
  uStack_100 = uVar15;
  uStack_f8 = unaff_R12;
  lStack_f0 = unaff_R13;
  puStack_e8 = puVar27;
  lStack_e0 = lVar28;
  puStack_d8 = (undefined *)&puStack_70;
  _Z29mdns_get_pairing_service_infoRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE
            (&uStack_43a8,pbVar21);
  if ((char)uStack_4300 == '\0') {
    uStack_42c8 = 0;
    uStack_42c0 = 0;
    uStack_42b8 = 0;
    uStack_2268 = 0;
    uStack_2260 = 0;
    lStack_2258 = 0;
    auStack_42f8._0_4_ = 0xffffffff;
    cVar9 = _ZN7android4base15ParseNetAddressERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPS7_PiSA_SA_
                      (pbVar21,&uStack_42c8,auStack_42f8,0,&uStack_2268);
    lVar28 = lStack_2258;
    uVar15 = uStack_2268;
    if (cVar9 == '\0') {
      uVar26 = uStack_2260;
      if ((uStack_2268 & 1) == 0) {
        uVar26 = uStack_2268 >> 1 & 0x7f;
      }
      uStack_238 = (undefined8 *)0x0;
      uStack_230 = 0;
      puStack_228 = (undefined4 *)0x0;
      uVar20 = uVar26 + 0x25;
      if (0xfffffffffffffff6 < uVar20) goto code_r0x003fd6dd;
      if (uVar20 < 0x17) {
        uVar25 = 0;
        uStack_238 = (undefined8 *)(ulong)(byte)((char)uVar20 * '\x02');
      }
      else {
        lVar18 = 0x1a;
        if ((uVar20 | 7) != 0x17) {
          lVar18 = (uVar20 | 7) + 1;
        }
        puStack_228 = (undefined4 *)_Znwm(lVar18);
        uStack_238 = (undefined8 *)(lVar18 + 1);
        uVar25 = (ulong)uStack_238 & 0xffffffff;
        uStack_230 = uVar20;
      }
      if ((uVar15 & 1) == 0) {
        lVar28 = (long)&uStack_2268 + 1;
      }
      puVar1 = (undefined1 *)((long)puStack_228 + 0x25);
      bVar29 = (uVar25 & 1) != 0;
      puVar17 = (undefined4 *)((long)&uStack_238 + 1);
      if (bVar29) {
        puVar17 = puStack_228;
      }
      *(undefined8 *)(puVar17 + 4) = 0x2073736572646461;
      *(undefined8 *)(puVar17 + 6) = 0x7269617020726f66;
      *puVar17 = 0x6c696146;
      puVar17[1] = 0x74206465;
      puVar17[2] = 0x6170206f;
      puVar17[3] = 0x20657372;
      *(undefined8 *)((long)puVar17 + 0x1d) = 0x203a676e69726961;
      puVar19 = auStack_218 + 6;
      if (bVar29) {
        puVar19 = puVar1;
      }
      func_0x0099bd90(puVar19,lVar28,uVar26);
      puVar19[uVar26] = 0;
      if ((*extraout_RDX & 1) != 0) {
        _ZdaPvSt11align_val_t(extraout_RDX[2],*extraout_RDX & 0xfffffffffffffffe);
      }
      extraout_RDX[2] = (ulong)puStack_228;
      *(undefined4 *)extraout_RDX = (undefined4)uStack_238;
      *(undefined4 *)((long)extraout_RDX + 4) = uStack_238._4_4_;
      *(undefined4 *)(extraout_RDX + 1) = (undefined4)uStack_230;
      *(undefined4 *)((long)extraout_RDX + 0xc) = uStack_230._4_4_;
    }
    else {
      if (0xffff0000 < auStack_42f8._0_4_ - 0x10000) {
        if ((uStack_2268 & 1) != 0) {
          _ZdaPvSt11align_val_t(lStack_2258,uStack_2268 & 0xfffffffffffffffe);
        }
        if ((uStack_42c8 & 1) != 0) {
          _ZdaPvSt11align_val_t(uStack_42b8,uStack_42c8 & 0xfffffffffffffffe);
        }
        goto code_r0x003fc766;
      }
      bVar2 = *pbVar21;
      if ((bVar2 & 1) == 0) {
        uVar15 = (ulong)(bVar2 >> 1);
      }
      else {
        uVar15 = *(ulong *)(pbVar21 + 8);
      }
      pbVar22 = *(byte **)(pbVar21 + 0x10);
      uStack_238 = (undefined8 *)0x0;
      uStack_230 = 0;
      puStack_228 = (undefined4 *)0x0;
      uVar26 = uVar15 + 0x24;
      if (0xfffffffffffffff6 < uVar26) goto code_r0x003fd6dd;
      if (uVar26 < 0x17) {
        uVar20 = 0;
        uStack_238 = (undefined8 *)(ulong)(byte)((char)uVar26 * '\x02');
      }
      else {
        lVar28 = 0x1a;
        if ((uVar26 | 7) != 0x17) {
          lVar28 = (uVar26 | 7) + 1;
        }
        puStack_228 = (undefined4 *)_Znwm(lVar28);
        uStack_238 = (undefined8 *)(lVar28 + 1);
        uVar20 = (ulong)uStack_238 & 0xffffffff;
        uStack_230 = uVar26;
      }
      if ((bVar2 & 1) == 0) {
        pbVar22 = pbVar21 + 1;
      }
      puVar17 = puStack_228 + 9;
      bVar29 = (uVar20 & 1) != 0;
      puVar16 = (undefined4 *)((long)&uStack_238 + 1);
      if (bVar29) {
        puVar16 = puStack_228;
      }
      *(undefined8 *)(puVar16 + 4) = 0x697372617020656c;
      *(undefined8 *)(puVar16 + 6) = 0x657264646120676e;
      *puVar16 = 0x61766e49;
      puVar16[1] = 0x2064696c;
      puVar16[2] = 0x74726f70;
      puVar16[3] = 0x69687720;
      puVar16[8] = 0x5b207373;
      puVar16 = (undefined4 *)(auStack_218 + 5);
      if (bVar29) {
        puVar16 = puVar17;
      }
      func_0x0099bd90(puVar16,pbVar22,uVar15);
      *(undefined1 *)((long)puVar16 + uVar15) = 0;
      puVar12 = (undefined8 *)
                _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                          (&uStack_238,&UNK_00178ae2);
      uVar4 = *(undefined4 *)puVar12;
      uVar5 = *(undefined4 *)((long)puVar12 + 4);
      uVar6 = *(undefined4 *)(puVar12 + 1);
      uVar7 = *(undefined4 *)((long)puVar12 + 0xc);
      uVar15 = puVar12[2];
      *puVar12 = 0;
      puVar12[1] = 0;
      puVar12[2] = 0;
      if ((*extraout_RDX & 1) != 0) {
        _ZdaPvSt11align_val_t(extraout_RDX[2],*extraout_RDX & 0xfffffffffffffffe);
      }
      *(undefined4 *)extraout_RDX = uVar4;
      *(undefined4 *)((long)extraout_RDX + 4) = uVar5;
      *(undefined4 *)(extraout_RDX + 1) = uVar6;
      *(undefined4 *)((long)extraout_RDX + 0xc) = uVar7;
      extraout_RDX[2] = uVar15;
      if (((ulong)uStack_238 & 1) != 0) {
        _ZdaPvSt11align_val_t(puStack_228,(ulong)uStack_238 & 0xfffffffffffffffe);
      }
    }
    if ((uStack_2268 & 1) != 0) {
      _ZdaPvSt11align_val_t(lStack_2258,uStack_2268 & 0xfffffffffffffffe);
    }
    if ((uStack_42c8 & 1) != 0) {
      _ZdaPvSt11align_val_t(uStack_42b8,uStack_42c8 & 0xfffffffffffffffe);
    }
code_r0x003fd499:
    if ((char)uStack_4300 == '\x01') {
      _ZN11ServiceInfoD2Ev(&uStack_43a8);
    }
    if (*(ulong *)(in_FS_OFFSET + 0x28) == uStack_108) {
      return *(ulong *)(in_FS_OFFSET + 0x28);
    }
    func_0x0099bd00();
  }
  else {
code_r0x003fc766:
    lStack_43f0 = 0;
    _Z25adb_auth_get_user_privkeyv(&lStack_43f0);
    lStack_43f8 = 0;
    _ZN3adb6crypto23GenerateX509CertificateEP11evp_pkey_st(&lStack_43f8,lStack_43f0);
    if (lStack_43f8 == 0) {
      func_0x0032ea60(extraout_RDX,&UNK_00178afd);
code_r0x003fd461:
      lVar28 = lStack_43f8;
      lStack_43f8 = 0;
      if (lVar28 != 0) {
        X509_free();
      }
      lVar28 = lStack_43f0;
      lStack_43f0 = 0;
      if (lVar28 != 0) {
        EVP_PKEY_free();
      }
      goto code_r0x003fd499;
    }
    uStack_4418 = 0;
    uStack_4410 = 0;
    lStack_4408 = 0;
    _ZN3adb6crypto15X509ToPEMStringEP7x509_st(&uStack_4418);
    uStack_4438 = 0;
    uStack_4430 = 0;
    lStack_4428 = 0;
    _ZN3adb6crypto3Key11ToPEMStringEP11evp_pkey_st(&uStack_4438,lStack_43f0);
    func_0x0099bdb0(&uStack_2268,0,0x2000);
    uStack_4458 = 0;
    uStack_4450 = 0;
    lStack_4448 = 0;
    _Z20adb_auth_get_userkeyv(&uStack_4458);
    uVar26 = uStack_4458 >> 1 & 0x7f;
    uVar15 = uStack_4450;
    if ((uStack_4458 & 1) == 0) {
      uVar15 = uVar26;
    }
    if (0x1ffe < uVar15) {
      do {
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (&uStack_42c8,&UNK_001896a0,0xd2,6,0,0xffffffff);
        uVar14 = _ZN7android4base10LogMessage6streamEv(&uStack_42c8);
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
        _ZN7android4base10LogMessageD2Ev(&uStack_42c8);
      } while( true );
    }
    uVar15 = uStack_4450;
    lVar28 = lStack_4448;
    if ((uStack_4458 & 1) == 0) {
      uVar15 = uVar26;
      lVar28 = (long)&uStack_4458 + 1;
    }
    func_0x0099c110((long)&uStack_2268 + 1,lVar28,uVar15,0x1fff);
    bVar29 = (*pbVar22 & 1) != 0;
    pbVar24 = pbVar22 + 1;
    if (bVar29) {
      pbVar24 = *(byte **)(pbVar22 + 0x10);
    }
    uVar15 = (ulong)(*pbVar22 >> 1);
    if (bVar29) {
      uVar15 = *(ulong *)(pbVar22 + 8);
    }
    lStack_4478 = 0;
    lStack_4470 = 0;
    lStack_4468 = 0;
    if (uVar15 == 0) {
code_r0x003fc9af:
      uVar15 = uStack_4418 >> 1 & 0x7f;
      lVar28 = (long)&uStack_4418 + 1;
      if ((uStack_4418 & 1) != 0) {
        uVar15 = uStack_4410;
        lVar28 = lStack_4408;
      }
      lStack_4498 = 0;
      lStack_4490 = 0;
      lStack_4488 = 0;
      if (uVar15 != 0) {
        if ((long)uVar15 < 0) goto code_r0x003fd6d8;
        lStack_4498 = _Znwm(uVar15);
        lVar18 = lStack_4498 + uVar15;
        lStack_4488 = lVar18;
        func_0x0099bda0(lStack_4498,lVar28,uVar15);
        lStack_4490 = lVar18;
      }
      uVar15 = uStack_4438 >> 1 & 0x7f;
      lVar28 = (long)&uStack_4438 + 1;
      if ((uStack_4438 & 1) != 0) {
        uVar15 = uStack_4430;
        lVar28 = lStack_4428;
      }
      lStack_44b8 = 0;
      lStack_44b0 = 0;
      lStack_44a8 = 0;
      if (uVar15 != 0) {
        if ((long)uVar15 < 0) goto code_r0x003fd6d8;
        lStack_44b8 = _Znwm(uVar15);
        lVar18 = lStack_44b8 + uVar15;
        lStack_44a8 = lVar18;
        func_0x0099bda0(lStack_44b8,lVar28,uVar15);
        lStack_44b0 = lVar18;
      }
      plStack_44c0 = (long *)0x0;
      _ZN7adbwifi7pairing13PairingClient6CreateERKNSt3__16vectorIhNS2_9allocatorIhEEEERK8PeerInfoS8_S8_
                (&plStack_44c0,&lStack_4478,&uStack_2268,&lStack_4498,&lStack_44b8);
      if (plStack_44c0 == (long *)0x0) {
        func_0x0032ea60(extraout_RDX,&UNK_00186750);
      }
      else {
        func_0x0099bdb0(&uStack_42c8,0,0x2060);
        uStack_43b0 = 1;
        puStack_43b8 = &uStack_42c8;
        _ZNSt3__15mutex4lockEv(&uStack_42c8);
        plVar8 = plStack_44c0;
        cVar9 = (char)uStack_4300;
        if ((char)uStack_4300 == '\x01') {
          _ZNK11ServiceInfo17v4_address_stringEv(&bStack_44d8,&uStack_43a8);
          puStack_268 = &uStack_44d7;
          uStack_260 = (ulong)(bStack_44d8 >> 1);
          if ((bStack_44d8 & 1) != 0) {
            uStack_260 = uStack_44d0;
            puStack_268 = puStack_44c8;
          }
          uStack_258 = uStack_4330 & 0xffff;
          uStack_248 = 0xcd;
          uStack_250 = 0;
          uStack_238 = &uStack_210;
          uStack_120 = 0;
          uStack_118 = 0;
          uStack_130 = 0;
          uStack_128 = 0;
          uStack_140 = 0;
          uStack_138 = 0;
          uStack_150 = 0;
          uStack_148 = 0;
          uStack_160 = 0;
          uStack_158 = 0;
          uStack_170 = 0;
          uStack_168 = 0;
          uStack_180 = 0;
          uStack_178 = 0;
          uStack_190 = 0;
          uStack_188 = 0;
          uStack_1a0 = 0;
          uStack_198 = 0;
          uStack_1b0 = 0;
          uStack_1a8 = 0;
          uStack_1c0 = 0;
          uStack_1b8 = 0;
          uStack_1d0 = 0;
          uStack_1c8 = 0;
          uStack_1e0 = 0;
          uStack_1d8 = 0;
          uStack_1f0 = 0;
          uStack_1e8 = 0;
          uStack_200 = 0;
          uStack_1f8 = 0;
          uStack_210 = 0;
          uStack_208 = 0;
          uStack_230 = 0x100;
          puStack_228 = (undefined4 *)0x0;
          puStack_220 = &UNK_00358010;
          _auStack_218 = 0;
          puStack_43e8 = &UNK_0015c911;
          puStack_43e0 = &UNK_0015c916;
          uStack_43d8 = uStack_43d8 & 0xffffffff00000000;
          uStack_43d0 = 0;
          uStack_43c8 = 2;
          puStack_42f0 = (undefined4 *)0x2;
          ppuStack_42e8 = &puStack_268;
          uStack_42e0 = 0xcd;
          auStack_42f8 = (undefined1  [8])&uStack_238;
          auStack_42d8[0] = 0;
          cStack_42d0 = '\0';
          puStack_110 = uStack_238;
          func_0x003580e0(&puStack_43e8,auStack_42f8);
          if (cStack_42d0 == '\x01') {
            _ZNSt3__16localeD2Ev(auStack_42d8);
          }
          puVar12 = puStack_110;
          puVar17 = puStack_228;
          if ((undefined4 *)0xfffffffffffffff6 < puStack_228) goto code_r0x003fd6dd;
          if (puStack_228 < (undefined4 *)0x17) {
            auStack_42f8[0] = (char)puStack_228 * '\x02';
            ppuVar13 = (undefined7 **)(auStack_42f8 + 1);
          }
          else {
            lVar28 = 0x1a;
            if (((ulong)puStack_228 | 7) != 0x17) {
              lVar28 = ((ulong)puStack_228 | 7) + 1;
            }
            ppuVar13 = (undefined7 **)_Znwm(lVar28);
            auStack_42f8 = (undefined1  [8])(lVar28 + 1);
            puStack_42f0 = puVar17;
            ppuStack_42e8 = ppuVar13;
          }
          func_0x0099bd90(ppuVar13,puVar12,puVar17);
          *(undefined1 *)((long)ppuVar13 + (long)puVar17) = 0;
          if (puVar12 != &uStack_210) {
            _ZdaPvSt11align_val_t(puVar12,uStack_230);
          }
        }
        else if ((*pbVar21 & 1) == 0) {
          ppuStack_42e8 = *(undefined7 ***)(pbVar21 + 0x10);
          auStack_42f8 = *(undefined1 (*) [8])pbVar21;
          puStack_42f0 = *(undefined4 **)(pbVar21 + 8);
        }
        else {
          func_0x00330340(auStack_42f8,*(undefined8 *)(pbVar21 + 0x10),*(undefined8 *)(pbVar21 + 8))
          ;
        }
        puVar17 = (undefined4 *)((ulong)auStack_42f8 >> 1 & 0x7f);
        ppuVar13 = (undefined7 **)(auStack_42f8 + 1);
        if (((ulong)auStack_42f8 & 1) != 0) {
          puVar17 = puStack_42f0;
          ppuVar13 = ppuStack_42e8;
        }
        cVar10 = (**(code **)(*plVar8 + 0x10))
                           (plVar8,ppuVar13,puVar17,_ZN19PairingResultWaiter8OnResultEPK8PeerInfoPv,
                            &uStack_42c8);
        if (((ulong)auStack_42f8 & 1) != 0) {
          _ZdaPvSt11align_val_t(ppuStack_42e8,(ulong)auStack_42f8 & 0xfffffffffffffffe);
        }
        if ((cVar9 != '\0') && ((bStack_44d8 & 1) != 0)) {
          _ZdaPvSt11align_val_t(puStack_44c8,CONCAT71(uStack_44d7,bStack_44d8) & 0xfffffffffffffffe)
          ;
        }
        if (cVar10 == '\0') {
          puVar23 = &UNK_0016ed21;
code_r0x003fd37b:
          func_0x0032ea60(extraout_RDX,puVar23);
code_r0x003fd383:
        }
        else {
          if (cStack_426f == '\0') {
            do {
              _ZNSt3__118condition_variable4waitERNS_11unique_lockINS_5mutexEEE
                        (auStack_42a0,&puStack_43b8);
            } while (cStack_426f != '\x01');
          }
          if (cStack_4270 == '\0') {
            puVar23 = &UNK_00181c4a;
            goto code_r0x003fd37b;
          }
          if (cStack_426e == '\x01') {
            uStack_238 = (undefined8 *)0x0;
            uStack_230 = 0;
            puStack_228 = (undefined4 *)0x0;
            _ZN4absl12lts_2026052612NoDestructorINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEEC2IJRA28_KcETnNS2_9enable_ifIXntsr3std7is_sameIFvDpRu7__decayIT_EEFvRS9_EEE5valueEiE4typeELi0EEEDpOSF_
                      (&uStack_238,auStack_426d);
            _ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                      (&bStack_44f0,&UNK_0017d722,pbVar21);
            puVar12 = (undefined8 *)
                      _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                                (&bStack_44f0,&UNK_00178b2b);
            uStack_43d8 = puVar12[2];
            puStack_43e8 = (undefined *)*puVar12;
            puStack_43e0 = (undefined *)puVar12[1];
            *puVar12 = 0;
            puVar12[1] = 0;
            puVar12[2] = 0;
            puVar12 = (undefined8 *)func_0x0032e820(&puStack_43e8,&uStack_238);
            uStack_258 = puVar12[2];
            puStack_268 = (undefined7 *)*puVar12;
            uStack_260 = puVar12[1];
            *puVar12 = 0;
            puVar12[1] = 0;
            puVar12[2] = 0;
            puVar12 = (undefined8 *)
                      _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                                (&puStack_268,&UNK_00178ae2);
            ppuStack_42e8 = (undefined7 **)puVar12[2];
            auStack_42f8 = (undefined1  [8])*puVar12;
            puStack_42f0 = (undefined4 *)puVar12[1];
            *puVar12 = 0;
            puVar12[1] = 0;
            puVar12[2] = 0;
            func_0x00353730(extraout_RDX,auStack_42f8);
            if (((ulong)auStack_42f8 & 1) != 0) {
              _ZdaPvSt11align_val_t(ppuStack_42e8,(ulong)auStack_42f8 & 0xfffffffffffffffe);
            }
            if (((ulong)puStack_268 & 1) != 0) {
              _ZdaPvSt11align_val_t(uStack_258,(ulong)puStack_268 & 0xfffffffffffffffe);
            }
            if (((ulong)puStack_43e8 & 1) != 0) {
              _ZdaPvSt11align_val_t(uStack_43d8,(ulong)puStack_43e8 & 0xfffffffffffffffe);
            }
            if ((bStack_44f0 & 1) != 0) {
              _ZdaPvSt11align_val_t
                        (uStack_44e0,CONCAT71(uStack_44ef,bStack_44f0) & 0xfffffffffffffffe);
            }
            _ZN18KnownWifiHostsFile12AddKnownHostERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                      (known_wifi_hosts_file,&uStack_238);
            _Z34adb_secure_connect_by_service_nameRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE
                      (&uStack_238);
            if (((ulong)uStack_238 & 1) != 0) {
              _ZdaPvSt11align_val_t(puStack_228,(ulong)uStack_238 & 0xfffffffffffffffe);
              goto joined_r0x003fd545;
            }
            goto code_r0x003fd383;
          }
          func_0x0032ea60(extraout_RDX,&UNK_001660a3);
          func_0x003fd7e0(extraout_RDX,(int)cStack_426e);
        }
joined_r0x003fd545:
        if ((char)uStack_43b0 == '\x01') {
          _ZNSt3__115recursive_mutex6unlockEv(puStack_43b8);
        }
        _ZNSt3__118condition_variableD2Ev(auStack_42a0);
      }
      plVar8 = plStack_44c0;
      plStack_44c0 = (long *)0x0;
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 8))();
      }
      if (lStack_44b8 != 0) {
        lStack_44b0 = lStack_44b8;
        _ZdaPvSt11align_val_t(lStack_44b8,lStack_44a8 - lStack_44b8);
      }
      if (lStack_4498 != 0) {
        lStack_4490 = lStack_4498;
        _ZdaPvSt11align_val_t(lStack_4498,lStack_4488 - lStack_4498);
      }
      if (lStack_4478 != 0) {
        lStack_4470 = lStack_4478;
        _ZdaPvSt11align_val_t(lStack_4478,lStack_4468 - lStack_4478);
      }
      if ((uStack_4458 & 1) != 0) {
        _ZdaPvSt11align_val_t(lStack_4448,uStack_4458 & 0xfffffffffffffffe);
      }
      if ((uStack_4438 & 1) != 0) {
        _ZdaPvSt11align_val_t(lStack_4428,uStack_4438 & 0xfffffffffffffffe);
      }
      if ((uStack_4418 & 1) != 0) {
        _ZdaPvSt11align_val_t(lStack_4408,uStack_4418 & 0xfffffffffffffffe);
      }
      goto code_r0x003fd461;
    }
    if (-1 < (long)uVar15) {
      lStack_4478 = _Znwm(uVar15);
      lVar28 = lStack_4478 + uVar15;
      lStack_4468 = lVar28;
      func_0x0099bda0(lStack_4478,pbVar24,uVar15);
      lStack_4470 = lVar28;
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


