// Function: _ZN7android8ResTable12PackageGroup13clearBagCacheEv
// Address: 0043e950
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN7android8ResTable12PackageGroup13clearBagCacheEv(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined1 *puVar5;
  long lVar6;
  ulong uVar7;
  
  uVar7 = 0;
  do {
    lVar1 = *(long *)(param_1 + 0x40 + (uVar7 >> 4) * 8);
    if (lVar1 == 0) {
      puVar5 = _ZN7android15ByteBucketArrayINS_6VectorIPNS_8ResTable4TypeEEEE8default_E;
      lVar1 = _ZN7android15ByteBucketArrayINS_6VectorIPNS_8ResTable4TypeEEEE8default_E._16_8_;
    }
    else {
      puVar5 = (undefined1 *)(lVar1 + (ulong)((uint)uVar7 & 0xf) * 0x28);
      lVar1 = *(long *)(puVar5 + 0x10);
    }
    if (lVar1 != 0) {
      plVar4 = (long *)_ZN7android15ByteBucketArrayINS_8ResTable14TypeCacheEntryEE10editItemAtEm
                                 (param_1 + 200,uVar7);
      _ZN7android10VectorImpl5clearEv(plVar4 + 1);
      lVar1 = *plVar4;
      if (lVar1 != 0) {
        lVar2 = *(long *)(**(long **)(puVar5 + 8) + 0x10);
        if (lVar2 != 0) {
          lVar6 = 0;
          do {
            lVar3 = *(long *)(lVar1 + lVar6 * 8);
            if ((lVar3 != 0) && (lVar3 != 0xffffffff)) {
              func_0x0099c1f0();
            }
            lVar6 = lVar6 + 1;
          } while (lVar2 != lVar6);
        }
        func_0x0099c1f0(lVar1);
        *plVar4 = 0;
      }
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 != 0x100);
  return;
}


