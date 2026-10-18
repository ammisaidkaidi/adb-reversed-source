// Function: pairing_connection_destroy
// Address: 00425e70
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Type propagation algorithm not settling */

ulong pairing_connection_destroy
                (long *param_1,undefined *param_2,undefined8 param_3,undefined8 param_4,
                undefined8 *******param_5,undefined8 param_6)

{
  undefined8 *******pppppppuVar1;
  char cVar2;
  uint uVar3;
  ulong *puVar4;
  undefined8 *******pppppppuVar5;
  long lVar6;
  undefined8 *******pppppppuVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  ulong uVar10;
  undefined8 *******pppppppuVar11;
  undefined8 uVar12;
  undefined8 ******ppppppuVar13;
  undefined8 extraout_RDX;
  long extraout_RDX_00;
  undefined8 *******pppppppuVar14;
  undefined8 *******pppppppuVar15;
  undefined8 *******pppppppuVar16;
  long *unaff_RBX;
  undefined *puVar17;
  undefined8 *******pppppppuVar18;
  undefined4 uVar19;
  ulong unaff_R12;
  undefined8 *******pppppppuVar20;
  uint *unaff_R13;
  undefined8 *******pppppppuVar21;
  ulong unaff_R14;
  undefined8 *******pppppppuVar22;
  long unaff_R15;
  long in_FS_OFFSET;
  bool bVar23;
  undefined8 ******ppppppuStack_1b0;
  ulong uStack_1a8;
  undefined8 *******pppppppuStack_1a0;
  undefined8 *******pppppppuStack_198;
  undefined8 *******pppppppuStack_190;
  undefined *apuStack_188 [2];
  undefined8 *******pppppppuStack_178;
  undefined8 *******pppppppuStack_170;
  undefined8 *******pppppppuStack_168;
  undefined8 *******pppppppuStack_160;
  undefined8 *******pppppppuStack_158;
  undefined8 *******pppppppuStack_150;
  undefined1 uStack_144;
  undefined1 uStack_143;
  undefined2 uStack_142;
  undefined2 uStack_140;
  undefined2 uStack_13e;
  uint uStack_13c;
  undefined8 *******pppppppuStack_138;
  undefined8 *******pppppppuStack_130;
  undefined8 *******pppppppuStack_128;
  undefined8 *******pppppppuStack_120;
  long lStack_110;
  undefined8 *******pppppppuStack_108;
  undefined8 *******pppppppuStack_100;
  undefined8 *******pppppppuStack_f8;
  undefined8 *******pppppppuStack_f0;
  ulong uStack_e8;
  undefined *puStack_e0;
  undefined4 uStack_d4;
  undefined8 ******ppppppuStack_d0;
  undefined8 *******pppppppuStack_c8;
  undefined8 *******pppppppuStack_c0;
  long lStack_b8;
  undefined2 uStack_ae;
  uint uStack_ac;
  long lStack_a8;
  long *plStack_a0;
  ulong uStack_98;
  uint *puStack_90;
  ulong uStack_88;
  long lStack_80;
  undefined *puStack_78;
  ulong uStack_70;
  undefined8 ******ppppppuStack_68;
  long lStack_60;
  long *plStack_58;
  undefined1 *apuStack_30 [2];
  long lStack_20;
  ulong uStack_18;
  
  uStack_18 = *(ulong *)(in_FS_OFFSET + 0x28);
  if (param_1 == (long *)0x0) {
    unaff_RBX = &lStack_20;
    uVar10 = 6;
    param_5 = (undefined8 *******)0x0;
    param_6 = 0xffffffff;
    apuStack_30[0] = &UNK_00425ecf;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i(unaff_RBX,&UNK_00161570,0x1e4,6,0);
    apuStack_30[0] = &UNK_00425ed7;
    uVar8 = _ZN7android4base10LogMessage6streamEv(unaff_RBX);
    apuStack_30[0] = &UNK_00425eeb;
    uVar8 = func_0x0032eb30(uVar8,&UNK_001725c2,0x11);
    param_2 = &UNK_0015ae05;
    apuStack_30[0] = &UNK_00425eff;
    func_0x0032eb30(uVar8,&UNK_0015ae05,1);
    apuStack_30[0] = &UNK_00425f07;
    param_1 = unaff_RBX;
    _ZN7android4base10LogMessageD2Ev();
    if (*(ulong *)(in_FS_OFFSET + 0x28) == uStack_18) {
      return *(ulong *)(in_FS_OFFSET + 0x28);
    }
  }
  else {
    uVar10 = *(ulong *)(in_FS_OFFSET + 0x28);
    if (uVar10 == uStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00425ea7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar10 = (**(code **)(*param_1 + 8))();
      return uVar10;
    }
  }
  apuStack_30[0] = &UNK_00425f22;
  func_0x0099bd00();
  lStack_60 = *(long *)(in_FS_OFFSET + 0x28);
  plStack_58 = unaff_RBX;
  if ((int)param_2 < 0) {
    uVar10 = 0;
    apuStack_30[0] = &stack0xfffffffffffffff8;
code_r0x00424b46:
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_60) {
      return uVar10 & 0xffffffff;
    }
    puStack_78 = &UNK_00424b6b;
    uVar3 = func_0x0099bd00();
code_r0x00424b6b:
    pppppppuVar18 = (undefined8 *******)(ulong)uVar3;
    puStack_78 = &UNK_00424b79;
    _ZNSt3__120__throw_system_errorEiPKc(pppppppuVar18,&UNK_0015f7ec);
  }
  else {
    unaff_R12 = (ulong)param_2 & 0xffffffff;
    puStack_78 = &UNK_00424a98;
    uStack_70 = uVar10;
    apuStack_30[0] = &stack0xfffffffffffffff8;
    unaff_R13 = (uint *)func_0x0099bce0();
    uVar3 = *unaff_R13;
    unaff_R14 = (ulong)uVar3;
    if ((int)param_1[0x80f] != -1) {
      puStack_78 = &UNK_00424aae;
      func_0x0099bd10();
    }
    *(int *)(param_1 + 0x80f) = (int)param_2;
    *unaff_R13 = uVar3;
    uVar10 = 0;
    LOCK();
    bVar23 = (int)param_1[1] == 0;
    if (bVar23) {
      *(int *)(param_1 + 1) = 1;
    }
    UNLOCK();
    unaff_RBX = param_1;
    unaff_R15 = extraout_RDX_00;
    if (!bVar23) goto code_r0x00424b46;
    param_1[0x80b] = extraout_RDX_00;
    param_1[0x80c] = uStack_70;
    puStack_78 = &UNK_00424ae5;
    unaff_R14 = _Znwm(8);
    puStack_78 = &UNK_00424af0;
    _ZNSt3__115__thread_structC2Ev(unaff_R14);
    puStack_78 = &UNK_00424afa;
    puVar4 = (ulong *)_Znwm(0x10);
    *puVar4 = unaff_R14;
    puVar4[1] = (ulong)param_1;
    pppppppuVar18 = &ppppppuStack_68;
    puStack_78 = &UNK_00424b16;
    uVar3 = func_0x0099be80(pppppppuVar18,0,&UNK_00425fb0,puVar4);
    if (uVar3 != 0) goto code_r0x00424b6b;
    if (param_1[0x810] == 0) {
      param_1[0x810] = (long)ppppppuStack_68;
      ppppppuStack_68 = (undefined8 ******)0x0;
      puStack_78 = &UNK_00424b40;
      _ZNSt3__16threadD2Ev(&ppppppuStack_68);
      uVar10 = CONCAT71((int7)((ulong)puVar4 >> 8),1);
      goto code_r0x00424b46;
    }
  }
  puStack_78 = &UNK_00424b7e;
  _ZSt9terminatev();
  puStack_78 = (undefined *)apuStack_30;
  lStack_80 = unaff_R15;
  uStack_88 = unaff_R14;
  puStack_90 = unaff_R13;
  uStack_98 = unaff_R12;
  plStack_a0 = unaff_RBX;
  lStack_a8 = *(long *)(in_FS_OFFSET + 0x28);
  puStack_e0 = &UNK_00424bad;
  uVar3 = pairing_auth_msg_size(pppppppuVar18[0x80e]);
  pppppppuVar20 = (undefined8 *******)(ulong)uVar3;
  if (pppppppuVar20 == (undefined8 *******)0x0) {
    lVar6 = 0;
    pppppppuVar5 = (undefined8 *******)0x0;
  }
  else {
    puStack_e0 = &UNK_00424bc3;
    pppppppuVar5 = (undefined8 *******)_Znwm(pppppppuVar20);
    lVar6 = (long)pppppppuVar5 + (long)pppppppuVar20;
    puStack_e0 = &UNK_00424bd7;
    func_0x0099bdb0(pppppppuVar5,0,pppppppuVar20);
  }
  puStack_e0 = &UNK_00424bee;
  pairing_auth_get_spake2_msg(pppppppuVar18[0x80e],pppppppuVar5);
  uStack_ae = 1;
  pppppppuVar14 = (undefined8 *******)(lVar6 - (long)pppppppuVar5);
  puStack_e0 = &UNK_00424c0d;
  pppppppuVar11 = pppppppuVar14;
  uStack_ac = uVar3;
  cVar2 = _ZN20PairingConnectionCtx11WriteHeaderEPK19PairingPacketHeaderNSt3__117basic_string_viewIcNS3_11char_traitsIcEEEE
                    (pppppppuVar18,&uStack_ae,pppppppuVar5,pppppppuVar14);
  if (cVar2 == '\0') {
    uVar10 = 0;
    pppppppuVar7 = (undefined8 *******)0x4;
    puStack_e0 = &UNK_00424cd4;
    cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4,0);
    if (cVar2 != '\0') {
      puStack_e0 = &UNK_00424cdd;
      pppppppuVar18 = (undefined8 *******)func_0x0099bce0();
      uStack_d4 = *(undefined4 *)pppppppuVar18;
      pppppppuVar11 = (undefined8 *******)0x4;
      param_5 = (undefined8 *******)0x0;
      param_6 = 0xffffffff;
      puStack_e0 = &UNK_00424d0e;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&pppppppuStack_c8,&UNK_00161570,0x132,4,0);
      puStack_e0 = &UNK_00424d16;
      uVar8 = _ZN7android4base10LogMessage6streamEv(&pppppppuStack_c8);
      puVar17 = &UNK_0017d8d9;
      uVar12 = 0x1b;
code_r0x00424db9:
      uVar10 = 0;
      pppppppuVar20 = &pppppppuStack_c8;
      puStack_e0 = &UNK_00424dc1;
      func_0x0032eb30(uVar8,puVar17,uVar12);
      puStack_e0 = &UNK_00424dc9;
      pppppppuVar7 = pppppppuVar20;
      _ZN7android4base10LogMessageD2Ev();
      *(undefined4 *)pppppppuVar18 = uStack_d4;
    }
  }
  else {
    puStack_e0 = &UNK_00424c21;
    pppppppuVar7 = pppppppuVar18;
    cVar2 = _ZN20PairingConnectionCtx10ReadHeaderEP19PairingPacketHeader(pppppppuVar18,&uStack_ae);
    if (cVar2 == '\0') {
      uVar10 = 0;
      pppppppuVar7 = (undefined8 *******)0x4;
      puStack_e0 = &UNK_00424d36;
      cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4,0);
      if (cVar2 != '\0') {
        puStack_e0 = &UNK_00424d74;
        pppppppuVar18 = (undefined8 *******)func_0x0099bce0();
        uStack_d4 = *(undefined4 *)pppppppuVar18;
        pppppppuVar11 = (undefined8 *******)0x4;
        param_5 = (undefined8 *******)0x0;
        param_6 = 0xffffffff;
        puStack_e0 = &UNK_00424da5;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (&pppppppuStack_c8,&UNK_00161570,0x138,4,0);
        puStack_e0 = &UNK_00424dad;
        uVar8 = _ZN7android4base10LogMessage6streamEv(&pppppppuStack_c8);
        puVar17 = &UNK_00174135;
        uVar12 = 0x1c;
        goto code_r0x00424db9;
      }
    }
    else {
      uVar10 = 0;
      puStack_e0 = &UNK_00424c37;
      cVar2 = _ZN20PairingConnectionCtx15CheckHeaderTypeEN3adb5proto18PairingPacket_TypeEh();
      if (cVar2 != '\0') {
        pppppppuStack_c8 = (undefined8 *******)0x0;
        pppppppuStack_c0 = (undefined8 *******)0x0;
        lStack_b8 = 0;
        puStack_e0 = &UNK_00424c63;
        (*(code *)(*pppppppuVar18[0x80d])[9])(&pppppppuStack_c8,pppppppuVar18[0x80d],uStack_ac);
        if (pppppppuStack_c8 == pppppppuStack_c0) {
code_r0x00424c87:
          uVar10 = 0;
          puStack_e0 = &UNK_00424c96;
          cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4,0);
          if (cVar2 != '\0') {
            puStack_e0 = &UNK_00424de3;
            pppppppuVar18 = (undefined8 *******)func_0x0099bce0();
            uStack_d4 = *(undefined4 *)pppppppuVar18;
            uVar10 = 0;
            pppppppuVar20 = &ppppppuStack_d0;
            pppppppuVar11 = (undefined8 *******)0x4;
            param_5 = (undefined8 *******)0x0;
            param_6 = 0xffffffff;
            puStack_e0 = &UNK_00424e14;
            _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                      (pppppppuVar20,&UNK_00161570,0x144,4,0);
            puStack_e0 = &UNK_00424e1c;
            uVar8 = _ZN7android4base10LogMessage6streamEv(pppppppuVar20);
            puStack_e0 = &UNK_00424e30;
            uVar8 = func_0x0032eb30(uVar8,&UNK_0018377b,0x34);
            puStack_e0 = &UNK_00424e40;
            uVar8 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm
                              (uVar8,(long)pppppppuStack_c0 - (long)pppppppuStack_c8);
            puStack_e0 = &UNK_00424e54;
            func_0x0032eb30(uVar8,&UNK_00178ae2,1);
            puStack_e0 = &UNK_00424e5c;
            _ZN7android4base10LogMessageD2Ev(pppppppuVar20);
            *(undefined4 *)pppppppuVar18 = uStack_d4;
          }
        }
        else {
          puStack_e0 = &UNK_00424c80;
          cVar2 = pairing_auth_init_cipher
                            (pppppppuVar18[0x80e],pppppppuStack_c8,
                             (long)pppppppuStack_c0 - (long)pppppppuStack_c8);
          uVar10 = 1;
          if (cVar2 == '\0') goto code_r0x00424c87;
        }
        pppppppuVar7 = pppppppuStack_c8;
        if (pppppppuStack_c8 != (undefined8 *******)0x0) {
          pppppppuStack_c0 = pppppppuStack_c8;
          puStack_e0 = &UNK_00424cbb;
          _ZdaPvSt11align_val_t(pppppppuStack_c8,lStack_b8 - (long)pppppppuStack_c8);
        }
      }
    }
  }
  if (pppppppuVar5 != (undefined8 *******)0x0) {
    puStack_e0 = &UNK_00424d4a;
    pppppppuVar7 = pppppppuVar5;
    _ZdaPvSt11align_val_t(pppppppuVar5,pppppppuVar14);
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_a8) {
    return uVar10;
  }
  puStack_e0 = &UNK_00424e6d;
  func_0x0099bd00();
  lStack_110 = *(long *)(in_FS_OFFSET + 0x28);
  pppppppuVar16 = pppppppuVar7 + 5;
  apuStack_188[0] = &UNK_00424e9f;
  pppppppuStack_108 = pppppppuVar14;
  pppppppuStack_100 = pppppppuVar18;
  pppppppuStack_f8 = pppppppuVar20;
  pppppppuStack_f0 = pppppppuVar5;
  uStack_e8 = uVar10;
  puStack_e0 = (undefined *)&puStack_78;
  pppppppuVar20 = (undefined8 *******)_Znwm(0x2000);
  apuStack_188[0] = &UNK_00424eb2;
  func_0x0099bda0(pppppppuVar20,pppppppuVar16,0x2000);
  pppppppuVar18 = (undefined8 *******)pppppppuVar7[0x80e];
  apuStack_188[0] = &UNK_00424ec3;
  lVar6 = pairing_auth_safe_encrypted_size(pppppppuVar18,0x2000);
  pppppppuStack_130 = (undefined8 *******)0x0;
  pppppppuStack_128 = (undefined8 *******)0x0;
  pppppppuStack_120 = (undefined8 *******)0x0;
  if (lVar6 == 0) {
    pppppppuVar14 = (undefined8 *******)0x0;
    param_6 = 0xffffffff;
    apuStack_188[0] = &UNK_00424f35;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (&pppppppuStack_160,&UNK_00161570,0x152,6,0);
    apuStack_188[0] = &UNK_00424f3d;
    uVar8 = _ZN7android4base10LogMessage6streamEv(&pppppppuStack_160);
    apuStack_188[0] = &UNK_00424f51;
    uVar8 = func_0x0032eb30(uVar8,&UNK_0017a396,0x1d);
    apuStack_188[0] = &UNK_00424f65;
    func_0x0032eb30(uVar8,&UNK_0015ae05,1);
    apuStack_188[0] = &UNK_00424f6d;
    _ZN7android4base10LogMessageD2Ev(&pppppppuStack_160);
    pppppppuVar21 = (undefined8 *******)0x0;
code_r0x00424f70:
    pppppppuVar15 = pppppppuVar20 + 0x400;
    pppppppuStack_138 = (undefined8 *******)0x0;
    pppppppuVar18 = (undefined8 *******)pppppppuVar7[0x80e];
    param_5 = &pppppppuStack_138;
    apuStack_188[0] = &UNK_00424f9d;
    pppppppuVar11 = pppppppuVar14;
    cVar2 = pairing_auth_encrypt(pppppppuVar18,pppppppuVar20,0x2000,pppppppuVar14,param_5);
    pppppppuVar1 = pppppppuStack_138;
    pppppppuVar5 = pppppppuVar21;
    if (cVar2 == '\0') {
      pppppppuVar22 = (undefined8 *******)0x0;
      pppppppuVar18 = (undefined8 *******)0x4;
      apuStack_188[0] = &UNK_00425060;
      cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4,0);
      pppppppuVar16 = pppppppuVar15;
      if (cVar2 != '\0') {
        apuStack_188[0] = &UNK_0042506d;
        puVar9 = (undefined4 *)func_0x0099bce0();
        uVar19 = *puVar9;
        pppppppuVar22 = (undefined8 *******)0x0;
        pppppppuVar5 = &pppppppuStack_160;
        pppppppuVar11 = (undefined8 *******)0x4;
        param_5 = (undefined8 *******)0x0;
        param_6 = 0xffffffff;
        apuStack_188[0] = &UNK_004250aa;
        pppppppuStack_170 = pppppppuVar20;
        pppppppuStack_168 = pppppppuVar15;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (pppppppuVar5,&UNK_00161570,0x155,4,0);
        apuStack_188[0] = &UNK_004250b2;
        uVar8 = _ZN7android4base10LogMessage6streamEv(pppppppuVar5);
        apuStack_188[0] = &UNK_004250c6;
        func_0x0032eb30(uVar8,&UNK_00167d71,0x1b);
        apuStack_188[0] = &UNK_004250ce;
        pppppppuVar18 = pppppppuVar5;
        _ZN7android4base10LogMessageD2Ev();
        *puVar9 = uVar19;
        pppppppuVar16 = pppppppuStack_168;
        pppppppuVar20 = pppppppuStack_170;
      }
    }
    else {
      pppppppuVar16 = (undefined8 *******)((long)pppppppuVar21 - (long)pppppppuVar14);
      pppppppuVar22 = (undefined8 *******)((long)pppppppuStack_138 - (long)pppppppuVar16);
      pppppppuStack_178 = pppppppuVar7;
      if (pppppppuStack_138 < pppppppuVar16 || pppppppuVar22 == (undefined8 *******)0x0) {
        pppppppuVar7 = pppppppuVar14;
        pppppppuStack_170 = pppppppuVar20;
        pppppppuStack_168 = pppppppuVar15;
        if (pppppppuStack_138 < pppppppuVar16) {
          pppppppuVar21 = (undefined8 *******)((long)pppppppuStack_138 + (long)pppppppuVar14);
          pppppppuStack_128 = pppppppuVar21;
        }
      }
      else {
        pppppppuStack_170 = pppppppuVar20;
        pppppppuStack_168 = pppppppuVar15;
        if ((long)pppppppuStack_138 < 0) goto code_r0x004255d2;
        pppppppuVar18 = (undefined8 *******)((long)pppppppuVar16 * 2);
        if ((undefined8 *******)((long)pppppppuVar16 * 2) <= pppppppuStack_138) {
          pppppppuVar18 = pppppppuStack_138;
        }
        pppppppuVar11 = (undefined8 *******)0x3fffffffffffffff;
        pppppppuVar5 = (undefined8 *******)0x7fffffffffffffff;
        if (pppppppuVar16 < (undefined8 *******)0x3fffffffffffffff) {
          pppppppuVar5 = pppppppuVar18;
        }
        apuStack_188[0] = &UNK_00425007;
        pppppppuVar7 = (undefined8 *******)_Znwm(pppppppuVar5);
        pppppppuVar21 = (undefined8 *******)((long)pppppppuVar1 + (long)pppppppuVar7);
        apuStack_188[0] = &UNK_0042501e;
        func_0x0099bdb0((long)pppppppuVar7 + (long)pppppppuVar16,0,pppppppuVar22);
        apuStack_188[0] = &UNK_0042502c;
        func_0x0099bda0(pppppppuVar7,pppppppuVar14,pppppppuVar16);
        pppppppuStack_130 = pppppppuVar7;
        pppppppuStack_128 = pppppppuVar21;
        pppppppuStack_120 = (undefined8 *******)((long)pppppppuVar5 + (long)pppppppuVar7);
        if (pppppppuVar14 != (undefined8 *******)0x0) {
          apuStack_188[0] = &UNK_0042504c;
          _ZdaPvSt11align_val_t(pppppppuVar14,pppppppuVar16);
        }
      }
      pppppppuVar16 = pppppppuStack_168;
      pppppppuVar5 = pppppppuStack_178;
      uStack_13e = 0x101;
      uVar3 = (uint)((long)pppppppuVar21 - (long)pppppppuVar7);
      uStack_13c = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
      apuStack_188[0] = &UNK_0042512d;
      cVar2 = (*(code *)(*pppppppuStack_178[0x80d])[0xb])(pppppppuStack_178[0x80d],&uStack_13e,6);
      if (cVar2 == '\0') {
        pppppppuVar22 = (undefined8 *******)0x0;
        pppppppuVar18 = (undefined8 *******)0x4;
        apuStack_188[0] = &UNK_00425263;
        cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4,0);
        pppppppuVar14 = pppppppuStack_130;
        pppppppuVar20 = pppppppuStack_170;
        if (cVar2 != '\0') {
          apuStack_188[0] = &UNK_004254f7;
          puVar9 = (undefined4 *)func_0x0099bce0();
          uVar19 = *puVar9;
          pppppppuVar22 = (undefined8 *******)0x0;
          pppppppuVar5 = &pppppppuStack_160;
          pppppppuVar11 = (undefined8 *******)0x4;
          param_5 = (undefined8 *******)0x0;
          param_6 = 0xffffffff;
          apuStack_188[0] = &UNK_00425526;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (pppppppuVar5,&UNK_00161570,0x161,4,0);
          apuStack_188[0] = &UNK_0042552e;
          uVar8 = _ZN7android4base10LogMessage6streamEv(pppppppuVar5);
          apuStack_188[0] = &UNK_00425542;
          func_0x0032eb30(uVar8,&UNK_00167d8d,0x23);
          apuStack_188[0] = &UNK_0042554a;
          pppppppuVar18 = pppppppuVar5;
          _ZN7android4base10LogMessageD2Ev();
          *puVar9 = uVar19;
          pppppppuVar16 = pppppppuStack_168;
          pppppppuVar14 = pppppppuStack_130;
          pppppppuVar20 = pppppppuStack_170;
        }
      }
      else {
        apuStack_188[0] = &UNK_00425148;
        cVar2 = (*(code *)(*pppppppuVar5[0x80d])[0xb])
                          (pppppppuVar5[0x80d],pppppppuVar7,(long)pppppppuVar21 - (long)pppppppuVar7
                          );
        if (cVar2 == '\0') {
          pppppppuVar22 = (undefined8 *******)0x0;
          pppppppuVar18 = (undefined8 *******)0x4;
          apuStack_188[0] = &UNK_00425286;
          cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4,0);
          pppppppuVar20 = pppppppuStack_170;
          pppppppuVar14 = pppppppuStack_130;
          if (cVar2 != '\0') {
            apuStack_188[0] = &UNK_0042529a;
            puVar9 = (undefined4 *)func_0x0099bce0();
            uVar19 = *puVar9;
            pppppppuVar11 = (undefined8 *******)0x4;
            param_5 = (undefined8 *******)0x0;
            param_6 = 0xffffffff;
            apuStack_188[0] = &UNK_004252c9;
            _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                      (&pppppppuStack_160,&UNK_00161570,0x168,4,0);
            apuStack_188[0] = &UNK_004252d1;
            uVar8 = _ZN7android4base10LogMessage6streamEv(&pppppppuStack_160);
            puVar17 = &UNK_0018059d;
            uVar12 = 0x23;
code_r0x0042533e:
            pppppppuVar22 = (undefined8 *******)0x0;
            pppppppuVar5 = &pppppppuStack_160;
            apuStack_188[0] = &UNK_00425346;
            func_0x0032eb30(uVar8,puVar17,uVar12);
            apuStack_188[0] = &UNK_0042534e;
            pppppppuVar18 = pppppppuVar5;
            _ZN7android4base10LogMessageD2Ev();
            *puVar9 = uVar19;
            pppppppuVar16 = pppppppuStack_168;
            pppppppuVar14 = pppppppuStack_130;
          }
        }
        else {
          uStack_140 = 0;
          uStack_144 = 0;
          uStack_143 = 0;
          uStack_142 = 0;
          apuStack_188[0] = &UNK_00425169;
          pppppppuVar18 = pppppppuVar5;
          cVar2 = _ZN20PairingConnectionCtx10ReadHeaderEP19PairingPacketHeader
                            (pppppppuVar5,&uStack_144);
          pppppppuVar20 = pppppppuStack_170;
          if (cVar2 == '\0') {
            pppppppuVar22 = (undefined8 *******)0x0;
            pppppppuVar18 = (undefined8 *******)0x4;
            apuStack_188[0] = &UNK_004252ee;
            cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4,0);
            pppppppuVar14 = pppppppuStack_130;
            if (cVar2 != '\0') {
              apuStack_188[0] = &UNK_004252fb;
              puVar9 = (undefined4 *)func_0x0099bce0();
              uVar19 = *puVar9;
              pppppppuVar11 = (undefined8 *******)0x4;
              param_5 = (undefined8 *******)0x0;
              param_6 = 0xffffffff;
              apuStack_188[0] = &UNK_0042532a;
              _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                        (&pppppppuStack_160,&UNK_00161570,0x16f,4,0);
              apuStack_188[0] = &UNK_00425332;
              uVar8 = _ZN7android4base10LogMessage6streamEv(&pppppppuStack_160);
              puVar17 = &UNK_00174135;
              uVar12 = 0x1c;
              goto code_r0x0042533e;
            }
          }
          else {
            apuStack_188[0] = &UNK_00425186;
            cVar2 = _ZN20PairingConnectionCtx15CheckHeaderTypeEN3adb5proto18PairingPacket_TypeEh();
            if (cVar2 == '\0') {
              pppppppuVar22 = (undefined8 *******)0x0;
              pppppppuVar14 = pppppppuStack_130;
            }
            else {
              apuStack_188[0] = &UNK_004251a2;
              (*(code *)(*pppppppuVar5[0x80d])[9])
                        (&pppppppuStack_160,pppppppuVar5[0x80d],CONCAT22(uStack_140,uStack_142));
              apuStack_188[0] = &UNK_004251af;
              _ZdaPvSt11align_val_t(pppppppuVar20,0x2000);
              if (pppppppuStack_160 == pppppppuStack_158) {
                pppppppuVar22 = (undefined8 *******)0x0;
                pppppppuVar16 = pppppppuStack_150;
                pppppppuVar18 = pppppppuVar20;
                pppppppuVar14 = pppppppuStack_130;
                pppppppuVar20 = pppppppuStack_160;
              }
              else {
                apuStack_188[0] = &UNK_004251d9;
                uVar8 = pairing_auth_safe_decrypted_size
                                  (pppppppuVar5[0x80e],pppppppuStack_160,
                                   (long)pppppppuStack_158 - (long)pppppppuStack_160);
                apuStack_188[0] = &UNK_004251e5;
                func_0x00426020(&pppppppuStack_130,uVar8);
                pppppppuVar11 = pppppppuStack_130;
                if (pppppppuStack_130 == pppppppuStack_128) {
                  pppppppuVar18 = (undefined8 *******)0x4;
                  apuStack_188[0] = &UNK_0042537c;
                  cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4,0);
                  if (cVar2 == '\0') goto code_r0x004253e9;
                  apuStack_188[0] = &UNK_00425385;
                  puVar9 = (undefined4 *)func_0x0099bce0();
                  pppppppuStack_168 = (undefined8 *******)CONCAT44(pppppppuStack_168._4_4_,*puVar9);
                  pppppppuVar11 = (undefined8 *******)0x4;
                  param_5 = (undefined8 *******)0x0;
                  param_6 = 0xffffffff;
                  apuStack_188[0] = &UNK_004253b9;
                  _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                            (&pppppppuStack_160,&UNK_00161570,0x180,4,0);
                  apuStack_188[0] = &UNK_004253c1;
                  uVar8 = _ZN7android4base10LogMessage6streamEv(&pppppppuStack_160);
                  puVar17 = &UNK_0016b12c;
                  uVar12 = 0x2f;
code_r0x004255ad:
                  pppppppuVar22 = (undefined8 *******)0x0;
                  pppppppuVar5 = &pppppppuStack_160;
                  apuStack_188[0] = &UNK_004255b5;
                  func_0x0032eb30(uVar8,puVar17,uVar12);
                  apuStack_188[0] = &UNK_004255bd;
                  pppppppuVar18 = pppppppuVar5;
                  _ZN7android4base10LogMessageD2Ev();
                  *puVar9 = pppppppuStack_168._0_4_;
                  pppppppuVar16 = pppppppuStack_150;
                  pppppppuVar14 = pppppppuStack_130;
                  pppppppuVar20 = pppppppuStack_160;
                }
                else {
                  param_5 = &pppppppuStack_138;
                  apuStack_188[0] = &UNK_00425209;
                  cVar2 = pairing_auth_decrypt
                                    (pppppppuVar5[0x80e],pppppppuStack_160,
                                     (long)pppppppuStack_158 - (long)pppppppuStack_160,
                                     pppppppuStack_130,param_5);
                  if (cVar2 == '\0') {
                    pppppppuVar18 = (undefined8 *******)0x4;
                    apuStack_188[0] = &UNK_004253e1;
                    cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4,0);
                    if (cVar2 != '\0') {
                      apuStack_188[0] = &UNK_00425565;
                      puVar9 = (undefined4 *)func_0x0099bce0();
                      pppppppuStack_168 =
                           (undefined8 *******)CONCAT44(pppppppuStack_168._4_4_,*puVar9);
                      pppppppuVar11 = (undefined8 *******)0x4;
                      param_5 = (undefined8 *******)0x0;
                      param_6 = 0xffffffff;
                      apuStack_188[0] = &UNK_00425599;
                      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                                (&pppppppuStack_160,&UNK_00161570,0x185,4,0);
                      apuStack_188[0] = &UNK_004255a1;
                      uVar8 = _ZN7android4base10LogMessage6streamEv(&pppppppuStack_160);
                      puVar17 = &UNK_001725b0;
                      uVar12 = 0x11;
                      goto code_r0x004255ad;
                    }
code_r0x004253e9:
                    pppppppuVar22 = (undefined8 *******)0x0;
                    pppppppuVar16 = pppppppuStack_150;
                    pppppppuVar14 = pppppppuStack_130;
                    pppppppuVar20 = pppppppuStack_160;
                  }
                  else {
                    apuStack_188[0] = &UNK_0042521e;
                    func_0x00426020(&pppppppuStack_130,pppppppuStack_138);
                    if ((long)pppppppuStack_128 - (long)pppppppuStack_130 == 0x2000) {
                      pppppppuVar5 = pppppppuVar5 + 0x40b;
                      apuStack_188[0] = &UNK_0042524c;
                      pppppppuVar18 = pppppppuVar5;
                      func_0x0099bda0(pppppppuVar5,pppppppuStack_130,0x2000);
                      pppppppuVar22 =
                           (undefined8 *******)CONCAT71((int7)((ulong)pppppppuVar7 >> 8),1);
                      pppppppuVar16 = pppppppuStack_150;
                      pppppppuVar14 = pppppppuStack_130;
                      pppppppuVar20 = pppppppuStack_160;
                    }
                    else {
                      pppppppuVar22 = (undefined8 *******)0x0;
                      pppppppuVar18 = (undefined8 *******)0x4;
                      apuStack_188[0] = &UNK_0042544f;
                      cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4,0);
                      pppppppuVar16 = pppppppuStack_150;
                      pppppppuVar14 = pppppppuStack_130;
                      pppppppuVar20 = pppppppuStack_160;
                      if (cVar2 != '\0') {
                        apuStack_188[0] = &UNK_00425458;
                        pppppppuVar5 = (undefined8 *******)func_0x0099bce0();
                        pppppppuStack_168 =
                             (undefined8 *******)
                             CONCAT44(pppppppuStack_168._4_4_,*(undefined4 *)pppppppuVar5);
                        pppppppuVar22 = (undefined8 *******)0x0;
                        pppppppuVar18 = &pppppppuStack_160;
                        pppppppuVar11 = (undefined8 *******)0x4;
                        param_5 = (undefined8 *******)0x0;
                        param_6 = 0xffffffff;
                        apuStack_188[0] = &UNK_0042548c;
                        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                                  (pppppppuVar18,&UNK_00161570,0x18c,4,0);
                        apuStack_188[0] = &UNK_00425494;
                        uVar8 = _ZN7android4base10LogMessage6streamEv(pppppppuVar18);
                        apuStack_188[0] = &UNK_004254a8;
                        uVar8 = func_0x0032eb30(uVar8,&UNK_0017d8f5,9);
                        apuStack_188[0] = &UNK_004254b8;
                        uVar8 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm
                                          (uVar8,(long)pppppppuStack_128 - (long)pppppppuStack_130);
                        apuStack_188[0] = &UNK_004254cc;
                        uVar8 = func_0x0032eb30(uVar8,&UNK_0016ee93,0xe);
                        apuStack_188[0] = &UNK_004254d9;
                        _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar8,0x2000);
                        apuStack_188[0] = &UNK_004254e4;
                        _ZN7android4base10LogMessageD2Ev();
                        *(undefined4 *)pppppppuVar5 = pppppppuStack_168._0_4_;
                        pppppppuVar16 = pppppppuStack_150;
                        pppppppuVar14 = pppppppuStack_130;
                        pppppppuVar20 = pppppppuStack_160;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    if (pppppppuVar14 != (undefined8 *******)0x0) {
      apuStack_188[0] = &UNK_00425408;
      pppppppuStack_128 = pppppppuVar14;
      _ZdaPvSt11align_val_t(pppppppuVar14,(long)pppppppuStack_120 - (long)pppppppuVar14);
      pppppppuVar18 = pppppppuVar14;
    }
    if (pppppppuVar20 != (undefined8 *******)0x0) {
      pppppppuVar16 = (undefined8 *******)((long)pppppppuVar16 - (long)pppppppuVar20);
      apuStack_188[0] = &UNK_0042541b;
      _ZdaPvSt11align_val_t(pppppppuVar20,pppppppuVar16);
      pppppppuVar18 = pppppppuVar20;
    }
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_110) {
      return (ulong)pppppppuVar22 & 0xffffffff;
    }
    apuStack_188[0] = &UNK_004255d2;
    func_0x0099bd00();
  }
  else {
    pppppppuVar22 = pppppppuVar7;
    if (-1 < lVar6) {
      apuStack_188[0] = &UNK_00424ee8;
      pppppppuVar14 = (undefined8 *******)_Znwm(lVar6);
      pppppppuVar21 = (undefined8 *******)(lVar6 + (long)pppppppuVar14);
      apuStack_188[0] = &UNK_00424f06;
      pppppppuStack_130 = pppppppuVar14;
      pppppppuStack_120 = pppppppuVar21;
      func_0x0099bdb0(pppppppuVar14,0,lVar6);
      pppppppuStack_128 = pppppppuVar21;
      goto code_r0x00424f70;
    }
  }
code_r0x004255d2:
  apuStack_188[0] = &UNK_004255d7;
  func_0x00330ca0();
  uStack_1a8 = *(ulong *)(in_FS_OFFSET + 0x28);
  pppppppuStack_1a0 = pppppppuVar16;
  pppppppuStack_198 = pppppppuVar5;
  pppppppuStack_190 = pppppppuVar22;
  apuStack_188[0] = (undefined *)&puStack_e0;
  cVar2 = _ZN20PairingConnectionCtx18SetupTlsConnectionEv();
  if (cVar2 != '\0') {
    do {
      switch(*(undefined4 *)(pppppppuVar18 + 1)) {
      case 0:
      case 3:
        goto code_r0x0042564b;
      case 1:
        cVar2 = _ZN20PairingConnectionCtx14DoExchangeMsgsEv(pppppppuVar18);
        if (cVar2 == '\0') goto code_r0x004256ef;
        LOCK();
        *(undefined4 *)(pppppppuVar18 + 1) = 2;
        UNLOCK();
        break;
      case 2:
        cVar2 = _ZN20PairingConnectionCtx18DoExchangePeerInfoEv(pppppppuVar18);
        if (cVar2 == '\0') goto code_r0x004256ef;
        pppppppuVar20 = pppppppuVar18 + 0x40b;
        uVar3 = *(uint *)(pppppppuVar18 + 0x80f);
        ppppppuVar13 = pppppppuVar18[0x80c];
        goto code_r0x004256fe;
      }
    } while( true );
  }
code_r0x004256ef:
  uVar3 = *(uint *)(pppppppuVar18 + 0x80f);
  ppppppuVar13 = pppppppuVar18[0x80c];
  pppppppuVar20 = (undefined8 *******)0x0;
code_r0x004256fe:
  puVar17 = (undefined *)(ulong)uVar3;
  (*(code *)pppppppuVar18[0x80b])(pppppppuVar20,puVar17,ppppppuVar13);
  LOCK();
  *(undefined4 *)(pppppppuVar18 + 1) = 3;
  UNLOCK();
code_r0x0042570c:
  if (*(ulong *)(in_FS_OFFSET + 0x28) == uStack_1a8) {
    return *(ulong *)(in_FS_OFFSET + 0x28);
  }
  func_0x0099bd00();
  uVar10 = func_0x00425760(0,pppppppuVar20,puVar17,extraout_RDX,pppppppuVar11,param_5,param_6,
                           ppppppuStack_1b0,apuStack_188);
  return uVar10;
code_r0x0042564b:
  pppppppuVar20 = (undefined8 *******)0x6;
  puVar17 = (undefined *)0x0;
  cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(6,0);
  if (cVar2 != '\0') {
    puVar9 = (undefined4 *)func_0x0099bce0();
    uVar19 = *puVar9;
    pppppppuVar20 = &ppppppuStack_1b0;
    pppppppuVar11 = (undefined8 *******)0x6;
    param_5 = (undefined8 *******)0x0;
    param_6 = 0xffffffff;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i(pppppppuVar20,&UNK_00161570,0x1b0,6,0)
    ;
    uVar8 = _ZN7android4base10LogMessage6streamEv(pppppppuVar20);
    uVar8 = func_0x0032eb30(uVar8,&UNK_0017f076,0xb);
    puVar17 = &UNK_0017580d;
    func_0x0032eb30(uVar8,&UNK_0017580d,0x13);
    _ZN7android4base10LogMessageD2Ev(pppppppuVar20);
    *puVar9 = uVar19;
  }
  goto code_r0x0042570c;
}


