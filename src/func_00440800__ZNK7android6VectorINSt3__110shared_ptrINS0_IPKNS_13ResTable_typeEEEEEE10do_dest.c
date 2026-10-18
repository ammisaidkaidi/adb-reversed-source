// Function: _ZNK7android6VectorINSt3__110shared_ptrINS0_IPKNS_13ResTable_typeEEEEEE10do_destroyEPvm
// Address: 00440800
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZNK7android6VectorINSt3__110shared_ptrINS0_IPKNS_13ResTable_typeEEEEEE10do_destroyEPvm
               (undefined8 param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  if (param_3 != 0) {
    plVar4 = (long *)(param_2 + 8);
    do {
      plVar3 = (long *)*plVar4;
      if (plVar3 != (long *)0x0) {
        LOCK();
        plVar1 = plVar3 + 1;
        lVar2 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
          _ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
        }
      }
      param_3 = param_3 + -1;
      plVar4 = plVar4 + 2;
    } while (param_3 != 0);
  }
  return;
}


