// Function: _Z31adb_notify_device_scan_completev
// Address: 003cf4b0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _Z31adb_notify_device_scan_completev(void)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  ulong unaff_R14;
  long in_FS_OFFSET;
  long lStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  ulong uStack_78;
  ulong uStack_70;
  undefined *apuStack_58 [4];
  undefined **ppuStack_38;
  long lStack_20;
  
  uVar5 = uRam0000000000a00600;
  lStack_20 = *(long *)(in_FS_OFFSET + 0x28);
  _ZNSt3__15mutex4lockEv(uRam0000000000a00600);
  if (cRam0000000000a00611 == '\x01') {
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_20) {
      pthread_mutex_unlock(uVar5);
      return;
    }
    goto code_r0x003cf594;
  }
  cRam0000000000a00611 = '\x01';
  _ZNSt3__115recursive_mutex6unlockEv(uVar5);
  apuStack_58[0] = &UNK_0099e9d8;
  ppuStack_38 = apuStack_58;
  uVar2 = _Z18iterate_transportsNSt3__18functionIFbPK10atransportEEE(apuStack_58);
  uVar5 = (ulong)uVar2;
  if (ppuStack_38 == apuStack_58) {
    lVar4 = 0x20;
code_r0x003cf549:
    (**(code **)(*ppuStack_38 + lVar4))();
  }
  else {
    lVar4 = 0x28;
    if (ppuStack_38 != (undefined **)0x0) goto code_r0x003cf549;
  }
  unaff_R14 = uRam0000000000a00600;
  _ZNSt3__15mutex4lockEv(uRam0000000000a00600);
  cRam0000000000a00610 = (char)uVar2;
  _ZNSt3__115recursive_mutex6unlockEv(unaff_R14);
  if ((char)uVar2 != '\0') {
    _ZNSt3__118condition_variable10notify_allEv(uRam0000000000a00608);
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_20) {
    return;
  }
code_r0x003cf594:
  func_0x0099bd00();
  lStack_80 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_90 = uRam0000000000a00600;
  uStack_88 = 1;
  uStack_78 = uVar5;
  uStack_70 = unaff_R14;
  _ZNSt3__15mutex4lockEv();
  uVar1 = uRam0000000000a00608;
  lStack_98 = _ZNSt3__16chrono12steady_clock3nowEv();
  lStack_98 = lStack_98 + 3000000000;
  do {
    if ((cRam0000000000a00611 == '\x01') && (cRam0000000000a00610 != '\0')) break;
    iVar3 = func_0x003d06b0(uVar1,&uStack_90,&lStack_98);
  } while (iVar3 != 1);
  if ((char)uStack_88 == '\x01') {
    _ZNSt3__115recursive_mutex6unlockEv(uStack_90);
  }
  if (*(long *)(in_FS_OFFSET + 0x28) != lStack_80) {
    func_0x0099bd00();
    free();
    return;
  }
  return;
}


