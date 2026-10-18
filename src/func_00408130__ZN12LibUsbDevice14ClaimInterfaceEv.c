// Function: _ZN12LibUsbDevice14ClaimInterfaceEv
// Address: 00408130
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 _ZN12LibUsbDevice14ClaimInterfaceEv(long param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long in_FS_OFFSET;
  bool bVar8;
  byte bStack_78;
  undefined7 uStack_77;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  uint uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  if ((((byte)adb_trace_mask & 0x20) != 0) && ((int)adb_trace_severity._20_4_ < 2)) {
    cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
    if (cVar2 != '\0') {
      puVar4 = (undefined4 *)func_0x0099bce0();
      uVar1 = *puVar4;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&bStack_78,&UNK_00159712,0x1d2,1,0,0xffffffff);
      uVar5 = _ZN7android4base10LogMessage6streamEv(&bStack_78);
      uVar5 = func_0x0032eb30(uVar5,&UNK_00177259,0x13);
      if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
        uStack_48 = *(undefined8 *)(param_1 + 0x38);
        uStack_58 = *(uint *)(param_1 + 0x28);
        uStack_54 = *(undefined4 *)(param_1 + 0x2c);
        uStack_50 = *(undefined4 *)(param_1 + 0x30);
        uStack_4c = *(undefined4 *)(param_1 + 0x34);
      }
      else {
        func_0x00330340(&uStack_58,*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x30));
      }
      func_0x0032e5a0(uVar5,&uStack_58);
      if ((uStack_58 & 1) != 0) {
        _ZdaPvSt11align_val_t(uStack_48,CONCAT44(uStack_54,uStack_58) & 0xfffffffffffffffe);
      }
      _ZN7android4base10LogMessageD2Ev(&bStack_78);
      *puVar4 = uVar1;
    }
  }
  if (*(char *)(param_1 + 0x4e) == '\x01') {
    uVar5 = 1;
    if ((((byte)adb_trace_mask & 0x20) != 0) && ((int)adb_trace_severity._20_4_ < 2)) {
      cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
      if (cVar2 != '\0') goto code_r0x00408457;
      uVar5 = 1;
    }
  }
  else {
    cVar2 = _ZN12LibUsbDevice16FindAdbInterfaceEv(param_1);
    if (cVar2 == '\0') {
      uVar5 = 0;
      if ((((byte)adb_trace_mask & 0x20) != 0) && ((int)adb_trace_severity._20_4_ < 2)) {
        cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
        uVar5 = 0;
        if (cVar2 != '\0') {
          puVar4 = (undefined4 *)func_0x0099bce0();
          uVar1 = *puVar4;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (&bStack_78,&UNK_00159712,0x1d9,1,0,0xffffffff);
          uVar5 = _ZN7android4base10LogMessage6streamEv(&bStack_78);
          uVar5 = func_0x0032eb30(uVar5,&UNK_0015e1c7,0x1d);
          if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
            uStack_48 = *(undefined8 *)(param_1 + 0x38);
            uStack_58 = *(uint *)(param_1 + 0x28);
            uStack_54 = *(undefined4 *)(param_1 + 0x2c);
            uStack_50 = *(undefined4 *)(param_1 + 0x30);
            uStack_4c = *(undefined4 *)(param_1 + 0x34);
          }
          else {
            func_0x00330340(&uStack_58,*(undefined8 *)(param_1 + 0x38),
                            *(undefined8 *)(param_1 + 0x30));
          }
          func_0x0032e5a0(uVar5,&uStack_58);
          if ((uStack_58 & 1) != 0) {
            _ZdaPvSt11align_val_t(uStack_48,CONCAT44(uStack_54,uStack_58) & 0xfffffffffffffffe);
          }
          _ZN7android4base10LogMessageD2Ev(&bStack_78);
          *puVar4 = uVar1;
          uVar5 = 0;
        }
      }
    }
    else {
      iVar3 = libusb_claim_interface(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x48));
      bVar8 = ((byte)adb_trace_mask & 0x20) != 0;
      if (iVar3 == 0) {
        if ((int)adb_trace_severity._20_4_ < 2 && bVar8) {
          cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
          if (cVar2 != '\0') {
            puVar4 = (undefined4 *)func_0x0099bce0();
            uVar1 = *puVar4;
            _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                      (auStack_60,&UNK_00159712,0x1e4,1,0,0xffffffff);
            uVar5 = _ZN7android4base10LogMessage6streamEv(auStack_60);
            uVar5 = func_0x0032eb30(uVar5,&UNK_0015fd03,0x16);
            if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
              uStack_48 = *(undefined8 *)(param_1 + 0x38);
              uStack_58 = *(uint *)(param_1 + 0x28);
              uStack_54 = *(undefined4 *)(param_1 + 0x2c);
              uStack_50 = *(undefined4 *)(param_1 + 0x30);
              uStack_4c = *(undefined4 *)(param_1 + 0x34);
            }
            else {
              func_0x00330340(&uStack_58,*(undefined8 *)(param_1 + 0x38),
                              *(undefined8 *)(param_1 + 0x30));
            }
            uVar5 = func_0x0032e5a0(uVar5,&uStack_58);
            uVar5 = func_0x0032eb30(uVar5,&UNK_0015f9ff,2);
            _ZN7android4base12StringPrintfEPKcz
                      (&bStack_78,&UNK_0015b239,*(undefined1 *)(param_1 + 0x4d),
                       *(undefined1 *)(param_1 + 0x4c));
            func_0x0032e5a0(uVar5,&bStack_78);
            if ((bStack_78 & 1) != 0) {
              _ZdaPvSt11align_val_t(uStack_68,CONCAT71(uStack_77,bStack_78) & 0xfffffffffffffffe);
            }
            if ((uStack_58 & 1) != 0) {
              _ZdaPvSt11align_val_t(uStack_48,CONCAT44(uStack_54,uStack_58) & 0xfffffffffffffffe);
            }
            _ZN7android4base10LogMessageD2Ev(auStack_60);
            *puVar4 = uVar1;
          }
        }
        uVar5 = 1;
        LOCK();
        *(undefined1 *)(param_1 + 0x4e) = 1;
        UNLOCK();
      }
      else if ((int)adb_trace_severity._20_4_ < 2 && bVar8) {
        cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
        uVar5 = 0;
        if (cVar2 != '\0') {
          puVar4 = (undefined4 *)func_0x0099bce0();
          uVar1 = *puVar4;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (&uStack_58,&UNK_00159712,0x1df,1,0,0xffffffff);
          uVar5 = _ZN7android4base10LogMessage6streamEv(&uStack_58);
          uVar5 = func_0x0032eb30(uVar5,&UNK_0015fcd9,0x29);
          if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
            param_1 = param_1 + 0x29;
          }
          else {
            param_1 = *(long *)(param_1 + 0x38);
          }
          uVar6 = func_0x0099bcf0(param_1);
          uVar5 = func_0x0032eb30(uVar5,param_1,uVar6);
          uVar5 = func_0x0032eb30(uVar5,&UNK_00173d53,1);
          uVar6 = libusb_error_name(iVar3);
          uVar7 = func_0x0099bcf0(uVar6);
          func_0x0032eb30(uVar5,uVar6,uVar7);
          _ZN7android4base10LogMessageD2Ev(&uStack_58);
          *puVar4 = uVar1;
          uVar5 = 0;
        }
      }
      else {
        uVar5 = 0;
      }
    }
  }
  while (*(long *)(in_FS_OFFSET + 0x28) != lStack_38) {
    func_0x0099bd00();
code_r0x00408457:
    puVar4 = (undefined4 *)func_0x0099bce0();
    uVar1 = *puVar4;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (&uStack_58,&UNK_00159712,0x1d4,1,0,0xffffffff);
    uVar5 = _ZN7android4base10LogMessage6streamEv(&uStack_58);
    func_0x0032eb30(uVar5,&UNK_001614b8,0x16);
    _ZN7android4base10LogMessageD2Ev(&uStack_58);
    *puVar4 = uVar1;
    uVar5 = 1;
  }
  return uVar5;
}


