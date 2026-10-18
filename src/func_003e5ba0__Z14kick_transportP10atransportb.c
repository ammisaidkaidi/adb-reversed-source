// Function: _Z14kick_transportP10atransportb
// Address: 003e5ba0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _Z14kick_transportP10atransportb(long param_1,char param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = uRam0000000000a006c8;
  _ZNSt3__115recursive_mutex4lockEv(uRam0000000000a006c8);
  lVar1 = *(long *)(lRam0000000000a006d8 + 8);
  do {
    if (lVar1 == lRam0000000000a006d8) {
code_r0x003e5bdf:
      _ZNSt3__118condition_variable10notify_oneEv(lRam0000000000a006e0 + 0x38);
      pthread_mutex_unlock(uVar2);
      return;
    }
    if (*(long *)(lVar1 + 0x10) == param_1) {
      if (lVar1 != lRam0000000000a006d8) {
        if (param_2 == '\0') {
          _ZN10atransport4KickEv(param_1);
        }
        else {
          _ZN10atransport5ResetEv();
        }
      }
      goto code_r0x003e5bdf;
    }
    lVar1 = *(long *)(lVar1 + 8);
  } while( true );
}


