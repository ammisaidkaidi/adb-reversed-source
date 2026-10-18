// Function: _ZN12LibUsbDevice4ReadEP7apacket
// Address: 00405b90
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


uint * _ZN12LibUsbDevice4ReadEP7apacket(uint *param_1,uint *param_2)

{
  undefined4 uVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  uint *puVar11;
  undefined *puVar12;
  uint *puVar13;
  undefined1 *puVar14;
  undefined4 *puVar15;
  uint *unaff_R15;
  long in_FS_OFFSET;
  bool bVar16;
  uint auStack_120 [2];
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined2 uStack_108;
  long lStack_f8;
  uint *puStack_f0;
  undefined1 *puStack_e8;
  undefined4 *puStack_e0;
  uint *puStack_d8;
  uint *puStack_d0;
  undefined *puStack_c8;
  uint auStack_b8 [2];
  uint *puStack_b0;
  uint *puStack_a8;
  undefined1 *puStack_a0;
  undefined4 *puStack_98;
  uint *puStack_90;
  uint *puStack_88;
  undefined *apuStack_80 [2];
  undefined4 uStack_6c;
  undefined4 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  uint auStack_48 [3];
  uint uStack_3c;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  puVar15 = &adb_trace_mask;
  puVar14 = adb_trace_severity;
  if ((((byte)adb_trace_mask & 0x20) != 0) && ((int)adb_trace_severity._20_4_ < 2)) {
    apuStack_80[0] = &UNK_00405df3;
    cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
    if (cVar2 != '\0') {
      apuStack_80[0] = &UNK_00405e00;
      unaff_R15 = (uint *)func_0x0099bce0();
      puStack_68 = (undefined4 *)CONCAT44(puStack_68._4_4_,*unaff_R15);
      apuStack_80[0] = &UNK_00405e2b;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&uStack_60,&UNK_00159712,0x85,1,0,0xffffffff);
      apuStack_80[0] = &UNK_00405e34;
      uVar8 = _ZN7android4base10LogMessage6streamEv(&uStack_60);
      apuStack_80[0] = &UNK_00405e48;
      func_0x0032eb30(uVar8,&UNK_00172469,0x13);
      apuStack_80[0] = &UNK_00405e51;
      _ZN7android4base10LogMessageD2Ev(&uStack_60);
      *unaff_R15 = (uint)puStack_68;
    }
  }
  uStack_3c = 0;
  puVar13 = *(uint **)(param_1 + 2);
  puVar11 = (uint *)(ulong)*(byte *)((long)param_1 + 0x4d);
  apuStack_80[0] = &UNK_00405bf9;
  uVar4 = libusb_bulk_transfer(puVar13,puVar11,param_2,0x18,&uStack_3c,0);
  bVar16 = ((byte)adb_trace_mask & 0x20) != 0;
  if ((uVar4 == 0) && (uStack_3c == 0x18)) {
    if ((int)adb_trace_severity._20_4_ < 2 && bVar16) {
      apuStack_80[0] = &UNK_00405e68;
      cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
      if (cVar2 != '\0') {
        apuStack_80[0] = &UNK_00405e75;
        puStack_68 = (undefined4 *)func_0x0099bce0();
        uStack_6c = *puStack_68;
        apuStack_80[0] = &UNK_00405ea4;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (auStack_48,&UNK_00159712,0x8e,1,0,0xffffffff);
        apuStack_80[0] = &UNK_00405eac;
        uVar8 = _ZN7android4base10LogMessage6streamEv(auStack_48);
        apuStack_80[0] = &UNK_00405ec0;
        unaff_R15 = (uint *)func_0x0032eb30(uVar8,&UNK_0017247d,5);
        apuStack_80[0] = &UNK_00405ece;
        _Z17command_to_stringj(&uStack_60,*param_2);
        apuStack_80[0] = &UNK_00405eda;
        uVar8 = func_0x0032e5a0(unaff_R15,&uStack_60);
        apuStack_80[0] = &UNK_00405eee;
        uVar8 = func_0x0032eb30(uVar8,&UNK_0015c92e,0x17);
        apuStack_80[0] = &UNK_00405ef9;
        _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj(uVar8,param_2[3]);
        if (((byte)uStack_60 & 1) != 0) {
          apuStack_80[0] = &UNK_00405f10;
          _ZdaPvSt11align_val_t
                    (uStack_50,CONCAT71(uStack_60._1_7_,(byte)uStack_60) & 0xfffffffffffffffe);
        }
        apuStack_80[0] = &UNK_00405f19;
        _ZN7android4base10LogMessageD2Ev(auStack_48);
        *puStack_68 = uStack_6c;
      }
    }
    puVar13 = param_2 + 6;
    if (param_2[3] == 0) {
      puVar11 = (uint *)0x0;
      apuStack_80[0] = &UNK_00405db7;
      _ZN5Block6resizeEm();
    }
    else {
      apuStack_80[0] = &UNK_00405c3b;
      _ZN5Block6resizeEm();
      uVar4 = param_2[3];
      unaff_R15 = (uint *)(ulong)uVar4;
      puVar13 = *(uint **)(param_1 + 2);
      puVar11 = (uint *)(ulong)*(byte *)((long)param_1 + 0x4d);
      apuStack_80[0] = &UNK_00405c5b;
      uVar5 = libusb_bulk_transfer(puVar13,puVar11,*(long *)(param_2 + 6),unaff_R15,&uStack_3c,0);
      bVar16 = ((byte)adb_trace_mask & 0x20) == 0;
      if ((uVar5 != 0) || (uStack_3c != uVar4)) {
        if (1 >= (int)adb_trace_severity._20_4_ && !bVar16) {
          param_1 = (uint *)(ulong)uVar5;
          puVar13 = (uint *)0x1;
          puVar11 = (uint *)0x0;
          apuStack_80[0] = &UNK_00405f36;
          cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc();
          puVar7 = (uint *)0x0;
          if (cVar2 == '\0') goto code_r0x00405dc5;
          apuStack_80[0] = &UNK_00405f47;
          param_2 = (uint *)func_0x0099bce0();
          uVar4 = *param_2;
          apuStack_80[0] = &UNK_00405f73;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (&uStack_60,&UNK_00159712,0x9a,1,0,0xffffffff);
          apuStack_80[0] = &UNK_00405f7b;
          uVar8 = _ZN7android4base10LogMessage6streamEv(&uStack_60);
          puVar12 = &UNK_0017073f;
          uVar10 = 0x28;
          goto code_r0x00405f87;
        }
        goto code_r0x00405dc3;
      }
      puVar7 = (uint *)0x1;
      if (1 < (int)adb_trace_severity._20_4_ || bVar16) goto code_r0x00405dc5;
      puVar13 = (uint *)0x1;
      puVar11 = (uint *)0x0;
      apuStack_80[0] = &UNK_00405c96;
      cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc();
      if (cVar2 != '\0') {
        apuStack_80[0] = &UNK_00405ca3;
        param_1 = (uint *)func_0x0099bce0();
        uVar4 = *param_1;
        puVar14 = (undefined1 *)(ulong)uVar4;
        apuStack_80[0] = &UNK_00405ccf;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (auStack_48,&UNK_00159712,0x9d,1,0,0xffffffff);
        apuStack_80[0] = &UNK_00405cd7;
        uVar8 = _ZN7android4base10LogMessage6streamEv(auStack_48);
        apuStack_80[0] = &UNK_00405ceb;
        unaff_R15 = (uint *)func_0x0032eb30(uVar8,&UNK_0017247d,5);
        uVar5 = *param_2;
        param_2 = (uint *)&uStack_60;
        apuStack_80[0] = &UNK_00405cfc;
        _Z17command_to_stringj(param_2,uVar5);
        apuStack_80[0] = &UNK_00405d07;
        uVar8 = func_0x0032e5a0(unaff_R15,param_2);
        apuStack_80[0] = &UNK_00405d1b;
        uVar8 = func_0x0032eb30(uVar8,&UNK_0017ef01,6);
        puVar11 = (uint *)(ulong)uStack_3c;
        apuStack_80[0] = &UNK_00405d26;
        _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(uVar8);
        if (((byte)uStack_60 & 1) != 0) {
          puVar11 = (uint *)(CONCAT71(uStack_60._1_7_,(byte)uStack_60) & 0xfffffffffffffffe);
          apuStack_80[0] = &UNK_00405d3d;
          _ZdaPvSt11align_val_t(uStack_50);
        }
        puVar13 = auStack_48;
        apuStack_80[0] = &UNK_00405d46;
        _ZN7android4base10LogMessageD2Ev();
        *param_1 = uVar4;
      }
    }
    puVar7 = (uint *)0x1;
  }
  else {
    if ((int)adb_trace_severity._20_4_ < 2 && bVar16) {
      param_1 = (uint *)(ulong)uVar4;
      puVar13 = (uint *)0x1;
      puVar11 = (uint *)0x0;
      apuStack_80[0] = &UNK_00405d5e;
      cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc();
      puVar7 = (uint *)0x0;
      if (cVar2 == '\0') goto code_r0x00405dc5;
      apuStack_80[0] = &UNK_00405d6b;
      param_2 = (uint *)func_0x0099bce0();
      uVar4 = *param_2;
      apuStack_80[0] = &UNK_00405d97;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&uStack_60,&UNK_00159712,0x8b,1,0,0xffffffff);
      apuStack_80[0] = &UNK_00405d9f;
      uVar8 = _ZN7android4base10LogMessage6streamEv(&uStack_60);
      puVar12 = &UNK_0017eedc;
      uVar10 = 0x24;
code_r0x00405f87:
      unaff_R15 = (uint *)&uStack_60;
      puVar15 = (undefined4 *)(ulong)uVar4;
      apuStack_80[0] = &UNK_00405f8f;
      puVar14 = (undefined1 *)func_0x0032eb30(uVar8,puVar12,uVar10);
      apuStack_80[0] = &UNK_00405f9a;
      param_1 = (uint *)libusb_error_name(param_1);
      apuStack_80[0] = &UNK_00405fa5;
      uVar8 = func_0x0099bcf0(param_1);
      apuStack_80[0] = &UNK_00405fb3;
      puVar11 = param_1;
      func_0x0032eb30(puVar14,param_1,uVar8);
      apuStack_80[0] = &UNK_00405fbb;
      puVar13 = unaff_R15;
      _ZN7android4base10LogMessageD2Ev();
      puVar7 = (uint *)0x0;
      *param_2 = uVar4;
      goto code_r0x00405dc5;
    }
code_r0x00405dc3:
    puVar7 = (uint *)0x0;
  }
code_r0x00405dc5:
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return puVar7;
  }
  apuStack_80[0] = &UNK_00405fca;
  func_0x0099bd00();
  apuStack_80[0] = &stack0xfffffffffffffff8;
  puStack_88 = unaff_R15;
  puStack_90 = param_1;
  puStack_98 = puVar15;
  puStack_a0 = puVar14;
  puStack_a8 = param_2;
  puStack_b0 = *(uint **)(in_FS_OFFSET + 0x28);
  puVar13 = *(uint **)(puVar13 + 2);
  if (puVar13 != (uint *)0x0) {
    puStack_c8 = &UNK_00405ffc;
    uVar4 = libusb_reset_device();
    if (uVar4 != 0) {
      param_2 = (uint *)(ulong)uVar4;
      puVar13 = (uint *)0x4;
      puVar11 = (uint *)0x0;
      puStack_c8 = &UNK_0040600e;
      cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc();
      if (cVar2 != '\0') {
        puStack_c8 = &UNK_00406039;
        param_1 = (uint *)func_0x0099bce0();
        uVar5 = *param_1;
        puVar15 = (undefined4 *)(ulong)uVar5;
        unaff_R15 = auStack_b8;
        puStack_c8 = &UNK_00406065;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (unaff_R15,&UNK_00159712,0xa8,4,0,0xffffffff);
        puStack_c8 = &UNK_0040606d;
        uVar8 = _ZN7android4base10LogMessage6streamEv(unaff_R15);
        puStack_c8 = &UNK_00406081;
        puVar14 = (undefined1 *)func_0x0032eb30(uVar8,&UNK_00180452,0x1c);
        puStack_c8 = &UNK_0040608b;
        param_2 = (uint *)libusb_error_name(uVar4);
        puStack_c8 = &UNK_00406096;
        uVar8 = func_0x0099bcf0(param_2);
        puStack_c8 = &UNK_004060a4;
        puVar11 = param_2;
        func_0x0032eb30(puVar14,param_2,uVar8);
        puStack_c8 = &UNK_004060ac;
        puVar13 = unaff_R15;
        _ZN7android4base10LogMessageD2Ev();
        *param_1 = uVar5;
      }
    }
  }
  if (*(uint **)(in_FS_OFFSET + 0x28) == puStack_b0) {
    return *(uint **)(in_FS_OFFSET + 0x28);
  }
  puStack_c8 = &UNK_004060b9;
  func_0x0099bd00();
  lStack_f8 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_118 = 0;
  uStack_110 = 0;
  uStack_108 = 0;
  puVar11 = *(uint **)puVar11;
  puVar9 = &uStack_118;
  puStack_f0 = param_2;
  puStack_e8 = puVar14;
  puStack_e0 = puVar15;
  puStack_d8 = param_1;
  puStack_d0 = unaff_R15;
  puStack_c8 = (undefined *)apuStack_80;
  iVar6 = libusb_get_device_descriptor();
  if (iVar6 == 0) {
    *(undefined2 *)(puVar13 + 4) = uStack_108;
    *puVar13 = (uint)uStack_118;
    puVar13[1] = uStack_118._4_4_;
    puVar13[2] = (uint)uStack_110;
    puVar13[3] = uStack_110._4_4_;
    uVar3 = 1;
  }
  else {
    puVar11 = (uint *)0x3;
    puVar9 = (undefined8 *)0x0;
    cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc();
    if (cVar2 != '\0') {
      puVar15 = (undefined4 *)func_0x0099bce0();
      uVar1 = *puVar15;
      puVar11 = auStack_120;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (puVar11,&UNK_00159712,0xbe,3,0,0xffffffff);
      uVar8 = _ZN7android4base10LogMessage6streamEv(puVar11);
      uVar8 = func_0x0032eb30(uVar8,&UNK_00174095,0x2c);
      puVar9 = (undefined8 *)libusb_error_name(iVar6);
      uVar10 = func_0x0099bcf0(puVar9);
      func_0x0032eb30(uVar8,puVar9,uVar10);
      _ZN7android4base10LogMessageD2Ev();
      *puVar15 = uVar1;
    }
    *(undefined1 *)puVar13 = 0;
    uVar3 = 0;
  }
  *(undefined1 *)((long)puVar13 + 0x12) = uVar3;
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_f8) {
    return puVar13;
  }
  func_0x0099bd00();
  if ((*(byte *)(puVar9 + 5) & 1) == 0) {
    *(undefined8 *)(puVar11 + 4) = puVar9[7];
    uVar8 = puVar9[6];
    *(undefined8 *)puVar11 = puVar9[5];
    *(undefined8 *)(puVar11 + 2) = uVar8;
    return puVar11;
  }
  func_0x00330340();
  return puVar11;
}


