// Function: _ZNK7android6VectorINSt3__110shared_ptrINS0_IPKNS_13ResTable_typeEEEEEE8do_splatEPvPKvm
// Address: 00440910
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZNK7android6VectorINSt3__110shared_ptrINS0_IPKNS_13ResTable_typeEEEEEE8do_splatEPvPKvm
               (undefined8 param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  
  if (param_4 != 0) {
    uVar2 = param_4;
    if ((param_4 & 1) != 0) {
      *param_2 = *param_3;
      lVar1 = param_3[1];
      param_2[1] = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(long *)(lVar1 + 8) = *(long *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      param_2 = param_2 + 2;
      uVar2 = param_4 - 1;
    }
    if (param_4 != 1) {
      do {
        *param_2 = *param_3;
        lVar1 = param_3[1];
        param_2[1] = lVar1;
        if (lVar1 != 0) {
          LOCK();
          *(long *)(lVar1 + 8) = *(long *)(lVar1 + 8) + 1;
          UNLOCK();
        }
        param_2[2] = *param_3;
        lVar1 = param_3[1];
        param_2[3] = lVar1;
        if (lVar1 != 0) {
          LOCK();
          *(long *)(lVar1 + 8) = *(long *)(lVar1 + 8) + 1;
          UNLOCK();
        }
        uVar2 = uVar2 - 2;
        param_2 = param_2 + 4;
      } while (uVar2 != 0);
    }
  }
  return;
}


