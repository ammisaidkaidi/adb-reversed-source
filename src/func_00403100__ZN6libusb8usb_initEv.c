// Function: _ZN6libusb8usb_initEv
// Address: 00403100
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN6libusb8usb_initEv(void)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined4 *puVar9;
  undefined *puVar10;
  undefined4 *unaff_RBX;
  undefined8 *puVar11;
  long in_FS_OFFSET;
  undefined1 auStack_90 [15];
  undefined1 uStack_81;
  undefined4 uStack_7f;
  undefined2 uStack_7b;
  undefined1 uStack_79;
  undefined4 *puStack_68;
  undefined *puStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 auStack_40 [2];
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  if ((((byte)adb_trace_mask & 0x20) != 0) && ((int)adb_trace_severity._20_4_ < 2)) {
    puStack_60 = &UNK_004032e9;
    cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
    if (cVar2 != '\0') {
      puStack_60 = &UNK_004032f6;
      unaff_RBX = (undefined4 *)func_0x0099bce0();
      uVar1 = *unaff_RBX;
      puStack_60 = &UNK_00403322;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_40,&UNK_00164554,0xfe,1,0,0xffffffff);
      puStack_60 = &UNK_0040332a;
      uVar5 = _ZN7android4base10LogMessage6streamEv(auStack_40);
      puStack_60 = &UNK_0040333e;
      func_0x0032eb30(uVar5,&UNK_0018043b,0x16);
      puStack_60 = &UNK_00403346;
      _ZN7android4base10LogMessageD2Ev(auStack_40);
      *unaff_RBX = uVar1;
    }
  }
  puStack_60 = &UNK_00403142;
  iVar3 = libusb_init(0);
  if (iVar3 == 0) {
    puStack_60 = &UNK_004031ec;
    iVar3 = libusb_has_capability(1);
    if (iVar3 == 0) {
      puStack_60 = &UNK_00403272;
      unaff_RBX = (undefined4 *)_Znwm(8);
      puStack_60 = &UNK_0040327d;
      _ZNSt3__115__thread_structC2Ev(unaff_RBX);
      puStack_60 = &UNK_00403287;
      plVar8 = (long *)_Znwm(8);
      *plVar8 = (long)unaff_RBX;
      puVar10 = &UNK_00403430;
    }
    else {
      uStack_50 = 0;
      uStack_48 = 0;
      pcStack_58 = _Z16hotplug_callbackP14libusb_contextP13libusb_device20libusb_hotplug_eventPv;
      puStack_60 = &UNK_00403225;
      iVar3 = libusb_hotplug_register_callback(0,3,1,0xffffffff,0xffffffff,0xffffffff);
      if (iVar3 != 0) {
        puStack_60 = &UNK_00403235;
        cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(6,0);
        if (cVar2 != '\0') {
          puStack_60 = &UNK_00403353;
          puVar9 = (undefined4 *)func_0x0099bce0();
          uVar1 = *puVar9;
          puStack_60 = &UNK_0040337f;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (auStack_40,&UNK_00164554,0xe4,6,0,0xffffffff);
          puStack_60 = &UNK_00403387;
          uVar5 = _ZN7android4base10LogMessage6streamEv(auStack_40);
          puStack_60 = &UNK_0040339b;
          func_0x0032eb30(uVar5,&UNK_0017a22e,0x2a);
          puStack_60 = &UNK_004033a3;
          _ZN7android4base10LogMessageD2Ev(auStack_40);
          *puVar9 = uVar1;
        }
      }
      puStack_60 = &UNK_00403247;
      unaff_RBX = (undefined4 *)_Znwm(8);
      puStack_60 = &UNK_00403252;
      _ZNSt3__115__thread_structC2Ev(unaff_RBX);
      puStack_60 = &UNK_0040325c;
      plVar8 = (long *)_Znwm(8);
      *plVar8 = (long)unaff_RBX;
      puVar10 = &UNK_004033c0;
    }
    puStack_60 = &UNK_0040329f;
    uVar4 = func_0x0099be80(auStack_40,0,puVar10,plVar8);
    if (uVar4 != 0) goto code_r0x004033b0;
    unaff_RBX = auStack_40;
    puStack_60 = &UNK_004032b3;
    _ZNSt3__16thread6detachEv(unaff_RBX);
    puStack_60 = &UNK_004032bb;
    _ZNSt3__16threadD2Ev(unaff_RBX);
  }
  else {
    puStack_60 = &UNK_00403159;
    cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(3,0);
    if (cVar2 != '\0') {
      puStack_60 = &UNK_00403166;
      unaff_RBX = (undefined4 *)func_0x0099bce0();
      uVar1 = *unaff_RBX;
      puStack_60 = &UNK_00403192;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_40,&UNK_00164554,0x101,3,0,0xffffffff);
      puStack_60 = &UNK_0040319a;
      uVar5 = _ZN7android4base10LogMessage6streamEv(auStack_40);
      puStack_60 = &UNK_004031ae;
      uVar5 = func_0x0032eb30(uVar5,&UNK_001660ff,0x1d);
      puStack_60 = &UNK_004031b9;
      uVar6 = libusb_error_name(iVar3);
      puStack_60 = &UNK_004031c4;
      uVar7 = func_0x0099bcf0(uVar6);
      puStack_60 = &UNK_004031d2;
      func_0x0032eb30(uVar5,uVar6,uVar7);
      puStack_60 = &UNK_004031da;
      _ZN7android4base10LogMessageD2Ev(auStack_40);
      *unaff_RBX = uVar1;
    }
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return;
  }
  puStack_60 = &UNK_004033b0;
  uVar4 = func_0x0099bd00();
code_r0x004033b0:
  puVar11 = (undefined8 *)(ulong)uVar4;
  puStack_60 = &UNK_004033be;
  _ZNSt3__120__throw_system_errorEiPKc(puVar11,&UNK_0015f7ec);
  puStack_68 = unaff_RBX;
  puStack_60 = &stack0xfffffffffffffff8;
  puVar9 = (undefined4 *)_ZNSt3__119__thread_local_dataEv();
  uVar5 = *puVar11;
  *puVar11 = 0;
  func_0x0099bfc0(*puVar9,uVar5);
  uStack_7b = 0x6273;
  uStack_7f = 0x7562696c;
  uStack_79 = 0;
  func_0x0099c310(auStack_90,&uStack_7f,0xf);
  uStack_81 = 0;
  uVar5 = func_0x0099c320();
  func_0x0099c330(uVar5,auStack_90);
  do {
    libusb_handle_events(0);
  } while( true );
}


