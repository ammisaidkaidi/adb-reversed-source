// Function: _ZN6google8protobuf8internal11SerialArena16FreeStringBlocksEPNS1_11StringBlockEm
// Address: 004b9510
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _ZN6google8protobuf8internal11SerialArena16FreeStringBlocksEPNS1_11StringBlockEm
                (undefined8 *param_1,long param_2)

{
  ushort uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  puVar2 = (undefined8 *)*param_1;
  uVar1 = *(ushort *)(param_1 + 1);
  for (uVar5 = param_2 + 0x10; uVar5 != uVar1; uVar5 = uVar5 + 0x18) {
    if ((*(byte *)((long)param_1 + uVar5) & 1) != 0) {
      _ZdaPvSt11align_val_t
                (*(undefined8 *)((long)param_1 + uVar5 + 0x10),
                 *(ulong *)((long)param_1 + uVar5) & 0xfffffffffffffffe);
    }
  }
  if (*(char *)((long)param_1 + 0xc) == '\x01') {
    uVar5 = (ulong)*(ushort *)(param_1 + 1);
    _ZdaPvSt11align_val_t(param_1,uVar5);
  }
  else {
    uVar5 = 0;
  }
  while (puVar2 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)*puVar2;
    uVar1 = *(ushort *)(puVar2 + 1);
    if ((ulong)uVar1 != 0x10) {
      uVar4 = 0x10;
      do {
        if ((*(byte *)((long)puVar2 + uVar4) & 1) != 0) {
          _ZdaPvSt11align_val_t
                    (*(undefined8 *)((long)puVar2 + uVar4 + 0x10),
                     *(ulong *)((long)puVar2 + uVar4) & 0xfffffffffffffffe);
        }
        uVar4 = uVar4 + 0x18;
      } while (uVar1 != uVar4);
    }
    if (*(char *)((long)puVar2 + 0xc) == '\x01') {
      uVar4 = (ulong)*(ushort *)(puVar2 + 1);
      _ZdaPvSt11align_val_t(puVar2,uVar4);
    }
    else {
      uVar4 = 0;
    }
    uVar5 = uVar5 + uVar4;
    puVar2 = puVar3;
  }
  return uVar5;
}


