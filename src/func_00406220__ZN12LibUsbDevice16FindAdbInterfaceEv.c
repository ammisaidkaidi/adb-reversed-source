// Function: _ZN12LibUsbDevice16FindAdbInterfaceEv
// Address: 00406220
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 _ZN12LibUsbDevice16FindAdbInterfaceEv(undefined8 *param_1)

{
  undefined8 *puVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  long lVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  uint *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined4 *puVar13;
  bool bVar14;
  undefined8 **ppuVar15;
  undefined8 **ppuVar16;
  undefined8 **ppuVar17;
  undefined8 **ppuVar18;
  undefined8 **unaff_R12;
  undefined8 **unaff_R13;
  ulong uVar19;
  long lVar20;
  undefined1 uVar21;
  ulong uVar22;
  long in_FS_OFFSET;
  bool bVar23;
  undefined8 *puStack_248;
  undefined8 *puStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined1 auStack_218 [8];
  long lStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined4 uStack_1f8;
  undefined8 *puStack_1f0;
  undefined8 ***pppuStack_1e8;
  undefined8 uStack_1e0;
  undefined8 ***pppuStack_1d8;
  undefined8 uStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 ***pppuStack_1c0;
  undefined8 uStack_1b8;
  undefined8 *puStack_1a8;
  undefined8 ***pppuStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 **ppuStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  undefined8 ***pppuStack_158;
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
  uStack_208 = 0;
  uStack_200 = 0;
  uStack_1f8 = 0;
  _ZN12LibUsbDevice19GetDeviceDescriptorEv(&uStack_208,param_1);
  if (uStack_1f8._2_1_ == '\x01') {
    lStack_210 = 0;
    iVar7 = libusb_get_active_config_descriptor(*param_1,&lStack_210);
    puStack_248 = param_1;
    if (iVar7 == 0) {
      if (*(char *)(lStack_210 + 4) == '\0') {
        ppuVar16 = (undefined8 **)0x0;
        uVar21 = 0;
      }
      else {
        puVar1 = param_1 + 2;
        uVar19 = 0;
        ppuVar17 = (undefined8 **)0x0;
        unaff_R13 = (undefined8 **)0x0;
        ppuVar16 = (undefined8 **)0x0;
        do {
          if (*(int *)(*(long *)(lStack_210 + 0x10) + 8 + uVar19 * 0x10) != 0) {
            lVar5 = *(long *)(*(long *)(lStack_210 + 0x10) + uVar19 * 0x10);
            cVar6 = _Z16is_adb_interfaceiii
                              (*(undefined1 *)(lVar5 + 5),*(undefined1 *)(lVar5 + 6),
                               *(undefined1 *)(lVar5 + 7));
            bVar23 = ((byte)adb_trace_mask & 0x20) != 0;
            unaff_R12 = ppuVar17;
            if (cVar6 == '\0') {
              if (((int)adb_trace_severity._20_4_ < 2 && bVar23) &&
                 (cVar6 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0), cVar6 != '\0')) {
                puVar13 = (undefined4 *)func_0x0099bce0();
                uVar8 = *puVar13;
                _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                          (&puStack_168,&UNK_00159712,0xe6,1,0,0xffffffff);
                uVar10 = _ZN7android4base10LogMessage6streamEv(&puStack_168);
                uVar10 = func_0x0032eb30(uVar10,&UNK_0017d750,0x1e);
                uVar10 = func_0x0032e5a0(uVar10,puVar1);
                uVar10 = func_0x0032eb30(uVar10,&UNK_001696c3,0xc);
                uVar10 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar10,uVar19);
                func_0x0032eb30(uVar10,&UNK_001692c7,1);
                _ZN7android4base10LogMessageD2Ev(&puStack_168);
                goto code_r0x004071a5;
              }
            }
            else {
              if (((int)adb_trace_severity._20_4_ < 2 && bVar23) &&
                 (cVar6 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0), cVar6 != '\0')) {
                puVar13 = (undefined4 *)func_0x0099bce0();
                uVar8 = *puVar13;
                _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                          (&puStack_168,&UNK_00159712,0xeb,1,0,0xffffffff);
                uVar10 = _ZN7android4base10LogMessage6streamEv(&puStack_168);
                uVar10 = func_0x0032eb30(uVar10,&UNK_00184b85,0x21);
                uVar10 = func_0x0032e5a0(uVar10,puVar1);
                uVar10 = func_0x0032eb30(uVar10,&UNK_001696c3,0xc);
                uVar10 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar10,uVar19);
                func_0x0032eb30(uVar10,&UNK_001692c7,1);
                _ZN7android4base10LogMessageD2Ev(&puStack_168);
                *puVar13 = uVar8;
              }
              if (*(char *)(lVar5 + 4) == '\0') {
                bVar23 = false;
                bVar14 = false;
              }
              else {
                lVar20 = 4;
                uVar22 = 0;
                bVar23 = false;
                bVar14 = false;
                ppuVar18 = ppuVar17;
                do {
                  unaff_R12 = *(undefined8 ***)(lVar5 + 0x10);
                  bVar2 = *(byte *)((long)unaff_R12 + lVar20 + -2);
                  bVar3 = *(byte *)((long)unaff_R12 + lVar20 + -1);
                  if (((((byte)adb_trace_mask & 0x20) != 0) && ((int)adb_trace_severity._20_4_ < 2))
                     && (cVar6 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0),
                        cVar6 != '\0')) {
                    puVar13 = (undefined4 *)func_0x0099bce0();
                    uVar8 = *puVar13;
                    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                              (auStack_218,&UNK_00159712,0xf4,1,0,0xffffffff);
                    uVar10 = _ZN7android4base10LogMessage6streamEv(auStack_218);
                    uVar10 = func_0x0032eb30(uVar10,&UNK_00186779,0x12);
                    uVar10 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar10,uVar22);
                    uVar10 = func_0x0032eb30(uVar10,&UNK_0018ae9d,7);
                    uStack_178 = 6;
                    uStack_180 = 0;
                    uStack_198 = 0;
                    uStack_190 = 0;
                    puStack_1a8 = (undefined8 *)0x0;
                    pppuStack_1a0 = (undefined8 ***)0x0;
                    uStack_1e0 = 1;
                    pppuStack_1d8 = &ppuStack_188;
                    uStack_1d0 = 6;
                    ppuStack_188 = (undefined8 **)(ulong)bVar2;
                    func_0x003d0680(&puStack_1a8,&UNK_00167c3b,7);
                    if ((char)uStack_190 == '\x01') {
                      uStack_228 = uStack_198;
                      puStack_238 = puStack_1a8;
                      uStack_230 = pppuStack_1a0;
                      puStack_1a8 = (undefined8 *)0x0;
                      pppuStack_1a0 = (undefined8 ***)0x0;
                      uStack_198 = 0;
code_r0x00406a6f:
                      if (((ulong)puStack_1a8 & 1) != 0) {
                        _ZdaPvSt11align_val_t(uStack_198,(ulong)puStack_1a8 & 0xfffffffffffffffe);
                      }
                    }
                    else {
                      puStack_168 = &uStack_140;
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
                      uStack_160 = 0x100;
                      pppuStack_158 = (undefined8 ***)0x0;
                      puStack_150 = &UNK_00358010;
                      uStack_148 = 0;
                      puStack_1c8 = (undefined8 *)0x1;
                      pppuStack_1c0 = &ppuStack_188;
                      uStack_1b8 = 6;
                      puStack_40 = puStack_168;
                      func_0x0036acc0(&puStack_168,&UNK_00167c3b,7);
                      puStack_1c8 = puStack_40;
                      pppuStack_1c0 = pppuStack_158;
                      _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8nn220000INS_17basic_string_viewIcS2_EETnNS_9enable_ifIXaa35__can_be_converted_to_string_view_vIcS2_T_Entsr7is_sameIu14__remove_cvrefISA_ES5_EE5valueEiE4typeELi0EEERKSA_
                                (&puStack_238,&puStack_1c8);
                      if (puStack_40 != &uStack_140) {
                        _ZdaPvSt11align_val_t(puStack_40,uStack_160);
                      }
                      if ((char)uStack_190 == '\x01') goto code_r0x00406a6f;
                    }
                    uVar10 = func_0x0032e5a0(uVar10,&puStack_238);
                    uVar10 = func_0x0032eb30(uVar10,&UNK_001645b8,7);
                    uStack_178 = 6;
                    ppuStack_188 = (undefined8 **)(ulong)bVar3;
                    uStack_180 = 0;
                    uStack_198 = 0;
                    uStack_190 = 0;
                    puStack_1a8 = (undefined8 *)0x0;
                    pppuStack_1a0 = (undefined8 ***)0x0;
                    uStack_1e0 = 1;
                    pppuStack_1d8 = &ppuStack_188;
                    uStack_1d0 = 6;
                    func_0x003d0680(&puStack_1a8,&UNK_00167c3b,7);
                    if ((char)uStack_190 == '\x01') {
                      uStack_1b8 = uStack_198;
                      puStack_1c8 = puStack_1a8;
                      pppuStack_1c0 = pppuStack_1a0;
                      puStack_1a8 = (undefined8 *)0x0;
                      pppuStack_1a0 = (undefined8 ***)0x0;
                      uStack_198 = 0;
code_r0x00406cb9:
                      if (((ulong)puStack_1a8 & 1) != 0) {
                        _ZdaPvSt11align_val_t(uStack_198,(ulong)puStack_1a8 & 0xfffffffffffffffe);
                      }
                    }
                    else {
                      puStack_168 = &uStack_140;
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
                      uStack_160 = 0x100;
                      pppuStack_158 = (undefined8 ***)0x0;
                      puStack_150 = &UNK_00358010;
                      uStack_148 = 0;
                      puStack_1c8 = (undefined8 *)0x1;
                      pppuStack_1c0 = &ppuStack_188;
                      uStack_1b8 = 6;
                      puStack_40 = puStack_168;
                      func_0x0036acc0(&puStack_168,&UNK_00167c3b,7);
                      puStack_1f0 = puStack_40;
                      pppuStack_1e8 = pppuStack_158;
                      _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8nn220000INS_17basic_string_viewIcS2_EETnNS_9enable_ifIXaa35__can_be_converted_to_string_view_vIcS2_T_Entsr7is_sameIu14__remove_cvrefISA_ES5_EE5valueEiE4typeELi0EEERKSA_
                                (&puStack_1c8,&puStack_1f0);
                      if (puStack_40 != &uStack_140) {
                        _ZdaPvSt11align_val_t(puStack_40,uStack_160);
                      }
                      if ((char)uStack_190 == '\x01') goto code_r0x00406cb9;
                    }
                    func_0x0032e5a0(uVar10,&puStack_1c8);
                    if (((ulong)puStack_1c8 & 1) != 0) {
                      _ZdaPvSt11align_val_t(uStack_1b8,(ulong)puStack_1c8 & 0xfffffffffffffffe);
                    }
                    if (((ulong)puStack_238 & 1) != 0) {
                      _ZdaPvSt11align_val_t(uStack_228,(ulong)puStack_238 & 0xfffffffffffffffe);
                    }
                    _ZN7android4base10LogMessageD2Ev(auStack_218);
                    *puVar13 = uVar8;
                  }
                  ppuVar17 = ppuVar18;
                  if ((bVar3 & 3) == 2) {
                    if ((char)bVar2 < '\0' || bVar23) {
                      if ((char)bVar2 < '\0' && !bVar14) {
                        bVar14 = true;
                        unaff_R13 = (undefined8 **)(ulong)bVar2;
                      }
                    }
                    else {
                      *(uint *)((long)param_1 + 0x44) = (uint)*(ushort *)((long)unaff_R12 + lVar20);
                      if (((((byte)adb_trace_mask & 0x20) != 0) &&
                          ((int)adb_trace_severity._20_4_ < 2)) &&
                         (cVar6 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0),
                         cVar6 != '\0')) {
                        puVar13 = (undefined4 *)func_0x0099bce0();
                        uVar8 = *puVar13;
                        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                                  (&puStack_1a8,&UNK_00159712,0x101,1,0,0xffffffff);
                        uVar10 = _ZN7android4base10LogMessage6streamEv(&puStack_1a8);
                        uVar10 = func_0x0032eb30(uVar10,&UNK_0015b231,7);
                        if ((*(byte *)(param_1 + 5) & 1) == 0) {
                          pppuStack_158 = (undefined8 ***)param_1[7];
                          puStack_168 = (undefined8 *)param_1[5];
                          uStack_160 = param_1[6];
                        }
                        else {
                          func_0x00330340(&puStack_168,param_1[7],param_1[6]);
                        }
                        uVar10 = func_0x0032e5a0(uVar10,&puStack_168);
                        uVar10 = func_0x0032eb30(uVar10,&UNK_001835e9,0x15);
                        _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi
                                  (uVar10,*(undefined4 *)((long)param_1 + 0x44));
                        if (((ulong)puStack_168 & 1) != 0) {
                          _ZdaPvSt11align_val_t
                                    (pppuStack_158,(ulong)puStack_168 & 0xfffffffffffffffe);
                        }
                        _ZN7android4base10LogMessageD2Ev(&puStack_1a8);
                        *puVar13 = uVar8;
                      }
                      *(int *)(param_1 + 8) = *(int *)((long)param_1 + 0x44) + -1;
                      bVar23 = true;
                      ppuVar16 = (undefined8 **)(ulong)bVar2;
                    }
                    ppuVar15 = (undefined8 **)(ulong)*(ushort *)((long)unaff_R12 + lVar20);
                    if (ppuVar15 == (undefined8 **)0x0) {
                      unaff_R12 = &puStack_168;
                      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                                (unaff_R12,&UNK_00159712,0x10b,6,0,0xffffffff);
                      uVar10 = _ZN7android4base10LogMessage6streamEv(unaff_R12);
                      uVar10 = func_0x0032eb30(uVar10,&UNK_0017a25f,0x27);
                      func_0x0032eb30(uVar10,&UNK_0015ae05,1);
                      _ZN7android4base10LogMessageD2Ev(unaff_R12);
                    }
                    ppuVar17 = ppuVar15;
                    if ((ppuVar18 != (undefined8 **)0x0) &&
                       (ppuVar17 = ppuVar18, ppuVar18 != ppuVar15)) {
                      unaff_R12 = &puStack_168;
                      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                                (unaff_R12,&UNK_00159712,0x10f,6,0,0xffffffff);
                      uVar10 = _ZN7android4base10LogMessage6streamEv(unaff_R12);
                      uVar10 = func_0x0032eb30(uVar10,&UNK_00178ba9,0x31);
                      func_0x0032eb30(uVar10,&UNK_0015ae05,1);
                      _ZN7android4base10LogMessageD2Ev(unaff_R12);
                    }
                  }
                  uVar22 = uVar22 + 1;
                  lVar20 = lVar20 + 0x20;
                  ppuVar18 = ppuVar17;
                } while (uVar22 < *(byte *)(lVar5 + 4));
                if ((bVar14 & bVar23) != 0) {
                  libusb_free_config_descriptor(lStack_210);
                  *(int *)(param_1 + 9) = (int)uVar19;
                  *(char *)((long)param_1 + 0x4c) = (char)ppuVar16;
                  *(char *)((long)param_1 + 0x4d) = (char)unaff_R13;
                  uVar10 = 1;
                  unaff_R12 = ppuVar16;
                  if ((((byte)adb_trace_mask & 0x20) != 0) && ((int)adb_trace_severity._20_4_ < 2))
                  {
                    cVar6 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
                    if (cVar6 != '\0') goto code_r0x0040730c;
                    goto code_r0x00407300;
                  }
                  goto code_r0x00406364;
                }
              }
              if (((((byte)adb_trace_mask & 0x20) != 0) && ((int)adb_trace_severity._20_4_ < 2)) &&
                 (cVar6 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0),
                 unaff_R12 = ppuVar17, cVar6 != '\0')) {
                puVar13 = (undefined4 *)func_0x0099bce0();
                uVar8 = *puVar13;
                _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                          (&puStack_168,&UNK_00159712,0x117,1,0,0xffffffff);
                uVar10 = _ZN7android4base10LogMessage6streamEv(&puStack_168);
                uVar10 = func_0x0032eb30(uVar10,&UNK_0016617a,0x25);
                uVar10 = func_0x0032e5a0(uVar10,puVar1);
                uVar10 = func_0x0032eb30(uVar10,&UNK_00162f63,0xb);
                uVar10 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar10,uVar19);
                uVar10 = func_0x0032eb30(uVar10,&UNK_0017bbe8,0x1a);
                uVar10 = func_0x0032eb30(uVar10,&UNK_0018678c,0xc);
                uVar10 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEb(uVar10,bVar14);
                uVar10 = func_0x0032eb30(uVar10,&UNK_00181c7c,0xe);
                uVar10 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEb(uVar10,bVar23);
                func_0x0032eb30(uVar10,&UNK_001692c7,1);
                _ZN7android4base10LogMessageD2Ev(&puStack_168);
code_r0x004071a5:
                *puVar13 = uVar8;
                unaff_R12 = ppuVar17;
              }
            }
          }
          uVar21 = SUB81(unaff_R13,0);
          uVar19 = uVar19 + 1;
        } while (uVar19 < *(byte *)(lStack_210 + 4));
      }
      libusb_free_config_descriptor();
      uVar10 = 0;
      unaff_R13 = ppuVar16;
      if ((((byte)adb_trace_mask & 0x20) != 0) && ((int)adb_trace_severity._20_4_ < 2)) {
        cVar6 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
        uVar10 = 0;
        if (cVar6 != '\0') {
          puVar9 = (uint *)func_0x0099bce0();
          uVar4 = *puVar9;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (&puStack_168,&UNK_00159712,0x120,1,0,0xffffffff);
          uVar10 = _ZN7android4base10LogMessage6streamEv(&puStack_168);
          uVar10 = func_0x0032eb30(uVar10,&UNK_0018971d,0x2a);
          puStack_1a8._0_1_ = (char)ppuVar16;
          uVar10 = func_0x0032eb30(uVar10,&puStack_1a8,1);
          uVar10 = func_0x0032eb30(uVar10,&UNK_0017d76f,0xd);
          puStack_1a8 = (undefined8 *)CONCAT71(puStack_1a8._1_7_,uVar21);
          func_0x0032eb30(uVar10,&puStack_1a8,1);
          _ZN7android4base10LogMessageD2Ev(&puStack_168);
          uVar10 = 0;
          *puVar9 = uVar4;
          unaff_R12 = (undefined8 **)(ulong)uVar4;
        }
      }
    }
    else {
      cVar6 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(3,0);
      uVar10 = 0;
      if (cVar6 != '\0') {
        puVar9 = (uint *)func_0x0099bce0();
        uVar4 = *puVar9;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (&puStack_168,&UNK_00159712,0xd1,3,0,0xffffffff);
        uVar10 = _ZN7android4base10LogMessage6streamEv(&puStack_168);
        uVar10 = func_0x0032eb30(uVar10,&UNK_0017568a,0x35);
        uVar10 = func_0x0032e5a0(uVar10,param_1 + 2);
        uVar10 = func_0x0032eb30(uVar10,&UNK_00186281,2);
        uVar11 = libusb_error_name(iVar7);
        uVar12 = func_0x0099bcf0(uVar11);
        func_0x0032eb30(uVar10,uVar11,uVar12);
        _ZN7android4base10LogMessageD2Ev(&puStack_168);
        uVar10 = 0;
        *puVar9 = uVar4;
        unaff_R12 = &puStack_168;
        unaff_R13 = (undefined8 **)(ulong)uVar4;
      }
    }
  }
  else {
    uVar10 = 0;
  }
code_r0x00406364:
  do {
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
      return uVar10;
    }
    func_0x0099bd00();
    ppuVar16 = unaff_R12;
code_r0x0040730c:
    puVar13 = (undefined4 *)func_0x0099bce0();
    uVar8 = *puVar13;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (auStack_218,&UNK_00159712,0x129,1,0,0xffffffff);
    uVar10 = _ZN7android4base10LogMessage6streamEv(auStack_218);
    uVar10 = func_0x0032eb30(uVar10,&UNK_00187f10,0x14);
    uVar10 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi
                       (uVar10,*(undefined4 *)(puStack_248 + 9));
    uVar10 = func_0x0032eb30(uVar10,&UNK_0016ed72,9);
    uStack_178 = 6;
    ppuStack_188 = (undefined8 **)((ulong)unaff_R13 & 0xff);
    uStack_180 = 0;
    uStack_198 = 0;
    uStack_190 = 0;
    puStack_1a8 = (undefined8 *)0x0;
    pppuStack_1a0 = (undefined8 ***)0x0;
    uStack_1e0 = 1;
    pppuStack_1d8 = &ppuStack_188;
    uStack_1d0 = 6;
    func_0x003d0680(&puStack_1a8,&UNK_00167c3b,7);
    if ((char)uStack_190 == '\x01') {
      uStack_228 = uStack_198;
      puStack_238 = puStack_1a8;
      uStack_230 = pppuStack_1a0;
      puStack_1a8 = (undefined8 *)0x0;
      pppuStack_1a0 = (undefined8 ***)0x0;
      uStack_198 = 0;
code_r0x0040758d:
      if (((ulong)puStack_1a8 & 1) != 0) {
        _ZdaPvSt11align_val_t(uStack_198,(ulong)puStack_1a8 & 0xfffffffffffffffe);
      }
    }
    else {
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
      uStack_160 = 0x100;
      pppuStack_158 = (undefined8 ***)0x0;
      puStack_150 = &UNK_00358010;
      uStack_148 = 0;
      puStack_1c8 = (undefined8 *)0x1;
      pppuStack_1c0 = &ppuStack_188;
      uStack_1b8 = 6;
      puStack_168 = &uStack_140;
      puStack_40 = &uStack_140;
      func_0x0036acc0(&puStack_168,&UNK_00167c3b,7);
      puStack_1c8 = puStack_40;
      pppuStack_1c0 = pppuStack_158;
      _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8nn220000INS_17basic_string_viewIcS2_EETnNS_9enable_ifIXaa35__can_be_converted_to_string_view_vIcS2_T_Entsr7is_sameIu14__remove_cvrefISA_ES5_EE5valueEiE4typeELi0EEERKSA_
                (&puStack_238,&puStack_1c8);
      if (puStack_40 != &uStack_140) {
        _ZdaPvSt11align_val_t(puStack_40,uStack_160);
      }
      if ((char)uStack_190 == '\x01') goto code_r0x0040758d;
    }
    uVar10 = func_0x0032e5a0(uVar10,&puStack_238);
    uVar10 = func_0x0032eb30(uVar10,&UNK_00186799,10);
    uStack_178 = 6;
    ppuStack_188 = (undefined8 **)((ulong)ppuVar16 & 0xff);
    uStack_180 = 0;
    uStack_198 = 0;
    uStack_190 = 0;
    puStack_1a8 = (undefined8 *)0x0;
    pppuStack_1a0 = (undefined8 ***)0x0;
    uStack_1e0 = 1;
    pppuStack_1d8 = &ppuStack_188;
    uStack_1d0 = 6;
    func_0x003d0680(&puStack_1a8,&UNK_00167c3b,7);
    if ((char)uStack_190 == '\x01') {
      uStack_1b8 = uStack_198;
      puStack_1c8 = puStack_1a8;
      pppuStack_1c0 = pppuStack_1a0;
      puStack_1a8 = (undefined8 *)0x0;
      pppuStack_1a0 = (undefined8 ***)0x0;
      uStack_198 = 0;
code_r0x004077d6:
      if (((ulong)puStack_1a8 & 1) != 0) {
        _ZdaPvSt11align_val_t(uStack_198,(ulong)puStack_1a8 & 0xfffffffffffffffe);
      }
    }
    else {
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
      uStack_160 = 0x100;
      pppuStack_158 = (undefined8 ***)0x0;
      puStack_150 = &UNK_00358010;
      uStack_148 = 0;
      puStack_1c8 = (undefined8 *)0x1;
      pppuStack_1c0 = &ppuStack_188;
      uStack_1b8 = 6;
      puStack_168 = &uStack_140;
      puStack_40 = &uStack_140;
      func_0x0036acc0(&puStack_168,&UNK_00167c3b,7);
      puStack_1f0 = puStack_40;
      pppuStack_1e8 = pppuStack_158;
      _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8nn220000INS_17basic_string_viewIcS2_EETnNS_9enable_ifIXaa35__can_be_converted_to_string_view_vIcS2_T_Entsr7is_sameIu14__remove_cvrefISA_ES5_EE5valueEiE4typeELi0EEERKSA_
                (&puStack_1c8,&puStack_1f0);
      if (puStack_40 != &uStack_140) {
        _ZdaPvSt11align_val_t(puStack_40,uStack_160);
      }
      if ((char)uStack_190 == '\x01') goto code_r0x004077d6;
    }
    func_0x0032e5a0(uVar10,&puStack_1c8);
    if (((ulong)puStack_1c8 & 1) != 0) {
      _ZdaPvSt11align_val_t(uStack_1b8,(ulong)puStack_1c8 & 0xfffffffffffffffe);
    }
    if (((ulong)puStack_238 & 1) != 0) {
      _ZdaPvSt11align_val_t(uStack_228,(ulong)puStack_238 & 0xfffffffffffffffe);
    }
    _ZN7android4base10LogMessageD2Ev(auStack_218);
    *puVar13 = uVar8;
code_r0x00407300:
    uVar10 = 1;
    unaff_R12 = ppuVar16;
  } while( true );
}


