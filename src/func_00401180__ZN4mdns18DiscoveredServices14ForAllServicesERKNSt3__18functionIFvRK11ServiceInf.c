// Function: _ZN4mdns18DiscoveredServices14ForAllServicesERKNSt3__18functionIFvRK11ServiceInfoEEE
// Address: 00401180
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN4mdns18DiscoveredServices14ForAllServicesERKNSt3__18functionIFvRK11ServiceInfoEEE
               (long param_1,long param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  code *pcVar3;
  
  _ZNSt3__15mutex4lockEv();
  puVar1 = *(undefined8 **)(param_1 + 0x38);
  while( true ) {
    if (puVar1 == (undefined8 *)0x0) {
      pthread_mutex_unlock(param_1);
      return;
    }
    plVar2 = *(long **)(param_2 + 0x20);
    if (plVar2 == (long *)0x0) break;
    (**(code **)(*plVar2 + 0x30))(plVar2,puVar1 + 5);
    puVar1 = (undefined8 *)*puVar1;
  }
  func_0x00343f00();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


