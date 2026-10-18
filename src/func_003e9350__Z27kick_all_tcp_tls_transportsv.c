// Function: _Z27kick_all_tcp_tls_transportsv
// Address: 003e9350
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _Z27kick_all_tcp_tls_transportsv(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = uRam0000000000a006c8;
  _ZNSt3__115recursive_mutex4lockEv(uRam0000000000a006c8);
  lVar2 = lRam0000000000a006d8;
  for (lVar3 = *(long *)(lRam0000000000a006d8 + 8); lVar3 != lVar2; lVar3 = *(long *)(lVar3 + 8)) {
    if ((*(int *)(*(long *)(lVar3 + 0x10) + 0x24) == 1) &&
       (*(char *)(*(long *)(lVar3 + 0x10) + 0xa0) == '\x01')) {
      _ZN10atransport4KickEv();
    }
  }
  pthread_mutex_unlock(uVar1);
  return;
}


