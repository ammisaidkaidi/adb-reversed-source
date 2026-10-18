// Function: _ZN16AdbUsbConnection4ReadEP7apacket
// Address: 003f6bc0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _ZN16AdbUsbConnection4ReadEP7apacket(uint *param_1,uint *param_2)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  uint *puVar7;
  undefined4 *puVar8;
  ulong uVar9;
  uint *puVar10;
  undefined *puVar11;
  uint *puVar12;
  undefined1 *puVar13;
  ulong unaff_R12;
  uint *unaff_R15;
  long in_FS_OFFSET;
  undefined1 auStack_b0 [8];
  long lStack_a8;
  ulong uStack_a0;
  uint *puStack_98;
  uint *puStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  long lStack_78;
  uint *puStack_70;
  ulong uStack_68;
  uint *puStack_60;
  uint *puStack_58;
  undefined *apuStack_50 [2];
  uint auStack_40 [2];
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  apuStack_50[0] = &UNK_003f6be9;
  puVar10 = param_2;
  puVar12 = param_1;
  uVar3 = _ZN16AdbUsbConnection11ReadMessageEP8amessage();
  if ((int)uVar3 < 0) {
    uVar9 = 0;
    if ((((byte)adb_trace_mask & 0x20) != 0) && ((int)adb_trace_severity._20_4_ < 2)) {
      puVar12 = (uint *)0x1;
      puVar10 = (uint *)0x0;
      apuStack_50[0] = &UNK_003f6d08;
      cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc();
      uVar9 = 0;
      if (cVar2 != '\0') {
        apuStack_50[0] = &UNK_003f6d19;
        param_2 = (uint *)func_0x0099bce0();
        uVar3 = *param_2;
        unaff_R15 = (uint *)(ulong)uVar3;
        param_1 = auStack_40;
        apuStack_50[0] = &UNK_003f6d45;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (param_1,&UNK_00184aaa,0x28,1,0,0xffffffff);
        apuStack_50[0] = &UNK_003f6d4d;
        uVar6 = _ZN7android4base10LogMessage6streamEv(param_1);
        puVar10 = (uint *)&UNK_0017bb92;
        apuStack_50[0] = &UNK_003f6d61;
        func_0x0032eb30(uVar6,&UNK_0017bb92,0x2b);
        apuStack_50[0] = &UNK_003f6d69;
        puVar12 = param_1;
        _ZN7android4base10LogMessageD2Ev();
        uVar9 = 0;
        *param_2 = uVar3;
      }
    }
  }
  else if (uVar3 == 0x18) {
    uVar9 = 1;
    if (param_2[3] != 0) {
      apuStack_50[0] = &UNK_003f6c11;
      puVar10 = param_2;
      puVar12 = param_1;
      uVar3 = _ZN16AdbUsbConnection11ReadPayloadEP7apacket();
      if ((int)uVar3 < 0) {
        puVar12 = (uint *)0x4;
        puVar10 = (uint *)0x0;
        apuStack_50[0] = &UNK_003f6e1e;
        cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc();
        uVar9 = 0;
        if (cVar2 != '\0') {
          apuStack_50[0] = &UNK_003f6e49;
          param_2 = (uint *)func_0x0099bce0();
          uVar3 = *param_2;
          param_1 = (uint *)(ulong)uVar3;
          unaff_R15 = auStack_40;
          apuStack_50[0] = &UNK_003f6e72;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (unaff_R15,&UNK_00184aaa,0x34,4,0,param_1);
          apuStack_50[0] = &UNK_003f6e7a;
          uVar6 = _ZN7android4base10LogMessage6streamEv(unaff_R15);
          puVar10 = (uint *)&UNK_0016af96;
          apuStack_50[0] = &UNK_003f6e8e;
          func_0x0032eb30(uVar6,&UNK_0016af96,0x23);
          apuStack_50[0] = &UNK_003f6e96;
          puVar12 = unaff_R15;
          _ZN7android4base10LogMessageD2Ev();
          uVar9 = 0;
          *param_2 = uVar3;
        }
      }
      else {
        param_1 = (uint *)(ulong)uVar3;
        uVar9 = 1;
        if (uVar3 != param_2[3]) {
          puVar12 = (uint *)0x4;
          puVar10 = (uint *)0x0;
          apuStack_50[0] = &UNK_003f6c33;
          cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc();
          uVar9 = 0;
          if (cVar2 != '\0') {
            apuStack_50[0] = &UNK_003f6c44;
            unaff_R15 = (uint *)func_0x0099bce0();
            uVar3 = *unaff_R15;
            unaff_R12 = (ulong)uVar3;
            puVar12 = auStack_40;
            apuStack_50[0] = &UNK_003f6c6d;
            _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                      (puVar12,&UNK_00184aaa,0x38,4,0,unaff_R12);
            apuStack_50[0] = &UNK_003f6c75;
            uVar6 = _ZN7android4base10LogMessage6streamEv(puVar12);
            apuStack_50[0] = &UNK_003f6c89;
            uVar6 = func_0x0032eb30(uVar6,&UNK_00184ae4,0x2c);
            apuStack_50[0] = &UNK_003f6c94;
            uVar6 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj(uVar6,param_2[3]);
            apuStack_50[0] = &UNK_003f6ca8;
            uVar6 = func_0x0032eb30(uVar6,&UNK_00178ad5,0xc);
            apuStack_50[0] = &UNK_003f6cb3;
            uVar6 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(uVar6,param_1);
            puVar10 = (uint *)&UNK_0017a21d;
            apuStack_50[0] = &UNK_003f6cc7;
            func_0x0032eb30(uVar6,&UNK_0017a21d,0x10);
            apuStack_50[0] = &UNK_003f6ccf;
            _ZN7android4base10LogMessageD2Ev();
            uVar9 = 0;
            *unaff_R15 = uVar3;
          }
        }
      }
    }
  }
  else {
    param_2 = (uint *)(ulong)uVar3;
    uVar9 = 0;
    if ((((byte)adb_trace_mask & 0x20) != 0) && ((int)adb_trace_severity._20_4_ < 2)) {
      puVar12 = (uint *)0x1;
      puVar10 = (uint *)0x0;
      apuStack_50[0] = &UNK_003f6da4;
      cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc();
      uVar9 = 0;
      if (cVar2 != '\0') {
        apuStack_50[0] = &UNK_003f6db1;
        param_1 = (uint *)func_0x0099bce0();
        uVar5 = *param_1;
        unaff_R12 = (ulong)uVar5;
        unaff_R15 = auStack_40;
        apuStack_50[0] = &UNK_003f6ddd;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (unaff_R15,&UNK_00184aaa,0x2c,1,0,0xffffffff);
        apuStack_50[0] = &UNK_003f6de5;
        uVar6 = _ZN7android4base10LogMessage6streamEv(unaff_R15);
        apuStack_50[0] = &UNK_003f6df9;
        uVar6 = func_0x0032eb30(uVar6,&UNK_0015b1f7,0x39);
        puVar10 = (uint *)(ulong)uVar3;
        apuStack_50[0] = &UNK_003f6e03;
        _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(uVar6);
        apuStack_50[0] = &UNK_003f6e0b;
        puVar12 = unaff_R15;
        _ZN7android4base10LogMessageD2Ev();
        uVar9 = 0;
        *param_1 = uVar5;
      }
    }
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return uVar9;
  }
  apuStack_50[0] = &UNK_003f6ea2;
  func_0x0099bd00();
  apuStack_50[0] = &stack0xfffffffffffffff8;
  puStack_58 = unaff_R15;
  puStack_60 = param_1;
  uStack_68 = unaff_R12;
  puStack_70 = param_2;
  lStack_78 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = puVar10[3];
  puVar7 = (uint *)(ulong)uVar3;
  puStack_88 = &UNK_003f6ee5;
  iVar4 = (**(code **)(**(long **)(puVar12 + 2) + 0x10))();
  if (iVar4 == 0x18) {
    uVar9 = CONCAT71((int7)((ulong)param_2 >> 8),1);
    if (puVar10[3] == 0) goto code_r0x003f6f6f;
    puStack_88 = &UNK_003f6f05;
    uVar5 = (**(code **)(**(long **)(puVar12 + 2) + 0x10))
                      (*(long **)(puVar12 + 2),*(undefined8 *)(puVar10 + 6),puVar7);
    if (uVar5 == uVar3) goto code_r0x003f6f6f;
    uVar9 = 0;
    puStack_88 = &UNK_003f6f18;
    cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4,0);
    if (cVar2 == '\0') goto code_r0x003f6f6f;
    puStack_88 = &UNK_003f6f21;
    puVar7 = (uint *)func_0x0099bce0();
    puVar10 = (uint *)(ulong)*puVar7;
    puStack_88 = &UNK_003f6f4c;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (auStack_80,&UNK_00184aaa,0x49,4,0,puVar10);
    puStack_88 = &UNK_003f6f54;
    uVar6 = _ZN7android4base10LogMessage6streamEv(auStack_80);
    puVar11 = &UNK_00172374;
  }
  else {
    uVar9 = 0;
    puStack_88 = &UNK_003f6f6b;
    cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4,0);
    if (cVar2 == '\0') goto code_r0x003f6f6f;
    puStack_88 = &UNK_003f6f92;
    puVar7 = (uint *)func_0x0099bce0();
    puVar10 = (uint *)(ulong)*puVar7;
    puStack_88 = &UNK_003f6fbd;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (auStack_80,&UNK_00184aaa,0x44,4,0,puVar10);
    puStack_88 = &UNK_003f6fc5;
    uVar6 = _ZN7android4base10LogMessage6streamEv(auStack_80);
    puVar11 = &UNK_00181bd9;
  }
  uVar9 = 0;
  puStack_88 = &UNK_003f6fd9;
  func_0x0032eb30(uVar6,puVar11,0x26);
  puStack_88 = &UNK_003f6fe1;
  _ZN7android4base10LogMessageD2Ev(auStack_80);
  *puVar7 = (uint)puVar10;
code_r0x003f6f6f:
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_78) {
    return uVar9 & 0xffffffff;
  }
  puStack_88 = &UNK_003f6feb;
  func_0x0099bd00();
  lStack_a8 = *(long *)(in_FS_OFFSET + 0x28);
  puVar13 = (undefined1 *)0x6;
  uStack_a0 = uVar9;
  puStack_98 = puVar7;
  puStack_90 = puVar10;
  puStack_88 = (undefined *)apuStack_50;
  cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(6,0);
  if (cVar2 != '\0') {
    puVar8 = (undefined4 *)func_0x0099bce0();
    uVar1 = *puVar8;
    puVar13 = auStack_b0;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (puVar13,&UNK_00184aaa,0x51,6,0,0xffffffff);
    uVar6 = _ZN7android4base10LogMessage6streamEv(puVar13);
    func_0x0032eb30(uVar6,&UNK_001706a6,0x1d);
    _ZN7android4base10LogMessageD2Ev();
    *puVar8 = uVar1;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_a8) {
    return 0;
  }
  func_0x0099bd00();
                    /* WARNING: Could not recover jumptable at 0x003f70ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar9 = (**(code **)(**(long **)(puVar13 + 8) + 0x38))();
  return uVar9;
}


