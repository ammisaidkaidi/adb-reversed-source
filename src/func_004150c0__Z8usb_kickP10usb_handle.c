// Function: _Z8usb_kickP10usb_handle
// Address: 004150c0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long _Z8usb_kickP10usb_handle(long param_1)

{
  ulong *puVar1;
  undefined4 uVar2;
  char cVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  ulong *puVar6;
  long lVar7;
  undefined8 unaff_R12;
  byte *unaff_R13;
  undefined4 *unaff_R15;
  long in_FS_OFFSET;
  byte bStack_c8;
  undefined7 uStack_c7;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [8];
  ulong *puStack_a8;
  long lStack_a0;
  ulong *puStack_98;
  undefined8 uStack_90;
  byte *pbStack_88;
  long lStack_80;
  undefined4 *puStack_78;
  undefined *puStack_70;
  undefined4 uStack_5c;
  byte bStack_58;
  undefined7 uStack_57;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (ulong *)(param_1 + 0xd8);
  puStack_70 = &UNK_004150f0;
  _ZNSt3__15mutex4lockEv(puVar1);
  if ((((byte)adb_trace_mask & 0x20) != 0) && ((int)adb_trace_severity._20_4_ < 2)) {
    puStack_70 = &UNK_004151d1;
    cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
    if (cVar3 != '\0') {
      puStack_70 = &UNK_004151de;
      unaff_R15 = (undefined4 *)func_0x0099bce0();
      uStack_5c = *unaff_R15;
      puStack_70 = &UNK_0041520c;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_40,&UNK_0016974f,0x1f2,1,0,0xffffffff);
      puStack_70 = &UNK_00415214;
      unaff_R12 = _ZN7android4base10LogMessage6streamEv(auStack_40);
      unaff_R13 = &bStack_58;
      puStack_70 = &UNK_00415233;
      _ZN7android4base12StringPrintfEPKcz
                (unaff_R13,&UNK_0016150f,param_1,*(undefined4 *)(param_1 + 0x18));
      puStack_70 = &UNK_0041523e;
      func_0x0032e5a0(unaff_R12,unaff_R13);
      if ((bStack_58 & 1) != 0) {
        puStack_70 = &UNK_00415255;
        _ZdaPvSt11align_val_t(uStack_48,CONCAT71(uStack_57,bStack_58) & 0xfffffffffffffffe);
      }
      puStack_70 = &UNK_0041525e;
      _ZN7android4base10LogMessageD2Ev(auStack_40);
      *unaff_R15 = uStack_5c;
    }
  }
  if (*(char *)(param_1 + 0xa2) == '\0') {
    *(undefined1 *)(param_1 + 0xa2) = 1;
    if (*(int *)(param_1 + 0x2c) == 0) {
      puStack_70 = &UNK_0041519b;
      _Z24unregister_usb_transportP10usb_handle(param_1);
    }
    else {
      if (*(long *)(param_1 + 0x108) != 0) {
        puStack_70 = &UNK_00415140;
        func_0x0099c400(*(long *)(param_1 + 0x108),0xe);
      }
      puStack_70 = &UNK_00415154;
      func_0x0099c020(*(undefined4 *)(param_1 + 0x18),0x550b,param_1 + 0x30);
      puStack_70 = &UNK_00415168;
      func_0x0099c020(*(undefined4 *)(param_1 + 0x18),0x550b,param_1 + 0x68);
      *(undefined4 *)(param_1 + 0x34) = 0xffffffed;
      *(undefined4 *)(param_1 + 0x6c) = 0xffffffed;
      *(undefined2 *)(param_1 + 0xa0) = 0;
      param_1 = param_1 + 0xa8;
      puStack_70 = &UNK_00415191;
      _ZNSt3__118condition_variable10notify_allEv(param_1);
    }
  }
  puStack_70 = &UNK_004151a3;
  puVar6 = puVar1;
  _ZNSt3__115recursive_mutex6unlockEv();
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return *(long *)(in_FS_OFFSET + 0x28);
  }
  puStack_70 = &UNK_0041526e;
  func_0x0099bd00();
  lVar7 = lRam0000000000a008a0;
  lStack_a0 = *(long *)(in_FS_OFFSET + 0x28);
  puStack_a8 = puVar6;
  puStack_98 = puVar1;
  uStack_90 = unaff_R12;
  pbStack_88 = unaff_R13;
  lStack_80 = param_1;
  puStack_78 = unaff_R15;
  puStack_70 = &stack0xfffffffffffffff8;
  _ZNSt3__15mutex4lockEv(lRam0000000000a008a0);
  func_0x003f0c30(uRam0000000000a008a8,&puStack_a8);
  if ((((byte)adb_trace_mask & 0x20) != 0) && ((int)adb_trace_severity._20_4_ < 2)) {
    cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
    if (cVar3 != '\0') {
      puVar4 = (undefined4 *)func_0x0099bce0();
      uVar2 = *puVar4;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_b0,&UNK_0016974f,0x215,1,0,0xffffffff);
      uVar5 = _ZN7android4base10LogMessage6streamEv(auStack_b0);
      _ZN7android4base12StringPrintfEPKcz(&bStack_c8,&UNK_0015c986,puStack_a8,(int)puStack_a8[3]);
      func_0x0032e5a0(uVar5,&bStack_c8);
      if ((bStack_c8 & 1) != 0) {
        _ZdaPvSt11align_val_t(uStack_b8,CONCAT71(uStack_c7,bStack_c8) & 0xfffffffffffffffe);
      }
      _ZN7android4base10LogMessageD2Ev(auStack_b0);
      *puVar4 = uVar2;
    }
  }
  puVar1 = puStack_a8;
  if (puStack_a8 != (ulong *)0x0) {
    if ((int)puStack_a8[3] != -1) {
      func_0x0099bd10();
    }
    _ZNSt3__118condition_variableD2Ev(puVar1 + 0x15);
    if ((*puVar1 & 1) != 0) {
      _ZdaPvSt11align_val_t(puVar1[2],*puVar1 & 0xfffffffffffffffe);
    }
    _ZdaPvSt11align_val_t(puVar1,0x110);
  }
  _ZNSt3__115recursive_mutex6unlockEv();
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_a0) {
    return 0;
  }
  func_0x0099bd00();
  return *(long *)(lVar7 + 0x20);
}


