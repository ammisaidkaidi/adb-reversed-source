// Function: _Z13handle_packetP7apacketP10atransport
// Address: 003cb3b0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _Z13handle_packetP7apacketP10atransport(byte *param_1,ulong *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint *puVar3;
  code *pcVar4;
  char cVar5;
  int iVar6;
  ulong *puVar7;
  uint *puVar8;
  long lVar9;
  ulong uVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  undefined1 *puVar13;
  ulong *puVar14;
  ulong *unaff_R13;
  ulong *puVar15;
  ulong *puVar16;
  long in_FS_OFFSET;
  bool bVar17;
  ulong *puStack_268;
  ulong *puStack_260;
  byte *pbStack_258;
  undefined8 uStack_250;
  long lStack_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined8 uStack_230;
  undefined1 auStack_228 [8];
  undefined8 *puStack_220;
  ulong *puStack_218;
  undefined8 uStack_210;
  ulong *puStack_208;
  undefined8 uStack_200;
  ulong uStack_1f8;
  ulong *puStack_1f0;
  undefined8 uStack_1e8;
  ulong uStack_1d8;
  ulong *puStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  ulong auStack_1b8 [3];
  undefined8 uStack_1a0;
  ulong uStack_198;
  undefined8 uStack_190;
  ulong uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_168 [8];
  ulong *puStack_160;
  ulong *puStack_158;
  undefined *puStack_150;
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
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  puVar16 = (ulong *)&adb_trace_mask;
  puVar13 = adb_trace_severity;
  if ((((byte)adb_trace_mask & 4) != 0) && ((int)adb_trace_severity._8_4_ < 2)) {
    puVar11 = adb_trace_severity;
    cVar5 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
    puVar13 = adb_trace_severity;
    unaff_R13 = param_2;
    if (cVar5 != '\0') {
      uStack_250 = (uint *)func_0x0099bce0();
      puStack_260 = (ulong *)(ulong)*uStack_250;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_228,&UNK_00181a61,0x1b4,1,0,0xffffffff);
      puStack_268 = (ulong *)_ZN7android4base10LogMessage6streamEv(auStack_228);
      auStack_1b8[0] = (ulong)*param_1;
      auStack_1b8[1] = 0;
      auStack_1b8[2] = (ulong)param_1[1];
      uStack_1a0 = 0;
      uStack_198 = (ulong)param_1[2];
      uStack_190 = 0;
      uStack_188 = (ulong)param_1[3];
      uStack_178 = 0x10842;
      uStack_180 = 0;
      uStack_1c8 = 0;
      uStack_1c0 = 0;
      uStack_1d8 = 0;
      puStack_1d0 = (ulong *)0x0;
      uStack_210 = 4;
      puVar13 = (undefined1 *)auStack_1b8;
      uStack_200 = 0x10842;
      puStack_208 = (ulong *)puVar13;
      func_0x003d0680(&uStack_1d8,&UNK_001895b1,0x13);
      if ((char)uStack_1c0 != '\x01') goto code_r0x003cc0e9;
      uStack_1e8 = uStack_1c8;
      uStack_1f8 = uStack_1d8;
      puStack_1f0 = puStack_1d0;
      uStack_1d8 = 0;
      puStack_1d0 = (ulong *)0x0;
      uStack_1c8 = 0;
      goto code_r0x003cc22b;
    }
  }
  do {
    puVar11 = *(undefined1 **)(param_1 + 0x28);
    puVar15 = (ulong *)(ulong)*(uint *)(param_1 + 0xc);
    if ((ulong *)puVar11 != puVar15) {
      do {
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (auStack_168,&UNK_00181a61,0x1b9,6,0,0xffffffff);
        uVar12 = _ZN7android4base10LogMessage6streamEv(auStack_168);
        uVar12 = func_0x0032eb30(uVar12,&UNK_00165d45,0xe);
        uVar12 = func_0x0032eb30(uVar12,&UNK_0017d5aa,0x11);
        uVar12 = func_0x0032eb30(uVar12,&UNK_0015ae05,1);
        uVar12 = func_0x0032eb30(uVar12,&UNK_0015aef8,2);
        uVar12 = func_0x0032eb30(uVar12,&UNK_0015ae05,1);
        uVar12 = func_0x0032eb30(uVar12,&UNK_00178931,0x12);
        uVar12 = func_0x0032eb30(uVar12,&UNK_00169567,0x14);
        uVar12 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar12,puVar11);
        uVar12 = func_0x0032eb30(uVar12,&UNK_001679cd,0x15);
        uVar12 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj(uVar12,puVar15);
        func_0x0032eb30(uVar12,&UNK_0017b788,2);
        _ZN7android4base10LogMessageD2Ev(auStack_168);
      } while( true );
    }
    iVar6 = *(int *)param_1;
    if (iVar6 < 0x4e45504f) {
      if (iVar6 == 0x45534c43) {
        if ((((byte)param_2[4] == 1) && (*(int *)(param_1 + 8) != 0)) &&
           (puVar7 = (ulong *)_Z17find_local_socketjj
                                        (*(int *)(param_1 + 8),*(undefined4 *)(param_1 + 4)),
           puVar15 = (ulong *)puVar13, puVar11 = (undefined1 *)param_2, puVar7 != (ulong *)0x0)) {
          if (((*(int *)(param_1 + 4) == 0) && (puVar7[2] != 0)) &&
             (*(ulong **)(puVar7[2] + 0x38) != param_2)) {
            if ((((*puVar16 & 1) != 0) && ((int)(uint)*(ulong *)puVar13 < 2)) &&
               (cVar5 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0), unaff_R13 = puVar7,
               cVar5 != '\0')) {
              uStack_250 = (uint *)func_0x0099bce0();
              puStack_260 = (ulong *)(ulong)*uStack_250;
              _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                        (auStack_1b8,&UNK_00181a61,0x261,1,0,0xffffffff);
              puStack_268 = (ulong *)_ZN7android4base10LogMessage6streamEv(auStack_1b8);
              if ((param_2[5] & 1) == 0) goto code_r0x003cc2a9;
              param_2 = (ulong *)param_2[7];
              goto code_r0x003cc2ad;
            }
          }
          else {
            (*(code *)puVar7[6])(puVar7);
          }
        }
      }
      else if (iVar6 == 0x45545257) {
        if (((((byte)param_2[4] == 1) && (*(int *)(param_1 + 4) != 0)) &&
            (*(int *)(param_1 + 8) != 0)) && (lVar9 = _Z17find_local_socketjj(), lVar9 != 0)) {
          pcVar4 = *(code **)(lVar9 + 0x18);
          lStack_248 = *(long *)(param_1 + 0x18);
          param_1[0x18] = 0;
          param_1[0x19] = 0;
          param_1[0x1a] = 0;
          param_1[0x1b] = 0;
          param_1[0x1c] = 0;
          param_1[0x1d] = 0;
          param_1[0x1e] = 0;
          param_1[0x1f] = 0;
          uStack_240 = *(undefined4 *)(param_1 + 0x20);
          uStack_23c = *(undefined4 *)(param_1 + 0x24);
          uStack_238 = *(undefined4 *)(param_1 + 0x28);
          uStack_234 = *(undefined4 *)(param_1 + 0x2c);
          param_1[0x20] = 0;
          param_1[0x21] = 0;
          param_1[0x22] = 0;
          param_1[0x23] = 0;
          param_1[0x24] = 0;
          param_1[0x25] = 0;
          param_1[0x26] = 0;
          param_1[0x27] = 0;
          param_1[0x28] = 0;
          param_1[0x29] = 0;
          param_1[0x2a] = 0;
          param_1[0x2b] = 0;
          param_1[0x2c] = 0;
          param_1[0x2d] = 0;
          param_1[0x2e] = 0;
          param_1[0x2f] = 0;
          uStack_230 = *(undefined8 *)(param_1 + 0x30);
          param_1[0x30] = 0;
          param_1[0x31] = 0;
          param_1[0x32] = 0;
          param_1[0x33] = 0;
          param_1[0x34] = 0;
          param_1[0x35] = 0;
          param_1[0x36] = 0;
          param_1[0x37] = 0;
          (*pcVar4)(lVar9,&lStack_248);
          lVar9 = lStack_248;
          lStack_248 = 0;
          if (lVar9 != 0) {
            _ZdaPvSt11align_val_t();
          }
        }
      }
      else {
        if (iVar6 != 0x48545541) goto code_r0x003cb5e3;
        if ((byte)param_2[0x14] == 0) {
          if (*(int *)(param_1 + 4) == 1) {
            iVar6 = _ZNK10atransport18GetConnectionStateEv(param_2);
            if (iVar6 != 1) {
              _ZN10atransport18SetConnectionStateE15ConnectionState(param_2,1);
            }
            _Z18send_auth_responsePKcmP10atransport
                      (*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0xc),param_2);
            puVar16 = param_2;
          }
          else {
            _ZN10atransport18SetConnectionStateE15ConnectionState(param_2,5);
            _Z14handle_offlineP10atransport(param_2);
            puVar16 = param_2;
          }
        }
      }
      goto code_r0x003cbab1;
    }
    if (iVar6 < 0x534c5453) {
      if (iVar6 == 0x4e45504f) {
        if (((byte)param_2[4] == 1) && (*(int *)(param_1 + 4) != 0)) {
          puVar7 = (ulong *)(ulong)*(uint *)(param_1 + 8);
          if ((puVar7 == (ulong *)0x0) == (bool)(byte)param_2[0x39]) {
            cVar5 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4,0);
            puVar14 = puVar7;
            if (cVar5 != '\0') {
              puVar14 = (ulong *)func_0x0099bce0();
              uVar10 = *puVar14;
              uStack_250 = (uint *)CONCAT44(uStack_250._4_4_,(uint)uVar10);
              unaff_R13 = (ulong *)auStack_168;
              _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                        (unaff_R13,&UNK_00181a61,0x1fb,4,0,0xffffffff);
              uVar12 = _ZN7android4base10LogMessage6streamEv(unaff_R13);
              uVar12 = func_0x0032eb30(uVar12,&UNK_00162dd3,0x21);
              uVar12 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj(uVar12,puVar7);
              uVar12 = func_0x0032eb30(uVar12,&UNK_00161356,0x11);
              uVar12 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEb
                                 (uVar12,(byte)param_2[0x39]);
              func_0x0032eb30(uVar12,&UNK_001692c7,1);
              _ZN7android4base10LogMessageD2Ev(unaff_R13);
              *(uint *)puVar14 = (uint)uVar10;
              puVar16 = puVar7;
            }
            uVar1 = *(undefined4 *)(param_1 + 4);
          }
          else {
            puVar3 = *(uint **)(param_1 + 0x18);
            puVar14 = *(ulong **)(param_1 + 0x28);
            if (puVar14 == (ulong *)0x0) {
              unaff_R13 = (ulong *)0x0;
            }
            else {
              puVar15 = (ulong *)0x0;
              puVar8 = puVar3;
              do {
                puVar8 = (uint *)((long)puVar8 + -1);
                unaff_R13 = puVar15;
                if (*(byte *)((long)puVar8 + (long)puVar14) != 0) break;
                puVar15 = (ulong *)((long)puVar15 + 1);
                unaff_R13 = puVar14;
              } while (puVar14 != puVar15);
            }
            _ZN4absl12lts_2026052612NoDestructorINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEEC2IJRA28_KcETnNS2_9enable_ifIXntsr3std7is_sameIFvDpRu7__decayIT_EEFvRS9_EEE5valueEiE4typeELi0EEEDpOSF_
                      (auStack_168);
            cVar5 = _ZN10atransport19IsReverseConfiguredERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                              (param_2,auStack_168);
            if (((ulong)auStack_168 & 1) != 0) {
              _ZdaPvSt11align_val_t(puStack_158,(ulong)auStack_168 & 0xfffffffffffffffe);
            }
            puVar14 = (ulong *)((long)puVar14 - (long)unaff_R13);
            if ((cVar5 == '\0') &&
               (cVar5 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(6,0), cVar5 != '\0')) {
              puVar8 = (uint *)func_0x0099bce0();
              uVar2 = *puVar8;
              puStack_268 = (ulong *)(ulong)uVar2;
              _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                        (auStack_1b8,&UNK_00181a61,0x20d,6,0,0xffffffff);
              uVar12 = _ZN7android4base10LogMessage6streamEv(auStack_1b8);
              uVar12 = func_0x0032eb30(uVar12,&UNK_00170586,0xd);
              uVar12 = func_0x0032eb30(uVar12,&UNK_00170594,0x17);
              uVar12 = func_0x0032eb30(uVar12,puVar3,puVar14);
              uVar12 = func_0x0032eb30(uVar12,&UNK_0017a16a,6);
              unaff_R13 = (ulong *)auStack_168;
              _ZNK10atransport11serial_nameEv(unaff_R13,param_2);
              func_0x0032e5a0(uVar12,unaff_R13);
              if (((ulong)auStack_168 & 1) != 0) {
                _ZdaPvSt11align_val_t(puStack_158,(ulong)auStack_168 & 0xfffffffffffffffe);
              }
              _ZN7android4base10LogMessageD2Ev(auStack_1b8);
              *puVar8 = uVar2;
            }
            puVar15 = (ulong *)_Z27create_local_service_socketNSt3__117basic_string_viewIcNS_11char_traitsIcEEEEP10atransport
                                         (puVar3,puVar14,param_2);
            uVar1 = *(undefined4 *)(param_1 + 4);
            puStack_260 = puVar7;
            uStack_250 = puVar3;
            if (puVar15 != (ulong *)0x0) {
              uVar10 = _Z20create_remote_socketjP10atransport(uVar1,param_2);
              puVar15[2] = uVar10;
              *(ulong **)(uVar10 + 0x10) = puVar15;
              bVar17 = (*puVar16 & 4) != 0;
              uStack_250._4_4_ = (uint)((ulong)puVar3 >> 0x20);
              if ((byte)param_2[0x39] == 1) {
                if (((int)adb_trace_severity._8_4_ < 2 && bVar17) &&
                   (cVar5 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0), cVar5 != '\0')) {
                  unaff_R13 = (ulong *)func_0x0099bce0();
                  uVar10 = *unaff_R13;
                  uStack_250 = (uint *)CONCAT44(uStack_250._4_4_,(uint)uVar10);
                  puVar16 = (ulong *)auStack_168;
                  _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                            (puVar16,&UNK_00181a61,0x21b,1,0,0xffffffff);
                  uVar12 = _ZN7android4base10LogMessage6streamEv(puVar16);
                  uVar12 = func_0x0032eb30(uVar12,&UNK_0018ace8,0x25);
                  _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj(uVar12,puVar7);
                  _ZN7android4base10LogMessageD2Ev(puVar16);
                  *(uint *)unaff_R13 = (uint)uVar10;
                  puVar3 = uStack_250;
                }
                uStack_250 = puVar3;
                if ((byte)puVar15[0x11] == 0) {
                  *(byte *)(puVar15 + 0x11) = 1;
                }
                puVar15[0x10] = (ulong)puVar7;
                uVar12 = 0x2000000;
                puVar11 = (undefined1 *)param_2;
                puVar3 = uStack_250;
              }
              else {
                uVar12 = 0;
                puVar11 = (undefined1 *)param_2;
                if ((int)adb_trace_severity._8_4_ < 2 && bVar17) {
                  cVar5 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0,param_2,0);
                  uVar12 = 0;
                  unaff_R13 = param_2;
                  if (cVar5 != '\0') {
                    puVar11 = (undefined1 *)func_0x0099bce0();
                    uVar10 = *(ulong *)puVar11;
                    uStack_250 = (uint *)CONCAT44(uStack_250._4_4_,(uint)uVar10);
                    puVar16 = (ulong *)auStack_168;
                    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                              (puVar16,&UNK_00181a61,0x221,1,0,0xffffffff);
                    uVar12 = _ZN7android4base10LogMessage6streamEv(puVar16);
                    func_0x0032eb30(uVar12,&UNK_001595c1,0x17);
                    _ZN7android4base10LogMessageD2Ev(puVar16);
                    uVar12 = 0;
                    *(uint *)puVar11 = (uint)uVar10;
                    puVar3 = uStack_250;
                  }
                }
              }
              uStack_250 = puVar3;
              _Z10send_readyjjP10atransportj
                        ((uint)*puVar15,*(undefined4 *)puVar15[2],param_2,uVar12);
              (*(code *)puVar15[4])(puVar15);
              goto code_r0x003cbab1;
            }
          }
          func_0x003cc370(0,uVar1,param_2);
          puVar15 = puVar14;
          puVar11 = (undefined1 *)param_2;
        }
        goto code_r0x003cbab1;
      }
      if (iVar6 != 0x4e584e43) goto code_r0x003cb5e3;
      _Z14handle_offlineP10atransport(param_2);
      _ZN10atransport14update_versionEim
                (param_2,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
      puVar11 = *(undefined1 **)(param_1 + 0x28);
      if (puVar11 < (ulong *)0xfffffffffffffff7) {
        puVar15 = *(ulong **)(param_1 + 0x18);
        auStack_168 = (undefined1  [8])0x0;
        puStack_160 = (ulong *)0x0;
        puStack_158 = (ulong *)0x0;
        if (puVar11 < (ulong *)0x17) {
          auStack_168._1_7_ = 0;
          auStack_168[0] = (char)puVar11 * '\x02';
          unaff_R13 = (ulong *)(auStack_168 + 1);
        }
        else {
          lVar9 = 0x1a;
          if (((ulong)puVar11 | 7) != 0x17) {
            lVar9 = ((ulong)puVar11 | 7) + 1;
          }
          unaff_R13 = (ulong *)_Znwm(lVar9);
          auStack_168 = (undefined1  [8])(lVar9 + 1);
          puStack_160 = (ulong *)puVar11;
          puStack_158 = unaff_R13;
        }
        func_0x0099bd90(unaff_R13,puVar15,puVar11);
        *(byte *)((long)unaff_R13 + (long)puVar11) = 0;
        _Z12parse_bannerRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEP10atransport
                  (auStack_168,param_2);
        _Z13handle_onlineP10atransport(param_2);
        puVar16 = param_2;
        if (((ulong)auStack_168 & 1) != 0) {
          _ZdaPvSt11align_val_t(puStack_158,(ulong)auStack_168 & 0xfffffffffffffffe);
        }
        goto code_r0x003cbab1;
      }
      func_0x0032e8f0();
      puVar13 = (undefined1 *)puVar15;
      puVar7 = unaff_R13;
      param_2 = (ulong *)puVar11;
code_r0x003cc2a9:
      param_2 = (ulong *)((long)param_2 + 0x29);
code_r0x003cc2ad:
      _ZN7android4base12StringPrintfEPKcz
                (auStack_168,&UNK_00177091,*(undefined4 *)(param_1 + 8),param_2);
      puVar16 = puStack_268;
code_r0x003cc31e:
      func_0x0032e5a0(puVar16,auStack_168);
      if (((ulong)auStack_168 & 1) != 0) {
        _ZdaPvSt11align_val_t(puStack_158,(ulong)auStack_168 & 0xfffffffffffffffe);
      }
      _ZN7android4base10LogMessageD2Ev(auStack_1b8);
      *uStack_250 = (uint)puStack_260;
      puVar15 = (ulong *)puVar13;
      unaff_R13 = puVar7;
      puVar16 = (ulong *)auStack_168;
      puVar11 = (undefined1 *)param_2;
code_r0x003cbab1:
      puVar13 = (undefined1 *)puVar15;
      lVar9 = *(long *)(param_1 + 0x18);
      param_1[0x18] = 0;
      param_1[0x19] = 0;
      param_1[0x1a] = 0;
      param_1[0x1b] = 0;
      param_1[0x1c] = 0;
      param_1[0x1d] = 0;
      param_1[0x1e] = 0;
      param_1[0x1f] = 0;
      if (lVar9 != 0) {
        _ZdaPvSt11align_val_t();
      }
      _ZdaPvSt11align_val_t(param_1,0x38);
    }
    else {
      if (iVar6 == 0x534c5453) {
        *(byte *)(param_2 + 0x14) = 1;
        _Z16send_tls_requestP10atransport(param_2);
        _Z22adb_auth_tls_handshakeP10atransport(param_2);
        puVar16 = param_2;
        goto code_r0x003cbab1;
      }
      if (iVar6 != 0x59414b4f) {
code_r0x003cb5e3:
        func_0x0099be10(&UNK_0016eb3a);
        goto code_r0x003cbab1;
      }
      if ((((byte)param_2[4] != 1) || (*(int *)(param_1 + 4) == 0)) || (*(int *)(param_1 + 8) == 0))
      goto code_r0x003cbab1;
      puVar7 = (ulong *)_Z17find_local_socketjj(*(int *)(param_1 + 8),0);
      if (puVar7 == (ulong *)0x0) {
        func_0x003cc370(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 4),param_2);
        puVar15 = (ulong *)puVar13;
        goto code_r0x003cbab1;
      }
      puVar11 = *(undefined1 **)(param_1 + 0x28);
      if ((ulong *)puVar11 == (ulong *)0x0) {
        uStack_250 = (uint *)((ulong)uStack_250._4_4_ << 0x20);
        unaff_R13 = (ulong *)0x0;
code_r0x003cb9e2:
        if ((int *)puVar7[2] == (int *)0x0) {
          uVar10 = _Z20create_remote_socketjP10atransport(*(undefined4 *)(param_1 + 4));
          puVar7[2] = uVar10;
          *(ulong **)(uVar10 + 0x10) = puVar7;
          puVar16 = puVar7;
        }
        else if (*(int *)puVar7[2] != *(int *)(param_1 + 4)) {
          puVar15 = (ulong *)puVar13;
          if ((((*puVar16 & 1) != 0) && ((int)(uint)*(ulong *)puVar13 < 2)) &&
             (cVar5 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0), unaff_R13 = puVar7,
             puVar11 = (undefined1 *)param_2, cVar5 != '\0')) {
            uStack_250 = (uint *)func_0x0099bce0();
            puStack_260 = (ulong *)(ulong)*uStack_250;
            _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                      (auStack_1b8,&UNK_00181a61,0x245,1,0,0xffffffff);
            puVar16 = (ulong *)_ZN7android4base10LogMessage6streamEv(auStack_1b8);
            if ((param_2[5] & 1) == 0) {
              pbStack_258 = (byte *)((long)param_2 + 0x29);
            }
            else {
              pbStack_258 = (byte *)param_2[7];
            }
            _ZN7android4base12StringPrintfEPKcz
                      (auStack_168,&UNK_00165ea6,*(undefined4 *)(param_1 + 4),
                       *(undefined4 *)(param_1 + 8),*(undefined4 *)puVar7[2],
                       *(undefined4 *)(param_1 + 8),pbStack_258);
            puVar13 = (undefined1 *)puVar16;
            goto code_r0x003cc31e;
          }
          goto code_r0x003cbab1;
        }
        unaff_R13 = (ulong *)(ulong)((uint)unaff_R13 | (uint)uStack_250);
        puVar11 = (undefined1 *)((ulong)puVar11 | (ulong)unaff_R13);
        _Z16local_socket_ackP7asocketNSt3__18optionalIiEE(puVar7,puVar11);
        puVar15 = (ulong *)puVar13;
        goto code_r0x003cbab1;
      }
      if ((ulong *)puVar11 == (ulong *)0x4) {
        uStack_250 = (uint *)(CONCAT44(uStack_250._4_4_,**(uint **)(param_1 + 0x18)) &
                             0xffffffff000000ff);
        unaff_R13 = (ulong *)(ulong)(**(uint **)(param_1 + 0x18) & 0xffffff00);
        puVar11 = (undefined1 *)0x100000000;
        goto code_r0x003cb9e2;
      }
      cVar5 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4,0);
      if (cVar5 != '\0') {
        puVar16 = (ulong *)func_0x0099bce0();
        uVar10 = *puVar16;
        puVar13 = (undefined1 *)(ulong)(uint)uVar10;
        puVar11 = auStack_168;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (puVar11,&UNK_00181a61,0x237,4,0,0xffffffff);
        uVar12 = _ZN7android4base10LogMessage6streamEv(puVar11);
        uVar12 = func_0x0032eb30(uVar12,&UNK_0017ba1c,0x1d);
        _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar12,*(undefined8 *)(param_1 + 0x28));
        _ZN7android4base10LogMessageD2Ev(puVar11);
        *(uint *)puVar16 = (uint)uVar10;
      }
    }
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
      return;
    }
    func_0x0099bd00();
    param_2 = unaff_R13;
code_r0x003cc0e9:
    auStack_168 = (undefined1  [8])&uStack_140;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_f0 = 0;
    uStack_e8 = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_140 = 0;
    uStack_138 = 0;
    puStack_160 = (ulong *)0x100;
    puStack_158 = (ulong *)0x0;
    puStack_150 = &UNK_00358010;
    uStack_148 = 0;
    uStack_1f8 = 4;
    uStack_1e8 = 0x10842;
    puStack_1f0 = (ulong *)puVar13;
    puStack_40 = (undefined8 *)auStack_168;
    func_0x0036acc0(auStack_168,&UNK_001895b1,0x13);
    puStack_220 = puStack_40;
    puStack_218 = puStack_158;
    _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8nn220000INS_17basic_string_viewIcS2_EETnNS_9enable_ifIXaa35__can_be_converted_to_string_view_vIcS2_T_Entsr7is_sameIu14__remove_cvrefISA_ES5_EE5valueEiE4typeELi0EEERKSA_
              (&uStack_1f8,&puStack_220);
    if (puStack_40 != &uStack_140) {
      _ZdaPvSt11align_val_t(puStack_40,puStack_160);
    }
    puVar13 = puVar11;
    if ((char)uStack_1c0 == '\x01') {
code_r0x003cc22b:
      puVar13 = puVar11;
      if ((uStack_1d8 & 1) != 0) {
        _ZdaPvSt11align_val_t(uStack_1c8,uStack_1d8 & 0xfffffffffffffffe);
      }
    }
    func_0x0032e5a0(puStack_268,&uStack_1f8);
    if ((uStack_1f8 & 1) != 0) {
      _ZdaPvSt11align_val_t(uStack_1e8,uStack_1f8 & 0xfffffffffffffffe);
    }
    _ZN7android4base10LogMessageD2Ev(auStack_228);
    *uStack_250 = (uint)puStack_260;
    unaff_R13 = param_2;
  } while( true );
}


