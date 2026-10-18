// Function: _ZN13UsbConnection14DoTlsHandshakeEP6rsa_stPNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE
// Address: 00413300
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long _ZN13UsbConnection14DoTlsHandshakeEP6rsa_stPNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE
               (void)

{
  ulong *puVar1;
  uint uVar2;
  undefined4 uVar3;
  char cVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  uint *unaff_RBX;
  undefined1 *puVar7;
  ulong *puVar8;
  long lVar9;
  undefined8 unaff_R12;
  byte *unaff_R13;
  long lVar10;
  undefined4 *unaff_R15;
  long in_FS_OFFSET;
  byte bStack_100;
  undefined7 uStack_ff;
  undefined8 uStack_f0;
  undefined1 auStack_e8 [8];
  ulong *puStack_e0;
  long lStack_d8;
  ulong *puStack_d0;
  undefined8 uStack_c8;
  byte *pbStack_c0;
  long lStack_b8;
  undefined4 *puStack_b0;
  undefined *puStack_a8;
  undefined4 uStack_94;
  byte bStack_90;
  undefined7 uStack_8f;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  long lStack_70;
  uint *puStack_68;
  undefined *apuStack_40 [2];
  undefined1 auStack_30 [8];
  long lStack_28;
  
  lStack_28 = *(long *)(in_FS_OFFSET + 0x28);
  puVar7 = (undefined1 *)0x6;
  apuStack_40[0] = &UNK_00413326;
  cVar4 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(6,0);
  if (cVar4 != '\0') {
    apuStack_40[0] = &UNK_0041334b;
    unaff_RBX = (uint *)func_0x0099bce0();
    uVar2 = *unaff_RBX;
    unaff_R15 = (undefined4 *)(ulong)uVar2;
    puVar7 = auStack_30;
    apuStack_40[0] = &UNK_00413377;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (puVar7,&UNK_00181cdb,0x97,6,0,0xffffffff);
    apuStack_40[0] = &UNK_0041337f;
    uVar6 = _ZN7android4base10LogMessage6streamEv(puVar7);
    apuStack_40[0] = &UNK_00413393;
    func_0x0032eb30(uVar6,&UNK_001661a7,0x12);
    apuStack_40[0] = &UNK_0041339b;
    _ZN7android4base10LogMessageD2Ev();
    *unaff_RBX = uVar2;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_28) {
    return 0;
  }
  apuStack_40[0] = &UNK_004133a5;
  func_0x0099bd00();
  apuStack_40[0] = &stack0xfffffffffffffff8;
  _Z9usb_resetP10usb_handle(*(undefined8 *)(puVar7 + 8));
  lVar10 = *(long *)(puVar7 + 8);
  lStack_70 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (ulong *)(lVar10 + 0xd8);
  puStack_a8 = &UNK_004150f0;
  puStack_68 = unaff_RBX;
  _ZNSt3__15mutex4lockEv(puVar1);
  if ((((byte)adb_trace_mask & 0x20) != 0) && ((int)adb_trace_severity._20_4_ < 2)) {
    puStack_a8 = &UNK_004151d1;
    cVar4 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
    if (cVar4 != '\0') {
      puStack_a8 = &UNK_004151de;
      unaff_R15 = (undefined4 *)func_0x0099bce0();
      uStack_94 = *unaff_R15;
      puStack_a8 = &UNK_0041520c;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_78,&UNK_0016974f,0x1f2,1,0,0xffffffff);
      puStack_a8 = &UNK_00415214;
      unaff_R12 = _ZN7android4base10LogMessage6streamEv(auStack_78);
      unaff_R13 = &bStack_90;
      puStack_a8 = &UNK_00415233;
      _ZN7android4base12StringPrintfEPKcz
                (unaff_R13,&UNK_0016150f,lVar10,*(undefined4 *)(lVar10 + 0x18));
      puStack_a8 = &UNK_0041523e;
      func_0x0032e5a0(unaff_R12,unaff_R13);
      if ((bStack_90 & 1) != 0) {
        puStack_a8 = &UNK_00415255;
        _ZdaPvSt11align_val_t(uStack_80,CONCAT71(uStack_8f,bStack_90) & 0xfffffffffffffffe);
      }
      puStack_a8 = &UNK_0041525e;
      _ZN7android4base10LogMessageD2Ev(auStack_78);
      *unaff_R15 = uStack_94;
    }
  }
  if (*(char *)(lVar10 + 0xa2) == '\0') {
    *(undefined1 *)(lVar10 + 0xa2) = 1;
    if (*(int *)(lVar10 + 0x2c) == 0) {
      puStack_a8 = &UNK_0041519b;
      _Z24unregister_usb_transportP10usb_handle(lVar10);
    }
    else {
      if (*(long *)(lVar10 + 0x108) != 0) {
        puStack_a8 = &UNK_00415140;
        func_0x0099c400(*(long *)(lVar10 + 0x108),0xe);
      }
      puStack_a8 = &UNK_00415154;
      func_0x0099c020(*(undefined4 *)(lVar10 + 0x18),0x550b,lVar10 + 0x30);
      puStack_a8 = &UNK_00415168;
      func_0x0099c020(*(undefined4 *)(lVar10 + 0x18),0x550b,lVar10 + 0x68);
      *(undefined4 *)(lVar10 + 0x34) = 0xffffffed;
      *(undefined4 *)(lVar10 + 0x6c) = 0xffffffed;
      *(undefined2 *)(lVar10 + 0xa0) = 0;
      lVar10 = lVar10 + 0xa8;
      puStack_a8 = &UNK_00415191;
      _ZNSt3__118condition_variable10notify_allEv(lVar10);
    }
  }
  puStack_a8 = &UNK_004151a3;
  puVar8 = puVar1;
  _ZNSt3__115recursive_mutex6unlockEv();
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_70) {
    return *(long *)(in_FS_OFFSET + 0x28);
  }
  puStack_a8 = &UNK_0041526e;
  func_0x0099bd00();
  lVar9 = lRam0000000000a008a0;
  lStack_d8 = *(long *)(in_FS_OFFSET + 0x28);
  puStack_e0 = puVar8;
  puStack_d0 = puVar1;
  uStack_c8 = unaff_R12;
  pbStack_c0 = unaff_R13;
  lStack_b8 = lVar10;
  puStack_b0 = unaff_R15;
  puStack_a8 = (undefined *)apuStack_40;
  _ZNSt3__15mutex4lockEv(lRam0000000000a008a0);
  func_0x003f0c30(uRam0000000000a008a8,&puStack_e0);
  if ((((byte)adb_trace_mask & 0x20) != 0) && ((int)adb_trace_severity._20_4_ < 2)) {
    cVar4 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
    if (cVar4 != '\0') {
      puVar5 = (undefined4 *)func_0x0099bce0();
      uVar3 = *puVar5;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_e8,&UNK_0016974f,0x215,1,0,0xffffffff);
      uVar6 = _ZN7android4base10LogMessage6streamEv(auStack_e8);
      _ZN7android4base12StringPrintfEPKcz(&bStack_100,&UNK_0015c986,puStack_e0,(int)puStack_e0[3]);
      func_0x0032e5a0(uVar6,&bStack_100);
      if ((bStack_100 & 1) != 0) {
        _ZdaPvSt11align_val_t(uStack_f0,CONCAT71(uStack_ff,bStack_100) & 0xfffffffffffffffe);
      }
      _ZN7android4base10LogMessageD2Ev(auStack_e8);
      *puVar5 = uVar3;
    }
  }
  puVar1 = puStack_e0;
  if (puStack_e0 != (ulong *)0x0) {
    if ((int)puStack_e0[3] != -1) {
      func_0x0099bd10();
    }
    _ZNSt3__118condition_variableD2Ev(puVar1 + 0x15);
    if ((*puVar1 & 1) != 0) {
      _ZdaPvSt11align_val_t(puVar1[2],*puVar1 & 0xfffffffffffffffe);
    }
    _ZdaPvSt11align_val_t(puVar1,0x110);
  }
  _ZNSt3__115recursive_mutex6unlockEv();
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_d8) {
    return 0;
  }
  func_0x0099bd00();
  return *(long *)(lVar9 + 0x20);
}


