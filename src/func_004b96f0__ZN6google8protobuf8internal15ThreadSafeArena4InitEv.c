// Function: _ZN6google8protobuf8internal15ThreadSafeArena4InitEv
// Address: 004b96f0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN6google8protobuf8internal15ThreadSafeArena4InitEv(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *in_FS_OFFSET;
  
  lVar2 = *in_FS_OFFSET;
  plVar1 = (long *)(lVar2 + -0x120);
  lVar3 = *plVar1;
  if ((char)lVar3 == '\0') {
    LOCK();
    UNLOCK();
    lVar3 = _ZN6google8protobuf8internal15ThreadSafeArena13lifecycle_id_E << 8;
    _ZN6google8protobuf8internal15ThreadSafeArena13lifecycle_id_E =
         _ZN6google8protobuf8internal15ThreadSafeArena13lifecycle_id_E + 1;
  }
  *plVar1 = lVar3 + 1;
  *param_1 = lVar3;
  param_1[2] = 0xa00988;
  param_1[0x14] = (long)plVar1;
  *(long **)(lVar2 + -0x110) = param_1 + 5;
  *(long *)(lVar2 + -0x118) = lVar3;
  return;
}


