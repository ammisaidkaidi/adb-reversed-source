// Function: _ZN22libusb_inhouse_hotplug12report_errorERK16LibUsbConnection
// Address: 0040a900
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN22libusb_inhouse_hotplug12report_errorERK16LibUsbConnection(undefined8 param_1)

{
  code *pcVar1;
  int iVar2;
  long in_FS_OFFSET;
  undefined8 uStack_28;
  long lStack_20;
  
  lStack_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = libusb_has_capability(1);
  if (iVar2 == 0) {
    _ZNSt3__15mutex4lockEv(0xa00828);
    uStack_28 = _ZNK16LibUsbConnection12GetSessionIdEv(param_1);
    _ZNSt3__112__hash_tableINS_17__hash_value_typeImP13libusb_deviceEENS_22__unordered_map_hasherImNS_4pairIKmS3_EENS_4hashImEENS_8equal_toImEEEENS_21__unordered_map_equalImS8_SC_SA_EENS_9allocatorIS8_EEE14__erase_uniqueImEEmRKT_
              (0xa00800,&uStack_28);
    _ZNSt3__115recursive_mutex6unlockEv(0xa00828);
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_20) {
    return;
  }
  func_0x0099bd00();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


