// Function: _ZN6google8protobuf8internal16InternalMetadata21DeleteOutOfLineHelperINSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEEEvv
// Address: 003c9a00
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN6google8protobuf8internal16InternalMetadata21DeleteOutOfLineHelperINSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEEEvv
               (ulong *param_1)

{
  ulong uVar1;
  
  uVar1 = *param_1 & 0xfffffffffffffffe;
  if (uVar1 != 0) {
    if ((*(byte *)(uVar1 + 8) & 1) != 0) {
      _ZdaPvSt11align_val_t
                (*(undefined8 *)(uVar1 + 0x18),*(ulong *)(uVar1 + 8) & 0xfffffffffffffffe);
    }
    _ZdaPvSt11align_val_t(uVar1,0x20);
  }
  *param_1 = 0;
  return;
}


