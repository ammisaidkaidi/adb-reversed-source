// Function: _ZN10atransport9ResetKeysEv
// Address: 003eab50
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN10atransport9ResetKeysEv(long param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  
  puVar5 = *(undefined8 **)(param_1 + 0x120);
  puVar7 = puVar5;
  if (puVar5 != *(undefined8 **)(param_1 + 0x128)) {
    uVar3 = *(ulong *)(param_1 + 0x138);
    lVar9 = (ulong)(((uint)uVar3 & 0xff) << 4) + puVar5[uVar3 >> 8];
    uVar8 = uVar3 + *(long *)(param_1 + 0x140);
    lVar10 = (ulong)(((uint)uVar8 & 0xff) << 4) + puVar5[uVar8 >> 8];
    puVar7 = *(undefined8 **)(param_1 + 0x128);
    if (lVar9 != lVar10) {
      plVar11 = puVar5 + (uVar3 >> 8);
      do {
        plVar4 = *(long **)(lVar9 + 8);
        if (plVar4 != (long *)0x0) {
          LOCK();
          plVar1 = plVar4 + 1;
          lVar2 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar2 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
            _ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
          }
        }
        lVar9 = lVar9 + 0x10;
        if (lVar9 - *plVar11 == 0x1000) {
          lVar9 = plVar11[1];
          plVar11 = plVar11 + 1;
        }
      } while (lVar9 != lVar10);
      puVar5 = *(undefined8 **)(param_1 + 0x120);
      puVar7 = *(undefined8 **)(param_1 + 0x128);
    }
  }
  *(undefined8 *)(param_1 + 0x140) = 0;
  lVar9 = (long)puVar7 - (long)puVar5;
  while (uVar3 = lVar9 >> 3, 2 < uVar3) {
    _ZdaPvSt11align_val_t(*puVar5,0x1000);
    puVar5 = (undefined8 *)(*(long *)(param_1 + 0x120) + 8);
    *(undefined8 **)(param_1 + 0x120) = puVar5;
    lVar9 = *(long *)(param_1 + 0x128) - (long)puVar5;
  }
  if (uVar3 == 1) {
    uVar6 = 0x80;
  }
  else {
    if (uVar3 != 2) {
      return;
    }
    uVar6 = 0x100;
  }
  *(undefined8 *)(param_1 + 0x138) = uVar6;
  return;
}


