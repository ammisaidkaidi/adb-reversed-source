// Function: _Z21init_emulator_scannerRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE
// Address: 0040c220
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Type propagation algorithm not settling */

undefined *
_Z21init_emulator_scannerRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE
          (uint *param_1)

{
  long *plVar1;
  undefined4 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  char cVar11;
  uint uVar12;
  uint *puVar13;
  long lVar14;
  uint *puVar15;
  undefined1 *puVar16;
  ulong uVar17;
  undefined4 *puVar18;
  undefined8 uVar19;
  long lVar20;
  uint *******pppppppuVar21;
  uint *******pppppppuVar22;
  undefined *puVar23;
  uint extraout_EDX;
  uint *puVar24;
  uint *******pppppppuVar25;
  ulong extraout_RDX;
  int iVar26;
  uint *puVar27;
  ulong uVar28;
  undefined8 uVar29;
  undefined8 *puVar30;
  ulong uVar31;
  long *plVar32;
  uint uVar33;
  undefined1 *puVar34;
  uint *puVar35;
  undefined4 *puVar36;
  uint *******pppppppuVar37;
  undefined1 *unaff_R15;
  long lVar38;
  long in_FS_OFFSET;
  long lVar39;
  uint uStack_238;
  uint uStack_234;
  long lStack_230;
  uint *puStack_228;
  uint *******pppppppuStack_220;
  uint *******pppppppuStack_218;
  undefined *puStack_210;
  undefined8 uStack_208;
  undefined *puStack_200;
  undefined8 uStack_1f0;
  uint uStack_1e4;
  uint *******apppppppuStack_1e0 [2];
  undefined8 uStack_1d0;
  long lStack_1c8;
  long *plStack_1c0;
  uint uStack_1b8;
  undefined1 uStack_1b1;
  uint *******pppppppuStack_1b0;
  long lStack_1a8;
  uint *puStack_1a0;
  uint *puStack_198;
  long lStack_190;
  uint *puStack_188;
  long lStack_180;
  code *pcStack_178;
  undefined1 auStack_170 [15];
  undefined1 uStack_161;
  undefined8 uStack_160;
  undefined4 *puStack_158;
  undefined4 *puStack_150;
  undefined1 uStack_148;
  undefined7 uStack_147;
  char cStack_140;
  undefined7 uStack_13f;
  undefined1 uStack_138;
  undefined1 uStack_137;
  undefined8 *puStack_130;
  undefined8 *puStack_128;
  undefined8 *puStack_120;
  uint *puStack_118;
  undefined1 *puStack_110;
  undefined4 *puStack_108;
  uint *puStack_100;
  undefined1 *puStack_f8;
  undefined *puStack_f0;
  undefined4 uStack_e4;
  ulong uStack_e0;
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  undefined *puStack_38;
  
  puStack_38 = *(undefined **)(in_FS_OFFSET + 0x28);
  puVar36 = &adb_trace_mask;
  puVar34 = adb_trace_severity;
  if ((((byte)adb_trace_mask & 8) != 0) && ((int)adb_trace_severity._12_4_ < 2)) {
    puStack_f0 = &UNK_0040c653;
    cVar11 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
    if (cVar11 != '\0') {
      puStack_f0 = &UNK_0040c660;
      puVar18 = (undefined4 *)func_0x0099bce0();
      uStack_e4 = *puVar18;
      unaff_R15 = auStack_d8;
      puStack_f0 = &UNK_0040c694;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i(unaff_R15,&UNK_0015b284,0xfa,1,0);
      puStack_f0 = &UNK_0040c69c;
      uVar19 = _ZN7android4base10LogMessage6streamEv(unaff_R15);
      puStack_f0 = &UNK_0040c6b0;
      uVar19 = func_0x0032eb30(uVar19,&UNK_00167c7f,0x1e);
      puStack_f0 = &UNK_0040c6bb;
      uVar19 = func_0x0032e5a0(uVar19,param_1);
      puStack_f0 = &UNK_0040c6cf;
      func_0x0032eb30(uVar19,&UNK_00162c6d,1);
      puStack_f0 = &UNK_0040c6d7;
      _ZN7android4base10LogMessageD2Ev(unaff_R15);
      *puVar18 = uStack_e4;
    }
  }
  puVar15 = (uint *)auStack_d8;
  puStack_f0 = &UNK_0040c27e;
  func_0x0040d440(puVar15,&UNK_0040c7a0,param_1);
  puStack_f0 = &UNK_0040c286;
  _ZNSt3__16thread6detachEv(puVar15);
  puStack_f0 = &UNK_0040c28e;
  _ZNSt3__16threadD2Ev(puVar15);
  puStack_f0 = &UNK_0040c29a;
  puVar13 = (uint *)func_0x0099be70(&UNK_0018aef0);
  puStack_118 = param_1;
  if (puVar13 == (uint *)0x0) goto code_r0x0040c622;
  puStack_f0 = &UNK_0040c2ae;
  lVar14 = func_0x0099bcf0(puVar13);
  puVar35 = (uint *)((long)puVar13 + lVar14);
  puVar24 = puVar13;
  puStack_118 = puVar13;
  puVar27 = puVar35;
  if (lVar14 == 0) {
code_r0x0040c2d5:
    if ((puVar24 == puVar35) || (puVar27 = puVar24, 9 < (byte)((char)*puVar24 - 0x30U)))
    goto code_r0x0040c3b8;
    auStack_48 = (undefined1  [16])0x0;
    auStack_58 = (undefined1  [16])0x0;
    auStack_68 = (undefined1  [16])0x0;
    auStack_78 = (undefined1  [16])0x0;
    auStack_88 = (undefined1  [16])0x0;
    auStack_98 = (undefined1  [16])0x0;
    auStack_a8 = (undefined1  [16])0x0;
    auStack_b8 = (undefined1  [16])0x0;
    auStack_c8 = (undefined1  [16])0x0;
    auStack_d8 = (undefined1  [16])0x0;
    lVar14 = 0x14;
    while (uVar12 = *puVar24, 0xf5 < (byte)((char)uVar12 - 0x3aU)) {
      puVar24 = (uint *)((long)puVar24 + 1);
      (&uStack_e0)[lVar14] = (ulong)(byte)((char)uVar12 - 0x30);
      lVar14 = lVar14 + -1;
      if ((lVar14 == 0) || (puVar24 == puVar35)) break;
    }
    unaff_R15 = (undefined1 *)((lVar14 << 0x20) >> 0x1d);
    uVar28 = *(ulong *)(auStack_d8 + (long)unaff_R15);
    if ((int)lVar14 < 0x12) {
      uVar17 = 0;
      if (unaff_R15 < (undefined1 *)0x89) {
        uVar17 = 0x88 - (long)unaff_R15;
      }
      if (uVar17 < 0x18) {
        plVar32 = (long *)&UNK_0018fd78;
        puVar16 = unaff_R15;
      }
      else {
        uVar12 = ((uint)(uVar17 >> 3) & 0x1fffffff) + 1;
        uVar33 = uVar12 & 0x3c;
        plVar32 = (long *)(&UNK_0018fd78 + uVar33 * 8);
        puVar16 = unaff_R15 + uVar33 * 8;
        lVar39 = 0;
        lVar38 = 0;
        lVar20 = 0;
        puVar15 = (uint *)0x0;
        do {
          uVar17 = *(ulong *)(auStack_d8 + 8 + (long)unaff_R15 + (long)puVar15 * 8);
          uVar31 = *(ulong *)((long)(auStack_d8 + 8 + (long)unaff_R15 + (long)puVar15 * 8) + 8);
          uVar5 = *(ulong *)(auStack_c8 + 8 + (long)unaff_R15 + (long)puVar15 * 8);
          uVar6 = *(ulong *)((long)(auStack_c8 + 8 + (long)unaff_R15 + (long)puVar15 * 8) + 8);
          uVar7 = *(ulong *)(&UNK_0018fd78 + (long)puVar15 * 8);
          uVar8 = *(ulong *)(&UNK_0018fd80 + (long)puVar15 * 8);
          uVar9 = *(ulong *)(&UNK_0018fd88 + (long)puVar15 * 8);
          uVar10 = *(ulong *)(&UNK_0018fd90 + (long)puVar15 * 8);
          uVar28 = uVar28 + (uVar7 & 0xffffffff) * (uVar17 & 0xffffffff) +
                   ((uVar17 >> 0x20) * (uVar7 & 0xffffffff) +
                    (uVar7 >> 0x20) * (uVar17 & 0xffffffff) << 0x20);
          lVar39 = lVar39 + (uVar8 & 0xffffffff) * (uVar31 & 0xffffffff) +
                   ((uVar31 >> 0x20) * (uVar8 & 0xffffffff) +
                    (uVar8 >> 0x20) * (uVar31 & 0xffffffff) << 0x20);
          lVar38 = lVar38 + (uVar9 & 0xffffffff) * (uVar5 & 0xffffffff) +
                   ((uVar5 >> 0x20) * (uVar9 & 0xffffffff) + (uVar9 >> 0x20) * (uVar5 & 0xffffffff)
                   << 0x20);
          lVar20 = lVar20 + (uVar10 & 0xffffffff) * (uVar6 & 0xffffffff) +
                   ((uVar6 >> 0x20) * (uVar10 & 0xffffffff) +
                    (uVar10 >> 0x20) * (uVar6 & 0xffffffff) << 0x20);
          puVar15 = puVar15 + 1;
        } while ((uint *)(ulong)uVar33 != puVar15);
        uVar28 = lVar20 + lVar39 + lVar38 + uVar28;
        if (uVar12 == uVar33) goto code_r0x0040c5af;
      }
      puVar16 = puVar16 + -8;
      do {
        uVar28 = uVar28 + *plVar32 * *(long *)(auStack_c8 + (long)puVar16);
        plVar32 = plVar32 + 1;
        puVar16 = puVar16 + 8;
      } while (puVar16 < (undefined1 *)0x88);
    }
code_r0x0040c5af:
    auVar3._8_8_ = 0;
    auVar3._0_8_ = auStack_48._8_8_;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = *(ulong *)(&UNK_0018fd70 + (0x1300000000 - (lVar14 << 0x20) >> 0x1d));
    uVar17 = SUB168(auVar3 * auVar4,0);
    puVar27 = (uint *)((long)puVar24 - (ulong)(SUB168(auVar3 * auVar4,8) != 0));
    if (puVar27 == puVar35) {
      puVar24 = (uint *)(uVar28 + uVar17);
      if (CARRY8(uVar28,uVar17)) goto code_r0x0040c60f;
code_r0x0040c603:
      uVar17 = uVar17 + uVar28;
      if (puVar27 != puVar35) goto code_r0x0040c60f;
      goto code_r0x0040c3cc;
    }
    puVar24 = (uint *)CONCAT71((int7)(uVar28 + uVar17 >> 8),CARRY8(uVar28,uVar17));
    if ((9 < (byte)((char)*puVar27 - 0x30U)) && (!CARRY8(uVar28,uVar17))) goto code_r0x0040c603;
  }
  else {
    do {
      if ((char)*puVar24 != '0') goto code_r0x0040c2d5;
      puVar24 = (uint *)((long)puVar24 + 1);
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
code_r0x0040c3b8:
    if ((puVar27 != puVar13) && (uVar17 = 0, puVar27 == puVar35)) {
code_r0x0040c3cc:
      if (uVar17 < 0x10000) {
        iRam00000000009fa5e0 = (int)uVar17;
        if ((((byte)adb_trace_mask & 8) != 0) && ((int)adb_trace_severity._12_4_ < 2)) {
          puStack_f0 = &UNK_0040c401;
          cVar11 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0,puVar24);
          if (cVar11 != '\0') {
            puStack_f0 = &UNK_0040c40e;
            puVar13 = (uint *)func_0x0099bce0();
            uVar12 = *puVar13;
            puVar34 = (undefined1 *)(ulong)uVar12;
            puStack_f0 = &UNK_0040c43d;
            _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                      (&uStack_e0,&UNK_0015b284,0x3d,1,0,0xffffffff);
            puStack_f0 = &UNK_0040c445;
            puVar15 = (uint *)_ZN7android4base10LogMessage6streamEv(&uStack_e0);
            unaff_R15 = auStack_d8;
            puStack_f0 = &UNK_0040c466;
            _ZN7android4base12StringPrintfEPKcz(unaff_R15,&UNK_0015b2f1,iRam00000000009fa5e0);
            puStack_f0 = &UNK_0040c471;
            func_0x0032e5a0(puVar15,unaff_R15);
            if ((auStack_d8[0] & 1) != 0) {
              puStack_f0 = &UNK_0040c491;
              _ZdaPvSt11align_val_t(auStack_c8._0_8_,auStack_d8._0_8_ & 0xfffffffffffffffe);
            }
            puStack_f0 = &UNK_0040c49d;
            _ZN7android4base10LogMessageD2Ev(&uStack_e0);
            *puVar13 = uVar12;
            puStack_118 = puVar13;
          }
        }
        goto code_r0x0040c622;
      }
    }
  }
code_r0x0040c60f:
  if ((((byte)adb_trace_mask & 8) != 0) && ((int)adb_trace_severity._12_4_ < 2)) {
    puStack_f0 = &UNK_0040c6f1;
    cVar11 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0,puVar24);
    if (cVar11 != '\0') {
      puStack_f0 = &UNK_0040c6fe;
      puVar15 = (uint *)func_0x0099bce0();
      uVar12 = *puVar15;
      puVar36 = (undefined4 *)(ulong)uVar12;
      puStack_f0 = &UNK_0040c72d;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&uStack_e0,&UNK_0015b284,0x41,1,0,0xffffffff);
      puStack_f0 = &UNK_0040c735;
      unaff_R15 = (undefined1 *)_ZN7android4base10LogMessage6streamEv(&uStack_e0);
      puVar34 = auStack_d8;
      puStack_f0 = &UNK_0040c753;
      _ZN7android4base12StringPrintfEPKcz(puVar34,&UNK_001756d1,puVar13);
      puStack_f0 = &UNK_0040c75e;
      func_0x0032e5a0(unaff_R15,puVar34);
      if ((auStack_d8[0] & 1) != 0) {
        puStack_f0 = &UNK_0040c77e;
        _ZdaPvSt11align_val_t(auStack_c8._0_8_,auStack_d8._0_8_ & 0xfffffffffffffffe);
      }
      puStack_f0 = &UNK_0040c78a;
      _ZN7android4base10LogMessageD2Ev(&uStack_e0);
      *puVar15 = uVar12;
    }
  }
code_r0x0040c622:
  if (*(undefined **)(in_FS_OFFSET + 0x28) == puStack_38) {
    return *(undefined **)(in_FS_OFFSET + 0x28);
  }
  puStack_f0 = &UNK_0040c797;
  func_0x0099bd00();
  uStack_148 = 0x20;
  uStack_147 = 0x6f74616c756d65;
  cStack_140 = 0x72;
  uStack_13f = 0x656e6e6163735f;
  uStack_138 = 0x72;
  uStack_137 = 0;
  pcStack_178 = (code *)&UNK_0040c7d9;
  puStack_110 = puVar34;
  puStack_108 = puVar36;
  puStack_100 = puVar15;
  puStack_f8 = unaff_R15;
  puStack_f0 = &stack0xfffffffffffffff8;
  func_0x0099c310(auStack_170,&uStack_147,0xf);
  uStack_161 = 0;
  pcStack_178 = (code *)&UNK_0040c7e2;
  uVar19 = func_0x0099c320();
  pcStack_178 = (code *)&UNK_0040c7ed;
  func_0x0099c330(uVar19,auStack_170);
  if (0x15b2 < iRam00000000009fa5e0) {
    iVar26 = 0x15b3;
    do {
      pcStack_178 = (code *)&UNK_0040c807;
      _Z16connect_emulatori(iVar26);
      iVar26 = iVar26 + 2;
    } while (iVar26 <= iRam00000000009fa5e0);
  }
  do {
    uStack_13f = 0;
    uStack_148 = (undefined1)retry_ports_lock;
    uStack_147 = (undefined7)((ulong)retry_ports_lock >> 8);
    cStack_140 = '\x01';
    pcStack_178 = (code *)&UNK_0040c838;
    _ZNSt3__15mutex4lockEv();
    puVar15 = (uint *)*puRam0000000000a00880;
    puVar13 = (uint *)puRam0000000000a00880[1];
    if (puVar15 == puVar13) {
      do {
        pcStack_178 = (code *)&UNK_0040c85c;
        _ZNSt3__118condition_variable4waitERNS_11unique_lockINS_5mutexEEE
                  (retry_ports_cond,&uStack_148);
        puVar15 = (uint *)*puRam0000000000a00880;
        puVar13 = (uint *)puRam0000000000a00880[1];
      } while (puVar15 == puVar13);
    }
    puVar30 = puRam0000000000a00880;
    *puRam0000000000a00880 = 0;
    puVar30[1] = 0;
    uVar19 = puVar30[2];
    puVar30[2] = 0;
    if (cStack_140 == '\x01') {
      pcStack_178 = (code *)&UNK_0040c890;
      _ZNSt3__115recursive_mutex6unlockEv(CONCAT71(uStack_147,uStack_148));
    }
    uStack_148 = 0;
    uStack_147 = 0x3b9aca;
    pcStack_178 = (code *)&UNK_0040c8a1;
    _ZNSt3__111this_thread9sleep_forERKNS_6chrono8durationIxNS_5ratioILl1ELl1000000000EEEEE
              (&uStack_148);
    if (puVar15 == puVar13) {
      puVar36 = (undefined4 *)0x0;
      puVar30 = (undefined8 *)0x0;
      puStack_130 = (undefined8 *)0x0;
    }
    else {
      puStack_130 = (undefined8 *)0x0;
      puVar30 = (undefined8 *)0x0;
      puVar36 = (undefined4 *)0x0;
      puVar35 = puVar15;
      uStack_160 = uVar19;
      do {
        if ((((byte)adb_trace_mask & 8) != 0) && ((int)adb_trace_severity._12_4_ < 2)) {
          pcStack_178 = (code *)&UNK_0040ca76;
          cVar11 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
          if (cVar11 != '\0') {
            pcStack_178 = (code *)&UNK_0040ca83;
            puStack_128 = (undefined8 *)func_0x0099bce0();
            puStack_120 = (undefined8 *)CONCAT44(puStack_120._4_4_,*(undefined4 *)puStack_128);
            pcStack_178 = (code *)&UNK_0040caaf;
            _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                      (&uStack_148,&UNK_0015b284,0xe4,1,0,0xffffffff);
            pcStack_178 = (code *)&UNK_0040cab8;
            uVar19 = _ZN7android4base10LogMessage6streamEv(&uStack_148);
            pcStack_178 = (code *)&UNK_0040cacc;
            uVar19 = func_0x0032eb30(uVar19,&UNK_0018046f,0xb);
            pcStack_178 = (code *)&UNK_0040cad8;
            uVar19 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(uVar19,*puVar35);
            pcStack_178 = (code *)&UNK_0040caec;
            uVar19 = func_0x0032eb30(uVar19,&UNK_001867dc,0x13);
            pcStack_178 = (code *)&UNK_0040caf9;
            _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj(uVar19);
            pcStack_178 = (code *)&UNK_0040cb02;
            _ZN7android4base10LogMessageD2Ev(&uStack_148);
            *(undefined4 *)puStack_128 = puStack_120._0_4_;
          }
        }
        uVar28 = (ulong)*puVar35;
        pcStack_178 = (code *)&UNK_0040c924;
        cVar11 = _Z16connect_emulatori();
        if (cVar11 == '\0') {
          puVar24 = puVar35 + 1;
          *puVar24 = *puVar24 - 1;
          if (*puVar24 == 0) {
            if ((((byte)adb_trace_mask & 8) != 0) && ((int)adb_trace_severity._12_4_ < 2)) {
              pcStack_178 = (code *)&UNK_0040c9f1;
              cVar11 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
              if (cVar11 != '\0') {
                pcStack_178 = (code *)&UNK_0040c9fe;
                puStack_128 = (undefined8 *)func_0x0099bce0();
                puStack_120 = (undefined8 *)CONCAT44(puStack_120._4_4_,*(undefined4 *)puStack_128);
                pcStack_178 = (code *)&UNK_0040ca2a;
                _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                          (&uStack_148,&UNK_0015b284,0xed,1,0,0xffffffff);
                pcStack_178 = (code *)&UNK_0040ca33;
                uVar19 = _ZN7android4base10LogMessage6streamEv(&uStack_148);
                pcStack_178 = (code *)&UNK_0040ca47;
                uVar19 = func_0x0032eb30(uVar19,&UNK_0015fd1a,0x13);
                pcStack_178 = (code *)&UNK_0040ca53;
                _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(uVar19);
                goto code_r0x0040ca53;
              }
            }
          }
          else {
            if (puStack_130 <= puVar30) {
              lVar14 = (long)puVar30 - (long)puVar36;
              lVar38 = lVar14 >> 3;
              uVar17 = lVar38 + 1;
              if (uVar17 < 0x2000000000000000) {
                puStack_130 = (undefined8 *)((long)puStack_130 - (long)puVar36);
                uVar31 = (long)puStack_130 >> 2;
                if ((ulong)((long)puStack_130 >> 2) <= uVar17) {
                  uVar31 = uVar17;
                }
                if ((undefined8 *)0x7ffffffffffffff7 < puStack_130) {
                  uVar31 = 0x1fffffffffffffff;
                }
                if (uVar31 < 0x2000000000000000) {
                  pcStack_178 = (code *)&UNK_0040cb7c;
                  puStack_158 = puVar36;
                  puStack_120 = (undefined8 *)uVar31;
                  lVar20 = _Znwm(uVar31 * 8);
                  puVar36 = puStack_158;
                  puStack_120 = (undefined8 *)(lVar20 + (long)puStack_120 * 8);
                  *(undefined8 *)(lVar20 + lVar14) = *(undefined8 *)puVar35;
                  puStack_128 = (undefined8 *)(lVar20 + lVar14 + 8);
                  puStack_150 = (undefined4 *)(lVar20 + lVar14 + lVar38 * -8);
                  pcStack_178 = (code *)&UNK_0040cbbc;
                  func_0x0099bda0(puStack_150,puStack_158,lVar14);
                  if (puVar36 != (undefined4 *)0x0) {
                    pcStack_178 = (code *)&UNK_0040cbcd;
                    _ZdaPvSt11align_val_t(puVar36);
                  }
                  puStack_130 = puStack_120;
                  puVar30 = puStack_128;
                  puVar36 = puStack_150;
                  goto code_r0x0040c8f1;
                }
              }
              else {
                pcStack_178 = (code *)&UNK_0040cc8b;
                func_0x00330ca0();
              }
              pcStack_178 = 
              _Z30init_socket_transport_emulatorP10atransportN7android4base14unique_fd_implINS2_13DefaultCloserEEEi
              ;
              func_0x0032fc40();
              lStack_1a8 = *(long *)(in_FS_OFFSET + 0x28);
              puStack_200 = &UNK_0040ccc4;
              uStack_1b8 = extraout_EDX;
              puStack_1a0 = puVar13;
              puStack_198 = puVar35;
              lStack_190 = lVar14;
              puStack_188 = puVar15;
              lStack_180 = lVar38;
              pcStack_178 = (code *)&puStack_f0;
              pppppppuVar21 = (uint *******)_Znwm(0x20);
              uVar2 = *puVar36;
              *puVar36 = 0xffffffff;
              puStack_200 = &UNK_0040ccd5;
              puVar15 = (uint *)func_0x0099bce0();
              apppppppuStack_1e0[0] = (uint *******)CONCAT44(apppppppuStack_1e0[0]._4_4_,uVar2);
              puStack_200 = &UNK_0040cce8;
              _ZN12FdConnectionC1EN7android4base14unique_fd_implINS1_13DefaultCloserEEE
                        (pppppppuVar21,apppppppuStack_1e0);
              uVar12 = *puVar15;
              pppppppuVar37 = (uint *******)(ulong)uVar12;
              if ((int)apppppppuStack_1e0[0] != -1) {
                puStack_200 = &UNK_0040ccf8;
                func_0x0099bd10();
              }
              *puVar15 = uVar12;
              *pppppppuVar21 = (uint ******)0x99f1e8;
              *(uint *)(pppppppuVar21 + 3) = extraout_EDX;
              puStack_200 = &UNK_0040cd19;
              lVar14 = _Znwm(0xc0);
              puStack_200 = &UNK_0040cd2c;
              apppppppuStack_1e0[0] = pppppppuVar21;
              _ZN25BlockingConnectionAdapterC1ENSt3__110unique_ptrI18BlockingConnectionNS0_14default_deleteIS2_EEEE
                        (lVar14,apppppppuStack_1e0);
              pppppppuVar25 = apppppppuStack_1e0[0];
              apppppppuStack_1e0[0] = (uint *******)0x0;
              if (pppppppuVar25 != (uint *******)0x0) {
                puStack_200 = &UNK_0040cd43;
                (*(code *)(*pppppppuVar25)[1])();
              }
              puStack_200 = &UNK_0040cd51;
              lStack_1c8 = lVar14;
              plStack_1c0 = (long *)_Znwm(0x20);
              plStack_1c0[1] = 0;
              plStack_1c0[2] = 0;
              *plStack_1c0 = 0x99f240;
              plStack_1c0[3] = lVar14;
              puStack_200 = &UNK_0040cd7a;
              _ZN10atransport13SetConnectionENSt3__110shared_ptrI10ConnectionEE(uVar28,&lStack_1c8);
              plVar32 = plStack_1c0;
              if (plStack_1c0 != (long *)0x0) {
                LOCK();
                plVar1 = plStack_1c0 + 1;
                lVar14 = *plVar1;
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (lVar14 == 0) {
                  puStack_200 = &UNK_0040cd9e;
                  (**(code **)(*plStack_1c0 + 0x10))(plStack_1c0);
                  puStack_200 = &UNK_0040cda6;
                  _ZNSt3__119__shared_weak_count14__release_weakEv(plVar32);
                }
              }
              uVar19 = uRam0000000000a00850;
              puStack_200 = &UNK_0040cdb5;
              _ZNSt3__15mutex4lockEv(uRam0000000000a00850);
              uVar12 = uStack_1b8;
              if ((pppppppuRam0000000000a00860 == (uint *******)0x0) || (lRam0000000000a00870 == 0))
              goto code_r0x0040cf59;
              pppppppuVar21 = (uint *******)(long)(int)uStack_1b8;
              uVar17 = (long)pppppppuRam0000000000a00860 - 1;
              if (((ulong)pppppppuRam0000000000a00860 & uVar17) == 0) {
                pppppppuVar25 = (uint *******)(uVar17 & (ulong)pppppppuVar21);
              }
              else {
                pppppppuVar25 = pppppppuVar21;
                if (pppppppuRam0000000000a00860 <= pppppppuVar21) {
                  if (((ulong)pppppppuVar21 | (ulong)pppppppuRam0000000000a00860) >> 0x20 == 0) {
                    pppppppuVar25 =
                         (uint *******)
                         ((ulong)uStack_1b8 % ((ulong)pppppppuRam0000000000a00860 & 0xffffffff));
                  }
                  else {
                    pppppppuVar25 =
                         (uint *******)((ulong)pppppppuVar21 % (ulong)pppppppuRam0000000000a00860);
                  }
                }
              }
              puVar30 = *(undefined8 **)(lRam0000000000a00858 + (long)pppppppuVar25 * 8);
              if (puVar30 == (undefined8 *)0x0) goto code_r0x0040cf59;
              puVar30 = (undefined8 *)*puVar30;
              goto code_r0x0040ce39;
            }
            *puVar30 = *(undefined8 *)puVar35;
            puVar30 = puVar30 + 1;
          }
        }
        else if ((((byte)adb_trace_mask & 8) != 0) && ((int)adb_trace_severity._12_4_ < 2)) {
          pcStack_178 = (code *)&UNK_0040c94d;
          cVar11 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
          if (cVar11 != '\0') {
            pcStack_178 = (code *)&UNK_0040c956;
            puStack_128 = (undefined8 *)func_0x0099bce0();
            puStack_120 = (undefined8 *)CONCAT44(puStack_120._4_4_,*(undefined4 *)puStack_128);
            pcStack_178 = (code *)&UNK_0040c982;
            _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                      (&uStack_148,&UNK_0015b284,0xe7,1,0,0xffffffff);
            pcStack_178 = (code *)&UNK_0040c98b;
            uVar19 = _ZN7android4base10LogMessage6streamEv(&uStack_148);
            pcStack_178 = (code *)&UNK_0040c99f;
            uVar19 = func_0x0032eb30(uVar19,&UNK_0018046f,0xb);
            pcStack_178 = (code *)&UNK_0040c9ab;
            uVar19 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(uVar19,*puVar35);
            pcStack_178 = (code *)&UNK_0040c9bf;
            func_0x0032eb30(uVar19,&UNK_001724a9,0xd);
code_r0x0040ca53:
            pcStack_178 = (code *)&UNK_0040ca5c;
            _ZN7android4base10LogMessageD2Ev(&uStack_148);
            *(undefined4 *)puStack_128 = puStack_120._0_4_;
          }
        }
code_r0x0040c8f1:
        puVar35 = puVar35 + 2;
      } while (puVar35 != puVar13);
    }
    uVar19 = retry_ports_lock;
    pcStack_178 = (code *)&UNK_0040cc20;
    _ZNSt3__15mutex4lockEv(retry_ports_lock);
    pcStack_178 = (code *)&UNK_0040cc40;
    _ZNSt3__16vectorIPKN6google8protobuf15FieldDescriptorENS_9allocatorIS5_EEE18__insert_with_sizeB8nn220000INS_11__wrap_iterIPS5_EESC_EESC_NSA_IPKS5_EET_T0_l
              (puRam0000000000a00880,puRam0000000000a00880[1],puVar36,puVar30);
    pcStack_178 = (code *)&UNK_0040cc48;
    _ZNSt3__115recursive_mutex6unlockEv(uVar19);
    if (puVar36 != (undefined4 *)0x0) {
      pcStack_178 = (code *)&UNK_0040cc5c;
      _ZdaPvSt11align_val_t(puVar36);
    }
    if (puVar15 != (uint *)0x0) {
      pcStack_178 = (code *)&UNK_0040cc81;
      _ZdaPvSt11align_val_t(puVar15);
    }
  } while( true );
code_r0x0040ce39:
  if (puVar30 == (undefined8 *)0x0) {
code_r0x0040cf59:
    pppppppuVar22 = (uint *******)&uStack_1b8;
    apppppppuStack_1e0[0] = (uint *******)0xa00858;
    pppppppuVar25 = (uint *******)&pppppppuStack_1b0;
    puStack_200 = &UNK_0040cf84;
    pppppppuStack_1b0 = pppppppuVar22;
    lVar14 = _ZZNSt3__112__hash_tableINS_17__hash_value_typeIiP10atransportEENS_22__unordered_map_hasherIiNS_4pairIKiS3_EENS_4hashIiEENS_8equal_toIiEEEENS_21__unordered_map_equalIiS8_SC_SA_EENS_9allocatorIS8_EEE16__emplace_uniqueB8nn220000IJRKNS_21piecewise_construct_tENS_5tupleIJRS7_EEENSN_IJEEEEEENS6_INS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEEbEEDpOT_ENKUlSO_SM_OSP_OSQ_E_clESO_SM_S11_S12_
                       (apppppppuStack_1e0,pppppppuVar22,&_ZNSt3__119piecewise_constructE,
                        pppppppuVar25,&uStack_1b1);
    *(ulong *)(lVar14 + 0x18) = uVar28;
    puVar23 = (undefined *)0x0;
code_r0x0040cf8b:
    iVar26 = (int)pppppppuVar25;
    puStack_200 = &UNK_0040cf93;
    uVar29 = uVar19;
    _ZNSt3__115recursive_mutex6unlockEv(uVar19);
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_1a8) {
      return puVar23;
    }
    puStack_200 = &UNK_0040cfb9;
    func_0x0099bd00();
    uStack_208 = uVar19;
    lStack_230 = *(long *)(in_FS_OFFSET + 0x28);
    uVar12 = *(uint *)pppppppuVar22;
    *(uint *)pppppppuVar22 = 0xffffffff;
    puStack_228 = puVar15;
    pppppppuStack_220 = pppppppuVar21;
    pppppppuStack_218 = pppppppuVar37;
    puStack_210 = puVar23;
    puStack_200 = (undefined *)&pcStack_178;
    puVar36 = (undefined4 *)func_0x0099bce0();
    if (iVar26 == 0) {
      uStack_238 = uVar12;
      _Z25init_socket_transport_tcpP10atransportN7android4base14unique_fd_implINS2_13DefaultCloserEEE
                (uVar29,&uStack_238);
      uVar2 = *puVar36;
      puVar23 = (undefined *)0x0;
      uVar12 = uStack_238;
    }
    else {
      uStack_234 = uVar12;
      uVar12 = _Z30init_socket_transport_emulatorP10atransportN7android4base14unique_fd_implINS2_13DefaultCloserEEEi
                         (uVar29,&uStack_234,extraout_RDX & 0xffffffff);
      puVar23 = (undefined *)(ulong)uVar12;
      uVar2 = *puVar36;
      uVar12 = uStack_234;
    }
    puVar30 = (undefined8 *)(ulong)uVar12;
    if (uVar12 != 0xffffffff) {
      func_0x0099bd10();
    }
    *puVar36 = uVar2;
    if (*(long *)(in_FS_OFFSET + 0x28) != lStack_230) {
      func_0x0099bd00();
      *puVar30 = &UNK_0099f278;
      if ((*(byte *)(puVar30 + 1) & 1) == 0) {
        return &UNK_0099f278;
      }
      puVar23 = (undefined *)free(puVar30[3],puVar30[1] & 0xfffffffffffffffe);
      return puVar23;
    }
    return puVar23;
  }
  pppppppuVar22 = (uint *******)puVar30[1];
  if (pppppppuVar22 == pppppppuVar21) {
    if (*(uint *)(puVar30 + 2) == uStack_1b8) {
      pppppppuVar37 = (uint *******)puVar30[3];
      if (pppppppuVar37 != (uint *******)0x0) {
        puVar23 = (undefined *)0xffffffff;
        pppppppuVar22 = pppppppuRam0000000000a00860;
        if ((((byte)adb_trace_mask & 8) != 0) && ((int)adb_trace_severity._12_4_ < 2)) {
          pppppppuVar22 = (uint *******)0x0;
          puStack_200 = &UNK_0040ced0;
          cVar11 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1);
          if (cVar11 != '\0') {
            uStack_1e4 = *puVar15;
            puStack_200 = &UNK_0040cf00;
            _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                      (&pppppppuStack_1b0,&UNK_0015b284,0x133,1,0,0xffffffff);
            puStack_200 = &UNK_0040cf09;
            uStack_1f0 = _ZN7android4base10LogMessage6streamEv(&pppppppuStack_1b0);
            puStack_200 = &UNK_0040cf25;
            pppppppuVar25 = pppppppuVar37;
            _ZN7android4base12StringPrintfEPKcz(apppppppuStack_1e0,&UNK_0017a294,uVar12);
            pppppppuVar22 = (uint *******)apppppppuStack_1e0;
            puStack_200 = &UNK_0040cf32;
            func_0x0032e5a0(uStack_1f0);
            if (((ulong)apppppppuStack_1e0[0] & 1) != 0) {
              pppppppuVar22 = (uint *******)((ulong)apppppppuStack_1e0[0] & 0xfffffffffffffffe);
              puStack_200 = &UNK_0040cf49;
              _ZdaPvSt11align_val_t(uStack_1d0);
            }
            puStack_200 = &UNK_0040cf52;
            _ZN7android4base10LogMessageD2Ev(&pppppppuStack_1b0);
            *puVar15 = uStack_1e4;
          }
        }
        goto code_r0x0040cf8b;
      }
      goto code_r0x0040cf59;
    }
  }
  else {
    if (((ulong)pppppppuRam0000000000a00860 & uVar17) == 0) {
      pppppppuVar22 = (uint *******)((ulong)pppppppuVar22 & uVar17);
    }
    else if (pppppppuRam0000000000a00860 <= pppppppuVar22) {
      if (((ulong)pppppppuVar22 | (ulong)pppppppuRam0000000000a00860) >> 0x20 != 0) {
        if ((uint *******)((ulong)pppppppuVar22 % (ulong)pppppppuRam0000000000a00860) ==
            pppppppuVar25) goto code_r0x0040ce36;
        goto code_r0x0040cf59;
      }
      pppppppuVar22 =
           (uint *******)
           (((ulong)pppppppuVar22 & 0xffffffff) % ((ulong)pppppppuRam0000000000a00860 & 0xffffffff))
      ;
    }
    if (pppppppuVar22 != pppppppuVar25) goto code_r0x0040cf59;
  }
code_r0x0040ce36:
  puVar30 = (undefined8 *)*puVar30;
  goto code_r0x0040ce39;
}


