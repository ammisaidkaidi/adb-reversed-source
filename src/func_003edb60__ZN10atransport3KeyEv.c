// Function: _ZN10atransport3KeyEv
// Address: 003edb60
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN10atransport3KeyEv(undefined8 *param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  if (*(long *)(param_2 + 0x140) != 0) {
    lVar3 = *(long *)(*(long *)(param_2 + 0x120) + (*(ulong *)(param_2 + 0x138) >> 8) * 8);
    uVar6 = (ulong)(((uint)*(ulong *)(param_2 + 0x138) & 0xff) << 4);
    lVar4 = *(long *)(lVar3 + 8 + uVar6);
    puVar2 = (undefined8 *)(lVar3 + uVar6);
    uVar5 = puVar2[1];
    *param_1 = *puVar2;
    param_1[1] = uVar5;
    if (lVar4 != 0) {
      LOCK();
      plVar1 = (long *)(lVar4 + 8);
      *plVar1 = *plVar1 + 1;
      UNLOCK();
    }
    return;
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


