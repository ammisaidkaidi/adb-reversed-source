// Function: _ZN6google8protobuf8internal15ThreadSafeArena18GetNextLifeCycleIdEv
// Address: 004b9ce0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long _ZN6google8protobuf8internal15ThreadSafeArena18GetNextLifeCycleIdEv(void)

{
  long lVar1;
  long *in_FS_OFFSET;
  
  lVar1 = *(long *)(*in_FS_OFFSET + -0x120);
  if ((char)lVar1 == '\0') {
    LOCK();
    UNLOCK();
    lVar1 = _ZN6google8protobuf8internal15ThreadSafeArena13lifecycle_id_E << 8;
    _ZN6google8protobuf8internal15ThreadSafeArena13lifecycle_id_E =
         _ZN6google8protobuf8internal15ThreadSafeArena13lifecycle_id_E + 1;
  }
  *(long *)(*in_FS_OFFSET + -0x120) = lVar1 + 1;
  return lVar1;
}


