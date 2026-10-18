// Function: _ZN12LibUsbDevice5WriteEP7apacket
// Address: 004057b0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


uint * _ZN12LibUsbDevice5WriteEP7apacket(uint *param_1,uint *param_2)

{
  undefined4 uVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  undefined8 uVar9;
  uint *puVar10;
  uint *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  uint *puVar14;
  undefined *puVar15;
  uint *puVar16;
  undefined4 *puVar17;
  undefined1 *puVar18;
  long in_FS_OFFSET;
  bool bVar19;
  uint auStack_188 [2];
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined2 uStack_170;
  long lStack_160;
  uint *puStack_158;
  undefined1 *puStack_150;
  undefined4 *puStack_148;
  uint *puStack_140;
  uint *puStack_138;
  undefined *puStack_130;
  uint auStack_120 [2];
  uint *puStack_118;
  uint *puStack_110;
  undefined1 *puStack_108;
  undefined4 *puStack_100;
  uint *puStack_f8;
  uint *puStack_f0;
  undefined *apuStack_e8 [2];
  undefined4 uStack_d4;
  undefined4 *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_b8;
  uint auStack_b0 [3];
  uint uStack_a4;
  long lStack_a0;
  uint *puStack_98;
  undefined4 *puStack_90;
  byte *pbStack_88;
  uint *puStack_80;
  uint *puStack_78;
  undefined *puStack_70;
  undefined4 uStack_64;
  undefined4 *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_48;
  uint auStack_40 [2];
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  puVar17 = &adb_trace_mask;
  puVar18 = adb_trace_severity;
  if ((((byte)adb_trace_mask & 0x20) != 0) && ((int)adb_trace_severity._20_4_ < 2)) {
    puStack_70 = &UNK_0040594f;
    cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
    if (cVar2 != '\0') {
      puStack_70 = &UNK_0040595c;
      puStack_60 = (undefined4 *)func_0x0099bce0();
      uStack_64 = *puStack_60;
      puStack_70 = &UNK_0040598b;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_40,&UNK_00159712,99,1,0,0xffffffff);
      puStack_70 = &UNK_00405993;
      uVar9 = _ZN7android4base10LogMessage6streamEv(auStack_40);
      puStack_70 = &UNK_004059a7;
      uVar9 = func_0x0032eb30(uVar9,&UNK_0015fcd2,6);
      puStack_70 = &UNK_004059b5;
      _Z17command_to_stringj(&uStack_58,*param_2);
      puStack_70 = &UNK_004059c1;
      uVar9 = func_0x0032e5a0(uVar9,&uStack_58);
      puStack_70 = &UNK_004059d5;
      uVar9 = func_0x0032eb30(uVar9,&UNK_0017245f,9);
      puStack_70 = &UNK_004059e0;
      _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj(uVar9,param_2[3]);
      if (((byte)uStack_58 & 1) != 0) {
        puStack_70 = &UNK_004059f7;
        _ZdaPvSt11align_val_t
                  (uStack_48,CONCAT71(uStack_58._1_7_,(byte)uStack_58) & 0xfffffffffffffffe);
      }
      puStack_70 = &UNK_00405a00;
      _ZN7android4base10LogMessageD2Ev(auStack_40);
      *puStack_60 = uStack_64;
    }
  }
  auStack_40[0] = 0;
  puVar8 = *(uint **)(param_1 + 2);
  puVar11 = (uint *)(ulong)(byte)param_1[0x13];
  puStack_70 = &UNK_00405818;
  uVar4 = libusb_bulk_transfer(puVar8,puVar11,param_2,0x18,auStack_40,0);
  if ((uVar4 == 0) && (auStack_40[0] == 0x18)) {
    uVar4 = param_2[10];
    puVar10 = (uint *)(ulong)uVar4;
    puVar16 = (uint *)0x1;
    if (uVar4 != 0) {
      puVar8 = *(uint **)(param_1 + 2);
      puVar11 = (uint *)(ulong)(byte)param_1[0x13];
      puStack_70 = &UNK_0040584d;
      uVar5 = libusb_bulk_transfer(puVar8,puVar11,*(undefined8 *)(param_2 + 6),puVar10,auStack_40,0)
      ;
      if ((uVar5 == 0) && (auStack_40[0] == uVar4)) {
        if ((param_1[0x10] & uVar4) == 0) {
          if ((((byte)adb_trace_mask & 0x20) != 0) && ((int)adb_trace_severity._20_4_ < 2)) {
            puStack_70 = &UNK_00405ab5;
            cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
            if (cVar2 != '\0') {
              puStack_70 = &UNK_00405ac2;
              puVar17 = (undefined4 *)func_0x0099bce0();
              puStack_60 = (undefined4 *)CONCAT44(puStack_60._4_4_,*puVar17);
              puVar18 = (undefined1 *)&uStack_58;
              puStack_70 = &UNK_00405af0;
              _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                        (puVar18,&UNK_00159712,0x7a,1,0,0xffffffff);
              puStack_70 = &UNK_00405af8;
              uVar9 = _ZN7android4base10LogMessage6streamEv(puVar18);
              puStack_70 = &UNK_00405b0c;
              uVar9 = func_0x0032eb30(uVar9,&UNK_00159744,0x1a);
              puStack_70 = &UNK_00405b17;
              uVar9 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(uVar9,uVar4);
              puStack_70 = &UNK_00405b2b;
              uVar9 = func_0x0032eb30(uVar9,&UNK_00178b98,0x10);
              puStack_70 = &UNK_00405b37;
              uVar9 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(uVar9,param_1[0x11]);
              puStack_70 = &UNK_00405b4b;
              uVar9 = func_0x0032eb30(uVar9,&UNK_001645ae,9);
              puStack_70 = &UNK_00405b5d;
              uVar9 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi
                                (uVar9,(long)(int)uVar4 % (long)(int)param_1[0x11] & 0xffffffff);
              puStack_70 = &UNK_00405b71;
              func_0x0032eb30(uVar9,&UNK_001692c7,1);
              puStack_70 = &UNK_00405b79;
              _ZN7android4base10LogMessageD2Ev(puVar18);
              *puVar17 = puStack_60._0_4_;
            }
          }
          puVar8 = *(uint **)(param_1 + 2);
          puVar11 = (uint *)(ulong)(byte)param_1[0x13];
          puStack_70 = &UNK_00405892;
          libusb_bulk_transfer(puVar8,puVar11,*(undefined8 *)(param_2 + 6),0,auStack_40,0);
        }
        puVar16 = (uint *)0x1;
      }
      else {
        puVar10 = (uint *)(ulong)uVar5;
        puVar16 = (uint *)0x0;
        if ((((byte)adb_trace_mask & 0x20) != 0) && ((int)adb_trace_severity._20_4_ < 2)) {
          puVar8 = (uint *)0x1;
          puVar11 = (uint *)0x0;
          puStack_70 = &UNK_00405a1a;
          cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc();
          puVar16 = (uint *)0x0;
          if (cVar2 != '\0') {
            puStack_70 = &UNK_00405a2b;
            param_2 = (uint *)func_0x0099bce0();
            uVar4 = *param_2;
            puStack_70 = &UNK_00405a57;
            _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                      (&uStack_58,&UNK_00159712,0x75,1,0,0xffffffff);
            puStack_70 = &UNK_00405a5f;
            uVar9 = _ZN7android4base10LogMessage6streamEv(&uStack_58);
            puVar15 = &UNK_00164587;
            uVar13 = 0x26;
            goto code_r0x00405a6b;
          }
        }
      }
    }
  }
  else {
    puVar10 = (uint *)(ulong)uVar4;
    puVar16 = (uint *)0x0;
    if ((((byte)adb_trace_mask & 0x20) != 0) && ((int)adb_trace_severity._20_4_ < 2)) {
      puVar8 = (uint *)0x1;
      puVar11 = (uint *)0x0;
      puStack_70 = &UNK_004058b8;
      cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc();
      puVar16 = (uint *)0x0;
      if (cVar2 != '\0') {
        puStack_70 = &UNK_004058c5;
        param_2 = (uint *)func_0x0099bce0();
        uVar4 = *param_2;
        puStack_70 = &UNK_004058f1;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (&uStack_58,&UNK_00159712,0x6a,1,0,0xffffffff);
        puStack_70 = &UNK_004058f9;
        uVar9 = _ZN7android4base10LogMessage6streamEv(&uStack_58);
        puVar15 = &UNK_00166154;
        uVar13 = 0x25;
code_r0x00405a6b:
        param_1 = (uint *)&uStack_58;
        puVar18 = (undefined1 *)(ulong)uVar4;
        puStack_70 = &UNK_00405a73;
        puVar17 = (undefined4 *)func_0x0032eb30(uVar9,puVar15,uVar13);
        puStack_70 = &UNK_00405a7e;
        puVar10 = (uint *)libusb_error_name(puVar10);
        puStack_70 = &UNK_00405a89;
        uVar9 = func_0x0099bcf0(puVar10);
        puStack_70 = &UNK_00405a97;
        puVar11 = puVar10;
        func_0x0032eb30(puVar17,puVar10,uVar9);
        puStack_70 = &UNK_00405a9f;
        puVar8 = param_1;
        _ZN7android4base10LogMessageD2Ev();
        puVar16 = (uint *)0x0;
        *param_2 = uVar4;
      }
    }
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return puVar16;
  }
  puStack_70 = &UNK_00405b8a;
  func_0x0099bd00();
  puStack_70 = &stack0xfffffffffffffff8;
  puStack_78 = puVar10;
  puStack_80 = param_1;
  pbStack_88 = puVar18;
  puStack_90 = puVar17;
  puStack_98 = param_2;
  lStack_a0 = *(long *)(in_FS_OFFSET + 0x28);
  puVar17 = &adb_trace_mask;
  puVar18 = adb_trace_severity;
  if ((((byte)adb_trace_mask & 0x20) != 0) && ((int)adb_trace_severity._20_4_ < 2)) {
    apuStack_e8[0] = &UNK_00405df3;
    cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
    if (cVar2 != '\0') {
      apuStack_e8[0] = &UNK_00405e00;
      puVar10 = (uint *)func_0x0099bce0();
      puStack_d0 = (undefined4 *)CONCAT44(puStack_d0._4_4_,*puVar10);
      apuStack_e8[0] = &UNK_00405e2b;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&uStack_c8,&UNK_00159712,0x85,1,0,0xffffffff);
      apuStack_e8[0] = &UNK_00405e34;
      uVar9 = _ZN7android4base10LogMessage6streamEv(&uStack_c8);
      apuStack_e8[0] = &UNK_00405e48;
      func_0x0032eb30(uVar9,&UNK_00172469,0x13);
      apuStack_e8[0] = &UNK_00405e51;
      _ZN7android4base10LogMessageD2Ev(&uStack_c8);
      *puVar10 = (uint)puStack_d0;
    }
  }
  uStack_a4 = 0;
  puVar16 = *(uint **)(puVar8 + 2);
  puVar14 = (uint *)(ulong)*(byte *)((long)puVar8 + 0x4d);
  apuStack_e8[0] = &UNK_00405bf9;
  uVar4 = libusb_bulk_transfer(puVar16,puVar14,puVar11,0x18,&uStack_a4,0);
  bVar19 = ((byte)adb_trace_mask & 0x20) != 0;
  if ((uVar4 == 0) && (uStack_a4 == 0x18)) {
    if ((int)adb_trace_severity._20_4_ < 2 && bVar19) {
      apuStack_e8[0] = &UNK_00405e68;
      cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
      if (cVar2 != '\0') {
        apuStack_e8[0] = &UNK_00405e75;
        puStack_d0 = (undefined4 *)func_0x0099bce0();
        uStack_d4 = *puStack_d0;
        apuStack_e8[0] = &UNK_00405ea4;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (auStack_b0,&UNK_00159712,0x8e,1,0,0xffffffff);
        apuStack_e8[0] = &UNK_00405eac;
        uVar9 = _ZN7android4base10LogMessage6streamEv(auStack_b0);
        apuStack_e8[0] = &UNK_00405ec0;
        puVar10 = (uint *)func_0x0032eb30(uVar9,&UNK_0017247d,5);
        apuStack_e8[0] = &UNK_00405ece;
        _Z17command_to_stringj(&uStack_c8,*puVar11);
        apuStack_e8[0] = &UNK_00405eda;
        uVar9 = func_0x0032e5a0(puVar10,&uStack_c8);
        apuStack_e8[0] = &UNK_00405eee;
        uVar9 = func_0x0032eb30(uVar9,&UNK_0015c92e,0x17);
        apuStack_e8[0] = &UNK_00405ef9;
        _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj(uVar9,puVar11[3]);
        if (((byte)uStack_c8 & 1) != 0) {
          apuStack_e8[0] = &UNK_00405f10;
          _ZdaPvSt11align_val_t
                    (uStack_b8,CONCAT71(uStack_c8._1_7_,(byte)uStack_c8) & 0xfffffffffffffffe);
        }
        apuStack_e8[0] = &UNK_00405f19;
        _ZN7android4base10LogMessageD2Ev(auStack_b0);
        *puStack_d0 = uStack_d4;
      }
    }
    puVar16 = puVar11 + 6;
    if (puVar11[3] == 0) {
      puVar14 = (uint *)0x0;
      apuStack_e8[0] = &UNK_00405db7;
      _ZN5Block6resizeEm();
    }
    else {
      apuStack_e8[0] = &UNK_00405c3b;
      _ZN5Block6resizeEm();
      uVar4 = puVar11[3];
      puVar10 = (uint *)(ulong)uVar4;
      puVar16 = *(uint **)(puVar8 + 2);
      puVar14 = (uint *)(ulong)*(byte *)((long)puVar8 + 0x4d);
      apuStack_e8[0] = &UNK_00405c5b;
      uVar5 = libusb_bulk_transfer(puVar16,puVar14,*(long *)(puVar11 + 6),puVar10,&uStack_a4,0);
      bVar19 = ((byte)adb_trace_mask & 0x20) == 0;
      if ((uVar5 != 0) || (uStack_a4 != uVar4)) {
        if (1 >= (int)adb_trace_severity._20_4_ && !bVar19) {
          puVar8 = (uint *)(ulong)uVar5;
          puVar16 = (uint *)0x1;
          puVar14 = (uint *)0x0;
          apuStack_e8[0] = &UNK_00405f36;
          cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc();
          puVar7 = (uint *)0x0;
          if (cVar2 == '\0') goto code_r0x00405dc5;
          apuStack_e8[0] = &UNK_00405f47;
          puVar11 = (uint *)func_0x0099bce0();
          uVar4 = *puVar11;
          apuStack_e8[0] = &UNK_00405f73;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (&uStack_c8,&UNK_00159712,0x9a,1,0,0xffffffff);
          apuStack_e8[0] = &UNK_00405f7b;
          uVar9 = _ZN7android4base10LogMessage6streamEv(&uStack_c8);
          puVar15 = &UNK_0017073f;
          uVar13 = 0x28;
          goto code_r0x00405f87;
        }
        goto code_r0x00405dc3;
      }
      puVar7 = (uint *)0x1;
      if (1 < (int)adb_trace_severity._20_4_ || bVar19) goto code_r0x00405dc5;
      puVar16 = (uint *)0x1;
      puVar14 = (uint *)0x0;
      apuStack_e8[0] = &UNK_00405c96;
      cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc();
      if (cVar2 != '\0') {
        apuStack_e8[0] = &UNK_00405ca3;
        puVar8 = (uint *)func_0x0099bce0();
        uVar4 = *puVar8;
        puVar18 = (undefined1 *)(ulong)uVar4;
        apuStack_e8[0] = &UNK_00405ccf;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (auStack_b0,&UNK_00159712,0x9d,1,0,0xffffffff);
        apuStack_e8[0] = &UNK_00405cd7;
        uVar9 = _ZN7android4base10LogMessage6streamEv(auStack_b0);
        apuStack_e8[0] = &UNK_00405ceb;
        puVar10 = (uint *)func_0x0032eb30(uVar9,&UNK_0017247d,5);
        uVar5 = *puVar11;
        puVar11 = (uint *)&uStack_c8;
        apuStack_e8[0] = &UNK_00405cfc;
        _Z17command_to_stringj(puVar11,uVar5);
        apuStack_e8[0] = &UNK_00405d07;
        uVar9 = func_0x0032e5a0(puVar10,puVar11);
        apuStack_e8[0] = &UNK_00405d1b;
        uVar9 = func_0x0032eb30(uVar9,&UNK_0017ef01,6);
        puVar14 = (uint *)(ulong)uStack_a4;
        apuStack_e8[0] = &UNK_00405d26;
        _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(uVar9);
        if (((byte)uStack_c8 & 1) != 0) {
          puVar14 = (uint *)(CONCAT71(uStack_c8._1_7_,(byte)uStack_c8) & 0xfffffffffffffffe);
          apuStack_e8[0] = &UNK_00405d3d;
          _ZdaPvSt11align_val_t(uStack_b8);
        }
        puVar16 = auStack_b0;
        apuStack_e8[0] = &UNK_00405d46;
        _ZN7android4base10LogMessageD2Ev();
        *puVar8 = uVar4;
      }
    }
    puVar7 = (uint *)0x1;
  }
  else {
    if ((int)adb_trace_severity._20_4_ < 2 && bVar19) {
      puVar8 = (uint *)(ulong)uVar4;
      puVar16 = (uint *)0x1;
      puVar14 = (uint *)0x0;
      apuStack_e8[0] = &UNK_00405d5e;
      cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc();
      puVar7 = (uint *)0x0;
      if (cVar2 == '\0') goto code_r0x00405dc5;
      apuStack_e8[0] = &UNK_00405d6b;
      puVar11 = (uint *)func_0x0099bce0();
      uVar4 = *puVar11;
      apuStack_e8[0] = &UNK_00405d97;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&uStack_c8,&UNK_00159712,0x8b,1,0,0xffffffff);
      apuStack_e8[0] = &UNK_00405d9f;
      uVar9 = _ZN7android4base10LogMessage6streamEv(&uStack_c8);
      puVar15 = &UNK_0017eedc;
      uVar13 = 0x24;
code_r0x00405f87:
      puVar10 = (uint *)&uStack_c8;
      puVar17 = (undefined4 *)(ulong)uVar4;
      apuStack_e8[0] = &UNK_00405f8f;
      puVar18 = (undefined1 *)func_0x0032eb30(uVar9,puVar15,uVar13);
      apuStack_e8[0] = &UNK_00405f9a;
      puVar8 = (uint *)libusb_error_name(puVar8);
      apuStack_e8[0] = &UNK_00405fa5;
      uVar9 = func_0x0099bcf0(puVar8);
      apuStack_e8[0] = &UNK_00405fb3;
      puVar14 = puVar8;
      func_0x0032eb30(puVar18,puVar8,uVar9);
      apuStack_e8[0] = &UNK_00405fbb;
      puVar16 = puVar10;
      _ZN7android4base10LogMessageD2Ev();
      puVar7 = (uint *)0x0;
      *puVar11 = uVar4;
      goto code_r0x00405dc5;
    }
code_r0x00405dc3:
    puVar7 = (uint *)0x0;
  }
code_r0x00405dc5:
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_a0) {
    return puVar7;
  }
  apuStack_e8[0] = &UNK_00405fca;
  func_0x0099bd00();
  apuStack_e8[0] = (undefined *)&puStack_70;
  puStack_f0 = puVar10;
  puStack_f8 = puVar8;
  puStack_100 = puVar17;
  puStack_108 = puVar18;
  puStack_110 = puVar11;
  puStack_118 = *(uint **)(in_FS_OFFSET + 0x28);
  puVar16 = *(uint **)(puVar16 + 2);
  if (puVar16 != (uint *)0x0) {
    puStack_130 = &UNK_00405ffc;
    uVar4 = libusb_reset_device();
    if (uVar4 != 0) {
      puVar11 = (uint *)(ulong)uVar4;
      puVar16 = (uint *)0x4;
      puVar14 = (uint *)0x0;
      puStack_130 = &UNK_0040600e;
      cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc();
      if (cVar2 != '\0') {
        puStack_130 = &UNK_00406039;
        puVar8 = (uint *)func_0x0099bce0();
        uVar5 = *puVar8;
        puVar17 = (undefined4 *)(ulong)uVar5;
        puVar10 = auStack_120;
        puStack_130 = &UNK_00406065;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (puVar10,&UNK_00159712,0xa8,4,0,0xffffffff);
        puStack_130 = &UNK_0040606d;
        uVar9 = _ZN7android4base10LogMessage6streamEv(puVar10);
        puStack_130 = &UNK_00406081;
        puVar18 = (undefined1 *)func_0x0032eb30(uVar9,&UNK_00180452,0x1c);
        puStack_130 = &UNK_0040608b;
        puVar11 = (uint *)libusb_error_name(uVar4);
        puStack_130 = &UNK_00406096;
        uVar9 = func_0x0099bcf0(puVar11);
        puStack_130 = &UNK_004060a4;
        puVar14 = puVar11;
        func_0x0032eb30(puVar18,puVar11,uVar9);
        puStack_130 = &UNK_004060ac;
        puVar16 = puVar10;
        _ZN7android4base10LogMessageD2Ev();
        *puVar8 = uVar5;
      }
    }
  }
  if (*(uint **)(in_FS_OFFSET + 0x28) == puStack_118) {
    return *(uint **)(in_FS_OFFSET + 0x28);
  }
  puStack_130 = &UNK_004060b9;
  func_0x0099bd00();
  lStack_160 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_180 = 0;
  uStack_178 = 0;
  uStack_170 = 0;
  puVar14 = *(uint **)puVar14;
  puVar12 = &uStack_180;
  puStack_158 = puVar11;
  puStack_150 = puVar18;
  puStack_148 = puVar17;
  puStack_140 = puVar8;
  puStack_138 = puVar10;
  puStack_130 = (undefined *)apuStack_e8;
  iVar6 = libusb_get_device_descriptor();
  if (iVar6 == 0) {
    *(undefined2 *)(puVar16 + 4) = uStack_170;
    *puVar16 = (uint)uStack_180;
    puVar16[1] = uStack_180._4_4_;
    puVar16[2] = (uint)uStack_178;
    puVar16[3] = uStack_178._4_4_;
    uVar3 = 1;
  }
  else {
    puVar14 = (uint *)0x3;
    puVar12 = (undefined8 *)0x0;
    cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc();
    if (cVar2 != '\0') {
      puVar17 = (undefined4 *)func_0x0099bce0();
      uVar1 = *puVar17;
      puVar14 = auStack_188;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (puVar14,&UNK_00159712,0xbe,3,0,0xffffffff);
      uVar9 = _ZN7android4base10LogMessage6streamEv(puVar14);
      uVar9 = func_0x0032eb30(uVar9,&UNK_00174095,0x2c);
      puVar12 = (undefined8 *)libusb_error_name(iVar6);
      uVar13 = func_0x0099bcf0(puVar12);
      func_0x0032eb30(uVar9,puVar12,uVar13);
      _ZN7android4base10LogMessageD2Ev();
      *puVar17 = uVar1;
    }
    *(undefined1 *)puVar16 = 0;
    uVar3 = 0;
  }
  *(undefined1 *)((long)puVar16 + 0x12) = uVar3;
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_160) {
    return puVar16;
  }
  func_0x0099bd00();
  if ((*(byte *)(puVar12 + 5) & 1) == 0) {
    *(undefined8 *)(puVar14 + 4) = puVar12[7];
    uVar9 = puVar12[6];
    *(undefined8 *)puVar14 = puVar12[5];
    *(undefined8 *)(puVar14 + 2) = uVar9;
    return puVar14;
  }
  func_0x00330340();
  return puVar14;
}


