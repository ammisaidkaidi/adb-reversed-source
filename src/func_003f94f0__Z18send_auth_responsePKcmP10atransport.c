// Function: _Z18send_auth_responsePKcmP10atransport
// Address: 003f94f0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Type propagation algorithm not settling */

ulong _Z18send_auth_responsePKcmP10atransport
                (uint *******param_1,uint *******param_2,uint *******param_3)

{
  uint *******pppppppuVar1;
  uint ****ppppuVar2;
  undefined4 uVar3;
  code *pcVar4;
  long lVar5;
  undefined1 auVar6 [8];
  long *plVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  uint *******pppppppuVar11;
  uint *puVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  uint *******pppppppuVar15;
  uint *******pppppppuVar16;
  uint ******ppppppuVar17;
  uint *******pppppppuVar18;
  long lVar19;
  undefined8 uVar20;
  long *plVar21;
  long *plVar22;
  ulong uVar23;
  uint *****pppppuVar24;
  undefined1 auVar25 [8];
  uint *****pppppuVar26;
  uint *****pppppuVar27;
  uint *******pppppppuVar28;
  uint *******pppppppuVar29;
  ulong uVar30;
  uint *****pppppuVar31;
  undefined1 *puVar32;
  uint ******ppppppuVar33;
  undefined4 *puVar34;
  uint *******pppppppuVar35;
  long in_FS_OFFSET;
  bool bVar36;
  long lStack_460;
  long *plStack_458;
  long lStack_450;
  long *plStack_448;
  long lStack_440;
  uint *******pppppppuStack_438;
  uint *******pppppppuStack_430;
  uint *******pppppppuStack_428;
  undefined4 *puStack_420;
  uint *******pppppppuStack_418;
  undefined *puStack_410;
  undefined8 uStack_408;
  uint uStack_3f4;
  undefined4 *puStack_3f0;
  undefined4 uStack_3e4;
  undefined1 auStack_3e0 [8];
  undefined8 uStack_3d8;
  ulong uStack_3d0;
  long lStack_3c8;
  uint ******appppppuStack_3b8 [34];
  ulong uStack_2a8;
  uint *******pppppppuStack_2a0;
  uint *******pppppppuStack_298;
  uint *******pppppppuStack_290;
  uint *******pppppppuStack_288;
  uint *******pppppppuStack_280;
  undefined *apuStack_278 [2];
  uint *******pppppppuStack_268;
  uint *******pppppppuStack_260;
  uint *******pppppppuStack_258;
  undefined4 uStack_24c;
  uint ******appppppuStack_248 [2];
  undefined8 uStack_238;
  undefined1 auStack_230 [8];
  uint *******pppppppuStack_228;
  uint *******pppppppuStack_220;
  uint *******pppppppuStack_210;
  uint *******pppppppuStack_208;
  undefined1 uStack_1f9;
  uint *******pppppppuStack_1f8;
  long lStack_1f0;
  uint *******pppppppuStack_1e8;
  uint *******pppppppuStack_1e0;
  uint *******pppppppuStack_1d8;
  uint *******pppppppuStack_1d0;
  undefined4 *puStack_1c8;
  undefined *puStack_1c0;
  uint *******pppppppuStack_1b8;
  uint *******pppppppuStack_1b0;
  uint *******pppppppuStack_1a8;
  undefined4 *puStack_1a0;
  uint *******pppppppuStack_198;
  uint ******ppppppuStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  long lStack_178;
  undefined8 uStack_168;
  ulong uStack_160;
  long lStack_158;
  long lStack_150;
  undefined1 auStack_148 [8];
  uint *****pppppuStack_140;
  uint *******pppppppuStack_138;
  undefined8 uStack_130;
  undefined1 auStack_128 [8];
  ulong uStack_120;
  uint *******pppppppuStack_118;
  undefined8 uStack_110;
  long lStack_108;
  uint *******pppppppuStack_100;
  uint *******pppppppuStack_f8;
  uint *******pppppppuStack_f0;
  undefined8 uStack_e8;
  uint *******pppppppuStack_e0;
  undefined *puStack_d8;
  uint ******ppppppuStack_d0;
  ulong uStack_c8;
  uint *******pppppppuStack_c0;
  uint *******pppppppuStack_b8;
  undefined *puStack_b0;
  uint *******pppppppuStack_a8;
  undefined4 uStack_9c;
  undefined1 auStack_98 [8];
  uint *******pppppppuStack_90;
  uint *******pppppppuStack_88;
  long lStack_78;
  uint *******pppppppuStack_70;
  undefined4 uStack_5c;
  undefined1 auStack_58 [8];
  uint *******pppppppuStack_50;
  uint *******pppppppuStack_48;
  ulong uStack_38;
  
  uStack_38 = *(ulong *)(in_FS_OFFSET + 0x28);
  lStack_78 = 0;
  pppppppuStack_70 = (uint *******)0x0;
  puStack_b0 = &UNK_003f952a;
  _ZN10atransport7NextKeyEv(&lStack_78,param_3);
  if (lStack_78 == 0) {
    puStack_b0 = &UNK_003f95b3;
    _ZN10atransport18SetConnectionStateE15ConnectionState(param_3,2);
    puStack_b0 = &UNK_003f95c0;
    _ZN10atransport24SetConnectionEstablishedEb(param_3,1);
    if (((adb_trace_mask._1_1_ & 4) != 0) && ((int)adb_trace_severity._40_4_ < 2)) {
      puStack_b0 = &UNK_003f9a41;
      cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
      if (cVar8 != '\0') {
        puStack_b0 = &UNK_003f9a4e;
        puVar34 = (undefined4 *)func_0x0099bce0();
        uVar3 = *puVar34;
        param_2 = (uint *******)auStack_58;
        puStack_b0 = &UNK_003f9a7c;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (param_2,&UNK_001706c4,0x1b5,1,0,0xffffffff);
        puStack_b0 = &UNK_003f9a84;
        uVar13 = _ZN7android4base10LogMessage6streamEv(param_2);
        puStack_b0 = &UNK_003f9a98;
        func_0x0032eb30(uVar13,&UNK_0017566a,0x1b);
        puStack_b0 = &UNK_003f9aa0;
        _ZN7android4base10LogMessageD2Ev(param_2);
        *puVar34 = uVar3;
        param_1 = param_3;
      }
    }
    auStack_58 = (undefined1  [8])0x0;
    pppppppuStack_50 = (uint *******)0x0;
    pppppppuStack_48 = (uint *******)0x0;
    puStack_b0 = &UNK_003f95f6;
    _Z20adb_auth_get_userkeyv(auStack_58);
    auVar25 = auStack_58;
    pppppppuVar29 = (uint *******)((ulong)auStack_58 & 0xff);
    if (((ulong)auStack_58 & 1) == 0) {
      pppppppuVar11 = (uint *******)((ulong)auStack_58 >> 1 & 0x7f);
      if (pppppppuVar11 != (uint *******)0x0) goto code_r0x003f9612;
code_r0x003f96f0:
      pppppppuVar18 = (uint *******)0x3;
      puStack_b0 = &UNK_003f96fc;
      cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(3,0);
      auVar6 = auStack_58;
      pppppppuVar35 = pppppppuStack_48;
      if (cVar8 != '\0') {
        puStack_b0 = &UNK_003f9709;
        puVar12 = (uint *)func_0x0099bce0();
        uVar10 = *puVar12;
        pppppppuVar11 = (uint *******)auStack_98;
        puStack_b0 = &UNK_003f9738;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (pppppppuVar11,&UNK_001706c4,0x1b9,3,0,0xffffffff);
        puStack_b0 = &UNK_003f9740;
        uVar13 = _ZN7android4base10LogMessage6streamEv(pppppppuVar11);
        puStack_b0 = &UNK_003f9754;
        func_0x0032eb30(uVar13,&UNK_00183555,0x1d);
        puStack_b0 = &UNK_003f975c;
        pppppppuVar18 = pppppppuVar11;
        _ZN7android4base10LogMessageD2Ev();
        *puVar12 = uVar10;
        param_2 = (uint *******)(ulong)uVar10;
        auVar6 = auStack_58;
        pppppppuVar35 = pppppppuStack_48;
      }
    }
    else {
      pppppppuVar11 = pppppppuStack_50;
      if (pppppppuStack_50 == (uint *******)0x0) goto code_r0x003f96f0;
code_r0x003f9612:
      if (pppppppuVar11 < (uint *******)0x1000) {
        puStack_b0 = &UNK_003f98a5;
        param_2 = (uint *******)_Z11get_apacketv();
        *param_2 = (uint ******)0x348545541;
        param_1 = pppppppuStack_48;
        if (((ulong)auVar25 & 1) == 0) {
          param_1 = (uint *******)(auStack_58 + 1);
        }
        ppppppuVar33 = param_2[3];
        param_2[3] = (uint ******)0x0;
        if (ppppppuVar33 != (uint ******)0x0) {
          puStack_b0 = &UNK_003f9911;
          _ZdaPvSt11align_val_t();
        }
        param_2[4] = (uint ******)0x0;
        param_2[5] = (uint ******)0x0;
        param_2[6] = (uint ******)0x0;
        pppppppuVar11 = (uint *******)((long)pppppppuVar11 + 1);
        puStack_b0 = &UNK_003f9933;
        _ZN5Block8allocateEm(param_2 + 3,pppppppuVar11);
        puStack_b0 = &UNK_003f9942;
        func_0x0099bd90(param_2[3],param_1,pppppppuVar11);
        *(uint *)((long)param_2 + 0xc) = *(uint *)(param_2 + 5);
        puStack_b0 = &UNK_003f9955;
        pppppppuVar18 = param_2;
        _Z11send_packetP7apacketP10atransport(param_2,param_3);
        auVar6 = auStack_58;
        pppppppuVar35 = pppppppuStack_48;
      }
      else {
        pppppppuVar18 = (uint *******)0x3;
        puStack_b0 = &UNK_003f962b;
        cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(3,0);
        auVar6 = auStack_58;
        pppppppuVar35 = pppppppuStack_48;
        if (cVar8 != '\0') {
          puStack_b0 = &UNK_003f9638;
          puVar12 = (uint *)func_0x0099bce0();
          uVar10 = *puVar12;
          param_1 = (uint *******)(ulong)uVar10;
          puStack_b0 = &UNK_003f9667;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (auStack_98,&UNK_001706c4,0x1be,3,0,0xffffffff);
          puStack_b0 = &UNK_003f966f;
          uVar13 = _ZN7android4base10LogMessage6streamEv(auStack_98);
          puStack_b0 = &UNK_003f9683;
          uVar13 = func_0x0032eb30(uVar13,&UNK_00177229,0x1a);
          puStack_b0 = &UNK_003f968e;
          uVar13 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar13,pppppppuVar11);
          puStack_b0 = &UNK_003f96a2;
          func_0x0032eb30(uVar13,&UNK_00180434,6);
          puStack_b0 = &UNK_003f96aa;
          pppppppuVar18 = (uint *******)auStack_98;
          _ZN7android4base10LogMessageD2Ev();
          *puVar12 = uVar10;
          param_2 = (uint *******)auStack_98;
          auVar6 = auStack_58;
          pppppppuVar35 = pppppppuStack_48;
        }
      }
    }
  }
  else {
    pppppppuVar29 = (uint *******)&adb_trace_mask;
    pppppppuStack_a8 = param_3;
    if (((adb_trace_mask._1_1_ & 4) != 0) && ((int)adb_trace_severity._40_4_ < 2)) {
      puStack_b0 = &UNK_003f99c6;
      cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
      if (cVar8 != '\0') {
        puStack_b0 = &UNK_003f99d3;
        puVar34 = (undefined4 *)func_0x0099bce0();
        uStack_9c = *puVar34;
        puStack_b0 = &UNK_003f9a01;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (auStack_58,&UNK_001706c4,0x1d6,1,0,0xffffffff);
        puStack_b0 = &UNK_003f9a0a;
        uVar13 = _ZN7android4base10LogMessage6streamEv(auStack_58);
        puStack_b0 = &UNK_003f9a1e;
        func_0x0032eb30(uVar13,&UNK_0016ecb8,0x1a);
        puStack_b0 = &UNK_003f9a27;
        _ZN7android4base10LogMessageD2Ev(auStack_58);
        *puVar34 = uStack_9c;
      }
    }
    puStack_b0 = &UNK_003f955c;
    pppppppuVar11 = (uint *******)_Z11get_apacketv();
    lVar19 = lStack_78;
    if (param_2 == (uint *******)0x14) {
      auStack_58 = (undefined1  [8])0x0;
      pppppppuStack_50 = (uint *******)0x0;
      pppppppuStack_48 = (uint *******)0x0;
      puStack_b0 = &UNK_003f958c;
      _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc
                (auStack_58,0x100000,0);
      uStack_5c = 0;
      pppppppuVar18 = pppppppuStack_48;
      if (((ulong)auStack_58 & 1) == 0) {
        pppppppuVar18 = (uint *******)(auStack_58 + 1);
      }
      puStack_b0 = &UNK_003f9781;
      iVar9 = RSA_sign(0x40,param_1,0x14,pppppppuVar18,&uStack_5c,lVar19);
      if (iVar9 == 0) {
        auStack_98 = (undefined1  [8])0x0;
        pppppppuStack_90 = (uint *******)0x0;
        pppppppuStack_88 = (uint *******)0x0;
        if (((ulong)auStack_58 & 1) != 0) {
          puStack_b0 = &UNK_003f98ee;
          _ZdaPvSt11align_val_t(pppppppuStack_48,(ulong)auStack_58 & 0xfffffffffffffffe);
        }
        goto code_r0x003f96d8;
      }
      puStack_b0 = &UNK_003f9797;
      _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc
                (auStack_58,uStack_5c,0);
      if (((adb_trace_mask._1_1_ & 4) != 0) && ((int)adb_trace_severity._40_4_ < 2)) {
        puStack_b0 = &UNK_003f9b7d;
        cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
        if (cVar8 != '\0') {
          puStack_b0 = &UNK_003f9b8a;
          puVar34 = (undefined4 *)func_0x0099bce0();
          uVar3 = *puVar34;
          param_1 = (uint *******)auStack_98;
          puStack_b0 = &UNK_003f9bb8;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (param_1,&UNK_001706c4,0x117,1,0,0xffffffff);
          puStack_b0 = &UNK_003f9bc0;
          uVar13 = _ZN7android4base10LogMessage6streamEv(param_1);
          puStack_b0 = &UNK_003f9bd4;
          uVar13 = func_0x0032eb30(uVar13,&UNK_0016ed0e,0x12);
          puStack_b0 = &UNK_003f9bdf;
          _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj(uVar13,uStack_5c);
          puStack_b0 = &UNK_003f9be7;
          _ZN7android4base10LogMessageD2Ev(param_1);
          *puVar34 = uVar3;
        }
      }
      pppppppuStack_88 = pppppppuStack_48;
      auStack_98 = auStack_58;
      pppppppuStack_90 = pppppppuStack_50;
      auVar25 = (undefined1  [8])((ulong)auStack_58 & 0xff);
      pppppppuVar35 = pppppppuStack_50;
    }
    else {
      puStack_b0 = &UNK_003f96be;
      cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(3,0);
      if (cVar8 != '\0') {
        puStack_b0 = &UNK_003f9ab0;
        param_1 = (uint *******)func_0x0099bce0();
        uVar10 = *(uint *)param_1;
        pppppppuVar29 = (uint *******)auStack_58;
        puStack_b0 = &UNK_003f9adb;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (pppppppuVar29,&UNK_001706c4,0x108,3,0,0xffffffff);
        puStack_b0 = &UNK_003f9ae3;
        uVar13 = _ZN7android4base10LogMessage6streamEv(pppppppuVar29);
        puStack_b0 = &UNK_003f9af7;
        uVar13 = func_0x0032eb30(uVar13,&UNK_0017d70b,0x16);
        puStack_b0 = &UNK_003f9b02;
        _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar13,param_2);
        puStack_b0 = &UNK_003f9b0a;
        _ZN7android4base10LogMessageD2Ev(pppppppuVar29);
        *(uint *)param_1 = uVar10;
      }
      auStack_98 = (undefined1  [8])0x0;
      pppppppuStack_90 = (uint *******)0x0;
      pppppppuStack_88 = (uint *******)0x0;
code_r0x003f96d8:
      pppppppuVar35 = (uint *******)0x0;
      auVar25 = (undefined1  [8])0x0;
    }
    pppppppuVar15 = (uint *******)((ulong)auVar25 >> 1);
    if (((ulong)auVar25 & 1) == 0) {
      pppppppuVar35 = pppppppuVar15;
    }
    pppppppuVar18 = pppppppuVar11;
    if (pppppppuVar35 == (uint *******)0x0) {
      puStack_b0 = &UNK_003f9808;
      cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(3,0);
      if (cVar8 != '\0') {
        puStack_b0 = &UNK_003f9b18;
        param_1 = (uint *******)func_0x0099bce0();
        uVar10 = *(uint *)param_1;
        pppppppuVar29 = (uint *******)(ulong)uVar10;
        pppppppuVar15 = (uint *******)auStack_58;
        puStack_b0 = &UNK_003f9b44;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (pppppppuVar15,&UNK_001706c4,0x1db,3,0,0xffffffff);
        puStack_b0 = &UNK_003f9b4c;
        uVar13 = _ZN7android4base10LogMessage6streamEv(pppppppuVar15);
        puStack_b0 = &UNK_003f9b60;
        func_0x0032eb30(uVar13,&UNK_00175652,0x17);
        puStack_b0 = &UNK_003f9b68;
        _ZN7android4base10LogMessageD2Ev(pppppppuVar15);
        *(uint *)param_1 = uVar10;
      }
      puStack_b0 = &UNK_003f9818;
      _Z11put_apacketP7apacket();
      param_2 = pppppppuVar15;
      auVar6 = auStack_98;
      pppppppuVar35 = pppppppuStack_88;
    }
    else {
      *pppppppuVar11 = (uint ******)0x248545541;
      param_1 = pppppppuStack_88;
      param_2 = pppppppuStack_90;
      if (((ulong)auVar25 & 1) == 0) {
        param_1 = (uint *******)(auStack_98 + 1);
        param_2 = pppppppuVar15;
      }
      pppppppuVar29 = pppppppuVar11 + 3;
      ppppppuVar33 = pppppppuVar11[3];
      pppppppuVar11[3] = (uint ******)0x0;
      if (ppppppuVar33 != (uint ******)0x0) {
        puStack_b0 = &UNK_003f9846;
        _ZdaPvSt11align_val_t();
      }
      pppppppuVar11[4] = (uint ******)0x0;
      pppppppuVar11[5] = (uint ******)0x0;
      pppppppuVar11[6] = (uint ******)0x0;
      puStack_b0 = &UNK_003f9861;
      _ZN5Block8allocateEm(pppppppuVar29,param_2);
      puStack_b0 = &UNK_003f9870;
      func_0x0099bd90(pppppppuVar11[3],param_1,param_2);
      *(uint *)((long)pppppppuVar11 + 0xc) = *(uint *)(pppppppuVar11 + 5);
      puStack_b0 = &UNK_003f9887;
      _Z11send_packetP7apacketP10atransport(pppppppuVar11,pppppppuStack_a8);
      auVar6 = auStack_98;
      pppppppuVar35 = pppppppuStack_88;
    }
  }
  if (((ulong)auVar25 & 1) != 0) {
    puStack_b0 = &UNK_003f996c;
    _ZdaPvSt11align_val_t(pppppppuVar35,(ulong)auVar6 & 0xfffffffffffffffe);
    pppppppuVar18 = pppppppuVar35;
  }
  pppppppuVar35 = pppppppuStack_70;
  if (pppppppuStack_70 != (uint *******)0x0) {
    LOCK();
    pppppppuVar15 = pppppppuStack_70 + 1;
    ppppppuVar33 = *pppppppuVar15;
    *pppppppuVar15 = (uint ******)((long)*pppppppuVar15 + -1);
    UNLOCK();
    if (ppppppuVar33 == (uint ******)0x0) {
      puStack_b0 = &UNK_003f9990;
      (*(code *)(*pppppppuStack_70)[2])(pppppppuStack_70);
      puStack_b0 = &UNK_003f9998;
      pppppppuVar18 = pppppppuVar35;
      _ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  if (*(ulong *)(in_FS_OFFSET + 0x28) == uStack_38) {
    return *(ulong *)(in_FS_OFFSET + 0x28);
  }
  puStack_b0 = &UNK_003f9bf4;
  func_0x0099bd00();
  pppppppuStack_c0 = pppppppuVar35;
  uStack_c8 = *(ulong *)(in_FS_OFFSET + 0x28);
  puStack_d8 = &UNK_003f9c25;
  pppppppuStack_b8 = pppppppuVar11;
  puStack_b0 = &stack0xfffffffffffffff8;
  uVar13 = _Znwm(8);
  puStack_d8 = &UNK_003f9c30;
  _ZNSt3__115__thread_structC2Ev(uVar13);
  puStack_d8 = &UNK_003f9c3a;
  puVar14 = (undefined8 *)_Znwm(0x10);
  *puVar14 = uVar13;
  puVar14[1] = pppppppuVar18;
  puStack_d8 = &UNK_003f9c56;
  uVar10 = func_0x0099be80(&ppppppuStack_d0,0,&UNK_003faf40,puVar14);
  if (uVar10 == 0) {
    pppppppuVar18 = &ppppppuStack_d0;
    puStack_d8 = &UNK_003f9c66;
    _ZNSt3__16thread6detachEv(pppppppuVar18);
    puStack_d8 = &UNK_003f9c6e;
    pppppppuVar11 = pppppppuVar18;
    _ZNSt3__16threadD2Ev();
    if (*(ulong *)(in_FS_OFFSET + 0x28) == uStack_c8) {
      return *(ulong *)(in_FS_OFFSET + 0x28);
    }
  }
  else {
    pppppppuVar11 = (uint *******)(ulong)uVar10;
    puStack_d8 = &UNK_003f9c94;
    _ZNSt3__120__throw_system_errorEiPKc(pppppppuVar11,&UNK_0015f7ec);
  }
  puStack_d8 = &UNK_003f9c99;
  func_0x0099bd00();
  lStack_108 = *(long *)(in_FS_OFFSET + 0x28);
  pppppppuStack_100 = pppppppuVar18;
  pppppppuStack_f8 = param_1;
  pppppppuStack_f0 = pppppppuVar29;
  uStack_e8 = uVar13;
  pppppppuStack_e0 = param_2;
  puStack_d8 = (undefined *)&puStack_b0;
  if (((adb_trace_mask._1_1_ & 4) != 0) &&
     (puStack_d8 = (undefined *)&puStack_b0, (int)adb_trace_severity._40_4_ < 2)) {
    puStack_1c0 = &UNK_003fa317;
    puStack_d8 = (undefined *)&puStack_b0;
    cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
    if (cVar8 != '\0') {
      puStack_1c0 = &UNK_003fa324;
      pppppppuVar18 = (uint *******)func_0x0099bce0();
      uVar10 = *(uint *)pppppppuVar18;
      puStack_1c0 = &UNK_003fa350;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_128,&UNK_001706c4,0x203,1,0,0xffffffff);
      puStack_1c0 = &UNK_003fa358;
      uVar13 = _ZN7android4base10LogMessage6streamEv(auStack_128);
      puStack_1c0 = &UNK_003fa36c;
      func_0x0032eb30(uVar13,&UNK_00164516,0x17);
      puStack_1c0 = &UNK_003fa37b;
      _ZN7android4base10LogMessageD2Ev(auStack_128);
      *(uint *)pppppppuVar18 = uVar10;
    }
  }
  puVar34 = &adb_trace_mask;
  puVar32 = adb_trace_severity;
  puStack_1c0 = &UNK_003f9cec;
  pppppppuVar35 = pppppppuVar11;
  pppppppuVar15 = (uint *******)SSL_get_client_CA_list();
  if (pppppppuVar15 == (uint *******)0x0) {
    if (((adb_trace_mask._1_1_ & 4) != 0) && ((int)adb_trace_severity._40_4_ < 2)) {
      pppppppuVar35 = (uint *******)0x1;
      puStack_1c0 = &UNK_003fa396;
      cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
      if (cVar8 != '\0') {
        puStack_1c0 = &UNK_003fa3a3;
        pppppppuVar18 = (uint *******)func_0x0099bce0();
        uVar10 = *(uint *)pppppppuVar18;
        puVar34 = (undefined4 *)(ulong)uVar10;
        puVar32 = auStack_128;
        puStack_1c0 = &UNK_003fa3cf;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (puVar32,&UNK_001706c4,0x209,1,0,0xffffffff);
        puStack_1c0 = &UNK_003fa3d7;
        uVar13 = _ZN7android4base10LogMessage6streamEv(puVar32);
        puStack_1c0 = &UNK_003fa3eb;
        func_0x0032eb30(uVar13,&UNK_0018ae20,0x33);
        puStack_1c0 = &UNK_003fa3f3;
        pppppppuVar35 = (uint *******)puVar32;
        _ZN7android4base10LogMessageD2Ev();
        *(uint *)pppppppuVar18 = uVar10;
      }
    }
  }
  else {
    puStack_1c0 = &UNK_003f9d07;
    pppppppuVar35 = pppppppuVar15;
    pppppppuStack_1a8 = pppppppuVar11;
    pppppppuVar16 = (uint *******)OPENSSL_sk_num();
    pppppppuVar18 = pppppppuVar15;
    if (pppppppuVar16 != (uint *******)0x0) {
      pppppppuVar11 = (uint *******)0x0;
      pppppppuVar29 = pppppppuVar16;
      pppppppuStack_1b8 = pppppppuVar16;
      pppppppuStack_198 = pppppppuVar15;
      do {
        puStack_1c0 = &UNK_003f9d58;
        uVar13 = OPENSSL_sk_value(pppppppuVar18,pppppppuVar11);
        pppppppuStack_118 = (uint *******)0x0;
        uStack_110 = 0;
        auStack_128 = (undefined1  [8])0x0;
        uStack_120 = 0;
        pppppppuVar35 = (uint *******)auStack_128;
        puStack_1c0 = &UNK_003f9d6f;
        _ZN3adb3tls27ParseEncodedKeyFromCAIssuerEP12X509_name_st(pppppppuVar35,uVar13);
        if ((char)uStack_110 != '\0') {
          if (((adb_trace_mask._1_1_ & 4) != 0) && ((int)adb_trace_severity._40_4_ < 2)) {
            puStack_1c0 = &UNK_003fa156;
            cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
            if (cVar8 != '\0') {
              puStack_1c0 = &UNK_003fa163;
              puVar34 = (undefined4 *)func_0x0099bce0();
              uVar3 = *puVar34;
              puStack_1c0 = &UNK_003fa18f;
              _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                        (auStack_148,&UNK_001706c4,0x217,1,0,0xffffffff);
              puStack_1c0 = &UNK_003fa197;
              uVar13 = _ZN7android4base10LogMessage6streamEv(auStack_148);
              puStack_1c0 = &UNK_003fa1ab;
              uVar13 = func_0x0032eb30(uVar13,&UNK_0017239b,0x20);
              puStack_1c0 = &UNK_003fa1b7;
              uVar13 = func_0x0032e5a0(uVar13,auStack_128);
              puStack_1c0 = &UNK_003fa1cb;
              func_0x0032eb30(uVar13,&UNK_00178ae2,1);
              puStack_1c0 = &UNK_003fa1d3;
              _ZN7android4base10LogMessageD2Ev(auStack_148);
              *puVar34 = uVar3;
              pppppppuVar18 = pppppppuStack_198;
            }
          }
          pppppppuStack_138 = (uint *******)0x0;
          uStack_130 = 0;
          bVar36 = ((ulong)auStack_128 & 1) == 0;
          pppppppuVar29 = pppppppuStack_118;
          if (bVar36) {
            pppppppuVar29 = (uint *******)(auStack_128 + 1);
          }
          auStack_148 = (undefined1  [8])0x0;
          pppppuStack_140 = (uint *****)0x0;
          uVar23 = (ulong)auStack_128 >> 1 & 0x7f;
          if (!bVar36) {
            uVar23 = uStack_120;
          }
          pppppppuVar35 = (uint *******)auStack_148;
          puStack_1c0 = &UNK_003f9db6;
          _ZN3adb3tls21SHA256HexStringToBitsENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEE
                    (pppppppuVar35,pppppppuVar29,uVar23);
          bVar36 = false;
          if ((char)uStack_130 == '\x01') {
            pppppppuStack_1b0 = pppppppuRam0000000000a00738;
            puStack_1c0 = &UNK_003f9dd9;
            _ZNSt3__15mutex4lockEv();
            ppppppuStack_190 = ppppppuRam0000000000a00740;
            ppppppuVar33 = (uint ******)ppppppuRam0000000000a00740[1];
            if (ppppppuVar33 != (uint ******)0x0) {
              ppppppuStack_190 = ppppppuRam0000000000a00740 + 1;
              pppppuVar31 = (uint *****)((ulong)auStack_148 >> 1 & 0x7f);
              pppppppuVar29 = (uint *******)(auStack_148 + 1);
              if (((ulong)auStack_148 & 1) != 0) {
                pppppppuVar29 = pppppppuStack_138;
                pppppuVar31 = pppppuStack_140;
              }
              do {
                while( true ) {
                  bVar36 = (*(byte *)(ppppppuVar33 + 4) & 1) != 0;
                  pppppuVar27 = (uint *****)((long)ppppppuVar33 + 0x21);
                  if (bVar36) {
                    pppppuVar27 = ppppppuVar33[6];
                  }
                  pppppuVar26 = (uint *****)(ulong)(*(byte *)(ppppppuVar33 + 4) >> 1);
                  if (bVar36) {
                    pppppuVar26 = ppppppuVar33[5];
                  }
                  pppppuVar24 = pppppuVar31;
                  if (pppppuVar26 < pppppuVar31) {
                    pppppuVar24 = pppppuVar26;
                  }
                  puStack_1c0 = &UNK_003f9e57;
                  iVar9 = func_0x0099c3a0(pppppppuVar29,pppppuVar27,pppppuVar24);
                  if (iVar9 != 0) break;
                  if (pppppuVar31 == pppppuVar26) {
                    if (ppppppuVar33 != ppppppuStack_190) {
                      if (((adb_trace_mask._1_1_ & 4) != 0) && ((int)adb_trace_severity._40_4_ < 2))
                      {
                        puStack_1c0 = &UNK_003fa1f5;
                        cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
                        if (cVar8 != '\0') {
                          puStack_1c0 = &UNK_003fa202;
                          puVar34 = (undefined4 *)func_0x0099bce0();
                          ppppppuStack_190 = (uint ******)CONCAT44(ppppppuStack_190._4_4_,*puVar34);
                          puStack_1c0 = &UNK_003fa236;
                          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                                    (&uStack_168,&UNK_001706c4,0x220,1,0,0xffffffff);
                          puStack_1c0 = &UNK_003fa23e;
                          uVar13 = _ZN7android4base10LogMessage6streamEv(&uStack_168);
                          puStack_1c0 = &UNK_003fa252;
                          func_0x0032eb30(uVar13,&UNK_0018353b,0x19);
                          puStack_1c0 = &UNK_003fa25a;
                          _ZN7android4base10LogMessageD2Ev(&uStack_168);
                          *puVar34 = ppppppuStack_190._0_4_;
                        }
                      }
                      puStack_1c0 = &UNK_003f9ea6;
                      ppppppuVar17 = (uint ******)EVP_PKEY_new();
                      puStack_1c0 = &UNK_003f9eb5;
                      iVar9 = EVP_PKEY_set1_RSA(ppppppuVar17,ppppppuVar33[7]);
                      if (iVar9 == 0) {
                        puStack_1c0 = &UNK_003fa292;
                        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                                  (&uStack_168,&UNK_001706c4,0x222,6,0,0xffffffff);
                        puStack_1c0 = &UNK_003fa29a;
                        uVar13 = _ZN7android4base10LogMessage6streamEv(&uStack_168);
                        puStack_1c0 = &UNK_003fa2ae;
                        uVar13 = func_0x0032eb30(uVar13,&UNK_001771be,0x4b);
                        puStack_1c0 = &UNK_003fa2c2;
                        func_0x0032eb30(uVar13,&UNK_0015ae05,1);
                        puStack_1c0 = &UNK_003fa2ca;
                        _ZN7android4base10LogMessageD2Ev(&uStack_168);
                      }
                      lStack_150 = 0;
                      puStack_1c0 = &UNK_003f9ed1;
                      _ZN3adb6crypto23GenerateX509CertificateEP11evp_pkey_st
                                (&lStack_150,ppppppuVar17);
                      uStack_168 = 0;
                      uStack_160 = 0;
                      lStack_158 = 0;
                      puStack_1c0 = &UNK_003f9ef3;
                      _ZN3adb6crypto15X509ToPEMStringEP7x509_st(&uStack_168,lStack_150);
                      uStack_188 = 0;
                      uStack_180 = 0;
                      lStack_178 = 0;
                      puStack_1c0 = &UNK_003f9f17;
                      _ZN3adb6crypto3Key11ToPEMStringEP11evp_pkey_st(&uStack_188,ppppppuVar17);
                      uVar23 = uStack_168 >> 1 & 0x7f;
                      lVar19 = (long)&uStack_168 + 1;
                      if ((uStack_168 & 1) != 0) {
                        uVar23 = uStack_160;
                        lVar19 = lStack_158;
                      }
                      lVar5 = (long)&uStack_188 + 1;
                      if ((uStack_188 & 1) != 0) {
                        lVar5 = lStack_178;
                      }
                      puStack_1c0 = &UNK_003f9f70;
                      _ZN3adb3tls13TlsConnection13SetCertAndKeyEP6ssl_stNSt3__117basic_string_viewIcNS4_11char_traitsIcEEEES8_
                                (pppppppuStack_1a8,lVar19,uVar23,lVar5);
                      if ((uStack_188 & 1) != 0) {
                        puStack_1c0 = &UNK_003f9f97;
                        _ZdaPvSt11align_val_t(lStack_178,uStack_188 & 0xfffffffffffffffe);
                      }
                      pppppppuVar18 = pppppppuStack_198;
                      if ((uStack_168 & 1) != 0) {
                        puStack_1c0 = &UNK_003f9fbb;
                        _ZdaPvSt11align_val_t(lStack_158,uStack_168 & 0xfffffffffffffffe);
                      }
                      lVar19 = lStack_150;
                      lStack_150 = 0;
                      ppppppuStack_190 = ppppppuVar17;
                      if (lVar19 != 0) {
                        puStack_1c0 = &UNK_003f9fd8;
                        X509_free();
                      }
                      bVar36 = true;
                      if (ppppppuStack_190 != (uint ******)0x0) {
                        puStack_1c0 = &UNK_003f9ff3;
                        EVP_PKEY_free();
                      }
                      goto code_r0x003fa0e8;
                    }
                    goto code_r0x003fa000;
                  }
                  if (pppppuVar31 < pppppuVar26) goto code_r0x003f9e20;
code_r0x003f9e67:
                  ppppppuVar33 = (uint ******)ppppppuVar33[1];
                  if (ppppppuVar33 == (uint ******)0x0) goto code_r0x003fa000;
                }
                if (-1 < iVar9) goto code_r0x003f9e67;
code_r0x003f9e20:
                ppppppuVar33 = (uint ******)*ppppppuVar33;
              } while (ppppppuVar33 != (uint ******)0x0);
            }
code_r0x003fa000:
            pppppppuVar18 = pppppppuStack_198;
            bVar36 = false;
            if ((adb_trace_mask._1_1_ & 4) == 0) {
code_r0x003fa0e1:
              bVar36 = false;
              pppppppuVar18 = pppppppuStack_198;
            }
            else if ((int)adb_trace_severity._40_4_ < 2) {
              bVar36 = false;
              puStack_1c0 = &UNK_003fa03d;
              cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
              if (cVar8 != '\0') {
                puStack_1c0 = &UNK_003fa04a;
                puStack_1a0 = (undefined4 *)func_0x0099bce0();
                ppppppuStack_190 = (uint ******)CONCAT44(ppppppuStack_190._4_4_,*puStack_1a0);
                puStack_1c0 = &UNK_003fa085;
                _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                          (&uStack_168,&UNK_001706c4,0x229,1,0,0xffffffff);
                puStack_1c0 = &UNK_003fa08d;
                uVar13 = _ZN7android4base10LogMessage6streamEv(&uStack_168);
                puStack_1c0 = &UNK_003fa0a1;
                uVar13 = func_0x0032eb30(uVar13,&UNK_0018ae54,0xe);
                puStack_1c0 = &UNK_003fa0ad;
                uVar13 = func_0x0032e5a0(uVar13,auStack_128);
                puStack_1c0 = &UNK_003fa0c1;
                func_0x0032eb30(uVar13,&UNK_00178ae2,1);
                puStack_1c0 = &UNK_003fa0c9;
                _ZN7android4base10LogMessageD2Ev(&uStack_168);
                *puStack_1a0 = ppppppuStack_190._0_4_;
                goto code_r0x003fa0e1;
              }
            }
code_r0x003fa0e8:
            puStack_1c0 = &UNK_003fa0f4;
            pppppppuVar35 = pppppppuStack_1b0;
            _ZNSt3__115recursive_mutex6unlockEv();
            if (((char)uStack_130 == '\x01') && (((ulong)auStack_148 & 1) != 0)) {
              puStack_1c0 = &UNK_003fa111;
              pppppppuVar35 = pppppppuStack_138;
              _ZdaPvSt11align_val_t(pppppppuStack_138,(ulong)auStack_148 & 0xfffffffffffffffe);
            }
          }
          puVar34 = &adb_trace_mask;
          puVar32 = adb_trace_severity;
          if (((char)uStack_110 == '\x01') && (((ulong)auStack_128 & 1) != 0)) {
            puStack_1c0 = &UNK_003fa145;
            pppppppuVar35 = pppppppuStack_118;
            _ZdaPvSt11align_val_t(pppppppuStack_118,(ulong)auStack_128 & 0xfffffffffffffffe);
          }
          pppppppuVar29 = pppppppuStack_1b8;
          if (bVar36) break;
        }
        puVar34 = &adb_trace_mask;
        puVar32 = adb_trace_severity;
        pppppppuVar11 = (uint *******)((long)pppppppuVar11 + 1);
      } while (pppppppuVar11 != pppppppuVar29);
    }
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_108) {
    return 1;
  }
  puStack_1c0 = &UNK_003fa400;
  func_0x0099bd00();
  lStack_1f0 = *(long *)(in_FS_OFFSET + 0x28);
  pppppppuVar15 = (uint *******)&pppppppuStack_210;
  apuStack_278[0] = &UNK_003fa430;
  pppppppuVar16 = pppppppuVar35;
  pppppppuStack_1e8 = pppppppuVar18;
  pppppppuStack_1e0 = pppppppuVar11;
  pppppppuStack_1d8 = pppppppuVar29;
  pppppppuStack_1d0 = (uint *******)puVar32;
  puStack_1c8 = puVar34;
  puStack_1c0 = (undefined *)&puStack_d8;
  func_0x003f7650();
  pppppppuVar18 = pppppppuStack_210;
  if (pppppppuStack_210 != (uint *******)0x0) {
    pppppppuStack_268 = pppppppuRam0000000000a00738;
    apuStack_278[0] = &UNK_003fa450;
    _ZNSt3__15mutex4lockEv();
    auStack_230 = (undefined1  [8])0x0;
    pppppppuStack_228 = (uint *******)0x0;
    pppppppuStack_220 = (uint *******)0x0;
    appppppuStack_248[0] = (uint ******)0x0;
    apuStack_278[0] = &UNK_003fa479;
    iVar9 = i2d_RSA_PUBKEY(pppppppuVar18,appppppuStack_248);
    pppppppuStack_258 = pppppppuVar18;
    pppppppuStack_260 = pppppppuVar35;
    if (iVar9 < 0) {
      apuStack_278[0] = &UNK_003fa4cf;
      cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4,0);
      if (cVar8 != '\0') {
        apuStack_278[0] = &UNK_003fa7b9;
        puVar34 = (undefined4 *)func_0x0099bce0();
        uVar3 = *puVar34;
        apuStack_278[0] = &UNK_003fa7e5;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (&pppppppuStack_1f8,&UNK_001706c4,0x6d,4,0,0xffffffff);
        apuStack_278[0] = &UNK_003fa7ed;
        uVar13 = _ZN7android4base10LogMessage6streamEv(&pppppppuStack_1f8);
        apuStack_278[0] = &UNK_003fa801;
        func_0x0032eb30(uVar13,&UNK_00166050,0x1f);
        apuStack_278[0] = &UNK_003fa809;
        _ZN7android4base10LogMessageD2Ev(&pppppppuStack_1f8);
        *puVar34 = uVar3;
      }
      auStack_230 = (undefined1  [8])0x0;
      pppppppuStack_228 = (uint *******)0x0;
      pppppppuStack_220 = (uint *******)0x0;
    }
    else {
      auStack_230 = (undefined1  [8])0x0;
      pppppppuStack_228 = (uint *******)0x0;
      pppppppuStack_220 = (uint *******)0x0;
      apuStack_278[0] = &UNK_003fa4ad;
      _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc(auStack_230,0x20,0);
      pppppppuVar29 = pppppppuStack_220;
      if (((ulong)auStack_230 & 1) == 0) {
        pppppppuVar29 = (uint *******)(auStack_230 + 1);
      }
      apuStack_278[0] = &UNK_003fa4f1;
      SHA256(appppppuStack_248[0],iVar9,pppppppuVar29);
      apuStack_278[0] = &UNK_003fa4fd;
      OPENSSL_free(appppppuStack_248[0]);
    }
    ppppppuVar17 = ppppppuRam0000000000a00740;
    ppppppuVar33 = (uint ******)ppppppuRam0000000000a00740[1];
    if (ppppppuVar33 != (uint ******)0x0) {
      pppppppuVar11 = (uint *******)(auStack_230 + 1);
      pppppppuVar35 = (uint *******)((ulong)auStack_230 >> 1 & 0x7f);
      if (((ulong)auStack_230 & 1) != 0) {
        pppppppuVar11 = pppppppuStack_220;
        pppppppuVar35 = pppppppuStack_228;
      }
      do {
        while( true ) {
          bVar36 = (*(byte *)(ppppppuVar33 + 4) & 1) != 0;
          pppppppuVar16 = (uint *******)((long)ppppppuVar33 + 0x21);
          if (bVar36) {
            pppppppuVar16 = (uint *******)ppppppuVar33[6];
          }
          pppppppuVar29 = (uint *******)(ulong)(*(byte *)(ppppppuVar33 + 4) >> 1);
          if (bVar36) {
            pppppppuVar29 = (uint *******)ppppppuVar33[5];
          }
          pppppppuVar18 = pppppppuVar35;
          if (pppppppuVar29 < pppppppuVar35) {
            pppppppuVar18 = pppppppuVar29;
          }
          apuStack_278[0] = &UNK_003fa563;
          iVar9 = func_0x0099c3a0(pppppppuVar11,pppppppuVar16,pppppppuVar18);
          if (iVar9 != 0) break;
          if (pppppppuVar35 == pppppppuVar29) {
            if (ppppppuVar33 != ppppppuVar17 + 1) {
              pppppppuVar29 = (uint *******)&UNK_00181c1f;
              pppppppuVar18 = pppppppuStack_258;
              goto code_r0x003fa614;
            }
            goto code_r0x003fa59b;
          }
          if (pppppppuVar35 < pppppppuVar29) goto code_r0x003fa530;
code_r0x003fa577:
          ppppppuVar33 = (uint ******)ppppppuVar33[1];
          if (ppppppuVar33 == (uint ******)0x0) goto code_r0x003fa59b;
        }
        if (-1 < iVar9) goto code_r0x003fa577;
code_r0x003fa530:
        ppppppuVar33 = (uint ******)*ppppppuVar33;
      } while (ppppppuVar33 != (uint ******)0x0);
    }
code_r0x003fa59b:
    pppppppuVar16 = (uint *******)auStack_230;
    appppppuStack_248[0] = ppppppuVar17;
    apuStack_278[0] = &UNK_003fa5c5;
    pppppppuStack_1f8 = pppppppuVar16;
    lVar19 = _ZZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_10shared_ptrI6rsa_stEEEENS_19__map_value_compareIS7_NS_4pairIKS7_SA_EENS_4lessIS7_EEEENS5_ISF_EEE16__emplace_uniqueB8nn220000IJRKNS_21piecewise_construct_tENS_5tupleIJRSE_EEENSP_IJEEEEEENSD_INS_15__tree_iteratorISB_PNS_11__tree_nodeISB_PvEElEEbEEDpOT_ENKUlSQ_SO_OSR_OSS_E_clESQ_SO_S13_S14_
                       (appppppuStack_248,pppppppuVar16,&_ZNSt3__119piecewise_constructE,
                        &pppppppuStack_1f8,&uStack_1f9);
    pppppppuVar29 = pppppppuStack_208;
    pppppppuVar18 = pppppppuStack_258;
    pppppppuStack_210 = (uint *******)0x0;
    pppppppuStack_208 = (uint *******)0x0;
    *(uint ********)(lVar19 + 0x38) = pppppppuStack_258;
    pppppppuVar11 = *(uint ********)(lVar19 + 0x40);
    *(uint ********)(lVar19 + 0x40) = pppppppuVar29;
    pppppppuVar29 = (uint *******)&UNK_0015e18b;
    if (pppppppuVar11 != (uint *******)0x0) {
      LOCK();
      pppppppuVar15 = pppppppuVar11 + 1;
      ppppppuVar33 = *pppppppuVar15;
      *pppppppuVar15 = (uint ******)((long)*pppppppuVar15 + -1);
      UNLOCK();
      if (ppppppuVar33 == (uint ******)0x0) {
        apuStack_278[0] = &UNK_003fa60c;
        (*(code *)(*pppppppuVar11)[2])(pppppppuVar11);
        apuStack_278[0] = &UNK_003fa614;
        _ZNSt3__119__shared_weak_count14__release_weakEv(pppppppuVar11);
      }
    }
code_r0x003fa614:
    if (((adb_trace_mask._1_1_ & 4) != 0) && ((int)adb_trace_severity._40_4_ < 2)) {
      pppppppuVar16 = (uint *******)0x0;
      apuStack_278[0] = &UNK_003fa6b4;
      cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1);
      if (cVar8 != '\0') {
        apuStack_278[0] = &UNK_003fa6c1;
        puVar34 = (undefined4 *)func_0x0099bce0();
        uStack_24c = *puVar34;
        apuStack_278[0] = &UNK_003fa6f2;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (&pppppppuStack_1f8,&UNK_001706c4,0x96,1,0,0xffffffff);
        apuStack_278[0] = &UNK_003fa6fa;
        uVar13 = _ZN7android4base10LogMessage6streamEv(&pppppppuStack_1f8);
        apuStack_278[0] = &UNK_003fa705;
        uVar20 = func_0x0099bcf0(pppppppuVar29);
        apuStack_278[0] = &UNK_003fa713;
        uVar13 = func_0x0032eb30(uVar13,pppppppuVar29,uVar20);
        apuStack_278[0] = &UNK_003fa727;
        uVar13 = func_0x0032eb30(uVar13,&UNK_0015e196,0xb);
        apuStack_278[0] = &UNK_003fa736;
        uVar13 = func_0x0032e5a0(uVar13,pppppppuStack_260);
        apuStack_278[0] = &UNK_003fa74a;
        pppppppuVar35 = (uint *******)func_0x0032eb30(uVar13,&UNK_00181c36,0x13);
        pppppppuVar16 = (uint *******)((ulong)auStack_230 >> 1 & 0x7f);
        pppppppuVar15 = (uint *******)(auStack_230 + 1);
        if (((ulong)auStack_230 & 1) != 0) {
          pppppppuVar16 = pppppppuStack_228;
          pppppppuVar15 = pppppppuStack_220;
        }
        pppppppuVar11 = appppppuStack_248;
        apuStack_278[0] = &UNK_003fa775;
        _ZN3adb3tls21SHA256BitsToHexStringENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEE
                  (pppppppuVar11,pppppppuVar15,pppppppuVar16);
        apuStack_278[0] = &UNK_003fa780;
        pppppppuVar16 = pppppppuVar11;
        func_0x0032e5a0(pppppppuVar35);
        if (((ulong)appppppuStack_248[0] & 1) != 0) {
          pppppppuVar16 = (uint *******)((ulong)appppppuStack_248[0] & 0xfffffffffffffffe);
          apuStack_278[0] = &UNK_003fa79d;
          _ZdaPvSt11align_val_t(uStack_238);
        }
        apuStack_278[0] = &UNK_003fa7a6;
        _ZN7android4base10LogMessageD2Ev(&pppppppuStack_1f8);
        *puVar34 = uStack_24c;
      }
    }
    if (((ulong)auStack_230 & 1) != 0) {
      pppppppuVar16 = (uint *******)((ulong)auStack_230 & 0xfffffffffffffffe);
      apuStack_278[0] = &UNK_003fa645;
      _ZdaPvSt11align_val_t(pppppppuStack_220);
    }
    apuStack_278[0] = &UNK_003fa651;
    pppppppuVar15 = pppppppuStack_268;
    _ZNSt3__115recursive_mutex6unlockEv();
  }
  pppppppuVar28 = pppppppuStack_208;
  if (pppppppuStack_208 != (uint *******)0x0) {
    LOCK();
    pppppppuVar1 = pppppppuStack_208 + 1;
    ppppppuVar33 = *pppppppuVar1;
    *pppppppuVar1 = (uint ******)((long)*pppppppuVar1 + -1);
    UNLOCK();
    if (ppppppuVar33 == (uint ******)0x0) {
      apuStack_278[0] = &UNK_003fa675;
      (*(code *)(*pppppppuStack_208)[2])(pppppppuStack_208);
      apuStack_278[0] = &UNK_003fa67d;
      pppppppuVar15 = pppppppuVar28;
      _ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_1f0) {
    return (ulong)(pppppppuVar18 != (uint *******)0x0);
  }
  apuStack_278[0] = &UNK_003fa817;
  func_0x0099bd00();
  pppppppuStack_288 = pppppppuVar28;
  uStack_3f4 = (uint)pppppppuVar15;
  uStack_2a8 = *(ulong *)(in_FS_OFFSET + 0x28);
  puVar34 = &adb_trace_mask;
  pppppppuVar28 = pppppppuVar16;
  pppppppuStack_2a0 = pppppppuVar18;
  pppppppuStack_298 = pppppppuVar11;
  pppppppuStack_290 = pppppppuVar29;
  pppppppuStack_280 = pppppppuVar35;
  apuStack_278[0] = (undefined *)&puStack_1c0;
  if (((adb_trace_mask._1_1_ & 4) != 0) &&
     (apuStack_278[0] = (undefined *)&puStack_1c0, (int)adb_trace_severity._40_4_ < 2)) {
    pppppppuVar15 = (uint *******)0x1;
    pppppppuVar18 = (uint *******)((ulong)pppppppuVar16 & 0xffffffff);
    puStack_410 = &UNK_003fae5b;
    apuStack_278[0] = (undefined *)&puStack_1c0;
    cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
    pppppppuVar28 = (uint *******)((ulong)pppppppuVar16 & 0xffffffff);
    if (cVar8 != '\0') {
      puStack_410 = &UNK_003fae6a;
      pppppppuVar29 = (uint *******)func_0x0099bce0();
      uVar10 = *(uint *)pppppppuVar29;
      pppppppuVar35 = (uint *******)(ulong)uVar10;
      pppppppuVar11 = appppppuStack_3b8;
      puStack_410 = &UNK_003fae99;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (pppppppuVar11,&UNK_001706c4,0x156,1,0,0xffffffff);
      puStack_410 = &UNK_003faea1;
      uVar13 = _ZN7android4base10LogMessage6streamEv(pppppppuVar11);
      puStack_410 = &UNK_003faeb5;
      func_0x0032eb30(uVar13,&UNK_00189681,0x1e);
      puStack_410 = &UNK_003faebd;
      pppppppuVar15 = pppppppuVar11;
      _ZN7android4base10LogMessageD2Ev();
      pppppppuVar28 = (uint *******)((ulong)pppppppuVar16 & 0xffffffff);
      *(uint *)pppppppuVar29 = uVar10;
    }
  }
  if (((ulong)pppppppuVar28 & 1) != 0) {
    puStack_410 = &UNK_003fa883;
    func_0x0099bdb0(appppppuStack_3b8,0,0x110);
    pppppppuVar11 = (uint *******)&uStack_3d8;
code_r0x003fa890:
    while( true ) {
      pppppppuVar15 = (uint *******)(ulong)uStack_3f4;
      puStack_410 = &UNK_003fa8a7;
      lVar19 = func_0x0099be20(pppppppuVar15,appppppuStack_3b8,0x110);
      if (lVar19 == -1) goto code_r0x003fa8d0;
      iVar9 = (int)lVar19;
      if (iVar9 == -1) break;
      if (0 < (long)iVar9) {
        pppppppuVar18 = (uint *******)((long)appppppuStack_3b8 + (long)iVar9);
        pppppppuVar35 = appppppuStack_3b8;
        do {
          plVar22 = *(long **)(lRam0000000000a00748 + 8);
          plVar21 = (long *)(lRam0000000000a00748 + 8);
          plVar7 = plVar21;
          if (plVar22 != (long *)0x0) {
            do {
              while ((int)*(uint *)pppppppuVar35 < (int)*(uint *)(plVar22 + 4)) {
                plVar22 = (long *)*plVar22;
                if (plVar22 == (long *)0x0) goto code_r0x003fa9c1;
              }
              if (*(uint *)pppppppuVar35 == *(uint *)(plVar22 + 4)) {
                plVar7 = plVar22;
                if (plVar22 != plVar21) goto code_r0x003fa9d5;
                break;
              }
              plVar22 = (long *)plVar22[1];
            } while (plVar22 != (long *)0x0);
          }
code_r0x003fa9c1:
          plVar22 = plVar7;
          puStack_410 = &UNK_003fa9cd;
          cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(6,0);
          if (cVar8 != '\0') {
            puStack_410 = &UNK_003fac63;
            puStack_3f0 = (undefined4 *)func_0x0099bce0();
            uStack_3e4 = *puStack_3f0;
            puStack_410 = &UNK_003fac94;
            _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                      (pppppppuVar11,&UNK_001706c4,0x16e,6,0,0xffffffff);
            puStack_410 = &UNK_003fac9c;
            uVar13 = _ZN7android4base10LogMessage6streamEv(pppppppuVar11);
            puStack_410 = &UNK_003facb0;
            uVar13 = func_0x0032eb30(uVar13,&UNK_0018671d,0x32);
            puStack_410 = &UNK_003facbb;
            _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(uVar13);
            puStack_410 = &UNK_003facc3;
            _ZN7android4base10LogMessageD2Ev(pppppppuVar11);
            *puStack_3f0 = uStack_3e4;
          }
code_r0x003fa9d5:
          uStack_3d8 = (uint ******)0x0;
          uStack_3d0 = 0;
          lStack_3c8 = 0;
          if ((*(byte *)(plVar22 + 5) & 1) == 0) {
            lStack_3c8 = plVar22[7];
            uStack_3d8 = (uint ******)plVar22[5];
            uStack_3d0 = plVar22[6];
            uVar10 = *(uint *)((long)pppppppuVar35 + 0xc);
          }
          else {
            puStack_410 = &UNK_003faa30;
            func_0x00330340(pppppppuVar11,plVar22[7],plVar22[6]);
            uVar10 = *(uint *)((long)pppppppuVar35 + 0xc);
          }
          if (uVar10 != 0) {
            if (((ulong)uStack_3d8 & 1) == 0) {
              uVar30 = 0x16;
              if ((byte)uStack_3d8 == 0x2c) {
code_r0x003faa8a:
                uStack_408 = 0;
                puStack_410 = &UNK_003faaab;
                _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__grow_byEmmmmmm
                          (pppppppuVar11,uVar30,1,uVar30,uVar30,0);
                uVar23 = uVar30;
                goto code_r0x003faaae;
              }
              uVar23 = (ulong)((byte)uStack_3d8 >> 1);
              uVar30 = (ulong)uStack_3d8 >> 8;
              uStack_3d8 = (uint ******)CONCAT71((int7)uVar30,(byte)uStack_3d8 + 2);
              lVar19 = (long)&uStack_3d8 + 1;
            }
            else {
              uVar30 = ((ulong)uStack_3d8 & 0xfffffffffffffffe) - 1;
              uVar23 = uStack_3d0;
              if (uStack_3d0 == uVar30) goto code_r0x003faa8a;
code_r0x003faaae:
              uStack_3d0 = uVar23 + 1;
              lVar19 = lStack_3c8;
            }
            *(undefined2 *)(lVar19 + uVar23) = 0x2f;
            puStack_410 = &UNK_003faad2;
            _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                      (pppppppuVar11);
          }
          if (((ulong)*pppppppuVar35 & 0x18000000000) == 0) {
            puStack_410 = &UNK_003fab2c;
            cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(3,0);
            if (cVar8 != '\0') {
              puStack_410 = &UNK_003fab39;
              puStack_3f0 = (undefined4 *)func_0x0099bce0();
              uStack_3e4 = *puStack_3f0;
              puStack_410 = &UNK_003fab71;
              _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                        (auStack_3e0,&UNK_001706c4,0x17f,3,0);
              puStack_410 = &UNK_003fab79;
              uVar13 = _ZN7android4base10LogMessage6streamEv(auStack_3e0);
              puStack_410 = &UNK_003fab8d;
              uVar13 = func_0x0032eb30(uVar13,&UNK_0017d6f4,0x16);
              uVar23 = (ulong)uStack_3d8 >> 1 & 0x7f;
              lVar19 = (long)&uStack_3d8 + 1;
              if (((ulong)uStack_3d8 & 1) != 0) {
                uVar23 = uStack_3d0;
                lVar19 = lStack_3c8;
              }
              puStack_410 = &UNK_003fabbd;
              uVar13 = func_0x0032eb30(uVar13,lVar19,uVar23);
              puStack_410 = &UNK_003fabd1;
              plVar22 = (long *)func_0x0032eb30(uVar13,&UNK_0016143e,4);
              *(uint *)((long)plVar22 + *(long *)(*plVar22 + -0x18) + 8) =
                   *(uint *)((long)plVar22 + *(long *)(*plVar22 + -0x18) + 8) & 0xffffffb5 | 8;
              puStack_410 = &UNK_003fabf2;
              _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj(plVar22);
code_r0x003fabf2:
              puStack_410 = &UNK_003fabfa;
              _ZN7android4base10LogMessageD2Ev(auStack_3e0);
              *puStack_3f0 = uStack_3e4;
            }
          }
          else {
            bVar36 = (adb_trace_mask._1_1_ & 4) != 0;
            if (((ulong)*pppppppuVar35 & 0x4000000000000000) == 0) {
              if ((int)adb_trace_severity._40_4_ < 2 && bVar36) {
                puStack_410 = &UNK_003face3;
                cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
                if (cVar8 != '\0') {
                  puStack_410 = &UNK_003facf0;
                  puStack_3f0 = (undefined4 *)func_0x0099bce0();
                  uStack_3e4 = *puStack_3f0;
                  puStack_410 = &UNK_003fad28;
                  _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                            (auStack_3e0,&UNK_001706c4,0x17b,1,0);
                  puStack_410 = &UNK_003fad30;
                  uVar13 = _ZN7android4base10LogMessage6streamEv(auStack_3e0);
                  puStack_410 = &UNK_003fad44;
                  uVar13 = func_0x0032eb30(uVar13,&UNK_00157972,0x16);
                  puStack_410 = &UNK_003fad4f;
                  uVar13 = func_0x0032e5a0(uVar13,pppppppuVar11);
                  puStack_410 = &UNK_003fad63;
                  func_0x0032eb30(uVar13,&UNK_00162c6d,1);
                  puStack_410 = &UNK_003fad6b;
                  _ZN7android4base10LogMessageD2Ev(auStack_3e0);
                  *puStack_3f0 = uStack_3e4;
                }
              }
              puStack_410 = &UNK_003fab12;
              func_0x003f8ce0(pppppppuVar11);
            }
            else if ((int)adb_trace_severity._40_4_ < 2 && bVar36) {
              puStack_410 = &UNK_003fad8b;
              cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
              if (cVar8 != '\0') {
                puStack_410 = &UNK_003fad98;
                puStack_3f0 = (undefined4 *)func_0x0099bce0();
                uStack_3e4 = *puStack_3f0;
                puStack_410 = &UNK_003fadd0;
                _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                          (auStack_3e0,&UNK_001706c4,0x179,1,0);
                puStack_410 = &UNK_003fadd8;
                uVar13 = _ZN7android4base10LogMessage6streamEv(auStack_3e0);
                puStack_410 = &UNK_003fadec;
                uVar13 = func_0x0032eb30(uVar13,&UNK_00187e90,0x1b);
                puStack_410 = &UNK_003fadf7;
                uVar13 = func_0x0032e5a0(uVar13,pppppppuVar11);
                puStack_410 = &UNK_003fae0b;
                func_0x0032eb30(uVar13,&UNK_00162c6d,1);
                goto code_r0x003fabf2;
              }
            }
          }
          uVar10 = *(uint *)((long)pppppppuVar35 + 0xc);
          if (((ulong)uStack_3d8 & 1) != 0) {
            puStack_410 = &UNK_003fac40;
            _ZdaPvSt11align_val_t(lStack_3c8);
          }
          pppppppuVar35 = (uint *******)((long)pppppppuVar35 + (ulong)uVar10 + 0x10);
        } while (pppppppuVar35 < pppppppuVar18);
      }
    }
    puStack_410 = &UNK_003fa8bb;
    pppppppuVar29 = (uint *******)func_0x0099bce0();
    uVar10 = *(uint *)pppppppuVar29;
    goto joined_r0x003fa8e2;
  }
code_r0x003fae28:
  if (*(ulong *)(in_FS_OFFSET + 0x28) == uStack_2a8) {
    return *(ulong *)(in_FS_OFFSET + 0x28);
  }
  puStack_410 = &UNK_003faf3b;
  func_0x0099bd00();
  lStack_440 = *(long *)(in_FS_OFFSET + 0x28);
  pppppppuStack_438 = pppppppuVar18;
  pppppppuStack_430 = pppppppuVar11;
  pppppppuStack_428 = pppppppuVar29;
  puStack_420 = puVar34;
  pppppppuStack_418 = pppppppuVar35;
  puStack_410 = (undefined *)apuStack_278;
  puVar34 = (undefined4 *)_ZNSt3__119__thread_local_dataEv();
  ppppppuVar33 = *pppppppuVar15;
  *pppppppuVar15 = (uint ******)0x0;
  func_0x0099bfc0(*puVar34,ppppppuVar33);
  lStack_450 = 0;
  plStack_448 = (long *)0x0;
  _ZN10atransport3KeyEv(&lStack_450,pppppppuVar15[1]);
  if (lStack_450 == 0) {
    if ((((adb_trace_mask._1_1_ & 4) != 0) && ((int)adb_trace_severity._40_4_ < 2)) &&
       (cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0), cVar8 != '\0')) {
      puVar34 = (undefined4 *)func_0x0099bce0();
      uVar3 = *puVar34;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&lStack_460,&UNK_001706c4,0x1ec,1,0,0xffffffff);
      uVar13 = _ZN7android4base10LogMessage6streamEv(&lStack_460);
      func_0x0032eb30(uVar13,&UNK_0015e1a2,0x24);
      _ZN7android4base10LogMessageD2Ev(&lStack_460);
      *puVar34 = uVar3;
    }
    _ZN10atransport7NextKeyEv(&lStack_460,pppppppuVar15[1]);
    plVar22 = plStack_448;
    plStack_448 = plStack_458;
    lStack_450 = lStack_460;
    lStack_460 = 0;
    plStack_458 = (long *)0x0;
    if (plVar22 != (long *)0x0) {
      LOCK();
      plVar7 = plVar22 + 1;
      lVar19 = *plVar7;
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (lVar19 == 0) {
        (**(code **)(*plVar22 + 0x10))(plVar22);
        _ZNSt3__119__shared_weak_count14__release_weakEv(plVar22);
      }
    }
    plVar22 = plStack_458;
    if (plStack_458 != (long *)0x0) {
      LOCK();
      plVar7 = plStack_458 + 1;
      lVar19 = *plVar7;
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (lVar19 == 0) {
        (**(code **)(*plStack_458 + 0x10))(plStack_458);
        _ZNSt3__119__shared_weak_count14__release_weakEv(plVar22);
      }
    }
    if (lStack_450 == 0) {
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&lStack_460,&UNK_001706c4,0x1ee,6,0,0xffffffff);
      uVar13 = _ZN7android4base10LogMessage6streamEv(&lStack_460);
      uVar13 = func_0x0032eb30(uVar13,&UNK_0016608e,0x11);
      func_0x0032eb30(uVar13,&UNK_0015ae05,1);
      _ZN7android4base10LogMessageD2Ev(&lStack_460);
    }
  }
  if ((((adb_trace_mask._1_1_ & 4) != 0) && ((int)adb_trace_severity._40_4_ < 2)) &&
     (cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0), cVar8 != '\0')) {
    puVar34 = (undefined4 *)func_0x0099bce0();
    uVar3 = *puVar34;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (&lStack_460,&UNK_001706c4,0x1f1,1,0,0xffffffff);
    uVar13 = _ZN7android4base10LogMessage6streamEv(&lStack_460);
    func_0x0032eb30(uVar13,&UNK_00167bf3,0x1b);
    _ZN7android4base10LogMessageD2Ev(&lStack_460);
    *puVar34 = uVar3;
  }
  ppppppuVar33 = pppppppuVar15[1];
  _ZNSt3__15mutex4lockEv(ppppppuVar33 + 0x34);
  pppppuVar31 = ppppppuVar33[0x2b];
  pppppuVar27 = ppppppuVar33[0x2c];
  if (pppppuVar27 != (uint *****)0x0) {
    LOCK();
    pppppuVar27[1] = (uint ****)((long)pppppuVar27[1] + 1);
    UNLOCK();
  }
  _ZNSt3__115recursive_mutex6unlockEv(ppppppuVar33 + 0x34);
  cVar8 = (*(code *)(*pppppuVar31)[5])(pppppuVar31,lStack_450,0);
  if (pppppuVar27 != (uint *****)0x0) {
    LOCK();
    pppppuVar31 = pppppuVar27 + 1;
    ppppuVar2 = *pppppuVar31;
    *pppppuVar31 = (uint ****)((long)*pppppuVar31 + -1);
    UNLOCK();
    if (ppppuVar2 == (uint ****)0x0) {
      (*(code *)(*pppppuVar27)[2])(pppppuVar27);
      _ZNSt3__119__shared_weak_count14__release_weakEv(pppppuVar27);
    }
  }
  bVar36 = (adb_trace_mask._1_1_ & 4) != 0;
  if (cVar8 == '\0') {
    if (((int)adb_trace_severity._40_4_ < 2 && bVar36) &&
       (cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0), cVar8 != '\0')) {
      puVar34 = (undefined4 *)func_0x0099bce0();
      uVar3 = *puVar34;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&lStack_460,&UNK_001706c4,0x1f6,1,0,0xffffffff);
      uVar13 = _ZN7android4base10LogMessage6streamEv(&lStack_460);
      func_0x0032eb30(uVar13,&UNK_00187eb1,0x23);
      _ZN7android4base10LogMessageD2Ev(&lStack_460);
      *puVar34 = uVar3;
    }
    _ZN10atransport4KickEv(pppppppuVar15[1]);
  }
  else if (((int)adb_trace_severity._40_4_ < 2 && bVar36) &&
          (cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0), cVar8 != '\0')) {
    puVar34 = (undefined4 *)func_0x0099bce0();
    uVar3 = *puVar34;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (&lStack_460,&UNK_001706c4,500,1,0,0xffffffff);
    uVar13 = _ZN7android4base10LogMessage6streamEv(&lStack_460);
    func_0x0032eb30(uVar13,&UNK_00183573,0x2f);
    _ZN7android4base10LogMessageD2Ev(&lStack_460);
    *puVar34 = uVar3;
  }
  plVar22 = plStack_448;
  if (plStack_448 != (long *)0x0) {
    LOCK();
    plVar7 = plStack_448 + 1;
    lVar19 = *plVar7;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (lVar19 == 0) {
      (**(code **)(*plStack_448 + 0x10))(plStack_448);
      _ZNSt3__119__shared_weak_count14__release_weakEv(plVar22);
    }
  }
  ppppppuVar33 = *pppppppuVar15;
  *pppppppuVar15 = (uint ******)0x0;
  if (ppppppuVar33 != (uint ******)0x0) {
    _ZNSt3__115__thread_structD2Ev(ppppppuVar33);
    _ZdaPvSt11align_val_t(ppppppuVar33,8);
  }
  _ZdaPvSt11align_val_t(pppppppuVar15,0x10);
  if (*(long *)(in_FS_OFFSET + 0x28) != lStack_440) {
    func_0x0099bd00();
    pcVar4 = (code *)swi(3);
    uVar23 = (*pcVar4)();
    return uVar23;
  }
  return 0;
code_r0x003fa8d0:
  puStack_410 = &UNK_003fa8d5;
  pppppppuVar29 = (uint *******)func_0x0099bce0();
  uVar10 = *(uint *)pppppppuVar29;
  if (uVar10 == 4) goto code_r0x003fa890;
joined_r0x003fa8e2:
  if (uVar10 == 4) goto code_r0x003fa890;
  if (uVar10 != 0xb) {
    puStack_410 = &UNK_003fa8f9;
    cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(6,0);
    if (cVar8 != '\0') {
      uVar10 = *(uint *)pppppppuVar29;
      pppppppuVar18 = (uint *******)(ulong)uVar10;
      puStack_410 = &UNK_003fa920;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (pppppppuVar11,&UNK_001706c4,0x163,6,0);
      puStack_410 = &UNK_003fa928;
      uVar13 = _ZN7android4base10LogMessage6streamEv(pppppppuVar11);
      puStack_410 = &UNK_003fa93c;
      func_0x0032eb30(uVar13,&UNK_0018ae63,0x1c);
      puStack_410 = &UNK_003fa944;
      _ZN7android4base10LogMessageD2Ev(pppppppuVar11);
      *(uint *)pppppppuVar29 = uVar10;
    }
    goto code_r0x003fa890;
  }
  if (((adb_trace_mask._1_1_ & 4) != 0) && ((int)adb_trace_severity._40_4_ < 2)) {
    pppppppuVar15 = (uint *******)0x1;
    puStack_410 = &UNK_003faed4;
    cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
    if (cVar8 != '\0') {
      uVar10 = *(uint *)pppppppuVar29;
      puVar34 = (undefined4 *)(ulong)uVar10;
      pppppppuVar18 = (uint *******)&uStack_3d8;
      puStack_410 = &UNK_003faf09;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (pppppppuVar18,&UNK_001706c4,0x160,1,0,0xffffffff);
      puStack_410 = &UNK_003faf11;
      uVar13 = _ZN7android4base10LogMessage6streamEv(pppppppuVar18);
      puStack_410 = &UNK_003faf25;
      func_0x0032eb30(uVar13,&UNK_001706e9,0x17);
      puStack_410 = &UNK_003faf2d;
      pppppppuVar15 = pppppppuVar18;
      _ZN7android4base10LogMessageD2Ev();
      *(uint *)pppppppuVar29 = uVar10;
    }
  }
  goto code_r0x003fae28;
}


