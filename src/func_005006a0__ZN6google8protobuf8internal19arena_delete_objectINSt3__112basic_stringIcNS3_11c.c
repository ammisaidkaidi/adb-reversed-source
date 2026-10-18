// Function: _ZN6google8protobuf8internal19arena_delete_objectINSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEEEvPv
// Address: 005006a0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN6google8protobuf8internal19arena_delete_objectINSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEEEvPv
               (ulong *param_1)

{
  if (param_1 != (ulong *)0x0) {
    if ((*param_1 & 1) != 0) {
      _ZdaPvSt11align_val_t(param_1[2],*param_1 & 0xfffffffffffffffe);
    }
    free(param_1,0x18);
    return;
  }
  return;
}


