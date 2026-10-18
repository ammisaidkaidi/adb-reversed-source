// Function: _ZN12LibUsbDevice14RetrieveSerialEv
// Address: 004078f0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _ZN12LibUsbDevice14RetrieveSerialEv(uint *param_1)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  byte **ppbVar8;
  byte **ppbVar9;
  byte *pbVar10;
  ulong uVar11;
  undefined4 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  ushort uVar16;
  undefined *puVar17;
  byte **ppbVar18;
  byte **ppbVar19;
  ushort *puVar20;
  byte *pbVar21;
  byte **unaff_R12;
  byte *unaff_R13;
  byte **unaff_R15;
  long in_FS_OFFSET;
  bool bVar22;
  byte bStack_190;
  undefined7 uStack_18f;
  undefined8 uStack_180;
  undefined1 auStack_178 [8];
  uint uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined8 uStack_160;
  long lStack_150;
  byte **ppbStack_148;
  byte **ppbStack_140;
  byte **ppbStack_138;
  byte **ppbStack_130;
  byte **ppbStack_128;
  undefined *puStack_120;
  byte *pbStack_118;
  byte *pbStack_110;
  ulong uStack_108;
  uint *puStack_100;
  byte **ppbStack_f8;
  byte **ppbStack_f0;
  byte **ppbStack_e8;
  byte **ppbStack_e0;
  undefined *puStack_d8;
  undefined4 uStack_d0;
  uint uStack_cc;
  undefined4 *puStack_c8;
  byte bStack_c0;
  undefined7 uStack_bf;
  undefined8 uStack_b0;
  byte *pbStack_a8;
  ulong uStack_a0;
  uint *puStack_98;
  byte **ppbStack_90;
  byte **ppbStack_88;
  byte **ppbStack_80;
  byte **ppbStack_78;
  undefined *puStack_70;
  uint uStack_64;
  byte *pbStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  puStack_70 = &UNK_0040792b;
  _ZN12LibUsbDevice19GetDeviceDescriptorEv(&uStack_58,param_1);
  ppbVar8 = (byte **)(param_1 + 10);
  puStack_70 = &UNK_0040793e;
  _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc(ppbVar8,0x200,0);
  ppbVar18 = *(byte ***)(param_1 + 2);
  if (((byte)param_1[10] & 1) == 0) {
    lVar15 = (long)param_1 + 0x29;
    uVar5 = (uint)(byte)((byte)param_1[10] >> 1);
  }
  else {
    lVar15 = *(long *)(param_1 + 0xe);
    uVar5 = param_1[0xc];
  }
  puStack_70 = &UNK_00407963;
  uVar5 = libusb_get_string_descriptor_ascii(ppbVar18,(undefined1)uStack_48,lVar15,uVar5);
  if (uVar5 == 0) {
    ppbVar8 = (byte **)0x0;
    ppbVar18 = (byte **)0x3;
    puStack_70 = &UNK_00407990;
    cVar4 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(3,0);
    if (cVar4 != '\0') {
      puStack_70 = &UNK_0040799d;
      unaff_R15 = (byte **)func_0x0099bce0();
      uVar5 = *(uint *)unaff_R15;
      unaff_R13 = (byte *)(ulong)uVar5;
      ppbVar8 = (byte **)0x0;
      unaff_R12 = &pbStack_60;
      puStack_70 = &UNK_004079cc;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (unaff_R12,&UNK_00159712,0x13b,3,0,0xffffffff);
      puStack_70 = &UNK_004079d4;
      uVar7 = _ZN7android4base10LogMessage6streamEv(unaff_R12);
      puStack_70 = &UNK_004079e8;
      uVar7 = func_0x0032eb30(uVar7,&UNK_0017ef08,0x25);
      param_1 = param_1 + 4;
      puStack_70 = &UNK_004079f7;
      func_0x0032e5a0(uVar7,param_1);
      puStack_70 = &UNK_004079ff;
      ppbVar18 = unaff_R12;
      _ZN7android4base10LogMessageD2Ev();
      *(uint *)unaff_R15 = uVar5;
    }
  }
  else if ((int)uVar5 < 0) {
    ppbVar8 = (byte **)0x0;
    if ((((byte)adb_trace_mask & 0x20) != 0) && ((int)adb_trace_severity._20_4_ < 2)) {
      ppbVar8 = (byte **)0x0;
      ppbVar18 = (byte **)0x1;
      unaff_R13 = (byte *)(ulong)uVar5;
      puStack_70 = &UNK_00407a57;
      cVar4 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
      if (cVar4 != '\0') {
        puStack_70 = &UNK_00407a60;
        unaff_R15 = (byte **)func_0x0099bce0();
        uStack_64 = *(uint *)unaff_R15;
        ppbVar8 = (byte **)0x0;
        unaff_R12 = &pbStack_60;
        puStack_70 = &UNK_00407a91;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (unaff_R12,&UNK_00159712,0x13e,1,0,0xffffffff);
        puStack_70 = &UNK_00407a99;
        uVar7 = _ZN7android4base10LogMessage6streamEv(unaff_R12);
        puStack_70 = &UNK_00407aad;
        uVar7 = func_0x0032eb30(uVar7,&UNK_00167c43,0x21);
        puStack_70 = &UNK_00407abc;
        uVar7 = func_0x0032e5a0(uVar7,param_1 + 4);
        puStack_70 = &UNK_00407ad0;
        param_1 = (uint *)func_0x0032eb30(uVar7,&UNK_0017ef2e,2);
        puStack_70 = &UNK_00407adb;
        unaff_R13 = (byte *)libusb_error_name(unaff_R13);
        puStack_70 = &UNK_00407ae6;
        uVar7 = func_0x0099bcf0(unaff_R13);
        puStack_70 = &UNK_00407af4;
        func_0x0032eb30(param_1,unaff_R13,uVar7);
        puStack_70 = &UNK_00407afc;
        ppbVar18 = unaff_R12;
        _ZN7android4base10LogMessageD2Ev();
        *(uint *)unaff_R15 = uStack_64;
      }
    }
  }
  else {
    puStack_70 = &UNK_00407979;
    ppbVar18 = ppbVar8;
    _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc(ppbVar8,uVar5,0);
    ppbVar8 = (byte **)CONCAT71((int7)((ulong)ppbVar8 >> 8),1);
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return (ulong)ppbVar8 & 0xffffffff;
  }
  puStack_70 = &UNK_00407b0c;
  func_0x0099bd00();
  uStack_a0 = *(ulong *)(in_FS_OFFSET + 0x28);
  ppbVar19 = ppbVar18;
  puStack_98 = param_1;
  ppbStack_90 = unaff_R12;
  ppbStack_88 = (byte **)unaff_R13;
  ppbStack_80 = ppbVar8;
  ppbStack_78 = unaff_R15;
  if (ppbVar18[1] == (byte *)0x0) {
    puStack_70 = &stack0xfffffffffffffff8;
    if ((((byte)adb_trace_mask & 0x20) == 0) ||
       (puStack_70 = &stack0xfffffffffffffff8, 1 < (int)adb_trace_severity._20_4_))
    goto code_r0x00407d53;
    ppbVar19 = (byte **)0x1;
    puStack_d8 = &UNK_00407cec;
    puStack_70 = &stack0xfffffffffffffff8;
    cVar4 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
    if (cVar4 == '\0') goto code_r0x00407d53;
    puStack_d8 = &UNK_00407cf5;
    param_1 = (uint *)func_0x0099bce0();
    uVar5 = *param_1;
    puStack_d8 = &UNK_00407d21;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (&bStack_c0,&UNK_00159712,0x149,1,0,0xffffffff);
    puStack_d8 = &UNK_00407d29;
    uVar7 = _ZN7android4base10LogMessage6streamEv(&bStack_c0);
    puVar17 = &UNK_0018aea5;
    uVar13 = 0x34;
  }
  else {
    if (*(char *)((long)ppbVar18 + 0x4e) != '\0') {
      bVar1 = *(byte *)((long)ppbVar18 + 0x4d);
      ppbVar9 = (byte **)(ulong)bVar1;
      bVar2 = *(byte *)((long)ppbVar18 + 0x4c);
      param_1 = (uint *)(ulong)bVar2;
      ppbVar8 = ppbVar18 + 5;
      puStack_d8 = &UNK_00407b61;
      puStack_70 = &stack0xfffffffffffffff8;
      uVar5 = libusb_clear_halt(ppbVar18[1],ppbVar9);
      if (((uVar5 != 0) && (((byte)adb_trace_mask & 0x20) != 0)) &&
         ((int)adb_trace_severity._20_4_ < 2)) {
        unaff_R13 = (byte *)(ulong)uVar5;
        puStack_d8 = &UNK_00407df1;
        cVar4 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
        if (cVar4 != '\0') {
          puStack_d8 = &UNK_00407e02;
          uStack_cc = uVar5;
          puStack_c8 = (undefined4 *)func_0x0099bce0();
          uStack_d0 = *puStack_c8;
          puStack_d8 = &UNK_00407e31;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (&pbStack_a8,&UNK_00159712,0x155,1,0,0xffffffff);
          puStack_d8 = &UNK_00407e39;
          uVar7 = _ZN7android4base10LogMessage6streamEv(&pbStack_a8);
          puStack_d8 = &UNK_00407e4d;
          uVar7 = func_0x0032eb30(uVar7,&UNK_0017bc03,0x1f);
          puStack_d8 = &UNK_00407e58;
          uVar7 = func_0x0032e5a0(uVar7,ppbVar8);
          puStack_d8 = &UNK_00407e6c;
          uVar7 = func_0x0032eb30(uVar7,&UNK_00181c8b,10);
          puStack_d8 = &UNK_00407e84;
          _ZN7android4base12StringPrintfEPKcz(&bStack_c0,&UNK_0017d77d,bVar1);
          puStack_d8 = &UNK_00407e90;
          uVar7 = func_0x0032e5a0(uVar7,&bStack_c0);
          puStack_d8 = &UNK_00407ea4;
          unaff_R13 = (byte *)func_0x0032eb30(uVar7,&UNK_00186281,2);
          puStack_d8 = &UNK_00407eaf;
          ppbVar9 = (byte **)libusb_error_name(uStack_cc);
          puStack_d8 = &UNK_00407eba;
          uVar7 = func_0x0099bcf0(ppbVar9);
          puStack_d8 = &UNK_00407ec8;
          func_0x0032eb30(unaff_R13,ppbVar9,uVar7);
          if ((bStack_c0 & 1) != 0) {
            puStack_d8 = &UNK_00407edf;
            _ZdaPvSt11align_val_t(uStack_b0,CONCAT71(uStack_bf,bStack_c0) & 0xfffffffffffffffe);
          }
          puStack_d8 = &UNK_00407ee8;
          _ZN7android4base10LogMessageD2Ev(&pbStack_a8);
          *puStack_c8 = uStack_d0;
        }
      }
      ppbVar19 = (byte **)ppbVar18[1];
      puStack_d8 = &UNK_00407b8d;
      uVar5 = libusb_clear_halt(ppbVar19,bVar2);
      unaff_R12 = ppbVar9;
      unaff_R15 = ppbVar18;
      if (((uVar5 != 0) && (((byte)adb_trace_mask & 0x20) != 0)) &&
         ((int)adb_trace_severity._20_4_ < 2)) {
        ppbVar19 = (byte **)0x1;
        unaff_R12 = (byte **)(ulong)uVar5;
        puStack_d8 = &UNK_00407bc5;
        cVar4 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
        if (cVar4 != '\0') {
          puStack_d8 = &UNK_00407bd2;
          unaff_R15 = (byte **)func_0x0099bce0();
          puStack_c8 = (undefined4 *)CONCAT44(puStack_c8._4_4_,*(uint *)unaff_R15);
          puStack_d8 = &UNK_00407c00;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (&pbStack_a8,&UNK_00159712,0x155,1,0,0xffffffff);
          puStack_d8 = &UNK_00407c08;
          uVar7 = _ZN7android4base10LogMessage6streamEv(&pbStack_a8);
          puStack_d8 = &UNK_00407c1c;
          uVar7 = func_0x0032eb30(uVar7,&UNK_0017bc03,0x1f);
          puStack_d8 = &UNK_00407c27;
          uVar7 = func_0x0032e5a0(uVar7,ppbVar8);
          puStack_d8 = &UNK_00407c3b;
          uVar7 = func_0x0032eb30(uVar7,&UNK_00181c8b,10);
          unaff_R13 = &bStack_c0;
          puStack_d8 = &UNK_00407c55;
          _ZN7android4base12StringPrintfEPKcz(unaff_R13,&UNK_0017d77d,bVar2);
          puStack_d8 = &UNK_00407c60;
          uVar7 = func_0x0032e5a0(uVar7,unaff_R13);
          puStack_d8 = &UNK_00407c74;
          param_1 = (uint *)func_0x0032eb30(uVar7,&UNK_00186281,2);
          puStack_d8 = &UNK_00407c7f;
          ppbVar8 = (byte **)libusb_error_name(unaff_R12);
          puStack_d8 = &UNK_00407c8a;
          uVar7 = func_0x0099bcf0(ppbVar8);
          puStack_d8 = &UNK_00407c98;
          func_0x0032eb30(param_1,ppbVar8,uVar7);
          if ((bStack_c0 & 1) != 0) {
            puStack_d8 = &UNK_00407caf;
            _ZdaPvSt11align_val_t(uStack_b0,CONCAT71(uStack_bf,bStack_c0) & 0xfffffffffffffffe);
          }
          ppbVar19 = &pbStack_a8;
          puStack_d8 = &UNK_00407cb8;
          _ZN7android4base10LogMessageD2Ev();
          *(uint *)unaff_R15 = (uint)puStack_c8;
        }
      }
      goto code_r0x00407d53;
    }
    puStack_70 = &stack0xfffffffffffffff8;
    if ((((byte)adb_trace_mask & 0x20) == 0) ||
       (puStack_70 = &stack0xfffffffffffffff8, 1 < (int)adb_trace_severity._20_4_))
    goto code_r0x00407d53;
    ppbVar19 = (byte **)0x1;
    puStack_d8 = &UNK_00407d81;
    puStack_70 = &stack0xfffffffffffffff8;
    cVar4 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
    if (cVar4 == '\0') goto code_r0x00407d53;
    puStack_d8 = &UNK_00407d8a;
    param_1 = (uint *)func_0x0099bce0();
    uVar5 = *param_1;
    puStack_d8 = &UNK_00407db6;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (&bStack_c0,&UNK_00159712,0x14e,1,0,0xffffffff);
    puStack_d8 = &UNK_00407dbe;
    uVar7 = _ZN7android4base10LogMessage6streamEv(&bStack_c0);
    puVar17 = &UNK_0016ed7c;
    uVar13 = 0x38;
  }
  unaff_R15 = (byte **)(ulong)uVar5;
  ppbVar8 = (byte **)&bStack_c0;
  puStack_d8 = &UNK_00407dd2;
  func_0x0032eb30(uVar7,puVar17,uVar13);
  puStack_d8 = &UNK_00407dda;
  ppbVar19 = ppbVar8;
  _ZN7android4base10LogMessageD2Ev();
  *param_1 = uVar5;
code_r0x00407d53:
  if (*(ulong *)(in_FS_OFFSET + 0x28) == uStack_a0) {
    return *(ulong *)(in_FS_OFFSET + 0x28);
  }
  puStack_d8 = &UNK_00407efb;
  func_0x0099bd00();
  uStack_108 = *(ulong *)(in_FS_OFFSET + 0x28);
  puStack_120 = &UNK_00407f29;
  puStack_100 = param_1;
  ppbStack_f8 = unaff_R12;
  ppbStack_f0 = (byte **)unaff_R13;
  ppbStack_e8 = ppbVar8;
  ppbStack_e0 = unaff_R15;
  puStack_d8 = (undefined *)&puStack_70;
  iVar6 = libusb_get_device_speed(*ppbVar19);
  if (iVar6 - 1U < 6) {
    pbVar10 = *(byte **)(&UNK_001fe8f0 + (ulong)(iVar6 - 1U) * 8);
  }
  else {
    pbVar10 = (byte *)0x0;
  }
  ppbVar19[10] = pbVar10;
  pbStack_110 = (byte *)0x0;
  pbVar10 = ppbVar19[1];
  puStack_120 = &UNK_00407f5a;
  iVar6 = libusb_get_bos_descriptor(pbVar10,&pbStack_110);
  if (iVar6 == 0) {
    if (pbStack_110[4] != 0) {
      unaff_R15 = (byte **)0x0;
      ppbVar8 = &pbStack_118;
      unaff_R12 = (byte **)&UNK_001fe730;
      unaff_R13 = &UNK_001fe920;
      do {
        if (*(char *)(*(long *)(pbStack_110 + (long)unaff_R15 * 8 + 8) + 2) == '\n') {
          pbStack_118 = (byte *)0x0;
          puStack_120 = &UNK_00407fa7;
          iVar6 = libusb_get_ssplus_usb_device_capability_descriptor
                            (0,*(undefined8 *)(pbStack_110 + (long)unaff_R15 * 8 + 8),ppbVar8);
          if (iVar6 == 0) {
            bVar1 = *pbStack_118;
            if (bVar1 == 0) {
              pbVar10 = (byte *)0x0;
            }
            else {
              if (bVar1 == 1) {
                uVar11 = 0;
                pbVar10 = (byte *)0x0;
              }
              else {
                puVar20 = (ushort *)(pbStack_118 + 0x34);
                uVar11 = 0;
                pbVar10 = (byte *)0x0;
                do {
                  pbVar21 = (byte *)((ulong)puVar20[-0xc] *
                                    *(long *)(&UNK_001fe730 + (ulong)*(uint *)(puVar20 + -0x14) * 8)
                                    );
                  if ((byte *)((ulong)puVar20[-0xc] *
                              *(long *)(&UNK_001fe730 + (ulong)*(uint *)(puVar20 + -0x14) * 8)) <
                      pbVar10) {
                    pbVar21 = pbVar10;
                  }
                  pbVar10 = (byte *)((ulong)*puVar20 *
                                    *(long *)(&UNK_001fe730 + (ulong)*(uint *)(puVar20 + -8) * 8));
                  if ((byte *)((ulong)*puVar20 *
                              *(long *)(&UNK_001fe730 + (ulong)*(uint *)(puVar20 + -8) * 8)) <
                      pbVar21) {
                    pbVar10 = pbVar21;
                  }
                  uVar11 = uVar11 + 2;
                  puVar20 = puVar20 + 0x18;
                } while ((bVar1 & 0xfffffffe) != uVar11);
                if ((bVar1 & 1) == 0) goto code_r0x004080c8;
              }
              if (pbVar10 <=
                  (byte *)((ulong)*(ushort *)(pbStack_118 + uVar11 * 0x18 + 0x1c) *
                          *(long *)(&UNK_001fe730 +
                                   (ulong)*(uint *)(pbStack_118 + uVar11 * 0x18 + 0xc) * 8))) {
                pbVar10 = (byte *)((ulong)*(ushort *)(pbStack_118 + uVar11 * 0x18 + 0x1c) *
                                  *(long *)(&UNK_001fe730 +
                                           (ulong)*(uint *)(pbStack_118 + uVar11 * 0x18 + 0xc) * 8))
                ;
              }
            }
code_r0x004080c8:
            if (pbVar10 < ppbVar19[0xb]) {
              pbVar10 = ppbVar19[0xb];
            }
            ppbVar19[0xb] = pbVar10;
            puStack_120 = &UNK_004080dc;
            libusb_free_ssplus_usb_device_capability_descriptor();
          }
        }
        else if (*(char *)(*(long *)(pbStack_110 + (long)unaff_R15 * 8 + 8) + 2) == '\x03') {
          pbStack_118 = (byte *)0x0;
          puStack_120 = &UNK_00407fe9;
          iVar6 = libusb_get_ss_usb_device_capability_descriptor
                            (0,*(undefined8 *)(pbStack_110 + (long)unaff_R15 * 8 + 8),ppbVar8);
          if (iVar6 == 0) {
            uVar16 = *(ushort *)(pbStack_118 + 4);
            pbVar10 = (byte *)(ulong)uVar16;
            if (uVar16 != 0) {
              if (uVar16 == 1) {
                pbVar10 = (byte *)0x1;
              }
              else {
                lVar15 = -1;
                do {
                  lVar15 = lVar15 + 1;
                  uVar16 = (ushort)pbVar10;
                  pbVar10 = (byte *)((ulong)pbVar10 >> 1);
                } while (3 < uVar16);
                if ((uint)lVar15 < 3) {
                  pbVar10 = *(byte **)(&UNK_001fe920 + lVar15 * 8);
                }
                else {
                  pbVar10 = (byte *)0x0;
                }
              }
            }
            if (pbVar10 < ppbVar19[0xb]) {
              pbVar10 = ppbVar19[0xb];
            }
            ppbVar19[0xb] = pbVar10;
            puStack_120 = &UNK_004080f7;
            libusb_free_ss_usb_device_capability_descriptor();
          }
        }
        unaff_R15 = (byte **)((long)unaff_R15 + 1);
      } while (unaff_R15 < (byte **)(ulong)pbStack_110[4]);
    }
    puStack_120 = &UNK_00408101;
    pbVar10 = pbStack_110;
    libusb_free_bos_descriptor();
  }
  if (*(ulong *)(in_FS_OFFSET + 0x28) == uStack_108) {
    return *(ulong *)(in_FS_OFFSET + 0x28);
  }
  puStack_120 = &UNK_00408124;
  func_0x0099bd00();
  lStack_150 = *(long *)(in_FS_OFFSET + 0x28);
  ppbStack_148 = ppbVar19;
  ppbStack_140 = unaff_R12;
  ppbStack_138 = (byte **)unaff_R13;
  ppbStack_130 = ppbVar8;
  ppbStack_128 = unaff_R15;
  puStack_120 = (undefined *)&puStack_d8;
  if ((((byte)adb_trace_mask & 0x20) != 0) &&
     (puStack_120 = (undefined *)&puStack_d8, (int)adb_trace_severity._20_4_ < 2)) {
    puStack_120 = (undefined *)&puStack_d8;
    cVar4 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
    if (cVar4 != '\0') {
      puVar12 = (undefined4 *)func_0x0099bce0();
      uVar3 = *puVar12;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&bStack_190,&UNK_00159712,0x1d2,1,0,0xffffffff);
      uVar7 = _ZN7android4base10LogMessage6streamEv(&bStack_190);
      uVar7 = func_0x0032eb30(uVar7,&UNK_00177259,0x13);
      if ((pbVar10[0x28] & 1) == 0) {
        uStack_160 = *(undefined8 *)(pbVar10 + 0x38);
        uStack_170 = *(uint *)(pbVar10 + 0x28);
        uStack_16c = *(undefined4 *)(pbVar10 + 0x2c);
        uStack_168 = *(undefined4 *)(pbVar10 + 0x30);
        uStack_164 = *(undefined4 *)(pbVar10 + 0x34);
      }
      else {
        func_0x00330340(&uStack_170,*(undefined8 *)(pbVar10 + 0x38),*(undefined8 *)(pbVar10 + 0x30))
        ;
      }
      func_0x0032e5a0(uVar7,&uStack_170);
      if ((uStack_170 & 1) != 0) {
        _ZdaPvSt11align_val_t(uStack_160,CONCAT44(uStack_16c,uStack_170) & 0xfffffffffffffffe);
      }
      _ZN7android4base10LogMessageD2Ev(&bStack_190);
      *puVar12 = uVar3;
    }
  }
  if (pbVar10[0x4e] == 1) {
    uVar11 = 1;
    if ((((byte)adb_trace_mask & 0x20) != 0) && ((int)adb_trace_severity._20_4_ < 2)) {
      cVar4 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
      if (cVar4 != '\0') goto code_r0x00408457;
      uVar11 = 1;
    }
  }
  else {
    cVar4 = _ZN12LibUsbDevice16FindAdbInterfaceEv(pbVar10);
    if (cVar4 == '\0') {
      uVar11 = 0;
      if ((((byte)adb_trace_mask & 0x20) != 0) && ((int)adb_trace_severity._20_4_ < 2)) {
        cVar4 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
        uVar11 = 0;
        if (cVar4 != '\0') {
          puVar12 = (undefined4 *)func_0x0099bce0();
          uVar3 = *puVar12;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (&bStack_190,&UNK_00159712,0x1d9,1,0,0xffffffff);
          uVar7 = _ZN7android4base10LogMessage6streamEv(&bStack_190);
          uVar7 = func_0x0032eb30(uVar7,&UNK_0015e1c7,0x1d);
          if ((pbVar10[0x28] & 1) == 0) {
            uStack_160 = *(undefined8 *)(pbVar10 + 0x38);
            uStack_170 = *(uint *)(pbVar10 + 0x28);
            uStack_16c = *(undefined4 *)(pbVar10 + 0x2c);
            uStack_168 = *(undefined4 *)(pbVar10 + 0x30);
            uStack_164 = *(undefined4 *)(pbVar10 + 0x34);
          }
          else {
            func_0x00330340(&uStack_170,*(undefined8 *)(pbVar10 + 0x38),
                            *(undefined8 *)(pbVar10 + 0x30));
          }
          func_0x0032e5a0(uVar7,&uStack_170);
          if ((uStack_170 & 1) != 0) {
            _ZdaPvSt11align_val_t(uStack_160,CONCAT44(uStack_16c,uStack_170) & 0xfffffffffffffffe);
          }
          _ZN7android4base10LogMessageD2Ev(&bStack_190);
          *puVar12 = uVar3;
          uVar11 = 0;
        }
      }
    }
    else {
      iVar6 = libusb_claim_interface(*(undefined8 *)(pbVar10 + 8),*(undefined4 *)(pbVar10 + 0x48));
      bVar22 = ((byte)adb_trace_mask & 0x20) != 0;
      if (iVar6 == 0) {
        if ((int)adb_trace_severity._20_4_ < 2 && bVar22) {
          cVar4 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
          if (cVar4 != '\0') {
            puVar12 = (undefined4 *)func_0x0099bce0();
            uVar3 = *puVar12;
            _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                      (auStack_178,&UNK_00159712,0x1e4,1,0,0xffffffff);
            uVar7 = _ZN7android4base10LogMessage6streamEv(auStack_178);
            uVar7 = func_0x0032eb30(uVar7,&UNK_0015fd03,0x16);
            if ((pbVar10[0x28] & 1) == 0) {
              uStack_160 = *(undefined8 *)(pbVar10 + 0x38);
              uStack_170 = *(uint *)(pbVar10 + 0x28);
              uStack_16c = *(undefined4 *)(pbVar10 + 0x2c);
              uStack_168 = *(undefined4 *)(pbVar10 + 0x30);
              uStack_164 = *(undefined4 *)(pbVar10 + 0x34);
            }
            else {
              func_0x00330340(&uStack_170,*(undefined8 *)(pbVar10 + 0x38),
                              *(undefined8 *)(pbVar10 + 0x30));
            }
            uVar7 = func_0x0032e5a0(uVar7,&uStack_170);
            uVar7 = func_0x0032eb30(uVar7,&UNK_0015f9ff,2);
            _ZN7android4base12StringPrintfEPKcz
                      (&bStack_190,&UNK_0015b239,pbVar10[0x4d],pbVar10[0x4c]);
            func_0x0032e5a0(uVar7,&bStack_190);
            if ((bStack_190 & 1) != 0) {
              _ZdaPvSt11align_val_t(uStack_180,CONCAT71(uStack_18f,bStack_190) & 0xfffffffffffffffe)
              ;
            }
            if ((uStack_170 & 1) != 0) {
              _ZdaPvSt11align_val_t(uStack_160,CONCAT44(uStack_16c,uStack_170) & 0xfffffffffffffffe)
              ;
            }
            _ZN7android4base10LogMessageD2Ev(auStack_178);
            *puVar12 = uVar3;
          }
        }
        uVar11 = 1;
        LOCK();
        pbVar10[0x4e] = 1;
        UNLOCK();
      }
      else if ((int)adb_trace_severity._20_4_ < 2 && bVar22) {
        cVar4 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
        uVar11 = 0;
        if (cVar4 != '\0') {
          puVar12 = (undefined4 *)func_0x0099bce0();
          uVar3 = *puVar12;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (&uStack_170,&UNK_00159712,0x1df,1,0,0xffffffff);
          uVar7 = _ZN7android4base10LogMessage6streamEv(&uStack_170);
          uVar7 = func_0x0032eb30(uVar7,&UNK_0015fcd9,0x29);
          if ((pbVar10[0x28] & 1) == 0) {
            pbVar10 = pbVar10 + 0x29;
          }
          else {
            pbVar10 = *(byte **)(pbVar10 + 0x38);
          }
          uVar13 = func_0x0099bcf0(pbVar10);
          uVar7 = func_0x0032eb30(uVar7,pbVar10,uVar13);
          uVar7 = func_0x0032eb30(uVar7,&UNK_00173d53,1);
          uVar13 = libusb_error_name(iVar6);
          uVar14 = func_0x0099bcf0(uVar13);
          func_0x0032eb30(uVar7,uVar13,uVar14);
          _ZN7android4base10LogMessageD2Ev(&uStack_170);
          *puVar12 = uVar3;
          uVar11 = 0;
        }
      }
      else {
        uVar11 = 0;
      }
    }
  }
  while (*(long *)(in_FS_OFFSET + 0x28) != lStack_150) {
    func_0x0099bd00();
code_r0x00408457:
    puVar12 = (undefined4 *)func_0x0099bce0();
    uVar3 = *puVar12;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (&uStack_170,&UNK_00159712,0x1d4,1,0,0xffffffff);
    uVar7 = _ZN7android4base10LogMessage6streamEv(&uStack_170);
    func_0x0032eb30(uVar7,&UNK_001614b8,0x16);
    _ZN7android4base10LogMessageD2Ev(&uStack_170);
    *puVar12 = uVar3;
    uVar11 = 1;
  }
  return uVar11;
}


