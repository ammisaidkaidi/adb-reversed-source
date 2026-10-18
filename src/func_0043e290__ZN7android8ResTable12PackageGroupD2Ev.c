// Function: _ZN7android8ResTable12PackageGroupD2Ev
// Address: 0043e290
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _ZN7android8ResTable12PackageGroupD2Ev(long *param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  uint *puVar7;
  long lVar8;
  long lVar9;
  
  _ZN7android8ResTable12PackageGroup13clearBagCacheEv();
  lVar6 = 0;
  do {
    lVar4 = _ZN7android15ByteBucketArrayINS_6VectorIPNS_8ResTable4TypeEEEE10editItemAtEm
                      (param_1 + 8);
    lVar8 = *(long *)(lVar4 + 0x10);
    if (lVar8 != 0) {
      lVar9 = 0;
      do {
        lVar2 = *(long *)(*(long *)(lVar4 + 8) + lVar9 * 8);
        if (**(long **)(lVar2 + 8) == *param_1) {
          *(undefined8 *)(lVar2 + 0x30) = 0x99fa00;
          _ZN7android10VectorImpl13finish_vectorEv(lVar2 + 0x30);
          _ZN7android16SortedVectorImplD1Ev(lVar2 + 0x30);
          _ZdaPvSt11align_val_t(lVar2,0x58);
        }
        lVar9 = lVar9 + 1;
      } while (lVar8 != lVar9);
    }
    _ZN7android10VectorImpl5clearEv(lVar4);
    lVar6 = lVar6 + 1;
  } while (lVar6 != 0x100);
  lVar6 = param_1[5];
  if (lVar6 != 0) {
    lVar8 = 0;
    do {
      plVar3 = *(long **)(param_1[4] + lVar8 * 8);
      if (*plVar3 == *param_1) {
        _ZN7android13ResStringPoolD1Ev(plVar3 + 0x29);
        _ZN7android13ResStringPoolD1Ev(plVar3 + 3);
        _ZdaPvSt11align_val_t(plVar3);
      }
      lVar8 = lVar8 + 1;
    } while (lVar6 != lVar8);
  }
  param_1[0x29] = 0x99f858;
  if (param_1[0x50] != 0) {
    param_1[0x51] = param_1[0x50];
    _ZdaPvSt11align_val_t();
  }
  param_1[0x4b] = 0x99faa8;
  _ZN7android10VectorImpl13finish_vectorEv(param_1 + 0x4b);
  _ZN7android16SortedVectorImplD1Ev(param_1 + 0x4b);
  lVar6 = 0;
  do {
    lVar8 = param_1[lVar6 + 0x19];
    if (lVar8 != 0) {
      lVar4 = *(long *)(lVar8 + -8) * 0x30;
      if (*(long *)(lVar8 + -8) != 0) {
        do {
          lVar9 = lVar8 + -0x28 + lVar4;
          *(undefined8 *)(lVar8 + -0x28 + lVar4) = 0x99fb38;
          _ZN7android10VectorImpl13finish_vectorEv(lVar9);
          _ZN7android16SortedVectorImplD1Ev(lVar9);
          lVar4 = lVar4 + -0x30;
        } while (lVar4 != 0);
      }
      _ZdaPvSt11align_val_tRKSt9nothrow_t(lVar8 + -8);
    }
    lVar6 = lVar6 + 1;
  } while (lVar6 != 0x10);
  lVar6 = 0;
  do {
    lVar8 = (param_1 + 8)[lVar6];
    if (lVar8 != 0) {
      lVar4 = *(long *)(lVar8 + -8) * 0x28;
      if (*(long *)(lVar8 + -8) != 0) {
        do {
          lVar9 = lVar8 + -0x28 + lVar4;
          *(undefined8 *)(lVar8 + -0x28 + lVar4) = 0x99fa00;
          _ZN7android10VectorImpl13finish_vectorEv(lVar9);
          _ZN7android16SortedVectorImplD1Ev(lVar9);
          lVar4 = lVar4 + -0x28;
        } while (lVar4 != 0);
      }
      _ZdaPvSt11align_val_tRKSt9nothrow_t(lVar8 + -8);
    }
    lVar6 = lVar6 + 1;
  } while (lVar6 != 0x10);
  param_1[3] = 0x99fa00;
  _ZN7android10VectorImpl13finish_vectorEv(param_1 + 3);
  uVar5 = _ZN7android16SortedVectorImplD1Ev(param_1 + 3);
  if (*(int *)(param_1[1] + -4) < 0) {
    puVar7 = (uint *)(param_1[1] + -0x18);
    if (*puVar7 == 1) {
      *puVar7 = 0;
    }
    else {
      LOCK();
      uVar1 = *puVar7;
      *puVar7 = *puVar7 - 1;
      UNLOCK();
      if (uVar1 != 1) {
        return (ulong)uVar1;
      }
    }
    func_0x0099c1f0();
    return 1;
  }
  return uVar5;
}


