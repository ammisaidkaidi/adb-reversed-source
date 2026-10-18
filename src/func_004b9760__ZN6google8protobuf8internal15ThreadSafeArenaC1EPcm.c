// Function: _ZN6google8protobuf8internal15ThreadSafeArenaC1EPcm
// Address: 004b9760
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN6google8protobuf8internal15ThreadSafeArenaC1EPcm
               (long *param_1,undefined8 *param_2,ulong param_3)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *in_FS_OFFSET;
  
  param_1[4] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_3 < 0x11 || param_2 == (undefined8 *)0x0) {
    param_2 = (undefined8 *)&UNK_001ff288;
  }
  else {
    param_1[1] = 1;
    *param_2 = 0;
    param_2[1] = param_3;
  }
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[6] = (long)&
                     _ZZN6google8protobuf8internal11SerialArena31ArbitraryInternalPointerForInitEvE5dummy
  ;
  param_1[7] = (long)param_2;
  param_1[8] = (long)&
                     _ZZN6google8protobuf8internal11SerialArena31ArbitraryInternalPointerForInitEvE5dummy
  ;
  param_1[9] = (long)&
                     _ZZN6google8protobuf8internal11SerialArena31ArbitraryInternalPointerForInitEvE5dummy
  ;
  param_1[10] = param_2[1];
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = (long)param_1;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  uVar2 = param_2[1];
  if (uVar2 != 0) {
    param_1[8] = (long)(param_2 + 2);
    param_1[6] = (long)(param_2 + 2);
    param_1[9] = (uVar2 & 0xfffffffffffffff8) + (long)param_2;
  }
  lVar3 = *in_FS_OFFSET;
  plVar1 = (long *)(lVar3 + -0x120);
  lVar4 = *plVar1;
  if ((char)lVar4 == '\0') {
    LOCK();
    UNLOCK();
    lVar4 = _ZN6google8protobuf8internal15ThreadSafeArena13lifecycle_id_E << 8;
    _ZN6google8protobuf8internal15ThreadSafeArena13lifecycle_id_E =
         _ZN6google8protobuf8internal15ThreadSafeArena13lifecycle_id_E + 1;
  }
  *plVar1 = lVar4 + 1;
  *param_1 = lVar4;
  param_1[2] = 0xa00988;
  param_1[0x14] = (long)plVar1;
  *(long **)(lVar3 + -0x110) = param_1 + 5;
  *(long *)(lVar3 + -0x118) = lVar4;
  return;
}


