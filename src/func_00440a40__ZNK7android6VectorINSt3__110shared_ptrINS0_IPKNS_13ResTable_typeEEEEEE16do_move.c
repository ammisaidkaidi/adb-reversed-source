// Function: _ZNK7android6VectorINSt3__110shared_ptrINS0_IPKNS_13ResTable_typeEEEEEE16do_move_backwardEPvPKvm
// Address: 00440a40
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZNK7android6VectorINSt3__110shared_ptrINS0_IPKNS_13ResTable_typeEEEEEE16do_move_backwardEPvPKvm
               (undefined8 param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  if (param_4 != 0) {
    lVar4 = 0;
    do {
      *(undefined8 *)(param_2 + lVar4) = *(undefined8 *)(param_3 + lVar4);
      lVar2 = *(long *)(param_3 + 8 + lVar4);
      *(long *)(param_2 + 8 + lVar4) = lVar2;
      if (lVar2 != 0) {
        LOCK();
        *(long *)(lVar2 + 8) = *(long *)(lVar2 + 8) + 1;
        UNLOCK();
        plVar3 = *(long **)(param_3 + 8 + lVar4);
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
      }
      param_4 = param_4 + -1;
      lVar4 = lVar4 + 0x10;
    } while (param_4 != 0);
  }
  return;
}


