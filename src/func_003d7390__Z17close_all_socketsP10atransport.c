// Function: _Z17close_all_socketsP10atransport
// Address: 003d7390
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _Z17close_all_socketsP10atransport(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  
  uVar2 = uRam0000000000a00690;
  _ZNSt3__115recursive_mutex4lockEv(uRam0000000000a00690);
  do {
    plVar3 = (long *)*puRam0000000000a00698;
    while( true ) {
      if (plVar3 == (long *)puRam0000000000a00698[1]) {
        pthread_mutex_unlock(uVar2);
        return;
      }
      lVar1 = *plVar3;
      if ((*(long *)(lVar1 + 0x38) == param_1) ||
         ((*(long *)(lVar1 + 0x10) != 0 && (*(long *)(*(long *)(lVar1 + 0x10) + 0x38) == param_1))))
      break;
      plVar3 = plVar3 + 1;
    }
    (**(code **)(lVar1 + 0x30))();
  } while( true );
}


