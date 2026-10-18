// Function: _ZN13UsbConnection5WriteEP7apacket
// Address: 004131c0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _ZN13UsbConnection5WriteEP7apacket(undefined1 *param_1,undefined4 *param_2)

{
  ulong *puVar1;
  uint uVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  undefined8 uVar8;
  uint *puVar9;
  undefined4 *puVar10;
  undefined8 unaff_RBX;
  undefined *puVar11;
  undefined1 *puVar12;
  ulong *puVar13;
  long lVar14;
  byte *unaff_R13;
  long lVar15;
  long in_FS_OFFSET;
  byte bStack_138;
  undefined7 uStack_137;
  undefined8 uStack_128;
  undefined1 auStack_120 [8];
  ulong *puStack_118;
  long lStack_110;
  ulong *puStack_108;
  undefined1 *puStack_100;
  byte *pbStack_f8;
  long lStack_f0;
  undefined4 *puStack_e8;
  undefined *puStack_e0;
  undefined4 uStack_cc;
  byte bStack_c8;
  undefined7 uStack_c7;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [8];
  ulong uStack_a8;
  uint *puStack_a0;
  undefined1 *puStack_98;
  undefined *apuStack_78 [2];
  undefined1 auStack_68 [8];
  long lStack_60;
  uint *puStack_58;
  uint *puStack_50;
  undefined4 *puStack_48;
  undefined *puStack_40;
  undefined1 auStack_38 [8];
  long lStack_30;
  
  lStack_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = param_2[3];
  puVar7 = (uint *)(ulong)uVar2;
  puStack_40 = &UNK_004131f4;
  iVar5 = _Z9usb_writeP10usb_handlePKvi(*(undefined8 *)(param_1 + 8),param_2,0x18);
  if (iVar5 == 0x18) {
    puVar9 = (uint *)CONCAT71((int7)((ulong)unaff_RBX >> 8),1);
    if (param_2[3] == 0) goto code_r0x0041327d;
    puStack_40 = &UNK_00413213;
    uVar6 = _Z9usb_writeP10usb_handlePKvi
                      (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_2 + 6),puVar7);
    if (uVar6 == uVar2) goto code_r0x0041327d;
    puVar9 = (uint *)0x0;
    puStack_40 = &UNK_00413226;
    cVar4 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4,0);
    if (cVar4 == '\0') goto code_r0x0041327d;
    puStack_40 = &UNK_0041322f;
    puVar7 = (uint *)func_0x0099bce0();
    param_2 = (undefined4 *)(ulong)*puVar7;
    puStack_40 = &UNK_0041325a;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (auStack_38,&UNK_00181cdb,0x8e,4,0,param_2);
    puStack_40 = &UNK_00413262;
    uVar8 = _ZN7android4base10LogMessage6streamEv(auStack_38);
    puVar11 = &UNK_001724b7;
  }
  else {
    puVar9 = (uint *)0x0;
    puStack_40 = &UNK_00413279;
    cVar4 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4,0);
    if (cVar4 == '\0') goto code_r0x0041327d;
    puStack_40 = &UNK_004132a0;
    puVar7 = (uint *)func_0x0099bce0();
    param_2 = (undefined4 *)(ulong)*puVar7;
    puStack_40 = &UNK_004132cb;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (auStack_38,&UNK_00181cdb,0x89,4,0,param_2);
    puStack_40 = &UNK_004132d3;
    uVar8 = _ZN7android4base10LogMessage6streamEv(auStack_38);
    puVar11 = &UNK_00187f30;
  }
  param_1 = auStack_38;
  puVar9 = (uint *)0x0;
  puStack_40 = &UNK_004132e7;
  func_0x0032eb30(uVar8,puVar11,0x20);
  puStack_40 = &UNK_004132ef;
  _ZN7android4base10LogMessageD2Ev(param_1);
  *puVar7 = (uint)param_2;
code_r0x0041327d:
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_30) {
    return (ulong)puVar9 & 0xffffffff;
  }
  puStack_40 = &UNK_004132f9;
  func_0x0099bd00();
  lStack_60 = *(long *)(in_FS_OFFSET + 0x28);
  puVar12 = (undefined1 *)0x6;
  apuStack_78[0] = &UNK_00413326;
  puStack_58 = puVar9;
  puStack_50 = puVar7;
  puStack_48 = param_2;
  puStack_40 = &stack0xfffffffffffffff8;
  cVar4 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(6,0);
  if (cVar4 != '\0') {
    apuStack_78[0] = &UNK_0041334b;
    puVar9 = (uint *)func_0x0099bce0();
    uVar2 = *puVar9;
    param_2 = (undefined4 *)(ulong)uVar2;
    puVar12 = auStack_68;
    apuStack_78[0] = &UNK_00413377;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (puVar12,&UNK_00181cdb,0x97,6,0,0xffffffff);
    apuStack_78[0] = &UNK_0041337f;
    uVar8 = _ZN7android4base10LogMessage6streamEv(puVar12);
    apuStack_78[0] = &UNK_00413393;
    func_0x0032eb30(uVar8,&UNK_001661a7,0x12);
    apuStack_78[0] = &UNK_0041339b;
    _ZN7android4base10LogMessageD2Ev();
    *puVar9 = uVar2;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_60) {
    return 0;
  }
  apuStack_78[0] = &UNK_004133a5;
  func_0x0099bd00();
  apuStack_78[0] = (undefined *)&puStack_40;
  _Z9usb_resetP10usb_handle(*(undefined8 *)(puVar12 + 8));
  lVar15 = *(long *)(puVar12 + 8);
  uStack_a8 = *(ulong *)(in_FS_OFFSET + 0x28);
  puVar1 = (ulong *)(lVar15 + 0xd8);
  puStack_e0 = &UNK_004150f0;
  puStack_a0 = puVar9;
  puStack_98 = param_1;
  _ZNSt3__15mutex4lockEv(puVar1);
  if ((((byte)adb_trace_mask & 0x20) != 0) && ((int)adb_trace_severity._20_4_ < 2)) {
    puStack_e0 = &UNK_004151d1;
    cVar4 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
    if (cVar4 != '\0') {
      puStack_e0 = &UNK_004151de;
      param_2 = (undefined4 *)func_0x0099bce0();
      uStack_cc = *param_2;
      puStack_e0 = &UNK_0041520c;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_b0,&UNK_0016974f,0x1f2,1,0,0xffffffff);
      puStack_e0 = &UNK_00415214;
      param_1 = (undefined1 *)_ZN7android4base10LogMessage6streamEv(auStack_b0);
      unaff_R13 = &bStack_c8;
      puStack_e0 = &UNK_00415233;
      _ZN7android4base12StringPrintfEPKcz
                (unaff_R13,&UNK_0016150f,lVar15,*(undefined4 *)(lVar15 + 0x18));
      puStack_e0 = &UNK_0041523e;
      func_0x0032e5a0(param_1,unaff_R13);
      if ((bStack_c8 & 1) != 0) {
        puStack_e0 = &UNK_00415255;
        _ZdaPvSt11align_val_t(uStack_b8,CONCAT71(uStack_c7,bStack_c8) & 0xfffffffffffffffe);
      }
      puStack_e0 = &UNK_0041525e;
      _ZN7android4base10LogMessageD2Ev(auStack_b0);
      *param_2 = uStack_cc;
    }
  }
  if (*(char *)(lVar15 + 0xa2) == '\0') {
    *(undefined1 *)(lVar15 + 0xa2) = 1;
    if (*(int *)(lVar15 + 0x2c) == 0) {
      puStack_e0 = &UNK_0041519b;
      _Z24unregister_usb_transportP10usb_handle(lVar15);
    }
    else {
      if (*(long *)(lVar15 + 0x108) != 0) {
        puStack_e0 = &UNK_00415140;
        func_0x0099c400(*(long *)(lVar15 + 0x108),0xe);
      }
      puStack_e0 = &UNK_00415154;
      func_0x0099c020(*(undefined4 *)(lVar15 + 0x18),0x550b,lVar15 + 0x30);
      puStack_e0 = &UNK_00415168;
      func_0x0099c020(*(undefined4 *)(lVar15 + 0x18),0x550b,lVar15 + 0x68);
      *(undefined4 *)(lVar15 + 0x34) = 0xffffffed;
      *(undefined4 *)(lVar15 + 0x6c) = 0xffffffed;
      *(undefined2 *)(lVar15 + 0xa0) = 0;
      lVar15 = lVar15 + 0xa8;
      puStack_e0 = &UNK_00415191;
      _ZNSt3__118condition_variable10notify_allEv(lVar15);
    }
  }
  puStack_e0 = &UNK_004151a3;
  puVar13 = puVar1;
  _ZNSt3__115recursive_mutex6unlockEv();
  if (*(ulong *)(in_FS_OFFSET + 0x28) == uStack_a8) {
    return *(ulong *)(in_FS_OFFSET + 0x28);
  }
  puStack_e0 = &UNK_0041526e;
  func_0x0099bd00();
  lVar14 = lRam0000000000a008a0;
  lStack_110 = *(long *)(in_FS_OFFSET + 0x28);
  puStack_118 = puVar13;
  puStack_108 = puVar1;
  puStack_100 = param_1;
  pbStack_f8 = unaff_R13;
  lStack_f0 = lVar15;
  puStack_e8 = param_2;
  puStack_e0 = (undefined *)apuStack_78;
  _ZNSt3__15mutex4lockEv(lRam0000000000a008a0);
  func_0x003f0c30(uRam0000000000a008a8,&puStack_118);
  if ((((byte)adb_trace_mask & 0x20) != 0) && ((int)adb_trace_severity._20_4_ < 2)) {
    cVar4 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
    if (cVar4 != '\0') {
      puVar10 = (undefined4 *)func_0x0099bce0();
      uVar3 = *puVar10;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_120,&UNK_0016974f,0x215,1,0,0xffffffff);
      uVar8 = _ZN7android4base10LogMessage6streamEv(auStack_120);
      _ZN7android4base12StringPrintfEPKcz(&bStack_138,&UNK_0015c986,puStack_118,(int)puStack_118[3])
      ;
      func_0x0032e5a0(uVar8,&bStack_138);
      if ((bStack_138 & 1) != 0) {
        _ZdaPvSt11align_val_t(uStack_128,CONCAT71(uStack_137,bStack_138) & 0xfffffffffffffffe);
      }
      _ZN7android4base10LogMessageD2Ev(auStack_120);
      *puVar10 = uVar3;
    }
  }
  puVar1 = puStack_118;
  if (puStack_118 != (ulong *)0x0) {
    if ((int)puStack_118[3] != -1) {
      func_0x0099bd10();
    }
    _ZNSt3__118condition_variableD2Ev(puVar1 + 0x15);
    if ((*puVar1 & 1) != 0) {
      _ZdaPvSt11align_val_t(puVar1[2],*puVar1 & 0xfffffffffffffffe);
    }
    _ZdaPvSt11align_val_t(puVar1,0x110);
  }
  _ZNSt3__115recursive_mutex6unlockEv();
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_110) {
    return 0;
  }
  func_0x0099bd00();
  return *(ulong *)(lVar14 + 0x20);
}


