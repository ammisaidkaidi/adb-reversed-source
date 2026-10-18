// Function: _ZN3adb5proto8HostInfoD1Ev
// Address: 00423540
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN3adb5proto8HostInfoD1Ev(long param_1)

{
  ulong *puVar1;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    _ZN6google8protobuf8internal16InternalMetadata21DeleteOutOfLineHelperINS0_15UnknownFieldSetEEEvv
              (param_1 + 8);
  }
  puVar1 = (ulong *)(*(ulong *)(param_1 + 0x18) ^ 2);
  if (((ulong)puVar1 & 3) != 0 || puVar1 == (ulong *)0x0) {
    return;
  }
  if ((*puVar1 & 1) != 0) {
    _ZdaPvSt11align_val_t(puVar1[2],*puVar1 & 0xfffffffffffffffe);
  }
  free(puVar1,0x18);
  return;
}


