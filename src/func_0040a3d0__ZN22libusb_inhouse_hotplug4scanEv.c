// Function: _ZN22libusb_inhouse_hotplug4scanEv
// Address: 0040a3d0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN22libusb_inhouse_hotplug4scanEv(undefined8 param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 unaff_RBX;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  ulong *unaff_R14;
  long in_FS_OFFSET;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  ulong *puStack_a8;
  undefined *puStack_a0;
  ulong uStack_90;
  long *plStack_88;
  undefined1 uStack_79;
  ulong *puStack_78;
  ulong *puStack_70;
  ulong uStack_68;
  ulong uStack_60;
  undefined8 *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  puStack_a0 = &UNK_0040a3f3;
  lVar6 = _ZNSt3__16chrono12steady_clock3nowEv();
  if (lRam0000000000a007f0 <= (lVar6 - lRam0000000000a007f8) / 1000000000) {
    puStack_a0 = &UNK_0040a427;
    lRam0000000000a007f8 = _ZNSt3__16chrono12steady_clock3nowEv();
    if ((((byte)adb_trace_mask & 0x20) != 0) && ((int)adb_trace_severity._20_4_ < 2)) {
      puStack_a0 = &UNK_0040a88d;
      cVar4 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
      if (cVar4 != '\0') {
        puStack_a0 = &UNK_0040a89a;
        puVar9 = (undefined4 *)func_0x0099bce0();
        uVar2 = *puVar9;
        unaff_R14 = &uStack_68;
        puStack_a0 = &UNK_0040a8c6;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (unaff_R14,&UNK_0016eddc,0x3d,1,0,0xffffffff);
        puStack_a0 = &UNK_0040a8ce;
        uVar10 = _ZN7android4base10LogMessage6streamEv(unaff_R14);
        puStack_a0 = &UNK_0040a8e2;
        func_0x0032eb30(uVar10,&UNK_0017ef31,0x14);
        puStack_a0 = &UNK_0040a8ea;
        _ZN7android4base10LogMessageD2Ev(unaff_R14);
        *puVar9 = uVar2;
      }
    }
    puStack_a0 = &UNK_0040a457;
    _ZNSt3__15mutex4lockEv(0xa00828);
    plStack_88 = (long *)0x0;
    puStack_a0 = &UNK_0040a46a;
    libusb_get_device_list(0,&plStack_88);
    puStack_58 = (undefined8 *)0x0;
    lStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_48 = 0x3f800000;
    lVar6 = *plStack_88;
    puVar13 = puRam0000000000a00810;
    if (lVar6 != 0) {
      lVar15 = 0;
      unaff_R14 = &uStack_90;
      do {
        puStack_a0 = &UNK_0040a507;
        uStack_90 = _ZN12LibUsbDevice17GenerateSessionIdEP13libusb_device(lVar6);
        if ((uRam0000000000a00808 != 0) && (lRam0000000000a00818 != 0)) {
          uVar1 = uRam0000000000a00808 - 1;
          if ((uRam0000000000a00808 & uVar1) == 0) {
            uVar11 = uVar1 & uStack_90;
          }
          else {
            uVar11 = uStack_90;
            if (uRam0000000000a00808 <= uStack_90) {
              if ((uStack_90 | uRam0000000000a00808) >> 0x20 == 0) {
                uVar11 = (uStack_90 & 0xffffffff) % (uRam0000000000a00808 & 0xffffffff);
              }
              else {
                uVar11 = uStack_90 % uRam0000000000a00808;
              }
            }
          }
          puVar13 = *(undefined8 **)(lRam0000000000a00800 + uVar11 * 8);
          if (puVar13 != (undefined8 *)0x0) {
            for (puVar13 = (undefined8 *)*puVar13; puVar13 != (undefined8 *)0x0;
                puVar13 = (undefined8 *)*puVar13) {
              uVar12 = puVar13[1];
              if (uStack_90 == uVar12) {
                if (puVar13[2] == uStack_90) goto code_r0x0040a4c1;
              }
              else {
                if ((uRam0000000000a00808 & uVar1) == 0) {
                  uVar12 = uVar12 & uVar1;
                }
                else if (uRam0000000000a00808 <= uVar12) {
                  if ((uVar12 | uRam0000000000a00808) >> 0x20 != 0) {
                    if (uVar12 % uRam0000000000a00808 == uVar11) goto code_r0x0040a59a;
                    break;
                  }
                  uVar12 = (uVar12 & 0xffffffff) % (uRam0000000000a00808 & 0xffffffff);
                }
                if (uVar12 != uVar11) break;
              }
code_r0x0040a59a:
            }
          }
        }
        if ((uStack_60 != 0) && (lStack_50 != 0)) {
          uVar1 = uStack_60 - 1;
          if ((uStack_60 & uVar1) == 0) {
            uVar11 = uVar1 & uStack_90;
          }
          else {
            uVar11 = uStack_90;
            if (uStack_60 <= uStack_90) {
              if ((uStack_90 | uStack_60) >> 0x20 == 0) {
                uVar11 = (uStack_90 & 0xffffffff) % (uStack_60 & 0xffffffff);
              }
              else {
                uVar11 = uStack_90 % uStack_60;
              }
            }
          }
          puVar13 = *(undefined8 **)(uStack_68 + uVar11 * 8);
          if (puVar13 != (undefined8 *)0x0) {
            for (puVar13 = (undefined8 *)*puVar13; puVar13 != (undefined8 *)0x0;
                puVar13 = (undefined8 *)*puVar13) {
              uVar12 = puVar13[1];
              if (uStack_90 == uVar12) {
                if (puVar13[2] == uStack_90) goto code_r0x0040a4c1;
              }
              else {
                if ((uStack_60 & uVar1) == 0) {
                  uVar12 = uVar12 & uVar1;
                }
                else if (uStack_60 <= uVar12) {
                  if ((uVar12 | uStack_60) >> 0x20 != 0) {
                    if (uVar12 % uStack_60 == uVar11) goto code_r0x0040a67a;
                    break;
                  }
                  uVar12 = (uVar12 & 0xffffffff) % (uStack_60 & 0xffffffff);
                }
                if (uVar12 != uVar11) break;
              }
code_r0x0040a67a:
            }
          }
        }
        puStack_a0 = &UNK_0040a4c1;
        _Z16hotplug_callbackP14libusb_contextP13libusb_device20libusb_hotplug_eventPv(0,lVar6,1,0);
code_r0x0040a4c1:
        puStack_70 = &uStack_68;
        puStack_a0 = &UNK_0040a4e6;
        puStack_78 = unaff_R14;
        lVar7 = _ZZNSt3__112__hash_tableINS_17__hash_value_typeImP13libusb_deviceEENS_22__unordered_map_hasherImNS_4pairIKmS3_EENS_4hashImEENS_8equal_toImEEEENS_21__unordered_map_equalImS8_SC_SA_EENS_9allocatorIS8_EEE16__emplace_uniqueB8nn220000IJRKNS_21piecewise_construct_tENS_5tupleIJRS7_EEENSN_IJEEEEEENS6_INS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEEbEEDpOT_ENKUlSO_SM_OSP_OSQ_E_clESO_SM_S11_S12_
                          (&puStack_70,unaff_R14,&_ZNSt3__119piecewise_constructE,&puStack_78,
                           &uStack_79);
        *(long *)(lVar7 + 0x18) = lVar6;
        lVar6 = plStack_88[lVar15 + 1];
        lVar15 = lVar15 + 1;
        puVar13 = puRam0000000000a00810;
      } while (lVar6 != 0);
    }
    for (; puVar13 != (undefined8 *)0x0; puVar13 = (undefined8 *)*puVar13) {
      if ((uStack_60 != 0) && (lStack_50 != 0)) {
        uVar11 = puVar13[2];
        uVar1 = uStack_60 - 1;
        if ((uStack_60 & uVar1) == 0) {
          uVar12 = uVar11 & uVar1;
        }
        else {
          uVar12 = uVar11;
          if (uStack_60 <= uVar11) {
            if ((uVar11 | uStack_60) >> 0x20 == 0) {
              uVar12 = (uVar11 & 0xffffffff) % (uStack_60 & 0xffffffff);
            }
            else {
              uVar12 = uVar11 % uStack_60;
            }
          }
        }
        puVar14 = *(undefined8 **)(uStack_68 + uVar12 * 8);
        if (puVar14 != (undefined8 *)0x0) {
          for (puVar14 = (undefined8 *)*puVar14; puVar14 != (undefined8 *)0x0;
              puVar14 = (undefined8 *)*puVar14) {
            uVar8 = puVar14[1];
            if (uVar11 == uVar8) {
              if (puVar14[2] == uVar11) goto code_r0x0040a7e2;
            }
            else {
              if ((uStack_60 & uVar1) == 0) {
                uVar8 = uVar8 & uVar1;
              }
              else if (uStack_60 <= uVar8) {
                if ((uVar8 | uStack_60) >> 0x20 != 0) {
                  if (uVar8 % uStack_60 == uVar12) goto code_r0x0040a776;
                  break;
                }
                uVar8 = (uVar8 & 0xffffffff) % (uStack_60 & 0xffffffff);
              }
              if (uVar8 != uVar12) break;
            }
code_r0x0040a776:
          }
        }
      }
      puStack_a0 = &UNK_0040a7e2;
      _Z16hotplug_callbackP14libusb_contextP13libusb_device20libusb_hotplug_eventPv
                (0,puVar13[3],2,0);
code_r0x0040a7e2:
    }
    puStack_a0 = &UNK_0040a7fe;
    func_0x0040a980(0xa00800,&uStack_68);
    puStack_a0 = &UNK_0040a809;
    libusb_free_device_list(plStack_88,0);
    uVar1 = uStack_68;
    puVar13 = puStack_58;
    while (puVar13 != (undefined8 *)0x0) {
      puVar14 = (undefined8 *)*puVar13;
      puStack_a0 = &UNK_0040a82d;
      uStack_68 = uVar1;
      _ZdaPvSt11align_val_t(puVar13,0x20);
      uVar1 = uStack_68;
      puVar13 = puVar14;
    }
    unaff_RBX = 0;
    uStack_68 = 0;
    if (uVar1 != 0) {
      puStack_a0 = &UNK_0040a853;
      _ZdaPvSt11align_val_t(uVar1,uStack_60 << 3);
    }
    param_1 = 0xa00828;
    puStack_a0 = &UNK_0040a85f;
    _ZNSt3__115recursive_mutex6unlockEv(0xa00828);
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return;
  }
  puStack_a0 = &UNK_0040a8f7;
  func_0x0099bd00();
  lStack_b8 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_b0 = unaff_RBX;
  puStack_a8 = unaff_R14;
  puStack_a0 = &stack0xfffffffffffffff8;
  iVar5 = libusb_has_capability(1);
  if (iVar5 == 0) {
    _ZNSt3__15mutex4lockEv(0xa00828);
    uStack_c0 = _ZNK16LibUsbConnection12GetSessionIdEv(param_1);
    _ZNSt3__112__hash_tableINS_17__hash_value_typeImP13libusb_deviceEENS_22__unordered_map_hasherImNS_4pairIKmS3_EENS_4hashImEENS_8equal_toImEEEENS_21__unordered_map_equalImS8_SC_SA_EENS_9allocatorIS8_EEE14__erase_uniqueImEEmRKT_
              (0xa00800,&uStack_c0);
    _ZNSt3__115recursive_mutex6unlockEv(0xa00828);
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_b8) {
    return;
  }
  func_0x0099bd00();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


