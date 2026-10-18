// Function: _ZNK6google8protobuf8internal11SerialArena9SpaceUsedEv
// Address: 004b94c0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long _ZNK6google8protobuf8internal11SerialArena9SpaceUsedEv(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  if (*(long *)(param_1 + 0x38) == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = ((ulong)*(ushort *)(*(long *)(param_1 + 0x38) + 8) - *(long *)(param_1 + 0x48)) + -0x10;
  }
  uVar1 = *(ulong *)(*(long *)(param_1 + 0x10) + 8);
  if (uVar1 != 0) {
    uVar3 = (*(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10)) - 0x10;
    if (uVar1 < uVar3) {
      uVar3 = uVar1;
    }
    lVar2 = *(long *)(param_1 + 0x70) + lVar2 + uVar3;
  }
  return lVar2;
}


