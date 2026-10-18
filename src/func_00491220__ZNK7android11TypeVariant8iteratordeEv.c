// Function: _ZNK7android11TypeVariant8iteratordeEv
// Address: 00491220
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ushort * _ZNK7android11TypeVariant8iteratordeEv(long *param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  sbyte sVar6;
  ushort uVar7;
  ulong uVar8;
  undefined *puVar9;
  ushort *puVar10;
  long lVar11;
  ulong uVar12;
  
  uVar2 = *(uint *)(param_1 + 1);
  plVar4 = (long *)*param_1;
  if (*(uint *)(plVar4 + 1) <= uVar2) {
    return (ushort *)0x0;
  }
  lVar5 = *plVar4;
  uVar8 = (ulong)*(uint *)(lVar5 + 4) + lVar5;
  lVar11 = (ulong)*(ushort *)(lVar5 + 2) + lVar5;
  bVar1 = *(byte *)(lVar5 + 9);
  sVar6 = 2;
  if ((bVar1 & 1) == 0) {
    sVar6 = ((bVar1 & 2) == 0) + 1;
  }
  if (uVar8 < ((ulong)*(uint *)(lVar5 + 0xc) << sVar6) + lVar11) {
    __android_log_print(6,0,&UNK_0016efd0);
    return (ushort *)0x0;
  }
  if (*(char *)((long)plVar4 + 0xc) == '\x01') {
    uVar3 = *(uint *)((long)param_1 + 0xc);
    if (*(uint *)(lVar5 + 0xc) <= uVar3) {
      return (ushort *)0x0;
    }
    if (uVar2 != *(ushort *)(lVar11 + (ulong)uVar3 * 4)) {
      return (ushort *)0x0;
    }
    uVar7 = *(ushort *)(lVar11 + 2 + (ulong)uVar3 * 4);
  }
  else {
    if ((bVar1 & 2) == 0) {
      uVar3 = *(uint *)(lVar11 + (ulong)uVar2 * 4);
      uVar12 = (ulong)uVar3;
      if (uVar3 == 0xffffffff) {
        return (ushort *)0x0;
      }
      if ((uVar3 & 3) != 0) {
        __android_log_print(6,0,&UNK_0017a491,uVar2);
        return (ushort *)0x0;
      }
      goto code_r0x00491300;
    }
    uVar7 = *(ushort *)(lVar11 + (ulong)uVar2 * 2);
    if (uVar7 == 0xffff) {
      return (ushort *)0x0;
    }
  }
  uVar12 = (ulong)uVar7 << 2;
code_r0x00491300:
  puVar10 = (ushort *)((ulong)*(uint *)(lVar5 + 0x10) + lVar5 + uVar12);
  if ((ushort *)(uVar8 - 8) < puVar10) {
    puVar9 = &UNK_0015cc03;
  }
  else {
    uVar7 = 8;
    if ((puVar10[1] & 8) == 0) {
      uVar7 = *puVar10;
    }
    if ((long)puVar10 + (ulong)uVar7 <= uVar8) {
      if (uVar7 < 8) {
        __android_log_print(6,0,&UNK_00166364,uVar2);
        return (ushort *)0x0;
      }
      return puVar10;
    }
    puVar9 = &UNK_00166331;
  }
  __android_log_print(6,0,puVar9,uVar2);
  return (ushort *)0x0;
}


