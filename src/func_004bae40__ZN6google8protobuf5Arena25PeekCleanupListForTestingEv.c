// Function: _ZN6google8protobuf5Arena25PeekCleanupListForTestingEv
// Address: 004bae40
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 _ZN6google8protobuf5Arena25PeekCleanupListForTestingEv(undefined8 param_1,long *param_2)

{
  long lVar1;
  long *in_FS_OFFSET;
  
  if (*(long *)(*in_FS_OFFSET + -0x118) == *param_2) {
    lVar1 = *(long *)(*in_FS_OFFSET + -0x110);
  }
  else {
    lVar1 = _ZN6google8protobuf8internal15ThreadSafeArena22GetSerialArenaFallbackEm(param_2,0x10);
  }
  _ZN6google8protobuf8internal7cleanup9ChunkList14PeekForTestingEv(param_1,lVar1 + 0x50);
  return param_1;
}


