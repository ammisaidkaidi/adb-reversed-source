// Function: _ZN6google8protobuf8internal14ArenaStringPtr7DestroyEv
// Address: 005003b0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN6google8protobuf8internal14ArenaStringPtr7DestroyEv(ulong *param_1)

{
  ulong *puVar1;
  
  puVar1 = (ulong *)(*param_1 ^ 2);
  if (((ulong)puVar1 & 3) != 0 || puVar1 == (ulong *)0x0) {
    return;
  }
  if ((*puVar1 & 1) != 0) {
    _ZdaPvSt11align_val_t(puVar1[2],*puVar1 & 0xfffffffffffffffe);
  }
  free(puVar1,0x18);
  return;
}


