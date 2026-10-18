// Function: _ZN16AdbUsbConnection11ReadMessageEP8amessage
// Address: 003f69a0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _ZN16AdbUsbConnection11ReadMessageEP8amessage(uint *param_1,uint *param_2)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 uVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  undefined4 *puVar11;
  uint *unaff_RBX;
  uint *puVar12;
  undefined *puVar13;
  uint *puVar14;
  undefined1 *puVar15;
  uint *unaff_R12;
  ulong unaff_R13;
  uint *unaff_R14;
  uint *unaff_R15;
  long in_FS_OFFSET;
  undefined1 auStack_140 [8];
  long lStack_138;
  ulong uStack_130;
  uint *puStack_128;
  uint *puStack_120;
  undefined *puStack_118;
  undefined1 auStack_110 [8];
  long lStack_108;
  uint *puStack_100;
  uint *puStack_f8;
  uint *puStack_f0;
  uint *puStack_e8;
  undefined *apuStack_e0 [2];
  uint auStack_d0 [2];
  long lStack_c8;
  uint *puStack_c0;
  uint *puStack_b8;
  ulong uStack_b0;
  uint *puStack_a8;
  uint *puStack_a0;
  undefined *apuStack_98 [2];
  uint auStack_88 [2];
  long lStack_80;
  uint *puStack_78;
  uint *puStack_70;
  ulong uStack_68;
  uint *puStack_60;
  uint *puStack_58;
  undefined *apuStack_50 [2];
  uint auStack_40 [2];
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  if ((((byte)adb_trace_mask & 0x20) != 0) && ((int)adb_trace_severity._20_4_ < 2)) {
    apuStack_50[0] = &UNK_003f6a1a;
    cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
    unaff_R12 = param_2;
    unaff_R15 = param_1;
    if (cVar2 != '\0') {
      apuStack_50[0] = &UNK_003f6a29;
      unaff_RBX = (uint *)func_0x0099bce0();
      uVar3 = *unaff_RBX;
      unaff_R13 = (ulong)uVar3;
      unaff_R14 = auStack_40;
      apuStack_50[0] = &UNK_003f6a55;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (unaff_R14,&UNK_00184aaa,0x16,1,0,0xffffffff);
      apuStack_50[0] = &UNK_003f6a5d;
      uVar7 = _ZN7android4base10LogMessage6streamEv(unaff_R14);
      apuStack_50[0] = &UNK_003f6a71;
      func_0x0032eb30(uVar7,&UNK_0018670e,0xe);
      apuStack_50[0] = &UNK_003f6a79;
      _ZN7android4base10LogMessageD2Ev(unaff_R14);
      *unaff_RBX = uVar3;
    }
  }
  puVar10 = *(uint **)(param_1 + 2);
  apuStack_50[0] = &UNK_003f69e6;
  uVar6 = (**(code **)(*(long *)puVar10 + 0x18))(puVar10,param_2,0x18);
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return uVar6;
  }
  apuStack_50[0] = &UNK_003f6a8c;
  func_0x0099bd00();
  lStack_80 = *(long *)(in_FS_OFFSET + 0x28);
  puVar8 = puVar10;
  puStack_78 = unaff_RBX;
  puStack_70 = unaff_R12;
  uStack_68 = unaff_R13;
  puStack_60 = unaff_R14;
  puStack_58 = unaff_R15;
  apuStack_50[0] = &stack0xfffffffffffffff8;
  if ((((byte)adb_trace_mask & 0x20) != 0) &&
     (apuStack_50[0] = &stack0xfffffffffffffff8, (int)adb_trace_severity._20_4_ < 2)) {
    puVar8 = (uint *)0x1;
    apuStack_98[0] = &UNK_003f6b2d;
    apuStack_50[0] = &stack0xfffffffffffffff8;
    cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
    unaff_R12 = param_2;
    if (cVar2 != '\0') {
      apuStack_98[0] = &UNK_003f6b39;
      unaff_R14 = (uint *)func_0x0099bce0();
      uVar3 = *unaff_R14;
      unaff_R13 = (ulong)uVar3;
      unaff_R15 = auStack_88;
      apuStack_98[0] = &UNK_003f6b65;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (unaff_R15,&UNK_00184aaa,0x1b,1,0,0xffffffff);
      apuStack_98[0] = &UNK_003f6b6d;
      uVar7 = _ZN7android4base10LogMessage6streamEv(unaff_R15);
      apuStack_98[0] = &UNK_003f6b81;
      uVar7 = func_0x0032eb30(uVar7,&UNK_0017bb82,0xf);
      apuStack_98[0] = &UNK_003f6b8e;
      uVar7 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj(uVar7,param_2[3]);
      apuStack_98[0] = &UNK_003f6ba2;
      func_0x0032eb30(uVar7,&UNK_001692c7,1);
      apuStack_98[0] = &UNK_003f6baa;
      puVar8 = unaff_R15;
      _ZN7android4base10LogMessageD2Ev();
      *unaff_R14 = uVar3;
    }
  }
  uVar6 = 0xffffffff;
  puVar9 = param_2;
  puStack_a8 = unaff_R14;
  if (param_2[3] < 0x100001) {
    apuStack_98[0] = &UNK_003f6aea;
    _ZN5Block6resizeEm(param_2 + 6,param_2[3]);
    puVar8 = *(uint **)(puVar10 + 2);
    puVar9 = *(uint **)(param_2 + 6);
    apuStack_98[0] = &UNK_003f6afc;
    uVar6 = (**(code **)(*(long *)puVar8 + 0x18))(puVar8,puVar9,param_2[10]);
    puStack_a8 = param_2;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_80) {
    return uVar6;
  }
  apuStack_98[0] = &UNK_003f6bba;
  func_0x0099bd00();
  lStack_c8 = *(long *)(in_FS_OFFSET + 0x28);
  apuStack_e0[0] = &UNK_003f6be9;
  puVar12 = puVar9;
  puVar14 = puVar8;
  puStack_c0 = puVar10;
  puStack_b8 = unaff_R12;
  uStack_b0 = unaff_R13;
  puStack_a0 = unaff_R15;
  apuStack_98[0] = (undefined *)apuStack_50;
  uVar3 = _ZN16AdbUsbConnection11ReadMessageEP8amessage();
  if ((int)uVar3 < 0) {
    uVar6 = 0;
    if ((((byte)adb_trace_mask & 0x20) != 0) && ((int)adb_trace_severity._20_4_ < 2)) {
      puVar14 = (uint *)0x1;
      puVar12 = (uint *)0x0;
      apuStack_e0[0] = &UNK_003f6d08;
      cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc();
      uVar6 = 0;
      if (cVar2 != '\0') {
        apuStack_e0[0] = &UNK_003f6d19;
        puVar9 = (uint *)func_0x0099bce0();
        uVar3 = *puVar9;
        unaff_R15 = (uint *)(ulong)uVar3;
        puVar8 = auStack_d0;
        apuStack_e0[0] = &UNK_003f6d45;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (puVar8,&UNK_00184aaa,0x28,1,0,0xffffffff);
        apuStack_e0[0] = &UNK_003f6d4d;
        uVar7 = _ZN7android4base10LogMessage6streamEv(puVar8);
        puVar12 = (uint *)&UNK_0017bb92;
        apuStack_e0[0] = &UNK_003f6d61;
        func_0x0032eb30(uVar7,&UNK_0017bb92,0x2b);
        apuStack_e0[0] = &UNK_003f6d69;
        puVar14 = puVar8;
        _ZN7android4base10LogMessageD2Ev();
        uVar6 = 0;
        *puVar9 = uVar3;
      }
    }
  }
  else if (uVar3 == 0x18) {
    uVar6 = 1;
    if (puVar9[3] != 0) {
      apuStack_e0[0] = &UNK_003f6c11;
      puVar12 = puVar9;
      puVar14 = puVar8;
      uVar3 = _ZN16AdbUsbConnection11ReadPayloadEP7apacket();
      if ((int)uVar3 < 0) {
        puVar14 = (uint *)0x4;
        puVar12 = (uint *)0x0;
        apuStack_e0[0] = &UNK_003f6e1e;
        cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc();
        uVar6 = 0;
        if (cVar2 != '\0') {
          apuStack_e0[0] = &UNK_003f6e49;
          puVar9 = (uint *)func_0x0099bce0();
          uVar3 = *puVar9;
          puVar8 = (uint *)(ulong)uVar3;
          unaff_R15 = auStack_d0;
          apuStack_e0[0] = &UNK_003f6e72;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (unaff_R15,&UNK_00184aaa,0x34,4,0,puVar8);
          apuStack_e0[0] = &UNK_003f6e7a;
          uVar7 = _ZN7android4base10LogMessage6streamEv(unaff_R15);
          puVar12 = (uint *)&UNK_0016af96;
          apuStack_e0[0] = &UNK_003f6e8e;
          func_0x0032eb30(uVar7,&UNK_0016af96,0x23);
          apuStack_e0[0] = &UNK_003f6e96;
          puVar14 = unaff_R15;
          _ZN7android4base10LogMessageD2Ev();
          uVar6 = 0;
          *puVar9 = uVar3;
        }
      }
      else {
        puVar8 = (uint *)(ulong)uVar3;
        uVar6 = 1;
        if (uVar3 != puVar9[3]) {
          puVar14 = (uint *)0x4;
          puVar12 = (uint *)0x0;
          apuStack_e0[0] = &UNK_003f6c33;
          cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc();
          uVar6 = 0;
          if (cVar2 != '\0') {
            apuStack_e0[0] = &UNK_003f6c44;
            unaff_R15 = (uint *)func_0x0099bce0();
            uVar3 = *unaff_R15;
            unaff_R12 = (uint *)(ulong)uVar3;
            puVar14 = auStack_d0;
            apuStack_e0[0] = &UNK_003f6c6d;
            _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                      (puVar14,&UNK_00184aaa,0x38,4,0,unaff_R12);
            apuStack_e0[0] = &UNK_003f6c75;
            uVar7 = _ZN7android4base10LogMessage6streamEv(puVar14);
            apuStack_e0[0] = &UNK_003f6c89;
            uVar7 = func_0x0032eb30(uVar7,&UNK_00184ae4,0x2c);
            apuStack_e0[0] = &UNK_003f6c94;
            uVar7 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj(uVar7,puVar9[3]);
            apuStack_e0[0] = &UNK_003f6ca8;
            uVar7 = func_0x0032eb30(uVar7,&UNK_00178ad5,0xc);
            apuStack_e0[0] = &UNK_003f6cb3;
            uVar7 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(uVar7,puVar8);
            puVar12 = (uint *)&UNK_0017a21d;
            apuStack_e0[0] = &UNK_003f6cc7;
            func_0x0032eb30(uVar7,&UNK_0017a21d,0x10);
            apuStack_e0[0] = &UNK_003f6ccf;
            _ZN7android4base10LogMessageD2Ev();
            uVar6 = 0;
            *unaff_R15 = uVar3;
          }
        }
      }
    }
  }
  else {
    puVar9 = (uint *)(ulong)uVar3;
    uVar6 = 0;
    if ((((byte)adb_trace_mask & 0x20) != 0) && ((int)adb_trace_severity._20_4_ < 2)) {
      puVar14 = (uint *)0x1;
      puVar12 = (uint *)0x0;
      apuStack_e0[0] = &UNK_003f6da4;
      cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc();
      uVar6 = 0;
      if (cVar2 != '\0') {
        apuStack_e0[0] = &UNK_003f6db1;
        puVar8 = (uint *)func_0x0099bce0();
        uVar5 = *puVar8;
        unaff_R12 = (uint *)(ulong)uVar5;
        unaff_R15 = auStack_d0;
        apuStack_e0[0] = &UNK_003f6ddd;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (unaff_R15,&UNK_00184aaa,0x2c,1,0,0xffffffff);
        apuStack_e0[0] = &UNK_003f6de5;
        uVar7 = _ZN7android4base10LogMessage6streamEv(unaff_R15);
        apuStack_e0[0] = &UNK_003f6df9;
        uVar7 = func_0x0032eb30(uVar7,&UNK_0015b1f7,0x39);
        puVar12 = (uint *)(ulong)uVar3;
        apuStack_e0[0] = &UNK_003f6e03;
        _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(uVar7);
        apuStack_e0[0] = &UNK_003f6e0b;
        puVar14 = unaff_R15;
        _ZN7android4base10LogMessageD2Ev();
        uVar6 = 0;
        *puVar8 = uVar5;
      }
    }
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_c8) {
    return uVar6;
  }
  apuStack_e0[0] = &UNK_003f6ea2;
  func_0x0099bd00();
  apuStack_e0[0] = (undefined *)apuStack_98;
  puStack_e8 = unaff_R15;
  puStack_f0 = puVar8;
  puStack_f8 = unaff_R12;
  puStack_100 = puVar9;
  lStack_108 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = puVar12[3];
  puVar10 = (uint *)(ulong)uVar3;
  puStack_118 = &UNK_003f6ee5;
  iVar4 = (**(code **)(**(long **)(puVar14 + 2) + 0x10))();
  if (iVar4 == 0x18) {
    uVar6 = CONCAT71((int7)((ulong)puVar9 >> 8),1);
    if (puVar12[3] == 0) goto code_r0x003f6f6f;
    puStack_118 = &UNK_003f6f05;
    uVar5 = (**(code **)(**(long **)(puVar14 + 2) + 0x10))
                      (*(long **)(puVar14 + 2),*(undefined8 *)(puVar12 + 6),puVar10);
    if (uVar5 == uVar3) goto code_r0x003f6f6f;
    uVar6 = 0;
    puStack_118 = &UNK_003f6f18;
    cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4,0);
    if (cVar2 == '\0') goto code_r0x003f6f6f;
    puStack_118 = &UNK_003f6f21;
    puVar10 = (uint *)func_0x0099bce0();
    puVar12 = (uint *)(ulong)*puVar10;
    puStack_118 = &UNK_003f6f4c;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (auStack_110,&UNK_00184aaa,0x49,4,0,puVar12);
    puStack_118 = &UNK_003f6f54;
    uVar7 = _ZN7android4base10LogMessage6streamEv(auStack_110);
    puVar13 = &UNK_00172374;
  }
  else {
    uVar6 = 0;
    puStack_118 = &UNK_003f6f6b;
    cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4,0);
    if (cVar2 == '\0') goto code_r0x003f6f6f;
    puStack_118 = &UNK_003f6f92;
    puVar10 = (uint *)func_0x0099bce0();
    puVar12 = (uint *)(ulong)*puVar10;
    puStack_118 = &UNK_003f6fbd;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (auStack_110,&UNK_00184aaa,0x44,4,0,puVar12);
    puStack_118 = &UNK_003f6fc5;
    uVar7 = _ZN7android4base10LogMessage6streamEv(auStack_110);
    puVar13 = &UNK_00181bd9;
  }
  uVar6 = 0;
  puStack_118 = &UNK_003f6fd9;
  func_0x0032eb30(uVar7,puVar13,0x26);
  puStack_118 = &UNK_003f6fe1;
  _ZN7android4base10LogMessageD2Ev(auStack_110);
  *puVar10 = (uint)puVar12;
code_r0x003f6f6f:
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_108) {
    return uVar6 & 0xffffffff;
  }
  puStack_118 = &UNK_003f6feb;
  func_0x0099bd00();
  lStack_138 = *(long *)(in_FS_OFFSET + 0x28);
  puVar15 = (undefined1 *)0x6;
  uStack_130 = uVar6;
  puStack_128 = puVar10;
  puStack_120 = puVar12;
  puStack_118 = (undefined *)apuStack_e0;
  cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(6,0);
  if (cVar2 != '\0') {
    puVar11 = (undefined4 *)func_0x0099bce0();
    uVar1 = *puVar11;
    puVar15 = auStack_140;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (puVar15,&UNK_00184aaa,0x51,6,0,0xffffffff);
    uVar7 = _ZN7android4base10LogMessage6streamEv(puVar15);
    func_0x0032eb30(uVar7,&UNK_001706a6,0x1d);
    _ZN7android4base10LogMessageD2Ev();
    *puVar11 = uVar1;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_138) {
    return 0;
  }
  func_0x0099bd00();
                    /* WARNING: Could not recover jumptable at 0x003f70ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar6 = (**(code **)(**(long **)(puVar15 + 8) + 0x38))();
  return uVar6;
}


