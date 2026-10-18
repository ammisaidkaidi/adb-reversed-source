// Function: _ZN12LibUsbDevice17GenerateSessionIdEP13libusb_device
// Address: 00405670
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


uint * _ZN12LibUsbDevice17GenerateSessionIdEP13libusb_device(uint *param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  char cVar3;
  byte bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  uint *puVar16;
  undefined *puVar17;
  uint *puVar18;
  uint *unaff_R12;
  undefined4 *puVar19;
  undefined8 unaff_R13;
  undefined1 *puVar20;
  undefined4 *unaff_R14;
  ulong uVar21;
  long in_FS_OFFSET;
  bool bVar22;
  uint auStack_1f0 [2];
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined2 uStack_1d8;
  long lStack_1c8;
  uint *puStack_1c0;
  undefined1 *puStack_1b8;
  undefined4 *puStack_1b0;
  uint *puStack_1a8;
  uint *puStack_1a0;
  undefined *puStack_198;
  uint auStack_188 [2];
  uint *puStack_180;
  uint *puStack_178;
  undefined1 *puStack_170;
  undefined4 *puStack_168;
  uint *puStack_160;
  uint *puStack_158;
  undefined *apuStack_150 [2];
  undefined4 uStack_13c;
  undefined4 *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_120;
  uint auStack_118 [3];
  uint uStack_10c;
  long lStack_108;
  uint *puStack_100;
  undefined4 *puStack_f8;
  byte *pbStack_f0;
  uint *puStack_e8;
  uint *puStack_e0;
  undefined *puStack_d8;
  undefined4 uStack_cc;
  undefined4 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  uint auStack_a8 [2];
  long lStack_a0;
  uint *puStack_98;
  uint *puStack_90;
  undefined8 uStack_88;
  undefined4 *puStack_80;
  uint *puStack_78;
  undefined *puStack_70;
  undefined4 uStack_64;
  uint auStack_60 [2];
  uint auStack_58 [2];
  ulong uStack_50;
  undefined2 uStack_48;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  auStack_58[0] = 0;
  auStack_58[1] = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  puVar18 = auStack_58;
  puStack_70 = &UNK_004056a7;
  uVar6 = libusb_get_device_descriptor();
  if (uVar6 == 0) {
    uVar21 = uStack_50 & 0xffff;
    uVar2 = uStack_50 >> 0x10;
    puStack_70 = &UNK_0040575f;
    uVar6 = libusb_get_port_number(param_1);
    unaff_R14 = (undefined4 *)(ulong)uVar6;
    puStack_70 = &UNK_0040576a;
    bVar4 = libusb_get_device_address();
    puVar10 = (uint *)(uVar21 << 0x20);
    unaff_R12 = (uint *)((uVar2 & 0xffff) << 0x10 | (ulong)puVar10);
    puVar12 = (uint *)((ulong)bVar4 | (ulong)((uVar6 & 0xff) << 8) | (ulong)unaff_R12);
  }
  else {
    puVar10 = (uint *)(ulong)uVar6;
    puVar12 = (uint *)0x0;
    param_1 = (uint *)0x3;
    puVar18 = (uint *)0x0;
    puStack_70 = &UNK_004056c0;
    cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc();
    if (cVar3 != '\0') {
      puStack_70 = &UNK_004056cd;
      unaff_R14 = (undefined4 *)func_0x0099bce0();
      uStack_64 = *unaff_R14;
      puVar12 = (uint *)0x0;
      unaff_R12 = auStack_60;
      puStack_70 = &UNK_004056fd;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (unaff_R12,&UNK_00159712,0x20b,3,0,0xffffffff);
      puStack_70 = &UNK_00405705;
      uVar9 = _ZN7android4base10LogMessage6streamEv(unaff_R12);
      puStack_70 = &UNK_00405719;
      unaff_R13 = func_0x0032eb30(uVar9,&UNK_0016edb5,0x26);
      puStack_70 = &UNK_00405724;
      puVar10 = (uint *)libusb_error_name(puVar10);
      puStack_70 = &UNK_0040572f;
      uVar9 = func_0x0099bcf0(puVar10);
      puStack_70 = &UNK_0040573d;
      puVar18 = puVar10;
      func_0x0032eb30(unaff_R13,puVar10,uVar9);
      puStack_70 = &UNK_00405745;
      param_1 = unaff_R12;
      _ZN7android4base10LogMessageD2Ev();
      *unaff_R14 = uStack_64;
    }
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return puVar12;
  }
  puStack_70 = &UNK_004057ab;
  func_0x0099bd00();
  puStack_70 = &stack0xfffffffffffffff8;
  puStack_78 = puVar10;
  puStack_80 = unaff_R14;
  uStack_88 = unaff_R13;
  puStack_90 = unaff_R12;
  puStack_98 = puVar12;
  lStack_a0 = *(long *)(in_FS_OFFSET + 0x28);
  puVar19 = &adb_trace_mask;
  puVar20 = adb_trace_severity;
  if ((((byte)adb_trace_mask & 0x20) != 0) && ((int)adb_trace_severity._20_4_ < 2)) {
    puStack_d8 = &UNK_0040594f;
    cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
    if (cVar3 != '\0') {
      puStack_d8 = &UNK_0040595c;
      puStack_c8 = (undefined4 *)func_0x0099bce0();
      uStack_cc = *puStack_c8;
      puStack_d8 = &UNK_0040598b;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_a8,&UNK_00159712,99,1,0,0xffffffff);
      puStack_d8 = &UNK_00405993;
      uVar9 = _ZN7android4base10LogMessage6streamEv(auStack_a8);
      puStack_d8 = &UNK_004059a7;
      uVar9 = func_0x0032eb30(uVar9,&UNK_0015fcd2,6);
      puStack_d8 = &UNK_004059b5;
      _Z17command_to_stringj(&uStack_c0,*puVar18);
      puStack_d8 = &UNK_004059c1;
      uVar9 = func_0x0032e5a0(uVar9,&uStack_c0);
      puStack_d8 = &UNK_004059d5;
      uVar9 = func_0x0032eb30(uVar9,&UNK_0017245f,9);
      puStack_d8 = &UNK_004059e0;
      _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj(uVar9,puVar18[3]);
      if (((byte)uStack_c0 & 1) != 0) {
        puStack_d8 = &UNK_004059f7;
        _ZdaPvSt11align_val_t
                  (uStack_b0,CONCAT71(uStack_c0._1_7_,(byte)uStack_c0) & 0xfffffffffffffffe);
      }
      puStack_d8 = &UNK_00405a00;
      _ZN7android4base10LogMessageD2Ev(auStack_a8);
      *puStack_c8 = uStack_cc;
    }
  }
  auStack_a8[0] = 0;
  puVar12 = *(uint **)(param_1 + 2);
  puVar10 = (uint *)(ulong)(byte)param_1[0x13];
  puStack_d8 = &UNK_00405818;
  uVar6 = libusb_bulk_transfer(puVar12,puVar10,puVar18,0x18,auStack_a8,0);
  if ((uVar6 == 0) && (auStack_a8[0] == 0x18)) {
    uVar6 = puVar18[10];
    puVar13 = (uint *)(ulong)uVar6;
    puVar16 = (uint *)0x1;
    if (uVar6 != 0) {
      puVar12 = *(uint **)(param_1 + 2);
      puVar10 = (uint *)(ulong)(byte)param_1[0x13];
      puStack_d8 = &UNK_0040584d;
      uVar7 = libusb_bulk_transfer
                        (puVar12,puVar10,*(undefined8 *)(puVar18 + 6),puVar13,auStack_a8,0);
      if ((uVar7 == 0) && (auStack_a8[0] == uVar6)) {
        if ((param_1[0x10] & uVar6) == 0) {
          if ((((byte)adb_trace_mask & 0x20) != 0) && ((int)adb_trace_severity._20_4_ < 2)) {
            puStack_d8 = &UNK_00405ab5;
            cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
            if (cVar3 != '\0') {
              puStack_d8 = &UNK_00405ac2;
              puVar19 = (undefined4 *)func_0x0099bce0();
              puStack_c8 = (undefined4 *)CONCAT44(puStack_c8._4_4_,*puVar19);
              puVar20 = (undefined1 *)&uStack_c0;
              puStack_d8 = &UNK_00405af0;
              _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                        (puVar20,&UNK_00159712,0x7a,1,0,0xffffffff);
              puStack_d8 = &UNK_00405af8;
              uVar9 = _ZN7android4base10LogMessage6streamEv(puVar20);
              puStack_d8 = &UNK_00405b0c;
              uVar9 = func_0x0032eb30(uVar9,&UNK_00159744,0x1a);
              puStack_d8 = &UNK_00405b17;
              uVar9 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(uVar9,uVar6);
              puStack_d8 = &UNK_00405b2b;
              uVar9 = func_0x0032eb30(uVar9,&UNK_00178b98,0x10);
              puStack_d8 = &UNK_00405b37;
              uVar9 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(uVar9,param_1[0x11]);
              puStack_d8 = &UNK_00405b4b;
              uVar9 = func_0x0032eb30(uVar9,&UNK_001645ae,9);
              puStack_d8 = &UNK_00405b5d;
              uVar9 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi
                                (uVar9,(long)(int)uVar6 % (long)(int)param_1[0x11] & 0xffffffff);
              puStack_d8 = &UNK_00405b71;
              func_0x0032eb30(uVar9,&UNK_001692c7,1);
              puStack_d8 = &UNK_00405b79;
              _ZN7android4base10LogMessageD2Ev(puVar20);
              *puVar19 = puStack_c8._0_4_;
            }
          }
          puVar12 = *(uint **)(param_1 + 2);
          puVar10 = (uint *)(ulong)(byte)param_1[0x13];
          puStack_d8 = &UNK_00405892;
          libusb_bulk_transfer(puVar12,puVar10,*(undefined8 *)(puVar18 + 6),0,auStack_a8,0);
        }
        puVar16 = (uint *)0x1;
      }
      else {
        puVar13 = (uint *)(ulong)uVar7;
        puVar16 = (uint *)0x0;
        if ((((byte)adb_trace_mask & 0x20) != 0) && ((int)adb_trace_severity._20_4_ < 2)) {
          puVar12 = (uint *)0x1;
          puVar10 = (uint *)0x0;
          puStack_d8 = &UNK_00405a1a;
          cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc();
          puVar16 = (uint *)0x0;
          if (cVar3 != '\0') {
            puStack_d8 = &UNK_00405a2b;
            puVar18 = (uint *)func_0x0099bce0();
            uVar6 = *puVar18;
            puStack_d8 = &UNK_00405a57;
            _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                      (&uStack_c0,&UNK_00159712,0x75,1,0,0xffffffff);
            puStack_d8 = &UNK_00405a5f;
            uVar9 = _ZN7android4base10LogMessage6streamEv(&uStack_c0);
            puVar17 = &UNK_00164587;
            uVar15 = 0x26;
            goto code_r0x00405a6b;
          }
        }
      }
    }
  }
  else {
    puVar13 = (uint *)(ulong)uVar6;
    puVar16 = (uint *)0x0;
    if ((((byte)adb_trace_mask & 0x20) != 0) && ((int)adb_trace_severity._20_4_ < 2)) {
      puVar12 = (uint *)0x1;
      puVar10 = (uint *)0x0;
      puStack_d8 = &UNK_004058b8;
      cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc();
      puVar16 = (uint *)0x0;
      if (cVar3 != '\0') {
        puStack_d8 = &UNK_004058c5;
        puVar18 = (uint *)func_0x0099bce0();
        uVar6 = *puVar18;
        puStack_d8 = &UNK_004058f1;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (&uStack_c0,&UNK_00159712,0x6a,1,0,0xffffffff);
        puStack_d8 = &UNK_004058f9;
        uVar9 = _ZN7android4base10LogMessage6streamEv(&uStack_c0);
        puVar17 = &UNK_00166154;
        uVar15 = 0x25;
code_r0x00405a6b:
        param_1 = (uint *)&uStack_c0;
        puVar20 = (undefined1 *)(ulong)uVar6;
        puStack_d8 = &UNK_00405a73;
        puVar19 = (undefined4 *)func_0x0032eb30(uVar9,puVar17,uVar15);
        puStack_d8 = &UNK_00405a7e;
        puVar13 = (uint *)libusb_error_name(puVar13);
        puStack_d8 = &UNK_00405a89;
        uVar9 = func_0x0099bcf0(puVar13);
        puStack_d8 = &UNK_00405a97;
        puVar10 = puVar13;
        func_0x0032eb30(puVar19,puVar13,uVar9);
        puStack_d8 = &UNK_00405a9f;
        puVar12 = param_1;
        _ZN7android4base10LogMessageD2Ev();
        puVar16 = (uint *)0x0;
        *puVar18 = uVar6;
      }
    }
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_a0) {
    return puVar16;
  }
  puStack_d8 = &UNK_00405b8a;
  func_0x0099bd00();
  puStack_d8 = (undefined *)&puStack_70;
  puStack_e0 = puVar13;
  puStack_e8 = param_1;
  pbStack_f0 = puVar20;
  puStack_f8 = puVar19;
  puStack_100 = puVar18;
  lStack_108 = *(long *)(in_FS_OFFSET + 0x28);
  puVar19 = &adb_trace_mask;
  puVar20 = adb_trace_severity;
  if ((((byte)adb_trace_mask & 0x20) != 0) && ((int)adb_trace_severity._20_4_ < 2)) {
    apuStack_150[0] = &UNK_00405df3;
    cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
    if (cVar3 != '\0') {
      apuStack_150[0] = &UNK_00405e00;
      puVar13 = (uint *)func_0x0099bce0();
      puStack_138 = (undefined4 *)CONCAT44(puStack_138._4_4_,*puVar13);
      apuStack_150[0] = &UNK_00405e2b;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&uStack_130,&UNK_00159712,0x85,1,0,0xffffffff);
      apuStack_150[0] = &UNK_00405e34;
      uVar9 = _ZN7android4base10LogMessage6streamEv(&uStack_130);
      apuStack_150[0] = &UNK_00405e48;
      func_0x0032eb30(uVar9,&UNK_00172469,0x13);
      apuStack_150[0] = &UNK_00405e51;
      _ZN7android4base10LogMessageD2Ev(&uStack_130);
      *puVar13 = (uint)puStack_138;
    }
  }
  uStack_10c = 0;
  puVar18 = *(uint **)(puVar12 + 2);
  puVar16 = (uint *)(ulong)*(byte *)((long)puVar12 + 0x4d);
  apuStack_150[0] = &UNK_00405bf9;
  uVar6 = libusb_bulk_transfer(puVar18,puVar16,puVar10,0x18,&uStack_10c,0);
  bVar22 = ((byte)adb_trace_mask & 0x20) != 0;
  if ((uVar6 == 0) && (uStack_10c == 0x18)) {
    if ((int)adb_trace_severity._20_4_ < 2 && bVar22) {
      apuStack_150[0] = &UNK_00405e68;
      cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
      if (cVar3 != '\0') {
        apuStack_150[0] = &UNK_00405e75;
        puStack_138 = (undefined4 *)func_0x0099bce0();
        uStack_13c = *puStack_138;
        apuStack_150[0] = &UNK_00405ea4;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (auStack_118,&UNK_00159712,0x8e,1,0,0xffffffff);
        apuStack_150[0] = &UNK_00405eac;
        uVar9 = _ZN7android4base10LogMessage6streamEv(auStack_118);
        apuStack_150[0] = &UNK_00405ec0;
        puVar13 = (uint *)func_0x0032eb30(uVar9,&UNK_0017247d,5);
        apuStack_150[0] = &UNK_00405ece;
        _Z17command_to_stringj(&uStack_130,*puVar10);
        apuStack_150[0] = &UNK_00405eda;
        uVar9 = func_0x0032e5a0(puVar13,&uStack_130);
        apuStack_150[0] = &UNK_00405eee;
        uVar9 = func_0x0032eb30(uVar9,&UNK_0015c92e,0x17);
        apuStack_150[0] = &UNK_00405ef9;
        _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj(uVar9,puVar10[3]);
        if (((byte)uStack_130 & 1) != 0) {
          apuStack_150[0] = &UNK_00405f10;
          _ZdaPvSt11align_val_t
                    (uStack_120,CONCAT71(uStack_130._1_7_,(byte)uStack_130) & 0xfffffffffffffffe);
        }
        apuStack_150[0] = &UNK_00405f19;
        _ZN7android4base10LogMessageD2Ev(auStack_118);
        *puStack_138 = uStack_13c;
      }
    }
    puVar18 = puVar10 + 6;
    if (puVar10[3] == 0) {
      puVar16 = (uint *)0x0;
      apuStack_150[0] = &UNK_00405db7;
      _ZN5Block6resizeEm();
    }
    else {
      apuStack_150[0] = &UNK_00405c3b;
      _ZN5Block6resizeEm();
      uVar6 = puVar10[3];
      puVar13 = (uint *)(ulong)uVar6;
      puVar18 = *(uint **)(puVar12 + 2);
      puVar16 = (uint *)(ulong)*(byte *)((long)puVar12 + 0x4d);
      apuStack_150[0] = &UNK_00405c5b;
      uVar7 = libusb_bulk_transfer(puVar18,puVar16,*(long *)(puVar10 + 6),puVar13,&uStack_10c,0);
      bVar22 = ((byte)adb_trace_mask & 0x20) == 0;
      if ((uVar7 != 0) || (uStack_10c != uVar6)) {
        if (1 >= (int)adb_trace_severity._20_4_ && !bVar22) {
          puVar12 = (uint *)(ulong)uVar7;
          puVar18 = (uint *)0x1;
          puVar16 = (uint *)0x0;
          apuStack_150[0] = &UNK_00405f36;
          cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc();
          puVar11 = (uint *)0x0;
          if (cVar3 == '\0') goto code_r0x00405dc5;
          apuStack_150[0] = &UNK_00405f47;
          puVar10 = (uint *)func_0x0099bce0();
          uVar6 = *puVar10;
          apuStack_150[0] = &UNK_00405f73;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (&uStack_130,&UNK_00159712,0x9a,1,0,0xffffffff);
          apuStack_150[0] = &UNK_00405f7b;
          uVar9 = _ZN7android4base10LogMessage6streamEv(&uStack_130);
          puVar17 = &UNK_0017073f;
          uVar15 = 0x28;
          goto code_r0x00405f87;
        }
        goto code_r0x00405dc3;
      }
      puVar11 = (uint *)0x1;
      if (1 < (int)adb_trace_severity._20_4_ || bVar22) goto code_r0x00405dc5;
      puVar18 = (uint *)0x1;
      puVar16 = (uint *)0x0;
      apuStack_150[0] = &UNK_00405c96;
      cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc();
      if (cVar3 != '\0') {
        apuStack_150[0] = &UNK_00405ca3;
        puVar12 = (uint *)func_0x0099bce0();
        uVar6 = *puVar12;
        puVar20 = (undefined1 *)(ulong)uVar6;
        apuStack_150[0] = &UNK_00405ccf;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (auStack_118,&UNK_00159712,0x9d,1,0,0xffffffff);
        apuStack_150[0] = &UNK_00405cd7;
        uVar9 = _ZN7android4base10LogMessage6streamEv(auStack_118);
        apuStack_150[0] = &UNK_00405ceb;
        puVar13 = (uint *)func_0x0032eb30(uVar9,&UNK_0017247d,5);
        uVar7 = *puVar10;
        puVar10 = (uint *)&uStack_130;
        apuStack_150[0] = &UNK_00405cfc;
        _Z17command_to_stringj(puVar10,uVar7);
        apuStack_150[0] = &UNK_00405d07;
        uVar9 = func_0x0032e5a0(puVar13,puVar10);
        apuStack_150[0] = &UNK_00405d1b;
        uVar9 = func_0x0032eb30(uVar9,&UNK_0017ef01,6);
        puVar16 = (uint *)(ulong)uStack_10c;
        apuStack_150[0] = &UNK_00405d26;
        _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(uVar9);
        if (((byte)uStack_130 & 1) != 0) {
          puVar16 = (uint *)(CONCAT71(uStack_130._1_7_,(byte)uStack_130) & 0xfffffffffffffffe);
          apuStack_150[0] = &UNK_00405d3d;
          _ZdaPvSt11align_val_t(uStack_120);
        }
        puVar18 = auStack_118;
        apuStack_150[0] = &UNK_00405d46;
        _ZN7android4base10LogMessageD2Ev();
        *puVar12 = uVar6;
      }
    }
    puVar11 = (uint *)0x1;
  }
  else {
    if ((int)adb_trace_severity._20_4_ < 2 && bVar22) {
      puVar12 = (uint *)(ulong)uVar6;
      puVar18 = (uint *)0x1;
      puVar16 = (uint *)0x0;
      apuStack_150[0] = &UNK_00405d5e;
      cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc();
      puVar11 = (uint *)0x0;
      if (cVar3 == '\0') goto code_r0x00405dc5;
      apuStack_150[0] = &UNK_00405d6b;
      puVar10 = (uint *)func_0x0099bce0();
      uVar6 = *puVar10;
      apuStack_150[0] = &UNK_00405d97;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&uStack_130,&UNK_00159712,0x8b,1,0,0xffffffff);
      apuStack_150[0] = &UNK_00405d9f;
      uVar9 = _ZN7android4base10LogMessage6streamEv(&uStack_130);
      puVar17 = &UNK_0017eedc;
      uVar15 = 0x24;
code_r0x00405f87:
      puVar13 = (uint *)&uStack_130;
      puVar19 = (undefined4 *)(ulong)uVar6;
      apuStack_150[0] = &UNK_00405f8f;
      puVar20 = (undefined1 *)func_0x0032eb30(uVar9,puVar17,uVar15);
      apuStack_150[0] = &UNK_00405f9a;
      puVar12 = (uint *)libusb_error_name(puVar12);
      apuStack_150[0] = &UNK_00405fa5;
      uVar9 = func_0x0099bcf0(puVar12);
      apuStack_150[0] = &UNK_00405fb3;
      puVar16 = puVar12;
      func_0x0032eb30(puVar20,puVar12,uVar9);
      apuStack_150[0] = &UNK_00405fbb;
      puVar18 = puVar13;
      _ZN7android4base10LogMessageD2Ev();
      puVar11 = (uint *)0x0;
      *puVar10 = uVar6;
      goto code_r0x00405dc5;
    }
code_r0x00405dc3:
    puVar11 = (uint *)0x0;
  }
code_r0x00405dc5:
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_108) {
    return puVar11;
  }
  apuStack_150[0] = &UNK_00405fca;
  func_0x0099bd00();
  apuStack_150[0] = (undefined *)&puStack_d8;
  puStack_158 = puVar13;
  puStack_160 = puVar12;
  puStack_168 = puVar19;
  puStack_170 = puVar20;
  puStack_178 = puVar10;
  puStack_180 = *(uint **)(in_FS_OFFSET + 0x28);
  puVar18 = *(uint **)(puVar18 + 2);
  if (puVar18 != (uint *)0x0) {
    puStack_198 = &UNK_00405ffc;
    uVar6 = libusb_reset_device();
    if (uVar6 != 0) {
      puVar10 = (uint *)(ulong)uVar6;
      puVar18 = (uint *)0x4;
      puVar16 = (uint *)0x0;
      puStack_198 = &UNK_0040600e;
      cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc();
      if (cVar3 != '\0') {
        puStack_198 = &UNK_00406039;
        puVar12 = (uint *)func_0x0099bce0();
        uVar7 = *puVar12;
        puVar19 = (undefined4 *)(ulong)uVar7;
        puVar13 = auStack_188;
        puStack_198 = &UNK_00406065;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (puVar13,&UNK_00159712,0xa8,4,0,0xffffffff);
        puStack_198 = &UNK_0040606d;
        uVar9 = _ZN7android4base10LogMessage6streamEv(puVar13);
        puStack_198 = &UNK_00406081;
        puVar20 = (undefined1 *)func_0x0032eb30(uVar9,&UNK_00180452,0x1c);
        puStack_198 = &UNK_0040608b;
        puVar10 = (uint *)libusb_error_name(uVar6);
        puStack_198 = &UNK_00406096;
        uVar9 = func_0x0099bcf0(puVar10);
        puStack_198 = &UNK_004060a4;
        puVar16 = puVar10;
        func_0x0032eb30(puVar20,puVar10,uVar9);
        puStack_198 = &UNK_004060ac;
        puVar18 = puVar13;
        _ZN7android4base10LogMessageD2Ev();
        *puVar12 = uVar7;
      }
    }
  }
  if (*(uint **)(in_FS_OFFSET + 0x28) == puStack_180) {
    return *(uint **)(in_FS_OFFSET + 0x28);
  }
  puStack_198 = &UNK_004060b9;
  func_0x0099bd00();
  lStack_1c8 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_1e8 = 0;
  uStack_1e0 = 0;
  uStack_1d8 = 0;
  puVar16 = *(uint **)puVar16;
  puVar14 = &uStack_1e8;
  puStack_1c0 = puVar10;
  puStack_1b8 = puVar20;
  puStack_1b0 = puVar19;
  puStack_1a8 = puVar12;
  puStack_1a0 = puVar13;
  puStack_198 = (undefined *)apuStack_150;
  iVar8 = libusb_get_device_descriptor();
  if (iVar8 == 0) {
    *(undefined2 *)(puVar18 + 4) = uStack_1d8;
    *puVar18 = (uint)uStack_1e8;
    puVar18[1] = uStack_1e8._4_4_;
    puVar18[2] = (uint)uStack_1e0;
    puVar18[3] = uStack_1e0._4_4_;
    uVar5 = 1;
  }
  else {
    puVar16 = (uint *)0x3;
    puVar14 = (undefined8 *)0x0;
    cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc();
    if (cVar3 != '\0') {
      puVar19 = (undefined4 *)func_0x0099bce0();
      uVar1 = *puVar19;
      puVar16 = auStack_1f0;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (puVar16,&UNK_00159712,0xbe,3,0,0xffffffff);
      uVar9 = _ZN7android4base10LogMessage6streamEv(puVar16);
      uVar9 = func_0x0032eb30(uVar9,&UNK_00174095,0x2c);
      puVar14 = (undefined8 *)libusb_error_name(iVar8);
      uVar15 = func_0x0099bcf0(puVar14);
      func_0x0032eb30(uVar9,puVar14,uVar15);
      _ZN7android4base10LogMessageD2Ev();
      *puVar19 = uVar1;
    }
    *(undefined1 *)puVar18 = 0;
    uVar5 = 0;
  }
  *(undefined1 *)((long)puVar18 + 0x12) = uVar5;
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_1c8) {
    return puVar18;
  }
  func_0x0099bd00();
  if ((*(byte *)(puVar14 + 5) & 1) == 0) {
    *(undefined8 *)(puVar16 + 4) = puVar14[7];
    uVar9 = puVar14[6];
    *(undefined8 *)puVar16 = puVar14[5];
    *(undefined8 *)(puVar16 + 2) = uVar9;
    return puVar16;
  }
  func_0x00330340();
  return puVar16;
}


