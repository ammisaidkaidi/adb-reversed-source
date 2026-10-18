// Function: _ZN12LibUsbDevice14RetrieveSpeedsEv
// Address: 00407f00
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long _ZN12LibUsbDevice14RetrieveSpeedsEv(undefined8 *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ushort uVar11;
  ulong uVar12;
  long lVar13;
  ushort *puVar14;
  ulong uVar15;
  undefined *unaff_R12;
  undefined *unaff_R13;
  byte **unaff_R14;
  ulong unaff_R15;
  long in_FS_OFFSET;
  bool bVar16;
  byte bStack_c0;
  undefined7 uStack_bf;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [8];
  uint uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  long lStack_80;
  undefined8 *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  byte **ppbStack_60;
  ulong uStack_58;
  undefined *puStack_50;
  byte *pbStack_48;
  long lStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  puStack_50 = &UNK_00407f29;
  iVar4 = libusb_get_device_speed(*param_1);
  if (iVar4 - 1U < 6) {
    uVar8 = *(undefined8 *)(&UNK_001fe8f0 + (ulong)(iVar4 - 1U) * 8);
  }
  else {
    uVar8 = 0;
  }
  param_1[10] = uVar8;
  lStack_40 = 0;
  lVar13 = param_1[1];
  puStack_50 = &UNK_00407f5a;
  iVar4 = libusb_get_bos_descriptor(lVar13,&lStack_40);
  if (iVar4 == 0) {
    if (*(char *)(lStack_40 + 4) != '\0') {
      unaff_R15 = 0;
      unaff_R14 = &pbStack_48;
      unaff_R12 = &UNK_001fe730;
      unaff_R13 = &UNK_001fe920;
      do {
        cVar3 = *(char *)(*(long *)(lStack_40 + 8 + unaff_R15 * 8) + 2);
        if (cVar3 == '\n') {
          pbStack_48 = (byte *)0x0;
          puStack_50 = &UNK_00407fa7;
          iVar4 = libusb_get_ssplus_usb_device_capability_descriptor
                            (0,*(undefined8 *)(lStack_40 + 8 + unaff_R15 * 8),unaff_R14);
          if (iVar4 == 0) {
            bVar1 = *pbStack_48;
            if (bVar1 == 0) {
              uVar5 = 0;
            }
            else {
              if (bVar1 == 1) {
                uVar12 = 0;
                uVar5 = 0;
              }
              else {
                puVar14 = (ushort *)(pbStack_48 + 0x34);
                uVar12 = 0;
                uVar5 = 0;
                do {
                  uVar15 = (ulong)puVar14[-0xc] *
                           *(long *)(&UNK_001fe730 + (ulong)*(uint *)(puVar14 + -0x14) * 8);
                  if ((ulong)puVar14[-0xc] *
                      *(long *)(&UNK_001fe730 + (ulong)*(uint *)(puVar14 + -0x14) * 8) < uVar5) {
                    uVar15 = uVar5;
                  }
                  uVar5 = (ulong)*puVar14 *
                          *(long *)(&UNK_001fe730 + (ulong)*(uint *)(puVar14 + -8) * 8);
                  if ((ulong)*puVar14 *
                      *(long *)(&UNK_001fe730 + (ulong)*(uint *)(puVar14 + -8) * 8) < uVar15) {
                    uVar5 = uVar15;
                  }
                  uVar12 = uVar12 + 2;
                  puVar14 = puVar14 + 0x18;
                } while ((bVar1 & 0xfffffffe) != uVar12);
                if ((bVar1 & 1) == 0) goto code_r0x004080c8;
              }
              if (uVar5 <= (ulong)*(ushort *)(pbStack_48 + uVar12 * 0x18 + 0x1c) *
                           *(long *)(&UNK_001fe730 +
                                    (ulong)*(uint *)(pbStack_48 + uVar12 * 0x18 + 0xc) * 8)) {
                uVar5 = (ulong)*(ushort *)(pbStack_48 + uVar12 * 0x18 + 0x1c) *
                        *(long *)(&UNK_001fe730 +
                                 (ulong)*(uint *)(pbStack_48 + uVar12 * 0x18 + 0xc) * 8);
              }
            }
code_r0x004080c8:
            if (uVar5 < (ulong)param_1[0xb]) {
              uVar5 = param_1[0xb];
            }
            param_1[0xb] = uVar5;
            puStack_50 = &UNK_004080dc;
            libusb_free_ssplus_usb_device_capability_descriptor();
          }
        }
        else if (cVar3 == '\x03') {
          pbStack_48 = (byte *)0x0;
          puStack_50 = &UNK_00407fe9;
          iVar4 = libusb_get_ss_usb_device_capability_descriptor
                            (0,*(undefined8 *)(lStack_40 + 8 + unaff_R15 * 8),unaff_R14);
          if (iVar4 == 0) {
            uVar11 = *(ushort *)(pbStack_48 + 4);
            uVar5 = (ulong)uVar11;
            if (uVar11 != 0) {
              if (uVar11 == 1) {
                uVar5 = 1;
              }
              else {
                lVar13 = -1;
                do {
                  lVar13 = lVar13 + 1;
                  uVar11 = (ushort)uVar5;
                  uVar5 = uVar5 >> 1;
                } while (3 < uVar11);
                if ((uint)lVar13 < 3) {
                  uVar5 = *(ulong *)(&UNK_001fe920 + lVar13 * 8);
                }
                else {
                  uVar5 = 0;
                }
              }
            }
            if (uVar5 < (ulong)param_1[0xb]) {
              uVar5 = param_1[0xb];
            }
            param_1[0xb] = uVar5;
            puStack_50 = &UNK_004080f7;
            libusb_free_ss_usb_device_capability_descriptor();
          }
        }
        unaff_R15 = unaff_R15 + 1;
      } while (unaff_R15 < *(byte *)(lStack_40 + 4));
    }
    puStack_50 = &UNK_00408101;
    lVar13 = lStack_40;
    libusb_free_bos_descriptor();
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return *(long *)(in_FS_OFFSET + 0x28);
  }
  puStack_50 = &UNK_00408124;
  func_0x0099bd00();
  lStack_80 = *(long *)(in_FS_OFFSET + 0x28);
  puStack_78 = param_1;
  puStack_70 = unaff_R12;
  puStack_68 = unaff_R13;
  ppbStack_60 = unaff_R14;
  uStack_58 = unaff_R15;
  puStack_50 = &stack0xfffffffffffffff8;
  if ((((byte)adb_trace_mask & 0x20) != 0) &&
     (puStack_50 = &stack0xfffffffffffffff8, (int)adb_trace_severity._20_4_ < 2)) {
    puStack_50 = &stack0xfffffffffffffff8;
    cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
    if (cVar3 != '\0') {
      puVar7 = (undefined4 *)func_0x0099bce0();
      uVar2 = *puVar7;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&bStack_c0,&UNK_00159712,0x1d2,1,0,0xffffffff);
      uVar8 = _ZN7android4base10LogMessage6streamEv(&bStack_c0);
      uVar8 = func_0x0032eb30(uVar8,&UNK_00177259,0x13);
      if ((*(byte *)(lVar13 + 0x28) & 1) == 0) {
        uStack_90 = *(undefined8 *)(lVar13 + 0x38);
        uStack_a0 = *(uint *)(lVar13 + 0x28);
        uStack_9c = *(undefined4 *)(lVar13 + 0x2c);
        uStack_98 = *(undefined4 *)(lVar13 + 0x30);
        uStack_94 = *(undefined4 *)(lVar13 + 0x34);
      }
      else {
        func_0x00330340(&uStack_a0,*(undefined8 *)(lVar13 + 0x38),*(undefined8 *)(lVar13 + 0x30));
      }
      func_0x0032e5a0(uVar8,&uStack_a0);
      if ((uStack_a0 & 1) != 0) {
        _ZdaPvSt11align_val_t(uStack_90,CONCAT44(uStack_9c,uStack_a0) & 0xfffffffffffffffe);
      }
      _ZN7android4base10LogMessageD2Ev(&bStack_c0);
      *puVar7 = uVar2;
    }
  }
  if (*(char *)(lVar13 + 0x4e) == '\x01') {
    lVar6 = 1;
    if ((((byte)adb_trace_mask & 0x20) != 0) && ((int)adb_trace_severity._20_4_ < 2)) {
      cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
      if (cVar3 != '\0') goto code_r0x00408457;
      lVar6 = 1;
    }
  }
  else {
    cVar3 = _ZN12LibUsbDevice16FindAdbInterfaceEv(lVar13);
    if (cVar3 == '\0') {
      lVar6 = 0;
      if ((((byte)adb_trace_mask & 0x20) != 0) && ((int)adb_trace_severity._20_4_ < 2)) {
        cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
        lVar6 = 0;
        if (cVar3 != '\0') {
          puVar7 = (undefined4 *)func_0x0099bce0();
          uVar2 = *puVar7;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (&bStack_c0,&UNK_00159712,0x1d9,1,0,0xffffffff);
          uVar8 = _ZN7android4base10LogMessage6streamEv(&bStack_c0);
          uVar8 = func_0x0032eb30(uVar8,&UNK_0015e1c7,0x1d);
          if ((*(byte *)(lVar13 + 0x28) & 1) == 0) {
            uStack_90 = *(undefined8 *)(lVar13 + 0x38);
            uStack_a0 = *(uint *)(lVar13 + 0x28);
            uStack_9c = *(undefined4 *)(lVar13 + 0x2c);
            uStack_98 = *(undefined4 *)(lVar13 + 0x30);
            uStack_94 = *(undefined4 *)(lVar13 + 0x34);
          }
          else {
            func_0x00330340(&uStack_a0,*(undefined8 *)(lVar13 + 0x38),*(undefined8 *)(lVar13 + 0x30)
                           );
          }
          func_0x0032e5a0(uVar8,&uStack_a0);
          if ((uStack_a0 & 1) != 0) {
            _ZdaPvSt11align_val_t(uStack_90,CONCAT44(uStack_9c,uStack_a0) & 0xfffffffffffffffe);
          }
          _ZN7android4base10LogMessageD2Ev(&bStack_c0);
          *puVar7 = uVar2;
          lVar6 = 0;
        }
      }
    }
    else {
      iVar4 = libusb_claim_interface(*(undefined8 *)(lVar13 + 8),*(undefined4 *)(lVar13 + 0x48));
      bVar16 = ((byte)adb_trace_mask & 0x20) != 0;
      if (iVar4 == 0) {
        if ((int)adb_trace_severity._20_4_ < 2 && bVar16) {
          cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
          if (cVar3 != '\0') {
            puVar7 = (undefined4 *)func_0x0099bce0();
            uVar2 = *puVar7;
            _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                      (auStack_a8,&UNK_00159712,0x1e4,1,0,0xffffffff);
            uVar8 = _ZN7android4base10LogMessage6streamEv(auStack_a8);
            uVar8 = func_0x0032eb30(uVar8,&UNK_0015fd03,0x16);
            if ((*(byte *)(lVar13 + 0x28) & 1) == 0) {
              uStack_90 = *(undefined8 *)(lVar13 + 0x38);
              uStack_a0 = *(uint *)(lVar13 + 0x28);
              uStack_9c = *(undefined4 *)(lVar13 + 0x2c);
              uStack_98 = *(undefined4 *)(lVar13 + 0x30);
              uStack_94 = *(undefined4 *)(lVar13 + 0x34);
            }
            else {
              func_0x00330340(&uStack_a0,*(undefined8 *)(lVar13 + 0x38),
                              *(undefined8 *)(lVar13 + 0x30));
            }
            uVar8 = func_0x0032e5a0(uVar8,&uStack_a0);
            uVar8 = func_0x0032eb30(uVar8,&UNK_0015f9ff,2);
            _ZN7android4base12StringPrintfEPKcz
                      (&bStack_c0,&UNK_0015b239,*(undefined1 *)(lVar13 + 0x4d),
                       *(undefined1 *)(lVar13 + 0x4c));
            func_0x0032e5a0(uVar8,&bStack_c0);
            if ((bStack_c0 & 1) != 0) {
              _ZdaPvSt11align_val_t(uStack_b0,CONCAT71(uStack_bf,bStack_c0) & 0xfffffffffffffffe);
            }
            if ((uStack_a0 & 1) != 0) {
              _ZdaPvSt11align_val_t(uStack_90,CONCAT44(uStack_9c,uStack_a0) & 0xfffffffffffffffe);
            }
            _ZN7android4base10LogMessageD2Ev(auStack_a8);
            *puVar7 = uVar2;
          }
        }
        lVar6 = 1;
        LOCK();
        *(undefined1 *)(lVar13 + 0x4e) = 1;
        UNLOCK();
      }
      else if ((int)adb_trace_severity._20_4_ < 2 && bVar16) {
        cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
        lVar6 = 0;
        if (cVar3 != '\0') {
          puVar7 = (undefined4 *)func_0x0099bce0();
          uVar2 = *puVar7;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (&uStack_a0,&UNK_00159712,0x1df,1,0,0xffffffff);
          uVar8 = _ZN7android4base10LogMessage6streamEv(&uStack_a0);
          uVar8 = func_0x0032eb30(uVar8,&UNK_0015fcd9,0x29);
          if ((*(byte *)(lVar13 + 0x28) & 1) == 0) {
            lVar13 = lVar13 + 0x29;
          }
          else {
            lVar13 = *(long *)(lVar13 + 0x38);
          }
          uVar9 = func_0x0099bcf0(lVar13);
          uVar8 = func_0x0032eb30(uVar8,lVar13,uVar9);
          uVar8 = func_0x0032eb30(uVar8,&UNK_00173d53,1);
          uVar9 = libusb_error_name(iVar4);
          uVar10 = func_0x0099bcf0(uVar9);
          func_0x0032eb30(uVar8,uVar9,uVar10);
          _ZN7android4base10LogMessageD2Ev(&uStack_a0);
          *puVar7 = uVar2;
          lVar6 = 0;
        }
      }
      else {
        lVar6 = 0;
      }
    }
  }
  while (*(long *)(in_FS_OFFSET + 0x28) != lStack_80) {
    func_0x0099bd00();
code_r0x00408457:
    puVar7 = (undefined4 *)func_0x0099bce0();
    uVar2 = *puVar7;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (&uStack_a0,&UNK_00159712,0x1d4,1,0,0xffffffff);
    uVar8 = _ZN7android4base10LogMessage6streamEv(&uStack_a0);
    func_0x0032eb30(uVar8,&UNK_001614b8,0x16);
    _ZN7android4base10LogMessageD2Ev(&uStack_a0);
    *puVar7 = uVar2;
    lVar6 = 1;
  }
  return lVar6;
}


