// Function: _ZNK7android6VectorINSt3__110shared_ptrINS0_IPKNS_13ResTable_typeEEEEEE7do_copyEPvPKvm
// Address: 00440870
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZNK7android6VectorINSt3__110shared_ptrINS0_IPKNS_13ResTable_typeEEEEEE7do_copyEPvPKvm
               (undefined8 param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  if (param_4 != 0) {
    uVar2 = param_4;
    if ((param_4 & 1) != 0) {
      *param_2 = *param_3;
      lVar3 = param_3[1];
      param_2[1] = lVar3;
      if (lVar3 != 0) {
        LOCK();
        *(long *)(lVar3 + 8) = *(long *)(lVar3 + 8) + 1;
        UNLOCK();
      }
      param_2 = param_2 + 2;
      param_3 = param_3 + 2;
      uVar2 = param_4 - 1;
    }
    if (param_4 != 1) {
      lVar3 = 0;
      do {
        *(undefined8 *)((long)param_2 + lVar3) = *(undefined8 *)((long)param_3 + lVar3);
        lVar1 = *(long *)((long)param_3 + lVar3 + 8);
        *(long *)((long)param_2 + lVar3 + 8) = lVar1;
        if (lVar1 != 0) {
          LOCK();
          *(long *)(lVar1 + 8) = *(long *)(lVar1 + 8) + 1;
          UNLOCK();
        }
        *(undefined8 *)((long)param_2 + lVar3 + 0x10) =
             *(undefined8 *)((long)param_3 + lVar3 + 0x10);
        lVar1 = *(long *)((long)param_3 + lVar3 + 0x18);
        *(long *)((long)param_2 + lVar3 + 0x18) = lVar1;
        if (lVar1 != 0) {
          LOCK();
          *(long *)(lVar1 + 8) = *(long *)(lVar1 + 8) + 1;
          UNLOCK();
        }
        uVar2 = uVar2 - 2;
        lVar3 = lVar3 + 0x20;
      } while (uVar2 != 0);
    }
  }
  return;
}


