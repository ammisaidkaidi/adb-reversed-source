// Function: _Z34adb_wait_for_device_initializationv
// Address: 003cf5a0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _Z34adb_wait_for_device_initializationv(void)

{
  undefined8 uVar1;
  int iVar2;
  long in_FS_OFFSET;
  long lStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_38 = uRam0000000000a00600;
  uStack_30 = 1;
  _ZNSt3__15mutex4lockEv();
  uVar1 = uRam0000000000a00608;
  lStack_40 = _ZNSt3__16chrono12steady_clock3nowEv();
  lStack_40 = lStack_40 + 3000000000;
  do {
    if ((cRam0000000000a00611 == '\x01') && (cRam0000000000a00610 != '\0')) break;
    iVar2 = func_0x003d06b0(uVar1,&uStack_38,&lStack_40);
  } while (iVar2 != 1);
  if ((char)uStack_30 == '\x01') {
    _ZNSt3__115recursive_mutex6unlockEv(uStack_38);
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_28) {
    return;
  }
  func_0x0099bd00();
  free();
  return;
}


