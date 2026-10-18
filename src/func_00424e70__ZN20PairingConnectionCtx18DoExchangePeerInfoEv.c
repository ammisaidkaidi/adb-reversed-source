// Function: _ZN20PairingConnectionCtx18DoExchangePeerInfoEv
// Address: 00424e70
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _ZN20PairingConnectionCtx18DoExchangePeerInfoEv
                (undefined8 *****param_1,undefined8 param_2,undefined8 param_3,
                undefined8 *****param_4,undefined8 *****param_5,undefined8 param_6)

{
  char cVar1;
  uint uVar2;
  undefined8 *****pppppuVar3;
  long lVar4;
  undefined8 *****pppppuVar5;
  undefined8 *****pppppuVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 ****ppppuVar11;
  undefined8 extraout_RDX;
  undefined8 *****pppppuVar12;
  undefined8 *****pppppuVar13;
  undefined *puVar14;
  undefined8 *****pppppuVar15;
  undefined4 uVar16;
  undefined8 *****unaff_R14;
  undefined8 *****pppppuVar17;
  undefined8 *****pppppuVar18;
  undefined8 *****pppppuVar19;
  long in_FS_OFFSET;
  undefined8 ***pppuStack_d8;
  ulong uStack_d0;
  undefined8 ****ppppuStack_c8;
  undefined8 ****ppppuStack_c0;
  undefined8 ****ppppuStack_b8;
  undefined *apuStack_b0 [2];
  undefined8 ****ppppuStack_a0;
  undefined8 ****ppppuStack_98;
  undefined8 ****ppppuStack_90;
  undefined8 ****ppppuStack_88;
  undefined8 ****ppppuStack_80;
  undefined8 ****ppppuStack_78;
  undefined1 uStack_6c;
  undefined1 uStack_6b;
  undefined2 uStack_6a;
  undefined2 uStack_68;
  undefined2 uStack_66;
  uint uStack_64;
  undefined8 ****ppppuStack_60;
  undefined8 ****ppppuStack_58;
  undefined8 ****ppppuStack_50;
  undefined8 ****ppppuStack_48;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  pppppuVar13 = param_1 + 5;
  apuStack_b0[0] = &UNK_00424e9f;
  pppppuVar3 = (undefined8 *****)_Znwm(0x2000);
  apuStack_b0[0] = &UNK_00424eb2;
  func_0x0099bda0(pppppuVar3,pppppuVar13,0x2000);
  pppppuVar15 = (undefined8 *****)param_1[0x80e];
  apuStack_b0[0] = &UNK_00424ec3;
  lVar4 = pairing_auth_safe_encrypted_size(pppppuVar15,0x2000);
  ppppuStack_58 = (undefined8 *****)0x0;
  ppppuStack_50 = (undefined8 *****)0x0;
  ppppuStack_48 = (undefined8 *****)0x0;
  if (lVar4 == 0) {
    pppppuVar5 = (undefined8 *****)0x0;
    param_6 = 0xffffffff;
    apuStack_b0[0] = &UNK_00424f35;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (&ppppuStack_88,&UNK_00161570,0x152,6,0);
    apuStack_b0[0] = &UNK_00424f3d;
    uVar7 = _ZN7android4base10LogMessage6streamEv(&ppppuStack_88);
    apuStack_b0[0] = &UNK_00424f51;
    uVar7 = func_0x0032eb30(uVar7,&UNK_0017a396,0x1d);
    apuStack_b0[0] = &UNK_00424f65;
    func_0x0032eb30(uVar7,&UNK_0015ae05,1);
    apuStack_b0[0] = &UNK_00424f6d;
    _ZN7android4base10LogMessageD2Ev(&ppppuStack_88);
    pppppuVar17 = (undefined8 *****)0x0;
code_r0x00424f70:
    pppppuVar12 = pppppuVar3 + 0x400;
    ppppuStack_60 = (undefined8 *****)0x0;
    pppppuVar15 = (undefined8 *****)param_1[0x80e];
    param_5 = &ppppuStack_60;
    apuStack_b0[0] = &UNK_00424f9d;
    param_4 = pppppuVar5;
    cVar1 = pairing_auth_encrypt(pppppuVar15,pppppuVar3,0x2000,pppppuVar5,param_5);
    ppppuVar11 = ppppuStack_60;
    unaff_R14 = pppppuVar17;
    if (cVar1 == '\0') {
      pppppuVar19 = (undefined8 *****)0x0;
      pppppuVar15 = (undefined8 *****)0x4;
      apuStack_b0[0] = &UNK_00425060;
      cVar1 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4,0);
      pppppuVar13 = pppppuVar12;
      if (cVar1 != '\0') {
        apuStack_b0[0] = &UNK_0042506d;
        puVar8 = (undefined4 *)func_0x0099bce0();
        uVar16 = *puVar8;
        pppppuVar19 = (undefined8 *****)0x0;
        unaff_R14 = &ppppuStack_88;
        param_4 = (undefined8 *****)0x4;
        param_5 = (undefined8 *****)0x0;
        param_6 = 0xffffffff;
        apuStack_b0[0] = &UNK_004250aa;
        ppppuStack_98 = pppppuVar3;
        ppppuStack_90 = pppppuVar12;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i(unaff_R14,&UNK_00161570,0x155,4,0)
        ;
        apuStack_b0[0] = &UNK_004250b2;
        uVar7 = _ZN7android4base10LogMessage6streamEv(unaff_R14);
        apuStack_b0[0] = &UNK_004250c6;
        func_0x0032eb30(uVar7,&UNK_00167d71,0x1b);
        apuStack_b0[0] = &UNK_004250ce;
        pppppuVar15 = unaff_R14;
        _ZN7android4base10LogMessageD2Ev();
        *puVar8 = uVar16;
        pppppuVar13 = (undefined8 *****)ppppuStack_90;
        pppppuVar3 = (undefined8 *****)ppppuStack_98;
      }
    }
    else {
      pppppuVar13 = (undefined8 *****)((long)pppppuVar17 - (long)pppppuVar5);
      pppppuVar19 = (undefined8 *****)((long)ppppuStack_60 - (long)pppppuVar13);
      ppppuStack_a0 = param_1;
      if (ppppuStack_60 < pppppuVar13 || pppppuVar19 == (undefined8 *****)0x0) {
        pppppuVar6 = pppppuVar5;
        ppppuStack_98 = pppppuVar3;
        ppppuStack_90 = pppppuVar12;
        if (ppppuStack_60 < pppppuVar13) {
          pppppuVar17 = (undefined8 *****)((long)ppppuStack_60 + (long)pppppuVar5);
          ppppuStack_50 = pppppuVar17;
        }
      }
      else {
        ppppuStack_98 = pppppuVar3;
        ppppuStack_90 = pppppuVar12;
        if ((long)ppppuStack_60 < 0) goto code_r0x004255d2;
        pppppuVar15 = (undefined8 *****)((long)pppppuVar13 * 2);
        if ((undefined8 *****)((long)pppppuVar13 * 2) <= ppppuStack_60) {
          pppppuVar15 = (undefined8 *****)ppppuStack_60;
        }
        param_4 = (undefined8 *****)0x3fffffffffffffff;
        pppppuVar18 = (undefined8 *****)0x7fffffffffffffff;
        if (pppppuVar13 < (undefined8 *****)0x3fffffffffffffff) {
          pppppuVar18 = pppppuVar15;
        }
        apuStack_b0[0] = &UNK_00425007;
        pppppuVar6 = (undefined8 *****)_Znwm(pppppuVar18);
        pppppuVar17 = (undefined8 *****)((long)ppppuVar11 + (long)pppppuVar6);
        apuStack_b0[0] = &UNK_0042501e;
        func_0x0099bdb0((long)pppppuVar6 + (long)pppppuVar13,0,pppppuVar19);
        apuStack_b0[0] = &UNK_0042502c;
        func_0x0099bda0(pppppuVar6,pppppuVar5,pppppuVar13);
        ppppuStack_58 = pppppuVar6;
        ppppuStack_50 = pppppuVar17;
        ppppuStack_48 = (undefined8 *****)((long)pppppuVar18 + (long)pppppuVar6);
        if (pppppuVar5 != (undefined8 *****)0x0) {
          apuStack_b0[0] = &UNK_0042504c;
          _ZdaPvSt11align_val_t(pppppuVar5,pppppuVar13);
        }
      }
      pppppuVar13 = (undefined8 *****)ppppuStack_90;
      unaff_R14 = (undefined8 *****)ppppuStack_a0;
      uStack_66 = 0x101;
      uVar2 = (uint)((long)pppppuVar17 - (long)pppppuVar6);
      uStack_64 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
      apuStack_b0[0] = &UNK_0042512d;
      cVar1 = (*(code *)(*ppppuStack_a0[0x80d])[0xb])(ppppuStack_a0[0x80d],&uStack_66,6);
      if (cVar1 == '\0') {
        pppppuVar19 = (undefined8 *****)0x0;
        pppppuVar15 = (undefined8 *****)0x4;
        apuStack_b0[0] = &UNK_00425263;
        cVar1 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4,0);
        pppppuVar5 = (undefined8 *****)ppppuStack_58;
        pppppuVar3 = (undefined8 *****)ppppuStack_98;
        if (cVar1 != '\0') {
          apuStack_b0[0] = &UNK_004254f7;
          puVar8 = (undefined4 *)func_0x0099bce0();
          uVar16 = *puVar8;
          pppppuVar19 = (undefined8 *****)0x0;
          unaff_R14 = &ppppuStack_88;
          param_4 = (undefined8 *****)0x4;
          param_5 = (undefined8 *****)0x0;
          param_6 = 0xffffffff;
          apuStack_b0[0] = &UNK_00425526;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (unaff_R14,&UNK_00161570,0x161,4,0);
          apuStack_b0[0] = &UNK_0042552e;
          uVar7 = _ZN7android4base10LogMessage6streamEv(unaff_R14);
          apuStack_b0[0] = &UNK_00425542;
          func_0x0032eb30(uVar7,&UNK_00167d8d,0x23);
          apuStack_b0[0] = &UNK_0042554a;
          pppppuVar15 = unaff_R14;
          _ZN7android4base10LogMessageD2Ev();
          *puVar8 = uVar16;
          pppppuVar13 = (undefined8 *****)ppppuStack_90;
          pppppuVar5 = (undefined8 *****)ppppuStack_58;
          pppppuVar3 = (undefined8 *****)ppppuStack_98;
        }
      }
      else {
        apuStack_b0[0] = &UNK_00425148;
        cVar1 = (*(code *)(*unaff_R14[0x80d])[0xb])
                          (unaff_R14[0x80d],pppppuVar6,(long)pppppuVar17 - (long)pppppuVar6);
        if (cVar1 == '\0') {
          pppppuVar19 = (undefined8 *****)0x0;
          pppppuVar15 = (undefined8 *****)0x4;
          apuStack_b0[0] = &UNK_00425286;
          cVar1 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4,0);
          pppppuVar3 = (undefined8 *****)ppppuStack_98;
          pppppuVar5 = (undefined8 *****)ppppuStack_58;
          if (cVar1 != '\0') {
            apuStack_b0[0] = &UNK_0042529a;
            puVar8 = (undefined4 *)func_0x0099bce0();
            uVar16 = *puVar8;
            param_4 = (undefined8 *****)0x4;
            param_5 = (undefined8 *****)0x0;
            param_6 = 0xffffffff;
            apuStack_b0[0] = &UNK_004252c9;
            _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                      (&ppppuStack_88,&UNK_00161570,0x168,4,0);
            apuStack_b0[0] = &UNK_004252d1;
            uVar7 = _ZN7android4base10LogMessage6streamEv(&ppppuStack_88);
            puVar14 = &UNK_0018059d;
            uVar10 = 0x23;
code_r0x0042533e:
            pppppuVar19 = (undefined8 *****)0x0;
            unaff_R14 = &ppppuStack_88;
            apuStack_b0[0] = &UNK_00425346;
            func_0x0032eb30(uVar7,puVar14,uVar10);
            apuStack_b0[0] = &UNK_0042534e;
            pppppuVar15 = unaff_R14;
            _ZN7android4base10LogMessageD2Ev();
            *puVar8 = uVar16;
            pppppuVar13 = (undefined8 *****)ppppuStack_90;
            pppppuVar5 = (undefined8 *****)ppppuStack_58;
          }
        }
        else {
          uStack_68 = 0;
          uStack_6c = 0;
          uStack_6b = 0;
          uStack_6a = 0;
          apuStack_b0[0] = &UNK_00425169;
          pppppuVar15 = unaff_R14;
          cVar1 = _ZN20PairingConnectionCtx10ReadHeaderEP19PairingPacketHeader(unaff_R14,&uStack_6c)
          ;
          pppppuVar3 = (undefined8 *****)ppppuStack_98;
          if (cVar1 == '\0') {
            pppppuVar19 = (undefined8 *****)0x0;
            pppppuVar15 = (undefined8 *****)0x4;
            apuStack_b0[0] = &UNK_004252ee;
            cVar1 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4,0);
            pppppuVar5 = (undefined8 *****)ppppuStack_58;
            if (cVar1 != '\0') {
              apuStack_b0[0] = &UNK_004252fb;
              puVar8 = (undefined4 *)func_0x0099bce0();
              uVar16 = *puVar8;
              param_4 = (undefined8 *****)0x4;
              param_5 = (undefined8 *****)0x0;
              param_6 = 0xffffffff;
              apuStack_b0[0] = &UNK_0042532a;
              _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                        (&ppppuStack_88,&UNK_00161570,0x16f,4,0);
              apuStack_b0[0] = &UNK_00425332;
              uVar7 = _ZN7android4base10LogMessage6streamEv(&ppppuStack_88);
              puVar14 = &UNK_00174135;
              uVar10 = 0x1c;
              goto code_r0x0042533e;
            }
          }
          else {
            apuStack_b0[0] = &UNK_00425186;
            cVar1 = _ZN20PairingConnectionCtx15CheckHeaderTypeEN3adb5proto18PairingPacket_TypeEh();
            if (cVar1 == '\0') {
              pppppuVar19 = (undefined8 *****)0x0;
              pppppuVar5 = (undefined8 *****)ppppuStack_58;
            }
            else {
              apuStack_b0[0] = &UNK_004251a2;
              (*(code *)(*unaff_R14[0x80d])[9])
                        (&ppppuStack_88,unaff_R14[0x80d],CONCAT22(uStack_68,uStack_6a));
              apuStack_b0[0] = &UNK_004251af;
              _ZdaPvSt11align_val_t(pppppuVar3,0x2000);
              if (ppppuStack_88 == ppppuStack_80) {
                pppppuVar19 = (undefined8 *****)0x0;
                pppppuVar13 = (undefined8 *****)ppppuStack_78;
                pppppuVar15 = pppppuVar3;
                pppppuVar5 = (undefined8 *****)ppppuStack_58;
                pppppuVar3 = (undefined8 *****)ppppuStack_88;
              }
              else {
                apuStack_b0[0] = &UNK_004251d9;
                uVar7 = pairing_auth_safe_decrypted_size
                                  (unaff_R14[0x80e],ppppuStack_88,
                                   (long)ppppuStack_80 - (long)ppppuStack_88);
                apuStack_b0[0] = &UNK_004251e5;
                func_0x00426020(&ppppuStack_58,uVar7);
                param_4 = (undefined8 *****)ppppuStack_58;
                if (ppppuStack_58 == ppppuStack_50) {
                  pppppuVar15 = (undefined8 *****)0x4;
                  apuStack_b0[0] = &UNK_0042537c;
                  cVar1 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4,0);
                  if (cVar1 == '\0') goto code_r0x004253e9;
                  apuStack_b0[0] = &UNK_00425385;
                  puVar8 = (undefined4 *)func_0x0099bce0();
                  ppppuStack_90 = (undefined8 ****)CONCAT44(ppppuStack_90._4_4_,*puVar8);
                  param_4 = (undefined8 *****)0x4;
                  param_5 = (undefined8 *****)0x0;
                  param_6 = 0xffffffff;
                  apuStack_b0[0] = &UNK_004253b9;
                  _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                            (&ppppuStack_88,&UNK_00161570,0x180,4,0);
                  apuStack_b0[0] = &UNK_004253c1;
                  uVar7 = _ZN7android4base10LogMessage6streamEv(&ppppuStack_88);
                  puVar14 = &UNK_0016b12c;
                  uVar10 = 0x2f;
code_r0x004255ad:
                  pppppuVar19 = (undefined8 *****)0x0;
                  unaff_R14 = &ppppuStack_88;
                  apuStack_b0[0] = &UNK_004255b5;
                  func_0x0032eb30(uVar7,puVar14,uVar10);
                  apuStack_b0[0] = &UNK_004255bd;
                  pppppuVar15 = unaff_R14;
                  _ZN7android4base10LogMessageD2Ev();
                  *puVar8 = ppppuStack_90._0_4_;
                  pppppuVar13 = (undefined8 *****)ppppuStack_78;
                  pppppuVar5 = (undefined8 *****)ppppuStack_58;
                  pppppuVar3 = (undefined8 *****)ppppuStack_88;
                }
                else {
                  param_5 = &ppppuStack_60;
                  apuStack_b0[0] = &UNK_00425209;
                  cVar1 = pairing_auth_decrypt
                                    (unaff_R14[0x80e],ppppuStack_88,
                                     (long)ppppuStack_80 - (long)ppppuStack_88,ppppuStack_58,param_5
                                    );
                  if (cVar1 == '\0') {
                    pppppuVar15 = (undefined8 *****)0x4;
                    apuStack_b0[0] = &UNK_004253e1;
                    cVar1 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4,0);
                    if (cVar1 != '\0') {
                      apuStack_b0[0] = &UNK_00425565;
                      puVar8 = (undefined4 *)func_0x0099bce0();
                      ppppuStack_90 = (undefined8 ****)CONCAT44(ppppuStack_90._4_4_,*puVar8);
                      param_4 = (undefined8 *****)0x4;
                      param_5 = (undefined8 *****)0x0;
                      param_6 = 0xffffffff;
                      apuStack_b0[0] = &UNK_00425599;
                      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                                (&ppppuStack_88,&UNK_00161570,0x185,4,0);
                      apuStack_b0[0] = &UNK_004255a1;
                      uVar7 = _ZN7android4base10LogMessage6streamEv(&ppppuStack_88);
                      puVar14 = &UNK_001725b0;
                      uVar10 = 0x11;
                      goto code_r0x004255ad;
                    }
code_r0x004253e9:
                    pppppuVar19 = (undefined8 *****)0x0;
                    pppppuVar13 = (undefined8 *****)ppppuStack_78;
                    pppppuVar5 = (undefined8 *****)ppppuStack_58;
                    pppppuVar3 = (undefined8 *****)ppppuStack_88;
                  }
                  else {
                    apuStack_b0[0] = &UNK_0042521e;
                    func_0x00426020(&ppppuStack_58,ppppuStack_60);
                    if ((long)ppppuStack_50 - (long)ppppuStack_58 == 0x2000) {
                      unaff_R14 = unaff_R14 + 0x40b;
                      apuStack_b0[0] = &UNK_0042524c;
                      pppppuVar15 = unaff_R14;
                      func_0x0099bda0(unaff_R14,ppppuStack_58,0x2000);
                      pppppuVar19 = (undefined8 *****)CONCAT71((int7)((ulong)pppppuVar6 >> 8),1);
                      pppppuVar13 = (undefined8 *****)ppppuStack_78;
                      pppppuVar5 = (undefined8 *****)ppppuStack_58;
                      pppppuVar3 = (undefined8 *****)ppppuStack_88;
                    }
                    else {
                      pppppuVar19 = (undefined8 *****)0x0;
                      pppppuVar15 = (undefined8 *****)0x4;
                      apuStack_b0[0] = &UNK_0042544f;
                      cVar1 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4,0);
                      pppppuVar13 = (undefined8 *****)ppppuStack_78;
                      pppppuVar5 = (undefined8 *****)ppppuStack_58;
                      pppppuVar3 = (undefined8 *****)ppppuStack_88;
                      if (cVar1 != '\0') {
                        apuStack_b0[0] = &UNK_00425458;
                        unaff_R14 = (undefined8 *****)func_0x0099bce0();
                        ppppuStack_90 =
                             (undefined8 ****)CONCAT44(ppppuStack_90._4_4_,*(undefined4 *)unaff_R14)
                        ;
                        pppppuVar19 = (undefined8 *****)0x0;
                        pppppuVar15 = &ppppuStack_88;
                        param_4 = (undefined8 *****)0x4;
                        param_5 = (undefined8 *****)0x0;
                        param_6 = 0xffffffff;
                        apuStack_b0[0] = &UNK_0042548c;
                        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                                  (pppppuVar15,&UNK_00161570,0x18c,4,0);
                        apuStack_b0[0] = &UNK_00425494;
                        uVar7 = _ZN7android4base10LogMessage6streamEv(pppppuVar15);
                        apuStack_b0[0] = &UNK_004254a8;
                        uVar7 = func_0x0032eb30(uVar7,&UNK_0017d8f5,9);
                        apuStack_b0[0] = &UNK_004254b8;
                        uVar7 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm
                                          (uVar7,(long)ppppuStack_50 - (long)ppppuStack_58);
                        apuStack_b0[0] = &UNK_004254cc;
                        uVar7 = func_0x0032eb30(uVar7,&UNK_0016ee93,0xe);
                        apuStack_b0[0] = &UNK_004254d9;
                        _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar7,0x2000);
                        apuStack_b0[0] = &UNK_004254e4;
                        _ZN7android4base10LogMessageD2Ev();
                        *(undefined4 *)unaff_R14 = ppppuStack_90._0_4_;
                        pppppuVar13 = (undefined8 *****)ppppuStack_78;
                        pppppuVar5 = (undefined8 *****)ppppuStack_58;
                        pppppuVar3 = (undefined8 *****)ppppuStack_88;
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
    if (pppppuVar5 != (undefined8 *****)0x0) {
      apuStack_b0[0] = &UNK_00425408;
      ppppuStack_50 = pppppuVar5;
      _ZdaPvSt11align_val_t(pppppuVar5,(long)ppppuStack_48 - (long)pppppuVar5);
      pppppuVar15 = pppppuVar5;
    }
    if (pppppuVar3 != (undefined8 *****)0x0) {
      pppppuVar13 = (undefined8 *****)((long)pppppuVar13 - (long)pppppuVar3);
      apuStack_b0[0] = &UNK_0042541b;
      _ZdaPvSt11align_val_t(pppppuVar3,pppppuVar13);
      pppppuVar15 = pppppuVar3;
    }
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
      return (ulong)pppppuVar19 & 0xffffffff;
    }
    apuStack_b0[0] = &UNK_004255d2;
    func_0x0099bd00();
  }
  else {
    pppppuVar19 = param_1;
    if (-1 < lVar4) {
      apuStack_b0[0] = &UNK_00424ee8;
      pppppuVar5 = (undefined8 *****)_Znwm(lVar4);
      pppppuVar17 = (undefined8 *****)(lVar4 + (long)pppppuVar5);
      apuStack_b0[0] = &UNK_00424f06;
      ppppuStack_58 = pppppuVar5;
      ppppuStack_48 = pppppuVar17;
      func_0x0099bdb0(pppppuVar5,0,lVar4);
      ppppuStack_50 = pppppuVar17;
      goto code_r0x00424f70;
    }
  }
code_r0x004255d2:
  apuStack_b0[0] = &UNK_004255d7;
  func_0x00330ca0();
  uStack_d0 = *(ulong *)(in_FS_OFFSET + 0x28);
  ppppuStack_c8 = pppppuVar13;
  ppppuStack_c0 = unaff_R14;
  ppppuStack_b8 = pppppuVar19;
  apuStack_b0[0] = &stack0xfffffffffffffff8;
  cVar1 = _ZN20PairingConnectionCtx18SetupTlsConnectionEv();
  if (cVar1 != '\0') {
    do {
      switch(*(undefined4 *)(pppppuVar15 + 1)) {
      case 0:
      case 3:
        goto code_r0x0042564b;
      case 1:
        cVar1 = _ZN20PairingConnectionCtx14DoExchangeMsgsEv(pppppuVar15);
        if (cVar1 == '\0') goto code_r0x004256ef;
        LOCK();
        *(undefined4 *)(pppppuVar15 + 1) = 2;
        UNLOCK();
        break;
      case 2:
        cVar1 = _ZN20PairingConnectionCtx18DoExchangePeerInfoEv(pppppuVar15);
        if (cVar1 == '\0') goto code_r0x004256ef;
        pppppuVar13 = pppppuVar15 + 0x40b;
        uVar2 = *(uint *)(pppppuVar15 + 0x80f);
        ppppuVar11 = pppppuVar15[0x80c];
        goto code_r0x004256fe;
      }
    } while( true );
  }
code_r0x004256ef:
  uVar2 = *(uint *)(pppppuVar15 + 0x80f);
  ppppuVar11 = pppppuVar15[0x80c];
  pppppuVar13 = (undefined8 *****)0x0;
code_r0x004256fe:
  puVar14 = (undefined *)(ulong)uVar2;
  (*(code *)pppppuVar15[0x80b])(pppppuVar13,puVar14,ppppuVar11);
  LOCK();
  *(undefined4 *)(pppppuVar15 + 1) = 3;
  UNLOCK();
code_r0x0042570c:
  if (*(ulong *)(in_FS_OFFSET + 0x28) != uStack_d0) {
    func_0x0099bd00();
    uVar9 = func_0x00425760(0,pppppuVar13,puVar14,extraout_RDX,param_4,param_5,param_6,pppuStack_d8,
                            apuStack_b0);
    return uVar9;
  }
  return *(ulong *)(in_FS_OFFSET + 0x28);
code_r0x0042564b:
  pppppuVar13 = (undefined8 *****)0x6;
  puVar14 = (undefined *)0x0;
  cVar1 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(6,0);
  if (cVar1 != '\0') {
    puVar8 = (undefined4 *)func_0x0099bce0();
    uVar16 = *puVar8;
    pppppuVar13 = (undefined8 *****)&pppuStack_d8;
    param_4 = (undefined8 *****)0x6;
    param_5 = (undefined8 *****)0x0;
    param_6 = 0xffffffff;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i(pppppuVar13,&UNK_00161570,0x1b0,6,0);
    uVar7 = _ZN7android4base10LogMessage6streamEv(pppppuVar13);
    uVar7 = func_0x0032eb30(uVar7,&UNK_0017f076,0xb);
    puVar14 = &UNK_0017580d;
    func_0x0032eb30(uVar7,&UNK_0017580d,0x13);
    _ZN7android4base10LogMessageD2Ev(pppppuVar13);
    *puVar8 = uVar16;
  }
  goto code_r0x0042570c;
}


