// Function: _ZNK12LibUsbDevice10GetAddressEv
// Address: 00407860
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 * _ZNK12LibUsbDevice10GetAddressEv(undefined8 *param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  uint *puVar9;
  byte **ppbVar10;
  byte *pbVar11;
  undefined4 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  ushort uVar16;
  ulong uVar17;
  undefined *puVar18;
  byte **ppbVar19;
  byte **ppbVar20;
  ushort *puVar21;
  byte *pbVar22;
  byte **unaff_R12;
  byte *unaff_R13;
  byte **unaff_R15;
  long in_FS_OFFSET;
  bool bVar23;
  byte bStack_1c8;
  undefined7 uStack_1c7;
  undefined8 uStack_1b8;
  undefined1 auStack_1b0 [8];
  uint uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 uStack_198;
  long lStack_188;
  byte **ppbStack_180;
  byte **ppbStack_178;
  byte **ppbStack_170;
  byte **ppbStack_168;
  byte **ppbStack_160;
  undefined *puStack_158;
  byte *pbStack_150;
  byte *pbStack_148;
  undefined8 *puStack_140;
  uint *puStack_138;
  byte **ppbStack_130;
  byte **ppbStack_128;
  byte **ppbStack_120;
  byte **ppbStack_118;
  undefined *puStack_110;
  undefined4 uStack_108;
  uint uStack_104;
  undefined4 *puStack_100;
  byte bStack_f8;
  undefined7 uStack_f7;
  undefined8 uStack_e8;
  byte *pbStack_e0;
  undefined8 *puStack_d8;
  uint *puStack_d0;
  byte **ppbStack_c8;
  byte **ppbStack_c0;
  byte **ppbStack_b8;
  byte **ppbStack_b0;
  undefined *puStack_a8;
  uint uStack_9c;
  byte *pbStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  long lStack_70;
  undefined8 *puStack_68;
  undefined *apuStack_40 [2];
  byte bStack_30;
  undefined4 uStack_2f;
  undefined1 uStack_2b;
  undefined2 uStack_2a;
  uint *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)(in_FS_OFFSET + 0x28);
  bStack_30 = 8;
  uStack_2f = 0x3a627375;
  uStack_2b = 0;
  puVar9 = (uint *)&bStack_30;
  apuStack_40[0] = &UNK_00407895;
  puVar7 = (undefined8 *)func_0x0032e820(puVar9,param_2 + 0x10);
  param_1[2] = puVar7[2];
  uVar8 = puVar7[1];
  *param_1 = *puVar7;
  param_1[1] = uVar8;
  *puVar7 = 0;
  puVar7[1] = 0;
  puVar7[2] = 0;
  if ((bStack_30 & 1) != 0) {
    apuStack_40[0] = &UNK_004078c8;
    _ZdaPvSt11align_val_t
              (puStack_20,
               CONCAT26(uStack_2a,CONCAT15(uStack_2b,CONCAT41(uStack_2f,bStack_30))) &
               0xfffffffffffffffe);
    puVar9 = puStack_20;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_18) {
    return param_1;
  }
  apuStack_40[0] = &UNK_004078e6;
  func_0x0099bd00();
  lStack_70 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  puStack_a8 = &UNK_0040792b;
  puStack_68 = param_1;
  apuStack_40[0] = &stack0xfffffffffffffff8;
  _ZN12LibUsbDevice19GetDeviceDescriptorEv(&uStack_90,puVar9);
  ppbVar10 = (byte **)(puVar9 + 10);
  puStack_a8 = &UNK_0040793e;
  _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc(ppbVar10,0x200,0);
  ppbVar19 = *(byte ***)(puVar9 + 2);
  if (((byte)puVar9[10] & 1) == 0) {
    lVar15 = (long)puVar9 + 0x29;
    uVar5 = (uint)(byte)((byte)puVar9[10] >> 1);
  }
  else {
    lVar15 = *(long *)(puVar9 + 0xe);
    uVar5 = puVar9[0xc];
  }
  puStack_a8 = &UNK_00407963;
  uVar5 = libusb_get_string_descriptor_ascii(ppbVar19,(undefined1)uStack_80,lVar15,uVar5);
  if (uVar5 == 0) {
    ppbVar10 = (byte **)0x0;
    ppbVar19 = (byte **)0x3;
    puStack_a8 = &UNK_00407990;
    cVar4 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(3,0);
    if (cVar4 != '\0') {
      puStack_a8 = &UNK_0040799d;
      unaff_R15 = (byte **)func_0x0099bce0();
      uVar5 = *(uint *)unaff_R15;
      unaff_R13 = (byte *)(ulong)uVar5;
      ppbVar10 = (byte **)0x0;
      unaff_R12 = &pbStack_98;
      puStack_a8 = &UNK_004079cc;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (unaff_R12,&UNK_00159712,0x13b,3,0,0xffffffff);
      puStack_a8 = &UNK_004079d4;
      uVar8 = _ZN7android4base10LogMessage6streamEv(unaff_R12);
      puStack_a8 = &UNK_004079e8;
      uVar8 = func_0x0032eb30(uVar8,&UNK_0017ef08,0x25);
      puVar9 = puVar9 + 4;
      puStack_a8 = &UNK_004079f7;
      func_0x0032e5a0(uVar8,puVar9);
      puStack_a8 = &UNK_004079ff;
      ppbVar19 = unaff_R12;
      _ZN7android4base10LogMessageD2Ev();
      *(uint *)unaff_R15 = uVar5;
    }
  }
  else if ((int)uVar5 < 0) {
    ppbVar10 = (byte **)0x0;
    if ((((byte)adb_trace_mask & 0x20) != 0) && ((int)adb_trace_severity._20_4_ < 2)) {
      ppbVar10 = (byte **)0x0;
      ppbVar19 = (byte **)0x1;
      unaff_R13 = (byte *)(ulong)uVar5;
      puStack_a8 = &UNK_00407a57;
      cVar4 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
      if (cVar4 != '\0') {
        puStack_a8 = &UNK_00407a60;
        unaff_R15 = (byte **)func_0x0099bce0();
        uStack_9c = *(uint *)unaff_R15;
        ppbVar10 = (byte **)0x0;
        unaff_R12 = &pbStack_98;
        puStack_a8 = &UNK_00407a91;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (unaff_R12,&UNK_00159712,0x13e,1,0,0xffffffff);
        puStack_a8 = &UNK_00407a99;
        uVar8 = _ZN7android4base10LogMessage6streamEv(unaff_R12);
        puStack_a8 = &UNK_00407aad;
        uVar8 = func_0x0032eb30(uVar8,&UNK_00167c43,0x21);
        puStack_a8 = &UNK_00407abc;
        uVar8 = func_0x0032e5a0(uVar8,puVar9 + 4);
        puStack_a8 = &UNK_00407ad0;
        puVar9 = (uint *)func_0x0032eb30(uVar8,&UNK_0017ef2e,2);
        puStack_a8 = &UNK_00407adb;
        unaff_R13 = (byte *)libusb_error_name(unaff_R13);
        puStack_a8 = &UNK_00407ae6;
        uVar8 = func_0x0099bcf0(unaff_R13);
        puStack_a8 = &UNK_00407af4;
        func_0x0032eb30(puVar9,unaff_R13,uVar8);
        puStack_a8 = &UNK_00407afc;
        ppbVar19 = unaff_R12;
        _ZN7android4base10LogMessageD2Ev();
        *(uint *)unaff_R15 = uStack_9c;
      }
    }
  }
  else {
    puStack_a8 = &UNK_00407979;
    ppbVar19 = ppbVar10;
    _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc(ppbVar10,uVar5,0);
    ppbVar10 = (byte **)CONCAT71((int7)((ulong)ppbVar10 >> 8),1);
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_70) {
    return (undefined8 *)((ulong)ppbVar10 & 0xffffffff);
  }
  puStack_a8 = &UNK_00407b0c;
  func_0x0099bd00();
  puStack_a8 = (undefined *)apuStack_40;
  ppbStack_b0 = unaff_R15;
  ppbStack_b8 = ppbVar10;
  ppbStack_c0 = (byte **)unaff_R13;
  ppbStack_c8 = unaff_R12;
  puStack_d0 = puVar9;
  puStack_d8 = *(undefined8 **)(in_FS_OFFSET + 0x28);
  ppbVar20 = ppbVar19;
  if (ppbVar19[1] == (byte *)0x0) {
    if ((((byte)adb_trace_mask & 0x20) == 0) || (1 < (int)adb_trace_severity._20_4_))
    goto code_r0x00407d53;
    ppbVar20 = (byte **)0x1;
    puStack_110 = &UNK_00407cec;
    cVar4 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
    if (cVar4 == '\0') goto code_r0x00407d53;
    puStack_110 = &UNK_00407cf5;
    puVar9 = (uint *)func_0x0099bce0();
    uVar5 = *puVar9;
    puStack_110 = &UNK_00407d21;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (&bStack_f8,&UNK_00159712,0x149,1,0,0xffffffff);
    puStack_110 = &UNK_00407d29;
    uVar8 = _ZN7android4base10LogMessage6streamEv(&bStack_f8);
    puVar18 = &UNK_0018aea5;
    uVar13 = 0x34;
  }
  else {
    if (*(char *)((long)ppbVar19 + 0x4e) != '\0') {
      bVar1 = *(byte *)((long)ppbVar19 + 0x4d);
      unaff_R12 = (byte **)(ulong)bVar1;
      bVar2 = *(byte *)((long)ppbVar19 + 0x4c);
      puVar9 = (uint *)(ulong)bVar2;
      ppbVar10 = ppbVar19 + 5;
      puStack_110 = &UNK_00407b61;
      uVar5 = libusb_clear_halt(ppbVar19[1],unaff_R12);
      if (((uVar5 != 0) && (((byte)adb_trace_mask & 0x20) != 0)) &&
         ((int)adb_trace_severity._20_4_ < 2)) {
        unaff_R13 = (byte *)(ulong)uVar5;
        puStack_110 = &UNK_00407df1;
        cVar4 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
        if (cVar4 != '\0') {
          puStack_110 = &UNK_00407e02;
          uStack_104 = uVar5;
          puStack_100 = (undefined4 *)func_0x0099bce0();
          uStack_108 = *puStack_100;
          puStack_110 = &UNK_00407e31;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (&pbStack_e0,&UNK_00159712,0x155,1,0,0xffffffff);
          puStack_110 = &UNK_00407e39;
          uVar8 = _ZN7android4base10LogMessage6streamEv(&pbStack_e0);
          puStack_110 = &UNK_00407e4d;
          uVar8 = func_0x0032eb30(uVar8,&UNK_0017bc03,0x1f);
          puStack_110 = &UNK_00407e58;
          uVar8 = func_0x0032e5a0(uVar8,ppbVar10);
          puStack_110 = &UNK_00407e6c;
          uVar8 = func_0x0032eb30(uVar8,&UNK_00181c8b,10);
          puStack_110 = &UNK_00407e84;
          _ZN7android4base12StringPrintfEPKcz(&bStack_f8,&UNK_0017d77d,bVar1);
          puStack_110 = &UNK_00407e90;
          uVar8 = func_0x0032e5a0(uVar8,&bStack_f8);
          puStack_110 = &UNK_00407ea4;
          unaff_R13 = (byte *)func_0x0032eb30(uVar8,&UNK_00186281,2);
          puStack_110 = &UNK_00407eaf;
          unaff_R12 = (byte **)libusb_error_name(uStack_104);
          puStack_110 = &UNK_00407eba;
          uVar8 = func_0x0099bcf0(unaff_R12);
          puStack_110 = &UNK_00407ec8;
          func_0x0032eb30(unaff_R13,unaff_R12,uVar8);
          if ((bStack_f8 & 1) != 0) {
            puStack_110 = &UNK_00407edf;
            _ZdaPvSt11align_val_t(uStack_e8,CONCAT71(uStack_f7,bStack_f8) & 0xfffffffffffffffe);
          }
          puStack_110 = &UNK_00407ee8;
          _ZN7android4base10LogMessageD2Ev(&pbStack_e0);
          *puStack_100 = uStack_108;
        }
      }
      ppbVar20 = (byte **)ppbVar19[1];
      puStack_110 = &UNK_00407b8d;
      uVar5 = libusb_clear_halt(ppbVar20,bVar2);
      unaff_R15 = ppbVar19;
      if (((uVar5 != 0) && (((byte)adb_trace_mask & 0x20) != 0)) &&
         ((int)adb_trace_severity._20_4_ < 2)) {
        ppbVar20 = (byte **)0x1;
        unaff_R12 = (byte **)(ulong)uVar5;
        puStack_110 = &UNK_00407bc5;
        cVar4 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
        if (cVar4 != '\0') {
          puStack_110 = &UNK_00407bd2;
          unaff_R15 = (byte **)func_0x0099bce0();
          puStack_100 = (undefined4 *)CONCAT44(puStack_100._4_4_,*(uint *)unaff_R15);
          puStack_110 = &UNK_00407c00;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (&pbStack_e0,&UNK_00159712,0x155,1,0,0xffffffff);
          puStack_110 = &UNK_00407c08;
          uVar8 = _ZN7android4base10LogMessage6streamEv(&pbStack_e0);
          puStack_110 = &UNK_00407c1c;
          uVar8 = func_0x0032eb30(uVar8,&UNK_0017bc03,0x1f);
          puStack_110 = &UNK_00407c27;
          uVar8 = func_0x0032e5a0(uVar8,ppbVar10);
          puStack_110 = &UNK_00407c3b;
          uVar8 = func_0x0032eb30(uVar8,&UNK_00181c8b,10);
          unaff_R13 = &bStack_f8;
          puStack_110 = &UNK_00407c55;
          _ZN7android4base12StringPrintfEPKcz(unaff_R13,&UNK_0017d77d,bVar2);
          puStack_110 = &UNK_00407c60;
          uVar8 = func_0x0032e5a0(uVar8,unaff_R13);
          puStack_110 = &UNK_00407c74;
          puVar9 = (uint *)func_0x0032eb30(uVar8,&UNK_00186281,2);
          puStack_110 = &UNK_00407c7f;
          ppbVar10 = (byte **)libusb_error_name(unaff_R12);
          puStack_110 = &UNK_00407c8a;
          uVar8 = func_0x0099bcf0(ppbVar10);
          puStack_110 = &UNK_00407c98;
          func_0x0032eb30(puVar9,ppbVar10,uVar8);
          if ((bStack_f8 & 1) != 0) {
            puStack_110 = &UNK_00407caf;
            _ZdaPvSt11align_val_t(uStack_e8,CONCAT71(uStack_f7,bStack_f8) & 0xfffffffffffffffe);
          }
          ppbVar20 = &pbStack_e0;
          puStack_110 = &UNK_00407cb8;
          _ZN7android4base10LogMessageD2Ev();
          *(uint *)unaff_R15 = (uint)puStack_100;
        }
      }
      goto code_r0x00407d53;
    }
    if ((((byte)adb_trace_mask & 0x20) == 0) || (1 < (int)adb_trace_severity._20_4_))
    goto code_r0x00407d53;
    ppbVar20 = (byte **)0x1;
    puStack_110 = &UNK_00407d81;
    cVar4 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
    if (cVar4 == '\0') goto code_r0x00407d53;
    puStack_110 = &UNK_00407d8a;
    puVar9 = (uint *)func_0x0099bce0();
    uVar5 = *puVar9;
    puStack_110 = &UNK_00407db6;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (&bStack_f8,&UNK_00159712,0x14e,1,0,0xffffffff);
    puStack_110 = &UNK_00407dbe;
    uVar8 = _ZN7android4base10LogMessage6streamEv(&bStack_f8);
    puVar18 = &UNK_0016ed7c;
    uVar13 = 0x38;
  }
  unaff_R15 = (byte **)(ulong)uVar5;
  ppbVar10 = (byte **)&bStack_f8;
  puStack_110 = &UNK_00407dd2;
  func_0x0032eb30(uVar8,puVar18,uVar13);
  puStack_110 = &UNK_00407dda;
  ppbVar20 = ppbVar10;
  _ZN7android4base10LogMessageD2Ev();
  *puVar9 = uVar5;
code_r0x00407d53:
  if (*(undefined8 **)(in_FS_OFFSET + 0x28) == puStack_d8) {
    return *(undefined8 **)(in_FS_OFFSET + 0x28);
  }
  puStack_110 = &UNK_00407efb;
  func_0x0099bd00();
  puStack_110 = (undefined *)&puStack_a8;
  ppbStack_118 = unaff_R15;
  ppbStack_120 = ppbVar10;
  ppbStack_128 = (byte **)unaff_R13;
  ppbStack_130 = unaff_R12;
  puStack_138 = puVar9;
  puStack_140 = *(undefined8 **)(in_FS_OFFSET + 0x28);
  puStack_158 = &UNK_00407f29;
  iVar6 = libusb_get_device_speed(*ppbVar20);
  if (iVar6 - 1U < 6) {
    pbVar11 = *(byte **)(&UNK_001fe8f0 + (ulong)(iVar6 - 1U) * 8);
  }
  else {
    pbVar11 = (byte *)0x0;
  }
  ppbVar20[10] = pbVar11;
  pbStack_148 = (byte *)0x0;
  pbVar11 = ppbVar20[1];
  puStack_158 = &UNK_00407f5a;
  iVar6 = libusb_get_bos_descriptor(pbVar11,&pbStack_148);
  if (iVar6 == 0) {
    if (pbStack_148[4] != 0) {
      unaff_R15 = (byte **)0x0;
      ppbVar10 = &pbStack_150;
      unaff_R12 = (byte **)&UNK_001fe730;
      unaff_R13 = &UNK_001fe920;
      do {
        if (*(char *)(*(long *)(pbStack_148 + (long)unaff_R15 * 8 + 8) + 2) == '\n') {
          pbStack_150 = (byte *)0x0;
          puStack_158 = &UNK_00407fa7;
          iVar6 = libusb_get_ssplus_usb_device_capability_descriptor
                            (0,*(undefined8 *)(pbStack_148 + (long)unaff_R15 * 8 + 8),ppbVar10);
          if (iVar6 == 0) {
            bVar1 = *pbStack_150;
            if (bVar1 == 0) {
              pbVar11 = (byte *)0x0;
            }
            else {
              if (bVar1 == 1) {
                uVar17 = 0;
                pbVar11 = (byte *)0x0;
              }
              else {
                puVar21 = (ushort *)(pbStack_150 + 0x34);
                uVar17 = 0;
                pbVar11 = (byte *)0x0;
                do {
                  pbVar22 = (byte *)((ulong)puVar21[-0xc] *
                                    *(long *)(&UNK_001fe730 + (ulong)*(uint *)(puVar21 + -0x14) * 8)
                                    );
                  if ((byte *)((ulong)puVar21[-0xc] *
                              *(long *)(&UNK_001fe730 + (ulong)*(uint *)(puVar21 + -0x14) * 8)) <
                      pbVar11) {
                    pbVar22 = pbVar11;
                  }
                  pbVar11 = (byte *)((ulong)*puVar21 *
                                    *(long *)(&UNK_001fe730 + (ulong)*(uint *)(puVar21 + -8) * 8));
                  if ((byte *)((ulong)*puVar21 *
                              *(long *)(&UNK_001fe730 + (ulong)*(uint *)(puVar21 + -8) * 8)) <
                      pbVar22) {
                    pbVar11 = pbVar22;
                  }
                  uVar17 = uVar17 + 2;
                  puVar21 = puVar21 + 0x18;
                } while ((bVar1 & 0xfffffffe) != uVar17);
                if ((bVar1 & 1) == 0) goto code_r0x004080c8;
              }
              if (pbVar11 <=
                  (byte *)((ulong)*(ushort *)(pbStack_150 + uVar17 * 0x18 + 0x1c) *
                          *(long *)(&UNK_001fe730 +
                                   (ulong)*(uint *)(pbStack_150 + uVar17 * 0x18 + 0xc) * 8))) {
                pbVar11 = (byte *)((ulong)*(ushort *)(pbStack_150 + uVar17 * 0x18 + 0x1c) *
                                  *(long *)(&UNK_001fe730 +
                                           (ulong)*(uint *)(pbStack_150 + uVar17 * 0x18 + 0xc) * 8))
                ;
              }
            }
code_r0x004080c8:
            if (pbVar11 < ppbVar20[0xb]) {
              pbVar11 = ppbVar20[0xb];
            }
            ppbVar20[0xb] = pbVar11;
            puStack_158 = &UNK_004080dc;
            libusb_free_ssplus_usb_device_capability_descriptor();
          }
        }
        else if (*(char *)(*(long *)(pbStack_148 + (long)unaff_R15 * 8 + 8) + 2) == '\x03') {
          pbStack_150 = (byte *)0x0;
          puStack_158 = &UNK_00407fe9;
          iVar6 = libusb_get_ss_usb_device_capability_descriptor
                            (0,*(undefined8 *)(pbStack_148 + (long)unaff_R15 * 8 + 8),ppbVar10);
          if (iVar6 == 0) {
            uVar16 = *(ushort *)(pbStack_150 + 4);
            pbVar11 = (byte *)(ulong)uVar16;
            if (uVar16 != 0) {
              if (uVar16 == 1) {
                pbVar11 = (byte *)0x1;
              }
              else {
                lVar15 = -1;
                do {
                  lVar15 = lVar15 + 1;
                  uVar16 = (ushort)pbVar11;
                  pbVar11 = (byte *)((ulong)pbVar11 >> 1);
                } while (3 < uVar16);
                if ((uint)lVar15 < 3) {
                  pbVar11 = *(byte **)(&UNK_001fe920 + lVar15 * 8);
                }
                else {
                  pbVar11 = (byte *)0x0;
                }
              }
            }
            if (pbVar11 < ppbVar20[0xb]) {
              pbVar11 = ppbVar20[0xb];
            }
            ppbVar20[0xb] = pbVar11;
            puStack_158 = &UNK_004080f7;
            libusb_free_ss_usb_device_capability_descriptor();
          }
        }
        unaff_R15 = (byte **)((long)unaff_R15 + 1);
      } while (unaff_R15 < (byte **)(ulong)pbStack_148[4]);
    }
    puStack_158 = &UNK_00408101;
    pbVar11 = pbStack_148;
    libusb_free_bos_descriptor();
  }
  if (*(undefined8 **)(in_FS_OFFSET + 0x28) == puStack_140) {
    return *(undefined8 **)(in_FS_OFFSET + 0x28);
  }
  puStack_158 = &UNK_00408124;
  func_0x0099bd00();
  lStack_188 = *(long *)(in_FS_OFFSET + 0x28);
  ppbStack_180 = ppbVar20;
  ppbStack_178 = unaff_R12;
  ppbStack_170 = (byte **)unaff_R13;
  ppbStack_168 = ppbVar10;
  ppbStack_160 = unaff_R15;
  puStack_158 = (undefined *)&puStack_110;
  if ((((byte)adb_trace_mask & 0x20) != 0) &&
     (puStack_158 = (undefined *)&puStack_110, (int)adb_trace_severity._20_4_ < 2)) {
    puStack_158 = (undefined *)&puStack_110;
    cVar4 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
    if (cVar4 != '\0') {
      puVar12 = (undefined4 *)func_0x0099bce0();
      uVar3 = *puVar12;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&bStack_1c8,&UNK_00159712,0x1d2,1,0,0xffffffff);
      uVar8 = _ZN7android4base10LogMessage6streamEv(&bStack_1c8);
      uVar8 = func_0x0032eb30(uVar8,&UNK_00177259,0x13);
      if ((pbVar11[0x28] & 1) == 0) {
        uStack_198 = *(undefined8 *)(pbVar11 + 0x38);
        uStack_1a8 = *(uint *)(pbVar11 + 0x28);
        uStack_1a4 = *(undefined4 *)(pbVar11 + 0x2c);
        uStack_1a0 = *(undefined4 *)(pbVar11 + 0x30);
        uStack_19c = *(undefined4 *)(pbVar11 + 0x34);
      }
      else {
        func_0x00330340(&uStack_1a8,*(undefined8 *)(pbVar11 + 0x38),*(undefined8 *)(pbVar11 + 0x30))
        ;
      }
      func_0x0032e5a0(uVar8,&uStack_1a8);
      if ((uStack_1a8 & 1) != 0) {
        _ZdaPvSt11align_val_t(uStack_198,CONCAT44(uStack_1a4,uStack_1a8) & 0xfffffffffffffffe);
      }
      _ZN7android4base10LogMessageD2Ev(&bStack_1c8);
      *puVar12 = uVar3;
    }
  }
  if (pbVar11[0x4e] == 1) {
    puVar7 = (undefined8 *)0x1;
    if ((((byte)adb_trace_mask & 0x20) != 0) && ((int)adb_trace_severity._20_4_ < 2)) {
      cVar4 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
      if (cVar4 != '\0') goto code_r0x00408457;
      puVar7 = (undefined8 *)0x1;
    }
  }
  else {
    cVar4 = _ZN12LibUsbDevice16FindAdbInterfaceEv(pbVar11);
    if (cVar4 == '\0') {
      puVar7 = (undefined8 *)0x0;
      if ((((byte)adb_trace_mask & 0x20) != 0) && ((int)adb_trace_severity._20_4_ < 2)) {
        cVar4 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
        puVar7 = (undefined8 *)0x0;
        if (cVar4 != '\0') {
          puVar12 = (undefined4 *)func_0x0099bce0();
          uVar3 = *puVar12;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (&bStack_1c8,&UNK_00159712,0x1d9,1,0,0xffffffff);
          uVar8 = _ZN7android4base10LogMessage6streamEv(&bStack_1c8);
          uVar8 = func_0x0032eb30(uVar8,&UNK_0015e1c7,0x1d);
          if ((pbVar11[0x28] & 1) == 0) {
            uStack_198 = *(undefined8 *)(pbVar11 + 0x38);
            uStack_1a8 = *(uint *)(pbVar11 + 0x28);
            uStack_1a4 = *(undefined4 *)(pbVar11 + 0x2c);
            uStack_1a0 = *(undefined4 *)(pbVar11 + 0x30);
            uStack_19c = *(undefined4 *)(pbVar11 + 0x34);
          }
          else {
            func_0x00330340(&uStack_1a8,*(undefined8 *)(pbVar11 + 0x38),
                            *(undefined8 *)(pbVar11 + 0x30));
          }
          func_0x0032e5a0(uVar8,&uStack_1a8);
          if ((uStack_1a8 & 1) != 0) {
            _ZdaPvSt11align_val_t(uStack_198,CONCAT44(uStack_1a4,uStack_1a8) & 0xfffffffffffffffe);
          }
          _ZN7android4base10LogMessageD2Ev(&bStack_1c8);
          *puVar12 = uVar3;
          puVar7 = (undefined8 *)0x0;
        }
      }
    }
    else {
      iVar6 = libusb_claim_interface(*(undefined8 *)(pbVar11 + 8),*(undefined4 *)(pbVar11 + 0x48));
      bVar23 = ((byte)adb_trace_mask & 0x20) != 0;
      if (iVar6 == 0) {
        if ((int)adb_trace_severity._20_4_ < 2 && bVar23) {
          cVar4 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
          if (cVar4 != '\0') {
            puVar12 = (undefined4 *)func_0x0099bce0();
            uVar3 = *puVar12;
            _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                      (auStack_1b0,&UNK_00159712,0x1e4,1,0,0xffffffff);
            uVar8 = _ZN7android4base10LogMessage6streamEv(auStack_1b0);
            uVar8 = func_0x0032eb30(uVar8,&UNK_0015fd03,0x16);
            if ((pbVar11[0x28] & 1) == 0) {
              uStack_198 = *(undefined8 *)(pbVar11 + 0x38);
              uStack_1a8 = *(uint *)(pbVar11 + 0x28);
              uStack_1a4 = *(undefined4 *)(pbVar11 + 0x2c);
              uStack_1a0 = *(undefined4 *)(pbVar11 + 0x30);
              uStack_19c = *(undefined4 *)(pbVar11 + 0x34);
            }
            else {
              func_0x00330340(&uStack_1a8,*(undefined8 *)(pbVar11 + 0x38),
                              *(undefined8 *)(pbVar11 + 0x30));
            }
            uVar8 = func_0x0032e5a0(uVar8,&uStack_1a8);
            uVar8 = func_0x0032eb30(uVar8,&UNK_0015f9ff,2);
            _ZN7android4base12StringPrintfEPKcz
                      (&bStack_1c8,&UNK_0015b239,pbVar11[0x4d],pbVar11[0x4c]);
            func_0x0032e5a0(uVar8,&bStack_1c8);
            if ((bStack_1c8 & 1) != 0) {
              _ZdaPvSt11align_val_t(uStack_1b8,CONCAT71(uStack_1c7,bStack_1c8) & 0xfffffffffffffffe)
              ;
            }
            if ((uStack_1a8 & 1) != 0) {
              _ZdaPvSt11align_val_t(uStack_198,CONCAT44(uStack_1a4,uStack_1a8) & 0xfffffffffffffffe)
              ;
            }
            _ZN7android4base10LogMessageD2Ev(auStack_1b0);
            *puVar12 = uVar3;
          }
        }
        puVar7 = (undefined8 *)0x1;
        LOCK();
        pbVar11[0x4e] = 1;
        UNLOCK();
      }
      else if ((int)adb_trace_severity._20_4_ < 2 && bVar23) {
        cVar4 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
        puVar7 = (undefined8 *)0x0;
        if (cVar4 != '\0') {
          puVar12 = (undefined4 *)func_0x0099bce0();
          uVar3 = *puVar12;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (&uStack_1a8,&UNK_00159712,0x1df,1,0,0xffffffff);
          uVar8 = _ZN7android4base10LogMessage6streamEv(&uStack_1a8);
          uVar8 = func_0x0032eb30(uVar8,&UNK_0015fcd9,0x29);
          if ((pbVar11[0x28] & 1) == 0) {
            pbVar11 = pbVar11 + 0x29;
          }
          else {
            pbVar11 = *(byte **)(pbVar11 + 0x38);
          }
          uVar13 = func_0x0099bcf0(pbVar11);
          uVar8 = func_0x0032eb30(uVar8,pbVar11,uVar13);
          uVar8 = func_0x0032eb30(uVar8,&UNK_00173d53,1);
          uVar13 = libusb_error_name(iVar6);
          uVar14 = func_0x0099bcf0(uVar13);
          func_0x0032eb30(uVar8,uVar13,uVar14);
          _ZN7android4base10LogMessageD2Ev(&uStack_1a8);
          *puVar12 = uVar3;
          puVar7 = (undefined8 *)0x0;
        }
      }
      else {
        puVar7 = (undefined8 *)0x0;
      }
    }
  }
  while (*(long *)(in_FS_OFFSET + 0x28) != lStack_188) {
    func_0x0099bd00();
code_r0x00408457:
    puVar12 = (undefined4 *)func_0x0099bce0();
    uVar3 = *puVar12;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (&uStack_1a8,&UNK_00159712,0x1d4,1,0,0xffffffff);
    uVar8 = _ZN7android4base10LogMessage6streamEv(&uStack_1a8);
    func_0x0032eb30(uVar8,&UNK_001614b8,0x16);
    _ZN7android4base10LogMessageD2Ev(&uStack_1a8);
    *puVar12 = uVar3;
    puVar7 = (undefined8 *)0x1;
  }
  return puVar7;
}


