// Function: _ZN7android11TypeVariant8iteratorppEv
// Address: 004911d0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN7android11TypeVariant8iteratorppEv(long *param_1)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  
  uVar4 = (int)param_1[1] + 1;
  *(uint *)(param_1 + 1) = uVar4;
  plVar2 = (long *)*param_1;
  if (*(uint *)(plVar2 + 1) <= uVar4) {
    uVar4 = *(uint *)(plVar2 + 1);
  }
  *(uint *)(param_1 + 1) = uVar4;
  if (*(char *)((long)plVar2 + 0xc) == '\x01') {
    lVar3 = *plVar2;
    uVar1 = *(uint *)((long)param_1 + 0xc);
    if ((uVar1 < *(uint *)(lVar3 + 0xc)) &&
       (*(ushort *)((ulong)*(ushort *)(lVar3 + 2) + lVar3 + (ulong)uVar1 * 4) < uVar4)) {
      *(uint *)((long)param_1 + 0xc) = uVar1 + 1;
    }
  }
  return;
}


