// Function: _ZN12LibUsbDevice14ClearEndpointsEv
// Address: 00407b10
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long _ZN12LibUsbDevice14ClearEndpointsEv(byte **param_1)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  byte *pbVar8;
  long lVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ushort uVar13;
  ulong uVar14;
  uint *unaff_RBX;
  undefined *puVar15;
  byte **ppbVar16;
  ushort *puVar17;
  byte *pbVar18;
  undefined *unaff_R12;
  byte **unaff_R13;
  byte **unaff_R14;
  byte **unaff_R15;
  long in_FS_OFFSET;
  bool bVar19;
  byte bStack_128;
  undefined7 uStack_127;
  undefined8 uStack_118;
  undefined1 auStack_110 [8];
  uint uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 uStack_f8;
  long lStack_e8;
  byte **ppbStack_e0;
  undefined *puStack_d8;
  byte *pbStack_d0;
  byte **ppbStack_c8;
  byte **ppbStack_c0;
  undefined *puStack_b8;
  byte *pbStack_b0;
  byte *pbStack_a8;
  long lStack_a0;
  uint *puStack_98;
  undefined *puStack_90;
  byte *pbStack_88;
  byte **ppbStack_80;
  byte **ppbStack_78;
  undefined *puStack_70;
  undefined4 uStack_68;
  uint uStack_64;
  undefined4 *puStack_60;
  byte *apbStack_58 [2];
  undefined8 uStack_48;
  byte *pbStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  ppbVar16 = param_1;
  if (param_1[1] == (byte *)0x0) {
    if ((((byte)adb_trace_mask & 0x20) == 0) || (1 < (int)adb_trace_severity._20_4_))
    goto code_r0x00407d53;
    ppbVar16 = (byte **)0x1;
    puStack_70 = &UNK_00407cec;
    cVar4 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
    if (cVar4 == '\0') goto code_r0x00407d53;
    puStack_70 = &UNK_00407cf5;
    unaff_RBX = (uint *)func_0x0099bce0();
    uVar5 = *unaff_RBX;
    puStack_70 = &UNK_00407d21;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (apbStack_58,&UNK_00159712,0x149,1,0,0xffffffff);
    puStack_70 = &UNK_00407d29;
    uVar7 = _ZN7android4base10LogMessage6streamEv(apbStack_58);
    puVar15 = &UNK_0018aea5;
    uVar11 = 0x34;
  }
  else {
    if (*(char *)((long)param_1 + 0x4e) != '\0') {
      bVar1 = *(byte *)((long)param_1 + 0x4d);
      unaff_R12 = (undefined *)(ulong)bVar1;
      bVar2 = *(byte *)((long)param_1 + 0x4c);
      unaff_RBX = (uint *)(ulong)bVar2;
      unaff_R14 = param_1 + 5;
      puStack_70 = &UNK_00407b61;
      uVar5 = libusb_clear_halt(param_1[1],unaff_R12);
      if (((uVar5 != 0) && (((byte)adb_trace_mask & 0x20) != 0)) &&
         ((int)adb_trace_severity._20_4_ < 2)) {
        unaff_R13 = (byte **)(ulong)uVar5;
        puStack_70 = &UNK_00407df1;
        cVar4 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
        if (cVar4 != '\0') {
          puStack_70 = &UNK_00407e02;
          uStack_64 = uVar5;
          puStack_60 = (undefined4 *)func_0x0099bce0();
          uStack_68 = *puStack_60;
          puStack_70 = &UNK_00407e31;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (&pbStack_40,&UNK_00159712,0x155,1,0,0xffffffff);
          puStack_70 = &UNK_00407e39;
          uVar7 = _ZN7android4base10LogMessage6streamEv(&pbStack_40);
          puStack_70 = &UNK_00407e4d;
          uVar7 = func_0x0032eb30(uVar7,&UNK_0017bc03,0x1f);
          puStack_70 = &UNK_00407e58;
          uVar7 = func_0x0032e5a0(uVar7,unaff_R14);
          puStack_70 = &UNK_00407e6c;
          uVar7 = func_0x0032eb30(uVar7,&UNK_00181c8b,10);
          puStack_70 = &UNK_00407e84;
          _ZN7android4base12StringPrintfEPKcz(apbStack_58,&UNK_0017d77d,bVar1);
          puStack_70 = &UNK_00407e90;
          uVar7 = func_0x0032e5a0(uVar7,apbStack_58);
          puStack_70 = &UNK_00407ea4;
          unaff_R13 = (byte **)func_0x0032eb30(uVar7,&UNK_00186281,2);
          puStack_70 = &UNK_00407eaf;
          unaff_R12 = (undefined *)libusb_error_name(uStack_64);
          puStack_70 = &UNK_00407eba;
          uVar7 = func_0x0099bcf0(unaff_R12);
          puStack_70 = &UNK_00407ec8;
          func_0x0032eb30(unaff_R13,unaff_R12,uVar7);
          if (((byte)apbStack_58[0] & 1) != 0) {
            puStack_70 = &UNK_00407edf;
            _ZdaPvSt11align_val_t
                      (uStack_48,
                       CONCAT71(apbStack_58[0]._1_7_,(byte)apbStack_58[0]) & 0xfffffffffffffffe);
          }
          puStack_70 = &UNK_00407ee8;
          _ZN7android4base10LogMessageD2Ev(&pbStack_40);
          *puStack_60 = uStack_68;
        }
      }
      ppbVar16 = (byte **)param_1[1];
      puStack_70 = &UNK_00407b8d;
      uVar5 = libusb_clear_halt(ppbVar16,bVar2);
      unaff_R15 = param_1;
      if (((uVar5 != 0) && (((byte)adb_trace_mask & 0x20) != 0)) &&
         ((int)adb_trace_severity._20_4_ < 2)) {
        ppbVar16 = (byte **)0x1;
        unaff_R12 = (undefined *)(ulong)uVar5;
        puStack_70 = &UNK_00407bc5;
        cVar4 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
        if (cVar4 != '\0') {
          puStack_70 = &UNK_00407bd2;
          unaff_R15 = (byte **)func_0x0099bce0();
          puStack_60 = (undefined4 *)CONCAT44(puStack_60._4_4_,*(undefined4 *)unaff_R15);
          puStack_70 = &UNK_00407c00;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (&pbStack_40,&UNK_00159712,0x155,1,0,0xffffffff);
          puStack_70 = &UNK_00407c08;
          uVar7 = _ZN7android4base10LogMessage6streamEv(&pbStack_40);
          puStack_70 = &UNK_00407c1c;
          uVar7 = func_0x0032eb30(uVar7,&UNK_0017bc03,0x1f);
          puStack_70 = &UNK_00407c27;
          uVar7 = func_0x0032e5a0(uVar7,unaff_R14);
          puStack_70 = &UNK_00407c3b;
          uVar7 = func_0x0032eb30(uVar7,&UNK_00181c8b,10);
          unaff_R13 = apbStack_58;
          puStack_70 = &UNK_00407c55;
          _ZN7android4base12StringPrintfEPKcz(unaff_R13,&UNK_0017d77d,bVar2);
          puStack_70 = &UNK_00407c60;
          uVar7 = func_0x0032e5a0(uVar7,unaff_R13);
          puStack_70 = &UNK_00407c74;
          unaff_RBX = (uint *)func_0x0032eb30(uVar7,&UNK_00186281,2);
          puStack_70 = &UNK_00407c7f;
          unaff_R14 = (byte **)libusb_error_name(unaff_R12);
          puStack_70 = &UNK_00407c8a;
          uVar7 = func_0x0099bcf0(unaff_R14);
          puStack_70 = &UNK_00407c98;
          func_0x0032eb30(unaff_RBX,unaff_R14,uVar7);
          if (((byte)apbStack_58[0] & 1) != 0) {
            puStack_70 = &UNK_00407caf;
            _ZdaPvSt11align_val_t
                      (uStack_48,
                       CONCAT71(apbStack_58[0]._1_7_,(byte)apbStack_58[0]) & 0xfffffffffffffffe);
          }
          ppbVar16 = &pbStack_40;
          puStack_70 = &UNK_00407cb8;
          _ZN7android4base10LogMessageD2Ev();
          *(undefined4 *)unaff_R15 = puStack_60._0_4_;
        }
      }
      goto code_r0x00407d53;
    }
    if ((((byte)adb_trace_mask & 0x20) == 0) || (1 < (int)adb_trace_severity._20_4_))
    goto code_r0x00407d53;
    ppbVar16 = (byte **)0x1;
    puStack_70 = &UNK_00407d81;
    cVar4 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
    if (cVar4 == '\0') goto code_r0x00407d53;
    puStack_70 = &UNK_00407d8a;
    unaff_RBX = (uint *)func_0x0099bce0();
    uVar5 = *unaff_RBX;
    puStack_70 = &UNK_00407db6;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (apbStack_58,&UNK_00159712,0x14e,1,0,0xffffffff);
    puStack_70 = &UNK_00407dbe;
    uVar7 = _ZN7android4base10LogMessage6streamEv(apbStack_58);
    puVar15 = &UNK_0016ed7c;
    uVar11 = 0x38;
  }
  unaff_R15 = (byte **)(ulong)uVar5;
  unaff_R14 = apbStack_58;
  puStack_70 = &UNK_00407dd2;
  func_0x0032eb30(uVar7,puVar15,uVar11);
  puStack_70 = &UNK_00407dda;
  ppbVar16 = unaff_R14;
  _ZN7android4base10LogMessageD2Ev();
  *unaff_RBX = uVar5;
code_r0x00407d53:
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return *(long *)(in_FS_OFFSET + 0x28);
  }
  puStack_70 = &UNK_00407efb;
  func_0x0099bd00();
  lStack_a0 = *(long *)(in_FS_OFFSET + 0x28);
  puStack_b8 = &UNK_00407f29;
  puStack_98 = unaff_RBX;
  puStack_90 = unaff_R12;
  pbStack_88 = (byte *)unaff_R13;
  ppbStack_80 = unaff_R14;
  ppbStack_78 = unaff_R15;
  puStack_70 = &stack0xfffffffffffffff8;
  iVar6 = libusb_get_device_speed(*ppbVar16);
  if (iVar6 - 1U < 6) {
    pbVar8 = *(byte **)(&UNK_001fe8f0 + (ulong)(iVar6 - 1U) * 8);
  }
  else {
    pbVar8 = (byte *)0x0;
  }
  ppbVar16[10] = pbVar8;
  pbStack_a8 = (byte *)0x0;
  pbVar8 = ppbVar16[1];
  puStack_b8 = &UNK_00407f5a;
  iVar6 = libusb_get_bos_descriptor(pbVar8,&pbStack_a8);
  if (iVar6 == 0) {
    if (pbStack_a8[4] != 0) {
      unaff_R15 = (byte **)0x0;
      unaff_R14 = &pbStack_b0;
      unaff_R12 = &UNK_001fe730;
      unaff_R13 = (byte **)&UNK_001fe920;
      do {
        if (*(char *)(*(long *)(pbStack_a8 + (long)unaff_R15 * 8 + 8) + 2) == '\n') {
          pbStack_b0 = (byte *)0x0;
          puStack_b8 = &UNK_00407fa7;
          iVar6 = libusb_get_ssplus_usb_device_capability_descriptor
                            (0,*(undefined8 *)(pbStack_a8 + (long)unaff_R15 * 8 + 8),unaff_R14);
          if (iVar6 == 0) {
            bVar1 = *pbStack_b0;
            if (bVar1 == 0) {
              pbVar8 = (byte *)0x0;
            }
            else {
              if (bVar1 == 1) {
                uVar14 = 0;
                pbVar8 = (byte *)0x0;
              }
              else {
                puVar17 = (ushort *)(pbStack_b0 + 0x34);
                uVar14 = 0;
                pbVar8 = (byte *)0x0;
                do {
                  pbVar18 = (byte *)((ulong)puVar17[-0xc] *
                                    *(long *)(&UNK_001fe730 + (ulong)*(uint *)(puVar17 + -0x14) * 8)
                                    );
                  if ((byte *)((ulong)puVar17[-0xc] *
                              *(long *)(&UNK_001fe730 + (ulong)*(uint *)(puVar17 + -0x14) * 8)) <
                      pbVar8) {
                    pbVar18 = pbVar8;
                  }
                  pbVar8 = (byte *)((ulong)*puVar17 *
                                   *(long *)(&UNK_001fe730 + (ulong)*(uint *)(puVar17 + -8) * 8));
                  if ((byte *)((ulong)*puVar17 *
                              *(long *)(&UNK_001fe730 + (ulong)*(uint *)(puVar17 + -8) * 8)) <
                      pbVar18) {
                    pbVar8 = pbVar18;
                  }
                  uVar14 = uVar14 + 2;
                  puVar17 = puVar17 + 0x18;
                } while ((bVar1 & 0xfffffffe) != uVar14);
                if ((bVar1 & 1) == 0) goto code_r0x004080c8;
              }
              if (pbVar8 <= (byte *)((ulong)*(ushort *)(pbStack_b0 + uVar14 * 0x18 + 0x1c) *
                                    *(long *)(&UNK_001fe730 +
                                             (ulong)*(uint *)(pbStack_b0 + uVar14 * 0x18 + 0xc) * 8)
                                    )) {
                pbVar8 = (byte *)((ulong)*(ushort *)(pbStack_b0 + uVar14 * 0x18 + 0x1c) *
                                 *(long *)(&UNK_001fe730 +
                                          (ulong)*(uint *)(pbStack_b0 + uVar14 * 0x18 + 0xc) * 8));
              }
            }
code_r0x004080c8:
            if (pbVar8 < ppbVar16[0xb]) {
              pbVar8 = ppbVar16[0xb];
            }
            ppbVar16[0xb] = pbVar8;
            puStack_b8 = &UNK_004080dc;
            libusb_free_ssplus_usb_device_capability_descriptor();
          }
        }
        else if (*(char *)(*(long *)(pbStack_a8 + (long)unaff_R15 * 8 + 8) + 2) == '\x03') {
          pbStack_b0 = (byte *)0x0;
          puStack_b8 = &UNK_00407fe9;
          iVar6 = libusb_get_ss_usb_device_capability_descriptor
                            (0,*(undefined8 *)(pbStack_a8 + (long)unaff_R15 * 8 + 8),unaff_R14);
          if (iVar6 == 0) {
            uVar13 = *(ushort *)(pbStack_b0 + 4);
            pbVar8 = (byte *)(ulong)uVar13;
            if (uVar13 != 0) {
              if (uVar13 == 1) {
                pbVar8 = (byte *)0x1;
              }
              else {
                lVar9 = -1;
                do {
                  lVar9 = lVar9 + 1;
                  uVar13 = (ushort)pbVar8;
                  pbVar8 = (byte *)((ulong)pbVar8 >> 1);
                } while (3 < uVar13);
                if ((uint)lVar9 < 3) {
                  pbVar8 = *(byte **)(&UNK_001fe920 + lVar9 * 8);
                }
                else {
                  pbVar8 = (byte *)0x0;
                }
              }
            }
            if (pbVar8 < ppbVar16[0xb]) {
              pbVar8 = ppbVar16[0xb];
            }
            ppbVar16[0xb] = pbVar8;
            puStack_b8 = &UNK_004080f7;
            libusb_free_ss_usb_device_capability_descriptor();
          }
        }
        unaff_R15 = (byte **)((long)unaff_R15 + 1);
      } while (unaff_R15 < (byte **)(ulong)pbStack_a8[4]);
    }
    puStack_b8 = &UNK_00408101;
    pbVar8 = pbStack_a8;
    libusb_free_bos_descriptor();
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_a0) {
    return *(long *)(in_FS_OFFSET + 0x28);
  }
  puStack_b8 = &UNK_00408124;
  func_0x0099bd00();
  lStack_e8 = *(long *)(in_FS_OFFSET + 0x28);
  ppbStack_e0 = ppbVar16;
  puStack_d8 = unaff_R12;
  pbStack_d0 = (byte *)unaff_R13;
  ppbStack_c8 = unaff_R14;
  ppbStack_c0 = unaff_R15;
  puStack_b8 = (undefined *)&puStack_70;
  if ((((byte)adb_trace_mask & 0x20) != 0) &&
     (puStack_b8 = (undefined *)&puStack_70, (int)adb_trace_severity._20_4_ < 2)) {
    puStack_b8 = (undefined *)&puStack_70;
    cVar4 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
    if (cVar4 != '\0') {
      puVar10 = (undefined4 *)func_0x0099bce0();
      uVar3 = *puVar10;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&bStack_128,&UNK_00159712,0x1d2,1,0,0xffffffff);
      uVar7 = _ZN7android4base10LogMessage6streamEv(&bStack_128);
      uVar7 = func_0x0032eb30(uVar7,&UNK_00177259,0x13);
      if ((pbVar8[0x28] & 1) == 0) {
        uStack_f8 = *(undefined8 *)(pbVar8 + 0x38);
        uStack_108 = *(uint *)(pbVar8 + 0x28);
        uStack_104 = *(undefined4 *)(pbVar8 + 0x2c);
        uStack_100 = *(undefined4 *)(pbVar8 + 0x30);
        uStack_fc = *(undefined4 *)(pbVar8 + 0x34);
      }
      else {
        func_0x00330340(&uStack_108,*(undefined8 *)(pbVar8 + 0x38),*(undefined8 *)(pbVar8 + 0x30));
      }
      func_0x0032e5a0(uVar7,&uStack_108);
      if ((uStack_108 & 1) != 0) {
        _ZdaPvSt11align_val_t(uStack_f8,CONCAT44(uStack_104,uStack_108) & 0xfffffffffffffffe);
      }
      _ZN7android4base10LogMessageD2Ev(&bStack_128);
      *puVar10 = uVar3;
    }
  }
  if (pbVar8[0x4e] == 1) {
    lVar9 = 1;
    if ((((byte)adb_trace_mask & 0x20) != 0) && ((int)adb_trace_severity._20_4_ < 2)) {
      cVar4 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
      if (cVar4 != '\0') goto code_r0x00408457;
      lVar9 = 1;
    }
  }
  else {
    cVar4 = _ZN12LibUsbDevice16FindAdbInterfaceEv(pbVar8);
    if (cVar4 == '\0') {
      lVar9 = 0;
      if ((((byte)adb_trace_mask & 0x20) != 0) && ((int)adb_trace_severity._20_4_ < 2)) {
        cVar4 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
        lVar9 = 0;
        if (cVar4 != '\0') {
          puVar10 = (undefined4 *)func_0x0099bce0();
          uVar3 = *puVar10;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (&bStack_128,&UNK_00159712,0x1d9,1,0,0xffffffff);
          uVar7 = _ZN7android4base10LogMessage6streamEv(&bStack_128);
          uVar7 = func_0x0032eb30(uVar7,&UNK_0015e1c7,0x1d);
          if ((pbVar8[0x28] & 1) == 0) {
            uStack_f8 = *(undefined8 *)(pbVar8 + 0x38);
            uStack_108 = *(uint *)(pbVar8 + 0x28);
            uStack_104 = *(undefined4 *)(pbVar8 + 0x2c);
            uStack_100 = *(undefined4 *)(pbVar8 + 0x30);
            uStack_fc = *(undefined4 *)(pbVar8 + 0x34);
          }
          else {
            func_0x00330340(&uStack_108,*(undefined8 *)(pbVar8 + 0x38),
                            *(undefined8 *)(pbVar8 + 0x30));
          }
          func_0x0032e5a0(uVar7,&uStack_108);
          if ((uStack_108 & 1) != 0) {
            _ZdaPvSt11align_val_t(uStack_f8,CONCAT44(uStack_104,uStack_108) & 0xfffffffffffffffe);
          }
          _ZN7android4base10LogMessageD2Ev(&bStack_128);
          *puVar10 = uVar3;
          lVar9 = 0;
        }
      }
    }
    else {
      iVar6 = libusb_claim_interface(*(undefined8 *)(pbVar8 + 8),*(undefined4 *)(pbVar8 + 0x48));
      bVar19 = ((byte)adb_trace_mask & 0x20) != 0;
      if (iVar6 == 0) {
        if ((int)adb_trace_severity._20_4_ < 2 && bVar19) {
          cVar4 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
          if (cVar4 != '\0') {
            puVar10 = (undefined4 *)func_0x0099bce0();
            uVar3 = *puVar10;
            _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                      (auStack_110,&UNK_00159712,0x1e4,1,0,0xffffffff);
            uVar7 = _ZN7android4base10LogMessage6streamEv(auStack_110);
            uVar7 = func_0x0032eb30(uVar7,&UNK_0015fd03,0x16);
            if ((pbVar8[0x28] & 1) == 0) {
              uStack_f8 = *(undefined8 *)(pbVar8 + 0x38);
              uStack_108 = *(uint *)(pbVar8 + 0x28);
              uStack_104 = *(undefined4 *)(pbVar8 + 0x2c);
              uStack_100 = *(undefined4 *)(pbVar8 + 0x30);
              uStack_fc = *(undefined4 *)(pbVar8 + 0x34);
            }
            else {
              func_0x00330340(&uStack_108,*(undefined8 *)(pbVar8 + 0x38),
                              *(undefined8 *)(pbVar8 + 0x30));
            }
            uVar7 = func_0x0032e5a0(uVar7,&uStack_108);
            uVar7 = func_0x0032eb30(uVar7,&UNK_0015f9ff,2);
            _ZN7android4base12StringPrintfEPKcz(&bStack_128,&UNK_0015b239,pbVar8[0x4d],pbVar8[0x4c])
            ;
            func_0x0032e5a0(uVar7,&bStack_128);
            if ((bStack_128 & 1) != 0) {
              _ZdaPvSt11align_val_t(uStack_118,CONCAT71(uStack_127,bStack_128) & 0xfffffffffffffffe)
              ;
            }
            if ((uStack_108 & 1) != 0) {
              _ZdaPvSt11align_val_t(uStack_f8,CONCAT44(uStack_104,uStack_108) & 0xfffffffffffffffe);
            }
            _ZN7android4base10LogMessageD2Ev(auStack_110);
            *puVar10 = uVar3;
          }
        }
        lVar9 = 1;
        LOCK();
        pbVar8[0x4e] = 1;
        UNLOCK();
      }
      else if ((int)adb_trace_severity._20_4_ < 2 && bVar19) {
        cVar4 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
        lVar9 = 0;
        if (cVar4 != '\0') {
          puVar10 = (undefined4 *)func_0x0099bce0();
          uVar3 = *puVar10;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (&uStack_108,&UNK_00159712,0x1df,1,0,0xffffffff);
          uVar7 = _ZN7android4base10LogMessage6streamEv(&uStack_108);
          uVar7 = func_0x0032eb30(uVar7,&UNK_0015fcd9,0x29);
          if ((pbVar8[0x28] & 1) == 0) {
            pbVar8 = pbVar8 + 0x29;
          }
          else {
            pbVar8 = *(byte **)(pbVar8 + 0x38);
          }
          uVar11 = func_0x0099bcf0(pbVar8);
          uVar7 = func_0x0032eb30(uVar7,pbVar8,uVar11);
          uVar7 = func_0x0032eb30(uVar7,&UNK_00173d53,1);
          uVar11 = libusb_error_name(iVar6);
          uVar12 = func_0x0099bcf0(uVar11);
          func_0x0032eb30(uVar7,uVar11,uVar12);
          _ZN7android4base10LogMessageD2Ev(&uStack_108);
          *puVar10 = uVar3;
          lVar9 = 0;
        }
      }
      else {
        lVar9 = 0;
      }
    }
  }
  while (*(long *)(in_FS_OFFSET + 0x28) != lStack_e8) {
    func_0x0099bd00();
code_r0x00408457:
    puVar10 = (undefined4 *)func_0x0099bce0();
    uVar3 = *puVar10;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (&uStack_108,&UNK_00159712,0x1d4,1,0,0xffffffff);
    uVar7 = _ZN7android4base10LogMessage6streamEv(&uStack_108);
    func_0x0032eb30(uVar7,&UNK_001614b8,0x16);
    _ZN7android4base10LogMessageD2Ev(&uStack_108);
    *puVar10 = uVar3;
    lVar9 = 1;
  }
  return lVar9;
}


