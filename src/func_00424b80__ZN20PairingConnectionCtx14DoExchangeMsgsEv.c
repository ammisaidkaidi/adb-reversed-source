// Function: _ZN20PairingConnectionCtx14DoExchangeMsgsEv
// Address: 00424b80
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Type propagation algorithm not settling */

ulong _ZN20PairingConnectionCtx14DoExchangeMsgsEv(undefined8 *******param_1)

{
  undefined8 *******pppppppuVar1;
  char cVar2;
  uint uVar3;
  undefined8 *******pppppppuVar4;
  long lVar5;
  undefined8 *******pppppppuVar6;
  undefined8 *******pppppppuVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  ulong uVar10;
  undefined8 *******pppppppuVar11;
  undefined8 uVar12;
  undefined8 ******ppppppuVar13;
  undefined8 extraout_RDX;
  undefined8 *******pppppppuVar14;
  undefined8 *******pppppppuVar15;
  undefined8 *******pppppppuVar16;
  undefined *puVar17;
  undefined8 *******in_R8;
  undefined8 in_R9;
  undefined4 uVar18;
  undefined8 *******pppppppuVar19;
  undefined8 *******pppppppuVar20;
  undefined8 *******pppppppuVar21;
  long in_FS_OFFSET;
  undefined8 ******ppppppuStack_140;
  ulong uStack_138;
  undefined8 *******pppppppuStack_130;
  undefined8 *******pppppppuStack_128;
  undefined8 *******pppppppuStack_120;
  undefined *apuStack_118 [2];
  undefined8 *******pppppppuStack_108;
  undefined8 *******pppppppuStack_100;
  undefined8 *******pppppppuStack_f8;
  undefined8 *******pppppppuStack_f0;
  undefined8 *******pppppppuStack_e8;
  undefined8 *******pppppppuStack_e0;
  undefined1 uStack_d4;
  undefined1 uStack_d3;
  undefined2 uStack_d2;
  undefined2 uStack_d0;
  undefined2 uStack_ce;
  uint uStack_cc;
  undefined8 *******pppppppuStack_c8;
  undefined8 *******pppppppuStack_c0;
  undefined8 *******pppppppuStack_b8;
  undefined8 *******pppppppuStack_b0;
  long lStack_a0;
  undefined8 *******pppppppuStack_98;
  undefined8 *******pppppppuStack_90;
  undefined8 *******pppppppuStack_88;
  undefined8 *******pppppppuStack_80;
  ulong uStack_78;
  undefined *puStack_70;
  undefined4 uStack_64;
  undefined8 ******ppppppuStack_60;
  undefined8 *******pppppppuStack_58;
  undefined8 *******pppppppuStack_50;
  long lStack_48;
  undefined2 uStack_3e;
  uint uStack_3c;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  puStack_70 = &UNK_00424bad;
  uVar3 = pairing_auth_msg_size(param_1[0x80e]);
  pppppppuVar19 = (undefined8 *******)(ulong)uVar3;
  if (pppppppuVar19 == (undefined8 *******)0x0) {
    lVar5 = 0;
    pppppppuVar4 = (undefined8 *******)0x0;
  }
  else {
    puStack_70 = &UNK_00424bc3;
    pppppppuVar4 = (undefined8 *******)_Znwm(pppppppuVar19);
    lVar5 = (long)pppppppuVar4 + (long)pppppppuVar19;
    puStack_70 = &UNK_00424bd7;
    func_0x0099bdb0(pppppppuVar4,0,pppppppuVar19);
  }
  puStack_70 = &UNK_00424bee;
  pairing_auth_get_spake2_msg(param_1[0x80e],pppppppuVar4);
  uStack_3e = 1;
  pppppppuVar14 = (undefined8 *******)(lVar5 - (long)pppppppuVar4);
  puStack_70 = &UNK_00424c0d;
  pppppppuVar11 = pppppppuVar14;
  uStack_3c = uVar3;
  cVar2 = _ZN20PairingConnectionCtx11WriteHeaderEPK19PairingPacketHeaderNSt3__117basic_string_viewIcNS3_11char_traitsIcEEEE
                    (param_1,&uStack_3e,pppppppuVar4,pppppppuVar14);
  if (cVar2 == '\0') {
    uVar10 = 0;
    pppppppuVar7 = (undefined8 *******)0x4;
    puStack_70 = &UNK_00424cd4;
    cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4,0);
    if (cVar2 != '\0') {
      puStack_70 = &UNK_00424cdd;
      param_1 = (undefined8 *******)func_0x0099bce0();
      uStack_64 = *(undefined4 *)param_1;
      pppppppuVar11 = (undefined8 *******)0x4;
      in_R8 = (undefined8 *******)0x0;
      in_R9 = 0xffffffff;
      puStack_70 = &UNK_00424d0e;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&pppppppuStack_58,&UNK_00161570,0x132,4,0);
      puStack_70 = &UNK_00424d16;
      uVar8 = _ZN7android4base10LogMessage6streamEv(&pppppppuStack_58);
      puVar17 = &UNK_0017d8d9;
      uVar12 = 0x1b;
code_r0x00424db9:
      uVar10 = 0;
      pppppppuVar19 = &pppppppuStack_58;
      puStack_70 = &UNK_00424dc1;
      func_0x0032eb30(uVar8,puVar17,uVar12);
      puStack_70 = &UNK_00424dc9;
      pppppppuVar7 = pppppppuVar19;
      _ZN7android4base10LogMessageD2Ev();
      *(undefined4 *)param_1 = uStack_64;
    }
  }
  else {
    puStack_70 = &UNK_00424c21;
    pppppppuVar7 = param_1;
    cVar2 = _ZN20PairingConnectionCtx10ReadHeaderEP19PairingPacketHeader(param_1,&uStack_3e);
    if (cVar2 == '\0') {
      uVar10 = 0;
      pppppppuVar7 = (undefined8 *******)0x4;
      puStack_70 = &UNK_00424d36;
      cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4,0);
      if (cVar2 != '\0') {
        puStack_70 = &UNK_00424d74;
        param_1 = (undefined8 *******)func_0x0099bce0();
        uStack_64 = *(undefined4 *)param_1;
        pppppppuVar11 = (undefined8 *******)0x4;
        in_R8 = (undefined8 *******)0x0;
        in_R9 = 0xffffffff;
        puStack_70 = &UNK_00424da5;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (&pppppppuStack_58,&UNK_00161570,0x138,4,0);
        puStack_70 = &UNK_00424dad;
        uVar8 = _ZN7android4base10LogMessage6streamEv(&pppppppuStack_58);
        puVar17 = &UNK_00174135;
        uVar12 = 0x1c;
        goto code_r0x00424db9;
      }
    }
    else {
      uVar10 = 0;
      puStack_70 = &UNK_00424c37;
      cVar2 = _ZN20PairingConnectionCtx15CheckHeaderTypeEN3adb5proto18PairingPacket_TypeEh();
      if (cVar2 != '\0') {
        pppppppuStack_58 = (undefined8 *******)0x0;
        pppppppuStack_50 = (undefined8 *******)0x0;
        lStack_48 = 0;
        puStack_70 = &UNK_00424c63;
        (*(code *)(*param_1[0x80d])[9])(&pppppppuStack_58,param_1[0x80d],uStack_3c);
        if (pppppppuStack_58 == pppppppuStack_50) {
code_r0x00424c87:
          uVar10 = 0;
          puStack_70 = &UNK_00424c96;
          cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4,0);
          if (cVar2 != '\0') {
            puStack_70 = &UNK_00424de3;
            param_1 = (undefined8 *******)func_0x0099bce0();
            uStack_64 = *(undefined4 *)param_1;
            uVar10 = 0;
            pppppppuVar19 = &ppppppuStack_60;
            pppppppuVar11 = (undefined8 *******)0x4;
            in_R8 = (undefined8 *******)0x0;
            in_R9 = 0xffffffff;
            puStack_70 = &UNK_00424e14;
            _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                      (pppppppuVar19,&UNK_00161570,0x144,4,0);
            puStack_70 = &UNK_00424e1c;
            uVar8 = _ZN7android4base10LogMessage6streamEv(pppppppuVar19);
            puStack_70 = &UNK_00424e30;
            uVar8 = func_0x0032eb30(uVar8,&UNK_0018377b,0x34);
            puStack_70 = &UNK_00424e40;
            uVar8 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm
                              (uVar8,(long)pppppppuStack_50 - (long)pppppppuStack_58);
            puStack_70 = &UNK_00424e54;
            func_0x0032eb30(uVar8,&UNK_00178ae2,1);
            puStack_70 = &UNK_00424e5c;
            _ZN7android4base10LogMessageD2Ev(pppppppuVar19);
            *(undefined4 *)param_1 = uStack_64;
          }
        }
        else {
          puStack_70 = &UNK_00424c80;
          cVar2 = pairing_auth_init_cipher
                            (param_1[0x80e],pppppppuStack_58,
                             (long)pppppppuStack_50 - (long)pppppppuStack_58);
          uVar10 = 1;
          if (cVar2 == '\0') goto code_r0x00424c87;
        }
        pppppppuVar7 = pppppppuStack_58;
        if (pppppppuStack_58 != (undefined8 *******)0x0) {
          pppppppuStack_50 = pppppppuStack_58;
          puStack_70 = &UNK_00424cbb;
          _ZdaPvSt11align_val_t(pppppppuStack_58,lStack_48 - (long)pppppppuStack_58);
        }
      }
    }
  }
  if (pppppppuVar4 != (undefined8 *******)0x0) {
    puStack_70 = &UNK_00424d4a;
    pppppppuVar7 = pppppppuVar4;
    _ZdaPvSt11align_val_t(pppppppuVar4,pppppppuVar14);
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return uVar10;
  }
  puStack_70 = &UNK_00424e6d;
  func_0x0099bd00();
  lStack_a0 = *(long *)(in_FS_OFFSET + 0x28);
  pppppppuVar16 = pppppppuVar7 + 5;
  apuStack_118[0] = &UNK_00424e9f;
  pppppppuStack_98 = pppppppuVar14;
  pppppppuStack_90 = param_1;
  pppppppuStack_88 = pppppppuVar19;
  pppppppuStack_80 = pppppppuVar4;
  uStack_78 = uVar10;
  puStack_70 = &stack0xfffffffffffffff8;
  pppppppuVar14 = (undefined8 *******)_Znwm(0x2000);
  apuStack_118[0] = &UNK_00424eb2;
  func_0x0099bda0(pppppppuVar14,pppppppuVar16,0x2000);
  pppppppuVar19 = (undefined8 *******)pppppppuVar7[0x80e];
  apuStack_118[0] = &UNK_00424ec3;
  lVar5 = pairing_auth_safe_encrypted_size(pppppppuVar19,0x2000);
  pppppppuStack_c0 = (undefined8 *******)0x0;
  pppppppuStack_b8 = (undefined8 *******)0x0;
  pppppppuStack_b0 = (undefined8 *******)0x0;
  if (lVar5 == 0) {
    pppppppuVar6 = (undefined8 *******)0x0;
    in_R9 = 0xffffffff;
    apuStack_118[0] = &UNK_00424f35;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (&pppppppuStack_f0,&UNK_00161570,0x152,6,0);
    apuStack_118[0] = &UNK_00424f3d;
    uVar8 = _ZN7android4base10LogMessage6streamEv(&pppppppuStack_f0);
    apuStack_118[0] = &UNK_00424f51;
    uVar8 = func_0x0032eb30(uVar8,&UNK_0017a396,0x1d);
    apuStack_118[0] = &UNK_00424f65;
    func_0x0032eb30(uVar8,&UNK_0015ae05,1);
    apuStack_118[0] = &UNK_00424f6d;
    _ZN7android4base10LogMessageD2Ev(&pppppppuStack_f0);
    pppppppuVar20 = (undefined8 *******)0x0;
code_r0x00424f70:
    pppppppuVar15 = pppppppuVar14 + 0x400;
    pppppppuStack_c8 = (undefined8 *******)0x0;
    pppppppuVar19 = (undefined8 *******)pppppppuVar7[0x80e];
    in_R8 = &pppppppuStack_c8;
    apuStack_118[0] = &UNK_00424f9d;
    pppppppuVar11 = pppppppuVar6;
    cVar2 = pairing_auth_encrypt(pppppppuVar19,pppppppuVar14,0x2000,pppppppuVar6,in_R8);
    pppppppuVar1 = pppppppuStack_c8;
    pppppppuVar4 = pppppppuVar20;
    if (cVar2 == '\0') {
      pppppppuVar21 = (undefined8 *******)0x0;
      pppppppuVar19 = (undefined8 *******)0x4;
      apuStack_118[0] = &UNK_00425060;
      cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4,0);
      pppppppuVar16 = pppppppuVar15;
      if (cVar2 != '\0') {
        apuStack_118[0] = &UNK_0042506d;
        puVar9 = (undefined4 *)func_0x0099bce0();
        uVar18 = *puVar9;
        pppppppuVar21 = (undefined8 *******)0x0;
        pppppppuVar4 = &pppppppuStack_f0;
        pppppppuVar11 = (undefined8 *******)0x4;
        in_R8 = (undefined8 *******)0x0;
        in_R9 = 0xffffffff;
        apuStack_118[0] = &UNK_004250aa;
        pppppppuStack_100 = pppppppuVar14;
        pppppppuStack_f8 = pppppppuVar15;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (pppppppuVar4,&UNK_00161570,0x155,4,0);
        apuStack_118[0] = &UNK_004250b2;
        uVar8 = _ZN7android4base10LogMessage6streamEv(pppppppuVar4);
        apuStack_118[0] = &UNK_004250c6;
        func_0x0032eb30(uVar8,&UNK_00167d71,0x1b);
        apuStack_118[0] = &UNK_004250ce;
        pppppppuVar19 = pppppppuVar4;
        _ZN7android4base10LogMessageD2Ev();
        *puVar9 = uVar18;
        pppppppuVar16 = pppppppuStack_f8;
        pppppppuVar14 = pppppppuStack_100;
      }
    }
    else {
      pppppppuVar16 = (undefined8 *******)((long)pppppppuVar20 - (long)pppppppuVar6);
      pppppppuVar21 = (undefined8 *******)((long)pppppppuStack_c8 - (long)pppppppuVar16);
      pppppppuStack_108 = pppppppuVar7;
      if (pppppppuStack_c8 < pppppppuVar16 || pppppppuVar21 == (undefined8 *******)0x0) {
        pppppppuVar7 = pppppppuVar6;
        pppppppuStack_100 = pppppppuVar14;
        pppppppuStack_f8 = pppppppuVar15;
        if (pppppppuStack_c8 < pppppppuVar16) {
          pppppppuVar20 = (undefined8 *******)((long)pppppppuStack_c8 + (long)pppppppuVar6);
          pppppppuStack_b8 = pppppppuVar20;
        }
      }
      else {
        pppppppuStack_100 = pppppppuVar14;
        pppppppuStack_f8 = pppppppuVar15;
        if ((long)pppppppuStack_c8 < 0) goto code_r0x004255d2;
        pppppppuVar19 = (undefined8 *******)((long)pppppppuVar16 * 2);
        if ((undefined8 *******)((long)pppppppuVar16 * 2) <= pppppppuStack_c8) {
          pppppppuVar19 = pppppppuStack_c8;
        }
        pppppppuVar11 = (undefined8 *******)0x3fffffffffffffff;
        pppppppuVar4 = (undefined8 *******)0x7fffffffffffffff;
        if (pppppppuVar16 < (undefined8 *******)0x3fffffffffffffff) {
          pppppppuVar4 = pppppppuVar19;
        }
        apuStack_118[0] = &UNK_00425007;
        pppppppuVar7 = (undefined8 *******)_Znwm(pppppppuVar4);
        pppppppuVar20 = (undefined8 *******)((long)pppppppuVar1 + (long)pppppppuVar7);
        apuStack_118[0] = &UNK_0042501e;
        func_0x0099bdb0((long)pppppppuVar7 + (long)pppppppuVar16,0,pppppppuVar21);
        apuStack_118[0] = &UNK_0042502c;
        func_0x0099bda0(pppppppuVar7,pppppppuVar6,pppppppuVar16);
        pppppppuStack_c0 = pppppppuVar7;
        pppppppuStack_b8 = pppppppuVar20;
        pppppppuStack_b0 = (undefined8 *******)((long)pppppppuVar4 + (long)pppppppuVar7);
        if (pppppppuVar6 != (undefined8 *******)0x0) {
          apuStack_118[0] = &UNK_0042504c;
          _ZdaPvSt11align_val_t(pppppppuVar6,pppppppuVar16);
        }
      }
      pppppppuVar16 = pppppppuStack_f8;
      pppppppuVar4 = pppppppuStack_108;
      uStack_ce = 0x101;
      uVar3 = (uint)((long)pppppppuVar20 - (long)pppppppuVar7);
      uStack_cc = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
      apuStack_118[0] = &UNK_0042512d;
      cVar2 = (*(code *)(*pppppppuStack_108[0x80d])[0xb])(pppppppuStack_108[0x80d],&uStack_ce,6);
      if (cVar2 == '\0') {
        pppppppuVar21 = (undefined8 *******)0x0;
        pppppppuVar19 = (undefined8 *******)0x4;
        apuStack_118[0] = &UNK_00425263;
        cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4,0);
        pppppppuVar6 = pppppppuStack_c0;
        pppppppuVar14 = pppppppuStack_100;
        if (cVar2 != '\0') {
          apuStack_118[0] = &UNK_004254f7;
          puVar9 = (undefined4 *)func_0x0099bce0();
          uVar18 = *puVar9;
          pppppppuVar21 = (undefined8 *******)0x0;
          pppppppuVar4 = &pppppppuStack_f0;
          pppppppuVar11 = (undefined8 *******)0x4;
          in_R8 = (undefined8 *******)0x0;
          in_R9 = 0xffffffff;
          apuStack_118[0] = &UNK_00425526;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (pppppppuVar4,&UNK_00161570,0x161,4,0);
          apuStack_118[0] = &UNK_0042552e;
          uVar8 = _ZN7android4base10LogMessage6streamEv(pppppppuVar4);
          apuStack_118[0] = &UNK_00425542;
          func_0x0032eb30(uVar8,&UNK_00167d8d,0x23);
          apuStack_118[0] = &UNK_0042554a;
          pppppppuVar19 = pppppppuVar4;
          _ZN7android4base10LogMessageD2Ev();
          *puVar9 = uVar18;
          pppppppuVar16 = pppppppuStack_f8;
          pppppppuVar6 = pppppppuStack_c0;
          pppppppuVar14 = pppppppuStack_100;
        }
      }
      else {
        apuStack_118[0] = &UNK_00425148;
        cVar2 = (*(code *)(*pppppppuVar4[0x80d])[0xb])
                          (pppppppuVar4[0x80d],pppppppuVar7,(long)pppppppuVar20 - (long)pppppppuVar7
                          );
        if (cVar2 == '\0') {
          pppppppuVar21 = (undefined8 *******)0x0;
          pppppppuVar19 = (undefined8 *******)0x4;
          apuStack_118[0] = &UNK_00425286;
          cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4,0);
          pppppppuVar14 = pppppppuStack_100;
          pppppppuVar6 = pppppppuStack_c0;
          if (cVar2 != '\0') {
            apuStack_118[0] = &UNK_0042529a;
            puVar9 = (undefined4 *)func_0x0099bce0();
            uVar18 = *puVar9;
            pppppppuVar11 = (undefined8 *******)0x4;
            in_R8 = (undefined8 *******)0x0;
            in_R9 = 0xffffffff;
            apuStack_118[0] = &UNK_004252c9;
            _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                      (&pppppppuStack_f0,&UNK_00161570,0x168,4,0);
            apuStack_118[0] = &UNK_004252d1;
            uVar8 = _ZN7android4base10LogMessage6streamEv(&pppppppuStack_f0);
            puVar17 = &UNK_0018059d;
            uVar12 = 0x23;
code_r0x0042533e:
            pppppppuVar21 = (undefined8 *******)0x0;
            pppppppuVar4 = &pppppppuStack_f0;
            apuStack_118[0] = &UNK_00425346;
            func_0x0032eb30(uVar8,puVar17,uVar12);
            apuStack_118[0] = &UNK_0042534e;
            pppppppuVar19 = pppppppuVar4;
            _ZN7android4base10LogMessageD2Ev();
            *puVar9 = uVar18;
            pppppppuVar16 = pppppppuStack_f8;
            pppppppuVar6 = pppppppuStack_c0;
          }
        }
        else {
          uStack_d0 = 0;
          uStack_d4 = 0;
          uStack_d3 = 0;
          uStack_d2 = 0;
          apuStack_118[0] = &UNK_00425169;
          pppppppuVar19 = pppppppuVar4;
          cVar2 = _ZN20PairingConnectionCtx10ReadHeaderEP19PairingPacketHeader
                            (pppppppuVar4,&uStack_d4);
          pppppppuVar14 = pppppppuStack_100;
          if (cVar2 == '\0') {
            pppppppuVar21 = (undefined8 *******)0x0;
            pppppppuVar19 = (undefined8 *******)0x4;
            apuStack_118[0] = &UNK_004252ee;
            cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4,0);
            pppppppuVar6 = pppppppuStack_c0;
            if (cVar2 != '\0') {
              apuStack_118[0] = &UNK_004252fb;
              puVar9 = (undefined4 *)func_0x0099bce0();
              uVar18 = *puVar9;
              pppppppuVar11 = (undefined8 *******)0x4;
              in_R8 = (undefined8 *******)0x0;
              in_R9 = 0xffffffff;
              apuStack_118[0] = &UNK_0042532a;
              _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                        (&pppppppuStack_f0,&UNK_00161570,0x16f,4,0);
              apuStack_118[0] = &UNK_00425332;
              uVar8 = _ZN7android4base10LogMessage6streamEv(&pppppppuStack_f0);
              puVar17 = &UNK_00174135;
              uVar12 = 0x1c;
              goto code_r0x0042533e;
            }
          }
          else {
            apuStack_118[0] = &UNK_00425186;
            cVar2 = _ZN20PairingConnectionCtx15CheckHeaderTypeEN3adb5proto18PairingPacket_TypeEh();
            if (cVar2 == '\0') {
              pppppppuVar21 = (undefined8 *******)0x0;
              pppppppuVar6 = pppppppuStack_c0;
            }
            else {
              apuStack_118[0] = &UNK_004251a2;
              (*(code *)(*pppppppuVar4[0x80d])[9])
                        (&pppppppuStack_f0,pppppppuVar4[0x80d],CONCAT22(uStack_d0,uStack_d2));
              apuStack_118[0] = &UNK_004251af;
              _ZdaPvSt11align_val_t(pppppppuVar14,0x2000);
              if (pppppppuStack_f0 == pppppppuStack_e8) {
                pppppppuVar21 = (undefined8 *******)0x0;
                pppppppuVar16 = pppppppuStack_e0;
                pppppppuVar19 = pppppppuVar14;
                pppppppuVar6 = pppppppuStack_c0;
                pppppppuVar14 = pppppppuStack_f0;
              }
              else {
                apuStack_118[0] = &UNK_004251d9;
                uVar8 = pairing_auth_safe_decrypted_size
                                  (pppppppuVar4[0x80e],pppppppuStack_f0,
                                   (long)pppppppuStack_e8 - (long)pppppppuStack_f0);
                apuStack_118[0] = &UNK_004251e5;
                func_0x00426020(&pppppppuStack_c0,uVar8);
                pppppppuVar11 = pppppppuStack_c0;
                if (pppppppuStack_c0 == pppppppuStack_b8) {
                  pppppppuVar19 = (undefined8 *******)0x4;
                  apuStack_118[0] = &UNK_0042537c;
                  cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4,0);
                  if (cVar2 == '\0') goto code_r0x004253e9;
                  apuStack_118[0] = &UNK_00425385;
                  puVar9 = (undefined4 *)func_0x0099bce0();
                  pppppppuStack_f8 = (undefined8 *******)CONCAT44(pppppppuStack_f8._4_4_,*puVar9);
                  pppppppuVar11 = (undefined8 *******)0x4;
                  in_R8 = (undefined8 *******)0x0;
                  in_R9 = 0xffffffff;
                  apuStack_118[0] = &UNK_004253b9;
                  _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                            (&pppppppuStack_f0,&UNK_00161570,0x180,4,0);
                  apuStack_118[0] = &UNK_004253c1;
                  uVar8 = _ZN7android4base10LogMessage6streamEv(&pppppppuStack_f0);
                  puVar17 = &UNK_0016b12c;
                  uVar12 = 0x2f;
code_r0x004255ad:
                  pppppppuVar21 = (undefined8 *******)0x0;
                  pppppppuVar4 = &pppppppuStack_f0;
                  apuStack_118[0] = &UNK_004255b5;
                  func_0x0032eb30(uVar8,puVar17,uVar12);
                  apuStack_118[0] = &UNK_004255bd;
                  pppppppuVar19 = pppppppuVar4;
                  _ZN7android4base10LogMessageD2Ev();
                  *puVar9 = pppppppuStack_f8._0_4_;
                  pppppppuVar16 = pppppppuStack_e0;
                  pppppppuVar6 = pppppppuStack_c0;
                  pppppppuVar14 = pppppppuStack_f0;
                }
                else {
                  in_R8 = &pppppppuStack_c8;
                  apuStack_118[0] = &UNK_00425209;
                  cVar2 = pairing_auth_decrypt
                                    (pppppppuVar4[0x80e],pppppppuStack_f0,
                                     (long)pppppppuStack_e8 - (long)pppppppuStack_f0,
                                     pppppppuStack_c0,in_R8);
                  if (cVar2 == '\0') {
                    pppppppuVar19 = (undefined8 *******)0x4;
                    apuStack_118[0] = &UNK_004253e1;
                    cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4,0);
                    if (cVar2 != '\0') {
                      apuStack_118[0] = &UNK_00425565;
                      puVar9 = (undefined4 *)func_0x0099bce0();
                      pppppppuStack_f8 =
                           (undefined8 *******)CONCAT44(pppppppuStack_f8._4_4_,*puVar9);
                      pppppppuVar11 = (undefined8 *******)0x4;
                      in_R8 = (undefined8 *******)0x0;
                      in_R9 = 0xffffffff;
                      apuStack_118[0] = &UNK_00425599;
                      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                                (&pppppppuStack_f0,&UNK_00161570,0x185,4,0);
                      apuStack_118[0] = &UNK_004255a1;
                      uVar8 = _ZN7android4base10LogMessage6streamEv(&pppppppuStack_f0);
                      puVar17 = &UNK_001725b0;
                      uVar12 = 0x11;
                      goto code_r0x004255ad;
                    }
code_r0x004253e9:
                    pppppppuVar21 = (undefined8 *******)0x0;
                    pppppppuVar16 = pppppppuStack_e0;
                    pppppppuVar6 = pppppppuStack_c0;
                    pppppppuVar14 = pppppppuStack_f0;
                  }
                  else {
                    apuStack_118[0] = &UNK_0042521e;
                    func_0x00426020(&pppppppuStack_c0,pppppppuStack_c8);
                    if ((long)pppppppuStack_b8 - (long)pppppppuStack_c0 == 0x2000) {
                      pppppppuVar4 = pppppppuVar4 + 0x40b;
                      apuStack_118[0] = &UNK_0042524c;
                      pppppppuVar19 = pppppppuVar4;
                      func_0x0099bda0(pppppppuVar4,pppppppuStack_c0,0x2000);
                      pppppppuVar21 =
                           (undefined8 *******)CONCAT71((int7)((ulong)pppppppuVar7 >> 8),1);
                      pppppppuVar16 = pppppppuStack_e0;
                      pppppppuVar6 = pppppppuStack_c0;
                      pppppppuVar14 = pppppppuStack_f0;
                    }
                    else {
                      pppppppuVar21 = (undefined8 *******)0x0;
                      pppppppuVar19 = (undefined8 *******)0x4;
                      apuStack_118[0] = &UNK_0042544f;
                      cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4,0);
                      pppppppuVar16 = pppppppuStack_e0;
                      pppppppuVar6 = pppppppuStack_c0;
                      pppppppuVar14 = pppppppuStack_f0;
                      if (cVar2 != '\0') {
                        apuStack_118[0] = &UNK_00425458;
                        pppppppuVar4 = (undefined8 *******)func_0x0099bce0();
                        pppppppuStack_f8 =
                             (undefined8 *******)
                             CONCAT44(pppppppuStack_f8._4_4_,*(undefined4 *)pppppppuVar4);
                        pppppppuVar21 = (undefined8 *******)0x0;
                        pppppppuVar19 = &pppppppuStack_f0;
                        pppppppuVar11 = (undefined8 *******)0x4;
                        in_R8 = (undefined8 *******)0x0;
                        in_R9 = 0xffffffff;
                        apuStack_118[0] = &UNK_0042548c;
                        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                                  (pppppppuVar19,&UNK_00161570,0x18c,4,0);
                        apuStack_118[0] = &UNK_00425494;
                        uVar8 = _ZN7android4base10LogMessage6streamEv(pppppppuVar19);
                        apuStack_118[0] = &UNK_004254a8;
                        uVar8 = func_0x0032eb30(uVar8,&UNK_0017d8f5,9);
                        apuStack_118[0] = &UNK_004254b8;
                        uVar8 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm
                                          (uVar8,(long)pppppppuStack_b8 - (long)pppppppuStack_c0);
                        apuStack_118[0] = &UNK_004254cc;
                        uVar8 = func_0x0032eb30(uVar8,&UNK_0016ee93,0xe);
                        apuStack_118[0] = &UNK_004254d9;
                        _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar8,0x2000);
                        apuStack_118[0] = &UNK_004254e4;
                        _ZN7android4base10LogMessageD2Ev();
                        *(undefined4 *)pppppppuVar4 = pppppppuStack_f8._0_4_;
                        pppppppuVar16 = pppppppuStack_e0;
                        pppppppuVar6 = pppppppuStack_c0;
                        pppppppuVar14 = pppppppuStack_f0;
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
    if (pppppppuVar6 != (undefined8 *******)0x0) {
      apuStack_118[0] = &UNK_00425408;
      pppppppuStack_b8 = pppppppuVar6;
      _ZdaPvSt11align_val_t(pppppppuVar6,(long)pppppppuStack_b0 - (long)pppppppuVar6);
      pppppppuVar19 = pppppppuVar6;
    }
    if (pppppppuVar14 != (undefined8 *******)0x0) {
      pppppppuVar16 = (undefined8 *******)((long)pppppppuVar16 - (long)pppppppuVar14);
      apuStack_118[0] = &UNK_0042541b;
      _ZdaPvSt11align_val_t(pppppppuVar14,pppppppuVar16);
      pppppppuVar19 = pppppppuVar14;
    }
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_a0) {
      return (ulong)pppppppuVar21 & 0xffffffff;
    }
    apuStack_118[0] = &UNK_004255d2;
    func_0x0099bd00();
  }
  else {
    pppppppuVar21 = pppppppuVar7;
    if (-1 < lVar5) {
      apuStack_118[0] = &UNK_00424ee8;
      pppppppuVar6 = (undefined8 *******)_Znwm(lVar5);
      pppppppuVar20 = (undefined8 *******)(lVar5 + (long)pppppppuVar6);
      apuStack_118[0] = &UNK_00424f06;
      pppppppuStack_c0 = pppppppuVar6;
      pppppppuStack_b0 = pppppppuVar20;
      func_0x0099bdb0(pppppppuVar6,0,lVar5);
      pppppppuStack_b8 = pppppppuVar20;
      goto code_r0x00424f70;
    }
  }
code_r0x004255d2:
  apuStack_118[0] = &UNK_004255d7;
  func_0x00330ca0();
  uStack_138 = *(ulong *)(in_FS_OFFSET + 0x28);
  pppppppuStack_130 = pppppppuVar16;
  pppppppuStack_128 = pppppppuVar4;
  pppppppuStack_120 = pppppppuVar21;
  apuStack_118[0] = (undefined *)&puStack_70;
  cVar2 = _ZN20PairingConnectionCtx18SetupTlsConnectionEv();
  if (cVar2 != '\0') {
    do {
      switch(*(undefined4 *)(pppppppuVar19 + 1)) {
      case 0:
      case 3:
        goto code_r0x0042564b;
      case 1:
        cVar2 = _ZN20PairingConnectionCtx14DoExchangeMsgsEv(pppppppuVar19);
        if (cVar2 == '\0') goto code_r0x004256ef;
        LOCK();
        *(undefined4 *)(pppppppuVar19 + 1) = 2;
        UNLOCK();
        break;
      case 2:
        cVar2 = _ZN20PairingConnectionCtx18DoExchangePeerInfoEv(pppppppuVar19);
        if (cVar2 == '\0') goto code_r0x004256ef;
        pppppppuVar4 = pppppppuVar19 + 0x40b;
        uVar3 = *(uint *)(pppppppuVar19 + 0x80f);
        ppppppuVar13 = pppppppuVar19[0x80c];
        goto code_r0x004256fe;
      }
    } while( true );
  }
code_r0x004256ef:
  uVar3 = *(uint *)(pppppppuVar19 + 0x80f);
  ppppppuVar13 = pppppppuVar19[0x80c];
  pppppppuVar4 = (undefined8 *******)0x0;
code_r0x004256fe:
  puVar17 = (undefined *)(ulong)uVar3;
  (*(code *)pppppppuVar19[0x80b])(pppppppuVar4,puVar17,ppppppuVar13);
  LOCK();
  *(undefined4 *)(pppppppuVar19 + 1) = 3;
  UNLOCK();
code_r0x0042570c:
  if (*(ulong *)(in_FS_OFFSET + 0x28) == uStack_138) {
    return *(ulong *)(in_FS_OFFSET + 0x28);
  }
  func_0x0099bd00();
  uVar10 = func_0x00425760(0,pppppppuVar4,puVar17,extraout_RDX,pppppppuVar11,in_R8,in_R9,
                           ppppppuStack_140,apuStack_118);
  return uVar10;
code_r0x0042564b:
  pppppppuVar4 = (undefined8 *******)0x6;
  puVar17 = (undefined *)0x0;
  cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(6,0);
  if (cVar2 != '\0') {
    puVar9 = (undefined4 *)func_0x0099bce0();
    uVar18 = *puVar9;
    pppppppuVar4 = &ppppppuStack_140;
    pppppppuVar11 = (undefined8 *******)0x6;
    in_R8 = (undefined8 *******)0x0;
    in_R9 = 0xffffffff;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i(pppppppuVar4,&UNK_00161570,0x1b0,6,0);
    uVar8 = _ZN7android4base10LogMessage6streamEv(pppppppuVar4);
    uVar8 = func_0x0032eb30(uVar8,&UNK_0017f076,0xb);
    puVar17 = &UNK_0017580d;
    func_0x0032eb30(uVar8,&UNK_0017580d,0x13);
    _ZN7android4base10LogMessageD2Ev(pppppppuVar4);
    *puVar9 = uVar18;
  }
  goto code_r0x0042570c;
}


