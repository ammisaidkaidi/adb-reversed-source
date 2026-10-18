// Function: _ZN3com7android10fastdeploy8APKEntryD1Ev
// Address: 003c8de0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN3com7android10fastdeploy8APKEntryD1Ev(long param_1)

{
  ulong *puVar1;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    _ZN6google8protobuf8internal16InternalMetadata21DeleteOutOfLineHelperINSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEEEvv
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


