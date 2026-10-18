// Function: _Z20kick_all_tcp_devicesv
// Address: 003ecc30
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _Z20kick_all_tcp_devicesv(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = uRam0000000000a006c8;
  _ZNSt3__115recursive_mutex4lockEv(uRam0000000000a006c8);
  lVar2 = lRam0000000000a006d8;
  for (lVar3 = *(long *)(lRam0000000000a006d8 + 8); lVar3 != lVar2; lVar3 = *(long *)(lVar3 + 8)) {
    if (*(int *)(*(long *)(lVar3 + 0x10) + 0x24) == 1) {
      _ZN10atransport4KickEv();
    }
  }
  _ZNSt3__118condition_variable10notify_oneEv(lRam0000000000a006e0 + 0x38);
  pthread_mutex_unlock(uVar1);
  return;
}


