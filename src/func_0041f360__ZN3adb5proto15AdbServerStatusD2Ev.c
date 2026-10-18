// Function: _ZN3adb5proto15AdbServerStatusD2Ev
// Address: 0041f360
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN3adb5proto15AdbServerStatusD2Ev(long param_1)

{
  ulong *puVar1;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    _ZN6google8protobuf8internal16InternalMetadata21DeleteOutOfLineHelperINS0_15UnknownFieldSetEEEvv
              (param_1 + 8);
  }
  _ZN6google8protobuf8internal14ArenaStringPtr7DestroyEv(param_1 + 0x18);
  _ZN6google8protobuf8internal14ArenaStringPtr7DestroyEv(param_1 + 0x20);
  _ZN6google8protobuf8internal14ArenaStringPtr7DestroyEv(param_1 + 0x28);
  _ZN6google8protobuf8internal14ArenaStringPtr7DestroyEv(param_1 + 0x30);
  _ZN6google8protobuf8internal14ArenaStringPtr7DestroyEv(param_1 + 0x38);
  _ZN6google8protobuf8internal14ArenaStringPtr7DestroyEv(param_1 + 0x40);
  _ZN6google8protobuf8internal14ArenaStringPtr7DestroyEv(param_1 + 0x48);
  puVar1 = (ulong *)(*(ulong *)(param_1 + 0x50) ^ 2);
  if (((ulong)puVar1 & 3) != 0 || puVar1 == (ulong *)0x0) {
    return;
  }
  if ((*puVar1 & 1) != 0) {
    _ZdaPvSt11align_val_t(puVar1[2],*puVar1 & 0xfffffffffffffffe);
  }
  free(puVar1,0x18);
  return;
}


