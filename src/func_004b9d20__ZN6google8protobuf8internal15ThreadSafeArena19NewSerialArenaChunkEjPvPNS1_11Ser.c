// Function: _ZN6google8protobuf8internal15ThreadSafeArena19NewSerialArenaChunkEjPvPNS1_11SerialArenaE
// Address: 004b9d20
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 *
_ZN6google8protobuf8internal15ThreadSafeArena19NewSerialArenaChunkEjPvPNS1_11SerialArenaE
          (ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  
  uVar1 = ((param_1 & 0xffffffff) * 0x10 + 0x10) * 4;
  iVar3 = 0x1000;
  if (uVar1 < 0x1000) {
    iVar3 = (int)uVar1;
  }
  uVar4 = iVar3 - 0x10U >> 4;
  lVar5 = (ulong)(uVar4 * 8 + 0x10) + (ulong)(uVar4 * 8);
  puVar2 = (undefined8 *)_Znwm(lVar5);
  uVar4 = (int)lVar5 - 0x10;
  uVar6 = uVar4 >> 4;
  *puVar2 = 0;
  *(uint *)(puVar2 + 1) = uVar6;
  *(undefined4 *)((long)puVar2 + 0xc) = 1;
  puVar2[2] = param_2;
  if (uVar4 < 0x20) {
    puVar2[(ulong)uVar6 + 2] = param_3;
  }
  else {
    lVar5 = (ulong)(uVar6 - 1) << 3;
    func_0x0099bdb0(puVar2 + 3,0,lVar5);
    uVar1 = (ulong)(uVar6 * 8 + 0x10);
    *(undefined8 *)((long)puVar2 + uVar1) = param_3;
    func_0x0099bdb0((long)puVar2 + uVar1 + 8,0,lVar5);
  }
  return puVar2;
}


