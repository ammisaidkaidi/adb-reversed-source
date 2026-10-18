// Function: _Z19adb_get_feature_setPNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE
// Address: 0032dd90
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long _Z19adb_get_feature_setPNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE
               (ulong *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  ulong *puVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  char cVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined1 (*pauVar12) [16];
  uint *puVar13;
  undefined8 uVar14;
  char *pcVar15;
  ulong uVar16;
  undefined1 *puVar17;
  undefined8 uVar18;
  undefined *puVar19;
  ulong uVar20;
  byte bVar21;
  long lVar22;
  undefined *puVar23;
  long in_FS_OFFSET;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  uint *puStack_110;
  undefined1 auStack_108 [8];
  undefined1 auStack_100 [16];
  undefined1 *puStack_f0;
  int iStack_e4;
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  long lStack_c0;
  ulong *puStack_b8;
  byte bStack_88;
  undefined7 uStack_87;
  ulong *puStack_80;
  long lStack_78;
  undefined8 uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  lStack_28 = *(long *)(in_FS_OFFSET + 0x28);
  _ZNSt3__15mutex4lockEv(0xa00548);
  if (cRam0000000000a00588 == '\0') {
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    if (puRam0000000000a00518 == (undefined *)0x0) {
      if (puRam0000000000a00510 == (undefined *)0x0) {
        puVar23 = &UNK_0018014d;
        if (iRam00000000009c55c0 == 1) {
          puVar23 = &UNK_00167696;
        }
        puVar19 = &UNK_00165bd9;
        if (iRam00000000009c55c0 != 0) {
          puVar19 = puVar23;
        }
        puVar23 = &UNK_00183161;
      }
      else {
        puVar23 = &UNK_0018314f;
        puVar19 = puRam0000000000a00510;
      }
    }
    else {
      puVar23 = &UNK_001574b0;
      puVar19 = puRam0000000000a00518;
    }
    _ZN7android4base12StringPrintfEPKcz(&bStack_88,puVar23,puVar19,&UNK_00181813);
    cVar7 = _Z9adb_queryRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPS5_S8_b
                      (&bStack_88,&uStack_48,&uStack_68,0);
    if ((bStack_88 & 1) != 0) {
      _ZdaPvSt11align_val_t(lStack_78,CONCAT71(uStack_87,bStack_88) & 0xfffffffffffffffe);
    }
    if (cVar7 == '\0') {
      if ((param_1 != (ulong *)0x0) && (param_1 != &uStack_68)) {
        if ((*param_1 & 1) == 0) {
          if ((uStack_68 & 1) == 0) {
            param_1[2] = uStack_58;
            *param_1 = uStack_68;
            param_1[1] = uStack_60;
          }
          else {
            func_0x0032e990(param_1,uStack_58,uStack_60);
          }
        }
        else {
          uVar20 = uStack_68 >> 1 & 0x7f;
          uVar16 = (long)&uStack_68 + 1;
          if ((uStack_68 & 1) != 0) {
            uVar20 = uStack_60;
            uVar16 = uStack_58;
          }
          func_0x0032e920(param_1,uVar16,uVar20);
        }
      }
    }
    else {
      _Z18StringToFeatureSetRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE
                (&bStack_88,&uStack_48);
      puVar5 = puRam0000000000a00570;
      if (cRam0000000000a00588 == '\x01') {
        puVar4 = puRam0000000000a00578;
        if (puRam0000000000a00570 != (ulong *)0x0) {
          for (; puVar5 != puVar4; puVar4 = puVar4 + -3) {
            if ((puVar4[-3] & 1) != 0) {
              _ZdaPvSt11align_val_t(puVar4[-1],puVar4[-3] & 0xfffffffffffffffe);
            }
          }
          puRam0000000000a00578 = puVar5;
          _ZdaPvSt11align_val_t
                    (puRam0000000000a00570,lRam0000000000a00580 - (long)puRam0000000000a00570);
        }
        puRam0000000000a00570 = (ulong *)CONCAT71(uStack_87,bStack_88);
        param_1 = puVar5;
        puRam0000000000a00578 = puStack_80;
        lRam0000000000a00580 = lStack_78;
      }
      else {
        puRam0000000000a00570 = (ulong *)CONCAT71(uStack_87,bStack_88);
        cRam0000000000a00588 = '\x01';
        puRam0000000000a00578 = puStack_80;
        lRam0000000000a00580 = lStack_78;
      }
    }
    if ((uStack_68 & 1) != 0) {
      _ZdaPvSt11align_val_t(uStack_58,uStack_68 & 0xfffffffffffffffe);
    }
    if ((uStack_48 & 1) != 0) {
      _ZdaPvSt11align_val_t(uStack_38,uStack_48 & 0xfffffffffffffffe);
    }
  }
  _ZNSt3__115recursive_mutex6unlockEv(0xa00548);
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_28) {
    return 0xa00570;
  }
  func_0x0099bd00();
  lStack_c0 = *(long *)(in_FS_OFFSET + 0x28);
  puStack_b8 = param_1;
  pauVar12 = (undefined1 (*) [16])_Znwm(0x18);
  *pauVar12 = (undefined1  [16])0x0;
  *(undefined8 *)pauVar12[1] = 0;
  pauRam0000000000a00540 = pauVar12;
  iVar9 = func_0x0032d230(&UNK_00184707,0xc,0,pauVar12,0);
  puVar13 = (uint *)func_0x0099bce0();
  uVar18 = uRam0000000000a00520;
  uVar14 = func_0x0099bcf0(uRam0000000000a00520);
  bVar8 = _Z20is_local_socket_specNSt3__117basic_string_viewIcNS_11char_traitsIcEEEE(uVar18,uVar14);
  bVar21 = iVar9 != -2 | bVar8;
  if (bVar21 == 0) {
    func_0x0099bd40(&UNK_001610c0,0x25,1,_stderr);
    pauVar12 = (undefined1 (*) [16])(ulong)*puVar13;
    goto code_r0x0032e23c;
  }
  if (iVar9 == -2) {
    func_0x0099bd30(_stderr,&UNK_0017202d,uRam0000000000a00520);
    goto code_r0x0032e3e2;
  }
  iStack_e4 = 0;
  if (iVar9 < 0) {
    bVar8 = (*pauVar12)[0];
    if ((bVar8 & 1) == 0) {
      if (bVar8 >> 1 != 0x14) goto code_r0x0032e230;
    }
    else if (*(long *)(*pauVar12 + 8) != 0x14) goto code_r0x0032e230;
    if ((bVar8 & 1) == 0) {
      pcVar15 = *pauVar12 + 1;
    }
    else {
      pcVar15 = *(char **)pauVar12[1];
    }
    uVar1 = *(undefined4 *)(pcVar15 + 0x10);
    auVar25[0] = -((char)uVar1 == 'v');
    auVar25[1] = -((char)((uint)uVar1 >> 8) == 'i');
    auVar25[2] = -((char)((uint)uVar1 >> 0x10) == 'c');
    auVar25[3] = -((char)((uint)uVar1 >> 0x18) == 'e');
    auVar25[4] = 0xff;
    auVar25[5] = 0xff;
    auVar25[6] = 0xff;
    auVar25[7] = 0xff;
    auVar25[8] = 0xff;
    auVar25[9] = 0xff;
    auVar25[10] = 0xff;
    auVar25[0xb] = 0xff;
    auVar25[0xc] = 0xff;
    auVar25[0xd] = 0xff;
    auVar25[0xe] = 0xff;
    auVar25[0xf] = 0xff;
    auVar24[0] = -(*pcVar15 == 'u');
    auVar24[1] = -(pcVar15[1] == 'n');
    auVar24[2] = -(pcVar15[2] == 'k');
    auVar24[3] = -(pcVar15[3] == 'n');
    auVar24[4] = -(pcVar15[4] == 'o');
    auVar24[5] = -(pcVar15[5] == 'w');
    auVar24[6] = -(pcVar15[6] == 'n');
    auVar24[7] = -(pcVar15[7] == ' ');
    auVar24[8] = -(pcVar15[8] == 'h');
    auVar24[9] = -(pcVar15[9] == 'o');
    auVar24[10] = -(pcVar15[10] == 's');
    auVar24[0xb] = -(pcVar15[0xb] == 't');
    auVar24[0xc] = -(pcVar15[0xc] == ' ');
    auVar24[0xd] = -(pcVar15[0xd] == 's');
    auVar24[0xe] = -(pcVar15[0xe] == 'e');
    auVar24[0xf] = -(pcVar15[0xf] == 'r');
    auVar24 = auVar24 & auVar25;
    if ((ushort)((ushort)(SUB161(auVar24 >> 7,0) & 1) | (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar24 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar24 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar24 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar24 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar24 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar24 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar24 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar24 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar24 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar24[0xf] >> 7) << 0xf) == 0xffff) {
      puStack_110 = puVar13;
      iVar10 = 0;
      goto code_r0x0032e3bc;
    }
  }
  else {
    auStack_e0 = (undefined1  [16])0x0;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = auStack_d0._8_8_;
    auStack_d0 = auVar3 << 0x40;
    cVar7 = _Z18ReadProtocolStringN7android4base11borrowed_fdEPNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEES9_
                      (iVar9,auStack_e0,pauVar12);
    if (cVar7 != '\0') {
      _Z19ReadOrderlyShutdownN7android4base11borrowed_fdE(iVar9);
      puVar17 = auStack_e0 + 1;
      if ((auStack_e0[0] & 1) != 0) {
        puVar17 = (undefined1 *)auStack_d0._0_8_;
      }
      iVar10 = func_0x0099bdc0(puVar17,&UNK_00179ee3,&iStack_e4);
      if (iVar10 == 1) {
        if ((auStack_e0[0] & 1) != 0) {
          _ZdaPvSt11align_val_t(auStack_d0._0_8_,auStack_e0._0_8_ & 0xfffffffffffffffe);
        }
        iVar10 = iStack_e4;
        puVar6 = __adb_argv;
        if (iStack_e4 == 0x29) {
          pauVar12 = (undefined1 (*) [16])(ulong)*puVar13;
          puStack_110 = puVar13;
          goto code_r0x0032e23c;
        }
        puStack_110 = puVar13;
        if (bVar8 != 1 || iStack_e4 < 0x2a) goto code_r0x0032e3bc;
        iVar11 = func_0x0099bdd0(&UNK_00184714,*__adb_argv);
        if (iVar11 == 0) goto code_r0x0032e3bc;
        *puVar6 = &UNK_00184714;
        auStack_d0 = (undefined1  [16])0x0;
        auStack_e0 = (undefined1  [16])0x0;
        _Z30adb_get_server_executable_pathv(auStack_e0);
        auStack_100 = (undefined1  [16])0x0;
        puStack_f0 = (undefined1 *)0x0;
        if ((auStack_d0[8] == '\x01') &&
           (cVar7 = _ZN7android4base16ReadFileToStringERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPS7_b
                              (auStack_e0,auStack_100,0), cVar7 != '\0')) {
          puVar17 = puStack_f0;
          if ((auStack_100[0] & 1) == 0) {
            puVar17 = auStack_100 + 1;
          }
          iVar10 = func_0x0099bde0(puVar17,__adb_argv,__adb_envp);
          if ((iVar10 == -1) &&
             (cVar7 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4,0), cVar7 != '\0'))
          goto code_r0x0032e527;
        }
        if ((auStack_100[0] & 1) == 0) goto code_r0x0032e39c;
        goto code_r0x0032e38b;
      }
      puVar17 = auStack_e0 + 1;
      if ((auStack_e0[0] & 1) != 0) {
        puVar17 = (undefined1 *)auStack_d0._0_8_;
      }
      _ZN7android4base12StringPrintfEPKcz(auStack_100,&UNK_001574c9,puVar17);
      if (((*pauVar12)[0] & 1) != 0) {
        _ZdaPvSt11align_val_t(*(undefined8 *)pauVar12[1],*(ulong *)*pauVar12 & 0xfffffffffffffffe);
      }
      *(undefined1 **)pauVar12[1] = puStack_f0;
      *pauVar12 = auStack_100;
    }
    puStack_110 = puVar13;
    if ((auStack_e0[0] & 1) != 0) {
      _ZdaPvSt11align_val_t(auStack_d0._0_8_,auStack_e0._0_8_ & 0xfffffffffffffffe);
    }
  }
code_r0x0032e230:
  do {
    bVar21 = 0;
    while( true ) {
      pauVar12 = (undefined1 (*) [16])(ulong)*puVar13;
      if (iVar9 != -1) {
code_r0x0032e23c:
        func_0x0099bd10(iVar9);
      }
      *puVar13 = (uint)pauVar12;
      bRam0000000000a00538 = bVar21;
      if (*(long *)(in_FS_OFFSET + 0x28) == lStack_c0) {
        return *(long *)(in_FS_OFFSET + 0x28);
      }
      while( true ) {
        func_0x0099bd00();
code_r0x0032e527:
        uVar2 = *puStack_110;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (auStack_108,&UNK_00183124,0x141,4,0,0xffffffff);
        uVar18 = _ZN7android4base10LogMessage6streamEv(auStack_108);
        uVar18 = func_0x0032eb30(uVar18,&UNK_00184724,0x20);
        func_0x0032e5a0(uVar18,auStack_100);
        _ZN7android4base10LogMessageD2Ev(auStack_108);
        *puStack_110 = uVar2;
        if ((auStack_100[0] & 1) != 0) {
code_r0x0032e38b:
          _ZdaPvSt11align_val_t(puStack_f0,auStack_100._0_8_ & 0xfffffffffffffffe);
        }
code_r0x0032e39c:
        iVar10 = iStack_e4;
        if ((auStack_d0[8] == '\x01') && ((auStack_e0[0] & 1) != 0)) {
          _ZdaPvSt11align_val_t(auStack_d0._0_8_,auStack_e0._0_8_ & 0xfffffffffffffffe);
          iVar10 = iStack_e4;
        }
code_r0x0032e3bc:
        func_0x0099bd30(_stderr,&UNK_00178560,iVar10,0x29);
        _Z15adb_kill_serverv();
        puVar13 = puStack_110;
code_r0x0032e3e2:
        puVar23 = puRam0000000000a00528;
        if (((puRam0000000000a00528 == (undefined *)0x0) &&
            (puRam0000000000a00510 != (undefined *)0x0)) &&
           (cVar7 = _Z23is_one_device_mandatoryv(), puVar23 = puRam0000000000a00510, cVar7 == '\0'))
        {
          puVar23 = (undefined *)0x0;
        }
        uVar18 = uRam0000000000a00520;
        uVar16 = func_0x0099bcf0();
        if (uVar16 < 0xfffffffffffffff7) break;
        func_0x0032e8f0();
      }
      if (uVar16 < 0x17) {
        auStack_e0[0] = (char)uVar16 * '\x02';
        puVar17 = auStack_e0 + 1;
      }
      else {
        lVar22 = 0x1a;
        if ((uVar16 | 7) != 0x17) {
          lVar22 = (uVar16 | 7) + 1;
        }
        puVar17 = (undefined1 *)_Znwm(lVar22);
        auStack_e0._8_8_ = uVar16;
        auStack_e0._0_8_ = lVar22 + 1;
        auStack_d0._0_8_ = puVar17;
      }
      func_0x0099bd90(puVar17,uVar18,uVar16);
      puVar17[uVar16] = 0;
      iVar10 = _Z13launch_serverRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPKc
                         (auStack_e0,puVar23);
      if ((auStack_e0[0] & 1) != 0) {
        _ZdaPvSt11align_val_t(auStack_d0._0_8_,auStack_e0._0_8_ & 0xfffffffffffffffe);
      }
      puStack_110 = puVar13;
      if (iVar10 != 0) break;
      func_0x0099bd40(&UNK_00179ec4,0x1e,1,_stderr);
      bVar21 = 1;
    }
    func_0x0099bd40(&UNK_001692d4,0x19,1,_stderr);
    func_0x0032ea60(pauVar12,&UNK_00175307);
  } while( true );
}


