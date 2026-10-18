// Function: _Z16hotplug_callbackP14libusb_contextP13libusb_device20libusb_hotplug_eventPv
// Address: 00403000
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long _Z16hotplug_callbackP14libusb_contextP13libusb_device20libusb_hotplug_eventPv
               (undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined4 uVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined *puVar11;
  undefined4 *puVar12;
  undefined8 *puVar13;
  long in_FS_OFFSET;
  undefined1 auStack_e8 [15];
  undefined1 uStack_d9;
  undefined4 uStack_d7;
  undefined2 uStack_d3;
  undefined1 uStack_d1;
  undefined4 *puStack_c0;
  undefined *puStack_b8;
  code *pcStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 auStack_98 [2];
  long lStack_90;
  undefined4 *puStack_88;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  int *piStack_48;
  int **ppiStack_40;
  undefined8 *puStack_38;
  long lStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)(in_FS_OFFSET + 0x28);
  if (lRam0000000000a007b8 != -1) {
    ppiStack_40 = &piStack_48;
    uStack_58 = &ppiStack_40;
    puStack_60 = &UNK_00403054;
    _ZNSt3__111__call_onceERVmPvPFvS2_E(0xa007b8,&uStack_58,&UNK_00403560);
  }
  lVar2 = lRam0000000000a007b0;
  if (param_3 == 1) {
    LOCK();
    iRam0000000000a007c0 = iRam0000000000a007c0 + 1;
    UNLOCK();
  }
  puStack_60 = &UNK_00403078;
  uStack_50 = param_2;
  uStack_58._0_4_ = param_3;
  _ZNSt3__15mutex4lockEv(lRam0000000000a007b0);
  lStack_30 = lVar2 + 0x58;
  piStack_48 = *(int **)(lVar2 + 0x60);
  ppiStack_40 = &piStack_48;
  puStack_38 = &uStack_58;
  if (piStack_48 < *(int **)(lVar2 + 0x68)) {
    *piStack_48 = (int)uStack_58;
    piStack_48[1] = uStack_58._4_4_;
    piStack_48[2] = (int)uStack_50;
    piStack_48[3] = uStack_50._4_4_;
    piVar6 = piStack_48 + 4;
  }
  else {
    puStack_60 = &UNK_004030e6;
    _ZZNSt3__16vectorIN6google8protobuf10TextFormat18ParseLocationRangeENS_9allocatorIS4_EEE12emplace_backIJRKS4_EEERS4_DpOT_ENKUlvE0_clEv
              (&ppiStack_40);
    piVar6 = piStack_48;
  }
  *(int **)(lVar2 + 0x60) = piVar6;
  puStack_60 = &UNK_004030b5;
  _ZNSt3__115recursive_mutex6unlockEv(lVar2);
  puVar12 = (undefined4 *)(lVar2 + 0x28);
  puStack_60 = &UNK_004030c1;
  _ZNSt3__118condition_variable10notify_oneEv(puVar12);
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_28) {
    return 0;
  }
  puStack_60 = &UNK_004030f1;
  func_0x0099bd00();
  lStack_90 = *(long *)(in_FS_OFFSET + 0x28);
  puStack_88 = puVar12;
  puStack_60 = &stack0xfffffffffffffff8;
  if ((((byte)adb_trace_mask & 0x20) != 0) &&
     (puStack_60 = &stack0xfffffffffffffff8, (int)adb_trace_severity._20_4_ < 2)) {
    puStack_b8 = &UNK_004032e9;
    puStack_60 = &stack0xfffffffffffffff8;
    cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
    if (cVar3 != '\0') {
      puStack_b8 = &UNK_004032f6;
      puVar12 = (undefined4 *)func_0x0099bce0();
      uVar1 = *puVar12;
      puStack_b8 = &UNK_00403322;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_98,&UNK_00164554,0xfe,1,0,0xffffffff);
      puStack_b8 = &UNK_0040332a;
      uVar7 = _ZN7android4base10LogMessage6streamEv(auStack_98);
      puStack_b8 = &UNK_0040333e;
      func_0x0032eb30(uVar7,&UNK_0018043b,0x16);
      puStack_b8 = &UNK_00403346;
      _ZN7android4base10LogMessageD2Ev(auStack_98);
      *puVar12 = uVar1;
    }
  }
  puStack_b8 = &UNK_00403142;
  iVar4 = libusb_init(0);
  if (iVar4 == 0) {
    puStack_b8 = &UNK_004031ec;
    iVar4 = libusb_has_capability(1);
    if (iVar4 == 0) {
      puStack_b8 = &UNK_00403272;
      puVar12 = (undefined4 *)_Znwm(8);
      puStack_b8 = &UNK_0040327d;
      _ZNSt3__115__thread_structC2Ev(puVar12);
      puStack_b8 = &UNK_00403287;
      plVar10 = (long *)_Znwm(8);
      *plVar10 = (long)puVar12;
      puVar11 = &UNK_00403430;
    }
    else {
      uStack_a8 = 0;
      uStack_a0 = 0;
      pcStack_b0 = _Z16hotplug_callbackP14libusb_contextP13libusb_device20libusb_hotplug_eventPv;
      puStack_b8 = &UNK_00403225;
      iVar4 = libusb_hotplug_register_callback(0,3,1,0xffffffff,0xffffffff,0xffffffff);
      if (iVar4 != 0) {
        puStack_b8 = &UNK_00403235;
        cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(6,0);
        if (cVar3 != '\0') {
          puStack_b8 = &UNK_00403353;
          puVar12 = (undefined4 *)func_0x0099bce0();
          uVar1 = *puVar12;
          puStack_b8 = &UNK_0040337f;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (auStack_98,&UNK_00164554,0xe4,6,0,0xffffffff);
          puStack_b8 = &UNK_00403387;
          uVar7 = _ZN7android4base10LogMessage6streamEv(auStack_98);
          puStack_b8 = &UNK_0040339b;
          func_0x0032eb30(uVar7,&UNK_0017a22e,0x2a);
          puStack_b8 = &UNK_004033a3;
          _ZN7android4base10LogMessageD2Ev(auStack_98);
          *puVar12 = uVar1;
        }
      }
      puStack_b8 = &UNK_00403247;
      puVar12 = (undefined4 *)_Znwm(8);
      puStack_b8 = &UNK_00403252;
      _ZNSt3__115__thread_structC2Ev(puVar12);
      puStack_b8 = &UNK_0040325c;
      plVar10 = (long *)_Znwm(8);
      *plVar10 = (long)puVar12;
      puVar11 = &UNK_004033c0;
    }
    puStack_b8 = &UNK_0040329f;
    uVar5 = func_0x0099be80(auStack_98,0,puVar11,plVar10);
    if (uVar5 != 0) goto code_r0x004033b0;
    puVar12 = auStack_98;
    puStack_b8 = &UNK_004032b3;
    _ZNSt3__16thread6detachEv(puVar12);
    puStack_b8 = &UNK_004032bb;
    _ZNSt3__16threadD2Ev(puVar12);
  }
  else {
    puStack_b8 = &UNK_00403159;
    cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(3,0);
    if (cVar3 != '\0') {
      puStack_b8 = &UNK_00403166;
      puVar12 = (undefined4 *)func_0x0099bce0();
      uVar1 = *puVar12;
      puStack_b8 = &UNK_00403192;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_98,&UNK_00164554,0x101,3,0,0xffffffff);
      puStack_b8 = &UNK_0040319a;
      uVar7 = _ZN7android4base10LogMessage6streamEv(auStack_98);
      puStack_b8 = &UNK_004031ae;
      uVar7 = func_0x0032eb30(uVar7,&UNK_001660ff,0x1d);
      puStack_b8 = &UNK_004031b9;
      uVar8 = libusb_error_name(iVar4);
      puStack_b8 = &UNK_004031c4;
      uVar9 = func_0x0099bcf0(uVar8);
      puStack_b8 = &UNK_004031d2;
      func_0x0032eb30(uVar7,uVar8,uVar9);
      puStack_b8 = &UNK_004031da;
      _ZN7android4base10LogMessageD2Ev(auStack_98);
      *puVar12 = uVar1;
    }
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_90) {
    return *(long *)(in_FS_OFFSET + 0x28);
  }
  puStack_b8 = &UNK_004033b0;
  uVar5 = func_0x0099bd00();
code_r0x004033b0:
  puVar13 = (undefined8 *)(ulong)uVar5;
  puStack_b8 = &UNK_004033be;
  _ZNSt3__120__throw_system_errorEiPKc(puVar13,&UNK_0015f7ec);
  puStack_c0 = puVar12;
  puStack_b8 = (undefined *)&puStack_60;
  puVar12 = (undefined4 *)_ZNSt3__119__thread_local_dataEv();
  uVar7 = *puVar13;
  *puVar13 = 0;
  func_0x0099bfc0(*puVar12,uVar7);
  uStack_d3 = 0x6273;
  uStack_d7 = 0x7562696c;
  uStack_d1 = 0;
  func_0x0099c310(auStack_e8,&uStack_d7,0xf);
  uStack_d9 = 0;
  uVar7 = func_0x0099c320();
  func_0x0099c330(uVar7,auStack_e8);
  do {
    libusb_handle_events(0);
  } while( true );
}


