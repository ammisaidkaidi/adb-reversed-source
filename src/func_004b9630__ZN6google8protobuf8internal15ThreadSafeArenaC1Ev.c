// Function: _ZN6google8protobuf8internal15ThreadSafeArenaC1Ev
// Address: 004b9630
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN6google8protobuf8internal15ThreadSafeArenaC1Ev(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *in_FS_OFFSET;
  
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[1] = 0;
  param_1[6] = (long)&
                     _ZZN6google8protobuf8internal11SerialArena31ArbitraryInternalPointerForInitEvE5dummy
  ;
  param_1[7] = (long)&UNK_001ff288;
  param_1[8] = (long)&
                     _ZZN6google8protobuf8internal11SerialArena31ArbitraryInternalPointerForInitEvE5dummy
  ;
  param_1[9] = (long)&
                     _ZZN6google8protobuf8internal11SerialArena31ArbitraryInternalPointerForInitEvE5dummy
  ;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = (long)param_1;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
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


